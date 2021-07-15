          void entrypoint_125_04() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf("Seek the <r<gemstones>> that sleep\nbehind each statue. If you strike\nthem in order from lowest to\nhighest, the door will open.")
          }

          void entrypoint_125_05() {
/*< 14>*/ 	start()
/*< 18>*/ 	printf("\x0E\x01\x12\x04\x00\x01Master, look over that way.")
/*< 24>*/ 	set_camera(1, 0)
/*< 22>*/ 	printf("The design carved into the floor there\nis the <r<mark of Farore>>.\n\n\nI detect the sacred power of the\n<y+<Triforce>> emanating from its vicinity.")
/*< 36>*/ 	set_camera(2, 0)
/*< 23>*/ 	printf("To reach the area where that mark is\nlocated, I propose you pass through the\ndoor in front of you.")
/*< 54>*/ 	set_camera(-1, 0)
          }

          void entrypoint_125_06() {
/*< 15>*/ 	start()
/*< 25>*/ 	printf("\x0E\x01\x12\x04\x00\x01Master, look over that way.")
/*< 26>*/ 	set_camera(3, 0)
/*< 19>*/ 	printf("I have identified the design on the \nfloor there as the <r<mark of Nayru>>.\n\n\nI detect the sacred power of the\n<y+<Triforce>> radiating from it.\nUnfortunately, the way leading to\nthe mark is closed off.")
/*< 37>*/ 	set_camera(5, 0)
/*< 38>*/ 	printf("There appears to be a <y<Timeshift Orb>>\nover there.")
/*< 27>*/ 	set_camera(-1, 0)
/*< 28>*/ 	printf("I propose you utilize the nearby\n<y<Timeshift Orb>> to open a path to\nthe <r<mark>>.")
          }

          void entrypoint_125_07() {
/*< 16>*/ 	start()
/*< 30>*/ 	printf("\x0E\x01\x12\x04\x00\x01Master, look over that way.")
/*< 29>*/ 	set_camera(4, 0)
/*< 20>*/ 	printf("The symbol visible on the floor here is\nthe <r<mark of Din>>.\n\n\nI detect the sacred power of the\n<y+<Triforce>> emanating from its vicinity.")
/*< 31>*/ 	set_camera(-1, 0)
/*< 32>*/ 	printf("Unfortunately, there seems to be no\nway to reach the mark from your\ncurrent position.\n\nI recommend you find another\nentrance into this chamber.")
/*< 58>*/ 	scene_flags[20 'Skyloft: Sky Keep'][122 /* 0xE 04 */] = true;
          }

          void entrypoint_125_08() {
/*< 17>*/ 	start()
/*< 33>*/ 	switch (scene_flags[122 /* 0xE 04 */]) {
          	  case 0:
/*< 21>*/ 		printf("\x0E\x01\x12\x04\x00\x0BMaster, I have information for you.\nThe chamber you stand in now is the\nsame one where you previously spotted\nthe <r<mark of Din>>.")
          		flw_39:
/*< 39>*/ 		set_camera(6, 0)
/*< 34>*/ 		printf("If you can find a way through the river\nof magma, I calculate a 60% chance\nyou will arrive at one of the sources\nof sacred power.")
/*< 41>*/ 		set_camera(-1, 0)
/*< 40>*/ 		printf("I recommend you press forward in\nsearch of the power present here.")
          	  case 1:
/*< 35>*/ 		printf("\x0E\x01\x12\x04\x00\x0BMaster, I have information for you.\nI've detected a source of sacred power\nsomewhere within this chamber.")
          		goto flw_39
          	}
          }

          void entrypoint_125_11() {
/*< 44>*/ 	start()
/*< 49>*/ 	set_camera(7, 0)
/*< 43>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaster Link, you have\nreached the mark. Offer your sword\nto it.\n\nIf you do this, I calculate a high\nprobability that you will be shown\nthe way to a part of the <y+<Triforce>>.")
          }

          void entrypoint_125_12() {
/*< 46>*/ 	start()
/*< 50>*/ 	set_camera(8, 0)
/*< 45>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaster Link, you have\nreached the mark. Offer your sword\nto it.\n\nIf you do this, I calculate a high\nprobability that you will be shown\nthe way to a part of the <y+<Triforce>>.")
          }

          void entrypoint_125_13() {
/*< 48>*/ 	start()
/*< 51>*/ 	set_camera(9, 0)
/*< 47>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaster Link, you have\nreached the mark. Offer your sword\nto it.\n\nIf you do this, I calculate a high\nprobability that you will be shown\nthe way to a part of the <y+<Triforce>>.")
          }

          void entrypoint_125_01() {
          	start()
/*< 52>*/ 	set_camera(10, 0)
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 61, 'param3': 51}
/*< 61>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 53, 'param3': 16}
/*< 53>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 1, 'param3': 6}
/*<  1>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaster, I have information to report.\nI've detected three sources of sacred\npower within this building. This power\nclearly radiates from the <y+<<pling>Triforce>>.\nI've triangulated the three sources of\npower and marked them on your map\nas \x25B3.")
/*< 42>*/ 	scene_flags[20 'Skyloft: Sky Keep'][29 /* 0x2 20 */] = true;
/*< 60>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_125_03() {
/*<  2>*/ 	start()
/*<  7>*/ 	switch (story_flags[685 /* us: 805A9B21 0x04, jp: 805ACDA1 0x04 */]) {
          	  case 0:
/*<  8>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 9, 'param3': 30}
/*<  9>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 34}
          	  case 1:
/*< 57>*/ 		{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 3, 'param3': 17}
/*<  3>*/ 		printf("\x0E\x01\x12\x04\x00\x0BMaster, I have new information for\nyou. Analysis indicates that the shaking\nyou felt just now was caused by a\n<r<<pling>>><r<change in the building's structure>>.")
/*<  4>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 30}
/*< 55>*/ 		switch (scene_flags[13 /* 0x0 20 */]) {
          		  case 0:
/*< 10>*/ 			printf("Now that the building's structure has\nbeen altered, it appears you can\nenter the adjacent room.")
          			flw_5:
/*<  5>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 11, 'param3': 34}
/*< 11>*/ 			printf("I propose you use this <r<control panel>> to\nmove through the structure and collect\nthe components of the <y+<Triforce>>.")
/*<  6>*/ 			story_flags[685 /* us: 805A9B21 0x04, jp: 805ACDA1 0x04 */] = true;
          		  case 1:
/*< 56>*/ 			printf("By altering the internal structure of\nthis building, you will be able to gain\naccess to other chambers.")
          			goto flw_5
          		}
          	}
          }

