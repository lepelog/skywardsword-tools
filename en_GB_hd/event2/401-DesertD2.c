          void entrypoint_401_00() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_401_01() {
          	start()
/*< 17>*/ 	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
          	  case 0:
/*<100>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*<101>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
/*<104>*/ 				printf("You activated both power generators,\nvrrm! You should now be able to get\nthrough the engine room and come\nsave us, zrrt! So hurry up, bzzt!")
          			  case 1:
          				flw_103:
/*<103>*/ 				printf("You turned on one of the power\ngenerators, vrrm! But you still need to\nactivate one more to be able to get\nthrough the engine room to us, zrrt.\nHurry up and activate the other <r<power\ngenerator>>, then come rescue us, bzzt!")
          			}
          		  case 1:
/*<102>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
          				goto flw_103
          			  case 1:
/*< 18>*/ 				printf("Please rescue us quickly, vweep!\nFirst, you need to turn on the <r<power\ngenerators in the engine room>>, bzzt!")
          			}
          		}
          	  case 1:
/*< 49>*/ 		switch (scene_flags[109 /* 0xC 20 */]) {
          		  case 0:
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 2304, 'next': 106, 'param3': 13}
/*<106>*/ 			switch (scene_flags[69 /* 0x9 20 */]) {
          			  case 0:
/*<107>*/ 				printf("\x0E\x01\x09\x04\x09\xC00That was scary, vrrm!\n\n\n\n\x0E\x01\x09\x04\x03\x900You're a human, aren't you, brrzrrt?\nSo how did you get in here, vweep?")
          				flw_1:
/*<  1>*/ 				printf(".<pause05>.<pause05>.<pause05>\n\n\n\n\x0E\x01\x09\x04\x03\x900You came with the <b<captain >>to save us,\nvweep! I'm so happy, vrrm!\n\n\n\x0E\x01\x09\x04\x03\x900But we can't get out of here while that\n<r<sparky thing >>blocks the exit, zrrt.")
/*< 31>*/ 				set_camera(5, 0)
/*< 61>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 32, 'param3': 6}
/*< 32>*/ 				set_camera(-1, 0)
/*< 29>*/ 				printf(".<pause05>.<pause05>.<pause05>\n\n\n\n\x0E\x01\x09\x04\x03\x900I almost forgot to mention it, but the\nengine room is right below this brig,\nvrrrrrm.")
/*< 33>*/ 				set_camera(1, 0)
/*< 30>*/ 				printf("\x0E\x01\x09\x04\x03\x900There's a corridor from the engine\nroom that connects to this brig, vrrm.")
/*< 34>*/ 				set_camera(-1, 0)
/*< 35>*/ 				printf("\x0E\x01\x09\x04\x03\x900But to get through the engine room to\nhere, bzzt, you need to activate the two\n<r<<pling>power generators>> in the engine room.")
/*<109>*/ 				switch (scene_flags[60 /* 0x6 10 */]) {
          				  case 0:
/*<110>*/ 					switch (scene_flags[61 /* 0x6 20 */]) {
          					  case 0:
/*<113>*/ 						printf("\x0E\x01\x09\x04\x03\x900Huh<pause05>.<pause05>.<pause05>.? Oh! It looks like the engine\nroom is up and running, vrrm.\n\n\n\x0E\x01\x09\x04\x03\x900Did you turn on the <r<power>>, vweep?\n\x0E\x01\x09\x04\x03\x900OK, then I'm sure you can get through\nthe engine room to here now, zrrt!\n\n\x0E\x01\x09\x04\x03\x900We'll be waiting, phoo-weep!")
/*<117>*/ 						story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
          						flw_19:
/*< 19>*/ 						story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */] = true;
          					  case 1:
          						flw_112:
/*<112>*/ 						printf("\x0E\x01\x09\x04\x03\x900Huh<pause05>.<pause05>.<pause05>.? Oh hey, did you turn on one\nof the <r<power generators>>, vrrm?\n\n\n\x0E\x01\x09\x04\x03\x900You still need to activate the other one,\nzrrt! There are two <r<power generators>>,\nvweep!")
/*<139>*/ 						switch (scene_flags[60 /* 0x6 10 */]) {
          						  case 0:
/*<116>*/ 							{'type': 'type3', 'subType': 4, 'param1': 511, 'param2': 0, 'next': 115, 'param3': 30}
          							flw_115:
/*<115>*/ 							story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
/*<120>*/ 							printf("\x0E\x01\x09\x04\x03\x900The last <r<power generator>> is here, vrrm.")
/*<119>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 118, 'param3': 34}
/*<118>*/ 							printf("\x0E\x01\x09\x04\x03\x900You can do it, phoo-weep!")
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
/*< 23>*/ 						printf("\x0E\x01\x09\x04\x03\x900You will need to activate the <r<power\ngenerators >>in two different locations,\nzrrt.")
/*< 22>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 21, 'param3': 34}
/*< 21>*/ 						printf("\x0E\x01\x09\x04\x03\x900You can do it, phoo-weep!")
          						goto flw_19
          					}
          				}
          			  case 1:
/*<108>*/ 				printf("\x0E\x01\x09\x04\x03\x900You're a human, aren't you, brrzrrt?\nSo how did you get in here, vweep?")
          				goto flw_1
          			}
          		  case 1:
/*< 97>*/ 			printf("\x0E\x01\x09\x04\x09\xC00I'm scared, brrzrrt... Please remove\nthose monsters and get us out of here,\nphoo-weep.")
/*<105>*/ 			scene_flags[-1 'Skyloft: Silent Realm'][69 /* 0x9 20 */] = true;
          		}
          	}
          }

          void entrypoint_401_02() {
/*<  4>*/ 	start()
/*<  7>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_401_03() {
/*<  6>*/ 	start()
/*<  5>*/ 	printf("")
          }

          void entrypoint_401_04() {
/*<  8>*/ 	start()
/*< 11>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_401_05() {
/*< 10>*/ 	start()
/*<  9>*/ 	printf("")
          }

          void entrypoint_401_06() {
/*< 12>*/ 	start()
/*< 99>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 256, 'next': 121, 'param3': 13}
/*<121>*/ 	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
          	  case 0:
/*< 13>*/ 		printf("\x0E\x01\x09\x04\x03\x900You really came to save us, vweep!\nMy circuits are glowing with\nhappiness, vrrm!")
          		flw_15:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x03\x900Really, vrrm? You came on board to\nfind <r<Nayru's Flame>>, zrrt?\n\n\n\x0E\x01\x09\x04\x03\x900If you want to reveal <r<Nayru's Flame>>,\nyou're going to have to regain control\nof this ship, phoo-weep.\n\n\x0E\x01\x09\x04\x03\x900The control room is next to the brig,\nbut its huge door is sealed shut and\nyou'll need a key to open it, vrrm.\n\n\x0E\x01\x09\x04\x03\x900First you should head to the <b<captain's\ncabin>>, zrrt! <pling>The control-room key\nshould be in there, vweep!")
/*<144>*/ 		set_camera(12, 0)
/*<145>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 143, 'param3': 15}
/*<143>*/ 		printf("\x0E\x01\x09\x04\x03\x900Please take this <r<key >>as thanks for\nrescuing us, vrrrrm.\n\n\n\x0E\x01\x09\x04\x03\x900This <r<key>> will open the door to the\n<b<captain's cabin>>, vweep.")
/*<146>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 14, 'param3': 42}
/*< 14>*/ 		give_item(1 0x01);
/*<129>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 256, 'next': 128, 'param3': 13}
/*<128>*/ 		set_camera(-1, 0)
/*< 43>*/ 		printf("\x0E\x01\x09\x04\x03\x900You can get to the captain's cabin\nthrough a door on the deck in the\nback, vrrm.")
/*< 41>*/ 		{'type': 'type3', 'subType': 4, 'param1': 768, 'param2': 0, 'next': 126, 'param3': 30}
/*<126>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 42, 'param3': 15}
/*< 42>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 130, 'param3': 34}
/*<130>*/ 		set_camera(12, 0)
/*< 28>*/ 		printf("\x0E\x01\x09\x04\x03\x900But I'm getting out of here, vrrm.\n\n\n\n\x0E\x01\x09\x04\x03\x900Sorry to leave you on your own, but\nyou look like you can handle it, zrrt!\nWe're counting on you, vweep!")
/*< 57>*/ 		set_camera(6, 0)
/*< 60>*/ 		{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 256, 'next': 58, 'param3': 15}
/*< 58>*/ 		{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 0, 'next': 127, 'param3': 14}
/*<127>*/ 		{'type': 'type3', 'subType': 4, 'param1': 2, 'param2': 0, 'next': 59, 'param3': 13}
/*< 59>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 16, 'param3': 6}
/*< 16>*/ 		story_flags[262 /* us: 805A9AF9 0x01, jp: 805ACD79 0x01 */] = true;
/*< 48>*/ 		scene_flags[18 'Lanayru: Sandship'][108 /* 0xC 10 */] = true;
          	  case 1:
/*<122>*/ 		switch (scene_flags[69 /* 0x9 20 */]) {
          		  case 0:
/*<123>*/ 			printf("\x0E\x01\x09\x04\x03\x900I've seen you before, vweep<pause05>.<pause05>.<pause05>.\n\x0E\x01\x09\x04\x03\x900You're the one who left me here\nearlier, vrrm. That's pretty cold\nfor a human, zrrt!\n\x0E\x01\x09\x04\x03\x900But how did you get in here anyway,\nphoo-weep?")
          			flw_125:
/*<125>*/ 			printf("\x0E\x01\x09\x04\x03\x900.<pause05>.<pause05>.<pause05>\n\n\n\n\x0E\x01\x09\x04\x03\x900So you came with <b<Skipper>> to rescue us,\nvrrm?! You've made us so happy, zrrt!")
          			goto flw_15
          		  case 1:
/*<124>*/ 			printf("\x0E\x01\x09\x04\x03\x900You're a human, right, vrrm?\nHow did you get in here, zrrt?")
          			goto flw_125
          		}
          	}
          }

          void entrypoint_401_07() {
/*< 25>*/ 	start()
/*< 37>*/ 	set_camera(2, 0)
/*< 26>*/ 	printf("\x0E\x01\x09\x04\x03\x900\x0E\x03\x01\x00Link! Good job, vweep!")
/*< 38>*/ 	set_camera(3, 0)
/*< 36>*/ 	printf("\x0E\x01\x09\x04\x03\x900Now the ship looks just like it used to,\nphoo-weep! That makes me so happy,\nvrrm!\n\n\x0E\x01\x09\x04\x03\x900Now I just need you to go rescue my\n<b<crew>>, vweep!\n\n\n\x0E\x01\x09\x04\x03\x900I'm pretty sure they're being held\nin the <b<<pling>brig >>inside the ship, brrzrrt! ")
/*< 39>*/ 	{'type': 'type3', 'subType': 4, 'param1': 766, 'param2': 0, 'next': 40, 'param3': 30}
/*< 40>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 34}
/*< 27>*/ 	printf("\x0E\x01\x09\x04\x03\x900It's still pretty dangerous here, so I'll\njust wait in the boat, zrrt.\n\n\n\x0E\x01\x09\x04\x03\x900You can do it, vrrm!")
/*< 50>*/ 	story_flags[277 /* us: 805A9AF8 0x80, jp: 805ACD78 0x80 */] = true;
/*<138>*/ 	scene_flags[18 'Lanayru: Sandship'][19 /* 0x3 08 */] = true;
          }

          void entrypoint_401_08() {
/*< 44>*/ 	start()
/*< 45>*/ 	printf("")
/*< 46>*/ 	changeScene(1, 0) // 
          }

          void entrypoint_401_09() {
/*< 51>*/ 	start()
/*< 62>*/ 	set_camera(7, 0)
/*< 56>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 54, 'param3': 6}
/*< 54>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 52, 'param3': 35}
/*< 52>*/ 	printf("A report, \x0E\x01\x12\x04\x00\x0BMaster. Judging by their size,\nthese <r<tentacles >>belong to a monster\nof considerable size.\n\nThe current situation is difficult to\ndetermine with complete accuracy,\nbut signs indicate that this ship is\nunder attack.\nIf we do nothing, there is an 80%\nchance the ship will capsize.\n\n\nI recommend forcing it back with\n<r<<pling>>><r<sacred power>>, then exiting to further\nassess the current situation.")
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
/*< 70>*/ 				printf("\x0E\x01\x12\x04\x00\x01Master, I can confirm that the engine\nroom is now fully operational.\n\n\nI suggest hurrying to the brig through\nthe engine room and <g<freeing>> the crew\nimmediately.")
          			  case 1:
          				flw_69:
/*< 69>*/ 				printf("\x0E\x01\x12\x04\x00\x01Master, I can confirm that, as\nmentioned by the crew, the engine\nroom is now fully operational.\n\nBut the corridor to the brig will not be\npassable until you activate the other\n<r<power generator>>. I suggest hurrying\nto the second <r<power generator>>.")
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
/*< 68>*/ 				printf("\x0E\x01\x12\x04\x00\x01Master, I am detecting strong\nvibrations again.\n\n\nThe current situation is difficult\nto accurately assess, but I suggest\nhurrying to the area beneath the\n<b<crew in the brig >>first.")
          			  case 1:
          				flw_71:
/*< 71>*/ 				printf("\x0E\x01\x12\x04\x00\x01Master, I am detecting very strong\nvibrations.\n\n\nSigns indicate that activating this\nmechanism has caused something\nwithin the ship to begin moving.\n\nThe current situation is difficult\nto accurately assess, but I suggest\nhurrying to the <b<crew in the brig>>\nand freeing them first.")
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
/*< 76>*/ 	printf("\x0E\x01\x12\x04\x00\x01Master, I conjecture that this is the\n<r<key >>to the <pling>control room mentioned by\nthe crew.")
/*< 79>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1278, 'param2': 0, 'next': 77, 'param3': 30}
/*< 77>*/ 	printf("My memory indicates that the location\nof the <b<door to the control room >>is\nmarked with the \x0E\x02\x04\x02\x19CD symbol.")
/*< 80>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 78, 'param3': 34}
/*< 78>*/ 	printf("I suggest you quickly make your way to\nthe <b<control room>>.")
          }

          void entrypoint_401_12() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf("\x0E\x01\x12\x04\x00\x01Master, please look.")
/*< 91>*/ 	set_camera(8, 0)
/*< 89>*/ 	printf("This large door here is sealed shut.")
/*< 92>*/ 	set_camera(-1, 0)
/*< 90>*/ 	printf("This door must lead to an important\nroom in the ship.")
          }

          void entrypoint_401_13() {
/*< 83>*/ 	start()
/*< 84>*/ 	printf("Warning, \x0E\x01\x12\x04\x00\x01Master.")
/*< 95>*/ 	set_camera(9, 0)
/*< 93>*/ 	printf("I sense an evil presence on the other\nside of this door.")
/*< 96>*/ 	set_camera(-1, 0)
/*< 94>*/ 	printf("There is a 90% chance it is the primary\nbody mass of the creature whose\ntentacles are destroying this ship.\n\nI suggest making all necessary\npreparations before exiting to\nthe outside of the ship.")
          }

          void entrypoint_401_14() {
/*< 85>*/ 	start()
/*<154>*/ 	set_camera(17, 0)
/*<155>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 151, 'param3': 6}
/*<151>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 152, 'param3': 51}
/*<152>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 86, 'param3': 16}
/*< 86>*/ 	printf("\x0E\x01\x12\x04\x00\x01Master, I have important information\nfor you. There is a 90% chance the\nobject you see over there is a\n<pling><r<Timeshift Stone>>.\nIf you could <g<deliver an impact >>to it by\nsome means, it could have a significant\neffect on the ship.")
/*<153>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 156, 'param3': 36}
/*<156>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 42}
          }

          void entrypoint_401_15() {
/*< 87>*/ 	start()
/*<147>*/ 	set_camera(16, 0)
/*<148>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 149, 'param3': 51}
/*<149>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 88, 'param3': 16}
/*< 88>*/ 	printf("\x0E\x01\x12\x04\x00\x01Master, that synthetic life-form...\nThere is a 99% chance that it was the\n<b<pirate>> described by the captain.\n\nI can't help but admire the tenacity\nit has displayed in staying alive and\nfunctional all these years.")
/*<150>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_401_16() {
/*<136>*/ 	start()
/*<137>*/ 	set_camera(14, 0)
/*<140>*/ 	{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 0, 'next': 141, 'param3': 51}
/*<141>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 132, 'param3': 16}
/*<132>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaster, a report about the bow you\nhave just obtained...\n\n\nYour bow's elasticity can propel arrows\nthrough the air with great force,\nallowing you to <g<strike your targets\nfrom afar>>.\nTo confirm the controls associated\nwith your bow, raise your bow by\npressing \x0E\x02\x04\x02\x29CD then press \x0E\x02\x04\x02\x13CD.\x0E\x01\x11\x02\xFCD\x0E\x01\x11\x02\xBCD")
/*<164>*/ 	set_camera(19, 0)
/*<163>*/ 	printf("You can also shoot arrows to strike\n<r<certain devices >>in order to activate\nthem.")
/*<135>*/ 	set_camera(13, 0)
/*<133>*/ 	printf("I have confirmed that such a <r<device\n>>exists on the <b<<pling>>><b<deck>>.")
/*<134>*/ 	set_camera(15, 0)
/*<131>*/ 	printf("However, it will be difficult to target it\nfrom here, so I recommend you return\nto the deck.")
/*<142>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_401_17() {
/*<157>*/ 	start()
/*<158>*/ 	printf("\x0E\x01\x12\x04\x00\x01Master, look up.")
/*<161>*/ 	set_camera(18, 0)
/*<160>*/ 	printf("You can reach the Timeshift Stone\non the deck through the ventilation\nshaft in the ceiling.")
/*<162>*/ 	set_camera(-1, 0)
/*<159>*/ 	scene_flags[18 'Lanayru: Sandship'][56 /* 0x6 01 */] = true;
          }

