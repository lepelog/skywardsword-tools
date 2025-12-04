          void entrypoint_401_00() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_401_01() {
          	start()
/*< 17>*/ 	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
          	  case 0:
/*<100>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*<101>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
/*<104>*/ 				printf(/* textboxtype: 0, unk: 1, line: 10 */ "You activated both power generators,\nvrrm! You should now be able to get\nthrough the engine room and come\nsave us, zrrt! So hurry up, bzzt!")
          			  case 1:
          				flw_103:
/*<103>*/ 				printf(/* textboxtype: 1, unk: 0, line: 9 */ "You turned on one of the power\ngenerators, vrrm! But you still need to\nactivate one more to be able to get\nthrough the engine room to us, zrrt.\nHurry up and activate the other <color red<power\ngenerator>coloroff>, then come rescue us, bzzt!")
          			}
          		  case 1:
/*<102>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
          				goto flw_103
          			  case 1:
/*< 18>*/ 				printf(/* textboxtype: 1, unk: 0, line: 6 */ "Please rescue us quickly, vweep!\nFirst, you need to turn on the <color red<power\ngenerators in the engine room>coloroff>, bzzt!")
          			}
          		}
          	  case 1:
/*< 49>*/ 		switch (scene_flags[109 /* 0xC 20 */]) {
          		  case 0:
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 2304, 'next': 106, 'param3': 13}
/*<106>*/ 			switch (scene_flags[69 /* 0x9 20 */]) {
          			  case 0:
/*<107>*/ 				printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00090c00>That was scary, vrrm!\n\n\n\n<0x10009:0x00030900>You're a human, aren't you, brrzrrt?\nSo how did you get in here, vweep?")
          				flw_1:
/*<  1>*/ 				printf(/* textboxtype: 0, unk: 1, line: 4 */ ".<pause 5>.<pause 5>.<pause 5>\n\n\n\n<0x10009:0x00030900>You came with the <color blue<captain >coloroff>to save us,\nvweep! I'm so happy, vrrm!\n\n\n<0x10009:0x00030900>But we can't get out of here while that\n<color red<sparky thing >coloroff>blocks the exit, zrrt.")
/*< 31>*/ 				set_camera(5, 0)
/*< 61>*/ 				wait_frames(60)
/*< 32>*/ 				set_camera(-1, 0)
/*< 29>*/ 				printf(/* textboxtype: 0, unk: 0, line: 20 */ ".<pause 5>.<pause 5>.<pause 5>\n\n\n\n<0x10009:0x00030900>I almost forgot to mention it, but the\nengine room is right below this brig,\nvrrrrrm.")
/*< 33>*/ 				set_camera(1, 0)
/*< 30>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00030900>There's a corridor from the engine\nroom that connects to this brig, vrrm.")
/*< 34>*/ 				set_camera(-1, 0)
/*< 35>*/ 				printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00030900>But to get through the engine room to\nhere, bzzt, you need to activate the two\n<color red<<sound 4>power generators>coloroff> in the engine room.")
/*<109>*/ 				switch (scene_flags[60 /* 0x6 10 */]) {
          				  case 0:
/*<110>*/ 					switch (scene_flags[61 /* 0x6 20 */]) {
          					  case 0:
/*<113>*/ 						printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00030900>Huh<pause 5>.<pause 5>.<pause 5>.? Oh! It looks like the engine\nroom is up and running, vrrm.\n\n\n<0x10009:0x00030900>Did you turn on the <color red<power>coloroff>, vweep?\n<0x10009:0x00030900>OK, then I'm sure you can get through\nthe engine room to here now, zrrt!\n\n<0x10009:0x00030900>We'll be waiting, phoo-weep!")
/*<117>*/ 						story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
          						flw_19:
/*< 19>*/ 						story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */] = true;
          					  case 1:
          						flw_112:
/*<112>*/ 						printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00030900>Huh<pause 5>.<pause 5>.<pause 5>.? Oh hey, did you turn on one\nof the <color red<power generators>coloroff>, vrrm?\n\n\n<0x10009:0x00030900>You still need to activate the other one,\nzrrt! There are two <color red<power generators>coloroff>,\nvweep!")
/*<139>*/ 						switch (scene_flags[60 /* 0x6 10 */]) {
          						  case 0:
/*<116>*/ 							{'type': 'type3', 'subType': 4, 'param1': 511, 'param2': 0, 'next': 115, 'param3': 30}
          							flw_115:
/*<115>*/ 							story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
/*<120>*/ 							printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00030900>The last <color red<power generator>coloroff> is here, vrrm.")
/*<119>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 118, 'param3': 34}
/*<118>*/ 							printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00030900>You can do it, phoo-weep!")
          							goto flw_19
          						  case 1:
/*<114>*/ 							{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': 0, 'next': 115, 'param3': 30}
          							goto flw_115
          						}
          					}
          				  case 1:
/*<111>*/ 					switch (scene_flags[61 /* 0x6 20 */]) {
          					  case 0:
          						goto flw_112
          					  case 1:
/*< 20>*/ 						{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': 0, 'next': 47, 'param3': 30}
/*< 47>*/ 						{'type': 'type3', 'subType': 4, 'param1': 511, 'param2': 0, 'next': 24, 'param3': 30}
/*< 24>*/ 						story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
/*< 23>*/ 						printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00030900>You will need to activate the <color red<power\ngenerators >coloroff>in two different locations,\nzrrt.")
/*< 22>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 21, 'param3': 34}
/*< 21>*/ 						printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00030900>You can do it, phoo-weep!")
          						goto flw_19
          					}
          				}
          			  case 1:
/*<108>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00030900>You're a human, aren't you, brrzrrt?\nSo how did you get in here, vweep?")
          				goto flw_1
          			}
          		  case 1:
/*< 97>*/ 			printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00090c00>I'm scared, brrzrrt... Please remove\nthose monsters and get us out of here,\nphoo-weep.")
/*<105>*/ 			scene_flags[-1 'Skyloft: Silent Realm'][69 /* 0x9 20 */] = true;
          		}
          	}
          }

          void entrypoint_401_02() {
/*<  4>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_401_03() {
/*<  6>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 0, unk: 1, line: 13 */ "")
          }

          void entrypoint_401_04() {
/*<  8>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_401_05() {
/*< 10>*/ 	start()
/*<  9>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "")
          }

          void entrypoint_401_06() {
/*< 12>*/ 	start()
/*< 99>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 256, 'next': 121, 'param3': 13}
/*<121>*/ 	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
          	  case 0:
/*< 13>*/ 		printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00030900>You really came to save us, vweep!\nMy circuits are glowing with\nhappiness, vrrm!")
          		flw_15:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00030900>Really, vrrm? You came on board to\nfind <color red<Nayru's Flame>coloroff>, zrrt?\n\n\n<0x10009:0x00030900>If you want to reveal <color red<Nayru's Flame>coloroff>,\nyou're going to have to regain control\nof this ship, phoo-weep.\n\n<0x10009:0x00030900>The control room is next to the brig,\nbut its huge door is sealed shut and\nyou'll need a key to open it, vrrm.\n\n<0x10009:0x00030900>First you should head to the <color blue<captain's\ncabin>coloroff>, zrrt! <sound 4>The control-room key\nshould be in there, vweep!")
/*<144>*/ 		set_camera(12, 0)
/*<145>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 143, 'param3': 15}
/*<143>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00030900>Please take this <color red<key >coloroff>as thanks for\nrescuing us, vrrrrm.\n\n\n<0x10009:0x00030900>This <color red<key>coloroff> will open the door to the\n<color blue<captain's cabin>coloroff>, vweep.")
/*<146>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 14, 'param3': 42}
/*< 14>*/ 		give_item(1 0x01);
/*<129>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 256, 'next': 128, 'param3': 13}
/*<128>*/ 		set_camera(-1, 0)
/*< 43>*/ 		printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x00030900>You can get to the captain's cabin\nthrough a door on the deck in the\nback, vrrm.")
/*< 41>*/ 		{'type': 'type3', 'subType': 4, 'param1': 768, 'param2': 0, 'next': 126, 'param3': 30}
/*<126>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 42, 'param3': 15}
/*< 42>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 130, 'param3': 34}
/*<130>*/ 		set_camera(12, 0)
/*< 28>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00030900>But I'm getting out of here, vrrm.\n\n\n\n<0x10009:0x00030900>Sorry to leave you on your own, but\nyou look like you can handle it, zrrt!\nWe're counting on you, vweep!")
/*< 57>*/ 		set_camera(6, 0)
/*< 60>*/ 		{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 256, 'next': 58, 'param3': 15}
/*< 58>*/ 		{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 0, 'next': 127, 'param3': 14}
/*<127>*/ 		{'type': 'type3', 'subType': 4, 'param1': 2, 'param2': 0, 'next': 59, 'param3': 13}
/*< 59>*/ 		wait_frames(30)
/*< 16>*/ 		story_flags[262 /* us: 805A9AF9 0x01, jp: 805ACD79 0x01 */] = true;
/*< 48>*/ 		scene_flags[18 'Lanayru: Sandship'][108 /* 0xC 10 */] = true;
          	  case 1:
/*<122>*/ 		switch (scene_flags[69 /* 0x9 20 */]) {
          		  case 0:
/*<123>*/ 			printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00030900>I've seen you before, vweep<pause 5>.<pause 5>.<pause 5>.\n<0x10009:0x00030900>You're the one who left me here\nearlier, vrrm. That's pretty cold\nfor a human, zrrt!\n<0x10009:0x00030900>But how did you get in here anyway,\nphoo-weep?")
          			flw_125:
/*<125>*/ 			printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00030900>.<pause 5>.<pause 5>.<pause 5>\n\n\n\n<0x10009:0x00030900>So you came with <color blue<Skipper>coloroff> to rescue us,\nvrrm?! You've made us so happy, zrrt!")
          			goto flw_15
          		  case 1:
/*<124>*/ 			printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00030900>You're a human, right, vrrm?\nHow did you get in here, zrrt?")
          			goto flw_125
          		}
          	}
          }

          void entrypoint_401_07() {
/*< 25>*/ 	start()
/*< 37>*/ 	set_camera(2, 0)
/*< 26>*/ 	printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00030900><0x30001:0x><heroname>! Good job, vweep!")
/*< 38>*/ 	set_camera(3, 0)
/*< 36>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00030900>Now the ship looks just like it used to,\nphoo-weep! That makes me so happy,\nvrrm!\n\n<0x10009:0x00030900>Now I just need you to go rescue my\n<color blue<crew>coloroff>, vweep!\n\n\n<0x10009:0x00030900>I'm pretty sure they're being held\nin the <color blue<<sound 4>brig >coloroff>inside the ship, brrzrrt! ")
/*< 39>*/ 	{'type': 'type3', 'subType': 4, 'param1': 766, 'param2': 0, 'next': 40, 'param3': 30}
/*< 40>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 34}
/*< 27>*/ 	printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00030900>It's still pretty dangerous here, so I'll\njust wait in the boat, zrrt.\n\n\n<0x10009:0x00030900>You can do it, vrrm!")
/*< 50>*/ 	story_flags[277 /* us: 805A9AF8 0x80, jp: 805ACD78 0x80 */] = true;
/*<138>*/ 	scene_flags[18 'Lanayru: Sandship'][19 /* 0x3 08 */] = true;
          }

          void entrypoint_401_08() {
/*< 44>*/ 	start()
/*< 45>*/ 	printf(/* textboxtype: 0, unk: 1, line: 34 */ "")
/*< 46>*/ 	changeScene(1, 0) // 
          }

          void entrypoint_401_09() {
/*< 51>*/ 	start()
/*< 62>*/ 	set_camera(7, 0)
/*< 56>*/ 	wait_frames(30)
/*< 54>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 52, 'param3': 35}
/*< 52>*/ 	printf(/* textboxtype: 0, unk: 0, line: 35 */ "A report, <0x10012:0x0000000b>Master. Judging by their size,\nthese <color red<tentacles >coloroff>belong to a monster\nof considerable size.\n\nThe current situation is difficult to\ndetermine with complete accuracy,\nbut signs indicate that this ship is\nunder attack.\nIf we do nothing, there is an 80%\nchance the ship will capsize.\n\n\nI recommend forcing it back with\n<color red<<sound 4>>coloroff><color red<sacred power>coloroff>, then exiting to further\nassess the current situation.")
/*< 55>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 53, 'param3': 36}
/*< 53>*/ 	scene_flags[18 'Lanayru: Sandship'][79 /* 0x8 80 */] = true;
          }

          void entrypoint_401_10() {
/*< 63>*/ 	start()
/*< 64>*/ 	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
          	  case 0:
/*< 65>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*< 66>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
/*< 70>*/ 				printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10012:0x00000001>Master, I can confirm that the engine\nroom is now fully operational.\n\n\nI suggest hurrying to the brig through\nthe engine room and <color green<freeing>coloroff> the crew\nimmediately.")
          			  case 1:
          				flw_69:
/*< 69>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10012:0x00000001>Master, I can confirm that, as\nmentioned by the crew, the engine\nroom is now fully operational.\n\nBut the corridor to the brig will not be\npassable until you activate the other\n<color red<power generator>coloroff>. I suggest hurrying\nto the second <color red<power generator>coloroff>.")
          			}
          		  case 1:
/*< 67>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
          				goto flw_69
          			  case 1:
          				goto flw_69
          			}
          		}
          	  case 1:
/*< 72>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*< 73>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
/*< 68>*/ 				printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10012:0x00000001>Master, I am detecting strong\nvibrations again.\n\n\nThe current situation is difficult\nto accurately assess, but I suggest\nhurrying to the area beneath the\n<color blue<crew in the brig >coloroff>first.")
          			  case 1:
          				flw_71:
/*< 71>*/ 				printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10012:0x00000001>Master, I am detecting very strong\nvibrations.\n\n\nSigns indicate that activating this\nmechanism has caused something\nwithin the ship to begin moving.\n\nThe current situation is difficult\nto accurately assess, but I suggest\nhurrying to the <color blue<crew in the brig>coloroff>\nand freeing them first.")
          			}
          		  case 1:
/*< 74>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
          				goto flw_71
          			  case 1:
          				goto flw_71
          			}
          		}
          	}
          }

          void entrypoint_401_11() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10012:0x00000001>Master, I conjecture that this is the\n<color red<key >coloroff>to the <sound 4>control room mentioned by\nthe crew.")
/*< 79>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1278, 'param2': 0, 'next': 77, 'param3': 30}
/*< 77>*/ 	printf(/* textboxtype: 0, unk: 0, line: 41 */ "My memory indicates that the location\nof the <color blue<door to the control room >coloroff>is\nmarked with the (X) symbol.")
/*< 80>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 78, 'param3': 34}
/*< 78>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "I suggest you quickly make your way to\nthe <color blue<control room>coloroff>.")
          }

          void entrypoint_401_12() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10012:0x00000001>Master, please look.")
/*< 91>*/ 	set_camera(8, 0)
/*< 89>*/ 	printf(/* textboxtype: 0, unk: 0, line: 44 */ "This large door here is sealed shut.")
/*< 92>*/ 	set_camera(-1, 0)
/*< 90>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "This door must lead to an important\nroom in the ship.")
          }

          void entrypoint_401_13() {
/*< 83>*/ 	start()
/*< 84>*/ 	printf(/* textboxtype: 0, unk: 1, line: 46 */ "Warning, <0x10012:0x00000001>Master.")
/*< 95>*/ 	set_camera(9, 0)
/*< 93>*/ 	printf(/* textboxtype: 0, unk: 0, line: 47 */ "I sense an evil presence on the other\nside of this door.")
/*< 96>*/ 	set_camera(-1, 0)
/*< 94>*/ 	printf(/* textboxtype: 1, unk: 0, line: 48 */ "There is a 90% chance it is the primary\nbody mass of the creature whose\ntentacles are destroying this ship.\n\nI suggest making all necessary\npreparations before exiting to\nthe outside of the ship.")
          }

          void entrypoint_401_14() {
/*< 85>*/ 	start()
/*<154>*/ 	set_camera(17, 0)
/*<155>*/ 	wait_frames(15)
/*<151>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 152, 'param3': 51}
/*<152>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 86, 'param3': 16}
/*< 86>*/ 	printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10012:0x00000001>Master, I have important information\nfor you. There is a 90% chance the\nobject you see over there is a\n<sound 4><color red<Timeshift Stone>coloroff>.\nIf you could <color green<deliver an impact >coloroff>to it by\nsome means, it could have a significant\neffect on the ship.")
/*<153>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 156, 'param3': 36}
/*<156>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 42}
          }

          void entrypoint_401_15() {
/*< 87>*/ 	start()
/*<147>*/ 	set_camera(16, 0)
/*<148>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 149, 'param3': 51}
/*<149>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 88, 'param3': 16}
/*< 88>*/ 	printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10012:0x00000001>Master, that synthetic life-form...\nThere is a 99% chance that it was the\n<color blue<pirate>coloroff> described by the captain.\n\nI can't help but admire the tenacity\nit has displayed in staying alive and\nfunctional all these years.")
/*<150>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_401_16() {
/*<136>*/ 	start()
/*<137>*/ 	set_camera(14, 0)
/*<140>*/ 	{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 0, 'next': 141, 'param3': 51}
/*<141>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 132, 'param3': 16}
/*<132>*/ 	printf(/* textboxtype: 0, unk: 2, line: 52 */ "<0x10012:0x0000000b>Master, a report about the bow you\nhave just obtained...\n\n\nYour bow's elasticity can propel arrows\nthrough the air with great force,\nallowing you to <color green<strike your targets\nfrom afar>coloroff>.\nTo confirm the controls associated\nwith your bow, raise your bow by\npressing <icon 41> then press <icon 19>.<0x10011:0x0fcd><0x10011:0x0bcd>")
/*<164>*/ 	set_camera(19, 0)
/*<163>*/ 	printf(/* textboxtype: 0, unk: 0, line: 53 */ "You can also shoot arrows to strike\n<color red<certain devices >coloroff>in order to activate\nthem.")
/*<135>*/ 	set_camera(13, 0)
/*<133>*/ 	printf(/* textboxtype: 2, unk: 0, line: 54 */ "I have confirmed that such a <color red<device\n>coloroff>exists on the <color blue<<sound 4>>coloroff><color blue<deck>coloroff>.")
/*<134>*/ 	set_camera(15, 0)
/*<131>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "However, it will be difficult to target it\nfrom here, so I recommend you return\nto the deck.")
/*<142>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_401_17() {
/*<157>*/ 	start()
/*<158>*/ 	printf(/* textboxtype: 0, unk: 2, line: 55 */ "<0x10012:0x00000001>Master, look up.")
/*<161>*/ 	set_camera(18, 0)
/*<160>*/ 	printf(/* textboxtype: 0, unk: 0, line: 56 */ "You can reach the Timeshift Stone\non the deck through the ventilation\nshaft in the ceiling.")
/*<162>*/ 	set_camera(-1, 0)
/*<159>*/ 	scene_flags[18 'Lanayru: Sandship'][56 /* 0x6 01 */] = true;
          }

