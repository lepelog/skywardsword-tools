          void entrypoint_120_20() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 0, unk: 1, line: 13 */ "La zuppa di zucca la lascio qui. Bzzz...\n\n\n\nCerto il luogo non è dei più tranquilli...")
          }

          void entrypoint_120_21() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 0, unk: 92, line: 14 */ "Allora addio! Bzzz...<0x10005:0x00280000>")
/*< 25>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*< 23>*/ 	story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */] = true;
/*< 24>*/ 	story_flags[288 /* us: 805A9AFA 0x04, jp: 805ACD7A 0x04 */] = true;
          }

          void entrypoint_120_01() {
/*<  7>*/ 	start()
/*< 32>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*< 34>*/ 		printf(/* textboxtype: 0, unk: 92, line: 11 */ "Ohohoh... Sei finalmente riuscito\na ottenere la Triforza!")
          		flw_35:
/*< 35>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "Bene, ormai sai da solo cosa devi\nfare, ragazzino, no?\n\n\nAdesso va', e segui il cammino\nin cui credi senza esitazione!")
          		flw_36:
/*< 36>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 31>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*< 33>*/ 			printf(/* textboxtype: 92, unk: 1, line: 10 */ "Ohohoh...\nHai trovato l'ubicazione della Triforza!\nOttimo lavoro!")
          			goto flw_35
          		  case 1:
/*< 15>*/ 			switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          			  case 0:
/*< 16>*/ 				printf(/* textboxtype: 1, unk: 0, line: 9 */ "Ormai sai tutto quello che dovresti,\nno? Quella melodia apre il portale\ndella prova, che si trova da\nqualche parte in <color blue<Cielo>coloroff>.\nSuperata la prova, dovresti poter\ntrovare il cammino che ti guida\nalla <color yellow white<Triforza>coloroff>.")
          				goto flw_36
          			  case 1:
/*< 10>*/ 				switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          				  case 0:
/*<  9>*/ 					switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          					  case 0:
/*< 11>*/ 						switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          						  case 0:
/*< 26>*/ 							wait_frames(20)
/*< 13>*/ 							changeScene(5, 0) // 
          						  case 1:
          							flw_8:
/*<  8>*/ 							printf(/* textboxtype: 1, unk: 0, line: 6 */ "Ohohoh...\nIo inizio a scaldare la voce!\n\n\nTu torna qui quando avrai recuperato\nle tre parti della Melodia dell'impavido!\n\n\nCerca i draghi nella Foresta di Firone,\npresso il Vulcano di Oldin e nel Deserto\ndi Ranel.")
          						}
          					  case 1:
          						goto flw_8
          					}
          				  case 1:
/*< 21>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*< 12>*/ 						printf(/* textboxtype: 92, unk: 1, line: 7 */ "Torna qui quando avrai recuperato le\ntre parti della Melodia dell'impavido!\n\n\nPoi io le canterò con la mia voce\ncristallina e la melodia sarà ricostituita.\n\n\n<0x10008:0xffcd>Io inizio a scaldare la voce...<0x10008:0x00cd>")
          					  case 1:
          						printf(/* textboxtype: 1, unk: 0, line: 0 */ "Sei stato tu, ragazzino, a portare\nla mia zuppa di zucca preferita?\n\n\nMentre ero in balia di quel mostro\nsconosciuto avevo perso coscienza\ndi me...\n\nMa quel profumo familiare mi ha\nfatto ritornare la memoria!\nGrazie, ragazzino!")
/*<  1>*/ 						printf(/* textboxtype: 92, unk: 1, line: 1 */ "Sono <color blue<Narisha>coloroff>, sacro spirito che\ndomina il cielo e servo della\nscomparsa <color blue<Dea Hylia>coloroff>.\n\nE tu, ragazzino...<pause 25> tu saresti\n<heroname>? Che bel nome!\nI tuoi genitori sono sicuramente\npersone raffinate!\n<pause 20>Eh?\n<pause 20>Quella spada...\n<pause 20>E quella forza nel tuo cuore...\n\n<heroname>! Tu sei l'impavido,\nprescelto dalla Dea...\n\n\nQuindi sei venuto da me a chiedere\ninformazioni sulla <color yellow white<Triforza>coloroff>?\n[1-]Già...[2-]Come lo sai?")
/*<  2>*/ 						switch (choice(2)) {
          						  case 0:
          							flw_4:
/*<  4>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "Non avevo dubbi...<pause 25>\nBene, iniziamo il racconto...\n\n\nCome già sai, ragazzino, molto tempo\nfa un'entità malvagia tentò di\nimpossessarsi della Triforza.\n\nLa Dea, per impedirglielo, la nascose\na <color blue<Oltrenuvola>coloroff>, in un luogo a tutti\nsconosciuto.\n\nPertanto, nessuno sa dove sia\nnascosta la Triforza,\nnemmeno io.\n\nTuttavia la Dea mi suggerì\nun indizio per ritrovarla...\n\n\nSi tratta di una melodia per la tua\n<color blue<lira>coloroff>, ragazzino... mi riferisco alla\n<color red<Melodia dell'impavido>coloroff>.")
/*<  5>*/ 							printf(/* textboxtype: 92, unk: 1, line: 4 */ "La Melodia dell'impavido è la <color red<chiave\n>coloroff>per scoprire il luogo dove è nascosta\nla Triforza.")
/*<  6>*/ 							printf(/* textboxtype: 0, unk: 92, line: 5 */ "La Dea ha diviso la Melodia\ndell'impavido in quattro parti\naffidandone una a me e le altre ai tre\ndraghi che dimorano sulla Terra.\nDevi recuperare tutte le <color red<<sound 4>parti\nmancanti della Melodia dell'impavido>coloroff>.\nPoi io le canterò con la mia voce\nsuadente e la melodia sarà ricomposta.\nHai capito? Vai a cercare i tre draghi.\nLi troverai nella foresta di Firone,\npresso il vulcano di Oldin e nel deserto\ndi Ranel.")
/*< 22>*/ 							story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */] = true;
/*< 14>*/ 							story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = true;
/*< 37>*/ 							story_flags[781 /* us: 805A9B2D 0x20, jp: 805ACDAD 0x20 */] = true;
          						  case 1:
/*<  3>*/ 							printf(/* textboxtype: 0, unk: 92, line: 2 */ "Come sarebbe “come lo sai\"?\nMa che modi sono?\nTi pare il modo di rivolgerti a me?!\n<pause 20>Lasciamo perdere...")
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

