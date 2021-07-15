          void entrypoint_108_03() {
/*< 32>*/ 	start()
/*<254>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 113, 'next': 33, 'param3': 24}
/*< 33>*/ 	printf("\x0E\x01\x08\x02\x1CDVia!!!\x0E\x01\x05\x04\x0F\x00")
          }

          void entrypoint_108_20() {
/*<155>*/ 	start()
/*<288>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<289>*/ 		printf("\x0E\x01\x09\x04\x00\x01La statua della Dea è scomparsa, ma\nquesto non significa che sia scomparsa\nanche la Dea! Lei è sempre tra noi,\nvero Link?")
          	  case 1:
/*<281>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*<282>*/ 			printf("\x0E\x01\x09\x04\x00\x01Ragazzo, mi sembra che ultimamente i\ntuoi progressi siano notevoli!\nTi stai impegnando a fondo, eh?!\nBravo!")
          		  case 1:
/*<277>*/ 			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          			  case 0:
/*<280>*/ 				printf("\x0E\x01\x09\x04\x00\x01Cosa? Narisha?!<pause28>\nHo sentito qualche voce su di lui...\n\n\nMa purtroppo non ne so molto.\n\n\n\nDovresti chiedere al <b<maestro Asio Otus>>\nse vuoi saperne di più.")
          			  case 1:
/*<278>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<279>*/ 					printf("\x0E\x01\x09\x04\x00\x01Non trovi che Fifì sia proprio carina?!<pause1E>\nTriforza? Cos'è?<pause28>\nC'entra qualcosa con Fifì?")
          				  case 1:
/*<156>*/ 					printf("\x0E\x01\x09\x04\x00\x01Ho iniziato a occuparmi di Fifì, come\nmi aveva chiesto di fare il direttore.\n\n\nÈ davvero una bestiola tenera!\nVorrei anch'io un prociatto...")
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_04() {
/*< 34>*/ 	start()
/*<150>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 59, 'param3': 32}
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': -1, 'next': 152, 'param3': 50}
/*<152>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 149, 'param3': 49}
/*<149>*/ 	make_actor_do_something(0, 10)
/*<151>*/ 	{'type': 'type3', 'subType': 4, 'param1': 2578, 'param2': 2562, 'next': 35, 'param3': 13}
/*< 35>*/ 	printf("\x0E\x01\x0D\x02\x1906\x0E\x01\x08\x02\x1CDEhi, Link!\nDi qua!\n")
/*< 57>*/ 	set_camera(11, 0)
/*<243>*/ 	make_actor_do_something(1, 10)
/*<212>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 10, 'next': 260, 'param3': 17}
/*<260>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<261>*/ 		printf("\x0E\x01\x09\x04\xA0E\xA01Buongiorno, Link!\nFantastico, hai deciso di cimentarti\nnella <r<modalità eroica>>!\n\nOggi è il gran giorno del <r<battesimo del\nvolo>>, come ti senti?\n\n\nVorrei parlare con te! <g<Inquadrami >>così\npotremo fare due chiacchiere.")
          		flw_64:
/*< 64>*/ 		scene_flags[0 'Skyloft'][36 /* 0x5 10 */] = true;
/*<291>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 253, 'param3': 60}
/*<253>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 293, 'param3': 42}
/*<293>*/ 		scene_flags[0 'Skyloft'][27 /* 0x2 08 */] = true;
          	  case 1:
/*< 56>*/ 		printf("\x0E\x01\x09\x04\xA0E\xA01Buongiorno Link!\nOggi è il giorno del <r<battesimo del volo>>!\nTi senti in forma?\nVorrei dirti un paio di cose...\n<g<Inquadrami>> così possiamo fare due\nchiacchiere!")
          		goto flw_64
          	}
          }

          void entrypoint_108_21() {
/*<185>*/ 	start()
/*<191>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 189, 'param3': 32}
/*<189>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 186, 'param3': 13}
/*<186>*/ 	printf("\x0E\x01\x08\x02\x1CDEhi, Link!")
/*<187>*/ 	printf("\x0E\x01\n\x04\x12Í\x0E\x01\x09\x04\n\x202È inutile provarci. Non riuscirai mai\na salire sul tetto solo con lo <g<sprint>>.")
/*<190>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 192, 'param3': 17}
/*<192>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 188, 'param3': 6}
/*<188>*/ 	set_camera(19, 0)
/*<229>*/ 	printf("Dovrebbe esserci una cassa di legno lassù.\nSe la <g<sposti>>, <g<spingendola >>con (A), puoi\nusarla come base per salire.\n\nMettila vicino al muro e poi effettua uno\n<g<sprint>> o usa \x0E\x02\x04\x02\x9CD per salire.")
          }

          void entrypoint_108_05() {
/*< 36>*/ 	start()
/*<266>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<267>*/ 		printf("")
/*<269>*/ 		switch (choice(2)) {
          		  case 0:
/*<270>*/ 			printf("")
          		  case 1:
/*<268>*/ 			printf("")
          		}
          	  case 1:
/*<265>*/ 		printf("")
          	}
          }

          void entrypoint_108_22() {
/*<207>*/ 	start()
/*<209>*/ 	switch (scene_flags[92 /* 0xA 10 */]) {
          	  case 0:
/*<210>*/ 		printf("\x0E\x01\x09\x04\x00\x01Ho disposto che l'inizio della\ncerimonia sia rinviato fino a\nquando non ritrovi il tuo solcanubi.\nTu preoccupati solo di quello!")
          	  case 1:
/*<211>*/ 		printf("\x0E\x01\x09\x04\x00\x01Sono davvero felice\nche l'inizio della cerimonia\nsia stato rimandato!\nCosì potrai ritrovare il tuo solcanubi!")
          	}
          }

          void entrypoint_108_06() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf("\x0E\x01\x09\x04\x0B\xA52Ehi, Link!\nNon far finta di niente!\nFai quello che dice il maestro!\n\n<rd<Inquadrami >>e parla con me!")
/*<294>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 60}
          }

          void entrypoint_108_23() {
/*<216>*/ 	start()
/*<224>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<225>*/ 		printf("\x0E\x01\x09\x04\x00\x01Allora, Link!\nRiesci a cavartela?\n\n\nSe dovessi avere problemi, non fare\ncomplimenti e vieni a parlare con me!")
          	  case 1:
/*<220>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*<223>*/ 			printf("\x0E\x01\x09\x04\x00\x01L'attacco avvitato\nè una manovra alquanto impegnativa\nper un solcanubi!\n\nMa con il tuo bel carminio,\nnon dovresti avere problemi...")
          		  case 1:
/*<219>*/ 			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          			  case 0:
/*<222>*/ 				printf("\x0E\x01\x09\x04\x00\x05Link...\nChe ci fai qui nel cuore della notte?\n\n\nCosa?! Narisha?!\nBah, questi non sono discorsi da fare\nin piena notte!\n\nTorna domani mattina.\nTe ne parlerò nei dettagli!")
          			  case 1:
/*<218>*/ 				switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          				  case 0:
/*<221>*/ 					printf("\x0E\x01\x09\x04\x00\x01Come va, Link?\nHai trovato Zelda?\n\n\nSono certo che riuscirai a trovarla.\nCredo in te!")
          				  case 1:
/*<217>*/ 					printf("\x0E\x01\x09\x04\x00\x01Di notte i nostri\nsolcanubi non possono volare.\nNon possiamo cercare Zelda.\nPer oggi, riposati un pochino!\nPartiremo domani.\nOgni tanto una bella pausa\naiuta a ritrovare la tranquillità!")
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
/*<231>*/ 	start()
/*<244>*/ 	switch (scene_flags[41 /* 0x4 02 */]) {
          	  case 0:
/*<237>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ahi, ahi, Link!\nNon è il caso di fare\ncerte cose!\n\nVai subito a cercare il\ntuo solcanubi! Ascolta quello che\nti dicono i tuoi compagni!")
          	  case 1:
/*<238>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<245>*/ 			printf("\x0E\x01\x09\x04\x00\x02Ahi, ahi, Link!\nChe fai, te ne vai di soppiatto?\n\n\nVieni qui!")
          		  case 1:
/*<232>*/ 			printf("\x0E\x01\x09\x04\x00\x02Ahi, ahi, Link!\nNon bisogna ignorare gli insegnamenti\ndel maestro...\n\nVieni qui e ascolta quello che ho da dirti!")
          		}
          	}
          }

          void entrypoint_108_08() {
/*< 75>*/ 	start()
/*< 87>*/ 	switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          	  case 0:
/*<208>*/ 		printf("")
          	  case 1:
/*< 82>*/ 		switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          		  case 0:
/*< 84>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 31}
/*< 76>*/ 			printf("\x0E\x01\x09\x04\x00\x01Ehi, Link,\ncome va la ricerca di Zelda?\nL'hai trovata?\n\n\x0E\x01\x09\x04\x00\x05Cosa?<pause28> Narisha?\nHai chiesto al direttore?\n\n\nSì, sono sicuro che Narisha\nfosse dentro quella nuvola...\n\n\nMa quello\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í <pause19>non è il nostro Narisha.\n\x0E\x01\x06\x02\xFECDQuello è...<pause28>\x0E\x01\x06\x02\x1CD un <r<mostro>>!\n\n\n\x0E\x01\x09\x04\x00\x0FSembrava proprio Narisha,\nma poi mi sono avvicinato e...\n\n\nHa cercato di attaccarmi con\nil suo corpo enorme!\n\n\nIn quel momento, nei suoi occhi\nho visto un grande odio...\n\n\nDicono che col tempo si cambi...\n\x0E\x01\x06\x02\xFECDma così... \x0E\x01\x06\x02Í<pause19>ho la sensazione che\n<pause19>sia posseduto.")
/*<202>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 77, 'param3': 6}
/*< 77>*/ 			printf("\x0E\x01\x09\x04\x00\x05Cosa? <pause28>Vorresti parlare con Narisha?\n\n\n\n\x0E\x01\x06\x02\xFECDMa è...\x0E\x01\x06\x02Í impossibile!\nIl Narisha di questo tempo non\ncomprenderebbe le parole degli umani.\n\n\x0E\x01\x06\x02\xFECDE poi...\x0E\x01\x06\x02Í se ti avvicini a lui per parlare\nfinirai anche tu nel mare di nuvole.")
/*<203>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 200, 'param3': 6}
/*<200>*/ 			printf("\x0E\x01\x09\x04\x00REh?! <pause28>... Allora vai lo stesso?\n\n\n\n\x0E\x01\x06\x02\xFECDCapisco... \x0E\x01\x06\x02Ílo fai per trovare Zelda?\n\n\n\n... Va bene.<pause1E> Del resto non credo\nche ti fermeresti anche se te lo\nchiedessi.")
/*<204>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 201, 'param3': 6}
/*<201>*/ 			printf("Bene! Ho un'idea... vieni con me!")
/*< 85>*/ 			story_flags[362 /* us: 805A9B03 0x01, jp: 805ACD83 0x01 */] = true;
/*< 86>*/ 			changeScene(0, 0) // 
          		  case 1:
/*<275>*/ 			switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          			  case 0:
/*<276>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ciao Link!\n<pause1E>Come? Triforza, dici?!\n\n\nMi dispiace, ragazzo, non ne so nulla!\nPerché non provi a chiedere al\ndirettore?")
          			  case 1:
/*< 83>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ehi, Link, come va la ricerca\ndi Zelda?\n\n\nMi dispiace di averti affidato\nquest'incarico difficile.\nMa conto su di te! Trovala!")
          			}
          		}
          	}
          }

          void entrypoint_108_09() {
/*< 78>*/ 	start()
/*< 79>*/ 	printf("\x0E\x01\x09\x04\x00\x02Ho avuto l'impressione che, dentro\nquella nuvola, Narisha fosse come\nposseduto.\n\nSe riuscissimo a liberarlo da quella\nforza malefica, riavremmo il nostro\nNarisha. Giusto, Link?\n\nAllora, adesso ti insegnerò una\ntecnica speciale da usare col solcanubi.\n\n\n\x0E\x01\x09\x04\x00\x03Si chiama <r<attacco avvitato>>!")
/*<258>*/ 	set_camera(22, 0)
/*<256>*/ 	printf("Grazie all'attacco avvitato, potrai sferrare\nun colpo molto potente, in grado di ferire\nil parassita che infesta Narisha!\n\nEseguire un attacco avvitato di per sé\nnon è difficile. Basta premere \x0E\x02\x04\x02\x1ECD.\x0E\x01\x11\x02\x10CD\n\n\nRispetto agli <r<attacchi >>normali,\nl'accelerazione dura più a lungo e risulta\ndifficile mantenere la direzione.\n\nAlla scuola d'armi questa è una tecnica\nritenuta di alto livello, riservata agli\nesperti. Forse per te è ancora presto per\nimpararla...\n<pause1E>Ma voglio metterti alla prova per vedere\nse hai talento...")
/*<259>*/ 	set_camera(-1, 0)
/*<257>*/ 	printf("\x0E\x01\x09\x04\x00\x04Per prima cosa, lanciati e vola in groppa\nal solcanubi.")
/*< 93>*/ 	story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
/*< 98>*/ 	story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*<248>*/ 	zone_temp_flags[13 /* 0x0 20 */] = true;
          }

          void entrypoint_108_10() {
/*< 90>*/ 	start()
/*<128>*/ 	switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          	  case 0:
/*<129>*/ 		printf("\x0E\x01\x09\x04\x00\x0FQuello che è successo a Zelda è davvero\nterribile...\n\n\nMa tu non devi tormentarti...\nÈ stato un incidente...")
          	  case 1:
/*<127>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<196>*/ 			switch (scene_flags[91 /* 0xA 08 */]) {
          			  case 0:
/*<198>*/ 				printf("\x0E\x01\x09\x04\x00\x01Non preoccuparti per la cerimonia.\nVai subito a cercare il solcanubi!")
          			  case 1:
/*<126>*/ 				printf("\x0E\x01\x09\x04\x00\x0FChe succede, Link?\n<pause1E>Il tuo solcanubi non risponde\nal richiamo?\n\nÈ una cosa molto strana, direi\npraticamente impossibile\x0E\x01\x06\x02\xFECD...\n\n\nNe hai parlato con il responsabile\ndella cerimonia, il <b<maestro\nCornelio>>?\n\nAh... se ne hai già parlato con il\ndirettore, si troverà una\nsoluzione...\n\nIntanto, vai a cercare il tuo\nsolcanubi al più presto!")
/*<199>*/ 				scene_flags[0 'Skyloft'][91 /* 0xA 08 */] = true;
          			}
          		  case 1:
/*<194>*/ 			switch (scene_flags[90 /* 0xA 04 */]) {
          			  case 0:
/*<195>*/ 				printf("\x0E\x01\x09\x04\x00\x01Veramente ti capita spesso di\nconfondere me con il <b<maestro\nCornelio>>...\n\nIo sono il <b<maestro Asio Otus >>e\nho i capelli bianchi; il <b<maestro\nCornelio>>, invece, ha i capelli neri!\nForse così te lo ricorderai meglio!")
          			  case 1:
/*< 91>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ehi, Link!\nOggi è il giorno del <r<battesimo del volo>>!\n\n\nRicordati delle teorie che ti ho spiegato\nio, il maestro <b<Asio Otus>>, e di quelle del\nmaestro <b<Cornelio >>e fai del tuo meglio!\n\nA proposito, ti ricordi come ci si <r<guarda\nintorno >>con (^)?\x0E\x01\x11\x02\x8CD\n\n\nSe vuoi dare un'occhiata intorno a te,\n<g<premi >>\x0E\x02\x04\x02\x22CD.\x0E\x01\x11\x02\x8CD")
/*<197>*/ 				scene_flags[0 'Skyloft'][90 /* 0xA 04 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_108_11() {
/*<122>*/ 	start()
/*<162>*/ 	switch (scene_flags[20 /* 0x3 10 */]) {
          	  case 0:
/*<272>*/ 		switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          		  case 0:
/*<274>*/ 			printf("\x0E\x01\x09\x04\x00\x01Intendi dire che esiste davvero il\nmondo chiamato Terra?!\n\n\nSupponendo che sia così, immagino\nche sia esattamente l'opposto del\nnostro bel mondo rigoglioso...")
          		  case 1:
/*<271>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<273>*/ 				printf("\x0E\x01\x09\x04\x00\x01Come vanno le ricerche di Zelda,\nstanno procedendo?\n\n\nQuando sei stanco, riposati su un letto!\nPuoi dormire fino a sera o recuperare\ntutti i cuori, sai?!")
          			  case 1:
/*<166>*/ 				printf("\x0E\x01\x09\x04\x00\x01Abbi cura di te! Ricorda che le sorti di\nZelda sono nelle tue mani...\nMi raccomando!")
          			}
          		}
          	  case 1:
/*<167>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 123, 'param3': 31}
/*<123>*/ 		printf("\x0E\x01\x09\x04\x00\x11Link, ho sentito che\nvuoi andare a cercare Zelda\nal di sotto delle nuvole...\n\nIl direttore dice che laggiù\nci sia la Terra...\nTu che cosa sai della Terra?")
/*<168>*/ 		switch (adventure_pouch_has(9 0x0009)) {
          		  case 0:
/*<170>*/ 			printf("Ah, quella è la famosa spada?\nMa lo scudo<pause0A>.<pause0A>.<pause0A>.<pause0A>\n\n\nUhm... hai ottenuto uno scudo\ncome si deve! Bravo!\nBeh, è il momento di dirsi addio...")
          			flw_171:
/*<171>*/ 			give_item(4 0x04);
/*<255>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 172, 'param3': 12}
          			flw_172:
/*<172>*/ 			printf("Se non sai come usare lo scudo,\nfattelo insegnare dal <b<primo cavaliere>>.\nLo trovi alla palestra di scherma.")
/*<165>*/ 			scene_flags[0 'Skyloft'][20 /* 0x3 10 */] = true;
/*<213>*/ 			switch (scene_flags[89 /* 0xA 02 */]) {
          			  case 0:
          			  case 1:
/*<214>*/ 				story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
/*<215>*/ 				scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
          			}
          		  case 1:
/*<246>*/ 			switch (is_adventure_pouch_full()) {
          			  case 0:
/*<247>*/ 				printf("Ah, quella è la famosa spada?\nPerò, senza un buono scudo\nnon andrai molto lontano.\n\nTe ne avrei dato uno ma hai la\nborsa piena. Ecco, prendi questo\npiccolo regalo da parte mia...")
          				goto flw_171
          			  case 1:
/*<169>*/ 				printf("Ah, quella è la famosa spada?\nPerò, senza un buono scudo\nnon andrai molto lontano.\n\nPrendi questo!")
/*<163>*/ 				give_item(116 0x74);
/*<164>*/ 				printf("Lo scudo di legno è molto leggero e\nmaneggevole, ma è il più fragile degli\nscudi.\n\nÈ vulnerabile al fuoco, ma, se si rompe,\nlo puoi ricomprare al bazar.\n\n\nPer equipaggiare uno scudo, <g<tieni\npremuto>> \x0E\x02\x04\x02\x28CD, scegli lo scudo e poi\nrilascia \x0E\x02\x04\x02\x28CD.\x0E\x01\x11\x02\xECD")
          				goto flw_172
          			}
          		}
          	}
          }

          void entrypoint_108_12() {
/*< 94>*/ 	start()
/*<205>*/ 	switch (scene_flags[77 /* 0x8 20 */]) {
          	  case 0:
/*<206>*/ 		printf("")
          	  case 1:
/*< 96>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*< 80>*/ 			printf("\x0E\x01\x09\x04\x00\nOh! Sei riuscito a distruggere 10\nbersagli nel tempo stabilito!\nSplendido!\n\nSe riesci a cavalcare il solcanubi\ncosì bene, non avrai problemi!\nLink! Tu e il tuo solcanubi\nrosso siete davvero unici!\nOra hai il mio permesso\ndi usare l'attacco avvitato!")
/*< 81>*/ 			printf("E ora veniamo a come\ntrovare Narisha...\n\n\nOgni anno si fa un'offerta\ndi zuppa di zucca a Narisha.\nIl titolare della <r<taverna delle zucche>>\nsaprà darti informazioni!\nVai da lui e chiedi!")
/*<106>*/ 			scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = true;
          		  case 1:
/*< 95>*/ 			switch (story_flags[641 /* us: 805A9B1D 0x04, jp: 805ACD9D 0x04 */]) {
          			  case 0:
/*< 97>*/ 				printf("\x0E\x01\x09\x04\x00\x0FUhm... non riesci ancora a distruggere\ni 10 bersagli in meno di <r<120 secondi>>.\nMi dispiace ma non posso rivelarti\ntutti i segreti.\nOra rilassati un poco, tanto io resterò\nqui. Quando sarai di nuovo pronto per\nla prova, dimmelo!")
/*< 99>*/ 				story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = false;
/*<226>*/ 				story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = false;
/*<227>*/ 				story_flags[641 /* us: 805A9B1D 0x04, jp: 805ACD9D 0x04 */] = false;
/*<104>*/ 				scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = true;
          			  case 1:
          			}
          		}
          	}
          }

          void entrypoint_108_13() {
/*<100>*/ 	start()
/*<102>*/ 	switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          	  case 0:
/*<103>*/ 		printf("\x0E\x01\x09\x04\x00\x01La taverna delle zucche è un locale\nmolto carino che si trova su un'isoletta\na <r<sud\x2010est >>di Oltrenuvola.\n\nCi lavora una ragazza dalla voce\nsplendida, <b<Pepa>>.\n<pause1E>Io\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í sono un suo grande fan.\nMa non dirlo a nessuno!")
          	  case 1:
/*<105>*/ 		switch (scene_flags[77 /* 0x8 20 */]) {
          		  case 0:
          			flw_107:
/*<107>*/ 			printf("\x0E\x01\x09\x04\x00\x01Allora, Link!\nVuoi fare un po' di esercizio\ndi attacco avvitato?\n[1]Va bene[2-]Dopo")
/*<108>*/ 			switch (choice(2)) {
          			  case 0:
/*<109>*/ 				printf("\x0E\x01\x09\x04\x00\x03Ottima risposta!\nAllora lanciati da qua!")
/*<111>*/ 				scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = false;
/*<112>*/ 				story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
/*<113>*/ 				story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*<250>*/ 				zone_temp_flags[13 /* 0x0 20 */] = true;
          			  case 1:
/*<110>*/ 				printf("Non c'è niente di male!\nAspetta fino a quando non ti senti pronto!\n\n\nResterò qui per un po'...\nTorna pure quando vuoi!")
/*<252>*/ 				zone_temp_flags[13 /* 0x0 20 */] = false;
          			}
          		  case 1:
/*<121>*/ 			switch (story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */]) {
          			  case 0:
/*<101>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ma che fai?\nPresto, lanciati!\nO non ne hai il coraggio?\n[1]Sono pronto![2-]Ho paura!")
/*<116>*/ 				switch (choice(2)) {
          				  case 0:
/*<120>*/ 					printf("\x0E\x01\x09\x04\x00\x03Proprio questo mi\naspettavo!\nIl cielo è tuo, Link!")
/*<249>*/ 					zone_temp_flags[13 /* 0x0 20 */] = true;
          				  case 1:
/*<117>*/ 					story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = false;
/*<118>*/ 					story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = false;
/*<119>*/ 					printf("Non c'è niente di male!\nAspetta fino a quando non ti senti pronto!\n\n\nResterò qui per un po'...\nTorna pure quando vuoi!")
/*<251>*/ 					zone_temp_flags[13 /* 0x0 20 */] = false;
          				}
          			  case 1:
          				goto flw_107
          			}
          		}
          	}
          }

          void entrypoint_108_30() {
/*<141>*/ 	start()
/*<142>*/ 	printf("Bene, Link!\n\n\n\nHo insegnato al tuo solcanubi a fare\nun <g<avvitamento >>quando premi \x0E\x02\x04\x02\x1ECD.")
          }

          void entrypoint_108_14() {
/*<114>*/ 	start()
/*<115>*/ 	printf("")
          }

          void entrypoint_108_31() {
/*<143>*/ 	start()
/*<146>*/ 	printf("Ora devi rompere <r<10 bersagli >>che si\ntrovano sulle rocce davanti a te con\nl'<r<attacco avvitato>>.")
          }

          void entrypoint_108_15() {
/*<124>*/ 	start()
/*<125>*/ 	printf("\x0E\x01\x09\x04\x00\x02Link!!!\nMa dove vai?! Il battesimo del volo\nè già iniziato! Presto, lanciati dalla\npiattaforma!")
          }

          void entrypoint_108_32() {
/*<144>*/ 	start()
/*<147>*/ 	printf("Solo quando riuscirai a distruggere\n10 bersagli in meno di <r<120 secondi>>,\navrai dimostrato di essere un vero\ncavaliere dei solcanubi.")
          }

          void entrypoint_108_16() {
/*<130>*/ 	start()
/*<283>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<285>*/ 		switch (zone_temp_flags[15 /* 0x0 80 */]) {
          		  case 0:
/*<287>*/ 			printf("\x0E\x01\x09\x04\x00\x16All'improvviso sono scomparsi i mostri\ne i prociatti non diventano più\naggressivi... mi chiedo cosa sarà mai\nsuccesso!")
          		  case 1:
/*<284>*/ 			printf("\x0E\x01\x09\x04\x00\x0DEhi, Link! Guarda!\nAnche se è notte, Fifì non è diventata\naggressiva!\n\nNon trovi anche tu che sia un evento\nstraordinario?! Aaah, non potrei\nessere più contento di così!")
/*<286>*/ 			zone_temp_flags[15 /* 0x0 80 */] = true;
          		}
          	  case 1:
/*<157>*/ 		switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          		  case 0:
/*<158>*/ 			printf("\x0E\x01\x09\x04\x00\x16La notte preferisco stare lontano da Fifì...\n\n\n\nPrima la tenevo nella scuola, ma una volta\nè successo un disastro...\n\n\nNon ti conviene andare in giro di notte!")
          		  case 1:
/*<131>*/ 			printf("\x0E\x01\x09\x04\x00\x04È pericoloso uscire\ndi notte!\n\n\nAnche Fifì, la prociatta del direttore,\ndi notte si trasforma in una belva...\n\n\nDi notte Oltrenuvola è\npervasa da una strana energia...")
          		}
          	}
          }

          void entrypoint_108_33() {
/*<145>*/ 	start()
/*<148>*/ 	printf("Pronti... via!")
          }

          void entrypoint_108_17() {
/*<132>*/ 	start()
/*<133>*/ 	printf("\x0E\x01\x09\x04\x00\x02Link!\nMa dove vai?!\n\n\nPresto! Lanciati dalla piattaforma e\nchiama il tuo solcanubi!")
          }

          void entrypoint_108_18() {
/*<134>*/ 	start()
/*<135>*/ 	printf("\x0E\x01\x09\x04\x00\x02Ehi, Link!\nVorresti una lezione persino ora?\n[1]Sì[2-]No...")
/*<136>*/ 	switch (choice(2)) {
          	  case 0:
/*<138>*/ 		printf("D'accordo, anche se per oggi\nsarebbero sospese, per te farò\nun'eccezione.\nOttimo atteggiamento!\nAllora oggi ti racconterò\nla storia di Oltrenuvola.\n\n\nOltrenuvola è un'isola che fluttua\nnel cielo da migliaia di anni.\n\n\nI nostri antenati sono\nsempre vissuti in cielo,\nqui e nelle isole vicine.\n\n\x0E\x01\x09\x04\x09\xA00Al di sotto di Oltrenuvola,\nsi estende un mare di nubi,\ne chi vi cade non fa ritorno.\n\nSi dice che al di sotto del\nmare di nuvole ci sia il nulla.\n\n\n\x0E\x01\x09\x04\n\xA00Per oggi è tutto. Ora vai a\nprepararti per il battesimo\ndel volo.")
          	  case 1:
/*<137>*/ 		printf("Capisco... ad ogni modo le lezioni di\noggi erano già state sospese a causa dei\npreparativi per il battesimo del volo...\n\nSarebbe meglio che anche tu\ncominciassi a prepararti per\nla cerimonia.")
          	}
          }

          void entrypoint_108_01() {
          	start()
/*<  9>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 71>*/ 		switch (scene_flags[41 /* 0x4 02 */]) {
          		  case 0:
/*< 63>*/ 			printf("Fidati di me, ritroverai presto il tuo\nsolcanubi!")
          		  case 1:
/*< 62>*/ 			printf("\x0E\x01\x09\x04\x00\x01Link, che ti è successo?\nSei pallido...\n\n\nCosa?!<pause32> Non trovi più il tuo\nsolcanubi?\n\n\nQuesto è un vero problema!\nE\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í pensi di riuscire a ritrovarlo?\n\n\nVai a cercarlo?<pause28>\nMa non riuscirai mai a\nfare in tempo per la cerimonia!\n\nUn battesimo del volo senza\nil solcanubi è impossibile\x0E\x01\x06\x02\xFCCD...<pause1E>\n\n\n\x0E\x01\x09\x04\x00\x05\x0E\x01\x06\x02\x2CDUhm...<pause1E>")
/*<159>*/ 			switch (scene_flags[30 /* 0x2 40 */]) {
          			  case 0:
/*<160>*/ 				printf("Davvero?\nIl direttore mi sta cercando?\n\n\nBene!\nGrazie di avermi avvertito!\n\n\nNon stare in pensiero per la cerimonia.\nVai a cercare il tuo solcanubi!")
          				flw_72:
/*< 72>*/ 				scene_flags[0 'Skyloft'][41 /* 0x4 02 */] = true;
          			  case 1:
/*<161>*/ 				printf("Forse è la punizione per non aver\nascoltato il maestro...\n\n\nMah, lasciamo perdere...\nIl direttore vuole parlarmi?\nIn tal caso, per ora non preoccuparti\ndella cerimonia.\nVai a cercare il tuo solcanubi!")
/*<239>*/ 				story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = false;
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
/*< 12>*/ 					printf("Uhm... non sai che i prociatti di notte\nsi trasformano...?\n\n\nÈ una storia che fa paura...")
          					flw_13:
/*< 13>*/ 					printf("\x0E\x01\x09\x04\x00\x16Qui a Oltrenuvola, quando cala\nla notte, i prociatti sono come\nposseduti.\n\nAnche gli animali che vivono\nnelle grotte o in luoghi oscuri\nsono attivi di notte.\n\nEcco perché gli umani\nnon escono la sera, se non\nper cose importanti.\n\nBeh, per voi che aspirate a\ndiventare cavalieri, non\ndovrebbero essere un problema...\n\nPerò la prudenza non è mai troppa!")
          				  case 1:
          					goto flw_13
          				}
          			  case 1:
/*< 92>*/ 				set_camera(17, 0)
/*< 49>*/ 				printf("\x0E\x01\x09\x04\x0F\x40DOh! Me l'hai riportata sana e salva!\nGrazie! <pause23>\x0E\x01\x09\x04\x09\x400Sei stato proprio gentile,\nLink!\n\nScommetto che è affamata!\nAdesso le darò un po' di cibo.")
/*<154>*/ 				set_camera(20, 0)
/*< 52>*/ 				printf("Puoi dire al direttore che sta bene?\nLo trovi nella <r<piazza di fronte al\nsantuario>>.")
/*<240>*/ 				set_camera(21, 0)
/*<241>*/ 				printf("Zelda dovrebbe essere con lui.\nPresto, vai!\n\n\nOh, sì! Dovrei darti un premio...\nNon è molto, ma ti prego di accettarlo.\nEhm, non dirlo agli altri.")
/*<242>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 50, 'param3': 42}
/*< 50>*/ 				scene_flags[0 'Skyloft'][30 /* 0x2 40 */] = true;
/*<292>*/ 				give_item(4 0x04);
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
/*<  7>*/ 					printf("\x0E\x01\x09\x04\x09\x400Oh! Mi andresti davvero a prendere Fifì?\n[1]Sì[2]No")
/*<  8>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_2:
/*<  2>*/ 						printf("\x0E\x01\x09\x04\x09\x40DDavvero?\nAnche se vai di fretta? Ti ringrazio!")
/*< 43>*/ 						{'type': 'type3', 'subType': 4, 'param1': 3328, 'param2': 0, 'next': 44, 'param3': 22}
/*< 44>*/ 						printf("\x0E\x01\x09\x04\x09\x400Da quella parte dovresti riuscire a\nsalire. Se ti aggrappi al cornicione e\narrivi fin lì dovresti riuscire a\nraggiungere il tetto.\n\x0E\x01\x07\x04\xFF00\x00Mi raccomando!")
/*< 45>*/ 						temp_flags[2 /* 0x1 04 */] = true;
/*<234>*/ 						story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
          					  case 1:
/*<228>*/ 						printf("\x0E\x01\x09\x04\x00\xA00Ah...\n\n\n\nAllora potresti dire al direttore\nche il maestro Cornelio ha trovato\nFifì? Così starà tranquillo...")
          					}
          				  case 1:
/*< 68>*/ 					switch (scene_flags[38 /* 0x5 40 */]) {
          					  case 0:
/*<230>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 1, 'param3': 31}
/*<  1>*/ 						printf("\x0E\x01\x09\x04\x00\x01Buongiorno, Link!\nVuoi allenarti subito per il battesimo\ndel volo?\n\nEh? <pause1E>Un appuntamento?\n<pause1E>Ah... devi vedere <b<Zelda>>?")
/*< 42>*/ 						printf("Beh, allora capiti proprio a fagiolo!\n\n\n\n<b<Gaepora>>, il padre di Zelda, sai... il\ndirettore della scuola... beh, la sua\n<r<Fifì >>è fuggita...")
/*<236>*/ 						set_camera(12, 0)
/*<235>*/ 						printf("Guarda! \x0E\x01\n\x04\x10ÍNon vuole scendere da lì...\n\n\n\n\x0E\x01\n\x04\xFFFFÍIl direttore è troppo\nimpegnato a preparare\nla cerimonia insieme a Zelda...\n\nAvevo pensato di attirarla con del cibo,\nma la cerimonia sta per cominciare e\nnon vorrei sporcare il mio vestito\nmigliore...\n\x0E\x01\x07\x04\xFF00\x00Perché non vai tu a\nprendere Fifì?\n\n[1]Va bene[2]Ho da fare")
/*<  4>*/ 						switch (choice(2)) {
          						  case 0:
/*< 54>*/ 							set_camera(-1, 0)
          							goto flw_2
          						  case 1:
/*< 55>*/ 							set_camera(-1, 0)
/*<  3>*/ 							printf("\x0E\x01\x09\x04\x00\xA00Ah...\n\n\n\nAllora potresti dire al direttore\nche il maestro Cornelio ha trovato\nFifì? Così starà tranquillo...")
/*<  5>*/ 							temp_flags[1 /* 0x1 02 */] = true;
/*<233>*/ 							story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
          						}
          					  case 1:
/*< 65>*/ 						switch (scene_flags[37 /* 0x5 20 */]) {
          						  case 0:
/*< 89>*/ 							set_camera(9, 0)
/*< 67>*/ 							printf("\x0E\x01\x09\x04\x0B\xA06Ma che fai?\nFai subito quello che ti dice il maestro!")
          						  case 1:
/*<153>*/ 							story_flags[565 /* us: 805A9B19 0x10, jp: 805ACD99 0x10 */] = false;
/*<173>*/ 							{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 100, 'next': 88, 'param3': 17}
/*< 88>*/ 							set_camera(9, 0)
/*<263>*/ 							switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          							  case 0:
/*<264>*/ 								printf("\x0E\x01\x09\x04\x0B\xA0DEsattamente!\nRicorda sempre di <g<inquadrare >>qualcuno\nper rivolgergli la parola.\n\n\x0E\x01\x09\x04\x00\xC04Da come mi guardi sembra che tu sappia\ngià tutto questo. Ma anche se fosse, un\nripasso non fa mai male.\n\n\x0E\x01\x09\x04\x00\xA00Nella <r<modalità eroica>>...<pause1E>\n<pling>Perderai il <r<doppio dei cuori>>!\nPer questo è ancora più importante che\ntu sappia <g<inquadrare>>!\nComunque sia, parlare in questo modo\nè decisamente scomodo! Ti prego, vieni\nqui sopra!")
          								flw_58:
/*< 58>*/ 								set_camera(10, 0)
/*< 41>*/ 								printf("\x0E\x01\x09\x04\x0B\xA00Dovresti riuscire a salire su quelle casse\ndi legno facendo uno <g<sprint>>, non credi?\n\n\nVedrai che non avrai problemi a\nsuperare un dislivello del genere!\nProva ad arrivare fin qui!")
/*< 66>*/ 								scene_flags[0 'Skyloft'][37 /* 0x5 20 */] = true;
/*<290>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': -1, 'param3': 60}
          							  case 1:
/*<262>*/ 								printf("\x0E\x01\x09\x04\x0B\xA0DEsattamente!\nRicorda sempre di <g<inquadrare >>qualcuno\nper rivolgergli la parola.\n\nE anche se non c'è nessun bersaglio da\ninquadrare, è molto comodo perché ti\npermette di centrare la visuale in avanti.\n\nPerò da questa distanza è un po' difficile\nparlare... perché non ti avvicini?")
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
/*<139>*/ 	start()
/*<140>*/ 	printf("\x0E\x01\x09\x04\x00\x04Ehi! Quello è il posto del maestro!\nTu sei un allievo!\nVatti a sedere dall'altra parte!")
          }

          void entrypoint_108_02() {
/*< 14>*/ 	start()
/*< 38>*/ 	switch (story_flags[31 /* us: 805A9ADA 0x80, jp: 805ACD5A 0x80 */]) {
          	  case 0:
/*< 21>*/ 		printf("\x0E\x01\x09\x04\x00\x02Che fai? Presto, fai uno <g<sprint >>con (B),\n<r<lanciati >>in aria e chiama il solcanubi!\n\n\nPer chiamare il solcanubi premi (v)!\x0E\x01\x11\x02\x9CD")
          	  case 1:
/*< 28>*/ 		set_camera(1, 0)
/*< 22>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 23, 'param3': 32}
/*< 23>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 24, 'param3': 32}
/*< 24>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 6, 'next': 176, 'param3': 32}
/*<176>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 179, 'param3': 32}
/*<179>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 25, 'param3': 32}
/*< 25>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 26, 'param3': 17}
/*< 26>*/ 		{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 0, 'next': 27, 'param3': 17}
/*< 27>*/ 		{'type': 'type3', 'subType': 1, 'param1': 6, 'param2': 0, 'next': 180, 'param3': 17}
/*<180>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 19, 'next': 15, 'param3': 13}
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\x02Il <r<battesimo del volo\n>>sta per iniziare.\n\n\nLink stava per essere\nescluso, ma per fortuna ora è tutto\nrisolto e siamo al completo!\n\nBene, lasciate che vi\nspieghi le <r<regole>>!")
          		flw_16:
/*< 16>*/ 		printf("Per primo si lancerà il solcanubi che\nporta la statuetta...\n\n\nPoi, al mio segnale, farete uno <g<sprint >>e\n<r<vi lancerete>> in cielo per saltare in groppa\nal vostro solcanubi.\n\nAppena vi lanciate, non dimenticatevi\ndi usare il <g<richiamo>> con (v)!\x0E\x01\x11\x02\x9CD\n\n\nIl primo che raggiunge il solcanubi\ne prende la <r<statuetta>> è il vincitore!\n\n\n\x0E\x01\n\x04\x02ÍEcco, tutto qui.\nAvete capito tutti?\n[1]Sì[2?]No")
/*< 18>*/ 		switch (choice(2)) {
          		  case 0:
/*< 30>*/ 			set_camera(3, 0)
/*< 17>*/ 			printf("\x0E\x01\x09\x04\x00\x03\x0E\x01\x08\x02\x1CDBene!\n\n\n\nIl vincitore verrà promosso alla classe\nsuperiore della scuola d'armi.<pause14>\n\n\nInoltre riceverà un <r<riconoscimento per\nl'onore>>, che gli sarà consegnato dalla\nragazza scelta per rappresentare\nla <r<Dea>> durante la cerimonia...\nIn occasione del 25° anniversario,\nil conferimento avverrà <r<sulla\npiattaforma tra le mani della statua\ndella Dea>>.\nQuest'anno, per desiderio della\nrappresentante della Dea, sarà un\noggetto da lei stessa <r<realizzato>>.\n\nE come sapete, <r<la rappresentante\ndella Dea >>quest'anno è...")
/*<184>*/ 			{'type': 'type3', 'subType': 4, 'param1': 267, 'param2': 3840, 'next': 177, 'param3': 13}
/*<177>*/ 			set_camera(5, 0)
/*<174>*/ 			printf("\x0E\x01\x09\x04\x100\x09\x0E\x01\x08\x02\x1CDLa dolce Zelda!")
/*<193>*/ 			{'type': 'type3', 'subType': 4, 'param1': 1048, 'param2': 3084, 'next': 31, 'param3': 13}
/*< 31>*/ 			set_camera(2, 0)
/*< 20>*/ 			printf("Fateci vedere quali risultati avete\nottenuto con il vostro allenamento!\n\n\nE non lanciate oggetti né scontratevi\ncon gli altri concorrenti!")
/*<178>*/ 			set_camera(6, 0)
/*<181>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 4, 'next': 182, 'param3': 50}
/*<182>*/ 			{'type': 'type3', 'subType': 4, 'param1': 512, 'param2': 23, 'next': 175, 'param3': 13}
/*<175>*/ 			printf("\x0E\x01\x08\x02\x1CDHai capito, \x0E\x01\x09\x04\x419\x1700Bado?")
/*< 40>*/ 			set_camera(4, 0)
/*<183>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 53, 'param3': 50}
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

