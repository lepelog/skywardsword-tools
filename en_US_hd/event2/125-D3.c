          void entrypoint_125_04() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf(/* textboxtype: 0, unk: 2, line: 7 */ "Seek the <color red<gemstones>coloroff> that sleep\nbehind each statue. If you strike\nthem in order from lowest to\nhighest, the door will open.")
          }

          void entrypoint_125_05() {
/*< 14>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10012:0x00000001>Master, look over that way.")
/*< 24>*/ 	set_camera(1, 0)
/*< 22>*/ 	printf(/* textboxtype: 2, unk: 2, line: 9 */ "The design carved into the floor there\nis the <color red<mark of Farore>coloroff>.\n\n\nI detect the sacred power of the\n<color yellow white<Triforce>coloroff> emanating from its vicinity.")
/*< 36>*/ 	set_camera(2, 0)
/*< 23>*/ 	printf(/* textboxtype: 0, unk: 7, line: 10 */ "To reach the area where that mark is\nlocated, I propose you pass through the\ndoor in front of you.")
/*< 54>*/ 	set_camera(-1, 0)
          }

          void entrypoint_125_06() {
/*< 15>*/ 	start()
/*< 25>*/ 	printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10012:0x00000001>Master, look over that way.")
/*< 26>*/ 	set_camera(3, 0)
/*< 19>*/ 	printf(/* textboxtype: 0, unk: 0, line: 14 */ "I have identified the design on the \nfloor there as the <color red<mark of Nayru>coloroff>.\n\n\nI detect the sacred power of the\n<color yellow white<Triforce>coloroff> radiating from it.\nUnfortunately, the way leading to\nthe mark is closed off.")
/*< 37>*/ 	set_camera(5, 0)
/*< 38>*/ 	printf(/* textboxtype: 0, unk: 2, line: 16 */ "There appears to be a <color yellow<Timeshift Orb>coloroff>\nover there.")
/*< 27>*/ 	set_camera(-1, 0)
/*< 28>*/ 	printf(/* textboxtype: 2, unk: 0, line: 15 */ "I propose you utilize the nearby\n<color yellow<Timeshift Orb>coloroff> to open a path to\nthe <color red<mark>coloroff>.")
          }

          void entrypoint_125_07() {
/*< 16>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10012:0x00000001>Master, look over that way.")
/*< 29>*/ 	set_camera(4, 0)
/*< 20>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "The symbol visible on the floor here is\nthe <color red<mark of Din>coloroff>.\n\n\nI detect the sacred power of the\n<color yellow white<Triforce>coloroff> emanating from its vicinity.")
/*< 31>*/ 	set_camera(-1, 0)
/*< 32>*/ 	printf(/* textboxtype: 2, unk: 0, line: 18 */ "Unfortunately, there seems to be no\nway to reach the mark from your\ncurrent position.\n\nI recommend you find another\nentrance into this chamber.")
/*< 58>*/ 	scene_flags[20 'Skyloft: Sky Keep'][122 /* 0xE 04 */] = true;
          }

          void entrypoint_125_08() {
/*< 17>*/ 	start()
/*< 33>*/ 	switch (scene_flags[122 /* 0xE 04 */]) {
          	  case 0:
/*< 21>*/ 		printf(/* textboxtype: 0, unk: 2, line: 19 */ "<0x10012:0x0000000b>Master, I have information for you.\nThe chamber you stand in now is the\nsame one where you previously spotted\nthe <color red<mark of Din>coloroff>.")
          		flw_39:
/*< 39>*/ 		set_camera(6, 0)
/*< 34>*/ 		printf(/* textboxtype: 0, unk: 0, line: 20 */ "If you can find a way through the river\nof magma, I calculate a 60% chance\nyou will arrive at one of the sources\nof sacred power.")
/*< 41>*/ 		set_camera(-1, 0)
/*< 40>*/ 		printf(/* textboxtype: 0, unk: 2, line: 22 */ "I recommend you press forward in\nsearch of the power present here.")
          	  case 1:
/*< 35>*/ 		printf(/* textboxtype: 2, unk: 0, line: 21 */ "<0x10012:0x0000000b>Master, I have information for you.\nI've detected a source of sacred power\nsomewhere within this chamber.")
          		goto flw_39
          	}
          }

          void entrypoint_125_11() {
/*< 44>*/ 	start()
/*< 49>*/ 	set_camera(7, 0)
/*< 43>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10012:0x0000000b>Master <heroname>, you have\nreached the mark. Offer your sword\nto it.\n\nIf you do this, I calculate a high\nprobability that you will be shown\nthe way to a part of the <color yellow white<Triforce>coloroff>.")
          }

          void entrypoint_125_12() {
/*< 46>*/ 	start()
/*< 50>*/ 	set_camera(8, 0)
/*< 45>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10012:0x0000000b>Master <heroname>, you have\nreached the mark. Offer your sword\nto it.\n\nIf you do this, I calculate a high\nprobability that you will be shown\nthe way to a part of the <color yellow white<Triforce>coloroff>.")
          }

          void entrypoint_125_13() {
/*< 48>*/ 	start()
/*< 51>*/ 	set_camera(9, 0)
/*< 47>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10012:0x0000000b>Master <heroname>, you have\nreached the mark. Offer your sword\nto it.\n\nIf you do this, I calculate a high\nprobability that you will be shown\nthe way to a part of the <color yellow white<Triforce>coloroff>.")
          }

          void entrypoint_125_01() {
          	start()
/*< 52>*/ 	set_camera(10, 0)
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 61, 'param3': 51}
/*< 61>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 53, 'param3': 16}
/*< 53>*/ 	wait_frames(15)
/*<  1>*/ 	printf(/* textboxtype: 0, unk: 2, line: 1 */ "<0x10012:0x0000000b>Master, I have information to report.\nI've detected three sources of sacred\npower within this building. This power\nclearly radiates from the <color yellow white<<sound 4>Triforce>coloroff>.\nI've triangulated the three sources of\npower and marked them on your map\nas △.")
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
/*<  3>*/ 		printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10012:0x0000000b>Master, I have new information for\nyou. Analysis indicates that the shaking\nyou felt just now was caused by a\n<color red<<sound 4>>coloroff><color red<change in the building's structure>coloroff>.")
/*<  4>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 30}
/*< 55>*/ 		switch (scene_flags[13 /* 0x0 20 */]) {
          		  case 0:
/*< 10>*/ 			printf(/* textboxtype: 0, unk: 2, line: 4 */ "Now that the building's structure has\nbeen altered, it appears you can\nenter the adjacent room.")
          			flw_5:
/*<  5>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 11, 'param3': 34}
/*< 11>*/ 			printf(/* textboxtype: 0, unk: 0, line: 5 */ "I propose you use this <color red<control panel>coloroff> to\nmove through the structure and collect\nthe components of the <color yellow white<Triforce>coloroff>.")
/*<  6>*/ 			story_flags[685 /* us: 805A9B21 0x04, jp: 805ACDA1 0x04 */] = true;
          		  case 1:
/*< 56>*/ 			printf(/* textboxtype: 2, unk: 2, line: 6 */ "By altering the internal structure of\nthis building, you will be able to gain\naccess to other chambers.")
          			goto flw_5
          		}
          	}
          }

