          void entrypoint_004_106() {
/*< 29>*/ 	start()
/*< 28>*/ 	printf("If you can dig up all the Rupees in\nMr. Tubert's <b<Thrill Digger>>, you'll\nreceive a rare treasure.")
          }

          void entrypoint_004_107() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 56>*/ 		printf("Deep underground, below this volcano,\nyou'll find treasure-loving <b<Mogmas>>.\n\n\nThese days, most of them are content\nwith staying down in their lair, where\nthey do nothing but relax all day.")
          	  case 1:
          		flw_59:
/*< 59>*/ 		printf("A <r<dragon>> is said to live at the <r<peak >>of\nthis volcano. You're nowhere near the\npeak, though!")
/*< 60>*/ 		printf("Do you want to hear that again?\n[1]Yes.[2-]No.")
/*< 62>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_59
          		  case 1:
/*< 61>*/ 			printf("Rumor has it you're some kind of\ngenius that remembers things perfectly\nthe first time you hear them...")
          		}
          	}
          }

          void entrypoint_004_014() {
/*<  9>*/ 	start()
/*< 12>*/ 	switch (is_adventure_pouch_full()) {
          	  case 0:
/*< 13>*/ 		switch (is_item_check_full()) {
          		  case 0:
/*< 11>*/ 			printf("Your pouch is full, but so is your space at\nthe <r<Item Check>>. The item has been put\nback in the treasure chest.")
          		  case 1:
/*< 10>*/ 			printf("Your pouch is full, so the item was sent to\nthe <r<Item Check>>!")
          		}
          	  case 1:
          	}
          }

          void entrypoint_004_108() {
/*< 31>*/ 	start()
/*< 51>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 30>*/ 		printf("I hear the <r<dragon>> that lives at the\ntop of the volcano is awfully chatty.\n\n\nSo chatty, they say, that he's even\nwilling to talk about matters outside\nhis own realm!")
          	  case 1:
          		flw_52:
/*< 52>*/ 		printf("The word going around is that a <r<dragon>>\nwrapped in flames lives atop this\nvolcano.\n\nThe thing is, it isn't so easy to visit.\nHe's made his lair <r<somewhere so hot\n>>that normal folks can't bother him.")
/*< 53>*/ 		printf("Do you want to hear that again?\n[1]Yes.[2-]No.")
/*< 55>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_52
          		  case 1:
/*< 54>*/ 			printf("Rumor has it you're some kind of\ngenius that remembers things perfectly\nthe first time you hear them...")
          		}
          	}
          }

          void entrypoint_004_015() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf("Hey! \x0E\x03\x01\x00Link! You're not\nthinking of running away, are you?\n\n\nHah! Surely you jest! A real man\nalways finishes what he starts!")
          }

          void entrypoint_004_109() {
/*< 33>*/ 	start()
/*< 32>*/ 	printf("Word is you can earn a <r<Piece of Heart>>\nif you set a great time on the <b<Rickety\nCoaster>>.")
          }

          void entrypoint_004_016() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf("\x0E\x01\x0F\x00How long do you want to sleep?\x0F\x01\x0F\n[1]Until morning.[2]Until night.[3-]Don't sleep.")
/*< 50>*/ 	switch (choice(3)) {
          	  case 0:
          	  case 1:
          	  case 2:
          	}
          }

          void entrypoint_004_110() {
/*< 35>*/ 	start()
/*< 34>*/ 	printf("They say somewhere in this vast desert,\nthere's a <r<dragon>> who loves putting the\nabilities of those who visit him to some\nkind of test.\nIf you can master the challenges he\nthrows at you, you'll be rewarded with\na <r<shield stronger than any other>>.")
          }

          void entrypoint_004_017() {
/*< 65>*/ 	start()
/*< 66>*/ 	printf("Descend into this area?\n[1]Yes.[2-]No.")
/*< 67>*/ 	switch (choice(2)) {
          	  case 0:
          	  case 1:
          	}
          }

          void entrypoint_004_111() {
/*< 37>*/ 	start()
/*< 36>*/ 	printf("It's been said that the best way to snag\na rare insect is to approach it slowly\nand use a <y<Big Bug Net>>.")
          }

          void entrypoint_004_018() {
/*< 68>*/ 	start()
/*< 69>*/ 	printf("A report, \x0E\x01\x12\x04\x00\x0BMaster.\n\n\n\nAn <r<unusual phenomenon>> is taking place\nin Faron Woods, making it impossible\nto descend directly into them at\nthe moment.")
          }

          void entrypoint_004_001() {
          	start()
/*<  2>*/ 	printf("\x0E\x01\x0F\x00The door is locked tight and\nwill not open.\x0F\x01\x0F")
          }

          void entrypoint_004_112() {
/*< 39>*/ 	start()
/*< 24>*/ 	printf("I've heard some of the <b<Goddess Cubes\n>>unlock all sorts of treasure when they\nfly up into the sky. Some even hold\na <r<Piece of Heart>>.")
          }

          void entrypoint_004_019() {
/*< 70>*/ 	start()
/*< 71>*/ 	switch (story_flags[843 /* us: 805A9B35 0x04, jp: 805ACDB5 0x04 */]) {
          	  case 0:
/*< 72>*/ 		printf("Point to your preferred descent area\nwith \x0E\x02\x04\x02\x18CD, and confirm your destination\nby pressing (A).")
          	  case 1:
/*< 73>*/ 		printf("A report, \x0E\x01\x12\x04\x00\x0BMaster.\n\n\n\nIt is possible to descend to a specific\n<b<bird statue>> on <pling>the surface after you\nhave already visited it and I have\nmemorized its location.\nTo do this, point to the area you want\nto descend to with \x0E\x02\x04\x02\x18CD and press (A)\nto confirm your destination.")
/*< 74>*/ 		story_flags[843 /* us: 805A9B35 0x04, jp: 805ACDB5 0x04 */] = true;
          	}
          }

          void entrypoint_004_002() {
/*<  1>*/ 	start()
/*<  3>*/ 	printf("\x0E\x01\x0F\x00The sign is broken. It's not\npossible to read it.\x0F\x01\x0F")
          }

          void entrypoint_004_113() {
/*< 41>*/ 	start()
/*< 40>*/ 	printf("Apparently, if you draw a symbol of\nmoney on certain walls, you can make\nan easy fortune.")
          }

          void entrypoint_004_003() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf("\x0E\x01\x0F\x00You can't read the sign from\nthis angle.\x0F\x01\x0F")
          }

          void entrypoint_004_114() {
/*< 43>*/ 	start()
/*< 26>*/ 	printf("<y<<item24> >>cause something to\nhappen when they are thrown on bugs\nor monsters. They can be collected\nfrom sparkly mushrooms.")
          }

          void entrypoint_004_115() {
/*< 45>*/ 	start()
/*< 44>*/ 	printf("Oddly enough, it seems that drawing\na circle on certain strange walls will\nproduce something round.")
          }

          void entrypoint_004_004() {
/*< 46>*/ 	start()
/*< 47>*/ 	printf("\x0E\x01\x0F\x00The door is sealed shut.\x0F\x01\x0F")
          }

          void entrypoint_004_116() {
/*< 63>*/ 	start()
/*< 64>*/ 	printf("They say it's possible to summon\n<y<Fairies>> by drawing three triangles\nupon certain walls.")
          }

          void entrypoint_004_117() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf("Rumor has it there's a <y<Piece of Heart\n>>hidden somewhere nearby.")
/*< 77>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 78>*/ 		printf("Oh, but since you've already picked it\nup, this obviously doesn't come as a\nbig surprise to you. Hmph.")
          	  case 1:
/*< 79>*/ 		printf("The thing is, to get to it you need to be\nable to burrow like a <b<Mogma>>.")
          	}
          }

          void entrypoint_004_100() {
/*< 17>*/ 	start()
/*< 16>*/ 	printf("Boing-oing!")
          }

          void entrypoint_004_008() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf("Do you want to leave this\nSilent Realm?\n[1]Leave.[2-]Stay.")
/*<  8>*/ 	switch (choice(2)) {
          	  case 0:
          	  case 1:
          	}
          }

          void entrypoint_004_101() {
/*< 19>*/ 	start()
/*< 18>*/ 	printf("You can get a valuable treasure if\nyou succeed in cutting the bamboo\nstalk <r<over 28 times >>at <b<Clean Cut>>.\n\nPeater, who was formerly the teen\nheartthrob of Skyloft, claims to hold\nthe record with 43 slices. Or so\nhe says...")
          }

          void entrypoint_004_102() {
/*< 21>*/ 	start()
/*< 20>*/ 	printf("You may get rare and difficult-to-\ncatch bugs if you finish the Bug\nWrangler challenge in <b<Bug Heaven>>\n<r<within two minutes>>.")
          }

          void entrypoint_004_103() {
/*< 23>*/ 	start()
/*< 22>*/ 	printf("<r<Butterflies>> tend to gather around \n<b<Gossip Stones>> like myself.\n\n\nIf you find a spot swarming with\nbutterflies, play a<r< tune of great beauty>>\nand a Gossip Stone might just pop\nout of the ground with a boing-oing!")
          }

          void entrypoint_004_104() {
/*< 25>*/ 	start()
/*< 38>*/ 	printf("Rumor has it that drawing an arrow\nshape on certain walls will cause an\nobject of similar shape to appear.")
          }

          void entrypoint_004_105() {
/*< 27>*/ 	start()
/*< 42>*/ 	printf("They say drawing a symbol of love upon\ncertain walls will heal your wounds.")
          }

