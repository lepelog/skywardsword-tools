          void entrypoint_250_03() {
/*< 89>*/ 	start()
          	flw_67:
/*< 67>*/ 	set_camera(6, 0)
/*< 65>*/ 	printf(/* textboxtype: 2, unk: 2, line: 9 */ "If you take even a single step outside\nthe protective circle you stand in, the\n<color red<Guardians >coloroff>of this realm will wake up\nand pursue you, <0x10012:0x00000002>Master.")
/*< 68>*/ 	set_camera(4, 0)
/*< 66>*/ 	printf(/* textboxtype: 4, unk: 2, line: 10 */ "If a <color red<Guardian >coloroff>manages to land even a\nsingle hit on you, your spirit will\nshatter and you will fail the trial.")
/*< 69>*/ 	set_camera(5, 0)
/*< 70>*/ 	printf(/* textboxtype: 2, unk: 4, line: 11 */ "You must collect the <color yellow<tears>coloroff> scattered\nthroughout this area and fill the\n<color yellow<<item 17> >coloroff>without being hit by\nan attack.")
          	flw_74:
/*< 74>*/ 	set_camera(1, 0)
/*< 75>*/ 	printf(/* textboxtype: 4, unk: 2, line: 13 */ "Was my explanation clear, <0x10012:0x00000002>Master?\nDo you want me to explain again?\n[1-]Explain again.[2]I got it.")
/*< 76>*/ 	switch (choice(2)) {
          	  case 0:
/*< 77>*/ 		printf(/* textboxtype: 2, unk: 4, line: 14 */ "Which topic do you wish to review?\n\n\n[1-]The <item 17>?[2-]Guardians?[3-]Silent Realm?[4]Never mind.")
/*< 92>*/ 		switch (choice(4)) {
          		  case 0:
/*< 84>*/ 			printf(/* textboxtype: 2, unk: 2, line: 15 */ "<0x10012:0x00000005>Understood, Master.")
/*< 87>*/ 			zone_temp_flags[10 /* 0x0 04 */] = true;
/*< 90>*/ 			entrypoint_250_02();
          		  case 1:
/*< 85>*/ 			printf(/* textboxtype: 2, unk: 2, line: 15 */ "<0x10012:0x00000005>Understood, Master.")
/*< 91>*/ 			entrypoint_250_03();
          		  case 2:
/*< 93>*/ 			printf(/* textboxtype: 2, unk: 2, line: 15 */ "<0x10012:0x00000005>Understood, Master.")
/*< 95>*/ 			set_camera(12, 0)
/*< 94>*/ 			printf(/* textboxtype: 4, unk: 2, line: 16 */ "The <color blue<Silent Realm >coloroff>is a <color red<spirit world>coloroff> that\nonly the goddess's chosen hero is\nallowed to enter.\n\nYou have separated from your physical\nform and exist in this world as a spirit.\n\n\nThe tasks you perform here test your\nspiritual resolve. You must focus and\ncomplete the trial.")
/*< 97>*/ 			entrypoint_250_04();
          		  case 3:
          			flw_83:
/*< 83>*/ 			set_camera(10, 0)
/*< 78>*/ 			printf(/* textboxtype: 2, unk: 2, line: 12 */ "<0x10012:0x00000005>Understood, Master.\n\n\n\nI will be eagerly awaiting your return\nin the outside world.\n\n\nMay the goddess watch over you,\n<0x10012:0x00000001>Master.")
/*< 79>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 86, 'param3': 40}
/*< 86>*/ 			zone_temp_flags[10 /* 0x0 04 */] = false;
/*< 80>*/ 			scene_flags[22 'Faron: Silent Realm'][100 /* 0xD 10 */] = true;
/*< 81>*/ 			temp_flags[1 /* 0x1 02 */] = true;
/*< 82>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
          		goto flw_83
          	}
          }

          void entrypoint_250_04() {
/*< 96>*/ 	start()
          	goto flw_74
          }

          void entrypoint_250_00() {
          	start()
/*< 23>*/ 	set_camera(8, 0)
/*< 15>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 4, unk: 2, line: 28 */ "We're here, <heroname>!\nShow me what you've got!")
/*< 18>*/ 		set_camera(10, 0)
/*< 17>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 19, 'param3': 40}
/*< 19>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  2>*/ 		switch (scene_flags[100 /* 0xD 10 */]) {
          		  case 0:
/*< 26>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 38>*/ 				printf(/* textboxtype: 2, unk: 2, line: 18 */ "<0x10012:0x00000004>Master <heroname>, I can\nunfortunately confirm that you\nhave failed to pass the trial.")
/*< 55>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 29, 'param3': 40}
/*< 29>*/ 				switch (temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*< 31>*/ 					switch (temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*< 34>*/ 						switch (temp_flags[4 /* 0x1 10 */]) {
          						  case 0:
/*< 40>*/ 							switch (temp_flags[5 /* 0x1 20 */]) {
          							  case 0:
/*< 41>*/ 								switch (temp_flags[6 /* 0x1 40 */]) {
          								  case 0:
/*< 42>*/ 									switch (temp_flags[7 /* 0x1 80 */]) {
          									  case 0:
/*< 46>*/ 										printf(/* textboxtype: 2, unk: 4, line: 26 */ "<0x10012:0x00000001>Master, in addition to the <color red<Guardians>coloroff>\nwho will attack you, there are also two\ntypes of <color red<Watchers >coloroff>that search for\nintruders <color red<on the ground and in the sky>coloroff>.\nThe two types of Watchers exhibit\ndramatically different behavior, so be\nsure you understand how to avoid\ndetection by both.")
/*< 50>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 51>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 52>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_39:
/*< 39>*/ 										printf(/* textboxtype: 4, unk: 2, line: 19 */ "Collect all the <color yellow<tears>coloroff> within the Silent\nRealm. I shall await your return here.")
          										flw_56:
/*< 56>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 37, 'param3': 40}
/*< 37>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 43>*/ 										printf(/* textboxtype: 4, unk: 2, line: 25 */ "The locations of <color yellow<tears >coloroff>that you have\npreviously collected will be <color red<marked\non the map>coloroff>, so make good use of that.\n\nConfirm the locations of all 15 tears\nfirst to increase your chances of\nsuccessfully completing the trial.")
/*< 49>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_39
          									}
          								  case 1:
/*< 45>*/ 									printf(/* textboxtype: 2, unk: 2, line: 24 */ "I suggest using smart tactics to your\nadvantage. Try <color red<leaving easy-to-collect\ntears >coloroff>for when you are being pursued.")
/*< 48>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_39
          								}
          							  case 1:
/*< 44>*/ 								printf(/* textboxtype: 2, unk: 4, line: 23 */ "<0x10012:0x00000001>Master, the chances of your not being\nthe chosen one are increasing...\n\n\nRepeated attempts at this trial have\nscattered your concentration and made\nyour performance erratic. I suggest\nyou rest awhile before trying again.")
/*< 47>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_39
          							}
          						  case 1:
/*< 33>*/ 							printf(/* textboxtype: 4, unk: 2, line: 22 */ "<color red<Two types of Watchers >coloroff>patrol the\nrealm, looking for intruders. I highly\nsuggest you take caution.\n\nSo long as you do not step into their\nlight, you will remain undetected\nby <color red<flying Sky Watchers>coloroff>.\n\nHowever, the <color red<Earth Watchers>coloroff>, who\n<color red<hover near the ground>coloroff>, will give chase\nif you come too close to them, so <color red<stay\nalert >coloroff>and maintain a safe distance.")
/*< 35>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_39
          						}
          					  case 1:
/*< 36>*/ 						printf(/* textboxtype: 2, unk: 2, line: 21 */ "The locations of <color yellow<tears>coloroff> you have\ngathered during your trial are\n<color red<marked on the map>coloroff>.\n\nYou will have an easier time\ncompleting your task if you first set\nout to discover the locations of all\n15 tears.")
/*< 32>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_39
          					}
          				  case 1:
/*< 28>*/ 					printf(/* textboxtype: 2, unk: 4, line: 20 */ "<0x10012:0x00000002>Master, so long as you have the will and\ndetermination, you can retry a trial\nas many times as you like.\n\nA good strategy is <color red<to find, but then\ndeliberately not pick up>coloroff>, the most-\neasily-accessible <color yellow<<color yellow<tears<color yellow< >coloroff>until you are\ndiscovered and really need one.\nCollect the 15 <color yellow<tears>coloroff> and complete the\ntrial. I will await your return in the\noutside world.")
/*< 30>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_56
          				}
          			  case 1:
/*< 53>*/ 				printf(/* textboxtype: 0, unk: 2, line: 1 */ "<0x10012:0x00000004>Master <heroname>.")
/*< 54>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 25, 'param3': 40}
/*< 25>*/ 				printf(/* textboxtype: 2, unk: 4, line: 17 */ "When your <color yellow<<item 17>>coloroff> is filled with\n15 <color red<tears>coloroff>, your spirit will grow and you\nwill be blessed by the goddess with a\nnew power.\n<0x10012:0x00000002>Master, I will await your return in the\noutside world.")
/*< 27>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_56
          			}
          		  case 1:
/*<  1>*/ 			printf(/* textboxtype: 0, unk: 2, line: 1 */ "<0x10012:0x00000004>Master <heroname>.")
/*< 21>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 22, 'param3': 40}
/*< 22>*/ 			printf(/* textboxtype: 2, unk: 4, line: 2 */ "As expected, I cannot follow you into\nthis realm, for this trial calls out to\nyour mind<0x10012:0x00000002> alone.\n\nThis is the nature of places known as\n<color blue<Silent Realms>coloroff>. They are domains of the\nspirit, accessible only to the goddess's\nchosen hero.\nThis particular trial, <color blue<Farore's Silent\nRealm>coloroff>, tests the limits of your <color red<courage>coloroff>.\n\n\n<0x10012:0x00000001>Your spirit has temporarily separated\nfrom your physical body so that you\nmay undertake this challenge.\n\nTo reach the location of the flames\nthat will enhance your sword, it is\nnecessary for <0x10012:0x00000002>you to overcome this\ntrial and undergo spiritual growth.")
/*< 10>*/ 			set_camera(9, 0)
/*< 20>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 24, 'param3': 40}
/*< 24>*/ 			give_item(17 0x11);
/*<  5>*/ 			set_camera(8, 0)
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 3, 'param3': 40}
/*<  3>*/ 			printf(/* textboxtype: 4, unk: 2, line: 4 */ "That is your <color yellow<<item 17>>coloroff>.\n\n\n\nWhen this vessel is full, it will signify\nyou have successfully completed the\ntrial, allowing your spirit to grow.\n\nThis, in turn, will allow the goddess\nto bless you with a <color red<new power>coloroff>.")
          			flw_6:
/*<  6>*/ 			printf(/* textboxtype: 2, unk: 4, line: 5 */ "To fill the <color yellow<<item 17>>coloroff>, you need to\nsearch for something known as a\n<color yellow<<item 43>>coloroff>. There are many of \nthem spread across this strange world.")
/*<  7>*/ 			set_camera(2, 0)
/*<  8>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 11, 'param3': 40}
/*< 11>*/ 			printf(/* textboxtype: 2, unk: 2, line: 6 */ "<0x10012:0x00000002>Master, do you see the glowing\nobject just in front of you?")
/*< 12>*/ 			set_camera(3, 0)
/*< 13>*/ 			printf(/* textboxtype: 4, unk: 2, line: 7 */ "That is a <color yellow<<item 43>>coloroff>.\nYou will need to collect <color red<15 >coloroff>of them.")
/*<  9>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 14, 'param3': 40}
/*< 14>*/ 			wait_frames(15)
/*< 71>*/ 			switch (zone_temp_flags[10 /* 0x0 04 */]) {
          			  case 0:
          				goto flw_74
          			  case 1:
/*< 73>*/ 				set_camera(1, 0)
/*< 72>*/ 				printf(/* textboxtype: 2, unk: 4, line: 8 */ "However, this is not as simple a task\nas it would seem. Your work in this\nrealm is referred to as a <color red<trial>coloroff> for\ngood reason.")
          				goto flw_67
          			}
          		}
          	}
          }

          void entrypoint_250_01() {
/*< 57>*/ 	start()
/*< 58>*/ 	printf(/* textboxtype: 0, unk: 2, line: 1 */ "<0x10012:0x00000004>Master <heroname>.")
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 61, 'param3': 40}
/*< 61>*/ 	wait_frames(30)
/*< 62>*/ 	set_camera(11, 0)
/*< 60>*/ 	printf(/* textboxtype: 2, unk: 2, line: 27 */ "The unusual liquid substance that\ncovers that area is known as <color red<Waking\nWater>coloroff>, and it has certain unique\nproperties.\nIf you make contact with Waking\nWater, the <color red<Guardians will be\nimmediately alerted to your presence>coloroff>.\n\nPools of Waking Water are located all\nthroughout the area. I suggest you\nwatch where you step...")
/*< 64>*/ 	scene_flags[22 'Faron: Silent Realm'][80 /* 0xB 01 */] = true;
/*< 63>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_250_02() {
/*< 88>*/ 	start()
          	goto flw_6
          }

