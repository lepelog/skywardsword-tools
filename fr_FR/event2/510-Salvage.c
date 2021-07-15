          void entrypoint_510_01() {
          	start()
/*<  1>*/ 	printf("Voici l'<r<hélice du moulin >>que nous\ncherchions.\n\n\nIl est possible de l'emporter à l'aide du\nrobot de l'atelier de rénovation.\n\n\nDois\x2010je l'appeler ?\n[1]Oui[2-]Non")
/*<  2>*/ 	switch (choice(2)) {
          	  case 0:
/*<  4>*/ 		printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. J'appelle le robot\npar ondes psychiques.<pling>")
          	  case 1:
/*<  3>*/ 		printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Examinez\x2010la à\nnouveau si vous voulez l'emmener.")
          	}
          }

          void entrypoint_510_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf("\x0E\x01\x12\x04\x00dDame Fay de mon c\x153ur à moi !\nTu m'attendais, n'est\x2010ce pas ?\n\n\nOh, c'est ça qu'il faut porter ?")
          }

          void entrypoint_510_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	printf("\x0E\x01\x12\x04\x00dBon, je l'emmène dans le ciel,\nvenez vite me rejoindre !")
          }

          void entrypoint_510_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, je vous recommande de\nretourner dans le ciel immédiatement\npour emmener l'hélice à destination.")
/*< 14>*/ 	story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*< 13>*/ 	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = true;
/*< 23>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*< 19>*/ 	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = false;
/*< 18>*/ 	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
/*< 17>*/ 	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = false;
/*< 16>*/ 	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = false;
/*< 20>*/ 	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = false;
/*< 15>*/ 	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = false;
/*< 21>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
/*< 22>*/ 	story_flags[1108 /* us: 805A9B54 0x04, jp: 805ACDD4 0x04 */] = true;
          }

          void entrypoint_510_05() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf("\x0E\x01\x12\x04\x00dHé, le maître en vert, tu vois pas que\ntu gênes ? Pousse\x2010toi un peu de là !")
          }

