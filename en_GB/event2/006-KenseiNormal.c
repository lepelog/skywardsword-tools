          void entrypoint_006_004() {
/*<  6>*/ 	start()
/*< 26>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 25>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*< 27>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 30>*/ 				printf(/* textboxtype: 2, unk: 0, line: 13 */ "Well done, <0x10012:0x00000002>Master. You've successfully\ncollected three parts of the Song of the\nHero.\n\nI recommend you return to the sky\nand meet with the great sky spirit,\n<color blue<Levias>coloroff>, to complete the song.")
/*< 33>*/ 				story_flags[465 /* us: 805A9B0F 0x04, jp: 805ACD8F 0x04 */] = true;
          			  case 1:
/*< 29>*/ 				printf(/* textboxtype: 2, unk: 0, line: 12 */ "Well done, <0x10012:0x00000002>Master. You have acquired\nthe second part of the Song of the\nHero. The final part can be found\nsomewhere within <color blue<Lanayru Desert>coloroff>.")
          			}
          		  case 1:
/*< 28>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 32>*/ 				printf(/* textboxtype: 2, unk: 0, line: 10 */ "Well done, <0x10012:0x00000002>Master. You have acquired\nthe second part of the Song of the\nHero. The final part can be found\nsomewhere within <color blue<Faron Woods>coloroff>.")
          			  case 1:
/*< 31>*/ 				printf(/* textboxtype: 2, unk: 0, line: 9 */ "<0x10012:0x00000001>Master, the melody you just acquired is\none part of the <color blue<Song of the Hero>coloroff>.\n\n\nI recommend you seek out the other\ntwo dragons in their respective areas\nto learn the other two parts of the\nsong.")
          			}
          		}
          	  case 1:
/*< 34>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*< 41>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 43>*/ 				printf(/* textboxtype: 2, unk: 0, line: 11 */ "Well done, <0x10012:0x00000002>Master. You have acquired\nthe second part of the Song of the\nHero. The final part can be found\nsomewhere within <color blue<Eldin Volcano>coloroff>.")
          				flw_40:
/*< 40>*/ 				story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = true;
          			  case 1:
/*< 35>*/ 				printf(/* textboxtype: 2, unk: 0, line: 9 */ "<0x10012:0x00000001>Master, the melody you just acquired is\none part of the <color blue<Song of the Hero>coloroff>.\n\n\nI recommend you seek out the other\ntwo dragons in their respective areas\nto learn the other two parts of the\nsong.")
          				goto flw_40
          			}
          		  case 1:
/*< 36>*/ 			printf(/* textboxtype: 2, unk: 0, line: 9 */ "<0x10012:0x00000001>Master, the melody you just acquired is\none part of the <color blue<Song of the Hero>coloroff>.\n\n\nI recommend you seek out the other\ntwo dragons in their respective areas\nto learn the other two parts of the\nsong.")
          			goto flw_40
          		}
          	}
          }

          void entrypoint_006_005() {
/*< 20>*/ 	start()
/*< 21>*/ 	printf(/* textboxtype: 2, unk: 0, line: 14 */ "<0x10012:0x0000000b>Master, I have information for you.\nYou have obtained a map of this area.\nYou can view it by pressing (+).<0x10011:0x03cd>\n\nThe position of doors and their locks,<pause 15>\nas well as the position and status of\ntreasure chests,<pause 15> can be confirmed on\nthe map with marks such as (X).\nHowever, be aware that you will be\n<color red<unable to use beacons>coloroff> here due to\nthe indoor nature of this environment.")
/*< 22>*/ 	story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          }

          void entrypoint_006_006() {
/*< 23>*/ 	start()
/*< 24>*/ 	printf(/* textboxtype: 2, unk: 0, line: 15 */ "A report, <0x10012:0x0000000b>Master <heroname>.\nI have detected the aura of a Trial Gate\nnearby.\n\nIf you can pinpoint the origin of this\naura using dowsing, I conjecture the\nsong you learned at the Isle of Songs,\nFarore's Courage, will reveal the gate.")
/*< 42>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_006_007() {
/*< 37>*/ 	start()
/*< 38>*/ 	printf(/* textboxtype: 2, unk: 0, line: 16 */ "A report, <0x10012:0x0000000b>Master. The volcanic activity\nthat impeded your return to the sky\nearlier has ceased.\n\nIt is now possible to return to the sky\nagain.")
/*< 39>*/ 	entrypoint_006_04();
          }

          void entrypoint_006_008() {
/*< 45>*/ 	start()
/*< 47>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 3, 'next': 48, 'param3': 32}
/*< 48>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 99, 'next': 49, 'param3': 16}
/*< 49>*/ 	printf(/* textboxtype: 2, unk: 0, line: 15 */ "A report, <0x10012:0x0000000b>Master <heroname>.\nI have detected the aura of a Trial Gate\nnearby.\n\nIf you can pinpoint the origin of this\naura using dowsing, I conjecture the\nsong you learned at the Isle of Songs,\nFarore's Courage, will reveal the gate.")
/*< 52>*/ 	story_flags[121 /* us: 805A9AEA 0x40, jp: 805ACD6A 0x40 */] = true;
/*< 46>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*< 50>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 51, 'param3': 36}
/*< 51>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 15, 'next': -1, 'param3': 42}
          }

          void entrypoint_006_001() {
/*< 10>*/ 	start()
/*<  9>*/ 	printf(/* textboxtype: 2, unk: 0, line: 18 */ "After winning the race in the Wing\nCeremony, you went on a flight with\n<color blue<Zelda>coloroff> where you encountered a storm\nthat caused Zelda to fall to the surface.\nShortly thereafter, you entered an\nold chamber and claimed the\nGoddess Blade in which I, <color blue<Fi>coloroff>, reside.\n\nYou then used the power of an ancient\n<color yellow<tablet >coloroff>to open a <color red<column of light\n>coloroff>leading to the land below.")
          }

          void entrypoint_006_002() {
          	start()
/*< 44>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*<  2>*/ 	switch (story_flags[93 /* us: 805A9AF1 0x04, jp: 805ACD71 0x04 */]) {
          	  case 0:
/*< 12>*/ 		switch (story_flags[97 /* us: 805A9AF1 0x40, jp: 805ACD71 0x40 */]) {
          		  case 0:
/*< 14>*/ 			switch (story_flags[98 /* us: 805A9AF1 0x80, jp: 805ACD71 0x80 */]) {
          			  case 0:
/*< 15>*/ 				printf(/* textboxtype: 2, unk: 0, line: 2 */ "Thrust your sword into the center of\nthe mark and open the way to the final\nSilent Realm.")
/*< 19>*/ 				story_flags[99 /* us: 805A9AF0 0x01, jp: 805ACD70 0x01 */] = true;
          			  case 1:
/*< 13>*/ 				printf(/* textboxtype: 2, unk: 0, line: 1 */ "Thrust your sword into the center of\nthe mark and open the way to a new\nSilent Realm.")
/*< 18>*/ 				story_flags[98 /* us: 805A9AF1 0x80, jp: 805ACD71 0x80 */] = true;
          			}
          		  case 1:
/*< 11>*/ 			printf(/* textboxtype: 2, unk: 0, line: 1 */ "Thrust your sword into the center of\nthe mark and open the way to a new\nSilent Realm.")
/*< 17>*/ 			story_flags[97 /* us: 805A9AF1 0x40, jp: 805ACD71 0x40 */] = true;
          		}
          	  case 1:
/*<  1>*/ 		printf(/* textboxtype: 2, unk: 0, line: 0 */ "<0x10012:0x00000001>Something here is reacting to our\nperformance of Farore's Courage.\nI have confirmed the appearance of\na strange mark on the ground.\nI calculate a 90% possibility that this\nmark is a Trial Gate, as mentioned\nby the goddess statue we heard\nfrom on the Isle of Songs.\nThrust your sword into the center\nof the mark on the ground before you.")
/*< 16>*/ 		story_flags[93 /* us: 805A9AF1 0x04, jp: 805ACD71 0x04 */] = true;
          	}
          }

          void entrypoint_006_003() {
/*<  3>*/ 	start()
/*<  4>*/ 	printf(/* textboxtype: 2, unk: 0, line: 8 */ "")
/*<  5>*/ 	story_flags[358 /* us: 805A9B00 0x10, jp: 805ACD80 0x10 */] = true;
/*<  7>*/ 	story_flags[570 /* us: 805A9B18 0x02, jp: 805ACD98 0x02 */] = true;
/*<  8>*/ 	story_flags[571 /* us: 805A9B18 0x04, jp: 805ACD98 0x04 */] = true;
          }

