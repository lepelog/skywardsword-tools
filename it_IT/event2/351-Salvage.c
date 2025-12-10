          void entrypoint_351_10() {
/*< 14>*/ 	start()
/*< 44>*/ 	switch (story_flags[473 /* us: 805A9B0E 0x20, jp: 805ACD8E 0x20 */]) {
          	  case 0:
/*< 45>*/ 		printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00000004>Ma come, amico! Avevi detto che mi\navresti accompagnato fino in Cielo\ne poi a metà strada non se n'è fatto\npiù nulla!\nE io sono ancora qui!!! La prossima\nvolta vedi di portare a termine quello\nche cominci!")
          		flw_19:
/*< 19>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 20, 'param3': 35}
/*< 20>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 21, 'param3': 16}
/*< 21>*/ 		printf(/* textboxtype: 2, unk: 0, line: 10 */ "Il lavoro che coincide con le sue doti\nè quello presso la taverna delle zucche.\nChiamo il robot per condurlo in cielo?\n[1-]Sì[2]No")
/*< 22>*/ 		switch (choice(2)) {
          		  case 0:
/*< 24>*/ 			printf(/* textboxtype: 2, unk: 0, line: 2 */ "<0x10012:0x00000005>Bene, signore. Proverò a chiamare\nil robot tramite telepatia.")
          		  case 1:
/*< 23>*/ 			printf(/* textboxtype: 2, unk: 0, line: 1 */ "<0x10012:0x00000005>Bene, mio signore. Esaminatelo\nnuovamente se volete trasportarlo.")
          		}
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00000009>Oh! Ciao! Grazie ancora per l'altra\nvolta, amico!\n\n\nDa allora, ho cercato nuovi tesori,\nma con scarso successo.\n\n\nMi sono un po' stufato di lavorare,\nsoprattutto in questo posto\ncosì caldo!\n\n<0x10009:0x00000005>Dovrei ritirarmi e rilassarmi un po',\no trovare un passatempo...\n\n\nSai, uno che unisca l'utile al\ndilettevole!\n[1-]Potrei...[2-]Non farlo")
/*< 16>*/ 		switch (choice(2)) {
          		  case 0:
/*< 17>*/ 			printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00000004>Come dici, amico? Pensi ci sia un posto\nfatto apposta per me in cielo?!\nCosa?! Un lavoro che mi valorizzi?!\n\nSe è così, ci vado subito!<pause 10>\nAssolutamente!<pause 10>\nPortamici!")
          			goto flw_19
          		  case 1:
/*< 18>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000008>Beh...<pause 10> forse hai ragione, amico. Devo\ncontinuare a impegnarmi!")
          		}
          	}
          }

          void entrypoint_351_11() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 2, unk: 0, line: 12 */ "<0x10012:0x00000001>Signore, suggerisco di partire anche\nnoi alla volta del cielo e portare il\nMogma nel luogo di destinazione.")
/*< 27>*/ 	story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*< 28>*/ 	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = true;
/*< 48>*/ 	story_flags[473 /* us: 805A9B0E 0x20, jp: 805ACD8E 0x20 */] = true;
/*< 42>*/ 	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = false;
/*< 41>*/ 	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = false;
/*< 40>*/ 	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
/*< 39>*/ 	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = false;
/*< 43>*/ 	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = false;
/*< 38>*/ 	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = false;
/*< 47>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
          }

          void entrypoint_351_12() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10012:0x00000064>... ... ... Non farti ripetere le cose\nmille volte!!! Bzzz!")
          }

          void entrypoint_351_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "Confermo il ritrovamento di un\nminerale estremamente simile alla\nsfera di cristallo dell'indovino e\nutilizzabile allo stesso modo.\nVolete che chiami il robot\nper trasportarlo?\n[1-]Sì[2]No")
/*<  2>*/ 	switch (choice(2)) {
          	  case 0:
/*<  4>*/ 		printf(/* textboxtype: 2, unk: 0, line: 2 */ "<0x10012:0x00000005>Bene, signore. Proverò a chiamare\nil robot tramite telepatia.")
          	  case 1:
/*<  3>*/ 		printf(/* textboxtype: 2, unk: 0, line: 1 */ "<0x10012:0x00000005>Bene, mio signore. Esaminatelo\nnuovamente se volete trasportarlo.")
          	}
          }

          void entrypoint_351_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10012:0x00000064>Oh, Faih adorata! Bzzz! Eccomi di\nnuovo qui!\nVuoi che trasporti questo? Bzzz!")
          }

          void entrypoint_351_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ "Bene, lo porto su in cielo. Bzzz!\nNon fatemi aspettare troppo!")
          }

          void entrypoint_351_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 2, unk: 0, line: 5 */ "<0x10012:0x00000001>Signore, suggerisco di dirigerci anche\nnoi alla volta del Cielo e portare il\nminerale a destinazione.")
/*< 29>*/ 	story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*< 13>*/ 	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = true;
/*< 36>*/ 	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = false;
/*< 35>*/ 	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = false;
/*< 34>*/ 	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
/*< 33>*/ 	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = false;
/*< 32>*/ 	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = false;
/*< 37>*/ 	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = false;
/*< 46>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
          }

          void entrypoint_351_05() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10012:0x00000064>Signor Verdino, ti tieni sempre la\nparte piacevole del lavoro, tu! Bzzz!\nPfui!")
          }

