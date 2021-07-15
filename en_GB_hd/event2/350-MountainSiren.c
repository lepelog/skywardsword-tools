          void entrypoint_350_00() {
          	start()
/*< 17>*/ 	set_camera(8, 0)
/*< 13>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 12>*/ 		printf("We're here, Link!\nShow me what you've got!")
/*< 15>*/ 		set_camera(10, 0)
/*< 14>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 16, 'param3': 40}
/*< 16>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[102 /* 0xD 40 */]) {
          		  case 0:
/*< 19>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 31>*/ 				printf("\x0E\x01\x12\x04\x00\x04Master Link, I can\nunfortunately confirm that you\nhave failed to pass the trial.")
/*< 48>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 22, 'param3': 40}
/*< 22>*/ 				switch (temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*< 24>*/ 					switch (temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*< 27>*/ 						switch (temp_flags[4 /* 0x1 10 */]) {
          						  case 0:
/*< 33>*/ 							switch (temp_flags[5 /* 0x1 20 */]) {
          							  case 0:
/*< 34>*/ 								switch (temp_flags[6 /* 0x1 40 */]) {
          								  case 0:
/*< 35>*/ 									switch (temp_flags[7 /* 0x1 80 */]) {
          									  case 0:
/*< 39>*/ 										printf("\x0E\x01\x12\x04\x00\x01Master, in addition to the <r<Guardians>>\nwho will attack you, there are also two\ntypes of <r<Watchers >>that search for\nintruders <r<on the ground and in the sky>>.\nThe two types of Watchers exhibit\ndramatically different behavior, so be\nsure you understand how to avoid\ndetection by both.")
/*< 43>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 44>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 45>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_32:
/*< 32>*/ 										printf("Collect all the <y<tears>> within the Silent\nRealm. I shall await your return here.")
          										flw_49:
/*< 49>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 30, 'param3': 40}
/*< 30>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 36>*/ 										printf("The locations of <y<tears >>that you have\npreviously collected will be <r<marked\non the map>>, so make good use of that.\n\nConfirm the locations of all 15 tears\nfirst to increase your chances of\nsuccessfully completing the trial.")
/*< 42>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_32
          									}
          								  case 1:
/*< 38>*/ 									printf("I suggest using smart tactics to your\nadvantage. Try <r<leaving easy-to-collect\ntears >>for when you are being pursued.")
/*< 41>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_32
          								}
          							  case 1:
/*< 37>*/ 								printf("\x0E\x01\x12\x04\x00\x01Master, the chances of your not being\nthe chosen one are increasing...\n\n\nRepeated attempts at this trial have\nscattered your concentration and made\nyour performance erratic. I suggest\nyou rest awhile before trying again.")
/*< 40>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_32
          							}
          						  case 1:
/*< 26>*/ 							printf("<r<Two types of Watchers >>patrol the\nrealm, looking for intruders. I highly\nsuggest you take caution.\n\nSo long as you do not step into their\nlight, you will remain undetected\nby <r<flying Sky Watchers>>.\n\nHowever, the <r<Earth Watchers>>, who\n<r<hover near the ground>>, will give chase\nif you come too close to them, so <r<stay\nalert >>and maintain a safe distance.")
/*< 28>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_32
          						}
          					  case 1:
/*< 29>*/ 						printf("The locations of <y<tears>> you have\ngathered during your trial are\n<r<marked on the map>>.\n\nYou will have an easier time\ncompleting your task if you\nfirst set out to discover the\nlocations of all 15 tears.")
/*< 25>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_32
          					}
          				  case 1:
/*< 21>*/ 					printf("\x0E\x01\x12\x04\x00\x02Master, so long as you have the will and\ndetermination, you can retry a trial\nas many times as you like.\n\nA good strategy is <r<to find, but then\ndeliberately not pick up>>, the most-\neasily-accessible <y<<y<tears<y< >>until you are\ndiscovered and really need one.\nCollect the 15 <y<tears>> and complete the\ntrial. I will await your return in the\noutside world.")
/*< 23>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_49
          				}
          			  case 1:
/*< 47>*/ 				printf("\x0E\x01\x12\x04\x00\x04Master Link...")
/*< 46>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 				printf("When your <y<<item11>>> is filled with\n15 <r<tears>>, your spirit will grow and you\nwill be blessed by the goddess with a\nnew power.\n\x0E\x01\x12\x04\x00\x02Master, I will await your return in the\noutside world.")
/*< 20>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_49
          			}
          		  case 1:
/*<  3>*/ 			printf("\x0E\x01\x12\x04\x00\x04Master Link...")
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 			printf("You stand within <b<Din's Silent Realm>>,\nthe third trial. It will test the limits of\nyour <r<power>>.\n\nTo locate the last flame that will\nenhance your sword, you must first\ncomplete this final challenge and\nachieve spiritual growth once again.")
/*<  5>*/ 			set_camera(9, 0)
/*<  7>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 11, 'param3': 40}
/*< 11>*/ 			give_item(17 0x11);
/*<  8>*/ 			set_camera(8, 0)
/*<  9>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 6, 'param3': 40}
/*<  6>*/ 			printf("When your vessel is full, your spirit\nwill grow and you will be entrusted\nwith a <r<new power >>by the goddess.\n\nDo you have any questions?\n[1]Yes![2-]No.")
/*< 10>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				printf("Which topic do you wish to review?\n\n\n[1]The <item11>?[2]Guardians?[3]Waking Water?[4-]Never mind.")
          				flw_51:
/*< 51>*/ 				switch (choice(4)) {
          				  case 0:
/*< 52>*/ 					printf("Yes, \x0E\x01\x12\x04\x00\x05Master.\n\n\n\nTo fill the <y<<item11>>>, you need to\nlocate and collect every <y<<item2C> \n>>scattered across this Silent Realm.")
/*< 59>*/ 					set_camera(2, 0)
/*< 58>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 56, 'param3': 40}
/*< 56>*/ 					printf("\x0E\x01\x12\x04\x00\x02Master, do you see the glowing\nobject a ways in front of you?")
/*< 55>*/ 					set_camera(3, 0)
/*< 54>*/ 					printf("That is a <y<<item2C>>>.\nYou will need to collect <r<15 >>of them.")
/*< 57>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 53, 'param3': 40}
/*< 53>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 77, 'param3': 6}
          					flw_77:
/*< 77>*/ 					set_camera(1, 0)
/*< 78>*/ 					printf("Do you have any further questions?\n\n[1]The <item11>?[2]Guardians?[3]Waking Water?[4-]Never mind.")
          					goto flw_51
          				  case 1:
/*< 60>*/ 					printf("\x0E\x01\x12\x04\x00\x05Understood, Master.\nAllow me to explain.")
/*< 64>*/ 					set_camera(6, 0)
/*< 66>*/ 					printf("If you take even a single step outside\nthe protective circle you stand in, the\n<r<Guardians >>of this realm will wake up\nand pursue you, \x0E\x01\x12\x04\x00\x02Master.")
/*< 63>*/ 					set_camera(4, 0)
/*< 65>*/ 					printf("If a <r<Guardian >>manages to land even a\nsingle hit on you, your spirit will\nshatter and you will fail the trial.")
/*< 62>*/ 					set_camera(5, 0)
/*< 61>*/ 					printf("You must collect the <y<tears>> scattered\nthroughout this area and fill the\n<y<<item11> >>without\nbeing hit by an attack.")
          					goto flw_77
          				  case 2:
/*< 68>*/ 					printf("\x0E\x01\x12\x04\x00\x05Understood, Master.\nAllow me to explain.")
/*< 67>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf("The unusual liquid substance that\ncovers that area is known as <r<Waking\nWater>>, and it has certain unique\nproperties.\nIf you make contact with Waking\nWater, the <r<Guardians will be\nimmediately alerted to your presence>>.\n\nPools of Waking Water are located all\nthroughout the area. I suggest you\nwatch where you step...")
          					goto flw_77
          				  case 3:
          					flw_70:
/*< 70>*/ 					printf("Understood, \x0E\x01\x12\x04\x00\x05Master.")
/*< 71>*/ 					set_camera(10, 0)
/*< 72>*/ 					printf("\x0E\x01\x12\x04\x00\x02Master, I await your return in the\noutside world.")
/*< 73>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 75, 'param3': 40}
/*< 75>*/ 					scene_flags[23 'Eldin: Silent Realm'][102 /* 0xD 40 */] = true;
/*< 74>*/ 					temp_flags[1 /* 0x1 02 */] = true;
/*< 76>*/ 					{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          				}
          			  case 1:
          				goto flw_70
          			}
          		}
          	}
          }

