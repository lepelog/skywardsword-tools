          void entrypoint_201_51() {
/*<  2>*/ 	start()
/*< 12>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 10>*/ 		printf("")
          	  case 1:
/*< 11>*/ 		printf("")
          	}
          }

          void entrypoint_201_17() {
/*< 49>*/ 	start()
/*< 50>*/ 	printf("You have acquired a new item.\nAnalysis of this object's insect-like\nprofile and wings indicates <pling>it can <r<fly>>.\n\nTilt the Wii Remote to <r<remotely>> <r<pilot\n>>the device. The sharp structure on the\nfront of the device can sever threads\nand deliver a blow to smaller objects.\nTo launch the device, press (B) to\nready it for takeoff then press (A)\x0E\x01\x11\x02\x1CD\x0E\x01\x11\x02\x5CD.")
          }

          void entrypoint_201_52() {
/*<  3>*/ 	start()
/*<  4>*/ 	printf("")
          }

          void entrypoint_201_18() {
/*< 72>*/ 	start()
/*<228>*/ 	scene_flags[11 'Faron: Skyview Temple'][21 /* 0x3 20 */] = true;
/*< 75>*/ 	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          	  case 0:
/*< 77>*/ 		printf("My readings indicate the presence\nof <y<sacred water >>within the temple.\nUnfortunately, it is<r< not possible to\nuse your <pling>dowsing>> ability here.\nBased on my calculations, I estimate\nthe water is located in the deepest\npart of the temple complex.")
/*<209>*/ 		scene_flags[11 'Faron: Skyview Temple'][98 /* 0xD 04 */] = true;
/*<204>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 205, 'param3': 30}
/*<205>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 206, 'param3': 6}
/*<206>*/ 		scene_flags[11 'Faron: Skyview Temple'][97 /* 0xD 02 */] = true;
/*<208>*/ 		printf("I recommend using the \x0E\x02\x04\x02\x19CD on your\nmap as a guide when revisiting the\ndeepest area of the temple.")
/*<207>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 78, 'param3': 34}
/*< 78>*/ 		printf("I am detecting a greater enemy\npresence in the vicinity than I\npreviously observed. You would be\nwise to proceed with caution.")
          	  case 1:
/*< 76>*/ 		printf("I am detecting a greater enemy\npresence in the vicinity than I\npreviously observed. You would be\nwise to proceed with caution.")
          	}
          }

          void entrypoint_201_01() {
          	start()
/*<  1>*/ 	printf("Gaze upon your map until your\neye finds the \x0E\x02\x04\x02\x19CD, for it is there\nthat you must strike a glittering\ngemstone to reveal a path.\nYou shall find a temple map in\na room with two such gemstones.")
          }

          void entrypoint_201_53() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf("\x0E\x01\x12\x04\x00\x04Master, as I just translated, it would\nappear that <b<Zelda>> purified herself in\nthe waters of this spring.\n\nI calculate a 97% chance that she has\nalready set out for <b<Eldin>>, where\nanother great spring exists.\n\nHowever, it is not clear what method of\ntravel Zelda used to move from here\nto her next destination.")
/*< 87>*/ 	set_camera(1, 0)
/*< 86>*/ 	printf("My analysis suggests you should take\nthe tablet to the altar in Skyloft.\n\n\nDoing so will likely open a new <pling><r<column\nof light >>on the surface, allowing you to\ndescend to another area and continue\nyour search for Zelda.")
/*< 88>*/ 	set_camera(-1, 0)
/*<  9>*/ 	switch (story_flags[86 /* us: 805A9AE8 0x04, jp: 805ACD68 0x04 */]) {
          	  case 0:
/*<  7>*/ 		printf("Let's return to the sky once more\nbefore continuing our search. The <b<bird\nstatue>> outside can take us back up.")
          		flw_79:
/*< 79>*/ 		zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 80>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 81, 'param3': 36}
/*< 81>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 6}
          	  case 1:
/*<  8>*/ 		printf("The bird statue that transports you\nback to the sky should be in the forest\nyou previously passed through.")
          		goto flw_79
          	}
          }

          void entrypoint_201_19() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf("I detect <r<sacred water>> nearby. There\nare no monster auras causing\ninterference, so you can <r<dowse >>here.")
          }

          void entrypoint_201_02() {
/*< 21>*/ 	start()
/*< 22>*/ 	printf("He who descended from the sky:\nlend your ear to the wise voice\nof the servant who brought you\nto the firm soil.")
          }

          void entrypoint_201_54() {
/*< 23>*/ 	start()
/*<171>*/ 	{'type': 'type3', 'subType': 1, 'param1': 47, 'param2': 0, 'next': 167, 'param3': 40}
/*<167>*/ 	{'type': 'type3', 'subType': 1, 'param1': 330, 'param2': 0, 'next': 168, 'param3': 51}
/*<168>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 169, 'param3': 17}
/*<169>*/ 	set_camera(9, 0)
/*< 26>*/ 	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          	  case 0:
/*< 24>*/ 		printf("There is a 95% probability that the\nwater here is identical to the water\nwithin the Water Dragon's basin.\nI suggest we take it back to her.")
/*< 82>*/ 		zone_temp_flags[3 /* 0x1 08 */] = true;
/*<264>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*< 83>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 84, 'param3': 36}
/*< 84>*/ 		set_camera(10, 0)
/*<170>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 6}
          	  case 1:
/*< 25>*/ 		printf("My analysis of the water here reveals\nan extraordinarily high concentration\nof energy.\n\nThere is a strong likelihood that this\nenergy will be amplified upon contact\nwith an object of conforming\nwavelength.")
/*<166>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          	}
          }

          void entrypoint_201_03() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf("Two doors lead to rooms left and\nright, but they will only open\nwhen the gemstones are struck.\nOne is above, one below.")
          }

          void entrypoint_201_55() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf("Well...<pause0F> You put up more of a fight than\nI would have thought possible out of\nsuch a soft boy.\n\nBut don't clap for yourself quite yet.\n<pause0F>That sword of yours is the only reason\nyou still live.")
          }

          void entrypoint_201_20() {
/*< 91>*/ 	start()
/*< 92>*/ 	printf("\x0E\x01\x12\x04\x00\x04Master Link, it is likely\nthat I am the servant this tablet is\nreferring to.\n\nTo help you\x0E\x01\x12\x04\x00\x02 with your mission, the\ngoddess gave me a massive quantity\nof knowledge about this land.\n\nShould you find yourself in need of\nanswers, I hope you won't hesitate to\ncall on me by pressing (v).\n\x0E\x01\x11\x02\x9CD\nIf you <g<target >>an object with (Z) and\nthen <r<press >>(v), I will tell you all the\ninformation I know about it.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
/*< 93>*/ 	scene_flags[11 'Faron: Skyview Temple'][68 /* 0x9 10 */] = true;
          }

          void entrypoint_201_04() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf("")
          }

          void entrypoint_201_56() {
/*< 36>*/ 	start()
/*< 33>*/ 	printf("I fear I spent far too long teasing and\ntoying with you.\n\n\nThe girl's presence has all but faded\nfrom this place, which means there's\nno reason to linger here.\n\nGood-bye, sky child. Run and play this\ntime. Get in my way again, though,\nand you're dead.")
/*< 85>*/ 	story_flags[83 /* us: 805A9AE9 0x80, jp: 805ACD69 0x80 */] = true;
          }

          void entrypoint_201_21() {
/*<214>*/ 	start()
/*<215>*/ 	printf("The sentries you see here are born of\nevil magic. They have a tendency to fix\ntheir gaze on any pointed object that\nmoves within their view. ")
/*<216>*/ 	set_camera(13, 0)
/*<217>*/ 	printf("This set of sentries is bound together.\nThis allows them to resist being rotated\nindependently of one another.")
/*<218>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 219, 'param3': 6}
/*<219>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_201_91() {
/*< 42>*/ 	start()
/*<195>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 196, 'param3': 32}
/*<196>*/ 	make_actor_do_something(3, 16)
/*<197>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 99, 'next': 198, 'param3': 16}
/*<198>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 194, 'param3': 6}
/*<194>*/ 	set_camera(12, 0)
/*<212>*/ 	scene_flags[11 'Faron: Skyview Temple'][31 /* 0x2 80 */] = true;
/*<265>*/ 	story_flags[1112 /* us: 805A9B54 0x40, jp: 805ACDD4 0x40 */] = true;
/*<193>*/ 	make_actor_do_something(4, 16)
/*<255>*/ 	switch (story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */]) {
          	  case 0:
/*<257>*/ 		entrypoint_201_96();
          	  case 1:
/*< 48>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4115, 'param2': 4100, 'next': 46, 'param3': 13}
/*< 46>*/ 		printf("Just fantastic. I work like a weasel\njust to swipe a key from that monster,\nand then I hafta go and lose it.")
/*< 47>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 4103, 'next': 43, 'param3': 13}
/*< 43>*/ 		printf("I just can't remember which hole\nI hid it in.")
/*<258>*/ 		switch (scene_flags[15 /* 0x0 80 */]) {
          		  case 0:
/*<259>*/ 			entrypoint_201_96();
          		  case 1:
/*< 44>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': 2057, 'next': 45, 'param3': 13}
/*< 45>*/ 			printf("Eh, what do I need a key for, anyway?\nI can buy a trunk full of those things\nonce I find the treasure I'm after!")
/*< 89>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	}
          }

          void entrypoint_201_57() {
/*<210>*/ 	start()
/*<211>*/ 	printf("\x0E\x01\x05\x04K\x00Hah, quite the sword you have here.<pause0F>\nBut so long as <r<you telegraph your\nattacks >>like the novice you are,\nyou'll never land a blow.")
          }

          void entrypoint_201_22() {
/*<220>*/ 	start()
/*<221>*/ 	printf("\x0E\x01\x12\x04\x00\x04Master, I detect targetable objects in\nyour immediate vicinity.\n\n\nIf you press (v) while <g<targeting>> a\nperson or object with (Z), I will provide\nyou with information on that subject.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
/*<222>*/ 	scene_flags[11 'Faron: Skyview Temple'][113 /* 0xF 02 */] = true;
/*<223>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 224, 'param3': 32}
/*<224>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 225, 'param3': 17}
/*<225>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 226, 'param3': 6}
/*<226>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 227, 'param3': 36}
/*<227>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_201_92() {
/*< 51>*/ 	start()
/*<142>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 154, 'param3': 32}
/*<154>*/ 	make_actor_do_something(3, 16)
/*<155>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 100, 'next': 161, 'param3': 17}
/*<161>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': -1, 'next': 57, 'param3': 16}
/*< 57>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4113, 'param2': 3342, 'next': 55, 'param3': 13}
/*< 55>*/ 	printf("Hold it... You're that guy. That guy\nI met in the volcano!")
/*< 56>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 2065, 'next': 52, 'param3': 13}
/*< 52>*/ 	printf("Here to do some treasure hunting too?\n[1]Yep![2]Nope.")
/*< 58>*/ 	switch (choice(2)) {
          	  case 0:
/*< 59>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4113, 'param2': 3346, 'next': 60, 'param3': 13}
/*< 60>*/ 		printf("I called it! You got treasure hunter\nwritten all over your face.")
          		flw_61:
/*< 61>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4105, 'param2': 2059, 'next': 62, 'param3': 13}
/*< 62>*/ 		printf("Did the big stone guy out there tip ya\noff to the loot too?\n[1]Stone guy?[2]Tip?")
/*< 95>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 2050, 'next': 96, 'param3': 13}
/*< 96>*/ 		printf("Yeah, what'd he say again?\n\x201C<pling><g<Strum a chord >>most beautiful\nin the place within the temple\nwhere the butterflies dance.\"")
/*< 97>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4116, 'param2': 2057, 'next': 98, 'param3': 13}
/*< 98>*/ 		printf("So I get here, and I let loose with\nsome of the most gorgeous humming\nI've done in my entire life, and\nnothing happens!")
/*< 99>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4105, 'param2': 2050, 'next': 100, 'param3': 13}
/*<100>*/ 		printf("But seeing how I've come this far,\nthere's no chance I'm gonna give\nup the hunt for treasure just yet!")
/*<157>*/ 		story_flags[493 /* us: 805A9B13 0x08, jp: 805ACD93 0x08 */] = true;
/*<156>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 53>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4116, 'param2': 4617, 'next': 54, 'param3': 13}
/*< 54>*/ 		printf("You're a terrible liar, guy. Ya got\ntreasure hunter written all over\nyour face.")
          		goto flw_61
          	}
          }

          void entrypoint_201_23() {
/*<229>*/ 	start()
/*<230>*/ 	printf("\x0E\x01\x12\x04\x00\x04Master Link, the water\nin this room is...<pause0F><r<ordinary water>>.\n\n\nThe <y<sacred water >>that the Water\nDragon seeks is likely located in \nthe deepest part of the temple.")
          }

          void entrypoint_201_93() {
/*< 63>*/ 	start()
/*<199>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 200, 'param3': 32}
/*<200>*/ 	make_actor_do_something(3, 16)
/*<201>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 99, 'next': 202, 'param3': 16}
/*<202>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 160, 'param3': 6}
/*<160>*/ 	set_camera(11, 0)
/*<213>*/ 	zone_temp_flags[56 /* 0x6 01 */] = true;
/*<203>*/ 	make_actor_do_something(4, 16)
/*< 69>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4115, 'param2': 4364, 'next': 67, 'param3': 13}
/*< 67>*/ 	printf("Sheesh. I dig some serious miles to\nget my paws on treasure, and I've\nfound squat. Talk about bad luck!")
/*< 68>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4116, 'param2': 4112, 'next': 64, 'param3': 13}
/*< 64>*/ 	printf("I think some no-good thief beat me\nto the goods. There's nuttin' here\nbut <r<water >>now.")
/*< 65>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 4615, 'next': 66, 'param3': 13}
/*< 66>*/ 	printf("Who in the stinkin' world would\ncome all this way for water?\nNobody, that's who.")
/*< 70>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': 2061, 'next': 71, 'param3': 13}
/*< 71>*/ 	printf("I'm cuttin' my losses and headin' home.\nSee ya!")
/*< 90>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_201_94() {
/*<101>*/ 	start()
/*<140>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 138, 'param3': 46}
/*<138>*/ 	set_camera(2, 0)
/*<141>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 143, 'param3': 32}
/*<143>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 139, 'param3': 49}
/*<139>*/ 	make_actor_do_something(4, 16)
/*<137>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 105, 'param3': 49}
/*<105>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4096, 'param2': 1, 'next': 113, 'param3': 13}
/*<113>*/ 	{'type': 'type3', 'subType': 1, 'param1': 25, 'param2': 0, 'next': 136, 'param3': 40}
/*<136>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 16, 'next': 106, 'param3': 17}
/*<106>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 107, 'param3': 6}
/*<107>*/ 	set_camera(3, 0)
/*<108>*/ 	{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 109, 'param3': 15}
/*<109>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 100, 'next': 111, 'param3': 17}
/*<111>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 110, 'param3': 6}
/*<110>*/ 	set_camera(4, 0)
/*<104>*/ 	{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 100, 'next': 112, 'param3': 14}
/*<112>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 16, 'next': 103, 'param3': 17}
/*<103>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 102, 'param3': 6}
/*<102>*/ 	entrypoint_201_92();
          }

          void entrypoint_201_95() {
/*<114>*/ 	start()
/*<150>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 148, 'param3': 46}
/*<148>*/ 	set_camera(5, 0)
/*<151>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 17, 'next': 149, 'param3': 32}
/*<149>*/ 	make_actor_do_something(4, 17)
/*<147>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 145, 'param3': 49}
/*<145>*/ 	{'type': 'type3', 'subType': 1, 'param1': 25, 'param2': 0, 'next': 146, 'param3': 40}
/*<146>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 17, 'next': 144, 'param3': 17}
/*<144>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 162, 'param3': 6}
/*<162>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': -1, 'next': 115, 'param3': 16}
/*<115>*/ 	switch (scene_flags[58 /* 0x6 04 */]) {
          	  case 0:
/*<116>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4369, 'param2': 3346, 'next': 117, 'param3': 13}
/*<117>*/ 		printf("Whoa there, buddy. I bet you think\nyou're going to run ahead and swipe\nall the best treasure for yourself.")
/*<118>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4373, 'param2': 3345, 'next': 119, 'param3': 13}
/*<119>*/ 		printf("But I say you're setting yourself\nup for big-time disappointment.<pause1E>\n\n\nJust 'cause some weird design popped\nup on the wall doesn't mean you're any\ncloser to finding treasure, all right?")
/*<120>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4372, 'param2': 2057, 'next': 121, 'param3': 13}
/*<121>*/ 		printf("I think you've been had by that\nboulder with legs!")
/*<122>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4361, 'param2': 2050, 'next': 123, 'param3': 13}
/*<123>*/ 		printf("Stay here if ya want. I'm going on\nahead!")
/*<124>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<128>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4369, 'param2': 3329, 'next': 126, 'param3': 13}
/*<126>*/ 		printf("Hold it... You're that guy. That guy\nI met in the volcano!")
/*<127>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4373, 'param2': 3345, 'next': 125, 'param3': 13}
/*<125>*/ 		printf("Here to do some treasure hunting too?\n[1]Yep![2]Nope.")
/*<131>*/ 		switch (choice(2)) {
          		  case 0:
/*<132>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4369, 'param2': 3346, 'next': 133, 'param3': 13}
/*<133>*/ 			printf("I called it! You got treasure hunter\nwritten all over your face.")
          			flw_152:
/*<152>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4361, 'param2': 2062, 'next': 153, 'param3': 13}
/*<153>*/ 			printf("Did the big stone guy out there tip ya\noff to the loot too?\n[1]Stone guy?[2]Tip?")
/*<134>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4369, 'param2': 3339, 'next': 135, 'param3': 13}
/*<135>*/ 			printf("No one's beatin' me to all the sweet\nloot piled up in this place!")
/*<159>*/ 			story_flags[493 /* us: 805A9B13 0x08, jp: 805ACD93 0x08 */] = true;
/*<158>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<129>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4372, 'param2': 4617, 'next': 130, 'param3': 13}
/*<130>*/ 			printf("You're a terrible liar, guy. Ya got\ntreasure hunter written all over\nyour face.")
          			goto flw_152
          		}
          	}
          }

          void entrypoint_201_96() {
/*<172>*/ 	start()
/*<260>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 261, 'param3': 32}
/*<261>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 99, 'next': 173, 'param3': 16}
/*<173>*/ 	switch (scene_flags[15 /* 0x0 80 */]) {
          	  case 0:
/*<174>*/ 		switch (scene_flags[69 /* 0x9 20 */]) {
          		  case 0:
/*<181>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4113, 'param2': 3345, 'next': 177, 'param3': 13}
/*<177>*/ 			printf("What?! Ya found my key and then\nused it already?")
          			flw_182:
/*<182>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4116, 'param2': 4617, 'next': 178, 'param3': 13}
/*<178>*/ 			printf("Hmm. I was just thinkin', what use do\nus Mogmas have for keys? We can dig\nour way in and out of anything!")
/*<183>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4105, 'param2': 2050, 'next': 179, 'param3': 13}
/*<179>*/ 			printf("Well, good to know where that key\nwent. I gotta get back to hunting for\ntreasure. Here's hoping we both\nstrike it rich in here! See ya!")
/*<192>*/ 			scene_flags[11 'Faron: Skyview Temple'][55 /* 0x7 80 */] = true;
          			flw_256:
/*<256>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<180>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4113, 'param2': 3346, 'next': 176, 'param3': 13}
/*<176>*/ 			printf("Say, that's my missing key! You found\nit and brought it back to me!")
          			goto flw_182
          		}
          	  case 1:
/*<249>*/ 		switch (story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */]) {
          		  case 0:
/*<254>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4115, 'param2': 4100, 'next': 251, 'param3': 13}
/*<251>*/ 			printf("Huh? I can't find it anywhere...")
/*<252>*/ 			story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */] = false;
          			flw_189:
/*<189>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4105, 'param2': 2050, 'next': 188, 'param3': 13}
/*<188>*/ 			printf("It's the darnedest thing. I buried a key\naround here, but I can't recall where\nexactly I put it.")
/*<191>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 3345, 'next': 190, 'param3': 13}
/*<190>*/ 			printf("Now where could I have hidden that\nkey? I guess it might not be this room\nafter all. You don't happen to have a\nmap on you, do you, pal?")
          			goto flw_256
          		  case 1:
/*<253>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4113, 'param2': 3329, 'next': 250, 'param3': 13}
/*<250>*/ 			printf("Hey. What do you want?\n[1]Key?[2]Treasure?[3-]Never mind.")
/*<175>*/ 			switch (choice(3)) {
          			  case 0:
          				goto flw_189
          			  case 1:
/*<185>*/ 				{'type': 'type3', 'subType': 4, 'param1': 4105, 'param2': 2050, 'next': 184, 'param3': 13}
/*<184>*/ 				printf("You know that big guy? The one who\nlooks like a boulder with legs?\nCraaazy eyebrows too.\n\nSo anyway, he told me about this\n<r<golden sculpture >>that opens a\ndoor to some fancy place here.")
/*<187>*/ 				{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 3332, 'next': 186, 'param3': 13}
/*<186>*/ 				printf("Heyyy, what's with the grin? Ya know\nsomething, don'tcha? Come on.\nSpit it out, kid.")
          				goto flw_256
          			  case 2:
          			}
          		}
          	}
          }

          void entrypoint_201_97() {
/*<231>*/ 	start()
/*<241>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 242, 'param3': 32}
/*<242>*/ 	make_actor_do_something(3, 16)
/*<243>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 99, 'next': 244, 'param3': 16}
/*<244>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 240, 'param3': 6}
/*<240>*/ 	set_camera(12, 0)
/*<245>*/ 	zone_temp_flags[55 /* 0x7 80 */] = true;
/*<266>*/ 	story_flags[1112 /* us: 805A9B54 0x40, jp: 805ACDD4 0x40 */] = true;
/*<248>*/ 	story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */] = true;
/*<239>*/ 	make_actor_do_something(4, 16)
/*<237>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4115, 'param2': 4100, 'next': 235, 'param3': 13}
/*<235>*/ 	printf("Just fantastic. I work like a weasel\njust to swipe a key from that monster,\nand then I hafta go and lose it.")
/*<236>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 4103, 'next': 232, 'param3': 13}
/*<232>*/ 	printf("I just can't remember which hole\nI hid it in.")
/*<246>*/ 	switch (scene_flags[15 /* 0x0 80 */]) {
          	  case 0:
/*<247>*/ 		entrypoint_201_96();
          	  case 1:
/*<233>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': 2057, 'next': 234, 'param3': 13}
/*<234>*/ 		printf("Aww...and here I thought that key\nwould be my ticket to a life of luxury.<pause0F>\nI could have sworn I <r<buried it right\naround here>>...")
/*<238>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_201_11() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("I detect Zelda's aura! There is a high\nprobability that she is beyond this\nlarge door.")
/*< 31>*/ 	scene_flags[11 'Faron: Skyview Temple'][32 /* 0x5 01 */] = true;
          }

          void entrypoint_201_12() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf("")
          }

          void entrypoint_201_99() {
/*<163>*/ 	start()
/*<164>*/ 	switch (temp_flags[63 /* 0x6 80 */]) {
          	  case 0:
/*<165>*/ 		scene_flags[11 'Faron: Skyview Temple'][16 /* 0x3 01 */] = true;
          	  case 1:
          	}
          }

          void entrypoint_201_13() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf("The mechanism controlling the lock on\nthis door appears to have been\ndeactivated.")
/*< 32>*/ 	scene_flags[11 'Faron: Skyview Temple'][34 /* 0x5 04 */] = true;
          }

          void entrypoint_201_14() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaster, I have bad news. The auras of\nmany creatures reverberate\nthroughout this temple.\n\nAs a result, I can't isolate Zelda's aura\x0E\x01\x06\x02\xFECD.\n<pause0F>You will <r<not be able to track her>> here.\n\n\n\x0E\x01\x12\x04\x00\x01Given the situation, I suggest you\n<g<look around >>to see where we should\nmove next.")
/*< 94>*/ 	temp_flags[50 /* 0x7 04 */] = true;
/*<262>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*<263>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_201_15() {
/*< 37>*/ 	start()
/*< 38>*/ 	printf("\x0E\x01\x12\x04\x00\x04Master Link, I have\ninformation concerning the\nmechanisms that open the doors.\n\nGiven their function, logic dictates\nthat the mechanisms are positioned\nnear the doors that they open.\n\nThere is an 80% probability you will\nlocate these mechanisms if you\nthoroughly explore and <g<look around\n>>in every direction.")
          }

          void entrypoint_201_16() {
/*< 39>*/ 	start()
/*< 40>*/ 	printf("It appears one of Ghirahim's \nunderlings has reengaged the lock\nhere. You will need to search the\narea for the key once again.")
/*< 41>*/ 	scene_flags[11 'Faron: Skyview Temple'][20 /* 0x3 10 */] = true;
          }
