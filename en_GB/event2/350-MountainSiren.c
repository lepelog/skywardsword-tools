          void entrypoint_350_00() {
          	start()
/*< 17>*/ 	set_camera(8, 0)
/*< 13>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 12>*/ 		printf(/* textboxtype: 1, unk: 2, line: 26 */ "We're here, <heroname>!\nShow me what you've got!")
/*< 15>*/ 		set_camera(10, 0)
/*< 14>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 16, 'param3': 40}
/*< 16>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[102 /* 0xD 40 */]) {
          		  case 0:
/*< 19>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 31>*/ 				printf(/* textboxtype: 2, unk: 2, line: 17 */ "<0x10012:0x00000004>Master <heroname>, I can\nunfortunately confirm that you\nhave failed to pass the trial.")
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
/*< 39>*/ 										printf(/* textboxtype: 2, unk: 2, line: 25 */ "<0x10012:0x00000001>Master, in addition to the <color red<Guardians>coloroff>\nwho will attack you, there are also two\ntypes of <color red<Watchers >coloroff>that search for\nintruders <color red<on the ground and in the sky>coloroff>.\nThe two types of overseers exhibit\ndramatically different behavior, so be\nsure you understand how to avoid\ndetection by both.")
/*< 43>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 44>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 45>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_32:
/*< 32>*/ 										printf(/* textboxtype: 2, unk: 2, line: 18 */ "Collect all the <color yellow<tears>coloroff> within the Silent\nRealm. I shall await your return here.")
          										flw_49:
/*< 49>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 30, 'param3': 40}
/*< 30>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 36>*/ 										printf(/* textboxtype: 2, unk: 2, line: 24 */ "The locations of <color yellow<tears >coloroff>that you have\npreviously collected will be <color red<marked\non the map>coloroff>, so make good use of that.\n\nConfirm the locations of all 15 tears\nfirst to increase your chances of\nsuccessfully completing the trial.")
/*< 42>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_32
          									}
          								  case 1:
/*< 38>*/ 									printf(/* textboxtype: 2, unk: 2, line: 23 */ "I suggest using smart tactics to your\nadvantage. Try <color red<leaving easy-to-collect\ntears >coloroff>for when you are being pursued.")
/*< 41>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_32
          								}
          							  case 1:
/*< 37>*/ 								printf(/* textboxtype: 2, unk: 2, line: 22 */ "<0x10012:0x00000001>Master, the chances of your not being\nthe chosen one are increasing...\n\n\nRepeated attempts at this trial have\nscattered your concentration and made\nyour performance erratic. I suggest\nyou rest awhile before trying again.")
/*< 40>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_32
          							}
          						  case 1:
/*< 26>*/ 							printf(/* textboxtype: 2, unk: 2, line: 21 */ "<color red<Two types of Watchers >coloroff>patrol the\nrealm, looking for intruders. I highly\nsuggest you take caution.\n\nSo long as you do not step into their\nlight, you will remain undetected\nby <color red<flying Sky Watchers>coloroff>.\n\nHowever, the <color red<Earth Watchers>coloroff>, who\n<color red<hover near the ground>coloroff>, will give chase\nif you come too close to them, so <color red<stay\nalert >coloroff>and maintain a safe distance.")
/*< 28>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_32
          						}
          					  case 1:
/*< 29>*/ 						printf(/* textboxtype: 2, unk: 2, line: 20 */ "The locations of <color yellow<tears>coloroff> you have\ngathered during your trial are\n<color red<marked on the map>coloroff>.\n\nYou will have an easier time\ncompleting your task if you\nfirst set out to discover the\nlocations of all 15 tears.")
/*< 25>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_32
          					}
          				  case 1:
/*< 21>*/ 					printf(/* textboxtype: 2, unk: 2, line: 19 */ "<0x10012:0x00000002>Master, so long as you have the will and\ndetermination, you can retry a trial\nas many times as you like.\n\nA good strategy is <color red<to find, but then\ndeliberately not pick up>coloroff>, the most\neasily accessible <color yellow<<color yellow<tears<color yellow< >coloroff>until you are\ndiscovered and really need one.\nCollect the 15 <color yellow<tears>coloroff> and complete the\ntrial. I will await your return in the\noutside world.")
/*< 23>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_49
          				}
          			  case 1:
/*< 47>*/ 				printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004>Master <heroname>...")
/*< 46>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 				printf(/* textboxtype: 2, unk: 2, line: 16 */ "When your <color yellow<<item 17>>coloroff> is filled with\n15 <color red<tears>coloroff>, your spirit will grow and you\nwill be blessed by the goddess with a\nnew power.\n<0x10012:0x00000002>Master, I will await your return in the\noutside world.")
/*< 20>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_49
          			}
          		  case 1:
/*<  3>*/ 			printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004>Master <heroname>...")
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 			printf(/* textboxtype: 2, unk: 2, line: 1 */ "You stand within <color blue<Din's Silent Realm>coloroff>,\nthe third trial. It will test the limits of\nyour <color red<power>coloroff>.\n\nTo locate the last flame that will\nenhance your sword, you must first\ncomplete this final challenge and\nachieve spiritual growth once again.")
/*<  5>*/ 			set_camera(9, 0)
/*<  7>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 11, 'param3': 40}
/*< 11>*/ 			give_item(17 0x11);
/*<  8>*/ 			set_camera(8, 0)
/*<  9>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 6, 'param3': 40}
/*<  6>*/ 			printf(/* textboxtype: 2, unk: 2, line: 2 */ "When your vessel is full, your spirit\nwill grow and you will be entrusted\nwith a <color red<new power >coloroff>by the goddess.\n\nDo you have any questions?\n[1-]Yes![2]No.")
/*< 10>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				printf(/* textboxtype: 2, unk: 2, line: 3 */ "Which topic do you wish to review?\n\n\n[1-]The <item 17>?[2-]Guardians?[3-]Waking Water?[4]Never mind.")
          				flw_51:
/*< 51>*/ 				switch (choice(4)) {
          				  case 0:
/*< 52>*/ 					printf(/* textboxtype: 2, unk: 2, line: 7 */ "Yes, <0x10012:0x00000005>Master.\n\n\n\nTo fill the <color yellow<<item 17>>coloroff>, you\nneed to locate and collect the\n<color yellow<<color yellow<Tears of Din<color yellow< >coloroff>scattered\nacross this Silent Realm.")
/*< 59>*/ 					set_camera(2, 0)
/*< 58>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 56, 'param3': 40}
/*< 56>*/ 					printf(/* textboxtype: 2, unk: 2, line: 8 */ "<0x10012:0x00000002>Master, do you see the glowing\nobject ahead of you?")
/*< 55>*/ 					set_camera(3, 0)
/*< 54>*/ 					printf(/* textboxtype: 2, unk: 2, line: 9 */ "That is a <color yellow<<item 44>>coloroff>.\nYou will need to collect <color red<15 >coloroff>of them.")
/*< 57>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 53, 'param3': 40}
/*< 53>*/ 					wait_frames(15)
          					flw_77:
/*< 77>*/ 					set_camera(1, 0)
/*< 78>*/ 					printf(/* textboxtype: 2, unk: 2, line: 4 */ "Do you have any further questions?\n\n[1-]The <item 17>?[2-]Guardians?[3-]Waking Water?[4]Never mind.")
          					goto flw_51
          				  case 1:
/*< 60>*/ 					printf(/* textboxtype: 2, unk: 2, line: 10 */ "Yes, <0x10012:0x00000005>Master.")
/*< 64>*/ 					set_camera(6, 0)
/*< 66>*/ 					printf(/* textboxtype: 2, unk: 2, line: 11 */ "If you take even a single step outside\nthe protective circle you stand in, the\n<color red<Guardians >coloroff>of this realm will wake up\nand pursue you, <0x10012:0x00000002>Master.")
/*< 63>*/ 					set_camera(4, 0)
/*< 65>*/ 					printf(/* textboxtype: 2, unk: 2, line: 12 */ "If a <color red<Guardian >coloroff>manages to land even a\nsingle hit on you, your spirit will\nshatter and you will fail the trial.")
/*< 62>*/ 					set_camera(5, 0)
/*< 61>*/ 					printf(/* textboxtype: 2, unk: 2, line: 13 */ "You must collect the <color yellow<tears>coloroff> scattered\nthroughout this area and fill the\n<color yellow<<item 17> >coloroff>without being hit by\nan attack.")
          					goto flw_77
          				  case 2:
/*< 68>*/ 					printf(/* textboxtype: 2, unk: 2, line: 10 */ "Yes, <0x10012:0x00000005>Master.")
/*< 67>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf(/* textboxtype: 2, unk: 2, line: 14 */ "The unusual liquid substance that\ncovers that area is known as <color red<Waking\nWater>coloroff>, and it has certain unique\nproperties.\nIf you make contact with Waking\nWater, the <color red<Guardians will be\nimmediately alerted to your presence>coloroff>.\n\nPools of Waking Water are located all\nthroughout the area. I suggest you\nwatch where you step...")
          					goto flw_77
          				  case 3:
          					flw_70:
/*< 70>*/ 					printf(/* textboxtype: 2, unk: 2, line: 5 */ "Understood, <0x10012:0x00000005>Master.")
/*< 71>*/ 					set_camera(10, 0)
/*< 72>*/ 					printf(/* textboxtype: 2, unk: 2, line: 6 */ "<0x10012:0x00000002>Master, I await your return in the\noutside world.")
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

