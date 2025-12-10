          void entrypoint_115_02() {
/*<444>*/ 	start()
/*<443>*/ 	switch (story_flags[297 /* us: 805A9AFD 0x08, jp: 805ACD7D 0x08 */]) {
          	  case 0:
/*<433>*/ 		printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x0000000a>Ah, vuoi vendere qualche tesoro?")
          		flw_495:
/*<495>*/ 		make_actor_do_something(8, 0)
/*<432>*/ 		printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00120600>Benissimo, oggi ho voglia di acquistare\nqualcosa! <color yellow<<string arg0>>coloroff>!\n<color yellow<<string arg1>>coloroff>!\n<color yellow<<string arg2>>coloroff>!\nE poi cos'altro...? Ah!\n<color yellow<<color yellow<<string arg3><color yellow<>coloroff>!\n<0x10009:0x00100600>Sì, solo questi quattro. Allora, cosa\nvuoi fare?\n[1-]Vendo[2]Non vendo")
/*<415>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_414:
/*<414>*/ 			printf(/* textboxtype: 1, unk: 1, line: 9 */ "Quale tesoro vorresti vendermi?\n\n\n\n1) <color yellow<<string arg2>>coloroff>\n2) <color yellow<<string arg3>>coloroff>\n3) <color yellow<<string arg0>>coloroff>\n4) <color yellow<<string arg1>>coloroff><color yellow<[1-]3)[2-]4)[3-]1)[4-]2)>coloroff>")
/*<413>*/ 			switch (choice(4)) {
          			  case 0:
/*<488>*/ 				make_actor_do_something(0, 0)
/*<481>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<489>*/ 					printf(/* textboxtype: 1, unk: 0, line: 10 */ "<color yellow<<0x10009:0x00120600>>coloroff>Un esemplare di <color yellow<<color yellow<<string arg0><color yellow<\n>coloroff>ti frutterà <numeric arg0 0> rupie.")
          					flw_656:
/*<656>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 412, 'param3': 12}
/*<412>*/ 					printf(/* textboxtype: 1, unk: 1, line: 14 */ "<0x10009:0x00100600>Vedo che ne hai <numeric arg4 0>.\nQuanti ne vuoi vendere?\n[1-]1[2-]5[3-]Tutti[4]Nessuno")
/*<411>*/ 					switch (choice(4)) {
          					  case 0:
/*<500>*/ 						make_actor_do_something(4, 0)
          						flw_497:
/*<497>*/ 						switch (context_related2(0)) {
          						  case 0:
/*<409>*/ 							printf(/* textboxtype: 1, unk: 0, line: 15 */ "<color yellow<<0x10009:0x00120900>>coloroff>Quindi, me ne vuoi vendere <numeric arg0 0>,\ngiusto?\nBene, ti pagherò <numeric arg1 0> rupie.\n[1-]Affare fatto[2]Cambio idea")
/*<408>*/ 							switch (choice(2)) {
          							  case 0:
/*<430>*/ 								printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x0010080a>Benissimo! Eccoti il danaro.")
/*<496>*/ 								make_actor_do_something(7, 0)
/*<572>*/ 								set_camera(6, 0)
/*<571>*/ 								{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 2048, 'next': 573, 'param3': 13}
/*<573>*/ 								wait_frames(45)
/*<429>*/ 								printf(/* textboxtype: 1, unk: 0, line: 19 */ "È un piacere fare affari con te!\nTorna a trovarmi.")
/*<574>*/ 								{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          							  case 1:
          								flw_410:
/*<410>*/ 								printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x000f000c>Oh, davvero? Beh, spero che\ntornerai a farmi visita qualche volta.")
          							}
          						  case 1:
/*<431>*/ 							printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x000f0409>Ma non ne\nhai in tale quantità!\nPerché non la smetti con\nquesti scherzi?!")
          							goto flw_656
          						}
          					  case 1:
/*<499>*/ 						make_actor_do_something(5, 0)
          						goto flw_497
          					  case 2:
/*<498>*/ 						make_actor_do_something(6, 0)
          						goto flw_497
          					  case 3:
          						goto flw_410
          					}
          				  case 1:
          					flw_494:
/*<494>*/ 					printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x000f0409>Per favore... smettila di scherzare!\nNon hai nemmeno un esemplare di\nquesto tipo di tesoro!\n\nVuoi vendere qualche altro articolo?\n[1-]Sì[2]No")
/*<480>*/ 					switch (choice(2)) {
          					  case 0:
          						goto flw_414
          					  case 1:
          						goto flw_410
          					}
          				}
          			  case 1:
/*<487>*/ 				make_actor_do_something(1, 0)
/*<482>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<490>*/ 					printf(/* textboxtype: 1, unk: 0, line: 11 */ "<color yellow<<0x10009:0x00120600>>coloroff>Un esemplare di <color yellow<<color yellow<<string arg1><color yellow<\n>coloroff>ti frutterà <numeric arg1 0> rupie.")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			  case 2:
/*<486>*/ 				make_actor_do_something(2, 0)
/*<483>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<491>*/ 					printf(/* textboxtype: 1, unk: 0, line: 12 */ "<color yellow<<0x10009:0x00120600>>coloroff>Un esemplare di <color yellow<<color yellow<<string arg2><color yellow<\n>coloroff>ti frutterà <numeric arg2 0> rupie.")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			  case 3:
/*<485>*/ 				make_actor_do_something(3, 0)
/*<484>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<492>*/ 					printf(/* textboxtype: 1, unk: 0, line: 13 */ "<color yellow<<0x10009:0x00120600>>coloroff>Un esemplare di <color yellow<<color yellow<<string arg3><color yellow<\n>coloroff>ti frutterà <numeric arg3 0> rupie.")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			}
          		  case 1:
          			goto flw_410
          		}
          	  case 1:
/*<493>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 442, 'param3': 31}
/*<442>*/ 		printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x0000000a>Ah, salve...\nCome posso aiutarti?\n[1-]Acquisto![2-]Boh...")
/*<441>*/ 		switch (choice(2)) {
          		  case 0:
/*<440>*/ 			printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x000f0409>Vorresti fare acquisti, eh? Posso\nchiederti di tornare al negozio domani\nallora?")
          		  case 1:
/*<439>*/ 			printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00130609>Che significa “boh\"?\nChe ci sei venuto a fare qui, allora?")
/*<438>*/ 			printf(/* textboxtype: 1, unk: 0, line: 3 */ "Cosa? Cioè, secondo te sono sgarbato?\nL'opposto di come sono durante il\ngiorno?!\n\n<0x10009:0x0010060b>Beh, è che uno si stanca di avere\nsempre stampato sulla faccia\nil sorriso del mercante, sai.\n\nLa mia personalità va anche al \ndi là del mio mestiere.\n\n\nComunque sia, poco importa...\n\n\n\nDeduco che tu sia qui per avere i\nservizi della <color red<bottega notturna\ndegli arnesi>coloroff>?\n[1-]Cosa?[2-]Già!")
/*<437>*/ 			switch (choice(2)) {
          			  case 0:
/*<436>*/ 				printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00000009>Ah, è la prima volta che vieni qui,\nvero? Capisco...")
          				flw_434:
/*<434>*/ 				printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00120600>Di notte offro un servizio diverso.\n<color red<Compro tesori>coloroff>, ma questo non significa\nche accetti ogni genere di anticaglia. \nIo tratto solo <color red<articoli specifici>coloroff>.\n<0x10009:0x00100600>Ma veniamo subito al dunque,\nche ne dici?")
/*<428>*/ 				story_flags[297 /* us: 805A9AFD 0x08, jp: 805ACD7D 0x08 */] = true;
          				goto flw_495
          			  case 1:
/*<435>*/ 				printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x000f0409>Avresti dovuto dirmelo subito...")
          				goto flw_434
          			}
          		}
          	}
          }

          void entrypoint_115_20() {
/*< 56>*/ 	start()
/*<535>*/ 	switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          	  case 0:
/*<173>*/ 		{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6656, 'next': 57, 'param3': 13}
/*< 57>*/ 		printf(/* textboxtype: 1, unk: 0, line: 194 */ "<0x10009:0x00000054>Ugh...\nNngh... nngh...\nA‐aiutooo...")
/*<528>*/ 		switch (zone_temp_flags[17 /* 0x3 02 */]) {
          		  case 0:
          		  case 1:
/*<724>*/ 			zone_temp_flags[17 /* 0x3 02 */] = true;
/*<529>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<174>*/ 		{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6656, 'next': 536, 'param3': 13}
/*<536>*/ 		printf(/* textboxtype: 1, unk: 0, line: 195 */ "<0x10009:0x00000017>Uhh... Maledetto <color blue<Sparvio>coloroff>...!\nTi odio...\nDannazione!")
          	}
          }

          void entrypoint_115_03() {
/*<426>*/ 	start()
/*<425>*/ 	switch (story_flags[298 /* us: 805A9AFD 0x10, jp: 805ACD7D 0x10 */]) {
          	  case 0:
/*<717>*/ 		switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          		  case 0:
/*<718>*/ 			switch (story_flags[810 /* us: 805A9B31 0x04, jp: 805ACDB1 0x04 */]) {
          			  case 0:
          				flw_479:
/*<479>*/ 				switch (random(2)) {
          				  case 0:
/*<478>*/ 					printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00030001>Oh, sei tu, <heroname>.\nContavo di vederti.\nQualche nuovo insetto per me?")
          					flw_476:
/*<476>*/ 					make_actor_do_something(8, 0)
/*<475>*/ 					printf(/* textboxtype: 1, unk: 0, line: 34 */ "Oggi comprerei tre tipi di insetti!\n<color yellow<<string arg0>>coloroff>!\n<color yellow<<string arg1>>coloroff>!\n<color yellow<<string arg2>>coloroff>!\n[1-]Vendo[2]Non vendo")
/*<474>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_472:
/*<472>*/ 						printf(/* textboxtype: 1, unk: 1, line: 36 */ "Quale insetto mi vendi?\n1) <color yellow<<string arg2>>coloroff>\n2) <color yellow<<string arg0>>coloroff>\n3) <color yellow<<string arg1>>coloroff>[1-]2)[2-]3)[3-]1)")
/*<471>*/ 						switch (choice(3)) {
          						  case 0:
/*<466>*/ 							make_actor_do_something(0, 0)
/*<461>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<467>*/ 								printf(/* textboxtype: 1, unk: 0, line: 37 */ "<color yellow<<string arg0>>coloroff>, eh?\nVediamo... per questa specie ti do\n<numeric arg0 0> <0x30004:0x01cd> a esemplare. Ed è la mia\nultima offerta!")
          								flw_657:
/*<657>*/ 								{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 458, 'param3': 12}
/*<458>*/ 								printf(/* textboxtype: 1, unk: 1, line: 42 */ "Di esemplari di questa specie ne\nhai <numeric arg4 0>... Quanti me ne vuoi vendere?\n[1-]1[2-]5[3-]Tutti[4]Nessuno")
/*<457>*/ 								switch (choice(4)) {
          								  case 0:
/*<455>*/ 									make_actor_do_something(4, 0)
          									flw_452:
/*<452>*/ 									switch (context_related2(0)) {
          									  case 0:
/*<456>*/ 										printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x00030014>Ah... mmh... interessante! Vediamo,\nquante rupie potrei offrirti?! Che ne\ndici di <numeric arg1 0>?\n[1-]Vendo[2]Ci ho\nripensato")
/*<449>*/ 										switch (choice(2)) {
          										  case 0:
/*<451>*/ 											printf(/* textboxtype: 1, unk: 0, line: 45 */ "Va bene, ecco i soldi.")
/*<445>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 448, 'param3': 12}
/*<448>*/ 											make_actor_do_something(7, 0)
/*<450>*/ 											printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x0003ff04>Grazie...\nOggi ho un grillo per la testa...\n\n\nMa non preoccuparti, non farei\ndel male a una mosca!\nAspetto altri insetti, <heroname>.")
          										  case 1:
          											flw_473:
/*<473>*/ 											printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x0001ff13>Capisco. Che peccato...\n<0x10009:0x00000500>Beh, allora come non detto...")
          										}
          									  case 1:
/*<459>*/ 										printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x00120100>Non ne hai così tanti...\nTi rifaccio la domanda...")
          										goto flw_657
          									}
          								  case 1:
/*<454>*/ 									make_actor_do_something(5, 0)
          									goto flw_452
          								  case 2:
/*<453>*/ 									make_actor_do_something(6, 0)
          									goto flw_452
          								  case 3:
          									goto flw_473
          								}
          							  case 1:
          								flw_470:
/*<470>*/ 								printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x0010ff0c>Ma non ne hai nemmeno un\nesemplare! Non farmi correre\ndietro alle farfalle!\n\n<0x10009:0x0001ff00>Forse volevi vendermi\nun altro insetto?\n[1-]Sì[2]No")
/*<460>*/ 								switch (choice(2)) {
          								  case 0:
          									goto flw_472
          								  case 1:
          									goto flw_473
          								}
          							}
          						  case 1:
/*<465>*/ 							make_actor_do_something(1, 0)
/*<462>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<468>*/ 								printf(/* textboxtype: 1, unk: 0, line: 38 */ "<color yellow<<string arg1>>coloroff>, eh?\nFammi pensare... per questa specie\ncredo che <numeric arg1 0> <0x30004:0x01cd> a esemplare sia\nun prezzo onesto.")
          								goto flw_657
          							  case 1:
          								goto flw_470
          							}
          						  case 2:
/*<464>*/ 							make_actor_do_something(2, 0)
/*<463>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<469>*/ 								printf(/* textboxtype: 1, unk: 0, line: 39 */ "<color yellow<<string arg2>>coloroff>, eh?\nQuanto vorresti? Mmm, facciamo\n<numeric arg2 0> <0x30004:0x01cd> a esemplare e affare fatto.")
          								goto flw_657
          							  case 1:
          								goto flw_470
          							}
          						}
          					  case 1:
          						goto flw_473
          					}
          				  case 1:
/*<477>*/ 					printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00030001>Ehi, <heroname>.\nOggi mi è saltata la mosca al naso.\nMa non prendere lucciole per\nlanterne, eh!")
          					goto flw_476
          				}
          			  case 1:
/*<721>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 719, 'param3': 31}
/*<719>*/ 				printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00030001><heroname>...\nForse già lo sai.\nPrima ho fatto una capatina\nalle grotte dietro la cascata.\nIn un angolo completamente vuoto\nho trovato un gruppo di <color red<lepidee>coloroff>.\nMi chiedo come mai quelle farfalle\nsi radunino in gruppi così numerosi.\nInsomma è intrigante, vero?\nMagari se vai anche tu nelle\ngrotte di notte potresti scoprire\nqualcosa di più.")
/*<722>*/ 				printf(/* textboxtype: 1, unk: 0, line: 33 */ "Ah, bene. Chissà quali insetti\nhai da vendermi oggi.")
/*<720>*/ 				story_flags[810 /* us: 805A9B31 0x04, jp: 805ACDB1 0x04 */] = true;
          				goto flw_476
          			}
          		  case 1:
          			goto flw_479
          		}
          	  case 1:
/*<446>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 666, 'param3': 31}
/*<666>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 427, 'param3': 13}
/*<427>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x0000ff01>Mmm... Sei <heroname>, vero?\nChe vuoi da me?")
/*<578>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 416, 'param3': 13}
/*<416>*/ 		printf(/* textboxtype: 1, unk: 0, line: 22 */ "<color red<<0x10009:0x00000300>>coloroff>Eh?\nChe sto facendo?\n\n\n<color red<<0x10009:0x00ff0114>>coloroff><color red<Insetti>coloroff>...\nGuardo gli insetti.")
/*<575>*/ 		set_camera(22, 0)
/*<577>*/ 		wait_frames(30)
/*<418>*/ 		printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x0001ff00>Gli insetti sono meravigliosi.\nMeravigliosi come Bado?\nAnche di più, direi...\n\nOh...<pause 30> non voglio insinuare che\nBado valga meno di un insetto...")
/*<576>*/ 		set_camera(-1, 0)
/*<417>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "Comunque sia, <color red<adoro gli insetti>coloroff>...\nVoglio averne una collezione infinita.\n\n\nIl mio sogno nel cassetto è avere\nun'isola tutta mia brulicante di tutti\nquegli esserini.")
/*<424>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x00ffff01>Ah! Che idea!\n\n\n\n<heroname>, <color red<se ti capita di\ncatturare degli insetti>coloroff>, <color red<non esitare a\nvendermeli>coloroff>.\n\nQuando si tratta di insetti, io\nnon bado a spese.\n[1-]Certo![2-]Mah...")
/*<423>*/ 		switch (choice(2)) {
          		  case 0:
/*<422>*/ 			printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x0003ff04>Ah ah ah!\nLa mia collezione di insetti\nsi farà sempre più grande...")
          			flw_420:
/*<420>*/ 			printf(/* textboxtype: 1, unk: 0, line: 28 */ "Bene, se mai ti va di vendere qualche\ninsetto vieni da me.\nMi trovi qui di notte...\n\n<0x10009:0x00120100>Ma non compro ogni tipo di insetto, eh!\nLe specie che voglio cambiano\n<color red<ogni giorno in base al mio umore>coloroff>.\n\nUn'altra cosa, non ti azzardare\na parlare di queste cose davanti\na Bado, mi raccomando.\n\nE forse è un discorso un po' egoista,\nma io <color red<gli affari li tratto solo di sera>coloroff>.\nSai com'è anch'io ho una vita!\n\n<0x10009:0x0003ff14>Capito, <heroname>?\nImmagino anche tu sia un entomologo,\nquindi mi capisci...\n")
/*<447>*/ 			printf(/* textboxtype: 1, unk: 0, line: 29 */ "Allora, veniamo a noi.\nHai qualcosa da vendermi?")
/*<419>*/ 			story_flags[298 /* us: 805A9AFD 0x10, jp: 805ACD7D 0x10 */] = true;
          			goto flw_476
          		  case 1:
/*<421>*/ 			printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x0001ff05>Cosa? Non è gentile da parte tua!\nLo dirò a Bado...")
          			goto flw_420
          		}
          	}
          }

          void entrypoint_115_04() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x00000000>Guu guu guu guu guu!\nGaa gaa gaa gaa gaa!\n")
          }

          void entrypoint_115_21() {
/*< 67>*/ 	start()
/*< 68>*/ 	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          	  case 0:
/*< 85>*/ 		switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          		  case 0:
/*<798>*/ 			entrypoint_115_28();
          		  case 1:
/*< 84>*/ 			switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          			  case 0:
/*<115>*/ 				switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          				  case 0:
/*<799>*/ 					switch (zone_temp_flags[20 /* 0x3 10 */]) {
          					  case 0:
/*<116>*/ 						printf(/* textboxtype: 1, unk: 0, line: 222 */ "<0x10009:0x00080909>Urrà!!! Grazie,\n<heroname>.\n\n\nGrazie a te ho un fidanzato\nmeraviglioso. Ma forse sono\nstata cattiva con Ras...")
          					  case 1:
/*<800>*/ 						entrypoint_115_28();
          					}
          				  case 1:
/*< 87>*/ 					printf(/* textboxtype: 1, unk: 0, line: 221 */ "<0x10009:0x00000001>Grazie per avermi portato la lettera,\n<heroname>.\n\n\n<0x10009:0x00010d14>Sigh...\nMi chiedo che cosa direbbe\n<color blue<Sparvio >coloroff>se lo venisse a sapere...")
          				}
          			  case 1:
/*<130>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 133, 'param3': 31}
/*<133>*/ 				make_actor_do_something(2, 0)
/*<587>*/ 				{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1024, 'next': 73, 'param3': 13}
/*< 73>*/ 				printf(/* textboxtype: 1, unk: 0, line: 211 */ "<0x10009:0x00000014>Sigh...\nCome farmi notare da <color blue<Sparvio>coloroff>?")
/*<134>*/ 				make_actor_do_something(3, 0)
/*< 74>*/ 				printf(/* textboxtype: 1, unk: 0, line: 212 */ "<0x10009:0x00080404>Ah!\n<heroname>!\n\nChe c'è?\nChe succede? \n<0x10008:0xfecd>Hai sentito?<0x10008:0x00cd>\n\n[1-]Dai la\nlettera[2-]Non dare\nla lettera")
/*< 75>*/ 				switch (choice(2)) {
          				  case 0:
/*< 77>*/ 					printf(/* textboxtype: 1, unk: 0, line: 214 */ "<0x10009:0x00080906>Eh? Una lettera?\nPer me<pause 10>.<pause 10>.<pause 10>.<pause 10>?\nForse è da parte di... <color blue<Sparvio>coloroff>?\n[1-]Ecco a te[2-]Ci ho\nripensato...")
/*< 78>*/ 					switch (choice(2)) {
          					  case 0:
/*< 80>*/ 						printf(/* textboxtype: 1, unk: 0, line: 216 */ "<0x10009:0x000e090a>G‐grazie!\nGrazie.")
/*<592>*/ 						{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3072, 'next': 593, 'param3': 13}
/*<593>*/ 						wait_frames(5)
/*<598>*/ 						set_camera(23, 0)
/*<599>*/ 						wait_frames(10)
/*<611>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 591, 'param3': 49}
/*<591>*/ 						printf(/* textboxtype: 1, unk: 0, line: 217 */ "<0x10009:0x00100400>M‐ma chi la manda?!")
/*<594>*/ 						wait_frames(30)
/*< 81>*/ 						printf(/* textboxtype: 1, unk: 0, line: 218 */ "<0x10009:0x00100d00>Ehm... <pause 20>\n<0x10006:0xfecd>La grafia non è molto chiara...<0x10006:0x00cd>\n\n<0x10009:0x00100400>Comunque, che importanza ha...\nVediamo quello che dice...")
/*<596>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': -256, 'next': 665, 'param3': 13}
/*<665>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 104, 'next': 597, 'param3': 24}
/*<597>*/ 						wait_frames(15)
/*<600>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4608, 'next': 595, 'param3': 13}
/*<595>*/ 						printf(/* textboxtype: 1, unk: 0, line: 219 */ "“Ti scrivo per dirti che\nil mio amore per te è\npiù vasto del firmamento\ne più profondo delle nuvole.\n<0x10009:0x00131200>Mi farebbe molto piacere\npoter uscire con te.\nDal tuo cavaliere, Ras\"\n<0x10009:0x00000500>.<pause 10>.<pause 10>. <pause 10>.<pause 10>.<pause 10>. <pause 10>.<pause 10>.<pause 10>.\n<0x10009:0x00010d00>Ehm...\nQuesto Ras... se non sbaglio\nè uno dei protetti di Bado, vero?\n\n<0x10009:0x000c0400>E... questa... è una lettera d'amore da\nparte di Ras...\nVero?\n\n<0x10009:0x000b0712>Oh, povera me...")
/*<588>*/ 						set_camera(-1, 0)
/*<589>*/ 						{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1792, 'next': 590, 'param3': 13}
/*<590>*/ 						wait_frames(15)
/*<612>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 82, 'param3': 16}
/*< 82>*/ 						printf(/* textboxtype: 1, unk: 0, line: 220 */ "<0x10009:0x00000009>Sì.\nMa è una bella lettera, piena di\nsentimento.\n\nForse dovrei davvero uscire\ncon questo <color blue<Ras>coloroff>.\n\n\n<0x10009:0x00080900>Ma che cosa sto dicendo?!\n\n\n\n<0x10009:0x00010d14>Sigh...\nMi chiedo che cosa direbbe \n<color blue<Sparvio >coloroff>se lo venisse a sapere...")
/*< 83>*/ 						story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */] = true;
          					  case 1:
/*< 79>*/ 						printf(/* textboxtype: 1, unk: 0, line: 215 */ "<0x10009:0x00080912>Ma che vuoi?!\nNon prenderti gioco di me!")
          					}
          				  case 1:
/*< 76>*/ 					printf(/* textboxtype: 1, unk: 0, line: 213 */ "<0x10009:0x00010406>Eh?\nSei strano, <heroname>!")
          				}
          			}
          		}
          	  case 1:
/*<667>*/ 		switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          		  case 0:
/*< 69>*/ 			printf(/* textboxtype: 1, unk: 0, line: 206 */ "<0x10009:0x00000001>Ehi <heroname>, che ne pensi di\n<color blue<Sparvio>coloroff>?\n\n[1-]È a posto[2-]Perché?")
/*< 70>*/ 			switch (choice(2)) {
          			  case 0:
/*< 71>*/ 				printf(/* textboxtype: 1, unk: 0, line: 207 */ "<0x10009:0x000b070a>Sì, bravo!\nÈ gentile e premuroso!\nÈ responsabile e meraviglioso!\n\n<0x10009:0x000c0416>Oh cielo... non so che cosa mi ha\npreso così all'improvviso...\n\n\n<0x10009:0x00080400>Scusa se ti ho fatto una domanda\ncosì strana a bruciapelo...")
          			  case 1:
/*< 72>*/ 				printf(/* textboxtype: 1, unk: 0, line: 208 */ "<0x10009:0x00010406>Eh?\nEhm... volevo dire...\n\n\n<0x10009:0x00080416>Niente in realtà... un senso\ndi stranezza improvviso... meglio se\nchiudiamo la conversazione...")
          			}
          		  case 1:
/*<669>*/ 			switch (zone_temp_flags[15 /* 0x0 80 */]) {
          			  case 0:
/*<671>*/ 				printf(/* textboxtype: 1, unk: 0, line: 210 */ "<0x10009:0x00001001>Quella divisa ti sta uno splendore!\n\n\n\n<0x10009:0x0000040a>Anche se non sei bello come\nSparvio, eh!")
          			  case 1:
/*<668>*/ 				printf(/* textboxtype: 1, unk: 0, line: 209 */ "<0x10009:0x00010404>Ah! <pause 20><heroname>!\nSei stato promosso! Congratulazioni!\n\n\n<0x10009:0x00080400>Ah, il colore dell'uniforme di\nquest'anno è verde, vedo!\n<pause 20>Che bello! \n\n<0x10009:0x000a1000>Zelda resterà sicuramente\nimpressionata quando ti vedrà con\nquella addosso.\n\n<0x10009:0x00000406>Non ti preoccupare! Sta bene, lo so!\nSicuramente tornerà presto a casa.")
/*<670>*/ 				zone_temp_flags[15 /* 0x0 80 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_115_05() {
/*<  7>*/ 	start()
/*<830>*/ 	switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          	  case 0:
/*<  8>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 17>*/ 			switch (story_flags[386 /* us: 805A9B0D 0x10, jp: 805ACD8D 0x10 */]) {
          			  case 0:
/*< 22>*/ 				switch (story_flags[387 /* us: 805A9B0D 0x20, jp: 805ACD8D 0x20 */]) {
          				  case 0:
/*<104>*/ 					switch (zone_temp_flags[0 /* 0x1 01 */]) {
          					  case 0:
/*<579>*/ 						{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 3584, 'next': 105, 'param3': 13}
/*<105>*/ 						printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x00000e08>Anch'io stanotte mi farò\nuna bella dormita!\nGrazie mille!")
          					  case 1:
/*<580>*/ 						{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 3584, 'next': 23, 'param3': 13}
/*< 23>*/ 						printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x00000008>Ah! Grazie, grazie davvero!\nApprezzo moltissimo quello\nche hai fatto per me.")
          					}
          				  case 1:
/*<123>*/ 					check_item_flag(160, 1)
/*<124>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 60}) {
          					  case 0:
/*<126>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 19, 'param3': 31}
/*< 19>*/ 						printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00000e0d>Ma quello è...?\nIl <color yellow<sonaglino >coloroff>del bimbo!\nL'hai trovato!")
/*<584>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 586, 'param3': 47}
/*<586>*/ 						story_flags[387 /* us: 805A9B0D 0x20, jp: 805ACD8D 0x20 */] = true;
/*<712>*/ 						{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 713, 'param3': 15}
/*<713>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 714, 'param3': 17}
/*<714>*/ 						wait_frames(10)
/*<556>*/ 						set_camera(10, 0)
/*<555>*/ 						{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3328, 'next': 585, 'param3': 13}
/*<585>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 557, 'param3': 48}
/*<557>*/ 						wait_frames(60)
/*< 20>*/ 						printf(/* textboxtype: 1, unk: 0, line: 60 */ "Ecco bimbo bello!\nFai la nanna, sogni d'oro.<0x10005:0x00780000>")
/*<558>*/ 						{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3584, 'next': 559, 'param3': 13}
/*<559>*/ 						set_camera(29, 0)
/*< 21>*/ 						printf(/* textboxtype: 1, unk: 0, line: 61 */ "<0x10009:0x00000e08>Che sollievo!\nIl bambino si è tranquillizzato.\nAdesso sicuro che\nriprenderà sonno!\nAah! E pure io mi farò una bella\nnottata di riposo finalmente!\n\n\n<0x10009:0x00100e00>Grazie tante!\nNon dimenticherò quello che\nhai fatto per me!")
/*<103>*/ 						zone_temp_flags[0 /* 0x1 01 */] = true;
/*<715>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 125, 'param3': 42}
/*<125>*/ 						give_gratitude_crystals();
/*<716>*/ 						set_camera(30, 0)
          					  case 1:
/*<743>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 18, 'param3': 31}
/*< 18>*/ 						printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x000d0f09>Ahh...\nSpero che qualcuno riesca a trovare il\nsonaglino del bimbo...\n<color red<<0x10009:0x00100000>Un uccello l'ha preso ed è volato via.>coloroff>\nDeve ancora essere <color red<da qualche parte\nin questo villaggio>coloroff>...\n\n\n<0x10009:0x000d0000>Ahh...\nMi sa che anche stanotte non chiuderò\nocchio...")
          					}
          				}
          			  case 1:
/*< 10>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 561, 'param3': 31}
/*<561>*/ 				set_camera(10, 0)
/*<560>*/ 				{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 3072, 'next': 562, 'param3': 13}
/*<562>*/ 				wait_frames(75)
/*< 11>*/ 				printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10006:0xfccd>... <pause 45><0x10006:0x00cd><0x10009:0x000d0000>Ahhh...<0x10005:0x00410000>")
/*<563>*/ 				set_camera(-1, 0)
/*<565>*/ 				{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 564, 'param3': 13}
/*<564>*/ 				printf(/* textboxtype: 1, unk: 0, line: 51 */ "Ahhh...\nAnche oggi mi sa che non chiuderò\nocchio...\n[1-]Perché?[2-]Sei\nstanco?")
/*< 12>*/ 				switch (choice(2)) {
          				  case 0:
/*< 24>*/ 					printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00100f06>Apprezzo la tua\npremura...")
          					flw_26:
/*< 26>*/ 					printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x000d0f00>Come puoi vedere, di notte il\nbambino non fa altro che piangere...\nE perciò ultimamente non riesco a\nchiudere occhio.\nDi solito il bimbo dorme\ncome un angioletto. Ma\nsenza quel coso, non\nriesce a trovar pace!\n[1-]Quale coso?[2-]Ah, vuoi dire...?")
/*< 27>*/ 					switch (choice(2)) {
          					  case 0:
/*< 13>*/ 						printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x00100f01>Il <color yellow<sonaglino >coloroff>del bimbo!")
          						flw_15:
/*< 15>*/ 						printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x00000f00>Con quel giocattolino, il bimbo smette\nsubito di frignare...\n\n\nMa l'altro ieri l'abbiamo perso.\n<color red<Un uccello l'ha rubato ed è volato via>coloroff>.\nForse pensava che fosse cibo.\n\n<0x10009:0x000e0f00>Certo non può averlo mangiato, quindi\ndev'essere <color red<da qualche parte nel\nvillaggio>coloroff>. Però non sono riuscito\na trovarlo da nessuna parte...\n<0x10009:0x00000009>Ahh... se solo qualcuno riuscisse a\ntrovarlo!")
/*< 16>*/ 						story_flags[386 /* us: 805A9B0D 0x10, jp: 805ACD8D 0x10 */] = true;
          					  case 1:
/*< 14>*/ 						printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x00100f04>Sai di cosa parlo?\nSì, il <color yellow<sonaglino >coloroff>del bimbo.")
          						goto flw_15
          					}
          				  case 1:
/*< 25>*/ 					printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x00100f07>Tu mi capisci, vero...?")
          					goto flw_26
          				}
          			}
          		  case 1:
          			flw_9:
/*<  9>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00000003>Ahhh... questo bimbo non\nvuole proprio chiudere occhio...\nCome devo fare? Ahhh...\n[1-]Che cosa\nterribile[2-]Dov'è sua\nmadre?")
/*<127>*/ 			switch (choice(2)) {
          			  case 0:
/*<128>*/ 				printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00000004>Puoi dirlo forte...\nMa anche se frigna in continuazione è\nsempre il mio bimbino bello!\n\nPoi quando diventerai padre anche tu,\nmi darai ragione...")
          			  case 1:
/*<129>*/ 				printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00000007>Ah, la signora<pause 10>.<pause 10>.<pause 10>.\nÈ troppo stanca perché lavora\nalla bottega tutto il giorno.\n\n<0x10009:0x000d0f06>E così di sera la lascio\nsempre riposare... Ah ah...")
          			}
          		}
          	  case 1:
          		goto flw_9
          	}
          }

          void entrypoint_115_22() {
/*< 88>*/ 	start()
/*< 89>*/ 	switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          	  case 0:
/*< 91>*/ 		switch (story_flags[556 /* us: 805A9B16 0x20, jp: 805ACD96 0x20 */]) {
          		  case 0:
/*< 98>*/ 			switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          			  case 0:
/*<794>*/ 				switch (zone_temp_flags[20 /* 0x3 10 */]) {
          				  case 0:
/*< 99>*/ 					printf(/* textboxtype: 1, unk: 0, line: 243 */ "<0x10009:0x000c0401>Ehi <heroname>!\nGrazie a te ho trovato una\nfidanzata meravigliosa!\nGrazie mille!")
          				  case 1:
/*<796>*/ 					entrypoint_115_27();
          				}
          			  case 1:
/*<547>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 3072, 'next': 548, 'param3': 13}
/*<548>*/ 				printf(/* textboxtype: 1, unk: 0, line: 242 */ "<0x10009:0x00000018>Ehm... mmm...\n\n\n\n<0x10009:0x000f1100>Poniamo che tu abbia interesse nel\nsapere gli esiti di quell'incontro:\nsecondo te sarebbe una buona\nidea chiedere a lei direttamente?\n<0x10009:0x00110e00>Cioè, questo non vuole dire che io\nabbia qualche interesse. È solo\ncuriosità per le emozioni umane\ne l'amore in generale...")
          			}
          		  case 1:
/*<132>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 546, 'param3': 31}
/*<546>*/ 			{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 1024, 'next': 92, 'param3': 13}
/*< 92>*/ 			printf(/* textboxtype: 1, unk: 0, line: 234 */ "<0x10009:0x00000001>Ehi, come va\n<heroname>!")
/*<545>*/ 			printf(/* textboxtype: 1, unk: 0, line: 235 */ "<0x10009:0x00010c09>Eh?\n<color blue<Grudia >coloroff>ha ricevuto una lettera\nd'amore?\n\n<0x10009:0x000f1100>C‐capisco...\nInteressante...\nMmmh... ora capisco...\n\n<0x10009:0x000c0c54>Ehm...\nC‐cosa intende fare lei?\n[1-]Incontrarlo[2-]Non so")
/*< 93>*/ 			switch (choice(2)) {
          			  case 0:
/*< 94>*/ 				printf(/* textboxtype: 1, unk: 0, line: 236 */ "<0x10009:0x00110e53>Cosa?!!!\nQu‐questo è un problema serio!")
          				flw_96:
/*< 96>*/ 				printf(/* textboxtype: 1, unk: 0, line: 238 */ "<0x10009:0x00110e09>... Comunque sia, non importa!\nNon c'è mica niente tra me e <color blue<Grudia>coloroff>!\nSiamo solo amici...\n\nPerciò sapere con chi esce non è affar\nmio. Io non ho niente da dire al\nriguardo.\n\n<0x10009:0x000c0c00>Tuttavia! Mica posso stare\na guardare mentre i valori della\nscuola d'armi vengono corrotti!\n\n<0x10009:0x00080c00>E poi, l'amore incondizionato non è il\nsolo vero amore? Anzi, secondo me,\nun amore non assoluto non è nemmeno\namore nel vero senso della parola.\n<0x10009:0x000b0c00>Quindi, io devo assicurarmi\ndel fatto che lei possa godere\ndell'amore più incondizionato!\n\n<0x10009:0x00110e00>Dopotutto, io ho il diritto di amare\nsenza impedimenti da chicchessia!\n\n\n<0x10009:0x000c0c1b>O mi sbaglio?\n<heroname>?\n[1-]Non so[2-]La ami?")
/*<119>*/ 				switch (choice(2)) {
          				  case 0:
/*<121>*/ 					printf(/* textboxtype: 1, unk: 0, line: 240 */ "<0x10009:0x000f1152>C‐capisco. Ma adesso non è il momento\ndi parlare di cose del genere!")
          					flw_122:
/*<122>*/ 					printf(/* textboxtype: 1, unk: 0, line: 241 */ "<0x10009:0x00101117>Comunque sia...\n\n\n\n<0x10009:0x000f0c00>Non credo che per te\nsarebbe un problema chiederle\nqual è la sua decisione, vero?")
/*< 97>*/ 					story_flags[556 /* us: 805A9B16 0x20, jp: 805ACD96 0x20 */] = true;
/*<114>*/ 					story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
          				  case 1:
/*<120>*/ 					printf(/* textboxtype: 1, unk: 0, line: 239 */ "<0x10009:0x00110e53>N‐non dire sciocchezze,\n<heroname>!\n\n\n<0x10009:0x00120c00>Non capisco proprio come\nil tuo pensiero sia giunto a\nun'idea così salace!")
          					goto flw_122
          				}
          			  case 1:
/*< 95>*/ 				printf(/* textboxtype: 1, unk: 0, line: 237 */ "<0x10009:0x000f1118>Ah, non lo sai, eh?\nQu‐questo mi dà parecchio fastidio...")
          				goto flw_96
          			}
          		}
          	  case 1:
/*<814>*/ 		entrypoint_115_27();
          	}
          }

          void entrypoint_115_06() {
/*<253>*/ 	start()
/*<252>*/ 	switch (story_flags[388 /* us: 805A9B0D 0x40, jp: 805ACD8D 0x40 */]) {
          	  case 0:
/*<744>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 256, 'param3': 31}
/*<256>*/ 		switch (story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */]) {
          		  case 0:
/*<257>*/ 			printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00071602>Farò del mio meglio per diventare più\nforte. Torna a trovarmi per vedere i\nmiei progressi!")
          		  case 1:
/*<258>*/ 			switch (adventure_pouch_has(4 0x0004)) {
          			  case 0:
/*<278>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 277, 'param3': 32}
/*<277>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 260, 'param3': 13}
/*<260>*/ 				printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00000011>Uff... anf...\n<heroname>, ma quella che hai lì\nè <color yellow<pozione levafatica>coloroff>, vero?\nMe la daresti?\n[1-]Sì[2]No")
          				flw_261:
/*<261>*/ 				switch (choice(2)) {
          				  case 0:
/*<263>*/ 					printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x0000000b>Davvero?!\nGrazie!\nTi devo un favore!")
/*<266>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3092, 'param2': 7936, 'next': 271, 'param3': 13}
/*<271>*/ 					wait_frames(4)
/*<270>*/ 					set_camera(5, 0)
/*<267>*/ 					wait_frames(135)
/*<265>*/ 					make_actor_do_something(0, 0)
/*<279>*/ 					set_camera(-1, 0)
/*<280>*/ 					wait_frames(20)
/*<264>*/ 					printf(/* textboxtype: 1, unk: 0, line: 79 */ "<0x10009:0x00000010>Mamma mia!\nLa stanchezza è scomparsa!")
/*<268>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 269, 'param3': 13}
/*<269>*/ 					printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x00000012>Ahh...\nDi questo passo non diventerò\nmai un granché forte.\n[1-]Dipende\ndai tuoi sforzi[2-]Certo\nche puoi!")
/*<281>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 291, 'param3': 13}
/*<291>*/ 					switch (choice(2)) {
          					  case 0:
/*<292>*/ 						printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000009>Giusto!\nDevo solo impegnarmi.\nBasta stare qui a lamentarsi!")
          						flw_294:
/*<294>*/ 						printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00001800>Grazie, <heroname>.\nFarò del mio meglio per diventare più\nforte.\n\n<0x10009:0x00151800>Benissimo! Rimbocchiamoci le maniche\nallora! Torna a trovarmi, vedrai che\nprogressi.")
/*<295>*/ 						story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */] = true;
/*<213>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<293>*/ 						printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x00001609>Ah... capisco...\nBeh, se uno ci crede davvero tanto,\npuò forse ottenere grandi risultati.")
          						goto flw_294
          					}
          				  case 1:
/*<262>*/ 					printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x00000011>Oh, capisco...\nScusa, è stata una richiesta\nun po' egoista...")
/*<288>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': 3072, 'next': 287, 'param3': 13}
/*<287>*/ 					printf(/* textboxtype: 1, unk: 0, line: 73 */ "<0x10009:0x00000003>N‐non ti preoccupare!\nCe la faccio benissimo\nanche da solo!")
          				}
          			  case 1:
/*<275>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 274, 'param3': 32}
/*<274>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 276, 'param3': 13}
/*<276>*/ 				printf(/* textboxtype: 1, unk: 0, line: 74 */ "<0x10009:0x00000011>Uff... ranf...\nNon ce la faccio più...\n\n\nSe solo avessi <color red<una pozione in grado\ndi alleviare la fatica>coloroff>, forse potrei\ncontinuare un altro po'...")
/*<290>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 289, 'param3': 13}
/*<289>*/ 				printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00000003>Oh, amico!\nDevo davvero rimettermi\nin forma!\n\nMi sa che devo farcela\nsolo con le mie forze!")
          			}
          		}
          	  case 1:
/*<259>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 273, 'param3': 31}
/*<273>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 272, 'param3': 32}
/*<272>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': 6912, 'next': 254, 'param3': 13}
/*<254>*/ 		printf(/* textboxtype: 1, unk: 0, line: 70 */ "<0x10009:0x00000010>Uff... Anf...\nUeiii...\n\n\n<0x10009:0x00101600>Ehilà! <heroname>!\nBuona sera.\n\n\nChe cosa sto facendo?\nCome puoi vedere, mi sto allenando!\n\n\nNon riesco a sollevare nemmeno un\nbarile, perciò voglio migliorare. Voglio\ndiventare un po' più forte.\n\n<0x10009:0x00001711>Però mi vergogno, quindi lo faccio di\nnotte quando nessuno mi vede...")
/*<255>*/ 		story_flags[388 /* us: 805A9B0D 0x40, jp: 805ACD8D 0x40 */] = true;
/*<282>*/ 		switch (adventure_pouch_has(4 0x0004)) {
          		  case 0:
/*<284>*/ 			printf(/* textboxtype: 1, unk: 0, line: 76 */ "<0x10009:0x0000000b>Oh!\n<heroname>, ma quella che hai\nlì è <color yellow<pozione levafatica>coloroff>, vero?\nMe la daresti?\n[1-]Sì[2]No")
          			goto flw_261
          		  case 1:
/*<283>*/ 			printf(/* textboxtype: 1, unk: 0, line: 71 */ "Ahh... Se solo avessi <color red<una pozione\nin grado di alleviare la fatica>coloroff>, allora\nforse sarei in grado di continuare...")
/*<286>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 285, 'param3': 13}
/*<285>*/ 			printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00000003>Oh, amico!\nDevo davvero rimettermi\nin forma!\n\nMi sa che devo farcela\nsolo con le mie forze!")
          		}
          	}
          }

          void entrypoint_115_23() {
/*<530>*/ 	start()
/*<531>*/ 	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          	  case 0:
/*<680>*/ 		switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          		  case 0:
/*<681>*/ 			switch (story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */]) {
          			  case 0:
          				flw_534:
/*<534>*/ 				entrypoint_115_24();
          			  case 1:
/*<682>*/ 				printf(/* textboxtype: 1, unk: 0, line: 190 */ "<0x10009:0x00000008>Ancora tu, <heroname>!\nStanotte ho la mente occupata\na pensare a Grudia!\n\nSe hai bisogno di me, vieni a\ncercarmi durante il giorno.\nOra sparisci!")
          			}
          		  case 1:
          			goto flw_534
          		}
          	  case 1:
/*<532>*/ 		printf(/* textboxtype: 1, unk: 0, line: 193 */ "<0x10009:0x00000010>He he he...\nNon ho paura di Bado...\nOra la sua stanza appartiene\na me!")
          	}
          }

          void entrypoint_115_07() {
/*<298>*/ 	start()
/*<299>*/ 	switch (story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */]) {
          	  case 0:
/*<745>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 302, 'param3': 31}
/*<302>*/ 		switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
          		  case 0:
/*<304>*/ 			printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x00000002><heroname>!\nTi farò vedere quanto diventerò forte!\nNon crederai ai tuoi occhi!")
          		  case 1:
/*<300>*/ 			switch (adventure_pouch_has(4 0x0004)) {
          			  case 0:
/*<332>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 331, 'param3': 32}
/*<331>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 305, 'param3': 13}
/*<305>*/ 				printf(/* textboxtype: 1, unk: 0, line: 89 */ "<0x10009:0x00000010>Uff... anf...\n\n\n\nEhi <heroname>.\nNon è che mi daresti un po' di\n<color yellow<pozione levafatica>coloroff>?\n[1-]Certo[2]No")
          				flw_306:
/*<306>*/ 				switch (choice(2)) {
          				  case 0:
/*<308>*/ 					printf(/* textboxtype: 1, unk: 0, line: 92 */ "<0x10009:0x0000000b>Davvero?\nGrazie!\nLa prendo volentieri!")
/*<333>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3092, 'param2': 7936, 'next': 312, 'param3': 13}
/*<312>*/ 					wait_frames(4)
/*<311>*/ 					set_camera(5, 0)
/*<310>*/ 					wait_frames(135)
/*<309>*/ 					make_actor_do_something(0, 0)
/*<334>*/ 					set_camera(-1, 0)
/*<335>*/ 					wait_frames(20)
/*<345>*/ 					printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x00000010>Oooh! Mi sento rinvigorito!\nLa stanchezza è svanita!")
/*<347>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 346, 'param3': 13}
/*<346>*/ 					printf(/* textboxtype: 1, unk: 0, line: 94 */ "<0x10009:0x00000012>A volte però mi preoccupo.\nTemo che l'allenamento non\nsia efficace.\n\nPer quanto tempo dovrò allenarmi\nprima di diventare forte?\nChe ne dici, <heroname>?\n\nQuante flessioni devo fare\nsecondo te per diventare forte?\n\n[1-]Circa 1000[2-]Dipende")
/*<348>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3073, 'param2': 2048, 'next': 349, 'param3': 13}
/*<349>*/ 					switch (choice(2)) {
          					  case 0:
/*<350>*/ 						printf(/* textboxtype: 1, unk: 0, line: 95 */ "<0x10009:0x00000053>C‐così tante...?!\n<0x10009:0x00100e00>Capisco...\n\n\nLa via della forza è costellata\ndi difficoltà!")
          						flw_352:
/*<352>*/ 						printf(/* textboxtype: 1, unk: 0, line: 97 */ "<0x10009:0x00011600>Ci sono!\nDiventerò sicuramente fortissimo!\n<0x10009:0x00001800>Torna presto a trovarmi\ne vedrai!")
/*<353>*/ 						story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */] = true;
/*<354>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<351>*/ 						printf(/* textboxtype: 1, unk: 0, line: 96 */ "<0x10009:0x00000007>Non è una questione di numeri?\n... Capisco!\n\n\n<0x10009:0x00070800>Vuoi dire che devo continuare\nfinché perdo il conto, vero?")
          						goto flw_352
          					}
          				  case 1:
/*<307>*/ 					printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x00000011>Capisco...\nScusa la faccia tosta.")
/*<344>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 343, 'param3': 13}
/*<343>*/ 					printf(/* textboxtype: 1, unk: 0, line: 91 */ "Va bene!\nPer l'allenamento conterò\nsolo sulle mie forze!")
          				}
          			  case 1:
/*<330>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 329, 'param3': 32}
/*<329>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 303, 'param3': 13}
/*<303>*/ 				printf(/* textboxtype: 1, unk: 0, line: 74 */ "<0x10009:0x00000011>Uff... ranf...\nNon ce la faccio più...\n\n\nSe solo avessi <color red<una pozione in grado\ndi alleviare la fatica>coloroff>, forse potrei\ncontinuare un altro po'...")
/*<342>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 341, 'param3': 13}
/*<341>*/ 				printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00000003>No, no...\nNon è che posso sempre\nchiedere favori agli altri.\n\nDevo farcela solo con le mie\nforze!\n")
          			}
          		}
          	  case 1:
/*<301>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 328, 'param3': 31}
/*<328>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 327, 'param3': 32}
/*<327>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': 6912, 'next': 296, 'param3': 13}
/*<296>*/ 		printf(/* textboxtype: 1, unk: 0, line: 85 */ "<0x10009:0x00000010>Uff... ueiii...\nBuona serata, <heroname>.\n\n\n<0x10009:0x0c10ff00>Dall'ultima volta che abbiamo\nparlato, mi sono allenato\nmoltissimo, ma mi sa che\nsto per avere un collasso.\nForse sono troppo stanco!")
/*<297>*/ 		story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */] = true;
/*<336>*/ 		switch (adventure_pouch_has(4 0x0004)) {
          		  case 0:
/*<338>*/ 			printf(/* textboxtype: 1, unk: 0, line: 88 */ "<0x10009:0x0000000b>Ah!\n<heroname>, è <color yellow<pozione levafatica\n>coloroff>quella che hai lì con te?\n\nNon è che me ne daresti un po'?\n[1-]Certo[2]No")
          			goto flw_306
          		  case 1:
/*<337>*/ 			printf(/* textboxtype: 1, unk: 0, line: 86 */ "Ehi, <heroname>.\nNon è che avresti dell'altra\n<color red<<color yellow<pozione levafatica<color red<>coloroff>?")
/*<340>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 339, 'param3': 13}
/*<339>*/ 			printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00000003>No, no...\nNon è che posso sempre\nchiedere favori agli altri.\n\nDevo farcela solo con le mie\nforze!\n")
          		}
          	}
          }

          void entrypoint_115_24() {
/*<533>*/ 	start()
          	flw_58:
/*< 58>*/ 	switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          	  case 0:
/*< 61>*/ 		switch (story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */]) {
          		  case 0:
/*< 66>*/ 			printf(/* textboxtype: 1, unk: 0, line: 201 */ "")
          		  case 1:
/*<679>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 686, 'param3': 31}
/*<686>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 687, 'param3': 47}
/*<687>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 689, 'param3': 15}
/*<689>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 690, 'param3': 16}
/*<690>*/ 			set_camera(27, 0)
/*<829>*/ 			make_actor_do_something(4, 0)
/*<688>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 568, 'param3': 48}
/*<568>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3072, 'next': 59, 'param3': 13}
/*< 59>*/ 			printf(/* textboxtype: 1, unk: 0, line: 196 */ "<0x10009:0x00000002>Oi, <heroname>!\nHai consegnato la mia lettera?\n[1-]Veramente...[2-]Quale?")
/*< 60>*/ 			switch (choice(2)) {
          			  case 0:
/*< 62>*/ 				printf(/* textboxtype: 1, unk: 0, line: 197 */ "<0x10009:0x00111f1d>C‐cosa?!\nL'hai data alla voce del gabinetto...?!")
          				flw_64:
/*< 64>*/ 				printf(/* textboxtype: 1, unk: 0, line: 199 */ "<0x10009:0x00011f00>Ma ti avevo esplicitamente detto di\nnon dargliela!\nTe l'avrò ripetuto un miliardo\ndi volte...!\n<0x10009:0x001a1f17>Non sopporto gli idioti!\nChiunque ostacoli le vie del vero amore\nmerita di essere preso a calci da\nun solcanubi!\nLa nostra amicizia finisce qui!\nTi odio, <heroname>!")
/*<692>*/ 				{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 7936, 'next': 683, 'param3': 13}
/*<683>*/ 				{'type': 'type3', 'subType': 2, 'param1': 14, 'param2': 0, 'next': 691, 'param3': 14}
/*<691>*/ 				printf(/* textboxtype: 1, unk: 0, line: 200 */ "<0x10009:0x00001f18>Nooooooooooo...!!!")
/*<697>*/ 				{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 256, 'next': 698, 'param3': 15}
/*<698>*/ 				wait_frames(1)
/*<696>*/ 				set_camera(28, 0)
/*<695>*/ 				{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 1024, 'next': 693, 'param3': 13}
/*<693>*/ 				{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 0, 'next': 65, 'param3': 14}
/*< 65>*/ 				story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */] = true;
/*<707>*/ 				story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
/*<708>*/ 				story_flags[771 /* us: 805A9B2A 0x08, jp: 805ACDAA 0x08 */] = true;
/*<694>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*< 63>*/ 				printf(/* textboxtype: 1, unk: 0, line: 198 */ "<0x10009:0x00151f12>M‐ma... tu!\nTi ha dato di volta il cervello...?!\n\n\n<0x10009:0x00111b00>Alla voce del gabinetto...?\nDavvero l'hai data alla voce chiusa\nnel gabinetto?")
          				goto flw_64
          			}
          		}
          	  case 1:
/*<821>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 113, 'param3': 31}
/*<113>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<541>*/ 			switch (story_flags[664 /* us: 805A9B1F 0x40, jp: 805ACD9F 0x40 */]) {
          			  case 0:
/*<570>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 6912, 'next': 544, 'param3': 13}
/*<544>*/ 				printf(/* textboxtype: 1, unk: 0, line: 192 */ "<0x10009:0x0000000f>Ahhh...\nFinalmente, <color blue<Grudia>coloroff> è a\nconoscenza dei miei sentimenti.\n<0x10008:0xffcd><0x10009:0x00011f00>Ora cosa dovrei fare...?\nSento le farfalle nello stomaco...")
          			  case 1:
/*<567>*/ 				{'type': 'type3', 'subType': 4, 'param1': 24, 'param2': 6912, 'next': 542, 'param3': 13}
/*<542>*/ 				printf(/* textboxtype: 1, unk: 0, line: 191 */ "<0x10009:0x00000013>Cosa?!\nHai dato la lettera a <color blue<Grudia>coloroff>, la nostra\ncompagna di corso...?!\n\n<0x10009:0x00012500>Oh, per mille nubi!!!\nE... e ora che faccio?\nForse dovrei andare a sentire\ncosa mi risponde...\n<0x10008:0xffcd><0x10009:0x00011f00>Ah, ma... che imbarazzo...")
/*<543>*/ 				story_flags[664 /* us: 805A9B1F 0x40, jp: 805ACD9F 0x40 */] = true;
          			}
          		  case 1:
/*<566>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 40, 'param3': 13}
/*< 40>*/ 			printf(/* textboxtype: 1, unk: 0, line: 189 */ "<0x10009:0x00000002>Sai cosa fare, <heroname>.\nConsegna la lettera alla nostra\ncompagna di corso col <color red<cappello tondo>coloroff>.\n\n<0x10009:0x00011b00>E non portarla “per sbaglio\" a quel\n<color red<tizio nel gabinetto>coloroff>!\nNon ti permettere, sai!")
          		}
          	}
          }

          void entrypoint_115_25() {
/*<239>*/ 	start()
/*<243>*/ 	switch (story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */]) {
          	  case 0:
/*<248>*/ 		switch (story_flags[393 /* us: 805A9B0C 0x08, jp: 805ACD8C 0x08 */]) {
          		  case 0:
/*<250>*/ 			switch (temp_flags[53 /* 0x7 20 */]) {
          			  case 0:
/*<251>*/ 				printf(/* textboxtype: 1, unk: 0, line: 69 */ "Uoooh...!")
          			  case 1:
/*<249>*/ 				printf(/* textboxtype: 1, unk: 0, line: 68 */ "3985... 3986...\n3987... 3988...")
/*<844>*/ 				temp_flags[53 /* 0x7 20 */] = true;
          			}
          		  case 1:
/*<245>*/ 			switch (temp_flags[53 /* 0x7 20 */]) {
          			  case 0:
/*<247>*/ 				printf(/* textboxtype: 1, unk: 0, line: 67 */ "Nuoooh... gunuoooh...")
          			  case 1:
/*<244>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10006:0xfecd>55... 56... 57...")
/*<843>*/ 				temp_flags[53 /* 0x7 20 */] = true;
          			}
          		}
          	  case 1:
/*<242>*/ 		switch (temp_flags[53 /* 0x7 20 */]) {
          		  case 0:
/*<246>*/ 			printf(/* textboxtype: 1, unk: 0, line: 65 */ "Guh... goh... goh...")
          		  case 1:
/*<240>*/ 			printf(/* textboxtype: 1, unk: 0, line: 64 */ "<0x10006:0xfccd>5... 6... 7...")
/*<241>*/ 			temp_flags[53 /* 0x7 20 */] = true;
          		}
          	}
          }

          void entrypoint_115_08() {
/*<313>*/ 	start()
/*<314>*/ 	switch (story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */]) {
          	  case 0:
/*<326>*/ 		switch (zone_temp_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*<321>*/ 			printf(/* textboxtype: 1, unk: 0, line: 103 */ "<0x10009:0x0015180a>Potrei continuare a oltranza!\nPresto sarò in grado\ndi sollevare una botte\ncon un solo dito.")
          		  case 1:
/*<322>*/ 			printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x0015180a>Grunt...\nPotrei continuare senza problemi...")
          		}
          	  case 1:
/*<323>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 315, 'param3': 31}
/*<315>*/ 		printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x0015190a>Grunt...\nPotrei continuare per sempre!\n\n\n<0x10009:0x00011600>... Ehi <heroname>!\nCaschi a fagiolo.\nVolevo chiederti una cosa.\n\n<0x10009:0x00071800>L'altro giorno ho provato a sollevare\ndelle botti. Ce l'ho fatta con una mano\nsola!\n\n<0x10009:0x00001600>Questo significa che ho messo su un\nsacco di muscoli!\n\n\nChe ne pensi, <heroname>?\nSono diventato più forte?\n[1-]Troppo[2-]Certo")
/*<317>*/ 		switch (choice(2)) {
          		  case 0:
/*<319>*/ 			printf(/* textboxtype: 1, unk: 0, line: 101 */ "<0x10009:0x00071809>Eh? Secondo me mi stai\nlusingando un po' troppo. Ma...\nti ascolto con grande piacere!")
          			flw_320:
/*<320>*/ 			printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x00001600>Tutto quello che ho ottenuto è merito\ntuo, <heroname>.\n\n\n<0x10009:0x00011900>Se tu non mi avessi incoraggiato mi\nsarei fatto prendere dallo sconforto.\n\n\n<0x10009:0x0007180b>Grazie mille, <heroname>!")
/*<324>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
/*<316>*/ 			story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */] = true;
/*<325>*/ 			give_gratitude_crystals();
          		  case 1:
/*<318>*/ 			printf(/* textboxtype: 1, unk: 0, line: 100 */ "<0x10009:0x0000180b>Davvero? Grazie!\nSono felicissimo.")
          			goto flw_320
          		}
          	}
          }

          void entrypoint_115_09() {
/*<175>*/ 	start()
/*<212>*/ 	switch (story_flags[383 /* us: 805A9B0D 0x02, jp: 805ACD8D 0x02 */]) {
          	  case 0:
/*<215>*/ 		switch (story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */]) {
          		  case 0:
/*<788>*/ 			switch (temp_flags[11 /* 0x0 08 */]) {
          			  case 0:
/*<789>*/ 				printf(/* textboxtype: 1, unk: 0, line: 125 */ "<0x10009:0x000b0e09>Ehi <heroname>!\nGrazie per aver aiutato mia sorella.\nNon dimenticherò quello che hai fatto\nper me!")
          			  case 1:
/*<772>*/ 				entrypoint_115_26();
          			}
          		  case 1:
/*<742>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 731, 'param3': 31}
/*<731>*/ 			switch (story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */]) {
          			  case 0:
/*<214>*/ 				printf(/* textboxtype: 1, unk: 0, line: 121 */ "<0x10009:0x000b0e09><heroname>!\nMia sorella è tornata a casa\nsana e salva!\n\n<0x10009:0x000a0400>Ahh! Che sollievo!\nEro così preoccupato per quello\nche le è successo!\n\n<0x10009:0x000b0400>Tutto grazie a te, <heroname>.\nGrazie ancora!")
/*<216>*/ 				story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */] = true;
/*<787>*/ 				temp_flags[11 /* 0x0 08 */] = true;
/*<732>*/ 				give_gratitude_crystals();
          			  case 1:
/*<734>*/ 				printf(/* textboxtype: 1, unk: 0, line: 122 */ "<0x10009:0x000b0e09><heroname>!\nMia sorella è tornata sana e salva!\n<0x10009:0x000a0400>Che sollievo!\nEro veramente in pensiero!\n\nCosa?! Hai dato a mia sorella la\nmedicina per il solcanubi?<pause 20> \n<0x10009:0x000b0400>Grazie davvero!\nNon ho nient'altro da darti come\nricompensa...\nPrendi questo!")
/*<738>*/ 				switch (is_adventure_pouch_full()) {
          				  case 0:
/*<739>*/ 					switch (is_item_check_full()) {
          					  case 0:
/*<740>*/ 						printf(/* textboxtype: 1, unk: 0, line: 123 */ "<0x10009:0x000b0a05>Pensavo di darti questa <color yellow<ampolla>coloroff> ma...\nvedo che la tua borsa è piena e hai\nriempito anche il deposito!\n\nSvuota la tua borsa o liberati di qualche\noggetto consegnato deposito e torna da\nme. Te la conservo io!")
          					  case 1:
          						flw_735:
/*<735>*/ 						story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */] = true;
/*<736>*/ 						story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */] = true;
/*<733>*/ 						give_item(153 0x99);
/*<786>*/ 						temp_flags[11 /* 0x0 08 */] = true;
/*<812>*/ 						printf(/* textboxtype: 1, unk: 0, line: 124 */ "<0x10009:0x000b0400>Ma è una cosa che si può usare in tanti\nmodi differenti!\nGrazie davvero!")
/*<813>*/ 						give_gratitude_crystals();
          					}
          				  case 1:
          					goto flw_735
          				}
          			}
          		}
          	  case 1:
/*<176>*/ 		switch (story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */]) {
          		  case 0:
/*<741>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 183, 'param3': 31}
/*<183>*/ 			switch (story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */]) {
          			  case 0:
/*<200>*/ 				switch (story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */]) {
          				  case 0:
/*<204>*/ 					switch (adventure_pouch_has(5 0x0005)) {
          					  case 0:
/*<205>*/ 						printf(/* textboxtype: 1, unk: 0, line: 120 */ "<0x10009:0x000b0409>Cosa c'è ora, <heroname>?\nPorta le <color yellow<spore di fungo >coloroff>a mia\nsorella il prima possibile!\n<0x10009:0x000a0400>Conto su di te!")
          					  case 1:
/*<201>*/ 						printf(/* textboxtype: 1, unk: 0, line: 118 */ "<0x10009:0x000b0406>Eh? Che ne hai fatto delle <color yellow<spore\ndi fungo>coloroff>?\nNon gliele hai ancora date?\n\n<0x10009:0x000a0400>Beh, se hai perso le <color yellow<spore di fungo >coloroff>che\nti ho dato, allora <color red<raccogline altre dai\nfunghi>coloroff>.\nConto su di te <heroname>!")
          					}
          				  case 1:
/*<220>*/ 					switch (story_flags[395 /* us: 805A9B0C 0x80, jp: 805ACD8C 0x80 */]) {
          					  case 0:
/*<221>*/ 						printf(/* textboxtype: 1, unk: 0, line: 119 */ "<0x10009:0x000b0409>Oh! Hai un po' di spazio nella tua\nborsa. Bene allora, prendi queste.\n\n\n<color yellow<<0x10009:0x000a0400>>coloroff>Sono delle<color yellow< spore di fungo>coloroff>.\nGuariranno la ferita del\nsolcanubi.")
          						flw_231:
/*<231>*/ 						switch (is_adventure_pouch_full()) {
          						  case 0:
/*<228>*/ 							printf(/* textboxtype: 1, unk: 0, line: 116 */ "<0x10009:0x0000050d>Ah, hai troppe cose!\n<0x10009:0x00000400>Fai un po' di spazio nella\ntua borsa e torna da me!")
/*<229>*/ 							story_flags[395 /* us: 805A9B0C 0x80, jp: 805ACD8C 0x80 */] = true;
          						  case 1:
/*<746>*/ 							story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */] = true;
/*<230>*/ 							give_item(55 0x37);
/*<747>*/ 							story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */] = false;
/*<232>*/ 							printf(/* textboxtype: 1, unk: 0, line: 117 */ "<0x10009:0x000b0404>Con queste il suo solcanubi guarirà\nin un battibaleno. Così potrà\nritornare a casa!\n<0x10009:0x00000c00>Portale a mia sorella!\n<0x10009:0x00000400>Potrai tenere l'<color red<ampolla>coloroff>\nquando le avrai dato il contenuto!\n\nConto su di te <heroname>!")
/*<227>*/ 							story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */] = true;
          						}
          					  case 1:
          						flw_199:
/*<199>*/ 						printf(/* textboxtype: 1, unk: 0, line: 115 */ "<0x10009:0x000b050d>Cosa!?\nHai visto mia sorella!?\nIl suo solcanubi è ferito e non può\nvolare?!\n<0x10009:0x000a0c00>Ma è terribile!\nTi prego, portale questo il prima\npossibile!\n\n<color yellow<<0x10009:0x00000400>>coloroff>Sono delle <color yellow<spore di fungo>coloroff>. \nCon queste il solcanubi guarirà.")
          						goto flw_231
          					}
          				}
          			  case 1:
/*<184>*/ 				printf(/* textboxtype: 1, unk: 0, line: 112 */ "<0x10009:0x000a0c12>Oh, cielo...\nSono preoccupato...\nMolto preoccupato!\n\nLe faccio sempre portare un'<color red<ampolla>coloroff>\ndi medicina per i solcanubi per stare\ntranquillo nel caso in cui dovesse\nsuccedere qualcosa di brutto.\nMa giusto oggi è uscita dimenticandosi\ndi portarsela dietro!")
/*<835>*/ 				make_actor_do_something(0, 0)
/*<836>*/ 				printf(/* textboxtype: 1, unk: 0, line: 113 */ "<0x10009:0x000d0400>Mia sorella era incuriosita da\nquell'<color blue<isola che ricorda una roulette>coloroff>,\nquindi penso si sia diretta a <color red<sud‐ovest>coloroff>.")
/*<837>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 838, 'param3': 17}
/*<838>*/ 				printf(/* textboxtype: 1, unk: 0, line: 114 */ "<0x10009:0x00010400>Senti, potresti provare a cercarla,\n<heroname>?")
          			}
          		  case 1:
/*<202>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 177, 'param3': 31}
/*<177>*/ 			printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x000a0c12>Oh, cielo...\nSono preoccupato, molto\npreoccupato...\n[1-]Che c'è?[2-]Calmati")
/*<178>*/ 			switch (choice(2)) {
          			  case 0:
/*<179>*/ 				printf(/* textboxtype: 1, unk: 0, line: 106 */ "<0x10009:0x00000411>Ehi, <heroname>.\nHai un momentino per me?\nGrazie.")
          				flw_181:
/*<181>*/ 				printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x00000400>La <color red<mia sorellina>coloroff> è andata a fare un giro\nper i cieli, ma non è ancora tornata.\n\n\nSi è fatto tardi, così sono andato\na cercarla dappertutto...\nMa non sono riuscito a trovarla!\n\n<0x10009:0x000b0500>E se le fosse successo qualcosa?\nSono preoccupatissimo!")
/*<198>*/ 				switch (story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */]) {
          				  case 0:
/*<219>*/ 					story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */] = true;
          					goto flw_199
          				  case 1:
/*<197>*/ 					printf(/* textboxtype: 1, unk: 0, line: 109 */ "<0x10009:0x00000411>Ehi <heroname>,\nti dispiacerebbe aiutarmi a cercarla?")
/*<831>*/ 					make_actor_do_something(0, 0)
/*<832>*/ 					printf(/* textboxtype: 1, unk: 0, line: 110 */ "<0x10009:0x000d0400>Ultimamente era incuriosita da\nquell'<color blue<isola che ricorda una roulette>coloroff>,\nquindi penso possa essersi diretta\na <color red<sud‐ovest>coloroff>.")
/*<833>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 834, 'param3': 17}
/*<834>*/ 					printf(/* textboxtype: 1, unk: 0, line: 111 */ "<0x10009:0x00010400>Conto su di te, <heroname>!")
/*<182>*/ 					story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */] = true;
          				}
          			  case 1:
/*<180>*/ 				printf(/* textboxtype: 1, unk: 0, line: 107 */ "<0x10009:0x000b0500>Non riesco a calmarmi!\n... Mi dispiace.\nNon c'è ragione di sbraitarti\nin faccia.")
          				goto flw_181
          			}
          		}
          	}
          }

          void entrypoint_115_26() {
/*<762>*/ 	start()
/*<765>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<766>*/ 		printf(/* textboxtype: 1, unk: 0, line: 135 */ "<0x10009:0x000b0409>Mi hanno detto che l'Isola\ndella Dea è svanita!!!\nMa è terribile...\n\n<0x10009:0x000a0400>Sta sicuramente per succedere\nqualcosa di brutto.")
          		flw_790:
/*<790>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
          		  case 1:
/*<791>*/ 			switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          			  case 0:
/*<792>*/ 				printf(/* textboxtype: 1, unk: 0, line: 138 */ "<0x10009:0x00010400><color blue<Dacio>coloroff> ha detto di aver trovato un\n<color red<insetto raro>coloroff>. Era contentissimo e stava\nandando verso Cumulonembo.\n\nCredo proprio che non passerà\nl'esame neanche la prossima volta,\nse continua così!")
          			  case 1:
/*<767>*/ 				switch (story_flags[811 /* us: 805A9B31 0x08, jp: 805ACDB1 0x08 */]) {
          				  case 0:
/*<771>*/ 					printf(/* textboxtype: 1, unk: 0, line: 137 */ "<0x10009:0x00010400>Quel <color blue<Dacio >coloroff>ha detto che sta\ncollezionando degli insetti su un'isola\nall'<color red<interno di Cumulonembo >coloroff>per creare\nun giardino entomologico!")
          				  case 1:
/*<770>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 768, 'param3': 31}
/*<768>*/ 					printf(/* textboxtype: 1, unk: 0, line: 136 */ "<0x10009:0x000a0a00>Ehi, tu hai un compagno di corso\nche si chiama <color blue<Dacio>coloroff>, giusto?\n\n\nHa detto di aver scoperto un luogo\nideale per l'allevamento di insetti\nall'<color red<interno di Cumulonembo>coloroff>.\nQuel tipo è proprio strambo!\n<0x10009:0x000b0400>Mi chiedo cosa abbia davvero\nintenzione di fare quando parla\ndi giardino entomologico...")
/*<769>*/ 					story_flags[811 /* us: 805A9B31 0x08, jp: 805ACDB1 0x08 */] = true;
          				}
          			}
          		}
          	  case 1:
/*<810>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<811>*/ 			printf(/* textboxtype: 1, unk: 0, line: 134 */ "<0x10009:0x00000001>Poco fa mi è sembrato di sentire un\ngran fracasso, come di una frana...\nChe sia successo qualcosa?")
          			goto flw_790
          		  case 1:
/*<774>*/ 			switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          			  case 0:
/*<775>*/ 				printf(/* textboxtype: 1, unk: 0, line: 133 */ "<0x10009:0x00000001>Ma hai combinato qualcosa lì in piazza,\nprima?! Ho la sensazione che il cielo si\nsia rischiarato, o mi sbaglio?!")
          				goto flw_790
          			  case 1:
/*<773>*/ 				switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          				  case 0:
/*<764>*/ 					printf(/* textboxtype: 1, unk: 0, line: 132 */ "<0x10009:0x000a0405>Mi chiedo perché mai le farfalle si\nradunino in una piazza vuota... lo\ntrovo estremamente strano!")
          					goto flw_790
          				  case 1:
/*<841>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*<842>*/ 						printf(/* textboxtype: 1, unk: 0, line: 131 */ "<0x10009:0x00000001>Ciao, <heroname>!\nVai sempre in giro, pieno di cose\nda fare, eh!")
          						goto flw_790
          					  case 1:
/*<779>*/ 						switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          						  case 0:
/*<784>*/ 							switch (story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */]) {
          							  case 0:
/*<783>*/ 								printf(/* textboxtype: 1, unk: 0, line: 129 */ "<0x10009:0x00000001>Ehi, <heroname>!\nUltimamente non ho visto in giro quei\ntre bulli...\n\nNon sono stati promossi alla classe\nsuperiore e forse hanno imparato una\nlezione, magari si sono rinchiusi\nnelle loro stanze a studiare!")
          							  case 1:
/*<785>*/ 								printf(/* textboxtype: 1, unk: 0, line: 130 */ "<0x10009:0x00000001>Ehi, <heroname>! Sai, sono\nandato anche io a dare un'occhiata\nall'Isola della roulette, visto che mia\nsorella ne era così entusiasta!\nLa persona che sta lì dice che il <color red<disco\ndella roulette>coloroff> è caduto oltre le nubi...\nCredo che dovrà rassegnarsi,\nallora, se è davvero caduto giù!")
          							}
          						  case 1:
/*<776>*/ 							switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          							  case 0:
/*<782>*/ 								printf(/* textboxtype: 1, unk: 0, line: 128 */ "<0x10009:0x000a0405>Hai visto quel fascio luminoso che è\nvenuto fuori dalla Torre della luce e\npunta verso Cumulonembo?!\n\nNon so, è come se volesse suggerire\ndi andare verso Cumulonembo...")
          							  case 1:
/*<840>*/ 								switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          								  case 0:
          									flw_780:
/*<780>*/ 									printf(/* textboxtype: 1, unk: 0, line: 126 */ "<0x10009:0x00000001>Ehi, <heroname>!\nNon vedo in giro Zelda da un po' di\ntempo, che è successo?")
          								  case 1:
/*<778>*/ 									switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          									  case 0:
/*<781>*/ 										printf(/* textboxtype: 1, unk: 0, line: 127 */ "<0x10009:0x00000001>Ehi <heroname>!\n\n\n\n<0x10009:0x000a0400><color red<Due torri del vento>coloroff>, dici?!\n<pause 30>Mi spiace, ma a me gli indovinelli e\ncose del genere non piacciono per\nnulla... Perché non vai da un <color red<indovino>coloroff>?")
          									  case 1:
/*<777>*/ 										switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          										  case 0:
          											goto flw_780
          										  case 1:
/*<763>*/ 											printf(/* textboxtype: 1, unk: 0, line: 125 */ "<0x10009:0x000b0e09>Ehi <heroname>!\nGrazie per aver aiutato mia sorella.\nNon dimenticherò quello che hai fatto\nper me!")
          										}
          									}
          								}
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_115_27() {
/*<795>*/ 	start()
/*<816>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<818>*/ 		printf(/* textboxtype: 1, unk: 0, line: 232 */ "<0x10009:0x000c0401>Hai sentito?\nL'Isola della Dea è caduta!\n<pause 30>Ne succedono di cose tristi! <0x10009:0x00110e00>\nMa io...\nRicordo bene il messaggio che ho\nricevuto dalla Dea. Mi disse che, anche\nin sua assenza, avrei dovuto essere\nforte e continuare ad andare avanti.")
/*<819>*/ 		switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          		  case 0:
/*<820>*/ 			printf(/* textboxtype: 1, unk: 0, line: 233 */ "<0x10009:0x000c040b><0x10008:0xfecd>E poi io ho già la mia Dea...")
          		  case 1:
          		}
          	  case 1:
/*<815>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<817>*/ 			printf(/* textboxtype: 1, unk: 0, line: 231 */ "<0x10009:0x00001101>Ehi, <heroname>!\nTi dico una cosa, ma non devi dirla\na nessuno...\n<0x10009:0x000c0400>Prima, sono uscito per fare due passi...\ne da sotto l'Isola della Dea sono\nsbucate delle misteriose rovine.\n<0x10009:0x00110e00>Ma che caspita sta succedendo\na Oltrenuvola?!")
          		  case 1:
/*<702>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<703>*/ 				printf(/* textboxtype: 1, unk: 0, line: 229 */ "<0x10009:0x00000005>Ehi <heroname>!\nUltimamente ti vedo bello ottimista.\n\n\n<0x10009:0x0000040b>Questo è lo spirito giusto! <pause 20>\nZelda tornerà a casa prima che tu te ne\nrenda conto. Devi solo crederci e\nsperare con tutte le tue forze!")
          			  case 1:
/*<700>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<701>*/ 					printf(/* textboxtype: 1, unk: 0, line: 230 */ "<0x10009:0x00000001>Ehi <heroname>!\nCome va?\n\n\n<0x10009:0x000c1400>Cosa?! La Triforza nascosta\ndalla Dea?\n\n\n<0x10009:0x00101100>Ehm, non ne so granché...\n\n\n\n<0x10009:0x00081400>Se ti interessa questo genere di\ncose, dovresti provare a chiedere\na qualche maestro.")
          				  case 1:
/*<663>*/ 					switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          					  case 0:
/*<662>*/ 						printf(/* textboxtype: 1, unk: 0, line: 229 */ "<0x10009:0x00000005>Ehi <heroname>!\nUltimamente ti vedo bello ottimista.\n\n\n<0x10009:0x0000040b>Questo è lo spirito giusto! <pause 20>\nZelda tornerà a casa prima che tu te ne\nrenda conto. Devi solo crederci e\nsperare con tutte le tue forze!")
          					  case 1:
/*<661>*/ 						switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          						  case 0:
/*<660>*/ 							printf(/* textboxtype: 1, unk: 0, line: 228 */ "<0x10009:0x00000001>Ehi <heroname>!\nCome stai?\nTi senti un po' meglio, spero.\n\n<0x10009:0x00091400>Sai, anch'io ho i miei problemi.\nMa di fronte alla gente mi faccio forza.\n\n\n<0x10009:0x00110400>È un buon modo per liberarsi dalla\ntristezza, sai?\nSi dovrebbe vivere tutta la vita\nfacendosi forza!")
          						  case 1:
/*< 90>*/ 							printf(/* textboxtype: 1, unk: 0, line: 227 */ "<0x10009:0x00000001>Ehi <heroname>!\nSei stato promosso finalmente!\nQuella divisa ti sta benissimo!\n\n<0x10009:0x00101100>Ma bando alle ciance...\nZelda è scomparsa e io non riesco\nancora a crederci...\n\n<0x10009:0x000c1400>Tu e lei siete stati sempre così amici.\nDevi essere preoccupatissimo!\n\n\n<0x10009:0x00081400>Ma ho la sensazione che Zelda stia\nbene! Devi solo sperare e aspettare\nche ritorni a casa!")
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_115_10() {
/*<185>*/ 	start()
/*<186>*/ 	switch (story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */]) {
          	  case 0:
/*<206>*/ 		switch (adventure_pouch_has(5 0x0005)) {
          		  case 0:
/*<845>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 195, 'param3': 31}
/*<195>*/ 			switch (story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */]) {
          			  case 0:
/*<207>*/ 				printf(/* textboxtype: 1, unk: 0, line: 149 */ "<0x10009:0x0000000b>Oh! <color yellow<Spore di fungo>coloroff>!\nChe sollievo!\nMi hai salvata!\n[1-]Ecco a te[2]Non te\nle do")
          				flw_208:
/*<208>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_210:
/*<210>*/ 					printf(/* textboxtype: 1, unk: 0, line: 151 */ "<0x10009:0x000b0409>Grazie!\nOra posso curare la ferita\ndel mio solcanubi!")
/*<607>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 610, 'param3': 47}
/*<610>*/ 					{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 224, 'param3': 15}
/*<224>*/ 					make_actor_do_something(0, 0)
/*<647>*/ 					wait_frames(1)
/*<646>*/ 					{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 256, 'next': 234, 'param3': 15}
/*<234>*/ 					set_camera(7, 0)
/*<235>*/ 					{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': -256, 'next': 608, 'param3': 13}
/*<608>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 236, 'param3': 48}
/*<236>*/ 					wait_frames(45)
/*<233>*/ 					printf(/* textboxtype: 1, unk: 0, line: 152 */ "<0x10009:0x00000004>Con queste il solcanubi si sentirà\nsubito meglio!")
/*<237>*/ 					wait_frames(30)
/*<581>*/ 					make_actor_do_something(1, 0)
/*<609>*/ 					set_camera(24, 0)
/*<238>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 1280, 'next': 222, 'param3': 13}
/*<222>*/ 					printf(/* textboxtype: 1, unk: 0, line: 153 */ "<0x10009:0x00000009>Pensavo fossimo spacciati.\nSei stato di grandissimo aiuto.\n\n\nHai salvato la mia vita e quella del\nmio solcanubi!\nGrazie!")
/*<225>*/ 					give_gratitude_crystals();
/*<223>*/ 					printf(/* textboxtype: 1, unk: 0, line: 154 */ "<0x10009:0x00000004>Benissimo, ce ne andiamo.\nCi rivediamo al villaggio, allora!")
/*<615>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 582, 'param3': 47}
/*<582>*/ 					make_actor_do_something(2, 0)
/*<613>*/ 					set_camera(25, 0)
/*<617>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 583, 'param3': 17}
/*<583>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 40, 'next': 616, 'param3': 48}
/*<616>*/ 					make_actor_do_something(3, 0)
/*<211>*/ 					story_flags[383 /* us: 805A9B0D 0x02, jp: 805ACD8D 0x02 */] = true;
/*<823>*/ 					story_flags[838 /* us: 805A9B32 0x40, jp: 805ACDB2 0x40 */] = true;
/*<614>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				  case 1:
/*<209>*/ 					printf(/* textboxtype: 1, unk: 0, line: 150 */ "<0x10009:0x00001113>Cattivo!")
          				}
          			  case 1:
/*<730>*/ 				printf(/* textboxtype: 1, unk: 0, line: 144 */ "<0x10009:0x0000050b>Ehi! Mi daresti le tue spore di fungo\nper farlo guarire?\n[1-]Sì[2]No")
          				goto flw_208
          			}
          		  case 1:
/*<226>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 196, 'param3': 31}
/*<196>*/ 			printf(/* textboxtype: 1, unk: 0, line: 148 */ "<color red<<0x10009:0x00000001><color red<Il mio fratellone ha una medicina per\nsolcanubi<color red<.\n>coloroff>Vallo a cercare.\n\nIo ti aspetto qui, devo\nrincuorare il mio solcanubi.")
          		}
          	  case 1:
/*<203>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 188, 'param3': 31}
/*<188>*/ 		printf(/* textboxtype: 1, unk: 0, line: 139 */ "<0x10009:0x0000050b>Oh, guarda chi si vede!\n<heroname>!\nChe bello incontrarti!\n\n<0x10009:0x00120200>Il mio solcanubi è rimasto ferito\nmentre stavo facendo un giro,\ne ora non può più volare.\n\n<0x10009:0x00011500>Sono riuscita a effettuare un\natterraggio d'emergenza, ma ora\nnon so come tornare a casa.\n\n<0x10009:0x00121500>Insomma, non posso tornare\na casa finché non sarò in grado\ndi curare la ferita del mio solcanubi.\n\n<color red<Ho bisogno di una medicina.>coloroff>\nOvviamente, una medicina per esseri\numani non va bene. Ci vuole <color red<una\nmedicina per solcanubi>coloroff>.\nSì, <heroname>,<0x10009:0x00150200> mi serve il tuo\naiuto. Mi procureresti una medicina\nper solcanubi?\n[1-]Certo[2-]Non ora")
/*<189>*/ 		switch (choice(2)) {
          		  case 0:
/*<190>*/ 			printf(/* textboxtype: 1, unk: 0, line: 140 */ "<0x10009:0x000b0409>Grazie!\nSei ineguagliabile.")
          			flw_192:
/*<192>*/ 			printf(/* textboxtype: 1, unk: 0, line: 142 */ "<color red<Il mio fratellone ha una medicina per\nsolcanubi.>coloroff>\nVallo a cercare.\n\nCredo sia molto preoccupato.\nSecondo me se ne sta <color red<da qualche parte\nnella piazza di Oltrenuvola >coloroff>ad\nattendere il mio ritorno.")
/*<727>*/ 			story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */] = true;
/*<725>*/ 			switch (adventure_pouch_has(5 0x0005)) {
          			  case 0:
/*<726>*/ 				printf(/* textboxtype: 1, unk: 0, line: 143 */ "<0x10009:0x00090509>Ma hai la medicina, allora!\nPotevi dirmelo! Mi servono giusto delle\n<color yellow<spore di fungo >coloroff>per farlo guarire!\n\nMe le daresti?\n[1-]Sì[2]No")
/*<728>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_210
          				  case 1:
/*<737>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 4352, 'next': 729, 'param3': 13}
/*<729>*/ 					printf(/* textboxtype: 1, unk: 0, line: 145 */ "No? Beh, pazienza...\nPotresti almeno andare da mio\nfratello e dirgli che lo aspetto qui?")
          				}
          			  case 1:
/*<187>*/ 				switch (story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */]) {
          				  case 0:
/*<193>*/ 					printf(/* textboxtype: 1, unk: 0, line: 146 */ "Eh? Hai già parlato con lui?\nBene, allora è tutto più facile.")
          					flw_194:
/*<194>*/ 					printf(/* textboxtype: 1, unk: 0, line: 147 */ "Io ti aspetto qui, devo\nrincuorare il mio solcanubi.\nConto su di te. Grazie!")
          				  case 1:
          					goto flw_194
          				}
          			}
          		  case 1:
/*<191>*/ 			printf(/* textboxtype: 1, unk: 0, line: 141 */ "<0x10009:0x000c1513>Che... crudele che sei!\n\n\n\n<0x10009:0x000b0409>... Sì, scherzo. Certo che\nscherzo, come no...")
          			goto flw_192
          		}
          	}
          }

          void entrypoint_115_28() {
/*<797>*/ 	start()
/*<805>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<806>*/ 		printf(/* textboxtype: 1, unk: 0, line: 226 */ "<0x10009:0x000c0456>Mi chiedo cosa sia accaduto fuori...\nMi è sembrato di sentire un gran\nbaccano!")
          	  case 1:
/*<807>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
          			flw_86:
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 0, line: 223 */ "<0x10009:0x00000001>Ciao <heroname>.\nSai, ultimamente stai diventando molto\npiù interessante. Quella uniforme da\ncavaliere ti sta davvero bene.\nSembri proprio un tipo\naffidabile.")
          		  case 1:
/*<802>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<804>*/ 				printf(/* textboxtype: 1, unk: 0, line: 225 */ "<0x10009:0x00080e06>Cooosa?! Ora sei in grado di eseguire\nl'attacco avvitato?!\n\n\n<0x10009:0x00080909>Incredibile!!!<pause 30>\n<0x10009:0x000c0400>Beh, comunque di certo anche Sparvio\nè in grado di eseguirlo!")
          			  case 1:
/*<801>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<803>*/ 					printf(/* textboxtype: 1, unk: 0, line: 224 */ "<0x10009:0x00000006>Mmh?! Triforza, hai detto?<pause 30>\nDi che si tratta?")
          				  case 1:
          					goto flw_86
          				}
          			}
          		}
          	}
          }

          void entrypoint_115_11() {
/*<217>*/ 	start()
/*<759>*/ 	switch (story_flags[1082 /* us: 805A9B53 0x01, jp: 805ACDD3 0x01 */]) {
          	  case 0:
/*<704>*/ 		switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          		  case 0:
/*<705>*/ 			printf(/* textboxtype: 1, unk: 0, line: 162 */ "<0x10009:0x00000001>Oh, <heroname>.\nL'Isola della Dea è svanita!\n\n\n<0x10009:0x00001513>Era un posto dove i solcanubi amavano\nriposare.")
          		  case 1:
/*<808>*/ 			switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          			  case 0:
/*<809>*/ 				printf(/* textboxtype: 1, unk: 0, line: 161 */ "<0x10009:0x00000013>Hai sentito che scossone?!\nMi chiedo cosa sia successo!")
          			  case 1:
/*<753>*/ 				switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          				  case 0:
/*<758>*/ 					printf(/* textboxtype: 1, unk: 0, line: 160 */ "<0x10009:0x00000001>Ehi, <heroname>!\n\n\n\n<0x10009:0x000c0200>Sei riuscito ad imparare la leggendaria\ntecnica di volo chiamata attacco\navvitato?<pause 30>\n<0x10009:0x000c050b>Beh, complimenti!!!")
          				  case 1:
/*<752>*/ 					switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          					  case 0:
/*<757>*/ 						printf(/* textboxtype: 1, unk: 0, line: 159 */ "<0x10009:0x00000057>Cosa?! La Triforza?<pause 20>\nSì, ne ho sentito parlare...\n\n\nHai già provato a chiedere ai maestri\ndella scuola d'armi?")
          					  case 1:
/*<751>*/ 						switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          						  case 0:
          							flw_754:
/*<754>*/ 							printf(/* textboxtype: 1, unk: 0, line: 156 */ "<0x10009:0x00000001><heroname>, dimmi un po'!\nQuella ragazza della scuola d'armi,\nmi pare si chiamasse<pause 5>.<pause 5>.<pause 5>.<pause 5> Zelda...\n\nChe fine ha fatto? Non vi ho visti più\ninsieme, avete litigato?")
          						  case 1:
/*<748>*/ 							switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          							  case 0:
/*<756>*/ 								printf(/* textboxtype: 1, unk: 0, line: 158 */ "<0x10009:0x00000013>Prima il cielo si è improvvisamente\noscurato per un secondo...\nCosa sarà successo?")
          							  case 1:
/*<839>*/ 								switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          								  case 0:
          									goto flw_754
          								  case 1:
/*<750>*/ 									switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          									  case 0:
/*<755>*/ 										printf(/* textboxtype: 1, unk: 0, line: 157 */ "<0x10009:0x00000001>Ehi, <heroname>!\n\n<0x10009:0x00110057>Cosa?!\n<color red<due>coloroff> enormi <color red<torri del vento>coloroff>?\n<0x10009:0x00010000>Uhmm... Qui a Oltrenuvola di torri del\nvento non ho mai sentito parlare...\nL'unica cosa che mi viene in mente\nsono i <color red<mulini a vento>coloroff>... Saranno quelli?")
          									  case 1:
/*<749>*/ 										switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          										  case 0:
          											goto flw_754
          										  case 1:
/*<218>*/ 											printf(/* textboxtype: 1, unk: 0, line: 155 */ "<0x10009:0x0000000b>Oh, <heroname>.\nGrazie per tutto l'aiuto che mi hai dato.\n\n\n<0x10009:0x00000400>Il mio solcanubi sta benissimo\nadesso. Grazie mille!")
          										}
          									}
          								}
          							}
          						}
          					}
          				}
          			}
          		}
          	  case 1:
/*<760>*/ 		printf(/* textboxtype: 1, unk: 0, line: 155 */ "<0x10009:0x0000000b>Oh, <heroname>.\nGrazie per tutto l'aiuto che mi hai dato.\n\n\n<0x10009:0x00000400>Il mio solcanubi sta benissimo\nadesso. Grazie mille!")
/*<761>*/ 		story_flags[1082 /* us: 805A9B53 0x01, jp: 805ACDD3 0x01 */] = true;
          	}
          }

          void entrypoint_115_12() {
/*< 28>*/ 	start()
/*<654>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 673, 'param3': 32}
/*<673>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 29, 'param3': 24}
/*< 29>*/ 	printf(/* textboxtype: 1, unk: 0, line: 163 */ "Ohhh...")
/*<106>*/ 	set_camera(3, 0)
/*<653>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 674, 'param3': 17}
/*<674>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 106, 'next': 107, 'param3': 24}
/*<107>*/ 	printf(/* textboxtype: 1, unk: 0, line: 164 */ "Ohhh...\nVi prego...\nQualcuno mi aiuti...")
/*< 30>*/ 	story_flags[545 /* us: 805A9B17 0x04, jp: 805ACD97 0x04 */] = true;
/*< 54>*/ 	scene_flags[0 'Skyloft'][65 /* 0x9 02 */] = true;
/*<652>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_115_13() {
/*<501>*/ 	start()
/*<504>*/ 	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          	  case 0:
/*<510>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<676>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 106, 'next': 506, 'param3': 24}
/*<506>*/ 			printf(/* textboxtype: 1, unk: 0, line: 167 */ "<0x10009:0x00000001>Dimenticati della carta...\nCiao...")
/*<509>*/ 			story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          			flw_507:
/*<507>*/ 			scene_flags[0 'Skyloft'][65 /* 0x9 02 */] = false;
          		  case 1:
/*<677>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 505, 'param3': 24}
/*<505>*/ 			printf(/* textboxtype: 1, unk: 0, line: 166 */ "Ahhh... <color red<carta>coloroff>...!\nMi hai portato della <color red<carta>coloroff>!\n\n\nApro la porta...\nTi prego, entra...")
/*<508>*/ 			story_flags[548 /* us: 805A9B17 0x20, jp: 805ACD97 0x20 */] = true;
/*<709>*/ 			story_flags[549 /* us: 805A9B17 0x40, jp: 805ACD97 0x40 */] = true;
          			goto flw_507
          		}
          	  case 1:
/*<675>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 502, 'param3': 24}
/*<502>*/ 		printf(/* textboxtype: 1, unk: 0, line: 165 */ "Ohhh...\n<color red<Carta>coloroff>...\n\n\nVi prego... qualcuno mi...\n<color red<porti della carta>coloroff>...\n\n\n<color red<Qualsiasi tipo di carta va bene>coloroff>...\nOhhhh...")
/*<503>*/ 		story_flags[546 /* us: 805A9B17 0x08, jp: 805ACD97 0x08 */] = true;
          	}
          }

          void entrypoint_115_14() {
/*< 31>*/ 	start()
/*< 33>*/ 	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          	  case 0:
          		goto flw_58
          	  case 1:
/*<141>*/ 		switch (zone_temp_flags[11 /* 0x0 08 */]) {
          		  case 0:
/*<163>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 142, 'param3': 13}
/*<142>*/ 			printf(/* textboxtype: 1, unk: 0, line: 185 */ "<0x10009:0x00001b1b>Ma di cosa diamine stai parlando?!\nQuesto mica è un pezzo di carta\nqualunque!\nÈ <color red<una lettera>coloroff>!\n<0x10009:0x00172500>Una specie di... lettera d'amore!\nCi ho messo il cuore in ogni singola\nparola!\n\n<0x10009:0x00171800>Non ti permetterò di usarla come\ncarta igienica!")
/*<169>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 172, 'param3': 13}
/*<172>*/ 			wait_frames(30)
/*<167>*/ 			printf(/* textboxtype: 1, unk: 0, line: 186 */ "Apri bene le orecchie! Il destinatario\nè una gentil pulzella...\nLa nostra compagna di corso <color blue<Grudia>coloroff>.\n\n<0x10009:0x00010c11>Sai di chi sto parlando, vero?\nLa nostra compagna di corso col\n<color red<cappello tondo>coloroff>. Quella così carina\ne gentile.\n<0x10009:0x00171800>Quella <color red<voce che proviene dal gabinetto>coloroff>\nte la chiederà di sicuro! Non dargliela\nper nessun motivo! Giuralo!")
/*<170>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 549, 'param3': 13}
/*<549>*/ 			wait_frames(45)
/*<168>*/ 			printf(/* textboxtype: 1, unk: 0, line: 187 */ "Benissimo. Ti sto solennemente\naffidando questa lettera\nimportantissima.\nVa da sé che non devi leggerla!")
/*<710>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 109, 'next': 165, 'param3': 24}
/*<165>*/ 			story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */] = true;
/*<166>*/ 			give_item(158 0x9E);
/*<164>*/ 			printf(/* textboxtype: 1, unk: 0, line: 188 */ "Conto su di te, <heroname>!\nSe fai tutto per bene ti nominerò\nmio protetto!\nGrazie in anticipo!")
/*<550>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<139>*/ 			switch (zone_temp_flags[10 /* 0x0 04 */]) {
          			  case 0:
/*<160>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 3072, 'next': 108, 'param3': 13}
/*<108>*/ 				printf(/* textboxtype: 1, unk: 0, line: 183 */ "<0x10009:0x00000008>Eh...?\nPerché stai guardando verso\nil gabinetto?")
/*<162>*/ 				{'type': 'type3', 'subType': 4, 'param1': 23, 'param2': 6144, 'next': 161, 'param3': 13}
/*<161>*/ 				printf(/* textboxtype: 1, unk: 0, line: 184 */ "Cosa?\nDi notte nel gabinetto c'è\nqualcuno che cerca della\ncarta?")
/*<143>*/ 				zone_temp_flags[11 /* 0x0 08 */] = true;
          			  case 1:
/*< 32>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 135, 'param3': 31}
/*<135>*/ 				make_actor_do_something(1, 0)
/*<155>*/ 				{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4608, 'next': 34, 'param3': 13}
/*< 34>*/ 				printf(/* textboxtype: 1, unk: 0, line: 177 */ "Mmh...\nDevo fare io il primo passo?\nOppure devo aspettare che\nlei venga da me?")
/*<136>*/ 				make_actor_do_something(2, 0)
/*<672>*/ 				{'type': 'type3', 'subType': 4, 'param1': 20, 'param2': 4889, 'next': 35, 'param3': 13}
/*< 35>*/ 				printf(/* textboxtype: 1, unk: 0, line: 178 */ "Argh!\n<heroname>, sei tu!\nChe spavento mi hai fatto prendere!\n\n<0x10009:0x00171800>C'è un problema che mi attanaglia il\ncuore. Come osi interrompermi!\n[1-]Problema?[2-]Serve\naiuto?")
/*<156>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 3072, 'next': 37, 'param3': 13}
/*< 37>*/ 				switch (choice(2)) {
          				  case 0:
/*< 36>*/ 					printf(/* textboxtype: 1, unk: 0, line: 179 */ "Cosa? Vuoi ascoltare\nquello che ho da dire?\n\n\n<0x10009:0x0000001c>Umf!\nPerché mai dovrei poi\nparlarne con gente come te...\nComunque...")
          					flw_157:
/*<157>*/ 					{'type': 'type3', 'subType': 4, 'param1': 23, 'param2': 6144, 'next': 39, 'param3': 13}
/*< 39>*/ 					printf(/* textboxtype: 1, unk: 0, line: 181 */ "Forse puoi davvero aiutarmi!\nNon mi piace ammetterlo eh,\nma sembri il tipo che ci sa\nfare con le donne.\nBenissimo, allora!\n<heroname>!\nHo un compito per te!")
/*<159>*/ 					{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 171, 'param3': 13}
/*<171>*/ 					wait_frames(45)
/*<158>*/ 					printf(/* textboxtype: 1, unk: 0, line: 182 */ "Porteresti per me questa lettera a una\ncerta persona? Guarda che è un foglio\ndi <color red<carta >coloroff>molto importante e va\nconsegnato di persona!")
/*<140>*/ 					zone_temp_flags[10 /* 0x0 04 */] = true;
          				  case 1:
/*< 38>*/ 					printf(/* textboxtype: 1, unk: 0, line: 180 */ "Eh? Davvero?!\n\n\n<0x10009:0x0000001c>Nnngh...\nNon mi piace coinvolgerti\nnegli affari miei...\nComunque sia...")
          					goto flw_157
          				}
          			}
          		}
          	}
          }

          void entrypoint_115_15() {
/*< 41>*/ 	start()
/*<118>*/ 	switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          	  case 0:
/*<110>*/ 		set_camera(4, 0)
/*<678>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 106, 'next': 42, 'param3': 24}
/*< 42>*/ 		printf(/* textboxtype: 1, unk: 0, line: 167 */ "<0x10009:0x00000001>Dimenticati della carta...\nCiao...")
/*< 55>*/ 		story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          		flw_53:
/*< 53>*/ 		story_flags[550 /* us: 805A9B17 0x80, jp: 805ACD97 0x80 */] = true;
          	  case 1:
/*<109>*/ 		set_camera(4, 0)
/*<137>*/ 		make_actor_do_something(0, 0)
/*<112>*/ 		wait_frames(45)
/*<111>*/ 		wait_frames(45)
          		goto flw_53
          	}
          }

          void entrypoint_115_16() {
/*< 43>*/ 	start()
/*<117>*/ 	switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          	  case 0:
/*< 44>*/ 		printf(/* textboxtype: 1, unk: 0, line: 167 */ "<0x10009:0x00000001>Dimenticati della carta...\nCiao...")
/*<138>*/ 		make_actor_do_something(1, 0)
/*< 45>*/ 		story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          	  case 1:
/*<131>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 31}
/*<144>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4, 'param2': 1, 'next': 154, 'param3': 13}
/*<154>*/ 		wait_frames(45)
/*< 46>*/ 		printf(/* textboxtype: 1, unk: 0, line: 168 */ "Unf...<color red< carta>coloroff>...\nHo bisogno di <color red<carta>coloroff>...\n\n\nNon sono disperata, ma <color red<ho solo\nbisogno di carta>coloroff>...\n[1-]Dai la\nlettera[2]Non dare\nla lettera")
/*< 47>*/ 		switch (choice(2)) {
          		  case 0:
/*< 49>*/ 			printf(/* textboxtype: 1, unk: 0, line: 170 */ "<0x10009:0x000b0004>Eh?\nMi stai dando della carta?\nChe felicità...")
/*<146>*/ 			{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 0, 'next': 511, 'param3': 13}
/*<511>*/ 			wait_frames(45)
/*<145>*/ 			printf(/* textboxtype: 1, unk: 0, line: 171 */ "Ma...\nQuesta sembra una lettera...\nMa sei sicuro di volerla dare a me?\n[1-]Sì[2]No")
/*< 50>*/ 			switch (choice(2)) {
          			  case 0:
/*<147>*/ 				{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 0, 'next': 711, 'param3': 13}
/*<711>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 109, 'next': 706, 'param3': 24}
/*<706>*/ 				make_actor_do_something(3, 0)
/*<517>*/ 				set_camera(8, 0)
/*<516>*/ 				wait_frames(30)
/*<153>*/ 				printf(/* textboxtype: 1, unk: 0, line: 172 */ "<0x10009:0x00000002>Grazie...\nLa userò con cura...\n\n\nMa sono una fanciulla, perciò non\nchiedermi a cosa mi serva la carta...\n\n\nSpero che ci incontreremo ancora...\nMio caro ragazzo...")
/*<514>*/ 				make_actor_do_something(1, 0)
/*<513>*/ 				story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
/*<512>*/ 				story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */] = true;
/*<554>*/ 				story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */] = true;
/*<515>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
          				flw_48:
/*< 48>*/ 				printf(/* textboxtype: 1, unk: 0, line: 169 */ "<0x10009:0x00050003>Uhhh...\nQualcuno mi aiuti... carta...")
          			}
          		  case 1:
          			goto flw_48
          		}
          	}
          }

          void entrypoint_115_17() {
/*< 51>*/ 	start()
/*< 52>*/ 	switch (story_flags[553 /* us: 805A9B16 0x04, jp: 805ACD96 0x04 */]) {
          	  case 0:
/*<518>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 148, 'param3': 32}
/*<148>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 0, 'next': 149, 'param3': 13}
/*<149>*/ 		printf(/* textboxtype: 1, unk: 0, line: 176 */ "<0x10009:0x00000002>Ahh...\nOh, amore mio...\nResterò sempre al tuo\nfianco... Sì, per sempre!")
          	  case 1:
/*<824>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 527, 'param3': 31}
/*<527>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 152, 'param3': 32}
/*<152>*/ 		{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 526, 'param3': 13}
/*<526>*/ 		wait_frames(15)
/*<151>*/ 		printf(/* textboxtype: 1, unk: 0, line: 173 */ "<0x10009:0x00000004>Ah...\nTu sei il ragazzo dell'altra volta...")
/*<524>*/ 		set_camera(9, 0)
/*<525>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 150, 'param3': 15}
/*<150>*/ 		printf(/* textboxtype: 1, unk: 0, line: 174 */ "<0x10009:0x00060002>È bello rivederti...\nGrazie a te sono riuscita a incontrare\nl'amore della mia vita... sì, è questa\npersona...\n<0x10009:0x000c0000>Certo, è iniziato tutto con quella\nlettera che mi hai dato... <0x10009:0x00060000>Quelle belle\nparole d'affetto mi hanno fatta\ninnamorare perdutamente...")
/*<521>*/ 		printf(/* textboxtype: 1, unk: 0, line: 175 */ "<0x10009:0x00000002>Ahh, il mio cuore palpita\nquando penso a lui...\nE penso sempre a lui...\nMi sento così piena di vita!")
/*<723>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 522, 'param3': 42}
/*<522>*/ 		give_gratitude_crystals();
/*<523>*/ 		set_camera(-1, 0)
/*<658>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 0, 'next': 519, 'param3': 13}
/*<519>*/ 		printf(/* textboxtype: 1, unk: 0, line: 176 */ "<0x10009:0x00000002>Ahh...\nOh, amore mio...\nResterò sempre al tuo\nfianco... Sì, per sempre!")
/*<520>*/ 		story_flags[553 /* us: 805A9B16 0x04, jp: 805ACD96 0x04 */] = true;
/*<655>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_115_18() {
/*<357>*/ 	start()
/*<664>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1005, 'next': 358, 'param3': 24}
/*<358>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 359, 'param3': 32}
/*<359>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 18, 'next': 360, 'param3': 32}
/*<360>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 826, 'param3': 32}
/*<826>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 30, 'next': 822, 'param3': 47}
/*<822>*/ 	make_actor_do_something(3, 5)
/*<621>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5121, 'param2': -256, 'next': 361, 'param3': 13}
/*<361>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 5, 'next': 828, 'param3': 16}
/*<828>*/ 	set_camera(31, 0)
/*<827>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 30, 'next': 362, 'param3': 48}
/*<362>*/ 	set_camera(11, 0)
/*<365>*/ 	{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 356, 'next': 363, 'param3': 15}
/*<363>*/ 	printf(/* textboxtype: 1, unk: 0, line: 244 */ "Sei tu quello che ha mandato la lettera,\nvero?")
/*<366>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 364, 'param3': 16}
/*<364>*/ 	printf(/* textboxtype: 1, unk: 0, line: 245 */ "... S‐sì.")
/*<622>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': -256, 'next': 367, 'param3': 13}
/*<367>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 5, 'next': 368, 'param3': 16}
/*<368>*/ 	printf(/* textboxtype: 1, unk: 0, line: 246 */ "<0x10009:0x14000009>Hi hi!\nEra una meravigliosa lettera\nd'amore. Grazie!")
/*<370>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 369, 'param3': 16}
/*<369>*/ 	printf(/* textboxtype: 1, unk: 0, line: 247 */ "<0x10009:0x05000011>Non... era niente... di speciale...")
/*<371>*/ 	set_camera(12, 0)
/*<375>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1301, 'param2': 3072, 'next': 373, 'param3': 13}
/*<373>*/ 	printf(/* textboxtype: 1, unk: 0, line: 248 */ "Ma... ehm...\nQu‐qual è la tua risposta?")
/*<376>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 5, 'next': 374, 'param3': 16}
/*<374>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5131, 'param2': -256, 'next': 372, 'param3': 13}
/*<372>*/ 	printf(/* textboxtype: 1, unk: 0, line: 249 */ "<0x10009:0x14000012>La mia risposta?\nAh... la mia risposta...")
/*<377>*/ 	set_camera(13, 0)
/*<623>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5121, 'param2': 256, 'next': 380, 'param3': 13}
/*<380>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 274, 'next': 601, 'param3': 15}
/*<601>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 381, 'param3': 16}
/*<381>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1288, 'param2': 3328, 'next': 378, 'param3': 13}
/*<378>*/ 	printf(/* textboxtype: 1, unk: 0, line: 250 */ "<0x10009:0x05002519>Ti prego!\nTi prego... esci con me!\nTi prego!")
/*<382>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': 256, 'next': 602, 'param3': 13}
/*<602>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 551, 'param3': 50}
/*<551>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4609, 'param2': 3074, 'next': 379, 'param3': 13}
/*<379>*/ 	printf(/* textboxtype: 1, unk: 2, line: 251 */ "Oooh! Aspetta un attimo!")
/*<383>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 18, 'next': 384, 'param3': 17}
/*<384>*/ 	set_camera(14, 0)
/*<385>*/ 	wait_frames(45)
/*<386>*/ 	set_camera(19, 0)
/*<388>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4625, 'param2': 3072, 'next': 387, 'param3': 13}
/*<387>*/ 	printf(/* textboxtype: 1, unk: 0, line: 252 */ "No, non uscire con lui!\nEsci con me!")
/*<391>*/ 	set_camera(15, 0)
/*<648>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4609, 'param2': 256, 'next': 624, 'param3': 13}
/*<624>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': -256, 'next': 603, 'param3': 13}
/*<603>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 99, 'next': 389, 'param3': 50}
/*<389>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1306, 'param2': 6912, 'next': 390, 'param3': 13}
/*<390>*/ 	printf(/* textboxtype: 1, unk: 0, line: 253 */ "<0x10009:0x05001b09>Cosa?!\nMa di cosa stai parlando così\nall'improvviso?!")
/*<604>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 99, 'next': 392, 'param3': 50}
/*<392>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5140, 'param2': 2304, 'next': 393, 'param3': 13}
/*<393>*/ 	printf(/* textboxtype: 1, unk: 0, line: 254 */ "Ehm...<0x10009:0x14000900>\nIo voglio uscire con...\nSparvio...")
/*<649>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 99, 'next': 650, 'param3': 50}
/*<650>*/ 	printf(/* textboxtype: 1, unk: 0, line: 255 */ "<0x10009:0x05150c10>Ah! Lo sapevo!\nGrudia ha occhi solo per\nme... ehm...")
/*<394>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 629, 'param3': 17}
/*<629>*/ 	printf(/* textboxtype: 1, unk: 0, line: 256 */ "<0x10009:0x05111d1d>Eh?! A‐aspetta un at...!")
/*<630>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': 0, 'next': 620, 'param3': 13}
/*<620>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 274, 'next': 395, 'param3': 15}
/*<395>*/ 	set_camera(14, 0)
/*<628>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 397, 'param3': 17}
/*<397>*/ 	{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 18, 'next': 396, 'param3': 14}
/*<396>*/ 	wait_frames(10)
/*<605>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 99, 'next': 398, 'param3': 50}
/*<398>*/ 	printf(/* textboxtype: 1, unk: 0, line: 257 */ "<0x10009:0x1201ff00>Davvero?\nSei sicura di voler uscire con me?")
/*<606>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 399, 'param3': 50}
/*<399>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5140, 'param2': 2323, 'next': 400, 'param3': 13}
/*<400>*/ 	printf(/* textboxtype: 1, unk: 0, line: 258 */ "Certo!\n<0x10009:0x14000900>Sono così felice.\nGrazie.")
/*<632>*/ 	set_camera(16, 0)
/*<636>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5121, 'param2': 256, 'next': 635, 'param3': 13}
/*<635>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1306, 'param2': 7936, 'next': 631, 'param3': 13}
/*<631>*/ 	printf(/* textboxtype: 1, unk: 0, line: 259 */ "<0x10009:0x05001d17>Io... non ci posso credere...")
/*<634>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1293, 'param2': 7936, 'next': 633, 'param3': 13}
/*<633>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 5, 'next': 639, 'param3': 14}
/*<639>*/ 	wait_frames(1)
/*<638>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 261, 'next': 637, 'param3': 15}
/*<637>*/ 	printf(/* textboxtype: 1, unk: 0, line: 260 */ "<0x10009:0x05000018>Aaaaaghhhh...!!!")
/*<626>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 99, 'next': 625, 'param3': 50}
/*<625>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 5, 'next': 407, 'param3': 17}
/*<407>*/ 	set_camera(17, 0)
/*<619>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1293, 'param2': 1024, 'next': 618, 'param3': 13}
/*<618>*/ 	{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 5, 'next': 552, 'param3': 14}
/*<552>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4625, 'param2': 1024, 'next': 401, 'param3': 13}
/*<401>*/ 	printf(/* textboxtype: 1, unk: 0, line: 261 */ "<0x10009:0x12000001><heroname>!")
/*<402>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 100, 'next': 403, 'param3': 16}
/*<403>*/ 	set_camera(18, 0)
/*<643>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4616, 'param2': 1024, 'next': 640, 'param3': 13}
/*<640>*/ 	printf(/* textboxtype: 1, unk: 0, line: 262 */ "Ho capito tutto solo quando mi\nhai detto della lettera.\n\n\nHo capito che... io la amo.\n<0x10009:0x12090c00>E non voglio che nessuno\nme la porti via.\n\n<0x10009:0x12010400>Se tu non me l'avessi detto,\nforse non me ne sarei mai accorto.\n\n\n<0x10009:0x1208000b>Ti sono molto grato!\nNon so come potrò ripagarti!")
/*<651>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 641, 'param3': 42}
/*<641>*/ 	give_gratitude_crystals();
/*<642>*/ 	set_camera(20, 0)
/*<404>*/ 	story_flags[561 /* us: 805A9B19 0x04, jp: 805ACD99 0x04 */] = true;
/*<405>*/ 	story_flags[558 /* us: 805A9B16 0x80, jp: 805ACD96 0x80 */] = true;
/*<659>*/ 	story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
/*<355>*/ 	story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */] = true;
/*<356>*/ 	story_flags[560 /* us: 805A9B19 0x02, jp: 805ACD99 0x02 */] = true;
/*<553>*/ 	story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */] = true;
/*<699>*/ 	story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */] = true;
/*<627>*/ 	zone_temp_flags[21 /* 0x3 20 */] = false;
/*<406>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 793, 'param3': 42}
/*<793>*/ 	zone_temp_flags[20 /* 0x3 10 */] = true;
          }

          void entrypoint_115_01() {
          	start()
/*<  4>*/ 	set_camera(2, 0)
/*<  3>*/ 	{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 100, 'next': 1, 'param3': 15}
/*<  1>*/ 	set_camera(1, 0)
/*<  2>*/ 	story_flags[203 /* us: 805A9AEF 0x20, jp: 805ACD6F 0x20 */] = true;
/*<644>*/ 	scene_flags[0 'Skyloft'][0 /* 0x1 01 */] = false;
/*<645>*/ 	scene_flags[0 'Skyloft'][21 /* 0x3 20 */] = false;
          }

          void entrypoint_115_19() {
/*<100>*/ 	start()
/*<684>*/ 	switch (story_flags[558 /* us: 805A9B16 0x80, jp: 805ACD96 0x80 */]) {
          	  case 0:
/*<101>*/ 		switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          		  case 0:
/*<537>*/ 			switch (zone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*<540>*/ 				printf(/* textboxtype: 1, unk: 0, line: 204 */ "<0x10009:0x001b1f1b>Da quando hai consegnato la mia\nlettera, non riesco più a dormire\nbene e soffro di incubi. Che cosa\nmi sta succedendo?\nForse questo letto è maledetto!\nDev'essere stato Bado!\nAiutami, <heroname>!")
          			  case 1:
/*<538>*/ 				printf(/* textboxtype: 1, unk: 0, line: 203 */ "<0x10009:0x001b1f17>Che cosa vuoi, <heroname>?!\nNon dimenticherò quello che mi\nhai fatto!\n\nE come se non bastasse, da quando hai\nconsegnato la mia lettera, non riesco\npiù a dormire bene e soffro di incubi.\nChe cosa mi sta succedendo?\nForse questo letto è maledetto!\nDeve averlo maledetto Bado!\n<0x10009:0x001c1a18>Aiutami, <heroname>!")
/*<539>*/ 				zone_temp_flags[0 /* 0x1 01 */] = true;
          			}
          		  case 1:
/*<569>*/ 			{'type': 'type3', 'subType': 4, 'param1': 27, 'param2': 7936, 'next': 102, 'param3': 13}
/*<102>*/ 			printf(/* textboxtype: 1, unk: 0, line: 205 */ "<0x10009:0x00000017>È finita... è tutto finito...\n<0x10009:0x001c1f00>Che cosa vuoi, <heroname>?!\n\n\nSei venuto a prenderti gioco di me?!\nLasciami perdere!")
          		}
          	  case 1:
/*<825>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 685, 'param3': 31}
/*<685>*/ 		printf(/* textboxtype: 1, unk: 0, line: 202 */ "<0x10009:0x001b1f17>Ancora tu, <heroname>?!\nMi hai ferito nel profondo!\n\n\n<0x10009:0x001c1f00>Io non so chi c'è in quel gabinetto, ma\nil pensiero che abbia letto la mia\nlettera mi sconvolge.\nSi può sapere chi è?!")
          	}
          }

