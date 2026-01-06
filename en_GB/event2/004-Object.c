          void entrypoint_004_106() {
/*< 29>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0, line: 16 */ "If you can dig up all the Rupees in\nMr. Tubert's <color blue<Thrill Digger>coloroff>, you'll\nreceive a rare treasure.")
          }

          void entrypoint_004_107() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 56>*/ 		printf(/* textboxtype: 1, unk: 1, line: 17 */ "Deep underground, below this volcano,\nyou'll find treasure-loving <color blue<Mogmas>coloroff>.\n\n\nThese days, most of them are content\nwith staying down in their lair, where\nthey do nothing but relax all day.")
          	  case 1:
          		flw_59:
/*< 59>*/ 		printf(/* textboxtype: 1, unk: 1, line: 19 */ "A <color red<dragon>coloroff> is said to live at the <color red<peak >coloroff>of\nthis volcano. You're nowhere near the\npeak, though!")
/*< 60>*/ 		printf(/* textboxtype: 1, unk: 1, line: 18 */ "Do you want to hear that again?\n[1-]Yes.[2]No.")
/*< 62>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_59
          		  case 1:
/*< 61>*/ 			printf(/* textboxtype: 1, unk: 1, line: 20 */ "Rumor has it you're some kind of\ngenius that remembers things perfectly\nthe first time you hear them...")
          		}
          	}
          }

          void entrypoint_004_014() {
/*<  9>*/ 	start()
/*< 12>*/ 	switch (is_adventure_pouch_full()) {
          	  case 0:
/*< 13>*/ 		switch (is_item_check_full()) {
          		  case 0:
/*< 11>*/ 			printf(/* textboxtype: 5, unk: 1, line: 9 */ "Your pouch is full, but so is your space at\nthe <color red<Item Check>coloroff>. The item has been put\nback in a treasure chest.")
          		  case 1:
/*< 10>*/ 			printf(/* textboxtype: 5, unk: 1, line: 8 */ "Your pouch is full, so the item was sent to\nthe <color red<Item Check>coloroff>!")
          		}
          	  case 1:
          	}
          }

          void entrypoint_004_108() {
/*< 31>*/ 	start()
/*< 51>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 30>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "I hear the <color red<dragon>coloroff> that lives at the\ntop of the volcano is awfully chatty.\n\n\nSo chatty, they say, that he's even\nwilling to talk about matters outside\nhis own realm!")
          	  case 1:
          		flw_52:
/*< 52>*/ 		printf(/* textboxtype: 1, unk: 0, line: 22 */ "The word going around is that a <color red<dragon>coloroff>\nwrapped in flames lives atop this\nvolcano.\n\nThe thing is, it isn't so easy to visit.\nHe's made his lair <color red<somewhere so hot\n>coloroff>that normal folks can't bother him.")
/*< 53>*/ 		printf(/* textboxtype: 1, unk: 1, line: 18 */ "Do you want to hear that again?\n[1-]Yes.[2]No.")
/*< 55>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_52
          		  case 1:
/*< 54>*/ 			printf(/* textboxtype: 1, unk: 1, line: 20 */ "Rumor has it you're some kind of\ngenius that remembers things perfectly\nthe first time you hear them...")
          		}
          	}
          }

          void entrypoint_004_015() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf(/* textboxtype: 1, unk: 2, line: 5 */ "Hey! <0x30001:0x><heroname>! You're not\nthinking of running away, are you?\n\n\nHah! Surely you jest! A real man\nalways finishes what he starts!")
          }

          void entrypoint_004_109() {
/*< 33>*/ 	start()
/*< 32>*/ 	printf(/* textboxtype: 1, unk: 0, line: 23 */ "Word is you can earn a <color red<Piece of Heart>coloroff>\nif you set a great time on the <color blue<Rickety\nCoaster>coloroff>.")
          }

          void entrypoint_004_016() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 9, unk: 1, line: 34 */ "<0x1000F:0x>How long do you want to sleep?\n[1-]Until morning.[2-]Until night.[3]Don't sleep.")
/*< 50>*/ 	switch (choice(3)) {
          	  case 0:
          	  case 1:
          	  case 2:
          	}
          }

          void entrypoint_004_110() {
/*< 35>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "They say somewhere in this vast desert,\nthere's a <color red<dragon>coloroff> who loves putting the\nabilities of those who visit him to some\nkind of test.\nIf you can master the challenges he\nthrows at you, you'll be rewarded with\na <color red<shield stronger than any other>coloroff>.")
          }

          void entrypoint_004_017() {
/*< 65>*/ 	start()
/*< 66>*/ 	printf(/* textboxtype: 2, unk: 1, line: 35 */ "Descend into this area?\n[1-]Yes.[2]No.")
/*< 67>*/ 	switch (choice(2)) {
          	  case 0:
          	  case 1:
          	}
          }

          void entrypoint_004_111() {
/*< 37>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 1, unk: 0, line: 25 */ "It's been said that the best way to snag\na rare insect is to approach it slowly\nand use a <color yellow<Big Bug Net>coloroff>.")
          }

          void entrypoint_004_018() {
/*< 68>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 2, unk: 1, line: 36 */ "A report, <0x10012:0x0000000b>Master.\n\n\n\nAn <color red<unusual phenomenon>coloroff> is taking place\nin Faron Woods, making it impossible\nto descend directly into them at\nthe moment.")
          }

          void entrypoint_004_001() {
          	start()
/*<  2>*/ 	printf(/* textboxtype: 9, unk: 0, line: 0 */ "<0x1000F:0x>The door is locked tight and\nwill not open.")
          }

          void entrypoint_004_112() {
/*< 39>*/ 	start()
/*< 24>*/ 	printf(/* textboxtype: 1, unk: 0, line: 14 */ "I've heard some of the <color blue<Goddess Cubes\n>coloroff>unlock all sorts of treasure when they\nfly up into the sky. Some even hold\na <color red<Piece of Heart>coloroff>.")
          }

          void entrypoint_004_019() {
/*< 70>*/ 	start()
/*< 71>*/ 	switch (story_flags[843 /* us: 805A9B35 0x04, jp: 805ACDB5 0x04 */]) {
          	  case 0:
/*< 72>*/ 		printf(/* textboxtype: 2, unk: 1, line: 38 */ "Point to your preferred descent area\nwith (Hand), and confirm your destination\nby pressing (A).")
          	  case 1:
/*< 73>*/ 		printf(/* textboxtype: 2, unk: 1, line: 37 */ "A report, <0x10012:0x0000000b>Master.\n\n\n\nIt is possible to descend to a specific\nbird statue on <sound 4>the surface after you\nhave already visited it and I have\nmemorized its location.\nTo do this, point to the area you want\nto descend to with (Hand) and press (A)\nto confirm your destination.")
/*< 74>*/ 		story_flags[843 /* us: 805A9B35 0x04, jp: 805ACDB5 0x04 */] = true;
          	}
          }

          void entrypoint_004_002() {
/*<  1>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 9, unk: 0, line: 2 */ "<0x1000F:0x>The sign is broken. It's not\npossible to read it.")
          }

          void entrypoint_004_113() {
/*< 41>*/ 	start()
/*< 40>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "Apparently, if you draw a symbol of\nmoney on certain walls, you can make\nan easy fortune.")
          }

          void entrypoint_004_003() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 9, unk: 0, line: 3 */ "<0x1000F:0x>You can't read the sign from\nthis angle.")
          }

          void entrypoint_004_114() {
/*< 43>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "<color yellow<<item 36> >coloroff>cause something to\nhappen when they are thrown on bugs\nor monsters. They can be collected\nfrom sparkly mushrooms.")
          }

          void entrypoint_004_115() {
/*< 45>*/ 	start()
/*< 44>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "Oddly enough, it seems that drawing\na circle on certain strange walls will\nproduce something round.")
          }

          void entrypoint_004_004() {
/*< 46>*/ 	start()
/*< 47>*/ 	printf(/* textboxtype: 9, unk: 0, line: 1 */ "<0x1000F:0x>The door is sealed shut.")
          }

          void entrypoint_004_116() {
/*< 63>*/ 	start()
/*< 64>*/ 	printf(/* textboxtype: 1, unk: 0, line: 30 */ "They say it's possible to summon\n<color yellow<Fairies>coloroff> by drawing three triangles\nupon certain walls.")
          }

          void entrypoint_004_117() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf(/* textboxtype: 1, unk: 1, line: 31 */ "Rumor has it there's a <color yellow<Piece of Heart\n>coloroff>hidden somewhere nearby.")
/*< 77>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 78>*/ 		printf(/* textboxtype: 1, unk: 1, line: 33 */ "Oh, but since you've already picked it\nup, this obviously doesn't come as a\nbig surprise to you. Hmph.")
          	  case 1:
/*< 79>*/ 		printf(/* textboxtype: 1, unk: 1, line: 32 */ "The thing is, to get to it you need to be\nable to burrow like a <color blue<Mogma>coloroff>.")
          	}
          }

          void entrypoint_004_100() {
/*< 17>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 1, unk: 0, line: 10 */ "Boing-oing!")
          }

          void entrypoint_004_008() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 2, unk: 2, line: 4 */ "Do you want to leave this\nSilent Realm?\n[1-]Leave.[2]Stay.")
/*<  8>*/ 	switch (choice(2)) {
          	  case 0:
          	  case 1:
          	}
          }

          void entrypoint_004_101() {
/*< 19>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0, line: 11 */ "You can get a valuable treasure if\nyou succeed in cutting the bamboo\nstalk <color red<over 28 times >coloroff>at <color blue<Clean Cut>coloroff>.\n\nPeater, who was formerly the teen\nheartthrob of Skyloft, claims to hold\nthe record with 43 slices. Or so\nhe says...")
          }

          void entrypoint_004_102() {
/*< 21>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 1, unk: 0, line: 12 */ "You may get rare and difficult-to-\ncatch bugs if you finish the Bug\nWrangler challenge in <color blue<Bug Heaven>coloroff>\n<color red<within two minutes>coloroff>.")
          }

          void entrypoint_004_103() {
/*< 23>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 1, unk: 0, line: 13 */ "Butterflies tend to gather around \nGossip Stones like myself.\n\n\nIf you find a spot swarming with\nbutterflies, play a<color red< tune of great beauty>coloroff>\nand a Gossip Stone might just pop\nout of the ground with a boing-oing!")
          }

          void entrypoint_004_104() {
/*< 25>*/ 	start()
/*< 38>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "Rumor has it that drawing an arrow\nshape on certain walls will cause an\nobject of similar shape to appear.")
          }

          void entrypoint_004_105() {
/*< 27>*/ 	start()
/*< 42>*/ 	printf(/* textboxtype: 1, unk: 0, line: 28 */ "They say drawing a symbol of love upon\ncertain walls will heal your wounds.")
          }

