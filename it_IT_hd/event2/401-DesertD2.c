          void entrypoint_401_00() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_401_01() {
          	start()
/*< 17>*/ 	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
          	  case 0:
/*<100>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*<101>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
/*<104>*/ 				printf(/* textboxtype: 0, unk: 1, line: 10 */ "Sono tutti e due accesi! Bzzz! Ora\npuoi attraversare la sala macchine e\nraggiungerci! Presto, vieni a salvarci!")
          			  case 1:
          				flw_103:
/*<103>*/ 				printf(/* textboxtype: 1, unk: 0, line: 9 */ "Hai acceso un generatore! Ma per poter\nattraversare la sala macchine devi\naccendere anche l'altro! Bzzz!\n\nPresto accendi l'altro<color red< generatore>coloroff>\ne facci uscire di qui!")
          			}
          		  case 1:
/*<102>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
          				goto flw_103
          			  case 1:
/*< 18>*/ 				printf(/* textboxtype: 1, unk: 0, line: 6 */ "Aiuto! Fai presto! Bzzz! Devi accendere\ni <color red<generatori della sala macchine>coloroff>.")
          			}
          		}
          	  case 1:
/*< 49>*/ 		switch (scene_flags[109 /* 0xC 20 */]) {
          		  case 0:
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 2304, 'next': 106, 'param3': 13}
/*<106>*/ 			switch (scene_flags[69 /* 0x9 20 */]) {
          			  case 0:
/*<107>*/ 				printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00090c00>Che paura! Bzzz!\n\n\n\n<0x10009:0x00030900>Ma tu sei un umano!\nCome hai fatto ad arrivare qui?")
          				flw_1:
/*<  1>*/ 				printf(/* textboxtype: 0, unk: 1, line: 4 */ ".<pause 5>.<pause 5>.<pause 5>\n\n\n\n<0x10009:0x00030900>Che gioia vederti! Anche <color blue<Capitanbot\n>coloroff>è qui? Siete venuti a salvarci! Bzzz...\n\n\n<0x10009:0x00030900>Purtroppo, però non possiamo uscire\nda qui per via dell'<color red<elettricità>coloroff>...")
/*< 31>*/ 				set_camera(5, 0)
/*< 61>*/ 				wait_frames(60)
/*< 32>*/ 				set_camera(-1, 0)
/*< 29>*/ 				printf(/* textboxtype: 0, unk: 0, line: 20 */ ".<pause 5>.<pause 5>.<pause 5>\n\n\n\n<0x10009:0x00030900>Esatto! Bzzz! La sala macchine è proprio\nsotto questa cella.")
/*< 33>*/ 				set_camera(1, 0)
/*< 30>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00030900>Nella sala macchine c'è un passaggio\nche conduce alla cella.")
/*< 34>*/ 				set_camera(-1, 0)
/*< 35>*/ 				printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00030900>Ma per arrivare qui, attraversando la sala\nmacchine, devi accendere <sound 4>i <color red<generatori>coloroff>.\nBzzz.")
/*<109>*/ 				switch (scene_flags[60 /* 0x6 10 */]) {
          				  case 0:
/*<110>*/ 					switch (scene_flags[61 /* 0x6 20 */]) {
          					  case 0:
/*<113>*/ 						printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00030900>Eh<pause 5>.<pause 5>.<pause 5>.<pause 5>?\nLa sala macchine è in funzione!\n<0x10009:0x00030900>Hai acceso i <color red<generatori>coloroff>?\n\n<0x10009:0x00030900>Bene, allora attraversa\nla sala macchine e vieni qui!\n\n\n<0x10009:0x00030900>Ti aspetto! Bzzz!")
/*<117>*/ 						story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
          						flw_19:
/*< 19>*/ 						story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */] = true;
          					  case 1:
          						flw_112:
/*<112>*/ 						printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00030900>Eh<pause 5>.<pause 5>.<pause 5>.<pause 5>?\nHai acceso il <color red<generatore>coloroff>?\n\n\n<0x10009:0x00030900>Ma ne hai acceso solo uno...\nCi sono due <color red<generatori>coloroff>! Bzzz!")
/*<139>*/ 						switch (scene_flags[60 /* 0x6 10 */]) {
          						  case 0:
/*<116>*/ 							{'type': 'type3', 'subType': 4, 'param1': 511, 'param2': 0, 'next': 115, 'param3': 30}
          							flw_115:
/*<115>*/ 							story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
/*<120>*/ 							printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00030900>L'altro <color red<generatore >coloroff>è qua!")
/*<119>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 118, 'param3': 34}
/*<118>*/ 							printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00030900>Per favore! Bzzz...")
          							goto flw_19
          						  case 1:
/*<114>*/ 							{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': 0, 'next': 115, 'param3': 30}
          							goto flw_115
          						}
          					}
          				  case 1:
/*<111>*/ 					switch (scene_flags[61 /* 0x6 20 */]) {
          					  case 0:
          						goto flw_112
          					  case 1:
/*< 20>*/ 						{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': 0, 'next': 47, 'param3': 30}
/*< 47>*/ 						{'type': 'type3', 'subType': 4, 'param1': 511, 'param2': 0, 'next': 24, 'param3': 30}
/*< 24>*/ 						story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
/*< 23>*/ 						printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00030900>I <color red<generatori >coloroff>sono due. Bzzz.")
/*< 22>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 21, 'param3': 34}
/*< 21>*/ 						printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00030900>Per favore! Bzzz...")
          						goto flw_19
          					}
          				}
          			  case 1:
/*<108>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00030900>Ma tu sei un umano! Bzzz!\nCome hai fatto ad arrivare qui?")
          				goto flw_1
          			}
          		  case 1:
/*< 97>*/ 			printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00090c00>Ho paura! Bzzz! Caccia i mostri!\nFacci uscire di qui!")
/*<105>*/ 			scene_flags[-1 'Skyloft: Silent Realm'][69 /* 0x9 20 */] = true;
          		}
          	}
          }

          void entrypoint_401_02() {
/*<  4>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_401_03() {
/*<  6>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 0, unk: 1, line: 13 */ "")
          }

          void entrypoint_401_04() {
/*<  8>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_401_05() {
/*< 10>*/ 	start()
/*<  9>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "")
          }

          void entrypoint_401_06() {
/*< 12>*/ 	start()
/*< 99>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 256, 'next': 121, 'param3': 13}
/*<121>*/ 	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
          	  case 0:
/*< 13>*/ 		printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00030900>Sono veramente felice\nche ci sei venuto ad aiutare... Bzzz...")
          		flw_15:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00030900>Davvero?\nSei venuto su questa\nnave a cercare la\n<color red<fiamma di Nayru>coloroff>? Bzzz...\n<0x10009:0x00030900>Per ravvivare\nla <color red<fiamma di Nayru >coloroff>bisogna\nriprendere il controllo della\nnave. Bzzz...\n<0x10009:0x00030900>La sala comandi è vicina a questa\ncella, ma c'è una grande porta\nche è chiusa... per aprirla serve\nuna chiave speciale.\n<0x10009:0x00030900>Vai alla <color blue<cabina del capitano>coloroff>!\n<sound 4>Là troverai la chiave della sala\ncomandi! Bzzz!")
/*<144>*/ 		set_camera(12, 0)
/*<145>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 143, 'param3': 15}
/*<143>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00030900>Per ringraziarti del tuo aiuto ti do\nquesta <color red<chiave>coloroff>!\n\n\n<0x10009:0x00030900>Con questa <color red<chiave >coloroff>potrai entrare nella\n<color blue<cabina del capitano>coloroff>. Bzzz.")
/*<146>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 14, 'param3': 42}
/*< 14>*/ 		give_item(1 0x01);
/*<129>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 256, 'next': 128, 'param3': 13}
/*<128>*/ 		set_camera(-1, 0)
/*< 43>*/ 		printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x00030900>Per andare nella cabina del capitano, usa\nla porta che si trova dietro al ponte. Bzzz.")
/*< 41>*/ 		{'type': 'type3', 'subType': 4, 'param1': 768, 'param2': 0, 'next': 126, 'param3': 30}
/*<126>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 42, 'param3': 15}
/*< 42>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 130, 'param3': 34}
/*<130>*/ 		set_camera(12, 0)
/*< 28>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00030900>Noi ce ne andiamo. Bzzz.\n\n\n\n<0x10009:0x00030900>Ci pensi tu a occuparti del resto?\n")
/*< 57>*/ 		set_camera(6, 0)
/*< 60>*/ 		{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 256, 'next': 58, 'param3': 15}
/*< 58>*/ 		{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 0, 'next': 127, 'param3': 14}
/*<127>*/ 		{'type': 'type3', 'subType': 4, 'param1': 2, 'param2': 0, 'next': 59, 'param3': 13}
/*< 59>*/ 		wait_frames(30)
/*< 16>*/ 		story_flags[262 /* us: 805A9AF9 0x01, jp: 805ACD79 0x01 */] = true;
/*< 48>*/ 		scene_flags[18 'Lanayru: Sandship'][108 /* 0xC 10 */] = true;
          	  case 1:
/*<122>*/ 		switch (scene_flags[69 /* 0x9 20 */]) {
          		  case 0:
/*<123>*/ 			printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00030900>Ti ho già visto da qualche parte<pause 5>.<pause 5>.<pause 5>.\n\n\n\n<0x10009:0x00030900>Sei quell'essere umano senza cuore\nche prima non ci ha voluto salvare!\n\n\n<0x10009:0x00030900>Come hai fatto ad arrivare qua?\nBzzz... Bzzz!")
          			flw_125:
/*<125>*/ 			printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00030900>.<pause 5>.<pause 5>.<pause 5>\n\n\n\n<0x10009:0x00030900>Tu sei quello che ha aiutato <color blue<Capitanbot\n>coloroff>a salvarmi! Grazie! Bzzz...")
          			goto flw_15
          		  case 1:
/*<124>*/ 			printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00030900>Ma tu sei un umano!\nCome hai fatto ad arrivare qui?")
          			goto flw_125
          		}
          	}
          }

          void entrypoint_401_07() {
/*< 25>*/ 	start()
/*< 37>*/ 	set_camera(2, 0)
/*< 26>*/ 	printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00030900>Bzzz! Fantastico, <heroname>!")
/*< 38>*/ 	set_camera(3, 0)
/*< 36>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00030900>La nostra nave è tornata come prima!\nBzzz!\n\n\n<0x10009:0x00030900>Ora vorrei che liberassi anche\ni <color blue<membri dell'equipaggio>coloroff>... Bzzz...\n\n\n<0x10009:0x00030900>Nella nave c'è una <color blue<<sound 4>cella>coloroff>, saranno\nsicuramente rinchiusi là.")
/*< 39>*/ 	{'type': 'type3', 'subType': 4, 'param1': 766, 'param2': 0, 'next': 40, 'param3': 30}
/*< 40>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 34}
/*< 27>*/ 	printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00030900>Io ho paura... Ti aspetto sulla barca...\nBzzz...\n\n\n<0x10009:0x00030900>Mi raccomando...")
/*< 50>*/ 	story_flags[277 /* us: 805A9AF8 0x80, jp: 805ACD78 0x80 */] = true;
/*<138>*/ 	scene_flags[18 'Lanayru: Sandship'][19 /* 0x3 08 */] = true;
          }

          void entrypoint_401_08() {
/*< 44>*/ 	start()
/*< 45>*/ 	printf(/* textboxtype: 0, unk: 1, line: 34 */ "")
/*< 46>*/ 	changeScene(1, 0) // 
          }

          void entrypoint_401_09() {
/*< 51>*/ 	start()
/*< 62>*/ 	set_camera(7, 0)
/*< 56>*/ 	wait_frames(30)
/*< 54>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 52, 'param3': 35}
/*< 52>*/ 	printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10012:0x0000000b>Mio signore, Faih a rapporto. Confermo\nche questi <color red<tentacoli >coloroff>appartengono a\nuna gigantesca creatura mostruosa.\n\nLa situazione non è chiara,\nma questa nave è in pericolo.\n\n\nProbabilità che la nave affondi, in\nassenza di provvedimenti: 80%.\n\n\nSuggerirei di tagliarli usando il <color red<<sound 4>potere\nceleste >coloroff>e di andare a verificare\nla situazione all'esterno.")
/*< 55>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 53, 'param3': 36}
/*< 53>*/ 	scene_flags[18 'Lanayru: Sandship'][79 /* 0x8 80 */] = true;
          }

          void entrypoint_401_10() {
/*< 63>*/ 	start()
/*< 64>*/ 	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
          	  case 0:
/*< 65>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*< 66>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
/*< 70>*/ 				printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10012:0x00000001>Mio signore, confermo che la sala\nmacchine è ora attiva.\n\n\nSuggerirei di attraversarla e di recarsi\nal più presto a <color green<liberare >coloroff>l'equipaggio\nimprigionato nella cella.")
          			  case 1:
          				flw_69:
/*< 69>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10012:0x00000001>Mio signore, come riferito dal marinaio,\nla sala macchine è attiva.\n\n\nTuttavia, attivando solo un <color red<generatore>coloroff>,\nil passaggio per la cella non si apre.\n\n\nSuggerirei di affrettarsi a raggiungere\nil secondo <color red<generatore>coloroff>.")
          			}
          		  case 1:
/*< 67>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
          				goto flw_69
          			  case 1:
          				goto flw_69
          			}
          		}
          	  case 1:
/*< 72>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*< 73>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
/*< 68>*/ 				printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10012:0x00000001>Mio signore. Confermo di aver\navvertito un'altra forte scossa.\n\n\nLa situazione non è chiara, ma suggerirei\ndi recarsi al più presto dai <color blue<marinai\nimprigionati nella cella>coloroff>.")
          			  case 1:
          				flw_71:
/*< 71>*/ 				printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10012:0x00000001>Mio signore, confermo di aver avvertito\nuna forte scossa.\n\n\nSi suppone che, agendo su questo\ndispositivo, si possa attivare un\nmeccanismo.\n\nLa situazione non è chiara, ma suggerirei\ndi recarsi al più presto dai <color blue<marinai\nimprigionati nella cella>coloroff>.")
          			}
          		  case 1:
/*< 74>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
          				goto flw_71
          			  case 1:
          				goto flw_71
          			}
          		}
          	}
          }

          void entrypoint_401_11() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10012:0x00000001>Mio signore, tutto porta a concludere che\nsi tratti della <sound 4><color yellow<chiave >coloroff>della sala comandi.")
/*< 79>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1278, 'param2': 0, 'next': 77, 'param3': 30}
/*< 77>*/ 	printf(/* textboxtype: 0, unk: 0, line: 41 */ "La mia memoria suggerisce che la\n<color blue<porta della sala comandi>coloroff> si trova\nnel luogo contrassegnato con (X).")
/*< 80>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 78, 'param3': 34}
/*< 78>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "Suggerirei vivamente di dirigersi al più\npresto verso la <color blue<sala comandi>coloroff>.")
          }

          void entrypoint_401_12() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10012:0x00000001>Mio signore, guardate!")
/*< 91>*/ 	set_camera(8, 0)
/*< 89>*/ 	printf(/* textboxtype: 0, unk: 0, line: 44 */ "C'è una grande porta. Anche se...\napparentemente è chiusa.")
/*< 92>*/ 	set_camera(-1, 0)
/*< 90>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "Suppongo che si tratti della porta\nd'accesso a una stanza importante.")
          }

          void entrypoint_401_13() {
/*< 83>*/ 	start()
/*< 84>*/ 	printf(/* textboxtype: 0, unk: 1, line: 46 */ "<heroname>, <0x10012:0x0000000b>mio signore,\nho qualcosa da riferirvi.")
/*< 95>*/ 	set_camera(9, 0)
/*< 93>*/ 	printf(/* textboxtype: 0, unk: 0, line: 47 */ "Avverto una presenza malefica provenire\nda oltre quella porta.")
/*< 96>*/ 	set_camera(-1, 0)
/*< 94>*/ 	printf(/* textboxtype: 1, unk: 0, line: 48 */ "Probabilità che i tentacoli che stanno\ndistruggendo la nave appartengano a\nuna creatura gigantesca: 90%.\n\nSuggerirei di prepararvi al meglio\nprima di uscire sul ponte.")
          }

          void entrypoint_401_14() {
/*< 85>*/ 	start()
/*<154>*/ 	set_camera(17, 0)
/*<155>*/ 	wait_frames(15)
/*<151>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 152, 'param3': 51}
/*<152>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 86, 'param3': 16}
/*< 86>*/ 	printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10012:0x0000000b>Mio signore, Faih a rapporto.\nProbabilità che quella sia una <color red<<sound 4>pietra\ndel tempo>coloroff>: 90%.\n\nSuppongo che sia in grado di modificare\nprofondamente questo galeone.\nSuggerirei di <color green<colpirla>coloroff> in qualche modo.")
/*<153>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 156, 'param3': 36}
/*<156>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 42}
          }

          void entrypoint_401_15() {
/*< 87>*/ 	start()
/*<147>*/ 	set_camera(16, 0)
/*<148>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 149, 'param3': 51}
/*<149>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 88, 'param3': 16}
/*< 88>*/ 	printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10012:0x00000001>Mio signore, ho delle informazioni\nriguardo a quell'androide che\nabbiamo appena incontrato.\n\nProbabilità che si tratti del <color blue<pirata>coloroff> di\ncui parlava Capitanbot: 99%.\n\n\nLa tenacia che ha dimostrato\nnel sopravvivere così a lungo\nè degna di ammirazione.")
/*<150>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_401_16() {
/*<136>*/ 	start()
/*<137>*/ 	set_camera(14, 0)
/*<140>*/ 	{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 0, 'next': 141, 'param3': 51}
/*<141>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 132, 'param3': 16}
/*<132>*/ 	printf(/* textboxtype: 0, unk: 2, line: 52 */ "<0x10012:0x0000000b>Mio signore, Faih a rapporto riguardo\nal nuovo oggetto del quale siete venuto\nin possesso: l'arco.\n\nUnendo la forza accumulata con la\ntensione dell'arco a delle frecce a\nimpatto elevato, è possibile <color green<mirare e\ncolpire obiettivi lontani>coloroff>.\nNel caso in cui vogliate controllare\nnuovamente i comandi, estraete l'arco\ncon <icon 41>, poi premete <icon 19>.<0x10011:0x0fcd><0x10011:0x0bcd>")
/*<164>*/ 	set_camera(19, 0)
/*<163>*/ 	printf(/* textboxtype: 0, unk: 0, line: 53 */ "Inoltre, facendo in modo che la freccia\nscoccata colpisca <color red<determinati\nmeccanismi>coloroff>, questi possono essere\nattivati.")
/*<135>*/ 	set_camera(13, 0)
/*<133>*/ 	printf(/* textboxtype: 2, unk: 0, line: 54 */ "Confermo individuazione di tali\n<color red<meccanismi>coloroff> sul <color blue<<sound 4>ponte>coloroff>.")
/*<134>*/ 	set_camera(15, 0)
/*<131>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "Tuttavia, mirare da qui è\nobbiettivamente difficile!\nSuggerirei di tornare in coperta.")
/*<142>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_401_17() {
/*<157>*/ 	start()
/*<158>*/ 	printf(/* textboxtype: 0, unk: 2, line: 55 */ "<0x10012:0x00000001>Mio signore, guardate lassù.")
/*<161>*/ 	set_camera(18, 0)
/*<160>*/ 	printf(/* textboxtype: 0, unk: 0, line: 56 */ "Confermo la presenza della pietra del\ntempo di coperta al di là della griglia di\naereazione del soffitto.")
/*<162>*/ 	set_camera(-1, 0)
/*<159>*/ 	scene_flags[18 'Lanayru: Sandship'][56 /* 0x6 01 */] = true;
          }

