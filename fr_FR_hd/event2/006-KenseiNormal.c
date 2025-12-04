          void entrypoint_006_004() {
/*<  6>*/ 	start()
/*< 26>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 25>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*< 27>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 30>*/ 				printf(/* textboxtype: 0, unk: 2, line: 13 */ "Toutes mes félicitations, <0x10012:0x00000002>Maître. Vous avez appris\ntoutes les mélodies du <color blue<Chant du héros>coloroff>.\n\n\nPour compléter ce chant, je vous conseille de\nretourner dans le ciel, là où se trouve le grand\nesprit <color blue<Narisha>coloroff>.")
/*< 33>*/ 				story_flags[465 /* us: 805A9B0F 0x04, jp: 805ACD8F 0x04 */] = true;
          			  case 1:
/*< 29>*/ 				printf(/* textboxtype: 2, unk: 0, line: 12 */ "Toutes mes félicitations, <0x10012:0x00000002>Maître. Vous avez appris la\nseconde mélodie du Chant du héros. Vous trouverez\nla dernière dans le <color blue<désert de Lanelle>coloroff>.")
          			}
          		  case 1:
/*< 28>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 32>*/ 				printf(/* textboxtype: 0, unk: 2, line: 10 */ "Toutes mes félicitations, <0x10012:0x00000002>Maître. Vous avez appris la\nseconde mélodie du Chant du héros. Vous trouverez\nla dernière dans la <color blue<forêt de Firone>coloroff>.")
          			  case 1:
/*< 31>*/ 				printf(/* textboxtype: 2, unk: 0, line: 9 */ "Le chant que vous avez appris, <0x10012:0x00000001>Maître, est une des\nmélodies du <color blue<Chant du héros>coloroff>.\n\n\nJe vous conseille de partir à la recherche des autres\ndragons afin d'apprendre les deux autres mélodies.")
          			}
          		}
          	  case 1:
/*< 34>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*< 41>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 43>*/ 				printf(/* textboxtype: 0, unk: 0, line: 11 */ "Toutes mes félicitations, <0x10012:0x00000002>Maître. Vous avez appris la\nseconde mélodie du Chant du héros. Vous trouverez\nla dernière au <color blue<volcan d'Ordinn>coloroff>.")
          				flw_40:
/*< 40>*/ 				story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = true;
          			  case 1:
/*< 35>*/ 				printf(/* textboxtype: 2, unk: 0, line: 9 */ "Le chant que vous avez appris, <0x10012:0x00000001>Maître, est une des\nmélodies du <color blue<Chant du héros>coloroff>.\n\n\nJe vous conseille de partir à la recherche des autres\ndragons afin d'apprendre les deux autres mélodies.")
          				goto flw_40
          			}
          		  case 1:
/*< 36>*/ 			printf(/* textboxtype: 2, unk: 0, line: 9 */ "Le chant que vous avez appris, <0x10012:0x00000001>Maître, est une des\nmélodies du <color blue<Chant du héros>coloroff>.\n\n\nJe vous conseille de partir à la recherche des autres\ndragons afin d'apprendre les deux autres mélodies.")
          			goto flw_40
          		}
          	}
          }

          void entrypoint_006_005() {
/*< 20>*/ 	start()
/*< 21>*/ 	printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10012:0x0000000b>Maître, Fay au rapport. Vous avez obtenu la carte\nde cette zone. Appuyez sur (-) pour la consulter.<0x10011:0x02cd>\n\n\nVous pouvez y vérifier l'emplacement des symboles\n(X),<pause 15> ainsi que l'état et l'emplacement des portes et\ndes coffres.\n\nCependant, comme cette zone est fermée, veuillez\nnoter que <color red<l'utilisation des balises est impossible>coloroff>.")
/*< 22>*/ 	story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          }

          void entrypoint_006_006() {
/*< 23>*/ 	start()
/*< 24>*/ 	printf(/* textboxtype: 2, unk: 0, line: 15 */ "<0x10012:0x0000000b>Maître <heroname>, Fay au rapport. Je\nconfirme que l'entrée d'une épreuve se trouve\ndans les alentours.\n\nUne fois que vous aurez <color red<détecté >coloroff>son emplacement,\nle <color blue<Courage de Farore >coloroff>que vous avez appris sur l'île\naux chants vous guidera.")
/*< 42>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_006_007() {
/*< 37>*/ 	start()
/*< 38>*/ 	printf(/* textboxtype: 0, unk: 2, line: 16 */ "<0x10012:0x0000000b>Maître <heroname>, Fay au rapport. Je\nconfirme que l'éruption volcanique a cessé.\n\n\nVous pouvez désormais retourner dans le ciel.")
/*< 39>*/ 	entrypoint_006_04();
          }

          void entrypoint_006_008() {
/*< 45>*/ 	start()
/*< 47>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 3, 'next': 48, 'param3': 32}
/*< 48>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 99, 'next': 49, 'param3': 16}
/*< 49>*/ 	printf(/* textboxtype: 2, unk: 0, line: 15 */ "<0x10012:0x0000000b>Maître <heroname>, Fay au rapport. Je\nconfirme que l'entrée d'une épreuve se trouve\ndans les alentours.\n\nUne fois que vous aurez <color red<détecté >coloroff>son emplacement,\nle <color blue<Courage de Farore >coloroff>que vous avez appris sur l'île\naux chants vous guidera.")
/*< 52>*/ 	story_flags[121 /* us: 805A9AEA 0x40, jp: 805ACD6A 0x40 */] = true;
/*< 46>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*< 50>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 51, 'param3': 36}
/*< 51>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 15, 'next': -1, 'param3': 42}
          }

          void entrypoint_006_001() {
/*< 10>*/ 	start()
/*<  9>*/ 	printf(/* textboxtype: 2, unk: 0, line: 18 */ "<0x10012:0x00000002>Maître, vous avez remporté la chevauchée céleste,\npuis un ouragan a envoyé dame <color blue<Zelda >coloroff>sur terre.\n\n\nVous avez alors retiré l'<color yellow<épée divine >coloroff>au temple de la\nDéesse, puis une <color red<colonne de lumière>coloroff> est apparue\nlorsque vous avez placé la <color yellow<stèle>coloroff>.")
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
/*< 15>*/ 				printf(/* textboxtype: 0, unk: 0, line: 2 */ "Plantez votre épée au centre de la rosace pour accéder\nau monde de la dernière épreuve.")
/*< 19>*/ 				story_flags[99 /* us: 805A9AF0 0x01, jp: 805ACD70 0x01 */] = true;
          			  case 1:
/*< 13>*/ 				printf(/* textboxtype: 0, unk: 2, line: 1 */ "Plantez votre épée au centre de la rosace pour accéder\nau monde d'une nouvelle épreuve.")
/*< 18>*/ 				story_flags[98 /* us: 805A9AF1 0x80, jp: 805ACD71 0x80 */] = true;
          			}
          		  case 1:
/*< 11>*/ 			printf(/* textboxtype: 0, unk: 2, line: 1 */ "Plantez votre épée au centre de la rosace pour accéder\nau monde d'une nouvelle épreuve.")
/*< 17>*/ 			story_flags[97 /* us: 805A9AF1 0x40, jp: 805ACD71 0x40 */] = true;
          		}
          	  case 1:
/*<  1>*/ 		printf(/* textboxtype: 2, unk: 0, line: 0 */ "<0x10012:0x00000001>Maître, notre interprétation du Courage de Farore\na fait apparaître une rosace sur le sol.\n\n\nIl y a 90 % de chances qu'il s'agisse de l'entrée de\nl'épreuve, prophétisée par la statue de la Déesse\nde l'île aux chants.\n\nPlacez‐vous au centre de la rosace et plantez votre\népée dans le sol.")
/*< 16>*/ 		story_flags[93 /* us: 805A9AF1 0x04, jp: 805ACD71 0x04 */] = true;
          	}
          }

          void entrypoint_006_003() {
/*<  3>*/ 	start()
/*<  4>*/ 	printf(/* textboxtype: 0, unk: 0, line: 8 */ "")
/*<  5>*/ 	story_flags[358 /* us: 805A9B00 0x10, jp: 805ACD80 0x10 */] = true;
/*<  7>*/ 	story_flags[570 /* us: 805A9B18 0x02, jp: 805ACD98 0x02 */] = true;
/*<  8>*/ 	story_flags[571 /* us: 805A9B18 0x04, jp: 805ACD98 0x04 */] = true;
          }

