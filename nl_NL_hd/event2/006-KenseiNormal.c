          void entrypoint_006_004() {
/*<  6>*/ 	start()
/*< 26>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 25>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*< 27>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 30>*/ 				printf(/* textboxtype: 0, unk: 2, line: 13 */ "Goed werk, <0x10012:0x00000002>meester. U heeft van alle drie\nde draken een deel van het Heldenlied\ngeleerd.\n\nMijn advies is om terug te gaan naar\n<color blue<Levias>coloroff>, de wolkenhoeder, om het lied\ncompleet te maken.")
/*< 33>*/ 				story_flags[465 /* us: 805A9B0F 0x04, jp: 805ACD8F 0x04 */] = true;
          			  case 1:
/*< 29>*/ 				printf(/* textboxtype: 2, unk: 0, line: 12 */ "Goed werk, <0x10012:0x00000002>meester. U kent nu het tweede\ndeel van het Heldenlied. Het laatste deel\nbevindt zich ergens in de <color blue<Lanayru-\nwoestijn>coloroff>.")
          			}
          		  case 1:
/*< 28>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 32>*/ 				printf(/* textboxtype: 0, unk: 2, line: 10 */ "Goed werk, <0x10012:0x00000002>meester. U kent nu het tweede\ndeel van het Heldenlied. Het laatste deel\nbevindt zich ergens in het <color blue<Faron-woud>coloroff>.")
          			  case 1:
/*< 31>*/ 				printf(/* textboxtype: 2, unk: 0, line: 9 */ "<0x10012:0x00000001>Meester, de melodie die u zojuist heeft\ngeleerd, maakt onderdeel uit van het\n<color blue<Heldenlied>coloroff>.\n\nMijn advies is om naar de andere twee\nregio's te reizen en daar van de draken\nde overige delen te leren.")
          			}
          		}
          	  case 1:
/*< 34>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*< 41>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 43>*/ 				printf(/* textboxtype: 0, unk: 0, line: 11 */ "Goed werk, <0x10012:0x00000002>meester. U kent nu het tweede\ndeel van het Heldenlied. Het laatste deel\nbevindt zich ergens op de <color blue<Eldin-vulkaan>coloroff>.")
          				flw_40:
/*< 40>*/ 				story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = true;
          			  case 1:
/*< 35>*/ 				printf(/* textboxtype: 2, unk: 0, line: 9 */ "<0x10012:0x00000001>Meester, de melodie die u zojuist heeft\ngeleerd, maakt onderdeel uit van het\n<color blue<Heldenlied>coloroff>.\n\nMijn advies is om naar de andere twee\nregio's te reizen en daar van de draken\nde overige delen te leren.")
          				goto flw_40
          			}
          		  case 1:
/*< 36>*/ 			printf(/* textboxtype: 2, unk: 0, line: 9 */ "<0x10012:0x00000001>Meester, de melodie die u zojuist heeft\ngeleerd, maakt onderdeel uit van het\n<color blue<Heldenlied>coloroff>.\n\nMijn advies is om naar de andere twee\nregio's te reizen en daar van de draken\nde overige delen te leren.")
          			goto flw_40
          		}
          	}
          }

          void entrypoint_006_005() {
/*< 20>*/ 	start()
/*< 21>*/ 	printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10012:0x0000000b>Meester ik heb informatie voor u. U\nbeschikt nu over een kaart van dit gebied.\nU kunt deze kaart bekijken met (-).<0x10011:0x02cd>\n\nOp de kaart ziet u de posities van deuren\nen sloten,<pause 15> maar ook kisten en of die open\nof dicht zijn.<pause 15> Ze zijn te herkennen aan\ntekens op je kaart zoals (X).\nWeest u zich er echter van bewust dat u\nhier <color red<geen bakens kunt plaatsen>coloroff>, omdat we\nons binnen bevinden.")
/*< 22>*/ 	story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          }

          void entrypoint_006_006() {
/*< 23>*/ 	start()
/*< 24>*/ 	printf(/* textboxtype: 2, unk: 0, line: 15 */ "Attentie, <0x10012:0x0000000b>meester <heroname>.\nIk neem de aura waar van een\nbeproevingspoort.\n\nAls u via detectie de oorsprong van deze\naura kunt vaststellen, kunt u de poort\nwellicht met Farores Moed onthullen.")
/*< 42>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_006_007() {
/*< 37>*/ 	start()
/*< 38>*/ 	printf(/* textboxtype: 0, unk: 2, line: 16 */ "Attentie, <0x10012:0x0000000b>meester. De vulkanische\nactiviteit die uw terugkeer naar de lucht\nverhinderde, is nu opgehouden.\n\nHet is daardoor weer mogelijk om terug\nte keren naar de lucht.")
/*< 39>*/ 	entrypoint_006_04();
          }

          void entrypoint_006_008() {
/*< 45>*/ 	start()
/*< 47>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 3, 'next': 48, 'param3': 32}
/*< 48>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 99, 'next': 49, 'param3': 16}
/*< 49>*/ 	printf(/* textboxtype: 2, unk: 0, line: 15 */ "Attentie, <0x10012:0x0000000b>meester <heroname>.\nIk neem de aura waar van een\nbeproevingspoort.\n\nAls u via detectie de oorsprong van deze\naura kunt vaststellen, kunt u de poort\nwellicht met Farores Moed onthullen.")
/*< 52>*/ 	story_flags[121 /* us: 805A9AEA 0x40, jp: 805ACD6A 0x40 */] = true;
/*< 46>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*< 50>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 51, 'param3': 36}
/*< 51>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 15, 'next': -1, 'param3': 42}
          }

          void entrypoint_006_001() {
/*< 10>*/ 	start()
/*<  9>*/ 	printf(/* textboxtype: 2, unk: 0, line: 18 */ "Na uw overwinning bij de race van de\nVleugelceremonie heeft u met <color blue<Zelda>coloroff> een\nvlucht gemaakt. Door een storm is\nZelda richting het oppervlak gevallen.\nKort daarna bent u een oude ruimte\nbinnengegaan, alwaar u het godinnen-\nzwaard bemachtigd hebt. In dat zwaard\ntrof u mij aan, <color blue<Fi>coloroff>.\nMet de kracht van een oud <color yellow<fragment>coloroff>\nheeft u tot slot een <color red<lichtzuil >coloroff>laten\nverschijnen, die leidt naar het land\nin de diepte.")
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
/*< 15>*/ 				printf(/* textboxtype: 0, unk: 0, line: 2 */ "Steek uw zwaard in het midden van het\npatroon om toegang te krijgen tot het\nRijk der Stilte.")
/*< 19>*/ 				story_flags[99 /* us: 805A9AF0 0x01, jp: 805ACD70 0x01 */] = true;
          			  case 1:
/*< 13>*/ 				printf(/* textboxtype: 0, unk: 2, line: 1 */ "Steek uw zwaard in het midden van het\npatroon om toegang te krijgen tot het\nRijk der Stilte.")
/*< 18>*/ 				story_flags[98 /* us: 805A9AF1 0x80, jp: 805ACD71 0x80 */] = true;
          			}
          		  case 1:
/*< 11>*/ 			printf(/* textboxtype: 0, unk: 2, line: 1 */ "Steek uw zwaard in het midden van het\npatroon om toegang te krijgen tot het\nRijk der Stilte.")
/*< 17>*/ 			story_flags[97 /* us: 805A9AF1 0x40, jp: 805ACD71 0x40 */] = true;
          		}
          	  case 1:
/*<  1>*/ 		printf(/* textboxtype: 2, unk: 0, line: 0 */ "<0x10012:0x00000001>Hier reageert iets op de klanken van\nFarores Moed. Ik neem vreemde patronen\nwaar op de grond.\n\nIk acht het voor 90% zeker dat hier de\nbeproevingspoort is waar het godinnen-\nbeeld op het Eiland der Liederen over\nvertelde.\nU dient uw zwaard in het midden van het\npatroon te steken.")
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

