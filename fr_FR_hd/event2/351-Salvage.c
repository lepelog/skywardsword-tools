          void entrypoint_351_10() {
/*< 14>*/ 	start()
/*< 44>*/ 	switch (story_flags[473 /* us: 805A9B0E 0x20, jp: 805ACD8E 0x20 */]) {
          	  case 0:
/*< 45>*/ 		printf("\x0E\x01\x09\x04\x00\x04Quoi ? Mais t'avais dit que tu m'emmènerais\ndans le ciel, et tu m'lâches en route, au sommet\nde mon rêve ?\n\nRésultat, j'me retrouve coincé ici !\n\n\n\nBon, cette fois, fais pas ton lâcheur et\nemmène\x2010moi, hein ?")
          		flw_19:
/*< 19>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 20, 'param3': 35}
/*< 20>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 21, 'param3': 16}
/*< 21>*/ 		printf("Cet individu correspond parfaitement au profil\nrecherché par la jeune personne de la Citrouille\nperchée.\n\nDois\x2010je appeler le robot pour qu'il emporte ce Mogma\ndans le ciel ?\n[1]Oui[2-]Non")
/*< 22>*/ 		switch (choice(2)) {
          		  case 0:
/*< 24>*/ 			printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Je l'appelle immédiatement avec\nmes ondes psychiques.")
          		  case 1:
/*< 23>*/ 			printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Examinez\x2010le à nouveau si vous\nchangez d'avis.")
          		}
          	  case 1:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\x09Oh, comme on se retrouve ! Merci pour l'autre\nfois !\n\n\nJ'recherche de nouveaux trésors depuis un\nmoment, mais j'trouve pas grand\x2010chose...\n\n\nEt j'commence à en avoir marre de traîner dans\nle coin, il fait une de ces chaleurs !\n\n\n\x0E\x01\x09\x04\x00\x05Faudrait peut\x2010être que je tire avantage de mes\natouts pour allier plaisir et profit...\n\n\nOu que j'me trouve un job plus pépère, quoi !\n[1]J'ai une idée[2]Allez, courage !")
/*< 16>*/ 		switch (choice(2)) {
          		  case 0:
/*< 17>*/ 			printf("\x0E\x01\x09\x04\x00\x04Quoi ? Tu veux dire qu'il y aurait une place\npour moi dans le ciel ?\n\n\nLe job idéal, qui m'permettrait d'exploiter au\nmieux mes divers talents ?\n\n\nOooh ! J'y vais ! J'mets les voiles !<pause0A> Je décolle !<pause0A>\nEmmène\x2010moi avec toi !")
          			goto flw_19
          		  case 1:
/*< 18>*/ 			printf("\x0E\x01\x09\x04\x00\x08Ouais...<pause0A> Si tu le dis, j'vais peut\x2010être rester encore\nun peu ici...")
          		}
          	}
          }

          void entrypoint_351_11() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, retournons dans le ciel et emmenons le\nMogma là où il est attendu.")
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
/*< 31>*/ 	printf("\x0E\x01\x12\x04\x00dFaut toujours que tu sois dans mes pattes, toi...")
          }

          void entrypoint_351_01() {
          	start()
/*<  1>*/ 	printf("Vous avez découvert un cristal très similaire à la boule\nde cristal du voyant, et qui pourrait être utilisé comme\ntelle.\n\nDois\x2010je appeler le robot afin de le transporter ?\n[1]Oui[2-]Non")
/*<  2>*/ 	switch (choice(2)) {
          	  case 0:
/*<  4>*/ 		printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Je l'appelle immédiatement avec\nmes ondes psychiques.")
          	  case 1:
/*<  3>*/ 		printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Examinez\x2010le à nouveau si vous\nchangez d'avis.")
          	}
          }

          void entrypoint_351_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf("\x0E\x01\x12\x04\x00dFay de mon c\x153ur ! Je suis de retour !\n\n\n\nAh, c'est ça que je dois porter, cette fois ?")
          }

          void entrypoint_351_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	printf("Bon, je vous attends dans le ciel, alors ne tardez\npas trop !")
          }

          void entrypoint_351_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, retournons dans le ciel et rapportons la boule\nde cristal.")
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
/*< 12>*/ 	printf("\x0E\x01\x12\x04\x00dHé, le maître en vert ! Te fatigue pas trop,\nsurtout !")
          }

