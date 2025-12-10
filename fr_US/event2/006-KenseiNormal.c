          void entrypoint_006_004() {
/*<  6>*/ 	start()
/*< 26>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 25>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*< 27>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 30>*/ 				printf(/* textboxtype: 2, unk: 0, line: 13 */ "Toutes mes félicitations, <0x10012:0x00000002>Maître.\nVous avez appris toutes les mélodies\ndu <color blue<Chant du héros>coloroff>.\n\nPour compléter ce chant, je vous\nconseille de retourner dans le ciel,\nlà où se trouve le grand esprit <color blue<Narisha>coloroff>.")
/*< 33>*/ 				story_flags[465 /* us: 805A9B0F 0x04, jp: 805ACD8F 0x04 */] = true;
          			  case 1:
/*< 29>*/ 				printf(/* textboxtype: 2, unk: 0, line: 12 */ "Toutes mes félicitations, <0x10012:0x00000002>Maître. Vous\navez appris la seconde mélodie du\nChant du héros. Vous trouverez la\ndernière dans le <color blue<désert de Lanelle>coloroff>.")
          			}
          		  case 1:
/*< 28>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 32>*/ 				printf(/* textboxtype: 2, unk: 0, line: 10 */ "Toutes mes félicitations, <0x10012:0x00000002>Maître.\nVous avez appris la seconde mélodie\ndu Chant du héros. Vous trouverez la\ndernière dans la <color blue<forêt de Firone>coloroff>.")
          			  case 1:
/*< 31>*/ 				printf(/* textboxtype: 2, unk: 0, line: 9 */ "Le chant que vous avez appris,\n<0x10012:0x00000001>Maître, est une des mélodies du\n<color blue<Chant du héros>coloroff>.\n\nJe vous conseille de partir à la\nrecherche des autres dragons afin\nd'apprendre les deux autres mélodies.")
          			}
          		}
          	  case 1:
/*< 34>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*< 41>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 43>*/ 				printf(/* textboxtype: 2, unk: 0, line: 11 */ "Toutes mes félicitations, <0x10012:0x00000002>Maître.\nVous avez appris la seconde mélodie\ndu Chant du héros. Vous trouverez la\ndernière au <color blue<volcan d'Ordinn>coloroff>.")
          				flw_40:
/*< 40>*/ 				story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = true;
          			  case 1:
/*< 35>*/ 				printf(/* textboxtype: 2, unk: 0, line: 9 */ "Le chant que vous avez appris,\n<0x10012:0x00000001>Maître, est une des mélodies du\n<color blue<Chant du héros>coloroff>.\n\nJe vous conseille de partir à la\nrecherche des autres dragons afin\nd'apprendre les deux autres mélodies.")
          				goto flw_40
          			}
          		  case 1:
/*< 36>*/ 			printf(/* textboxtype: 2, unk: 0, line: 9 */ "Le chant que vous avez appris,\n<0x10012:0x00000001>Maître, est une des mélodies du\n<color blue<Chant du héros>coloroff>.\n\nJe vous conseille de partir à la\nrecherche des autres dragons afin\nd'apprendre les deux autres mélodies.")
          			goto flw_40
          		}
          	}
          }

          void entrypoint_006_005() {
/*< 20>*/ 	start()
/*< 21>*/ 	printf(/* textboxtype: 2, unk: 0, line: 14 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\n\n\nVous avez obtenu la carte de\ncette zone. Appuyez sur (+) pour\nla consulter.<0x10011:0x03cd>\n\nVous pouvez y vérifier l'emplacement\ndes symboles (X),<pause 15> ainsi que l'état et\nl'emplacement des portes et des\ncoffres.\nCependant, comme cette zone est\nfermée, veuillez noter que <color red<l'utilisation\ndes balises est impossible>coloroff>.")
/*< 22>*/ 	story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          }

          void entrypoint_006_006() {
/*< 23>*/ 	start()
/*< 24>*/ 	printf(/* textboxtype: 2, unk: 0, line: 15 */ "<0x10012:0x0000000b>Maître <heroname>, veuillez\nprendre connaissance de ces\ninformations pertinentes :\n\nJe confirme que l'entrée d'une\népreuve se trouve dans les\nalentours.\n\nUne fois que vous aurez <color red<détecté>coloroff>\nson emplacement, le <color blue<Courage de\nFarore >coloroff>que vous avez appris sur\nl'île aux chants vous guidera.")
/*< 42>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_006_007() {
/*< 37>*/ 	start()
/*< 38>*/ 	printf(/* textboxtype: 2, unk: 0, line: 16 */ "<0x10012:0x0000000b>Maître <heroname>, veuillez\nprendre connaissance de ces\ninformations pertinentes :\n\nJe confirme que l'éruption volcanique\na cessé. Vous pouvez désormais\nretourner dans le ciel.")
/*< 39>*/ 	entrypoint_006_04();
          }

          void entrypoint_006_008() {
/*< 45>*/ 	start()
/*< 47>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 3, 'next': 48, 'param3': 32}
/*< 48>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 99, 'next': 49, 'param3': 16}
/*< 49>*/ 	printf(/* textboxtype: 2, unk: 0, line: 15 */ "<0x10012:0x0000000b>Maître <heroname>, veuillez\nprendre connaissance de ces\ninformations pertinentes :\n\nJe confirme que l'entrée d'une\népreuve se trouve dans les\nalentours.\n\nUne fois que vous aurez <color red<détecté>coloroff>\nson emplacement, le <color blue<Courage de\nFarore >coloroff>que vous avez appris sur\nl'île aux chants vous guidera.")
/*< 52>*/ 	story_flags[121 /* us: 805A9AEA 0x40, jp: 805ACD6A 0x40 */] = true;
/*< 46>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*< 50>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 51, 'param3': 36}
/*< 51>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 15, 'next': -1, 'param3': 42}
          }

          void entrypoint_006_001() {
/*< 10>*/ 	start()
/*<  9>*/ 	printf(/* textboxtype: 2, unk: 0, line: 18 */ "<0x10012:0x00000002>Maître, vous avez remporté\nla chevauchée céleste, puis un\nouragan a envoyé dame <color blue<Zelda\n>coloroff>sur terre.\nVous avez alors retiré l'<color yellow<épée divine\n>coloroff>au temple de la Déesse, puis une\n<color red<colonne de lumière>coloroff> est apparue\nlorsque vous avez placé la <color yellow<stèle>coloroff>.")
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
/*< 15>*/ 				printf(/* textboxtype: 2, unk: 0, line: 2 */ "Plantez votre épée au centre de la\nrosace pour accéder au monde de la\ndernière épreuve.")
/*< 19>*/ 				story_flags[99 /* us: 805A9AF0 0x01, jp: 805ACD70 0x01 */] = true;
          			  case 1:
/*< 13>*/ 				printf(/* textboxtype: 2, unk: 0, line: 1 */ "Plantez votre épée au centre de la\nrosace pour accéder au monde d'une\nnouvelle épreuve.")
/*< 18>*/ 				story_flags[98 /* us: 805A9AF1 0x80, jp: 805ACD71 0x80 */] = true;
          			}
          		  case 1:
/*< 11>*/ 			printf(/* textboxtype: 2, unk: 0, line: 1 */ "Plantez votre épée au centre de la\nrosace pour accéder au monde d'une\nnouvelle épreuve.")
/*< 17>*/ 			story_flags[97 /* us: 805A9AF1 0x40, jp: 805ACD71 0x40 */] = true;
          		}
          	  case 1:
/*<  1>*/ 		printf(/* textboxtype: 2, unk: 0, line: 0 */ "<0x10012:0x00000001>Maître, notre interprétation\ndu Courage de Farore a fait\napparaître une rosace sur le sol.\n\nIl y a 90 % de chances qu'il s'agisse\nde l'entrée de l'épreuve, prophétisée\npar la statue de la Déesse de l'île\naux chants.\nPlacez‐vous au centre de la rosace et\nplantez votre épée dans le sol.")
/*< 16>*/ 		story_flags[93 /* us: 805A9AF1 0x04, jp: 805ACD71 0x04 */] = true;
          	}
          }

          void entrypoint_006_003() {
/*<  3>*/ 	start()
/*<  4>*/ 	printf(/* textboxtype: 2, unk: 0, line: 8 */ "")
/*<  5>*/ 	story_flags[358 /* us: 805A9B00 0x10, jp: 805ACD80 0x10 */] = true;
/*<  7>*/ 	story_flags[570 /* us: 805A9B18 0x02, jp: 805ACD98 0x02 */] = true;
/*<  8>*/ 	story_flags[571 /* us: 805A9B18 0x04, jp: 805ACD98 0x04 */] = true;
          }

