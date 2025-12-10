          void entrypoint_351_10() {
/*< 14>*/ 	start()
/*< 44>*/ 	switch (story_flags[473 /* us: 805A9B0E 0x20, jp: 805ACD8E 0x20 */]) {
          	  case 0:
/*< 45>*/ 		printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00000004>Was? Du versprichst mir erst, mich\nhoch in die Wolken zu bringen, und\ndann entscheidest du dich einfach so\nganz plötzlich um?!?\nNa toll... Jetzt muss ich weiter diese\nelende Hitze ertragen...\n\n\nUnd du... Nimm mich beim nächsten\nMal gefälligst wirklich mit!")
          		flw_19:
/*< 19>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 20, 'param3': 35}
/*< 20>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 21, 'param3': 16}
/*< 21>*/ 		printf(/* textboxtype: 2, unk: 0, line: 10 */ "Die Beschäftigung, nach der sich\ndiese Person sehnt, stimmt mit dem\nStellengesuch aus der Kürbisbar zu\n100 % überein.\nSoll ich den Roboter rufen, um diese\nPerson in die Kürbisbar transportieren\nzu lassen?\n[1-]Ja[2]Nein")
/*< 22>*/ 		switch (choice(2)) {
          		  case 0:
/*< 24>*/ 			printf(/* textboxtype: 2, unk: 0, line: 2 */ "<0x10012:0x00000005>Sehr wohl, Gebieter. Ich werde den\nRoboter unverzüglich rufen.")
          		  case 1:
/*< 23>*/ 			printf(/* textboxtype: 2, unk: 0, line: 1 */ "<0x10012:0x00000005>Sehr wohl, Gebieter. Solltest du deine\nMeinung ändern, untersuche das eben\nausgewählte Ziel erneut.")
          		}
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00000009>Oh, so sieht man sich wieder! Vielen\nDank für die Hilfe neulich.\n\n\nIch hab mich seitdem wieder auf die\nSuche nach Schätzen gemacht, aber\ndie Hitze hier macht mir in meinem\nAlter richtig zu schaffen.\n<0x10009:0x00000005>Ich glaube, es ist an der Zeit für mich,\ndas Leben ein wenig ruhiger angehen\nzu lassen, weißt du?\n\nKennst du irgendeinen Ort, an dem ich\nmeinen Lebensabend richtig genießen\nund meinen Hobbys frönen könnte?\n[1-]Sicher![2-]Nein...")
/*< 16>*/ 		switch (choice(2)) {
          		  case 0:
/*< 17>*/ 			printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00000004>Was, du hast was für mich? Oben in\nden Wolken? Das klingt ja fantastisch!\n\n\nWie? Und ich kann mich auch noch\nnützlich machen, indem ich was tue,\ndas mir Spaß macht?\n\nNa, das klingt großartig!<pause 10> Ja, da will\nich hin!<pause 10> Na los, bring mich dorthin!")
          			goto flw_19
          		  case 1:
/*< 18>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000008>Oh...<pause 10> Dann muss ich wohl noch ein\nwenig hierbleiben...")
          		}
          	}
          }

          void entrypoint_351_11() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 2, unk: 0, line: 12 */ "<0x10012:0x00000001>Ich schlage vor, dass du zurück ins\nWolkenmeer reist und den Mogma\nan seinen Zielort bringst.")
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
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10012:0x00000064>Du hast ja gehört, was die verehrte\nPhai gesagt hat...")
          }

          void entrypoint_351_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "Du hast einen Kristall gefunden, der\ndem des Wahrsagers ähnelt. Er scheint\nsich als Kristallkugel verwenden zu\nlassen.\nSoll ich den Roboter rufen, um ihn\nabzutransportieren?\n[1-]Ja[2]Nein")
/*<  2>*/ 	switch (choice(2)) {
          	  case 0:
/*<  4>*/ 		printf(/* textboxtype: 2, unk: 0, line: 2 */ "<0x10012:0x00000005>Sehr wohl, Gebieter. Ich werde den\nRoboter unverzüglich rufen.")
          	  case 1:
/*<  3>*/ 		printf(/* textboxtype: 2, unk: 0, line: 1 */ "<0x10012:0x00000005>Sehr wohl, Gebieter. Solltest du deine\nMeinung ändern, untersuche das eben\nausgewählte Ziel erneut.")
          	}
          }

          void entrypoint_351_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10012:0x00000064>Verehrte Phai! Ihr habt mich gerufen?\n\n\n\nDas hier soll ich abtransportieren?")
          }

          void entrypoint_351_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ "Verstanden! Ich warte dann oben auf\neuch beide! Bis später!")
          }

          void entrypoint_351_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 2, unk: 0, line: 5 */ "Ich schlage vor, dass du zurück ins\nWolkenmeer reist und den Kristall\nzum Wahrsager bringst, <0x10012:0x00000001>Gebieter.")
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
/*< 12>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10012:0x00000064>Hey, du grüner Wicht! Du machst es dir\nmal wieder leicht, während ich hier\nalles schleppen muss. Pah!")
          }

