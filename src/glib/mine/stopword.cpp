/**
 * GLib - General C++ Library
 * 
 * Copyright (C) 2014 Jozef Stefan Institut d.o.o.
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License, version 3,
 * as published by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 * 
 */

/////////////////////////////////////////////////
// Stop-Word-Set
void TSwSet::Add(const TStr& WordStr){
  if (!WordStr.Empty()){
    //IAssert(!SwStrH.IsKey(WordStr));
    SwStrH.AddKey(WordStr);
  }
}

void TSwSet::MultiAdd(const TStr& Str){
  TStrV StrV; Str.SplitOnAllCh('.', StrV);
  for (int StrN=0; StrN<StrV.Len(); StrN++){Add(StrV[StrN]);}
}

void TSwSet::AddEn425(){
  MultiAdd(
   "A.ABOUT.ABOVE.ACROSS.AFTER."
   "AGAIN.AGAINST.ALL.ALMOST.ALONE."
   "ALONG.ALREADY.ALSO.ALTHOUGH.ALWAYS."
   "AMONG.AN.AND.ANOTHER.ANY."
   "ANYBODY.ANYONE.ANYTHING.ANYWHERE.ARE."
   "AREA.AREAS.AROUND.AS.ASK."
   "ASKED.ASKING.ASKS.AT.AWAY."
   "B.BACK.BACKED.BACKING.BACKS."
   "BE.BECAUSE.BECAME.BECOME.BECOMES."
   "BEEN.BEFORE.BEGAN.BEHIND.BEING."
   "BEINGS.BEST.BETTER.BETWEEN.BIG."
   "BOTH.BUT.BY.C.CAME."
   "CAN.CANNOT.CASE.CASES.CERTAIN."
   "CERTAINLY.CLEAR.CLEARLY.COME.COULD."
   "D.DID.DIFFER.DIFFERENT.DIFFERENTLY."
   "DO.DON.DOES.DOESN.DONE.DOWN.DOWNED."
   "DOWNING.DOWNS.DURING.E.EACH."
   "EARLY.EITHER.END.ENDED.ENDING."
   "ENDS.ENOUGH.EVEN.EVENLY.EVER."
   "EVERY.EVERYBODY.EVERYONE.EVERYTHING.EVERYWHERE."
   "F.FACE.FACES.FACT.FACTS."
   "FAR.FELT.FEW.FIND.FINDS."
   "FIRST.FOR.FOUR.FROM.FULL."
   "FULLY.FURTHER.FURTHERED.FURTHERING.FURTHERS."
   "G.GAVE.GENERAL.GENERALLY.GET."
   "GETS.GIVE.GIVEN.GIVES.GO."
   "GOING.GOOD.GOODS.GOT.GREAT."
   "GREATER.GREATEST.GROUP.GROUPED.GROUPING."
   "GROUPS.H.HAD.HAS.HAVE."
   "HAVING.HE.HER.HERSELF.HERE."
   "HIGH.HIGHER.HIGHEST.HIM.HIMSELF."
   "HIS.HOW.HOWEVER.I.IF."
   "IMPORTANT.IN.INTEREST.INTERESTED.INTERESTING."
   "INTERESTS.INTO.IS.IT.ITS."
   "ITSELF.J.JUST.K.KEEP."
   "KEEPS.KIND.KNEW.KNOW.KNOWN."
   "KNOWS.L.LARGE.LARGELY.LAST."
   "LATER.LATEST.LEAST.LESS.LET."
   "LETS.LIKE.LIKELY.LONG.LONGER."
   "LONGEST.M.MADE.MAKE.MAKING."
   "MAN.MANY.MAY.ME.MEMBER."
   "MEMBERS.MEN.MIGHT.MORE.MOST."
   "MOSTLY.MR.MRS.MUCH.MUST."
   "MY.MYSELF.N.NECESSARY.NEED."
   "NEEDED.NEEDING.NEEDS.NEVER.NEW."
   "NEWER.NEWEST.NEXT.NO.NON."
   "NOT.NOBODY.NOONE.NOTHING.NOW."
   "NOWHERE.NUMBER.NUMBERED.NUMBERING.NUMBERS."
   "O.OF.OFF.OFTEN.OLD."
   "OLDER.OLDEST.ON.ONCE.ONE."
   "ONLY.OPEN.OPENED.OPENING.OPENS."
   "OR.ORDER.ORDERED.ORDERING.ORDERS."
   "OTHER.OTHERS.OUR.OUT.OVER."
   "P.PART.PARTED.PARTING.PARTS."
   "PER.PERHAPS.PLACE.PLACES.POINT."
   "POINTED.POINTING.POINTS.POSSIBLE.PRESENT."
   "PRESENTED.PRESENTING.PRESENTS.PROBLEM.PROBLEMS."
   "PUT.PUTS.Q.QUITE.R."
   "RATHER.REALLY.RIGHT.ROOM.ROOMS."
   "S.SAID.SAME.SAW.SAY."
   "SAYS.SECOND.SECONDS.SEE.SEEM."
   "SEEMED.SEEMING.SEEMS.SEES.SEVERAL."
   "SHALL.SHE.SHOULD.SHOW.SHOWED."
   "SHOWING.SHOWS.SIDE.SIDES.SINCE."
   "SMALL.SMALLER.SMALLEST.SO.SOME."
   "SOMEBODY.SOMEONE.SOMETHING.SOMEWHERE.STATE."
   "STATES.STILL.SUCH.SURE.T."
   "TAKE.TAKEN.THAN.THAT.THE."
   "THEIR.THEM.THEN.THERE.THEREFORE."
   "THESE.THEY.THING.THINGS.THINK."
   "THINKS.THIS.THOSE.THOUGH.THOUGHT."
   "THOUGHTS.THREE.THROUGH.THUS.TO."
   "TODAY.TOGETHER.TOO.TOOK.TOWARD."
   "TURN.TURNED.TURNING.TURNS.TWO."
   "U.UNDER.UNTIL.UP.UPON."
   "US.USE.USES.USED.V.VE."
   "VERY.W.WANT.WANTED.WANTING."
   "WANTS.WAS.WAY.WAYS.WE."
   "WELL.WELLS.WENT.WERE.WHAT."
   "WHEN.WHERE.WHETHER.WHICH.WHILE."
   "WHO.WHOLE.WHOSE.WHY.WILL."
   "WITH.WITHIN.WITHOUT.WORK.WORKED."
   "WORKING.WORKS.WOULD.X.Y."
   "YEAR.YEARS.YET.YOU.YOUNG."
   "YOUNGER.YOUNGEST.YOUR.YOURS.Z.");
}

void TSwSet::AddEn523(){
  MultiAdd(
   "A.ABLE.ABOUT.ABOVE.ACCORDING."
   "ACCORDINGLY.ACROSS.ACTUALLY.AFTER.AFTERWARDS."
   "AGAIN.AGAINST.ALL.ALLOW.ALLOWS."
   "ALMOST.ALONE.ALONG.ALREADY.ALSO."
   "ALTHOUGH.ALWAYS.AM.AMONG.AMONGST."
   "AN.AND.ANOTHER.ANY.ANYBODY."
   "ANYHOW.ANYONE.ANYTHING.ANYWAY.ANYWAYS."
   "ANYWHERE.APART.APPEAR.APPRECIATE.APPROPRIATE."
   "ARE.AROUND.AS.ASIDE.ASK."
   "ASKING.ASSOCIATED.AT.AVAILABLE.AWAY."
   "AWFULLY.B.BE.BECAME.BECAUSE."
   "BECOME.BECOMES.BECOMING.BEEN.BEFORE."
   "BEFOREHAND.BEHIND.BEING.BELIEVE.BELOW."
   "BESIDE.BESIDES.BEST.BETTER.BETWEEN."
   "BEYOND.BOTH.BRIEF.BUT.BY."
   "C.CAME.CAN.CANNOT.CANT."
   "CAUSE.CAUSES.CERTAIN.CERTAINLY.CHANGES."
   "CLEARLY.CO.COM.COME.COMES."
   "CONCERNING.CONSEQUENTLY.CONSIDER.CONSIDERING.CONTAIN."
   "CONTAINING.CONTAINS.CORRESPONDING.COULD.COURSE."
   "CURRENTLY.D.DEFINITELY.DESCRIBED.DESPITE."
   "DID.DIFFERENT.DO.DON.DOES.DOESN.DOING."
   "DONE.DOWN.DOWNWARDS.DURING.E."
   "EACH.EDU.EG.EIGHT.EITHER."
   "ELSE.ELSEWHERE.ENOUGH.ENTIRELY.ESPECIALLY."
   "ET.ETC.EVEN.EVER.EVERY."
   "EVERYBODY.EVERYONE.EVERYTHING.EVERYWHERE.EX."
   "EXACTLY.EXAMPLE.EXCEPT.F.FAR."
   "FEW.FIFTH.FIRST.FIVE.FOLLOWED."
   "FOLLOWING.FOLLOWS.FOR.FORMER.FORMERLY."
   "FORTH.FOUR.FROM.FURTHER.FURTHERMORE."
   "G.GET.GETS.GETTING.GIVEN."
   "GIVES.GO.GOES.GOING.GONE."
   "GOT.GOTTEN.GREETINGS.H.HAD."
   "HAPPENS.HARDLY.HAS.HAVE.HAVING."
   "HE.HELLO.HELP.HENCE.HER."
   "HERE.HEREAFTER.HEREBY.HEREIN.HEREUPON."
   "HERS.HERSELF.HI.HIM.HIMSELF."
   "HIS.HITHER.HOPEFULLY.HOW.HOWBEIT."
   "HOWEVER.I.IE.IF.IGNORED."
   "IMMEDIATE.IN.INASMUCH.INC.INDEED."
   "INDICATE.INDICATED.INDICATES.INNER.INSOFAR."
   "INSTEAD.INTO.INWARD.IS.IT."
   "ITS.ITSELF.J.JUST.K."
   "KEEP.KEEPS.KEPT.KNOW.KNOWS."
   "KNOWN.L.LAST.LATELY.LATER."
   "LATTER.LATTERLY.LEAST.LESS.LEST."
   "LET.LIKE.LIKED.LIKELY.LITTLE."
   "LOOK.LOOKING.LOOKS.LTD.M."
   "MAINLY.MANY.MAY.MAYBE.ME."
   "MEAN.MEANWHILE.MERELY.MIGHT.MORE."
   "MOREOVER.MOST.MOSTLY.MUCH.MUST."
   "MY.MYSELF.N.NAME.NAMELY."
   "ND.NEAR.NEARLY.NECESSARY.NEED."
   "NEEDS.NEITHER.NEVER.NEVERTHELESS.NEW."
   "NEXT.NINE.NO.NOBODY.NON."
   "NONE.NOONE.NOR.NORMALLY.NOT."
   "NOTHING.NOVEL.NOW.NOWHERE.O."
   "OBVIOUSLY.OF.OFF.OFTEN.OH."
   "OK.OKAY.OLD.ON.ONCE."
   "ONE.ONES.ONLY.ONTO.OR."
   "OTHER.OTHERS.OTHERWISE.OUGHT.OUR."
   "OURS.OURSELVES.OUT.OUTSIDE.OVER."
   "OVERALL.OWN.P.PARTICULAR.PARTICULARLY."
   "PER.PERHAPS.PLACED.PLEASE.PLUS."
   "POSSIBLE.PRESUMABLY.PROBABLY.PROVIDES.Q."
   "QUE.QUITE.QV.R.RATHER."
   "RD.RE.REALLY.REASONABLY.REGARDING."
   "REGARDLESS.REGARDS.RELATIVELY.RESPECTIVELY.RIGHT."
   "S.SAID.SAME.SAW.SAY."
   "SAYING.SAYS.SECOND.SECONDLY.SEE."
   "SEEING.SEEM.SEEMED.SEEMING.SEEMS."
   "SEEN.SELF.SELVES.SENSIBLE.SENT."
   "SERIOUS.SERIOUSLY.SEVEN.SEVERAL.SHALL."
   "SHE.SHOULD.SINCE.SIX.SO."
   "SOME.SOMEBODY.SOMEHOW.SOMEONE.SOMETHING."
   "SOMETIME.SOMETIMES.SOMEWHAT.SOMEWHERE.SOON."
   "SORRY.SPECIFIED.SPECIFY.SPECIFYING.STILL."
   "SUB.SUCH.SUP.SURE.T."
   "TAKE.TAKEN.TELL.TENDS.TH."
   "THAN.THANK.THANKS.THANX.THAT."
   "THATS.THE.THEIR.THEIRS.THEM."
   "THEMSELVES.THEN.THENCE.THERE.THEREAFTER."
   "THEREBY.THEREFORE.THEREIN.THERES.THEREUPON."
   "THESE.THEY.THINK.THIRD.THIS."
   "THOROUGH.THOROUGHLY.THOSE.THOUGH.THREE."
   "THROUGH.THROUGHOUT.THRU.THUS.TO."
   "TOGETHER.TOO.TOOK.TOWARD.TOWARDS."
   "TRIED.TRIES.TRULY.TRY.TRYING."
   "TWICE.TWO.U.UN.UNDER."
   "UNFORTUNATELY.UNLESS.UNLIKELY.UNTIL.UNTO."
   "UP.UPON.US.USE.USED."
   "USEFUL.USES.USING.USUALLY.UUCP."
   "V.VALUE.VARIOUS.VE.VERY.VIA."
   "VIZ.VS.W.WANT.WANTS."
   "WAS.WAY.WE.WELCOME.WELL."
   "WENT.WERE.WHAT.WHATEVER.WHEN."
   "WHENCE.WHENEVER.WHERE.WHEREAFTER.WHEREAS."
   "WHEREBY.WHEREIN.WHEREUPON.WHEREVER.WHETHER."
   "WHICH.WHILE.WHITHER.WHO.WHOEVER."
   "WHOLE.WHOM.WHOSE.WHY.WILL."
   "WILLING.WISH.WITH.WITHIN.WITHOUT."
   "WONDER.WOULD.X.Y.YES."
   "YET.YOU.YOUR.YOURS.YOURSELF."
   "YOURSELVES.Z.ZERO.");
}

void TSwSet::AddEnMsdn(){
  MultiAdd(
   "A.ABOUT.AFTER.AGAINST.ALL.ALONG.ALSO.ALTHOUGH.AM.AMONG.AN.ARE.AS."
   "AT.BE.BECAME.BECAUSE.BEEN.BEING.BETWEEN.BUT.BY.CAN.CAUTION.COME.COULD."
   "DETAILS.DID.DOES.DOING.DONE.DURING.EARLY.FAR.FOUND.FROM.HAD.HAS.HAVE."
   "HE.HER.HERE.HIS.HOW.HOWEVER.I.IF.IN.INCLUDING.INFORMATION.INTO.IS."
   "IT.ITS.LATE.LATER.MADE.MANY.MAY.MED.MIGHT.MORE.MOST.NEAR.NO.NON.NONE."
   "NOR.NOT.NOTE.OF.OFF.ON.ONLY.OTHER.OVER.SAW.SEE.SEEN.SEVERAL.SHE.SINCE.SO."
   "SOME.SUCH.THAN.THAT.THE.THEIR.THEM.THEN.THERE.THESE.THEY.THOSE.THROUGH.TIP."
   "TO.TOO.UNDER.UP.US.USE.VERY.WAS.WE.WERE.WHEN.WHERE.WHICH.WHO.YOU.");
}

void TSwSet::AddGe(){
  MultiAdd(
   "ALLE.ALLEM.ALLEN.ALLER.ALLES."
   "ALS.AM.AN.ANDERE.ANDEREM."
   "AUCH.AUF.AUS.BEI.BIS."
   "DAS.DEM.DEN.DER.DES."
   "DIE.DURCH.EIN.EINE.EINEM."
   "EINEN.EINER.ES.FOR.F�R."
   "HAT."
   "HIER.IHRE.IN.IM.IST."
   "MEHR.MIT.NACH.NEBEN.ODER."
   "SEIN.SEINE.SEINEM.SEINEN.SICH."
   "SIE.SIND.SOWIE.UND.�BER."
   "UM.UND.UNTER.USW.VIELES."
   "VOM.VON.VOR.WIE.ZU."
   "ZUM.ZUR.");
}

void TSwSet::AddEs(){
  MultiAdd( //HACK
    "A.ACA.AHI.AJENA.AJENAS.AJENO.AJENOS.AL.ALGO.ALGUNA.ALGUNAS.ALGUNO.ALGUNOS."
    "ALGUN.ALLA.ALLI.AMBOS.ANTE.ANTES.AQUEL.AQUELLA.AQUELLAS.AQUELLO.AQUELLOS."
    "AQUI.AQUI.ARRIBA.ATRAS.ATRAS.BAJO.BASTANTE.BIEN.BIEN.CADA.CERCA.CIERTA."
    "CIERTAS.CIERTO.CIERTOS.COMO.CON.CONMIGO.CONSEGUIMOS.CONSEGUIR.CONSIGO."
    "CONSIGUE.CONSIGUEN.CONSIGUES.CONTIGO.CONTRA.CUAL.CUALES.CUALQUIER.CUALQUIERA."
    "CUALQUIERAS.CUAN.CUANDO.CUANTA.CUANTAS.CUANTO.CUANTOS.CUAN.CUANTA.CUANTAS."
    "CUANTO.CUANTOS.DE.DEJAR.DEL.DEMASIADA.DEMASIADAS.DEMASIADO.DEMASIADOS."
    "DEMAS.DENTRO.DESDE.DESPUES.DONDE.DOS.DONDE.E.EL.ELLA.ELLAS.ELLOS.EMPLEAIS."
    "EMPLEAN.EMPLEAR.EMPLEAS.EMPLEO.EN.ENCIMA.ENTONCES.ENTRE.ERA.ERAMOS.ERAN."
    "ERAS.ERES.ES.ESA.ESAS.ESE.ESOS.ESTA.ESTABA.ESTADO.ESTAIS.ESTAMOS.ESTAN."
    "ESTAR.ESTAS.ESTE.ESTOS.ESTOY.ESTA.ESTAIS.FIN.FUE.FUERON.FUI.FUIMOS.HA."
    "HABER.HACE.HACEIS.HACEMOS.HACEN.HACER.HACES.HAGO.HAN.HASTA.INCLUSO.INTENTA."
    "INTENTAIS.INTENTAMOS.INTENTAN.INTENTAR.INTENTAS.INTENTO.IR.JAMAS.JUNTO.JUNTOS."
    "LA.LARGO.LAS.LE.LO.LOS.MAS.ME.MENOS.MIA.MIENTRAS.MIO.MISMA.MISMAS.MISMO."
    "MISMOS.MODO.MUCHA.MUCHAS.MUCHO.MUCHOS.MUCHISIMA.MUCHISIMAS.MUCHISIMO.MUCHISIMOS."
    "MUY.MAS.MIA.MIO.NADA.NI.NINGUNA.NINGUNAS.NINGUNO.NINGUNOS.NO.NOS.NOSOTRAS."
    "NOSOTROS.NUESTRA.NUESTRAS.NUESTRO.NUESTROS.NUNCA.O.OS.OTRA.OTRAS.OTRO."
    "OTROS.PARA.PARECER.PER.PERO.POCA.POCAS.POCO.POCOS.PODEIS.PODEMOS.PODER."
    "PODRIA.PODRIAIS.PODRIAMOS.PODRIAN.PODRIAS.PODRIA.PODRIAIS.PODRIAMOS.PODRIAN."
    "PODRIAS.POR.PORQUE.PORQUE.PRIMERO.PUEDE.PUEDEN.PUEDO.PUES.QUE.QUERER.QUIENESQUIERA."
    "QUIENQUIERA.QUE.SABE.SABEIS.SABEMOS.SABEN.SABER.SABES.SE.SER.SI.SIDO.SIEMPRE."
    "SIENDO.SIN.SOBRE.SOIS.SOLAMENTE.SOLO.SOMOS.SOY.SR.SRA.SRES.STA.SU.SUS.SUYA."
    "SUYAS.SUYO.SUYOS.SI.SIN.SOLO.TAL.TALES.TAMBIEN.TAN.TANTA.TANTAS.TANTO."
    "TANTOS.TE.TENEIS.TENEMOS.TENER.TENGO.TI.TIENE.TIENEN.TODA.TODAS.TODO.TODOS."
    "TOMAR.TRAS.TUYA.TUYO.TU.ULTIMO.UN.UNA.UNAS.UNO.UNOS.USA.USAIS.USAMOS.USAN."
    "USAR.USAS.USO.USTED.USTEDES.VA.VAIS.VALOR.VAMOS.VAN.VARIAS.VARIOS.VAYA."
    "VERDAD.VERDADERA.VERDADERO.VOSOTRAS.VOSOTROS.VOY.VUESTRA.VUESTRAS.VUESTRO."
    "VUESTROS.Y.YA.YO.EL.ERAMOS.ESTAS.ESTE.");
  //MultiAdd(
  //  "A.AC�.AH�.AJENA.AJENAS.AJENO.AJENOS.AL.ALGO.ALGUNA.ALGUNAS.ALGUNO.ALGUNOS."
  //  "ALG�N.ALL�.ALL�.AMBOS.ANTE.ANTES.AQUEL.AQUELLA.AQUELLAS.AQUELLO.AQUELLOS."
  //  "AQUI.AQU�.ARRIBA.ATRAS.ATR�S.BAJO.BASTANTE.BIEN.BI�N.CADA.CERCA.CIERTA."
  //  "CIERTAS.CIERTO.CIERTOS.COMO.C�MO.CON.CONMIGO.CONSEGUIMOS.CONSEGUIR.CONSIGO."
  //  "CONSIGUE.CONSIGUEN.CONSIGUES.CONTIGO.CONTRA.CUAL.CUALES.CUALQUIER.CUALQUIERA."
  //  "CUALQUIERAS.CUAN.CUANDO.CUANTA.CUANTAS.CUANTO.CUANTOS.CU�N.CU�NTA.CU�NTAS."
  //  "CU�NTO.CU�NTOS.C�MO.DE.DEJAR.DEL.DEMASIADA.DEMASIADAS.DEMASIADO.DEMASIADOS."
  //  "DEM�S.DENTRO.DESDE.DESPU�S.DONDE.DOS.D�NDE.E.EL.ELLA.ELLAS.ELLOS.EMPLEAIS."
  //  "EMPLEAN.EMPLEAR.EMPLEAS.EMPLEO.EN.ENCIMA.ENTONCES.ENTRE.ERA.ERAMOS.ERAN."
  //  "ERAS.ERES.ES.ESA.ESAS.ESE.ESOS.ESTA.ESTABA.ESTADO.ESTAIS.ESTAMOS.ESTAN."
  //  "ESTAR.ESTAS.ESTE.ESTOS.ESTOY.EST�.EST�IS.FIN.FUE.FUERON.FUI.FUIMOS.HA."
  //  "HABER.HACE.HACEIS.HACEMOS.HACEN.HACER.HACES.HAGO.HAN.HASTA.INCLUSO.INTENTA."
  //  "INTENTAIS.INTENTAMOS.INTENTAN.INTENTAR.INTENTAS.INTENTO.IR.JAM�S.JUNTO.JUNTOS."
  //  "LA.LARGO.LAS.LE.LO.LOS.MAS.ME.MENOS.MIA.MIENTRAS.MIO.MISMA.MISMAS.MISMO."
  //  "MISMOS.MODO.MUCHA.MUCHAS.MUCHO.MUCHOS.MUCH�SIMA.MUCH�SIMAS.MUCH�SIMO.MUCH�SIMOS."
  //  "MUY.M�S.M�A.M�O.NADA.NI.NINGUNA.NINGUNAS.NINGUNO.NINGUNOS.NO.NOS.NOSOTRAS."
  //  "NOSOTROS.NUESTRA.NUESTRAS.NUESTRO.NUESTROS.NUNCA.O.�.OS.OTRA.OTRAS.OTRO."
  //  "OTROS.PARA.PARECER.PER.PERO.POCA.POCAS.POCO.POCOS.PODEIS.PODEMOS.PODER."
  //  "PODRIA.PODRIAIS.PODRIAMOS.PODRIAN.PODRIAS.PODR�A.PODR�AIS.PODR�AMOS.PODR�AN."
  //  "PODR�AS.POR.PORQUE.PORQU�.PRIMERO.PUEDE.PUEDEN.PUEDO.PUES.QUE.QUERER.QUIENESQUIERA."
  //  "QUIENQUIERA.QU�.SABE.SABEIS.SABEMOS.SABEN.SABER.SABES.SE.SER.SI.SIDO.SIEMPRE."
  //  "SIENDO.SIN.SOBRE.SOIS.SOLAMENTE.SOLO.SOMOS.SOY.SR.SRA.SRES.STA.SU.SUS.SUYA."
  //  "SUYAS.SUYO.SUYOS.S�.S�N.S�LO.TAL.TALES.TAMBI�N.TAN.TANTA.TANTAS.TANTO."
  //  "TANTOS.TE.TENEIS.TENEMOS.TENER.TENGO.TI.TIENE.TIENEN.TODA.TODAS.TODO.TODOS."
  //  "TOMAR.TRAS.TUYA.TUYO.T�.ULTIMO.UN.UNA.UNAS.UNO.UNOS.USA.USAIS.USAMOS.USAN."
  //  "USAR.USAS.USO.USTED.USTEDES.VA.VAIS.VALOR.VAMOS.VAN.VARIAS.VARIOS.VAYA."
  //  "VERDAD.VERDADERA.VERDADERO.VOSOTRAS.VOSOTROS.VOY.VUESTRA.VUESTRAS.VUESTRO."
  //  "VUESTROS.Y.YA.YO.�L.�RAMOS.�STAS.�STE.");
}

void TSwSet::AddSiQCPSIYuAscii(){
  // ((TypeCh=='Q')..(TypeCh=='C')..(TypeCh=='P')..(TypeCh=='S')..(TypeCh=='I'))
  MultiAdd(
   "@.@AL.@E.A.AH."
   "AHA.ALI.AMEN.AMPAK.BAJE."
   "BLIZU.BODISI.BOJDA.BR@KONE.BR@^AS."
   "BREZ.CELO.DA.DNO.DO."
   "DOBESEDNO.DOMALA.DRUG.DRUGA.DRUGA^EN."
   "DRUGA^NA.DRUGA^NE.DRUGA^NEGA.DRUGA^NEM.DRUGA^NEMU."
   "DRUGA^NI.DRUGA^NIH.DRUGA^NIM.DRUGA^NIMA.DRUGA^NIMI."
   "DRUGA^NO.DRUGE.DRUGEGA.DRUGEM.DRUGEMU."
   "DRUGI.DRUGIH.DRUGIM.DRUGIMA.DRUGIMI."
   "DRUGO.EN.ENA.ENAK.ENAKA."
   "ENAKE.ENAKEGA.ENAKEM.ENAKEMU.ENAKI."
   "ENAKIH.ENAKIM.ENAKIMA.ENAKIMI.ENAKO."
   "ENE.ENEGA.ENEM.ENEMU.ENI."
   "ENIH.ENIM.ENIMA.ENIMI.ENO."
   "GA.GOTOVO.H.HA.HEJ."
   "IN.ISTA.ISTE.ISTEGA.ISTEM."
   "ISTEMU.ISTI.ISTIH.ISTIM.ISTIMA."
   "ISTIMI.ISTO.ITAK.IZ.IZMED."
   "IZNAD.IZPOD.IZPRED.IZVEN.IZZA."
   "JAZ.JE.JI.JIH.JIM."
   "JIMA.JO.JU.K.KADAR."
   "KAJ.KAJNE.KAJPADA.KAJPAK.KAJTI."
   "KAK.KAKA.KAKE.KAKEGA.KAKEM."
   "KAKEMU.KAKI.KAKIH.KAKIM.KAKIMA."
   "KAKIMI.KAKO.KAKOR.KAKR[EN.KAKR[ENKOLI."
   "KAKR[EN_KOLI.KAKR[NA.KAKR[NAKOLI.KAKR[NA_KOLI.KAKR[NE."
   "KAKR[NEGA.KAKR[NEGAKOLI.KAKR[NEGA_KOLI.KAKR[NEKOLI.KAKR[NEM."
   "KAKR[NEMKOLI.KAKR[NEMU.KAKR[NEMUKOLI.KAKR[NEMU_KOLI.KAKR[NEM_KOLI."
   "KAKR[NE_KOLI.KAKR[NI.KAKR[NIH.KAKR[NIHKOLI.KAKR[NIH_KOLI."
   "KAKR[NIKOLI.KAKR[NIM.KAKR[NIMA.KAKR[NIMAKOLI.KAKR[NIMA_KOLI."
   "KAKR[NIMI.KAKR[NIMIKOLI.KAKR[NIMI_KOLI.KAKR[NIMKOLI.KAKR[NIM_KOLI."
   "KAKR[NI_KOLI.KAKR[NO.KAKR[NOKOLI.KAKR[NO_KOLI.KAK[EN."
   "KAK[NA.KAK[NE.KAK[NEGA.KAK[NEM.KAK[NEMU."
   "KAK[NI.KAK[NIH.KAK[NIM.KAK[NIMA.KAK[NIMI."
   "KAK[NO.KAR.KARKOLI.KAR_KOLI.KATERA."
   "KATERAKOLI.KATERA_KOLI.KATERE.KATEREGA.KATEREGAKOLI."
   "KATEREGA_KOLI.KATEREKOLI.KATEREM.KATEREMKOLI.KATEREMU."
   "KATEREMUKOLI.KATEREMU_KOLI.KATEREM_KOLI.KATERE_KOLI.KATERI."
   "KATERIH.KATERIHKOLI.KATERIH_KOLI.KATERIKOLI.KATERIM."
   "KATERIMA.KATERIMAKOLI.KATERIMA_KOLI.KATERIMI.KATERIMIKOLI."
   "KATERIMI_KOLI.KATERIMKOLI.KATERIM_KOLI.KATERI_KOLI.KATERO."
   "KATEROKOLI.KATERO_KOLI.KDO.KDOR.KDORKOLI."
   "KDOR_KOLI.KER.KI.KLJUB.KLJUB_TEMU_DA."
   "KO.KOGA.KOGAR.KOGARKOLI.KOGAR_KOLI."
   "KOLI.KOLIK.KOLIKA.KOLIKE.KOLIKEGA."
   "KOLIKEM.KOLIKEMU.KOLIKI.KOLIKIH.KOLIKIM."
   "KOLIKIMA.KOLIKIMI.KOLIKO.KOLIKOR.KOLIK[EN."
   "KOLIK[NA.KOLIK[NE.KOLIK[NEGA.KOLIK[NEM.KOLIK[NEMU."
   "KOLIK[NI.KOLIK[NIH.KOLIK[NIM.KOLIK[NIMA.KOLIK[NIMI."
   "KOLIK[NO.KOM.KOMAJ.KOMER.KOMERKOLI."
   "KOMER_KOLI.KOMU.KOMUR.KOMURKOLI.KOMUR_KOLI."
   "KOT.KROG.LE.LE-ONA.LE-ONE."
   "LE-ONEGA.LE-ONEM.LE-ONEMU.LE-ONI.LE-ONIH."
   "LE-ONIM.LE-ONIMA.LE-ONIMI.LE-ONO.LE-TA."
   "LE-TAK.LE-TAKA.LE-TAKE.LE-TAKEGA.LE-TAKEM."
   "LE-TAKEMU.LE-TAKI.LE-TAKIH.LE-TAKIM.LE-TAKIMA."
   "LE-TAKIMI.LE-TAKO.LE-TAK[EN.LE-TAK[NA.LE-TAK[NE."
   "LE-TAK[NEGA.LE-TAK[NEM.LE-TAK[NEMU.LE-TAK[NI.LE-TAK[NIH."
   "LE-TAK[NIM.LE-TAK[NIMA.LE-TAK[NIMI.LE-TAK[NO.LE-TE."
   "LE-TEGA.LE-TEH.LE-TEJ.LE-TEM.LE-TEMA."
   "LE-TEMI.LE-TEMU.LE-TI.LE-TISTA.LE-TISTE."
   "LE-TISTEGA.LE-TISTEM.LE-TISTEMU.LE-TISTI.LE-TISTIH."
   "LE-TISTIM.LE-TISTIMA.LE-TISTIMI.LE-TISTO.LE-TO."
   "LE-TOLIKO.MALONE.MANO.MAR.MARSIKAJ."
   "MARSIKATERA.MARSIKATERE.MARSIKATEREGA.MARSIKATEREM.MARSIKATEREMU."
   "MARSIKATERI.MARSIKATERIH.MARSIKATERIM.MARSIKATERIMA.MARSIKATERIMI."
   "MARSIKATERO.MARSIKDO.MARSIKOGA.MARSIKOM.MARSIKOMU."
   "MARSI^EM.MARSI^EMU.MARSI^ESA.MARSI^IM.MARVE^."
   "ME.MED.MEDNJE.MEDNJU.MEDSE."
   "MENDA.MENE.MENI.MENOJ.MI."
   "MIDVA.MIMO.MNOGO.MOJ.MOJA."
   "MOJE.MOJEGA.MOJEM.MOJEMU.MOJI."
   "MOJIH.MOJIM.MOJIMA.MOJIMI.MOJO."
   "MORDA.MOREBITI.MU.NA.NAD."
   "NADENJ.NADME.NADNJE.NADVSE.NAJ."
   "NAJBR@.NAJIN.NAJINA.NAJINE.NAJINEGA."
   "NAJINEM.NAJINEMU.NAJINI.NAJINIH.NAJINIM."
   "NAJINIMA.NAJINIMI.NAJINO.NAJSI.NAJU."
   "NAM.NAMA.NAME.NAMESTO.NAMI."
   "NAMRE^.NANJ.NANJE.NANJO.NANJU."
   "NAOKOLI.NAPROTI.NAS.NASE.NASPROTI."
   "NATE.NAVKLJUB.NAVZLIC.NA[.NA[A."
   "NA[E.NA[EGA.NA[EM.NA[EMU.NA[I."
   "NA[IH.NA[IM.NA[IMA.NA[IMI.NA[O."
   "NE.NEK.NEKA.NEKAJ.NEKAK."
   "NEKAKA.NEKAKE.NEKAKEGA.NEKAKEM.NEKAKEMU."
   "NEKAKI.NEKAKIH.NEKAKIM.NEKAKIMA.NEKAKIMI."
   "NEKAKO.NEKAK[EN.NEKAK[NA.NEKAK[NE.NEKAK[NEGA."
   "NEKAK[NEM.NEKAK[NEMU.NEKAK[NI.NEKAK[NIH.NEKAK[NIM."
   "NEKAK[NIMA.NEKAK[NIMI.NEKAK[NO.NEKATERA.NEKATERE."
   "NEKATEREGA.NEKATEREM.NEKATEREMU.NEKATERI.NEKATERIH."
   "NEKATERIM.NEKATERIMA.NEKATERIMI.NEKATERO.NEKDO."
   "NEKE.NEKEGA.NEKEM.NEKEMU.NEKI."
   "NEKIH.NEKIM.NEKIMA.NEKIMI.NEKO."
   "NEKOGA.NEKOLIKO.NEKOM.NEKOMU.NEMARA."
   "NERAD.NERADI.NE^EM.NE^EMU.NE^ESA."
   "NE^IM.NIH^E.NIKAKR[EN.NIKAKR[NA.NIKAKR[NE."
   "NIKAKR[NEGA.NIKAKR[NEM.NIKAKR[NEMU.NIKAKR[NI.NIKAKR[NIH."
   "NIKAKR[NIM.NIKAKR[NIMA.NIKAKR[NIMI.NIKAKR[NO.NIKAR."
   "NIKOGAR.NIKOMER.NIKOMUR.NITI.NI^."
   "NI^EMER.NI^EMUR.NI^ESAR.NI^IMER.NJE."
   "NJEGA.NJEGOV.NJEGOVA.NJEGOVE.NJEGOVEGA."
   "NJEGOVEM.NJEGOVEMU.NJEGOVI.NJEGOVIH.NJEGOVIM."
   "NJEGOVIMA.NJEGOVIMI.NJEGOVO.NJEJ.NJEM."
   "NJEMU.NJEN.NJENA.NJENE.NJENEGA."
   "NJENEM.NJENEMU.NJENI.NJENIH.NJENIM."
   "NJENIMA.NJENIMI.NJENO.NJI.NJIH."
   "NJIHOV.NJIHOVA.NJIHOVE.NJIHOVEGA.NJIHOVEM."
   "NJIHOVEMU.NJIHOVI.NJIHOVIH.NJIHOVIM.NJIHOVIMA."
   "NJIHOVIMI.NJIHOVO.NJIJU.NJIM.NJIMA."
   "NJIMI.NJO.NJUN.NJUNA.NJUNE."
   "NJUNEGA.NJUNEM.NJUNEMU.NJUNI.NJUNIH."
   "NJUNIM.NJUNIMA.NJUNIMI.NJUNO.NO."
   "NOBEN.NOBENA.NOBENE.NOBENEGA.NOBENEM."
   "NOBENEMU.NOBENI.NOBENIH.NOBENIM.NOBENIMA."
   "NOBENIMI.NOBENO.O.OB.OBA."
   "OBE.OBEH.OBEMA.OBENJ.OD."
   "ODKAR.OH.OKOLI.OKROG.ON."
   "ONA.ONADVA.ONE.ONEDVE.ONEGA."
   "ONEM.ONEMU.ONI.ONIDVE.ONIH."
   "ONIM.ONIMA.ONIMI.ONKRAJ.ONO."
   "ONSTRAN.OZIROMA.PA.PA^.PO."
   "POD.PODNJO.POGODU.POLEG.POME."
   "PONJ.PONJE.PONJO.POTE.POVRH."
   "POVRHU.POZOR.PRAV.PRAVZAPRAV.PRECEJ."
   "PRED.PREDEN.PREDENJ.PREDME.PREDNJE."
   "PREDSE.PREDVSEM.PREK.PREKO.PREPROSTO."
   "PRI.PROTI.RAD.RADA.RADE."
   "RADI.RAVNO.RAZ.RAZEN.RES."
   "RESDA.S.SABO.SAJ.SAMO."
   "SE.SEBE.SEBI.SEBOJ.SEVEDA."
   "SI.SICER.SKORAJ.SKORAJDA.SKOZ."
   "SKOZENJ.SKOZI.SKOZNJE.SKOZNJO.SKOZTE."
   "SPET.SPLOH.SPOD.SPRI^O.SREDI."
   "SVOJ.SVOJA.SVOJE.SVOJEGA.SVOJEM."
   "SVOJEMU.SVOJI.SVOJIH.SVOJIM.SVOJIMA."
   "SVOJIMI.SVOJO.TA.TABO.TAK."
   "TAKA.TAKALE.TAKE.TAKEGA.TAKEGALE."
   "TAKELE.TAKEM.TAKEMLE.TAKEMU.TAKEMULE."
   "TAKI.TAKIH.TAKIHLE.TAKILE.TAKIM."
   "TAKIMA.TAKIMALE.TAKIMI.TAKIMILE.TAKIMLE."
   "TAKLE.TAKO.TAKOLE.TAK[EN.TAK[NA."
   "TAK[NE.TAK[NEGA.TAK[NEM.TAK[NEMU.TAK[NI."
   "TAK[NIH.TAK[NIM.TAK[NIMA.TAK[NIMI.TAK[NO."
   "TALE.TE.TEBE.TEBI.TEBOJ."
   "TEGA.TEGALE.TEH.TEHLE.TEJ."
   "TEJLE.TELE.TEM.TEMA.TEMALE."
   "TEMI.TEMILE.TEMLE.TEMU.TEMULE."
   "TEMVE^.TER.TI.TILE.TISTA."
   "TISTE.TISTEGA.TISTEM.TISTEMU.TISTI."
   "TISTIH.TISTIM.TISTIMA.TISTIMI.TISTO."
   "TO.TODA.TOLE.TOLIK.TOLIKA."
   "TOLIKE.TOLIKEGA.TOLIKEM.TOLIKEMU.TOLIKI."
   "TOLIKIH.TOLIKIM.TOLIKIMA.TOLIKIMI.TOLIKO."
   "TOLIK[EN.TOLIK[NA.TOLIK[NE.TOLIK[NEGA.TOLIK[NEM."
   "TOLIK[NEMU.TOLIK[NI.TOLIK[NIH.TOLIK[NIM.TOLIK[NIMA."
   "TOLIK[NIMI.TOLIK[NO.TOREJ.TUDI.TVOJ."
   "TVOJA.TVOJE.TVOJEGA.TVOJEM.TVOJEMU."
   "TVOJI.TVOJIH.TVOJIM.TVOJIMA.TVOJIMI."
   "TVOJO.V.VAJIN.VAJINA.VAJINE."
   "VAJINEGA.VAJINEM.VAJINEMU.VAJINI.VAJINIH."
   "VAJINIM.VAJINIMA.VAJINIMI.VAJINO.VAJU."
   "VAM.VAMA.VAME.VAMI.VANJ."
   "VANJE.VANJO.VANJU.VAS.VASE."
   "VATE.VA[.VA[A.VA[E.VA[EGA."
   "VA[EM.VA[EMU.VA[I.VA[IH.VA[IM."
   "VA[IMA.VA[IMI.VA[O.VENDAR.VENDARLE."
   "VERJETNO.VES.VI.VIDVA.VNOVI^."
   "VPRI^O.VRED.VRH.VRHU.VSA."
   "VSAJ.VSAK.VSAKA.VSAKDO.VSAKE."
   "VSAKEGA.VSAKEM.VSAKEMU.VSAKI.VSAKIH."
   "VSAKIM.VSAKIMA.VSAKIMI.VSAKO.VSAKOGAR."
   "VSAKOMER.VSAKOMUR.VSAKR[EN.VSAKR[NA.VSAKR[NE."
   "VSAKR[NEGA.VSAKR[NEM.VSAKR[NEMU.VSAKR[NI.VSAKR[NIH."
   "VSAKR[NIM.VSAKR[NIMA.VSAKR[NIMI.VSAKR[NO.VSE."
   "VSEGA.VSEH.VSEJ.VSEM.VSEMA."
   "VSEMI.VSEMU.VSI.VSO.VZDOL@."
   "V[E^.V[TRIC.Z.ZA.ZADOSTI."
   "ZAKAJ.ZAME.ZANJ.ZANJE.ZANJO."
   "ZANJU.ZAPORED.ZARADI.ZARES.ZASE."
   "ZATE.ZAVOLJO.ZGOLJ.ZLASTI.ZOPER."
   "ZOPET.ZRAVEN.ZUNAJ.[E.[ELE."
   "^E.^EM.^EMER.^EMERKOLI.^EMER_KOLI."
   "^EMU.^EMUR.^EMURKOLI.^EMUR_KOLI.^EPRAV."
   "^ERAVNO.^ESA.^ESAR.^ESARKOLI.^ESAR_KOLI."
   "^ETUDI.^EZ.^EZENJ.^EZNJE.^IGAR."
   "^IGAV.^IGAVA.^IGAVE.^IGAVEGA.^IGAVEM."
   "^IGAVEMU.^IGAVI.^IGAVIH.^IGAVIM.^IGAVIMA."
   "^IGAVIMI.^IGAVO.^IM.^IMER.^IMERKOLI.");
}

void TSwSet::AddSiRYuAscii(){
  // TypeCh=='R'
  MultiAdd(
   "BLE[^E^E.BLI@E.BLIZU.BOLJ.BOLJE."
   "BR@.BR@^AS.DALE^.DALJ.DALJE."
   "DANDANES.DANES.DAVI.DELOMA.DESETKRAT."
   "DEVETKRAT.DLJE.DOCELA.DODOBRA.DOKAJ."
   "DOKLER.DOL.DOLI.DOMA.DOMOV."
   "DOSLEDNEJE.DOSLEJ.DOSTI.DOSTIKRAT.DOTLEJ."
   "DOVOLJ.DRUGAM.DRUGA^E.DRUGIKRAT.DRUGI^."
   "DRUGJE.DRUGOD.DVAKRAT.DVANAJSTKRAT.ENAJSTKRAT."
   "ENKRAT.GLASNEJE.GLEDE.GOR.GORI."
   "GOSTEJE.GROZA.HITREJE.HKRATI.HLADNEJE."
   "HOTE.HUJE.ISKRENEJE.IZJEMOMA.IZMENOMA."
   "IZNENADA.IZRAZITEJE.JASNEJE.JESENI.JU@NEJE."
   "JUTRI.KADARKOLI.KAJ.KAJNE.KAJPADA."
   "KAKO.KAKOR.KAKORKOLI.KAM.KAMOR."
   "KAMORKOLI.KAR.KASNEJE.KDAJ.KDAJKOLI."
   "KJE.KJER.KJERKOLI.KMALU.KOD."
   "KODER.KOLIKO.KOLIKOKRAT.KOLIKOR.KOLI^KAJ."
   "KOMAJDA.KRAT.KRI@EM.KVE^JEMU.KVI[KU."
   "LA@E.LANI.LETOS.LJUB[E.MALCE."
   "MANJ.MAR.MARSIKDAJ.MARSIKJE.MEDTEM."
   "MIMO.MIMOGREDE.MIRNEJE.MNOGOKRAT.MOL^E."
   "MO^.MO^NEJE.MUKOMA.NADALJE.NADVSE."
   "NAENKRAT.NAGLAS.NAJBOLJ.NAJBR@.NAJDLJE."
   "NAJMANJ.NAJPREJ.NAJRAJE.NAJRAJ[I.NAJVE^."
   "NAJVE^KRAT.NAKAR.NALAHNO.NALA[^.NAMRE^."
   "NANAGLOMA.NAOKOLI.NAOKROG.NAPOL.NAPOSLED."
   "NAPOTI.NAPREJ.NAPROTI.NARAHLO.NARAVNOST."
   "NARAZEN.NAROBE.NASPLOH.NASPROTI.NATANKO."
   "NATAN^NEJE.NATO.NAVKLJUB.NAVSEZADNJE.NAVSEZGODAJ."
   "NAVZDOL.NAVZGOR.NAVZLIC.NAVZVEN.NAZADNJE."
   "NAZAJ.NA_HITRO.NA_POL.NA_SAMEM.NEDALE^."
   "NEHOTE.NEKAJ.NEKAJKRAT.NEKAKO.NEKAM."
   "NEKDAJ.NEKJE.NEKOD.NEKO^.NEMALO."
   "NEMALOKRAT.NEMUDOMA.NENADOMA.NENAZADNJE.NENEHOMA."
   "NEPRETRGOMA.NEVARNEJE.NE[TETOKRAT.NI@E.NIKAKOR."
   "NIKAMOR.NIKDAR.NIKJER.NIKODER.NIKOLI."
   "NI^.NOCOJ.NOTER.NOTRI.OBENEM."
   "OBILO.ODKAR.ODKOD.ODKODER.ODSLEJ."
   "ODTLEJ.ODVE^.OKOBAL.OKOLI.OKROG."
   "OPOLDAN.OPOLDNE.OPOLNO^I.OSEMKRAT.OSTREJE."
   "PAMETNEJE.PETKRAT.PE[.POCENI.PODNEVI."
   "PODROBNEJE.POGOSTEJE.POJUTRI[NJEM.POKONCI.POL."
   "POLAGOMA.POLEG.POLETI.POMOTOMA.PONAVADI."
   "PONEKOD.PONO^I.POPOLDAN.POPOLDNE.POPOLNOMA."
   "POPREJ.POREDKO.POREDKOMA.POSAMI^.POSEBEJ."
   "POSLEJ.POSREDI.POSTOPOMA.POSTRANI.POTEM."
   "POTEMTAKEM.POTIHOMA.POTLEJ.POVE^INI.POVRH."
   "POVRHU.POVSEM.POVSOD.POZIMI.POZNEJE."
   "PO^ASI.PO^ASNEJE.PO^EZ.PRAV.PRAVKAR."
   "PREBLIZU.PRECEJ.PREDALE^.PREDVSEM.PREJ."
   "PREKMALU.PREMALO.PREPO^ASI.PREPROSTEJE.PREVE^."
   "PREVE^KRAT.PREZGODAJ.PRIHODNJI^.PRIJAZNEJE.PRIJETNEJE."
   "PRIROJENO.PRO^.PRVIKRAT.PRVI^.RAJE."
   "RAJ[I.RANO.RAVNOKAR.RAZEN.RAZLO^NEJE."
   "RAZMEROMA.REDKEJE.REDKOKDAJ.RES.RESDA."
   "SAMKRAT.SEDAJ.SEDEMKRAT.SEM.SICER."
   "SILA.SINO^I.SKOZI.SKRATKA.SKRIVAJ."
   "SKRIVOMA.SKROMNEJE.SKUP.SKUPAJ.SLEDNJI^."
   "SLEJ.SPET.SPODAJ.SPOMLADI.SPOTOMA."
   "SPO^ETKA.SPREDAJ.SPROTI.SPRVA.STE@KA."
   "STOKRAT.STOTI^.STRAN.SUNKOMA.S^ASOMA."
   "TAKO.TAKOJ.TAKOLE.TAKRAT.TAM."
   "TAMLE.TA^AS.TE@E.TEDAJ.TEMELJITEJE."
   "TIK.TISO^KRAT.TISTIKRAT.TI[E.TJA."
   "TOD.TOKRAT.TOLIKANJ.TOLIKO.TOLIKOKRAT."
   "TOPLEJE.TO^NEJE.TREBA.TRETJI^.TRIKRAT."
   "TRUDOMA.TRUMOMA.TU.TUKAJ.TULE."
   "UDOBNEJE.USTREZNEJE.VARNEJE.VEDE.VEDNO."
   "VEKOMAJ.VELIKOKRAT.VEN.VERJETNEJE.VE^."
   "VE^IDEL.VE^INA.VE^INOMA.VE^KRAT.VI[E."
   "VKLJU^NO.VKUP.VMES.VNAPREJ.VNOVI^."
   "VRED.VSAKI^.VSAKOKRAT.VSAKSEBI.VSE."
   "VSEENO.VSEKAKOR.VSELEJ.VSEPOVSOD.VSESKOZI."
   "VSEVPREK.VSTRAN.VTEM.VZNAK.V[TRIC."
   "V^ASIH.V^ERAJ.ZA.ZADAJ.ZADNJI^."
   "ZADOSTI.ZAENKRAT.ZAGOTOVO.ZAKAJ.ZAMAN."
   "ZAPORED.ZAPOVRSTJO.ZARES.ZASTONJ.ZATEGADELJ."
   "ZATEM.ZATO.ZATOREJ.ZATRDNO.ZAUPNEJE."
   "ZAVOLJO.ZA^UDO.ZA_^UDO.ZBLIZA.ZDAJ."
   "ZDALE^.ZDAVNAJ.ZDOMA.ZDR@EMA.ZELO."
   "ZGODAJ.ZGOLJ.ZGORAJ.ZJUTRAJ.ZLAGOMA."
   "ZLAHKA.ZLASTI.ZLEPA.ZMERAJ.ZMEROM."
   "ZNOSNEJE.ZNOTRAJ.ZNOVA.ZRAVEN.ZUNAJ."
   "ZVE^ER.ZVE^INE.ZVI[KA.[ESTKRAT.[TIRIKRAT."
   "^EDALJE.^ETRT.^ETRTI^.^EZ.^E[."
   "^IM.^IMBOLJ.^IMPREJ.^IMVE^.");
}

void TSwSet::AddSiMYuAscii(){
  // (TypeCh=='M')
  MultiAdd(
   "C.CD.CM.D.DC."
   "DESET.DESETA.DESETE.DESETEGA.DESETEM."
   "DESETEMU.DESETER.DESETERA.DESETERE.DESETEREGA."
   "DESETEREM.DESETEREMU.DESETERI.DESETERIH.DESETERIM."
   "DESETERIMA.DESETERIMI.DESETERO.DESETI.DESETIH."
   "DESETIM.DESETIMA.DESETIMI.DESETO.DEVET."
   "DEVETA.DEVETDESET.DEVETDESETA.DEVETDESETE.DEVETDESETEGA."
   "DEVETDESETEM.DEVETDESETEMU.DEVETDESETI.DEVETDESETIH.DEVETDESETIM."
   "DEVETDESETIMA.DEVETDESETIMI.DEVETDESETO.DEVETE.DEVETEGA."
   "DEVETEM.DEVETEMU.DEVETI.DEVETIH.DEVETIM."
   "DEVETIMA.DEVETIMI.DEVETINTRIDESET.DEVETINTRIDESETIH.DEVETINTRIDESETIM."
   "DEVETINTRIDESETIMI.DEVETNAJST.DEVETNAJSTA.DEVETNAJSTE.DEVETNAJSTEGA."
   "DEVETNAJSTEM.DEVETNAJSTEMU.DEVETNAJSTI.DEVETNAJSTIH.DEVETNAJSTIM."
   "DEVETNAJSTIMA.DEVETNAJSTIMI.DEVETNAJSTO.DEVETO.DEVETSTO."
   "DEVETSTOTIH.DEVETSTOTIM.DEVETSTOTIMI.DI.DLI."
   "DRUGA.DRUGE.DRUGEGA.DRUGEM.DRUGEMU."
   "DRUGI.DRUGIH.DRUGIM.DRUGIMA.DRUGIMI."
   "DRUGO.DVA.DVAINDEVETDESETA.DVAINDEVETDESETE.DVAINDEVETDESETEGA."
   "DVAINDEVETDESETEM.DVAINDEVETDESETEMU.DVAINDEVETDESETI.DVAINDEVETDESETIH.DVAINDEVETDESETIM."
   "DVAINDEVETDESETIMA.DVAINDEVETDESETIMI.DVAINDEVETDESETO.DVAINDVAJSET.DVAINDVAJSETIH."
   "DVAINDVAJSETIM.DVAINDVAJSETIMI.DVAIN[ESTDESET.DVAIN[ESTDESETIH.DVAIN[ESTDESETIM."
   "DVAIN[ESTDESETIMI.DVAJSET.DVAJSETA.DVAJSETE.DVAJSETEGA."
   "DVAJSETEM.DVAJSETEMU.DVAJSETI.DVAJSETIH.DVAJSETIM."
   "DVAJSETIMA.DVAJSETIMI.DVAJSETO.DVAKRATEN.DVAKRATNA."
   "DVAKRATNE.DVAKRATNEGA.DVAKRATNEM.DVAKRATNEMU.DVAKRATNI."
   "DVAKRATNIH.DVAKRATNIM.DVAKRATNIMA.DVAKRATNIMI.DVAKRATNO."
   "DVANAJST.DVANAJSTA.DVANAJSTE.DVANAJSTEGA.DVANAJSTEM."
   "DVANAJSTEMU.DVANAJSTI.DVANAJSTIH.DVANAJSTIM.DVANAJSTIMA."
   "DVANAJSTIMI.DVANAJSTO.DVE.DVEH.DVEMA."
   "DVESTO.DVESTOTA.DVESTOTE.DVESTOTEGA.DVESTOTEM."
   "DVESTOTEMU.DVESTOTI.DVESTOTIH.DVESTOTIM.DVESTOTIMA."
   "DVESTOTIMI.DVESTOTO.DVOJ.DVOJA.DVOJE."
   "DVOJEGA.DVOJEM.DVOJEMU.DVOJEN.DVOJI."
   "DVOJIH.DVOJIM.DVOJIMA.DVOJIMI.DVOJNA."
   "DVOJNE.DVOJNEGA.DVOJNEM.DVOJNEMU.DVOJNI."
   "DVOJNIH.DVOJNIM.DVOJNIMA.DVOJNIMI.DVOJNO."
   "DVOJO.EDEN.EN.ENA.ENAINDVAJSET."
   "ENAINDVAJSETA.ENAINDVAJSETE.ENAINDVAJSETEGA.ENAINDVAJSETEM.ENAINDVAJSETEMU."
   "ENAINDVAJSETI.ENAINDVAJSETIH.ENAINDVAJSETIM.ENAINDVAJSETIMA.ENAINDVAJSETIMI."
   "ENAINDVAJSETO.ENAINTRIDESET.ENAINTRIDESETIH.ENAINTRIDESETIM.ENAINTRIDESETIMI."
   "ENAJST.ENAJSTA.ENAJSTE.ENAJSTEGA.ENAJSTEM."
   "ENAJSTEMU.ENAJSTI.ENAJSTIH.ENAJSTIM.ENAJSTIMA."
   "ENAJSTIMI.ENAJSTO.ENE.ENEGA.ENEM."
   "ENEMU.ENI.ENIM.ENKRATEN.ENKRATNA."
   "ENKRATNE.ENKRATNEGA.ENKRATNEM.ENKRATNEMU.ENKRATNI."
   "ENKRATNIH.ENKRATNIM.ENKRATNIMA.ENKRATNIMI.ENKRATNO."
   "ENO.I.II.III.IV."
   "IX.L.LI.M.MI."
   "ML.NI^.OSEM.OSEMDESET.OSEMDESETA."
   "OSEMDESETE.OSEMDESETEGA.OSEMDESETEM.OSEMDESETEMU.OSEMDESETI."
   "OSEMDESETIH.OSEMDESETIM.OSEMDESETIMA.OSEMDESETIMI.OSEMDESETO."
   "OSEMINDEVETDESET.OSEMINDEVETDESETIH.OSEMINDEVETDESETIM.OSEMINDEVETDESETIMI.OSEMIN[TIRIDESET."
   "OSEMIN[TIRIDESETIH.OSEMIN[TIRIDESETIM.OSEMIN[TIRIDESETIMI.OSEMNAJST.OSEMNAJSTA."
   "OSEMNAJSTE.OSEMNAJSTEGA.OSEMNAJSTEM.OSEMNAJSTEMU.OSEMNAJSTI."
   "OSEMNAJSTIH.OSEMNAJSTIM.OSEMNAJSTIMA.OSEMNAJSTIMI.OSEMNAJSTO."
   "OSMA.OSME.OSMEGA.OSMEM.OSMEMU."
   "OSMI.OSMIH.OSMIM.OSMIMA.OSMIMI."
   "OSMO.PET.PETA.PETDESET.PETDESETA."
   "PETDESETE.PETDESETEGA.PETDESETEM.PETDESETEMU.PETDESETI."
   "PETDESETIH.PETDESETIM.PETDESETIMA.PETDESETIMI.PETDESETO."
   "PETE.PETEGA.PETEM.PETEMU." //PETER.
   "PETERA.PETERE.PETEREGA.PETEREM.PETEREMU."
   "PETERI.PETERIH.PETERIM.PETERIMA.PETERIMI."
   "PETERO.PETI.PETIH.PETIM.PETIMA."
   "PETIMI.PETINDEVETDESET.PETINDEVETDESETIH.PETINDEVETDESETIM.PETINDEVETDESETIMI."
   "PETINDVAJSET.PETINDVAJSETA.PETINDVAJSETE.PETINDVAJSETEGA.PETINDVAJSETEM."
   "PETINDVAJSETEMU.PETINDVAJSETI.PETINDVAJSETIH.PETINDVAJSETIM.PETINDVAJSETIMA."
   "PETINDVAJSETIMI.PETINDVAJSETO.PETINOSEMDESET.PETINOSEMDESETA.PETINOSEMDESETE."
   "PETINOSEMDESETEGA.PETINOSEMDESETEM.PETINOSEMDESETEMU.PETINOSEMDESETI.PETINOSEMDESETIH."
   "PETINOSEMDESETIM.PETINOSEMDESETIMA.PETINOSEMDESETIMI.PETINOSEMDESETO.PETINPETDESET."
   "PETINPETDESETIH.PETINPETDESETIM.PETINPETDESETIMI.PETINSEDEMDESET.PETINSEDEMDESETIH."
   "PETINSEDEMDESETIM.PETINSEDEMDESETIMI.PETINTRIDESET.PETINTRIDESETA.PETINTRIDESETE."
   "PETINTRIDESETEGA.PETINTRIDESETEM.PETINTRIDESETEMU.PETINTRIDESETI.PETINTRIDESETIH."
   "PETINTRIDESETIM.PETINTRIDESETIMA.PETINTRIDESETIMI.PETINTRIDESETO.PETIN[TIRIDESET."
   "PETIN[TIRIDESETA.PETIN[TIRIDESETE.PETIN[TIRIDESETEGA.PETIN[TIRIDESETEM.PETIN[TIRIDESETEMU."
   "PETIN[TIRIDESETI.PETIN[TIRIDESETIH.PETIN[TIRIDESETIM.PETIN[TIRIDESETIMA.PETIN[TIRIDESETIMI."
   "PETIN[TIRIDESETO.PETNAJST.PETNAJSTA.PETNAJSTE.PETNAJSTEGA."
   "PETNAJSTEM.PETNAJSTEMU.PETNAJSTI.PETNAJSTIH.PETNAJSTIM."
   "PETNAJSTIMA.PETNAJSTIMI.PETNAJSTO.PETO.PETSTO."
   "PETSTOTIH.PETSTOTIM.PETSTOTIMI.PRVA.PRVE."
   "PRVEGA.PRVEM.PRVEMU.PRVI.PRVIH."
   "PRVIM.PRVIMA.PRVIMI.PRVO.SEDEM."
   "SEDEMDESET.SEDEMDESETA.SEDEMDESETE.SEDEMDESETEGA.SEDEMDESETEM."
   "SEDEMDESETEMU.SEDEMDESETI.SEDEMDESETIH.SEDEMDESETIM.SEDEMDESETIMA."
   "SEDEMDESETIMI.SEDEMDESETO.SEDEMINDVAJSET.SEDEMINDVAJSETA.SEDEMINDVAJSETE."
   "SEDEMINDVAJSETEGA.SEDEMINDVAJSETEM.SEDEMINDVAJSETEMU.SEDEMINDVAJSETI.SEDEMINDVAJSETIH."
   "SEDEMINDVAJSETIM.SEDEMINDVAJSETIMA.SEDEMINDVAJSETIMI.SEDEMINDVAJSETO.SEDEMINPETDESET."
   "SEDEMINPETDESETIH.SEDEMINPETDESETIM.SEDEMINPETDESETIMI.SEDEMIN[ESTDESET.SEDEMIN[ESTDESETIH."
   "SEDEMIN[ESTDESETIM.SEDEMIN[ESTDESETIMI.SEDEMNAJST.SEDEMNAJSTA.SEDEMNAJSTE."
   "SEDEMNAJSTEGA.SEDEMNAJSTEM.SEDEMNAJSTEMU.SEDEMNAJSTI.SEDEMNAJSTIH."
   "SEDEMNAJSTIM.SEDEMNAJSTIMA.SEDEMNAJSTIMI.SEDEMNAJSTO.SEDEMSTO."
   "SEDEMSTOTIH.SEDEMSTOTIM.SEDEMSTOTIMI.SEDMA.SEDME."
   "SEDMEGA.SEDMEM.SEDMEMU.SEDMI.SEDMIH."
   "SEDMIM.SEDMIMA.SEDMIMI.SEDMO.STO."
   "STOTA.STOTE.STOTEGA.STOTEM.STOTEMU."
   "STOTER.STOTERA.STOTERE.STOTEREGA.STOTEREM."
   "STOTEREMU.STOTERI.STOTERIH.STOTERIM.STOTERIMA."
   "STOTERIMI.STOTERO.STOTI.STOTIH.STOTIM."
   "STOTIMA.STOTIMI.STOTO.TISO^.TISO^A."
   "TISO^E.TISO^EGA.TISO^EM.TISO^EMU.TISO^ER."
   "TISO^ERA.TISO^ERE.TISO^EREGA.TISO^EREM.TISO^EREMU."
   "TISO^ERI.TISO^ERIH.TISO^ERIM.TISO^ERIMA.TISO^ERIMI."
   "TISO^ERO.TISO^I.TISO^IH.TISO^IM.TISO^IMA."
   "TISO^IMI.TISO^O.TREH.TREM.TREMI."
   "TRETJA.TRETJE.TRETJEGA.TRETJEM.TRETJEMU."
   "TRETJI.TRETJIH.TRETJIM.TRETJIMA.TRETJIMI."
   "TRETJO.TRI.TRIDESET.TRIDESETA.TRIDESETE."
   "TRIDESETEGA.TRIDESETEM.TRIDESETEMU.TRIDESETI.TRIDESETIH."
   "TRIDESETIM.TRIDESETIMA.TRIDESETIMI.TRIDESETO.TRIINDVAJSET."
   "TRIINDVAJSETA.TRIINDVAJSETE.TRIINDVAJSETEGA.TRIINDVAJSETEM.TRIINDVAJSETEMU."
   "TRIINDVAJSETI.TRIINDVAJSETIH.TRIINDVAJSETIM.TRIINDVAJSETIMA.TRIINDVAJSETIMI."
   "TRIINDVAJSETO.TRIINPETDESET.TRIINPETDESETIH.TRIINPETDESETIM.TRIINPETDESETIMI."
   "TRIINTRIDESETA.TRIINTRIDESETE.TRIINTRIDESETEGA.TRIINTRIDESETEM.TRIINTRIDESETEMU."
   "TRIINTRIDESETI.TRIINTRIDESETIH.TRIINTRIDESETIM.TRIINTRIDESETIMA.TRIINTRIDESETIMI."
   "TRIINTRIDESETO.TRIIN[ESTDESET.TRIIN[ESTDESETIH.TRIIN[ESTDESETIM.TRIIN[ESTDESETIMI."
   "TRIJE.TRIKRATEN.TRIKRATNA.TRIKRATNE.TRIKRATNEGA."
   "TRIKRATNEM.TRIKRATNEMU.TRIKRATNI.TRIKRATNIH.TRIKRATNIM."
   "TRIKRATNIMA.TRIKRATNIMI.TRIKRATNO.TRINAJST.TRINAJSTA."
   "TRINAJSTE.TRINAJSTEGA.TRINAJSTEM.TRINAJSTEMU.TRINAJSTI."
   "TRINAJSTIH.TRINAJSTIM.TRINAJSTIMA.TRINAJSTIMI.TRINAJSTO."
   "TRISTO.TRISTOTA.TRISTOTE.TRISTOTEGA.TRISTOTEM."
   "TRISTOTEMU.TRISTOTI.TRISTOTIH.TRISTOTIM.TRISTOTIMA."
   "TRISTOTIMI.TRISTOTO.TROJ.TROJA.TROJE."
   "TROJEGA.TROJEM.TROJEMU.TROJEN.TROJI."
   "TROJIH.TROJIM.TROJIMA.TROJIMI.TROJNA."
   "TROJNE.TROJNEGA.TROJNEM.TROJNEMU.TROJNI."
   "TROJNIH.TROJNIM.TROJNIMA.TROJNIMI.TROJNO."
   "TROJO.V.VI.VII.VIII."
   "X.XI.XII.XIII.XIX."
   "XV.XVI.XVII.XVIII.[EST."
   "[ESTA.[ESTDESET.[ESTDESETA.[ESTDESETE.[ESTDESETEGA."
   "[ESTDESETEM.[ESTDESETEMU.[ESTDESETI.[ESTDESETIH.[ESTDESETIM."
   "[ESTDESETIMA.[ESTDESETIMI.[ESTDESETO.[ESTE.[ESTEGA."
   "[ESTEM.[ESTEMU.[ESTI.[ESTIH.[ESTIM."
   "[ESTIMA.[ESTIMI.[ESTINDVAJSET.[ESTINDVAJSETIH.[ESTINDVAJSETIM."
   "[ESTINDVAJSETIMI.[ESTINTRIDESET.[ESTINTRIDESETIH.[ESTINTRIDESETIM.[ESTINTRIDESETIMI."
   "[ESTNAJST.[ESTNAJSTA.[ESTNAJSTE.[ESTNAJSTEGA.[ESTNAJSTEM."
   "[ESTNAJSTEMU.[ESTNAJSTI.[ESTNAJSTIH.[ESTNAJSTIM.[ESTNAJSTIMA."
   "[ESTNAJSTIMI.[ESTNAJSTO.[ESTO.[ESTSTO.[ESTSTOTIH."
   "[ESTSTOTIM.[ESTSTOTIMI.[TIRI.[TIRIDESET.[TIRIDESETA."
   "[TIRIDESETE.[TIRIDESETEGA.[TIRIDESETEM.[TIRIDESETEMU.[TIRIDESETI."
   "[TIRIDESETIH.[TIRIDESETIM.[TIRIDESETIMA.[TIRIDESETIMI.[TIRIDESETO."
   "[TIRIH.[TIRIINDVAJSET.[TIRIINDVAJSETA.[TIRIINDVAJSETE.[TIRIINDVAJSETEGA."
   "[TIRIINDVAJSETEM.[TIRIINDVAJSETEMU.[TIRIINDVAJSETI.[TIRIINDVAJSETIH.[TIRIINDVAJSETIM."
   "[TIRIINDVAJSETIMA.[TIRIINDVAJSETIMI.[TIRIINDVAJSETO.[TIRIM.[TIRIMI."
   "[TIRINAJST.[TIRINAJSTA.[TIRINAJSTE.[TIRINAJSTEGA.[TIRINAJSTEM."
   "[TIRINAJSTEMU.[TIRINAJSTI.[TIRINAJSTIH.[TIRINAJSTIM.[TIRINAJSTIMA."
   "[TIRINAJSTIMI.[TIRINAJSTO.[TIRISTO.[TIRISTOTIH.[TIRISTOTIM."
   "[TIRISTOTIMI.[TIRJE.^ETRTA.^ETRTE.^ETRTEGA."
   "^ETRTEM.^ETRTEMU.^ETRTI.^ETRTIH.^ETRTIM."
   "^ETRTIMA.^ETRTIMI.^ETRTO.");
}

void TSwSet::AddSiYuAscii(){
  AddSiQCPSIYuAscii();
  AddSiRYuAscii();
  AddSiMYuAscii();

  MultiAdd(
  // biti
    "BI.BIL.BILA.BILE.BILI."
    "BILO.BITI."
    "BO.BODI.BODIMO.BODITA.BODITE."
    "BODIVA.BODO.BOJO.BOM.BOMO."
    "BOSTA.BOSTE.BOVA.BO[.JE."
    "NI.NISEM.NISI.NISMO.NISO."
    "NISTA.NISTE.NISVA.SEM.SI."
    "SMO.SO.STA.STE.SVA."

  // imeti
    "IMA.IMAJO.IMAJO^.IMAM.IMAMO."
    "IMATA.IMATE.IMAVA.IMA[.IMEJ."
    "IMEJMO.IMEJTA.IMEJTE.IMEJVA.IMEL."
    "IMELA.IMELE.IMELI.IMELO.IMET."
    "IMETI.NIMA.NIMAJO.NIMAM.NIMAMO."
    "NIMATA.NIMATE.NIMAVA.NIMA[."

  // free additions
    "BOLJ.BOLJE.LAHKO."
    "GLEDE.ZATO.ZATOREJ."
  );
}

void TSwSet::AddSiIsoCe(){
  PSwSet SiYuAscii=TSwSet::GetSwSet(swstSiYuAscii);
  int SwId=SiYuAscii->FFirstSwId(); TStr SwStr;
  while (SiYuAscii->FNextSwId(SwId, SwStr)){
    Add(THtmlLxChDef::GetIsoCeFromYuascii(SwStr));
  }
}

void TSwSet::AddINetEng(){
  MultiAdd(
    "INTERNET.WWW.WEB.MAIL."
    "SYSTEM.SYSTEMS."
    "TEL.FAX."
    "HOME.PAGE.PAGES.SITE."
    "INFORMATION.LINKS.FILE.USER.END."
  );
}

void TSwSet::AddINetSlo(){
  MultiAdd(
    "DOMA^A.STRAN.STRANI."
    "INFORMACIJE."
  );
}

TSwSet::TSwSet(
 const TSwSetType& _SwSetType, const int& _MnWordLen):
  SwSetType(_SwSetType), SwStrH(), MnWordLen(_MnWordLen){
  switch (SwSetType){
    case swstNone: break;
    case swstEn8:
      MultiAdd("AND.AN.BY.FROM.OF.THE.WITH."); break;
    case swstEn425: AddEn425(); break;
    case swstEn523: AddEn523(); break;
    case swstEnMsdn: AddEnMsdn(); break;
    case swstEs: AddEs(); break;
    case swstGe: AddGe(); break;
    case swstSiYuAscii: AddSiYuAscii(); break;
    case swstSiIsoCe: AddSiIsoCe(); break;
    case swstINetEng: AddINetEng(); break;
    case swstINetSlo: AddINetSlo(); break;
    case swstWebIndex:
      AddEn523(); AddSiIsoCe(); AddINetEng(); AddINetSlo(); break;
    default: Fail;
  }
}

bool TSwSet::IsIn(const TStr& WordStr, const bool& UcWordStrP) const {
  if (WordStr.Len()<MnWordLen){
    return true;
  } else {
    if (UcWordStrP){
      return SwStrH.IsKey(WordStr);
    } else {
      TStr UcWordStr=WordStr.GetUc();
      return SwStrH.IsKey(UcWordStr);
    }
  }
}

void TSwSet::AddWord(const TStr& WordStr){
  if (!WordStr.Empty()){
    //IAssertR(!SwStrH.IsKey(WordStr), WordStr);
    SwStrH.AddKey(WordStr);
  }
}

void TSwSet::LoadFromFile(const TStr& FNm) {
    TStr FileStr = TStr::LoadTxt(FNm);
    FileStr.DelChAll('\r');
    TStrV WordV; FileStr.SplitOnAllCh('\n', WordV);
    for (int WordN = 0; WordN < WordV.Len(); WordN++) {
        const TStr& WordStr = WordV[WordN];
        if (!IsIn(WordStr)) { AddWord(WordStr); }
    }
}

void TSwSet::GetSwSetTypeNmV(TStrV& SwSetTypeNmV, TStrV& SwSetTypeDNmV){
  SwSetTypeNmV.Clr(); SwSetTypeDNmV.Clr();
  SwSetTypeNmV.Add("none"); SwSetTypeDNmV.Add("None");
  SwSetTypeNmV.Add("en8"); SwSetTypeDNmV.Add("English-8");
  SwSetTypeNmV.Add("en425"); SwSetTypeDNmV.Add("English-425");
  SwSetTypeNmV.Add("en523"); SwSetTypeDNmV.Add("English-523");
  SwSetTypeNmV.Add("enMsdn"); SwSetTypeDNmV.Add("English-MSDN");
  SwSetTypeNmV.Add("es"); SwSetTypeDNmV.Add("Spanish");
  SwSetTypeNmV.Add("german"); SwSetTypeDNmV.Add("German");
  SwSetTypeNmV.Add("siyuascii"); SwSetTypeDNmV.Add("Slovenian-YuAscii");
  SwSetTypeNmV.Add("siisoce"); SwSetTypeDNmV.Add("Slovenian-IsoLatin2");
}

TStr TSwSet::GetSwSetTypeNmVStr(){
  TChA ChA;
  ChA+='(';
  ChA+="en8"; ChA+=", ";
  ChA+="en425"; ChA+=", ";
  ChA+="en523"; ChA+=", ";
  ChA+="enMsdn"; ChA+=", ";
  ChA+="es"; ChA+=", ";
  ChA+="ge"; ChA+=", ";
  ChA+="siyuascii"; ChA+=", ";
  ChA+="siisoce"; ChA+=")";
  return ChA;
}

TSwSetType TSwSet::GetSwSetType(const TStr& SwSetTypeNm){
  TStr LcSwSetTypeNm=SwSetTypeNm.GetLc();
  if (LcSwSetTypeNm=="none"){return swstNone;}
  else if (LcSwSetTypeNm=="en8"){return swstEn8;}
  else if (LcSwSetTypeNm=="en425"){return swstEn425;}
  else if (LcSwSetTypeNm=="en523"){return swstEn523;}
  else if (LcSwSetTypeNm=="enMsdn"){return swstEnMsdn;}
  else if (LcSwSetTypeNm=="es"){return swstEs;}
  else if (LcSwSetTypeNm=="german"){return swstGe;}
  else if (LcSwSetTypeNm=="siyuascii"){return swstSiYuAscii;}
  else if (LcSwSetTypeNm=="siisoce"){return swstSiIsoCe;}
  else {return swstNone;}
}

PSwSet TSwSet::GetSwSet(const TSwSetType& SwSetType){
  static THash<TInt, PSwSet> SwSetTypeToSwSetH;
  PSwSet SwSet;
  if (SwSetTypeToSwSetH.IsKeyGetDat(TInt(int(SwSetType)), SwSet)){
  } else {
    SwSet=TSwSet::New(SwSetType);
    SwSetTypeToSwSetH.AddDat(TInt(int(SwSetType)), SwSet);
  }
  return SwSet;
}


