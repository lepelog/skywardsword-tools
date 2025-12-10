          void entrypoint_120_20() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0, line: 13 */ "Bon, je dépose la soupe de citrouille\njuste ici.\n\n\nDrôle d'endroit pour livrer de la soupe.\nEt pas très rassurant non plus. On \ndirait qu'on pourrait se faire attaquer\nà tout moment.")
          }

          void entrypoint_120_21() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 1, unk: 0, line: 14 */ "Ça y est, j'ai fait ma part.\nJe me sauve!<0x10005:0x00280000>")
/*< 25>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*< 23>*/ 	story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */] = true;
/*< 24>*/ 	story_flags[288 /* us: 805A9AFA 0x04, jp: 805ACD7A 0x04 */] = true;
          }

          void entrypoint_120_01() {
/*<  7>*/ 	start()
/*< 32>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*< 34>*/ 		printf(/* textboxtype: 1, unk: 0, line: 11 */ "Hoho! C'est extraordinaire.\nTu as trouvé la Triforce!")
          		flw_35:
/*< 35>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "Tu sais au fond de toi ce qu'il te reste\nà faire, petit humain.\n\n\nAvance vers ce en quoi tu crois.")
          		flw_36:
/*< 36>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 31>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*< 33>*/ 			printf(/* textboxtype: 1, unk: 0, line: 10 */ "Hoho! Tu as trouvé le chemin vers\nla Triforce! C'est extraordinaire.")
          			goto flw_35
          		  case 1:
/*< 15>*/ 			switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          			  case 0:
/*< 16>*/ 				printf(/* textboxtype: 1, unk: 0, line: 9 */ "Je pense que tu sais ce que tu as à faire\nmaintenant. Le chant ouvre la porte\nvers la dernière épreuve, qui se trouve\nquelque part dans le <color blue<ciel>coloroff>.\nUne fois l'épreuve réussie, poursuis ton\nchemin vers la <color yellow white<Triforce>coloroff>.")
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
/*<  8>*/ 							printf(/* textboxtype: 1, unk: 0, line: 6 */ "Hoho! Comment se passe ton\naventure, petit?\n\n\nReviens quand les trois dragons\nt'auront appris leur mélodie du Chant\ndu héros!\n\nLes dragons se trouvent dans la forêt\nde Firone, au volcan d'Ordinn et dans\nle désert de Lanelle.\n\nCourage, petit humain!")
          						}
          					  case 1:
          						goto flw_8
          					}
          				  case 1:
/*< 21>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*< 12>*/ 						printf(/* textboxtype: 1, unk: 0, line: 7 */ "Reviens quand les trois dragons\nt'auront appris leur mélodie du Chant\ndu héros!\n\nJe te chanterai alors la dernière.\n\n\n\n<0x10008:0xffcd>D'ailleurs, ma voix a besoin d'un peu\nehem, d'exercice...<0x10008:0x00cd>")
          					  case 1:
          						printf(/* textboxtype: 1, unk: 0, line: 0 */ "C'est toi qui m'as apporté ma soupe de\ncitrouille préférée, petit humain?\n\n\nJ'espère que tu sauras me pardonner.\nAprès avoir été possédé par cet\natroce parasite, j'ai perdu la raison.\n\nMais, tout ça est derrière nous. J'ai\nrepris mes esprits en humant l'arôme\nde cette bonne soupe.\n\nMerci, petit humain...")
/*<  1>*/ 						printf(/* textboxtype: 1, unk: 0, line: 1 */ "Je suis <color blue<Narisha>coloroff>, le grand esprit qui\nveille sur les cieux. Je servais la\nDéesse <color blue<Hylia>coloroff>, aujourd'hui disparue.\n\nTu t'appelles donc...<pause 25> <heroname>,\npetit humain? Tes parents t'ont donné\nun fort joli nom!\n\n<pause 20>Oh mais... <pause 20>Cette épée... <pause 20>Et ce pouvoir\nque je décèle en ton cœur...\n\n\n<0x30001:0x><heroname>... Tu es donc le héros\nélu par la Déesse...\n\n\nJ'en déduis que tu es venu me parler\nde la <color yellow white<Triforce>coloroff>?\n[1-]Oui[2-]Tu connais?")
/*<  2>*/ 						switch (choice(2)) {
          						  case 0:
          							flw_4:
/*<  4>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "Je m'en doutais.<pause 25> Très bien, je vais te\ndire ce que je sais.\n\n\nComme tu le sais sans doute, lorsque\nles serviteurs du mal ont essayé de\ns'emparer de la Triforce...\n\n... la Déesse a tout fait pour les\nen empêcher.\n\n\nElle a donc caché la Triforce à\n<color blue<Célesbourg>coloroff>, dans un endroit connu\nd'elle seule.\n\nJe ne sais donc pas non plus où elle\nse trouve...\n\n\nMais la Déesse m'a laissé un indice...\n\n\n\nEt c'est le <color red<Chant du héros>coloroff>, que tu peux\njouer avec ta <color blue<lyre>coloroff>, petit humain.")
/*<  5>*/ 							printf(/* textboxtype: 1, unk: 0, line: 4 */ "Le Chant du héros est la <color red<clé>coloroff> qui mène à\nl'endroit où la Triforce est cachée.")
/*<  6>*/ 							printf(/* textboxtype: 1, unk: 0, line: 5 */ "La Déesse a divisé le chant en quatre\nmélodies, et en a donné une à chacun\ndes trois dragons, ainsi qu'à\nmoi‐même.\nTu dois donc rassembler toutes les\n<color red<<color red<<sound 4><color red<mélodies du Chant du héros>coloroff>.\n\n\nLorsque tu auras obtenu les trois\npremières, je compléterai le chant en\nte fredonnant la dernière!\n\nBien. Les dragons se trouvent dans la\nforêt de Firone, au volcan d'Ordinn\net au désert de Lanelle.\n\nVa les trouver!")
/*< 22>*/ 							story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */] = true;
/*< 14>*/ 							story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = true;
/*< 37>*/ 							story_flags[781 /* us: 805A9B2D 0x20, jp: 805ACDAD 0x20 */] = true;
          						  case 1:
/*<  3>*/ 							printf(/* textboxtype: 1, unk: 0, line: 2 */ "Si je connais? Tu sais que tu t'adresses\nau grand esprit qui veille sur...\n<pause 20>Mais passons.")
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

