          void entrypoint_150_00() {
          	start()
/*< 36>*/ 	set_camera(8, 0)
/*< 29>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 79>*/ 		scene_flags[25 'Skyloft: Silent Realm'][100 /* 0xD 10 */] = true;
/*< 28>*/ 		printf("Here we are, Link!\nShow me what you got!")
/*< 31>*/ 		set_camera(10, 0)
/*< 30>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 32, 'param3': 40}
/*< 32>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*<  3>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 39>*/ 				printf("\x0E\x01\x12\x04\x00\x04Master Link, I can\nunfortunately confirm that you\nhave failed to pass the trial.")
/*< 56>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 6, 'param3': 40}
/*<  6>*/ 				switch (temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*<  8>*/ 					switch (temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*< 11>*/ 						switch (temp_flags[4 /* 0x1 10 */]) {
          						  case 0:
/*< 41>*/ 							switch (temp_flags[5 /* 0x1 20 */]) {
          							  case 0:
/*< 42>*/ 								switch (temp_flags[6 /* 0x1 40 */]) {
          								  case 0:
/*< 43>*/ 									switch (temp_flags[7 /* 0x1 80 */]) {
          									  case 0:
/*< 47>*/ 										printf("\x0E\x01\x12\x04\x00\x01Master, in addition to the <r<Guardians>>\nwho will attack you, there are also two\ntypes of <r<Watchers >>that search for\nintruders <r<on the ground and in the sky>>.\nThe two types of Watchers exhibit\ndramatically different behavior, so be\nsure you understand how to avoid\ndetection by both.")
/*< 51>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 52>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 53>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_40:
/*< 40>*/ 										printf("Collect all the <y<tears>> within the Silent\nRealm. I shall await your return here.")
          										flw_57:
/*< 57>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 38, 'param3': 40}
/*< 38>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 44>*/ 										printf("The locations of <y<tears >>that you have\npreviously collected will be <r<marked\non the map>>, so make good use of that.\n\nConfirm the locations of all 15 tears\nfirst to increase your chances of\nsuccessfully completing the trial.")
/*< 50>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_40
          									}
          								  case 1:
/*< 46>*/ 									printf("I suggest using smart tactics to your\nadvantage. Try <r<leaving easy-to-collect\ntears >>for when you are being pursued.")
/*< 49>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_40
          								}
          							  case 1:
/*< 45>*/ 								printf("\x0E\x01\x12\x04\x00\x01Master, the chances of your not being\nthe chosen hero are increasing...\n\n\nRepeated attempts at this trial have\nscattered your concentration and made\nyour performance erratic. I suggest\nyou rest awhile before trying again.")
/*< 48>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_40
          							}
          						  case 1:
/*< 10>*/ 							printf("<r<Two types of Watchers >>patrol the\nrealm, looking for intruders. I highly\nsuggest you take caution.\n\nSo long as you do not step into their\nlight, you will remain undetected\nby <r<flying Sky Watchers>>.\n\nHowever, the <r<Earth Watchers>>, who\n<r<hover near the ground>>, will give chase\nif you come too close to them, so <r<stay\nalert >>and maintain a safe distance.")
/*< 12>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_40
          						}
          					  case 1:
/*< 27>*/ 						printf("The locations of <y<tears>> you have\ngathered during your trial are\n<r<marked on the map>>.\n\nYou will have an easier time\ncompleting your task if you first\nset out to discover the locations\nof all 15 tears.")
/*<  9>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_40
          					}
          				  case 1:
/*<  5>*/ 					printf("\x0E\x01\x12\x04\x00\x02Master, so long as you have the will and\ndetermination, you can retry a trial\nas many times as you like.\n\nA good strategy is <r<to find, but then\ndeliberately not pick up>>, the most-\neasily-accessible <y<<y<tears<y< >>until you are\ndiscovered and really need one.\nCollect the 15 <y<tears>> and complete the\ntrial. I will await your return in the\noutside world.")
/*<  7>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_57
          				}
          			  case 1:
/*< 55>*/ 				printf("\x0E\x01\x12\x04\x00\x04Master Link.")
/*< 54>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 				printf("When your <y<<item11>>> is filled with\n15 <y<tears>>, your spirit will grow and you\nwill be blessed by the goddess with\na new power.\n\x0E\x01\x12\x04\x00\x02Master, I await your return in the\noutside world.")
/*<  4>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_57
          			}
          		  case 1:
/*< 35>*/ 			printf("\x0E\x01\x12\x04\x00\x04Master Link.")
/*< 34>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 33, 'param3': 40}
/*< 33>*/ 			printf("You have entered the last of the trials,\nthe <b<Goddess's Silent Realm>>.")
/*< 37>*/ 			set_camera(9, 0)
/*< 25>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 13, 'param3': 40}
/*< 13>*/ 			give_item(17 0x11);
/*< 16>*/ 			set_camera(8, 0)
/*< 15>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 26, 'param3': 40}
/*< 26>*/ 			printf("When you have filled the <y<<item11>\n>>once more, you shall finally be \nrecognized as the true hero of legend.\n\nOnly then will you be shown the door\nthat will lead you to the <y+<Triforce>>.\n\x0E\x01\x12\x04\x00\x02Master, I wish you success in this trial.\n\nDo you have any questions before you\nface the task ahead of you?\n[1]Yes.[2-]No.")
/*< 14>*/ 			switch (choice(2)) {
          			  case 0:
/*< 58>*/ 				printf("Which topic do you wish to review?\n\n\n[1]The <item11>?[2]Guardians?[3]Waking Water?[4-]Never mind.")
          				flw_59:
/*< 59>*/ 				switch (choice(4)) {
          				  case 0:
/*< 17>*/ 					printf("Yes, \x0E\x01\x12\x04\x00\x05Master.\n\n\n\nTo fill the <y<<item11>>>, you need to\nlocate and collect the <y<<item2E>s\n>>scattered across this Silent Realm.")
/*< 24>*/ 					set_camera(2, 0)
/*< 23>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 21, 'param3': 40}
/*< 21>*/ 					printf("\x0E\x01\x12\x04\x00\x02Master, do you see the glowing\nobject a ways in front of you?")
/*< 20>*/ 					set_camera(3, 0)
/*< 19>*/ 					printf("That is a <y<<item2E>>>.\nYou will need to collect <r<15 >>of them.")
/*< 22>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 71, 'param3': 6}
          					flw_71:
/*< 71>*/ 					set_camera(1, 0)
/*< 60>*/ 					printf("Do you have any further questions?\n\n[1]The <item11>?[2]Guardians?[3]Waking Water?[4-]Never mind.")
          					goto flw_59
          				  case 1:
/*< 61>*/ 					printf("\x0E\x01\x12\x04\x00\x05Understood, Master.\nAllow me to explain.")
/*< 65>*/ 					set_camera(6, 0)
/*< 67>*/ 					printf("If you take even a single step outside\nthe protective circle you stand in, the\n<r<Guardians >>of this realm will wake up\nand pursue you, \x0E\x01\x12\x04\x00\x02Master.")
/*< 64>*/ 					set_camera(4, 0)
/*< 66>*/ 					printf("If a <r<Guardian >>manages to land even a\nsingle hit on you, your spirit will\nshatter and you will fail the trial.")
/*< 63>*/ 					set_camera(5, 0)
/*< 62>*/ 					printf("You must collect the <y<tears>> scattered\nthroughout this area and fill the\n<y<<item11> >>without being hit by\nan attack.")
          					goto flw_71
          				  case 2:
/*< 68>*/ 					printf("\x0E\x01\x12\x04\x00\x05Understood, Master.\nAllow me to explain.")
/*< 70>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf("The unusual liquid substance that\ncovers that area is known as <r<Waking\nWater>>, and it has certain unique\nproperties.\nIf you make contact with Waking\nWater, the <r<Guardians will be\nimmediately alerted to your presence>>.\n\nPools of Waking Water are located all\nthroughout the area. I suggest you\nwatch where you step...")
          					goto flw_71
          				  case 3:
          					flw_78:
/*< 78>*/ 					printf("\x0E\x01\x12\x04\x00\x05Understood, Master.")
/*< 76>*/ 					set_camera(10, 0)
/*< 75>*/ 					printf("\x0E\x01\x12\x04\x00\x02Master, I await your return in the\noutside world.")
/*< 77>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 74, 'param3': 40}
/*< 74>*/ 					scene_flags[25 'Skyloft: Silent Realm'][100 /* 0xD 10 */] = true;
/*< 80>*/ 					scene_flags[25 'Skyloft: Silent Realm'][101 /* 0xD 20 */] = true;
/*< 73>*/ 					temp_flags[1 /* 0x1 02 */] = true;
/*< 72>*/ 					{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          				}
          			  case 1:
          				goto flw_78
          			}
          		}
          	}
          }

