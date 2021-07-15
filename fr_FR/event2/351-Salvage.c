          void entrypoint_351_10() {
/*< 14>*/ 	start()
/*< 44>*/ 	switch (story_flags[473 /* us: 805A9B0E 0x20, jp: 805ACD8E 0x20 */]) {
          	  case 0:
/*< 45>*/ 		printf("\x0E\x01\x09\x04\x00\x04Quoi ? Mais t'avais dit que tu\nm'emmènerais dans le ciel, et tu\nm'lâches en route, au sommet de\nmon rêve ?\nRésultat, j'me retrouve coincé ici !\n\n\n\nBon, cette fois, fais pas ton lâcheur et\nemmène\x2010moi, hein ?")
          		flw_19:
/*< 19>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 20, 'param3': 35}
/*< 20>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 21, 'param3': 16}
/*< 21>*/ 		printf("Cet individu correspond parfaitement\nau profil recherché par la jeune\npersonne de la Citrouille perchée.\n\nDois\x2010je appeler le robot pour qu'il\nemporte ce Mogma dans le ciel ?\n[1]Oui[2-]Non")
/*< 22>*/ 		switch (choice(2)) {
          		  case 0:
/*< 24>*/ 			printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître.\nJe l'appelle immédiatement avec mes\nondes psychiques.")
          		  case 1:
/*< 23>*/ 			printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Examinez\x2010le à\nnouveau si vous changez d'avis.")
          		}
          	  case 1:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\x09Oh, comme on se retrouve !\nMerci pour l'autre fois !\n\n\nJ'recherche de nouveaux trésors\ndepuis un moment, mais j'trouve\npas grand\x2010chose...\n\nEt j'commence à en avoir marre de\ntraîner dans le coin, il fait une de ces\nchaleurs !\n\n\x0E\x01\x09\x04\x00\x05Faudrait peut\x2010être que je tire avantage\nde mes atouts pour allier plaisir et\nprofit...\n\nOu que j'me trouve un job plus pépère,\nquoi !\n[1]J'ai une idée[2]Allez, courage !")
/*< 16>*/ 		switch (choice(2)) {
          		  case 0:
/*< 17>*/ 			printf("\x0E\x01\x09\x04\x00\x04Quoi ? Tu veux dire qu'il y aurait une\nplace pour moi dans le ciel ?\n\n\nLe job idéal, qui m'permettrait\nd'exploiter au mieux mes divers\ntalents ?\n\nOooh ! J'y vais ! J'mets les voiles !<pause0A>\nJe décolle !<pause0A> Emmène\x2010moi avec toi !")
          			goto flw_19
          		  case 1:
/*< 18>*/ 			printf("\x0E\x01\x09\x04\x00\x08Ouais...<pause0A> Si tu le dis, j'vais peut\x2010être\nrester encore un peu ici...")
          		}
          	}
          }

          void entrypoint_351_11() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, retournons dans le ciel et\nemmenons le Mogma là où il est\nattendu.")
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
/*< 31>*/ 	printf("\x0E\x01\x12\x04\x00dFaut toujours que tu sois dans mes\npattes, toi...")
          }

          void entrypoint_351_01() {
          	start()
/*<  1>*/ 	printf("Vous avez découvert un cristal très\nsimilaire à la boule de cristal du \nvoyant, et qui pourrait être utilisé\ncomme telle.\nDois\x2010je appeler le robot afin de le\ntransporter ?\n[1]Oui[2-]Non")
/*<  2>*/ 	switch (choice(2)) {
          	  case 0:
/*<  4>*/ 		printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître.\nJe l'appelle immédiatement avec mes\nondes psychiques.")
          	  case 1:
/*<  3>*/ 		printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Examinez\x2010le à\nnouveau si vous changez d'avis.")
          	}
          }

          void entrypoint_351_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf("\x0E\x01\x12\x04\x00dFay de mon c\x153ur !\nJe suis de retour !\n\n\nAh, c'est ça que je dois porter,\ncette fois ?")
          }

          void entrypoint_351_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	printf("Bon, je vous attends dans le ciel,\nalors ne tardez pas trop !")
          }

          void entrypoint_351_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, retournons dans le ciel\net rapportons la boule de cristal.")
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
/*< 12>*/ 	printf("\x0E\x01\x12\x04\x00dHé, le maître en vert !\nTe fatigue pas trop, surtout !")
          }

