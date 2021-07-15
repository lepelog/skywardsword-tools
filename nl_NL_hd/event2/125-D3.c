          void entrypoint_125_04() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf("Zoek de <r<juwelen>> die achter\nieder beeld verborgen gaan.\nRaak ze van laag naar hoog\nom de deur te openen.")
          }

          void entrypoint_125_05() {
/*< 14>*/ 	start()
/*< 18>*/ 	printf("\x0E\x01\x12\x04\x00\x01Meester, kijk hier eens.")
/*< 24>*/ 	set_camera(1, 0)
/*< 22>*/ 	printf("Dat patroon op de grond is het <r<teken van Farore>>.\n\n\n\nIk neem hier de heilige macht van de <y+<Triforce>> waar.")
/*< 36>*/ 	set_camera(2, 0)
/*< 23>*/ 	printf("Om bij het teken te komen raad ik u aan\nom door de deur voor u te gaan.")
/*< 54>*/ 	set_camera(-1, 0)
          }

          void entrypoint_125_06() {
/*< 15>*/ 	start()
/*< 25>*/ 	printf("\x0E\x01\x12\x04\x00\x01Meester, kijk hier eens.")
/*< 26>*/ 	set_camera(3, 0)
/*< 19>*/ 	printf("Dat patroon op de grond is het <r<teken van Nayru>>.\n\n\n\nIk neem hier de heilige macht van de <y+<Triforce>> waar.\nHet pad dat naar het teken leidt, is helaas afgesloten.")
/*< 37>*/ 	set_camera(5, 0)
/*< 38>*/ 	printf("Dat object verderop lijkt op een\n<y<chronobol>>.")
/*< 27>*/ 	set_camera(-1, 0)
/*< 28>*/ 	printf("Mijn advies is om de <y<chronobol >>die hier ligt, te\ngebruiken om het pad te openen dat naar het <r<teken>>\nleidt.")
          }

          void entrypoint_125_07() {
/*< 16>*/ 	start()
/*< 30>*/ 	printf("\x0E\x01\x12\x04\x00\x01Meester, kijk hier eens.")
/*< 29>*/ 	set_camera(4, 0)
/*< 20>*/ 	printf("Dat patroon op de grond is het <r<teken van\nDin>>.\n\n\nIk neem hier de heilige macht van de\n<y+<Triforce>> waar.")
/*< 31>*/ 	set_camera(-1, 0)
/*< 32>*/ 	printf("Helaas is het onmogelijk om het teken\nvanaf uw huidige locatie te bereiken.\n\n\nMijn advies is om voor deze ruimte te\nzoeken naar een andere ingang.")
/*< 58>*/ 	scene_flags[20 'Skyloft: Sky Keep'][122 /* 0xE 04 */] = true;
          }

          void entrypoint_125_08() {
/*< 17>*/ 	start()
/*< 33>*/ 	switch (scene_flags[122 /* 0xE 04 */]) {
          	  case 0:
/*< 21>*/ 		printf("\x0E\x01\x12\x04\x00\x0BMeester, ik heb informatie voor u. U\nbevindt zich wederom in de ruimte waar\nu het <r<teken van Din>> zag.")
          		flw_39:
/*< 39>*/ 		set_camera(6, 0)
/*< 34>*/ 		printf("Als het u lukt de lavarivier te volgen, acht\nik het 60% zeker dat u een van de\nbronnen van heilige macht zult bereiken.")
/*< 41>*/ 		set_camera(-1, 0)
/*< 40>*/ 		printf("Mijn advies is om te zoeken naar de oorsprong van\ndeze macht.")
          	  case 1:
/*< 35>*/ 		printf("\x0E\x01\x12\x04\x00\x0BMeester, ik heb informatie voor u. Ik neem ergens in\ndeze ruimte een bron van heilige macht waar.")
          		goto flw_39
          	}
          }

          void entrypoint_125_11() {
/*< 44>*/ 	start()
/*< 49>*/ 	set_camera(7, 0)
/*< 43>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMeester Link, u heeft het teken bereikt.\nSteek nu uw zwaard in het teken.\n\n\nIk acht de kans groot dat dit u naar de <y+<Triforce>> zal\nleiden.\n")
          }

          void entrypoint_125_12() {
/*< 46>*/ 	start()
/*< 50>*/ 	set_camera(8, 0)
/*< 45>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMeester Link, u heeft het teken bereikt.\nSteek nu uw zwaard in het teken.\n\n\nIk acht de kans groot dat dit u naar de <y+<Triforce>> zal\nleiden.\n")
          }

          void entrypoint_125_13() {
/*< 48>*/ 	start()
/*< 51>*/ 	set_camera(9, 0)
/*< 47>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMeester Link, u heeft het teken bereikt.\nSteek nu uw zwaard in het teken.\n\n\nIk acht de kans groot dat dit u naar de <y+<Triforce>> zal\nleiden.\n")
          }

          void entrypoint_125_01() {
          	start()
/*< 52>*/ 	set_camera(10, 0)
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 61, 'param3': 51}
/*< 61>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 53, 'param3': 16}
/*< 53>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 1, 'param3': 6}
/*<  1>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMeester, ik neem hier drie bronnen van heilige macht\nwaar. Deze macht is duidelijk afkomstig van de\n<y+<<pling>Triforce>>.\n\nIk heb de locaties van deze drie bronnen vastgesteld\nen op uw kaart gemarkeerd met een \x25B3.")
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
/*<  3>*/ 		printf("\x0E\x01\x12\x04\x00\x0BMeester, volgens mijn analyse werden de bevingen van\nzojuist veroorzaakt <r<<pling>door verschuivingen van ruimtes\nbinnen het gebouw>>.")
/*<  4>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 30}
/*< 55>*/ 		switch (scene_flags[13 /* 0x0 20 */]) {
          		  case 0:
/*< 10>*/ 			printf("Nu de indeling van het gebouw is\nveranderd, heeft u toegang tot de ruimte\nhiernaast.")
          			flw_5:
/*<  5>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 11, 'param3': 34}
/*< 11>*/ 			printf("Mijn advies is om dit <r<besturingspaneel>> te\ngebruiken om een pad te creëren dat naar\nde verschillende delen van de <y+<Triforce>>\nleidt.")
/*<  6>*/ 			story_flags[685 /* us: 805A9B21 0x04, jp: 805ACDA1 0x04 */] = true;
          		  case 1:
/*< 56>*/ 			printf("Door ruimtes van het gebouw te\nverschuiven kunt u toegang krijgen tot\nandere ruimtes.")
          			goto flw_5
          		}
          	}
          }

