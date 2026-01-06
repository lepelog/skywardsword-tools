          void entrypoint_105_35() {
/*< 40>*/ 	start()
/*< 47>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 73, 'param3': 12}
/*< 73>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 84, 'param3': 13}
/*< 84>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_41:
/*< 41>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "Questo è un <color yellow<amuleto della vita>coloroff>!\nSe lo porti con te otterrai un\neffetto magico!\n\nIl potere dell'amuleto della vita<pause 10>.<pause 10>.<pause 10>.<pause 10>\nBeh, in effetti non lo so!\nDovresti scoprirlo da solo!\n\nSono sicuro che a\n<color red<800 rupie >coloroff>sia un vero affare.\nChe ne dici?\n[1-]Lo compro[2]No, grazie")
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
/*< 86>*/ 			printf(/* textboxtype: 0, unk: 1, line: 28 */ "Questo è un <color yellow<amuleto della vita>coloroff>!\nSe lo porti con te otterrai un\neffetto magico!\n\nIl potere dell'amuleto della vita<pause 10>.<pause 10>.<pause 10>.<pause 10>\nBeh, in effetti non lo so!\nDovresti scoprirlo da solo!\n\nMa sono sicuro che a\nmetà prezzo sia un\nvero affare: <color red<400 rupie>coloroff>\ninvece di <color red<800 rupie>coloroff>.\nChe ne dici?\n[1-]Lo compro[2]No, grazie")
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
/*< 67>*/ 			printf(/* textboxtype: 0, unk: 0, line: 5 */ "Oh! Benvenuto! Che bello vederti qui alla\nbottega di Terry! Da' pure un'occhiata\nalla mia mercanzia.")
          		  case 1:
/*<167>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 65, 'param3': 13}
/*< 65>*/ 			printf(/* textboxtype: 0, unk: 1, line: 4 */ "Oh! Ma tu sei quel tipo geniale che\nha ritrovato il mio <color blue<rinocottero gigante>coloroff>!\n\n\nTi sono riconoscente: scegli uno dei miei\nprodotti e te lo venderò a metà prezzo.")
          		}
          	  case 1:
/*<161>*/ 		switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          		  case 0:
/*<202>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 164, 'param3': 31}
/*<164>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 162, 'param3': 13}
/*<162>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "Oh! Benvenuto!\n\n\n\nUhmm?! Hai trovato qualcosa?\nNon parliamone adesso o rischiamo\ndi schiantarci...\n\nParliamone stasera, dopo la chiusura.\nNel frattempo puoi usare quel letto\nper schiacciare un pisolino.")
          		  case 1:
/*<163>*/ 			switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          			  case 0:
/*<166>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 165, 'param3': 13}
/*<165>*/ 				printf(/* textboxtype: 0, unk: 1, line: 7 */ "Oh! Benvenuto!\n\n\n\nTi prego, aiutami!\nIl mio povero <color blue<rinocottero gigante>coloroff>!\n\n\nNon riesco a togliermelo dalla testa!\nMi manca così tanto!")
          			  case 1:
/*<193>*/ 				switch (scene_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<195>*/ 					switch (zone_temp_flags[13 /* 0x0 20 */]) {
          					  case 0:
          						flw_1:
/*<  1>*/ 						printf(/* textboxtype: 1, unk: 0, line: 0 */ "Uhmm.\nVuoi sapere perché sto su una bicicletta?\n[1-]Perché?[2]No")
/*< 25>*/ 						switch (choice(2)) {
          						  case 0:
/*< 26>*/ 							printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10007:0x00000015>Caspita! Sei un tipo curioso!\n\n\n\nQuesta bicicletta produce elettricità\nper la mia casa. E mi consente di\nfare esercizio. Ho uno stile\ndi vita <color blue<ecologico>coloroff>!\nCon te a bordo il peso aumenta,\nquindi devo pedalare più\nvelocemente...")
          							flw_27:
/*< 27>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "Ah<0x10006:0xfecd>...<0x10006:0x00cd> scusa! Da' pure un'occhiata in giro.\nHo un sacco di roba fantastica!")
/*<192>*/ 							scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
/*<194>*/ 							zone_temp_flags[13 /* 0x0 20 */] = true;
          						  case 1:
/*< 87>*/ 							{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1558, 'next': 28, 'param3': 13}
/*< 28>*/ 							printf(/* textboxtype: 0, unk: 0, line: 2 */ "Benissimo. Allora per favore\nnon interrompermi.\n\n\nCon te a bordo il peso aumenta,\nquindi devo pedalare più\nvelocemente...")
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
/*<190>*/ 									printf(/* textboxtype: 1, unk: 0, line: 9 */ "Oh!\nPerché non ne parliamo stasera,\ndopo la chiusura?\n\nNel frattempo puoi usare quel\nletto per schiacciare un pisolino.")
          								  case 1:
/*<186>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 187, 'param3': 31}
/*<187>*/ 									printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00000b00>Oh!\n<pause 10>.<pause 10>.<pause 10>.<pause 10>\nChe piacere!<pause 20> Benvenuto<pause 10>.<pause 10>.<pause 10>.<pause 10>\n\nCosa c'è?<pause 20> Non mi sembri a posto!\n\n\n\nInutile che fai finta di niente!\nTi conosco troppo bene!\nCome vedi in questo momento\nsono molto occupato.\nParliamone stasera, dopo la\nchiusura. Nel frattempo puoi\nusare quel letto per schiacciare\nun pisolino.")
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
/*<145>*/ 		printf(/* textboxtype: 0, unk: 0, line: 29 */ "Con quella potrai portare un oggetto in più\nnella tua <color yellow<borsa dell'avventuriero>coloroff>!\n\n\nÈ uno degli accessori più utili quando si parte\nall'avventura. Costa <color red<600 rupie>coloroff>.\n\n\nCosa? Ho alzato il prezzo?\nCerto che no! Ti ricordi male!\nAllora, che ne dici? <color red<600 rupie>coloroff>.\n[1-]Lo compro[2]No, grazie")
          		goto flw_13
          	  case 1:
/*<139>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<146>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "Con quella potrai portare un oggetto\nin più nella tua <color yellow<borsa dell'avventuriero>coloroff>!\n\n\nÈ uno degli accessori più utili quando\nsi parte all'avventura. Costa <color red<300 rupie>coloroff>.\n\n\nCosa? Ho alzato il prezzo?\nCerto che no! Ti ricordi male!\nAllora, che ne dici? <color red<300 rupie>coloroff>.\n[1-]Lo compro[2]No, grazie")
          			goto flw_13
          		  case 1:
          			goto flw_145
          		}
          	}
          }

          void entrypoint_105_02() {
/*< 23>*/ 	start()
/*< 24>*/ 	printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10007:0x00000015>Oh! Poche persone riescono\nad arrivare fin qui.\nInfatti ho pochissimi clienti.\n\nAlla bottega di Terry puoi trovare\ntutto quello di cui hai bisogno.\nDai pure un'occhiata attorno.\n\nOvviamente se vuoi comprare\nqualcosa... mi farebbe molto piacere!")
          }

          void entrypoint_105_37() {
/*<136>*/ 	start()
/*<141>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 142, 'param3': 12}
/*<142>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 144, 'param3': 13}
/*<144>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_147:
/*<147>*/ 		printf(/* textboxtype: 0, unk: 1, line: 31 */ "Con questa potrai espandere ulteriormente\nla tua <color yellow<borsa dell'avventuriero>coloroff>.\nTemo che ti verrà a costare parecchio!\n\nSono <color red<1200 rupie>coloroff>. Che ne dici? Pensaci bene\nperò, magari non ti serve davvero...\n[1-]La compro[2]No, grazie")
          		goto flw_13
          	  case 1:
/*<143>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<148>*/ 			printf(/* textboxtype: 0, unk: 0, line: 32 */ "Con questa potrai espandere al massimo\nla tua <color yellow<borsa dell'avventuriero>coloroff>.\nTemo che ti verrà a costare cara!\n\nDi solito la vendo a <color red<1200 rupie>coloroff>, ma siccome sei\ntu, posso farti il prezzo di favore di <color red<600 rupie>coloroff>.\n\n\nPensaci bene però, magari non ti serve\ndavvero...\n[1-]La compro[2]No, grazie")
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
/*<182>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "Questo è un <color yellow<amuleto dell'insetto>coloroff>. Quando lo\nporti con te, sulla mappa appariranno le zone\npopolate da insetti. È davvero molto utile!\n\nSì, è anche molto caro, ma se ti piace\ncatturare insetti è indispensabile.\nTe lo vendo a <color red<1000 rupie>coloroff>. Che ne dici?\n[1-]Lo compro[2]No, grazie")
          		goto flw_13
          	  case 1:
/*<180>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<183>*/ 			printf(/* textboxtype: 0, unk: 1, line: 34 */ "Questo è un <color yellow<amuleto dell'insetto>coloroff>. Quando lo\nporti con te, sulla mappa appariranno le zone\npopolate da insetti. È davvero molto utile!\n\nSì, è anche molto caro, ma se ti piace catturare\ninsetti è indispensabile. Costerebbe <color red<1000 rupie>coloroff>,\nma oggi posso offrirtelo a <color red<500 rupie>coloroff>.\nChe ne dici?\n[1-]Lo compro[2]No, grazie")
          			goto flw_13
          		  case 1:
          			goto flw_182
          		}
          	}
          }

          void entrypoint_105_05() {
/*<  2>*/ 	start()
/*< 48>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 4, 'param3': 13}
/*<  4>*/ 	printf(/* textboxtype: 0, unk: 0, line: 11 */ "Oh! No! La tua <color red<borsa >coloroff>è piena!\nNon puoi portare nient'altro!\n\n\nE a quanto pare anche la sezione a te\nriservata nel deposito è stracolma...\n\n\nElimina qualcosa dalla <color red<borsa >coloroff>o\ndal <color red<deposito >coloroff>e poi torna a trovarmi.")
          }

          void entrypoint_105_06() {
/*<  3>*/ 	start()
/*< 89>*/ 	{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1558, 'next': 35, 'param3': 13}
/*< 35>*/ 	switch (story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */]) {
          	  case 0:
          		flw_5:
/*<  5>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "Oh! Non hai abbastanza soldi!\nVolevi prenderti gioco di me?\nBeh, non è divertente!")
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
/*<  8>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "Oh! Grazie mille! Mi hai dato la carica\nper continuare a pedalare!")
          		flw_33:
/*< 33>*/ 		zone_temp_flags[1 /* 0x1 02 */] = false;
/*< 34>*/ 		story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */] = true;
/*<200>*/ 		scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
/*<156>*/ 		entrypoint_105_11();
          	  case 1:
/*<  9>*/ 		printf(/* textboxtype: 0, unk: 0, line: 14 */ "Oh! Vedrai che non te ne pentirai!")
          		goto flw_33
          	}
          }

          void entrypoint_105_08() {
/*< 10>*/ 	start()
/*< 95>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 37, 'param3': 13}
/*< 37>*/ 	switch (story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */]) {
          	  case 0:
          		flw_11:
/*< 11>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "Oh!\nDa' un'occhiata anche all'altra mercanzia.")
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
/*< 30>*/ 	printf(/* textboxtype: 0, unk: 1, line: 16 */ "Oh! Aspetta un attimo per favore!")
          }

          void entrypoint_105_10() {
/*< 38>*/ 	start()
/*< 92>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 28, 'next': 31, 'param3': 13}
/*< 31>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "Ma lo sai che pesi parecchio?!\nCon te a bordo devo pedalare molto\npiù velocemente.\n\nHai una bella faccia tosta ad andare via\nsenza comprare niente. Via, sparisci!")
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
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "Oh! Purtroppo quel cartello indica\nche l'articolo è esaurito.\n\n\nGrazie a te gli affari vanno a gonfie vele!")
          }

          void entrypoint_105_31() {
/*< 16>*/ 	start()
/*< 43>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 49, 'param3': 12}
/*< 49>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 150, 'param3': 13}
/*<150>*/ 	zone_temp_flags[10 /* 0x0 04 */] = true;
/*< 69>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_19:
/*< 19>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "Con questa potrai portare un oggetto in\npiù nella tua <color yellow<borsa dell'avventuriero>coloroff>!\n\n\nSecondo me è una delle cose più utili\nche si possa avere quando si parte\nall'avventura!\nCosta <color red<300 rupie>coloroff>.\n[1-]La compro[2]No, grazie")
          		goto flw_13
          	  case 1:
/*< 68>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 74>*/ 			printf(/* textboxtype: 0, unk: 0, line: 20 */ "Con questa potrai portare un\noggetto in più nella tua <color yellow<borsa\ndell'avventuriero>coloroff>!\n\nSecondo me è una delle cose più utili\nche si possa avere quando si parte\nall'avventura! Hai diritto a uno sconto,\nquindi sono solo <color red<150 rupie>coloroff>.\n[1-]La compro[2]No, grazie")
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
/*< 20>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "Oh! Hai gran gusto!\nÈ bello vero? L'ho trovato qui attorno.\n\n\nA dire il vero non so a che cosa possa\nservire, ma è tuo per <color red<1600 rupie>coloroff>!\n[1-]Lo compro[2]No, grazie")
          		goto flw_13
          	  case 1:
/*< 75>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 77>*/ 			printf(/* textboxtype: 0, unk: 1, line: 22 */ "Oh! Hai gran gusto!\nÈ bello vero? L'ho trovato qui attorno.\n\n\nA dire il vero non so bene a che cosa\npossa servire, ma secondo me\nvale <color red<1600 rupie>coloroff>!\n\nTuttavia, oggi hai diritto a uno sconto:\nper te sono <color red<800 rupie>coloroff>.\n[1-]Lo compro[2]No, grazie")
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
/*< 22>*/ 		printf(/* textboxtype: 0, unk: 0, line: 23 */ "Questo è un <color yellow<portarupie extra>coloroff>.\nÈ molto utile!\n\n\nCon questo articolo puoi portare 300 rupie in\npiù, oltre a quelle del tuo normale portarupie!\n\n\nCosì non dovrai dire addio ai soldi che trovi\nquando hai il portarupie pieno!\n\n\nMa di sicuro sai già quanto potrebbe esserti\nutile. E per sole <color red<100 rupie>coloroff> è tuo.\nChe ne dici?[1-]Lo compro[2]No, grazie")
          		goto flw_13
          	  case 1:
/*< 78>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "Questo è un <color yellow<portarupie extra>coloroff>.\nÈ molto utile!\n\n\nCon questo articolo puoi portare 300 rupie\nin più, oltre a quelle del tuo normale\nportarupie!\n\nCosì non dovrai dire addio ai soldi che\ntrovi quando hai il portarupie pieno!\n\n\nCosterebbe <color red<100 rupie>coloroff>, ma per te sono solo\n<color red<50 rupie>coloroff>. Che ne dici?\n[1-]Lo compro[2]No, grazie")
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
/*<176>*/ 		printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x00000018>Oh! Grazie tante!\nTe ne sarò riconoscente per\ntutta la vita!\n\nOh! Mio amato <color blue<rinocottero gigante>coloroff>.\nNon ti perderò di vista mai più.")
          	  case 1:
/*<105>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<106>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00000018>Oh! Grazie tante!\nTe ne sarò riconoscente\nper tutta la vita!\n\nPer ringraziarti, ti venderò\nuno degli articoli del mio\nnegozio a metà prezzo.\nTorna a trovarmi!")
          		  case 1:
/*<107>*/ 			switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          			  case 0:
/*<199>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 31}
/*<129>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 130, 'param3': 47}
/*<130>*/ 				{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 356, 'next': 132, 'param3': 15}
/*<132>*/ 				set_camera(3, 0)
/*<131>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 117, 'param3': 48}
/*<117>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 538, 'next': 108, 'param3': 13}
/*<108>*/ 				printf(/* textboxtype: 0, unk: 1, line: 43 */ "Cosa? Ohh...\nHai qualcosa da farmi vedere?")
/*<128>*/ 				set_camera(2, 0)
/*<118>*/ 				printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x001a0815>Oh! Hai trovato il mio\n<color blue<rinocottero gigante>coloroff>?!")
/*<120>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 127, 'param3': 47}
/*<127>*/ 				story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */] = true;
/*<122>*/ 				{'type': 'type3', 'subType': 4, 'param1': 31, 'param2': 3328, 'next': 123, 'param3': 13}
/*<123>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 134, 'param3': 48}
/*<134>*/ 				wait_frames(50)
/*<121>*/ 				set_camera(1, 0)
/*<119>*/ 				printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00000f00>L'hai trovato! Grazie mille!\n\n\n\nLa prossima volta che farai acquisti\nal mio negozio, potrai avere uno\ndei miei articoli a metà prezzo.\n\n<0x10009:0x00000018>È il mio modo per ringraziarti!")
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
/*<114>*/ 							printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x0000001e>Ti prego, ritrova il mio\n<color blue<rinocottero gigante>coloroff>.")
          						  case 1:
/*<203>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 112, 'param3': 31}
/*<112>*/ 							printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x0000001e>Ti sei messo a cercare il mio <color blue<rinocottero\ngigante>coloroff>? Se lo trovassi te ne sarei grato!\n[1-]Ma certo![2]Lascia\nperdere")
          							flw_57:
/*< 57>*/ 							switch (choice(2)) {
          							  case 0:
/*< 60>*/ 								printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x00110220>Oh! Davvero?\nGuarda che ti prendo in parola!")
/*< 61>*/ 								printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x001d0200>Il mio caro <color blue<rinocottero gigante>coloroff>...\n... ti prego, trovalo!\n\n\n<0x10009:0x00110b00>Ti scongiuro!")
/*< 62>*/ 								story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */] = true;
/*<110>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 59>*/ 								printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00010021>Sì, per te è facile parlare così, ma\nio non riesco a farmene una ragione!")
/*<109>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							}
          						}
          					  case 1:
/*<100>*/ 						switch (zone_temp_flags[3 /* 0x1 08 */]) {
          						  case 0:
/*<126>*/ 							switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          							  case 0:
/*<125>*/ 								printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x0000001e>Quando vuoi tornare a Oltrenuvola\nstenditi sul letto e dormi.")
          								flw_98:
/*< 98>*/ 								zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 55>*/ 								switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          								  case 0:
/*< 54>*/ 									switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          									  case 0:
/*< 58>*/ 										switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          										  case 0:
/*<196>*/ 											{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 63, 'param3': 31}
/*< 63>*/ 											printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00010b00>Allora?\n\n\n\n<0x10009:0x001d0b00>Hai trovato il mio preziosissimo\n<color blue<rinocottero gigante>coloroff>?\nMi manca così tanto...")
          										  case 1:
/*<197>*/ 											{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 56, 'param3': 31}
/*< 56>*/ 											printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00010600>Ecco com'è andata...\n\n\n\n<0x10009:0x00000b00>Il mio prezioso <color blue<rinocottero gigante>coloroff>\nè scomparso con tutta la <color red<gabbietta>coloroff>.\n\n\n<0x10009:0x001d0b00>Che tristezza. Quell'insetto è molto\nimportante per me.\n\n[1-]Lo cerco![2]Esagerato!")
          											goto flw_57
          										}
          									  case 1:
/*<124>*/ 										printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x00000c00>Uhmm<0x10006:0xfbcd>...")
          									}
          								  case 1:
          								}
          							  case 1:
/*<101>*/ 								printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x0000001e>Uhmm! Ti interessi di entomologia?\n\n\n\n<0x10009:0x001c0a00>Si tratta di un rarissimo insetto\nchiamato <color blue<rinocottero gigante>coloroff>.\n\n\n<0x10009:0x001b0500>È la cosa più preziosa che ho.\nPotrei stare a guardarlo\ntutto il tempo...")
          								goto flw_98
          							}
          						  case 1:
/*<102>*/ 							printf(/* textboxtype: 0, unk: 0, line: 47 */ "<0x10009:0x0000001e>Oh! Ti sei addormentato sul\nmio letto un'altra volta. Stavi\ndormendo così profondamente...\n\n<0x10009:0x00000b00>Pedalare per due è davvero\nstancante!\n\n\n<0x10009:0x00000c00><pause 5>.<pause 5>.<pause 5>.<pause 5> <0x10009:0x00000200>Va bene lo stesso!\nMi ci sto abituando.")
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
/*< 53>*/ 							printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x0000021e>Oh! Sei sveglio?\n\n\n\nSembrava che ti stessi godendo il sonnellino,\nperciò non volevo svegliarti.\n\n\n<0x10009:0x00000500>Certo che con te il negozio è così pesante...\neh eh...\n[1-]Sei strano![2-]Dove siamo?")
/*< 51>*/ 							switch (choice(2)) {
          							  case 0:
/*< 52>*/ 								printf(/* textboxtype: 1, unk: 0, line: 36 */ "Cosa?! Ti sembro cambiato?\n\n\n\n<0x10009:0x00001000><0x10006:0xfbcd>... <0x10006:0x00cd><0x10009:0x00000200>Forse un po'...<pause 30>\nE anche se fosse?\nNon ha nessuna importanza adesso.")
/*<103>*/ 								printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00000200>Questa è più o meno casa mia.\nDi notte sto sempre qui.\n\n\n<0x10009:0x00000200>Non ci sono molte comodità,\nma posso rilassarmi.\n\n\nI solcanubi non volano di notte\nperciò fatti trovare a bordo\ndomattina, così ti porto con me.\n\nSe vuoi tornare su Oltrenuvola\nstenditi sul letto. La mattina\narriva presto quando si dorme.")
          								flw_97:
/*< 97>*/ 								scene_flags[21 'The Sky'][14 /* 0x0 40 */] = true;
          								goto flw_98
          							  case 1:
/*< 96>*/ 								printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00000200>Questa è più o meno casa mia.\nDi notte sto sempre qui.\n\n\n<0x10009:0x00000200>Non ci sono molte comodità,\nma posso rilassarmi.\n\n\nI solcanubi non volano di notte\nperciò fatti trovare a bordo\ndomattina, così ti porto con me.\n\nSe vuoi tornare su Oltrenuvola\nstenditi sul letto. La mattina\narriva presto quando si dorme.")
/*<104>*/ 								printf(/* textboxtype: 1, unk: 0, line: 36 */ "Cosa?! Ti sembro cambiato?\n\n\n\n<0x10009:0x00001000><0x10006:0xfbcd>... <0x10006:0x00cd><0x10009:0x00000200>Forse un po'...<pause 30>\nE anche se fosse?\nNon ha nessuna importanza adesso.")
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
/*< 42>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "Questo è un <color yellow<retino>coloroff>.\nServe per catturare insetti!\n\n\nQui non ci sono molti insetti, ma sono\nsicuro che ne troverai molti durante\nle tue peripezie!\n\nÈ un articolo molto utile!\nE costa solo <color red<50 rupie>coloroff>.\nChe ne dici?\n[1-]Lo compro[2]No grazie")
          		goto flw_13
          	  case 1:
/*< 81>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 85>*/ 			printf(/* textboxtype: 2, unk: 0, line: 26 */ "")
          			goto flw_13
          		  case 1:
          			goto flw_42
          		}
          	}
          }

