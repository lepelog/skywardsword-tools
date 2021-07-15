          void entrypoint_115_02() {
/*<444>*/ 	start()
/*<443>*/ 	switch (story_flags[297 /* us: 805A9AFD 0x08, jp: 805ACD7D 0x08 */]) {
          	  case 0:
/*<433>*/ 		printf("\x0E\x01\x09\x04\x00\nAh, vuoi vendere qualche tesoro?")
          		flw_495:
/*<495>*/ 		make_actor_do_something(8, 0)
/*<432>*/ 		printf("\x0E\x01\x09\x04\x12\x600Benissimo, oggi ho voglia di acquistare\nquesti tesori! <y<<string arg0>>>!\n<y<<string arg1>>>!\n<y<<string arg2>>>!\nE poi cos'altro...? Ah!\n<y<<string arg3>>>!\n\x0E\x01\x09\x04\x10\x600Sì, solo questi quattro. Allora, cosa\nvuoi fare?\n[1]Vendo[2-]Non vendo")
/*<415>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_414:
/*<414>*/ 			printf("Quale tesoro vorresti vendermi?\n\n\n\n1) <y<<string arg2>>>\n2) <y<<string arg3>>>\n3) <y<<string arg0>>>\n4) <y<<string arg1>>><y<[1]3)[2]4)[3]1)[4]2)>>")
/*<413>*/ 			switch (choice(4)) {
          			  case 0:
/*<488>*/ 				make_actor_do_something(0, 0)
/*<481>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<489>*/ 					printf("<y<\x0E\x01\x09\x04\x12\x600>>Un esemplare di <y<<y<<string arg0><y<\n>>ti frutterà <numeric arg0> rupie.")
          					flw_656:
/*<656>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 412, 'param3': 12}
/*<412>*/ 					printf("\x0E\x01\x09\x04\x10\x600Vedo che ne hai <numeric arg4>.\nQuanti ne vuoi vendere?\n[1]1[2]5[3]Tutti[4-]Nessuno")
/*<411>*/ 					switch (choice(4)) {
          					  case 0:
/*<500>*/ 						make_actor_do_something(4, 0)
          						flw_497:
/*<497>*/ 						switch (context_related2(0)) {
          						  case 0:
/*<409>*/ 							printf("<y<\x0E\x01\x09\x04\x12\x900>>Quindi, me ne vuoi vendere <numeric arg0>, giusto?\nBene, ti pagherò <numeric arg1> rupie.\n[1]Affare fatto[2-]Cambio idea")
/*<408>*/ 							switch (choice(2)) {
          							  case 0:
/*<430>*/ 								printf("\x0E\x01\x09\x04\x10\x80ABenissimo! Eccoti il danaro.")
/*<496>*/ 								make_actor_do_something(7, 0)
/*<572>*/ 								set_camera(6, 0)
/*<571>*/ 								{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 2048, 'next': 573, 'param3': 13}
/*<573>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 429, 'param3': 6}
/*<429>*/ 								printf("È un piacere fare affari con te!\nTorna a trovarmi.")
/*<574>*/ 								{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          							  case 1:
          								flw_410:
/*<410>*/ 								printf("\x0E\x01\x09\x04\x0F\x0COh, davvero? Beh, spero che\ntornerai a farmi visita qualche volta.")
          							}
          						  case 1:
/*<431>*/ 							printf("\x0E\x01\x09\x04\x0F\x409Ma non ne hai in tale quantità!\nPerché non la smetti con questi scherzi?!")
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
/*<494>*/ 					printf("\x0E\x01\x09\x04\x0F\x409Per favore... smettila di scherzare!\nNon hai nemmeno un esemplare di\nquesto tipo di tesoro!\n\nVuoi vendere qualche altro articolo?\n[1]Sì[2-]No")
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
/*<490>*/ 					printf("<y<\x0E\x01\x09\x04\x12\x600>>Un esemplare di <y<<y<<string arg1><y<\n>>ti frutterà <numeric arg1> rupie.")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			  case 2:
/*<486>*/ 				make_actor_do_something(2, 0)
/*<483>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<491>*/ 					printf("<y<\x0E\x01\x09\x04\x12\x600>>Un esemplare di <y<<y<<string arg2><y<\n>>ti frutterà <numeric arg2> rupie.")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			  case 3:
/*<485>*/ 				make_actor_do_something(3, 0)
/*<484>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<492>*/ 					printf("<y<\x0E\x01\x09\x04\x12\x600>>Un esemplare di <y<<y<<string arg3><y<\n>>ti frutterà <numeric arg3> rupie.")
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
/*<442>*/ 		printf("\x0E\x01\x09\x04\x00\nAh, salve...\nCome posso aiutarti?\n[1]Acquisto![2]Boh...")
/*<441>*/ 		switch (choice(2)) {
          		  case 0:
/*<440>*/ 			printf("\x0E\x01\x09\x04\x0F\x409Vorresti fare acquisti, eh? Posso\nchiederti di tornare al negozio domani\nallora?")
          		  case 1:
/*<439>*/ 			printf("\x0E\x01\x09\x04\x13\x609Che significa \x201Cboh\"?\nChe ci sei venuto a fare qui, allora?")
/*<438>*/ 			printf("Cosa? Cioè, secondo te sono sgarbato?\nL'opposto di come sono durante il\ngiorno?!\n\n\x0E\x01\x09\x04\x10\x60BBeh, è che uno si stanca di avere\nsempre stampato sulla faccia\nil sorriso del mercante, sai.\n\nLa mia personalità va anche al\ndi là del mio mestiere.\n\n\nComunque sia, poco importa...\n\n\n\nDeduco che tu sia qui per avere i\nservizi della <r<bottega notturna\ndegli arnesi>>?\n[1]Cosa?[2]Già!")
/*<437>*/ 			switch (choice(2)) {
          			  case 0:
/*<436>*/ 				printf("\x0E\x01\x09\x04\x00\x09Ah, è la prima volta che vieni qui,\nvero? Capisco...")
          				flw_434:
/*<434>*/ 				printf("\x0E\x01\x09\x04\x12\x600Di notte offro un servizio diverso.\n<r<Compro tesori>>, ma questo non significa\nche accetti ogni genere di anticaglia.\nIo tratto solo <r<articoli specifici>>.\n\x0E\x01\x09\x04\x10\x600Ma veniamo subito al dunque,\nche ne dici?")
/*<428>*/ 				story_flags[297 /* us: 805A9AFD 0x08, jp: 805ACD7D 0x08 */] = true;
          				goto flw_495
          			  case 1:
/*<435>*/ 				printf("\x0E\x01\x09\x04\x0F\x409Avresti dovuto dirmelo subito...")
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
/*< 57>*/ 		printf("\x0E\x01\x09\x04\x00TUgh...\nNngh... nngh...\nA\x2010aiutooo...")
/*<528>*/ 		switch (zone_temp_flags[17 /* 0x3 02 */]) {
          		  case 0:
          		  case 1:
/*<724>*/ 			zone_temp_flags[17 /* 0x3 02 */] = true;
/*<529>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<174>*/ 		{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6656, 'next': 536, 'param3': 13}
/*<536>*/ 		printf("\x0E\x01\x09\x04\x00\x17Uhh... Maledetto <b<Sparvio>>...!\nTi odio...\nDannazione!")
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
/*<478>*/ 					printf("\x0E\x01\x09\x04\x03\x01Oh, sei tu, Link.\nContavo di vederti.\nQualche nuovo insetto per me?")
          					flw_476:
/*<476>*/ 					make_actor_do_something(8, 0)
/*<475>*/ 					printf("Oggi comprerei tre tipi di insetti!\n<y<<string arg0>>>!\n<y<<string arg1>>>!\n<y<<string arg2>>>!\n[1]Vendo[2-]Non vendo")
/*<474>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_472:
/*<472>*/ 						printf("Quale insetto mi vendi?\n1) <y<<string arg2>>>\n2) <y<<string arg0>>>\n3) <y<<string arg1>>>[1]2)[2]3)[3]1)")
/*<471>*/ 						switch (choice(3)) {
          						  case 0:
/*<466>*/ 							make_actor_do_something(0, 0)
/*<461>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<467>*/ 								printf("<y<<string arg0>>>, eh?\nVediamo... per questa specie ti do\n<numeric arg0> \x0E\x03\x04\x02\x1CD a esemplare. Ed è la mia\nultima offerta!")
          								flw_657:
/*<657>*/ 								{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 458, 'param3': 12}
/*<458>*/ 								printf("Di esemplari di questa specie ne\nhai <numeric arg4>... Quanti me ne vuoi vendere?\n[1]1[2]5[3]Tutti[4-]Nessuno")
/*<457>*/ 								switch (choice(4)) {
          								  case 0:
/*<455>*/ 									make_actor_do_something(4, 0)
          									flw_452:
/*<452>*/ 									switch (context_related2(0)) {
          									  case 0:
/*<456>*/ 										printf("\x0E\x01\x09\x04\x03\x14Ah... mmh... interessante! Vediamo,\nquante rupie potrei offrirti?! Che ne\ndici di <numeric arg1>?\n[1]Vendo[2-]Ci ho\nripensato")
/*<449>*/ 										switch (choice(2)) {
          										  case 0:
/*<451>*/ 											printf("Va bene, ecco i soldi.")
/*<445>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 448, 'param3': 12}
/*<448>*/ 											make_actor_do_something(7, 0)
/*<450>*/ 											printf("\x0E\x01\x09\x04\x03\xFF04Grazie...\nOggi ho un grillo per la testa...\n\n\nMa non preoccuparti, non farei\ndel male a una mosca!\nAspetto altri insetti, Link.")
          										  case 1:
          											flw_473:
/*<473>*/ 											printf("\x0E\x01\x09\x04\x01\xFF13Capisco. Che peccato...\n\x0E\x01\x09\x04\x00\x500Beh, allora come non detto...")
          										}
          									  case 1:
/*<459>*/ 										printf("\x0E\x01\x09\x04\x12\x100Non ne hai così tanti...\nTi rifaccio la domanda...")
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
/*<470>*/ 								printf("\x0E\x01\x09\x04\x10\xFF0CMa non ne hai nemmeno un esemplare!\nNon farmi correre dietro alle farfalle!\n\n\n\x0E\x01\x09\x04\x01\xFF00Forse volevi vendermi un altro insetto?\n[1]Sì[2-]No")
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
/*<468>*/ 								printf("<y<<string arg1>>>, eh?\nFammi pensare... per questa specie\ncredo che <numeric arg1> \x0E\x03\x04\x02\x1CD a esemplare sia\nun prezzo onesto.")
          								goto flw_657
          							  case 1:
          								goto flw_470
          							}
          						  case 2:
/*<464>*/ 							make_actor_do_something(2, 0)
/*<463>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<469>*/ 								printf("<y<<string arg2>>>, eh?\nQuanto vorresti? Mmm, facciamo\n<numeric arg2> \x0E\x03\x04\x02\x1CD a esemplare e affare fatto.")
          								goto flw_657
          							  case 1:
          								goto flw_470
          							}
          						}
          					  case 1:
          						goto flw_473
          					}
          				  case 1:
/*<477>*/ 					printf("\x0E\x01\x09\x04\x03\x01Ehi, Link.\nOggi mi è saltata la mosca al naso.\nMa non prendere lucciole per\nlanterne, eh!")
          					goto flw_476
          				}
          			  case 1:
/*<721>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 719, 'param3': 31}
/*<719>*/ 				printf("\x0E\x01\x09\x04\x03\x01Link...\nForse già lo sai.\nPrima ho fatto una capatina\nalle grotte dietro la cascata.\nIn un angolo completamente vuoto\nho trovato un gruppo di <r<lepidee>>.\nMi chiedo come mai quelle farfalle\nsi radunino in gruppi così numerosi.\nInsomma è intrigante, vero?\nMagari se vai anche tu nelle\ngrotte di notte potresti scoprire\nqualcosa di più.")
/*<722>*/ 				printf("Ah, bene.\nChissà quali insetti hai da vendermi oggi.")
/*<720>*/ 				story_flags[810 /* us: 805A9B31 0x04, jp: 805ACDB1 0x04 */] = true;
          				goto flw_476
          			}
          		  case 1:
          			goto flw_479
          		}
          	  case 1:
/*<446>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 666, 'param3': 31}
/*<666>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 427, 'param3': 13}
/*<427>*/ 		printf("\x0E\x01\x09\x04\x00\xFF01Mmm... Sei Link, vero?\nChe vuoi da me?")
/*<578>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 416, 'param3': 13}
/*<416>*/ 		printf("<r<\x0E\x01\x09\x04\x00\x300>>Eh?\nChe sto facendo?\n\n\n<r<\x0E\x01\x09\x04ÿ\x114>><r<Insetti>>...\nGuardo gli insetti.")
/*<575>*/ 		set_camera(22, 0)
/*<577>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 418, 'param3': 6}
/*<418>*/ 		printf("\x0E\x01\x09\x04\x01\xFF00Gli insetti sono meravigliosi.\nMeravigliosi come Bado?\nAnche di più, direi...\n\nOh...<pause1E> non voglio insinuare che\nBado valga meno di un insetto...")
/*<576>*/ 		set_camera(-1, 0)
/*<417>*/ 		printf("Comunque sia, <r<adoro gli insetti>>...\nVoglio averne una collezione infinita.\n\n\nIl mio sogno nel cassetto è avere\nun'isola tutta mia brulicante di tutti\nquegli esserini.")
/*<424>*/ 		printf("\x0E\x01\x09\x04ÿ\xFF01Ah! Che idea!\n\n\n\nLink, <r<se ti capita di\ncatturare degli insetti>>, <r<non esitare a\nvendermeli>>.\n\nQuando si tratta di insetti, io\nnon bado a spese.\n[1]Certo![2]Mah...")
/*<423>*/ 		switch (choice(2)) {
          		  case 0:
/*<422>*/ 			printf("\x0E\x01\x09\x04\x03\xFF04Ah ah ah! La mia collezione di insetti\nsi farà sempre più grande...")
          			flw_420:
/*<420>*/ 			printf("Bene, se mai ti va di vendere qualche\ninsetto vieni da me.\nMi trovi qui di notte...\n\n\x0E\x01\x09\x04\x12\x100Ma non compro ogni tipo di insetto, eh!\nLe specie che voglio cambiano\n<r<ogni giorno in base al mio umore>>.\n\nUn'altra cosa, non ti azzardare\na parlare di queste cose davanti\na Bado, mi raccomando.\n\nE forse è un discorso un po' egoista,\nma io <r<gli affari li tratto solo di sera>>.\nSai com'è anch'io ho una vita!\n\n\x0E\x01\x09\x04\x03\xFF14Capito, Link?\nImmagino anche tu sia un entomologo,\nquindi mi capisci...\n")
/*<447>*/ 			printf("Allora, veniamo a noi.\nHai qualcosa da vendermi?")
/*<419>*/ 			story_flags[298 /* us: 805A9AFD 0x10, jp: 805ACD7D 0x10 */] = true;
          			goto flw_476
          		  case 1:
/*<421>*/ 			printf("\x0E\x01\x09\x04\x01\xFF05Cosa? Non è gentile da parte tua!\nLo dirò a Bado...")
          			goto flw_420
          		}
          	}
          }

          void entrypoint_115_04() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf("\x0E\x01\x09\x04\x00\x00Guu guu guu guu guu!\nGaa gaa gaa gaa gaa!\n")
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
/*<116>*/ 						printf("\x0E\x01\x09\x04\x08\x909Urrà!!! Grazie, Link.\n\n\n\nGrazie a te ho un fidanzato meraviglioso.\nMa forse sono stata cattiva con <b<Ras>>...")
          					  case 1:
/*<800>*/ 						entrypoint_115_28();
          					}
          				  case 1:
/*< 87>*/ 					printf("\x0E\x01\x09\x04\x00\x01Grazie per avermi portato la lettera,\nLink.\n\n\n\x0E\x01\x09\x04\x01\xD14Sigh...\nMi chiedo che cosa direbbe\n<b<Sparvio >>se lo venisse a sapere...")
          				}
          			  case 1:
/*<130>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 133, 'param3': 31}
/*<133>*/ 				make_actor_do_something(2, 0)
/*<587>*/ 				{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1024, 'next': 73, 'param3': 13}
/*< 73>*/ 				printf("\x0E\x01\x09\x04\x00\x14Sigh...\nCome farmi notare da <b<Sparvio>>?")
/*<134>*/ 				make_actor_do_something(3, 0)
/*< 74>*/ 				printf("\x0E\x01\x09\x04\x08\x404Ah!\nLink!\n\n\nChe c'è?\nChe succede?\n\x0E\x01\x08\x02\xFECDHai sentito?\x0E\x01\x08\x02Í\n\n[1]Dai la\nlettera[2]Non dare\nla lettera")
/*< 75>*/ 				switch (choice(2)) {
          				  case 0:
/*< 77>*/ 					printf("\x0E\x01\x09\x04\x08\x906Eh? Una lettera?\nPer me<pause0A>.<pause0A>.<pause0A>.<pause0A>?\nForse è da parte di... <b<Sparvio>>?\n[1]Ecco a te[2]Ci ho\nripensato...")
/*< 78>*/ 					switch (choice(2)) {
          					  case 0:
/*< 80>*/ 						printf("\x0E\x01\x09\x04\x0E\x90AG\x2010grazie!\nGrazie.")
/*<592>*/ 						{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3072, 'next': 593, 'param3': 13}
/*<593>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 598, 'param3': 6}
/*<598>*/ 						set_camera(23, 0)
/*<599>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 611, 'param3': 6}
/*<611>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 591, 'param3': 49}
/*<591>*/ 						printf("\x0E\x01\x09\x04\x10\x400M\x2010ma chi la manda?!")
/*<594>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 81, 'param3': 6}
/*< 81>*/ 						printf("\x0E\x01\x09\x04\x10\xD00Ehm... <pause14>\n\x0E\x01\x06\x02\xFECDLa grafia non è molto chiara...\x0E\x01\x06\x02Í\n\n\n\x0E\x01\x09\x04\x10\x400Comunque, che importanza ha...\nVediamo quello che dice...")
/*<596>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': -256, 'next': 665, 'param3': 13}
/*<665>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 104, 'next': 597, 'param3': 24}
/*<597>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 600, 'param3': 6}
/*<600>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4608, 'next': 595, 'param3': 13}
/*<595>*/ 						printf("\x201CTi scrivo per dirti che\nil mio amore per te è\npiù vasto del firmamento\ne più profondo delle nuvole.\n\x0E\x01\x09\x04\x13\x1200Mi farebbe molto piacere\npoter uscire con te.\nDal tuo cavaliere, Ras\"\n\x0E\x01\x09\x04\x00\x500.<pause0A>.<pause0A>. <pause0A>.<pause0A>.<pause0A>. <pause0A>.<pause0A>.<pause0A>.\n\x0E\x01\x09\x04\x01\xD00Ehm...\nQuesto Ras... se non sbaglio\nè uno dei protetti di Bado, vero?\n\n\x0E\x01\x09\x04\x0C\x400E... questa... è una lettera d'amore da\nparte di Ras...\nVero?\n\n\x0E\x01\x09\x04\x0B\x712Oh, povera me...")
/*<588>*/ 						set_camera(-1, 0)
/*<589>*/ 						{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1792, 'next': 590, 'param3': 13}
/*<590>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 612, 'param3': 6}
/*<612>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 82, 'param3': 16}
/*< 82>*/ 						printf("\x0E\x01\x09\x04\x00\x09Sì. Ma è una bella lettera, piena\ndi sentimento.\n\n\nForse dovrei davvero uscire con\nquesto <b<Ras>>.\n\n\n\x0E\x01\x09\x04\x08\x900Ma che cosa sto dicendo?!\n\n\n\n\x0E\x01\x09\x04\x01\xD14Sigh...\nMi chiedo che cosa direbbe <b<Sparvio >>se\nlo venisse a sapere...")
/*< 83>*/ 						story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */] = true;
          					  case 1:
/*< 79>*/ 						printf("\x0E\x01\x09\x04\x08\x912Ma che vuoi?!\nNon prenderti gioco di me!")
          					}
          				  case 1:
/*< 76>*/ 					printf("\x0E\x01\x09\x04\x01\x406Eh?\nSei strano, Link!")
          				}
          			}
          		}
          	  case 1:
/*<667>*/ 		switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          		  case 0:
/*< 69>*/ 			printf("\x0E\x01\x09\x04\x00\x01Ehi Link, che ne pensi di\n<b<Sparvio>>?\n\n[1]È a posto[2]Perché?")
/*< 70>*/ 			switch (choice(2)) {
          			  case 0:
/*< 71>*/ 				printf("\x0E\x01\x09\x04\x0B\x70ASì, bravo!\nÈ gentile e premuroso!\nÈ responsabile e meraviglioso!\n\n\x0E\x01\x09\x04\x0C\x416Oh cielo... non so che cosa mi ha\npreso così all'improvviso...\n\n\n\x0E\x01\x09\x04\x08\x400Scusa se ti ho fatto una domanda\ncosì strana a bruciapelo...")
          			  case 1:
/*< 72>*/ 				printf("\x0E\x01\x09\x04\x01\x406Eh?\nEhm... volevo dire...\n\n\n\x0E\x01\x09\x04\x08\x416Niente in realtà... un senso\ndi stranezza improvviso... meglio se\nchiudiamo la conversazione...")
          			}
          		  case 1:
/*<669>*/ 			switch (zone_temp_flags[15 /* 0x0 80 */]) {
          			  case 0:
/*<671>*/ 				printf("\x0E\x01\x09\x04\x00\x1001Quella divisa ti sta uno splendore!\n\n\n\n\x0E\x01\x09\x04\x00\x40AAnche se non sei bello come\nSparvio, eh!")
          			  case 1:
/*<668>*/ 				printf("\x0E\x01\x09\x04\x01\x404Ah! <pause14>Link!\nSei stato promosso! Congratulazioni!\n\n\n\x0E\x01\x09\x04\x08\x400Ah, il colore dell'uniforme di\nquest'anno è verde, vedo!\n<pause14>Che bello!\n\n\x0E\x01\x09\x04\n\x1000Zelda resterà sicuramente\nimpressionata quando ti vedrà con\nquella addosso.\n\n\x0E\x01\x09\x04\x00\x406Non ti preoccupare! Sta bene, lo so!\nSicuramente tornerà presto a casa.")
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
/*<105>*/ 						printf("\x0E\x01\x09\x04\x00\xE08Anch'io stanotte mi farò una bella\ndormita! Grazie mille!")
          					  case 1:
/*<580>*/ 						{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 3584, 'next': 23, 'param3': 13}
/*< 23>*/ 						printf("\x0E\x01\x09\x04\x00\x08Ah! Grazie, grazie davvero! Apprezzo\nmoltissimo quello che hai fatto per me.")
          					}
          				  case 1:
/*<123>*/ 					check_item_flag(160, 1)
/*<124>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 60}) {
          					  case 0:
/*<126>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 19, 'param3': 31}
/*< 19>*/ 						printf("\x0E\x01\x09\x04\x00\xE0DMa quello è...?\nIl <y<sonaglino >>del bimbo!\nL'hai trovato!")
/*<584>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 586, 'param3': 47}
/*<586>*/ 						story_flags[387 /* us: 805A9B0D 0x20, jp: 805ACD8D 0x20 */] = true;
/*<712>*/ 						{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 713, 'param3': 15}
/*<713>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 714, 'param3': 17}
/*<714>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 556, 'param3': 6}
/*<556>*/ 						set_camera(10, 0)
/*<555>*/ 						{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3328, 'next': 585, 'param3': 13}
/*<585>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 557, 'param3': 48}
/*<557>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 20, 'param3': 6}
/*< 20>*/ 						printf("Ecco bimbo bello!\nFai la nanna, sogni d'oro.\x0E\x01\x05\x04x\x00")
/*<558>*/ 						{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3584, 'next': 559, 'param3': 13}
/*<559>*/ 						set_camera(29, 0)
/*< 21>*/ 						printf("\x0E\x01\x09\x04\x00\xE08Che sollievo!\nIl bambino si è tranquillizzato.\nAdesso sicuro che\nriprenderà sonno!\nAah! E pure io mi farò una bella\nnottata di riposo finalmente!\n\n\n\x0E\x01\x09\x04\x10\xE00Grazie tante!\nNon dimenticherò quello che\nhai fatto per me!")
/*<103>*/ 						zone_temp_flags[0 /* 0x1 01 */] = true;
/*<715>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 125, 'param3': 42}
/*<125>*/ 						give_gratitude_crystals();
/*<716>*/ 						set_camera(30, 0)
          					  case 1:
/*<743>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 18, 'param3': 31}
/*< 18>*/ 						printf("\x0E\x01\x09\x04\x0D\xF09Ahh...\nSpero che qualcuno riesca a trovare il\nsonaglino del bimbo...\n<r<\x0E\x01\x09\x04\x10\x00Un uccello l'ha preso ed è volato via.>>\nDeve ancora essere <r<da qualche parte\nin questo villaggio>>...\n\n\n\x0E\x01\x09\x04\x0D\x00Ahh...\nMi sa che anche stanotte non chiuderò\nocchio...")
          					}
          				}
          			  case 1:
/*< 10>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 561, 'param3': 31}
/*<561>*/ 				set_camera(10, 0)
/*<560>*/ 				{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 3072, 'next': 562, 'param3': 13}
/*<562>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 75, 'next': 11, 'param3': 6}
/*< 11>*/ 				printf("\x0E\x01\x06\x02\xFCCD... <pause2D>\x0E\x01\x06\x02Í\x0E\x01\x09\x04\x0D\x00Ahhh...\x0E\x01\x05\x04A\x00")
/*<563>*/ 				set_camera(-1, 0)
/*<565>*/ 				{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 564, 'param3': 13}
/*<564>*/ 				printf("Ahhh...\nAnche oggi mi sa che non chiuderò\nocchio...\n[1]Perché?[2]Sei\nstanco?")
/*< 12>*/ 				switch (choice(2)) {
          				  case 0:
/*< 24>*/ 					printf("\x0E\x01\x09\x04\x10\xF06Apprezzo la tua premura...")
          					flw_26:
/*< 26>*/ 					printf("\x0E\x01\x09\x04\x0D\xF00Come puoi vedere, di notte il\nbambino non fa altro che piangere...\nE perciò ultimamente non riesco a\nchiudere occhio.\nDi solito il bimbo dorme\ncome un angioletto. Ma\nsenza quel coso, non\nriesce a trovar pace!\n[1]Quale coso?[2]Ah, vuoi dire...?")
/*< 27>*/ 					switch (choice(2)) {
          					  case 0:
/*< 13>*/ 						printf("\x0E\x01\x09\x04\x10\xF01Il <y<sonaglino >>del bimbo!")
          						flw_15:
/*< 15>*/ 						printf("\x0E\x01\x09\x04\x00\xF00Con quel giocattolino, il bimbo smette\nsubito di frignare...\n\n\nMa l'altro ieri l'abbiamo perso.\n<r<Un uccello l'ha rubato ed è volato via>>.\nForse pensava che fosse cibo.\n\n\x0E\x01\x09\x04\x0E\xF00Certo non può averlo mangiato, quindi\ndev'essere <r<da qualche parte nel\nvillaggio>>. Però non sono riuscito\na trovarlo da nessuna parte...\n\x0E\x01\x09\x04\x00\x09Ahh... se solo qualcuno riuscisse a\ntrovarlo!")
/*< 16>*/ 						story_flags[386 /* us: 805A9B0D 0x10, jp: 805ACD8D 0x10 */] = true;
          					  case 1:
/*< 14>*/ 						printf("\x0E\x01\x09\x04\x10\xF04Sai di cosa parlo?\nSì, il <y<sonaglino >>del bimbo.")
          						goto flw_15
          					}
          				  case 1:
/*< 25>*/ 					printf("\x0E\x01\x09\x04\x10\xF07Tu mi capisci, vero...?")
          					goto flw_26
          				}
          			}
          		  case 1:
          			flw_9:
/*<  9>*/ 			printf("\x0E\x01\x09\x04\x00\x03Ahhh... questo bimbo non vuole proprio\nchiudere occhio. Come devo fare? Ahhh...\n[1]Che cosa terribile[2]Dov'è sua madre?")
/*<127>*/ 			switch (choice(2)) {
          			  case 0:
/*<128>*/ 				printf("\x0E\x01\x09\x04\x00\x04Puoi dirlo forte...\nMa anche se frigna in continuazione è\nsempre il mio bimbino bello!\n\nPoi quando diventerai padre anche tu,\nmi darai ragione...")
          			  case 1:
/*<129>*/ 				printf("\x0E\x01\x09\x04\x00\x07Ah, mia moglie<pause0A>.<pause0A>.<pause0A>.\nÈ sempre stanca perché lavora alla\nbottega tutto il giorno.\n\n\x0E\x01\x09\x04\x0D\xF06E così di sera la lascio riposare...\nAh ah...")
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
/*< 99>*/ 					printf("\x0E\x01\x09\x04\x0C\x401Ehi Link!\nGrazie a te ho trovato una fidanzata\nmeravigliosa! Grazie mille!")
          				  case 1:
/*<796>*/ 					entrypoint_115_27();
          				}
          			  case 1:
/*<547>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 3072, 'next': 548, 'param3': 13}
/*<548>*/ 				printf("\x0E\x01\x09\x04\x00\x18Ehm... mmm...\n\n\n\n\x0E\x01\x09\x04\x0F\x1100Poniamo che tu abbia interesse nel\nsapere gli esiti di quell'incontro:\nsecondo te sarebbe una buona\nidea chiedere a lei direttamente?\n\x0E\x01\x09\x04\x11\xE00Cioè, questo non vuole dire che io\nabbia qualche interesse. È solo\ncuriosità per le emozioni umane\ne l'amore in generale...")
          			}
          		  case 1:
/*<132>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 546, 'param3': 31}
/*<546>*/ 			{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 1024, 'next': 92, 'param3': 13}
/*< 92>*/ 			printf("\x0E\x01\x09\x04\x00\x01Ehi, come va Link!")
/*<545>*/ 			printf("\x0E\x01\x09\x04\x01\xC09Eh?\n<b<Grudia >>ha ricevuto una lettera d'amore?\n\n\n\x0E\x01\x09\x04\x0F\x1100C\x2010capisco...\nInteressante...\nMmmh... ora capisco...\n\n\x0E\x01\x09\x04\x0C\xC54Ehm...\nC\x2010cosa intende fare lei?\n[1]Incontrarlo[2]Non so")
/*< 93>*/ 			switch (choice(2)) {
          			  case 0:
/*< 94>*/ 				printf("\x0E\x01\x09\x04\x11\xE53Cosa?!!!\nQu\x2010questo è un problema serio!")
          				flw_96:
/*< 96>*/ 				printf("\x0E\x01\x09\x04\x11\xE09... Comunque sia, non importa!\nNon c'è mica niente tra me e <b<Grudia>>!\nSiamo solo amici...\n\nPerciò sapere con chi esce non è affar\nmio. Io non ho niente da dire al\nriguardo.\n\n\x0E\x01\x09\x04\x0C\xC00Tuttavia! Mica posso stare\na guardare mentre i valori della\nscuola d'armi vengono corrotti!\n\n\x0E\x01\x09\x04\x08\xC00E poi, l'amore incondizionato non è il\nsolo vero amore? Anzi, secondo me,\nun amore non assoluto non è nemmeno\namore nel vero senso della parola.\n\x0E\x01\x09\x04\x0B\xC00Quindi, io devo assicurarmi\ndel fatto che lei possa godere\ndell'amore più incondizionato!\n\n\x0E\x01\x09\x04\x11\xE00Dopotutto, io ho il diritto di amare\nsenza impedimenti da chicchessia!\n\n\n\x0E\x01\x09\x04\x0C\xC1BO mi sbaglio?\nLink?\n[1]Non so[2]La ami?")
/*<119>*/ 				switch (choice(2)) {
          				  case 0:
/*<121>*/ 					printf("\x0E\x01\x09\x04\x0F\x1152C\x2010capisco. Ma adesso non è il momento\ndi parlare di cose del genere!")
          					flw_122:
/*<122>*/ 					printf("\x0E\x01\x09\x04\x10\x1117Comunque sia...\n\n\n\n\x0E\x01\x09\x04\x0F\xC00Non credo che per te sarebbe un problema\nchiederle qual è la sua decisione, vero?")
/*< 97>*/ 					story_flags[556 /* us: 805A9B16 0x20, jp: 805ACD96 0x20 */] = true;
/*<114>*/ 					story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
          				  case 1:
/*<120>*/ 					printf("\x0E\x01\x09\x04\x11\xE53N\x2010non dire sciocchezze, Link!\n\n\n\n\x0E\x01\x09\x04\x12\xC00Non capisco proprio come il tuo pensiero\nsia giunto a un'idea così salace!")
          					goto flw_122
          				}
          			  case 1:
/*< 95>*/ 				printf("\x0E\x01\x09\x04\x0F\x1118Ah, non lo sai, eh?\nQu\x2010questo mi dà parecchio fastidio...")
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
/*<257>*/ 			printf("\x0E\x01\x09\x04\x07\x1602Farò del mio meglio per diventare più\nforte. Torna a trovarmi per vedere i\nmiei progressi!")
          		  case 1:
/*<258>*/ 			switch (adventure_pouch_has(4 0x0004)) {
          			  case 0:
/*<278>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 277, 'param3': 32}
/*<277>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 260, 'param3': 13}
/*<260>*/ 				printf("\x0E\x01\x09\x04\x00\x11Uff... anf...\nLink, ma quella che hai lì\nè una <y<pozione levafatica>>, vero?\nMe la daresti?\n[1]Sì[2-]No")
          				flw_261:
/*<261>*/ 				switch (choice(2)) {
          				  case 0:
/*<263>*/ 					printf("\x0E\x01\x09\x04\x00\x0BDavvero?!\nGrazie!\nTi devo un favore!")
/*<266>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3092, 'param2': 7936, 'next': 271, 'param3': 13}
/*<271>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 270, 'param3': 6}
/*<270>*/ 					set_camera(5, 0)
/*<267>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 135, 'next': 265, 'param3': 6}
/*<265>*/ 					make_actor_do_something(0, 0)
/*<279>*/ 					set_camera(-1, 0)
/*<280>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 264, 'param3': 6}
/*<264>*/ 					printf("\x0E\x01\x09\x04\x00\x10Mamma mia!\nLa stanchezza è scomparsa!")
/*<268>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 269, 'param3': 13}
/*<269>*/ 					printf("\x0E\x01\x09\x04\x00\x12Ahh... Di questo passo non diventerò mai\nun granché forte.\n[1]Dipende\ndai tuoi sforzi[2]Certo\nche puoi!")
/*<281>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 291, 'param3': 13}
/*<291>*/ 					switch (choice(2)) {
          					  case 0:
/*<292>*/ 						printf("\x0E\x01\x09\x04\x00\x09Giusto!\nDevo solo impegnarmi.\nBasta stare qui a lamentarsi!")
          						flw_294:
/*<294>*/ 						printf("\x0E\x01\x09\x04\x00\x1800Grazie, Link.\nFarò del mio meglio per diventare più\nforte.\n\n\x0E\x01\x09\x04\x15\x1800Benissimo! Rimbocchiamoci le maniche\nallora! Torna a trovarmi, vedrai che\nprogressi.")
/*<295>*/ 						story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */] = true;
/*<213>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<293>*/ 						printf("\x0E\x01\x09\x04\x00\x1609Ah... capisco...\nBeh, se uno ci crede davvero tanto,\npuò forse ottenere grandi risultati.")
          						goto flw_294
          					}
          				  case 1:
/*<262>*/ 					printf("\x0E\x01\x09\x04\x00\x11Oh, capisco... Scusa, è stata una richiesta\nun po' egoista...")
/*<288>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': 3072, 'next': 287, 'param3': 13}
/*<287>*/ 					printf("\x0E\x01\x09\x04\x00\x03N\x2010non ti preoccupare!\nCe la faccio benissimo anche da solo!")
          				}
          			  case 1:
/*<275>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 274, 'param3': 32}
/*<274>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 276, 'param3': 13}
/*<276>*/ 				printf("\x0E\x01\x09\x04\x00\x11Uff... ranf...\nNon ce la faccio più...\n\n\nSe solo avessi <r<una pozione in grado\ndi alleviare la fatica>>, forse potrei\ncontinuare un altro po'...")
/*<290>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 289, 'param3': 13}
/*<289>*/ 				printf("\x0E\x01\x09\x04\x00\x03Oh, amico!\nDevo davvero rimettermi in forma!\n\n\nMi sa che devo farcela solo con\nle mie forze!")
          			}
          		}
          	  case 1:
/*<259>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 273, 'param3': 31}
/*<273>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 272, 'param3': 32}
/*<272>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': 6912, 'next': 254, 'param3': 13}
/*<254>*/ 		printf("\x0E\x01\x09\x04\x00\x10Uff... Anf...\nUeiii...\n\n\n\x0E\x01\x09\x04\x10\x1600Ehilà! Link!\nBuona sera.\n\n\nChe cosa sto facendo?\nCome puoi vedere, mi sto allenando!\n\n\nNon riesco a sollevare nemmeno un\nbarile, perciò voglio migliorare. Voglio\ndiventare un po' più forte.\n\n\x0E\x01\x09\x04\x00\x1711Però mi vergogno, quindi lo faccio di\nnotte quando nessuno mi vede...")
/*<255>*/ 		story_flags[388 /* us: 805A9B0D 0x40, jp: 805ACD8D 0x40 */] = true;
/*<282>*/ 		switch (adventure_pouch_has(4 0x0004)) {
          		  case 0:
/*<284>*/ 			printf("\x0E\x01\x09\x04\x00\x0BOh!\nLink, ma quella che hai\nlì è una <y<pozione levafatica>>, vero?\nMe la daresti?\n[1]Sì[2-]No")
          			goto flw_261
          		  case 1:
/*<283>*/ 			printf("Ahh... Se solo avessi <r<una pozione\nin grado di alleviare la fatica>>, allora\nforse sarei in grado di continuare...")
/*<286>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 285, 'param3': 13}
/*<285>*/ 			printf("\x0E\x01\x09\x04\x00\x03Oh, amico!\nDevo davvero rimettermi in forma!\n\n\nMi sa che devo farcela solo con\nle mie forze!")
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
/*<682>*/ 				printf("\x0E\x01\x09\x04\x00\x08Ancora tu, Link!\nStanotte ho la mente occupata a pensare\na Grudia!\n\nSe hai bisogno di me, vieni a cercarmi\ndurante il giorno. Ora sparisci!")
          			}
          		  case 1:
          			goto flw_534
          		}
          	  case 1:
/*<532>*/ 		printf("\x0E\x01\x09\x04\x00\x10Eh eh eh...\nNon ho paura di <b<Bado>>...\nOra la sua stanza appartiene a me!")
          	}
          }

          void entrypoint_115_07() {
/*<298>*/ 	start()
/*<299>*/ 	switch (story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */]) {
          	  case 0:
/*<745>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 302, 'param3': 31}
/*<302>*/ 		switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
          		  case 0:
/*<304>*/ 			printf("\x0E\x01\x09\x04\x00\x02Link!\nTi farò vedere quanto diventerò forte!\nNon crederai ai tuoi occhi!")
          		  case 1:
/*<300>*/ 			switch (adventure_pouch_has(4 0x0004)) {
          			  case 0:
/*<332>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 331, 'param3': 32}
/*<331>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 305, 'param3': 13}
/*<305>*/ 				printf("\x0E\x01\x09\x04\x00\x10Uff... anf...\n\n\n\nEhi Link.\nNon è che mi daresti un po' di\n<y<pozione levafatica>>?\n[1]Certo[2-]No")
          				flw_306:
/*<306>*/ 				switch (choice(2)) {
          				  case 0:
/*<308>*/ 					printf("\x0E\x01\x09\x04\x00\x0BDavvero?\nGrazie!\nLa prendo volentieri!")
/*<333>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3092, 'param2': 7936, 'next': 312, 'param3': 13}
/*<312>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 311, 'param3': 6}
/*<311>*/ 					set_camera(5, 0)
/*<310>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 135, 'next': 309, 'param3': 6}
/*<309>*/ 					make_actor_do_something(0, 0)
/*<334>*/ 					set_camera(-1, 0)
/*<335>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 345, 'param3': 6}
/*<345>*/ 					printf("\x0E\x01\x09\x04\x00\x10Oooh! Mi sento rinvigorito!\nLa stanchezza è svanita!")
/*<347>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 346, 'param3': 13}
/*<346>*/ 					printf("\x0E\x01\x09\x04\x00\x12A volte però mi preoccupo.\nTemo che l'allenamento non\nsia efficace.\n\nPer quanto tempo dovrò allenarmi\nprima di diventare forte?\nChe ne dici, Link?\n\nQuante flessioni devo fare\nsecondo te per diventare forte?\n\n[1]Circa 1000[2]Dipende")
/*<348>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3073, 'param2': 2048, 'next': 349, 'param3': 13}
/*<349>*/ 					switch (choice(2)) {
          					  case 0:
/*<350>*/ 						printf("\x0E\x01\x09\x04\x00SC\x2010così tante...?!\n\x0E\x01\x09\x04\x10\xE00Capisco...\n\n\nLa via della forza è costellata\ndi difficoltà!")
          						flw_352:
/*<352>*/ 						printf("\x0E\x01\x09\x04\x01\x1600Ci sono!\nDiventerò sicuramente fortissimo!\n\x0E\x01\x09\x04\x00\x1800Torna presto a trovarmi\ne vedrai!")
/*<353>*/ 						story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */] = true;
/*<354>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<351>*/ 						printf("\x0E\x01\x09\x04\x00\x07Non è una questione di numeri?\n... Capisco!\n\n\n\x0E\x01\x09\x04\x07\x800Vuoi dire che devo continuare\nfinché perdo il conto, vero?")
          						goto flw_352
          					}
          				  case 1:
/*<307>*/ 					printf("\x0E\x01\x09\x04\x00\x11Capisco...\nScusa la faccia tosta.")
/*<344>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 343, 'param3': 13}
/*<343>*/ 					printf("Va bene! Per l'allenamento conterò\nsolo sulle mie forze!")
          				}
          			  case 1:
/*<330>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 329, 'param3': 32}
/*<329>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 303, 'param3': 13}
/*<303>*/ 				printf("\x0E\x01\x09\x04\x00\x11Uff... ranf...\nNon ce la faccio più...\n\n\nSe solo avessi <r<una pozione in grado\ndi alleviare la fatica>>, forse potrei\ncontinuare un altro po'...")
/*<342>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 341, 'param3': 13}
/*<341>*/ 				printf("\x0E\x01\x09\x04\x00\x03No, no...\nNon è che posso sempre chiedere favori\nagli altri.\n\nDevo farcela solo con le mie forze!\n")
          			}
          		}
          	  case 1:
/*<301>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 328, 'param3': 31}
/*<328>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 327, 'param3': 32}
/*<327>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': 6912, 'next': 296, 'param3': 13}
/*<296>*/ 		printf("\x0E\x01\x09\x04\x00\x10Uff... ueiii...\nBuona serata, Link.\n\n\n\x0E\x01\x09\x04\xC10\xFF00Dall'ultima volta che abbiamo\nparlato, mi sono allenato\nmoltissimo, ma mi sa che\nsto per avere un collasso.\nForse sono troppo stanco!")
/*<297>*/ 		story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */] = true;
/*<336>*/ 		switch (adventure_pouch_has(4 0x0004)) {
          		  case 0:
/*<338>*/ 			printf("\x0E\x01\x09\x04\x00\x0BAh!\nLink, è una <y<pozione levafatica\n>>quella che hai lì con te?\n\nNon è che me ne daresti un po'?\n[1]Certo[2-]No")
          			goto flw_306
          		  case 1:
/*<337>*/ 			printf("Ehi, Link.\nNon è che avresti dell'altra\n<y<pozione levafatica>>?")
/*<340>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 339, 'param3': 13}
/*<339>*/ 			printf("\x0E\x01\x09\x04\x00\x03No, no...\nNon è che posso sempre chiedere favori\nagli altri.\n\nDevo farcela solo con le mie forze!\n")
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
/*< 66>*/ 			printf("")
          		  case 1:
/*<679>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 686, 'param3': 31}
/*<686>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 687, 'param3': 47}
/*<687>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 689, 'param3': 15}
/*<689>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 690, 'param3': 16}
/*<690>*/ 			set_camera(27, 0)
/*<829>*/ 			make_actor_do_something(4, 0)
/*<688>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 568, 'param3': 48}
/*<568>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3072, 'next': 59, 'param3': 13}
/*< 59>*/ 			printf("\x0E\x01\x09\x04\x00\x02Oi, Link!\nHai consegnato la mia lettera?\n[1]Veramente...[2]Quale?")
/*< 60>*/ 			switch (choice(2)) {
          			  case 0:
/*< 62>*/ 				printf("\x0E\x01\x09\x04\x11\x1F1DC\x2010cosa?!\nL'hai data alla voce del gabinetto...?!")
          				flw_64:
/*< 64>*/ 				printf("\x0E\x01\x09\x04\x01\x1F00Ma ti avevo esplicitamente detto di\nnon dargliela!\nTe l'avrò ripetuto un miliardo\ndi volte...!\n\x0E\x01\x09\x04\x1A\x1F17Non sopporto gli idioti!\nChiunque ostacoli le vie del vero amore\nmerita di essere preso a calci da\nun solcanubi!\nLa nostra amicizia finisce qui!\nTi odio, Link!")
/*<692>*/ 				{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 7936, 'next': 683, 'param3': 13}
/*<683>*/ 				{'type': 'type3', 'subType': 2, 'param1': 14, 'param2': 0, 'next': 691, 'param3': 14}
/*<691>*/ 				printf("\x0E\x01\x09\x04\x00\x1F18Nooooooooooo...!!!")
/*<697>*/ 				{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 256, 'next': 698, 'param3': 15}
/*<698>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 696, 'param3': 6}
/*<696>*/ 				set_camera(28, 0)
/*<695>*/ 				{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 1024, 'next': 693, 'param3': 13}
/*<693>*/ 				{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 0, 'next': 65, 'param3': 14}
/*< 65>*/ 				story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */] = true;
/*<707>*/ 				story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
/*<708>*/ 				story_flags[771 /* us: 805A9B2A 0x08, jp: 805ACDAA 0x08 */] = true;
/*<694>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*< 63>*/ 				printf("\x0E\x01\x09\x04\x15\x1F12M\x2010ma... tu!\nTi ha dato di volta il cervello...?!\n\n\n\x0E\x01\x09\x04\x11\x1B00Alla voce del gabinetto...?\nDavvero l'hai data alla voce chiusa\nnel gabinetto?")
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
/*<544>*/ 				printf("\x0E\x01\x09\x04\x00\x0FAhhh...\nFinalmente, <b<Grudia>> è a\nconoscenza dei miei sentimenti.\n\x0E\x01\x08\x02\xFFCD\x0E\x01\x09\x04\x01\x1F00Ora cosa dovrei fare...?\nSento le farfalle nello stomaco...")
          			  case 1:
/*<567>*/ 				{'type': 'type3', 'subType': 4, 'param1': 24, 'param2': 6912, 'next': 542, 'param3': 13}
/*<542>*/ 				printf("\x0E\x01\x09\x04\x00\x13Cosa?!\nHai dato la lettera a <b<Grudia>>, la nostra\ncompagna di corso...?!\n\n\x0E\x01\x09\x04\x01\x2500Oh, per mille nubi!!!\nE... e ora che faccio?\nForse dovrei andare a sentire\ncosa mi risponde...\n\x0E\x01\x08\x02\xFFCD\x0E\x01\x09\x04\x01\x1F00Ah, ma... che imbarazzo...")
/*<543>*/ 				story_flags[664 /* us: 805A9B1F 0x40, jp: 805ACD9F 0x40 */] = true;
          			}
          		  case 1:
/*<566>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 40, 'param3': 13}
/*< 40>*/ 			printf("\x0E\x01\x09\x04\x00\x02Sai cosa fare, Link.\nConsegna la lettera alla nostra\ncompagna di corso col <r<cappello tondo>>.\n\n\x0E\x01\x09\x04\x01\x1B00E non portarla \x201Cper sbaglio\" a quel\n<r<tizio nel gabinetto>>!\nNon ti permettere, sai!")
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
/*<251>*/ 				printf("Uoooh...!")
          			  case 1:
/*<249>*/ 				printf("3985... 3986...\n3987... 3988...")
/*<844>*/ 				temp_flags[53 /* 0x7 20 */] = true;
          			}
          		  case 1:
/*<245>*/ 			switch (temp_flags[53 /* 0x7 20 */]) {
          			  case 0:
/*<247>*/ 				printf("Nuoooh... gunuoooh...")
          			  case 1:
/*<244>*/ 				printf("\x0E\x01\x06\x02\xFECD55... 56... 57...")
/*<843>*/ 				temp_flags[53 /* 0x7 20 */] = true;
          			}
          		}
          	  case 1:
/*<242>*/ 		switch (temp_flags[53 /* 0x7 20 */]) {
          		  case 0:
/*<246>*/ 			printf("Guh... goh... goh...")
          		  case 1:
/*<240>*/ 			printf("\x0E\x01\x06\x02\xFCCD5... 6... 7...")
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
/*<321>*/ 			printf("\x0E\x01\x09\x04\x15\x180APotrei continuare a oltranza! Presto sarò\nin grado di sollevare una botte con un\nsolo dito.")
          		  case 1:
/*<322>*/ 			printf("\x0E\x01\x09\x04\x15\x180AGrunt...\nPotrei continuare senza problemi...")
          		}
          	  case 1:
/*<323>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 315, 'param3': 31}
/*<315>*/ 		printf("\x0E\x01\x09\x04\x15\x190AGrunt...\nPotrei continuare per sempre!\n\n\n\x0E\x01\x09\x04\x01\x1600... Ehi Link!\nCaschi a fagiolo.\nVolevo chiederti una cosa.\n\n\x0E\x01\x09\x04\x07\x1800L'altro giorno ho provato a sollevare\ndelle botti. Ce l'ho fatta con una mano\nsola!\n\n\x0E\x01\x09\x04\x00\x1600Questo significa che ho messo su un\nsacco di muscoli!\n\n\nChe ne pensi, Link?\nSono diventato più forte?\n[1]Troppo[2]Certo")
/*<317>*/ 		switch (choice(2)) {
          		  case 0:
/*<319>*/ 			printf("\x0E\x01\x09\x04\x07\x1809Eh? Secondo me mi stai lusingando\nun po' troppo. Ma... ti ascolto con\ngrande piacere!")
          			flw_320:
/*<320>*/ 			printf("\x0E\x01\x09\x04\x00\x1600Tutto quello che ho ottenuto è merito\ntuo, Link.\n\n\n\x0E\x01\x09\x04\x01\x1900Se tu non mi avessi incoraggiato mi\nsarei fatto prendere dallo sconforto.\n\n\n\x0E\x01\x09\x04\x07\x180BGrazie mille, Link!")
/*<324>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
/*<316>*/ 			story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */] = true;
/*<325>*/ 			give_gratitude_crystals();
          		  case 1:
/*<318>*/ 			printf("\x0E\x01\x09\x04\x00\x180BDavvero? Grazie!\nSono felicissimo.")
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
/*<789>*/ 				printf("\x0E\x01\x09\x04\x0B\xE09Ehi Link!\nGrazie per aver aiutato mia sorella.\nNon dimenticherò quello che hai fatto\nper me!")
          			  case 1:
/*<772>*/ 				entrypoint_115_26();
          			}
          		  case 1:
/*<742>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 731, 'param3': 31}
/*<731>*/ 			switch (story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */]) {
          			  case 0:
/*<214>*/ 				printf("\x0E\x01\x09\x04\x0B\xE09Link!\nMia sorella è tornata a casa\nsana e salva!\n\n\x0E\x01\x09\x04\n\x400Ahh! Che sollievo!\nEro così preoccupato per quello\nche le è successo!\n\n\x0E\x01\x09\x04\x0B\x400Tutto grazie a te, Link.\nGrazie ancora!")
/*<216>*/ 				story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */] = true;
/*<787>*/ 				temp_flags[11 /* 0x0 08 */] = true;
/*<732>*/ 				give_gratitude_crystals();
          			  case 1:
/*<734>*/ 				printf("\x0E\x01\x09\x04\x0B\xE09Link!\nMia sorella è tornata sana e salva!\n\x0E\x01\x09\x04\n\x400Che sollievo!\nEro veramente in pensiero!\n\nCosa?! Hai dato a mia sorella la\nmedicina per il solcanubi?<pause14>\n\x0E\x01\x09\x04\x0B\x400Grazie davvero!\nNon ho nient'altro da darti come\nricompensa...\nPrendi questo!")
/*<738>*/ 				switch (is_adventure_pouch_full()) {
          				  case 0:
/*<739>*/ 					switch (is_item_check_full()) {
          					  case 0:
/*<740>*/ 						printf("\x0E\x01\x09\x04\x0B\xA05Pensavo di darti questa <y<ampolla>> ma...\nvedo che la tua borsa è piena e hai\nriempito anche il deposito!\n\nSvuota la tua borsa o liberati di qualche\noggetto consegnato al deposito e torna da\nme. Te la conservo io!")
          					  case 1:
          						flw_735:
/*<735>*/ 						story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */] = true;
/*<736>*/ 						story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */] = true;
/*<733>*/ 						give_item(153 0x99);
/*<786>*/ 						temp_flags[11 /* 0x0 08 */] = true;
/*<812>*/ 						printf("\x0E\x01\x09\x04\x0B\x400Ma è una cosa che si può usare in tanti\nmodi differenti!\nGrazie davvero!")
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
/*<205>*/ 						printf("\x0E\x01\x09\x04\x0B\x409Cosa c'è ora, Link?\nPorta le <y<spore di fungo >>a mia\nsorella il prima possibile!\n\x0E\x01\x09\x04\n\x400Conto su di te!")
          					  case 1:
/*<201>*/ 						printf("\x0E\x01\x09\x04\x0B\x406Eh? Che ne hai fatto delle <y<spore\ndi fungo>>?\nNon gliele hai ancora date?\n\n\x0E\x01\x09\x04\n\x400Beh, se hai perso le <y<spore di fungo >>che\nti ho dato, allora <r<raccogline altre dai\nfunghi>>.\nConto su di te Link!")
          					}
          				  case 1:
/*<220>*/ 					switch (story_flags[395 /* us: 805A9B0C 0x80, jp: 805ACD8C 0x80 */]) {
          					  case 0:
/*<221>*/ 						printf("\x0E\x01\x09\x04\x0B\x409Oh! Hai un po' di spazio nella tua\nborsa. Bene allora, prendi queste.\n\n\n<y<\x0E\x01\x09\x04\n\x400>>Sono delle<y< spore di fungo>>.\nGuariranno la ferita del\nsolcanubi.")
          						flw_231:
/*<231>*/ 						switch (is_adventure_pouch_full()) {
          						  case 0:
/*<228>*/ 							printf("\x0E\x01\x09\x04\x00\x50DAh, hai troppe cose!\n\x0E\x01\x09\x04\x00\x400Fai un po' di spazio nella tua borsa\ne torna da me!")
/*<229>*/ 							story_flags[395 /* us: 805A9B0C 0x80, jp: 805ACD8C 0x80 */] = true;
          						  case 1:
/*<746>*/ 							story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */] = true;
/*<230>*/ 							give_item(55 0x37);
/*<747>*/ 							story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */] = false;
/*<232>*/ 							printf("\x0E\x01\x09\x04\x0B\x404Con queste il suo solcanubi guarirà\nin un battibaleno. Così potrà\nritornare a casa!\n\x0E\x01\x09\x04\x00\xC00Portale a mia sorella!\n\x0E\x01\x09\x04\x00\x400Potrai tenere l'<r<ampolla>>\nquando le avrai dato il contenuto!\n\n\nConto su di te Link!")
/*<227>*/ 							story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */] = true;
          						}
          					  case 1:
          						flw_199:
/*<199>*/ 						printf("\x0E\x01\x09\x04\x0B\x50DCosa!?\nHai visto mia sorella!?\nIl suo solcanubi è ferito e non può\nvolare?!\n\x0E\x01\x09\x04\n\xC00Ma è terribile!\nTi prego, portale questo il prima\npossibile!\n\n<y<\x0E\x01\x09\x04\x00\x400>>Sono delle <y<spore di fungo>>.\nCon queste il solcanubi guarirà.")
          						goto flw_231
          					}
          				}
          			  case 1:
/*<184>*/ 				printf("\x0E\x01\x09\x04\n\xC12Oh, cielo...\nSono preoccupato...\nMolto preoccupato!\n\nLe faccio sempre portare un'<r<ampolla>>\ndi medicina per i solcanubi per stare\ntranquillo nel caso in cui dovesse\nsuccedere qualcosa di brutto.\nMa giusto oggi è uscita dimenticandosi\ndi portarsela dietro!")
/*<835>*/ 				make_actor_do_something(0, 0)
/*<836>*/ 				printf("\x0E\x01\x09\x04\x0D\x400Mia sorella era incuriosita da\nquell'<b<isola che ricorda una roulette>>,\nquindi penso si sia diretta a <r<sud\x2010ovest>>.")
/*<837>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 838, 'param3': 17}
/*<838>*/ 				printf("\x0E\x01\x09\x04\x01\x400Senti, potresti provare a cercarla,\nLink?")
          			}
          		  case 1:
/*<202>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 177, 'param3': 31}
/*<177>*/ 			printf("\x0E\x01\x09\x04\n\xC12Oh, cielo...\nSono preoccupato, molto preoccupato...\n[1]Che c'è?[2]Calmati")
/*<178>*/ 			switch (choice(2)) {
          			  case 0:
/*<179>*/ 				printf("\x0E\x01\x09\x04\x00\x411Ehi, Link.\nHai un momentino per me?\nGrazie.")
          				flw_181:
/*<181>*/ 				printf("\x0E\x01\x09\x04\x00\x400La <r<mia sorellina>> è andata a fare un giro\nper i cieli, ma non è ancora tornata.\n\n\nSi è fatto tardi, così sono andato\na cercarla dappertutto...\nMa non sono riuscito a trovarla!\n\n\x0E\x01\x09\x04\x0B\x500E se le fosse successo qualcosa?\nSono preoccupatissimo!")
/*<198>*/ 				switch (story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */]) {
          				  case 0:
/*<219>*/ 					story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */] = true;
          					goto flw_199
          				  case 1:
/*<197>*/ 					printf("\x0E\x01\x09\x04\x00\x411Ehi Link,\nti dispiacerebbe aiutarmi a cercarla?")
/*<831>*/ 					make_actor_do_something(0, 0)
/*<832>*/ 					printf("\x0E\x01\x09\x04\x0D\x400Ultimamente era incuriosita da\nquell'<b<isola che ricorda una roulette>>,\nquindi penso possa essersi diretta\na <r<sud\x2010ovest>>.")
/*<833>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 834, 'param3': 17}
/*<834>*/ 					printf("\x0E\x01\x09\x04\x01\x400Conto su di te, Link!")
/*<182>*/ 					story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */] = true;
          				}
          			  case 1:
/*<180>*/ 				printf("\x0E\x01\x09\x04\x0B\x500Non riesco a calmarmi!\n... Mi dispiace.\nNon c'è ragione di sbraitarti in faccia.")
          				goto flw_181
          			}
          		}
          	}
          }

          void entrypoint_115_26() {
/*<762>*/ 	start()
/*<765>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<766>*/ 		printf("\x0E\x01\x09\x04\x0B\x409Mi hanno detto che l'Isola della Dea\nè svanita!!! Ma è terribile...\n\n\n\x0E\x01\x09\x04\n\x400Sta sicuramente per succedere qualcosa\ndi brutto.")
          		flw_790:
/*<790>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
          		  case 1:
/*<791>*/ 			switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          			  case 0:
/*<792>*/ 				printf("\x0E\x01\x09\x04\x01\x400<b<Dacio>> ha detto di aver trovato un\n<r<insetto raro>>. Era contentissimo e stava\nandando verso Cumulonembo.\n\nCredo proprio che non passerà\nl'esame neanche la prossima volta,\nse continua così!")
          			  case 1:
/*<767>*/ 				switch (story_flags[811 /* us: 805A9B31 0x08, jp: 805ACDB1 0x08 */]) {
          				  case 0:
/*<771>*/ 					printf("\x0E\x01\x09\x04\x01\x400Quel <b<Dacio >>ha detto che sta\ncollezionando degli insetti su un'isola\nall'<r<interno di Cumulonembo >>per creare\nun giardino entomologico!")
          				  case 1:
/*<770>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 768, 'param3': 31}
/*<768>*/ 					printf("\x0E\x01\x09\x04\n\xA00Ehi, tu hai un compagno di corso\nche si chiama <b<Dacio>>, giusto?\n\n\nHa detto di aver scoperto un luogo\nideale per l'allevamento di insetti\nall'<r<interno di Cumulonembo>>.\nQuel tipo è proprio strambo!\n\x0E\x01\x09\x04\x0B\x400Mi chiedo cosa abbia davvero\nintenzione di fare quando parla\ndi giardino entomologico...")
/*<769>*/ 					story_flags[811 /* us: 805A9B31 0x08, jp: 805ACDB1 0x08 */] = true;
          				}
          			}
          		}
          	  case 1:
/*<810>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<811>*/ 			printf("\x0E\x01\x09\x04\x00\x01Poco fa mi è sembrato di sentire un\ngran fracasso, come di una frana...\nChe sia successo qualcosa?")
          			goto flw_790
          		  case 1:
/*<774>*/ 			switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          			  case 0:
/*<775>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ma hai combinato qualcosa lì in piazza,\nprima?! Ho la sensazione che il cielo si\nsia rischiarato, o mi sbaglio?!")
          				goto flw_790
          			  case 1:
/*<773>*/ 				switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          				  case 0:
/*<764>*/ 					printf("\x0E\x01\x09\x04\n\x405Mi chiedo perché mai le farfalle si\nradunino in una piazza vuota... lo\ntrovo estremamente strano!")
          					goto flw_790
          				  case 1:
/*<841>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*<842>*/ 						printf("\x0E\x01\x09\x04\x00\x01Ciao, Link!\nVai sempre in giro, pieno di cose\nda fare, eh!")
          						goto flw_790
          					  case 1:
/*<779>*/ 						switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          						  case 0:
/*<784>*/ 							switch (story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */]) {
          							  case 0:
/*<783>*/ 								printf("\x0E\x01\x09\x04\x00\x01Ehi, Link!\nUltimamente non ho visto in giro quei\ntre bulli...\n\nNon sono stati promossi alla classe\nsuperiore e forse hanno imparato una\nlezione, magari si sono rinchiusi\nnelle loro stanze a studiare!")
          							  case 1:
/*<785>*/ 								printf("\x0E\x01\x09\x04\x00\x01Ehi, Link! Sai, sono\nandato anche io a dare un'occhiata\nall'Isola della roulette, visto che mia\nsorella ne era così entusiasta!\nLa persona che sta lì dice che il <r<disco\ndella roulette>> è caduto oltre le nubi...\nCredo che dovrà rassegnarsi,\nallora, se è davvero caduto giù!")
          							}
          						  case 1:
/*<776>*/ 							switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          							  case 0:
/*<782>*/ 								printf("\x0E\x01\x09\x04\n\x405Hai visto quel fascio luminoso che è\nvenuto fuori dalla Torre della luce e\npunta verso Cumulonembo?!\n\nNon so, è come se volesse suggerire\ndi andare verso Cumulonembo...")
          							  case 1:
/*<840>*/ 								switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          								  case 0:
          									flw_780:
/*<780>*/ 									printf("\x0E\x01\x09\x04\x00\x01Ehi, Link!\nNon vedo in giro Zelda da un po' di\ntempo, che è successo?")
          								  case 1:
/*<778>*/ 									switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          									  case 0:
/*<781>*/ 										printf("\x0E\x01\x09\x04\x00\x01Ehi Link!\n\n\n\n\x0E\x01\x09\x04\n\x400<r<Due torri del vento>>, dici?!\n<pause1E>Mi spiace, ma a me gli indovinelli e\ncose del genere non piacciono per\nnulla... Perché non vai da un <r<indovino>>?")
          									  case 1:
/*<777>*/ 										switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          										  case 0:
          											goto flw_780
          										  case 1:
/*<763>*/ 											printf("\x0E\x01\x09\x04\x0B\xE09Ehi Link!\nGrazie per aver aiutato mia sorella.\nNon dimenticherò quello che hai fatto\nper me!")
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
/*<818>*/ 		printf("\x0E\x01\x09\x04\x0C\x401Hai sentito?\nL'Isola della Dea è caduta!\n<pause1E>Ne succedono di cose tristi! \x0E\x01\x09\x04\x11\xE00\nMa io...\nRicordo bene il messaggio che ho\nricevuto dalla Dea. Mi disse che, anche\nin sua assenza, avrei dovuto essere\nforte e continuare ad andare avanti.")
/*<819>*/ 		switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          		  case 0:
/*<820>*/ 			printf("\x0E\x01\x09\x04\x0C\x40B\x0E\x01\x08\x02\xFECDE poi io ho già la mia Dea...")
          		  case 1:
          		}
          	  case 1:
/*<815>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<817>*/ 			printf("\x0E\x01\x09\x04\x00\x1101Ehi, Link!\nTi dico una cosa, ma non devi dirla\na nessuno...\n\x0E\x01\x09\x04\x0C\x400Prima, sono uscito per fare due passi...\ne da sotto l'Isola della Dea sono\nsbucate delle misteriose rovine.\n\x0E\x01\x09\x04\x11\xE00Ma che caspita sta succedendo\na Oltrenuvola?!")
          		  case 1:
/*<702>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<703>*/ 				printf("\x0E\x01\x09\x04\x00\x05Ehi Link!\nUltimamente ti vedo bello ottimista.\n\n\n\x0E\x01\x09\x04\x00\x40BQuesto è lo spirito giusto! <pause14>\nZelda tornerà a casa prima che tu te ne\nrenda conto. Devi solo crederci e\nsperare con tutte le tue forze!")
          			  case 1:
/*<700>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<701>*/ 					printf("\x0E\x01\x09\x04\x00\x01Ehi Link!\nCome va?\n\n\n\x0E\x01\x09\x04\x0C\x1400Cosa?! La Triforza nascosta\ndalla Dea?\n\n\n\x0E\x01\x09\x04\x10\x1100Ehm, non ne so granché...\n\n\n\n\x0E\x01\x09\x04\x08\x1400Se ti interessa questo genere di\ncose, dovresti provare a chiedere\na qualche maestro.")
          				  case 1:
/*<663>*/ 					switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          					  case 0:
/*<662>*/ 						printf("\x0E\x01\x09\x04\x00\x05Ehi Link!\nUltimamente ti vedo bello ottimista.\n\n\n\x0E\x01\x09\x04\x00\x40BQuesto è lo spirito giusto! <pause14>\nZelda tornerà a casa prima che tu te ne\nrenda conto. Devi solo crederci e\nsperare con tutte le tue forze!")
          					  case 1:
/*<661>*/ 						switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          						  case 0:
/*<660>*/ 							printf("\x0E\x01\x09\x04\x00\x01Ehi Link!\nCome stai?\nTi senti un po' meglio, spero.\n\n\x0E\x01\x09\x04\x09\x1400Sai, anch'io ho i miei problemi.\nMa di fronte alla gente mi faccio forza.\n\n\n\x0E\x01\x09\x04\x11\x400È un buon modo per liberarsi dalla\ntristezza, sai?\nSi dovrebbe vivere tutta la vita\nfacendosi forza!")
          						  case 1:
/*< 90>*/ 							printf("\x0E\x01\x09\x04\x00\x01Ehi Link!\nSei stato promosso finalmente!\nQuella divisa ti sta benissimo!\n\n\x0E\x01\x09\x04\x10\x1100Ma bando alle ciance...\nZelda è scomparsa e io non riesco\nancora a crederci...\n\n\x0E\x01\x09\x04\x0C\x1400Tu e lei siete stati sempre così amici.\nDevi essere preoccupatissimo!\n\n\n\x0E\x01\x09\x04\x08\x1400Ma ho la sensazione che Zelda stia\nbene! Devi solo sperare e aspettare\nche ritorni a casa!")
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
/*<207>*/ 				printf("\x0E\x01\x09\x04\x00\x0BOh! <y<Spore di fungo>>!\nChe sollievo!\nMi hai salvata!\n[1]Ecco a te[2-]Non te\nle do")
          				flw_208:
/*<208>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_210:
/*<210>*/ 					printf("\x0E\x01\x09\x04\x0B\x409Grazie! Ora posso curare la ferita\ndel mio solcanubi!")
/*<607>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 610, 'param3': 47}
/*<610>*/ 					{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 224, 'param3': 15}
/*<224>*/ 					make_actor_do_something(0, 0)
/*<647>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 646, 'param3': 6}
/*<646>*/ 					{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 256, 'next': 234, 'param3': 15}
/*<234>*/ 					set_camera(7, 0)
/*<235>*/ 					{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': -256, 'next': 608, 'param3': 13}
/*<608>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 236, 'param3': 48}
/*<236>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 233, 'param3': 6}
/*<233>*/ 					printf("\x0E\x01\x09\x04\x00\x04Con queste il solcanubi si sentirà\nsubito meglio!")
/*<237>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 581, 'param3': 6}
/*<581>*/ 					make_actor_do_something(1, 0)
/*<609>*/ 					set_camera(24, 0)
/*<238>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 1280, 'next': 222, 'param3': 13}
/*<222>*/ 					printf("\x0E\x01\x09\x04\x00\x09Pensavo fossimo spacciati.\nSei stato di grandissimo aiuto.\n\n\nHai salvato la mia vita e quella del\nmio solcanubi!\nGrazie!")
/*<225>*/ 					give_gratitude_crystals();
/*<223>*/ 					printf("\x0E\x01\x09\x04\x00\x04Benissimo, ce ne andiamo.\nCi rivediamo al villaggio, allora!")
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
/*<209>*/ 					printf("\x0E\x01\x09\x04\x00\x1113Cattivo!")
          				}
          			  case 1:
/*<730>*/ 				printf("\x0E\x01\x09\x04\x00\x50BEhi! Mi daresti le tue spore di fungo\nper farlo guarire?\n[1]Sì[2-]No")
          				goto flw_208
          			}
          		  case 1:
/*<226>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 196, 'param3': 31}
/*<196>*/ 			printf("<r<\x0E\x01\x09\x04\x00\x01<r<Il mio fratellone ha una medicina per\nsolcanubi<r<.\n>>Vallo a cercare.\n\nIo ti aspetto qui, devo\nrincuorare il mio solcanubi.")
          		}
          	  case 1:
/*<203>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 188, 'param3': 31}
/*<188>*/ 		printf("\x0E\x01\x09\x04\x00\x50BOh, guarda chi si vede!\nLink!\nChe bello incontrarti!\n\n\x0E\x01\x09\x04\x12\x200Il mio solcanubi è rimasto ferito\nmentre stavo facendo un giro,\ne ora non può più volare.\n\n\x0E\x01\x09\x04\x01\x1500Sono riuscita a effettuare un\natterraggio d'emergenza, ma ora\nnon so come tornare a casa.\n\n\x0E\x01\x09\x04\x12\x1500Insomma, non posso tornare\na casa finché non sarò in grado\ndi curare la ferita del mio solcanubi.\n\n<r<Ho bisogno di una medicina.>>\nOvviamente, una medicina per esseri\numani non va bene. Ci vuole <r<una\nmedicina per solcanubi>>.\nSì, Link,\x0E\x01\x09\x04\x15\x200 mi serve il tuo\naiuto. Mi procureresti una medicina\nper solcanubi?\n[1]Certo[2]Non ora")
/*<189>*/ 		switch (choice(2)) {
          		  case 0:
/*<190>*/ 			printf("\x0E\x01\x09\x04\x0B\x409Grazie!\nSei ineguagliabile.")
          			flw_192:
/*<192>*/ 			printf("<r<Il mio fratellone ha una medicina per\nsolcanubi.>>\nVallo a cercare.\n\nCredo sia molto preoccupato.\nSecondo me se ne sta <r<da qualche parte\nnella piazza di Oltrenuvola >>ad\nattendere il mio ritorno.")
/*<727>*/ 			story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */] = true;
/*<725>*/ 			switch (adventure_pouch_has(5 0x0005)) {
          			  case 0:
/*<726>*/ 				printf("\x0E\x01\x09\x04\x09\x509Ma hai la medicina, allora!\nPotevi dirmelo! Mi servono giusto delle\n<y<spore di fungo >>per farlo guarire!\n\nMe le daresti?\n[1]Sì[2-]No")
/*<728>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_210
          				  case 1:
/*<737>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 4352, 'next': 729, 'param3': 13}
/*<729>*/ 					printf("No? Beh, pazienza...\nPotresti almeno andare da mio\nfratello e dirgli che lo aspetto qui?")
          				}
          			  case 1:
/*<187>*/ 				switch (story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */]) {
          				  case 0:
/*<193>*/ 					printf("Eh? Hai già parlato con lui?\nBene, allora è tutto più facile.")
          					flw_194:
/*<194>*/ 					printf("Io ti aspetto qui, devo rincuorare il mio\nsolcanubi. Conto su di te. Grazie!")
          				  case 1:
          					goto flw_194
          				}
          			}
          		  case 1:
/*<191>*/ 			printf("\x0E\x01\x09\x04\x0C\x1513Che... crudele che sei!\n\n\n\n\x0E\x01\x09\x04\x0B\x409... Sì, scherzo.\nCerto che scherzo, come no...")
          			goto flw_192
          		}
          	}
          }

          void entrypoint_115_28() {
/*<797>*/ 	start()
/*<805>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<806>*/ 		printf("\x0E\x01\x09\x04\x0C\x456Mi chiedo cosa sia accaduto fuori...\nMi è sembrato di sentire un gran\nbaccano!")
          	  case 1:
/*<807>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
          			flw_86:
/*< 86>*/ 			printf("\x0E\x01\x09\x04\x00\x01Ciao Link.\nSai, ultimamente stai diventando molto\npiù interessante. Quella uniforme da\ncavaliere ti sta davvero bene.\nSembri proprio un tipo\naffidabile.")
          		  case 1:
/*<802>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<804>*/ 				printf("\x0E\x01\x09\x04\x08\xE06Cooosa?! Ora sei in grado di eseguire\nl'attacco avvitato?!\n\n\n\x0E\x01\x09\x04\x08\x909Incredibile!!!<pause1E>\n\x0E\x01\x09\x04\x0C\x400Beh, comunque di certo anche Sparvio\nè in grado di eseguirlo!")
          			  case 1:
/*<801>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<803>*/ 					printf("\x0E\x01\x09\x04\x00\x06Mmh?! Triforza, hai detto?<pause1E>\nDi che si tratta?")
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
/*<705>*/ 			printf("\x0E\x01\x09\x04\x00\x01Oh, Link.\nL'Isola della Dea è svanita!\n\n\n\x0E\x01\x09\x04\x00\x1513Era un posto dove i solcanubi amavano\nriposare.")
          		  case 1:
/*<808>*/ 			switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          			  case 0:
/*<809>*/ 				printf("\x0E\x01\x09\x04\x00\x13Hai sentito che scossone?!\nMi chiedo cosa sia successo!")
          			  case 1:
/*<753>*/ 				switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          				  case 0:
/*<758>*/ 					printf("\x0E\x01\x09\x04\x00\x01Ehi, Link!\n\n\n\n\x0E\x01\x09\x04\x0C\x200Sei riuscito ad imparare la leggendaria\ntecnica di volo chiamata attacco\navvitato?<pause1E>\n\x0E\x01\x09\x04\x0C\x50BBeh, complimenti!!!")
          				  case 1:
/*<752>*/ 					switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          					  case 0:
/*<757>*/ 						printf("\x0E\x01\x09\x04\x00WCosa?! La Triforza?<pause14>\nSì, ne ho sentito parlare...\n\n\nHai già provato a chiedere ai maestri\ndella scuola d'armi?")
          					  case 1:
/*<751>*/ 						switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          						  case 0:
          							flw_754:
/*<754>*/ 							printf("\x0E\x01\x09\x04\x00\x01Link, dimmi un po'!\nQuella ragazza della scuola d'armi,\nmi pare si chiamasse<pause05>.<pause05>.<pause05>.<pause05> Zelda...\n\nChe fine ha fatto? Non vi ho visti più\ninsieme, avete litigato?")
          						  case 1:
/*<748>*/ 							switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          							  case 0:
/*<756>*/ 								printf("\x0E\x01\x09\x04\x00\x13Prima il cielo si è improvvisamente\noscurato per un secondo...\nCosa sarà successo?")
          							  case 1:
/*<839>*/ 								switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          								  case 0:
          									goto flw_754
          								  case 1:
/*<750>*/ 									switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          									  case 0:
/*<755>*/ 										printf("\x0E\x01\x09\x04\x00\x01Ehi, Link!\n\n\n\n\x0E\x01\x09\x04\x11WCosa?!\n<r<Due>> enormi <r<torri del vento>>?\n\n\n\x0E\x01\x09\x04\x01\x00Uhmm... Qui a Oltrenuvola di torri del\nvento non ho mai sentito parlare...\nL'unica cosa che mi viene in mente\nsono i <r<mulini a vento>>... Saranno quelli?")
          									  case 1:
/*<749>*/ 										switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          										  case 0:
          											goto flw_754
          										  case 1:
/*<218>*/ 											printf("\x0E\x01\x09\x04\x00\x0BOh, Link.\nGrazie per tutto l'aiuto che mi hai dato.\n\n\n\x0E\x01\x09\x04\x00\x400Il mio solcanubi sta benissimo\nadesso. Grazie mille!")
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
/*<760>*/ 		printf("\x0E\x01\x09\x04\x00\x0BOh, Link.\nGrazie per tutto l'aiuto che mi hai dato.\n\n\n\x0E\x01\x09\x04\x00\x400Il mio solcanubi sta benissimo\nadesso. Grazie mille!")
/*<761>*/ 		story_flags[1082 /* us: 805A9B53 0x01, jp: 805ACDD3 0x01 */] = true;
          	}
          }

          void entrypoint_115_12() {
/*< 28>*/ 	start()
/*<654>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 673, 'param3': 32}
/*<673>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 29, 'param3': 24}
/*< 29>*/ 	printf("Ohhh...")
/*<106>*/ 	set_camera(3, 0)
/*<653>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 674, 'param3': 17}
/*<674>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 106, 'next': 107, 'param3': 24}
/*<107>*/ 	printf("Ohhh...\nVi prego...\nQualcuno mi aiuti...")
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
/*<506>*/ 			printf("\x0E\x01\x09\x04\x00\x01Dimenticati della carta...\nCiao...")
/*<509>*/ 			story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          			flw_507:
/*<507>*/ 			scene_flags[0 'Skyloft'][65 /* 0x9 02 */] = false;
          		  case 1:
/*<677>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 505, 'param3': 24}
/*<505>*/ 			printf("Ahhh... <r<carta>>...!\nMi hai portato della <r<carta>>!\n\n\nApro la porta...\nTi prego, entra...")
/*<508>*/ 			story_flags[548 /* us: 805A9B17 0x20, jp: 805ACD97 0x20 */] = true;
/*<709>*/ 			story_flags[549 /* us: 805A9B17 0x40, jp: 805ACD97 0x40 */] = true;
          			goto flw_507
          		}
          	  case 1:
/*<675>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 502, 'param3': 24}
/*<502>*/ 		printf("Ohhh...\n<r<Carta>>...\n\n\nVi prego... qualcuno mi...\n<r<porti della carta>>...\n\n\n<r<Qualsiasi tipo di carta va bene>>...\nOhhhh...")
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
/*<142>*/ 			printf("\x0E\x01\x09\x04\x00\x1B1BMa di cosa diamine stai parlando?!\nQuesto mica è un pezzo di carta\nqualunque!\nÈ <r<una lettera>>!\n\x0E\x01\x09\x04\x17\x2500Una specie di... lettera d'amore!\nCi ho messo il cuore in ogni singola\nparola!\n\n\x0E\x01\x09\x04\x17\x1800Non ti permetterò di usarla come\ncarta igienica!")
/*<169>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 172, 'param3': 13}
/*<172>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 167, 'param3': 6}
/*<167>*/ 			printf("Apri bene le orecchie! Il destinatario\nè una gentil pulzella...\nLa nostra compagna di corso <b<Grudia>>.\n\n\x0E\x01\x09\x04\x01\xC11Sai di chi sto parlando, vero?\nLa nostra compagna di corso col\n<r<cappello tondo>>. Quella così carina\ne gentile.\n\x0E\x01\x09\x04\x17\x1800Quella <r<voce che proviene dal gabinetto>>\nte la chiederà di sicuro! Non dargliela\nper nessun motivo! Giuralo!")
/*<170>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 549, 'param3': 13}
/*<549>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 168, 'param3': 6}
/*<168>*/ 			printf("Benissimo.\nTi sto solennemente affidando\nquesta lettera importantissima.\nVa da sé che non devi leggerla!")
/*<710>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 109, 'next': 165, 'param3': 24}
/*<165>*/ 			story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */] = true;
/*<166>*/ 			give_item(158 0x9E);
/*<164>*/ 			printf("Conto su di te, Link!\nSe fai tutto per bene ti nominerò\nmio protetto!\nGrazie in anticipo!")
/*<550>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<139>*/ 			switch (zone_temp_flags[10 /* 0x0 04 */]) {
          			  case 0:
/*<160>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 3072, 'next': 108, 'param3': 13}
/*<108>*/ 				printf("\x0E\x01\x09\x04\x00\x08Eh...?\nPerché stai guardando verso il gabinetto?")
/*<162>*/ 				{'type': 'type3', 'subType': 4, 'param1': 23, 'param2': 6144, 'next': 161, 'param3': 13}
/*<161>*/ 				printf("Cosa?\nDi notte nel gabinetto c'è qualcuno che\ncerca della carta?")
/*<143>*/ 				zone_temp_flags[11 /* 0x0 08 */] = true;
          			  case 1:
/*< 32>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 135, 'param3': 31}
/*<135>*/ 				make_actor_do_something(1, 0)
/*<155>*/ 				{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4608, 'next': 34, 'param3': 13}
/*< 34>*/ 				printf("Mmh... Devo fare io il primo passo?\nOppure devo aspettare che lei venga\nda me?")
/*<136>*/ 				make_actor_do_something(2, 0)
/*<672>*/ 				{'type': 'type3', 'subType': 4, 'param1': 20, 'param2': 4889, 'next': 35, 'param3': 13}
/*< 35>*/ 				printf("Argh!\nLink, sei tu!\nChe spavento mi hai fatto prendere!\n\n\x0E\x01\x09\x04\x17\x1800C'è un problema che mi attanaglia il\ncuore. Come osi interrompermi!\n[1]Problema?[2]Serve\naiuto?")
/*<156>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 3072, 'next': 37, 'param3': 13}
/*< 37>*/ 				switch (choice(2)) {
          				  case 0:
/*< 36>*/ 					printf("Cosa?\nVuoi ascoltare quello che ho da dire?\n\n\n\x0E\x01\x09\x04\x00\x1CUmf!\nPerché mai dovrei poi parlarne con gente\ncome te... Comunque...")
          					flw_157:
/*<157>*/ 					{'type': 'type3', 'subType': 4, 'param1': 23, 'param2': 6144, 'next': 39, 'param3': 13}
/*< 39>*/ 					printf("Forse puoi davvero aiutarmi!\nNon mi piace ammetterlo eh, ma sembri\nil tipo che ci sa fare con le donne.\n\nBenissimo, allora!\nLink!\nHo un compito per te!")
/*<159>*/ 					{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 171, 'param3': 13}
/*<171>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 158, 'param3': 6}
/*<158>*/ 					printf("Porteresti per me questa lettera a una\ncerta persona? Guarda che è un foglio\ndi <r<carta >>molto importante e va\nconsegnato di persona!")
/*<140>*/ 					zone_temp_flags[10 /* 0x0 04 */] = true;
          				  case 1:
/*< 38>*/ 					printf("Eh? Davvero?!\n\n\n\n\x0E\x01\x09\x04\x00\x1CNnngh... Non mi piace coinvolgerti\nnegli affari miei... Comunque sia...")
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
/*< 42>*/ 		printf("\x0E\x01\x09\x04\x00\x01Dimenticati della carta...\nCiao...")
/*< 55>*/ 		story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          		flw_53:
/*< 53>*/ 		story_flags[550 /* us: 805A9B17 0x80, jp: 805ACD97 0x80 */] = true;
          	  case 1:
/*<109>*/ 		set_camera(4, 0)
/*<137>*/ 		make_actor_do_something(0, 0)
/*<112>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 111, 'param3': 6}
/*<111>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 53, 'param3': 6}
          		goto flw_53
          	}
          }

          void entrypoint_115_16() {
/*< 43>*/ 	start()
/*<117>*/ 	switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          	  case 0:
/*< 44>*/ 		printf("\x0E\x01\x09\x04\x00\x01Dimenticati della carta...\nCiao...")
/*<138>*/ 		make_actor_do_something(1, 0)
/*< 45>*/ 		story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          	  case 1:
/*<131>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 31}
/*<144>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4, 'param2': 1, 'next': 154, 'param3': 13}
/*<154>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 46, 'param3': 6}
/*< 46>*/ 		printf("Unf...<r< carta>>...\nHo bisogno di <r<carta>>...\n\n\nNon chiedo molto, <r<ho solo bisogno\ndi carta>>...\n[1]Dai la\nlettera[2-]Non dare\nla lettera")
/*< 47>*/ 		switch (choice(2)) {
          		  case 0:
/*< 49>*/ 			printf("\x0E\x01\x09\x04\x0B\x04Eh?\nMi stai dando della carta?\nChe felicità...")
/*<146>*/ 			{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 0, 'next': 511, 'param3': 13}
/*<511>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 145, 'param3': 6}
/*<145>*/ 			printf("Ma...\nQuesta sembra una lettera...\nMa sei sicuro di volerla dare a me?\n[1]Sì[2-]No")
/*< 50>*/ 			switch (choice(2)) {
          			  case 0:
/*<147>*/ 				{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 0, 'next': 711, 'param3': 13}
/*<711>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 109, 'next': 706, 'param3': 24}
/*<706>*/ 				make_actor_do_something(3, 0)
/*<517>*/ 				set_camera(8, 0)
/*<516>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 153, 'param3': 6}
/*<153>*/ 				printf("\x0E\x01\x09\x04\x00\x02Grazie...\nLa userò con cura...\n\n\nMa sono una fanciulla, perciò non\nchiedermi a cosa mi serva la carta...\n\n\nSpero che ci incontreremo ancora...\nMio caro ragazzo...")
/*<514>*/ 				make_actor_do_something(1, 0)
/*<513>*/ 				story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
/*<512>*/ 				story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */] = true;
/*<554>*/ 				story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */] = true;
/*<515>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
          				flw_48:
/*< 48>*/ 				printf("\x0E\x01\x09\x04\x05\x03Uhhh...\nQualcuno mi aiuti... carta...")
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
/*<149>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ahh...\nOh, amore mio...\nResterò sempre al tuo fianco...\nSì, per sempre!")
          	  case 1:
/*<824>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 527, 'param3': 31}
/*<527>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 152, 'param3': 32}
/*<152>*/ 		{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 526, 'param3': 13}
/*<526>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 151, 'param3': 6}
/*<151>*/ 		printf("\x0E\x01\x09\x04\x00\x04Ah...\nTu sei il ragazzo dell'altra volta...")
/*<524>*/ 		set_camera(9, 0)
/*<525>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 150, 'param3': 15}
/*<150>*/ 		printf("\x0E\x01\x09\x04\x06\x02È bello rivederti...\nGrazie a te sono riuscita a incontrare\nl'amore della mia vita... sì, è questa\npersona...\n\x0E\x01\x09\x04\x0C\x00Certo, è iniziato tutto con quella\nlettera che mi hai dato... \x0E\x01\x09\x04\x06\x00Quelle belle\nparole d'affetto mi hanno fatta\ninnamorare perdutamente...")
/*<521>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ahh, il mio cuore palpita quando\npenso a lui... E penso sempre a lui...\nMi sento così piena di vita!")
/*<723>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 522, 'param3': 42}
/*<522>*/ 		give_gratitude_crystals();
/*<523>*/ 		set_camera(-1, 0)
/*<658>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 0, 'next': 519, 'param3': 13}
/*<519>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ahh...\nOh, amore mio...\nResterò sempre al tuo fianco...\nSì, per sempre!")
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
/*<363>*/ 	printf("Sei tu quello che ha mandato la lettera,\nvero?")
/*<366>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 364, 'param3': 16}
/*<364>*/ 	printf("... S\x2010sì.")
/*<622>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': -256, 'next': 367, 'param3': 13}
/*<367>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 5, 'next': 368, 'param3': 16}
/*<368>*/ 	printf("\x0E\x01\x09\x04\x1400\x09Ih ih!\nEra una meravigliosa lettera d'amore.\nGrazie!")
/*<370>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 369, 'param3': 16}
/*<369>*/ 	printf("\x0E\x01\x09\x04\x500\x11Non... era niente... di speciale...")
/*<371>*/ 	set_camera(12, 0)
/*<375>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1301, 'param2': 3072, 'next': 373, 'param3': 13}
/*<373>*/ 	printf("Ma... ehm...\nQu\x2010qual è la tua risposta?")
/*<376>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 5, 'next': 374, 'param3': 16}
/*<374>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5131, 'param2': -256, 'next': 372, 'param3': 13}
/*<372>*/ 	printf("\x0E\x01\x09\x04\x1400\x12La mia risposta?\nAh... la mia risposta...")
/*<377>*/ 	set_camera(13, 0)
/*<623>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5121, 'param2': 256, 'next': 380, 'param3': 13}
/*<380>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 274, 'next': 601, 'param3': 15}
/*<601>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 381, 'param3': 16}
/*<381>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1288, 'param2': 3328, 'next': 378, 'param3': 13}
/*<378>*/ 	printf("\x0E\x01\x09\x04\x500\x2519Ti prego!\nTi prego... esci con me!\nTi prego!")
/*<382>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': 256, 'next': 602, 'param3': 13}
/*<602>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 551, 'param3': 50}
/*<551>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4609, 'param2': 3074, 'next': 379, 'param3': 13}
/*<379>*/ 	printf("Oooh! Aspetta un attimo!")
/*<383>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 18, 'next': 384, 'param3': 17}
/*<384>*/ 	set_camera(14, 0)
/*<385>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 386, 'param3': 6}
/*<386>*/ 	set_camera(19, 0)
/*<388>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4625, 'param2': 3072, 'next': 387, 'param3': 13}
/*<387>*/ 	printf("No, non uscire con lui!\nEsci con me!")
/*<391>*/ 	set_camera(15, 0)
/*<648>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4609, 'param2': 256, 'next': 624, 'param3': 13}
/*<624>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': -256, 'next': 603, 'param3': 13}
/*<603>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 99, 'next': 389, 'param3': 50}
/*<389>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1306, 'param2': 6912, 'next': 390, 'param3': 13}
/*<390>*/ 	printf("\x0E\x01\x09\x04\x500\x1B09Cosa?! Ma di cosa stai parlando\ncosì all'improvviso?!")
/*<604>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 99, 'next': 392, 'param3': 50}
/*<392>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5140, 'param2': 2304, 'next': 393, 'param3': 13}
/*<393>*/ 	printf("Ehm...\x0E\x01\x09\x04\x1400\x900\nIo voglio uscire con...\nSparvio...")
/*<649>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 99, 'next': 650, 'param3': 50}
/*<650>*/ 	printf("\x0E\x01\x09\x04\x515\xC10Ah! Lo sapevo!\nGrudia ha occhi solo per me... ehm...")
/*<394>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 629, 'param3': 17}
/*<629>*/ 	printf("\x0E\x01\x09\x04\x511\x1D1DEh?! A\x2010aspetta un at...!")
/*<630>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': 0, 'next': 620, 'param3': 13}
/*<620>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 274, 'next': 395, 'param3': 15}
/*<395>*/ 	set_camera(14, 0)
/*<628>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 397, 'param3': 17}
/*<397>*/ 	{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 18, 'next': 396, 'param3': 14}
/*<396>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 605, 'param3': 6}
/*<605>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 99, 'next': 398, 'param3': 50}
/*<398>*/ 	printf("\x0E\x01\x09\x04\x1201\xFF00Davvero?\nSei sicura di voler uscire con me?")
/*<606>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 399, 'param3': 50}
/*<399>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5140, 'param2': 2323, 'next': 400, 'param3': 13}
/*<400>*/ 	printf("Certo!\n\x0E\x01\x09\x04\x1400\x900Sono così felice.\nGrazie.")
/*<632>*/ 	set_camera(16, 0)
/*<636>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5121, 'param2': 256, 'next': 635, 'param3': 13}
/*<635>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1306, 'param2': 7936, 'next': 631, 'param3': 13}
/*<631>*/ 	printf("\x0E\x01\x09\x04\x500\x1D17Io... non ci posso credere...")
/*<634>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1293, 'param2': 7936, 'next': 633, 'param3': 13}
/*<633>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 5, 'next': 639, 'param3': 14}
/*<639>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 638, 'param3': 6}
/*<638>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 261, 'next': 637, 'param3': 15}
/*<637>*/ 	printf("\x0E\x01\x09\x04\x500\x18Aaaaaghhhh...!!!")
/*<626>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 99, 'next': 625, 'param3': 50}
/*<625>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 5, 'next': 407, 'param3': 17}
/*<407>*/ 	set_camera(17, 0)
/*<619>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1293, 'param2': 1024, 'next': 618, 'param3': 13}
/*<618>*/ 	{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 5, 'next': 552, 'param3': 14}
/*<552>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4625, 'param2': 1024, 'next': 401, 'param3': 13}
/*<401>*/ 	printf("\x0E\x01\x09\x04\x1200\x01Link!")
/*<402>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 100, 'next': 403, 'param3': 16}
/*<403>*/ 	set_camera(18, 0)
/*<643>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4616, 'param2': 1024, 'next': 640, 'param3': 13}
/*<640>*/ 	printf("Ho capito tutto solo quando mi\nhai detto della lettera.\n\n\nHo capito che... io la amo.\n\x0E\x01\x09\x04\x1209\xC00E non voglio che nessuno\nme la porti via.\n\n\x0E\x01\x09\x04\x1201\x400Se tu non me l'avessi detto,\nforse non me ne sarei mai accorto.\n\n\n\x0E\x01\x09\x04\x1208\x0BTi sono molto grato!\nNon so come potrò ripagarti!")
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
/*<540>*/ 				printf("\x0E\x01\x09\x04\x1B\x1F1BDa quando hai consegnato la mia\nlettera, non riesco più a dormire\nbene e soffro di incubi. Che cosa\nmi sta succedendo?\nForse questo letto è maledetto!\nDev'essere stato <b<Bado>>!\nAiutami, Link!")
          			  case 1:
/*<538>*/ 				printf("\x0E\x01\x09\x04\x1B\x1F17Che cosa vuoi, Link?!\nNon dimenticherò quello che mi\nhai fatto!\n\nE come se non bastasse, da quando hai\nconsegnato la mia lettera, non riesco\npiù a dormire bene e soffro di incubi.\nChe cosa mi sta succedendo?\nForse questo letto è maledetto!\nDeve averlo maledetto <b<Bado>>!\n\x0E\x01\x09\x04\x1C\x1A18Aiutami, Link!")
/*<539>*/ 				zone_temp_flags[0 /* 0x1 01 */] = true;
          			}
          		  case 1:
/*<569>*/ 			{'type': 'type3', 'subType': 4, 'param1': 27, 'param2': 7936, 'next': 102, 'param3': 13}
/*<102>*/ 			printf("\x0E\x01\x09\x04\x00\x17È finita... è tutto finito...\n\x0E\x01\x09\x04\x1C\x1F00Che cosa vuoi, Link?!\n\n\nSei venuto a prenderti gioco di me?!\nLasciami perdere!")
          		}
          	  case 1:
/*<825>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 685, 'param3': 31}
/*<685>*/ 		printf("\x0E\x01\x09\x04\x1B\x1F17Ancora tu, Link?!\nMi hai ferito nel profondo!\n\n\n\x0E\x01\x09\x04\x1C\x1F00Io non so chi c'è in quel gabinetto, ma\nil pensiero che abbia letto la mia\nlettera mi sconvolge.\nSi può sapere chi è?!")
          	}
          }

