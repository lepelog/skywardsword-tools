          void entrypoint_251_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 2, unk: 0, line: 3 */ "<0x10012:0x00000064>Mam'selle Fay! J'arrive! Bzzzzat! J'accours!\n\n\n\nOh, c'est ça qu'il faut transporter, zrrbt?")
          }

          void entrypoint_251_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	printf(/* textboxtype: 0, unk: 1, line: 4 */ "Bien, je vous attendrai dans le ciel.\nDépêchez‐vous de me rejoindre! Vrrrt!")
          }

          void entrypoint_251_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10012:0x00000001>Maître, je vous conseille de vite regagner\nle ciel pour aller remettre le Kikwi à son\ndestinataire au plus vite.")
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
/*< 12>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10012:0x00000064>Hé! Pousse‐toi de là! Zrrppt! J'aime pas avoir\nà répéter tout le temps la même chose! Brrzt!")
          }

          void entrypoint_251_06() {
/*< 22>*/ 	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "La probabilité que cette créature soit une plante est\nde 40 %. Mais <color blue<Arfan>coloroff> pourrait la considérer comme\nune plante d'un genre nouveau.\n\nIl est possible de la transporter à l'aide du robot.\nVoulez‐vous que je l'appelle?\n[1-]S'il te plaît[2]Évitons")
/*<  2>*/ 	switch (choice(2)) {
          	  case 0:
/*<  4>*/ 		printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10012:0x00000005>Très bien, Maître. J'appelle le robot par transmission\ntélépathique.")
          	  case 1:
/*<  3>*/ 		printf(/* textboxtype: 0, unk: 2, line: 1 */ "<0x10012:0x00000005>Très bien, Maître. Si vous désirez la transporter,\nexaminez‐la à nouveau.")
          	}
          }

          void entrypoint_251_01() {
          	start()
/*< 31>*/ 	switch (story_flags[673 /* us: 805A9B20 0x04, jp: 805ACDA0 0x04 */]) {
          	  case 0:
/*< 33>*/ 		printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00070014>Bien voyons! Ça se fait pas de donner de faux\nespoirs aux gens comme ça! Kwaaa!\n\n\n<0x10009:0x00090013>Je pensais que je pourrais plus jamais aller\ndans ce havre de paix, alors j'étais tout\ndéprimé! Kwa.")
/*< 32>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00070004>Bon, cette fois tu m'emmènes vraiment là‐bas,\nkwaa!\n\n\n<0x10009:0x00000001>Je compte sur toi!")
          	  case 1:
/*< 36>*/ 		switch (zone_temp_flags[9 /* 0x0 02 */]) {
          		  case 0:
/*< 37>*/ 			printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00070003>Je veux que tu m'emmènes dans un endroit\npaisible où je pourrai vivre tranquillement\nsans avoir à me cacher.\n\n<0x10009:0x00000001>Je compte sur toi!")
          		  case 1:
/*< 14>*/ 			printf(/* textboxtype: 0, unk: 2, line: 7 */ "<0x10009:0x00000001>Oh, c'est toi! À force de rester caché comme\nça, j'ai les épaules tout engourdies. Kwiii!\n[1-]Quelles épaules?[2-]Pauvre toi")
/*< 15>*/ 			switch (choice(2)) {
          			  case 0:
/*< 16>*/ 				printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00090014>T'es pas gêné, toi! Kwaaa! D'accord, elles sont\nun peu tombantes, mais j'ai des épaules!\nTout de même! \n\n<0x10009:0x00070011>Je commence à en avoir assez de passer mes\njournées à attendre que le danger s'éloigne.\nÇa finit par être stressant! Kwiii!")
          				flw_38:
/*< 38>*/ 				switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          				  case 0:
/*< 39>*/ 					printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00090013>Tous les autres se réjouissent que la paix soit\nrevenue dans la forêt... Kwi. Mais moi, je dis\nque c'est des salades.\n\n<0x10009:0x00070004>Est‐ce que je vais devoir passer toute ma vie\ncomme ça?")
          					flw_19:
/*< 19>*/ 					printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00090005>Il n'y aurait pas un endroit paisible où je\npourrais vivre tranquillement sans avoir\nà me cacher? Kwa?\n[1-]Il y en a un[2-]Je t'y emmène")
/*< 20>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_21:
/*< 21>*/ 						printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00060007>Ouah! Ça a l'air fantastique!\nAmène‐moi vite là‐bas! Kwo‐ko!")
/*< 35>*/ 						zone_temp_flags[9 /* 0x0 02 */] = true;
/*< 40>*/ 						story_flags[1094 /* us: 805A9B52 0x10, jp: 805ACDD2 0x10 */] = true;
          					  case 1:
          						goto flw_21
          					}
          				  case 1:
/*< 18>*/ 					printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00090013>Mais il y a encore plein de vilains méchants\nqui traînent par ici. Kwii!\n\n\n<0x10009:0x00070004>La vie est dure pour nous, les Kikwis. Nous\npassons notre temps à nous cacher juste pour\nsurvivre! Kwaa!")
          					goto flw_19
          				}
          			  case 1:
/*< 17>*/ 				printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00070011>Ben oui! Peux‐tu imaginer ce que c'est que de\npasser ses journées à attendre que le danger\ns'éloigne? Kwii!")
          				goto flw_38
          			}
          		}
          	}
          }

