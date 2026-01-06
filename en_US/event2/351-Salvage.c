          void entrypoint_351_10() {
/*< 14>*/ 	start()
/*< 44>*/ 	switch (story_flags[473 /* us: 805A9B0E 0x20, jp: 805ACD8E 0x20 */]) {
          	  case 0:
/*< 45>*/ 		printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00000004>Hey, what gives?! You said you'd take\nme to the sky, but then you backed out\nof our deal! Now I'm back here.\n\nIf you're going to make a promise\nlike that, you better follow through!")
          		flw_19:
/*< 19>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 20, 'param3': 35}
/*< 20>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 21, 'param3': 16}
/*< 21>*/ 		printf(/* textboxtype: 2, unk: 0, line: 10 */ "This individual's capabilities match\nperfectly to the types of duties\nexpected of an employee at the Lumpy\nPumpkin.\nDo you want to call the robot and\ntransport this individual?\n[1-]Yes.[2]No.")
/*< 22>*/ 		switch (choice(2)) {
          		  case 0:
/*< 24>*/ 			printf(/* textboxtype: 2, unk: 0, line: 2 */ "<0x10012:0x00000005>Master, I will send word to the robot\nusing telepathic transmission.")
          		  case 1:
/*< 23>*/ 			printf(/* textboxtype: 2, unk: 0, line: 1 */ "Yes, <0x10012:0x00000005>Master. If you change your mind\nand decide to retrieve it, please\nexamine it again.")
          		}
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00000009>So we meet again, eh? I gotta thank ya\nfor your help last time!\n\n\nSee, I've been searchin' for new\ntreasure spots, but I can't find a\nsingle bauble or bit of treasure.\n\nMaybe I'm just gettin' woozy from\nworking so long in this heat.\n\n\n<0x10009:0x00000005>Sometimes I wish I could find a job that\nreally played to my strengths, yeah...\nsomethin' in a cool climate. Then I'd\nbe set!\n[1-]I know a place![2-]Keep dreaming.")
/*< 16>*/ 		switch (choice(2)) {
          		  case 0:
/*< 17>*/ 			printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00000004>So ya know a place with work that I'd\nbe good at?\n\n\nAnd it's in the sky?!\n...\n...\nI LOVE THE SKY!\nWhere do I sign up?<pause 10> I'm tellin' ya,\nI'm in! Let's do this thing!<pause 10>")
          			goto flw_19
          		  case 1:
/*< 18>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000008>Right...<pause 10> Well, yeah, I guess I could try\nto stick it out for a little while longer...")
          		}
          	}
          }

          void entrypoint_351_11() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 2, unk: 0, line: 12 */ "<0x10012:0x00000001>Master, I suggest that we also return\nto the sky and accompany the Mogma\nto his destination quickly.")
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
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10012:0x00000064>You don't have to tell me twice, zrrbt!")
          }

          void entrypoint_351_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "I have located a substance that closely\nresembles the material used in the\nfortune-teller's crystal ball... It should\nmake a suitable replacement.\nShall I call the robot to collect it?\n[1-]Yes.[2]Not now.")
/*<  2>*/ 	switch (choice(2)) {
          	  case 0:
/*<  4>*/ 		printf(/* textboxtype: 2, unk: 0, line: 2 */ "<0x10012:0x00000005>Master, I will send word to the robot\nusing telepathic transmission.")
          	  case 1:
/*<  3>*/ 		printf(/* textboxtype: 2, unk: 0, line: 1 */ "Yes, <0x10012:0x00000005>Master. If you change your mind\nand decide to retrieve it, please\nexamine it again.")
          	}
          }

          void entrypoint_351_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10012:0x00000064>Mistress Fi! I'm heeeeereeeee, zrrpt!\n\n\n\nOh. You want me to carry this old\nthing, bzzt?")
          }

          void entrypoint_351_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10012:0x00000064>I'll be waiting for you in the sky,\nso don't take too long, vrrt!!")
          }

          void entrypoint_351_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 2, unk: 0, line: 5 */ "<0x10012:0x00000001>Master, I suggest we also return to\nthe sky and collect the crystal ball as\nsoon as possible.")
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
/*< 12>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10012:0x00000064>Hey, Master Shortpants! How come\nyou always get the easy jobs, zrrpt?")
          }

