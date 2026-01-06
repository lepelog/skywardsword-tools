          void entrypoint_203_55() {
/*<147>*/ 	start()
/*<149>*/ 	switch (story_flags[188 /* us: 805A9AE9 0x08, jp: 805ACD69 0x08 */]) {
          	  case 0:
/*<148>*/ 		printf(/* textboxtype: 1, unk: 0, line: 89 */ "Probabilità che quest'<color red<orcio d'acqua\n>coloroff>possa spegnere le fiamme, una volta\nportato fino al vulcano: 85%.\n\nSuggerisco di chiederlo in\nprestito al drago d'acqua.")
          	  case 1:
/*<150>*/ 		printf(/* textboxtype: 0, unk: 1, line: 88 */ "L'<color red<orcio d'acqua>coloroff> è pieno. Probabilità\nche possa spegnere le fiamme del\nvulcano: 85%.\n\n<sound 4>Suggerisco di chiederlo in\nprestito al drago d'acqua.")
/*<167>*/ 		story_flags[188 /* us: 805A9AE9 0x08, jp: 805ACD69 0x08 */] = true;
          	}
          }

          void entrypoint_203_72() {
/*<163>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 1, unk: 0, line: 191 */ "Signor Verdino! Osserva bene quanto\nsono forte! Bzzz!")
          }

          void entrypoint_203_03() {
/*<420>*/ 	start()
/*<421>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<422>*/ 		printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x00000004>È bello vivere in pace!\nAnche se ora ho fin troppo tempo libero!\n\n\n<0x10009:0x00110005>Un vero lusso!")
          	  case 1:
/*<423>*/ 		printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00000014>Noi ci siamo rifugiati qui! Non dovresti\nvenire! E se poi i mostri ti seguono?")
          	}
          }

          void entrypoint_203_90() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 1, line: 96 */ "<0x10009:0x0000000f>Uhm... uhm...")
          }

          void entrypoint_203_56() {
/*<151>*/ 	start()
/*<177>*/ 	switch (scene_flags[127 /* 0xE 80 */]) {
          	  case 0:
/*<178>*/ 		printf(/* textboxtype: 0, unk: 1, line: 91 */ "Bene...<pause 15>\nDesiderate che chiami quel robot?\n[1-]Sì[2-]Lui no!")
          		flw_153:
/*<153>*/ 		switch (choice(2)) {
          		  case 0:
/*<152>*/ 			printf(/* textboxtype: 1, unk: 0, line: 92 */ "<0x10012:0x00000005>Bene, signore.\nLo chiamo immediatamente.")
          		  case 1:
/*<181>*/ 			switch (scene_flags[127 /* 0xE 80 */]) {
          			  case 0:
/*<182>*/ 				printf(/* textboxtype: 0, unk: 1, line: 94 */ "<0x10012:0x00000001>Signore...<pause 15> non è il momento di fare\ngli schizzinosi, vi prego di contenervi.\nLo chiamo immediatamente!")
          			  case 1:
/*<154>*/ 				printf(/* textboxtype: 1, unk: 1, line: 93 */ "<0x10012:0x00000001>Mio signore...<pause 15> non credo sia\nil momento di fare gli schizzinosi.\nLo chiamo immediatamente.")
          			}
          		}
          	  case 1:
/*<155>*/ 		printf(/* textboxtype: 1, unk: 1, line: 90 */ "Volete che chiami quel robot per\ntrasportare l'<color red<orcio d'acqua >coloroff>fino al\nvulcano?\n[1-]Sì[2-]Lui no!")
          		goto flw_153
          	}
          }

          void entrypoint_203_73() {
/*<165>*/ 	start()
/*<164>*/ 	printf(/* textboxtype: 1, unk: 1, line: 192 */ "Bene! Come al solito vi aspetterò in cielo!\nBzzz!")
/*<588>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          }

          void entrypoint_203_04() {
/*<441>*/ 	start()
/*<442>*/ 	switch (zone_temp_flags[11 /* 0x0 08 */]) {
          	  case 0:
/*<445>*/ 		wait_frames(15)
/*<443>*/ 		printf(/* textboxtype: 1, unk: 2, line: 54 */ "<0x10009:0x00000004>Di tanto in tanto, fa bene stare un po'\na pensare...\n\n\n<0x10009:0x00000001>Stare seduti e rilassati fa bene al corpo\ne all'anima!")
/*<444>*/ 		scene_flags[1 'Faron Woods'][54 /* 0x7 40 */] = true;
          	  case 1:
/*<424>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*<426>*/ 			switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          			  case 0:
/*<427>*/ 				printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x00000013>Non c'è gusto a nascondersi,\nmi trovi subito!")
          			  case 1:
/*<428>*/ 				printf(/* textboxtype: 1, unk: 1, line: 51 */ "<0x10009:0x00110013>M'hai trovato di nuovo!\nSei imbattibile, tenero virgulto!\n\n\n<0x10009:0x000b0007>Come premio ti donerò qualcosa che\nho trovato mentre ero nascosto!")
/*<430>*/ 				give_item(176 0xB0);
/*<429>*/ 				printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x00000014>Non dirlo a nessuno!")
/*<431>*/ 				story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = true;
          			}
          		  case 1:
/*<425>*/ 			printf(/* textboxtype: 1, unk: 1, line: 48 */ "<0x10009:0x00000007>Noi viviamo qui perché è comodo!\nAbbiamo pure dell'ottimo cibo!")
          		}
          	}
          }

          void entrypoint_203_05() {
/*<  2>*/ 	start()
/*<224>*/ 	switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          	  case 0:
/*<432>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*<433>*/ 			printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000002>Un po' mi dispiace che\nl'acqua si sia ritirata... era da tempo\nche non mi sentivo così bene...")
/*<486>*/ 			printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00000006>Oh oh oh!")
/*<532>*/ 			entrypoint_203_09();
          		  case 1:
/*<434>*/ 			printf(/* textboxtype: 1, unk: 2, line: 66 */ "<0x10009:0x0000000e>Il drago d'acqua ha riconosciuto\nil tuo valore?! Sorprendente!")
/*<531>*/ 			entrypoint_203_09();
          		}
          	  case 1:
/*<225>*/ 		switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          		  case 0:
/*<226>*/ 			printf(/* textboxtype: 2, unk: 0, line: 65 */ "<0x10009:0x0000000e>Hai incontrato il drago d'acqua?\nChe invidia...!")
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
/*< 16>*/ 							printf(/* textboxtype: 0, unk: 1, line: 64 */ "<0x10009:0x00000002>Il mondo è vasto...\nAnch'io vorrei incontrare l'eremita!")
/*<334>*/ 							printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00000006>Oh oh oh!")
/*<529>*/ 							entrypoint_203_09();
          						  case 1:
/*< 14>*/ 							printf(/* textboxtype: 1, unk: 2, line: 63 */ "<0x10009:0x0000000e>Hai incontrato l'eremita? Ero convinto\nche noi Kyuri fossimo solo cinque...")
/*< 17>*/ 							temp_flags[5 /* 0x1 20 */] = true;
          							goto flw_16
          						}
          					  case 1:
/*< 12>*/ 						printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x0000000e>Cosa dici?! Sei appena tornato\ndalla cima dell'albero?!\n\n\n<0x10009:0x00000008>Come?! C'era qualcuno sulla cima?\nDevo andare a controllare...")
/*<528>*/ 						entrypoint_203_09();
          					}
          				  case 1:
/*< 11>*/ 					switch (scene_flags[19 /* 0x3 08 */]) {
          					  case 0:
/*<  8>*/ 						printf(/* textboxtype: 1, unk: 1, line: 60 */ "<0x10009:0x0000000e>Cosa?! Sei riuscito a entrare\ndentro l'albero?!")
/*< 80>*/ 						printf(/* textboxtype: 0, unk: 1, line: 61 */ "<0x10009:0x00000002>Prova a scalare l'albero fino in cima...\nc'è una splendida vista da lì! E magari\nscopri qualcosa di interessante!")
/*<527>*/ 						entrypoint_203_09();
          					  case 1:
/*< 10>*/ 						printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x00000003>Ci sono dei posti in questa foresta\nche non hai ancora visitato, vero?\n\n\n<0x10009:0x00000008>Se sfrutti il potere della scaglia del\ndrago d'acqua e premi (A) quando sei\na pelo d'acqua, puoi <color green<immergerti>coloroff>.")
/*<526>*/ 						entrypoint_203_09();
          					}
          				}
          			  case 1:
/*<436>*/ 				switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          				  case 0:
/*< 20>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 328, 'param3': 31}
/*<328>*/ 					wait_frames(20)
/*<327>*/ 					set_camera(1, 0)
/*<330>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 3, 'param3': 13}
/*<  3>*/ 					printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x0000000e>Ooh! Ma sei riuscito a ottenere la scaglia\ndel drago d'acqua!\n\n\n<0x10009:0x00000002>Con quella potrai nuotare liberamente\ncome un drago vola nel cielo!")
/*<329>*/ 					set_camera(-1, 0)
/*<  6>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 7, 'param3': 13}
/*<  7>*/ 					printf(/* textboxtype: 1, unk: 1, line: 57 */ "<0x10009:0x00000003>C'è ancora un luogo in cui non\nsei mai stato, qui nella foresta!\n\n\n<0x10009:0x00000008>Usa il potere della scaglia\nper trovarlo, no?")
/*<331>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 332, 'param3': 13}
/*<332>*/ 					printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00000006>Oh oh oh!")
/*<333>*/ 					scene_flags[1 'Faron Woods'][55 /* 0x7 80 */] = true;
/*<525>*/ 					entrypoint_203_09();
          				  case 1:
/*<435>*/ 					printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x00000003>Non hai trovato la tua amica in fondo\nalla foresta?!\n\n\n<0x10009:0x00000002>Non appassirti! Vedrai che anche voi,\ncome noi, vi rincontrerete!")
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
/*<320>*/ 				printf(/* textboxtype: 2, unk: 1, line: 114 */ "<0x10009:0x00090707>Cosa?! Possiedi già l'acqua?! Presto!\nVersa l'<color blue<acqua sacra >coloroff>in quest'orcio.")
          				flw_351:
/*<351>*/ 				story_flags[85 /* us: 805A9AE8 0x02, jp: 805ACD68 0x02 */] = true;
/*<515>*/ 				{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<549>*/ 				printf(/* textboxtype: 1, unk: 1, line: 96 */ "<0x10009:0x0000000f>Uhm... uhm...")
/*<318>*/ 				printf(/* textboxtype: 0, unk: 0, line: 110 */ "<0x10009:0x00070709>Ooh!\nSenza dubbio si tratta dell'<color blue<acqua\nsacra>coloroff>. L'hai portata davvero fin qui!\nSbrigati, versala in questo orcio.")
          				goto flw_351
          			}
          		  case 1:
/*<548>*/ 			printf(/* textboxtype: 1, unk: 1, line: 96 */ "<0x10009:0x0000000f>Uhm... uhm...")
/*< 69>*/ 			printf(/* textboxtype: 0, unk: 2, line: 109 */ "<0x10009:0x00070706>Portami l'acqua e io ti guiderò\nverso la fiamma sacra.")
          		}
          	  case 1:
/*< 53>*/ 		switch (scene_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 50>*/ 			printf(/* textboxtype: 1, unk: 1, line: 96 */ "<0x10009:0x0000000f>Uhm... uhm...")
/*< 58>*/ 			printf(/* textboxtype: 2, unk: 0, line: 108 */ "<0x10009:0x00090706>Portami l'<color blue<acqua sacra>coloroff> e io ti guiderò\nverso la fiamma.\n[1-]Va bene[2]No")
/*< 60>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_61:
/*< 61>*/ 				entrypoint_203_52();
          			  case 1:
/*< 59>*/ 				printf(/* textboxtype: 2, unk: 1, line: 111 */ "<0x10009:0x00090704>Umpf... lo immaginavo.\nDel resto sei solo un umano.")
/*<473>*/ 				temp_flags[0 /* 0x1 01 */] = true;
          			}
          		  case 1:
/*<282>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*<457>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 454, 'param3': 49}
/*<454>*/ 				wait_frames(20)
/*<455>*/ 				set_camera(11, 0)
/*<456>*/ 				{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 356, 'next': 283, 'param3': 15}
          				flw_283:
/*<283>*/ 				printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x0000000f>Ti trovi in un luogo sacro, nonché\nnel luogo in cui vivo.\n\n\n<0x10009:0x00090700>Non è un luogo adatto a gente come te.\n\n\n\nCome hai fatto ad arrivare qui?!\n[1-]Sei il drago?[2-]Mi sono perso")
/*< 54>*/ 				switch (choice(2)) {
          				  case 0:
/*<458>*/ 					scene_flags[2 'Lake Floria'][0 /* 0x1 01 */] = true;
/*<474>*/ 					set_camera(27, 0)
/*<475>*/ 					printf(/* textboxtype: 1, unk: 1, line: 99 */ "<0x10009:0x00070903>Indubbiamente sì. Sono <color blue<Firone>coloroff>,\nil drago d'acqua, colei che la Dea ha\nincaricato di custodire queste terre.\n\nMalgrado il mio aspetto, sono una\nmeravigliosa ancella della Dea.\n\n\n<0x10009:0x00090900><pause 10>.<pause 10>.<pause 10>.<pause 10>\n<0x10009:0x00000007>Mmh?!")
/*<451>*/ 					set_camera(11, 0)
/*<452>*/ 					printf(/* textboxtype: 0, unk: 1, line: 100 */ "<0x10009:0x00090900><0x10006:0xfecd>Tu... <pause 15>possiedi una delle\n<0x10009:0x00000006><0x10006:0x02cd><color blue<mie scaglie>coloroff>!?\n\n\n<0x10009:0x00090700>È un oggetto che dovrebbe trovarsi\nsolo nelle mani del prescelto dalla Dea.\n<0x10009:0x00000005>Sei tu, dunque?\n\n<0x10009:0x00070700>Tuttavia, ciò non spiega ancora come\npossa un umano trovarsi in questo\nluogo...")
/*<453>*/ 					set_camera(27, 0)
/*< 55>*/ 					printf(/* textboxtype: 1, unk: 0, line: 101 */ "<0x10009:0x00070704>Umpf... capisco...<pause 30>\nHai parlato con il Kyuri eremita...\n\n\n<0x10009:0x00090910>Mi sembrava di avergli raccomandato\ndi non farne parola con nessuno!\nAppena lo incontro me lo mangio!\n\n<0x10009:0x00070900>Mah... comunque sia...<pause 30>\nSei dunque venuto fin qui\nin cerca della <color red<fiamma sacra>coloroff>?\n[1-]Certo[2-]Non ricordo")
/*<284>*/ 					switch (choice(2)) {
          					  case 0:
/*<285>*/ 						printf(/* textboxtype: 1, unk: 1, line: 102 */ "<0x10009:0x00090704>Umpf... come immaginavo.")
          						flw_463:
/*<463>*/ 						printf(/* textboxtype: 0, unk: 1, line: 103 */ "<0x10009:0x00090700>In ogni caso, non posso certo\ncredere che un ragazzino deboluccio\ncome te sia davvero il prescelto.\n\n<0x10009:0x00070703>Devo metterti alla prova.\n\n\n\nTale <color blue<Ghiraim>coloroff>, che si professa patriarca\ndei maghi, mi ha ferita gravemente...")
/*<465>*/ 						set_camera(28, 0)
/*<464>*/ 						printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x0007070f>Come vedi, sono qui ad\nattendere che l'<color blue<acqua sacra\n>coloroff>di questo orcio mi curi.\n\n<0x10009:0x00090700>Ma, attualmente, gli effetti sono\nimpercettibili... Necessito di un'acqua\ndalla rinnovata forza.\n\n<0x10009:0x00090906>Voglio che tu mi <sound 4><color red<procuri dell'acqua\nsacra>coloroff> uguale a quella presente\nin questo orcio.")
/*<450>*/ 						set_camera(27, 0)
/*< 56>*/ 						printf(/* textboxtype: 2, unk: 0, line: 105 */ "Se accetterai, ti guiderò nella tua ricerca\ndella <color red<fiamma sacra>coloroff>. Cosa ne pensi?\n[1-]Accetto[2]Rifiuto")
/*< 57>*/ 						switch (choice(2)) {
          						  case 0:
/*<466>*/ 							temp_flags[3 /* 0x1 08 */] = true;
          							goto flw_61
          						  case 1:
/*<286>*/ 							printf(/* textboxtype: 2, unk: 1, line: 111 */ "<0x10009:0x00090704>Umpf... lo immaginavo.\nDel resto sei solo un umano.")
/*<287>*/ 							temp_flags[0 /* 0x1 01 */] = true;
/*<460>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						}
          					  case 1:
/*<291>*/ 						set_camera(11, 0)
/*<292>*/ 						printf(/* textboxtype: 0, unk: 2, line: 112 */ "<0x10009:0x00090910><0x10008:0x01cd>Non prenderti gioco\ndi me, ragazzino!\n\n\n<0x10009:0x00010900>Devo mettere alla prova\nil tuo spirito intrepido e coraggioso.")
/*<296>*/ 						set_camera(27, 0)
          						goto flw_463
          					}
          				  case 1:
/*<289>*/ 					set_camera(11, 0)
/*<290>*/ 					printf(/* textboxtype: 0, unk: 0, line: 107 */ "<0x10009:0x00090910>Come osi prenderti gioco di me,\nragazzino?!\n\n\nStai molto attento, potrei mangiarti quella\npiccola testolina in un sol boccone!")
/*<459>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				}
          			  case 1:
/*<449>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 298, 'param3': 49}
/*<298>*/ 				wait_frames(20)
/*<412>*/ 				set_camera(11, 0)
/*<448>*/ 				{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 356, 'next': 52, 'param3': 15}
/*< 52>*/ 				printf(/* textboxtype: 0, unk: 1, line: 97 */ "<0x10009:0x00000001><0x10008:0x02cd>!!!\n\n\n\nSei un umano?!")
/*<281>*/ 				temp_flags[1 /* 0x1 02 */] = true;
/*<288>*/ 				set_camera(27, 0)
          				goto flw_283
          			}
          		}
          	}
          }

          void entrypoint_203_57() {
/*<156>*/ 	start()
/*<157>*/ 	printf(/* textboxtype: 1, unk: 0, line: 95 */ "<0x10012:0x00000001>Signore, torniamo anche noi in cielo\ne dirigiamoci verso il vulcano.")
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
/*<392>*/ 	printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x0003000f>Dimenticavo di dirti una cosa!<pause 15>\nIl drago d'acqua è una tipa molto fiera.\nStai attento a come le parli.\n\n<0x10009:0x00010000>Se la offendi...<pause 60>\n<0x10009:0x0000000b>è capace di strizzarti come\nuna bustina di tè usata!")
/*<447>*/ 	set_camera(18, 0)
/*<393>*/ 	printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00030006>Non dirle per nessunissimo\nmotivo che ti ho parlato della\nfiamma di Farore! Capito?!\n\n<0x10009:0x00010000>Non ho alcuna intenzione\ndi aromatizzare le sue tisane!\n\n\n<0x10009:0x00030007>E faresti meglio a contarti\nle parole in bocca quando le parli!")
/*<446>*/ 	set_camera(20, 0)
/*<387>*/ 	printf(/* textboxtype: 1, unk: 1, line: 33 */ "<0x10009:0x00000013>Resterò qui a riposare.")
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
/*<487>*/ 			printf(/* textboxtype: 0, unk: 0, line: 122 */ "<0x10009:0x00070702>Le creature malvagie della\nforesta sono state debellate.\nSono soddisfatta.\n\nE vedo che sei riuscito a controllare\nil potere della tua spada.\n\n\n<0x10009:0x00070704>La prima volta che sei venuto qui,\navevi l'aria un po' sperduta...<pause 30>\nIl tuo sguardo ha acquistato\nfierezza.\n<0x10009:0x00070706>Ma dovrai continuare a temprarti\nper compiere il destino di cui la\nDea ti ha fatto carico.")
/*<489>*/ 			scene_flags[2 'Lake Floria'][1 /* 0x1 02 */] = true;
          		}
          	  case 1:
/*<173>*/ 		switch (story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */]) {
          		  case 0:
/*<170>*/ 			printf(/* textboxtype: 0, unk: 2, line: 130 */ "<0x10009:0x00070702>Potrai rendermi l'orcio d'acqua\nquando non ne avrai più bisogno,\nnon ti crucciare.")
          		  case 1:
/*<171>*/ 			switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
          			  case 0:
/*<174>*/ 				switch (scene_flags[127 /* 0xE 80 */]) {
          				  case 0:
/*<175>*/ 					printf(/* textboxtype: 2, unk: 0, line: 129 */ "<0x10009:0x00070707>Come? Ti serve nuovamente\nl'<color red<orcio d'acqua>coloroff>?<pause 30>\n\n\n<0x10009:0x00000005>Umpf...<pause 15> prego...\nEra venuto a rendermelo giusto\npoc'anzi un piccolo insolente.\n\n<0x10009:0x00070706>L'ho perdonato, per giustizia nei\ntuoi riguardi. Ma ti consiglierei di\neducarlo a dovere.")
          				  case 1:
/*<169>*/ 					printf(/* textboxtype: 0, unk: 0, line: 128 */ "<0x10009:0x00000006>Oh, sei tu!\nSei riuscito a controllare il potere\ndella tua spada?\n\n<0x10009:0x00070707>Come dici? Vorresti che io ti\nprestassi questo <color red<orcio d'acqua>coloroff>?<pause 30>\n\n\n<0x10009:0x00000005>Umpf...<pause 15> non ci sono problemi.\nIl mio potere è forte e vigoroso,\nnon mi serve più quest'acqua.\n\n<0x10009:0x00070706>Fanne l'uso che preferisci.")
          				}
          			  case 1:
/*<168>*/ 				switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          				  case 0:
/*< 86>*/ 					printf(/* textboxtype: 0, unk: 2, line: 121 */ "<0x10009:0x00070702>Dovrai impegnarti a fondo per dominare\nil potere di cui ora è dotata la tua spada.")
          				  case 1:
/*< 74>*/ 					switch (story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */]) {
          					  case 0:
/*< 73>*/ 						printf(/* textboxtype: 2, unk: 0, line: 120 */ "<0x10009:0x0007070f>Ghiraim la pagherà...")
          					  case 1:
/*< 71>*/ 						printf(/* textboxtype: 0, unk: 2, line: 115 */ "<0x10009:0x00090900>Sì! Sento già il mio potere\ntornare vigoroso!")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_203_58() {
/*<299>*/ 	start()
/*<301>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 300, 'param3': 40}
/*<300>*/ 	wait_frames(15)
/*<302>*/ 	{'type': 'type3', 'subType': 1, 'param1': 340, 'param2': 0, 'next': 310, 'param3': 51}
/*<310>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 307, 'param3': 40}
/*<307>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 308, 'param3': 16}
/*<308>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 309, 'param3': 17}
/*<309>*/ 	set_camera(13, 0)
/*<304>*/ 	printf(/* textboxtype: 1, unk: 1, line: 84 */ "<0x10012:0x0000000b>Signore, Faih a rapporto.\n\n\n\nCi troviamo a sud‐ovest della foresta\ndi Firone. Vi prego di verificare sulla\nmappa la posizione.")
/*<321>*/ 	scene_flags[1 'Faron Woods'][56 /* 0x6 01 */] = true;
/*<322>*/ 	{'type': 'type3', 'subType': 4, 'param1': 256, 'param2': 0, 'next': 305, 'param3': 30}
/*<305>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 306, 'param3': 34}
/*<306>*/ 	wait_frames(15)
/*<303>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 311, 'param3': 36}
/*<311>*/ 	set_camera(14, 0)
/*<312>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_93() {
/*< 72>*/ 	start()
/*<187>*/ 	set_camera(3, 0)
/*<198>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 79, 'param3': 17}
/*< 79>*/ 	printf(/* textboxtype: 2, unk: 0, line: 123 */ "<0x10009:0x00070705>Guarda.")
/*<188>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 190, 'param3': 32}
/*<190>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 189, 'param3': 17}
/*<189>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 270, 'param3': 17}
/*<270>*/ 	wait_frames(15)
/*<268>*/ 	set_camera(5, 0)
/*<269>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 0, 'next': 266, 'param3': 13}
/*<266>*/ 	printf(/* textboxtype: 0, unk: 2, line: 124 */ "<0x10009:0x00000300><0x10005:0x003c0000><0x10008:0x01cd>Mmh<0x10006:0xfccd>... ... ...")
/*<265>*/ 	set_camera(4, 0)
/*<267>*/ 	printf(/* textboxtype: 0, unk: 0, line: 125 */ "")
/*< 78>*/ 	scene_flags[2 'Lake Floria'][100 /* 0xD 10 */] = true;
/*<273>*/ 	wait_frames(60)
/*<196>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 194, 'param3': 13}
/*<194>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 191, 'param3': 17}
/*<191>*/ 	printf(/* textboxtype: 2, unk: 0, line: 126 */ "<0x10009:0x00000006>Bene, la fiamma sacra\nè in questa direzione.\n\n\nDa tempi assai remoti è custodita in\nquesto luogo dietro la cascata infestato\nda numerose creature malvagie.")
/*<274>*/ 	set_camera(8, 0)
/*<195>*/ 	set_camera(3, 0)
/*<192>*/ 	printf(/* textboxtype: 0, unk: 2, line: 127 */ "<0x10009:0x00070704>Se tu sei davvero il prescelto dalla\nDea, non dovresti incorrere in grossi\nproblemi.\n\nSicuramente ci rincontreremo,\nsii prudente.\n\n\n<0x10009:0x00070703>Arrivederci.")
/*<193>*/ 	set_camera(6, 0)
/*<278>*/ 	wait_frames(15)
/*<277>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 199, 'param3': 17}
/*<199>*/ 	make_actor_do_something(0, 0)
/*<314>*/ 	wait_frames(15)
/*<279>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 313, 'param3': 17}
/*<313>*/ 	wait_frames(15)
/*<197>*/ 	story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */] = true;
/*<271>*/ 	set_camera(7, 0)
/*<272>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_07() {
/*<352>*/ 	start()
/*<353>*/ 	printf(/* textboxtype: 2, unk: 0, line: 2 */ "<0x10005:0x003c0000><0x10008:0x02cd>Kyuuu!")
          }

          void entrypoint_203_59() {
/*<476>*/ 	start()
/*<477>*/ 	printf(/* textboxtype: 0, unk: 1, line: 85 */ "Confermo l'abbassamento del livello\ndell'acqua nella foresta di Firone e\nil ritorno allo stato originario.")
/*<478>*/ 	entrypoint_006_04();
          }

          void entrypoint_203_94() {
/*<207>*/ 	start()
/*<315>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 209, 'param3': 17}
/*<209>*/ 	wait_frames(15)
/*<210>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 208, 'param3': 17}
/*<208>*/ 	printf(/* textboxtype: 2, unk: 1, line: 132 */ "<0x10009:0x00070702>Vedo che la tua spada è ora più potente.")
/*<212>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1792, 'next': 211, 'param3': 13}
/*<211>*/ 	printf(/* textboxtype: 0, unk: 2, line: 133 */ "Nonostante tu sia un ragazzino,\nsei il prescelto dalla Dea.")
/*<215>*/ 	set_camera(3, 0)
/*<214>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 4, 'next': 213, 'param3': 13}
/*<213>*/ 	printf(/* textboxtype: 1, unk: 0, line: 134 */ "<0x10009:0x00070700>Tuttavia, non comprendi ancora la\nforza che risiede nella tua spada...")
/*<217>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 216, 'param3': 13}
/*<216>*/ 	printf(/* textboxtype: 2, unk: 1, line: 135 */ "... il tuo cuore non è ancora pronto!")
/*<481>*/ 	set_camera(32, 0)
/*<480>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 6, 'next': 479, 'param3': 13}
/*<479>*/ 	printf(/* textboxtype: 0, unk: 2, line: 136 */ "<0x10009:0x00070700>Arrivederci!")
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
/*<391>*/ 	printf(/* textboxtype: 1, unk: 1, line: 36 */ "<0x10009:0x0001000b><0x10005:0x003c0000><0x10008:0x02cd>Aspetta un attimo!")
          }

          void entrypoint_203_95() {
/*<335>*/ 	start()
/*<336>*/ 	printf(/* textboxtype: 2, unk: 0, line: 123 */ "<0x10009:0x00070705>Guarda.")
          }

          void entrypoint_203_60() {
/*<500>*/ 	start()
/*<501>*/ 	printf(/* textboxtype: 1, unk: 0, line: 182 */ "Blub! Incredibile!\nUn umano che nuota così in profondità!\n\n\nPer caso sai fare il <color red<turbine>coloroff>? Blub?")
          }

          void entrypoint_203_09() {
/*<519>*/ 	start()
/*<520>*/ 	switch (story_flags[481 /* us: 805A9B11 0x20, jp: 805ACD91 0x20 */]) {
          	  case 0:
/*<523>*/ 		printf(/* textboxtype: 2, unk: 0, line: 68 */ "<0x10009:0x00000008>Notizie di Algo?\nCome si trova lì nel suo nuovo paradiso?")
          	  case 1:
/*<521>*/ 		switch (story_flags[1094 /* us: 805A9B52 0x10, jp: 805ACDD2 0x10 */]) {
          		  case 0:
/*<522>*/ 			printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>Allora... è vero che Algo vuole andar via\ndalla foresta da solo? Chissà perché...")
          		  case 1:
          		}
          	}
          }

          void entrypoint_203_96() {
/*<337>*/ 	start()
/*<339>*/ 	printf(/* textboxtype: 0, unk: 2, line: 124 */ "<0x10009:0x00000300><0x10005:0x003c0000><0x10008:0x01cd>Mmh<0x10006:0xfccd>... ... ...")
          }

          void entrypoint_203_61() {
/*<502>*/ 	start()
/*<503>*/ 	printf(/* textboxtype: 1, unk: 1, line: 183 */ "Blub! Signor Umano?\nConosci il <color red<salto avvitato>coloroff>?\n\n\nSe cerchi di eseguire un turbine\n<color red<in direzione della superficie>coloroff>,\nrealizzerai un grande salto!")
          }

          void entrypoint_203_97() {
/*<340>*/ 	start()
/*<338>*/ 	printf(/* textboxtype: 0, unk: 0, line: 125 */ "")
          }

          void entrypoint_203_62() {
/*<504>*/ 	start()
/*<505>*/ 	printf(/* textboxtype: 0, unk: 1, line: 184 */ "Blub! Un umano! Blub!<pause 20>\nChe forma strana...! Blub!")
          }

          void entrypoint_203_10() {
/*<579>*/ 	start()
/*<580>*/ 	story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */] = true;
/*<581>*/ 	set_camera(24, 0)
/*<582>*/ 	printf(/* textboxtype: 1, unk: 2, line: 30 */ "<0x10009:0x00000003>Per completare il simbolo della parte\nmancante, devi investire il cancello a\nsud della foresta del potere della Dea.")
/*<583>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 584, 'param3': 30}
/*<584>*/ 	printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00000009>Usa un faro celeste, così potrai trovare\nfacilmente il luogo contrassegnato da (X).")
/*<585>*/ 	set_camera(18, 0)
          	flw_406:
/*<406>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 35, 'param3': 34}
/*< 35>*/ 	printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00010006>Allora? Pensi di ricordarti il luogo\ndel simbolo?\n[1-]Certo![2]Mmh, no!")
/*< 36>*/ 	switch (choice(2)) {
          	  case 0:
/*< 45>*/ 		switch (story_flags[63 /* us: 805A9ADC 0x40, jp: 805ACD5C 0x40 */]) {
          		  case 0:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 1, line: 33 */ "<0x10009:0x00000013>Resterò qui a riposare.")
          		  case 1:
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00030007>Allora buon viaggio e fai attenzione!")
/*< 48>*/ 			story_flags[61 /* us: 805A9ADF 0x01, jp: 805ACD5F 0x01 */] = true;
          		}
          	  case 1:
/*< 38>*/ 		printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00000003>Sei alquanto smemorato...")
          		flw_37:
/*< 37>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 32, 'param3': 30}
/*< 32>*/ 		switch (story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */]) {
          		  case 0:
/*< 33>*/ 			printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00000009>Usa un faro celeste, così potrai trovare\nfacilmente il luogo contrassegnato da (X).")
          			goto flw_406
          		  case 1:
/*< 34>*/ 			story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */] = true;
/*<411>*/ 			printf(/* textboxtype: 1, unk: 1, line: 27 */ "<0x10009:0x00010004>L'opposto del Sud mi risulta\nsia il Nord...\nProva a cercare dalle parti di questo\nsegno (X).")
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
/*<263>*/ 								printf(/* textboxtype: 0, unk: 1, line: 160 */ "Blub! Di qua...")
          							  case 1:
/*<261>*/ 								printf(/* textboxtype: 1, unk: 0, line: 159 */ "Il drago d'acqua è proprio oltre questa\nporta... Blub! Aspetta un attimo!")
/*<264>*/ 								temp_flags[16 /* 0x3 01 */] = true;
          							}
          						  case 1:
/*<139>*/ 							printf(/* textboxtype: 0, unk: 0, line: 158 */ "Blub! Siamo arrivati finalmente!")
/*<142>*/ 							temp_flags[15 /* 0x0 80 */] = true;
          						}
          					  case 1:
/*<141>*/ 						printf(/* textboxtype: 0, unk: 1, line: 157 */ "Blub!!! Sei proprio il messaggero\ndella Dea! Ce l'hai fatta!")
/*<143>*/ 						scene_flags[2 'Lake Floria'][15 /* 0x0 80 */] = true;
          					}
          				  case 1:
/*<130>*/ 					switch (scene_flags[14 /* 0x0 40 */]) {
          					  case 0:
/*<345>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 0, 'next': 131, 'param3': 13}
/*<131>*/ 						switch (temp_flags[14 /* 0x0 40 */]) {
          						  case 0:
/*<132>*/ 							printf(/* textboxtype: 1, unk: 0, line: 156 */ "Blub! Per tutte le maree!!!")
          						  case 1:
/*<555>*/ 							scene_flags[2 'Lake Floria'][50 /* 0x7 04 */] = false;
/*<554>*/ 							scene_flags[2 'Lake Floria'][51 /* 0x7 08 */] = true;
/*<556>*/ 							printf(/* textboxtype: 0, unk: 0, line: 155 */ "Blub!!! Quel pesce è come quelli che sono\nvenuti ad attaccare il drago d'acqua!")
/*<557>*/ 							temp_flags[14 /* 0x0 40 */] = true;
/*<550>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 551, 'param3': 32}
/*<551>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 552, 'param3': 17}
/*<552>*/ 							set_camera(33, 0)
/*<553>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						}
          					  case 1:
/*<133>*/ 						printf(/* textboxtype: 0, unk: 1, line: 154 */ "Blub! Bene, blub!!!\n\n\n\nMa è tutto merito della scaglia del\ndrago d'acqua, certo non tuo!")
/*<134>*/ 						scene_flags[2 'Lake Floria'][14 /* 0x0 40 */] = true;
          					}
          				}
          			  case 1:
/*<122>*/ 				switch (scene_flags[13 /* 0x0 20 */]) {
          				  case 0:
/*<124>*/ 					switch (temp_flags[13 /* 0x0 20 */]) {
          					  case 0:
/*<125>*/ 						printf(/* textboxtype: 1, unk: 0, line: 153 */ "Se non ci riesci, blub, prova a passare\ndall'alto, blub!")
/*<587>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          					  case 1:
/*<123>*/ 						printf(/* textboxtype: 0, unk: 0, line: 152 */ "Di qua, di qua! Blub!\nVeloce, sbrigati! Blub!\n\n\nCosa?! Non ci passi?!\nEssere un umano è poco pratico,\nprova a passare da sopra!")
/*<127>*/ 						temp_flags[13 /* 0x0 20 */] = true;
          					}
          				  case 1:
/*<126>*/ 					printf(/* textboxtype: 0, unk: 1, line: 151 */ "Blub!!! Meraviglioso!!! Il drago d'acqua\nè da quella parte, seguimi!\n")
/*<128>*/ 					scene_flags[2 'Lake Floria'][13 /* 0x0 20 */] = true;
          				}
          			}
          		  case 1:
/*<113>*/ 			switch (scene_flags[12 /* 0x0 10 */]) {
          			  case 0:
/*<115>*/ 				switch (temp_flags[12 /* 0x0 10 */]) {
          				  case 0:
/*<116>*/ 					printf(/* textboxtype: 1, unk: 0, line: 150 */ "Puoi sbarazzarti di quei pesci con\ngli aculei con un <color red<turbine>coloroff>.")
          				  case 1:
/*<114>*/ 					printf(/* textboxtype: 0, unk: 0, line: 149 */ "Blub...? L'amico che dovevo\nincontrare qui non c'è...\n\n\nCome faccio? Il passaggio è anche\nbloccato da delle rocce...")
/*<118>*/ 					temp_flags[12 /* 0x0 10 */] = true;
          				}
          			  case 1:
/*<117>*/ 				printf(/* textboxtype: 1, unk: 0, line: 147 */ "AAAH! BLUB! Come hai fatto?!\nSei un umano!!! Ma...\n\n\n.<pause 10>.<pause 10>.<pause 10> È la <color blue<scaglia del drago d'acqua\n>coloroff>quella? Blub!\n\n\nAllora significa che sei<pause 15> colui che il drago\nd'acqua chiamò il <color red<messaggero guidato\ndalla Dea>coloroff>?\n\nPerciò, forse potrai aiutarla!\n[1-]Cos'è successo?[2-]Portami da lei")
/*<498>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_499:
/*<499>*/ 					printf(/* textboxtype: 0, unk: 1, line: 148 */ "Blub! Un po' di tempo fa...<pause 15> un tizio\nstrano ha attaccato il drago d'acqua\ninsieme a dei mostri.\n\nGrazie alla sua forza, lei li ha\nsgominati quasi tutti.\nMa erano troppi e quel tipo strano...\nblub... è riuscito a colpirla.\nOra, con la poca acqua che ha,\nnon riesce a guarire.\nTi condurrò da lei, così potrai parlarle.\n\nSeguimi.")
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
/*<109>*/ 				printf(/* textboxtype: 0, unk: 0, line: 146 */ "Se non sai nemmeno fare il <color green<turbine>coloroff>,\nnon mi raggiungerai mai! Blub!")
/*<586>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          			  case 1:
/*<107>*/ 				printf(/* textboxtype: 0, unk: 1, line: 145 */ "Blub! Prova a prendermi, se ci riesci!\n\n\n\nNon riuscirai mai ad arrivare fin qui!\nBlub!")
/*<111>*/ 				temp_flags[11 /* 0x0 08 */] = true;
          			}
          		  case 1:
/*<508>*/ 			switch (scene_flags[110 /* 0xC 40 */]) {
          			  case 0:
/*<110>*/ 				printf(/* textboxtype: 1, unk: 0, line: 143 */ "Ehi, tu! Pussa via! Blub! Se continui\na seguirmi lo dico al drago d'acqua.")
/*<112>*/ 				scene_flags[2 'Lake Floria'][11 /* 0x0 08 */] = true;
          			  case 1:
/*<509>*/ 				printf(/* textboxtype: 1, unk: 0, line: 144 */ "Blub! Ancora un umano! Blub!\n\n\n\nLo ignorerò e sparirò...! Blub!")
/*<510>*/ 				scene_flags[2 'Lake Floria'][110 /* 0xC 40 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_203_98() {
/*<341>*/ 	start()
/*<342>*/ 	printf(/* textboxtype: 2, unk: 0, line: 126 */ "<0x10009:0x00000006>Bene, la fiamma sacra\nè in questa direzione.\n\n\nDa tempi assai remoti è custodita in\nquesto luogo dietro la cascata infestato\nda numerose creature malvagie.")
          }

          void entrypoint_203_63() {
/*<506>*/ 	start()
/*<507>*/ 	printf(/* textboxtype: 1, unk: 0, line: 185 */ "Un tempo questo era un luogo pacifico,\nblub, e tranquillo, blub. Ora vengono\nstrani umani, blub!\n\nCi sono pure dei grossi pesci molto\naggressivi, blub! Non si riesce più\nnemmeno a dormire, blub!")
          }

          void entrypoint_203_81() {
/*< 88>*/ 	start()
/*< 90>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<101>*/ 		printf(/* textboxtype: 2, unk: 0, line: 170 */ "Quando la foresta era totalmente allagata,\nio stavo qui di guardia! Blub!\n\n\nMi sono divertito molto, ma ora sono\ntriste. Blub!")
/*<562>*/ 		set_camera(34, 0)
/*<103>*/ 		make_actor_do_something(0, 0)
/*<102>*/ 		printf(/* textboxtype: 1, unk: 0, line: 171 */ "Triste, blub!")
          		flw_563:
/*<563>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<323>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<324>*/ 			printf(/* textboxtype: 1, unk: 0, line: 168 */ "Il drago d'acqua sta prendendo\nuna boccata d'aria! Blub!")
/*<561>*/ 			set_camera(34, 0)
/*<326>*/ 			make_actor_do_something(0, 0)
/*<325>*/ 			printf(/* textboxtype: 0, unk: 1, line: 169 */ "È uscita, blub!")
          			goto flw_563
          		  case 1:
/*< 89>*/ 			switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          			  case 0:
/*< 98>*/ 				printf(/* textboxtype: 0, unk: 1, line: 166 */ "Il drago d'acqua è di nuovo in piena\nforma! Ed è tutto merito tuo, blub!!!")
/*<560>*/ 				set_camera(34, 0)
/*<100>*/ 				make_actor_do_something(0, 0)
/*< 99>*/ 				printf(/* textboxtype: 0, unk: 0, line: 167 */ "Blub! Blub! Merito tuo!")
          				goto flw_563
          			  case 1:
/*< 93>*/ 				switch (random(2)) {
          				  case 0:
/*< 95>*/ 					printf(/* textboxtype: 0, unk: 0, line: 164 */ "Blub, aiuta in qualche modo\nil drago d'acqua! Blub!")
/*<558>*/ 					set_camera(34, 0)
/*< 97>*/ 					make_actor_do_something(0, 0)
/*< 96>*/ 					printf(/* textboxtype: 1, unk: 0, line: 165 */ "Aiutala, aiutala! Blub!")
          					goto flw_563
          				  case 1:
/*< 91>*/ 					printf(/* textboxtype: 1, unk: 0, line: 162 */ "Blub! Il drago d'acqua è da quella parte.\nVai pure a parlarle!")
/*<559>*/ 					set_camera(34, 0)
/*< 94>*/ 					make_actor_do_something(0, 0)
/*< 92>*/ 					printf(/* textboxtype: 0, unk: 1, line: 163 */ "Parlale, parlale! Blub!")
          					goto flw_563
          				}
          			}
          		}
          	}
          }

          void entrypoint_203_99() {
/*<343>*/ 	start()
/*<344>*/ 	printf(/* textboxtype: 0, unk: 2, line: 127 */ "<0x10009:0x00070704>Se tu sei davvero il prescelto dalla\nDea, non dovresti incorrere in grossi\nproblemi.\n\nSicuramente ci rincontreremo,\nsii prudente.\n\n\n<0x10009:0x00070703>Arrivederci.")
/*<518>*/ 	story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */] = true;
          }

          void entrypoint_203_64() {
/*<511>*/ 	start()
/*<512>*/ 	printf(/* textboxtype: 1, unk: 1, line: 186 */ "Quello sta tentando di diventare\nil pupillo del drago d'acqua!\n\n\nNon glielo permetterò per niente\nal mondo!")
          }

          void entrypoint_203_82() {
/*<120>*/ 	start()
/*<136>*/ 	switch (random(2)) {
          	  case 0:
/*<137>*/ 		printf(/* textboxtype: 0, unk: 0, line: 152 */ "Di qua, di qua! Blub!\nVeloce, sbrigati! Blub!\n\n\nCosa?! Non ci passi?!\nEssere un umano è poco pratico,\nprova a passare da sopra!")
          	  case 1:
/*<135>*/ 		printf(/* textboxtype: 0, unk: 1, line: 145 */ "Blub! Prova a prendermi, se ci riesci!\n\n\n\nNon riuscirai mai ad arrivare fin qui!\nBlub!")
          	}
          }

          void entrypoint_203_65() {
/*<513>*/ 	start()
/*<514>*/ 	printf(/* textboxtype: 0, unk: 1, line: 187 */ "Blub! Non è una bella casa?\nPerò è difficile entrarci, blub!")
          }

          void entrypoint_203_83() {
/*<233>*/ 	start()
/*<245>*/ 	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          	  case 0:
/*<246>*/ 		switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          		  case 0:
/*<248>*/ 			switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          			  case 0:
/*<251>*/ 				printf(/* textboxtype: 0, unk: 1, line: 181 */ "Che peccato che l'acqua si sia ritirata,\nblub!")
          			  case 1:
/*<250>*/ 				printf(/* textboxtype: 1, unk: 1, line: 180 */ "Il drago d'acqua è di nuovo in forma!\nBlub! Grazie per aver fatto qualcosa\nper lei!")
          			}
          		  case 1:
/*<249>*/ 			printf(/* textboxtype: 1, unk: 0, line: 179 */ "Il drago d'acqua sta male, fa' qualcosa!\nBlub!")
          		}
          	  case 1:
/*<252>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<247>*/ 			printf(/* textboxtype: 0, unk: 1, line: 178 */ "Il drago d'acqua è molto gentile,\nma non farla arrabbiare! Diventa\nterrificante!!! Blub!!!")
/*<253>*/ 			printf(/* textboxtype: 0, unk: 1, line: 175 */ "È un segreto, blub!")
          		  case 1:
/*<234>*/ 			printf(/* textboxtype: 0, unk: 1, line: 172 */ "Blub! Blub!!! Non mangiarmi!\n[1-]Drago?[2-]Tranquillo!")
/*<236>*/ 			switch (choice(2)) {
          			  case 0:
/*<241>*/ 				switch (scene_flags[25 /* 0x2 02 */]) {
          				  case 0:
/*<244>*/ 					printf(/* textboxtype: 1, unk: 1, line: 177 */ "Mmh...<pause 30>\nCerchi il drago d'acqua? Blub?\n\n\nIl drago d'acqua è molto gentile,\nma non farla arrabbiare! Diventa\nterrificante!!! Blub!!!")
          					flw_239:
/*<239>*/ 					printf(/* textboxtype: 0, unk: 1, line: 175 */ "È un segreto, blub!")
/*<240>*/ 					scene_flags[2 'Lake Floria'][19 /* 0x3 08 */] = true;
          				  case 1:
/*<237>*/ 					printf(/* textboxtype: 1, unk: 0, line: 173 */ "Mmh...<pause 30>\nCerchi il drago d'acqua? Blub?\n\n\nUn umano che possiede la sua scaglia deve\nessere un suo amico... ti porterò da lei!")
/*<242>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 238, 'param3': 30}
/*<238>*/ 					printf(/* textboxtype: 1, unk: 1, line: 174 */ "Il drago d'acqua è poco oltre...\nForse è il caso che tu prenda nota, blub!")
/*<243>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 239, 'param3': 34}
          					goto flw_239
          				}
          			  case 1:
/*<235>*/ 				printf(/* textboxtype: 1, unk: 0, line: 176 */ "Blub?<pause 15> Non mi mangi?\nMeno male, blub!\n\n\nSono venuti dei tipi molto violenti\ndi recente, blub! Mi sono nascosto\nper quello, blub!\n")
          			}
          		}
          	}
          }

          void entrypoint_203_49() {
/*<564>*/ 	start()
/*<565>*/ 	printf(/* textboxtype: 1, unk: 0, line: 86 */ "<0x10012:0x00000001>Signore, vi prego di ascoltare con\nattenzione. Riuscite a sentire\nqualcosa?")
          }

          void entrypoint_203_50() {
/*<  4>*/ 	start()
/*<255>*/ 	set_camera(-1, 0)
/*<254>*/ 	printf(/* textboxtype: 2, unk: 0, line: 80 */ "Congratulazioni,\n<0x10012:0x00000004>mio signore <heroname>.")
/*<256>*/ 	printf(/* textboxtype: 1, unk: 1, line: 81 */ "<0x10012:0x00000001>Signore, avete superato con\nsuccesso la prova. Avete acquisito la\nforza necessaria per cercare la fiamma\nsacra.")
/*<258>*/ 	set_camera(2, 0)
/*<257>*/ 	printf(/* textboxtype: 0, unk: 1, line: 82 */ "Questa <color yellow<scaglia del drago d'acqua>coloroff>\nè una delle eredità lasciate dalla Dea.\n\n\nGrazie alla forza del grande spirito\ndel<color blue< drago d'acqua >coloroff>potrete immergervi\nin profondità.")
/*<260>*/ 	set_camera(-1, 0)
/*<259>*/ 	printf(/* textboxtype: 1, unk: 0, line: 83 */ "La fiamma si trova da qualche parte\nnella foresta, <0x10012:0x00000001>mio signore.\nIpotizzo si tratti di un luogo dove\nancora non vi siete recato.")
          }

          void entrypoint_203_85() {
/*<490>*/ 	start()
/*<492>*/ 	printf(/* textboxtype: 1, unk: 0, line: 137 */ "<0x10009:0x00070707>Cosa c'è? Vuoi forse chiedermi\nqualcosa sul drago di fuoco? O sul\ndrago del fulmine? O sulla foresta?\n[1-]Fuoco[2-]Fulmine[3-]Foresta[4]Niente")
/*<491>*/ 	switch (choice(4)) {
          	  case 0:
/*<493>*/ 		printf(/* textboxtype: 2, unk: 1, line: 138 */ "<0x10009:0x00070704>Umpf! Quello?<pause 15>\nProprio come io faccio con la foresta,\negli protegge il vulcano, per conto della\nDea.\nÈ un tipo sui generis che risiede\nin un cratere dalla temperatura\ninsopportabile agli uomini e alle\ncreature malvagie.")
          	  case 1:
/*<494>*/ 		printf(/* textboxtype: 0, unk: 2, line: 139 */ "<0x10009:0x00070704>Umpf! Quello?<pause 15>\nProprio come io faccio con la foresta,\negli protegge il deserto, per conto\ndella Dea.\nÈ il più anziano della nostra specie,\ne dovrebbe pensare di più alla salute...<pause 15>\nChissà come sta...")
          	  case 2:
/*<495>*/ 		printf(/* textboxtype: 1, unk: 0, line: 140 */ "<0x10009:0x00070704>All'epoca in cui gli uomini\nvivevano sulla terra, si cantava\nla loro armonia con la natura...\n\nIn fin dei conti, non trovi che sia\npiù bella la foresta senza\ngli umani?")
          	  case 3:
/*<496>*/ 		printf(/* textboxtype: 2, unk: 1, line: 141 */ "<0x10009:0x00070706>Devi continuare a perseverare e compiere\nil tuo destino di messaggero della Dea.")
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
/*<350>*/ 	printf(/* textboxtype: 55, unk: 1, line: 70 */ "Siete giunto in cima all'albero.\n\n\n\nOsservando l'area circostante\nda qui, dovreste poter riconoscere\nle zone che non avete ancora esplorato.")
/*< 19>*/ 	story_flags[60 /* us: 805A9ADC 0x80, jp: 805ACD5C 0x80 */] = true;
/*<566>*/ 	scene_flags[1 'Faron Woods'][51 /* 0x7 08 */] = true;
/*< 44>*/ 	make_actor_do_something(0, 0)
/*<145>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 394, 'param3': 17}
/*<394>*/ 	set_camera(17, 0)
/*<395>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 381, 'param3': 17}
/*<381>*/ 	printf(/* textboxtype: 2, unk: 0, line: 71 */ "<0x10012:0x00000001>Mio signore, guardate...")
/*<382>*/ 	set_camera(18, 0)
/*<386>*/ 	wait_frames(30)
/*<383>*/ 	printf(/* textboxtype: 1, unk: 2, line: 72 */ "Avete trovato un altro membro\ndei Kyuri.\n\n\nProbabilità che il russare di questo\nesemplare corrisponda ai rumori\npercepiti poc'anzi: 90%.")
/*<384>*/ 	set_camera(19, 0)
/*<385>*/ 	wait_frames(30)
/*< 30>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 28, 'param3': 36}
/*< 28>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_86() {
/*<398>*/ 	start()
/*<399>*/ 	printf(/* textboxtype: 0, unk: 2, line: 115 */ "<0x10009:0x00090900>Sì! Sento già il mio potere\ntornare vigoroso!")
          }

          void entrypoint_203_00() {
          	start()
/*< 81>*/ 	switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          	  case 0:
/*<541>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*<542>*/ 			printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x00010014>Eccoti di nuovo qui, giovane virgulto!\nTi avevo pur detto di non dire niente\nal drago d'acqua...\n\nQuando ho visto allagarsi la\nforesta m'è preso un colpo!\nHo pensato che stesse venendo\na mangiarmi!\n<0x10009:0x00010007>Invece, per fortuna, regna di nuovo\nla pace sulla foresta e sono diminuiti\ni mostri!")
          			flw_540:
/*<540>*/ 			printf(/* textboxtype: 1, unk: 1, line: 33 */ "<0x10009:0x00000013>Resterò qui a riposare.")
          		  case 1:
/*<543>*/ 			printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x00010001>Piantala di sbucare così all'improvviso!!!\n\n\n\n<0x10009:0x00010007>Così si fa! Sei riuscito a far riconoscere\nil tuo valore dal drago d'acqua...\n\n\nSappi che comunque io non fui da meno,\ntaaaaaanto tempo fa!")
          			goto flw_540
          		}
          	  case 1:
/*< 82>*/ 		switch (scene_flags[50 /* 0x7 04 */]) {
          		  case 0:
/*<536>*/ 			switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          			  case 0:
/*<538>*/ 				switch (adventure_pouch_has(7 0x0007)) {
          				  case 0:
/*<539>*/ 					printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00010001>Per mille foglie di tè!\nImpara un po' di educazione!\n\n\n<0x10009:0x00010007>Oho! Hai trovato l'acqua che il drago\nd'acqua voleva!\n\n\nDille pure che è un regalo da parte mia!")
          					goto flw_540
          				  case 1:
/*<544>*/ 					printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00010001>Per mille foglie di tè!\nImpara un po' di educazione!\n\n\n<0x10009:0x00010006>Come? Il drago d'acqua t'ha\nchiesto di portarle dell'acqua sacra?\n\n\nAll'interno del santuario credo ci sia\nuna fonte cristallina. L'acqua di una\ndelle cascate dovrebbe andarle bene...")
          					goto flw_540
          				}
          			  case 1:
/*<537>*/ 				printf(/* textboxtype: 1, unk: 1, line: 39 */ "<0x10009:0x00010001>Per mille foglie di tè!\nImpara un po' di educazione!\n\n\n<0x10009:0x00010007>Sei riuscito ad aprire il cancello\nper andare al lago!\n\n\nNon osare dire al drago d'acqua\nche sono stato io a dirti come fare!!!")
          				goto flw_540
          			}
          		  case 1:
/*< 83>*/ 			switch (story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */]) {
          			  case 0:
/*< 39>*/ 				switch (story_flags[61 /* us: 805A9ADF 0x01, jp: 805ACD5F 0x01 */]) {
          				  case 0:
/*< 40>*/ 					printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00010004>Nah! Sei di nuovo tu?!\nTi serve qualcosa?\n[1-]Sì[2]No")
/*< 41>*/ 					switch (choice(2)) {
          					  case 0:
/*< 42>*/ 						printf(/* textboxtype: 1, unk: 2, line: 30 */ "<0x10009:0x00000003>Per completare il simbolo della parte\nmancante, devi investire il cancello a\nsud della foresta del potere della Dea.")
          						goto flw_37
          					  case 1:
/*< 43>*/ 						printf(/* textboxtype: 1, unk: 1, line: 33 */ "<0x10009:0x00000013>Resterò qui a riposare.")
          					}
          				  case 1:
          					goto flw_37
          				}
          			  case 1:
/*<356>*/ 				printf(/* textboxtype: 1, unk: 2, line: 3 */ "<0x10009:0x00000014>Chi osa disturbare il mio sonno?!")
/*<375>*/ 				set_camera(20, 0)
/*<569>*/ 				switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          				  case 0:
/*<570>*/ 					printf(/* textboxtype: 1, unk: 1, line: 6 */ "<0x10009:0x00010001><0x10006:0xfccd>Eh...?<pause 15>\n<0x10006:0x00cd>Ci siamo già visti da qualche parte, no?\n[1-]Sì[2-]Non credo")
/*<571>*/ 					switch (choice(2)) {
          					  case 0:
/*<575>*/ 						set_camera(18, 0)
/*<574>*/ 						printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00000007>Capisco... Stai giocando in <color red<modalità\neroica>coloroff>!\nSuppongo che tu sappia già cosa fare...\n[1-]Certo[2-]No...")
/*<576>*/ 						switch (choice(2)) {
          						  case 0:
/*<578>*/ 							entrypoint_203_10();
          						  case 1:
/*<577>*/ 							printf(/* textboxtype: 1, unk: 1, line: 9 */ "<0x10009:0x00000003>Lo hai già dimenticato?\nCredo che allora passerai un brutto\nquarto d'ora...")
          							flw_378:
/*<378>*/ 							set_camera(20, 0)
          							flw_379:
/*<379>*/ 							printf(/* textboxtype: 1, unk: 1, line: 15 */ "<0x10009:0x00010006>Quello che sto per dirti\ndeve assolutamente restare\ntra di noi, promettilo!\n[1-]Prometto[2-]No")
/*< 21>*/ 							switch (choice(2)) {
          							  case 0:
          								flw_354:
/*<354>*/ 								printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00030008>Bene, bene! Allora adesso\nti dirò tutto, ma non dirlo a nessuno!")
          								flw_355:
/*<355>*/ 								set_camera(18, 0)
/*<364>*/ 								printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00030004>La fiamma di cui sei in cerca...<pause 15> Deve\nsenz'altro essere <sound 4>la <color blue<fiamma di Farore>coloroff>.\n\n\n<0x10009:0x00010000>La fiamma di Farore...<pause 15> Essa risale a tempi\nremoti... quando la Dea viveva tra noi.")
/*<365>*/ 								set_camera(21, 0)
/*<366>*/ 								printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00000002>Fu affidata al grande spirito che regna\nsulla <color blue<foresta di Firone>coloroff>, il <color blue<drago d'acqua>coloroff>.")
/*<367>*/ 								set_camera(22, 0)
/*<368>*/ 								printf(/* textboxtype: 1, unk: 1, line: 21 */ "<0x10009:0x00000004>Si narra che sia stata lasciata dalla Dea\nper <color blue<colui che sarebbe arrivato dal cielo\n>coloroff>un dì!")
/*<369>*/ 								set_camera(20, 0)
/*<370>*/ 								printf(/* textboxtype: 0, unk: 1, line: 22 */ "Pensandoci bene, potresti essere\nproprio tu!\n\n\n<0x10009:0x00030009>Ottimo, direi che potresti andare da lei,\ndal drago d'acqua!")
/*<371>*/ 								set_camera(23, 0)
/*<372>*/ 								printf(/* textboxtype: 1, unk: 0, line: 23 */ "A sud della foresta si trova un grande\nlago. Lì risiede il drago d'acqua, colei\nche protegge la fiamma.")
/*<373>*/ 								set_camera(24, 0)
/*<374>*/ 								printf(/* textboxtype: 1, unk: 1, line: 24 */ "<0x10009:0x00000004>Ma c'è un però! L'ingresso che conduce\nal lago è serrato per impedire l'accesso\nagli intrusi!\n\n<0x10009:0x00000007>Per tua fortuna, io posso svelarti\ncome aprirlo!")
/*<407>*/ 								set_camera(25, 0)
/*<408>*/ 								printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00010004>Il simbolo ritratto sul cancello<pause 15> deve\nessere inondato di <color red<potere divino>coloroff>.\n\n\n<0x10009:0x00000009>C'è dell'altro!<pause 15> Al simbolo manca una\nparte, deve quindi essere completato.")
/*<409>*/ 								set_camera(18, 0)
/*<410>*/ 								printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00030001>Per sapere che aspetto ha la parte\nmancante, dovrai cercare un simbolo\nidentico a quello del cancello.")
          								goto flw_37
          							  case 1:
/*<380>*/ 								set_camera(18, 0)
/*< 22>*/ 								printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00030014><0x10008:0x02cd>No?! Cosa odono le\nmie orecchie?\nHai detto no?\n\n<0x10009:0x00010006>Mi propongo di affidarti un segreto\ninestimabile e tu rifiuti di promettere?\n[1-]Prometto[2-]Rifiuto")
/*< 23>*/ 								switch (choice(2)) {
          								  case 0:
          									goto flw_354
          								  case 1:
/*< 24>*/ 									printf(/* textboxtype: 1, unk: 1, line: 18 */ "<0x10009:0x0003000b><0x10008:0x02cd>C‐c‐c‐coooosa?!?\n\n\n\n<0x10009:0x00010003>Sei uno sfrontato.<pause 15> Visto che sei venuto\nfin qui apposta, te lo dirò comunque.")
          									goto flw_355
          								}
          							}
          						}
          					  case 1:
/*<572>*/ 						printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00000003>Sicuro? È solo un'impressione...?\nAllora forse si tratta di un deja‐vu...")
/*<573>*/ 						set_camera(18, 0)
          						flw_363:
/*<363>*/ 						printf(/* textboxtype: 1, unk: 1, line: 12 */ "<0x10009:0x00030006>Comunque sia...<pause 15>\nChe ci fa un umano da queste parti?\n[1-]Dov'è la\nfiamma?[2-]Niente")
/*<360>*/ 						switch (choice(2)) {
          						  case 0:
/*<361>*/ 							printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00010001>Oho! Stai cercando la fiamma\nper rafforzare la tua spada perché devi\nandare a cercare un'amica?!\n\nUhm... Quindi...<pause 15>\nSei un umano che non solo mi vede,\nma cerca pure la fiamma!")
          							goto flw_378
          						  case 1:
/*<396>*/ 							set_camera(20, 0)
/*<397>*/ 							printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00010014>Come ti ho detto, io sto qui a sorvegliare\nla foresta...\n\n\nSo tutto! Stai cercando la fiamma\nper rafforzare la tua spada!")
          							goto flw_379
          						}
          					}
          				  case 1:
/*<357>*/ 					printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00010001>Per tutte le foglie di tè!\nMa tu sei un umano?!\n\n\nIo sono l'<color blue<eremita>coloroff> custode della foresta.\n\n\n\n<0x10009:0x00010006>Non so come hai fatto ad arrivare fin\nqui, ma dimmi un po'...\nTu riesci a vedermi?!\n[1-]Certo[2-]No")
/*<358>*/ 					switch (choice(2)) {
          					  case 0:
/*<362>*/ 						printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00000007>Mah! Che sfrontato! Non riescono a\nvedermi nemmeno i miei simili, i Kyuri!")
/*<377>*/ 						set_camera(18, 0)
          						goto flw_363
          					  case 1:
/*<376>*/ 						set_camera(18, 0)
/*<359>*/ 						printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x0003000b>Falso come un tè alle olive!\n\n\n\n<0x10009:0x00010014>Mi sei venuto a svegliare apposta e\npretendi che io creda che non mi vedi?!\nPfui!")
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
/*< 85>*/ 			printf(/* textboxtype: 2, unk: 0, line: 77 */ "Procedo all'analisi dell'acqua rimasta\nnell'orcio<0x10006:0xfccd>...<pause 15> <0x10006:0x00cd><0x10012:0x00000001>Signore, la <sound 4><color red<composizione\ncorrisponde >coloroff>a quella dell'acqua della\nfonte celeste.")
/*<186>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 517, 'param3': 36}
/*<517>*/ 			wait_frames(15)
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
/*< 67>*/ 			printf(/* textboxtype: 2, unk: 0, line: 74 */ "Procedo all'analisi dell'acqua\nrimanente nell'orcio<0x10006:0xfccd>...<pause 15>\n<0x10006:0x00cd><sound 4>Il <color red<rilevatore>coloroff> è impostato,\npotete continuare la ricerca.")
/*<568>*/ 			open_dowsing_wheel(5)
/*<567>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<230>*/ 			switch (adventure_pouch_has(1 0x0001)) {
          			  case 0:
/*<231>*/ 				printf(/* textboxtype: 0, unk: 1, line: 76 */ "<0x10012:0x00000001>Signore, possedete un'<color yellow<ampolla>coloroff>.\nPotrete usarla per trasportare l'acqua.")
          				flw_66:
/*< 66>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 297, 'param3': 36}
/*<297>*/ 				wait_frames(15)
/*<462>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 294, 'param3': 16}
/*<294>*/ 				set_camera(12, 0)
/*<293>*/ 				printf(/* textboxtype: 1, unk: 0, line: 113 */ "<0x10009:0x00000005>Se procedi in questa direzione, potrai\nraggiungere la foresta di Firone.")
/*<471>*/ 				switch (temp_flags[0 /* 0x1 01 */]) {
          				  case 0:
/*<295>*/ 					set_camera(-1, 0)
          					flw_184:
/*<184>*/ 					printf(/* textboxtype: 0, unk: 2, line: 106 */ "<0x10009:0x00090706>Bene, vai. E non farmi aspettare\ntroppo a lungo.")
/*<461>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				  case 1:
/*<472>*/ 					set_camera(27, 0)
          					goto flw_184
          				}
          			  case 1:
/*<229>*/ 				printf(/* textboxtype: 1, unk: 2, line: 75 */ "<0x10012:0x00000001>Signore, non possedete nulla con cui\ntrasportare l'acqua. Per prima cosa,\nprocuratevi un recipiente vuoto in cui\nraccoglierla.")
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
/*<401>*/ 	printf(/* textboxtype: 1, unk: 0, line: 116 */ "Guardami bene!\nQuesto è il mio vero aspetto!\n\n\nIl vero aspetto del drago d'acqua\n<color blue<Firone>coloroff>, ancella della Dea a cui\nsono state affidate queste terre!")
          }

          void entrypoint_203_01() {
/*<  1>*/ 	start()
/*<413>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<414>*/ 		printf(/* textboxtype: 1, unk: 1, line: 45 */ "<0x10009:0x00000007>Finalmente sono spariti quei\nterribili invasori! Ora sì che si può\ntornare a vivere sereni!\n\n<0x10009:0x00000004>Sarebbe magnifico se anche\ntu potessi tornare ai tempi in cui\ntu e la tua amica eravate insieme!")
          	  case 1:
/*<415>*/ 		printf(/* textboxtype: 1, unk: 1, line: 42 */ "<0x10009:0x00000001>Ciao, giovane virgulto.\nTi ricordi di me? Sei riuscito a trovare\nla tua amica?\n[1-]Chi sei?[2-]Non ancora...")
/*<533>*/ 		switch (choice(2)) {
          		  case 0:
/*<534>*/ 			printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x00110013>Ma come chi sono?!<pause 30>\nVorrei che ti ricordassi di me...\n\n\n<0x10009:0x000b0004>Ti insegno come fare per riconoscerci!\nSe punti il cursore su uno di noi\nsulla mappa, ti apparirà il nome!")
          		  case 1:
/*<535>*/ 			printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x00110013>Che tristezza. Sbrigati a trovarla!")
          		}
          	}
          }

          void entrypoint_203_53() {
/*< 75>*/ 	start()
/*<221>*/ 	story_flags[68 /* us: 805A9ADF 0x80, jp: 805ACD5F 0x80 */] = true;
/*<219>*/ 	{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 220, 'param3': 35}
/*<220>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 227, 'param3': 16}
/*<227>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 223, 'param3': 17}
/*<223>*/ 	printf(/* textboxtype: 0, unk: 1, line: 73 */ "")
/*<222>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 228, 'param3': 36}
/*<228>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_70() {
/*<159>*/ 	start()
/*<158>*/ 	printf(/* textboxtype: 1, unk: 0, line: 188 */ "Ooh! Adorata Faih! Bzzz!\nEccomi qui per te!")
          }

          void entrypoint_203_88() {
/*<402>*/ 	start()
/*<545>*/ 	switch (temp_flags[2 /* 0x1 04 */]) {
          	  case 0:
/*<546>*/ 		printf(/* textboxtype: 0, unk: 2, line: 118 */ "<0x10009:0x00090700>Bravo, umano. Mi hai portato\nl'<color blue<acqua sacra>coloroff> che desideravo.\n\n\nNon è quindi un caso che tu abbia\nsuperato la prova della Dea e ottenuto\nla <color blue<mia scaglia>coloroff>.")
          	  case 1:
/*<547>*/ 		printf(/* textboxtype: 2, unk: 0, line: 117 */ "<0x10009:0x00090700>Bravo, umano. Mi hai portato\nl'<color blue<acqua sacra>coloroff>, come ti avevo chiesto.\n\n\nNon è quindi un caso che tu abbia\nsuperato la prova della Dea e ottenuto\nla <color blue<mia scaglia>coloroff>.")
          	}
          }

          void entrypoint_203_54() {
/*< 76>*/ 	start()
/*< 77>*/ 	printf(/* textboxtype: 1, unk: 2, line: 78 */ "Probabilità che questo simbolo\nsia quello di cui parlava l'eremita:\n80%.")
/*<232>*/ 	set_camera(26, 0)
/*<437>*/ 	printf(/* textboxtype: 0, unk: 1, line: 79 */ "Vi suggerisco di tenere bene\na mente la forma.")
/*<438>*/ 	wait_frames(15)
/*<439>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 440, 'param3': 36}
/*<440>*/ 	wait_frames(15)
          }

          void entrypoint_203_71() {
/*<161>*/ 	start()
/*<179>*/ 	switch (scene_flags[127 /* 0xE 80 */]) {
          	  case 0:
/*<180>*/ 		printf(/* textboxtype: 0, unk: 1, line: 190 */ "Di nuovo quest'<color red<orcio d'acqua>coloroff>...<pause 15>\nNon c'è problema! Lascia fare a me!\nBzzz!")
          	  case 1:
/*<160>*/ 		printf(/* textboxtype: 1, unk: 1, line: 189 */ "Uaoh... Ma è gigante!<pause 15>\nComunque per me è facile come\navvitare una vite! Bzzz!")
          	}
          }

          void entrypoint_203_89() {
/*<403>*/ 	start()
/*<404>*/ 	printf(/* textboxtype: 0, unk: 0, line: 119 */ "<0x10009:0x00070700>Ora è giunto il momento per me\ndi mantenere la promessa.\nTi guiderò alla <color red<fiamma sacra>coloroff>.\n\nSeguimi!")
/*<405>*/ 	changeScene(2, 0) // 
          }

          void entrypoint_203_02() {
/*<416>*/ 	start()
/*<417>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<418>*/ 		printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x0009000c>Tutti dicono che sulla foresta è tornata\na regnare la pace... io non ci credo.\n\n\n<0x10009:0x00070013>Esisterà un posto dove si può vivere\nsenza preoccupazioni? Vorrei distendermi\nun po'!")
          	  case 1:
/*<419>*/ 		printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x0009000c>Fino a quando dovremo vivere così\nnella paura?\n\n\n<0x10009:0x00070013>Esisterà un luogo dove si può vivere in\npace? Vorrei poter distendere la schiena!")
          	}
          }

