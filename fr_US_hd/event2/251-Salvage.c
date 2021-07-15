          void entrypoint_251_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf("\x0E\x01\x12\x04\x00dMam'selle Fay! J'arrive! Bzzzzat! J'accours!\n\n\n\nOh, c'est ça qu'il faut transporter, zrrbt?")
          }

          void entrypoint_251_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	printf("Bien, je vous attendrai dans le ciel.\nDépêchez\x2010vous de me rejoindre! Vrrrt!")
          }

          void entrypoint_251_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, je vous conseille de vite regagner\nle ciel pour aller remettre le Kikwi à son\ndestinataire au plus vite.")
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
/*< 12>*/ 	printf("\x0E\x01\x12\x04\x00dHé! Pousse\x2010toi de là! Zrrppt! J'aime pas avoir\nà répéter tout le temps la même chose! Brrzt!")
          }

          void entrypoint_251_06() {
/*< 22>*/ 	start()
/*<  1>*/ 	printf("La probabilité que cette créature soit une plante est\nde 40 %. Mais <b<Arfan>> pourrait la considérer comme\nune plante d'un genre nouveau.\n\nIl est possible de la transporter à l'aide du robot.\nVoulez\x2010vous que je l'appelle?\n[1]S'il te plaît[2-]Évitons")
/*<  2>*/ 	switch (choice(2)) {
          	  case 0:
/*<  4>*/ 		printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. J'appelle le robot par transmission\ntélépathique.")
          	  case 1:
/*<  3>*/ 		printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Si vous désirez la transporter,\nexaminez\x2010la à nouveau.")
          	}
          }

          void entrypoint_251_01() {
          	start()
/*< 31>*/ 	switch (story_flags[673 /* us: 805A9B20 0x04, jp: 805ACDA0 0x04 */]) {
          	  case 0:
/*< 33>*/ 		printf("\x0E\x01\x09\x04\x07\x14Bien voyons! Ça se fait pas de donner de faux\nespoirs aux gens comme ça! Kwaaa!\n\n\n\x0E\x01\x09\x04\x09\x13Je pensais que je pourrais plus jamais aller\ndans ce havre de paix, alors j'étais tout\ndéprimé! Kwa.")
/*< 32>*/ 		printf("\x0E\x01\x09\x04\x07\x04Bon, cette fois tu m'emmènes vraiment là\x2010bas,\nkwaa!\n\n\n\x0E\x01\x09\x04\x00\x01Je compte sur toi!")
          	  case 1:
/*< 36>*/ 		switch (zone_temp_flags[9 /* 0x0 02 */]) {
          		  case 0:
/*< 37>*/ 			printf("\x0E\x01\x09\x04\x07\x03Je veux que tu m'emmènes dans un endroit\npaisible où je pourrai vivre tranquillement\nsans avoir à me cacher.\n\n\x0E\x01\x09\x04\x00\x01Je compte sur toi!")
          		  case 1:
/*< 14>*/ 			printf("\x0E\x01\x09\x04\x00\x01Oh, c'est toi! À force de rester caché comme\nça, j'ai les épaules tout engourdies. Kwiii!\n[1]Quelles épaules?[2]Pauvre toi")
/*< 15>*/ 			switch (choice(2)) {
          			  case 0:
/*< 16>*/ 				printf("\x0E\x01\x09\x04\x09\x14T'es pas gêné, toi! Kwaaa! D'accord, elles sont\nun peu tombantes, mais j'ai des épaules!\nTout de même! \n\n\x0E\x01\x09\x04\x07\x11Je commence à en avoir assez de passer mes\njournées à attendre que le danger s'éloigne.\nÇa finit par être stressant! Kwiii!")
          				flw_38:
/*< 38>*/ 				switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          				  case 0:
/*< 39>*/ 					printf("\x0E\x01\x09\x04\x09\x13Tous les autres se réjouissent que la paix soit\nrevenue dans la forêt... Kwi. Mais moi, je dis\nque c'est des salades.\n\n\x0E\x01\x09\x04\x07\x04Est\x2010ce que je vais devoir passer toute ma vie\ncomme ça?")
          					flw_19:
/*< 19>*/ 					printf("\x0E\x01\x09\x04\x09\x05Il n'y aurait pas un endroit paisible où je\npourrais vivre tranquillement sans avoir\nà me cacher? Kwa?\n[1]Il y en a un[2]Je t'y emmène")
/*< 20>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_21:
/*< 21>*/ 						printf("\x0E\x01\x09\x04\x06\x07Ouah! Ça a l'air fantastique!\nAmène\x2010moi vite là\x2010bas! Kwo\x2010ko!")
/*< 35>*/ 						zone_temp_flags[9 /* 0x0 02 */] = true;
/*< 40>*/ 						story_flags[1094 /* us: 805A9B52 0x10, jp: 805ACDD2 0x10 */] = true;
          					  case 1:
          						goto flw_21
          					}
          				  case 1:
/*< 18>*/ 					printf("\x0E\x01\x09\x04\x09\x13Mais il y a encore plein de vilains méchants\nqui traînent par ici. Kwii!\n\n\n\x0E\x01\x09\x04\x07\x04La vie est dure pour nous, les Kikwis. Nous\npassons notre temps à nous cacher juste pour\nsurvivre! Kwaa!")
          					goto flw_19
          				}
          			  case 1:
/*< 17>*/ 				printf("\x0E\x01\x09\x04\x07\x11Ben oui! Peux\x2010tu imaginer ce que c'est que de\npasser ses journées à attendre que le danger\ns'éloigne? Kwii!")
          				goto flw_38
          			}
          		}
          	}
          }

