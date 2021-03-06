module.exports = exports = require('bindings')('qm.node');

var fs = require('bindings')('fs.node');

var nodefs = require('fs');

exports.Store.prototype.addTrigger = function (trigger) {
    // this == store instance: print //console.log(util.inspect(this, { colors: true })); 
    // name is automatically generated
    // saveJson isn't needed    
    var Callbacks = {
        onAdd: trigger.onAdd,
        saveJson: function (limit) { return {}; }
    };
    if (trigger.onUpdate != undefined) Callbacks["onUpdate"] = trigger.onUpdate;
    if (trigger.onDelete != undefined) Callbacks["onDelete"] = trigger.onDelete;
    var streamAggr = new exports.StreamAggr(this.base, Callbacks, this.name);
}

exports.Store.prototype.addStreamAggr = function (params) {
    // this == store instance: print //console.log(util.inspect(this, { colors: true })); 
    var streamAggr = new exports.StreamAggr(this.base, params, this.name);
}

// loading data into stores
exports.load = function () {
    var _obj = {};

    //#- `num = qm.load.jsonFileLimit(store, fileName, limit)` -- load file `fileName` 
    //#   line by line, parsing each line as JSON and adding it as record to `store`.
    //#   When `limit != -1` only first first `limit` lines are loaded. Returns `num`:
    //#   the number of lines loaded.
    _obj.jsonFileLimit = function (store, file, limit) {
        var fin = fs.openRead(file);
        var count = 0;
        while (!fin.eof) {
            var line = fin.readLine();
            if (line == "") { continue; }
            try {
                var rec = JSON.parse(line);
                store.add(rec);
                // count, GC and report
                count++;
                if (count % 1000 == 0) {
                    store.base.gc();
                }
                if (count % 10000 == 0) {
                    console.log("  " + count + " records");
                }
                if (count == limit) {
                    break;
                }
            } catch (err) {
                console.log("Error parsing [" + line + "]: " + err)
            }
        }
        console.log("Loaded " + count + " records to " + store.name);
        return count;
    }

    //#- `num = qm.load.jsonFile(store, fileName)` -- load file `fileName` line by line, 
    //#   parsing each line as JSON and adding it as record to `store`. Returns `num`:
    //#   the number of lines loaded.
    _obj.jsonFile = function (store, file) {
        return _obj.jsonFileLimit(store, file, -1);
    }

    return _obj;
}();

exports.delLock = function () {
    if (nodefs.existsSync('lock')) {
        try {
            nodefs.unlinkSync('lock');
        } catch (e) {
            console.log(e);
        }
    }
}

exports.rmDir = function (dirPath) {
    try { var files = nodefs.readdirSync(dirPath); }
    catch (e) { return; }
    if (files.length > 0)
        for (var i = 0; i < files.length; i++) {
            var filePath = dirPath + '/' + files[i];
            if (nodefs.statSync(filePath).isFile())
                nodefs.unlinkSync(filePath);
            else
                rmDir(filePath);
        }
    nodefs.rmdirSync(dirPath);
};

//#- `qm.FeatureSpace.getSpFeatVecCols(spVec)` -- Return array of feature names based on feature space `fsp` where the elements of a sparse feature vector `spVec` are non-zero.
exports.FeatureSpace.prototype.getSpFeatVecCols = function (spVec) {
    // get index and value vectors
    var valVec = spVec.valVec();
    var idxVec = spVec.idxVec();
    var cols = [];
    for (var elN = 0; elN < idxVec.length; elN++) {
        cols.push(this.getFtr(idxVec[elN]));
    }
    return cols;
}