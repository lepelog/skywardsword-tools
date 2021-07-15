          void entrypoint_108_03() {
/*< 32>*/ 	start()
/*<255>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 113, 'next': 33, 'param3': 24}
/*< 33>*/ 	printf("\x0E\x01\x08\x02\x1CDVia!!!\x0E\x01\x05\x04\x0F\x00")
          }

          void entrypoint_108_20() {
/*<156>*/ 	start()
/*<289>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<290>*/ 		printf("\x0E\x01\x09\x04\x00\x01La statua della Dea è scomparsa, ma\nquesto non significa che sia scomparsa\nanche la Dea! Lei è sempre tra noi,\nvero Link?")
          	  case 1:
/*<282>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*<283>*/ 			printf("\x0E\x01\x09\x04\x00\x01Ragazzo, mi sembra che ultimamente i\ntuoi progressi siano notevoli!\nTi stai impegnando a fondo, eh?!\nBravo!")
          		  case 1:
/*<278>*/ 			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          			  case 0:
/*<281>*/ 				printf("\x0E\x01\x09\x04\x00\x01Cosa? Narisha?!<pause28>\nHo sentito qualche voce su di lui...\n\n\nMa purtroppo non ne so molto.\n\n\n\nDovresti chiedere al <b<maestro Asio Otus\n>>di insegnartelo. È lui che si occupa\ndell'insegnamento della pratica. ")
          			  case 1:
/*<279>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<280>*/ 					printf("\x0E\x01\x09\x04\x00\x01Non trovi che Fifì sia proprio carina?!<pause1E>\nTriforza? Cos'è?<pause28>\nC'entra qualcosa con Fifì?")
          				  case 1:
/*<157>*/ 					printf("\x0E\x01\x09\x04\x00\x01Ho iniziato a occuparmi\ndi Fifì, come mi aveva \nchiesto di fare il direttore.\n\nÈ davvero una bestiola tenera!\nVorrei anch'io un prociatto...")
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_04() {
/*< 34>*/ 	start()
/*<151>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 59, 'param3': 32}
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': -1, 'next': 153, 'param3': 50}
/*<153>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 150, 'param3': 49}
/*<150>*/ 	make_actor_do_something(0, 10)
/*<152>*/ 	{'type': 'type3', 'subType': 4, 'param1': 2578, 'param2': 2562, 'next': 35, 'param3': 13}
/*< 35>*/ 	printf("\x0E\x01\x0D\x02\x1906\x0E\x01\x08\x02\x1CDEhi, Link!\nDi qua!\n")
/*< 57>*/ 	set_camera(11, 0)
/*<244>*/ 	make_actor_do_something(1, 10)
/*<213>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 10, 'next': 261, 'param3': 17}
/*<261>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<262>*/ 		printf("\x0E\x01\x09\x04\xA0E\xA01Buongiorno, Link!\nFantastico, hai deciso di cimentarti\nnella <r<modalità eroica>>!\n\nOggi è il gran giorno del <r<battesimo del\nvolo>>, come ti senti?\n\n\nVorrei parlare con te! Tieni premuto\n(Z) e guarda da questa parte.\nCon (A) puoi rivolgermi la parola.\x0E\x01\x11\x02\x7CD")
          		flw_64:
/*< 64>*/ 		scene_flags[0 'Skyloft'][36 /* 0x5 10 */] = true;
/*< 75>*/ 		story_flags[565 /* us: 805A9B19 0x10, jp: 805ACD99 0x10 */] = true;
/*<254>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*< 56>*/ 		printf("\x0E\x01\x09\x04\xA0E\xA01Buongiorno Link! \nOggi è il giorno del <r<battesimo del volo>>!\nTi senti in forma?\nVorrei dirti un paio di cose...\nGirati verso di me tenendo\npremuto (Z) e parlami premendo (A).\x0E\x01\x11\x02\x7CD")
          		goto flw_64
          	}
          }

          void entrypoint_108_21() {
/*<186>*/ 	start()
/*<192>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 190, 'param3': 32}
/*<190>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 187, 'param3': 13}
/*<187>*/ 	printf("\x0E\x01\x08\x02\x1CDEhi, Link!")
/*<188>*/ 	printf("\x0E\x01\n\x04\x12Í\x0E\x01\x09\x04\n\x202È inutile provarci. Non riuscirai\nmai a salire sul tetto solo con lo\n<g<sprint>> con (A).")
/*<191>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 193, 'param3': 17}
/*<193>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 189, 'param3': 6}
/*<189>*/ 	set_camera(19, 0)
/*<230>*/ 	printf("Dovrebbe esserci una cassa\ndi legno lassù. Se la <g<sposti>>,<g<\nspingendola >>con (A), puoi\nusarla come base per salire.\nMettila vicino al muro e poi effettua\nuno <g<sprint >>con (A) o usa \x0E\x02\x04\x02\x9CD per\nsalire.")
          }

          void entrypoint_108_05() {
/*< 36>*/ 	start()
/*<267>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<268>*/ 		printf("\x0E\x01\x09\x04\x0B\xA03Mmh... vedo che adesso sei diventato\nun asso nell'usare lo (A) <g<sprint>>!\n\n\nMa se esageri esaurirai il\n<r<vigore>> e ti sentirai uno\nstraccio!\n\nBene! Vuoi che prosegua con\nqualche altra lezione?\n[1]Sì[2-]No")
/*<270>*/ 		switch (choice(2)) {
          		  case 0:
/*<271>*/ 			printf("Una distanza del genere puoi saltarla\nsenza problemi! Si chiama <g<salto\nautomatico>>!\n\nAutomatico\x0E\x01\x06\x02\xFCCD...<pause0F> \x0E\x01\x06\x02Ísuona molto bene,\nnon trovi?")
          		  case 1:
/*<269>*/ 			printf("Bene, bene... ora vieni qui, svelto!")
          		}
          	  case 1:
/*<266>*/ 		printf("\x0E\x01\x09\x04\x0B\xA03Comodo, no, fare uno <g<sprint >>con (A)?\n\n\n\nMa se esageri, esaurirai il <r<vigore\n>>e ti sentirai uno straccio... \n\n\nSe ti senti stanco, riposati un po'!\n\n\n\nBene, andiamo avanti!\n\n\n\nSupererai distanze del genere\nsaltando automaticamente mentre\nti muovi! Questo si chiama\n<g<salto automatico>>!\nAutomatico\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í non è una\nbella parola?")
          	}
          }

          void entrypoint_108_22() {
/*<208>*/ 	start()
/*<210>*/ 	switch (scene_flags[92 /* 0xA 10 */]) {
          	  case 0:
/*<211>*/ 		printf("\x0E\x01\x09\x04\x00\x01Ho disposto che l'inizio della\ncerimonia sia rinviato fino a\nquando non ritrovi il tuo solcanubi.\nTu preoccupati solo di quello!")
          	  case 1:
/*<212>*/ 		printf("\x0E\x01\x09\x04\x00\x01Sono davvero felice\nche l'inizio della cerimonia\nsia stato rimandato!\nCosì potrai ritrovare il tuo solcanubi!")
          	}
          }

          void entrypoint_108_06() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf("\x0E\x01\x09\x04\x0B\xA52Ehi, Link!\nNon far finta di niente!\nFai quello che dice il maestro!\n\nGirati verso di me tenendo\npremuto (Z) e parla con (A).\x0E\x01\x11\x02\x7CD")
          }

          void entrypoint_108_23() {
/*<217>*/ 	start()
/*<225>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<226>*/ 		printf("\x0E\x01\x09\x04\x00\x01Allora, Link!\nRiesci a cavartela?\n\n\nSe dovessi avere problemi,\nnon fare complimenti e\nvieni a parlare con me!")
          	  case 1:
/*<221>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*<224>*/ 			printf("\x0E\x01\x09\x04\x00\x01L'attacco avvitato\nè una manovra alquanto impegnativa\nper un solcanubi!\n\nMa con il tuo bel carminio,\nnon dovresti avere problemi...")
          		  case 1:
/*<220>*/ 			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          			  case 0:
/*<223>*/ 				printf("\x0E\x01\x09\x04\x00\x05Link...\nChe ci fai qui nel\ncuore della notte?\n\nCosa?! Narisha?!\nBah, questi non sono discorsi\nda fare in piena notte!\n\nTorna domani mattina.\nTe ne parlerò nei dettagli!")
          			  case 1:
/*<219>*/ 				switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          				  case 0:
/*<222>*/ 					printf("\x0E\x01\x09\x04\x00\x01Come va, Link?\nHai trovato Zelda?\n\n\nSono certo che riuscirai\na trovarla.\nCredo in te!")
          				  case 1:
/*<218>*/ 					printf("\x0E\x01\x09\x04\x00\x01Di notte i nostri\nsolcanubi non possono volare.\nNon possiamo cercare Zelda.\nPer oggi, riposati un pochino!\nPartiremo domani.\nOgni tanto una bella pausa\naiuta a ritrovare la tranquillità!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_07() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf("\x0E\x01\x09\x04\n\xA00\x0E\x01\x08\x02\x2CDEhi, Link!\n\n\n\n\x0E\x01\x08\x02\x2CDTi sto aspettando!")
          }

          void entrypoint_108_24() {
/*<232>*/ 	start()
/*<245>*/ 	switch (scene_flags[41 /* 0x4 02 */]) {
          	  case 0:
/*<238>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ahi, ahi, Link!\nNon è il caso di fare\ncerte cose!\n\nVai subito a cercare il\ntuo solcanubi! Ascolta quello che\nti dicono i tuoi compagni!")
          	  case 1:
/*<239>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<246>*/ 			printf("\x0E\x01\x09\x04\x00\x02Ahi, ahi, Link!\nChe fai, te ne vai di soppiatto?\n\n\nVieni qui!")
          		  case 1:
/*<233>*/ 			printf("\x0E\x01\x09\x04\x00\x02Ahi, ahi, Link!\nNon bisogna ignorare gli\ninsegnamenti del maestro...\n\nVieni qui e ascolta quello\nche ho da dirti!")
          		}
          	}
          }

          void entrypoint_108_08() {
/*< 76>*/ 	start()
/*< 88>*/ 	switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          	  case 0:
/*<209>*/ 		printf("")
          	  case 1:
/*< 83>*/ 		switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          		  case 0:
/*< 85>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 77, 'param3': 31}
/*< 77>*/ 			printf("\x0E\x01\x09\x04\x00\x01Ehi, Link,\ncome va la ricerca di Zelda?\nL'hai trovata?\n\n\x0E\x01\x09\x04\x00\x05Cosa?<pause28> Narisha?\nHai chiesto al direttore?\n\n\nSì, sono sicuro che Narisha\nfosse dentro quella nuvola...\n\n\nMa quello\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í <pause19>non è il nostro Narisha.\n\x0E\x01\x06\x02\xFECDQuello è...<pause28>\x0E\x01\x06\x02\x1CD un <r<mostro>>!\n\n\n\x0E\x01\x09\x04\x00\x0FSembrava proprio Narisha,\nma poi mi sono avvicinato e...\n\n\nHa cercato di attaccarmi con\nil suo corpo enorme!\n\n\nIn quel momento, nei suoi occhi\nho visto un grande odio...\n\n\nDicono che le persone cambiano...\n\x0E\x01\x06\x02\xFECDma così... \x0E\x01\x06\x02Í<pause19>ho la sensazione che\n<pause19> sia posseduto.")
/*<203>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 78, 'param3': 6}
/*< 78>*/ 			printf("\x0E\x01\x09\x04\x00\x05Cosa? <pause28>Vorresti parlare\ncon Narisha?\n\n\n\x0E\x01\x06\x02\xFECDMa è...\x0E\x01\x06\x02Í impossibile!\nIl Narisha di questo tempo\nnon comprenderebbe le parole\ndegli umani.\n\x0E\x01\x06\x02\xFECDE poi...\x0E\x01\x06\x02Í se ti avvicini a lui per\nparlare finirai anche tu nel\nmare di nuvole.")
/*<204>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 201, 'param3': 6}
/*<201>*/ 			printf("\x0E\x01\x09\x04\x00REh?! <pause28>... Allora vai lo stesso?\n\n\n\n\x0E\x01\x06\x02\xFECDCapisco... \x0E\x01\x06\x02Ílo fai per trovare Zelda?\n\n\n\n... Va bene.<pause1E> Del resto non credo\nche ti fermeresti anche se te lo\nchiedessi.")
/*<205>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 202, 'param3': 6}
/*<202>*/ 			printf("Bene! Ho un'idea... vieni con me!")
/*< 86>*/ 			story_flags[362 /* us: 805A9B03 0x01, jp: 805ACD83 0x01 */] = true;
/*< 87>*/ 			changeScene(0, 0) // 
          		  case 1:
/*<276>*/ 			switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          			  case 0:
/*<277>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ciao Link!\n<pause1E>Come? Triforza, dici?!\n\n\nMi dispiace, ragazzo, non ne so nulla!\nPerché non provi a chiedere al\ndirettore?")
          			  case 1:
/*< 84>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ehi, Link,\ncome va la ricerca di Zelda?\n\n\nMi dispiace di averti affidato\nquest'incarico difficile.\nMa conto su di te! Trovala!")
          			}
          		}
          	}
          }

          void entrypoint_108_09() {
/*< 79>*/ 	start()
/*< 80>*/ 	printf("\x0E\x01\x09\x04\x00\x02Ho avuto l'impressione che, dentro\nquella nuvola, Narisha fosse come\nposseduto.\n\nSe riuscissimo a liberarlo da quella\nforza malefica, riavremmo il nostro\nNarisha. Giusto, Link?\n\nAllora, adesso ti insegnerò una\ntecnica speciale da usare col solcanubi.\n\n\n\x0E\x01\x09\x04\x00\x03Si chiama <r<attacco avvitato>>!")
/*<259>*/ 	set_camera(22, 0)
/*<257>*/ 	printf("Grazie all'attacco avvitato, potrai\neffettuare un colpo molto potente,\nin grado di ferire il parassita che\ninfesta Narisha!\nEseguire un attacco avvitato di per sé\nnon è difficile. Basta premere (A).\n\n\nRispetto agli <r<attacchi >>normali,\nl'accelerazione dura più a lungo\ne risulta difficile mantenere la\ndirezione.\nAlla scuola d'armi questa è una\ntecnica ritenuta di alto livello, \nriservata agli esperti. Forse per te è\nancora presto per impararla...\n<pause1E>Ma voglio metterti alla prova\nper vedere se hai talento...")
/*<260>*/ 	set_camera(-1, 0)
/*<258>*/ 	printf("\x0E\x01\x09\x04\x00\x04Per prima cosa, lanciati\ne vola in groppa al solcanubi.")
/*< 94>*/ 	story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
/*< 99>*/ 	story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*<249>*/ 	zone_temp_flags[13 /* 0x0 20 */] = true;
          }

          void entrypoint_108_10() {
/*< 91>*/ 	start()
/*<129>*/ 	switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          	  case 0:
/*<130>*/ 		printf("\x0E\x01\x09\x04\x00\x0FQuello che è successo\na Zelda è davvero terribile...\n\n\nMa tu non devi tormentarti...\nÈ stato un incidente...")
          	  case 1:
/*<128>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<197>*/ 			switch (scene_flags[91 /* 0xA 08 */]) {
          			  case 0:
/*<199>*/ 				printf("\x0E\x01\x09\x04\x00\x01Non preoccuparti per la cerimonia.\nVai subito a cercare il solcanubi!")
          			  case 1:
/*<127>*/ 				printf("\x0E\x01\x09\x04\x00\x0FChe succede, Link?\n<pause1E>Il tuo solcanubi non risponde\nal richiamo?\n\nÈ una cosa molto strana, direi\npraticamente impossibile\x0E\x01\x06\x02\xFECD...\n\n\nNe hai parlato con il responsabile\ndella cerimonia, il <b<maestro\nCornelio>>?\n\nAh... se ne hai già parlato con il\ndirettore, si troverà una\nsoluzione...\n\nIntanto, vai a cercare il tuo\nsolcanubi al più presto!")
/*<200>*/ 				scene_flags[0 'Skyloft'][91 /* 0xA 08 */] = true;
          			}
          		  case 1:
/*<195>*/ 			switch (scene_flags[90 /* 0xA 04 */]) {
          			  case 0:
/*<196>*/ 				printf("\x0E\x01\x09\x04\x00\x01Veramente ti capita spesso di\nconfondere me con il <b<maestro\nCornelio>>...\n\nIo sono il <b<maestro Asio Otus >>e\nho i capelli bianchi; il <b<maestro\nCornelio>>, invece, ha i capelli neri!\nForse così te lo ricorderai meglio!")
          			  case 1:
/*< 92>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ehi, Link! \nOggi è il giorno del <r<battesimo del volo>>!\n\n\nRicordati delle teorie che ti ho spiegato\nio, il maestro <b<Asio Otus>>, e di quelle del\nmaestro <b<Cornelio >>e fai del tuo meglio!\n\nA proposito, ti ricordi come ci si\n<r<guarda intorno >>con (C)?\x0E\x01\x11\x02\x6CD\nSe vuoi guardarti bene intorno,\n<g<premi >>(C)!\x0E\x01\x11\x02\x6CD\nSe poi hai la sensazione che il <r<cursore si\nstia spostando dal centro>>, punta il\ntelecomando verso lo schermo e\n<g<premi >>(v)! Visto? Semplice, no?\x0E\x01\x11\x02\x9CD")
/*<198>*/ 				scene_flags[0 'Skyloft'][90 /* 0xA 04 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_108_11() {
/*<123>*/ 	start()
/*<163>*/ 	switch (scene_flags[20 /* 0x3 10 */]) {
          	  case 0:
/*<273>*/ 		switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          		  case 0:
/*<275>*/ 			printf("\x0E\x01\x09\x04\x00\x01Intendi dire che esiste davvero il\nmondo chiamato Terra?!\n\n\nSupponendo che sia così, immagino\nche sia esattamente l'opposto del\nnostro bel mondo rigoglioso...")
          		  case 1:
/*<272>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<274>*/ 				printf("\x0E\x01\x09\x04\x00\x01Come vanno le ricerche di Zelda,\nstanno procedendo?\n\n\nQuando sei stanco, riposati su un letto!\nPuoi dormire fino a sera o recuperare\ntutti i cuori, sai?!")
          			  case 1:
/*<167>*/ 				printf("\x0E\x01\x09\x04\x00\x01Abbi cura di te! Ricorda che le sorti di\nZelda sono nelle tue mani...\nMi raccomando!")
          			}
          		}
          	  case 1:
/*<168>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 124, 'param3': 31}
/*<124>*/ 		printf("\x0E\x01\x09\x04\x00\x11Link, ho sentito che\nvuoi andare a cercare Zelda\nal di sotto delle nuvole...\n\nIl direttore dice che laggiù\nci sia la Terra...\nTu che cosa sai della Terra?")
/*<169>*/ 		switch (adventure_pouch_has(9 0x0009)) {
          		  case 0:
/*<171>*/ 			printf("Ah, quella è la famosa spada?\nMa lo scudo<pause0A>.<pause0A>.<pause0A>.<pause0A>\n\n\nUhm... hai ottenuto uno scudo\ncome si deve! Bravo!\nBeh, è il momento di dirsi addio...")
          			flw_172:
/*<172>*/ 			give_item(4 0x04);
/*<256>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 173, 'param3': 12}
          			flw_173:
/*<173>*/ 			printf("Se non sai come usare lo scudo,\nfattelo insegnare dal <b<primo cavaliere>>.\nLo trovi alla palestra di scherma.")
/*<166>*/ 			scene_flags[0 'Skyloft'][20 /* 0x3 10 */] = true;
/*<214>*/ 			switch (scene_flags[89 /* 0xA 02 */]) {
          			  case 0:
          			  case 1:
/*<215>*/ 				story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
/*<216>*/ 				scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
          			}
          		  case 1:
/*<247>*/ 			switch (is_adventure_pouch_full()) {
          			  case 0:
/*<248>*/ 				printf("Ah, quella è la famosa spada?\nPerò, senza un buono scudo\nnon andrai molto lontano.\n\nTe ne avrei dato uno ma hai la\nborsa piena. Ecco, prendi questo\npiccolo regalo da parte mia...")
          				goto flw_172
          			  case 1:
/*<170>*/ 				printf("Ah, quella è la famosa spada?\nPerò, senza un buono scudo\nnon andrai molto lontano.\n\nPrendi questo!")
/*<164>*/ 				give_item(116 0x74);
/*<165>*/ 				printf("Lo scudo di legno è leggero\ne maneggevole, ma è il\npiù fragile degli scudi.\n\nÈ vulnerabile al fuoco\nma se si rompe lo puoi\nricomprare al bazar.\n\nScegli uno scudo ed equipaggialo\n<g<tenendo premuto>> <g<\x0E\x02\x04\x02\x2CD >>e\n<g<spostando >>il telecomando.\x0E\x01\x11\x02\x2CD")
          				goto flw_173
          			}
          		}
          	}
          }

          void entrypoint_108_12() {
/*< 95>*/ 	start()
/*<206>*/ 	switch (scene_flags[77 /* 0x8 20 */]) {
          	  case 0:
/*<207>*/ 		printf("")
          	  case 1:
/*< 97>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*< 81>*/ 			printf("\x0E\x01\x09\x04\x00\nOh! Sei riuscito a distruggere 10\nbersagli nel tempo stabilito!\nSplendido!\n\nSe riesci a cavalcare il solcanubi\ncosì bene, non avrai problemi!\nLink! Tu e il tuo solcanubi\nrosso siete davvero unici!\nOra hai il mio permesso\ndi usare l'attacco avvitato!")
/*< 82>*/ 			printf("E ora veniamo a come\ntrovare Narisha...\n\n\nOgni anno si fa un'offerta \ndi zuppa di zucca a Narisha.\nIl titolare della <r<taverna delle zucche>>\nsaprà darti informazioni!\nVai da lui e chiedi!")
/*<107>*/ 			scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = true;
          		  case 1:
/*< 96>*/ 			switch (story_flags[641 /* us: 805A9B1D 0x04, jp: 805ACD9D 0x04 */]) {
          			  case 0:
/*< 98>*/ 				printf("\x0E\x01\x09\x04\x00\x0FUhm... non riesci ancora a distruggere\ni 10 bersagli in meno di <r<120 secondi>>.\nMi dispiace ma non posso rivelarti\ntutti i segreti.\nOra rilassati un poco, tanto io resterò\nqui. Quando sarai di nuovo pronto per\nla prova, dimmelo!")
/*<100>*/ 				story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = false;
/*<227>*/ 				story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = false;
/*<228>*/ 				story_flags[641 /* us: 805A9B1D 0x04, jp: 805ACD9D 0x04 */] = false;
/*<105>*/ 				scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = true;
          			  case 1:
          			}
          		}
          	}
          }

          void entrypoint_108_13() {
/*<101>*/ 	start()
/*<103>*/ 	switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          	  case 0:
/*<104>*/ 		printf("\x0E\x01\x09\x04\x00\x01La taverna della zucca è un locale\nmolto carino che si trova su un'isoletta\na <r<sud\x2010est >>di Oltrenuvola.\n\nCi lavora una ragazza dalla voce\nsplendida, <b<Pepa>>.\n<pause1E>Io\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í sono un suo grande fan.\nMa non dirlo a nessuno!")
          	  case 1:
/*<106>*/ 		switch (scene_flags[77 /* 0x8 20 */]) {
          		  case 0:
          			flw_108:
/*<108>*/ 			printf("\x0E\x01\x09\x04\x00\x01Allora, Link!\nVuoi fare un po' di esercizio\ndi attacco avvitato?\n[1]Va bene[2-]Dopo")
/*<109>*/ 			switch (choice(2)) {
          			  case 0:
/*<110>*/ 				printf("\x0E\x01\x09\x04\x00\x03Ottima risposta!\nAllora lanciati da qua!")
/*<112>*/ 				scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = false;
/*<113>*/ 				story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
/*<114>*/ 				story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*<251>*/ 				zone_temp_flags[13 /* 0x0 20 */] = true;
          			  case 1:
/*<111>*/ 				printf("Non c'è niente di male!\nAspetta fino a quando\nnon ti senti pronto!\n\nResterò qui per un po'...\nTorna pure quando vuoi!")
/*<253>*/ 				zone_temp_flags[13 /* 0x0 20 */] = false;
          			}
          		  case 1:
/*<122>*/ 			switch (story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */]) {
          			  case 0:
/*<102>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ma che fai?\nPresto, lanciati!\nO non ne hai il coraggio?\n[1]Sono pronto![2-]Ho paura!")
/*<117>*/ 				switch (choice(2)) {
          				  case 0:
/*<121>*/ 					printf("\x0E\x01\x09\x04\x00\x03Proprio questo mi\naspettavo!\nIl cielo è tuo, Link!")
/*<250>*/ 					zone_temp_flags[13 /* 0x0 20 */] = true;
          				  case 1:
/*<118>*/ 					story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = false;
/*<119>*/ 					story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = false;
/*<120>*/ 					printf("Non c'è niente di male!\nAspetta fino a quando\nnon ti senti pronto!\n\nResterò qui per un po'...\nTorna pure quando vuoi!")
/*<252>*/ 					zone_temp_flags[13 /* 0x0 20 */] = false;
          				}
          			  case 1:
          				goto flw_108
          			}
          		}
          	}
          }

          void entrypoint_108_30() {
/*<142>*/ 	start()
/*<143>*/ 	printf("Bene, Link!\n\n\n\nHo insegnato al tuo solcanubi\na fare un <g<avvitamento >>\npremendo (A).")
          }

          void entrypoint_108_14() {
/*<115>*/ 	start()
/*<116>*/ 	printf("")
          }

          void entrypoint_108_31() {
/*<144>*/ 	start()
/*<147>*/ 	printf("Ora devi rompere <r<10 bersagli >>che si\ntrovano sulle rocce davanti a te\ncon l'<r<attacco avvitato>>, premendo (A).")
          }

          void entrypoint_108_15() {
/*<125>*/ 	start()
/*<126>*/ 	printf("\x0E\x01\x09\x04\x00\x02Link!!!\nMa dove vai?! Il battesimo del volo\nè già iniziato! Presto, lanciati dalla\npiattaforma!")
          }

          void entrypoint_108_32() {
/*<145>*/ 	start()
/*<148>*/ 	printf("Solo quando riuscirai a distruggere\n10 bersagli in meno di <r<120 secondi>>,\navrai dimostrato di essere un vero\ncavaliere dei solcanubi.")
          }

          void entrypoint_108_16() {
/*<131>*/ 	start()
/*<284>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<286>*/ 		switch (zone_temp_flags[15 /* 0x0 80 */]) {
          		  case 0:
/*<288>*/ 			printf("\x0E\x01\x09\x04\x00\x16All'improvviso sono scomparsi i mostri\ne i prociatti non diventano più\naggressivi... mi chiedo cosa sarà mai\nsuccesso!")
          		  case 1:
/*<285>*/ 			printf("\x0E\x01\x09\x04\x00\x0DEhi, Link! Guarda!\nAnche se è notte, Fifì non è diventata\naggressiva!\n\nNon trovi anche tu che sia un evento\nstraordinario?! Aaah, non potrei\nessere più contento di così!")
/*<287>*/ 			zone_temp_flags[15 /* 0x0 80 */] = true;
          		}
          	  case 1:
/*<158>*/ 		switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          		  case 0:
/*<159>*/ 			printf("\x0E\x01\x09\x04\x00\x16La notte preferisco\nstare lontano da Fifì...\n\n\nPrima la tenevo nella\nscuola, ma una volta\nè successo un disastro...\n\nNon ti conviene andare\nin giro di notte!")
          		  case 1:
/*<132>*/ 			printf("\x0E\x01\x09\x04\x00\x04È pericoloso uscire\ndi notte!\n\n\nAnche Fifì, la prociatta del direttore,\ndi notte si trasforma in una belva...\n\n\nDi notte Oltrenuvola è \npervasa da una strana energia...")
          		}
          	}
          }

          void entrypoint_108_33() {
/*<146>*/ 	start()
/*<149>*/ 	printf("Pronti... via!")
          }

          void entrypoint_108_17() {
/*<133>*/ 	start()
/*<134>*/ 	printf("\x0E\x01\x09\x04\x00\x02Link!\nMa dove vai?!\n\n\nPresto! Lanciati dalla piattaforma e\nchiama il tuo solcanubi!")
          }

          void entrypoint_108_18() {
/*<135>*/ 	start()
/*<136>*/ 	printf("\x0E\x01\x09\x04\x00\x02Ehi, Link!\nVorresti una lezione\npersino ora?\n[1]Sì[2-]No...")
/*<137>*/ 	switch (choice(2)) {
          	  case 0:
/*<139>*/ 		printf("D'accordo, anche se per oggi\nsarebbero sospese, per te farò \nun'eccezione.\nOttimo atteggiamento!\nAllora oggi ti racconterò\nla storia di Oltrenuvola.\n\n\nOltrenuvola è un'isola che fluttua\nnel cielo da migliaia di anni.\n\n\nI nostri antenati sono\nsempre vissuti in cielo,\nqui e nelle isole vicine.\n\n\x0E\x01\x09\x04\x09\xA00Al di sotto di Oltrenuvola,\nsi estende un mare di nubi,\ne chi vi cade non fa ritorno.\n\nSi dice che al di sotto del\nmare di nuvole ci sia il nulla.\n\n\n\x0E\x01\x09\x04\n\xA00Per oggi è tutto. Ora vai a\nprepararti per il battesimo\ndel volo.")
          	  case 1:
/*<138>*/ 		printf("Capisco... ad ogni modo le lezioni di\noggi erano già state sospese a causa dei\npreparativi per il battesimo del volo...\n\nSarebbe meglio che anche tu\ncominciassi a prepararti per\nla cerimonia.")
          	}
          }

          void entrypoint_108_01() {
          	start()
/*<  9>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 71>*/ 		switch (scene_flags[41 /* 0x4 02 */]) {
          		  case 0:
/*< 63>*/ 			printf("Fidati di me,\nritroverai presto\nil tuo solcanubi!")
          		  case 1:
/*< 62>*/ 			printf("\x0E\x01\x09\x04\x00\x01Link, che ti è successo?\nSei pallido...\n\n\nCosa?!<pause32> Non trovi più il tuo\nsolcanubi?\n\n\nQuesto è un vero problema!\nE\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í pensi di riuscire a ritrovarlo?\n\n\nVai a cercarlo?<pause28>\nMa non riuscirai mai a\nfare in tempo per la cerimonia!\n\nUn battesimo del volo senza\nil solcanubi è impossibile\x0E\x01\x06\x02\xFCCD...<pause1E>\n\n\n\x0E\x01\x09\x04\x00\x05\x0E\x01\x06\x02\x2CDUhm...<pause1E>")
/*<160>*/ 			switch (scene_flags[30 /* 0x2 40 */]) {
          			  case 0:
/*<161>*/ 				printf("Davvero?\nIl direttore mi\nsta cercando?\n\nBene!\nGrazie di avermi avvertito!\n\n\nNon stare in pensiero per\nla cerimonia.\nVai a cercare\nil tuo solcanubi!")
          				flw_72:
/*< 72>*/ 				scene_flags[0 'Skyloft'][41 /* 0x4 02 */] = true;
          			  case 1:
/*<162>*/ 				printf("Forse è la punizione\nper non aver ascoltato\nil maestro...\n\nMah, lasciamo perdere...\nIl direttore vuole parlarmi?\nIn tal caso, per ora non\npreoccuparti della cerimonia.\nVai a cercare\nil tuo solcanubi!")
/*<240>*/ 				story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = false;
          				goto flw_72
          			}
          		}
          	  case 1:
/*< 48>*/ 		switch (scene_flags[28 /* 0x2 10 */]) {
          		  case 0:
/*< 51>*/ 			switch (scene_flags[30 /* 0x2 40 */]) {
          			  case 0:
/*< 10>*/ 				printf("\x0E\x01\x09\x04\n\x404Oh! Che bello!\nHai ritrovato Fifì...\nQuesti animali si chiamano <b<prociatti>>...\n\n\x0E\x01\x09\x04\x00\xA00Sono tanto carini, ma\nmeglio star loro alla larga\ndi notte...\n[1]Perché?[2]La notte?")
/*< 11>*/ 				switch (choice(2)) {
          				  case 0:
/*< 12>*/ 					printf("Uhm... non sai che i prociatti di notte \nsi trasformano...?\n\n\nÈ una storia che fa paura...")
          					flw_13:
/*< 13>*/ 					printf("\x0E\x01\x09\x04\x00\x16Qui a Oltrenuvola, quando cala\nla notte, i prociatti sono come\nposseduti.\n\nAnche gli animali che vivono\nnelle grotte o in luoghi oscuri\nsono attivi di notte.\n\nEcco perché gli umani\nnon escono la sera, se non\nper cose importanti.\n\nBeh, per voi che aspirate a\ndiventare cavalieri, non \ndovrebbero essere un problema...\n\nPerò la prudenza non è mai troppa!")
          				  case 1:
          					goto flw_13
          				}
          			  case 1:
/*< 93>*/ 				set_camera(17, 0)
/*< 49>*/ 				printf("\x0E\x01\x09\x04\x0F\x40DOh! Me l'hai riportata\nsana e salva! Grazie!\n<pause23>\x0E\x01\x09\x04\x09\x400Sei stato proprio gentile,\nLink!\nScommetto che è affamata!\nAdesso le darò un po' di cibo.")
/*<155>*/ 				set_camera(20, 0)
/*< 52>*/ 				printf("Puoi dire al direttore che\nsta bene? Lo trovi nella\n<r<piazza di fronte al santuario>>.")
/*<241>*/ 				set_camera(21, 0)
/*<242>*/ 				printf("Zelda dovrebbe essere con lui.\nPresto, vai!")
/*<243>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 50, 'param3': 42}
/*< 50>*/ 				scene_flags[0 'Skyloft'][30 /* 0x2 40 */] = true;
          			}
          		  case 1:
/*< 46>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*< 47>*/ 				printf("\x0E\x01\x09\x04\x00\x06Link, che succede?")
/*< 61>*/ 				set_camera(14, 0)
/*< 60>*/ 				printf("Uno sprint in direzione del muro ti\npermetterà di <g<aggrapparti>>!\n\n\nMa fai attenzione a non esaurire il\n<r<vigore >>muovendoti quando sei\naggrappato.")
          			  case 1:
/*<  6>*/ 				switch (temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<  7>*/ 					printf("\x0E\x01\x09\x04\x09\x400Oh! Mi andresti\ndavvero a prendere Fifì?\n[1]Sì[2]No")
/*<  8>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_2:
/*<  2>*/ 						printf("\x0E\x01\x09\x04\x09\x40DDavvero?\nAnche se vai di fretta? Ti ringrazio!")
/*< 43>*/ 						{'type': 'type3', 'subType': 4, 'param1': 3328, 'param2': 0, 'next': 44, 'param3': 22}
/*< 44>*/ 						printf("\x0E\x01\x09\x04\x09\x400Da quella parte dovresti riuscire a\nsalire. Se ti aggrappi al cornicione e\narrivi fin lì dovresti riuscire a\nraggiungere il tetto.\n\x0E\x01\x07\x04\xFF00\x00Mi raccomando!")
/*< 45>*/ 						temp_flags[2 /* 0x1 04 */] = true;
/*<235>*/ 						story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
          					  case 1:
/*<229>*/ 						printf("\x0E\x01\x09\x04\x00\xA00Ah...\n\n\n\nAllora potresti dire al direttore\nche il maestro Cornelio ha trovato\nFifì? Così starà tranquillo...")
          					}
          				  case 1:
/*< 68>*/ 					switch (scene_flags[38 /* 0x5 40 */]) {
          					  case 0:
/*<231>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 1, 'param3': 31}
/*<  1>*/ 						printf("\x0E\x01\x09\x04\x00\x01Buongiorno, Link!\nVuoi allenarti subito per il battesimo\ndel volo?\n\nEh? <pause1E>Un appuntamento?\n<pause1E>Ah... devi vedere <b<Zelda>>?")
/*< 42>*/ 						printf("Beh, allora capiti proprio a fagiolo!\n\n\n\n<b<Gaepora>>, il padre di Zelda, sai... il\ndirettore della scuola... beh, la sua\n<r<Fifì >>è fuggita...")
/*<237>*/ 						set_camera(12, 0)
/*<236>*/ 						printf("Guarda! \x0E\x01\n\x04\x10ÍNon vuole scendere da lì...\n\n\n\n\x0E\x01\n\x04\xFFFFÍIl direttore è troppo\nimpegnato a preparare\nla cerimonia insieme a Zelda...\n\nAvevo pensato di attirarla con del cibo,\nma la cerimonia sta per cominciare e\nnon vorrei sporcare il mio vestito\nmigliore...\n\x0E\x01\x07\x04\xFF00\x00Perché non vai tu a\nprendere Fifì?\n\n[1]Va bene[2]Ho da fare")
/*<  4>*/ 						switch (choice(2)) {
          						  case 0:
/*< 54>*/ 							set_camera(-1, 0)
          							goto flw_2
          						  case 1:
/*< 55>*/ 							set_camera(-1, 0)
/*<  3>*/ 							printf("\x0E\x01\x09\x04\x00\xA00Ah...\n\n\n\nAllora potresti dire al direttore\nche il maestro Cornelio ha trovato\nFifì? Così starà tranquillo...")
/*<  5>*/ 							temp_flags[1 /* 0x1 02 */] = true;
/*<234>*/ 							story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
          						}
          					  case 1:
/*< 65>*/ 						switch (scene_flags[37 /* 0x5 20 */]) {
          						  case 0:
/*< 90>*/ 							set_camera(9, 0)
/*< 67>*/ 							printf("\x0E\x01\x09\x04\x0B\xA06Ma che fai?\nFai subito quello che ti\ndice il maestro!")
          						  case 1:
/*<154>*/ 							story_flags[565 /* us: 805A9B19 0x10, jp: 805ACD99 0x10 */] = false;
/*<174>*/ 							{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 100, 'next': 89, 'param3': 17}
/*< 89>*/ 							set_camera(9, 0)
/*<264>*/ 							switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          							  case 0:
/*<265>*/ 								printf("\x0E\x01\x09\x04\x0B\xA0DEsatto, con (Z) puoi <g<inquadrare\n>>in quella direzione.\x0E\x01\x11\x02\x7CD\n\n\n\x0E\x01\x09\x04\x00\xC04Mmh? <pause0F> Noto dalla tua espressione che\nnon hai molta voglia di starmi a\nsentire, ma ritengo che qualche\nnozione di base possa esserti utile!\n\x0E\x01\x09\x04\x00\xA00Nella <r<modalità eroica>>...<pause1E>\n<pling>I <r<cuori>> subiranno il <r<doppio dei danni>>!\nPer questo è ancora più importante che\ntu sappia <g<inquadrare>> con (Z)<g< >>!\x0E\x01\x11\x02\x7CD\nComunque sia, parlare in questo modo\nè decisamente scomodo! Per piacere\nvieni qui sopra!")
          								flw_58:
/*< 58>*/ 								set_camera(10, 0)
/*< 41>*/ 								printf("\x0E\x01\x09\x04\x0B\xA00Prova a salire su quelle casse di legno\nfacendo uno <g<sprint>>. Vedrai che ce la\nfai!\n\nPer fare uno <g<sprint >>tieni premuto\n(A) mentre ti sposti.\nVedrai che non avrai problemi a\nsuperare un dislivello del genere!\nProva ad arrivare fin qui!")
/*< 66>*/ 								scene_flags[0 'Skyloft'][37 /* 0x5 20 */] = true;
          							  case 1:
/*<263>*/ 								printf("\x0E\x01\x09\x04\x0B\xA0DEsattamente!\nUsando (Z) puoi <g<inquadrare >>una\ndeterminata direzione o un bersaglio.\x0E\x01\x11\x02\x7CD\n\nSe usi (Z) per <g<inquadrare>>,\npuoi parlare con la gente\nsemplicemente premendo(A).\x0E\x01\x11\x02\x7CD\n\nUsare (Z) è molto comodo\x0E\x01\x11\x02\x7CD anche se\nnon c'è nessun bersaglio da\n<g<inquadrare>>, perché ti fa centrare la\nvisuale in avanti.\nPerò da questa distanza è un po'\ndifficile parlare... perché non ti\navvicini?")
          								goto flw_58
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_19() {
/*<140>*/ 	start()
/*<141>*/ 	printf("\x0E\x01\x09\x04\x00\x04Ehi! Quello è il posto del maestro!\nTu sei un allievo!\nVatti a sedere dall'altra parte!")
          }

          void entrypoint_108_02() {
/*< 14>*/ 	start()
/*< 38>*/ 	switch (story_flags[31 /* us: 805A9ADA 0x80, jp: 805ACD5A 0x80 */]) {
          	  case 0:
/*< 21>*/ 		printf("\x0E\x01\x09\x04\x00\x02Che fai? Presto, fai uno <g<sprint >>con (A),\n<r<lanciati >>in aria e chiama il solcanubi!\n\n\nPer chiamare il solcanubi premi (v)!\x0E\x01\x11\x02\x9CD")
          	  case 1:
/*< 28>*/ 		set_camera(1, 0)
/*< 22>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 23, 'param3': 32}
/*< 23>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 24, 'param3': 32}
/*< 24>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 6, 'next': 177, 'param3': 32}
/*<177>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 180, 'param3': 32}
/*<180>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 25, 'param3': 32}
/*< 25>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 26, 'param3': 17}
/*< 26>*/ 		{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 0, 'next': 27, 'param3': 17}
/*< 27>*/ 		{'type': 'type3', 'subType': 1, 'param1': 6, 'param2': 0, 'next': 181, 'param3': 17}
/*<181>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 19, 'next': 15, 'param3': 13}
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\x02Il <r<battesimo del volo\n>>sta per iniziare.\n\n\nLink stava per essere\nescluso, ma per fortuna ora è tutto\nrisolto e siamo al completo!\n\nBene, lasciate che vi\nspieghi le <r<regole>>!")
          		flw_16:
/*< 16>*/ 		printf("Per primo si lancerà il solcanubi che\nporta la statuetta...\n\n\nPoi, al mio segnale, farete uno <r<sprint \n>>con (A) e <r<vi lancerete>> in cielo per\nsaltare in groppa al vostro solcanubi.\n\nAppena vi lanciate, non dimenticatevi\ndi usare il <g<richiamo>> con (v)!\x0E\x01\x11\x02\x9CD\n\n\nIl primo che raggiunge il solcanubi e\nprende la statuetta con (A) è il\nvincitore!\n\n\x0E\x01\n\x04\x02ÍEcco, tutto qui.\nAvete capito tutti?\n[1]Sì[2?]No")
/*< 18>*/ 		switch (choice(2)) {
          		  case 0:
/*< 30>*/ 			set_camera(3, 0)
/*< 17>*/ 			printf("\x0E\x01\x09\x04\x00\x03\x0E\x01\x08\x02\x1CDBene!\n\n\n\nIl vincitore verrà promosso alla classe\nsuperiore della scuola d'armi.<pause14>\n\n\nInoltre riceverà un <r<riconoscimento per\nl'onore>>, che gli sarà consegnato dalla\nragazza scelta per rappresentare\nla <r<Dea>> durante la cerimonia...\nIn occasione del 25° anniversario,\nil conferimento avverrà <r<sulla\npiattaforma tra le mani della statua\ndella Dea>>.\nQuest'anno, per desiderio della\nrappresentante della Dea, sarà un\noggetto da lei stessa <r<realizzato>>.\n\nE come sapete, <r<la rappresentante\ndella Dea >>quest'anno è...")
/*<185>*/ 			{'type': 'type3', 'subType': 4, 'param1': 267, 'param2': 3840, 'next': 178, 'param3': 13}
/*<178>*/ 			set_camera(5, 0)
/*<175>*/ 			printf("\x0E\x01\x09\x04\x100\x09\x0E\x01\x08\x02\x1CDLa dolce Zelda!")
/*<194>*/ 			{'type': 'type3', 'subType': 4, 'param1': 1048, 'param2': 3084, 'next': 31, 'param3': 13}
/*< 31>*/ 			set_camera(2, 0)
/*< 20>*/ 			printf("Fateci vedere quali risultati\navete ottenuto con il\nvostro allenamento!\n\nE non lanciate oggetti\nné scontratevi con gli\naltri concorrenti!")
/*<179>*/ 			set_camera(6, 0)
/*<182>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 4, 'next': 183, 'param3': 50}
/*<183>*/ 			{'type': 'type3', 'subType': 4, 'param1': 512, 'param2': 23, 'next': 176, 'param3': 13}
/*<176>*/ 			printf("\x0E\x01\x08\x02\x1CDHai capito, \x0E\x01\x09\x04\x419\x1700Bado?")
/*< 40>*/ 			set_camera(4, 0)
/*<184>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 53, 'param3': 50}
/*< 53>*/ 			make_actor_do_something(0, 0)
/*< 39>*/ 			printf("\x0E\x01\x09\x04\x00\x02Bene! Tutti ai posti di partenza!")
/*< 37>*/ 			story_flags[31 /* us: 805A9ADA 0x80, jp: 805ACD5A 0x80 */] = true;
          		  case 1:
/*< 19>*/ 			printf("\x0E\x01\x09\x04\x00RBene...\nRipeto!")
/*< 29>*/ 			set_camera(1, 0)
          			goto flw_16
          		}
          	}
          }

