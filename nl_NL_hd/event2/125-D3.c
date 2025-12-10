          void entrypoint_125_04() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf(/* textboxtype: 0, unk: 2, line: 7 */ "Zoek de <color red<juwelen>coloroff> die achter\nieder beeld verborgen gaan.\nRaak ze van laag naar hoog\nom de deur te openen.")
          }

          void entrypoint_125_05() {
/*< 14>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10012:0x00000001>Meester, kijk hier eens.")
/*< 24>*/ 	set_camera(1, 0)
/*< 22>*/ 	printf(/* textboxtype: 2, unk: 2, line: 9 */ "Dat patroon op de grond is het <color red<teken van Farore>coloroff>.\n\n\n\nIk neem hier de heilige macht van de <color yellow white<Triforce>coloroff> waar.")
/*< 36>*/ 	set_camera(2, 0)
/*< 23>*/ 	printf(/* textboxtype: 0, unk: 7, line: 10 */ "Om bij het teken te komen raad ik u aan\nom door de deur voor u te gaan.")
/*< 54>*/ 	set_camera(-1, 0)
          }

          void entrypoint_125_06() {
/*< 15>*/ 	start()
/*< 25>*/ 	printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10012:0x00000001>Meester, kijk hier eens.")
/*< 26>*/ 	set_camera(3, 0)
/*< 19>*/ 	printf(/* textboxtype: 0, unk: 0, line: 14 */ "Dat patroon op de grond is het <color red<teken van Nayru>coloroff>.\n\n\n\nIk neem hier de heilige macht van de <color yellow white<Triforce>coloroff> waar.\nHet pad dat naar het teken leidt, is helaas afgesloten.")
/*< 37>*/ 	set_camera(5, 0)
/*< 38>*/ 	printf(/* textboxtype: 0, unk: 2, line: 16 */ "Dat object verderop lijkt op een\n<color yellow<chronobol>coloroff>.")
/*< 27>*/ 	set_camera(-1, 0)
/*< 28>*/ 	printf(/* textboxtype: 2, unk: 0, line: 15 */ "Mijn advies is om de <color yellow<chronobol >coloroff>die hier ligt, te\ngebruiken om het pad te openen dat naar het <color red<teken>coloroff>\nleidt.")
          }

          void entrypoint_125_07() {
/*< 16>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10012:0x00000001>Meester, kijk hier eens.")
/*< 29>*/ 	set_camera(4, 0)
/*< 20>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "Dat patroon op de grond is het <color red<teken van\nDin>coloroff>.\n\n\nIk neem hier de heilige macht van de\n<color yellow white<Triforce>coloroff> waar.")
/*< 31>*/ 	set_camera(-1, 0)
/*< 32>*/ 	printf(/* textboxtype: 2, unk: 0, line: 18 */ "Helaas is het onmogelijk om het teken\nvanaf uw huidige locatie te bereiken.\n\n\nMijn advies is om voor deze ruimte te\nzoeken naar een andere ingang.")
/*< 58>*/ 	scene_flags[20 'Skyloft: Sky Keep'][122 /* 0xE 04 */] = true;
          }

          void entrypoint_125_08() {
/*< 17>*/ 	start()
/*< 33>*/ 	switch (scene_flags[122 /* 0xE 04 */]) {
          	  case 0:
/*< 21>*/ 		printf(/* textboxtype: 0, unk: 2, line: 19 */ "<0x10012:0x0000000b>Meester, ik heb informatie voor u. U\nbevindt zich wederom in de ruimte waar\nu het <color red<teken van Din>coloroff> zag.")
          		flw_39:
/*< 39>*/ 		set_camera(6, 0)
/*< 34>*/ 		printf(/* textboxtype: 0, unk: 0, line: 20 */ "Als het u lukt de lavarivier te volgen, acht\nik het 60% zeker dat u een van de\nbronnen van heilige macht zult bereiken.")
/*< 41>*/ 		set_camera(-1, 0)
/*< 40>*/ 		printf(/* textboxtype: 0, unk: 2, line: 22 */ "Mijn advies is om te zoeken naar de oorsprong van\ndeze macht.")
          	  case 1:
/*< 35>*/ 		printf(/* textboxtype: 2, unk: 0, line: 21 */ "<0x10012:0x0000000b>Meester, ik heb informatie voor u. Ik neem ergens in\ndeze ruimte een bron van heilige macht waar.")
          		goto flw_39
          	}
          }

          void entrypoint_125_11() {
/*< 44>*/ 	start()
/*< 49>*/ 	set_camera(7, 0)
/*< 43>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10012:0x0000000b>Meester <heroname>, u heeft het teken bereikt.\nSteek nu uw zwaard in het teken.\n\n\nIk acht de kans groot dat dit u naar de <color yellow white<Triforce>coloroff> zal\nleiden.\n")
          }

          void entrypoint_125_12() {
/*< 46>*/ 	start()
/*< 50>*/ 	set_camera(8, 0)
/*< 45>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10012:0x0000000b>Meester <heroname>, u heeft het teken bereikt.\nSteek nu uw zwaard in het teken.\n\n\nIk acht de kans groot dat dit u naar de <color yellow white<Triforce>coloroff> zal\nleiden.\n")
          }

          void entrypoint_125_13() {
/*< 48>*/ 	start()
/*< 51>*/ 	set_camera(9, 0)
/*< 47>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10012:0x0000000b>Meester <heroname>, u heeft het teken bereikt.\nSteek nu uw zwaard in het teken.\n\n\nIk acht de kans groot dat dit u naar de <color yellow white<Triforce>coloroff> zal\nleiden.\n")
          }

          void entrypoint_125_01() {
          	start()
/*< 52>*/ 	set_camera(10, 0)
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 61, 'param3': 51}
/*< 61>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 53, 'param3': 16}
/*< 53>*/ 	wait_frames(15)
/*<  1>*/ 	printf(/* textboxtype: 0, unk: 2, line: 1 */ "<0x10012:0x0000000b>Meester, ik neem hier drie bronnen van heilige macht\nwaar. Deze macht is duidelijk afkomstig van de\n<color yellow white<<sound 4>Triforce>coloroff>.\n\nIk heb de locaties van deze drie bronnen vastgesteld\nen op uw kaart gemarkeerd met een △.")
/*< 42>*/ 	scene_flags[20 'Skyloft: Sky Keep'][29 /* 0x2 20 */] = true;
/*< 60>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_125_03() {
/*<  2>*/ 	start()
/*<  7>*/ 	switch (story_flags[685 /* us: 805A9B21 0x04, jp: 805ACDA1 0x04 */]) {
          	  case 0:
/*<  8>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 9, 'param3': 30}
/*<  9>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 34}
          	  case 1:
/*< 57>*/ 		{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 3, 'param3': 17}
/*<  3>*/ 		printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10012:0x0000000b>Meester, volgens mijn analyse werden de bevingen van\nzojuist veroorzaakt <color red<<sound 4>door verschuivingen van ruimtes\nbinnen het gebouw>coloroff>.")
/*<  4>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 30}
/*< 55>*/ 		switch (scene_flags[13 /* 0x0 20 */]) {
          		  case 0:
/*< 10>*/ 			printf(/* textboxtype: 0, unk: 2, line: 4 */ "Nu de indeling van het gebouw is\nveranderd, heeft u toegang tot de ruimte\nhiernaast.")
          			flw_5:
/*<  5>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 11, 'param3': 34}
/*< 11>*/ 			printf(/* textboxtype: 0, unk: 0, line: 5 */ "Mijn advies is om dit <color red<besturingspaneel>coloroff> te\ngebruiken om een pad te creëren dat naar\nde verschillende delen van de <color yellow white<Triforce>coloroff>\nleidt.")
/*<  6>*/ 			story_flags[685 /* us: 805A9B21 0x04, jp: 805ACDA1 0x04 */] = true;
          		  case 1:
/*< 56>*/ 			printf(/* textboxtype: 2, unk: 2, line: 6 */ "Door ruimtes van het gebouw te\nverschuiven kunt u toegang krijgen tot\nandere ruimtes.")
          			goto flw_5
          		}
          	}
          }

