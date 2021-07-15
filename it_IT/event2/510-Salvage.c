          void entrypoint_510_01() {
          	start()
/*<  1>*/ 	printf("Questa sembra proprio l'<r<elica del\nmulino >>che stavamo cercando.\n\n\nÈ possibile farla trasportare da\nquel robot. Volete che lo chiami?\n[1]Sì[2-]Non ora")
/*<  2>*/ 	switch (choice(2)) {
          	  case 0:
/*<  4>*/ 		printf("\x0E\x01\x12\x04\x00\x05Bene, mio signore. Invio al robot le\nonde psichiche.<pling>")
          	  case 1:
/*<  3>*/ 		printf("\x0E\x01\x12\x04\x00\x05Bene, mio signore. Esaminate\nnuovamente l'oggetto se volete\ntrasportarlo.")
          	}
          }

          void entrypoint_510_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf("\x0E\x01\x12\x04\x00dOoh! Faih adorata! Bzzz!\nEccomi qui per te!\n\n\nOh, vuoi che trasporti questo, eh?!\nBzzz!")
          }

          void entrypoint_510_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	printf("\x0E\x01\x12\x04\x00dBene, vi aspetto nel cielo!\nBzzz! Venite presto!!!")
          }

          void entrypoint_510_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("\x0E\x01\x12\x04\x00\x01Mio signore, suggerisco di dirigerci\nanche noi alla volta del cielo e portare\nl'elica a destinazione.")
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
/*< 12>*/ 	printf("\x0E\x01\x12\x04\x00dEhi, signor Verdino, sei in mezzo ai\npiedi, spostati da lì!!! Bzzz!")
          }

