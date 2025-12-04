          void entrypoint_406_01() {
          	start()
/*< 26>*/ 	switch (story_flags[270 /* us: 805A9AF8 0x01, jp: 805ACD78 0x01 */]) {
          	  case 0:
/*<100>*/ 		switch (context_related4(0)) {
          		  case 0:
/*<108>*/ 			{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3330, 'next': 10, 'param3': 13}
/*< 10>*/ 			switch (story_flags[274 /* us: 805A9AF8 0x10, jp: 805ACD78 0x10 */]) {
          			  case 0:
/*< 18>*/ 				story_flags[503 /* us: 805A9B12 0x20, jp: 805ACD92 0x20 */] = true;
/*< 70>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 24, 'param3': 12}
/*< 24>*/ 				switch (zone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*< 32>*/ 					printf(/* textboxtype: 1, unk: 0, line: 2 */ "Up for another run on the Rickety\nCoaster? You never know what will\nhappen. Just 20 Rupees!\n[1-]Sure![2]Uh...no.")
          					flw_2:
/*<  2>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_8:
/*<  8>*/ 						switch (has_rupees(20)) {
          						  case 0:
/*<  9>*/ 							rupees += -20;
/*< 56>*/ 							printf(/* textboxtype: 1, unk: 0, line: 26 */ "So what track will it be?\n[1-]Scary![2-]Heart stopping!")
/*< 57>*/ 							switch (choice(2)) {
          							  case 0:
/*<113>*/ 								{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3332, 'next': 58, 'param3': 13}
/*< 58>*/ 								printf(/* textboxtype: 1, unk: 0, line: 27 */ "Got it--the scary track it is. Good luck!")
/*< 61>*/ 								story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */] = false;
          								flw_15:
/*< 15>*/ 								switch (story_flags[503 /* us: 805A9B12 0x20, jp: 805ACD92 0x20 */]) {
          								  case 0:
/*< 41>*/ 									printf(/* textboxtype: 1, unk: 0, line: 6 */ "Want to hear the rules again?\n[1-]Sure.[2]Nope.")
/*< 16>*/ 									switch (choice(2)) {
          									  case 0:
/*<111>*/ 										{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3332, 'next': 42, 'param3': 13}
/*< 42>*/ 										printf(/* textboxtype: 1, unk: 0, line: 7 */ "This here is a race against time--\nscream across that finish line as fast\nas you can!\n\nTilt the Wii Remote to lean your cart.\nIf you lean at just the right angle on a\ncorner, you will get a nice speed boost.\n\nLose your concentration when you are\ncruising around a bend, though, and\nyou will run right off the rails. If that\nhappens, you lose the race.")
          										flw_84:
/*< 84>*/ 										switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          										  case 0:
/*< 85>*/ 											switch (story_flags[687 /* us: 805A9B21 0x10, jp: 805ACDA1 0x10 */]) {
          											  case 0:
/*< 88>*/ 												printf(/* textboxtype: 1, unk: 0, line: 29 */ "Your best time so far is:\n<numeric arg3 0>:<numeric arg4 2>.<numeric arg5 2>.")
          												flw_101:
/*<101>*/ 												{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3330, 'next': 44, 'param3': 13}
/*< 44>*/ 												printf(/* textboxtype: 1, unk: 0, line: 9 */ "All right, let us get going!")
/*< 62>*/ 												story_flags[501 /* us: 805A9B12 0x08, jp: 805ACD92 0x08 */] = true;
/*<  3>*/ 												make_actor_do_something(0, 0)
/*<124>*/ 												{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          											  case 1:
          												goto flw_101
          											}
          										  case 1:
/*< 14>*/ 											switch (story_flags[500 /* us: 805A9B12 0x04, jp: 805ACD92 0x04 */]) {
          											  case 0:
/*< 43>*/ 												printf(/* textboxtype: 1, unk: 0, line: 8 */ "Your best time so far is:\n<numeric arg0 0>:<numeric arg1 2>.<numeric arg2 2>.")
          												goto flw_101
          											  case 1:
          												goto flw_101
          											}
          										}
          									  case 1:
          										goto flw_84
          									}
          								  case 1:
          									goto flw_84
          								}
          							  case 1:
/*<112>*/ 								{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3332, 'next': 59, 'param3': 13}
/*< 59>*/ 								printf(/* textboxtype: 1, unk: 0, line: 28 */ "So you want the heart-stopping track,\neh? You got it, but I just hope you are\nready...")
/*< 60>*/ 								story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */] = true;
          								goto flw_15
          							}
          						  case 1:
/*<103>*/ 							{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3333, 'next': 40, 'param3': 13}
/*< 40>*/ 							printf(/* textboxtype: 1, unk: 0, line: 5 */ "You are out of cash? Well, then I guess\nthat is that. Come back once you get\nyourself some pocket change.")
          						}
          					  case 1:
/*<105>*/ 						{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3333, 'next': 34, 'param3': 13}
/*< 34>*/ 						printf(/* textboxtype: 1, unk: 0, line: 4 */ "Oh well. Maybe some other time, eh?")
          					}
          				  case 1:
/*< 33>*/ 					printf(/* textboxtype: 1, unk: 0, line: 3 */ "Hey, <heroname>! You are back!\n\n\n\nThink you have got the stomach to ride\nthe Rickety Coaster? Just 20 Rupees!\n[1-]I'm in![2]No, thanks.")
          					goto flw_2
          				}
          			  case 1:
/*< 21>*/ 				switch (zone_temp_flags[0 /* 0x1 01 */]) {
          				  case 0:
/*< 30>*/ 					printf(/* textboxtype: 1, unk: 0, line: 10 */ "So I have your attention?\n[1-]Yes.[2]No.")
          					flw_19:
/*< 19>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_110:
/*<110>*/ 						{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3332, 'next': 38, 'param3': 13}
/*< 38>*/ 						printf(/* textboxtype: 1, unk: 0, line: 7 */ "This here is a race against time--\nscream across that finish line as fast\nas you can!\n\nTilt the Wii Remote to lean your cart.\nIf you lean at just the right angle on a\ncorner, you will get a nice speed boost.\n\nLose your concentration when you are\ncruising around a bend, though, and\nyou will run right off the rails. If that\nhappens, you lose the race.")
/*< 11>*/ 						story_flags[274 /* us: 805A9AF8 0x10, jp: 805ACD78 0x10 */] = true;
/*< 71>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 55, 'param3': 12}
/*< 55>*/ 						printf(/* textboxtype: 1, unk: 0, line: 25 */ "What do you say? Have you got the guts\nto ride the Rickety Coaster? Just 20\nRupees a ride.\n[1-]Sure![2]No, thanks.")
/*< 22>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_8
          						  case 1:
/*<104>*/ 							{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3333, 'next': 37, 'param3': 13}
/*< 37>*/ 							printf(/* textboxtype: 1, unk: 0, line: 16 */ "What about all these prizes I have?\nSo you are OK with letting them go to\nwaste? You really are not interested?\n[1-]Let's do it.[2]I'm sure.")
/*< 23>*/ 							switch (choice(2)) {
          							  case 0:
          								goto flw_8
          							  case 1:
/*<102>*/ 								{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3330, 'next': 39, 'param3': 13}
/*< 39>*/ 								printf(/* textboxtype: 1, unk: 0, line: 15 */ "Oh, all right, see you some other time!")
          							}
          						}
          					  case 1:
/*<109>*/ 						{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3333, 'next': 36, 'param3': 13}
/*< 36>*/ 						printf(/* textboxtype: 1, unk: 0, line: 14 */ "You could at least let me explain\nthe rules...")
/*< 20>*/ 						zone_temp_flags[0 /* 0x1 01 */] = true;
          					}
          				  case 1:
/*< 31>*/ 					printf(/* textboxtype: 1, unk: 0, line: 11 */ "Hey, you! What are you doing?\n\n\n\nWell, you are here now...so how about a\nlittle fun?\n[1-]Fun?[2]No way.")
/*< 45>*/ 					switch (choice(2)) {
          					  case 0:
/*< 35>*/ 						printf(/* textboxtype: 1, unk: 0, line: 13 */ "Got your attention, eh? Geheh.\nLet me explain...")
          						goto flw_110
          					  case 1:
/*< 46>*/ 						printf(/* textboxtype: 1, unk: 0, line: 12 */ "Now, come on, do not be like that.\nHear me out first!\n[1-]OK.[2]No chance.")
          						goto flw_19
          					}
          				}
          			}
          		  case 1:
/*<125>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 63, 'param3': 46}
/*< 63>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 3, 'next': 47, 'param3': 44}
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "You finished!")
/*< 83>*/ 			switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          			  case 0:
/*< 82>*/ 				switch (story_flags[687 /* us: 805A9B21 0x10, jp: 805ACDA1 0x10 */]) {
          				  case 0:
          					flw_12:
/*< 12>*/ 					switch (context_related2(0)) {
          					  case 0:
/*<114>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 3847, 'next': 48, 'param3': 13}
/*< 48>*/ 						printf(/* textboxtype: 1, unk: 0, line: 19 */ "You set a new record!\nGreat work!")
          						flw_4:
/*<  4>*/ 						switch (context_related4(0)) {
          						  case 0:
/*< 65>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 3590, 'next': 51, 'param3': 13}
/*< 51>*/ 							printf(/* textboxtype: 1, unk: 0, line: 21 */ "Hold it. You cannot be serious. \nThat was way too slow! Look, there is \njust no way I can give you a prize for\nthat time.")
          							flw_68:
/*< 68>*/ 							{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -256, 'next': 80, 'param3': 13}
/*< 80>*/ 							switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          							  case 0:
/*< 81>*/ 								story_flags[687 /* us: 805A9B21 0x10, jp: 805ACDA1 0x10 */] = true;
          								flw_64:
/*< 64>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 3, 'next': 50, 'param3': 45}
/*< 50>*/ 								printf(/* textboxtype: 1, unk: 0, line: 20 */ "Hope you come by again soon!")
/*< 25>*/ 								zone_temp_flags[1 /* 0x1 02 */] = true;
          							  case 1:
/*< 13>*/ 								story_flags[500 /* us: 805A9B12 0x04, jp: 805ACD92 0x04 */] = true;
          								goto flw_64
          							}
          						  case 1:
/*< 69>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 3589, 'next': 72, 'param3': 13}
/*< 72>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 52, 'param3': 12}
/*< 52>*/ 							printf(/* textboxtype: 1, unk: 0, line: 22 */ "I know you can do better than that.\nYou were just warming up, right?\n\n\nThe secret is in getting just the right\ntilt. Here--you have earned this prize\nat least.")
/*< 73>*/ 							switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          							  case 0:
          								flw_5:
/*<  5>*/ 								give_item(4 0x04);
          								goto flw_68
          							  case 1:
          								goto flw_5
          							}
          						  case 2:
/*< 66>*/ 							{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 3847, 'next': 74, 'param3': 13}
/*< 74>*/ 							switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          							  case 0:
/*< 53>*/ 								printf(/* textboxtype: 1, unk: 0, line: 23 */ "Not a bad time. Nope, not bad at all!\nHere is your prize!")
/*<  6>*/ 								give_item(63 0x3F);
          								goto flw_68
          							  case 1:
/*<131>*/ 								printf(/* textboxtype: 1, unk: 0, line: 34 */ "Not a bad time, but you are nowhere\nnear as fast as I am. Here are\n50 Rupees!")
/*< 86>*/ 								{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 130, 'param3': 12}
/*<130>*/ 								rupees += 50;
          								goto flw_68
          							}
          						  case 3:
/*< 67>*/ 							{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 4104, 'next': 54, 'param3': 13}
/*< 54>*/ 							printf(/* textboxtype: 1, unk: 0, line: 24 */ "Whoa, now! That was...unbelievable!\nEven I cannot go that fast.")
/*< 75>*/ 							switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          							  case 0:
/*< 78>*/ 								switch (story_flags[667 /* us: 805A9B1E 0x02, jp: 805ACD9E 0x02 */]) {
          								  case 0:
/*<122>*/ 									printf(/* textboxtype: 1, unk: 0, line: 32 */ "This is something I have been saving\njust for you.")
/*< 76>*/ 									give_item(64 0x40);
          									goto flw_68
          								  case 1:
/*<121>*/ 									printf(/* textboxtype: 1, unk: 0, line: 31 */ "Here you go! I found this treasure\nright here on this very island.")
/*< 77>*/ 									give_item(94 0x5E);
/*< 79>*/ 									story_flags[667 /* us: 805A9B1E 0x02, jp: 805ACD9E 0x02 */] = true;
          									goto flw_68
          								}
          							  case 1:
/*<123>*/ 								printf(/* textboxtype: 1, unk: 0, line: 33 */ "You get a Rupee I have taken really\ngood care of! I have been holding on to\nthis one forever, but it is yours now.")
/*< 87>*/ 								{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 7, 'param3': 12}
/*<  7>*/ 								give_item(32 0x20);
          								goto flw_68
          							}
          						}
          					  case 1:
          						goto flw_4
          					}
          				  case 1:
          					goto flw_4
          				}
          			  case 1:
/*< 17>*/ 				switch (story_flags[500 /* us: 805A9B12 0x04, jp: 805ACD92 0x04 */]) {
          				  case 0:
          					goto flw_12
          				  case 1:
          					goto flw_4
          				}
          			}
          		  case 2:
/*<127>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 106, 'param3': 46}
/*<106>*/ 			{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3333, 'next': 49, 'param3': 13}
/*< 49>*/ 			printf(/* textboxtype: 1, unk: 0, line: 17 */ "Well, come back anytime you want to\ngive it a try!")
/*<129>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		  case 3:
/*<126>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 107, 'param3': 46}
/*<107>*/ 			{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3333, 'next': 99, 'param3': 13}
/*< 99>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "Time is up. Try again next time!")
/*<128>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		}
          	  case 1:
/*< 29>*/ 		switch (story_flags[507 /* us: 805A9B12 0x40, jp: 805ACD92 0x40 */]) {
          		  case 0:
/*<115>*/ 			{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3330, 'next': 28, 'param3': 13}
/*< 28>*/ 			printf(/* textboxtype: 1, unk: 0, line: 1 */ "It is pretty fun to ride these mine carts.\nOne day, I would love to set up a race!")
          		  case 1:
/*<116>*/ 			{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3330, 'next': 1, 'param3': 13}
/*<  1>*/ 			printf(/* textboxtype: 1, unk: 0, line: 0 */ "This station here was used by\nfolks heading into the old mines.\nPeople still ride the mine carts\nall over the place, though!\nI am probably supposed to tell you\nthere is some “safety information\"\nabout using the carts posted on\nthe wall over there.\nCart riding can be, uh...dangerous at\ntimes, so I would suggest you give that\nstuff a quick read.")
/*< 27>*/ 			story_flags[507 /* us: 805A9B12 0x40, jp: 805ACD92 0x40 */] = true;
          		}
          	}
          }

          void entrypoint_406_02() {
/*< 89>*/ 	start()
/*< 94>*/ 	switch (story_flags[507 /* us: 805A9B12 0x40, jp: 805ACD92 0x40 */]) {
          	  case 0:
/*<117>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3330, 'next': 93, 'param3': 13}
/*< 93>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "I have been here alone for...well, who\nknows how long. Years.\n\n\nBut I get to ride these carts every\nday, and I never get bored of it!")
          		flw_97:
/*< 97>*/ 		story_flags[741 /* us: 805A9B26 0x20, jp: 805ACDA6 0x20 */] = true;
          	  case 1:
/*<119>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3334, 'next': 92, 'param3': 13}
/*< 92>*/ 		printf(/* textboxtype: 1, unk: 0, line: 35 */ "Hey, that is my seat! Nobody sits their\nrear end on my seat but me, got it?")
          		goto flw_97
          	}
          }

          void entrypoint_406_03() {
/*< 90>*/ 	start()
/*< 95>*/ 	switch (story_flags[507 /* us: 805A9B12 0x40, jp: 805ACD92 0x40 */]) {
          	  case 0:
/*<118>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3330, 'next': 91, 'param3': 13}
/*< 91>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "I am here every day running this\ncoaster, but you are the only one who\never shows up. Could you spread the\nword? It is lonely out here. And...dry.")
          		flw_98:
/*< 98>*/ 		story_flags[742 /* us: 805A9B26 0x40, jp: 805ACDA6 0x40 */] = true;
          	  case 1:
/*<120>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3334, 'next': 96, 'param3': 13}
/*< 96>*/ 		printf(/* textboxtype: 1, unk: 0, line: 35 */ "Hey, that is my seat! Nobody sits their\nrear end on my seat but me, got it?")
          		goto flw_98
          	}
          }

