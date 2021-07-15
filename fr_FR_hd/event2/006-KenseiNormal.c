          void entrypoint_006_004() {
/*<  6>*/ 	start()
/*< 26>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 25>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*< 27>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 30>*/ 				printf("Toutes mes félicitations, \x0E\x01\x12\x04\x00\x02Maître. Vous avez appris\ntoutes les mélodies du <b<Chant du héros>>.\n\n\nPour compléter ce chant, je vous conseille de\nretourner dans le ciel, là où se trouve le grand\nesprit <b<Narisha>>.")
/*< 33>*/ 				story_flags[465 /* us: 805A9B0F 0x04, jp: 805ACD8F 0x04 */] = true;
          			  case 1:
/*< 29>*/ 				printf("Toutes mes félicitations, \x0E\x01\x12\x04\x00\x02Maître. Vous avez appris la\nseconde mélodie du Chant du héros. Vous trouverez\nla dernière dans le <b<désert de Lanelle>>.")
          			}
          		  case 1:
/*< 28>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 32>*/ 				printf("Toutes mes félicitations, \x0E\x01\x12\x04\x00\x02Maître. Vous avez appris la\nseconde mélodie du Chant du héros. Vous trouverez\nla dernière dans la <b<forêt de Firone>>.")
          			  case 1:
/*< 31>*/ 				printf("Le chant que vous avez appris, \x0E\x01\x12\x04\x00\x01Maître, est une des\nmélodies du <b<Chant du héros>>.\n\n\nJe vous conseille de partir à la recherche des autres\ndragons afin d'apprendre les deux autres mélodies.")
          			}
          		}
          	  case 1:
/*< 34>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*< 41>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 43>*/ 				printf("Toutes mes félicitations, \x0E\x01\x12\x04\x00\x02Maître. Vous avez appris la\nseconde mélodie du Chant du héros. Vous trouverez\nla dernière au <b<volcan d'Ordinn>>.")
          				flw_40:
/*< 40>*/ 				story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = true;
          			  case 1:
/*< 35>*/ 				printf("Le chant que vous avez appris, \x0E\x01\x12\x04\x00\x01Maître, est une des\nmélodies du <b<Chant du héros>>.\n\n\nJe vous conseille de partir à la recherche des autres\ndragons afin d'apprendre les deux autres mélodies.")
          				goto flw_40
          			}
          		  case 1:
/*< 36>*/ 			printf("Le chant que vous avez appris, \x0E\x01\x12\x04\x00\x01Maître, est une des\nmélodies du <b<Chant du héros>>.\n\n\nJe vous conseille de partir à la recherche des autres\ndragons afin d'apprendre les deux autres mélodies.")
          			goto flw_40
          		}
          	}
          }

          void entrypoint_006_005() {
/*< 20>*/ 	start()
/*< 21>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, Fay au rapport. Vous avez obtenu la carte\nde cette zone. Appuyez sur \x0E\x02\x04\x02\x2CD pour la consulter.\x0E\x01\x11\x02\x2CD\n\n\nVous pouvez y vérifier l'emplacement des symboles\n\x0E\x02\x04\x02\x19CD,<pause0F> ainsi que l'état et l'emplacement des portes et\ndes coffres.\n\nCependant, comme cette zone est fermée, veuillez\nnoter que <r<l'utilisation des balises est impossible>>.")
/*< 22>*/ 	story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          }

          void entrypoint_006_006() {
/*< 23>*/ 	start()
/*< 24>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître Link, Fay au rapport. Je\nconfirme que l'entrée d'une épreuve se trouve\ndans les alentours.\n\nUne fois que vous aurez <r<détecté >>son emplacement,\nle <b<Courage de Farore >>que vous avez appris sur l'île\naux chants vous guidera.")
/*< 42>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_006_007() {
/*< 37>*/ 	start()
/*< 38>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître Link, Fay au rapport. Je\nconfirme que l'éruption volcanique a cessé.\n\n\nVous pouvez désormais retourner dans le ciel.")
/*< 39>*/ 	entrypoint_006_04();
          }

          void entrypoint_006_008() {
/*< 45>*/ 	start()
/*< 47>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 3, 'next': 48, 'param3': 32}
/*< 48>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 99, 'next': 49, 'param3': 16}
/*< 49>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître Link, Fay au rapport. Je\nconfirme que l'entrée d'une épreuve se trouve\ndans les alentours.\n\nUne fois que vous aurez <r<détecté >>son emplacement,\nle <b<Courage de Farore >>que vous avez appris sur l'île\naux chants vous guidera.")
/*< 52>*/ 	story_flags[121 /* us: 805A9AEA 0x40, jp: 805ACD6A 0x40 */] = true;
/*< 46>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*< 50>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 51, 'param3': 36}
/*< 51>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 15, 'next': -1, 'param3': 42}
          }

          void entrypoint_006_001() {
/*< 10>*/ 	start()
/*<  9>*/ 	printf("\x0E\x01\x12\x04\x00\x02Maître, vous avez remporté la chevauchée céleste,\npuis un ouragan a envoyé dame <b<Zelda >>sur terre.\n\n\nVous avez alors retiré l'<y<épée divine >>au temple de la\nDéesse, puis une <r<colonne de lumière>> est apparue\nlorsque vous avez placé la <y<stèle>>.")
          }

          void entrypoint_006_002() {
          	start()
/*< 44>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*<  2>*/ 	switch (story_flags[93 /* us: 805A9AF1 0x04, jp: 805ACD71 0x04 */]) {
          	  case 0:
/*< 12>*/ 		switch (story_flags[97 /* us: 805A9AF1 0x40, jp: 805ACD71 0x40 */]) {
          		  case 0:
/*< 14>*/ 			switch (story_flags[98 /* us: 805A9AF1 0x80, jp: 805ACD71 0x80 */]) {
          			  case 0:
/*< 15>*/ 				printf("Plantez votre épée au centre de la rosace pour accéder\nau monde de la dernière épreuve.")
/*< 19>*/ 				story_flags[99 /* us: 805A9AF0 0x01, jp: 805ACD70 0x01 */] = true;
          			  case 1:
/*< 13>*/ 				printf("Plantez votre épée au centre de la rosace pour accéder\nau monde d'une nouvelle épreuve.")
/*< 18>*/ 				story_flags[98 /* us: 805A9AF1 0x80, jp: 805ACD71 0x80 */] = true;
          			}
          		  case 1:
/*< 11>*/ 			printf("Plantez votre épée au centre de la rosace pour accéder\nau monde d'une nouvelle épreuve.")
/*< 17>*/ 			story_flags[97 /* us: 805A9AF1 0x40, jp: 805ACD71 0x40 */] = true;
          		}
          	  case 1:
/*<  1>*/ 		printf("\x0E\x01\x12\x04\x00\x01Maître, notre interprétation du Courage de Farore\na fait apparaître une rosace sur le sol.\n\n\nIl y a 90 % de chances qu'il s'agisse de l'entrée de\nl'épreuve, prophétisée par la statue de la Déesse\nde l'île aux chants.\n\nPlacez\x2010vous au centre de la rosace et plantez votre\népée dans le sol.")
/*< 16>*/ 		story_flags[93 /* us: 805A9AF1 0x04, jp: 805ACD71 0x04 */] = true;
          	}
          }

          void entrypoint_006_003() {
/*<  3>*/ 	start()
/*<  4>*/ 	printf("")
/*<  5>*/ 	story_flags[358 /* us: 805A9B00 0x10, jp: 805ACD80 0x10 */] = true;
/*<  7>*/ 	story_flags[570 /* us: 805A9B18 0x02, jp: 805ACD98 0x02 */] = true;
/*<  8>*/ 	story_flags[571 /* us: 805A9B18 0x04, jp: 805ACD98 0x04 */] = true;
          }

