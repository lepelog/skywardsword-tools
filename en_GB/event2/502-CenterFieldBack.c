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
/*< 76>*/ 		printf("You gotta get out there and whale on\nDemise until he cries like a creepy\nlittle baby!\n\n\x0E\x01\x09\x04\x00\x03I'm counting on you, Link!\nWe all are!")
          	  case 1:
/*< 75>*/ 		printf("\x0E\x01\x09\x04\x0E\x20DPhew! That was WAY too close back\nthere. I got a serious sweat going!\n\n\n\x0E\x01\x09\x04\x00\x200Can you imagine what would've\nhappened if I hadn't pulled off one of\nmy famous Groose maneuvers to\ncatch <b<Zelda>>?\n\x0E\x01\x09\x04\x00\x200I'll stay here and make sure she's\nprotected, so don't worry about her\none bit. Just get out there and clobber\nthat Demise creep!\n\x0E\x01\x09\x04\x00\x203I'm counting on you, Link!\nWe all are!")
/*< 78>*/ 		story_flags[798 /* us: 805A9B2F 0x40, jp: 805ACDAF 0x40 */] = true;
          	}
          }

          void entrypoint_502_08() {
/*< 79>*/ 	start()
/*< 86>*/ 	printf("\x0E\x01\x12\x04\x00\x04Master Link, have you\nfinished with your preparations for\nthe battle ahead?\n[1]All ready![2-]Not yet...")
/*< 87>*/ 	switch (choice(2)) {
          	  case 0:
/*< 88>*/ 		printf("\x0E\x01\x12\x04\x00\x05Yes, Master. Let us proceed to the\nbattle at once.")
/*< 90>*/ 		changeScene(11, 0) // 
          	  case 1:
/*< 89>*/ 		printf("\x0E\x01\x12\x04\x00\x05Understood, Master. Return when you\nare fully prepared for the fight ahead.")
          	}
          }

          void entrypoint_502_09() {
/*< 80>*/ 	start()
/*< 81>*/ 	printf("\x0E\x01\x12\x04\x00\x04Master Link, do you wish\nto retreat temporarily in order to\nresupply yourself for the final battle?\n[1]Yes![2-]I'm fine.")
/*< 82>*/ 	switch (choice(2)) {
          	  case 0:
/*< 83>*/ 		printf("\x0E\x01\x12\x04\x00\x05Understood, Master. Please return\nhere when your preparations are\ncomplete.")
/*< 85>*/ 		changeScene(10, 0) // 
          	  case 1:
/*< 84>*/ 		printf("\x0E\x01\x12\x04\x00\x05Understood, Master.")
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
/*< 51>*/ 				printf("\x0E\x01\x09\x04\x00\x01You've yet to complete the great \nmission entrusted to you.\n\n\nFor Zelda, who still waits in everlasting\nslumber, you must fulfill the destiny\nthat is only yours to complete.")
          			  case 1:
/*< 32>*/ 				switch (scene_flags[37 /* 0x5 20 */]) {
          				  case 0:
/*< 48>*/ 					switch (scene_flags[103 /* 0xD 80 */]) {
          					  case 0:
/*< 50>*/ 						printf("\x0E\x01\x09\x04\x00\x03I sense great vitality in this sprout.\nWith any luck, it shall grow into a stout\ntree that will live on for millennia.")
          					  case 1:
/*< 47>*/ 						printf("\x0E\x01\x09\x04\x00\x0BAh, you've planted a seedling!\n\n\n\nI sense great vitality in this sprout.\nWith any luck, it shall grow into a stout\ntree that will live on for millennia.")
/*< 49>*/ 						scene_flags[10 'Sealed Grounds'][103 /* 0xD 80 */] = true;
          					}
          				  case 1:
/*< 33>*/ 					switch (scene_flags[102 /* 0xD 40 */]) {
          					  case 0:
/*< 46>*/ 						printf("\x0E\x01\x09\x04\x00\x03A tree that grows strong for thousands\nof years... If only I could find the\n<r<seedling>> of such a tree...")
          					  case 1:
/*< 34>*/ 						printf("<pause0F>.<pause0F>.<pause0F>.\x0E\x01\x09\x04\x0F\x803Hmm...\n\n\n[1]What's up?[2]See you later.")
/*< 35>*/ 						switch (choice(2)) {
          						  case 0:
/*< 36>*/ 							printf("\x0E\x01\x09\x04\x00\x703Oh, it's a matter of no great concern...")
/*< 57>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 58, 'param3': 32}
/*< 58>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 38, 'param3': 6}
/*< 38>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 39, 'param3': 17}
/*< 39>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 59, 'param3': 17}
/*< 59>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 40, 'param3': 6}
/*< 40>*/ 							set_camera(5, 0)
/*< 41>*/ 							printf("Do you see that sunny patch of earth\nover there?\n\n\nI thought it might be nice to plant a\ntree of some sort there.\n\n\nI imagine it would please <b<Zelda>> greatly\nto see a great tree welcoming her\nback when she wakes from her slumber.")
/*< 60>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 61, 'param3': 6}
/*< 61>*/ 							set_camera(-1, 0)
/*< 42>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 43, 'param3': 17}
/*< 43>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 44, 'param3': 17}
/*< 44>*/ 							printf("Sadly, it's a rare tree that grows strong\nfor thousands of years on end. If only\nI could find the <r<seedling>> of such a\nhearty specimen...")
/*< 45>*/ 							scene_flags[10 'Sealed Grounds'][102 /* 0xD 40 */] = true;
          						  case 1:
/*< 37>*/ 							printf("Hmm...")
          						}
          					}
          				}
          			}
          		  case 1:
/*< 29>*/ 			switch (scene_flags[101 /* 0xD 20 */]) {
          			  case 0:
          				flw_28:
/*< 28>*/ 				printf("\x0E\x01\x09\x04\x00\nDo not fear for <b<Zelda>>. I will watch\nover her here. Go now and fulfill\nyour destiny.")
          			  case 1:
/*<  2>*/ 				printf("\x0E\x01\x09\x04\x00\x03I see you've said good-bye.\n\n\n\nNow you must keep the promise you\nmade to her. You must find the\n<y+<Triforce>>.\n\nReturn to your time. There is work to\nbe done there.")
/*< 30>*/ 				scene_flags[10 'Sealed Grounds'][101 /* 0xD 20 */] = true;
          				goto flw_28
          			}
          		}
          	  case 1:
/*<  4>*/ 		switch (scene_flags[82 /* 0xB 04 */]) {
          		  case 0:
/*< 18>*/ 			printf("\x0E\x01\x09\x04\x00\x03You stand in the past, ages before your\nplace in time. Here, the goddess Hylia\nhas only just sealed away <b<Demise>>...\n\nYou will have many questions. But for\nnow, you must proceed through the\ngreat doors at the back of the room.\n\nIt is there that the person you've risked\nlife and blood to defend waits for you.\n")
          		  case 1:
/*< 19>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 10, 'param3': 31}
/*< 10>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 11, 'param3': 32}
/*< 11>*/ 			printf("\x0E\x01\x09\x04\x00\x01...At last. I've been expecting you,\nLink.\n\n\nYou are doubtless overwhelmed, so I\nwill explain things as simply as I can.")
/*< 12>*/ 			set_camera(2, 0)
/*<  5>*/ 			printf("This is the<r< Temple of Hylia>>, though it \nwill come to be known as the <b<Sealed\nTemple>> sometime in the future.\n\nYou stand in the past, ages before your\nown time. Here the goddess Hylia\nhas only just sealed away <b<Demise>>...\n\nAnd little time has passed since the\ngoddess sent the outcropping of rock\ninto the sky that would one day\nbecome Skyloft.")
/*< 13>*/ 			set_camera(-1, 0)
/*<  6>*/ 			printf("\x0E\x01\x09\x04\xF0F\x703It is true to its name. You have passed\nthrough the Gate of Time to an era\nin the distant past.\n\nYou will have many questions. But for\nnow, you must proceed back through\nthe great doors behind you.")
/*< 15>*/ 			set_camera(3, 0)
/*< 14>*/ 			printf("It is there that the person you've risked\nlife and blood to defend waits for you.")
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
/*< 25>*/ 		printf("\x0E\x01\x09\x04\x00\x12<b<Ghirahim >>ran through the <r<great doors\nat the front of the temple>>. If you hurry,\nyou may yet stop him!")
          	  case 1:
/*< 22>*/ 		printf("\x0E\x01\x09\x04\x00\x12Urgh... <pause0A>Link...?\nIt's Ghirahim...<pause0A> He appeared out of\nthin air and got the drop on me.\n\nDon't worry about me... You must\nchase after him!")
/*< 20>*/ 		set_camera(4, 0)
/*< 23>*/ 		printf("He ran through the <r<great doors >><r<at the\nfront of the temple>>. You may yet catch\nhim before it's too late. Hurry!")
/*< 24>*/ 		scene_flags[10 'Sealed Grounds'][85 /* 0xB 20 */] = true;
/*< 26>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_502_03() {
/*< 52>*/ 	start()
/*< 53>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 56>*/ 		printf("\x0E\x01\x09\x04\x07\xC04Do not panic. <b<Zelda >>is fine. She rests\nin the back room of the temple.\n\n\n\x0E\x01\x09\x04\x00\x706Focus on the battle at hand. Defeat\nDemise and save our world,\nLink.")
          	  case 1:
/*< 54>*/ 		printf("\x0E\x01\x09\x04\x07\xC0BDo not panic. <b<Zelda >>is fine. She rests in\nthe back room of the temple.\n\n\n\x0E\x01\x09\x04\x0F\x700I never expected Demise would rise\nagain. <pause0A>It seems now that the fate of the\nworld rests solely in your hands,\n\x0E\x01\x09\x04\x00\x706Link!")
/*< 55>*/ 		scene_flags[10 'Sealed Grounds'][104 /* 0xC 01 */] = true;
          	}
          }

          void entrypoint_502_04() {
/*< 62>*/ 	start()
/*< 64>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaster Link, I have\nimportant information for you.\n\n\nOnce you enter this portal, my analysis\nindicates a 0% chance that you will be\nable to return, unless you are able\nto vanquish your foe.\nAre you ready to proceed?\n[1]I'm ready![2-]Not yet...")
/*< 63>*/ 	switch (choice(2)) {
          	  case 0:
/*< 65>*/ 		printf("\x0E\x01\x12\x04\x00\x05Understood, Master Link.<pause0F>\nKnow that even in the place that lies\nbeyond this portal, I will be with you...\n\n\x0E\x01\x12\x04\x00\x01And, Master...<pause1E>good luck.")
          	  case 1:
/*< 66>*/ 		printf("\x0E\x01\x12\x04\x00\x05Understood, Master. When you are\nready to proceed, please return to this\nlocation.")
          	}
          }

          void entrypoint_502_05() {
/*< 67>*/ 	start()
/*< 68>*/ 	printf("\x0E\x01\x05\x04-\x00\x0E\x01\x08\x02\x2CDYou wretched brat!")
          }

