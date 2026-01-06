          void entrypoint_451_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "I have identified the item that the...\nhighly unusual man on Fun Fun Island\nsays was lost.\n\nWe can call the Scrap Shop robot to\ncome and retrieve it. Would you like \nme to call the robot?\n[1-]Yes![2]No, thanks.")
/*<  2>*/ 	switch (choice(2)) {
          	  case 0:
/*<  3>*/ 		printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10012:0x00000005>Master, I will send word to the robot\nusing telepathic transmission.")
          	  case 1:
/*<  4>*/ 		printf(/* textboxtype: 0, unk: 2, line: 1 */ "Yes, <0x10012:0x00000005>Master. If you change your mind\nand decide to retrieve it, please\nexamine it again.")
          	}
          }

          void entrypoint_451_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 2, unk: 0, line: 3 */ "<0x10012:0x00000064>Mistress Fi, zrrpt! You called?\n\n\n\nWhoa, zrrft... This place seems\nstrangely familiar, brrzrrt...\n\n\nBzzzt, so you want me to carry this\nthing?")
          }

          void entrypoint_451_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10012:0x00000064>I'll be waiting for you in the sky,\nso don't take too long, vrrt!")
          }

          void entrypoint_451_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10012:0x00000001>Master, I suggest that we head back to\nthe sky and return this party wheel to\nits owner as soon as possible.")
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
/*< 12>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10012:0x00000064>OK, OK, zrrft... You just sit tight\nthere and stay out of my way,\nMaster Shortpants, bzzzt!")
          }

          void entrypoint_451_06() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 0, unk: 2, line: 7 */ "I have identified the item that the\nunusual man on Fun Fun Island says\nwas lost.\n\nUnder usual circumstances, we could\ncall the Scrap Shop robot to come and\nretrieve it.\n\nHowever, the robot is currently\ncarrying out some duties at Eldin\nVolcano, so we cannot call him here.\n\nI recommend returning to Eldin\nVolcano and verifying the status\nof the robot.")
          }

