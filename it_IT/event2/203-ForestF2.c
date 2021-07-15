          void entrypoint_203_55() {
/*<147>*/ 	start()
/*<149>*/ 	switch (story_flags[188 /* us: 805A9AE9 0x08, jp: 805ACD69 0x08 */]) {
          	  case 0:
/*<148>*/ 		printf("Probabilità che quest'<r<orcio d'acqua\n>>possa spegnere le fiamme, una volta\nportato fino al vulcano: 85%.\n\nSuggerisco di chiederlo in\nprestito al drago d'acqua.")
          	  case 1:
/*<150>*/ 		printf("L'<r<orcio d'acqua>> è pieno. Probabilità\nche possa spegnere le fiamme del\nvulcano: 85%.\n\n<pling>Suggerisco di chiederlo in\nprestito al drago d'acqua.")
/*<167>*/ 		story_flags[188 /* us: 805A9AE9 0x08, jp: 805ACD69 0x08 */] = true;
          	}
          }

          void entrypoint_203_72() {
/*<163>*/ 	start()
/*<162>*/ 	printf("Signor Verdino! Osserva bene\nquanto sono forte!\nBzzz!")
          }

          void entrypoint_203_03() {
/*<420>*/ 	start()
/*<421>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<422>*/ 		printf("\x0E\x01\x09\x04\x00\x04È bello vivere in pace!\nAnche se ora ho fin troppo\ntempo libero!\n\n\x0E\x01\x09\x04\x11\x05Un vero lusso!")
          	  case 1:
/*<423>*/ 		printf("\x0E\x01\x09\x04\x00\x14Noi ci siamo rifugiati qui!\nNon dovresti venire!\nE se poi i mostri ti seguono?")
          	}
          }

          void entrypoint_203_90() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf("\x0E\x01\x09\x04\x00\x0FUhm... uhm...")
          }

          void entrypoint_203_56() {
/*<151>*/ 	start()
/*<177>*/ 	switch (scene_flags[127 /* 0xE 80 */]) {
          	  case 0:
/*<178>*/ 		printf("Bene...<pause0F>\nDesiderate che chiami quel robot?\n[1]Sì[2]Lui no!")
          		flw_153:
/*<153>*/ 		switch (choice(2)) {
          		  case 0:
/*<152>*/ 			printf("\x0E\x01\x12\x04\x00\x05Bene, signore.\nLo chiamo immediatamente.")
          		  case 1:
/*<181>*/ 			switch (scene_flags[127 /* 0xE 80 */]) {
          			  case 0:
/*<182>*/ 				printf("\x0E\x01\x12\x04\x00\x01Signore...<pause0F> non è il momento\ndi fare gli schizzinosi, vi prego\ndi contenervi.\nLo chiamo immediatamente!")
          			  case 1:
/*<154>*/ 				printf("\x0E\x01\x12\x04\x00\x01Mio signore...<pause0F> non credo sia\nil momento di fare gli schizzinosi.\nLo chiamo immediatamente.")
          			}
          		}
          	  case 1:
/*<155>*/ 		printf("Volete che chiami quel robot per\ntrasportare l'<r<orcio d'acqua >>fino al\nvulcano?\n[1]Sì[2]Lui no!")
          		goto flw_153
          	}
          }

          void entrypoint_203_73() {
/*<165>*/ 	start()
/*<164>*/ 	printf("Bene! Come al solito vi\naspetterò in cielo! Bzzz!")
/*<588>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          }

          void entrypoint_203_04() {
/*<441>*/ 	start()
/*<442>*/ 	switch (zone_temp_flags[11 /* 0x0 08 */]) {
          	  case 0:
/*<445>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 443, 'param3': 6}
/*<443>*/ 		printf("\x0E\x01\x09\x04\x00\x04Di tanto in tanto, fa bene\nstare un po' a pensare...\n\n\n\x0E\x01\x09\x04\x00\x01Stare seduti e rilassati\nfa bene al corpo e all'anima!")
/*<444>*/ 		scene_flags[1 'Faron Woods'][54 /* 0x7 40 */] = true;
          	  case 1:
/*<424>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*<426>*/ 			switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          			  case 0:
/*<427>*/ 				printf("\x0E\x01\x09\x04\x00\x13Non c'è gusto a nascondersi,\nmi trovi subito!")
          			  case 1:
/*<428>*/ 				printf("\x0E\x01\x09\x04\x11\x13M'hai trovato di nuovo!\nSei imbattibile, tenero virgulto!\n\n\n\x0E\x01\x09\x04\x0B\x07Come premio ti donerò\nqualcosa che ho trovato\nmentre ero nascosto!")
/*<430>*/ 				give_item(176 0xB0);
/*<429>*/ 				printf("\x0E\x01\x09\x04\x00\x14Non dirlo a nessuno!")
/*<431>*/ 				story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = true;
          			}
          		  case 1:
/*<425>*/ 			printf("\x0E\x01\x09\x04\x00\x07Noi viviamo qui perché è comodo!\nAbbiamo pure dell'ottimo cibo!")
          		}
          	}
          }

          void entrypoint_203_05() {
/*<  2>*/ 	start()
/*<224>*/ 	switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          	  case 0:
/*<432>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*<433>*/ 			printf("\x0E\x01\x09\x04\x00\x02Un po' mi dispiace che\nl'acqua si sia ritirata... era da tempo\nche non mi sentivo così bene...")
/*<486>*/ 			printf("\x0E\x01\x09\x04\x00\x06Oh oh oh!")
/*<532>*/ 			entrypoint_203_09();
          		  case 1:
/*<434>*/ 			printf("\x0E\x01\x09\x04\x00\x0EIl drago d'acqua ha riconosciuto\nil tuo valore?! Sorprendente!")
/*<531>*/ 			entrypoint_203_09();
          		}
          	  case 1:
/*<225>*/ 		switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          		  case 0:
/*<226>*/ 			printf("\x0E\x01\x09\x04\x00\x0EHai incontrato il drago d'acqua?\nChe invidia...!")
/*<530>*/ 			entrypoint_203_09();
          		  case 1:
/*<  5>*/ 			switch (scene_flags[55 /* 0x7 80 */]) {
          			  case 0:
/*<  9>*/ 				switch (story_flags[60 /* us: 805A9ADC 0x80, jp: 805ACD5C 0x80 */]) {
          				  case 0:
/*< 13>*/ 					switch (story_flags[63 /* us: 805A9ADC 0x40, jp: 805ACD5C 0x40 */]) {
          					  case 0:
/*< 15>*/ 						switch (temp_flags[5 /* 0x1 20 */]) {
          						  case 0:
          							flw_16:
/*< 16>*/ 							printf("\x0E\x01\x09\x04\x00\x02Il mondo è vasto...\nAnch'io vorrei incontrare\nl'eremita!")
/*<334>*/ 							printf("\x0E\x01\x09\x04\x00\x06Oh oh oh!")
/*<529>*/ 							entrypoint_203_09();
          						  case 1:
/*< 14>*/ 							printf("\x0E\x01\x09\x04\x00\x0EHai incontrato l'eremita?\nEro convinto che noi Kyuri\nfossimo solo cinque...")
/*< 17>*/ 							temp_flags[5 /* 0x1 20 */] = true;
          							goto flw_16
          						}
          					  case 1:
/*< 12>*/ 						printf("\x0E\x01\x09\x04\x00\x0ECosa dici?! Sei appena tornato\ndalla cima dell'albero?!\n\n\n\x0E\x01\x09\x04\x00\x08Come?! C'era qualcuno sulla cima?\nDevo andare a controllare...")
/*<528>*/ 						entrypoint_203_09();
          					}
          				  case 1:
/*< 11>*/ 					switch (scene_flags[19 /* 0x3 08 */]) {
          					  case 0:
/*<  8>*/ 						printf("\x0E\x01\x09\x04\x00\x0ECosa?! Sei riuscito\na entrare dentro l'albero?!")
/*< 80>*/ 						printf("\x0E\x01\x09\x04\x00\x02Prova a scalare l'albero fino in\ncima... c'è una splendida vista\nda lì! E magari scopri qualcosa\ndi interessante!")
/*<527>*/ 						entrypoint_203_09();
          					  case 1:
/*< 10>*/ 						printf("\x0E\x01\x09\x04\x00\x03Ci sono dei posti in questa foresta\nche non hai ancora visitato, vero?\n\n\n\x0E\x01\x09\x04\x00\x08Se sfrutti il potere della scaglia del\ndrago d'acqua e premi (A) quando sei\na pelo d'acqua, puoi <g<immergerti>>.")
/*<526>*/ 						entrypoint_203_09();
          					}
          				}
          			  case 1:
/*<436>*/ 				switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          				  case 0:
/*< 20>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 328, 'param3': 31}
/*<328>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 327, 'param3': 6}
/*<327>*/ 					set_camera(1, 0)
/*<330>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 3, 'param3': 13}
/*<  3>*/ 					printf("\x0E\x01\x09\x04\x00\x0EOoh! Ma sei riuscito a ottenere\nla scaglia del drago d'acqua!\n\n\n\x0E\x01\x09\x04\x00\x02Con quella potrai nuotare\nliberamente come un drago\nvola nel cielo!")
/*<329>*/ 					set_camera(-1, 0)
/*<  6>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 7, 'param3': 13}
/*<  7>*/ 					printf("\x0E\x01\x09\x04\x00\x03C'è ancora un luogo in cui non\nsei mai stato, qui nella foresta!\n\n\n\x0E\x01\x09\x04\x00\x08Usa il potere della scaglia\nper trovarlo, no?")
/*<331>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 332, 'param3': 13}
/*<332>*/ 					printf("\x0E\x01\x09\x04\x00\x06Oh oh oh!")
/*<333>*/ 					scene_flags[1 'Faron Woods'][55 /* 0x7 80 */] = true;
/*<525>*/ 					entrypoint_203_09();
          				  case 1:
/*<435>*/ 					printf("\x0E\x01\x09\x04\x00\x03Non hai trovato la tua\namica in fondo alla foresta?!\n\n\n\x0E\x01\x09\x04\x00\x02Non appassirti! Vedrai\nche anche voi, come noi,\nvi rincontrerete!")
/*<524>*/ 					entrypoint_203_09();
          				}
          			}
          		}
          	}
          }

          void entrypoint_203_91() {
/*< 49>*/ 	start()
/*< 51>*/ 	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          	  case 0:
/*< 70>*/ 		switch (adventure_pouch_has(7 0x0007)) {
          		  case 0:
/*<319>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<320>*/ 				printf("\x0E\x01\x09\x04\x09\x707Cosa?! Possiedi già\nl'acqua?! Presto! Versa l'<b<acqua\nsacra >>in quest'orcio.")
          				flw_351:
/*<351>*/ 				story_flags[85 /* us: 805A9AE8 0x02, jp: 805ACD68 0x02 */] = true;
/*<515>*/ 				{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<549>*/ 				printf("\x0E\x01\x09\x04\x00\x0FUhm... uhm...")
/*<318>*/ 				printf("\x0E\x01\x09\x04\x07\x709Ooh!\nSenza dubbio si tratta dell'<b<acqua\nsacra>>. L'hai portata davvero fin qui!\nSbrigati, versala in questo orcio.")
          				goto flw_351
          			}
          		  case 1:
/*<548>*/ 			printf("\x0E\x01\x09\x04\x00\x0FUhm... uhm...")
/*< 69>*/ 			printf("\x0E\x01\x09\x04\x07\x706Portami l'acqua e io\nti guiderò verso la fiamma sacra.")
          		}
          	  case 1:
/*< 53>*/ 		switch (scene_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 50>*/ 			printf("\x0E\x01\x09\x04\x00\x0FUhm... uhm...")
/*< 58>*/ 			printf("\x0E\x01\x09\x04\x09\x706Portami l'<b<acqua sacra>> e io\nti guiderò verso la fiamma.\n[1]Va bene[2-]No")
/*< 60>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_61:
/*< 61>*/ 				entrypoint_203_52();
          			  case 1:
/*< 59>*/ 				printf("\x0E\x01\x09\x04\x09\x704Umpf... lo immaginavo.\nDel resto sei solo un umano.")
/*<473>*/ 				temp_flags[0 /* 0x1 01 */] = true;
          			}
          		  case 1:
/*<282>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*<457>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 454, 'param3': 49}
/*<454>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 455, 'param3': 6}
/*<455>*/ 				set_camera(11, 0)
/*<456>*/ 				{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 356, 'next': 283, 'param3': 15}
          				flw_283:
/*<283>*/ 				printf("\x0E\x01\x09\x04\x00\x0FTi trovi in un luogo sacro, nonché\nnel luogo in cui vivo.\n\n\n\x0E\x01\x09\x04\x09\x700Non è un luogo adatto a gente come te.\n\n\n\nCome hai fatto ad arrivare qui?!\n[1]Sei il drago?[2]Mi sono perso")
/*< 54>*/ 				switch (choice(2)) {
          				  case 0:
/*<458>*/ 					scene_flags[2 'Lake Floria'][0 /* 0x1 01 */] = true;
/*<474>*/ 					set_camera(27, 0)
/*<475>*/ 					printf("\x0E\x01\x09\x04\x07\x903Indubbiamente sì. Sono <b<Firone>>,\nil drago d'acqua, colei che la Dea ha\nincaricato di custodire queste terre.\n\nMalgrado il mio aspetto, sono una\nmeravigliosa ancella della Dea.\n\n\n\x0E\x01\x09\x04\x09\x900<pause0A>.<pause0A>.<pause0A>.<pause0A>\n\x0E\x01\x09\x04\x00\x07Mmh?!")
/*<451>*/ 					set_camera(11, 0)
/*<452>*/ 					printf("\x0E\x01\x09\x04\x09\x900\x0E\x01\x06\x02\xFECDTu... <pause0F>possiedi una delle\n\x0E\x01\x09\x04\x00\x06\x0E\x01\x06\x02\x2CD<b<mie scaglie>>!?\n\n\n\x0E\x01\x09\x04\x09\x700È un oggetto che dovrebbe trovarsi\nsolo nelle mani del prescelto dalla Dea.\n\x0E\x01\x09\x04\x00\x05Sei tu, dunque?\n\n\x0E\x01\x09\x04\x07\x700Tuttavia, ciò non spiega ancora come\npossa un umano trovarsi in questo\nluogo...")
/*<453>*/ 					set_camera(27, 0)
/*< 55>*/ 					printf("\x0E\x01\x09\x04\x07\x704Umpf... capisco...<pause1E>\nHai parlato con il Kyuri eremita...\n\n\n\x0E\x01\x09\x04\x09\x910Mi sembrava di avergli raccomandato\ndi non farne parola con nessuno!\nAppena lo incontro me lo mangio!\n\n\x0E\x01\x09\x04\x07\x900Mah... comunque sia...<pause1E>\nSei dunque venuto fin qui\nin cerca della <r<fiamma sacra>>?\n[1]Certo[2]Non ricordo")
/*<284>*/ 					switch (choice(2)) {
          					  case 0:
/*<285>*/ 						printf("\x0E\x01\x09\x04\x09\x704Umpf... come immaginavo.")
          						flw_463:
/*<463>*/ 						printf("\x0E\x01\x09\x04\x09\x700In ogni caso, non posso certo\ncredere che un ragazzino deboluccio\ncome te sia davvero il prescelto.\n\n\x0E\x01\x09\x04\x07\x703Devo metterti alla prova.\n\n\n\nTale <b<Ghiraim>>, che si professa patriarca\ndei maghi, mi ha ferita gravemente...")
/*<465>*/ 						set_camera(28, 0)
/*<464>*/ 						printf("\x0E\x01\x09\x04\x07\x70FCome vedi, sono qui ad\nattendere che l'<b<acqua sacra\n>>di questo orcio mi curi.\n\n\x0E\x01\x09\x04\x09\x700Ma, attualmente, gli effetti sono\nimpercettibili... Necessito di un'acqua\ndalla rinnovata forza.\n\n\x0E\x01\x09\x04\x09\x906Voglio che tu mi <pling><r<procuri dell'acqua\nsacra>> uguale a quella presente\nin questo orcio.")
/*<450>*/ 						set_camera(27, 0)
/*< 56>*/ 						printf("Se accetterai, ti guiderò nella\ntua ricerca della <r<fiamma sacra>>.\nCosa ne pensi?\n[1]Accetto[2-]Rifiuto")
/*< 57>*/ 						switch (choice(2)) {
          						  case 0:
/*<466>*/ 							temp_flags[3 /* 0x1 08 */] = true;
          							goto flw_61
          						  case 1:
/*<286>*/ 							printf("\x0E\x01\x09\x04\x09\x704Umpf... lo immaginavo.\nDel resto sei solo un umano.")
/*<287>*/ 							temp_flags[0 /* 0x1 01 */] = true;
/*<460>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						}
          					  case 1:
/*<291>*/ 						set_camera(11, 0)
/*<292>*/ 						printf("\x0E\x01\x09\x04\x09\x910\x0E\x01\x08\x02\x1CDNon prenderti gioco\ndi me, ragazzino!\n\n\n\x0E\x01\x09\x04\x01\x900Devo mettere alla prova\nil tuo spirito intrepido e coraggioso.")
/*<296>*/ 						set_camera(27, 0)
          						goto flw_463
          					}
          				  case 1:
/*<289>*/ 					set_camera(11, 0)
/*<290>*/ 					printf("\x0E\x01\x09\x04\x09\x910Come osi prenderti\ngioco di me, ragazzino?!\n\n\nStai molto attento, potrei\nmangiarti quella piccola\ntestolina in un sol boccone!")
/*<459>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				}
          			  case 1:
/*<449>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 298, 'param3': 49}
/*<298>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 412, 'param3': 6}
/*<412>*/ 				set_camera(11, 0)
/*<448>*/ 				{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 356, 'next': 52, 'param3': 15}
/*< 52>*/ 				printf("\x0E\x01\x09\x04\x00\x01\x0E\x01\x08\x02\x2CD!!!\n\n\n\nSei un umano?!")
/*<281>*/ 				temp_flags[1 /* 0x1 02 */] = true;
/*<288>*/ 				set_camera(27, 0)
          				goto flw_283
          			}
          		}
          	}
          }

          void entrypoint_203_57() {
/*<156>*/ 	start()
/*<157>*/ 	printf("\x0E\x01\x12\x04\x00\x01Signore, torniamo anche noi\nin cielo e dirigiamoci verso il\nvulcano.")
/*<166>*/ 	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = true;
/*<206>*/ 	story_flags[677 /* us: 805A9B20 0x40, jp: 805ACDA0 0x40 */] = true;
/*<280>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
/*<176>*/ 	scene_flags[2 'Lake Floria'][127 /* 0xE 80 */] = true;
/*<316>*/ 	story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<203>*/ 	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = false;
/*<204>*/ 	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
/*<202>*/ 	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = false;
/*<205>*/ 	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = false;
/*<200>*/ 	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = false;
/*<201>*/ 	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = false;
          }

          void entrypoint_203_06() {
/*< 31>*/ 	start()
/*<392>*/ 	printf("\x0E\x01\x09\x04\x03\x0FDimenticavo di dirti una cosa!<pause0F>\nIl drago d'acqua è una tipa molto fiera.\nStai attento a come le parli.\n\n\x0E\x01\x09\x04\x01\x00Se la offendi...<pause3C>\n\x0E\x01\x09\x04\x00\x0Bè capace di strizzarti come\nuna bustina di tè usata!")
/*<447>*/ 	set_camera(18, 0)
/*<393>*/ 	printf("\x0E\x01\x09\x04\x03\x06Non dirle per nessunissimo\nmotivo che ti ho parlato della\nfiamma di Farore! Capito?!\n\n\x0E\x01\x09\x04\x01\x00Non ho alcuna intenzione\ndi aromatizzare le sue tisane!\n\n\n\x0E\x01\x09\x04\x03\x07E faresti meglio a contarti\nle parole in bocca quando le parli!")
/*<446>*/ 	set_camera(20, 0)
/*<387>*/ 	printf("\x0E\x01\x09\x04\x00\x13Resterò qui a riposare.")
/*<388>*/ 	story_flags[63 /* us: 805A9ADC 0x40, jp: 805ACD5C 0x40 */] = true;
/*<389>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_92() {
/*< 68>*/ 	start()
/*<172>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<488>*/ 		switch (scene_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*<497>*/ 			entrypoint_203_85();
          		  case 1:
/*<487>*/ 			printf("\x0E\x01\x09\x04\x07\x702Le creature malvagie della\nforesta sono state debellate.\nSono soddisfatta.\n\nE vedo che sei riuscito a controllare\nil potere della tua spada.\n\n\n\x0E\x01\x09\x04\x07\x704La prima volta che sei venuto qui,\navevi l'aria un po' sperduta...<pause1E>\nIl tuo sguardo ha acquistato\nfierezza.\n\x0E\x01\x09\x04\x07\x706Ma dovrai continuare a temprarti\nper compiere il destino di cui la\nDea ti ha fatto carico.")
/*<489>*/ 			scene_flags[2 'Lake Floria'][1 /* 0x1 02 */] = true;
          		}
          	  case 1:
/*<173>*/ 		switch (story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */]) {
          		  case 0:
/*<170>*/ 			printf("\x0E\x01\x09\x04\x07\x702Potrai rendermi l'orcio d'acqua\nquando non ne avrai più bisogno,\nnon ti crucciare.")
          		  case 1:
/*<171>*/ 			switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
          			  case 0:
/*<174>*/ 				switch (scene_flags[127 /* 0xE 80 */]) {
          				  case 0:
/*<175>*/ 					printf("\x0E\x01\x09\x04\x07\x707Come? Ti serve nuovamente\nl'<r<orcio d'acqua>>?<pause1E>\n\n\n\x0E\x01\x09\x04\x00\x05Umpf...<pause0F> prego...\nEra venuto a rendermelo giusto\npoc'anzi un piccolo insolente.\n\n\x0E\x01\x09\x04\x07\x706L'ho perdonato, per giustizia nei\ntuoi riguardi. Ma ti consiglierei di\neducarlo a dovere.")
          				  case 1:
/*<169>*/ 					printf("\x0E\x01\x09\x04\x00\x06Oh, sei tu!\nSei riuscito a controllare il potere\ndella tua spada?\n\n\x0E\x01\x09\x04\x07\x707Come dici? Vorresti che io ti\nprestassi questo <r<orcio d'acqua>>?<pause1E>\n\n\n\x0E\x01\x09\x04\x00\x05Umpf...<pause0F> non ci sono problemi.\nIl mio potere è forte e vigoroso,\nnon mi serve più quest'acqua.\n\n\x0E\x01\x09\x04\x07\x706Fanne l'uso che preferisci.")
          				}
          			  case 1:
/*<168>*/ 				switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          				  case 0:
/*< 86>*/ 					printf("\x0E\x01\x09\x04\x07\x702Dovrai impegnarti a fondo\nper dominare il potere di cui\nora è dotata la tua spada.")
          				  case 1:
/*< 74>*/ 					switch (story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */]) {
          					  case 0:
/*< 73>*/ 						printf("\x0E\x01\x09\x04\x07\x70FGhiraim la pagherà...")
          					  case 1:
/*< 71>*/ 						printf("\x0E\x01\x09\x04\x09\x900Sì! Sento già il\nmio potere tornare vigoroso!")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_203_58() {
/*<299>*/ 	start()
/*<301>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 300, 'param3': 40}
/*<300>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 302, 'param3': 6}
/*<302>*/ 	{'type': 'type3', 'subType': 1, 'param1': 340, 'param2': 0, 'next': 310, 'param3': 51}
/*<310>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 307, 'param3': 40}
/*<307>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 308, 'param3': 16}
/*<308>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 309, 'param3': 17}
/*<309>*/ 	set_camera(13, 0)
/*<304>*/ 	printf("\x0E\x01\x12\x04\x00\x0BSignore, Faih a rapporto.\n\n\n\nCi troviamo a sud\x2010ovest della foresta\ndi Firone. Vi prego di verificare sulla\nmappa la posizione.")
/*<321>*/ 	scene_flags[1 'Faron Woods'][56 /* 0x6 01 */] = true;
/*<322>*/ 	{'type': 'type3', 'subType': 4, 'param1': 256, 'param2': 0, 'next': 305, 'param3': 30}
/*<305>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 306, 'param3': 34}
/*<306>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 303, 'param3': 6}
/*<303>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 311, 'param3': 36}
/*<311>*/ 	set_camera(14, 0)
/*<312>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_93() {
/*< 72>*/ 	start()
/*<187>*/ 	set_camera(3, 0)
/*<198>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 79, 'param3': 17}
/*< 79>*/ 	printf("\x0E\x01\x09\x04\x07\x705Guarda.")
/*<188>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 190, 'param3': 32}
/*<190>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 189, 'param3': 17}
/*<189>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 270, 'param3': 17}
/*<270>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 268, 'param3': 6}
/*<268>*/ 	set_camera(5, 0)
/*<269>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 0, 'next': 266, 'param3': 13}
/*<266>*/ 	printf("\x0E\x01\x09\x04\x00\x300\x0E\x01\x05\x04<\x00\x0E\x01\x08\x02\x1CDMmh\x0E\x01\x06\x02\xFCCD... ... ...")
/*<265>*/ 	set_camera(4, 0)
/*<267>*/ 	printf("")
/*< 78>*/ 	scene_flags[2 'Lake Floria'][100 /* 0xD 10 */] = true;
/*<273>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 196, 'param3': 6}
/*<196>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 194, 'param3': 13}
/*<194>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 191, 'param3': 17}
/*<191>*/ 	printf("\x0E\x01\x09\x04\x00\x06Bene, la fiamma sacra\nè in questa direzione.\n\n\nDa tempi assai remoti è custodita in \nquesto luogo dietro la cascata infestato\nda numerose creature malvagie.")
/*<274>*/ 	set_camera(8, 0)
/*<195>*/ 	set_camera(3, 0)
/*<192>*/ 	printf("\x0E\x01\x09\x04\x07\x704Se tu sei davvero il prescelto dalla\nDea, non dovresti incorrere in grossi\nproblemi.\n\nSicuramente ci rincontreremo,\nsii prudente.\n\n\n\x0E\x01\x09\x04\x07\x703Arrivederci.")
/*<193>*/ 	set_camera(6, 0)
/*<278>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 277, 'param3': 6}
/*<277>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 199, 'param3': 17}
/*<199>*/ 	make_actor_do_something(0, 0)
/*<314>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 279, 'param3': 6}
/*<279>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 313, 'param3': 17}
/*<313>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 197, 'param3': 6}
/*<197>*/ 	story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */] = true;
/*<271>*/ 	set_camera(7, 0)
/*<272>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_07() {
/*<352>*/ 	start()
/*<353>*/ 	printf("\x0E\x01\x05\x04<\x00\x0E\x01\x08\x02\x2CDKyuuu!")
          }

          void entrypoint_203_59() {
/*<476>*/ 	start()
/*<477>*/ 	printf("Confermo l'abbassamento del livello\ndell'acqua nella foresta di Firone e\nil ritorno allo stato originario.")
/*<478>*/ 	entrypoint_006_04();
          }

          void entrypoint_203_94() {
/*<207>*/ 	start()
/*<315>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 209, 'param3': 17}
/*<209>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 210, 'param3': 6}
/*<210>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 208, 'param3': 17}
/*<208>*/ 	printf("\x0E\x01\x09\x04\x07\x702Vedo che la tua spada è \nora più potente.")
/*<212>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1792, 'next': 211, 'param3': 13}
/*<211>*/ 	printf("Nonostante tu sia un ragazzino,\nsei il prescelto dalla Dea.")
/*<215>*/ 	set_camera(3, 0)
/*<214>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 4, 'next': 213, 'param3': 13}
/*<213>*/ 	printf("\x0E\x01\x09\x04\x07\x700Tuttavia, non comprendi ancora la\nforza che risiede nella tua spada...")
/*<217>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 216, 'param3': 13}
/*<216>*/ 	printf("... il tuo cuore non è ancora pronto!")
/*<481>*/ 	set_camera(32, 0)
/*<480>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 6, 'next': 479, 'param3': 13}
/*<479>*/ 	printf("\x0E\x01\x09\x04\x07\x700Arrivederci!")
/*<483>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 484, 'param3': 32}
/*<484>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 485, 'param3': 17}
/*<485>*/ 	make_actor_do_something(0, 0)
/*<482>*/ 	set_camera(9, 0)
/*<218>*/ 	story_flags[118 /* us: 805A9AEA 0x08, jp: 805ACD6A 0x08 */] = true;
/*<275>*/ 	set_camera(10, 0)
/*<276>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_08() {
/*<390>*/ 	start()
/*<391>*/ 	printf("\x0E\x01\x09\x04\x01\x0B\x0E\x01\x05\x04<\x00\x0E\x01\x08\x02\x2CDAspetta un attimo!")
          }

          void entrypoint_203_95() {
/*<335>*/ 	start()
/*<336>*/ 	printf("\x0E\x01\x09\x04\x07\x705Guarda.")
          }

          void entrypoint_203_60() {
/*<500>*/ 	start()
/*<501>*/ 	printf("Blub! Incredibile! Un umano\nche nuota così in profondità!\n\n\nPer caso sai fare il <r<turbine\n>><g<scuotendo il Nunchuk>>? Blub?")
          }

          void entrypoint_203_09() {
/*<519>*/ 	start()
/*<520>*/ 	switch (story_flags[481 /* us: 805A9B11 0x20, jp: 805ACD91 0x20 */]) {
          	  case 0:
/*<523>*/ 		printf("\x0E\x01\x09\x04\x00\x08Notizie di Algo?\nCome si trova lì nel suo nuovo\nparadiso?")
          	  case 1:
/*<521>*/ 		switch (story_flags[1094 /* us: 805A9B52 0x10, jp: 805ACDD2 0x10 */]) {
          		  case 0:
/*<522>*/ 			printf("\x0E\x01\x09\x04\x00\x08Allora... è vero che Algo vuole andar\nvia dalla foresta da solo?\nChissà perché...")
          		  case 1:
          		}
          	}
          }

          void entrypoint_203_96() {
/*<337>*/ 	start()
/*<339>*/ 	printf("\x0E\x01\x09\x04\x00\x300\x0E\x01\x05\x04<\x00\x0E\x01\x08\x02\x1CDMmh\x0E\x01\x06\x02\xFCCD... ... ...")
          }

          void entrypoint_203_61() {
/*<502>*/ 	start()
/*<503>*/ 	printf("Blub! Signor Umano? \nConosci il <r<salto avvitato>>?\n\n\nSe cerchi di eseguire un turbine\n<r<in direzione della superficie>>,\nrealizzerai un grande salto!")
          }

          void entrypoint_203_97() {
/*<340>*/ 	start()
/*<338>*/ 	printf("")
          }

          void entrypoint_203_62() {
/*<504>*/ 	start()
/*<505>*/ 	printf("Blub! Un umano! Blub!<pause14>\nChe forma strana...! Blub!")
          }

          void entrypoint_203_10() {
/*<579>*/ 	start()
/*<580>*/ 	story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */] = true;
/*<581>*/ 	set_camera(24, 0)
/*<582>*/ 	printf("\x0E\x01\x09\x04\x00\x03Per completare il simbolo della parte\nmancante, devi investire il cancello a\nsud della foresta del potere della Dea.")
/*<583>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 584, 'param3': 30}
/*<584>*/ 	printf("\x0E\x01\x09\x04\x00\x09Usa un faro celeste, così potrai\ntrovare facilmente il luogo\ncontrassegnato da \x0E\x02\x04\x02\x19CD.")
/*<585>*/ 	set_camera(18, 0)
          	flw_406:
/*<406>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 35, 'param3': 34}
/*< 35>*/ 	printf("\x0E\x01\x09\x04\x01\x06Allora? Pensi di\nricordarti il luogo del simbolo?\n[1]Certo![2-]Mmh, no!")
/*< 36>*/ 	switch (choice(2)) {
          	  case 0:
/*< 45>*/ 		switch (story_flags[63 /* us: 805A9ADC 0x40, jp: 805ACD5C 0x40 */]) {
          		  case 0:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x00\x13Resterò qui a riposare.")
          		  case 1:
/*< 47>*/ 			printf("\x0E\x01\x09\x04\x03\x07Allora buon viaggio e fai attenzione!")
/*< 48>*/ 			story_flags[61 /* us: 805A9ADF 0x01, jp: 805ACD5F 0x01 */] = true;
          		}
          	  case 1:
/*< 38>*/ 		printf("\x0E\x01\x09\x04\x00\x03Sei alquanto smemorato...")
          		flw_37:
/*< 37>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 32, 'param3': 30}
/*< 32>*/ 		switch (story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */]) {
          		  case 0:
/*< 33>*/ 			printf("\x0E\x01\x09\x04\x00\x09Usa un faro celeste, così potrai\ntrovare facilmente il luogo\ncontrassegnato da \x0E\x02\x04\x02\x19CD.")
          			goto flw_406
          		  case 1:
/*< 34>*/ 			story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */] = true;
/*<411>*/ 			printf("\x0E\x01\x09\x04\x01\x04L'opposto del Sud mi risulta\nsia il Nord...\nProva a cercare dalle parti di questo\nsegno \x0E\x02\x04\x02\x19CD.")
          			goto flw_406
          		}
          	}
          }

          void entrypoint_203_80() {
/*< 87>*/ 	start()
/*<104>*/ 	switch (story_flags[111 /* us: 805A9AEB 0x10, jp: 805ACD6B 0x10 */]) {
          	  case 0:
/*<105>*/ 		switch (story_flags[112 /* us: 805A9AEB 0x20, jp: 805ACD6B 0x20 */]) {
          		  case 0:
/*<121>*/ 			switch (story_flags[113 /* us: 805A9AEB 0x40, jp: 805ACD6B 0x40 */]) {
          			  case 0:
/*<129>*/ 				switch (story_flags[114 /* us: 805A9AEB 0x80, jp: 805ACD6B 0x80 */]) {
          				  case 0:
/*<138>*/ 					switch (scene_flags[15 /* 0x0 80 */]) {
          					  case 0:
/*<140>*/ 						switch (temp_flags[15 /* 0x0 80 */]) {
          						  case 0:
/*<262>*/ 							switch (temp_flags[16 /* 0x3 01 */]) {
          							  case 0:
/*<263>*/ 								printf("Blub! Di qua...")
          							  case 1:
/*<261>*/ 								printf("Il drago d'acqua è proprio oltre questa\nporta... Blub! Aspetta un attimo!")
/*<264>*/ 								temp_flags[16 /* 0x3 01 */] = true;
          							}
          						  case 1:
/*<139>*/ 							printf("Blub! Siamo arrivati\nfinalmente!")
/*<142>*/ 							temp_flags[15 /* 0x0 80 */] = true;
          						}
          					  case 1:
/*<141>*/ 						printf("Blub!!! Sei proprio\nil messaggero della Dea!\nCe l'hai fatta!")
/*<143>*/ 						scene_flags[2 'Lake Floria'][15 /* 0x0 80 */] = true;
          					}
          				  case 1:
/*<130>*/ 					switch (scene_flags[14 /* 0x0 40 */]) {
          					  case 0:
/*<345>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 0, 'next': 131, 'param3': 13}
/*<131>*/ 						switch (temp_flags[14 /* 0x0 40 */]) {
          						  case 0:
/*<132>*/ 							printf("Blub! Per tutte le maree!!!")
          						  case 1:
/*<555>*/ 							scene_flags[2 'Lake Floria'][50 /* 0x7 04 */] = false;
/*<554>*/ 							scene_flags[2 'Lake Floria'][51 /* 0x7 08 */] = true;
/*<556>*/ 							printf("Blub!!! Quel pesce è come\nquelli che sono venuti ad\nattaccare il drago d'acqua!")
/*<557>*/ 							temp_flags[14 /* 0x0 40 */] = true;
/*<550>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 551, 'param3': 32}
/*<551>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 552, 'param3': 17}
/*<552>*/ 							set_camera(33, 0)
/*<553>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						}
          					  case 1:
/*<133>*/ 						printf("Blub! Bene, blub!!!\n\n\n\nMa è tutto merito della\nscaglia del drago d'acqua,\ncerto non tuo!")
/*<134>*/ 						scene_flags[2 'Lake Floria'][14 /* 0x0 40 */] = true;
          					}
          				}
          			  case 1:
/*<122>*/ 				switch (scene_flags[13 /* 0x0 20 */]) {
          				  case 0:
/*<124>*/ 					switch (temp_flags[13 /* 0x0 20 */]) {
          					  case 0:
/*<125>*/ 						printf("Se non ci riesci, blub,\nprova a passare dall'alto,\nblub!")
/*<587>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          					  case 1:
/*<123>*/ 						printf("Di qua, di qua! Blub!\nVeloce, sbrigati! Blub!\n\n\nCosa?! Non ci passi?!\nEssere un umano è poco pratico,\nprova a passare da sopra!")
/*<127>*/ 						temp_flags[13 /* 0x0 20 */] = true;
          					}
          				  case 1:
/*<126>*/ 					printf("Blub!!! Meraviglioso!!!\nIl drago d'acqua è da\nquella parte, seguimi!\n")
/*<128>*/ 					scene_flags[2 'Lake Floria'][13 /* 0x0 20 */] = true;
          				}
          			}
          		  case 1:
/*<113>*/ 			switch (scene_flags[12 /* 0x0 10 */]) {
          			  case 0:
/*<115>*/ 				switch (temp_flags[12 /* 0x0 10 */]) {
          				  case 0:
/*<116>*/ 					printf("Puoi sbarazzarti di quei\npesci con gli aculei con un\n<r<turbine>>, se <g<scuoti il Nunchuk>>.")
          				  case 1:
/*<114>*/ 					printf("Blub...? L'amico che dovevo\nincontrare qui non c'è...\n\n\nCome faccio? Il passaggio è anche\nbloccato da delle rocce...")
/*<118>*/ 					temp_flags[12 /* 0x0 10 */] = true;
          				}
          			  case 1:
/*<117>*/ 				printf("AAAH! BLUB! Come hai fatto?! \nSei un umano!!! Ma...\n\n\n.<pause0A>.<pause0A>.<pause0A> È la <b<scaglia del drago d'acqua\n>>quella? Blub!\n\n\nAllora significa che sei<pause0F>\ncolui che il drago d'acqua chiamò\nil <r<messaggero guidato dalla Dea>>?\n\nPerciò, forse potrai aiutarla!\n[1]Cos'è\nsuccesso?[2]Portami\nda lei")
/*<498>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_499:
/*<499>*/ 					printf("Blub! Un po' di tempo fa...<pause0F> un tizio\nstrano ha attaccato il drago d'acqua\ninsieme a dei mostri.\n\nGrazie alla sua forza, lei li ha\nsgominati quasi tutti.\nMa erano troppi e quel tipo strano...\nblub... è riuscito a colpirla.\nOra, con la poca acqua che ha, \nnon riesce a guarire.\nTi condurrò da lei, così potrai parlarle.\n\nSeguimi.")
/*<119>*/ 					scene_flags[2 'Lake Floria'][12 /* 0x0 10 */] = true;
          				  case 1:
          					goto flw_499
          				}
          			}
          		}
          	  case 1:
/*<106>*/ 		switch (scene_flags[11 /* 0x0 08 */]) {
          		  case 0:
/*<108>*/ 			switch (temp_flags[11 /* 0x0 08 */]) {
          			  case 0:
/*<109>*/ 				printf("Se non sai nemmeno fare\nil <g<turbine>>, non mi raggiungerai\nmai! Blub!")
/*<586>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          			  case 1:
/*<107>*/ 				printf("Blub! Prova a prendermi,\nse ci riesci!\n\n\nNon riuscirai mai ad\narrivare fin qui! Blub!")
/*<111>*/ 				temp_flags[11 /* 0x0 08 */] = true;
          			}
          		  case 1:
/*<508>*/ 			switch (scene_flags[110 /* 0xC 40 */]) {
          			  case 0:
/*<110>*/ 				printf("Ehi, tu! Pussa via! Blub!\nSe continui a seguirmi lo\ndico al drago d'acqua.")
/*<112>*/ 				scene_flags[2 'Lake Floria'][11 /* 0x0 08 */] = true;
          			  case 1:
/*<509>*/ 				printf("Blub! Ancora un umano!\nBlub!\n\n\nLo ignorerò e sparirò...!\nBlub!")
/*<510>*/ 				scene_flags[2 'Lake Floria'][110 /* 0xC 40 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_203_98() {
/*<341>*/ 	start()
/*<342>*/ 	printf("\x0E\x01\x09\x04\x00\x06Bene, la fiamma sacra\nè in questa direzione.\n\n\nDa tempi assai remoti è custodita in \nquesto luogo dietro la cascata infestato\nda numerose creature malvagie.")
          }

          void entrypoint_203_63() {
/*<506>*/ 	start()
/*<507>*/ 	printf("Un tempo questo era un luogo\npacifico, blub, e tranquillo,\nblub. Ora vengono strani\numani, blub!\nCi sono pure dei grossi pesci\nmolto aggressivi, blub! Non\nsi riesce più nemmeno a\ndormire, blub!")
          }

          void entrypoint_203_81() {
/*< 88>*/ 	start()
/*< 90>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<101>*/ 		printf("Quando la foresta era totalmente\nallagata, io stavo qui di guardia!\nBlub!\n\nMi sono divertito molto, ma ora\nsono triste. Blub!")
/*<562>*/ 		set_camera(34, 0)
/*<103>*/ 		make_actor_do_something(0, 0)
/*<102>*/ 		printf("Triste, blub!")
          		flw_563:
/*<563>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<323>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<324>*/ 			printf("Il drago d'acqua sta prendendo una\nboccata d'aria!\nBlub!")
/*<561>*/ 			set_camera(34, 0)
/*<326>*/ 			make_actor_do_something(0, 0)
/*<325>*/ 			printf("È uscita, blub!")
          			goto flw_563
          		  case 1:
/*< 89>*/ 			switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          			  case 0:
/*< 98>*/ 				printf("Il drago d'acqua è di nuovo in\npiena forma! Ed è tutto merito\ntuo, blub!!!")
/*<560>*/ 				set_camera(34, 0)
/*<100>*/ 				make_actor_do_something(0, 0)
/*< 99>*/ 				printf("Blub! Blub!\nMerito tuo!")
          				goto flw_563
          			  case 1:
/*< 93>*/ 				switch (random(2)) {
          				  case 0:
/*< 95>*/ 					printf("Blub, aiuta in qualche modo\nil drago d'acqua! Blub!")
/*<558>*/ 					set_camera(34, 0)
/*< 97>*/ 					make_actor_do_something(0, 0)
/*< 96>*/ 					printf("Aiutala, aiutala! Blub!")
          					goto flw_563
          				  case 1:
/*< 91>*/ 					printf("Blub! Il drago d'acqua è\nda quella parte. Vai\npure a parlarle!")
/*<559>*/ 					set_camera(34, 0)
/*< 94>*/ 					make_actor_do_something(0, 0)
/*< 92>*/ 					printf("Parlale, parlale! Blub!")
          					goto flw_563
          				}
          			}
          		}
          	}
          }

          void entrypoint_203_99() {
/*<343>*/ 	start()
/*<344>*/ 	printf("\x0E\x01\x09\x04\x07\x704Se tu sei davvero il prescelto dalla\nDea, non dovresti incorrere in grossi\nproblemi.\n\nSicuramente ci rincontreremo,\nsii prudente.\n\n\n\x0E\x01\x09\x04\x07\x703Arrivederci.")
/*<518>*/ 	story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */] = true;
          }

          void entrypoint_203_64() {
/*<511>*/ 	start()
/*<512>*/ 	printf("Quello sta tentando di \ndiventare il pupillo del\ndrago d'acqua!\n\nNon glielo permetterò\nper niente al mondo!")
          }

          void entrypoint_203_82() {
/*<120>*/ 	start()
/*<136>*/ 	switch (random(2)) {
          	  case 0:
/*<137>*/ 		printf("Di qua, di qua! Blub!\nVeloce, sbrigati! Blub!\n\n\nCosa?! Non ci passi?!\nEssere un umano è poco pratico,\nprova a passare da sopra!")
          	  case 1:
/*<135>*/ 		printf("Blub! Prova a prendermi,\nse ci riesci!\n\n\nNon riuscirai mai ad\narrivare fin qui! Blub!")
          	}
          }

          void entrypoint_203_65() {
/*<513>*/ 	start()
/*<514>*/ 	printf("Blub! Non è una bella casa?\nPerò è difficile entrarci, blub!")
          }

          void entrypoint_203_83() {
/*<233>*/ 	start()
/*<245>*/ 	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          	  case 0:
/*<246>*/ 		switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          		  case 0:
/*<248>*/ 			switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          			  case 0:
/*<251>*/ 				printf("Che peccato che l'acqua\nsi sia ritirata, blub!")
          			  case 1:
/*<250>*/ 				printf("Il drago d'acqua è di nuovo\nin forma! Blub! Grazie per\naver fatto qualcosa per lei!")
          			}
          		  case 1:
/*<249>*/ 			printf("Il drago d'acqua sta male,\nfa' qualcosa! Blub!")
          		}
          	  case 1:
/*<252>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<247>*/ 			printf("Il drago d'acqua è molto gentile,\nma non farla arrabbiare! Diventa\nterrificante!!! Blub!!!")
/*<253>*/ 			printf("È un segreto, blub!")
          		  case 1:
/*<234>*/ 			printf("Blub! Blub!!! Non mangiarmi!\n[1]Drago?[2]Tranquillo!")
/*<236>*/ 			switch (choice(2)) {
          			  case 0:
/*<241>*/ 				switch (scene_flags[25 /* 0x2 02 */]) {
          				  case 0:
/*<244>*/ 					printf("Mmh...<pause1E>\nCerchi il drago d'acqua? Blub?\n\n\nIl drago d'acqua è molto gentile,\nma non farla arrabbiare! Diventa\nterrificante!!! Blub!!!")
          					flw_239:
/*<239>*/ 					printf("È un segreto, blub!")
/*<240>*/ 					scene_flags[2 'Lake Floria'][19 /* 0x3 08 */] = true;
          				  case 1:
/*<237>*/ 					printf("Mmh...<pause1E>\nCerchi il drago d'acqua? Blub?\n\n\nUn umano che possiede la sua\nscaglia deve essere un suo\namico... ti porterò da lei!")
/*<242>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 238, 'param3': 30}
/*<238>*/ 					printf("Il drago d'acqua è poco oltre...\nForse è il caso che tu prenda\nnota, blub!")
/*<243>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 239, 'param3': 34}
          					goto flw_239
          				}
          			  case 1:
/*<235>*/ 				printf("Blub?<pause0F> Non mi mangi?\nMeno male, blub!\n\n\nSono venuti dei tipi molto violenti\ndi recente, blub! Mi sono nascosto\nper quello, blub!\n")
          			}
          		}
          	}
          }

          void entrypoint_203_49() {
/*<564>*/ 	start()
/*<565>*/ 	printf("\x0E\x01\x12\x04\x00\x01Signore, vi prego di ascoltare con\nattenzione. Riuscite a sentire\nqualcosa?")
          }

          void entrypoint_203_50() {
/*<  4>*/ 	start()
/*<255>*/ 	set_camera(-1, 0)
/*<254>*/ 	printf("Congratulazioni,\n\x0E\x01\x12\x04\x00\x04mio signore Link.")
/*<256>*/ 	printf("\x0E\x01\x12\x04\x00\x01Signore, avete superato con\nsuccesso la prova. Avete acquisito la\nforza necessaria per cercare la fiamma\nsacra.")
/*<258>*/ 	set_camera(2, 0)
/*<257>*/ 	printf("Questa <y<scaglia del drago d'acqua>>\nè una delle eredità lasciate dalla Dea.\n\n\nGrazie alla forza del grande spirito\ndel<b< drago d'acqua >>potrete immergervi\nin profondità.")
/*<260>*/ 	set_camera(-1, 0)
/*<259>*/ 	printf("La fiamma si trova da qualche parte\nnella foresta, \x0E\x01\x12\x04\x00\x01mio signore.\nIpotizzo si tratti di un luogo dove\nancora non vi siete recato.")
          }

          void entrypoint_203_85() {
/*<490>*/ 	start()
/*<492>*/ 	printf("\x0E\x01\x09\x04\x07\x707Cosa c'è? Vuoi forse chiedermi\nqualcosa sul drago di fuoco? O sul\ndrago del fulmine? O sulla foresta? \n[1]Fuoco[2]Fulmine[3]Foresta[4-]Niente")
/*<491>*/ 	switch (choice(4)) {
          	  case 0:
/*<493>*/ 		printf("\x0E\x01\x09\x04\x07\x704Umpf! Quello?<pause0F>\nProprio come io faccio con la foresta,\negli protegge il vulcano, per conto della\nDea.\nÈ un tipo sui generis che risiede \nin un cratere dalla temperatura\ninsopportabile agli uomini e alle\ncreature malvagie.")
          	  case 1:
/*<494>*/ 		printf("\x0E\x01\x09\x04\x07\x704Umpf! Quello?<pause0F>\nProprio come io faccio con la foresta,\negli protegge il deserto, per conto\ndella Dea.\nÈ il più anziano della nostra specie,\ne dovrebbe pensare di più alla salute...<pause0F>\nChissà come sta...")
          	  case 2:
/*<495>*/ 		printf("\x0E\x01\x09\x04\x07\x704All'epoca in cui gli uomini\nvivevano sulla terra, si cantava\nla loro armonia con la natura...\n\nIn fin dei conti, non trovi che sia\npiù bella la foresta senza\ngli umani?")
          	  case 3:
/*<496>*/ 		printf("\x0E\x01\x09\x04\x07\x706Devi continuare a perseverare\ne compiere il tuo destino di\nmessaggero della Dea.")
          	}
          }

          void entrypoint_203_51() {
/*< 18>*/ 	start()
/*<349>*/ 	set_camera(15, 0)
/*<346>*/ 	set_camera(16, 0)
/*<347>*/ 	{'type': 'type3', 'subType': 2, 'param1': 35, 'param2': 356, 'next': 348, 'param3': 15}
/*<348>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 146, 'param3': 40}
/*<146>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 0, 'next': 29, 'param3': 13}
/*< 29>*/ 	{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 27, 'param3': 35}
/*< 27>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 144, 'param3': 16}
/*<144>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 99, 'next': 350, 'param3': 17}
/*<350>*/ 	printf("Siete giunto in cima all'albero.\n\n\n\nOsservando l'area circostante\nda qui, dovreste poter riconoscere\nle zone che non avete ancora esplorato.")
/*< 19>*/ 	story_flags[60 /* us: 805A9ADC 0x80, jp: 805ACD5C 0x80 */] = true;
/*<566>*/ 	scene_flags[1 'Faron Woods'][51 /* 0x7 08 */] = true;
/*< 44>*/ 	make_actor_do_something(0, 0)
/*<145>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 394, 'param3': 17}
/*<394>*/ 	set_camera(17, 0)
/*<395>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 381, 'param3': 17}
/*<381>*/ 	printf("\x0E\x01\x12\x04\x00\x01Mio signore, guardate...")
/*<382>*/ 	set_camera(18, 0)
/*<386>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 383, 'param3': 6}
/*<383>*/ 	printf("Avete trovato un altro membro\ndei Kyuri.\n\n\nProbabilità che il russare di questo\nesemplare corrisponda ai rumori\npercepiti poc'anzi: 90%.")
/*<384>*/ 	set_camera(19, 0)
/*<385>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 30, 'param3': 6}
/*< 30>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 28, 'param3': 36}
/*< 28>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_86() {
/*<398>*/ 	start()
/*<399>*/ 	printf("\x0E\x01\x09\x04\x09\x900Sì! Sento già il\nmio potere tornare vigoroso!")
          }

          void entrypoint_203_00() {
          	start()
/*< 81>*/ 	switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          	  case 0:
/*<541>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*<542>*/ 			printf("\x0E\x01\x09\x04\x01\x14Eccoti di nuovo qui, giovane virgulto!\nTi avevo pur detto di non dire niente\nal drago d'acqua...\n\nQuando ho visto allagarsi la\nforesta m'è preso un colpo!\nHo pensato che stesse venendo\na mangiarmi!\n\x0E\x01\x09\x04\x01\x07Invece, per fortuna, regna di nuovo\nla pace sulla foresta e sono diminuiti\ni mostri!")
          			flw_540:
/*<540>*/ 			printf("\x0E\x01\x09\x04\x00\x13Resterò qui a riposare.")
          		  case 1:
/*<543>*/ 			printf("\x0E\x01\x09\x04\x01\x01Piantala di sbucare così\nall'improvviso!!!\n\n\n\x0E\x01\x09\x04\x01\x07Così si fa! Sei riuscito\na far riconoscere il tuo valore\ndal drago d'acqua...\n\nSappi che comunque io non \nfui da meno, taaaaaanto tempo\nfa!")
          			goto flw_540
          		}
          	  case 1:
/*< 82>*/ 		switch (scene_flags[50 /* 0x7 04 */]) {
          		  case 0:
/*<536>*/ 			switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          			  case 0:
/*<538>*/ 				switch (adventure_pouch_has(7 0x0007)) {
          				  case 0:
/*<539>*/ 					printf("\x0E\x01\x09\x04\x01\x01Per mille foglie di tè!\nImpara un po' di educazione!\n\n\n\x0E\x01\x09\x04\x01\x07Oho! Hai trovato l'acqua\nche il drago d'acqua voleva!\n\n\nDille pure che è un regalo\nda parte mia!")
          					goto flw_540
          				  case 1:
/*<544>*/ 					printf("\x0E\x01\x09\x04\x01\x01Per mille foglie di tè!\nImpara un po' di educazione!\n\n\n\x0E\x01\x09\x04\x01\x06Come? Il drago d'acqua t'ha\nchiesto di portarle dell'acqua sacra?\n\n\nAll'interno del santuario credo ci sia\nuna fonte cristallina. L'acqua di una\ndelle cascate dovrebbe andarle bene...")
          					goto flw_540
          				}
          			  case 1:
/*<537>*/ 				printf("\x0E\x01\x09\x04\x01\x01Per mille foglie di tè!\nImpara un po' di educazione!\n\n\n\x0E\x01\x09\x04\x01\x07Sei riuscito ad aprire il\ncancello per andare al lago!\n\n\nNon osare dire al drago d'acqua\nche sono stato io a dirti come fare!!!")
          				goto flw_540
          			}
          		  case 1:
/*< 83>*/ 			switch (story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */]) {
          			  case 0:
/*< 39>*/ 				switch (story_flags[61 /* us: 805A9ADF 0x01, jp: 805ACD5F 0x01 */]) {
          				  case 0:
/*< 40>*/ 					printf("\x0E\x01\x09\x04\x01\x04Nah! Sei di nuovo tu?!\nTi serve qualcosa?\n[1]Sì[2-]No")
/*< 41>*/ 					switch (choice(2)) {
          					  case 0:
/*< 42>*/ 						printf("\x0E\x01\x09\x04\x00\x03Per completare il simbolo della parte\nmancante, devi investire il cancello a\nsud della foresta del potere della Dea.")
          						goto flw_37
          					  case 1:
/*< 43>*/ 						printf("\x0E\x01\x09\x04\x00\x13Resterò qui a riposare.")
          					}
          				  case 1:
          					goto flw_37
          				}
          			  case 1:
/*<356>*/ 				printf("\x0E\x01\x09\x04\x00\x14Chi osa disturbare il mio sonno?!")
/*<375>*/ 				set_camera(20, 0)
/*<569>*/ 				switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          				  case 0:
/*<570>*/ 					printf("\x0E\x01\x09\x04\x01\x01\x0E\x01\x06\x02\xFCCDEh...?<pause0F>\n\x0E\x01\x06\x02ÍCi siamo già visti da qualche parte, no?\n[1]Sì[2]Non credo")
/*<571>*/ 					switch (choice(2)) {
          					  case 0:
/*<575>*/ 						set_camera(18, 0)
/*<574>*/ 						printf("\x0E\x01\x09\x04\x00\x07Capisco... Stai giocando in <r<modalità\neroica>>!\nSuppongo che tu sappia già cosa fare...\n[1]Certo[2]No...")
/*<576>*/ 						switch (choice(2)) {
          						  case 0:
/*<578>*/ 							entrypoint_203_10();
          						  case 1:
/*<577>*/ 							printf("\x0E\x01\x09\x04\x00\x03Lo hai già dimenticato?\nCredo che allora passerai un brutto\nquarto d'ora...")
          							flw_378:
/*<378>*/ 							set_camera(20, 0)
          							flw_379:
/*<379>*/ 							printf("\x0E\x01\x09\x04\x01\x06Quello che sto per dirti\ndeve assolutamente restare\ntra di noi, promettilo!\n[1]Prometto[2]No")
/*< 21>*/ 							switch (choice(2)) {
          							  case 0:
          								flw_354:
/*<354>*/ 								printf("\x0E\x01\x09\x04\x03\x08Bene, bene! Allora adesso\nti dirò tutto, ma non dirlo a nessuno!")
          								flw_355:
/*<355>*/ 								set_camera(18, 0)
/*<364>*/ 								printf("\x0E\x01\x09\x04\x03\x04La fiamma di cui sei in cerca...<pause0F>\nDeve senz'altro essere\n<pling>la <b<fiamma di Farore>>.\n\n\x0E\x01\x09\x04\x01\x00La fiamma di Farore...<pause0F>\nEssa risale a tempi remoti...\nquando la Dea viveva tra noi.")
/*<365>*/ 								set_camera(21, 0)
/*<366>*/ 								printf("\x0E\x01\x09\x04\x00\x02Fu affidata al grande spirito\nche regna sulla <b<foresta di Firone>>,\nil <b<drago d'acqua>>.")
/*<367>*/ 								set_camera(22, 0)
/*<368>*/ 								printf("\x0E\x01\x09\x04\x00\x04Si narra che sia stata\nlasciata dalla Dea per <b<colui che\nsarebbe arrivato dal cielo >>un dì!")
/*<369>*/ 								set_camera(20, 0)
/*<370>*/ 								printf("Pensandoci bene, potresti\nessere proprio tu!\n\n\n\x0E\x01\x09\x04\x03\x09Ottimo, direi che potresti\nandare da lei, dal drago d'acqua!")
/*<371>*/ 								set_camera(23, 0)
/*<372>*/ 								printf("A sud della foresta si trova un \ngrande lago. Lì risiede il drago\nd'acqua, colei che protegge la fiamma.")
/*<373>*/ 								set_camera(24, 0)
/*<374>*/ 								printf("\x0E\x01\x09\x04\x00\x04Ma c'è un però! L'ingresso\nche conduce al lago è serrato\nper impedire l'accesso agli intrusi!\n\n\x0E\x01\x09\x04\x00\x07Per tua fortuna, io posso\nsvelarti come aprirlo!")
/*<407>*/ 								set_camera(25, 0)
/*<408>*/ 								printf("\x0E\x01\x09\x04\x01\x04Il simbolo ritratto sul cancello<pause0F>\ndeve essere inondato di <r<potere\ndivino>>.\n\n\x0E\x01\x09\x04\x00\x09C'è dell'altro!<pause0F>\nAl simbolo manca una parte,\ndeve quindi essere completato.")
/*<409>*/ 								set_camera(18, 0)
/*<410>*/ 								printf("\x0E\x01\x09\x04\x03\x01Per sapere che aspetto ha la parte\nmancante, dovrai cercare un simbolo\nidentico a quello del cancello.")
          								goto flw_37
          							  case 1:
/*<380>*/ 								set_camera(18, 0)
/*< 22>*/ 								printf("\x0E\x01\x09\x04\x03\x14\x0E\x01\x08\x02\x2CDNo?! Cosa odono le\nmie orecchie?\nHai detto no?\n\n\x0E\x01\x09\x04\x01\x06Mi propongo di affidarti un segreto\ninestimabile e tu rifiuti di promettere?\n[1]Prometto[2]Rifiuto")
/*< 23>*/ 								switch (choice(2)) {
          								  case 0:
          									goto flw_354
          								  case 1:
/*< 24>*/ 									printf("\x0E\x01\x09\x04\x03\x0B\x0E\x01\x08\x02\x2CDC\x2010c\x2010c\x2010coooosa?!?\n\n\n\n\x0E\x01\x09\x04\x01\x03Sei uno sfrontato.<pause0F>\nVisto che sei venuto fin qui\napposta, te lo dirò comunque.")
          									goto flw_355
          								}
          							}
          						}
          					  case 1:
/*<572>*/ 						printf("\x0E\x01\x09\x04\x00\x03Sicuro? È solo un'impressione...?\nAllora forse si tratta di un deja\x2010vu...")
/*<573>*/ 						set_camera(18, 0)
          						flw_363:
/*<363>*/ 						printf("\x0E\x01\x09\x04\x03\x06Comunque sia...<pause0F>\nChe ci fa un umano da\nqueste parti?\n[1]Dov'è la\nfiamma?[2]Niente")
/*<360>*/ 						switch (choice(2)) {
          						  case 0:
/*<361>*/ 							printf("\x0E\x01\x09\x04\x01\x01Oho! Stai cercando la fiamma\nper rafforzare la tua spada perché devi\nandare a cercare un'amica?!\n\nUhm... Quindi...<pause0F>\nSei un umano che non solo\nmi vede, ma cerca pure la fiamma!")
          							goto flw_378
          						  case 1:
/*<396>*/ 							set_camera(20, 0)
/*<397>*/ 							printf("\x0E\x01\x09\x04\x01\x14Come ti ho detto,\nio sto qui a sorvegliare la foresta...\n\n\nSo tutto! Stai cercando la fiamma\nper rafforzare la tua spada!")
          							goto flw_379
          						}
          					}
          				  case 1:
/*<357>*/ 					printf("\x0E\x01\x09\x04\x01\x01Per tutte le foglie di tè!\nMa tu sei un umano?!\n\n\nIo sono l'<b<eremita>> custode della foresta.\n\n\n\n\x0E\x01\x09\x04\x01\x06Non so come hai fatto ad arrivare fin\nqui, ma dimmi un po'...\nTu riesci a vedermi?!\n[1]Certo[2]No")
/*<358>*/ 					switch (choice(2)) {
          					  case 0:
/*<362>*/ 						printf("\x0E\x01\x09\x04\x00\x07Mah! Che sfrontato!\nNon riescono a vedermi\nnemmeno i miei simili, i Kyuri!")
/*<377>*/ 						set_camera(18, 0)
          						goto flw_363
          					  case 1:
/*<376>*/ 						set_camera(18, 0)
/*<359>*/ 						printf("\x0E\x01\x09\x04\x03\x0BFalso come un tè alle olive!\n\n\n\n\x0E\x01\x09\x04\x01\x14Mi sei venuto a svegliare apposta e\npretendi che io creda che non mi vedi?!\nPfui!")
          						goto flw_363
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_203_52() {
/*< 62>*/ 	start()
/*< 65>*/ 	story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */] = true;
/*<468>*/ 	switch (temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<516>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 467, 'param3': 35}
/*<467>*/ 		set_camera(30, 0)
          		flw_64:
/*< 64>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 84, 'param3': 16}
/*< 84>*/ 		switch (adventure_pouch_has(7 0x0007)) {
          		  case 0:
/*< 85>*/ 			printf("Procedo all'analisi dell'acqua rimasta\nnell'orcio\x0E\x01\x06\x02\xFCCD...<pause0F> \x0E\x01\x06\x02Í\x0E\x01\x12\x04\x00\x01Signore, la <pling><r<composizione\ncorrisponde >>a quella dell'acqua della\nfonte celeste.")
/*<186>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 517, 'param3': 36}
/*<517>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 317, 'param3': 6}
/*<317>*/ 			temp_flags[2 /* 0x1 04 */] = true;
/*<470>*/ 			switch (temp_flags[3 /* 0x1 08 */]) {
          			  case 0:
/*<469>*/ 				set_camera(31, 0)
          				flw_183:
/*<183>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 185, 'param3': 16}
/*<185>*/ 				entrypoint_203_91();
          			  case 1:
          				goto flw_183
          			}
          		  case 1:
/*< 67>*/ 			printf("Procedo all'analisi dell'acqua\nrimanente nell'orcio\x0E\x01\x06\x02\xFCCD...<pause0F>\n\x0E\x01\x06\x02Í<pling>Il <r<rilevatore>> è impostato,\npotete continuare la ricerca.")
/*<568>*/ 			open_dowsing_wheel(5)
/*<567>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<230>*/ 			switch (adventure_pouch_has(1 0x0001)) {
          			  case 0:
/*<231>*/ 				printf("\x0E\x01\x12\x04\x00\x01Signore, possedete un'<y<ampolla>>.\nPotrete usarla per trasportare l'acqua.")
          				flw_66:
/*< 66>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 297, 'param3': 36}
/*<297>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 462, 'param3': 6}
/*<462>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 294, 'param3': 16}
/*<294>*/ 				set_camera(12, 0)
/*<293>*/ 				printf("\x0E\x01\x09\x04\x00\x05Se procedi in questa\ndirezione, potrai raggiungere\nla foresta di Firone.")
/*<471>*/ 				switch (temp_flags[0 /* 0x1 01 */]) {
          				  case 0:
/*<295>*/ 					set_camera(-1, 0)
          					flw_184:
/*<184>*/ 					printf("\x0E\x01\x09\x04\x09\x706Bene, vai.\nE non farmi aspettare\ntroppo a lungo.")
/*<461>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				  case 1:
/*<472>*/ 					set_camera(27, 0)
          					goto flw_184
          				}
          			  case 1:
/*<229>*/ 				printf("\x0E\x01\x12\x04\x00\x01Signore, non possedete nulla con cui\ntrasportare l'acqua. Per prima cosa,\nprocuratevi un recipiente vuoto in cui\nraccoglierla.")
          				goto flw_66
          			}
          		}
          	  case 1:
/*< 63>*/ 		{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 64, 'param3': 35}
          		goto flw_64
          	}
          }

          void entrypoint_203_87() {
/*<400>*/ 	start()
/*<401>*/ 	printf("Guardami bene!\nQuesto è il mio vero aspetto!\n\n\nIl vero aspetto del drago d'acqua\n<b<Firone>>, ancella della Dea a cui\nsono state affidate queste terre!")
          }

          void entrypoint_203_01() {
/*<  1>*/ 	start()
/*<413>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<414>*/ 		printf("\x0E\x01\x09\x04\x00\x07Finalmente sono spariti quei\nterribili invasori! Ora sì che si può\ntornare a vivere sereni!\n\n\x0E\x01\x09\x04\x00\x04Sarebbe magnifico se anche\ntu potessi tornare ai tempi in cui\ntu e la tua amica eravate insieme!")
          	  case 1:
/*<415>*/ 		printf("\x0E\x01\x09\x04\x00\x01Ciao, giovane virgulto.\nTi ricordi di me? Sei riuscito a trovare\nla tua amica?\n[1]Chi sei?[2]Non ancora...")
/*<533>*/ 		switch (choice(2)) {
          		  case 0:
/*<534>*/ 			printf("\x0E\x01\x09\x04\x11\x13Ma come chi sono?!<pause1E>\nVorrei che ti ricordassi di me...\n\n\n\x0E\x01\x09\x04\x0B\x04Ti insegno come fare per riconoscerci!\nSe punti il cursore su uno di noi\nsulla mappa, ti apparirà il nome!")
          		  case 1:
/*<535>*/ 			printf("\x0E\x01\x09\x04\x11\x13Che tristezza.\nSbrigati a trovarla!")
          		}
          	}
          }

          void entrypoint_203_53() {
/*< 75>*/ 	start()
/*<221>*/ 	story_flags[68 /* us: 805A9ADF 0x80, jp: 805ACD5F 0x80 */] = true;
/*<219>*/ 	{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 220, 'param3': 35}
/*<220>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 227, 'param3': 16}
/*<227>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 223, 'param3': 17}
/*<223>*/ 	printf("")
/*<222>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 228, 'param3': 36}
/*<228>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_70() {
/*<159>*/ 	start()
/*<158>*/ 	printf("Ooh! Adorata Faih! Bzzz!\nEccomi qui per te!")
          }

          void entrypoint_203_88() {
/*<402>*/ 	start()
/*<545>*/ 	switch (temp_flags[2 /* 0x1 04 */]) {
          	  case 0:
/*<546>*/ 		printf("\x0E\x01\x09\x04\x09\x700Bravo, umano. Mi hai portato\nl'<b<acqua sacra>> che desideravo.\n\n\nNon è quindi un caso che tu\nabbia superato la prova della\nDea e ottenuto la <b<mia scaglia>>.")
          	  case 1:
/*<547>*/ 		printf("\x0E\x01\x09\x04\x09\x700Bravo, umano. Mi hai portato\nl'<b<acqua sacra>>, come ti\navevo chiesto.\n\nNon è quindi un caso che tu\nabbia superato la prova della\nDea e ottenuto la <b<mia scaglia>>.")
          	}
          }

          void entrypoint_203_54() {
/*< 76>*/ 	start()
/*< 77>*/ 	printf("Probabilità che questo simbolo\nsia quello di cui parlava l'eremita:\n80%.")
/*<232>*/ 	set_camera(26, 0)
/*<437>*/ 	printf("Vi suggerisco di tenere bene\na mente la forma.")
/*<438>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 439, 'param3': 6}
/*<439>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 440, 'param3': 36}
/*<440>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 6}
          }

          void entrypoint_203_71() {
/*<161>*/ 	start()
/*<179>*/ 	switch (scene_flags[127 /* 0xE 80 */]) {
          	  case 0:
/*<180>*/ 		printf("Di nuovo quest'<r<orcio d'acqua>>...<pause0F>\nNon c'è problema! Lascia fare a me!\nBzzz!")
          	  case 1:
/*<160>*/ 		printf("Uaoh... Ma è gigante!<pause0F>\nComunque per me è facile come\navvitare una vite! Bzzz!")
          	}
          }

          void entrypoint_203_89() {
/*<403>*/ 	start()
/*<404>*/ 	printf("\x0E\x01\x09\x04\x07\x700Ora è giunto il momento per me\ndi mantenere la promessa.\nTi guiderò alla <r<fiamma sacra>>.\n\nSeguimi!")
/*<405>*/ 	changeScene(2, 0) // 
          }

          void entrypoint_203_02() {
/*<416>*/ 	start()
/*<417>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<418>*/ 		printf("\x0E\x01\x09\x04\x09\x0CTutti dicono che sulla foresta\nè tornata a regnare la pace...\nio non ci credo.\n\n\x0E\x01\x09\x04\x07\x13Esisterà un posto dove si può\nvivere senza preoccupazioni?\nVorrei distendermi un po'!")
          	  case 1:
/*<419>*/ 		printf("\x0E\x01\x09\x04\x09\x0CFino a quando dovremo\nvivere così nella paura?\n\n\n\x0E\x01\x09\x04\x07\x13Esisterà un luogo dove\nsi può vivere in pace? Vorrei\npoter distendere la schiena!")
          	}
          }

