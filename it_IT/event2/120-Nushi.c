          void entrypoint_120_20() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf("La zuppa di zucca la lascio\nqui. Bzzz...\n\n\nCerto il luogo non è dei più\ntranquilli...")
          }

          void entrypoint_120_21() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf("Allora addio! Bzzz...\x0E\x01\x05\x04(\x00")
/*< 25>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*< 23>*/ 	story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */] = true;
/*< 24>*/ 	story_flags[288 /* us: 805A9AFA 0x04, jp: 805ACD7A 0x04 */] = true;
          }

          void entrypoint_120_01() {
/*<  7>*/ 	start()
/*< 32>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*< 34>*/ 		printf("Ohohoh... \nSei finalmente riuscito a\nottenere la Triforza!")
          		flw_35:
/*< 35>*/ 		printf("Bene, ormai sai da solo cosa devi\nfare, ragazzino, no?\n\n\nAdesso va', e segui il cammino\nin cui credi senza esitazione!")
          		flw_36:
/*< 36>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 31>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*< 33>*/ 			printf("Ohohoh... \nHai trovato l'ubicazione della Triforza!\nOttimo lavoro!")
          			goto flw_35
          		  case 1:
/*< 15>*/ 			switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          			  case 0:
/*< 16>*/ 				printf("Ormai sai tutto quello che dovresti,\nno? Quella melodia apre il portale\ndella prova, che si trova da\nqualche parte in <b<Cielo>>.\nSuperata la prova, dovresti poter\ntrovare il cammino che ti guida\nalla <y+<Triforza>>.")
          				goto flw_36
          			  case 1:
/*< 10>*/ 				switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          				  case 0:
/*<  9>*/ 					switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          					  case 0:
/*< 11>*/ 						switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          						  case 0:
/*< 26>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 13, 'param3': 6}
/*< 13>*/ 							changeScene(5, 0) // 
          						  case 1:
          							flw_8:
/*<  8>*/ 							printf("Ohohoh...\nIo inizio a scaldare la voce!\n\n\nTu torna qui quando avrai\nrecuperato le tre parti\ndella Melodia dell'impavido!\n\nCerca i draghi nella Foresta\ndi Firone, presso il Vulcano di\nOldin e nel Deserto di Ranel.")
          						}
          					  case 1:
          						goto flw_8
          					}
          				  case 1:
/*< 21>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*< 12>*/ 						printf("Torna qui quando avrai\nrecuperato le tre parti\ndella Melodia dell'impavido!\n\nPoi io le canterò con la mia\nvoce cristallina e la melodia\nsarà ricostituita.\n\n\x0E\x01\x08\x02\xFFCDIo inizio a scaldare la voce...\x0E\x01\x08\x02Í")
          					  case 1:
          						printf("Sei stato tu, ragazzino, a portare\nla mia zuppa di zucca preferita?\n\n\nMentre ero in balia di quel mostro\nsconosciuto avevo perso coscienza\ndi me...\n\nMa quel profumo familiare mi ha\nfatto ritornare la memoria!\nGrazie, ragazzino!")
/*<  1>*/ 						printf("Sono <b<Narisha>>, sacro spirito che\ndomina il cielo e servo della \nscomparsa <b<Dea Hylia>>.\n\nE tu, ragazzino...<pause19> tu saresti\nLink? Che bel nome!\nI tuoi genitori sono sicuramente\npersone raffinate!\n<pause14>Eh?\n<pause14>Quella spada...\n<pause14>E quella forza nel tuo cuore...\n\nLink! Tu sei l'impavido,\nprescelto dalla Dea...\n\n\nQuindi sei venuto da me a chiedere\ninformazioni sulla <y+<Triforza>>?\n[1]Già...[2]Come lo sai?")
/*<  2>*/ 						switch (choice(2)) {
          						  case 0:
          							flw_4:
/*<  4>*/ 							printf("Non avevo dubbi...<pause19>\nBene, iniziamo il racconto...\n\n\nCome già sai, ragazzino, molto tempo\nfa un'entità malvagia tentò di\nimpossessarsi della Triforza.\n\nLa Dea, per impedirglielo, la nascose\na <b<Oltrenuvola>>, in un luogo a tutti\nsconosciuto.\n\nPertanto, nessuno sa dove sia\nnascosta la Triforza,\nnemmeno io.\n\nTuttavia la Dea mi suggerì\nun indizio per ritrovarla...\n\n\nSi tratta di una melodia per la tua\n<b<lira>>, ragazzino... mi riferisco alla\n<r<Melodia dell'impavido>>.")
/*<  5>*/ 							printf("La Melodia dell'impavido è la\n<r<chiave >>per scoprire il luogo\ndove è nascosta la Triforza.")
/*<  6>*/ 							printf("La Dea ha diviso la Melodia\ndell'impavido in quattro parti\naffidandone una a me e le altre ai tre\ndraghi che dimorano sulla Terra.\nDevi recuperare tutte le <r<<pling>parti\nmancanti della Melodia dell'impavido>>.\nPoi io le canterò con la mia voce\nsuadente e la melodia sarà ricomposta.\nHai capito? Vai a cercare i tre draghi.\nLi troverai nella foresta di Firone,\npresso il vulcano di Oldin e nel deserto\ndi Ranel.")
/*< 22>*/ 							story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */] = true;
/*< 14>*/ 							story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = true;
/*< 37>*/ 							story_flags[781 /* us: 805A9B2D 0x20, jp: 805ACDAD 0x20 */] = true;
          						  case 1:
/*<  3>*/ 							printf("Come sarebbe \x201Ccome lo sai\"?\nMa che modi sono? Ti pare il\nmodo di rivolgerti a me?!\n<pause14>Lasciamo perdere...")
          							goto flw_4
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_120_02() {
/*< 27>*/ 	start()
/*< 28>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*< 30>*/ 		scene_flags[21 'The Sky'][37 /* 0x5 20 */] = true;
          	  case 1:
/*< 29>*/ 		scene_flags[21 'The Sky'][36 /* 0x5 10 */] = true;
          	}
          }

