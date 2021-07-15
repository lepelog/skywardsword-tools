          void entrypoint_200_00() {
          	start()
/*< 54>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 11, 'param3': 31}
/*< 11>*/ 	switch (random(2)) {
          	  case 0:
/*< 60>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 1, 'param3': 13}
/*<  1>*/ 		printf("\x0E\x01\x09\x04\x00\x0E\x0E\x01\x08\x02\xFECDCome on... Just go away...")
          	  case 1:
/*< 59>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 12, 'param3': 13}
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x00\x0E\x0E\x01\x08\x02\xFECDJust play dead... Just play dead, koo-kwee...\nPlay dead... Must think dead...")
          	}
          }

          void entrypoint_200_52() {
/*< 48>*/ 	start()
/*< 78>*/ 	switch (scene_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 79>*/ 		printf("\x0E\x01\x12\x04\x00\x01Master, I recommend you investigate\nthe well-being of the creature curled\nup on the forest floor.")
          	  case 1:
/*< 49>*/ 		printf("\x0E\x01\x12\x04\x00\x01Master, if you do not inquire into the\nhealth of the creature curled up here,\nit has less than a 5% chance of survival.")
          	}
          }

          void entrypoint_200_53() {
/*<  2>*/ 	start()
/*<411>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 415, 'param3': 46}
/*<415>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 416, 'param3': 51}
/*<416>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 3, 'param3': 16}
/*<  3>*/ 	printf("")
/*<  4>*/ 	switch (choice(2)) {
          	  case 0:
/*<  5>*/ 		printf("")
          		flw_220:
/*<220>*/ 		printf("")
/*<  7>*/ 		switch (choice(2)) {
          		  case 0:
/*<408>*/ 			set_camera(33, 0)
/*<  8>*/ 			printf("")
/*<410>*/ 			set_camera(32, 0)
/*<409>*/ 			printf("")
          			flw_413:
/*<413>*/ 			set_camera(34, 0)
/*<414>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 412, 'param3': 36}
/*<412>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 10, 'param3': 42}
/*< 10>*/ 			story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<608>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          		  case 1:
/*<  9>*/ 			printf("")
          			goto flw_413
          		}
          	  case 1:
/*<  6>*/ 		printf("")
          		goto flw_220
          	}
          }

          void entrypoint_200_01() {
/*<105>*/ 	start()
/*<280>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 72>*/ 		{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 81, 'param3': 13}
/*< 81>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 77, 'param3': 6}
/*< 77>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 200, 'param3': 17}
/*<200>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 63, 'param3': 13}
/*< 63>*/ 		set_camera(1, 0)
/*< 61>*/ 		printf("\x0E\x01\x08\x02\x1CDKwee-koo! Now there's a green\none! I didn't even know they\ncame in green!")
/*< 64>*/ 		{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 0, 'next': 62, 'param3': 13}
/*< 62>*/ 		printf("\x0E\x01\x09\x04\x00\x0FDon't hurt me, koo-weep!")
/*<120>*/ 		{'type': 'type3', 'subType': 2, 'param1': 18, 'param2': 0, 'next': 123, 'param3': 14}
/*<123>*/ 		{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 256, 'next': 201, 'param3': 15}
/*<201>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 0, 'next': 133, 'param3': 13}
/*<133>*/ 		set_camera(2, 0)
/*< 18>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 121, 'param3': 6}
/*<121>*/ 		{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 0, 'next': 122, 'param3': 14}
/*<122>*/ 		story_flags[50 /* us: 805A9ADD 0x20, jp: 805ACD5D 0x20 */] = true;
/*<135>*/ 		set_camera(9, 0)
          	  case 1:
/*<279>*/ 		printf("\x0E\x01\x09\x04\x00\x0BHuh...? It's gone quiet.")
/*<281>*/ 		temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_200_70() {
/*<623>*/ 	start()
/*<624>*/ 	printf("\x0E\x01\x12\x04\x00\x04Master, I am also capable of providing\nan analysis of your current battle-\nperformance rating versus each enemy\ntype you've encountered.")
/*<629>*/ 	scene_flags[1 'Faron Woods'][70 /* 0x9 40 */] = true;
/*<630>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 103, 'next': 635, 'param3': 32}
/*<635>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 103, 'next': 636, 'param3': 17}
/*<636>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 631, 'param3': 6}
/*<631>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 103, 'next': 632, 'param3': 17}
/*<632>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 634, 'param3': 6}
/*<634>*/ 	set_camera(39, 0)
/*<633>*/ 	printf("While <g<targeting>> an enemy with (Z),\npress (v) to summon me. I will provide\ninformation on your enemy as well as\nyour battle-performance rating.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
/*<637>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 638, 'param3': 36}
/*<638>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 639, 'param3': 6}
/*<639>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_02() {
/*< 19>*/ 	start()
/*< 23>*/ 	switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          	  case 0:
/*< 40>*/ 		switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          		  case 0:
/*< 41>*/ 			printf("\x0E\x01\x09\x04\x00\x07Thanks a ton for finding all my other\nKikwi buddies.\n\n\n\x0E\x01\x09\x04\x00\x13Too bad that girl you've been looking\nfor wasn't with any of my friends.\nI just hope you find her, kwee!")
          		  case 1:
/*<101>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 151, 'param3': 13}
/*<151>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<152>*/ 				printf("\x0E\x01\x09\x04\x00\x07It's good to hear the elder is OK!\nI can't believe he was hiding nearby\nall this time, kweee!\n\n\x0E\x01\x09\x04\x00\x13Sorry to hear that girl you're looking\nfor wasn't with him, though.")
          			  case 1:
/*< 24>*/ 				printf("\x0E\x01\x09\x04\x00\x04Tell the elder that I'm safe. I'm sure\nthe girl you're looking for is safe too.\nShe's probably with the elder, kwi-koo!")
          			}
          		}
          	  case 1:
/*< 55>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 324, 'param3': 31}
/*<324>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1002, 'next': 65, 'param3': 24}
/*< 65>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 22, 'param3': 13}
/*< 22>*/ 		printf("It spotted me again!")
/*<340>*/ 		set_camera(18, 0)
/*<401>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 67, 'param3': 49}
/*< 67>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 18, 'next': 75, 'param3': 13}
/*< 75>*/ 		make_actor_do_something(0, 0)
/*<402>*/ 		printf("\x0E\x01\x08\x02\x2CDKweeee!")
/*< 68>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4, 'param2': 0, 'next': 66, 'param3': 13}
/*< 66>*/ 		printf("\x0E\x01\x08\x02\xFECD\x0E\x01\x06\x02\xFDCD... ...")
/*< 74>*/ 		{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 11, 'next': 73, 'param3': 13}
/*< 73>*/ 		printf("Huh? You don't want to...eat me?\nKwee... And come to think of it, \nwhy did you fight off all those red\nmonsters?")
/*<353>*/ 		set_camera(19, 0)
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 83, 'param3': 13}
/*< 83>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 403, 'param3': 6}
/*<403>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 76, 'param3': 17}
/*< 76>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 27, 'param3': 13}
/*< 27>*/ 		printf("\x0E\x01\x09\x04\x00\x01Kee-paleep! I'm <b<Machi>>. I'm a Kikwi.\nYou seem OK, even though you're \nscary. Thanks for helping me!")
/*<137>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 136, 'param3': 13}
/*<136>*/ 		printf("\x0E\x01\x09\x04\x00\x05That's weird, kee-koo. A little while\nago I ran into another funny animal\nlike you, but that one was a girl.\n[1]Who?[2]Zelda?")
/*< 85>*/ 		switch (choice(2)) {
          		  case 0:
/*< 88>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 86, 'param3': 13}
/*< 86>*/ 			printf("\x0E\x01\x09\x04\x00\x04I don't know who she was, but she\nseemed to be in big trouble when I saw\nher. She a friend of yours, kwee?")
          			flw_90:
/*< 90>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 91, 'param3': 13}
/*< 91>*/ 			printf("\x0E\x01\x09\x04\x00\nA pack of those mean red guys were\nafter her, kwee, but she escaped with\nthe Kikwi <b<elder>>.")
/*<338>*/ 			set_camera(20, 0)
/*<339>*/ 			entrypoint_200_60();
          		  case 1:
/*< 89>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 87, 'param3': 13}
/*< 87>*/ 			printf("\x0E\x01\x09\x04\x00\x04What's a Zelda? I don't know who this\ngirl was, koo-kwee, but she was in a\nbunch of trouble when I saw her.")
          			goto flw_90
          		}
          	}
          }

          void entrypoint_200_54() {
/*< 50>*/ 	start()
/*< 51>*/ 	printf("I have detected an exceptionally strong\ndowsing response in this area. You\nshould continue searching the vicinity.")
          }

          void entrypoint_200_71() {
/*<643>*/ 	start()
/*<644>*/ 	{'type': 'type3', 'subType': 1, 'param1': 315, 'param2': 0, 'next': 645, 'param3': 51}
/*<645>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 646, 'param3': 16}
/*<646>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 647, 'param3': 17}
/*<647>*/ 	set_camera(40, 0)
/*<648>*/ 	entrypoint_006_08();
          }

          void entrypoint_200_03() {
/*< 28>*/ 	start()
/*< 29>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 31>*/ 		printf("\x0E\x01\x09\x04\x00\x07Thanks for finding all of my friends,\nkoo-weep!\n\n\n\x0E\x01\x09\x04\x00\x13But...it looks like it's still dangerous\nhere in the forest.")
          	  case 1:
/*< 93>*/ 		switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          		  case 0:
/*<102>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 161, 'param3': 13}
/*<161>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<162>*/ 				printf("\x0E\x01\x09\x04\x00\x07Good to hear the elder is safe, kwee.\nI'm going to stay here for a while,\nthough, and wait until all those\nmonsters are out of here.")
          			  case 1:
/*<160>*/ 				printf("\x0E\x01\x09\x04\x00\x04I'm going to stay here for a while.\nIf you see the elder, kwee, would you\ntell him where I am?")
          			}
          		  case 1:
/*<342>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 3, 'next': 92, 'param3': 46}
/*< 92>*/ 			{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 12, 'next': 30, 'param3': 13}
/*< 30>*/ 			printf("Don't eat me! I taste TERRIBLE!\nLet me go, kwee!")
/*<158>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<569>*/ 				{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 159, 'param3': 13}
/*<159>*/ 				printf("\x0E\x01\x09\x04\x00\x05Huh? The elder was worried about\nme? I'm glad to hear he's safe, kwee!")
          				flw_207:
/*<207>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 206, 'param3': 13}
/*<206>*/ 				printf("\x0E\x01\x09\x04\x00\x01I'm <b<Oolo>>. If you meet the elder,\ntell him I'm here, kee-paleep!\n\n\n\x0E\x01\x09\x04\x00\x0FI don't know if it's safe yet... I'm going\nto stay here awhile longer and wait\nfor those monsters to go away.")
/*< 32>*/ 				story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */] = true;
/*<650>*/ 				entrypoint_200_62();
          			  case 1:
/*<570>*/ 				{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 100, 'param3': 13}
/*<100>*/ 				printf("\x0E\x01\x09\x04\x00\x05Huh? But you don't seem like a\nmonster, koo-weep...\n\n\nA girl with blonde hair, you say?<pause0F>\n\x0E\x01\x09\x04\x00\x13Can't say I saw anyone like that.\nI was lying low this whole time.")
          				goto flw_207
          			}
          		}
          	}
          }

          void entrypoint_200_55() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf("I detect no monsters in the immediate\narea and therefore conclude it is\nsafe for the Kikwi to leave its perch.\n\nIt seems that this Kikwi is unable to\ndescend the tree. I suggest you\nfind a way to expedite his dismount.\n\n\x0E\x01\x12\x04\x00\x01If you find yourself lacking ideas,\nyou can always press \x0E\x02\x04\x02\x13CD to review your\navailable actions.\x0E\x01\x11\x02\xBCD")
          }

          void entrypoint_200_04() {
/*< 33>*/ 	start()
/*< 34>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 35>*/ 		printf("\x0E\x01\x09\x04\x00\x07Kee-paleep! Thanks for finding all the\nother Kikwis!\n\n\n\x0E\x01\x09\x04\x00\x0BIt looks like this clearing is monster\nfree right now, unlike most of the\nforest, so I'm sticking here for now.")
          	  case 1:
/*< 99>*/ 		switch (scene_flags[13 /* 0x0 20 */]) {
          		  case 0:
/*<115>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<167>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 169, 'param3': 13}
/*<169>*/ 				switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          				  case 0:
/*<170>*/ 					printf("\x0E\x01\x09\x04\x00\x07It's a relief to hear the elder is safe.\n\n\n\n\x0E\x01\x09\x04\x00\x13My legs are still shaking, kwee, so I'm \ngoing to stay here for a while.")
          				  case 1:
/*<168>*/ 					printf("\x0E\x01\x09\x04\x00\x04I'm going to rest here awhile. If you\nsee the elder, let him know I'm here,\nkoo-weep!")
          				}
          			  case 1:
/*<113>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 205, 'param3': 31}
/*<205>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 112, 'param3': 13}
/*<112>*/ 				printf("\x0E\x01\x09\x04\x00\x11Ouch! That, uh...was effective.<pause1E>\nAnyway, thanks to you I'm saved,\nkee-paleep!")
/*<114>*/ 				{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 165, 'param3': 13}
/*<165>*/ 				switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          				  case 0:
/*<166>*/ 					printf("\x0E\x01\x09\x04\x00\x05Really? The elder was worried about\nme? Well, I'm glad to hear he's safe,\nkwee-koo.")
          					flw_210:
/*<210>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 209, 'param3': 13}
/*<209>*/ 					printf("\x0E\x01\x09\x04\x00\x01My name's <b<Lopsa>>. If you see the elder,\ncan you please tell him where I am?\n\x0E\x01\x09\x04\x00\x13Oh kwee... My legs are still shaking.")
/*<163>*/ 					story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */] = true;
/*<649>*/ 					scene_flags[1 'Faron Woods'][53 /* 0x7 20 */] = true;
/*<654>*/ 					entrypoint_200_63();
          				  case 1:
/*<164>*/ 					printf("\x0E\x01\x09\x04\x00\x05Huh? A girl? Sorry, kwee, I don't know\nanything about that.\n\n\n\x0E\x01\x09\x04\x00\x04The elder will probably know\nsomething about her, though.")
          					goto flw_210
          				}
          			}
          		  case 1:
/*<129>*/ 			{'type': 'type3', 'subType': 4, 'param1': 22, 'param2': 0, 'next': 202, 'param3': 13}
/*<202>*/ 			set_camera(4, 0)
/*<128>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\xFECDKikwi!")
/*<111>*/ 			set_camera(5, 0)
/*<130>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 117, 'param3': 6}
/*<117>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 0, 'next': 116, 'param3': 13}
/*<116>*/ 			printf("\x0E\x01\x09\x04\x00\x0BYou fought off all those red guys.\nSo does that mean that you're...<pause0F>\na good guy?\n\n\x0E\x01\x09\x04\x00\x13See, I've got this problem. My legs\nhave turned to jelly, and I can't get\ndown. Think you could help me, kwee?")
/*<118>*/ 			temp_flags[1 /* 0x1 02 */] = true;
          		}
          	}
          }

          void entrypoint_200_56() {
/*< 47>*/ 	start()
/*<311>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*<310>*/ 		printf("Master, I highly suggest you save the\nprogress of your quest before you set\nout for the temple deep within the\nwoods in pursuit of Zelda.")
          	  case 1:
/*<305>*/ 		switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          		  case 0:
/*<306>*/ 			switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          			  case 0:
/*<308>*/ 				switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          				  case 0:
/*<309>*/ 					switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          					  case 0:
/*<303>*/ 						printf("An analysis of dowsing readings\nindicates that there are no additional\nKikwis in this area.\n\nI suggest you speak with the Kikwi\nelder.")
          					  case 1:
          						flw_304:
/*<304>*/ 						printf("This area commands an excellent view\nof your surroundings. It would be wise\nto utilize this vantage point to dowse\nfor nearby Kikwis.")
          					}
          				  case 1:
          					goto flw_304
          				}
          			  case 1:
          				goto flw_304
          			}
          		  case 1:
/*<568>*/ 			printf("I do not detect a strong dowsing\nresponse corresponding with Zelda in\nthis area. It would be best to move\nyour search to another location.")
          		}
          	}
          }

          void entrypoint_200_90() {
/*<219>*/ 	start()
/*<312>*/ 	switch (story_flags[227 /* us: 805A9AF2 0x20, jp: 805ACD72 0x20 */]) {
          	  case 0:
/*<307>*/ 		printf("\x0E\x01\x09\x04\x18\x1705Hmm? What is up, bud? You got a\nquestion? \n[1]Cubes?[2]Temple?[3-]Not really.")
/*<448>*/ 		switch (choice(3)) {
          		  case 0:
/*<447>*/ 			printf("\x0E\x01\x09\x04\x16\x1E04Yeah, hit those cubes with a blast of\nlight from your sword and WHOOSH...\nThey shoot up into the sky.\n\nThe ancient texts I have read say those\ncubes are all over this land.")
          			flw_596:
/*<596>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<598>*/ 			printf("\x0E\x01\x09\x04\x08\xB04The old texts refer to a place near here\ncalled Skyview Temple where, as the\nstory goes, a visitor from the sky will\none day be received.")
/*<449>*/ 			switch (scene_flags[29 /* 0x2 20 */]) {
          			  case 0:
          				goto flw_596
          			  case 1:
/*<450>*/ 				printf("\x0E\x01\x09\x04\x00\x1707Come to think of it, I seem to\nremember seeing an old stone marker\nsomewhere in these parts.\n\n\x0E\x01\x09\x04\x16\xB00I do not remember exactly what was\nwritten on the thing,<pause0F> but my gut tells\nme it is the key to getting inside!")
          				goto flw_596
          			}
          		  case 2:
/*<597>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<591>*/ 		switch (scene_flags[47 /* 0x4 80 */]) {
          		  case 0:
/*<452>*/ 			switch (scene_flags[37 /* 0x5 20 */]) {
          			  case 0:
/*<493>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 451, 'param3': 32}
          				flw_451:
/*<451>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00This cube is made of some sort of\nmetal I have never seen. I have whaled\non it, but nothing happens.")
/*<466>*/ 				set_camera(-1, 0)
/*<477>*/ 				printf("\x0E\x01\x09\x04\x16\xB07You know, bud, I would say the key to\ncracking this egg is that one line.\nYou know, \x0E\x01\x09\x04\x00\x1705\x201C<r<the light from a\nheavenly blade>>\"?")
/*<478>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 479, 'param3': 17}
/*<479>*/ 				{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 480, 'param3': 17}
/*<480>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 481, 'param3': 6}
/*<481>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<486>*/ 				scene_flags[1 'Faron Woods'][37 /* 0x5 20 */] = true;
/*<455>*/ 				switch (scene_flags[36 /* 0x5 10 */]) {
          				  case 0:
          					flw_471:
/*<471>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 472, 'param3': 32}
/*<472>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 473, 'param3': 17}
/*<473>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 474, 'param3': 17}
/*<474>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 457, 'param3': 6}
/*<457>*/ 					set_camera(37, 0)
/*<458>*/ 					printf("\x0E\x01\x09\x04ÿ\xFF05If I remember right...<pause0F> Yup, this is one\nof the things the goddess was said to\nhave left behind for the hero of legend.\n\nPretty amazing, right? I even thought\nup a name for these things.<pause1E> I have been\ncalling them <b<Goddess Cubes>>!\nMakes sense, right?")
/*<459>*/ 					set_camera(-1, 0)
/*<460>*/ 					printf("\x0E\x01\x09\x04\x00\x1E04Those ancient texts say some real\ninteresting stuff about these things.\nHow did it go again? Let me see, uh...\n\n\x201CSummon forth the light from a\nheavenly blade<pause1E>, and may that sword's\nmaster receive aid.\"<pause1E> So there you\nhave it.")
/*<475>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 476, 'param3': 17}
/*<476>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 461, 'param3': 17}
/*<461>*/ 					printf("\x0E\x01\x09\x04\x18\x170BI see you got yourself a sword there.\nWhat do you say we try and crack the\nmystery of this cube together?\n[1]Sure![2]Nah.")
/*<463>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_462:
/*<462>*/ 						printf("\x0E\x01\x09\x04\x17\x1908Hey! Thanks a billion, bud!")
          						flw_465:
/*<465>*/ 						set_camera(37, 0)
          						goto flw_451
          					  case 1:
/*<464>*/ 						printf("\x0E\x01\x09\x04\x18\x170CAww, come on, I am begging you here!\nHelp me out?\n[1]OK.[2]Nope.")
/*<467>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_462
          						  case 1:
/*<468>*/ 							printf("\x0E\x01\x09\x04\x08\x07OK, I get the picture. I will make sure\nthis is worth your while.")
/*<470>*/ 							give_item(161 0xA1);
/*<469>*/ 							printf("\x0E\x01\x09\x04\x17\x1906You would have to be crazy to refuse\nme now! Unless you are... You are not\ncrazy, are you?")
          							goto flw_465
          						}
          					}
          				  case 1:
/*<456>*/ 					printf("\x0E\x01\x09\x04\x17\x1908I tell you, your timing could not have\nbeen better.\n\n\nLook here. I stumbled onto one of\nthese things just now, and it looks just\nlike something I have seen in those\nancient texts!")
          					goto flw_471
          				}
          			}
          		  case 1:
/*<593>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*<594>*/ 				printf("\x0E\x01\x09\x04\x00\x01Hey, bud, come over here and give a\nGoron a hand, will you?")
/*<595>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<592>*/ 				scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<589>*/ 				printf("\x0E\x01\x09\x04\x00\x01Now, there is a face I know! Hey, bud!\n\n\n\nI got something I need your help with.\nCome over here and take a look!")
/*<590>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		}
          	}
          }

          void entrypoint_200_57() {
/*< 20>*/ 	start()
/*< 21>*/ 	printf("")
          }

          void entrypoint_200_05() {
/*< 36>*/ 	start()
/*< 37>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 39>*/ 		printf("\x0E\x01\x09\x04\x00\x13You've found everyone? Wow, you're\npretty serious about searching. Maybe\nyou should rest your eyes, koo-weep.")
          	  case 1:
/*< 95>*/ 		switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          		  case 0:
/*<103>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 96, 'param3': 13}
/*< 96>*/ 			printf("\x0E\x01\x09\x04\x00\x05How did you find me?! I was blending\nin perfectly with my environment,\nkwee...")
/*< 97>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 175, 'param3': 13}
/*<175>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<176>*/ 				printf("\x0E\x01\x09\x04\x00\x07You found him already?! I don't know\nhow you do it, but you sure do have a\nknack for spotting hidden things, kwee!")
          			  case 1:
/*<174>*/ 				printf("\x0E\x01\x09\x04\x00\x14I'm impressed you found me, kwee,\nbut you still haven't found the elder,\nright?")
          			}
          		  case 1:
/*<323>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 348, 'param3': 31}
/*<348>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 3, 'next': 80, 'param3': 46}
/*< 80>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1003, 'next': 104, 'param3': 24}
/*<104>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 38, 'param3': 13}
/*< 38>*/ 			printf("\x0E\x01\x09\x04\x00\x13I've been discovered! And here I\nthought I had a good hiding place,\nkwee...")
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 208, 'param3': 13}
/*<208>*/ 			printf("\x0E\x01\x09\x04\x00\x01I'm <b<Erla>>. You won't find another\nKikwi in these woods that's half as\ngood at hiding as I am. Except the\nelder, of course. Kwee!")
/*<602>*/ 			story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = true;
/*<641>*/ 			story_flags[1155 /* us: 805A9B5A 0x02, jp: 805ACDDA 0x02 */] = true;
/*<653>*/ 			entrypoint_200_64();
          		}
          	}
          }

          void entrypoint_200_91() {
/*<283>*/ 	start()
/*<284>*/ 	printf("")
          }

          void entrypoint_200_06() {
/*< 42>*/ 	start()
/*< 43>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 45>*/ 		switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          		  case 0:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x00\x02No doubt about it, kwee. This Zelda girl\nyou're looking for ran off toward the\ntemple in the Deep Woods.")
/*<119>*/ 			printf("With a <y<slingshot>>, a clever young man\nlike you should be able to find a way\nto the temple.\n\n\x0E\x01\x09\x04\x00\x06Go now and find that girl! I'll be\nrooting for you. Kwee hee hee...")
          		  case 1:
/*<106>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<107>*/ 				switch (random(2)) {
          				  case 0:
/*<110>*/ 					printf("\x0E\x01\x09\x04\x00\x01Go on, kwee. Just climb up onto me and\ntake the reward you earned!")
          				  case 1:
/*<109>*/ 					printf("\x0E\x01\x09\x04\x00\x01Come now, kwee, no need to be shy!\nClimb up onto my back and claim your\nreward.")
          				}
          			  case 1:
          				flw_127:
/*<127>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 44, 'param3': 31}
/*< 44>*/ 				printf("\x0E\x01\x09\x04\x00\nKwee! So all my fellow Kikwis are well.\nAnd they want me to stop worrying?\nAha, excellent! They know me too well.\n\nYou have a real talent for finding\nwhatever is missing, kweee. I don't\nknow who you are or where you come\nfrom, but you have my thanks.")
/*<575>*/ 				switch (temp_flags[4 /* 0x1 10 */]) {
          				  case 0:
/*<576>*/ 					printf("\x0E\x01\x09\x04\x00\x08What's that, kwee? You are also\nsearching for someone who is lost?\n\n\nWell, kwee...now that I think about it,\nI did bump into a young lady earlier. \nShe had blonde hair, that one.")
          					flw_567:
/*<567>*/ 					set_camera(-1, 0)
/*<392>*/ 					printf("\x0E\x01\x09\x04\x00\x02That young girl...Zelda\x2014was that her\nname? Yes...it's all coming back to me.\nShe said she had to travel to the temple\ndeep within these woods, kweee...\nOho! I tried to warn her about how\ndangerous it was there, but the clever\nlittle thing vaulted off my belly and\nran off on her own just the same.")
/*<393>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 394, 'param3': 32}
/*<394>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 102, 'next': 395, 'param3': 17}
/*<395>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 396, 'param3': 6}
/*<396>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 399, 'param3': 17}
/*<399>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 397, 'param3': 6}
/*<397>*/ 					set_camera(31, 0)
/*<125>*/ 					set_camera(7, 0)
/*<138>*/ 					{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 100, 'next': 139, 'param3': 15}
/*<139>*/ 					make_actor_do_something(3, 0)
/*<124>*/ 					printf("\x0E\x01\x09\x04\x00\x03I think she headed down that way\ntoward the temple, kwee...<pause0F>but be sure\nto take great care if you follow her.\nThat area is crawling with monsters.")
/*<400>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 142, 'param3': 17}
/*<142>*/ 					set_camera(8, 0)
/*<143>*/ 					{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 356, 'next': 144, 'param3': 15}
/*<144>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 287, 'param3': 17}
/*<287>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 398, 'param3': 17}
/*<398>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 126, 'param3': 6}
/*<126>*/ 					printf("\x0E\x01\x09\x04\x00\x0E\x0E\x01\x08\x02\x1CDOho! I almost forgot, kwee!\n\n\n\nAs a reward for finding all my fellow\nKikwis, I will give you a precious\nKikwi heirloom.\n\n\x0E\x01\x09\x04\x00\x08Let me just fetch it for you right\nnow, kweee. Pardon me a moment...")
/*<108>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          				  case 1:
/*<577>*/ 					printf("\x0E\x01\x09\x04\x00\x09Kwee hee hee, I feel much less worried\nnow! I believe I just remembered\nwhere that young lady went!")
          					goto flw_567
          				}
          			}
          		}
          	  case 1:
/*<145>*/ 		switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          		  case 0:
/*<146>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<147>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<148>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<381>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 380, 'param3': 6}
/*<380>*/ 						set_camera(29, 0)
/*<642>*/ 						story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          						flw_382:
/*<382>*/ 						story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */] = true;
/*<498>*/ 						story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
          						goto flw_127
          					  case 1:
/*<149>*/ 						printf("\x0E\x01\x09\x04\x00\x06Kweeeee-heee...<pause0F> I am <b<Bucha>>, the\nKikwi elder.\n\n\nI saw the way you spotted me through\nmy ingenious camouflage. <pause0F>Kweee,\nyou are clearly a master woodsman.\n[1]Where's Zelda?[2]Others like you?")
/*<564>*/ 						switch (choice(2)) {
          						  case 0:
/*<566>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<562>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nAh, the girl creature with the blonde\nhair. She looked like one of your kind.\nYes, she was with me, kweeee.\n\n\x0E\x01\x09\x04\x00\x0CBut now is not the time for such talk...\nThe woods are full of monsters. I am\nworried about my missing tribe.\n\nKweeee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          							flw_565:
/*<565>*/ 							set_camera(29, 0)
/*<563>*/ 							printf("\x0E\x01\x09\x04\x00\x0EWhat? You say you've met some of\nmy people, kweee?")
/*<150>*/ 							story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */] = true;
/*<196>*/ 							scene_flags[1 'Faron Woods'][16 /* 0x3 01 */] = true;
          							goto flw_382
          						  case 1:
/*<640>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_565
          						}
          					}
          				  case 1:
/*<177>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<179>*/ 						printf("\x0E\x01\x09\x04\x00\x03So Machi, Oolo, and Lopsa are safe,\neh? Sadly, <r<one more >><r<Kikwi>> remains\nunaccounted for. Would you mind\nsearching for him to see if he's OK?\n\x0E\x01\x09\x04\x00\x02He likes to hide in grassy areas, so\nsearch any tufts of grass you see...\n\n\nBy the way, I haven't forgotten about\nthe girl you search for. Give me just a\nbit more time, and I'm sure I can recall\nsomething about where she was headed.")
          					  case 1:
/*<212>*/ 						printf("\x0E\x01\x09\x04\x00\x06Kweeeee-heee...<pause0F> I am <b<Bucha>>, the\nKikwi elder.\n\n\nI saw the way you spotted me through\nmy ingenious camouflage. <pause0F>Kweee,\nyou are clearly a master woodsman.\n[1]Where's Zelda?[2]Others like you?")
/*<502>*/ 						switch (choice(2)) {
          						  case 0:
/*<504>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<499>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nAh, the girl creature with the blonde\nhair. She looked like one of your kind.\nYes, she was with me, kweeee.\n\n\x0E\x01\x09\x04\x00\x0CBut now is not the time for such talk...\nThe woods are full of monsters. I am\nworried about my missing tribe.\n\nKweeee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          							flw_503:
/*<503>*/ 							set_camera(29, 0)
/*<500>*/ 							printf("\x0E\x01\x09\x04\x00\x0EWhat? You say you've met some of\nmy people, kweee?")
/*<501>*/ 							printf("\x0E\x01\x09\x04\x00\x03Hmm... So Machi, Oolo, and Lopsa are\nsafe, are they? Oh, but there are still\nmonsters lurking in the forest, so I\ndare not leave this spot, kwee.")
/*<505>*/ 							set_camera(-1, 0)
/*<506>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_383:
/*<383>*/ 								printf("\x0E\x01\x09\x04\x00\x08A <r<single Kikwi>> remains unaccounted\nfor, kweee. Would you mind searching\nfor him to see if he's OK?\n\nHe likes to hide in grassy areas, so you\nhad better thoroughly search any\ngrassy tufts you spot.\n\n\x0E\x01\x09\x04\x00\x02If you can find him for me, I should\nbe able to remember the whereabouts\nof that girl you're looking for, kwee.")
          								flw_178:
/*<178>*/ 								scene_flags[1 'Faron Woods'][16 /* 0x3 01 */] = true;
/*<390>*/ 								set_camera(30, 0)
/*<391>*/ 								entrypoint_200_61();
          							  case 1:
/*<507>*/ 								printf("\x0E\x01\x09\x04\x00\x08And you're looking for one of your\nlost people as well?\n\n\nHmmm... Yes. At one point during the\nmonster panic here, I did speak with a\nblonde girl of your kind, kweee.\n\n\x0E\x01\x09\x04\x00\x0CBut now is not the time for such talk.\nThe forest is full of monsters, and I am\nworried about my missing tribe.\n\nKweee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          								goto flw_383
          							}
          						  case 1:
          							goto flw_503
          						}
          					}
          				}
          			  case 1:
/*<180>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<181>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<184>*/ 						printf("\x0E\x01\x09\x04\x00\x03Kwee... So Machi, Oolo, and Erla are\nnow safe?\n\n\nSadly, <r<one more >><r<Kikwi>> remains\nunaccounted for. Would you mind\nsearching for him to see if he's OK?\n\n\x0E\x01\x09\x04\x00\x02He likes to climb trees, so I'd suggest\nyou search the treetops for him, kwee.\n\n\nBy the way, I haven't forgotten about\nthe girl you search for. Give me just a\nbit more time, and I'm sure I can recall\nsomething about where she was headed.")
          					  case 1:
/*<213>*/ 						printf("\x0E\x01\x09\x04\x00\x06Kweeeee-heee...<pause0F> I am <b<Bucha>>, the\nKikwi elder.\n\n\nI saw the way you spotted me through\nmy ingenious camouflage. <pause0F>Kweee,\nyou are clearly a master woodsman.\n[1]Where's Zelda?[2]Others like you?")
/*<511>*/ 						switch (choice(2)) {
          						  case 0:
/*<513>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<509>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nAh, the girl creature with the blonde\nhair. She looked like one of your kind.\nYes, she was with me, kweeee.\n\n\x0E\x01\x09\x04\x00\x0CBut now is not the time for such talk...\nThe woods are full of monsters. I am\nworried about my missing tribe.\n\nKweeee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          							flw_512:
/*<512>*/ 							set_camera(29, 0)
/*<510>*/ 							printf("\x0E\x01\x09\x04\x00\x0EWhat? You say you've met some of\nmy people, kweee?")
/*<508>*/ 							printf("\x0E\x01\x09\x04\x00\x03Hmm... So Machi, Oolo, and Erla are\nsafe, are they? Oh, but there are still\nmonsters lurking in the forest, so I\ndare not leave this spot, kwee.")
/*<514>*/ 							set_camera(-1, 0)
/*<515>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_384:
/*<384>*/ 								printf("\x0E\x01\x09\x04\x00\x08<r<One more >><r<Kikwi>> remains unaccounted\nfor, kweee. Would you mind searching\nfor him to see if he's OK?\n\n\x0E\x01\x09\x04\x00\x02He likes to climb trees, so I'd suggest\nyou search the treetops for him,\nkwee.\n\nBy the way, I haven't forgotten about\nthe girl you search for. Give me just a\nbit more time, and I'm sure I can recall\nsomething about where she was headed.")
          								goto flw_178
          							  case 1:
/*<516>*/ 								printf("\x0E\x01\x09\x04\x00\x08And you're looking for one of your\nlost people as well?\n\n\nHmmm... Yes. At one point during the\nmonster panic here, I did speak with a\nblonde girl of your kind, kweee.\n\n\x0E\x01\x09\x04\x00\x0CBut now is not the time for such talk.\nThe forest is full of monsters, and I am\nworried about my missing tribe.\n\nKweee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          								goto flw_384
          							}
          						  case 1:
          							goto flw_512
          						}
          					}
          				  case 1:
/*<182>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<183>*/ 						printf("\x0E\x01\x09\x04\x00\x03I'm glad to hear that Machi and Oolo\nare safe, kwee, but I still worry about\nthe other Kikwis.\n\n<r<Two>> Kikwis are still unaccounted for.\nCould I ask you to search the area\nfor them and make sure they are safe?\n\n\x0E\x01\x09\x04\x00\x08Oh, and I believe I remembered\nsomething about the girl you seek.\nShe took off that way, kwee! Or maybe\nit was this way? Oh dear.")
          					  case 1:
/*<214>*/ 						printf("\x0E\x01\x09\x04\x00\x06Kweeeee-heee...<pause0F> I am <b<Bucha>>, the\nKikwi elder.\n\n\nI saw the way you spotted me through\nmy ingenious camouflage. <pause0F>Kweee,\nyou are clearly a master woodsman.\n[1]Where's Zelda?[2]Others like you?")
/*<520>*/ 						switch (choice(2)) {
          						  case 0:
/*<522>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<518>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nAh, the girl creature with the blonde\nhair. She looked like one of your kind.\nYes, she was with me, kweeee.\n\n\x0E\x01\x09\x04\x00\x0CBut now is not the time for such talk...\nThe woods are full of monsters. I am\nworried about my missing tribe.\n\nKweeee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          							flw_521:
/*<521>*/ 							set_camera(29, 0)
/*<519>*/ 							printf("\x0E\x01\x09\x04\x00\x0EWhat? You say you've met some of\nmy people, kweee?")
/*<517>*/ 							printf("\x0E\x01\x09\x04\x00\x03Kweee... So Machi and Oolo are safe,\neh?\n\n\nOh, but there are still monsters lurking\nin the forest, so I dare not leave this\nspot.")
/*<523>*/ 							set_camera(-1, 0)
/*<524>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_385:
/*<385>*/ 								printf("\x0E\x01\x09\x04\x00\x02<r<Two more>> of my tribe are still\nunaccounted for, kwee! Could I ask\nyou to search the area for them\nand make sure they are safe?\nI've been worried about my fellow\nKikwis, but if you could put my fears\nto rest, I might remember something\nabout where the girl you seek went.")
          								goto flw_178
          							  case 1:
/*<525>*/ 								printf("\x0E\x01\x09\x04\x00\x08And you're looking for one of your\nlost people as well?\n\n\nHmmm... Yes. At one point during the\nmonster panic here, I did speak with a\nblonde girl of your kind, kweee.\n\n\x0E\x01\x09\x04\x00\x0CBut now is not the time for such talk.\nThe forest is full of monsters, and I am\nworried about my missing tribe.\n\nKweee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          								goto flw_385
          							}
          						  case 1:
          							goto flw_521
          						}
          					}
          				}
          			}
          		  case 1:
/*<185>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<186>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<187>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<195>*/ 						printf("\x0E\x01\x09\x04\x00\x03Kwee... So Machi, Lopsa, and Erla are\nsafe, are they? \n\n\nGood news! Oh, but <r<one last Kikwi>>\nis still unaccounted for. Could I ask\nyou to search the area for him?\n\n\x0E\x01\x09\x04\x00\x02He has quite a talent for disguising\nhimself as a bit of shrubbery, so\nlook for him amongst any big,\nround bushes you may encounter, kwee.\nOn a separate note, I feel like I'm on\nthe verge of remembering something\nabout that girl you're after and where\nshe went. I need just a little more time.")
          					  case 1:
/*<215>*/ 						printf("\x0E\x01\x09\x04\x00\x06Kweeeee-heee...<pause0F> I am <b<Bucha>>, the\nKikwi elder.\n\n\nI saw the way you spotted me through\nmy ingenious camouflage. <pause0F>Kweee,\nyou are clearly a master woodsman.\n[1]Where's Zelda?[2]Others like you?")
/*<529>*/ 						switch (choice(2)) {
          						  case 0:
/*<531>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<527>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nAh, the girl creature with the blonde\nhair. She looked like one of your kind.\nYes, she was with me, kweeee.\n\n\x0E\x01\x09\x04\x00\x0CBut now is not the time for such talk...\nThe woods are full of monsters. I am\nworried about my missing tribe.\n\nKweeee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          							flw_530:
/*<530>*/ 							set_camera(29, 0)
/*<528>*/ 							printf("\x0E\x01\x09\x04\x00\x0EWhat? You say you've met some of\nmy people, kweee?")
/*<526>*/ 							printf("\x0E\x01\x09\x04\x00\x03Kwee... So Machi, Lopsa, and Erla are\nsafe, eh?\n\n\nOh, but there are still monsters lurking\nin the forest. I dare not leave this spot.")
/*<532>*/ 							set_camera(-1, 0)
/*<533>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_386:
/*<386>*/ 								printf("\x0E\x01\x09\x04\x00\x08<r<One last Kikwi>> is still unaccounted\nfor. Could I ask you to search the\narea for him, kwee?\n\nHe has quite a talent for disguising\nhimself as a bit of shrubbery, so\nlook for him amongst any big,\nround bushes you may encounter.\n\x0E\x01\x09\x04\x00\x02Oh, but I feel like I'm on the verge of\nremembering something about that girl\nyou're after and where she went, kwee.\nGive me just a little more time.")
          								goto flw_178
          							  case 1:
/*<534>*/ 								printf("\x0E\x01\x09\x04\x00\x08And you're looking for one of your\nlost people as well?\n\n\nHmmm... Yes. At one point during the\nmonster panic here, I did speak with a\nblonde girl of your kind, kweee.\n\n\x0E\x01\x09\x04\x00\x0CBut now is not the time for such talk.\nThe forest is full of monsters, and I am\nworried about my missing tribe.\n\nKweee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          								goto flw_386
          							}
          						  case 1:
          							goto flw_530
          						}
          					}
          				  case 1:
/*<188>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<189>*/ 						printf("\x0E\x01\x09\x04\x00\x03I'm glad to hear that Machi and Lopsa\nare safe, kwee, but I still worry about\nthe other Kikwis.\n\n<r<Two >>of my tribe are still unaccounted\nfor. Could you please search the area\nfor them and make sure they are safe?\n\n\x0E\x01\x09\x04\x00\x08Oh, and I believe I remembered\nsomething about the girl you seek.\nShe took off that way, kwee!\nOr maybe it was this way? Oh dear.")
          					  case 1:
/*<216>*/ 						printf("\x0E\x01\x09\x04\x00\x06Kweeeee-heee...<pause0F> I am <b<Bucha>>, the\nKikwi elder.\n\n\nI saw the way you spotted me through\nmy ingenious camouflage. <pause0F>Kweee,\nyou are clearly a master woodsman.\n[1]Where's Zelda?[2]Others like you?")
/*<538>*/ 						switch (choice(2)) {
          						  case 0:
/*<540>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<536>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nAh, the girl creature with the blonde\nhair. She looked like one of your kind.\nYes, she was with me, kweeee.\n\n\x0E\x01\x09\x04\x00\x0CBut now is not the time for such talk...\nThe woods are full of monsters. I am\nworried about my missing tribe.\n\nKweeee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          							flw_539:
/*<539>*/ 							set_camera(29, 0)
/*<537>*/ 							printf("\x0E\x01\x09\x04\x00\x0EWhat? You say you've met some of\nmy people, kweee?")
/*<535>*/ 							printf("\x0E\x01\x09\x04\x00\x03Kweee... So Machi and Lopsa are\nsafe, eh?\n\n\nBut it's not safe! There are still\nmonsters lurking in the forest, so\nI dare not leave this spot.")
/*<541>*/ 							set_camera(-1, 0)
/*<542>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_387:
/*<387>*/ 								printf("\x0E\x01\x09\x04\x00\x02<r<Two more>> of my tribe are still\nunaccounted for. Could I ask you\nto search the area for them and\nmake sure they are safe, kwee?\nI am worried about my fellow Kikwis.\nIf you could calm my panic, I might be\nable to remember more about where\nthe girl you seek went off to.")
          								goto flw_178
          							  case 1:
/*<543>*/ 								printf("\x0E\x01\x09\x04\x00\x08And you're looking for one of your\nlost people as well?\n\n\nHmmm... Yes. At one point during the\nmonster panic here, I did speak with a\nblonde girl of your kind, kweee.\n\n\x0E\x01\x09\x04\x00\x0CBut now is not the time for such talk.\nThe forest is full of monsters, and I am\nworried about my missing tribe.\n\nKweee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          								goto flw_387
          							}
          						  case 1:
          							goto flw_539
          						}
          					}
          				}
          			  case 1:
/*<190>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<191>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<194>*/ 						printf("\x0E\x01\x09\x04\x00\x03I'm relieved to hear that Machi and\nErla are safe, kwee, but I still worry\nabout the other Kikwis.\n\n<r<Two >>of my tribe are still unaccounted\nfor. Do you think you could search the\narea for them and make sure they\nare safe?\n\x0E\x01\x09\x04\x00\x08Oh, and I believe I remembered\nsomething about the girl you seek.\nShe took off that way, kweee!\nOr maybe it was this way? Oh dear.")
          					  case 1:
/*<217>*/ 						printf("\x0E\x01\x09\x04\x00\x06Kweeeee-heee...<pause0F> I am <b<Bucha>>, the\nKikwi elder.\n\n\nI saw the way you spotted me through\nmy ingenious camouflage. <pause0F>Kweee,\nyou are clearly a master woodsman.\n[1]Where's Zelda?[2]Others like you?")
/*<547>*/ 						switch (choice(2)) {
          						  case 0:
/*<549>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<545>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nAh, the girl creature with the blonde\nhair. She looked like one of your kind.\nYes, she was with me, kweeee.\n\n\x0E\x01\x09\x04\x00\x0CBut now is not the time for such talk...\nThe woods are full of monsters. I am\nworried about my missing tribe.\n\nKweeee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          							flw_548:
/*<548>*/ 							set_camera(29, 0)
/*<546>*/ 							printf("\x0E\x01\x09\x04\x00\x0EWhat? You say you've met some of\nmy people, kweee?")
/*<544>*/ 							printf("\x0E\x01\x09\x04\x00\x03Kweee... So Machi and Erla are\nsafe, eh?\n\n\nOh, there are still monsters lurking in\nthe forest. I dare not leave this spot.")
/*<550>*/ 							set_camera(-1, 0)
/*<551>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_388:
/*<388>*/ 								printf("\x0E\x01\x09\x04\x00\x02<r<Two>> of my tribe are still missing, kwee.\nCould you please search around the\narea and make sure they're safe?\n\nI've been so worried about my Kikwis.\nBut if you could put my fears to rest,\nI might remember where that girl\nyou seek ran off to, kwee.")
          								goto flw_178
          							  case 1:
/*<552>*/ 								printf("\x0E\x01\x09\x04\x00\x08And you're looking for one of your\nlost people as well?\n\n\nHmmm... Yes. At one point during the\nmonster panic here, I did speak with a\nblonde girl of your kind, kweee.\n\n\x0E\x01\x09\x04\x00\x0CBut now is not the time for such talk.\nThe forest is full of monsters, and I am\nworried about my missing tribe.\n\nKweee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          								goto flw_388
          							}
          						  case 1:
          							goto flw_548
          						}
          					}
          				  case 1:
/*<192>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<193>*/ 						printf("\x0E\x01\x09\x04\x00\x03I'm glad to hear that Machi is safe,\nyes, kwee, but I still worry about the\nother Kikwis.\n\n<r<Three >>of my tribe are still unaccounted\nfor. Could I convince you to search the\narea for them and make sure they are\nsafe?\n\x0E\x01\x09\x04\x00\x08Now if I could just recall where that\ngirl went off to, kwee. Hmm...")
          					  case 1:
/*<218>*/ 						printf("\x0E\x01\x09\x04\x00\x06Kweeeee-heee...<pause0F> I am <b<Bucha>>, the\nKikwi elder.\n\n\nI saw the way you spotted me through\nmy ingenious camouflage. <pause0F>Kweee,\nyou are clearly a master woodsman.\n[1]Where's Zelda?[2]Others like you?")
/*<556>*/ 						switch (choice(2)) {
          						  case 0:
/*<558>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<554>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nAh, the girl creature with the blonde\nhair. She looked like one of your kind.\nYes, she was with me, kweeee.\n\n\x0E\x01\x09\x04\x00\x0CBut now is not the time for such talk...\nThe woods are full of monsters. I am\nworried about my missing tribe.\n\nKweeee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          							flw_557:
/*<557>*/ 							set_camera(29, 0)
/*<555>*/ 							printf("\x0E\x01\x09\x04\x00\x0EWhat? You say you've met some of\nmy people, kweee?")
/*<553>*/ 							printf("\x0E\x01\x09\x04\x00\x03Kweee... So Machi is safe, eh?\n\n\n\nAhhh, but the monsters! They are still\nlurking in the forest. I don't dare\nleave this spot.")
/*<559>*/ 							set_camera(-1, 0)
/*<560>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_389:
/*<389>*/ 								printf("\x0E\x01\x09\x04\x00\x02<r<Three >>Kikwis are still unaccounted for.\nCould I ask you to search for them\nand make sure they are safe, kweee?\n\nI am worried sick for my fellow Kikwis.\nIf you could calm my fears, I might be\nable to remember more about where\nthe girl you seek went off to, kwee.")
          								goto flw_178
          							  case 1:
/*<561>*/ 								printf("\x0E\x01\x09\x04\x00\x08And you're looking for one of your\nlost people as well?\n\n\nHmmm... Yes. At one point during the\nmonster panic here, I did speak with a\nblonde girl of your kind, kweee.\n\n\x0E\x01\x09\x04\x00\x0CBut now is not the time for such talk.\nThe forest is full of monsters, and I am\nworried about my missing tribe.\n\nKweee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          								goto flw_389
          							}
          						  case 1:
          							goto flw_557
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_200_58() {
/*< 52>*/ 	start()
/*< 53>*/ 	printf("\x0E\x01\x12\x04\x00\x04Master Link, now would\nbe an excellent time to arm you with\nadditional information regarding the\nuse of your items.\nYou should be aware that you can\ninstantly ready the <y<slingshot >>you used a\nmoment ago by <g<quickly tapping >>\x0E\x02\x04\x02\x29CD.\x0E\x01\x11\x02\xFCD\n\nShould you forget this procedure, you\nmay press \x0E\x02\x04\x02\x25CD to view the <r<Help>> and be\nreminded.\x0E\x01\x11\x02\xBCD")
          }

          void entrypoint_200_92() {
/*<285>*/ 	start()
/*<286>*/ 	printf("")
          }

          void entrypoint_200_40() {
/*<314>*/ 	start()
/*<315>*/ 	printf("\x0E\x01\x05\x04K\x00\x0E\x01\x12\x04\x00\x01Master, you have entered <b<Faron Woods>>.")
/*<333>*/ 	temp_flags[50 /* 0x7 04 */] = true;
          }

          void entrypoint_200_07() {
/*< 56>*/ 	start()
/*< 58>*/ 	{'type': 'type3', 'subType': 4, 'param1': 20, 'param2': 0, 'next': 203, 'param3': 13}
/*<203>*/ 	set_camera(3, 0)
/*<573>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 574, 'param3': 13}
/*<574>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': -1, 'param3': 6}
          }

          void entrypoint_200_59() {
/*<204>*/ 	start()
/*<586>*/ 	switch (scene_flags[50 /* 0x7 04 */]) {
          	  case 0:
/*<588>*/ 		printf("\x0E\x01\x12\x04\x00\x04Master Link, you should\nbe aware that I have calculated an\n80% probability that a sacred flame\nlies beyond this lake.")
          	  case 1:
/*<587>*/ 		printf("\x0E\x01\x12\x04\x00\x04Master, my calculations indicate\nthere is an 80% probability that a\nsacred flame lies beyond this gate.\n\nI have also deduced that the power of\nthe goddess the Kikwi hermit referred\nto is in fact the <r<Skyward Strike>>.\n\nCharge your sword while standing in\nfront of the gate and use its energy to\n<g<draw the missing portion of the symbol>>.")
/*<620>*/ 		scene_flags[1 'Faron Woods'][52 /* 0x7 10 */] = true;
          	}
          }

          void entrypoint_200_41() {
/*<316>*/ 	start()
/*<317>*/ 	printf("\x0E\x01\x05\x04K\x00The plentiful water in this region\nclearly sustains a large diversity\nof flora, including this massive tree.")
          }

          void entrypoint_200_93() {
/*<417>*/ 	start()
/*<418>*/ 	printf("\x0E\x01\x09\x04\x00\x01Now, there is a face I know. Hey, bud!")
/*<485>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_08() {
/*<131>*/ 	start()
/*<211>*/ 	switch (story_flags[59 /* us: 805A9ADF 0x04, jp: 805ACD5F 0x04 */]) {
          	  case 0:
/*<572>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 10, 'next': 625, 'param3': 13}
/*<625>*/ 		switch (zone_temp_flags[20 /* 0x3 10 */]) {
          		  case 0:
/*<627>*/ 			scene_flags[1 'Faron Woods'][69 /* 0x9 20 */] = true;
          		  case 1:
/*<626>*/ 			zone_temp_flags[20 /* 0x3 10 */] = true;
          		}
          	  case 1:
/*<571>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': -1, 'param3': 13}
          	}
          }

          void entrypoint_200_42() {
/*<318>*/ 	start()
/*<319>*/ 	printf("\x0E\x01\x05\x04K\x00It is logical that the lush plant life and\nwater resources have attracted animal\nspecies to the region.")
          }

          void entrypoint_200_94() {
/*<419>*/ 	start()
/*<425>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 427, 'param3': 46}
/*<427>*/ 	set_camera(35, 0)
/*<429>*/ 	switch (scene_flags[34 /* 0x5 04 */]) {
          	  case 0:
/*<488>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<487>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CDHey, do not run off!\n\n\n\nI need your help figuring out the secret\nof these Goddess Cubes.")
          			flw_437:
/*<437>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 435, 'param3': 49}
/*<435>*/ 			{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 356, 'next': 436, 'param3': 15}
/*<436>*/ 			set_camera(36, 0)
/*<483>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<489>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CDHold up, bud!\n\n\n\nI need to ask you a favor.")
          			goto flw_437
          		}
          	  case 1:
/*<434>*/ 		scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<453>*/ 		scene_flags[1 'Faron Woods'][36 /* 0x5 10 */] = true;
/*<433>*/ 		printf("\x0E\x01\x09\x04\x00\x03\x0E\x01\x08\x02\x2CDHold it, bud!\n\n\n\n\x0E\x01\x09\x04\x17\x600Do not walk on by like you do not see\nme when I know you do.<pause0F> Are you mad\nat me or something?\n[1]Sorry![2]I don't like you.")
/*<431>*/ 		switch (choice(2)) {
          		  case 0:
/*<430>*/ 			printf("\x0E\x01\x09\x04\x16\x1E07Oh, you are busy searching for your\nfriend. I get it. Sorry to get in your\nway, bud. Really, I am.\n\nBut this will not take long. Come help\nme out, will you?")
          			goto flw_437
          		  case 1:
/*<432>*/ 			printf("\x0E\x01\x09\x04\x16\x1E56Oh. Ouch. Is that so? I guess it is just\nhow it is for us explorer types. We are\nfated to be misunderstood.\n\nJust the same, could you take a few\nminutes to help me out?")
          			goto flw_437
          		}
          	}
          }

          void entrypoint_200_60() {
/*< 25>*/ 	start()
/*< 57>*/ 	{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 230, 'param3': 51}
/*<230>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 221, 'param3': 17}
/*<221>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 225, 'param3': 13}
/*<225>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 404, 'param3': 6}
/*<404>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 222, 'param3': 49}
/*<222>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 0, 'next': 224, 'param3': 13}
/*<224>*/ 	make_actor_do_something(0, 0)
/*<232>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 405, 'param3': 6}
/*<405>*/ 	{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 84, 'param3': 13}
/*< 84>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 407, 'param3': 50}
/*<407>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 26, 'param3': 17}
/*< 26>*/ 	printf("\x0E\x01\x12\x04\x00\x04Master, we have obtained new\ninformation on Zelda's current status.\n\n\nThis information indicates that she was\nassailed by monsters but somehow\nevaded capture. However, I infer that\nshe is still in significant danger.")
/*<154>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 256, 'next': 336, 'param3': 30}
/*<336>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 313, 'param3': 6}
/*<313>*/ 	story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */] = true;
/*<153>*/ 	printf("<pling>I have marked the position of the\nKikwi known as Machi. Please\nconfirm your current location.")
/*<157>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 337, 'param3': 34}
/*<337>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 223, 'param3': 6}
/*<223>*/ 	{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 0, 'next': 282, 'param3': 13}
/*<282>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 155, 'param3': 17}
/*<155>*/ 	printf("Furthermore, my analysis suggests that\nthis Kikwi most likely produces a\nfalse-positive dowsing reaction due to\nprevious direct contact with Zelda.\nUsing this hypothesis, I theorize there\nis an 85% chance that the Kikwi elder\nwill also generate a dowsing reaction\nfor the same reason.\nI propose you continue dowsing to\nsearch for Zelda.")
/*<156>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 406, 'param3': 36}
/*<406>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 226, 'param3': 17}
/*<226>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 229, 'param3': 6}
/*<229>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 263, 'param3': 13}
/*<263>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 341, 'param3': 6}
/*<341>*/ 	set_camera(19, 0)
/*<264>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 228, 'param3': 17}
/*<228>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 227, 'param3': 13}
/*<227>*/ 	printf("\x0E\x01\x09\x04\x00\x0DYou really spooked me, kwee... \nYou keep some very strange company,\nfriend.")
/*<495>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 494, 'param3': 13}
/*<494>*/ 	printf("\x0E\x01\x09\x04\x00\x07Kee-paleep... It sounds like you're\nset on finding this friend and the elder.\n\n\nIf you're heading that way anyway, \nkwee, would you mind <r<telling our elder\nthat I'm safe>>?\n\n\x0E\x01\x09\x04\x00\x05Cheer up, koo-weep! I bet your\nfriend is safe with our elder.")
/*<583>*/ 	scene_flags[1 'Faron Woods'][45 /* 0x4 20 */] = true;
/*<584>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_09() {
/*<140>*/ 	start()
/*<141>*/ 	printf("\x0E\x01\x09\x04\x00\x02With that slingshot, kwee, you should\nbe able to find a path into the Deep\nWoods where that temple is.")
/*<354>*/ 	set_camera(21, 0)
/*<355>*/ 	{'type': 'type3', 'subType': 2, 'param1': 33, 'param2': 356, 'next': 356, 'param3': 15}
/*<356>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 357, 'param3': 32}
/*<357>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 358, 'param3': 17}
/*<358>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 359, 'param3': 17}
/*<359>*/ 	set_camera(22, 0)
/*<362>*/ 	switch (scene_flags[5 /* 0x1 20 */]) {
          	  case 0:
/*<364>*/ 		printf("\x0E\x01\x09\x04\x00\x08To get started, why don't you shoot that\nvine over\x2014<pause0F> Huh?\n\n\nCouldn't wait to shoot it, could you?<pause0F>\nWell, kwee...I suppose that's a good\nthing. It will make my explanation\nthat much easier to understand.")
          		flw_365:
/*<365>*/ 		printf("\x0E\x01\x09\x04\x00\x02Hold \x0E\x02\x04\x02\x29CD to ready your slingshot, kwee,\nthen release \x0E\x02\x04\x02\x29CD to let a shot fly.\x0E\x01\x11\x02\xFCD\n\n\nIf you run out of ammunition, just \n<g<grab some seeds>> from the fruit that\ngrows on the trees over there.")
/*<360>*/ 		set_camera(23, 0)
/*<368>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 367, 'param3': 17}
/*<367>*/ 		switch (scene_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*<361>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 366, 'param3': 17}
/*<366>*/ 			printf("\x0E\x01\x09\x04\x00\x06Now go find that girl! I'll be rooting\nfor you. Kwee heh heh.")
/*<372>*/ 			set_camera(25, 0)
/*<373>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<369>*/ 			printf("\x0E\x01\x09\x04\x00\x06Now go find that girl! I'll be rooting\nfor you. Kwee heh heh.")
/*<370>*/ 			set_camera(24, 0)
/*<371>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<363>*/ 		printf("\x0E\x01\x09\x04\x00\x08To start, why not try shooting that\ncurled-up vine over there?")
          		goto flw_365
          	}
          }

          void entrypoint_200_43() {
/*<320>*/ 	start()
/*<321>*/ 	printf("\x0E\x01\x05\x04K\x00Looking at the probabilities, it is\nextremely likely that Zelda is\nsomewhere in the area.\n\n\x0E\x01\x05\x04K\x00I recommend you continue to use your\ndowsing ability to search for her.")
/*<609>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<610>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_200_95() {
/*<422>*/ 	start()
/*<426>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 428, 'param3': 46}
/*<428>*/ 	set_camera(35, 0)
/*<438>*/ 	switch (scene_flags[34 /* 0x5 04 */]) {
          	  case 0:
/*<491>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<490>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CDHey, do not run off!\n\n\n\nI need your help figuring out the secret\nof these Goddess Cubes.")
          			flw_446:
/*<446>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 444, 'param3': 49}
/*<444>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 445, 'param3': 15}
/*<445>*/ 			set_camera(36, 0)
/*<484>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<492>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CDHold up, bud!\n\n\n\nI need to ask you a favor.")
          			goto flw_446
          		}
          	  case 1:
/*<443>*/ 		scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<454>*/ 		scene_flags[1 'Faron Woods'][36 /* 0x5 10 */] = true;
/*<442>*/ 		printf("\x0E\x01\x09\x04\x00\x03\x0E\x01\x08\x02\x2CDHold it, bud!\n\n\n\n\x0E\x01\x09\x04\x17\x600Do not walk on by like you do not see\nme when I know you do.<pause0F> Are you mad\nat me or something?\n[1]Sorry![2]I don't like you.")
/*<440>*/ 		switch (choice(2)) {
          		  case 0:
/*<439>*/ 			printf("\x0E\x01\x09\x04\x16\x1E07Oh, you are busy searching for your\nfriend. I get it. Sorry to get in your\nway, bud. Really, I am.\n\nBut this will not take long. Come help\nme out, will you?")
          			goto flw_446
          		  case 1:
/*<441>*/ 			printf("\x0E\x01\x09\x04\x16\x1E56Oh. Ouch. Is that so? I guess it is just\nhow it is for us explorer types. We are\nfated to be misunderstood.\n\nJust the same, could you take a few\nminutes to help me out?")
          			goto flw_446
          		}
          	}
          }

          void entrypoint_200_61() {
/*< 71>*/ 	start()
/*<616>*/ 	story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */] = true;
/*<198>*/ 	{'type': 'type3', 'subType': 1, 'param1': 300, 'param2': 0, 'next': 377, 'param3': 51}
/*<377>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 199, 'param3': 17}
/*<199>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 197, 'param3': 16}
/*<197>*/ 	printf("Learning that Zelda is no longer with\nthe Kikwi elder is an unfortunate\nsetback.<pause0F> But he may still have useful\ninformation.\nTaking this into account, I calculate\nan 85% probability that your quest\nwill be aided if you find the lost Kikwis\nfor the elder.\nTo expedite your search for these\nforest-dwelling creatures, I have\nadded <pling><r<Kikwis>> as a dowsing option.")
/*<618>*/ 	open_dowsing_wheel(1)
/*<619>*/ 	printf("Do you need me to explain how to\nswitch dowsing targets? \n[1]Yes![2-]No, thanks.")
/*<601>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_496:
/*<496>*/ 		printf("Press and hold (^) to display the targets\nyou are currently able to dowse for.\x0E\x01\x11\x02\x8CD\n\n\nSelect your target, and release (^) to\nconfirm your selection.\x0E\x01\x11\x02\x8CD\n\n\nIf you do not want to dowse for\nanything, <g<look around >>and release (^).\n[1]Again, please?[2-]Got it.")
/*<497>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_496
          		  case 1:
          			flw_617:
/*<617>*/ 			printf("Additionally, I will mark any Kikwis\nyou discover on your map and disable\ndowsing readings for them. That way,\nyou will not revisit the same Kikwis.\nThis concludes my explanation. When\nready, please begin your search for\nthe missing Kikwis.")
/*<613>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<614>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 615, 'param3': 36}
/*<615>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
          		goto flw_617
          	}
          }

          void entrypoint_200_44() {
/*<334>*/ 	start()
/*<335>*/ 	temp_flags[51 /* 0x7 08 */] = true;
          }

          void entrypoint_200_96() {
/*<423>*/ 	start()
/*<424>*/ 	printf("\x0E\x01\x09\x04\x15\x1908WHOOOA! Did you see that?! The cube\njust shot up into the sky!\n\n\n\x0E\x01\x09\x04\x13\x1B00I think it reacted to that whirly-beam\nthing that shot out of your sword.\n\n\n\x0E\x01\x09\x04\x00\x1B05And where do you think the cube shot\noff to, anyhow? This mystery just got a\nwhole lot more, uh, mysterious!\n\n\x0E\x01\x09\x04\x16\x1E00The texts say there are cubes like that\none all over this land.\n\n\n\x0E\x01\x09\x04\x00\x1700Tell you what. You blast as many of\nthose cubes as you can find. If you find\nout more about them along the way,\nyou come see me.")
/*<482>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_62() {
/*< 94>*/ 	start()
/*<233>*/ 	switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          	  case 0:
/*<238>*/ 		switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          		  case 0:
/*<239>*/ 			switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          			  case 0:
/*<240>*/ 				switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          				  case 0:
/*<677>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<651>*/ 						set_camera(16, 0)
/*<235>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 270, 'param3': 51}
/*<270>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 268, 'param3': 17}
/*<268>*/ 						{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 10, 'next': 269, 'param3': 13}
/*<269>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 237, 'param3': 6}
/*<237>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 234, 'param3': 16}
/*<234>*/ 						printf("I am not detecting any additional\ndowsing responses in the area.\n\n\nI suggest you go speak with the Kikwi\nelder.")
/*<236>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 271, 'param3': 36}
          						flw_271:
/*<271>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 344, 'param3': 6}
/*<344>*/ 						set_camera(17, 0)
/*<343>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 347, 'param3': 17}
/*<347>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 346, 'param3': 17}
/*<346>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 345, 'param3': 13}
/*<345>*/ 						printf("\x0E\x01\x09\x04\x00\x14What WAS that just now, kwee? \nDon't scare me like that!")
/*<378>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<678>*/ 						set_camera(16, 0)
/*<669>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 673, 'param3': 51}
/*<673>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 671, 'param3': 17}
/*<671>*/ 						{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 10, 'next': 672, 'param3': 13}
/*<672>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 670, 'param3': 6}
/*<670>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 676, 'param3': 16}
/*<676>*/ 						printf("I have marked <pling> the location of Oolo\nthe Kikwi on your map. Unfortunately,\nZelda is not with him.")
/*<674>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 675, 'param3': 17}
/*<675>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 271, 'param3': 36}
          						goto flw_271
          					}
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
          		}
          	  case 1:
          	}
          }

          void entrypoint_200_10() {
/*<288>*/ 	start()
/*<578>*/ 	set_camera(-1, 0)
/*<579>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 580, 'param3': 40}
/*<580>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 581, 'param3': 13}
/*<581>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 328, 'param3': 6}
/*<328>*/ 	set_camera(15, 0)
/*<326>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 75, 'next': 331, 'param3': 6}
/*<331>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1002, 'next': 332, 'param3': 24}
/*<332>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 356, 'next': 325, 'param3': 15}
/*<325>*/ 	{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 327, 'param3': 13}
/*<327>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 100, 'next': 329, 'param3': 14}
/*<329>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 330, 'param3': 17}
/*<330>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 291, 'param3': 13}
/*<291>*/ 	printf("\x0E\x01\x09\x04\x00\x07Hey! It's me, kwee! Did you find the\ngirl?\n[1]Who are you?[2]Not yet...")
/*<292>*/ 	switch (choice(2)) {
          	  case 0:
/*<295>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 293, 'param3': 13}
/*<293>*/ 		printf("\x0E\x01\x09\x04\x00\x13What do you mean, who am I? Don't\ntell me you forgot your old buddy\n<b<Machi>>! Now I'm sad... Koo-kwee...")
          		flw_297:
/*<297>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 298, 'param3': 13}
/*<298>*/ 		printf("\x0E\x01\x09\x04\x00\x07I'm so glad I've finally been reunited\nwith all my Kikwi friends. It's all\nthanks to you, koo-weep!")
/*<290>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 296, 'param3': 13}
/*<296>*/ 		printf("\x0E\x01\x09\x04\x00\x05With any luck, hopefully you'll find\nthat girl you've been searching for real\nsoon, koro-koo! Take care, OK?")
/*<299>*/ 		{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 0, 'next': 300, 'param3': 14}
/*<300>*/ 		story_flags[69 /* us: 805A9ADE 0x01, jp: 805ACD5E 0x01 */] = true;
/*<322>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<289>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 294, 'param3': 13}
/*<294>*/ 		printf("\x0E\x01\x09\x04\x00\x13Oh. That's too bad. But it sounds like\nyou at least know where you need to\nsearch next to find her, kwee.\nThat's...something, right?")
          		goto flw_297
          	}
          }

          void entrypoint_200_63() {
/*<241>*/ 	start()
/*<242>*/ 	switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          	  case 0:
/*<247>*/ 		switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          		  case 0:
/*<248>*/ 			switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          			  case 0:
/*<249>*/ 				switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          				  case 0:
/*<668>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<655>*/ 						set_camera(27, 0)
/*<244>*/ 						{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 274, 'param3': 35}
/*<274>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 272, 'param3': 17}
/*<272>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 10, 'next': 273, 'param3': 13}
/*<273>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 28, 'next': 246, 'param3': 6}
/*<246>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 243, 'param3': 16}
/*<243>*/ 						printf("I am not detecting any additional\ndowsing responses in the area.\n\n\nI suggest you go speak with the Kikwi\nelder.")
/*<245>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 275, 'param3': 36}
          						flw_275:
/*<275>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 375, 'param3': 6}
/*<375>*/ 						set_camera(26, 0)
/*<374>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 278, 'param3': 17}
/*<278>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 277, 'param3': 17}
/*<277>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 276, 'param3': 13}
/*<276>*/ 						printf("\x0E\x01\x09\x04\x00\x0DI thought you were another monster.\nDon't scare me like that, koo-kwee!")
/*<582>*/ 						scene_flags[1 'Faron Woods'][53 /* 0x7 20 */] = true;
/*<585>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<679>*/ 						set_camera(27, 0)
/*<660>*/ 						{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 665, 'param3': 35}
/*<665>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 663, 'param3': 17}
/*<663>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 10, 'next': 664, 'param3': 13}
/*<664>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 28, 'next': 662, 'param3': 6}
/*<662>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 667, 'param3': 16}
/*<667>*/ 						printf("I have marked<pling> the location of Lopsa\nthe Kikwi on your map. Unfortunately,\nZelda is not with him.")
/*<666>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 661, 'param3': 17}
/*<661>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 275, 'param3': 36}
          						goto flw_275
          					}
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
          		}
          	  case 1:
          	}
          }

          void entrypoint_200_64() {
/*<250>*/ 	start()
/*<251>*/ 	switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          	  case 0:
/*<255>*/ 		switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          		  case 0:
/*<256>*/ 			switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          			  case 0:
/*<257>*/ 				switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          				  case 0:
/*<659>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<652>*/ 						set_camera(38, 0)
/*<253>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 254, 'param3': 51}
/*<254>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 376, 'param3': 16}
/*<376>*/ 						printf("I am not detecting any additional\ndowsing responses in the area.\n\n\nI suggest you go speak with the Kikwi\nelder.")
          						flw_252:
/*<252>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 231, 'param3': 36}
/*<231>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 350, 'param3': 6}
/*<350>*/ 						set_camera(17, 0)
/*<349>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 352, 'param3': 17}
/*<352>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 351, 'param3': 17}
/*<351>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 172, 'param3': 13}
/*<172>*/ 						switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          						  case 0:
/*<173>*/ 							printf("\x0E\x01\x09\x04\x00\x05You met the elder? And he's OK?\nPhew, glad to hear it, kwee!\n\n\n\x0E\x01\x09\x04\x00\x14If you see him again, would you\nplease tell him I'm here?")
          							flw_379:
/*<379>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*<171>*/ 							printf("\x0E\x01\x09\x04\x00\x04No one hides like the elder. He's a\ntrue master of camouflage. I don't\nknow if you'll ever find him, koo-weep!")
          							goto flw_379
          						}
          					  case 1:
/*<680>*/ 						set_camera(38, 0)
/*<656>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 657, 'param3': 51}
/*<657>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 658, 'param3': 16}
/*<658>*/ 						printf("I have marked<pling> the location of Erla\nthe Kikwi on your map. Unfortunately,\nZelda is not with him.")
          						goto flw_252
          					}
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
          		}
          	  case 1:
          	}
          }

          void entrypoint_200_99() {
/*<420>*/ 	start()
/*<421>*/ 	printf("He who descended from above:\nlook to the star that the bird\nrising heavenward gazes upon,\nand aim your shot there.")
          }

          void entrypoint_200_65() {
/*<599>*/ 	start()
/*<600>*/ 	printf("I have confirmed the plant life of this\narea matches that of Faron Woods.\nWe have reached the area locally\nreferred to as the Deep Woods.\nNow we should continue toward the \ntemple in search of Zelda.")
/*<611>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<612>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_200_50() {
/*<258>*/ 	start()
/*<301>*/ 	printf("\x0E\x01\x12\x04\x00\x04Master Link, I have\ndetected <b<Zelda>>'s aura emanating\nfrom within this structure.")
/*<302>*/ 	set_camera(13, 0)
/*<265>*/ 	set_camera(-1, 0)
/*<259>*/ 	printf("However, I have also detected the\npresence of numerous monsters.\nAre you sure you want to proceed?\n[1]Of course![2]No.")
/*<260>*/ 	switch (choice(2)) {
          	  case 0:
/*<262>*/ 		printf("It would be very unwise to display\noverconfidence here. Within the walls\nof this place, no one will come to\nyour aid.")
          		flw_266:
/*<266>*/ 		set_camera(14, 0)
/*<267>*/ 		printf("If you feel unprepared to face the\ndangers ahead, consider <g<returning to\nthe sky>> to properly equip yourself.")
/*<607>*/ 		set_camera(-1, 0)
/*<603>*/ 		switch (adventure_pouch_has(0 0x0000)) {
          		  case 0:
/*<605>*/ 			printf("It would be wise to carry a <r<shield >>to\nprotect yourself, as well as a stock of\n<r<potions >>to restore lost hearts.")
          			flw_606:
/*<606>*/ 			printf("Now we should continue the search for\nZelda.")
          		  case 1:
/*<604>*/ 			printf("\x0E\x01\x12\x04\x00\x01Master, it appears you do not currently\nhave a <r<shield>> equipped. To reduce the\nprobability of extreme bodily harm,\nI recommend carrying one at all times.")
          			goto flw_606
          		}
          	  case 1:
/*<261>*/ 		printf("Do not feel embarrassed. Fear is a\nnatural self-preservation instinct\ncommon among living creatures.")
          		goto flw_266
          	}
          }

          void entrypoint_200_51() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaster, I picked up a highly interesting\nspike in <r<dowsing readings>> from the\ncreature you just encountered.\n[1]Really?[2]Zelda?")
/*< 15>*/ 	switch (choice(2)) {
          	  case 0:
/*< 16>*/ 		printf("\x0E\x01\x12\x04\x00\x05Yes, Master. Based on the creature's\ncharacteristics, I must conclude that it\nis a peaceful, forest-dwelling animal\nknown as a <b<Kikwi>>.\nKikwis are intelligent beings capable of\nspeech<pause0F>. However, such a creature could\nobviously not be confused with Zelda.\n\nIt is unclear why such a creature would\nelicit a dowsing response attuned to\nZelda. You should follow the creature\nand investigate this phenomenon.")
          		flw_132:
/*<132>*/ 		set_camera(10, 0)
/*<134>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': -1, 'param3': 6}
          	  case 1:
/*< 17>*/ 		printf("The probability of this life-form being\nZelda is 5%, so I must conclude that \nthis is, in fact, not Zelda but a peaceful\nforest creature known as a Kikwi.\nKikwis are highly intelligent beings, \ncapable of speech.<pause0F> Yes, upon further\nobservation...clearly not Zelda.\n\nIt is unclear why such a creature would\nelicit a dowsing response attuned to\nZelda. You should follow the creature\nand investigate this phenomenon.")
          		goto flw_132
          	}
          }

          void entrypoint_200_69() {
/*<621>*/ 	start()
/*<622>*/ 	printf("\x0E\x01\x12\x04\x00\x04Master Link, should\nyou have questions about anything,\nI encourage you to call me with (v).\x0E\x01\x11\x02\x9CD\n\nOnce I'm summoned, select <r<Advice>> and\nthen <r<Hint >>and I will promptly offer you\ninformation pertinent to your current\ncircumstance.")
/*<628>*/ 	scene_flags[1 'Faron Woods'][69 /* 0x9 20 */] = true;
          }

