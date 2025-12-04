          void entrypoint_510_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "This is the <color red<Windmill Propeller >coloroff>you\nwere searching for.\n\n\nIt is now possible to retrieve this using\nthe robot whose services we have\nenlisted.\n\nWould you like me to call the robot?\n[1-]Yes.[2]No.")
/*<  2>*/ 	switch (choice(2)) {
          	  case 0:
/*<  4>*/ 		printf(/* textboxtype: 2, unk: 0, line: 2 */ "I will send word to the robot using\ntelepathic transmission, <0x10012:0x00000005>Master.")
          	  case 1:
/*<  3>*/ 		printf(/* textboxtype: 2, unk: 0, line: 1 */ "Yes, <0x10012:0x00000005>Master. If you change your mind\nand wish to retrieve it, please examine\nit again.")
          	}
          }

          void entrypoint_510_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10012:0x00000064>Mistress Fi! I hope you weren't waiting\nlong, bzzzt!\n\n\nSo, zrrrbt, you want me to carry this?!")
          }

          void entrypoint_510_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10012:0x00000064>I'll be waiting for you up in the sky,\nso don't take too long, vrrrt!")
          }

          void entrypoint_510_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 2, unk: 0, line: 5 */ "<0x10012:0x00000001>Master, I suggest that we also return to\nthe sky and collect the propeller as\nsoon as possible.")
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
/*< 12>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10012:0x00000064>Hey! Master Shortpants! You're in my\nway here, zrrpt! I said, get out of the\nway, vrrrrrt!")
          }

