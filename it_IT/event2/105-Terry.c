          void entrypoint_105_35() {
/*< 40>*/ 	start()
/*< 47>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 73, 'param3': 12}
/*< 73>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 84, 'param3': 13}
/*< 84>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_41:
/*< 41>*/ 		printf("Questo è un <y<amuleto della vita>>!\nSe lo porti con te otterrai un\neffetto magico!\n\nIl potere dell'amuleto della vita<pause0A>.<pause0A>.<pause0A>.<pause0A>\nBeh, in effetti non lo so!\nDovresti scoprirlo da solo!\n\nSono sicuro che a\n<r<800 rupie >>sia un vero affare.\nChe ne dici?\n[1]Lo compro[2-]No, grazie")
          		flw_13:
/*< 13>*/ 		switch (choice(2)) {
          		  case 0:
/*< 15>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 26}
          		  case 1:
/*< 14>*/ 			entrypoint_105_08();
          		}
          	  case 1:
/*< 83>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 86>*/ 			printf("Questo è un <y<amuleto della vita>>!\nSe lo porti con te otterrai un\neffetto magico!\n\nIl potere dell'amuleto della vita<pause0A>.<pause0A>.<pause0A>.<pause0A>\nBeh, in effetti non lo so!\nDovresti scoprirlo da solo!\n\nMa sono sicuro che a\nmetà prezzo sia un\nvero affare: <r<400 rupie>>\ninvece di <r<800 rupie>>. \nChe ne dici?\n[1]Lo compro[2-]No, grazie")
          			goto flw_13
          		  case 1:
          			goto flw_41
          		}
          	}
          }

          void entrypoint_105_01() {
          	start()
/*< 64>*/ 	switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          	  case 0:
/*< 66>*/ 		switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          		  case 0:
/*<168>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 67, 'param3': 13}
/*< 67>*/ 			printf("Oh! Benvenuto! Che bello\nvederti qui alla bottega di\nTerry! Da' pure un'occhiata\nalla mia mercanzia.")
          		  case 1:
/*<167>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 65, 'param3': 13}
/*< 65>*/ 			printf("Oh! Ma tu sei quel tipo geniale che\nha ritrovato il mio <b<rinocottero gigante>>!\n\n\nTi sono riconoscente: scegli uno\ndei miei prodotti e te lo venderò\na metà prezzo.")
          		}
          	  case 1:
/*<161>*/ 		switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          		  case 0:
/*<202>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 164, 'param3': 31}
/*<164>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 162, 'param3': 13}
/*<162>*/ 			printf("Oh! Benvenuto!\n\n\n\nUhmm?! Hai trovato qualcosa?\nNon parliamone adesso o\nrischiamo di schiantarci...\n\nParliamone stasera, dopo la\nchiusura. Nel frattempo puoi\nusare quel letto per schiacciare\nun pisolino.")
          		  case 1:
/*<163>*/ 			switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          			  case 0:
/*<166>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 165, 'param3': 13}
/*<165>*/ 				printf("Oh! Benvenuto!\n\n\n\nTi prego, aiutami! Il mio\npovero <b<rinocottero gigante>>!\n\n\nNon riesco a togliermelo \ndalla testa! Mi manca così\ntanto!")
          			  case 1:
/*<193>*/ 				switch (scene_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<195>*/ 					switch (zone_temp_flags[13 /* 0x0 20 */]) {
          					  case 0:
          						flw_1:
/*<  1>*/ 						printf("Uhmm. Vuoi sapere perché sto\nsu una bicicletta?\n[1]Perché?[2-]No")
/*< 25>*/ 						switch (choice(2)) {
          						  case 0:
/*< 26>*/ 							printf("\x0E\x01\x07\x04\x00\x15Caspita! Sei un tipo curioso!\n\n\n\nQuesta bicicletta produce elettricità\nper la mia casa. E mi consente di\nfare esercizio. Ho uno stile\ndi vita <b<ecologico>>!\nCon te a bordo il peso aumenta,\nquindi devo pedalare più\nvelocemente...")
          							flw_27:
/*< 27>*/ 							printf("Ah\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í scusa! Da' pure un'occhiata\nintorno. Ho un sacco di roba\nfantastica!")
/*<192>*/ 							scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
/*<194>*/ 							zone_temp_flags[13 /* 0x0 20 */] = true;
          						  case 1:
/*< 87>*/ 							{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1558, 'next': 28, 'param3': 13}
/*< 28>*/ 							printf("Benissimo. Allora per favore\nnon interrompermi.\n\n\nCon te a bordo il peso aumenta,\nquindi devo pedalare più\nvelocemente...")
/*< 88>*/ 							{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -256, 'next': 27, 'param3': 13}
          							goto flw_27
          						}
          					  case 1:
/*<185>*/ 						switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          						  case 0:
/*<184>*/ 							switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          							  case 0:
/*<191>*/ 								{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2838, 'next': 188, 'param3': 13}
/*<188>*/ 								switch (zone_temp_flags[12 /* 0x0 10 */]) {
          								  case 0:
/*<190>*/ 									printf("Oh!\nPerché non ne parliamo stasera,\ndopo la chiusura?\n\nNel frattempo puoi usare quel\nletto per schiacciare un pisolino.")
          								  case 1:
/*<186>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 187, 'param3': 31}
/*<187>*/ 									printf("\x0E\x01\x09\x04\x00\xB00Oh!\n<pause0A>.<pause0A>.<pause0A>.<pause0A>\nChe piacere!<pause14> Benvenuto<pause0A>.<pause0A>.<pause0A>.<pause0A>\n\nCosa c'è?<pause14> Non mi sembri a posto!\n\n\n\nInutile che fai finta di niente!\nTi conosco troppo bene!\nCome vedi in questo momento\nsono molto occupato. \nParliamone stasera, dopo la\nchiusura. Nel frattempo puoi\nusare quel letto per schiacciare\nun pisolino.")
/*<189>*/ 									zone_temp_flags[12 /* 0x0 10 */] = true;
          								}
          							  case 1:
          								goto flw_1
          							}
          						  case 1:
          							goto flw_1
          						}
          					}
          				  case 1:
          					goto flw_1
          				}
          			}
          		}
          	}
          }

          void entrypoint_105_36() {
/*<135>*/ 	start()
/*<137>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 138, 'param3': 12}
/*<138>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 149, 'param3': 13}
/*<149>*/ 	zone_temp_flags[11 /* 0x0 08 */] = true;
/*<140>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_145:
/*<145>*/ 		printf("Con quella potrai portare\nun oggetto in più nella tua\n<y<borsa dell'avventuriero>>!\n\nÈ uno degli accessori\npiù utili quando si parte\nall'avventura. Costa <r<600>><r< rupie>>.\n\nCosa? Ho alzato il prezzo?\nCerto che no! Ti ricordi male!\nAllora, che ne dici? <r<600>><r< rupie>>.\n[1]Lo compro[2-]No, grazie")
          		goto flw_13
          	  case 1:
/*<139>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<146>*/ 			printf("Con quella potrai portare\nun oggetto in più nella tua\n<y<borsa dell'avventuriero>>!\n\nÈ uno degli accessori\npiù utili quando si parte\nall'avventura. Costa <r<300>><r< rupie>>.\n\nCosa? Ho alzato il prezzo?\nCerto che no! Ti ricordi male!\nAllora, che ne dici? <r<300>><r< rupie>>.\n[1]Lo compro[2-]No, grazie")
          			goto flw_13
          		  case 1:
          			goto flw_145
          		}
          	}
          }

          void entrypoint_105_02() {
/*< 23>*/ 	start()
/*< 24>*/ 	printf("\x0E\x01\x07\x04\x00\x15Oh! Poche persone riescono\nad arrivare fin qui.\nInfatti ho pochissimi clienti.\n\nAlla bottega di Terry puoi trovare \ntutto quello di cui hai bisogno.\nDai pure un'occhiata attorno.\n\nOvviamente se vuoi comprare\nqualcosa... mi farebbe molto piacere!")
          }

          void entrypoint_105_37() {
/*<136>*/ 	start()
/*<141>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 142, 'param3': 12}
/*<142>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 144, 'param3': 13}
/*<144>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_147:
/*<147>*/ 		printf("Con questa potrai espandere\nulteriormente la tua <y<borsa\ndell'avventuriero>>. Temo che ti\nverrà a costare parecchio!\nSono <r<1200 rupie>>. Che ne dici?\nPensaci bene però, magari non ti\nserve davvero...\n[1]La compro[2-]No, grazie")
          		goto flw_13
          	  case 1:
/*<143>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<148>*/ 			printf("Con questa potrai espandere al\nmassimo la tua <y<borsa\ndell'avventuriero>>. Temo che ti\nverrà a costare cara!\nDi solito la vendo a <r<1200 rupie>>,\nma siccome sei tu, posso farti\nil prezzo di favore di <r<600 rupie>>.\n\nPensaci bene però, magari non\nti serve davvero...\n[1]La compro[2-]No, grazie")
          			goto flw_13
          		  case 1:
          			goto flw_147
          		}
          	}
          }

          void entrypoint_105_38() {
/*<177>*/ 	start()
/*<178>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 179, 'param3': 12}
/*<179>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 181, 'param3': 13}
/*<181>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_182:
/*<182>*/ 		printf("Questo è un <y<amuleto dell'insetto>>.\nQuando lo porti con te, sulla\nmappa appariranno le zone\npopolate da insetti.\nÈ davvero molto utile!\nSì, è anche molto caro, ma\nse ti piace catturare insetti\nè indispensabile.\nTe lo vendo a <r<1000 rupie>>.\nChe ne dici?\n[1]Lo compro[2-]No, grazie")
          		goto flw_13
          	  case 1:
/*<180>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<183>*/ 			printf("Questo è un <y<amuleto dell'insetto>>.\nQuando lo porti con te, sulla\nmappa appariranno le zone\npopolate da insetti.\nÈ davvero molto utile!\nSì, è anche molto caro, ma\nse ti piace catturare insetti\nè indispensabile.\nCosterebbe <r<1000 rupie>>, ma\noggi posso offrirtelo a <r<500 rupie>>.\nChe ne dici?\n[1]Lo compro[2-]No, grazie")
          			goto flw_13
          		  case 1:
          			goto flw_182
          		}
          	}
          }

          void entrypoint_105_05() {
/*<  2>*/ 	start()
/*< 48>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 4, 'param3': 13}
/*<  4>*/ 	printf("Oh! No! La tua <r<borsa >>è piena!\nNon puoi portare nient'altro!\n\n\nE a quanto pare anche la sezione a te\nriservata nel deposito è stracolma...\n\n\nElimina qualcosa dalla <r<borsa >>o\ndal <r<deposito >>e poi torna a trovarmi.")
          }

          void entrypoint_105_06() {
/*<  3>*/ 	start()
/*< 89>*/ 	{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1558, 'next': 35, 'param3': 13}
/*< 35>*/ 	switch (story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */]) {
          	  case 0:
          		flw_5:
/*<  5>*/ 		printf("Oh! Non hai abbastanza soldi!\nVolevi prenderti gioco di me?\nBeh, non è divertente!")
/*<151>*/ 		zone_temp_flags[10 /* 0x0 04 */] = false;
/*<152>*/ 		zone_temp_flags[11 /* 0x0 08 */] = false;
          	  case 1:
/*<169>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
          			goto flw_5
          		  case 1:
/*< 32>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          			goto flw_5
          		}
          	}
          }

          void entrypoint_105_07() {
/*<  6>*/ 	start()
/*< 90>*/ 	{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 1304, 'next': 7, 'param3': 13}
/*<  7>*/ 	switch (random(2)) {
          	  case 0:
/*<  8>*/ 		printf("Oh! Grazie mille!\nMi hai dato la carica per\ncontinuare a pedalare!")
          		flw_33:
/*< 33>*/ 		zone_temp_flags[1 /* 0x1 02 */] = false;
/*< 34>*/ 		story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */] = true;
/*<200>*/ 		scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
/*<156>*/ 		entrypoint_105_11();
          	  case 1:
/*<  9>*/ 		printf("Oh! Vedrai che non te ne pentirai!")
          		goto flw_33
          	}
          }

          void entrypoint_105_08() {
/*< 10>*/ 	start()
/*< 95>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 37, 'param3': 13}
/*< 37>*/ 	switch (story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */]) {
          	  case 0:
          		flw_11:
/*< 11>*/ 		printf("Oh! Da' un'occhiata anche\nall'altra mercanzia.")
/*<153>*/ 		zone_temp_flags[10 /* 0x0 04 */] = false;
/*<154>*/ 		zone_temp_flags[11 /* 0x0 08 */] = false;
          	  case 1:
/*<170>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
          			goto flw_11
          		  case 1:
/*< 36>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          			goto flw_11
          		}
          	}
          }

          void entrypoint_105_09() {
/*< 29>*/ 	start()
/*< 91>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 30, 'param3': 13}
/*< 30>*/ 	printf("Oh! Aspetta un attimo per favore!")
          }

          void entrypoint_105_10() {
/*< 38>*/ 	start()
/*< 92>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 28, 'next': 31, 'param3': 13}
/*< 31>*/ 	printf("Ma lo sai che pesi parecchio?!\nCon te a bordo devo pedalare\nmolto più velocemente.\n\nHai una bella faccia tosta ad\nandare via senza comprare\nniente. Via, sparisci!")
/*<201>*/ 	scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
          }

          void entrypoint_105_11() {
/*<155>*/ 	start()
/*< 93>*/ 	switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          	  case 0:
/*< 94>*/ 		story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */] = true;
          		flw_157:
/*<157>*/ 		switch (zone_temp_flags[10 /* 0x0 04 */]) {
          		  case 0:
/*<158>*/ 			story_flags[746 /* us: 805A9B29 0x04, jp: 805ACDA9 0x04 */] = true;
          			flw_159:
/*<159>*/ 			switch (zone_temp_flags[11 /* 0x0 08 */]) {
          			  case 0:
/*<160>*/ 				story_flags[747 /* us: 805A9B29 0x08, jp: 805ACDA9 0x08 */] = true;
          			  case 1:
          			}
          		  case 1:
          			goto flw_159
          		}
          	  case 1:
          		goto flw_157
          	}
          }

          void entrypoint_105_30() {
/*< 12>*/ 	start()
/*<171>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 31, 'next': 18, 'param3': 13}
/*< 18>*/ 	printf("Oh! Purtroppo quel cartello\nindica che l'articolo è esaurito.\n\n\nGrazie a te gli affari vanno\na gonfie vele!")
          }

          void entrypoint_105_31() {
/*< 16>*/ 	start()
/*< 43>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 49, 'param3': 12}
/*< 49>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 150, 'param3': 13}
/*<150>*/ 	zone_temp_flags[10 /* 0x0 04 */] = true;
/*< 69>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_19:
/*< 19>*/ 		printf("Con questa potrai portare un oggetto in\npiù nella tua <y<borsa dell'avventuriero>>!\n\n\nSecondo me è una delle cose più utili\nche si possa avere quando si parte\nall'avventura!\nCosta <r<300 rupie>>.\n[1]La compro[2-]No, grazie")
          		goto flw_13
          	  case 1:
/*< 68>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 74>*/ 			printf("Con questa potrai portare un\noggetto in più nella tua <y<borsa\ndell'avventuriero>>!\n\nSecondo me è una delle cose più utili\nche si possa avere quando si parte\nall'avventura! Hai diritto a uno sconto,\nquindi sono solo <r<150 rupie>>.\n[1]La compro[2-]No, grazie")
          			goto flw_13
          		  case 1:
          			goto flw_19
          		}
          	}
          }

          void entrypoint_105_32() {
/*< 17>*/ 	start()
/*< 44>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 70, 'param3': 12}
/*< 70>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 76, 'param3': 13}
/*< 76>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_20:
/*< 20>*/ 		printf("Oh! Hai gran gusto!\nÈ bello vero? L'ho trovato qui attorno.\n\n\nA dire il vero non so a che cosa possa\nservire, ma è tuo per <r<1600 rupie>>!\n[1]Lo compro[2-]No, grazie")
          		goto flw_13
          	  case 1:
/*< 75>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 77>*/ 			printf("Oh! Hai gran gusto!\nÈ bello vero? L'ho trovato qui attorno.\n\n\nA dire il vero non so bene a che cosa\npossa servire, ma secondo me\nvale <r<1600 rupie>>!\n\nTuttavia, oggi hai diritto a uno sconto:\nper te sono <r<800 rupie>>.\n[1]Lo compro[2-]No, grazie")
          			goto flw_13
          		  case 1:
          			goto flw_20
          		}
          	}
          }

          void entrypoint_105_33() {
/*< 21>*/ 	start()
/*< 45>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 71, 'param3': 12}
/*< 71>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 79, 'param3': 13}
/*< 79>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_22:
/*< 22>*/ 		printf("Questo è un <y<portarupie extra>>.\nÈ molto utile!\n\n\nCon questo articolo puoi portare\n300 rupie in più, oltre a quelle del tuo\nnormale portarupie!\n\nCosì non dovrai sprecare i soldi che\ntrovi quando hai il portarupie pieno!\n\n\nMa di sicuro sai già quanto potrebbe\nesserti utile. E per sole <r<100 rupie>> è tuo.\nChe ne dici?[1]Lo compro[2-]No, grazie")
          		goto flw_13
          	  case 1:
/*< 78>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 80>*/ 			printf("Questo è un <y<portarupie extra>>.\nÈ molto utile!\n\n\nCon questo articolo puoi portare\n300 rupie in più, oltre a quelle del\ntuo normale portarupie!\n\nCosì non dovrai sprecare i soldi che\ntrovi quando hai il portarupie pieno!\n\n\nCosterebbe <r<100 rupie>>, ma per te sono\nsolo<r< 50 rupie>>. Che ne dici?\n[1]Lo compro[2-]No, grazie")
          			goto flw_13
          		  case 1:
          			goto flw_22
          		}
          	}
          }

          void entrypoint_105_50() {
/*< 50>*/ 	start()
/*<175>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
/*<176>*/ 		printf("\x0E\x01\x09\x04\x00\x18Oh! Grazie tante!\nTe ne sarò riconoscente per\ntutta la vita!\n\nOh! Mio amato <b<rinocottero gigante>>.\nNon ti perderò di vista mai più. ")
          	  case 1:
/*<105>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<106>*/ 			printf("\x0E\x01\x09\x04\x00\x18Oh! Grazie tante!\nTe ne sarò riconoscente\nper tutta la vita!\n\nPer ringraziarti, ti venderò\nuno degli articoli del mio\nnegozio a metà prezzo.\nTorna a trovarmi!")
          		  case 1:
/*<107>*/ 			switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          			  case 0:
/*<199>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 31}
/*<129>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 130, 'param3': 47}
/*<130>*/ 				{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 356, 'next': 132, 'param3': 15}
/*<132>*/ 				set_camera(3, 0)
/*<131>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 117, 'param3': 48}
/*<117>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 538, 'next': 108, 'param3': 13}
/*<108>*/ 				printf("Cosa? Ohh...\nHai qualcosa da farmi vedere?")
/*<128>*/ 				set_camera(2, 0)
/*<118>*/ 				printf("\x0E\x01\x09\x04\x1A\x815Oh! Hai trovato il mio\n<b<rinocottero gigante>>?!")
/*<120>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 127, 'param3': 47}
/*<127>*/ 				story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */] = true;
/*<122>*/ 				{'type': 'type3', 'subType': 4, 'param1': 31, 'param2': 3328, 'next': 123, 'param3': 13}
/*<123>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 134, 'param3': 48}
/*<134>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 50, 'next': 121, 'param3': 6}
/*<121>*/ 				set_camera(1, 0)
/*<119>*/ 				printf("\x0E\x01\x09\x04\x00\xF00L'hai trovato! Grazie mille!\n\n\n\nLa prossima volta che farai acquisti\nal mio negozio, potrai avere uno\ndei miei articoli a metà prezzo.\n\n\x0E\x01\x09\x04\x00\x18È il mio modo per ringraziarti!")
/*<133>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 115, 'param3': 42}
/*<115>*/ 				give_gratitude_crystals();
          			  case 1:
/*< 99>*/ 				switch (scene_flags[14 /* 0x0 40 */]) {
          				  case 0:
/*<111>*/ 					switch (zone_temp_flags[4 /* 0x1 10 */]) {
          					  case 0:
/*<113>*/ 						switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          						  case 0:
/*<198>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 114, 'param3': 31}
/*<114>*/ 							printf("\x0E\x01\x09\x04\x00\x1ETi prego, ritrova il\nmio <b<rinocottero gigante>>.")
          						  case 1:
/*<203>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 112, 'param3': 31}
/*<112>*/ 							printf("\x0E\x01\x09\x04\x00\x1ETi sei messo a cercare\nil mio <b<rinocottero gigante>>?\nSe lo trovassi te ne sarei grato!\n[1]Ma certo![2-]Lascia\nperdere")
          							flw_57:
/*< 57>*/ 							switch (choice(2)) {
          							  case 0:
/*< 60>*/ 								printf("\x0E\x01\x09\x04\x11\x220Oh! Davvero?\nGuarda che ti prendo in parola!")
/*< 61>*/ 								printf("\x0E\x01\x09\x04\x1D\x200Il mio caro <b<rinocottero gigante>>...\n... ti prego, trovalo!\n\n\n\x0E\x01\x09\x04\x11\xB00Ti scongiuro!")
/*< 62>*/ 								story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */] = true;
/*<110>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 59>*/ 								printf("\x0E\x01\x09\x04\x01!Sì, per te è facile parlare così, ma\nio non riesco a farmene una ragione!")
/*<109>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							}
          						}
          					  case 1:
/*<100>*/ 						switch (zone_temp_flags[3 /* 0x1 08 */]) {
          						  case 0:
/*<126>*/ 							switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          							  case 0:
/*<125>*/ 								printf("\x0E\x01\x09\x04\x00\x1EQuando vuoi tornare a Oltrenuvola\nstenditi sul letto e dormi.")
          								flw_98:
/*< 98>*/ 								zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 55>*/ 								switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          								  case 0:
/*< 54>*/ 									switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          									  case 0:
/*< 58>*/ 										switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          										  case 0:
/*<196>*/ 											{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 63, 'param3': 31}
/*< 63>*/ 											printf("\x0E\x01\x09\x04\x01\xB00Allora?\n\n\n\n\x0E\x01\x09\x04\x1D\xB00Hai trovato il mio preziosissimo\n<b<rinocottero gigante>>?\nMi manca così tanto...")
          										  case 1:
/*<197>*/ 											{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 56, 'param3': 31}
/*< 56>*/ 											printf("\x0E\x01\x09\x04\x01\x600Ecco com'è andata...\n\n\n\n\x0E\x01\x09\x04\x00\xB00Il mio prezioso <b<rinocottero gigante>>\nè scomparso con tutta la <r<gabbietta>>.\n\n\n\x0E\x01\x09\x04\x1D\xB00Che tristezza. Quell'insetto è molto\nimportante per me.\n\n[1]Lo cerco![2-]Esagerato!")
          											goto flw_57
          										}
          									  case 1:
/*<124>*/ 										printf("\x0E\x01\x09\x04\x00\xC00Uhmm\x0E\x01\x06\x02\xFBCD...")
          									}
          								  case 1:
          								}
          							  case 1:
/*<101>*/ 								printf("\x0E\x01\x09\x04\x00\x1EUhmm! Ti interessi di entomologia?\n\n\n\n\x0E\x01\x09\x04\x1C\xA00Si tratta di un rarissimo insetto\nchiamato <b<rinocottero gigante>>.\n\n\n\x0E\x01\x09\x04\x1B\x500È la cosa più preziosa che ho.\nPotrei stare a guardarlo\ntutto il tempo...")
          								goto flw_98
          							}
          						  case 1:
/*<102>*/ 							printf("\x0E\x01\x09\x04\x00\x1EOh! Ti sei addormentato sul\nmio letto un'altra volta. Stavi\ndormendo così profondamente...\n\n\x0E\x01\x09\x04\x00\xB00Pedalare per due è davvero\nstancante!\n\n\n\x0E\x01\x09\x04\x00\xC00<pause05>.<pause05>.<pause05>.<pause05> \x0E\x01\x09\x04\x00\x200Va bene lo stesso!\nMi ci sto abituando.")
          							goto flw_98
          						}
          					}
          				  case 1:
/*<173>*/ 					switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          					  case 0:
/*<172>*/ 						switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          						  case 0:
/*<174>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 116, 'param3': 31}
          							flw_116:
/*<116>*/ 							story_flags[283 /* us: 805A9AFB 0x20, jp: 805ACD7B 0x20 */] = true;
/*< 53>*/ 							printf("\x0E\x01\x09\x04\x00\x21EOh! Sei sveglio?\n\n\n\nSembrava che ti stessi godendo\nil sonnellino, perciò non volevo\nsvegliarti.\n\n\x0E\x01\x09\x04\x00\x500Certo che con te il negozio è\ncosì pesante... eh eh...\n[1]Sei strano![2]Dove siamo?")
/*< 51>*/ 							switch (choice(2)) {
          							  case 0:
/*< 52>*/ 								printf("Cosa?! Ti sembro cambiato?\n\n\n\n\x0E\x01\x09\x04\x00\x1000\x0E\x01\x06\x02\xFBCD... \x0E\x01\x06\x02Í\x0E\x01\x09\x04\x00\x200Forse un po'...<pause1E>\nE anche se fosse?\nNon ha nessuna importanza adesso.")
/*<103>*/ 								printf("\x0E\x01\x09\x04\x00\x200Questa è più o meno casa mia.\nDi notte sto sempre qui.\n\n\n\x0E\x01\x09\x04\x00\x200Non ci sono molte comodità,\nma posso rilassarmi.\n\n\nI solcanubi non volano di notte\nperciò fatti trovare a bordo\ndomattina, così ti porto con me.\n\nSe vuoi tornare su Oltrenuvola\nstenditi sul letto. La mattina\narriva presto quando si dorme.")
          								flw_97:
/*< 97>*/ 								scene_flags[21 'The Sky'][14 /* 0x0 40 */] = true;
          								goto flw_98
          							  case 1:
/*< 96>*/ 								printf("\x0E\x01\x09\x04\x00\x200Questa è più o meno casa mia.\nDi notte sto sempre qui.\n\n\n\x0E\x01\x09\x04\x00\x200Non ci sono molte comodità,\nma posso rilassarmi.\n\n\nI solcanubi non volano di notte\nperciò fatti trovare a bordo\ndomattina, così ti porto con me.\n\nSe vuoi tornare su Oltrenuvola\nstenditi sul letto. La mattina\narriva presto quando si dorme.")
/*<104>*/ 								printf("Cosa?! Ti sembro cambiato?\n\n\n\n\x0E\x01\x09\x04\x00\x1000\x0E\x01\x06\x02\xFBCD... \x0E\x01\x06\x02Í\x0E\x01\x09\x04\x00\x200Forse un po'...<pause1E>\nE anche se fosse?\nNon ha nessuna importanza adesso.")
          								goto flw_97
          							}
          						  case 1:
          							goto flw_116
          						}
          					  case 1:
          						goto flw_116
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_105_34() {
/*< 39>*/ 	start()
/*< 46>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 72, 'param3': 12}
/*< 72>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 82, 'param3': 13}
/*< 82>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_42:
/*< 42>*/ 		printf("Questo è un <y<retino>>.\nServe per catturare insetti!\n\n\nQui non ci sono molti insetti, ma sono\nsicuro che ne troverai molti durante\nle tue peripezie!\n\nÈ un articolo molto utile! \nE costa solo <r<50 rupie>>.\nChe ne dici?\n[1]Lo compro[2-]No grazie")
          		goto flw_13
          	  case 1:
/*< 81>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 85>*/ 			printf("")
          			goto flw_13
          		  case 1:
          			goto flw_42
          		}
          	}
          }

