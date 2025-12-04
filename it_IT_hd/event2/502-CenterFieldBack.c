          void entrypoint_502_06() {
/*< 69>*/ 	start()
/*< 70>*/ 	switch (story_flags[787 /* us: 805A9B2C 0x08, jp: 805ACDAC 0x08 */]) {
          	  case 0:
/*< 71>*/ 		story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */] = true;
          		flw_73:
/*< 73>*/ 		zone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 72>*/ 		story_flags[787 /* us: 805A9B2C 0x08, jp: 805ACDAC 0x08 */] = true;
          		goto flw_73
          	}
          }

          void entrypoint_502_07() {
/*< 74>*/ 	start()
/*< 77>*/ 	switch (story_flags[798 /* us: 805A9B2F 0x40, jp: 805ACDAF 0x40 */]) {
          	  case 0:
/*< 76>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "Devi sconfiggere Mortipher!\n<0x10009:0x00000003>Ora tutto è nelle tue mani,\n<heroname>!")
          	  case 1:
/*< 75>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x000e020d>Uff...! Sono salvo per un pelo!\n\n\n\n<0x10009:0x00000200>Se non fosse stato per il mio sprint\nultravigoroso!\n\n\n<0x10009:0x00000200>A <color blue<Zelda >coloroff>ci penso io, non ti\npreoccupare! Tu corri a\ninseguire <color blue<Mortipher>coloroff>!\n\n<0x10009:0x00000203>Lascio tutto nelle tue mani,\n<heroname>!")
/*< 78>*/ 		story_flags[798 /* us: 805A9B2F 0x40, jp: 805ACDAF 0x40 */] = true;
          	}
          }

          void entrypoint_502_08() {
/*< 79>*/ 	start()
/*< 86>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<heroname>, <0x10012:0x00000004>mio signore, siete\npronto per la battaglia?\n[1-]Pronto![2]Non ancora")
/*< 87>*/ 	switch (choice(2)) {
          	  case 0:
/*< 88>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "Certamente, <0x10012:0x00000005>mio signore. Andiamo!")
/*< 90>*/ 		changeScene(11, 0) // 
          	  case 1:
/*< 89>*/ 		printf(/* textboxtype: 0, unk: 1, line: 31 */ "Certamente, <0x10012:0x00000005>mio signore. Quando avrete\nterminato con i preparativi, tornate qui.")
          	}
          }

          void entrypoint_502_09() {
/*< 80>*/ 	start()
/*< 81>*/ 	printf(/* textboxtype: 0, unk: 0, line: 26 */ "<heroname>, <0x10012:0x00000004>mio signore,\ndesiderate tornare indietro e\nprepararvi prima della battaglia?\n[1-]Buona idea![2]Non serve")
/*< 82>*/ 	switch (choice(2)) {
          	  case 0:
/*< 83>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "Certamente, <0x10012:0x00000005>mio signore. Quando avrete\nterminato con i preparativi, tornate qui.")
/*< 85>*/ 		changeScene(10, 0) // 
          	  case 1:
/*< 84>*/ 		printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10012:0x00000005>Sì, mio signore...")
          	}
          }

          void entrypoint_502_01() {
          	start()
/*<  3>*/ 	switch (story_flags[350 /* us: 805A9B01 0x10, jp: 805ACD81 0x10 */]) {
          	  case 0:
/*< 27>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*< 31>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 51>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000001>Non hai ancora portato a termine il tuo\nincarico...\n\n\nDevi fare tutto ciò che sei destinato a\nfare per <color blue<Zelda>coloroff>, immersa nel suo\nsonno eterno.")
          			  case 1:
/*< 32>*/ 				switch (scene_flags[37 /* 0x5 20 */]) {
          				  case 0:
/*< 48>*/ 					switch (scene_flags[103 /* 0xD 80 */]) {
          					  case 0:
/*< 50>*/ 						printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00000003>Già si sente la sua forza vitale!\nSi trasformerà in un albero la cui\nbellezza risplenderà nel futuro.")
          					  case 1:
/*< 47>*/ 						printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x0000000b>Oh! Hai piantato il germoglio!\n\n\n\nGià si sente la sua forza vitale!\nSi trasformerà in un albero la cui\nbellezza risplenderà nel futuro.")
/*< 49>*/ 						scene_flags[10 'Sealed Grounds'][103 /* 0xD 80 */] = true;
          					}
          				  case 1:
/*< 33>*/ 					switch (scene_flags[102 /* 0xD 40 */]) {
          					  case 0:
/*< 46>*/ 						printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000003>Un albero capace di fiorire per\nmigliaia di anni... dove potrei\ntrovare un <color red<bulbo >coloroff>del genere?")
          					  case 1:
/*< 34>*/ 						printf(/* textboxtype: 0, unk: 1, line: 7 */ "<pause 15>.<pause 15>.<pause 15>.\n<0x10009:0x000f0803>Uhm...\n\n\n[1-]Che?[2-]Addio")
/*< 35>*/ 						switch (choice(2)) {
          						  case 0:
/*< 36>*/ 							printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00000703>Uhmm...\nNon è nulla di importante...")
/*< 57>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 58, 'param3': 32}
/*< 58>*/ 							wait_frames(1)
/*< 38>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 39, 'param3': 17}
/*< 39>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 59, 'param3': 17}
/*< 59>*/ 							wait_frames(30)
/*< 40>*/ 							set_camera(5, 0)
/*< 41>*/ 							printf(/* textboxtype: 0, unk: 1, line: 10 */ "Vedi quel luogo con tutta quella luce?\n\n\n\nSto pensando se non sia adatto a\npiantarci un albero.\n\n\nCosì, quando <color blue<Zelda >coloroff>aprirà gli occhi,\nne sarà felice.")
/*< 60>*/ 							wait_frames(30)
/*< 61>*/ 							set_camera(-1, 0)
/*< 42>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 43, 'param3': 17}
/*< 43>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 44, 'param3': 17}
/*< 44>*/ 							printf(/* textboxtype: 0, unk: 0, line: 11 */ "Chissà se esiste un albero capace di\nvivere per migliaia di anni e continuare\na fiorire? E dove potrei trovare un\n<color red<bulbo >coloroff>del genere?")
/*< 45>*/ 							scene_flags[10 'Sealed Grounds'][102 /* 0xD 40 */] = true;
          						  case 1:
/*< 37>*/ 							printf(/* textboxtype: 1, unk: 0, line: 9 */ "Uhmm...")
          						}
          					}
          				}
          			}
          		  case 1:
/*< 29>*/ 			switch (scene_flags[101 /* 0xD 20 */]) {
          			  case 0:
          				flw_28:
/*< 28>*/ 				printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x0000000a>Non preoccuparti. Ci sono io qui a\nproteggere <color blue<Zelda>coloroff>. Vai e porta a\ntermine il tuo compito.")
          			  case 1:
/*<  2>*/ 				printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00000003>... Bene, vi siete detti addio.\n\n\n\nLa tua promessa a <color blue<Zelda>coloroff>...\nNon dimenticartene...\nTrova la <color yellow white<Triforza>coloroff>!\n\nCi sono ancora alcune cose che\ndevi fare nella tua epoca!")
/*< 30>*/ 				scene_flags[10 'Sealed Grounds'][101 /* 0xD 20 */] = true;
          				goto flw_28
          			}
          		}
          	  case 1:
/*<  4>*/ 		switch (scene_flags[82 /* 0xB 04 */]) {
          		  case 0:
/*< 18>*/ 			printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00000003>Siamo in un'<color red<epoca passata>coloroff>, più o meno\nnel momento in cui la <color blue<Dea Hylia>coloroff> ha\nimprigionato <color blue<Mortipher>coloroff>.\n\nAvrai una montagna di domande da\nfarmi, ma prima procedi verso\nla grande porta là in fondo.\n\nLa persona che volevi proteggere\ncon tutto te stesso ti aspetta.")
          		  case 1:
/*< 19>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 10, 'param3': 31}
/*< 10>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 11, 'param3': 32}
/*< 11>*/ 			printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Finalmente, <heroname>!\nTi stavo aspettando!\n\n\nImmagino che tu sia un po' confuso...\nlascia che ti spieghi...")
/*< 12>*/ 			set_camera(2, 0)
/*<  5>*/ 			printf(/* textboxtype: 0, unk: 1, line: 1 */ "Ci troviamo nel <color red<Santuario Hylia>coloroff>,\nconosciuto anche come <color blue<Santuario\ndell'esilio >coloroff>e... siamo in un tempo\nlontano dalla vostra epoca.\nPoco dopo che la Dea ha imprigionato\n<color blue<Mortipher>coloroff>. Non è passato molto tempo\nda quando Oltrenuvola si è separata\ndalla Terra...")
/*< 13>*/ 			set_camera(-1, 0)
/*<  6>*/ 			printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x0f0f0703>Esatto. Hai attraversato la\n<color blue<Porta del Tempo >coloroff>e ora ti\ntrovi in un'<color red<epoca passata>coloroff>.\n\nAvrai una montagna di domande\nda farmi, ma prima procedi verso\nla grande porta là in fondo.")
/*< 15>*/ 			set_camera(3, 0)
/*< 14>*/ 			printf(/* textboxtype: 1, unk: 0, line: 3 */ "La persona che volevi\nproteggere con tutto te\nstesso ti aspetta.")
/*<  7>*/ 			story_flags[349 /* us: 805A9B01 0x08, jp: 805ACD81 0x08 */] = true;
/*<  8>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<  9>*/ 				story_flags[370 /* us: 805A9B02 0x01, jp: 805ACD82 0x01 */] = true;
          				flw_17:
/*< 17>*/ 				scene_flags[10 'Sealed Grounds'][82 /* 0xB 04 */] = true;
/*< 16>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
          				goto flw_17
          			}
          		}
          	}
          }

          void entrypoint_502_02() {
/*<  1>*/ 	start()
/*< 21>*/ 	switch (scene_flags[85 /* 0xB 20 */]) {
          	  case 0:
/*< 25>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000012>È scappato dalla <color red<porta anteriore>coloroff>...\nPresto! Insegui <color blue<Ghiraim>coloroff>!")
          	  case 1:
/*< 22>*/ 		printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000012>Argh?! Sei tu, <heroname>?\nGhiraim mi ha sconfitta...\n\n\nNon preoccuparti per me...\nVai a inseguirlo!")
/*< 20>*/ 		set_camera(4, 0)
/*< 23>*/ 		printf(/* textboxtype: 0, unk: 0, line: 17 */ "È scappato dalla <color red<porta anteriore>coloroff>...\nPuoi ancora farcela... Sbrigati!")
/*< 24>*/ 		scene_flags[10 'Sealed Grounds'][85 /* 0xB 20 */] = true;
/*< 26>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_502_03() {
/*< 52>*/ 	start()
/*< 53>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 56>*/ 		printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00070c04>Stai tranquillo! <color blue<Zelda >coloroff>è al sicuro!\nSta riposando nell'altra stanza.\n\n\n<0x10009:0x00000706>Sconfiggi il mostro e salva il\nmondo, <heroname>!")
          	  case 1:
/*< 54>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00070c0b>Stai tranquillo! <color blue<Zelda >coloroff>è al sicuro!\nSta riposando nell'altra stanza.\n\n\n<0x10009:0x000f0700>Certo, Mortipher si è risvegliato...\nNe sono sorpresa anch'io.\n<pause 10>Sei la nostra ultima speranza!\n<0x10009:0x00000706>Mi raccomando, <heroname>!")
/*< 55>*/ 		scene_flags[10 'Sealed Grounds'][104 /* 0xC 01 */] = true;
          	}
          }

          void entrypoint_502_04() {
/*< 62>*/ 	start()
/*< 64>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10012:0x0000000b><heroname>, mio signore, Faih a\nrapporto. Probabilità di non fare\nritorno se non sconfiggerete il vostro\navversario: 100%.\nSiete pronto?\n[1-]Sì[2]No")
/*< 63>*/ 	switch (choice(2)) {
          	  case 0:
/*< 65>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10012:0x00000005>Certamente, mio signore.<pause 15> La vostra\nservitrice Faih è sempre pronta a\neseguire gli ordini del <0x10012:0x00000002>suo signore...\n<pause 30>Che la fortuna sia con voi!")
          	  case 1:
/*< 66>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10012:0x00000005>Certamente, mio signore. Quando\nsarete pronto tornate pure qui.")
          	}
          }

          void entrypoint_502_05() {
/*< 67>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10005:0x002d0000><0x10008:0x02cd>Pivello!")
          }

