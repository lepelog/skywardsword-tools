          void entrypoint_510_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "Dieses Objekt scheint der gesuchte\n<color red<Windrad-Propeller>coloroff> zu sein.\n\n\nEs ist möglich, den Roboter zu rufen,\num ihn abtransportieren zu lassen.\nSoll ich den Roboter nun rufen?\n[1-]Ja[2]Nein")
/*<  2>*/ 	switch (choice(2)) {
          	  case 0:
/*<  4>*/ 		printf(/* textboxtype: 2, unk: 0, line: 2 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Ich werde den\nRoboter wie gewünscht rufen.<sound 4>")
          	  case 1:
/*<  3>*/ 		printf(/* textboxtype: 2, unk: 0, line: 1 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Solltest du deine\nMeinung ändern, untersuche dieses\nObjekt ein weiteres Mal.")
          	}
          }

          void entrypoint_510_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10012:0x00000064>Verehrte Phai! Ihr habt mich gerufen?\n\n\n\nDas hier soll ich abtransportieren?")
          }

          void entrypoint_510_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10012:0x00000064>Verstanden! Ich warte dann oben auf\neuch beide! Bis später!")
          }

          void entrypoint_510_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 2, unk: 0, line: 5 */ "<0x10012:0x00000001>Ich schlage vor, dass du zurück ins\nWolkenmeer reist und den Propeller\nan seinen Platz bringst.")
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
/*< 12>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10012:0x00000064>Du stehst im Weg, grüner Wicht!\nMach gefälligst Platz!")
          }

