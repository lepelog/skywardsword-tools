          void entrypoint_006_400() {
          	start()
/*<  4>*/ 	switch (story_flags[182 /* us: 805A9AE6 0x20, jp: 805ACD66 0x20 */]) {
          	  case 0:
/*<  5>*/ 		switch (story_flags[108 /* us: 805A9AE1 0x02, jp: 805ACD61 0x02 */]) {
          		  case 0:
/*< 17>*/ 			printf(/* textboxtype: 2, unk: 0, line: 0 */ "Your hearts have decreased quite\ndramatically. Replenish some of\nyour life at the earliest opportunity.<entrypoint_6_402>")
          		  case 1:
/*<  3>*/ 			printf(/* textboxtype: 0, unk: 0, line: 5 */ "Your hearts have decreased quite\ndramatically. Replenish some of\nyour life at the earliest opportunity.\n\nTo ensure that you are able to find\nmore <color yellow<hearts>coloroff> when you need them,\nthey are now available as a target\nfor your <color green<dowsing >coloroff>ability.<sound 4>")
/*<  6>*/ 			story_flags[108 /* us: 805A9AE1 0x02, jp: 805ACD61 0x02 */] = true;
/*<  7>*/ 			open_dowsing_wheel(11)
/*<  8>*/ 			printf(/* textboxtype: 2, unk: 0, line: 6 */ "Hold <icon 34> and choose <color yellow<hearts >coloroff>from\nthe circle of objects to set them as\nyour current target. <0x10011:0x08cd>This capability\nshould prove to be quite useful.")
/*< 12>*/ 			switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          			  case 0:
/*< 13>*/ 				printf(/* textboxtype: 0, unk: 2, line: 7 */ "You have elected to engage\n<color red<Hero Mode>coloroff>, so hearts and heart\nflowers will not appear.\n\nHowever, if you choose to carry the\n<color yellow<<item 100>>coloroff>, then <sound 4>hearts\nand heart flowers do <color red<have a chance\nof appearing>coloroff>.")
          			  case 1:
          			}
          		}
          	  case 1:
/*< 16>*/ 		printf(/* textboxtype: 2, unk: 0, line: 0 */ "Your hearts have decreased quite\ndramatically. Replenish some of\nyour life at the earliest opportunity.<entrypoint_6_402>")
          	}
          }

          void entrypoint_006_401() {
/*<  2>*/ 	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "Your hearts have decreased quite\ndramatically. Replenish some of\nyour life at the earliest opportunity.<entrypoint_6_402>")
          }

          void entrypoint_006_402() {
/*< 15>*/ 	start()
/*<  9>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*< 10>*/ 		switch (story_flags[841 /* us: 805A9B35 0x01, jp: 805ACDB5 0x01 */]) {
          		  case 0:
/*< 14>*/ 			switch (adventure_pouch_has(8 0x0008)) {
          			  case 0:
          			  case 1:
          				flw_11:
/*< 11>*/ 				printf(/* textboxtype: 0, unk: 2, line: 1 */ "You have elected to engage\n<color red<Hero Mode>coloroff>, so hearts and heart\nflowers will not appear. I recommend\nutilizing potions.")
          			}
          		  case 1:
          			goto flw_11
          		}
          	  case 1:
          	}
          }

