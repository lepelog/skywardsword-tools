          void entrypoint_502_06() {
/*< 69>*/ 	start()
/*< 70>*/ 	switch (story_flags[787 /* us: 805A9B2C 0x08, jp: 805ACDAC 0x08 */]) {
          	  case 0:
/*< 71>*/ 		story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */] = true;
          		flw_73:
/*< 73>*/ 		zone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 72>*/ 		story_flags[787 /* us: 805A9B2C 0x08, jp: 805ACDAC 0x08 */] = true;
          		goto flw_73
          	}
          }

          void entrypoint_502_07() {
/*< 74>*/ 	start()
/*< 77>*/ 	switch (story_flags[798 /* us: 805A9B2F 0x40, jp: 805ACDAF 0x40 */]) {
          	  case 0:
/*< 76>*/ 		printf(/* textboxtype: 1, unk: 0, line: 22 */ "You gotta get out there and whale on\nDemise until he cries like a creepy\nlittle baby!\n\n<0x10009:0x00000003>I'm counting on you, \n<heroname>! We all are!")
          	  case 1:
/*< 75>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x000e020d>Phew! That was WAY too close back\nthere. I got a serious sweat going!\n\n\n<0x10009:0x00000200>Can you imagine what would've\nhappened if I hadn't pulled off one of\nmy famous Groose maneuvers to\ncatch <color blue<Zelda>coloroff>?\n<0x10009:0x00000200>I'll stay here and make sure she's\nprotected, so don't worry about her\none bit. Just get out there and clobber\nthat Demise creep!\n<0x10009:0x00000203>I'm counting on you,\n<heroname>! We all are!")
/*< 78>*/ 		story_flags[798 /* us: 805A9B2F 0x40, jp: 805ACDAF 0x40 */] = true;
          	}
          }

          void entrypoint_502_08() {
/*< 79>*/ 	start()
/*< 86>*/ 	printf(/* textboxtype: 2, unk: 0, line: 29 */ "<0x10012:0x00000004>Master <heroname>, have you\nfinished with your preparations for\nthe battle ahead?\n[1-]All ready![2]Not yet...")
/*< 87>*/ 	switch (choice(2)) {
          	  case 0:
/*< 88>*/ 		printf(/* textboxtype: 2, unk: 0, line: 30 */ "<0x10012:0x00000005>Yes, Master. Let us proceed to the\nbattle at once.")
/*< 90>*/ 		changeScene(11, 0) // 
          	  case 1:
/*< 89>*/ 		printf(/* textboxtype: 2, unk: 0, line: 31 */ "<0x10012:0x00000005>Understood, Master. Return when you\nare fully prepared for the fight ahead.")
          	}
          }

          void entrypoint_502_09() {
/*< 80>*/ 	start()
/*< 81>*/ 	printf(/* textboxtype: 2, unk: 0, line: 26 */ "<0x10012:0x00000004>Master <heroname>, do you wish\nto retreat temporarily in order to\nresupply yourself for the final battle?\n[1-]Yes![2]I'm fine.")
/*< 82>*/ 	switch (choice(2)) {
          	  case 0:
/*< 83>*/ 		printf(/* textboxtype: 2, unk: 0, line: 27 */ "<0x10012:0x00000005>Understood, Master. Please return\nhere when your preparations are\ncomplete.")
/*< 85>*/ 		changeScene(10, 0) // 
          	  case 1:
/*< 84>*/ 		printf(/* textboxtype: 2, unk: 0, line: 28 */ "<0x10012:0x00000005>Understood, Master.")
          	}
          }

          void entrypoint_502_01() {
          	start()
/*<  3>*/ 	switch (story_flags[350 /* us: 805A9B01 0x10, jp: 805ACD81 0x10 */]) {
          	  case 0:
/*< 27>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*< 31>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 51>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000001>You've yet to complete the great \nmission entrusted to you.\n\n\nFor Zelda, who still waits in everlasting\nslumber, you must fulfill the destiny\nthat is only yours to complete.")
          			  case 1:
/*< 32>*/ 				switch (scene_flags[37 /* 0x5 20 */]) {
          				  case 0:
/*< 48>*/ 					switch (scene_flags[103 /* 0xD 80 */]) {
          					  case 0:
/*< 50>*/ 						printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00000003>I sense great vitality in this sprout.\nWith any luck, it shall grow into a stout\ntree that will live on for millennia.")
          					  case 1:
/*< 47>*/ 						printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x0000000b>Ah, you've planted a seedling!\n\n\n\nI sense great vitality in this sprout.\nWith any luck, it shall grow into a stout\ntree that will live on for millennia.")
/*< 49>*/ 						scene_flags[10 'Sealed Grounds'][103 /* 0xD 80 */] = true;
          					}
          				  case 1:
/*< 33>*/ 					switch (scene_flags[102 /* 0xD 40 */]) {
          					  case 0:
/*< 46>*/ 						printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000003>A tree that grows strong for thousands\nof years... If only I could find the\n<color red<seedling>coloroff> of such a tree...")
          					  case 1:
/*< 34>*/ 						printf(/* textboxtype: 1, unk: 0, line: 7 */ "<pause 15>.<pause 15>.<pause 15>.<0x10009:0x000f0803>Hmm...\n\n\n[1-]What's up?[2-]See you later.")
/*< 35>*/ 						switch (choice(2)) {
          						  case 0:
/*< 36>*/ 							printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00000703>Oh, it's a matter of no great concern...")
/*< 57>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 58, 'param3': 32}
/*< 58>*/ 							wait_frames(1)
/*< 38>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 39, 'param3': 17}
/*< 39>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 59, 'param3': 17}
/*< 59>*/ 							wait_frames(30)
/*< 40>*/ 							set_camera(5, 0)
/*< 41>*/ 							printf(/* textboxtype: 1, unk: 0, line: 10 */ "Do you see that sunny patch of earth\nover there?\n\n\nI thought it might be nice to plant a\ntree of some sort there.\n\n\nI imagine it would please <color blue<Zelda>coloroff> greatly\nto see a great tree welcoming her\nback when she wakes from her slumber.")
/*< 60>*/ 							wait_frames(30)
/*< 61>*/ 							set_camera(-1, 0)
/*< 42>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 43, 'param3': 17}
/*< 43>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 44, 'param3': 17}
/*< 44>*/ 							printf(/* textboxtype: 1, unk: 0, line: 11 */ "Sadly, it's a rare tree that grows strong\nfor thousands of years on end. If only\nI could find the <color red<seedling>coloroff> of such a\nhearty specimen...")
/*< 45>*/ 							scene_flags[10 'Sealed Grounds'][102 /* 0xD 40 */] = true;
          						  case 1:
/*< 37>*/ 							printf(/* textboxtype: 1, unk: 0, line: 9 */ "Hmm...")
          						}
          					}
          				}
          			}
          		  case 1:
/*< 29>*/ 			switch (scene_flags[101 /* 0xD 20 */]) {
          			  case 0:
          				flw_28:
/*< 28>*/ 				printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x0000000a>Do not fear for <color blue<Zelda>coloroff>. I will watch\nover her here. Go now and fulfill\nyour destiny.")
          			  case 1:
/*<  2>*/ 				printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00000003>I see you've said good-bye.\n\n\n\nNow you must keep the promise you\nmade to her. You must find the\n<color yellow white<Triforce>coloroff>.\n\nReturn to your time. There is work to\nbe done there.")
/*< 30>*/ 				scene_flags[10 'Sealed Grounds'][101 /* 0xD 20 */] = true;
          				goto flw_28
          			}
          		}
          	  case 1:
/*<  4>*/ 		switch (scene_flags[82 /* 0xB 04 */]) {
          		  case 0:
/*< 18>*/ 			printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00000003>You stand in the past, ages before your\nplace in time. Here, the goddess, Hylia,\nhas only just sealed away <color blue<Demise>coloroff>...\n\nYou will have many questions. But for\nnow, you must proceed through the\ngreat doors at the back of the room.\n\nIt is there that the person you've risked\nlife and blood to defend waits for you.\n")
          		  case 1:
/*< 19>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 10, 'param3': 31}
/*< 10>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 11, 'param3': 32}
/*< 11>*/ 			printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>...At last. I've been expecting you,\n<heroname>.\n\n\nYou are doubtless overwhelmed, so I\nwill explain things as simply as I can.")
/*< 12>*/ 			set_camera(2, 0)
/*<  5>*/ 			printf(/* textboxtype: 1, unk: 0, line: 1 */ "This is the<color red< Temple of Hylia>coloroff>, though it \nwill come to be known as the <color blue<Sealed\nTemple>coloroff> sometime in the future.\n\nYou stand in the past, ages before your\nown time. Here the goddess, Hylia,\nhas only just sealed away <color blue<Demise>coloroff>...\n\nAnd little time has passed since the\ngoddess sent the outcropping of rock\ninto the sky that would one day\nbecome Skyloft.")
/*< 13>*/ 			set_camera(-1, 0)
/*<  6>*/ 			printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x0f0f0703>It is true to its name. You have passed\nthrough the Gate of Time to an era\nin the distant past.\n\nYou will have many questions. But for\nnow, you must proceed back through\nthe great doors behind you.")
/*< 15>*/ 			set_camera(3, 0)
/*< 14>*/ 			printf(/* textboxtype: 1, unk: 0, line: 3 */ "It is there that the person you've risked\nlife and blood to defend waits for you.")
/*<  7>*/ 			story_flags[349 /* us: 805A9B01 0x08, jp: 805ACD81 0x08 */] = true;
/*<  8>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<  9>*/ 				story_flags[370 /* us: 805A9B02 0x01, jp: 805ACD82 0x01 */] = true;
          				flw_17:
/*< 17>*/ 				scene_flags[10 'Sealed Grounds'][82 /* 0xB 04 */] = true;
/*< 16>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
          				goto flw_17
          			}
          		}
          	}
          }

          void entrypoint_502_02() {
/*<  1>*/ 	start()
/*< 21>*/ 	switch (scene_flags[85 /* 0xB 20 */]) {
          	  case 0:
/*< 25>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000012><color blue<Ghirahim >coloroff>ran through the <color red<great doors\nat the front of the temple>coloroff>. If you\nhurry, you may yet stop him!")
          	  case 1:
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000012>Urgh... <pause 10><heroname>...?\nIt's Ghirahim...<pause 10> He appeared out of\nthin air and got the drop on me.\n\nDon't worry about me... You must\nchase after him!")
/*< 20>*/ 		set_camera(4, 0)
/*< 23>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "He ran through the <color red<great doors >coloroff><color red<at the\nfront of the temple>coloroff>. You may yet catch\nhim before it's too late. Hurry!")
/*< 24>*/ 		scene_flags[10 'Sealed Grounds'][85 /* 0xB 20 */] = true;
/*< 26>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_502_03() {
/*< 52>*/ 	start()
/*< 53>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 56>*/ 		printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00070c04>Do not panic. <color blue<Zelda >coloroff>is fine. She rests\nin the back room of the temple.\n\n\n<0x10009:0x00000706>Focus on the battle at hand. Defeat\nDemise and save our world,\n<heroname>.")
          	  case 1:
/*< 54>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00070c0b>Do not panic. <color blue<Zelda >coloroff>is fine. She rests in\nthe back room of the temple.\n\n\n<0x10009:0x000f0700>I never expected Demise would rise\nagain. <pause 10>It seems now that the fate of the\nworld rests solely in your hands,\n<0x10009:0x00000706><heroname>!")
/*< 55>*/ 		scene_flags[10 'Sealed Grounds'][104 /* 0xC 01 */] = true;
          	}
          }

          void entrypoint_502_04() {
/*< 62>*/ 	start()
/*< 64>*/ 	printf(/* textboxtype: 2, unk: 1, line: 23 */ "<0x10012:0x0000000b>Master <heroname>, I have\nimportant information for you.\n\n\nOnce you enter this portal, my analysis\nindicates a 0% chance that you will be\nable to return, unless you are able\nto vanquish your foe.\nAre you ready to proceed?\n[1-]I'm ready![2]Not yet...")
/*< 63>*/ 	switch (choice(2)) {
          	  case 0:
/*< 65>*/ 		printf(/* textboxtype: 2, unk: 0, line: 25 */ "<0x10012:0x00000005>Understood, Master <heroname>.<pause 15>\nKnow that even in the place that lies\nbeyond this portal, I will be with you...\n\n<0x10012:0x00000001>And, Master...<pause 30>good luck.")
          	  case 1:
/*< 66>*/ 		printf(/* textboxtype: 2, unk: 0, line: 24 */ "<0x10012:0x00000005>Understood, Master. When you are\nready to proceed, please return to this\nlocation.")
          	}
          }

          void entrypoint_502_05() {
/*< 67>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 3, unk: 0, line: 32 */ "<0x10005:0x002d0000><0x10008:0x02cd>You wretched brat!")
          }

