          void entrypoint_120_20() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf("Bon, je dépose la soupe de citrouille juste ici.\n\n\n\nDrôle d'endroit pour livrer de la soupe. Et pas\ntrès rassurant non plus. On dirait qu'on\npourrait se faire attaquer à tout moment.")
          }

          void entrypoint_120_21() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf("Ça y est, j'ai fait ma part. Je me sauve!\x0E\x01\x05\x04(\x00")
/*< 25>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*< 23>*/ 	story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */] = true;
/*< 24>*/ 	story_flags[288 /* us: 805A9AFA 0x04, jp: 805ACD7A 0x04 */] = true;
          }

          void entrypoint_120_01() {
/*<  7>*/ 	start()
/*< 32>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*< 34>*/ 		printf("Hoho! C'est extraordinaire. Tu as trouvé\nla Triforce!")
          		flw_35:
/*< 35>*/ 		printf("Tu sais au fond de toi ce qu'il te reste à faire,\npetit humain.\n\n\nAvance vers ce en quoi tu crois.")
          		flw_36:
/*< 36>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 31>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*< 33>*/ 			printf("Hoho! Tu as trouvé le chemin vers la Triforce!\nC'est extraordinaire.")
          			goto flw_35
          		  case 1:
/*< 15>*/ 			switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          			  case 0:
/*< 16>*/ 				printf("Je pense que tu sais ce que tu as à faire\nmaintenant. Le chant ouvre la porte\nvers la dernière épreuve, qui se trouve\nquelque part dans le <b<ciel>>.\nUne fois l'épreuve réussie, poursuis ton\nchemin vers la <y+<Triforce>>.")
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
/*<  8>*/ 							printf("Hoho! Comment se passe ton aventure, petit?\n\n\n\nReviens quand les trois dragons t'auront\nappris leur mélodie du Chant du héros!\n\n\nLes dragons se trouvent dans la forêt de\nFirone, au volcan d'Ordinn et dans le\ndésert de Lanelle.\n\nCourage, petit humain!")
          						}
          					  case 1:
          						goto flw_8
          					}
          				  case 1:
/*< 21>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*< 12>*/ 						printf("Reviens quand les trois dragons t'auront appris\nleur mélodie du Chant du héros!\n\n\nJe te chanterai alors la dernière.\n\n\n\n\x0E\x01\x08\x02\xFFCDD'ailleurs, ma voix a besoin d'un peu ehem, d'exercice...\x0E\x01\x08\x02Í")
          					  case 1:
          						printf("C'est toi qui m'as apporté ma soupe de citrouille\npréférée, petit humain?\n\n\nJ'espère que tu sauras me pardonner. Après\navoir été possédé par cet atroce parasite,\nj'ai perdu la raison.\n\nMais, tout ça est derrière nous. J'ai repris mes\nesprits en humant l'arôme de cette bonne soupe.\n\n\nMerci, petit humain...")
/*<  1>*/ 						printf("Je suis <b<Narisha>>, le grand esprit qui veille sur\nles cieux. Je servais la Déesse <b<Hylia>>,\naujourd'hui disparue.\n\nTu t'appelles donc...<pause19> Link,\npetit humain? Tes parents t'ont donné\nun fort joli nom!\n\n<pause14>Oh mais... <pause14>Cette épée... <pause14>Et ce pouvoir que je\ndécèle en ton c\x153ur...\n\n\n\x0E\x03\x01\x00Link... Tu es donc le héros élu\npar la Déesse...\n\n\nJ'en déduis que tu es venu me parler\nde la <y+<Triforce>>?\n[1]Oui[2]Tu connais?")
/*<  2>*/ 						switch (choice(2)) {
          						  case 0:
          							flw_4:
/*<  4>*/ 							printf("Je m'en doutais.<pause19> Très bien, je vais te dire\nce que je sais.\n\n\nComme tu le sais sans doute, lorsque les\nserviteurs du mal ont essayé de s'emparer\nde la Triforce...\n\n... la Déesse a tout fait pour les en empêcher.\n\n\n\nElle a donc caché la Triforce à <b<Célesbourg>>,\ndans un endroit connu d'elle seule.\n\n\nJe ne sais donc pas non plus où elle se trouve...\n\n\n\nMais la Déesse m'a laissé un indice...\n\n\n\nEt c'est le <r<Chant du héros>>, que tu peux jouer\navec ta <b<lyre>>, petit humain.")
/*<  5>*/ 							printf("Le Chant du héros est la <r<clé>> qui mène à\nl'endroit où la Triforce est cachée.")
/*<  6>*/ 							printf("La Déesse a divisé le chant en quatre mélodies,\net en a donné une à chacun des trois dragons,\nainsi qu'à moi\x2010même.\n\nTu dois donc rassembler toutes les <r<<pling>mélodies\ndu Chant du héros>>.\n\n\nLorsque tu auras obtenu les trois premières,\nje compléterai le chant en te fredonnant\nla dernière!\n\nBien. Les dragons se trouvent dans la forêt\nde Firone, au volcan d'Ordinn et au désert\nde Lanelle.\n\nVa les trouver!")
/*< 22>*/ 							story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */] = true;
/*< 14>*/ 							story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = true;
/*< 37>*/ 							story_flags[781 /* us: 805A9B2D 0x20, jp: 805ACDAD 0x20 */] = true;
          						  case 1:
/*<  3>*/ 							printf("Si je connais? Tu sais que tu t'adresses au\ngrand esprit qui veille sur... <pause14>Mais passons.")
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

