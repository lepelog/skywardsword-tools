          void entrypoint_351_10() {
/*< 14>*/ 	start()
/*< 44>*/ 	switch (story_flags[473 /* us: 805A9B0E 0x20, jp: 805ACD8E 0x20 */]) {
          	  case 0:
/*< 45>*/ 		printf("\x0E\x01\x09\x04\x00\x04Quoi? T'avais dit que tu m'emmènerais dans\nle ciel, et là, tu m'abandonnes en cours de\nroute? Retour à la case 0, en fin de compte...\nPfff.\nLa prochaine fois, ne me laisse pas tomber,\ncompris?")
          		flw_19:
/*< 19>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 20, 'param3': 35}
/*< 20>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 21, 'param3': 16}
/*< 21>*/ 		printf("Cet individu correspond parfaitement au profil\nrecherché par la jeune personne de la Citrouille\nperchée.\n\nDois\x2010je appeler le robot pour qu'il emporte ce Mogma\ndans le ciel?\n[1]Oui[2-]Non")
/*< 22>*/ 		switch (choice(2)) {
          		  case 0:
/*< 24>*/ 			printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Je l'appelle immédiatement par\ntransmission télépathique.")
          		  case 1:
/*< 23>*/ 			printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Examinez\x2010le à nouveau si\nvous changez d'avis.")
          		}
          	  case 1:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\x09Oh, ça fait plaisir de te revoir!\nMerci pour l'autre fois!\n\n\nJ'recherche de nouveaux trésors depuis un\nmoment, mais j'trouve pas grand\x2010chose...\n\n\nEt j'commence à en avoir assez de traîner ici.\nOn crève!\n\n\n\x0E\x01\x09\x04\x00\x05Faudrait que j'aille ailleurs... quelque part de\nplus frais. Je devrais joindre l'utile à l'agréable\ntout en mettant à profit mes atouts.\n\nOu que j'me trouve un travail plus pépère,\nfinalement!\n[1]J'ai une idée![2]Rêve\ntoujours!")
/*< 16>*/ 		switch (choice(2)) {
          		  case 0:
/*< 17>*/ 			printf("\x0E\x01\x09\x04\x00\x04Quoi? Tu veux dire qu'il y aurait une place\npour moi dans le ciel?\n\n\nLe travail idéal, qui me permettrait d'exploiter\nau maximum mes divers talents?\n\n\nOooh! J'y vais! J'mets les voiles!<pause0A>\nJe décolle!<pause0A> Emmène\x2010moi avec toi!")
          			goto flw_19
          		  case 1:
/*< 18>*/ 			printf("\x0E\x01\x09\x04\x00\x08Ouais...<pause0A> T'as peut\x2010être raison...\nJe devrais rester encore un peu ici...")
          		}
          	}
          }

          void entrypoint_351_11() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, retournons dans le ciel et emmenons\nle Mogma là où il est attendu.")
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
/*< 31>*/ 	printf("\x0E\x01\x12\x04\x00dT'as pas besoin de toujours me répéter\nla même chose! Brrrzt!")
          }

          void entrypoint_351_01() {
          	start()
/*<  1>*/ 	printf("Vous avez découvert un cristal très similaire à la\nboule de cristal du voyant, et qui pourrait être\nutilisé comme telle.\n\nDois\x2010je appeler le robot afin de le transporter?\n[1]Oui[2-]Non")
/*<  2>*/ 	switch (choice(2)) {
          	  case 0:
/*<  4>*/ 		printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Je l'appelle immédiatement par\ntransmission télépathique.")
          	  case 1:
/*<  3>*/ 		printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Examinez\x2010le à nouveau si\nvous changez d'avis.")
          	}
          }

          void entrypoint_351_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf("\x0E\x01\x12\x04\x00dMam'selle Fay! Je suis de retour, zrrpt!\n\n\n\nAh, c'est ça que je dois porter, bzzt?")
          }

          void entrypoint_351_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	printf("Bon, je vous attends dans le ciel, alors ne\ntardez pas trop! Vrrrt!")
          }

          void entrypoint_351_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, retournons dans le ciel et rapportons la\nboule de cristal.")
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
/*< 12>*/ 	printf("\x0E\x01\x12\x04\x00dHé, le maître en vert! Te fatigue pas trop,\nsurtout!")
          }
