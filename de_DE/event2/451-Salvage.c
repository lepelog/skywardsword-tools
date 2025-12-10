          void entrypoint_451_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "Du hast das Objekt gefunden, das\nder Betreiber der Roulette-Insel\nverloren hat.\n\nEs ist möglich, den Roboter aus der\nWerkstatt zu rufen und es von ihm\nabtransportieren zu lassen.\nSoll ich den Roboter jetzt rufen?\n[1-]Ja[2]Nein")
/*<  2>*/ 	switch (choice(2)) {
          	  case 0:
/*<  3>*/ 		printf(/* textboxtype: 2, unk: 0, line: 2 */ "<0x10012:0x00000005>Sehr wohl, Gebieter. Ich werde den\nRoboter unverzüglich rufen.")
          	  case 1:
/*<  4>*/ 		printf(/* textboxtype: 2, unk: 0, line: 1 */ "<0x10012:0x00000005>Sehr wohl, Gebieter. Solltest du deine\nMeinung ändern, untersuche dieses\nObjekt ein weiteres Mal.")
          	}
          }

          void entrypoint_451_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10012:0x00000064>Verehrte Phai! Ihr habt mich gerufen?\n\n\n\nOh, dieser Ort... Es ist ein herrliches\nGefühl, wieder hier zu sein!\n\n\nDas hier soll ich abtransportieren?")
          }

          void entrypoint_451_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10012:0x00000064>Verstanden! Ich warte dann oben auf\neuch beide! Bis später!")
          }

          void entrypoint_451_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 2, unk: 0, line: 5 */ "Ich schlage vor, dass du zurück ins\nWolkenmeer reist und das Objekt\nzum Besitzer der Roulette-Insel\nbringst, <0x10012:0x00000001>Gebieter.")
/*< 14>*/ 	story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*< 13>*/ 	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = true;
/*< 19>*/ 	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = false;
/*< 18>*/ 	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = false;
/*< 17>*/ 	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
/*< 16>*/ 	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = false;
/*< 20>*/ 	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = false;
/*< 15>*/ 	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = false;
/*< 21>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 721, 'next': 22, 'param3': 52}
/*< 22>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 722, 'next': 24, 'param3': 52}
/*< 24>*/ 	story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = false;
/*< 23>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
          }

          void entrypoint_451_05() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10012:0x00000064>Schon gut, schon gut...\nImmer mit der Ruhe, grüner Wicht!")
          }

          void entrypoint_451_06() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 2, unk: 0, line: 7 */ "Du hast das Objekt entdeckt, welches\nder Besitzer der Roulette-Insel\nverloren hat.\n\nEs ist möglich, den Roboter zu rufen\nund den Gegenstand bergen zu lassen.\n\n\nDer Roboter ist jedoch derzeit mit dem\nTransportieren des Wasserbehälters\nzum Vulkan Eldin beschäftigt.\n\nErfülle zuerst deine Aufgabe am\nVulkan Eldin.")
          }

