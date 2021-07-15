          void entrypoint_401_00() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_401_01() {
          	start()
/*< 17>*/ 	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
          	  case 0:
/*<100>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*<101>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
/*<104>*/ 				printf("Sono tutti e due accesi! Bzzz!\nOra puoi attraversare la sala\nmacchine e raggiungerci!\nPresto, vieni a salvarci!")
          			  case 1:
          				flw_103:
/*<103>*/ 				printf("Hai acceso un generatore!\nMa per poter attraversare la\nsala macchine devi accendere\nanche l'altro! Bzzz!\nPresto accendi l'altro<r< generatore>>\ne facci uscire di qui!")
          			}
          		  case 1:
/*<102>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
          				goto flw_103
          			  case 1:
/*< 18>*/ 				printf("Aiuto! Fai presto! Bzzz!\nDevi accendere i <r<generatori\ndella sala macchine>>.")
          			}
          		}
          	  case 1:
/*< 49>*/ 		switch (scene_flags[109 /* 0xC 20 */]) {
          		  case 0:
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 2304, 'next': 106, 'param3': 13}
/*<106>*/ 			switch (scene_flags[69 /* 0x9 20 */]) {
          			  case 0:
/*<107>*/ 				printf("\x0E\x01\x09\x04\x09\xC00Che paura! Bzzz!\n\n\n\n\x0E\x01\x09\x04\x03\x900Ma tu sei un umano!\nCome hai fatto ad arrivare qui?")
          				flw_1:
/*<  1>*/ 				printf(".<pause05>.<pause05>.<pause05>\n\n\n\n\x0E\x01\x09\x04\x03\x900Che gioia vederti! Anche <b<Capitanbot\n>>è qui? Siete venuti a salvarci!\nBzzz...\n\n\x0E\x01\x09\x04\x03\x900Purtroppo, però non possiamo uscire\nda qui per via dell'<r<elettricità>>...")
/*< 31>*/ 				set_camera(5, 0)
/*< 61>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 32, 'param3': 6}
/*< 32>*/ 				set_camera(-1, 0)
/*< 29>*/ 				printf(".<pause05>.<pause05>.<pause05>\n\n\n\n\x0E\x01\x09\x04\x03\x900Esatto! Bzzz!\nLa sala macchine è\nproprio sotto\nquesta cella.")
/*< 33>*/ 				set_camera(1, 0)
/*< 30>*/ 				printf("\x0E\x01\x09\x04\x03\x900Nella sala macchine\nc'è un passaggio che\nconduce alla cella.")
/*< 34>*/ 				set_camera(-1, 0)
/*< 35>*/ 				printf("\x0E\x01\x09\x04\x03\x900Ma per arrivare qui,\nattraversando la sala\nmacchine, devi accendere\n<pling>i <r<generatori>>. Bzzz.")
/*<109>*/ 				switch (scene_flags[60 /* 0x6 10 */]) {
          				  case 0:
/*<110>*/ 					switch (scene_flags[61 /* 0x6 20 */]) {
          					  case 0:
/*<113>*/ 						printf("\x0E\x01\x09\x04\x03\x900Eh<pause05>.<pause05>.<pause05>.<pause05>?\nLa sala macchine è in funzione!\n\x0E\x01\x09\x04\x03\x900Hai acceso i <r<generatori>>?\n\n\x0E\x01\x09\x04\x03\x900Bene, allora attraversa\nla sala macchine e vieni qui!\n\n\n\x0E\x01\x09\x04\x03\x900Ti aspetto! Bzzz!")
/*<117>*/ 						story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
          						flw_19:
/*< 19>*/ 						story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */] = true;
          					  case 1:
          						flw_112:
/*<112>*/ 						printf("\x0E\x01\x09\x04\x03\x900Eh<pause05>.<pause05>.<pause05>.<pause05>?\nHai acceso il <r<generatore>>?\n\n\n\x0E\x01\x09\x04\x03\x900Ma ne hai acceso\nsolo uno... Ci sono\ndue <r<generatori>>! Bzzz!")
/*<139>*/ 						switch (scene_flags[60 /* 0x6 10 */]) {
          						  case 0:
/*<116>*/ 							{'type': 'type3', 'subType': 4, 'param1': 511, 'param2': 0, 'next': 115, 'param3': 30}
          							flw_115:
/*<115>*/ 							story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
/*<120>*/ 							printf("\x0E\x01\x09\x04\x03\x900L'altro <r<generatore >>è qua!")
/*<119>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 118, 'param3': 34}
/*<118>*/ 							printf("\x0E\x01\x09\x04\x03\x900Per favore! Bzzz...")
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
/*< 23>*/ 						printf("\x0E\x01\x09\x04\x03\x900I <r<generatori >>sono due. Bzzz.")
/*< 22>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 21, 'param3': 34}
/*< 21>*/ 						printf("\x0E\x01\x09\x04\x03\x900Per favore! Bzzz...")
          						goto flw_19
          					}
          				}
          			  case 1:
/*<108>*/ 				printf("\x0E\x01\x09\x04\x03\x900Ma tu sei un umano! Bzzz!\nCome hai fatto ad arrivare qui?")
          				goto flw_1
          			}
          		  case 1:
/*< 97>*/ 			printf("\x0E\x01\x09\x04\x09\xC00Ho paura! Bzzz!\nCaccia i mostri!\nFacci uscire di qui!")
/*<105>*/ 			scene_flags[-1 'Skyloft: Silent Realm'][69 /* 0x9 20 */] = true;
          		}
          	}
          }

          void entrypoint_401_02() {
/*<  4>*/ 	start()
/*<  7>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_401_03() {
/*<  6>*/ 	start()
/*<  5>*/ 	printf("")
          }

          void entrypoint_401_04() {
/*<  8>*/ 	start()
/*< 11>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_401_05() {
/*< 10>*/ 	start()
/*<  9>*/ 	printf("")
          }

          void entrypoint_401_06() {
/*< 12>*/ 	start()
/*< 99>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 256, 'next': 121, 'param3': 13}
/*<121>*/ 	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
          	  case 0:
/*< 13>*/ 		printf("\x0E\x01\x09\x04\x03\x900Sono veramente felice\nche ci sei venuto ad aiutare... Bzzz...")
          		flw_15:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x03\x900Davvero?\nSei venuto su questa\nnave a cercare la\n<r<fiamma di Nayru>>? Bzzz...\n\x0E\x01\x09\x04\x03\x900Per ravvivare\nla <r<fiamma di Nayru >>bisogna\nriprendere il controllo della\nnave. Bzzz...\n\x0E\x01\x09\x04\x03\x900La sala comandi è vicina a questa\ncella, ma c'è una grande porta\nche è chiusa... per aprirla serve\nuna chiave speciale.\n\x0E\x01\x09\x04\x03\x900Vai alla <b<cabina del capitano>>!\n<pling>Là troverai la chiave della sala\ncomandi! Bzzz!")
/*<144>*/ 		set_camera(12, 0)
/*<145>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 143, 'param3': 15}
/*<143>*/ 		printf("\x0E\x01\x09\x04\x03\x900Per ringraziarti del tuo aiuto ti do\nquesta <r<chiave>>!\n\n\n\x0E\x01\x09\x04\x03\x900Con questa <r<chiave >>potrai entrare nella\n<b<cabina del capitano>>. Bzzz.")
/*<146>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 14, 'param3': 42}
/*< 14>*/ 		give_item(1 0x01);
/*<129>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 256, 'next': 128, 'param3': 13}
/*<128>*/ 		set_camera(-1, 0)
/*< 43>*/ 		printf("\x0E\x01\x09\x04\x03\x900Per andare nella\ncabina del capitano,\nusa la porta che\nsi trova dietro al ponte. Bzzz.")
/*< 41>*/ 		{'type': 'type3', 'subType': 4, 'param1': 768, 'param2': 0, 'next': 126, 'param3': 30}
/*<126>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 42, 'param3': 15}
/*< 42>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 130, 'param3': 34}
/*<130>*/ 		set_camera(12, 0)
/*< 28>*/ 		printf("\x0E\x01\x09\x04\x03\x900Noi ce ne andiamo. Bzzz.\n\n\n\n\x0E\x01\x09\x04\x03\x900Ci pensi tu a occuparti\ndel resto?\n")
/*< 57>*/ 		set_camera(6, 0)
/*< 60>*/ 		{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 256, 'next': 58, 'param3': 15}
/*< 58>*/ 		{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 0, 'next': 127, 'param3': 14}
/*<127>*/ 		{'type': 'type3', 'subType': 4, 'param1': 2, 'param2': 0, 'next': 59, 'param3': 13}
/*< 59>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 16, 'param3': 6}
/*< 16>*/ 		story_flags[262 /* us: 805A9AF9 0x01, jp: 805ACD79 0x01 */] = true;
/*< 48>*/ 		scene_flags[18 'Lanayru: Sandship'][108 /* 0xC 10 */] = true;
          	  case 1:
/*<122>*/ 		switch (scene_flags[69 /* 0x9 20 */]) {
          		  case 0:
/*<123>*/ 			printf("\x0E\x01\x09\x04\x03\x900Ti ho già visto\nda qualche parte<pause05>.<pause05>.<pause05>.\n\n\n\x0E\x01\x09\x04\x03\x900Sei quell'essere umano\nsenza cuore che prima\nnon ci ha voluto salvare!\n\n\x0E\x01\x09\x04\x03\x900Come hai fatto ad\narrivare qua? Bzzz... Bzzz!")
          			flw_125:
/*<125>*/ 			printf("\x0E\x01\x09\x04\x03\x900.<pause05>.<pause05>.<pause05>\n\n\n\n\x0E\x01\x09\x04\x03\x900Tu sei quello che ha aiutato\n<b<Capitanbot>> a salvarmi!\nGrazie!\nBzzz...")
          			goto flw_15
          		  case 1:
/*<124>*/ 			printf("\x0E\x01\x09\x04\x03\x900Ma tu sei\nun umano!\nCome hai fatto\nad arrivare qui?")
          			goto flw_125
          		}
          	}
          }

          void entrypoint_401_07() {
/*< 25>*/ 	start()
/*< 37>*/ 	set_camera(2, 0)
/*< 26>*/ 	printf("\x0E\x01\x09\x04\x03\x900Bzzz! \nFantastico, Link! ")
/*< 38>*/ 	set_camera(3, 0)
/*< 36>*/ 	printf("\x0E\x01\x09\x04\x03\x900La nostra nave è\ntornata come prima!\nBzzz!\n\n\x0E\x01\x09\x04\x03\x900Ora vorrei che\nliberassi anche i\n<b<membri dell'equipaggio>>...\nBzzz...\n\x0E\x01\x09\x04\x03\x900Nella nave c'è una\n<b<<pling>cella>>, saranno\nsicuramente rinchiusi là.")
/*< 39>*/ 	{'type': 'type3', 'subType': 4, 'param1': 766, 'param2': 0, 'next': 40, 'param3': 30}
/*< 40>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 34}
/*< 27>*/ 	printf("\x0E\x01\x09\x04\x03\x900Io ho paura...\nTi aspetto sulla barca...\nBzzz...\n\n\x0E\x01\x09\x04\x03\x900Mi raccomando...")
/*< 50>*/ 	story_flags[277 /* us: 805A9AF8 0x80, jp: 805ACD78 0x80 */] = true;
/*<138>*/ 	scene_flags[18 'Lanayru: Sandship'][19 /* 0x3 08 */] = true;
          }

          void entrypoint_401_08() {
/*< 44>*/ 	start()
/*< 45>*/ 	printf("")
/*< 46>*/ 	changeScene(1, 0) // 
          }

          void entrypoint_401_09() {
/*< 51>*/ 	start()
/*< 62>*/ 	set_camera(7, 0)
/*< 56>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 54, 'param3': 6}
/*< 54>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 52, 'param3': 35}
/*< 52>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMio signore, Faih a rapporto.\nConfermo che questi <r<tentacoli\n>>appartengono a una gigantesca\ncreatura mostruosa.\nLa situazione non è chiara,\nma questa nave è in pericolo.\n\n\nProbabilità che la nave\naffondi, in assenza di\nprovvedimenti: 80%.\n\nSuggerirei di tagliarli usando il <r<<pling>potere\nceleste >>e di andare a verificare\nla situazione all'esterno.")
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
/*< 70>*/ 				printf("\x0E\x01\x12\x04\x00\x01Mio signore,\nconfermo che la sala\nmacchine è ora attiva.\n\nSuggerirei di attraversarla\ne di recarsi al più presto\na <g<liberare >>l'equipaggio\nimprigionato nella cella.")
          			  case 1:
          				flw_69:
/*< 69>*/ 				printf("\x0E\x01\x12\x04\x00\x01Mio signore,\ncome riferito dal marinaio,\nla sala macchine è attiva.\n\nTuttavia, attivando solo\nun <r<generatore>>, il passaggio\nper la cella non si apre.\n\nSuggerirei di affrettarsi\na raggiungere il secondo\n<r<generatore>>.")
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
/*< 68>*/ 				printf("\x0E\x01\x12\x04\x00\x01Mio signore. Confermo di aver\navvertito un'altra forte scossa.\n\n\nLa situazione non è chiara,\nma suggerirei di recarsi\nal più presto dai <b<marinai\nimprigionati nella cella>>.")
          			  case 1:
          				flw_71:
/*< 71>*/ 				printf("\x0E\x01\x12\x04\x00\x01Mio signore,\nconfermo di aver avvertito\nuna forte scossa.\n\nSi suppone che,\nagendo su questo\ndispositivo, si possa\nattivare un meccanismo.\nLa situazione non è chiara,\nma suggerirei di recarsi\nal più presto dai <b<marinai\nimprigionati nella cella>>.")
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
/*< 76>*/ 	printf("\x0E\x01\x12\x04\x00\x01Mio signore,\ntutto porta a concludere\nche si tratti della <pling><y<chiave\n>>della sala comandi.")
/*< 79>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1278, 'param2': 0, 'next': 77, 'param3': 30}
/*< 77>*/ 	printf("La mia memoria suggerisce che la\n<b<porta della sala comandi>> si trova\nnel luogo contrassegnato con \x0E\x02\x04\x02\x19CD.")
/*< 80>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 78, 'param3': 34}
/*< 78>*/ 	printf("Suggerirei vivamente\ndi dirigersi al più\npresto verso\nla <b<sala comandi>>.")
          }

          void entrypoint_401_12() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf("\x0E\x01\x12\x04\x00\x01Mio signore,\nguardate!")
/*< 91>*/ 	set_camera(8, 0)
/*< 89>*/ 	printf("C'è una grande porta.\nAnche se...\napparentemente è chiusa.")
/*< 92>*/ 	set_camera(-1, 0)
/*< 90>*/ 	printf("Suppongo che si tratti della porta\nd'accesso a una stanza importante.")
          }

          void entrypoint_401_13() {
/*< 83>*/ 	start()
/*< 84>*/ 	printf("Link, \x0E\x01\x12\x04\x00\x0Bmio signore,\nho qualcosa da riferirvi.")
/*< 95>*/ 	set_camera(9, 0)
/*< 93>*/ 	printf("Avverto una presenza\nmalefica provenire\nda oltre quella porta.")
/*< 96>*/ 	set_camera(-1, 0)
/*< 94>*/ 	printf("Probabilità che i tentacoli\nche stanno distruggendo\nla nave appartengano a una\ncreatura gigantesca: 90%.\nSuggerirei di prepararvi\nal meglio prima di uscire\nsul ponte.")
          }

          void entrypoint_401_14() {
/*< 85>*/ 	start()
/*<154>*/ 	set_camera(17, 0)
/*<155>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 151, 'param3': 6}
/*<151>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 152, 'param3': 51}
/*<152>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 86, 'param3': 16}
/*< 86>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMio signore, Faih a rapporto.\nProbabilità che quella sia una <r<<pling>pietra\ndel tempo>>: 90%.\n\nSuppongo che sia in grado di\nmodificare profondamente questo\ngaleone. Suggerirei di <g<colpirla>> in\nqualche modo.")
/*<153>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 156, 'param3': 36}
/*<156>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 42}
          }

          void entrypoint_401_15() {
/*< 87>*/ 	start()
/*<147>*/ 	set_camera(16, 0)
/*<148>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 149, 'param3': 51}
/*<149>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 88, 'param3': 16}
/*< 88>*/ 	printf("\x0E\x01\x12\x04\x00\x01Mio signore, ho delle informazioni\nriguardo a quell'androide che\nabbiamo appena incontrato.\n\nProbabilità che si tratti del <b<pirata>> di\ncui parlava Capitanbot: 99%.\n\n\nLa tenacia che ha dimostrato\nnel sopravvivere così a lungo\nè degna di ammirazione.")
/*<150>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_401_16() {
/*<136>*/ 	start()
/*<137>*/ 	set_camera(14, 0)
/*<140>*/ 	{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 0, 'next': 141, 'param3': 51}
/*<141>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 132, 'param3': 16}
/*<132>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMio signore, Faih a rapporto riguardo\nal nuovo oggetto del quale siete venuto\nin possesso: l'arco.\n\nUnendo la forza accumulata con la\ntensione dell'arco a delle frecce a\nimpatto elevato, è possibile <g<mirare e \ncolpire obbiettivi lontani>>.\nNel caso in cui vogliate controllare\nnuovamente i comandi, estraete l'arco\ncon (B), poi premete (2).\x0E\x01\x11\x02\x1CD\x0E\x01\x11\x02\x5CD")
/*<164>*/ 	set_camera(19, 0)
/*<163>*/ 	printf("Inoltre, facendo in modo che la freccia\nscoccata colpisca <r<determinati\nmeccanismi>>, questi possono essere\nattivati.")
/*<135>*/ 	set_camera(13, 0)
/*<133>*/ 	printf("Confermo individuazione\ndi tali <r<meccanismi>> sul <b<<pling>>><b<ponte>>.\n")
/*<134>*/ 	set_camera(15, 0)
/*<131>*/ 	printf("Tuttavia, mirare da qui è\nobbiettivamente difficile!\nSuggerirei di tornare in coperta.")
/*<142>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_401_17() {
/*<157>*/ 	start()
/*<158>*/ 	printf("\x0E\x01\x12\x04\x00\x01Mio signore,\nguardate lassù.")
/*<161>*/ 	set_camera(18, 0)
/*<160>*/ 	printf("Confermo la presenza della pietra del\ntempo di coperta al di là della griglia di\naereazione del soffitto.\n\nRitengo possibile mirare e sparare\nattraverso le fessure della griglia un\npiccolo proiettile, quale una freccia.")
/*<162>*/ 	set_camera(-1, 0)
/*<159>*/ 	scene_flags[18 'Lanayru: Sandship'][56 /* 0x6 01 */] = true;
          }

