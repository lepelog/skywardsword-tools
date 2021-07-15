          void entrypoint_200_00() {
          	start()
/*< 54>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 11, 'param3': 31}
/*< 11>*/ 	switch (random(2)) {
          	  case 0:
/*< 60>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 1, 'param3': 13}
/*<  1>*/ 		printf("\x0E\x01\x09\x04\x00\x0E\x0E\x01\x08\x02\xFECDVa' via... va' via...")
          	  case 1:
/*< 59>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 12, 'param3': 13}
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x00\x0E\x0E\x01\x08\x02\xFECDFingiti morto... fingiti morto...")
          	}
          }

          void entrypoint_200_52() {
/*< 48>*/ 	start()
/*< 78>*/ 	switch (scene_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 79>*/ 		printf("\x0E\x01\x12\x04\x00\x01Mio signore, suggerisco di sincerarvi\ndell'incolumità di questa creatura.")
          	  case 1:
/*< 49>*/ 		printf("\x0E\x01\x12\x04\x00\x01Mio signore, probabilità che\nproseguendo in questa direzione\nla creatura sopravviva: 5%.")
          	}
          }

          void entrypoint_200_53() {
/*<  2>*/ 	start()
/*<411>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 415, 'param3': 46}
/*<415>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 416, 'param3': 51}
/*<416>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 3, 'param3': 16}
/*<  3>*/ 	printf("")
/*<  4>*/ 	switch (choice(2)) {
          	  case 0:
/*<  5>*/ 		printf("")
          		flw_220:
/*<220>*/ 		printf("")
/*<  7>*/ 		switch (choice(2)) {
          		  case 0:
/*<408>*/ 			set_camera(33, 0)
/*<  8>*/ 			printf("")
/*<410>*/ 			set_camera(32, 0)
/*<409>*/ 			printf("")
          			flw_413:
/*<413>*/ 			set_camera(34, 0)
/*<414>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 412, 'param3': 36}
/*<412>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 10, 'param3': 42}
/*< 10>*/ 			story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<608>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          		  case 1:
/*<  9>*/ 			printf("")
          			goto flw_413
          		}
          	  case 1:
/*<  6>*/ 		printf("")
          		goto flw_220
          	}
          }

          void entrypoint_200_01() {
/*<105>*/ 	start()
/*<280>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 72>*/ 		{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 81, 'param3': 13}
/*< 81>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 77, 'param3': 6}
/*< 77>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 200, 'param3': 17}
/*<200>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 63, 'param3': 13}
/*< 63>*/ 		set_camera(1, 0)
/*< 61>*/ 		printf("\x0E\x01\x08\x02\x1CDArgh! Un tizio verde!")
/*< 64>*/ 		{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 0, 'next': 62, 'param3': 13}
/*< 62>*/ 		printf("\x0E\x01\x09\x04\x00\x0FKyu! Kyu!\nRisparmiami la vita!")
/*<120>*/ 		{'type': 'type3', 'subType': 2, 'param1': 18, 'param2': 0, 'next': 123, 'param3': 14}
/*<123>*/ 		{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 256, 'next': 201, 'param3': 15}
/*<201>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 0, 'next': 133, 'param3': 13}
/*<133>*/ 		set_camera(2, 0)
/*< 18>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 121, 'param3': 6}
/*<121>*/ 		{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 0, 'next': 122, 'param3': 14}
/*<122>*/ 		story_flags[50 /* us: 805A9ADD 0x20, jp: 805ACD5D 0x20 */] = true;
/*<135>*/ 		set_camera(9, 0)
          	  case 1:
/*<279>*/ 		printf("\x0E\x01\x09\x04\x00\x0BEh...?\nNon si muove più una foglia...")
/*<281>*/ 		temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_200_70() {
/*<623>*/ 	start()
/*<624>*/ 	printf("\x0E\x01\x12\x04\x00\x04Mio signore Link,\nSono ora in grado di analizzare il\nvostro grado di abilità in\ncombattimento contro il nemico.")
/*<629>*/ 	scene_flags[1 'Faron Woods'][70 /* 0x9 40 */] = true;
/*<630>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 103, 'next': 635, 'param3': 32}
/*<635>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 103, 'next': 636, 'param3': 17}
/*<636>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 631, 'param3': 6}
/*<631>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 103, 'next': 632, 'param3': 17}
/*<632>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 634, 'param3': 6}
/*<634>*/ 	set_camera(39, 0)
/*<633>*/ 	printf("Mentre <g<inquadrate >>con (Z), se vi\nrivolgete a me premendo (v), sarò lieta\ndi riferirvi, oltre alle informazioni,\ni risultati delle mie analisi.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
/*<637>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 638, 'param3': 36}
/*<638>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 639, 'param3': 6}
/*<639>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_02() {
/*< 19>*/ 	start()
/*< 23>*/ 	switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          	  case 0:
/*< 40>*/ 		switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          		  case 0:
/*< 41>*/ 			printf("\x0E\x01\x09\x04\x00\x07Grazie per aver trovato tutti i\nmiei compagni!\n\n\n\x0E\x01\x09\x04\x00\x13Peccato che la tua amica non fosse con\nnessuno di loro...\nVedrai che la troverai!")
          		  case 1:
/*<101>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 151, 'param3': 13}
/*<151>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<152>*/ 				printf("\x0E\x01\x09\x04\x00\x07Sono contento che il saggio stia bene!\nNon era andato lontano, allora!\n\n\n\x0E\x01\x09\x04\x00\x13Mi dispiace che la tua amica non\nfosse con lui...")
          			  case 1:
/*< 24>*/ 				printf("\x0E\x01\x09\x04\x00\x04Riferisci al saggio che io sono salvo,\nper piacere! La tua amica potrebbe\nessere con lui.")
          			}
          		}
          	  case 1:
/*< 55>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 324, 'param3': 31}
/*<324>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1002, 'next': 65, 'param3': 24}
/*< 65>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 22, 'param3': 13}
/*< 22>*/ 		printf("Accipikkyu... mi segue ancoraaa!")
/*<340>*/ 		set_camera(18, 0)
/*<401>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 67, 'param3': 49}
/*< 67>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 18, 'next': 75, 'param3': 13}
/*< 75>*/ 		make_actor_do_something(0, 0)
/*<402>*/ 		printf("\x0E\x01\x08\x02\x2CDPatapum!")
/*< 68>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4, 'param2': 0, 'next': 66, 'param3': 13}
/*< 66>*/ 		printf("\x0E\x01\x08\x02\xFECD\x0E\x01\x06\x02\xFDCD... ... ...")
/*< 74>*/ 		{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 11, 'next': 73, 'param3': 13}
/*< 73>*/ 		printf("Oh? Non mi fai niente?!\nE hai pure fatto secchi quei tipi rossi!")
/*<353>*/ 		set_camera(19, 0)
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 83, 'param3': 13}
/*< 83>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 403, 'param3': 6}
/*<403>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 76, 'param3': 17}
/*< 76>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 27, 'param3': 13}
/*< 27>*/ 		printf("\x0E\x01\x09\x04\x00\x01Sono il Kyuri <b<Maccio>>. Tu sembri buono.\nMi hai salvato!")
/*<137>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 136, 'param3': 13}
/*<136>*/ 		printf("\x0E\x01\x09\x04\x00\x05Ho visto una\ndall'aspetto simile al tuo, poco fa!\n\n[1]Zelda?[2]Chi?!")
/*< 85>*/ 		switch (choice(2)) {
          		  case 0:
/*< 88>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 86, 'param3': 13}
/*< 86>*/ 			printf("\x0E\x01\x09\x04\x00\x04Ah, una tua amica?\nAllora ho delle brutte notizie...")
          			flw_90:
/*< 90>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 91, 'param3': 13}
/*< 91>*/ 			printf("\x0E\x01\x09\x04\x00\nI tipi rossi hanno iniziato ad attaccare\ned è fuggita con <pling>il <b<saggio>>!")
/*<338>*/ 			set_camera(20, 0)
/*<339>*/ 			entrypoint_200_60();
          		  case 1:
/*< 89>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 87, 'param3': 13}
/*< 87>*/ 			printf("\x0E\x01\x09\x04\x00\x04No, no! Non so niente, ma è in pericolo!")
          			goto flw_90
          		}
          	}
          }

          void entrypoint_200_54() {
/*< 50>*/ 	start()
/*< 51>*/ 	printf("Notifico una forte reazione del rilevatore,\nsuggerisco di proseguire in questa\ndirezione.")
          }

          void entrypoint_200_71() {
/*<643>*/ 	start()
/*<644>*/ 	{'type': 'type3', 'subType': 1, 'param1': 315, 'param2': 0, 'next': 645, 'param3': 51}
/*<645>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 646, 'param3': 16}
/*<646>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 647, 'param3': 17}
/*<647>*/ 	set_camera(40, 0)
/*<648>*/ 	entrypoint_006_08();
          }

          void entrypoint_200_03() {
/*< 28>*/ 	start()
/*< 29>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 31>*/ 		printf("\x0E\x01\x09\x04\x00\x07Grazie per aver trovato tutti\ni miei compagni.\n\n\n\x0E\x01\x09\x04\x00\x13Però... la foresta sembra ancora\npericolosa...")
          	  case 1:
/*< 93>*/ 		switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          		  case 0:
/*<102>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 161, 'param3': 13}
/*<161>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<162>*/ 				printf("\x0E\x01\x09\x04\x00\x07Meno male che anche il saggio sta bene!\nIo resto qui finché non vanno\nvia i mostri!")
          			  case 1:
/*<160>*/ 				printf("\x0E\x01\x09\x04\x00\x04Starò qui ancora un po'.\nSe vedi il saggio diglielo!")
          			}
          		  case 1:
/*<342>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 3, 'next': 92, 'param3': 46}
/*< 92>*/ 			{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 12, 'next': 30, 'param3': 13}
/*< 30>*/ 			printf("Non mangiarmi! Ho un sapore tremendo!\nLasciami andare!!!")
/*<158>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<569>*/ 				{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 159, 'param3': 13}
/*<159>*/ 				printf("\x0E\x01\x09\x04\x00\x05Come? Il saggio era in pena?!\nComunque sono contento di sentire\nche sta bene!")
          				flw_207:
/*<207>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 206, 'param3': 13}
/*<206>*/ 				printf("\x0E\x01\x09\x04\x00\x01Sono il Kyuri <b<Algo>>!\nSe incontri il saggio, digli che sono qui!\n\n\n\x0E\x01\x09\x04\x00\x0FEcco... non lascio questo posto finché\nnon se ne sono andati tutti i mostri!")
/*< 32>*/ 				story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */] = true;
/*<650>*/ 				entrypoint_200_62();
          			  case 1:
/*<570>*/ 				{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 100, 'param3': 13}
/*<100>*/ 				printf("\x0E\x01\x09\x04\x00\x05Ma... allora... tu non sei cattivo?\n\n\n\nUna ragazza dalla testa gialla?<pause0F>\n\x0E\x01\x09\x04\x00\x13Non lo so, sono stato nascosto\ntutto il tempo...")
          				goto flw_207
          			}
          		}
          	}
          }

          void entrypoint_200_55() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf("Non sono presenti creature ostili nei dintorni.\nIl Kyuri sarebbe al sicuro anche ai piedi dell'albero.\n\n\nSuggerisco di ponderare una soluzione per aiutarlo.\nDa solo non è in grado di muoversi.\n\n\n\x0E\x01\x12\x04\x00\x01Mio signore, potete controllare le possibili azioni\npremendo \x0E\x02\x04\x02\x13CD in qualsiasi momento.\x0E\x01\x11\x02\xBCD")
          }

          void entrypoint_200_04() {
/*< 33>*/ 	start()
/*< 34>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 35>*/ 		printf("\x0E\x01\x09\x04\x00\x07Grazie per aver trovato tutti\ni miei compagni!\n\n\n\x0E\x01\x09\x04\x00\x0BStare qui mi fa sentire al sicuro,\nnon si vedono cosi brutti in giro!")
          	  case 1:
/*< 99>*/ 		switch (scene_flags[13 /* 0x0 20 */]) {
          		  case 0:
/*<115>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<167>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 169, 'param3': 13}
/*<169>*/ 				switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          				  case 0:
/*<170>*/ 					printf("\x0E\x01\x09\x04\x00\x07Per fortuna il saggio sta bene!\n\n\n\n\x0E\x01\x09\x04\x00\x13A me tremano ancora le gambe, resto qui!")
          				  case 1:
/*<168>*/ 					printf("\x0E\x01\x09\x04\x00\x04Resto ancora un po' qui a riprendermi\ndalla paura! Dillo al saggio, se lo vedi!")
          				}
          			  case 1:
/*<113>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 205, 'param3': 31}
/*<205>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 112, 'param3': 13}
/*<112>*/ 				printf("\x0E\x01\x09\x04\x00\x11Che dolooore...<pause1E>\nPerò... almeno m'hai fatto scendere!")
/*<114>*/ 				{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 165, 'param3': 13}
/*<165>*/ 				switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          				  case 0:
/*<166>*/ 					printf("\x0E\x01\x09\x04\x00\x05Come? Il saggio è sano e salvo? Bene!")
          					flw_210:
/*<210>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 209, 'param3': 13}
/*<209>*/ 					printf("\x0E\x01\x09\x04\x00\x01Mi chiamo <b<Orzio>>!\nSe vedi il saggio, digli che sono qui!\n\n\n\x0E\x01\x09\x04\x00\x13Ho le gambe che mi tremano\ncome foglioline al vento...")
/*<163>*/ 					story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */] = true;
/*<649>*/ 					scene_flags[1 'Faron Woods'][53 /* 0x7 20 */] = true;
/*<654>*/ 					entrypoint_200_63();
          				  case 1:
/*<164>*/ 					printf("\x0E\x01\x09\x04\x00\x05Mmh... una ragazza?\nNo... non ne so niente.\n\n\n\x0E\x01\x09\x04\x00\x04Il saggio ne saprà sicuramente qualcosa!")
          					goto flw_210
          				}
          			}
          		  case 1:
/*<129>*/ 			{'type': 'type3', 'subType': 4, 'param1': 22, 'param2': 0, 'next': 202, 'param3': 13}
/*<202>*/ 			set_camera(4, 0)
/*<128>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\xFECDKyuuu!")
/*<111>*/ 			set_camera(5, 0)
/*<130>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 117, 'param3': 6}
/*<117>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 0, 'next': 116, 'param3': 13}
/*<116>*/ 			printf("\x0E\x01\x09\x04\x00\x0BHai fatto secchi i tipi rossi come se\nfossero foglie di tè, giovane virgulto!\nNon sarai mica un... <pause0F>giustiziere?!\n\n\x0E\x01\x09\x04\x00\x13Tremo come un fuscello, non riesco\na muovermi. Aiutami a scendere!")
/*<118>*/ 			temp_flags[1 /* 0x1 02 */] = true;
          		}
          	}
          }

          void entrypoint_200_56() {
/*< 47>*/ 	start()
/*<311>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*<310>*/ 		printf("Suggerisco di salvare i progressi\nprima di proseguire verso il santuario\nnella foresta sulle tracce di Zelda.")
          	  case 1:
/*<305>*/ 		switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          		  case 0:
/*<306>*/ 			switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          			  case 0:
/*<308>*/ 				switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          				  case 0:
/*<309>*/ 					switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          					  case 0:
/*<303>*/ 						printf("Non avverto la presenza\ndi altri Kyuri in questa zona.\n\n\nSuggerisco di tornare dal saggio\ne raccogliere ulteriori informazioni.")
          					  case 1:
          						flw_304:
/*<304>*/ 						printf("Dato l'ottimo angolo di visuale,\nsuggerisco di impostare il rilevatore\nsulla presenza di Kyuri.")
          					}
          				  case 1:
          					goto flw_304
          				}
          			  case 1:
          				goto flw_304
          			}
          		  case 1:
/*<568>*/ 			printf("Il rilevatore reagisce molto\ndebolmente alla presenza di Zelda.\nSuggerisco di cambiare zona.")
          		}
          	}
          }

          void entrypoint_200_90() {
/*<219>*/ 	start()
/*<312>*/ 	switch (story_flags[227 /* us: 805A9AF2 0x20, jp: 805ACD72 0x20 */]) {
          	  case 0:
/*<307>*/ 		printf("\x0E\x01\x09\x04\x18\x1705Come? Vuoi che ti parli di qualcosa?\n[1]Esaedri[2]Santuario[3-]Niente")
/*<448>*/ 		switch (choice(3)) {
          		  case 0:
/*<447>*/ 			printf("\x0E\x01\x09\x04\x16\x1E04Appena è stato investito dalla luce della\ntua spada, l'esaedro è volato nel Cielo.\n\n\nSecondo gli scritti antichi, ce ne sono\ndiversi, sparsi per tutta la Terra.")
          			flw_596:
/*<596>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<598>*/ 			printf("\x0E\x01\x09\x04\x08\xB04Stando agli scritti antichi,\nl'edificio nelle vicinanze dovrebbe\nessere il Santuario del Cielo.\n\nDovrebbe accogliere l'eroe che\nproviene dal Cielo...")
/*<449>*/ 			switch (scene_flags[29 /* 0x2 20 */]) {
          			  case 0:
          				goto flw_596
          			  case 1:
/*<450>*/ 				printf("\x0E\x01\x09\x04\x00\x1707A proposito... da qualche parte dovrebbe\nesserci una stele...\n\n\n\x0E\x01\x09\x04\x16\xB00C'era scritto qualcosa...<pause0F> Secondo me si\ntratta di qualche istruzione per entrare!")
          				goto flw_596
          			}
          		  case 2:
/*<597>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<591>*/ 		switch (scene_flags[47 /* 0x4 80 */]) {
          		  case 0:
/*<452>*/ 			switch (scene_flags[37 /* 0x5 20 */]) {
          			  case 0:
/*<493>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 451, 'param3': 32}
          				flw_451:
/*<451>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00Questo esaedro è fatto di un metallo\nche non avevo mai visto! Non riesco\na intaccarlo in nessun modo.")
/*<466>*/ 				set_camera(-1, 0)
/*<477>*/ 				printf("\x0E\x01\x09\x04\x16\xB07<r<Se verrà investito dalla luce della spada\nceleste... >>così dicono gli scritti antichi,\nsignificherà qualcosa!\n\x0E\x01\x09\x04\x00\x1705Roccia, che ne pensi?")
/*<478>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 479, 'param3': 17}
/*<479>*/ 				{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 480, 'param3': 17}
/*<480>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 481, 'param3': 6}
/*<481>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<486>*/ 				scene_flags[1 'Faron Woods'][37 /* 0x5 20 */] = true;
/*<455>*/ 				switch (scene_flags[36 /* 0x5 10 */]) {
          				  case 0:
          					flw_471:
/*<471>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 472, 'param3': 32}
/*<472>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 473, 'param3': 17}
/*<473>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 474, 'param3': 17}
/*<474>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 457, 'param3': 6}
/*<457>*/ 					set_camera(37, 0)
/*<458>*/ 					printf("\x0E\x01\x09\x04ÿ\xFF05Ecco...<pause0F> si dice che la Dea abbia\nlasciato dei tesori per l'eroe\nche sarebbe venuto dal cielo...\n\nPer un oggetto simile,<pause1E> <b<Esaedro\ndella Dea>> credo sia un nome\nappropriato! L'ho inventato io!")
/*<459>*/ 					set_camera(-1, 0)
/*<460>*/ 					printf("\x0E\x01\x09\x04\x00\x1E04Gli scritti antichi riportano\nqualcosa a riguardo...\n\n\nSe verrà investito dalla luce della<pause1E>\nspada celeste, chi la brandirà<pause1E>\nverrà ricompensato!")
/*<475>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 476, 'param3': 17}
/*<476>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 461, 'param3': 17}
/*<461>*/ 					printf("\x0E\x01\x09\x04\x18\x170BRoccia, tu possiedi una spada, no?\nPer questo vorrei che mi aiutassi\ncon questi esaedri enigmatici!\n[1]Va bene[2]Non voglio")
/*<463>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_462:
/*<462>*/ 						printf("\x0E\x01\x09\x04\x17\x1908Grazie!")
          						flw_465:
/*<465>*/ 						set_camera(37, 0)
          						goto flw_451
          					  case 1:
/*<464>*/ 						printf("\x0E\x01\x09\x04\x18\x170CFa' qualcosa, su! Per favore!\n[1]Va bene[2]No")
/*<467>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_462
          						  case 1:
/*<468>*/ 							printf("\x0E\x01\x09\x04\x08\x07Mmh... Vuoi per caso qualcosa in cambio?")
/*<470>*/ 							give_item(161 0xA1);
/*<469>*/ 							printf("\x0E\x01\x09\x04\x17\x1906Adesso non puoi più rifiutarti!")
          							goto flw_465
          						}
          					}
          				  case 1:
/*<456>*/ 					printf("\x0E\x01\x09\x04\x17\x1908Sei proprio franato qui\nal momento giusto!\n\n\nHo scoperto che in questa zona c'è\nqualcosa di cui si parla negli scritti\nantichi!")
          					goto flw_471
          				}
          			}
          		  case 1:
/*<593>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*<594>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ehi, roccia!\nVieni qui, sbrigati!")
/*<595>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<592>*/ 				scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<589>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ehilà roccia! Ci rincontriamo!\n\n\n\nVorrei chiederti una mano\nper una questione, vieni qui!")
/*<590>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		}
          	}
          }

          void entrypoint_200_57() {
/*< 20>*/ 	start()
/*< 21>*/ 	printf("")
          }

          void entrypoint_200_05() {
/*< 36>*/ 	start()
/*< 37>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 39>*/ 		printf("\x0E\x01\x09\x04\x00\x13Oh! Hai trovato tutti!\nNon darti delle arie, però!\nResti sempre un giovane virgulto.")
          	  case 1:
/*< 95>*/ 		switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          		  case 0:
/*<103>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 96, 'param3': 13}
/*< 96>*/ 			printf("\x0E\x01\x09\x04\x00\x05Non capisco proprio come hai fatto\na trovarmi, ero perfettamente\nmimetizzato!")
/*< 97>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 175, 'param3': 13}
/*<175>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<176>*/ 				printf("\x0E\x01\x09\x04\x00\x07Hai trovato il saggio! Sei un asso\nnello scovare chi si mimetizza, allora!")
          			  case 1:
/*<174>*/ 				printf("\x0E\x01\x09\x04\x00\x14Non hai ancora trovato il saggio, eh?!")
          			}
          		  case 1:
/*<323>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 348, 'param3': 31}
/*<348>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 3, 'next': 80, 'param3': 46}
/*< 80>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1003, 'next': 104, 'param3': 24}
/*<104>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 38, 'param3': 13}
/*< 38>*/ 			printf("\x0E\x01\x09\x04\x00\x13Ma io... credevo di essermi\nmimetizzato benissimo!")
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 208, 'param3': 13}
/*<208>*/ 			printf("\x0E\x01\x09\x04\x00\x01Sono <b<Genzio>>! Sono il maggior esperto\ndi mimetizzazione, dopo il saggio!")
/*<602>*/ 			story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = true;
/*<641>*/ 			story_flags[1155 /* us: 805A9B5A 0x02, jp: 805ACDDA 0x02 */] = true;
/*<653>*/ 			entrypoint_200_64();
          		}
          	}
          }

          void entrypoint_200_91() {
/*<283>*/ 	start()
/*<284>*/ 	printf("")
          }

          void entrypoint_200_06() {
/*< 42>*/ 	start()
/*< 43>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 45>*/ 		switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          		  case 0:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x00\x02Quella che chiami Zelda s'è diretta verso\nil santuario in fondo alla foresta.")
/*<119>*/ 			printf("Usando la <y<fionda >>dovresti riuscire a\nraggiungere il santuario in fondo alla\nforesta.\n\n\x0E\x01\x09\x04\x00\x06Vedrai che troverai la tua amica!\nOh oh oh!")
          		  case 1:
/*<106>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<107>*/ 				switch (random(2)) {
          				  case 0:
/*<110>*/ 					printf("\x0E\x01\x09\x04\x00\x01Usami come scaletta e prendilo!")
          				  case 1:
/*<109>*/ 					printf("\x0E\x01\x09\x04\x00\x01Forza, arrampicati sulla mia schiena\ne prendilo!")
          				}
          			  case 1:
          				flw_127:
/*<127>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 44, 'param3': 31}
/*< 44>*/ 				printf("\x0E\x01\x09\x04\x00\nAh ah! Sono tutti sani e salvi?!\n\n\n\nSei un asso a ritrovare gli altri!\nGrazie mille, anche se non so\nda dove vieni né il tuo nome!")
/*<575>*/ 				switch (temp_flags[4 /* 0x1 10 */]) {
          				  case 0:
/*<576>*/ 					printf("\x0E\x01\x09\x04\x00\x08Cosa?!\nAnche tu cerchi un'amica?\n\n\nHo incontrato una ragazza\ncon i peli sulla testa gialli...")
          					flw_567:
/*<567>*/ 					set_camera(-1, 0)
/*<392>*/ 					printf("\x0E\x01\x09\x04\x00\x02Quella che tu chiami Zelda\ndiceva di essere diretta al santuario\nin fondo alla foresta...\n\nLe ho detto di lasciar perdere\nperché troppo pericoloso, ma\nmi ha scavalcato ed è andata via.")
/*<393>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 394, 'param3': 32}
/*<394>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 102, 'next': 395, 'param3': 17}
/*<395>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 396, 'param3': 6}
/*<396>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 399, 'param3': 17}
/*<399>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 397, 'param3': 6}
/*<397>*/ 					set_camera(31, 0)
/*<125>*/ 					set_camera(7, 0)
/*<138>*/ 					{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 100, 'next': 139, 'param3': 15}
/*<139>*/ 					make_actor_do_something(3, 0)
/*<124>*/ 					printf("\x0E\x01\x09\x04\x00\x03Se prosegui di là, in fondo troverai\nun santuario, ma...<pause0F> è infestato di mostri!")
/*<400>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 142, 'param3': 17}
/*<142>*/ 					set_camera(8, 0)
/*<143>*/ 					{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 356, 'next': 144, 'param3': 15}
/*<144>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 287, 'param3': 17}
/*<287>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 398, 'param3': 17}
/*<398>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 126, 'param3': 6}
/*<126>*/ 					printf("\x0E\x01\x09\x04\x00\x0E\x0E\x01\x08\x02\x1CDCome ho fatto a non pensarci\nprima?!\n\n\nCome ringraziamento per aver trovato\ni miei compagni, ti faccio un regalo\nKyuri!\n\n\x0E\x01\x09\x04\x00\x08Oplà! Prego...")
/*<108>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          				  case 1:
/*<577>*/ 					printf("\x0E\x01\x09\x04\x00\x09Mi sono ricordato finalmente dove\ns'è diretta la tua amica!")
          					goto flw_567
          				}
          			}
          		}
          	  case 1:
/*<145>*/ 		switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          		  case 0:
/*<146>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<147>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<148>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<381>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 380, 'param3': 6}
/*<380>*/ 						set_camera(29, 0)
/*<642>*/ 						story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          						flw_382:
/*<382>*/ 						story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */] = true;
/*<498>*/ 						story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
          						goto flw_127
          					  case 1:
/*<149>*/ 						printf("\x0E\x01\x09\x04\x00\x06Oh oh oh!<pause0F>\nSono <b<Infusonio>>, l'anziano dei Kyuri!\n\n\nSei riuscito a smascherare la mia\ntecnica perfetta di mimetizzazione!<pause0F>\nNon sei uno qualunque, vero?!\n[1]Zelda?[2]Ho una bella\nnotizia per te")
/*<564>*/ 						switch (choice(2)) {
          						  case 0:
/*<566>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<562>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nAh! Dev'essere quella ragazza che ti\nsomiglia, con il pelo della testa biondo!\nSì, è stata con me!\n\n\x0E\x01\x09\x04\x00\x0CSì... ma parliamone dopo.\nOra sono troppo in pensiero\nper i miei compagni!\n\nNon riesco proprio a ricordare nulla,\na parte l'attacco di quei mostri!")
          							flw_565:
/*<565>*/ 							set_camera(29, 0)
/*<563>*/ 							printf("\x0E\x01\x09\x04\x00\x0ECome?!\nHai incontrato i miei compagni?!")
/*<150>*/ 							story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */] = true;
/*<196>*/ 							scene_flags[1 'Faron Woods'][16 /* 0x3 01 */] = true;
          							goto flw_382
          						  case 1:
/*<640>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_565
          						}
          					}
          				  case 1:
/*<177>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<179>*/ 						printf("\x0E\x01\x09\x04\x00\x03Maccio, Algo e Orzio\nsono in salvo?!\n\n\nScusa se te lo chiedo, ma non\npotresti assicurarti che anche\nl'<r<ultimo >>dei miei compagni stia bene?\n\n\x0E\x01\x09\x04\x00\x02Sicuramente si sarà mimetizzato\nnell'erba, prova a cercarlo in\nmezzo ai cespugli!\n\nEcco... mi sembra di cominciare\na ricordare qualcosa riguardo\nalla tua amica...!")
          					  case 1:
/*<212>*/ 						printf("\x0E\x01\x09\x04\x00\x06Oh oh oh!<pause0F>\nSono <b<Infusonio>>, l'anziano dei Kyuri!\n\n\nSei riuscito a smascherare la mia\ntecnica perfetta di mimetizzazione!<pause0F>\nNon sei uno qualunque, vero?!\n[1]Zelda?[2]Ho una bella\nnotizia per te")
/*<502>*/ 						switch (choice(2)) {
          						  case 0:
/*<504>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<499>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nAh! Dev'essere quella ragazza che ti\nsomiglia, con il pelo della testa biondo!\nSì, è stata con me!\n\n\x0E\x01\x09\x04\x00\x0CSì... ma parliamone dopo.\nOra sono troppo in pensiero\nper i miei compagni!\n\nNon riesco proprio a ricordare nulla,\na parte l'attacco di quei mostri!")
          							flw_503:
/*<503>*/ 							set_camera(29, 0)
/*<500>*/ 							printf("\x0E\x01\x09\x04\x00\x0ECome?!\nHai incontrato i miei compagni?!")
/*<501>*/ 							printf("\x0E\x01\x09\x04\x00\x03Oh oh oh!\nMaccio, Algo e Orzio sono in salvo?!\n\n\nMa non posso lasciare questo posto, ci\nsono ancora troppi mostri nella foresta!")
/*<505>*/ 							set_camera(-1, 0)
/*<506>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_383:
/*<383>*/ 								printf("\x0E\x01\x09\x04\x00\x08Scusa se te lo chiedo, ma non\npotresti assicurarti che anche\nl'<r<ultimo >>dei miei compagni\nstia bene?\nSicuramente si sarà mimetizzato\nnell'erba, prova a cercarlo in\nmezzo ai cespugli!\n\n\x0E\x01\x09\x04\x00\x02Se lo troverai, mi aiuterai di certo\na ricordare dov'è andata la\ntua amica!")
          								flw_178:
/*<178>*/ 								scene_flags[1 'Faron Woods'][16 /* 0x3 01 */] = true;
/*<390>*/ 								set_camera(30, 0)
/*<391>*/ 								entrypoint_200_61();
          							  case 1:
/*<507>*/ 								printf("\x0E\x01\x09\x04\x00\x08Cosa? Anche tu stai cercando\nun'amica?\n\n\nMmh... è stata con me una ragazza con\nil pelo della testa biondo!\n\n\n\x0E\x01\x09\x04\x00\x0CSì... ma parliamone dopo.\nOra sono troppo in pensiero\nper i miei compagni!\n\nNon riesco proprio a ricordare nulla,\na parte l'attacco di quei mostri!")
          								goto flw_383
          							}
          						  case 1:
          							goto flw_503
          						}
          					}
          				}
          			  case 1:
/*<180>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<181>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<184>*/ 						printf("\x0E\x01\x09\x04\x00\x03Maccio, Algo e Genzio\nsono in salvo?!\n\n\nScusa se te lo chiedo, ma non\npotresti assicurarti che anche\nl'<r<ultimo >>dei miei compagni\nstia bene?\n\x0E\x01\x09\x04\x00\x02Sicuramente si sarà arrampicato\nda qualche parte! Prova a\ncercarlo sugli alberi!\n\nEcco... mi sembra di cominciare\na ricordare qualcosa riguardo\nalla tua amica...!")
          					  case 1:
/*<213>*/ 						printf("\x0E\x01\x09\x04\x00\x06Oh oh oh!<pause0F>\nSono <b<Infusonio>>, l'anziano dei Kyuri!\n\n\nSei riuscito a smascherare la mia\ntecnica perfetta di mimetizzazione!<pause0F>\nNon sei uno qualunque, vero?!\n[1]Zelda?[2]Ho una bella\nnotizia per te")
/*<511>*/ 						switch (choice(2)) {
          						  case 0:
/*<513>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<509>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nAh! Dev'essere quella ragazza che ti\nsomiglia, con il pelo della testa biondo!\nSì, è stata con me!\n\n\x0E\x01\x09\x04\x00\x0CSì... ma parliamone dopo.\nOra sono troppo in pensiero\nper i miei compagni!\n\nNon riesco proprio a ricordare nulla,\na parte l'attacco di quei mostri!")
          							flw_512:
/*<512>*/ 							set_camera(29, 0)
/*<510>*/ 							printf("\x0E\x01\x09\x04\x00\x0ECome?!\nHai incontrato i miei compagni?!")
/*<508>*/ 							printf("\x0E\x01\x09\x04\x00\x03Oh oh oh!\nMaccio, Algo e Genzio\nsono in salvo?!\n\nMa non posso lasciare questo posto,\nci sono ancora troppi mostri\nnella foresta!")
/*<514>*/ 							set_camera(-1, 0)
/*<515>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_384:
/*<384>*/ 								printf("\x0E\x01\x09\x04\x00\x08Scusa se te lo chiedo, ma non\npotresti assicurarti che anche\nl'<r<ultimo >>dei miei compagni\nstia bene?\nSicuramente si sarà arrampicato\nda qualche parte! Prova a\ncercarlo sugli alberi!\n\n\x0E\x01\x09\x04\x00\x02Se lo troverai, mi aiuterai di certo\na ricordare dov'è andata la\ntua amica!")
          								goto flw_178
          							  case 1:
/*<516>*/ 								printf("\x0E\x01\x09\x04\x00\x08Cosa? Anche tu stai cercando\nun'amica?\n\n\nMmh... è stata con me una ragazza con\nil pelo della testa biondo!\n\n\n\x0E\x01\x09\x04\x00\x0CSì... ma parliamone dopo.\nOra sono troppo in pensiero\nper i miei compagni!\n\nNon riesco proprio a ricordare nulla,\na parte l'attacco di quei mostri!")
          								goto flw_384
          							}
          						  case 1:
          							goto flw_512
          						}
          					}
          				  case 1:
/*<182>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<183>*/ 						printf("\x0E\x01\x09\x04\x00\x03Sono più tranquillo ora che\nso che Maccio e Algo sono salvi!\nMa chissà gli altri...?\n\nScusa se te lo chiedo, ma non potresti\nassicurarti che anche gli altri\n<r<due >>miei compagni stiano bene?\n\n\x0E\x01\x09\x04\x00\x08Allooora, dov'era andata la tua amica...?\nForse di là... No, aspetta, di qua...?")
          					  case 1:
/*<214>*/ 						printf("\x0E\x01\x09\x04\x00\x06Oh oh oh!<pause0F>\nSono <b<Infusonio>>, l'anziano dei Kyuri!\n\n\nSei riuscito a smascherare la mia\ntecnica perfetta di mimetizzazione!<pause0F>\nNon sei uno qualunque, vero?!\n[1]Zelda?[2]Ho una bella\nnotizia per te")
/*<520>*/ 						switch (choice(2)) {
          						  case 0:
/*<522>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<518>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nAh! Dev'essere quella ragazza che ti\nsomiglia, con il pelo della testa biondo!\nSì, è stata con me!\n\n\x0E\x01\x09\x04\x00\x0CSì... ma parliamone dopo.\nOra sono troppo in pensiero\nper i miei compagni!\n\nNon riesco proprio a ricordare nulla,\na parte l'attacco di quei mostri!")
          							flw_521:
/*<521>*/ 							set_camera(29, 0)
/*<519>*/ 							printf("\x0E\x01\x09\x04\x00\x0ECome?!\nHai incontrato i miei compagni?!")
/*<517>*/ 							printf("\x0E\x01\x09\x04\x00\x03Oh oh oh!\nMaccio e Algo\nsono in salvo?!\n\nMa non posso lasciare questo posto,\nci sono ancora troppi mostri nella\nforesta!")
/*<523>*/ 							set_camera(-1, 0)
/*<524>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_385:
/*<385>*/ 								printf("\x0E\x01\x09\x04\x00\x02Scusa se te lo chiedo, ma non\npotresti assicurarti che anche gli altri\n<r<due >>miei compagni stiano bene?\n\nSe li troverai, mi aiuterai di certo\na ricordare dov'è andata la tua amica!")
          								goto flw_178
          							  case 1:
/*<525>*/ 								printf("\x0E\x01\x09\x04\x00\x08Cosa? Anche tu stai cercando\nun'amica?\n\n\nMmh... è stata con me una ragazza con\nil pelo della testa biondo!\n\n\n\x0E\x01\x09\x04\x00\x0CSì... ma parliamone dopo.\nOra sono troppo in pensiero\nper i miei compagni!\n\nNon riesco proprio a ricordare nulla,\na parte l'attacco di quei mostri!")
          								goto flw_385
          							}
          						  case 1:
          							goto flw_521
          						}
          					}
          				}
          			}
          		  case 1:
/*<185>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<186>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<187>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<195>*/ 						printf("\x0E\x01\x09\x04\x00\x03Maccio, Orzio e Genzio\nsono in salvo?!\n\n\nScusa se te lo chiedo, ma non\npotresti assicurarti che anche\nl'<r<ultimo >>dei miei compagni\nstia bene?\n\x0E\x01\x09\x04\x00\x02Sicuramente si sarà mimetizzato\nnell'erba, prova a cercarlo in\nmezzo ai cespugli!\n\nEcco... sento che inizio a ricordare\nqualcosa riguardo alla tua amica...!")
          					  case 1:
/*<215>*/ 						printf("\x0E\x01\x09\x04\x00\x06Oh oh oh!<pause0F>\nSono <b<Infusonio>>, l'anziano dei Kyuri!\n\n\nSei riuscito a smascherare la mia\ntecnica perfetta di mimetizzazione!<pause0F>\nNon sei uno qualunque, vero?!\n[1]Zelda?[2]Ho una bella\nnotizia per te")
/*<529>*/ 						switch (choice(2)) {
          						  case 0:
/*<531>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<527>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nAh! Dev'essere quella ragazza che ti\nsomiglia, con il pelo della testa biondo!\nSì, è stata con me!\n\n\x0E\x01\x09\x04\x00\x0CSì... ma parliamone dopo.\nOra sono troppo in pensiero\nper i miei compagni!\n\nNon riesco proprio a ricordare nulla,\na parte l'attacco di quei mostri!")
          							flw_530:
/*<530>*/ 							set_camera(29, 0)
/*<528>*/ 							printf("\x0E\x01\x09\x04\x00\x0ECome?!\nHai incontrato i miei compagni?!")
/*<526>*/ 							printf("\x0E\x01\x09\x04\x00\x03Oh oh oh!\nMaccio, Orzio e Genzio\nsono in salvo?!\n\nMa non posso lasciare questo posto,\nci sono ancora troppi mostri nella\nforesta!")
/*<532>*/ 							set_camera(-1, 0)
/*<533>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_386:
/*<386>*/ 								printf("\x0E\x01\x09\x04\x00\x08Scusa se te lo chiedo, ma non\npotresti assicurarti che anche\nl'<r<ultimo >>dei miei compagni\nstia bene?\nSicuramente si sarà mimetizzato\nnell'erba, prova a cercarlo in\nmezzo ai cespugli!\n\n\x0E\x01\x09\x04\x00\x02Se lo troverai, mi aiuterai di certo\na ricordare dov'è andata la tua amica!")
          								goto flw_178
          							  case 1:
/*<534>*/ 								printf("\x0E\x01\x09\x04\x00\x08Cosa? Anche tu stai cercando\nun'amica?\n\n\nMmh... è stata con me una ragazza con\nil pelo della testa biondo!\n\n\n\x0E\x01\x09\x04\x00\x0CSì... ma parliamone dopo.\nOra sono troppo in pensiero\nper i miei compagni!\n\nNon riesco proprio a ricordare nulla,\na parte l'attacco di quei mostri!")
          								goto flw_386
          							}
          						  case 1:
          							goto flw_530
          						}
          					}
          				  case 1:
/*<188>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<189>*/ 						printf("\x0E\x01\x09\x04\x00\x03Sono più tranquillo ora che\nso che Maccio e Orzio sono salvi!\nMa chissà gli altri...?\n\nScusa se te lo chiedo, ma non potresti\nassicurarti che anche gli altri <r<due\n>>miei compagni stiano bene?\n\n\x0E\x01\x09\x04\x00\x08Allooora, dov'era andata la tua amica...?\nForse di là... No, aspetta, di qua...?")
          					  case 1:
/*<216>*/ 						printf("\x0E\x01\x09\x04\x00\x06Oh oh oh!<pause0F>\nSono <b<Infusonio>>, l'anziano dei Kyuri!\n\n\nSei riuscito a smascherare la mia\ntecnica perfetta di mimetizzazione!<pause0F>\nNon sei uno qualunque, vero?!\n[1]Zelda?[2]Ho una bella\nnotizia per te")
/*<538>*/ 						switch (choice(2)) {
          						  case 0:
/*<540>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<536>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nAh! Dev'essere quella ragazza che ti\nsomiglia, con il pelo della testa biondo!\nSì, è stata con me!\n\n\x0E\x01\x09\x04\x00\x0CSì... ma parliamone dopo.\nOra sono troppo in pensiero\nper i miei compagni!\n\nNon riesco proprio a ricordare nulla,\na parte l'attacco di quei mostri!")
          							flw_539:
/*<539>*/ 							set_camera(29, 0)
/*<537>*/ 							printf("\x0E\x01\x09\x04\x00\x0ECome?!\nHai incontrato i miei compagni?!")
/*<535>*/ 							printf("\x0E\x01\x09\x04\x00\x03Oh oh oh!\nMaccio e Orzio sono in salvo?!\n\n\nMa non posso lasciare questo posto, ci\nsono ancora troppi mostri nella foresta!")
/*<541>*/ 							set_camera(-1, 0)
/*<542>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_387:
/*<387>*/ 								printf("\x0E\x01\x09\x04\x00\x02Scusa se te lo chiedo, ma non\npotresti assicurarti che anche gli altri\n<r<due >>miei compagni stiano bene?\n\nSe li troverai, mi aiuterai di certo a\nricordare dov'è andata la tua amica!")
          								goto flw_178
          							  case 1:
/*<543>*/ 								printf("\x0E\x01\x09\x04\x00\x08Cosa? Anche tu stai cercando\nun'amica?\n\n\nMmh... è stata con me una ragazza con\nil pelo della testa biondo!\n\n\n\x0E\x01\x09\x04\x00\x0CSì... ma parliamone dopo.\nOra sono troppo in pensiero\nper i miei compagni!\n\nNon riesco proprio a ricordare nulla,\na parte l'attacco di quei mostri!")
          								goto flw_387
          							}
          						  case 1:
          							goto flw_539
          						}
          					}
          				}
          			  case 1:
/*<190>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<191>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<194>*/ 						printf("\x0E\x01\x09\x04\x00\x03Sono più tranquillo ora che\nso che Maccio e Genzio sono salvi!\nMa chissà gli altri...?\n\nScusa se te lo chiedo, ma non\npotresti assicurarti che anche\ngli altri <r<due >>miei compagni\nstiano bene?\n\x0E\x01\x09\x04\x00\x08Allooora, dov'era andata la tua amica...?\nForse di là... No, aspetta, di qua...?")
          					  case 1:
/*<217>*/ 						printf("\x0E\x01\x09\x04\x00\x06Oh oh oh!<pause0F>\nSono <b<Infusonio>>, l'anziano dei Kyuri!\n\n\nSei riuscito a smascherare la mia\ntecnica perfetta di mimetizzazione!<pause0F>\nNon sei uno qualunque, vero?!\n[1]Zelda?[2]Ho una bella\nnotizia per te")
/*<547>*/ 						switch (choice(2)) {
          						  case 0:
/*<549>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<545>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nAh! Dev'essere quella ragazza che ti\nsomiglia, con il pelo della testa biondo!\nSì, è stata con me!\n\n\x0E\x01\x09\x04\x00\x0CSì... ma parliamone dopo.\nOra sono troppo in pensiero\nper i miei compagni!\n\nNon riesco proprio a ricordare nulla,\na parte l'attacco di quei mostri!")
          							flw_548:
/*<548>*/ 							set_camera(29, 0)
/*<546>*/ 							printf("\x0E\x01\x09\x04\x00\x0ECome?!\nHai incontrato i miei compagni?!")
/*<544>*/ 							printf("\x0E\x01\x09\x04\x00\x03Oh oh oh!\nMaccio e Genzio\nsono in salvo?!\n\nMa non posso lasciare questo posto,\nci sono ancora troppi mostri\nnella foresta!")
/*<550>*/ 							set_camera(-1, 0)
/*<551>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_388:
/*<388>*/ 								printf("\x0E\x01\x09\x04\x00\x02Scusa se te lo chiedo, ma non\npotresti assicurarti che anche gli altri\n<r<due >>miei compagni stiano bene?\n\nSe li troverai, mi aiuterai di certo a\nricordare dov'è andata la tua amica!")
          								goto flw_178
          							  case 1:
/*<552>*/ 								printf("\x0E\x01\x09\x04\x00\x08Cosa? Anche tu stai cercando\nun'amica?\n\n\nMmh... è stata con me una ragazza con\nil pelo della testa biondo!\n\n\n\x0E\x01\x09\x04\x00\x0CSì... ma parliamone dopo.\nOra sono troppo in pensiero\nper i miei compagni!\n\nNon riesco proprio a ricordare nulla,\na parte l'attacco di quei mostri!")
          								goto flw_388
          							}
          						  case 1:
          							goto flw_548
          						}
          					}
          				  case 1:
/*<192>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<193>*/ 						printf("\x0E\x01\x09\x04\x00\x03Sono più tranquillo ora che so che\nMaccio è salvo! Ma chissà gli altri...?\n\n\nScusa se te lo chiedo, ma non potresti\nassicurarti che anche gli altri <r<tre >>miei\ncompagni stiano bene?\n\n\x0E\x01\x09\x04\x00\x08Allooora, dov'era andata la tua amica...?")
          					  case 1:
/*<218>*/ 						printf("\x0E\x01\x09\x04\x00\x06Oh oh oh!<pause0F>\nSono <b<Infusonio>>, l'anziano dei Kyuri!\n\n\nSei riuscito a smascherare la mia\ntecnica perfetta di mimetizzazione!<pause0F>\nNon sei uno qualunque, vero?!\n[1]Zelda?[2]Ho una bella\nnotizia per te")
/*<556>*/ 						switch (choice(2)) {
          						  case 0:
/*<558>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<554>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nAh! Dev'essere quella ragazza che ti\nsomiglia, con il pelo della testa biondo!\nSì, è stata con me!\n\n\x0E\x01\x09\x04\x00\x0CSì... ma parliamone dopo.\nOra sono troppo in pensiero\nper i miei compagni!\n\nNon riesco proprio a ricordare nulla,\na parte l'attacco di quei mostri!")
          							flw_557:
/*<557>*/ 							set_camera(29, 0)
/*<555>*/ 							printf("\x0E\x01\x09\x04\x00\x0ECome?!\nHai incontrato i miei compagni?!")
/*<553>*/ 							printf("\x0E\x01\x09\x04\x00\x03Oh oh oh!\nMaccio è in salvo?!\n\n\nMa non posso lasciare questo posto, ci\nsono ancora troppi mostri nella foresta!")
/*<559>*/ 							set_camera(-1, 0)
/*<560>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_389:
/*<389>*/ 								printf("\x0E\x01\x09\x04\x00\x02Scusa se te lo chiedo, ma non potresti\nassicurarti che anche gli altri <r<tre\n>>miei compagni stiano bene?\n\nQuando saprò che sono tutti\nsani e salvi, sento che ricorderò\ndove s'è diretta la tua amica!")
          								goto flw_178
          							  case 1:
/*<561>*/ 								printf("\x0E\x01\x09\x04\x00\x08Cosa? Anche tu stai cercando\nun'amica?\n\n\nMmh... è stata con me una ragazza con\nil pelo della testa biondo!\n\n\n\x0E\x01\x09\x04\x00\x0CSì... ma parliamone dopo.\nOra sono troppo in pensiero\nper i miei compagni!\n\nNon riesco proprio a ricordare nulla,\na parte l'attacco di quei mostri!")
          								goto flw_389
          							}
          						  case 1:
          							goto flw_557
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_200_58() {
/*< 52>*/ 	start()
/*< 53>*/ 	printf("\x0E\x01\x12\x04\x00\x04Mio signore Link, ecco le informazioni\nriguardanti l'uso degli strumenti in vostro possesso.\n\n\n<g<Premendo brevemente >>\x0E\x02\x04\x02\x29CD potete prepararvi a tirare\ncon la <y<fionda>>.\x0E\x01\x11\x02\xFCD\n\n\nSe non ricordate questa informazione, premete \x0E\x02\x04\x02\x25CD\nper chiedere <rd<aiuto>> e rinfrescarvi la memoria.\x0E\x01\x11\x02\xBCD")
          }

          void entrypoint_200_92() {
/*<285>*/ 	start()
/*<286>*/ 	printf("")
          }

          void entrypoint_200_40() {
/*<314>*/ 	start()
/*<315>*/ 	printf("\x0E\x01\x05\x04K\x00\x0E\x01\x12\x04\x00\x01Mio signore, siamo giunti nella\n<b<foresta di Firone>>.")
/*<333>*/ 	temp_flags[50 /* 0x7 04 */] = true;
          }

          void entrypoint_200_07() {
/*< 56>*/ 	start()
/*< 58>*/ 	{'type': 'type3', 'subType': 4, 'param1': 20, 'param2': 0, 'next': 203, 'param3': 13}
/*<203>*/ 	set_camera(3, 0)
/*<573>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 574, 'param3': 13}
/*<574>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': -1, 'param3': 6}
          }

          void entrypoint_200_59() {
/*<204>*/ 	start()
/*<586>*/ 	switch (scene_flags[50 /* 0x7 04 */]) {
          	  case 0:
/*<588>*/ 		printf("\x0E\x01\x12\x04\x00\x04Signore Link,\nprobabilità che la fiamma si trovi\nin questo lago: 80%.")
          	  case 1:
/*<587>*/ 		printf("\x0E\x01\x12\x04\x00\x04Signore Link,\nprobabilità di trovare la fiamma\noltre questo ingresso: 80%.\n\nCiò a cui il Kyuri eremita si riferiva\nparlando di un potere divino, ritengo\nfosse il <r<potere celeste>>.\n\nSuggerisco pertanto di invocare\nil potere celeste e usare la spada\nper <g<completare il simbolo>>.")
/*<620>*/ 		scene_flags[1 'Faron Woods'][52 /* 0x7 10 */] = true;
          	}
          }

          void entrypoint_200_41() {
/*<316>*/ 	start()
/*<317>*/ 	printf("\x0E\x01\x05\x04K\x00La crescita della rigogliosa\nvegetazione e dei grandi alberi è\ndovuta alla quantità di acqua presente.")
          }

          void entrypoint_200_93() {
/*<417>*/ 	start()
/*<418>*/ 	printf("\x0E\x01\x09\x04\x00\x01Ehilà roccia! Ci rincontriamo!")
/*<485>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_08() {
/*<131>*/ 	start()
/*<211>*/ 	switch (story_flags[59 /* us: 805A9ADF 0x04, jp: 805ACD5F 0x04 */]) {
          	  case 0:
/*<572>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 10, 'next': 625, 'param3': 13}
/*<625>*/ 		switch (zone_temp_flags[20 /* 0x3 10 */]) {
          		  case 0:
/*<627>*/ 			scene_flags[1 'Faron Woods'][69 /* 0x9 20 */] = true;
          		  case 1:
/*<626>*/ 			zone_temp_flags[20 /* 0x3 10 */] = true;
          		}
          	  case 1:
/*<571>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': -1, 'param3': 13}
          	}
          }

          void entrypoint_200_42() {
/*<318>*/ 	start()
/*<319>*/ 	printf("\x0E\x01\x05\x04K\x00Grazie a questa caratteristica sono\npresenti molti tipi di esseri viventi.")
          }

          void entrypoint_200_94() {
/*<419>*/ 	start()
/*<425>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 427, 'param3': 46}
/*<427>*/ 	set_camera(35, 0)
/*<429>*/ 	switch (scene_flags[34 /* 0x5 04 */]) {
          	  case 0:
/*<488>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<487>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CDAspetta, roccia!\n\n\n\nAiutami a risolvere l'enigma\ndi questi esaedri della Dea!")
          			flw_437:
/*<437>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 435, 'param3': 49}
/*<435>*/ 			{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 356, 'next': 436, 'param3': 15}
/*<436>*/ 			set_camera(36, 0)
/*<483>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<489>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CDAspetta!\n\n\n\nHo un favore da chiederti, roccia!")
          			goto flw_437
          		}
          	  case 1:
/*<434>*/ 		scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<453>*/ 		scene_flags[1 'Faron Woods'][36 /* 0x5 10 */] = true;
/*<433>*/ 		printf("\x0E\x01\x09\x04\x00\x03\x0E\x01\x08\x02\x2CDAspetta!\n\n\n\n\x0E\x01\x09\x04\x17\x600Non fare finta di non avermi visto!\n<pause0F>Roccia, ti sto antipatico?!\n[1]Oh, scusa![2]Sì, molto")
/*<431>*/ 		switch (choice(2)) {
          		  case 0:
/*<430>*/ 			printf("\x0E\x01\x09\x04\x16\x1E07Capisco, stai cercando una ragazza...\nmi dispiace averti fermato.\n\n\nÈ che ho davvero bisogno di parlare\ncon te un po'...")
          			goto flw_437
          		  case 1:
/*<432>*/ 			printf("\x0E\x01\x09\x04\x16\x1E56Capisco... del resto gli esploratori sono\nsempre stati degli incompresi!\n\n\nÈ che ho davvero bisogno di parlare\ncon te un po'...")
          			goto flw_437
          		}
          	}
          }

          void entrypoint_200_60() {
/*< 25>*/ 	start()
/*< 57>*/ 	{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 230, 'param3': 51}
/*<230>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 221, 'param3': 17}
/*<221>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 225, 'param3': 13}
/*<225>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 404, 'param3': 6}
/*<404>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 222, 'param3': 49}
/*<222>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 0, 'next': 224, 'param3': 13}
/*<224>*/ 	make_actor_do_something(0, 0)
/*<232>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 405, 'param3': 6}
/*<405>*/ 	{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 84, 'param3': 13}
/*< 84>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 407, 'param3': 50}
/*<407>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 26, 'param3': 17}
/*< 26>*/ 	printf("\x0E\x01\x12\x04\x00\x04Signore Link,\nho ottenuto delle informazioni\nriguardanti Zelda.\n\nSembra sia stata attaccata da creature\nmalvagie, ma è riuscita a fuggire...<pause0F>\nSi trova ancora in grave pericolo.")
/*<154>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 256, 'next': 336, 'param3': 30}
/*<336>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 313, 'param3': 6}
/*<313>*/ 	story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */] = true;
/*<153>*/ 	printf("<pling>Ho contrassegnato il luogo\nin cui si trova il Kyuri Maccio.\nVi prego di controllare la mappa.")
/*<157>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 337, 'param3': 34}
/*<337>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 223, 'param3': 6}
/*<223>*/ 	{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 0, 'next': 282, 'param3': 13}
/*<282>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 155, 'param3': 17}
/*<155>*/ 	printf("Inoltre, ritengo che il rilevatore abbia\nreagito perché questo individuo è\nentrato in contatto con Zelda.\n\nProbabilità che anche il saggio\ncon cui Zelda è fuggita possa\nattivare il rilevatore: 85%.\n\nSuggerisco di continuare la\nricerca di Zelda utilizzando\nil mio rilevatore.")
/*<156>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 406, 'param3': 36}
/*<406>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 226, 'param3': 17}
/*<226>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 229, 'param3': 6}
/*<229>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 263, 'param3': 13}
/*<263>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 341, 'param3': 6}
/*<341>*/ 	set_camera(19, 0)
/*<264>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 228, 'param3': 17}
/*<228>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 227, 'param3': 13}
/*<227>*/ 	printf("\x0E\x01\x09\x04\x00\x0DAH! Che paura!\nHai amici strani, tu...")
/*<495>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 494, 'param3': 13}
/*<494>*/ 	printf("\x0E\x01\x09\x04\x00\x07Se vai a cercare la tua amica e il <b<saggio>>,\ngli diresti che <r<io sto bene>>, per favore?\n\n\n\x0E\x01\x09\x04\x00\x05La tua amica dovrebbe essere con lui!")
/*<583>*/ 	scene_flags[1 'Faron Woods'][45 /* 0x4 20 */] = true;
/*<584>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_09() {
/*<140>*/ 	start()
/*<141>*/ 	printf("\x0E\x01\x09\x04\x00\x02Se la userai, riuscirai a raggiungere\nil santuario in fondo alla foresta!")
/*<354>*/ 	set_camera(21, 0)
/*<355>*/ 	{'type': 'type3', 'subType': 2, 'param1': 33, 'param2': 356, 'next': 356, 'param3': 15}
/*<356>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 357, 'param3': 32}
/*<357>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 358, 'param3': 17}
/*<358>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 359, 'param3': 17}
/*<359>*/ 	set_camera(22, 0)
/*<362>*/ 	switch (scene_flags[5 /* 0x1 20 */]) {
          	  case 0:
/*<364>*/ 		printf("\x0E\x01\x09\x04\x00\x08Vedi quelle liane lì...<pause0F>?\n\n\n\nChe impaziente...<pause0F> neanche\nil tempo di spiegare...!")
          		flw_365:
/*<365>*/ 		printf("\x0E\x01\x09\x04\x00\x02Preparati premendo \x0E\x02\x04\x02\x29CD. Poi, tieni premuto \x0E\x02\x04\x02\x29CD\nper tendere la fionda e rilascia per lanciare!\x0E\x01\x11\x02\xFCD\n\n\nSe finisci i proiettili, puoi <g<usare i semi >>dei frutti\ndi quegli alberi!")
/*<360>*/ 		set_camera(23, 0)
/*<368>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 367, 'param3': 17}
/*<367>*/ 		switch (scene_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*<361>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 366, 'param3': 17}
/*<366>*/ 			printf("\x0E\x01\x09\x04\x00\x06Vedrai che troverai la tua amica!\nOh oh oh!")
/*<372>*/ 			set_camera(25, 0)
/*<373>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<369>*/ 			printf("\x0E\x01\x09\x04\x00\x06Vedrai che troverai la tua amica!\nOh oh oh!")
/*<370>*/ 			set_camera(24, 0)
/*<371>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<363>*/ 		printf("\x0E\x01\x09\x04\x00\x08Perché non provi a esercitarti\nmirando a quelle liane arrotolate?")
          		goto flw_365
          	}
          }

          void entrypoint_200_43() {
/*<320>*/ 	start()
/*<321>*/ 	printf("\x0E\x01\x05\x04K\x00Secondo le mie analisi,\nanche Zelda si trova da qualche\nparte in questo luogo.\n\n\x0E\x01\x05\x04K\x00Vi consiglio di sfruttare il mio\nrilevatore per cercarla.")
/*<609>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<610>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_200_95() {
/*<422>*/ 	start()
/*<426>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 428, 'param3': 46}
/*<428>*/ 	set_camera(35, 0)
/*<438>*/ 	switch (scene_flags[34 /* 0x5 04 */]) {
          	  case 0:
/*<491>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<490>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CDAspetta, roccia!\n\n\n\nAiutami a risolvere l'enigma\ndi questi esaedri della Dea!")
          			flw_446:
/*<446>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 444, 'param3': 49}
/*<444>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 445, 'param3': 15}
/*<445>*/ 			set_camera(36, 0)
/*<484>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<492>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CDAspetta!\n\n\n\nHo un favore da chiederti, roccia!")
          			goto flw_446
          		}
          	  case 1:
/*<443>*/ 		scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<454>*/ 		scene_flags[1 'Faron Woods'][36 /* 0x5 10 */] = true;
/*<442>*/ 		printf("\x0E\x01\x09\x04\x00\x03\x0E\x01\x08\x02\x2CDAspetta!\n\n\n\n\x0E\x01\x09\x04\x17\x600Non fare finta di non avermi visto!\n<pause0F>Roccia, ti sto antipatico?!\n[1]Oh, scusa![2]Sì, molto")
/*<440>*/ 		switch (choice(2)) {
          		  case 0:
/*<439>*/ 			printf("\x0E\x01\x09\x04\x16\x1E07Capisco, stai cercando una ragazza...\nmi dispiace averti fermato.\n\n\nÈ che ho davvero bisogno di parlare\ncon te un po'...")
          			goto flw_446
          		  case 1:
/*<441>*/ 			printf("\x0E\x01\x09\x04\x16\x1E56Capisco... del resto gli esploratori sono\nsempre stati degli incompresi!\n\n\nÈ che ho davvero bisogno di parlare\ncon te un po'...")
          			goto flw_446
          		}
          	}
          }

          void entrypoint_200_61() {
/*< 71>*/ 	start()
/*<616>*/ 	story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */] = true;
/*<198>*/ 	{'type': 'type3', 'subType': 1, 'param1': 300, 'param2': 0, 'next': 377, 'param3': 51}
/*<377>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 199, 'param3': 17}
/*<199>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 197, 'param3': 16}
/*<197>*/ 	printf("Purtroppo Zelda non si trova più\ncon il saggio,<pause0F> ma sembra che\nlui possegga delle informazioni.\n\nProbabilità di rintracciare Zelda\naiutando il saggio a ritrovare i\nsuoi compagni dispersi: 85%.\n\nHo <pling><r<aggiunto le tracce della\npresenza dei Kyuri>> al rilevatore.")
/*<618>*/ 	open_dowsing_wheel(1)
/*<619>*/ 	printf("Vi servono altre informazioni riguardo\nalle impostazioni del rilevatore e a\ncome cambiare soggetto di ricerca?\n[1]Sì[2-]No")
/*<601>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_496:
/*<496>*/ 		printf("Tenete premuto (^) per visualizzare i possibili soggetti\ndi ricerca del rilevatore.\x0E\x01\x11\x02\x8CD\n\n\nScegliete l'oggetto che volete cercare, poi lasciate\nandare (^) per confermare l'impostazione del\nrilevatore.\x0E\x01\x11\x02\x8CD\n\nSe non volete cercare nulla in particolare, scegliete\n<g<guarda >>e rilasciate (^).\n[1]Dimmelo di nuovo[2-]Ho capito")
/*<497>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_496
          		  case 1:
          			flw_617:
/*<617>*/ 			printf("Inoltre, i Kyuri che avete già rintracciato\nsaranno segnati sulla mappa.\n\n\nIn tal modo il rilevatore non li segnalerà.\nOra potete iniziare la vostra ricerca.")
/*<613>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<614>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 615, 'param3': 36}
/*<615>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
          		goto flw_617
          	}
          }

          void entrypoint_200_44() {
/*<334>*/ 	start()
/*<335>*/ 	temp_flags[51 /* 0x7 08 */] = true;
          }

          void entrypoint_200_96() {
/*<423>*/ 	start()
/*<424>*/ 	printf("\x0E\x01\x09\x04\x15\x1908Oooh! Se n'è volato in cielo!!!\n\n\n\n\x0E\x01\x09\x04\x13\x1B00Ha reagito alla luce che è\nscaturita dalla tua spada!\n\n\n\x0E\x01\x09\x04\x00\x1B05Ma dove sarà finito, ora?\nIl mistero si infittisce!\n\n\n\x0E\x01\x09\x04\x16\x1E00Secondo gli scritti antichi, questi\nesaedri sono sparsi per\ntutta la terra...\n\n\x0E\x01\x09\x04\x00\x1700Prova a liberare tutti quelli\nche vedi, se ne capirai\nqualcosa, vieni a dirmelo!")
/*<482>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_62() {
/*< 94>*/ 	start()
/*<233>*/ 	switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          	  case 0:
/*<238>*/ 		switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          		  case 0:
/*<239>*/ 			switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          			  case 0:
/*<240>*/ 				switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          				  case 0:
/*<677>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<651>*/ 						set_camera(16, 0)
/*<235>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 270, 'param3': 51}
/*<270>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 268, 'param3': 17}
/*<268>*/ 						{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 10, 'next': 269, 'param3': 13}
/*<269>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 237, 'param3': 6}
/*<237>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 234, 'param3': 16}
/*<234>*/ 						printf("Questa zona non presenta\ntracce che facciano reagire\nil rilevatore.\n\nSuggerisco di tornare dal saggio\na raccogliere informazioni.")
/*<236>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 271, 'param3': 36}
          						flw_271:
/*<271>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 344, 'param3': 6}
/*<344>*/ 						set_camera(17, 0)
/*<343>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 347, 'param3': 17}
/*<347>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 346, 'param3': 17}
/*<346>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 345, 'param3': 13}
/*<345>*/ 						printf("\x0E\x01\x09\x04\x00\x14EH?!\nNon farmi spaventare!")
/*<378>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<678>*/ 						set_camera(16, 0)
/*<669>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 673, 'param3': 51}
/*<673>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 671, 'param3': 17}
/*<671>*/ 						{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 10, 'next': 672, 'param3': 13}
/*<672>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 670, 'param3': 6}
/*<670>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 676, 'param3': 16}
/*<676>*/ 						printf("Ho <pling>segnato la posizione\ndel Kyuri Algo. Zelda non sembra\nessere con lui.")
/*<674>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 675, 'param3': 17}
/*<675>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 271, 'param3': 36}
          						goto flw_271
          					}
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
          		}
          	  case 1:
          	}
          }

          void entrypoint_200_10() {
/*<288>*/ 	start()
/*<578>*/ 	set_camera(-1, 0)
/*<579>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 580, 'param3': 40}
/*<580>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 581, 'param3': 13}
/*<581>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 328, 'param3': 6}
/*<328>*/ 	set_camera(15, 0)
/*<326>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 75, 'next': 331, 'param3': 6}
/*<331>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1002, 'next': 332, 'param3': 24}
/*<332>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 356, 'next': 325, 'param3': 15}
/*<325>*/ 	{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 327, 'param3': 13}
/*<327>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 100, 'next': 329, 'param3': 14}
/*<329>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 330, 'param3': 17}
/*<330>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 291, 'param3': 13}
/*<291>*/ 	printf("\x0E\x01\x09\x04\x00\x07Ehi! Giovane virgulto!\nSono io! Hai trovato la tua amica?\n[1]Chi sei?[2]No...")
/*<292>*/ 	switch (choice(2)) {
          	  case 0:
/*<295>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 293, 'param3': 13}
/*<293>*/ 		printf("\x0E\x01\x09\x04\x00\x13Ma come chi sono?!\n<b<Maccio>>!!! Ora sono triste...")
          		flw_297:
/*<297>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 298, 'param3': 13}
/*<298>*/ 		printf("\x0E\x01\x09\x04\x00\x07Ho appena incontrato tutti i miei\ncompagni!\nE tutto grazie a te!")
/*<290>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 296, 'param3': 13}
/*<296>*/ 		printf("\x0E\x01\x09\x04\x00\x05Spero che troverai la tua amica!")
/*<299>*/ 		{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 0, 'next': 300, 'param3': 14}
/*<300>*/ 		story_flags[69 /* us: 805A9ADE 0x01, jp: 805ACD5E 0x01 */] = true;
/*<322>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<289>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 294, 'param3': 13}
/*<294>*/ 		printf("\x0E\x01\x09\x04\x00\x13Uh... capisco...\nMa lei sapeva dove stava andando!")
          		goto flw_297
          	}
          }

          void entrypoint_200_63() {
/*<241>*/ 	start()
/*<242>*/ 	switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          	  case 0:
/*<247>*/ 		switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          		  case 0:
/*<248>*/ 			switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          			  case 0:
/*<249>*/ 				switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          				  case 0:
/*<668>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<655>*/ 						set_camera(27, 0)
/*<244>*/ 						{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 274, 'param3': 35}
/*<274>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 272, 'param3': 17}
/*<272>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 10, 'next': 273, 'param3': 13}
/*<273>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 28, 'next': 246, 'param3': 6}
/*<246>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 243, 'param3': 16}
/*<243>*/ 						printf("Questa zona non presenta\ntracce che facciano reagire\nil rilevatore.\n\nSuggerisco di tornare dal saggio\na raccogliere informazioni.")
/*<245>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 275, 'param3': 36}
          						flw_275:
/*<275>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 375, 'param3': 6}
/*<375>*/ 						set_camera(26, 0)
/*<374>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 278, 'param3': 17}
/*<278>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 277, 'param3': 17}
/*<277>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 276, 'param3': 13}
/*<276>*/ 						printf("\x0E\x01\x09\x04\x00\x0DAAAH! M'ha messo paura!\nPensavo fosse un altro di quei cosi brutti!")
/*<582>*/ 						scene_flags[1 'Faron Woods'][53 /* 0x7 20 */] = true;
/*<585>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<679>*/ 						set_camera(27, 0)
/*<660>*/ 						{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 665, 'param3': 35}
/*<665>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 663, 'param3': 17}
/*<663>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 10, 'next': 664, 'param3': 13}
/*<664>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 28, 'next': 662, 'param3': 6}
/*<662>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 667, 'param3': 16}
/*<667>*/ 						printf("Ho <pling>segnato la posizione\ndel Kyuri Orzio. Zelda non sembra\nessere con lui.")
/*<666>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 661, 'param3': 17}
/*<661>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 275, 'param3': 36}
          						goto flw_275
          					}
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
          		}
          	  case 1:
          	}
          }

          void entrypoint_200_64() {
/*<250>*/ 	start()
/*<251>*/ 	switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          	  case 0:
/*<255>*/ 		switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          		  case 0:
/*<256>*/ 			switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          			  case 0:
/*<257>*/ 				switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          				  case 0:
/*<659>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<652>*/ 						set_camera(38, 0)
/*<253>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 254, 'param3': 51}
/*<254>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 376, 'param3': 16}
/*<376>*/ 						printf("Questa zona non presenta\ntracce che facciano reagire\nil rilevatore.\n\nSuggerisco di tornare dal saggio\na raccogliere informazioni.")
          						flw_252:
/*<252>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 231, 'param3': 36}
/*<231>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 350, 'param3': 6}
/*<350>*/ 						set_camera(17, 0)
/*<349>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 352, 'param3': 17}
/*<352>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 351, 'param3': 17}
/*<351>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 172, 'param3': 13}
/*<172>*/ 						switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          						  case 0:
/*<173>*/ 							printf("\x0E\x01\x09\x04\x00\x05Hai incontrato il saggio?\nL'hai trovato?! Bene!!!\n\n\n\x0E\x01\x09\x04\x00\x14Se lo rivedi, digli che sono qui,\nper favore!")
          							flw_379:
/*<379>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*<171>*/ 							printf("\x0E\x01\x09\x04\x00\x04Il saggio è il più bravo a mimetizzarsi!\nChissà se riuscirai a trovarlo!")
          							goto flw_379
          						}
          					  case 1:
/*<680>*/ 						set_camera(38, 0)
/*<656>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 657, 'param3': 51}
/*<657>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 658, 'param3': 16}
/*<658>*/ 						printf("Ho <pling>segnato la posizione\ndel Kyuri Genzio. Zelda non sembra\nessere con lui.")
          						goto flw_252
          					}
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
          		}
          	  case 1:
          	}
          }

          void entrypoint_200_99() {
/*<420>*/ 	start()
/*<421>*/ 	printf("Tu che arrivi dal Cielo qui sulla\nTerra, mira alla stella verso cui\nad ali spiegate vola l'uccello che\nguarda al firmamento.")
          }

          void entrypoint_200_65() {
/*<599>*/ 	start()
/*<600>*/ 	printf("Considerando che la vegetazione\nè la stessa della foresta di Firone,\ndeduco che ci troviamo nel cuore\ndella suddetta foresta.\nZelda s'è diretta al santuario,\nsuggerisco di continuare la\nsua ricerca.")
/*<611>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<612>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_200_50() {
/*<258>*/ 	start()
/*<301>*/ 	printf("\x0E\x01\x12\x04\x00\x04Signore Link,\navverto l'aura di <b<Zelda>> provenire\nda questo edificio.")
/*<302>*/ 	set_camera(13, 0)
/*<265>*/ 	set_camera(-1, 0)
/*<259>*/ 	printf("Inoltre, avverto la presenza\ndi numerose creature ostili.\nVolete procedere ugualmente?\n[1]Certo[2]No")
/*<260>*/ 	switch (choice(2)) {
          	  case 0:
/*<262>*/ 		printf("Non siate avventato. Qui non ci sarà\nnessuno che potrà venirvi in aiuto.")
          		flw_266:
/*<266>*/ 		set_camera(14, 0)
/*<267>*/ 		printf("Se ritenete di essere in grave pericolo,\npotete <g<tornare in cielo >>e prepararvi\nmeglio.")
/*<607>*/ 		set_camera(-1, 0)
/*<603>*/ 		switch (adventure_pouch_has(0 0x0000)) {
          		  case 0:
/*<605>*/ 			printf("In generale, per proteggersi\nè meglio avere sempre uno <r<scudo>>\ne delle <r<pozioni >>per ripristinare i cuori.")
          			flw_606:
/*<606>*/ 			printf("Bene, riprendete pure la ricerca di Zelda.")
          		  case 1:
/*<604>*/ 			printf("\x0E\x01\x12\x04\x00\x01Signore, non avete equipaggiato\nuno<r< scudo>>, suggerisco di averne\nsempre uno.")
          			goto flw_606
          		}
          	  case 1:
/*<261>*/ 		printf("La paura che accompagna l'istinto di\nsopravvivenza non è qualcosa di cui\nvergognarsi.")
          		goto flw_266
          	}
          }

          void entrypoint_200_51() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMio signore, Faih a rapporto.\nIl <pling><r<rilevatore reagisce>> alla creatura.\n[1]Davvero?[2]È Zelda?")
/*< 15>*/ 	switch (choice(2)) {
          	  case 0:
/*< 16>*/ 		printf("\x0E\x01\x12\x04\x00\x05Sì, mio signore.\nSecondo le mie analisi, si tratta\ndi un <b<Kyuri >>della foresta.\n\nSono dotati di parola, di grandi\nconoscenze e sono pacifici.<pause0F>\nNon si tratta di Zelda.\n\nIgnoro la causa della reazione\ndel mio rilevatore. Suggerisco\ndi seguirne le tracce.")
          		flw_132:
/*<132>*/ 		set_camera(10, 0)
/*<134>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': -1, 'param3': 6}
          	  case 1:
/*< 17>*/ 		printf("Probabilità che si tratti di Zelda: 5%.\nSecondo le mie analisi è molto più\nprobabile che si tratti di un <b<Kyuri\n>>della foresta.\nSono dotati di parola, di grandi\nconoscenze e sono pacifici.<pause0F>\nNon conosco il motivo della\nreazione del rilevatore.\nSuggerisco di seguirne le tracce.")
          		goto flw_132
          	}
          }

          void entrypoint_200_69() {
/*<621>*/ 	start()
/*<622>*/ 	printf("\x0E\x01\x12\x04\x00\x04Link, mio signore.\nQuando avete qualche dubbio,\nnon esitate a rivolgervi a me con (v).\x0E\x01\x11\x02\x9CD\n\nSelezionate <r<consigli>>, poi <r<suggerimenti\n>>e sarò ben lieta di fornirvi ogni\ninformazione di cui dispongo in merito\nalla situazione.")
/*<628>*/ 	scene_flags[1 'Faron Woods'][69 /* 0x9 20 */] = true;
          }

