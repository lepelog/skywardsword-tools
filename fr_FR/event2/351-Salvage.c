          void entrypoint_351_10() {
/*< 14>*/ 	start()
/*< 44>*/ 	switch (story_flags[473 /* us: 805A9B0E 0x20, jp: 805ACD8E 0x20 */]) {
          	  case 0:
/*< 45>*/ 		printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00000004>Quoi ? Mais t'avais dit que tu\nm'emmènerais dans le ciel, et tu\nm'lâches en route, au sommet de\nmon rêve ?\nRésultat, j'me retrouve coincé ici !\n\n\n\nBon, cette fois, fais pas ton lâcheur et\nemmène‐moi, hein ?")
          		flw_19:
/*< 19>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 20, 'param3': 35}
/*< 20>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 21, 'param3': 16}
/*< 21>*/ 		printf(/* textboxtype: 2, unk: 0, line: 10 */ "Cet individu correspond parfaitement\nau profil recherché par la jeune\npersonne de la Citrouille perchée.\n\nDois‐je appeler le robot pour qu'il\nemporte ce Mogma dans le ciel ?\n[1-]Oui[2]Non")
/*< 22>*/ 		switch (choice(2)) {
          		  case 0:
/*< 24>*/ 			printf(/* textboxtype: 2, unk: 0, line: 2 */ "<0x10012:0x00000005>Très bien, Maître.\nJe l'appelle immédiatement avec mes\nondes psychiques.")
          		  case 1:
/*< 23>*/ 			printf(/* textboxtype: 2, unk: 0, line: 1 */ "<0x10012:0x00000005>Très bien, Maître. Examinez‐le à\nnouveau si vous changez d'avis.")
          		}
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00000009>Oh, comme on se retrouve !\nMerci pour l'autre fois !\n\n\nJ'recherche de nouveaux trésors\ndepuis un moment, mais j'trouve\npas grand‐chose...\n\nEt j'commence à en avoir marre de\ntraîner dans le coin, il fait une de ces\nchaleurs !\n\n<0x10009:0x00000005>Faudrait peut‐être que je tire avantage\nde mes atouts pour allier plaisir et\nprofit...\n\nOu que j'me trouve un job plus pépère,\nquoi !\n[1-]J'ai une idée[2-]Allez, courage !")
/*< 16>*/ 		switch (choice(2)) {
          		  case 0:
/*< 17>*/ 			printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00000004>Quoi ? Tu veux dire qu'il y aurait une\nplace pour moi dans le ciel ?\n\n\nLe job idéal, qui m'permettrait\nd'exploiter au mieux mes divers\ntalents ?\n\nOooh ! J'y vais ! J'mets les voiles !<pause 10>\nJe décolle !<pause 10> Emmène‐moi avec toi !")
          			goto flw_19
          		  case 1:
/*< 18>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000008>Ouais...<pause 10> Si tu le dis, j'vais peut‐être\nrester encore un peu ici...")
          		}
          	}
          }

          void entrypoint_351_11() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 2, unk: 0, line: 12 */ "<0x10012:0x00000001>Maître, retournons dans le ciel et\nemmenons le Mogma là où il est\nattendu.")
/*< 27>*/ 	story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*< 28>*/ 	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = true;
/*< 48>*/ 	story_flags[473 /* us: 805A9B0E 0x20, jp: 805ACD8E 0x20 */] = true;
/*< 42>*/ 	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = false;
/*< 41>*/ 	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = false;
/*< 40>*/ 	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
/*< 39>*/ 	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = false;
/*< 43>*/ 	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = false;
/*< 38>*/ 	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = false;
/*< 47>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
          }

          void entrypoint_351_12() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10012:0x00000064>Faut toujours que tu sois dans mes\npattes, toi...")
          }

          void entrypoint_351_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "Vous avez découvert un cristal très\nsimilaire à la boule de cristal du \nvoyant, et qui pourrait être utilisé\ncomme telle.\nDois‐je appeler le robot afin de le\ntransporter ?\n[1-]Oui[2]Non")
/*<  2>*/ 	switch (choice(2)) {
          	  case 0:
/*<  4>*/ 		printf(/* textboxtype: 2, unk: 0, line: 2 */ "<0x10012:0x00000005>Très bien, Maître.\nJe l'appelle immédiatement avec mes\nondes psychiques.")
          	  case 1:
/*<  3>*/ 		printf(/* textboxtype: 2, unk: 0, line: 1 */ "<0x10012:0x00000005>Très bien, Maître. Examinez‐le à\nnouveau si vous changez d'avis.")
          	}
          }

          void entrypoint_351_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10012:0x00000064>Fay de mon cœur !\nJe suis de retour !\n\n\nAh, c'est ça que je dois porter,\ncette fois ?")
          }

          void entrypoint_351_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ "Bon, je vous attends dans le ciel,\nalors ne tardez pas trop !")
          }

          void entrypoint_351_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 2, unk: 0, line: 5 */ "<0x10012:0x00000001>Maître, retournons dans le ciel\net rapportons la boule de cristal.")
/*< 29>*/ 	story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*< 13>*/ 	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = true;
/*< 36>*/ 	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = false;
/*< 35>*/ 	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = false;
/*< 34>*/ 	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
/*< 33>*/ 	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = false;
/*< 32>*/ 	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = false;
/*< 37>*/ 	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = false;
/*< 46>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
          }

          void entrypoint_351_05() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10012:0x00000064>Hé, le maître en vert !\nTe fatigue pas trop, surtout !")
          }

