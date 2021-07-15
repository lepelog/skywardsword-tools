          void entrypoint_251_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf("\x0E\x01\x12\x04\x00dFay de mon c\x153ur ! J'arrive ! J'accours !\n\n\n\nOh, c'est ça qu'il faut transporter ?")
          }

          void entrypoint_251_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	printf("Bien, je vous attendrai dans le ciel.\nDépêchez\x2010vous de me rejoindre !")
          }

          void entrypoint_251_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, je vous conseille de vite regagner\nle ciel pour aller remettre le Tikwi à son\ndestinataire au plus vite.")
/*< 23>*/ 	story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*< 13>*/ 	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = true;
/*< 24>*/ 	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = false;
/*< 25>*/ 	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = false;
/*< 26>*/ 	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
/*< 27>*/ 	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = false;
/*< 28>*/ 	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = false;
/*< 29>*/ 	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = false;
/*< 30>*/ 	story_flags[673 /* us: 805A9B20 0x04, jp: 805ACDA0 0x04 */] = true;
/*< 34>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
          }

          void entrypoint_251_05() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf("\x0E\x01\x12\x04\x00dAllez, pousse\x2010toi de là ! J'aime pas avoir\nà répéter tout le temps la même chose !")
          }

          void entrypoint_251_06() {
/*< 22>*/ 	start()
/*<  1>*/ 	printf("La probabilité que cette créature soit une plante est\nde 40 %. Mais <b<Arfan>> pourrait la considérer comme\nune plante d'un genre nouveau.\n\nIl est possible de la transporter à l'aide du robot.\nVoulez\x2010vous que je l'appelle ?\n[1]S'il te plaît[2-]Évitons")
/*<  2>*/ 	switch (choice(2)) {
          	  case 0:
/*<  4>*/ 		printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. J'appelle le robot par ondes\npsychiques.")
          	  case 1:
/*<  3>*/ 		printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Si vous désirez la transporter,\nexaminez\x2010la à nouveau.")
          	}
          }

          void entrypoint_251_01() {
          	start()
/*< 31>*/ 	switch (story_flags[673 /* us: 805A9B20 0x04, jp: 805ACDA0 0x04 */]) {
          	  case 0:
/*< 33>*/ 		printf("\x0E\x01\x09\x04\x07\x14Dis donc ! Ça se fait pas de donner de faux\nespoirs aux gens comme ça !\n\n\n\x0E\x01\x09\x04\x09\x13Je pensais que je pourrais plus jamais aller dans\nce havre de paix, alors j'étais tout déprimé !")
/*< 32>*/ 		printf("\x0E\x01\x09\x04\x07\x04Bon, cette fois tu m'emmènes vraiment là\x2010bas,\nhein !\n\n\n\x0E\x01\x09\x04\x00\x01Je compte sur toi !")
          	  case 1:
/*< 36>*/ 		switch (zone_temp_flags[9 /* 0x0 02 */]) {
          		  case 0:
/*< 37>*/ 			printf("\x0E\x01\x09\x04\x07\x03Je veux que tu m'emmènes dans un endroit\npaisible où je pourrai vivre tranquillement\nsans avoir à me cacher.\n\n\x0E\x01\x09\x04\x00\x01Je compte sur toi !")
          		  case 1:
/*< 14>*/ 			printf("\x0E\x01\x09\x04\x00\x01Oh, c'est toi ! À force de rester caché comme\nça, j'ai les épaules tout engourdies.\n[1]Quelles épaules ?[2]Mon pauvre")
/*< 15>*/ 			switch (choice(2)) {
          			  case 0:
/*< 16>*/ 				printf("\x0E\x01\x09\x04\x09\x14Je ne te permets pas ! D'accord, elles sont super\ntombantes, mais j'ai des épaules quand même !\n\n\n\x0E\x01\x09\x04\x07\x11Enfin, je commence à être fatigué de passer\nmes journées à attendre que le danger s'éloigne.")
          				flw_38:
/*< 38>*/ 				switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          				  case 0:
/*< 39>*/ 					printf("\x0E\x01\x09\x04\x09\x13Tous les autres se réjouissent que la paix soit\nrevenue dans la forêt... Mais moi, je dis que\nc'est des salades.\n\n\x0E\x01\x09\x04\x07\x04Est\x2010ce que je vais devoir passer toute ma vie\ncomme ça ?")
          					flw_19:
/*< 19>*/ 					printf("\x0E\x01\x09\x04\x09\x05Il n'y aurait pas un endroit paisible où je\npourrais vivre tranquillement sans avoir\nà me cacher ?\n[1]Il y en a un[2]Je t'y emmène")
/*< 20>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_21:
/*< 21>*/ 						printf("\x0E\x01\x09\x04\x06\x07Ouah ! Ça a l'air fantastique ! Amène\x2010moi vite\nlà\x2010bas !")
/*< 35>*/ 						zone_temp_flags[9 /* 0x0 02 */] = true;
/*< 40>*/ 						story_flags[1094 /* us: 805A9B52 0x10, jp: 805ACDD2 0x10 */] = true;
          					  case 1:
          						goto flw_21
          					}
          				  case 1:
/*< 18>*/ 					printf("\x0E\x01\x09\x04\x09\x13Mais il y a encore plein de vilains pas beaux\nqui traînent par ici.\n\n\n\x0E\x01\x09\x04\x07\x04Est\x2010ce que nous autres, les Tikwis, sommes\ncondamnés à nous cacher toute notre vie ?")
          					goto flw_19
          				}
          			  case 1:
/*< 17>*/ 				printf("\x0E\x01\x09\x04\x07\x11Ben oui ! Est\x2010ce que tu imagines ce que c'est\nque de passer ses journées à attendre que le\ndanger s'éloigne ?")
          				goto flw_38
          			}
          		}
          	}
          }

