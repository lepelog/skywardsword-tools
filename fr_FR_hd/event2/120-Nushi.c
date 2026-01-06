          void entrypoint_120_20() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 0, unk: 1, line: 13 */ "Bon, je dépose la soupe ici.\n\n\n\nC'est pas très rassurant comme endroit...")
          }

          void entrypoint_120_21() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 0, unk: 92, line: 14 */ "Allez, je me sauve !<0x10005:0x00280000>")
/*< 25>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*< 23>*/ 	story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */] = true;
/*< 24>*/ 	story_flags[288 /* us: 805A9AFA 0x04, jp: 805ACD7A 0x04 */] = true;
          }

          void entrypoint_120_01() {
/*<  7>*/ 	start()
/*< 32>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*< 34>*/ 		printf(/* textboxtype: 0, unk: 92, line: 11 */ "Hoho ! Tu as trouvé la Triforce !")
          		flw_35:
/*< 35>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "Tu sais au fond de toi ce qu'il te reste à faire,\npetit humain.\n\n\nAvance vers ce en quoi tu crois.")
          		flw_36:
/*< 36>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 31>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*< 33>*/ 			printf(/* textboxtype: 92, unk: 1, line: 10 */ "Hoho ! Tu as trouvé le chemin vers la\nTriforce !")
          			goto flw_35
          		  case 1:
/*< 15>*/ 			switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          			  case 0:
/*< 16>*/ 				printf(/* textboxtype: 1, unk: 0, line: 9 */ "Tu sais ce que tu as à faire maintenant, n'est‐ce\npas ? Le chant ouvre la porte vers la dernière\népreuve, qui se trouve quelque part dans le <color blue<ciel>coloroff>.\n\nUne fois l'épreuve réussie, poursuis ton chemin\nvers la <color yellow white<Triforce>coloroff>.")
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
/*<  8>*/ 							printf(/* textboxtype: 1, unk: 0, line: 6 */ "Hoho ! Comment vas‐tu ?\n\n\n\nReviens quand les trois dragons t'auront appris\nleur mélodie du Chant du héros !\n\n\nLes dragons se trouvent dans la forêt de Firone,\nau volcan d'Ordinn et dans le désert de Lanelle.\n\n\nCourage, petit humain !")
          						}
          					  case 1:
          						goto flw_8
          					}
          				  case 1:
/*< 21>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*< 12>*/ 						printf(/* textboxtype: 92, unk: 1, line: 7 */ "Reviens quand les trois dragons t'auront appris\nleur mélodie du Chant du héros !\n\n\nJe te chanterai alors la dernière.\n\n\n\n<0x10008:0xffcd>D'ailleurs, ma voix a besoin d'un peu d'exercice...<0x10008:0x00cd>")
          					  case 1:
          						printf(/* textboxtype: 1, unk: 0, line: 0 */ "C'est toi qui m'as apporté ma soupe de citrouille\npréférée, petit humain ?\n\n\nAprès avoir été possédé par cette atroce\ncréature, j'ai perdu mon esprit...\n\n\nMais cette soupe que j'aime tant me rappelle\ncelui que j'étais.\n\n\nMerci, petit humain...")
/*<  1>*/ 						printf(/* textboxtype: 92, unk: 1, line: 1 */ "Je suis <color blue<Narisha>coloroff>, le grand esprit qui veille sur les\ncieux. Je servais la Déesse <color blue<Hylia>coloroff>, aujourd'hui\ndisparue.\n\nTu t'appelles donc...<pause 25> <heroname>, petit\nhumain.\n\n\nTes parents t'ont donné un très joli nom !\n\n\n\n<pause 20>Oh mais... <pause 20>Cette épée... <pause 20>Et ce pouvoir en ton\ncœur...\n\n\n<0x30001:0x><heroname>... Tu es donc le héros élu par\nla Déesse...\n\n\nJ'en déduis que tu es venu me parler de la\n<color yellow white<Triforce >coloroff>?\n\n\n[1-]Oui[2-]Tu connais ?")
/*<  2>*/ 						switch (choice(2)) {
          						  case 0:
          							flw_4:
/*<  4>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "Je m'en doutais.<pause 25> Très bien, je vais te dire ce que\nje sais.\n\n\nComme tu le sais sans doute, lorsque les\nserviteurs du mal ont essayé de s'emparer\nde la Triforce...\n\n... la Déesse a tout fait pour les en empêcher.\n\n\n\nElle a donc caché la Triforce à <color blue<Célesbourg>coloroff>,\ndans un endroit connu d'elle seule.\n\n\nJe ne sais donc pas non plus où elle se trouve...\n\n\n\nMais la Déesse m'a laissé un indice...\n\n\n\nEt c'est le <color red<Chant du héros>coloroff>, que tu peux jouer\navec ta <color blue<lyre>coloroff>, petit humain.")
/*<  5>*/ 							printf(/* textboxtype: 92, unk: 1, line: 4 */ "Le Chant du héros est la <color red<clé>coloroff> qui mène à\nl'endroit où la Triforce est cachée.")
/*<  6>*/ 							printf(/* textboxtype: 0, unk: 92, line: 5 */ "La Déesse a divisé le chant en quatre mélodies,\net en a donné une à chacun des trois dragons,\nainsi qu'à moi‐même.\n\nTu dois donc rassembler toutes les <color red<<sound 4>mélodies du\nChant du héros>coloroff>.\n\n\nLorsque tu auras obtenu les trois premières,\nje compléterai le chant en te chantant la\ndernière !\n\nBien. Les dragons se trouvent dans la forêt\nde Firone, au volcan d'Ordinn et au désert de\nLanelle.\n\nVa les trouver !")
/*< 22>*/ 							story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */] = true;
/*< 14>*/ 							story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = true;
/*< 37>*/ 							story_flags[781 /* us: 805A9B2D 0x20, jp: 805ACDAD 0x20 */] = true;
          						  case 1:
/*<  3>*/ 							printf(/* textboxtype: 0, unk: 92, line: 2 */ "N'oublie pas à qui tu t'adresses... <pause 20>Mais passons.")
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

