          void entrypoint_200_00() {
          	start()
/*< 54>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 11, 'param3': 31}
/*< 11>*/ 	switch (random(2)) {
          	  case 0:
/*< 60>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 1, 'param3': 13}
/*<  1>*/ 		printf(/* textboxtype: 1, unk: 1, line: 3 */ "<0x10009:0x0000000e><0x10008:0xfecd>Come on... Just go away...")
          	  case 1:
/*< 59>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 12, 'param3': 13}
/*< 12>*/ 		printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x0000000e><0x10008:0xfecd>Just play dead... Just play dead, koo-kwee...\nPlay dead... Must think dead...")
          	}
          }

          void entrypoint_200_52() {
/*< 48>*/ 	start()
/*< 78>*/ 	switch (scene_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 79>*/ 		printf(/* textboxtype: 0, unk: 1, line: 115 */ "<0x10012:0x00000001>Master, I recommend you investigate\nthe well-being of the creature curled\nup on the forest floor.")
          	  case 1:
/*< 49>*/ 		printf(/* textboxtype: 1, unk: 0, line: 116 */ "<0x10012:0x00000001>Master, if you do not inquire into the\nhealth of the creature curled up here,\nit has less than a 5% chance of survival.")
          	}
          }

          void entrypoint_200_53() {
/*<  2>*/ 	start()
/*<411>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 415, 'param3': 46}
/*<415>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 416, 'param3': 51}
/*<416>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 3, 'param3': 16}
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 1, line: 117 */ "")
/*<  4>*/ 	switch (choice(2)) {
          	  case 0:
/*<  5>*/ 		printf(/* textboxtype: 0, unk: 1, line: 118 */ "")
          		flw_220:
/*<220>*/ 		printf(/* textboxtype: 1, unk: 1, line: 120 */ "")
/*<  7>*/ 		switch (choice(2)) {
          		  case 0:
/*<408>*/ 			set_camera(33, 0)
/*<  8>*/ 			printf(/* textboxtype: 0, unk: 1, line: 121 */ "")
/*<410>*/ 			set_camera(32, 0)
/*<409>*/ 			printf(/* textboxtype: 1, unk: 0, line: 122 */ "")
          			flw_413:
/*<413>*/ 			set_camera(34, 0)
/*<414>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 412, 'param3': 36}
/*<412>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 10, 'param3': 42}
/*< 10>*/ 			story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<608>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          		  case 1:
/*<  9>*/ 			printf(/* textboxtype: 1, unk: 1, line: 123 */ "")
          			goto flw_413
          		}
          	  case 1:
/*<  6>*/ 		printf(/* textboxtype: 1, unk: 0, line: 119 */ "")
          		goto flw_220
          	}
          }

          void entrypoint_200_01() {
/*<105>*/ 	start()
/*<280>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 72>*/ 		{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 81, 'param3': 13}
/*< 81>*/ 		wait_frames(30)
/*< 77>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 200, 'param3': 17}
/*<200>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 63, 'param3': 13}
/*< 63>*/ 		set_camera(1, 0)
/*< 61>*/ 		printf(/* textboxtype: 1, unk: 2, line: 6 */ "<0x10008:0x01cd>Kwee-koo! Now there's a green\none! I didn't even know they\ncame in green!")
/*< 64>*/ 		{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 0, 'next': 62, 'param3': 13}
/*< 62>*/ 		printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x0000000f>Don't hurt me, koo-weep!")
/*<120>*/ 		{'type': 'type3', 'subType': 2, 'param1': 18, 'param2': 0, 'next': 123, 'param3': 14}
/*<123>*/ 		{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 256, 'next': 201, 'param3': 15}
/*<201>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 0, 'next': 133, 'param3': 13}
/*<133>*/ 		set_camera(2, 0)
/*< 18>*/ 		wait_frames(27)
/*<121>*/ 		{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 0, 'next': 122, 'param3': 14}
/*<122>*/ 		story_flags[50 /* us: 805A9ADD 0x20, jp: 805ACD5D 0x20 */] = true;
/*<135>*/ 		set_camera(9, 0)
          	  case 1:
/*<279>*/ 		printf(/* textboxtype: 2, unk: 0, line: 5 */ "<0x10009:0x0000000b>Huh...? It's gone quiet.")
/*<281>*/ 		temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_200_70() {
/*<623>*/ 	start()
/*<624>*/ 	printf(/* textboxtype: 0, unk: 1, line: 160 */ "<0x10012:0x00000004>Master, I am also capable of providing\nan analysis of your current battle-\nperformance rating versus each enemy\ntype you've encountered.")
/*<629>*/ 	scene_flags[1 'Faron Woods'][70 /* 0x9 40 */] = true;
/*<630>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 103, 'next': 635, 'param3': 32}
/*<635>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 103, 'next': 636, 'param3': 17}
/*<636>*/ 	wait_frames(5)
/*<631>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 103, 'next': 632, 'param3': 17}
/*<632>*/ 	wait_frames(10)
/*<634>*/ 	set_camera(39, 0)
/*<633>*/ 	printf(/* textboxtype: 0, unk: 0, line: 161 */ "While <color green<targeting>coloroff> an enemy with (Z),\npress (v) to summon me. I will provide\ninformation on your enemy as well as\nyour battle-performance rating.<0x10011:0x07cd><0x10011:0x09cd>")
/*<637>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 638, 'param3': 36}
/*<638>*/ 	wait_frames(15)
/*<639>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_02() {
/*< 19>*/ 	start()
/*< 23>*/ 	switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          	  case 0:
/*< 40>*/ 		switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          		  case 0:
/*< 41>*/ 			printf(/* textboxtype: 2, unk: 0, line: 23 */ "<0x10009:0x00000007>Thanks a ton for finding all my other\nKikwi buddies.\n\n\n<0x10009:0x00000013>Too bad that girl you've been looking\nfor wasn't with any of my friends.\nI just hope you find her, kwee!")
          		  case 1:
/*<101>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 151, 'param3': 13}
/*<151>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<152>*/ 				printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00000007>It's good to hear the elder is OK!\nI can't believe he was hiding nearby\nall this time, kweee!\n\n<0x10009:0x00000013>Sorry to hear that girl you're looking\nfor wasn't with him, though.")
          			  case 1:
/*< 24>*/ 				printf(/* textboxtype: 1, unk: 2, line: 21 */ "<0x10009:0x00000004>Tell the elder that I'm safe. I'm sure\nthe girl you're looking for is safe too.\nShe's probably with the elder, kwi-koo!")
          			}
          		}
          	  case 1:
/*< 55>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 324, 'param3': 31}
/*<324>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1002, 'next': 65, 'param3': 24}
/*< 65>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 22, 'param3': 13}
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 2, line: 9 */ "It spotted me again!")
/*<340>*/ 		set_camera(18, 0)
/*<401>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 67, 'param3': 49}
/*< 67>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 18, 'next': 75, 'param3': 13}
/*< 75>*/ 		make_actor_do_something(0, 0)
/*<402>*/ 		printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10008:0x02cd>Kweeee!")
/*< 68>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4, 'param2': 0, 'next': 66, 'param3': 13}
/*< 66>*/ 		printf(/* textboxtype: 2, unk: 0, line: 11 */ "<0x10008:0xfecd><0x10006:0xfdcd>... ...")
/*< 74>*/ 		{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 11, 'next': 73, 'param3': 13}
/*< 73>*/ 		printf(/* textboxtype: 1, unk: 1, line: 12 */ "Huh? You don't want to...eat me?\nKwee... And come to think of it, \nwhy did you fight off all those red\nmonsters?")
/*<353>*/ 		set_camera(19, 0)
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 83, 'param3': 13}
/*< 83>*/ 		wait_frames(30)
/*<403>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 76, 'param3': 17}
/*< 76>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 27, 'param3': 13}
/*< 27>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00000001>Kee-paleep! I'm <color blue<Machi>coloroff>. I'm a Kikwi.\nYou seem OK, even though you're \nscary. Thanks for helping me!")
/*<137>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 136, 'param3': 13}
/*<136>*/ 		printf(/* textboxtype: 2, unk: 0, line: 14 */ "<0x10009:0x00000005>That's weird, kee-koo. A little while\nago I ran into another funny animal\nlike you, but that one was a girl.\n[1-]Who?[2-]Zelda?")
/*< 85>*/ 		switch (choice(2)) {
          		  case 0:
/*< 88>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 86, 'param3': 13}
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 2, line: 15 */ "<0x10009:0x00000004>I don't know who she was, but she\nseemed to be in big trouble when I saw\nher. She a friend of yours, kwee?")
          			flw_90:
/*< 90>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 91, 'param3': 13}
/*< 91>*/ 			printf(/* textboxtype: 2, unk: 0, line: 17 */ "<0x10009:0x0000000a>A pack of those mean red guys were\nafter her, kwee, but she escaped with\nthe Kikwi <color blue<elder>coloroff>.")
/*<338>*/ 			set_camera(20, 0)
/*<339>*/ 			entrypoint_200_60();
          		  case 1:
/*< 89>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 87, 'param3': 13}
/*< 87>*/ 			printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000004>What's a Zelda? I don't know who this\ngirl was, koo-kwee, but she was in a\nbunch of trouble when I saw her.")
          			goto flw_90
          		}
          	}
          }

          void entrypoint_200_54() {
/*< 50>*/ 	start()
/*< 51>*/ 	printf(/* textboxtype: 0, unk: 1, line: 124 */ "I have detected an exceptionally strong\ndowsing response in this area. You\nshould continue searching the vicinity.")
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
/*< 31>*/ 		printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x00000007>Thanks for finding all of my friends,\nkoo-weep!\n\n\n<0x10009:0x00000013>But...it looks like it's still dangerous\nhere in the forest.")
          	  case 1:
/*< 93>*/ 		switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          		  case 0:
/*<102>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 161, 'param3': 13}
/*<161>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<162>*/ 				printf(/* textboxtype: 1, unk: 2, line: 42 */ "<0x10009:0x00000007>Good to hear the elder is safe, kwee.\nI'm going to stay here for a while,\nthough, and wait until all those\nmonsters are out of here.")
          			  case 1:
/*<160>*/ 				printf(/* textboxtype: 2, unk: 0, line: 41 */ "<0x10009:0x00000004>I'm going to stay here for a while.\nIf you see the elder, kwee, would you\ntell him where I am?")
          			}
          		  case 1:
/*<342>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 3, 'next': 92, 'param3': 46}
/*< 92>*/ 			{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 12, 'next': 30, 'param3': 13}
/*< 30>*/ 			printf(/* textboxtype: 0, unk: 1, line: 34 */ "Don't eat me! I taste TERRIBLE!\nLet me go, kwee!")
/*<158>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<569>*/ 				{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 159, 'param3': 13}
/*<159>*/ 				printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00000005>Huh? The elder was worried about\nme? I'm glad to hear he's safe, kwee!")
          				flw_207:
/*<207>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 206, 'param3': 13}
/*<206>*/ 				printf(/* textboxtype: 1, unk: 2, line: 39 */ "<0x10009:0x00000001>I'm <color blue<Oolo>coloroff>. If you meet the elder,\ntell him I'm here, kee-paleep!\n\n\n<0x10009:0x0000000f>I don't know if it's safe yet... I'm going\nto stay here awhile longer and wait\nfor those monsters to go away.")
/*< 32>*/ 				story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */] = true;
/*<650>*/ 				entrypoint_200_62();
          			  case 1:
/*<570>*/ 				{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 100, 'param3': 13}
/*<100>*/ 				printf(/* textboxtype: 2, unk: 0, line: 38 */ "<0x10009:0x00000005>Huh? But you don't seem like a\nmonster, koo-weep...\n\n\nA girl with blonde hair, you say?<pause 15>\n<0x10009:0x00000013>Can't say I saw anyone like that.\nI was lying low this whole time.")
          				goto flw_207
          			}
          		}
          	}
          }

          void entrypoint_200_55() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf(/* textboxtype: 1, unk: 0, line: 125 */ "I detect no monsters in the immediate\narea and therefore conclude it is\nsafe for the Kikwi to leave its perch.\n\nIt seems that this Kikwi is unable to\ndescend the tree. I suggest you\nfind a way to expedite his dismount.\n\n<0x10012:0x00000001>If you find yourself lacking ideas,\nyou can always press <icon 19> to review your\navailable actions.<0x10011:0x0bcd>")
          }

          void entrypoint_200_04() {
/*< 33>*/ 	start()
/*< 34>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 35>*/ 		printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x00000007>Kee-paleep! Thanks for finding all the\nother Kikwis!\n\n\n<0x10009:0x0000000b>It looks like this clearing is monster\nfree right now, unlike most of the\nforest, so I'm sticking here for now.")
          	  case 1:
/*< 99>*/ 		switch (scene_flags[13 /* 0x0 20 */]) {
          		  case 0:
/*<115>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<167>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 169, 'param3': 13}
/*<169>*/ 				switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          				  case 0:
/*<170>*/ 					printf(/* textboxtype: 1, unk: 2, line: 54 */ "<0x10009:0x00000007>It's a relief to hear the elder is safe.\n\n\n\n<0x10009:0x00000013>My legs are still shaking, kwee, so I'm \ngoing to stay here for a while.")
          				  case 1:
/*<168>*/ 					printf(/* textboxtype: 2, unk: 0, line: 53 */ "<0x10009:0x00000004>I'm going to rest here awhile. If you\nsee the elder, let him know I'm here,\nkoo-weep!")
          				}
          			  case 1:
/*<113>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 205, 'param3': 31}
/*<205>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 112, 'param3': 13}
/*<112>*/ 				printf(/* textboxtype: 1, unk: 2, line: 48 */ "<0x10009:0x00000011>Ouch! That, uh...was effective.<pause 30>\nAnyway, thanks to you I'm saved,\nkee-paleep!")
/*<114>*/ 				{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 165, 'param3': 13}
/*<165>*/ 				switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          				  case 0:
/*<166>*/ 					printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x00000005>Really? The elder was worried about\nme? Well, I'm glad to hear he's safe,\nkwee-koo.")
          					flw_210:
/*<210>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 209, 'param3': 13}
/*<209>*/ 					printf(/* textboxtype: 1, unk: 2, line: 51 */ "<0x10009:0x00000001>My name's <color blue<Lopsa>coloroff>. If you see the elder,\ncan you please tell him where I am?\n<0x10009:0x00000013>Oh kwee... My legs are still shaking.")
/*<163>*/ 					story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */] = true;
/*<649>*/ 					scene_flags[1 'Faron Woods'][53 /* 0x7 20 */] = true;
/*<654>*/ 					entrypoint_200_63();
          				  case 1:
/*<164>*/ 					printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x00000005>Huh? A girl? Sorry, kwee, I don't know\nanything about that.\n\n\n<0x10009:0x00000004>The elder will probably know\nsomething about her, though.")
          					goto flw_210
          				}
          			}
          		  case 1:
/*<129>*/ 			{'type': 'type3', 'subType': 4, 'param1': 22, 'param2': 0, 'next': 202, 'param3': 13}
/*<202>*/ 			set_camera(4, 0)
/*<128>*/ 			printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x00000002><0x10008:0xfecd>Kikwi!")
/*<111>*/ 			set_camera(5, 0)
/*<130>*/ 			wait_frames(60)
/*<117>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 0, 'next': 116, 'param3': 13}
/*<116>*/ 			printf(/* textboxtype: 2, unk: 0, line: 47 */ "<0x10009:0x0000000b>You fought off all those red guys.\nSo does that mean that you're...<pause 15>\na good guy?\n\n<0x10009:0x00000013>See, I've got this problem. My legs\nhave turned to jelly, and I can't get\ndown. Think you could help me, kwee?")
/*<118>*/ 			temp_flags[1 /* 0x1 02 */] = true;
          		}
          	}
          }

          void entrypoint_200_56() {
/*< 47>*/ 	start()
/*<311>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*<310>*/ 		printf(/* textboxtype: 1, unk: 0, line: 128 */ "Master, I highly suggest you save the\nprogress of your quest before you set\nout for the temple deep within the\nwoods in pursuit of Zelda.")
          	  case 1:
/*<305>*/ 		switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          		  case 0:
/*<306>*/ 			switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          			  case 0:
/*<308>*/ 				switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          				  case 0:
/*<309>*/ 					switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          					  case 0:
/*<303>*/ 						printf(/* textboxtype: 0, unk: 1, line: 127 */ "An analysis of dowsing readings\nindicates that there are no additional\nKikwis in this area.\n\nI suggest you speak with the Kikwi\nelder.")
          					  case 1:
          						flw_304:
/*<304>*/ 						printf(/* textboxtype: 1, unk: 1, line: 129 */ "This area commands an excellent view\nof your surroundings. It would be wise\nto utilize this vantage point to dowse\nfor nearby Kikwis.")
          					}
          				  case 1:
          					goto flw_304
          				}
          			  case 1:
          				goto flw_304
          			}
          		  case 1:
/*<568>*/ 			printf(/* textboxtype: 1, unk: 1, line: 126 */ "I do not detect a strong dowsing\nresponse corresponding with Zelda in\nthis area. It would be best to move\nyour search to another location.")
          		}
          	}
          }

          void entrypoint_200_90() {
/*<219>*/ 	start()
/*<312>*/ 	switch (story_flags[227 /* us: 805A9AF2 0x20, jp: 805ACD72 0x20 */]) {
          	  case 0:
/*<307>*/ 		printf(/* textboxtype: 2, unk: 1, line: 177 */ "<0x10009:0x00181705>Hmm? What is up, bud? You got a\nquestion? \n[1-]Cubes?[2-]Temple?[3]Not really.")
/*<448>*/ 		switch (choice(3)) {
          		  case 0:
/*<447>*/ 			printf(/* textboxtype: 0, unk: 2, line: 178 */ "<0x10009:0x00161e04>Yeah, hit those cubes with a blast of\nlight from your sword and WHOOSH...\nThey shoot up into the sky.\n\nThe ancient texts I have read say those\ncubes are all over this land.")
          			flw_596:
/*<596>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<598>*/ 			printf(/* textboxtype: 1, unk: 0, line: 179 */ "<0x10009:0x00080b04>The old texts refer to a place near here\ncalled Skyview Temple where, as the\nstory goes, a visitor from the sky will\none day be received.")
/*<449>*/ 			switch (scene_flags[29 /* 0x2 20 */]) {
          			  case 0:
          				goto flw_596
          			  case 1:
/*<450>*/ 				printf(/* textboxtype: 2, unk: 1, line: 180 */ "<0x10009:0x00001707>Come to think of it, I seem to\nremember seeing an old stone marker\nsomewhere in these parts.\n\n<0x10009:0x00160b00>I do not remember exactly what was\nwritten on the thing,<pause 15> but my gut tells\nme it is the key to getting inside!")
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
/*<451>*/ 				printf(/* textboxtype: 2, unk: 1, line: 174 */ "<0x10009:0x00ffff00>This cube is made of some sort of\nmetal I have never seen. I have whaled\non it, but nothing happens.")
/*<466>*/ 				set_camera(-1, 0)
/*<477>*/ 				printf(/* textboxtype: 0, unk: 2, line: 175 */ "<0x10009:0x00160b07>You know, bud, I would say the key to\ncracking this egg is that one line.\nYou know, <0x10009:0x00001705>“<color red<the light from a\nheavenly blade>coloroff>\"?")
/*<478>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 479, 'param3': 17}
/*<479>*/ 				{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 480, 'param3': 17}
/*<480>*/ 				wait_frames(30)
/*<481>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<486>*/ 				scene_flags[1 'Faron Woods'][37 /* 0x5 20 */] = true;
/*<455>*/ 				switch (scene_flags[36 /* 0x5 10 */]) {
          				  case 0:
          					flw_471:
/*<471>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 472, 'param3': 32}
/*<472>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 473, 'param3': 17}
/*<473>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 474, 'param3': 17}
/*<474>*/ 					wait_frames(30)
/*<457>*/ 					set_camera(37, 0)
/*<458>*/ 					printf(/* textboxtype: 1, unk: 0, line: 167 */ "<0x10009:0x00ffff05>If I remember right...<pause 15> Yup, this is one\nof the things the goddess was said to\nhave left behind for the hero of legend.\n\nPretty amazing, right? I even thought\nup a name for these things.<pause 30> I have been\ncalling them <color blue<Goddess Cubes>coloroff>!\nMakes sense, right?")
/*<459>*/ 					set_camera(-1, 0)
/*<460>*/ 					printf(/* textboxtype: 2, unk: 1, line: 168 */ "<0x10009:0x00001e04>Those ancient texts say some real\ninteresting stuff about these things.\nHow did it go again? Let me see, uh...\n\n“Summon forth the light from a\nheavenly blade<pause 30>, and may that sword's\nmaster receive aid.\"<pause 30> So there you\nhave it.")
/*<475>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 476, 'param3': 17}
/*<476>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 461, 'param3': 17}
/*<461>*/ 					printf(/* textboxtype: 0, unk: 2, line: 169 */ "<0x10009:0x0018170b>I see you got yourself a sword there.\nWhat do you say we try and crack the\nmystery of this cube together?\n[1-]Sure![2-]Nah.")
/*<463>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_462:
/*<462>*/ 						printf(/* textboxtype: 1, unk: 0, line: 170 */ "<0x10009:0x00171908>Hey! Thanks a billion, bud!")
          						flw_465:
/*<465>*/ 						set_camera(37, 0)
          						goto flw_451
          					  case 1:
/*<464>*/ 						printf(/* textboxtype: 2, unk: 1, line: 171 */ "<0x10009:0x0018170c>Aww, come on, I am begging you here!\nHelp me out?\n[1-]OK.[2-]Nope.")
/*<467>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_462
          						  case 1:
/*<468>*/ 							printf(/* textboxtype: 0, unk: 2, line: 172 */ "<0x10009:0x00080007>OK, I get the picture. I will make sure\nthis is worth your while.")
/*<470>*/ 							give_item(161 0xA1);
/*<469>*/ 							printf(/* textboxtype: 1, unk: 0, line: 173 */ "<0x10009:0x00171906>You would have to be crazy to refuse\nme now! Unless you are... You are not\ncrazy, are you?")
          							goto flw_465
          						}
          					}
          				  case 1:
/*<456>*/ 					printf(/* textboxtype: 0, unk: 2, line: 166 */ "<0x10009:0x00171908>I tell you, your timing could not have\nbeen better.\n\n\nLook here. I stumbled onto one of\nthese things just now, and it looks just\nlike something I have seen in those\nancient texts!")
          					goto flw_471
          				}
          			}
          		  case 1:
/*<593>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*<594>*/ 				printf(/* textboxtype: 2, unk: 1, line: 165 */ "<0x10009:0x00000001>Hey, bud, come over here and give a\nGoron a hand, will you?")
/*<595>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<592>*/ 				scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<589>*/ 				printf(/* textboxtype: 1, unk: 0, line: 164 */ "<0x10009:0x00000001>Now, there is a face I know! Hey, bud!\n\n\n\nI got something I need your help with.\nCome over here and take a look!")
/*<590>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		}
          	}
          }

          void entrypoint_200_57() {
/*< 20>*/ 	start()
/*< 21>*/ 	printf(/* textboxtype: 0, unk: 1, line: 130 */ "")
          }

          void entrypoint_200_05() {
/*< 36>*/ 	start()
/*< 37>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 39>*/ 		printf(/* textboxtype: 0, unk: 1, line: 64 */ "<0x10009:0x00000013>You've found everyone? Wow, you're\npretty serious about searching. Maybe\nyou should rest your eyes, koo-weep.")
          	  case 1:
/*< 95>*/ 		switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          		  case 0:
/*<103>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 96, 'param3': 13}
/*< 96>*/ 			printf(/* textboxtype: 0, unk: 1, line: 61 */ "<0x10009:0x00000005>How did you find me?! I was blending\nin perfectly with my environment,\nkwee...")
/*< 97>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 175, 'param3': 13}
/*<175>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<176>*/ 				printf(/* textboxtype: 1, unk: 2, line: 63 */ "<0x10009:0x00000007>You found him already?! I don't know\nhow you do it, but you sure do have a\nknack for spotting hidden things, kwee!")
          			  case 1:
/*<174>*/ 				printf(/* textboxtype: 2, unk: 0, line: 62 */ "<0x10009:0x00000014>I'm impressed you found me, kwee,\nbut you still haven't found the elder,\nright?")
          			}
          		  case 1:
/*<323>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 348, 'param3': 31}
/*<348>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 3, 'next': 80, 'param3': 46}
/*< 80>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1003, 'next': 104, 'param3': 24}
/*<104>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 38, 'param3': 13}
/*< 38>*/ 			printf(/* textboxtype: 1, unk: 2, line: 57 */ "<0x10009:0x00000013>I've been discovered! And here I\nthought I had a good hiding place,\nkwee...")
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 208, 'param3': 13}
/*<208>*/ 			printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x00000001>I'm <color blue<Erla>coloroff>. You won't find another\nKikwi in these woods that's half as\ngood at hiding as I am. Except the\nelder, of course. Kwee!")
/*<602>*/ 			story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = true;
/*<641>*/ 			story_flags[1155 /* us: 805A9B5A 0x02, jp: 805ACDDA 0x02 */] = true;
/*<653>*/ 			entrypoint_200_64();
          		}
          	}
          }

          void entrypoint_200_91() {
/*<283>*/ 	start()
/*<284>*/ 	printf(/* textboxtype: 0, unk: 2, line: 187 */ "")
          }

          void entrypoint_200_06() {
/*< 42>*/ 	start()
/*< 43>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 45>*/ 		switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          		  case 0:
/*< 46>*/ 			printf(/* textboxtype: 0, unk: 1, line: 100 */ "<0x10009:0x00000002>No doubt about it, kwee. This Zelda girl\nyou're looking for ran off toward the\ntemple in the Deep Woods.")
/*<119>*/ 			printf(/* textboxtype: 1, unk: 0, line: 101 */ "With a <color yellow<slingshot>coloroff>, a clever young man\nlike you should be able to find a way\nto the temple.\n\n<0x10009:0x00000006>Go now and find that girl! I'll be\nrooting for you. Kwee hee hee...")
          		  case 1:
/*<106>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<107>*/ 				switch (random(2)) {
          				  case 0:
/*<110>*/ 					printf(/* textboxtype: 0, unk: 1, line: 97 */ "<0x10009:0x00000001>Go on, kwee. Just climb up onto me and\ntake the reward you earned!")
          				  case 1:
/*<109>*/ 					printf(/* textboxtype: 1, unk: 2, line: 96 */ "<0x10009:0x00000001>Come now, kwee, no need to be shy!\nClimb up onto my back and claim your\nreward.")
          				}
          			  case 1:
          				flw_127:
/*<127>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 44, 'param3': 31}
/*< 44>*/ 				printf(/* textboxtype: 2, unk: 0, line: 92 */ "<0x10009:0x0000000a>Kwee! So all my fellow Kikwis are well.\nAnd they want me to stop worrying?\nAha, excellent! They know me too well.\n\nYou have a real talent for finding\nwhatever is missing, kweee. I don't\nknow who you are or where you come\nfrom, but you have my thanks.")
/*<575>*/ 				switch (temp_flags[4 /* 0x1 10 */]) {
          				  case 0:
/*<576>*/ 					printf(/* textboxtype: 1, unk: 1, line: 99 */ "<0x10009:0x00000008>What's that, kwee? You are also\nsearching for someone who is lost?\n\n\nWell, kwee...now that I think about it,\nI did bump into a young lady earlier. \nShe had blonde hair, that one.")
          					flw_567:
/*<567>*/ 					set_camera(-1, 0)
/*<392>*/ 					printf(/* textboxtype: 0, unk: 0, line: 98 */ "<0x10009:0x00000002>That young girl...Zelda—was that her\nname? Yes...it's all coming back to me.\nShe said she had to travel to the temple\ndeep within these woods, kweee...\nOho! I tried to warn her about how\ndangerous it was there, but the clever\nlittle thing vaulted off my belly and\nran off on her own just the same.")
/*<393>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 394, 'param3': 32}
/*<394>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 102, 'next': 395, 'param3': 17}
/*<395>*/ 					wait_frames(15)
/*<396>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 399, 'param3': 17}
/*<399>*/ 					wait_frames(30)
/*<397>*/ 					set_camera(31, 0)
/*<125>*/ 					set_camera(7, 0)
/*<138>*/ 					{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 100, 'next': 139, 'param3': 15}
/*<139>*/ 					make_actor_do_something(3, 0)
/*<124>*/ 					printf(/* textboxtype: 0, unk: 1, line: 94 */ "<0x10009:0x00000003>I think she headed down that way\ntoward the temple, kwee...<pause 15>but be sure\nto take great care if you follow her.\nThat area is crawling with monsters.")
/*<400>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 142, 'param3': 17}
/*<142>*/ 					set_camera(8, 0)
/*<143>*/ 					{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 356, 'next': 144, 'param3': 15}
/*<144>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 287, 'param3': 17}
/*<287>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 398, 'param3': 17}
/*<398>*/ 					wait_frames(15)
/*<126>*/ 					printf(/* textboxtype: 2, unk: 0, line: 95 */ "<0x10009:0x0000000e><0x10008:0x01cd>Oho! I almost forgot, kwee!\n\n\n\nAs a reward for finding all my fellow\nKikwis, I will give you a precious\nKikwi heirloom.\n\n<0x10009:0x00000008>Let me just fetch it for you right\nnow, kweee. Pardon me a moment...")
/*<108>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          				  case 1:
/*<577>*/ 					printf(/* textboxtype: 1, unk: 2, line: 93 */ "<0x10009:0x00000009>Kwee hee hee, I feel much less worried\nnow! I believe I just remembered\nwhere that young lady went!")
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
/*<381>*/ 						wait_frames(20)
/*<380>*/ 						set_camera(29, 0)
/*<642>*/ 						story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          						flw_382:
/*<382>*/ 						story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */] = true;
/*<498>*/ 						story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
          						goto flw_127
          					  case 1:
/*<149>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Kweeeee-heee...<pause 15> I am <color blue<Bucha>coloroff>, the\nKikwi elder.\n\n\nI saw the way you spotted me through\nmy ingenious camouflage. <pause 15>Kweee,\nyou are clearly a master woodsman.\n[1-]Where's Zelda?[2-]Others like you?")
/*<564>*/ 						switch (choice(2)) {
          						  case 0:
/*<566>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<562>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nAh, the girl creature with the blonde\nhair. She looked like one of your kind.\nYes, she was with me, kweeee.\n\n<0x10009:0x0000000c>But now is not the time for such talk...\nThe woods are full of monsters. I am\nworried about my missing tribe.\n\nKweeee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          							flw_565:
/*<565>*/ 							set_camera(29, 0)
/*<563>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>What? You say you've met some of\nmy people, kweee?")
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
/*<179>*/ 						printf(/* textboxtype: 1, unk: 2, line: 72 */ "<0x10009:0x00000003>So Machi, Oolo, and Lopsa are safe,\neh? Sadly, <color red<one more >coloroff><color red<Kikwi>coloroff> remains\nunaccounted for. Would you mind\nsearching for him to see if he's OK?\n<0x10009:0x00000002>He likes to hide in grassy areas, so\nsearch any tufts of grass you see...\n\n\nBy the way, I haven't forgotten about\nthe girl you search for. Give me just a\nbit more time, and I'm sure I can recall\nsomething about where she was headed.")
          					  case 1:
/*<212>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Kweeeee-heee...<pause 15> I am <color blue<Bucha>coloroff>, the\nKikwi elder.\n\n\nI saw the way you spotted me through\nmy ingenious camouflage. <pause 15>Kweee,\nyou are clearly a master woodsman.\n[1-]Where's Zelda?[2-]Others like you?")
/*<502>*/ 						switch (choice(2)) {
          						  case 0:
/*<504>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<499>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nAh, the girl creature with the blonde\nhair. She looked like one of your kind.\nYes, she was with me, kweeee.\n\n<0x10009:0x0000000c>But now is not the time for such talk...\nThe woods are full of monsters. I am\nworried about my missing tribe.\n\nKweeee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          							flw_503:
/*<503>*/ 							set_camera(29, 0)
/*<500>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>What? You say you've met some of\nmy people, kweee?")
/*<501>*/ 							printf(/* textboxtype: 1, unk: 0, line: 71 */ "<0x10009:0x00000003>Hmm... So Machi, Oolo, and Lopsa are\nsafe, are they? Oh, but there are still\nmonsters lurking in the forest, so I\ndare not leave this spot, kwee.")
/*<505>*/ 							set_camera(-1, 0)
/*<506>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_383:
/*<383>*/ 								printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x00000008>A <color red<single Kikwi>coloroff> remains unaccounted\nfor, kweee. Would you mind searching\nfor him to see if he's OK?\n\nHe likes to hide in grassy areas, so you\nhad better thoroughly search any\ngrassy tufts you spot.\n\n<0x10009:0x00000002>If you can find him for me, I should\nbe able to remember the whereabouts\nof that girl you're looking for, kwee.")
          								flw_178:
/*<178>*/ 								scene_flags[1 'Faron Woods'][16 /* 0x3 01 */] = true;
/*<390>*/ 								set_camera(30, 0)
/*<391>*/ 								entrypoint_200_61();
          							  case 1:
/*<507>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>And you're looking for one of your\nlost people as well?\n\n\nHmmm... Yes. At one point during the\nmonster panic here, I did speak with a\nblonde girl of your kind, kweee.\n\n<0x10009:0x0000000c>But now is not the time for such talk.\nThe forest is full of monsters, and I am\nworried about my missing tribe.\n\nKweee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
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
/*<184>*/ 						printf(/* textboxtype: 1, unk: 2, line: 75 */ "<0x10009:0x00000003>Kwee... So Machi, Oolo, and Erla are\nnow safe?\n\n\nSadly, <color red<one more >coloroff><color red<Kikwi>coloroff> remains\nunaccounted for. Would you mind\nsearching for him to see if he's OK?\n\n<0x10009:0x00000002>He likes to climb trees, so I'd suggest\nyou search the treetops for him, kwee.\n\n\nBy the way, I haven't forgotten about\nthe girl you search for. Give me just a\nbit more time, and I'm sure I can recall\nsomething about where she was headed.")
          					  case 1:
/*<213>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Kweeeee-heee...<pause 15> I am <color blue<Bucha>coloroff>, the\nKikwi elder.\n\n\nI saw the way you spotted me through\nmy ingenious camouflage. <pause 15>Kweee,\nyou are clearly a master woodsman.\n[1-]Where's Zelda?[2-]Others like you?")
/*<511>*/ 						switch (choice(2)) {
          						  case 0:
/*<513>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<509>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nAh, the girl creature with the blonde\nhair. She looked like one of your kind.\nYes, she was with me, kweeee.\n\n<0x10009:0x0000000c>But now is not the time for such talk...\nThe woods are full of monsters. I am\nworried about my missing tribe.\n\nKweeee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          							flw_512:
/*<512>*/ 							set_camera(29, 0)
/*<510>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>What? You say you've met some of\nmy people, kweee?")
/*<508>*/ 							printf(/* textboxtype: 2, unk: 0, line: 74 */ "<0x10009:0x00000003>Hmm... So Machi, Oolo, and Erla are\nsafe, are they? Oh, but there are still\nmonsters lurking in the forest, so I\ndare not leave this spot, kwee.")
/*<514>*/ 							set_camera(-1, 0)
/*<515>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_384:
/*<384>*/ 								printf(/* textboxtype: 0, unk: 1, line: 76 */ "<0x10009:0x00000008><color red<One more >coloroff><color red<Kikwi>coloroff> remains unaccounted\nfor, kweee. Would you mind searching\nfor him to see if he's OK?\n\n<0x10009:0x00000002>He likes to climb trees, so I'd suggest\nyou search the treetops for him,\nkwee.\n\nBy the way, I haven't forgotten about\nthe girl you search for. Give me just a\nbit more time, and I'm sure I can recall\nsomething about where she was headed.")
          								goto flw_178
          							  case 1:
/*<516>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>And you're looking for one of your\nlost people as well?\n\n\nHmmm... Yes. At one point during the\nmonster panic here, I did speak with a\nblonde girl of your kind, kweee.\n\n<0x10009:0x0000000c>But now is not the time for such talk.\nThe forest is full of monsters, and I am\nworried about my missing tribe.\n\nKweee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          								goto flw_384
          							}
          						  case 1:
          							goto flw_512
          						}
          					}
          				  case 1:
/*<182>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<183>*/ 						printf(/* textboxtype: 1, unk: 2, line: 78 */ "<0x10009:0x00000003>I'm glad to hear that Machi and Oolo\nare safe, kwee, but I still worry about\nthe other Kikwis.\n\n<color red<Two>coloroff> Kikwis are still unaccounted for.\nCould I ask you to search the area\nfor them and make sure they are safe?\n\n<0x10009:0x00000008>Oh, and I believe I remembered\nsomething about the girl you seek.\nShe took off that way, kwee! Or maybe\nit was this way? Oh dear.")
          					  case 1:
/*<214>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Kweeeee-heee...<pause 15> I am <color blue<Bucha>coloroff>, the\nKikwi elder.\n\n\nI saw the way you spotted me through\nmy ingenious camouflage. <pause 15>Kweee,\nyou are clearly a master woodsman.\n[1-]Where's Zelda?[2-]Others like you?")
/*<520>*/ 						switch (choice(2)) {
          						  case 0:
/*<522>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<518>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nAh, the girl creature with the blonde\nhair. She looked like one of your kind.\nYes, she was with me, kweeee.\n\n<0x10009:0x0000000c>But now is not the time for such talk...\nThe woods are full of monsters. I am\nworried about my missing tribe.\n\nKweeee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          							flw_521:
/*<521>*/ 							set_camera(29, 0)
/*<519>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>What? You say you've met some of\nmy people, kweee?")
/*<517>*/ 							printf(/* textboxtype: 2, unk: 0, line: 77 */ "<0x10009:0x00000003>Kweee... So Machi and Oolo are safe,\neh?\n\n\nOh, but there are still monsters lurking\nin the forest, so I dare not leave this\nspot.")
/*<523>*/ 							set_camera(-1, 0)
/*<524>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_385:
/*<385>*/ 								printf(/* textboxtype: 0, unk: 1, line: 79 */ "<0x10009:0x00000002><color red<Two more>coloroff> of my tribe are still\nunaccounted for, kwee! Could I ask\nyou to search the area for them\nand make sure they are safe?\nI've been worried about my fellow\nKikwis, but if you could put my fears\nto rest, I might remember something\nabout where the girl you seek went.")
          								goto flw_178
          							  case 1:
/*<525>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>And you're looking for one of your\nlost people as well?\n\n\nHmmm... Yes. At one point during the\nmonster panic here, I did speak with a\nblonde girl of your kind, kweee.\n\n<0x10009:0x0000000c>But now is not the time for such talk.\nThe forest is full of monsters, and I am\nworried about my missing tribe.\n\nKweee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
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
/*<195>*/ 						printf(/* textboxtype: 1, unk: 2, line: 81 */ "<0x10009:0x00000003>Kwee... So Machi, Lopsa, and Erla are\nsafe, are they? \n\n\nGood news! Oh, but <color red<one last Kikwi>coloroff>\nis still unaccounted for. Could I ask\nyou to search the area for him?\n\n<0x10009:0x00000002>He has quite a talent for disguising\nhimself as a bit of shrubbery, so\nlook for him amongst any big,\nround bushes you may encounter, kwee.\nOn a separate note, I feel like I'm on\nthe verge of remembering something\nabout that girl you're after and where\nshe went. I need just a little more time.")
          					  case 1:
/*<215>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Kweeeee-heee...<pause 15> I am <color blue<Bucha>coloroff>, the\nKikwi elder.\n\n\nI saw the way you spotted me through\nmy ingenious camouflage. <pause 15>Kweee,\nyou are clearly a master woodsman.\n[1-]Where's Zelda?[2-]Others like you?")
/*<529>*/ 						switch (choice(2)) {
          						  case 0:
/*<531>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<527>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nAh, the girl creature with the blonde\nhair. She looked like one of your kind.\nYes, she was with me, kweeee.\n\n<0x10009:0x0000000c>But now is not the time for such talk...\nThe woods are full of monsters. I am\nworried about my missing tribe.\n\nKweeee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          							flw_530:
/*<530>*/ 							set_camera(29, 0)
/*<528>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>What? You say you've met some of\nmy people, kweee?")
/*<526>*/ 							printf(/* textboxtype: 2, unk: 0, line: 80 */ "<0x10009:0x00000003>Kwee... So Machi, Lopsa, and Erla are\nsafe, eh?\n\n\nOh, but there are still monsters lurking\nin the forest. I dare not leave this spot.")
/*<532>*/ 							set_camera(-1, 0)
/*<533>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_386:
/*<386>*/ 								printf(/* textboxtype: 0, unk: 1, line: 82 */ "<0x10009:0x00000008><color red<One last Kikwi>coloroff> is still unaccounted\nfor. Could I ask you to search the\narea for him, kwee?\n\nHe has quite a talent for disguising\nhimself as a bit of shrubbery, so\nlook for him amongst any big,\nround bushes you may encounter.\n<0x10009:0x00000002>Oh, but I feel like I'm on the verge of\nremembering something about that girl\nyou're after and where she went, kwee.\nGive me just a little more time.")
          								goto flw_178
          							  case 1:
/*<534>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>And you're looking for one of your\nlost people as well?\n\n\nHmmm... Yes. At one point during the\nmonster panic here, I did speak with a\nblonde girl of your kind, kweee.\n\n<0x10009:0x0000000c>But now is not the time for such talk.\nThe forest is full of monsters, and I am\nworried about my missing tribe.\n\nKweee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          								goto flw_386
          							}
          						  case 1:
          							goto flw_530
          						}
          					}
          				  case 1:
/*<188>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<189>*/ 						printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000003>I'm glad to hear that Machi and Lopsa\nare safe, kwee, but I still worry about\nthe other Kikwis.\n\n<color red<Two >coloroff>of my tribe are still unaccounted\nfor. Could you please search the area\nfor them and make sure they are safe?\n\n<0x10009:0x00000008>Oh, and I believe I remembered\nsomething about the girl you seek.\nShe took off that way, kwee!\nOr maybe it was this way? Oh dear.")
          					  case 1:
/*<216>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Kweeeee-heee...<pause 15> I am <color blue<Bucha>coloroff>, the\nKikwi elder.\n\n\nI saw the way you spotted me through\nmy ingenious camouflage. <pause 15>Kweee,\nyou are clearly a master woodsman.\n[1-]Where's Zelda?[2-]Others like you?")
/*<538>*/ 						switch (choice(2)) {
          						  case 0:
/*<540>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<536>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nAh, the girl creature with the blonde\nhair. She looked like one of your kind.\nYes, she was with me, kweeee.\n\n<0x10009:0x0000000c>But now is not the time for such talk...\nThe woods are full of monsters. I am\nworried about my missing tribe.\n\nKweeee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          							flw_539:
/*<539>*/ 							set_camera(29, 0)
/*<537>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>What? You say you've met some of\nmy people, kweee?")
/*<535>*/ 							printf(/* textboxtype: 2, unk: 0, line: 83 */ "<0x10009:0x00000003>Kweee... So Machi and Lopsa are\nsafe, eh?\n\n\nBut it's not safe! There are still\nmonsters lurking in the forest, so\nI dare not leave this spot.")
/*<541>*/ 							set_camera(-1, 0)
/*<542>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_387:
/*<387>*/ 								printf(/* textboxtype: 0, unk: 1, line: 85 */ "<0x10009:0x00000002><color red<Two more>coloroff> of my tribe are still\nunaccounted for. Could I ask you\nto search the area for them and\nmake sure they are safe, kwee?\nI am worried about my fellow Kikwis.\nIf you could calm my panic, I might be\nable to remember more about where\nthe girl you seek went off to.")
          								goto flw_178
          							  case 1:
/*<543>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>And you're looking for one of your\nlost people as well?\n\n\nHmmm... Yes. At one point during the\nmonster panic here, I did speak with a\nblonde girl of your kind, kweee.\n\n<0x10009:0x0000000c>But now is not the time for such talk.\nThe forest is full of monsters, and I am\nworried about my missing tribe.\n\nKweee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
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
/*<194>*/ 						printf(/* textboxtype: 1, unk: 2, line: 87 */ "<0x10009:0x00000003>I'm relieved to hear that Machi and\nErla are safe, kwee, but I still worry\nabout the other Kikwis.\n\n<color red<Two >coloroff>of my tribe are still unaccounted\nfor. Do you think you could search the\narea for them and make sure they\nare safe?\n<0x10009:0x00000008>Oh, and I believe I remembered\nsomething about the girl you seek.\nShe took off that way, kweee!\nOr maybe it was this way? Oh dear.")
          					  case 1:
/*<217>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Kweeeee-heee...<pause 15> I am <color blue<Bucha>coloroff>, the\nKikwi elder.\n\n\nI saw the way you spotted me through\nmy ingenious camouflage. <pause 15>Kweee,\nyou are clearly a master woodsman.\n[1-]Where's Zelda?[2-]Others like you?")
/*<547>*/ 						switch (choice(2)) {
          						  case 0:
/*<549>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<545>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nAh, the girl creature with the blonde\nhair. She looked like one of your kind.\nYes, she was with me, kweeee.\n\n<0x10009:0x0000000c>But now is not the time for such talk...\nThe woods are full of monsters. I am\nworried about my missing tribe.\n\nKweeee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          							flw_548:
/*<548>*/ 							set_camera(29, 0)
/*<546>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>What? You say you've met some of\nmy people, kweee?")
/*<544>*/ 							printf(/* textboxtype: 2, unk: 0, line: 86 */ "<0x10009:0x00000003>Kweee... So Machi and Erla are\nsafe, eh?\n\n\nOh, there are still monsters lurking in\nthe forest. I dare not leave this spot.")
/*<550>*/ 							set_camera(-1, 0)
/*<551>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_388:
/*<388>*/ 								printf(/* textboxtype: 0, unk: 1, line: 88 */ "<0x10009:0x00000002><color red<Two>coloroff> of my tribe are still missing, kwee.\nCould you please search around the\narea and make sure they're safe?\n\nI've been so worried about my Kikwis.\nBut if you could put my fears to rest,\nI might remember where that girl\nyou seek ran off to, kwee.")
          								goto flw_178
          							  case 1:
/*<552>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>And you're looking for one of your\nlost people as well?\n\n\nHmmm... Yes. At one point during the\nmonster panic here, I did speak with a\nblonde girl of your kind, kweee.\n\n<0x10009:0x0000000c>But now is not the time for such talk.\nThe forest is full of monsters, and I am\nworried about my missing tribe.\n\nKweee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          								goto flw_388
          							}
          						  case 1:
          							goto flw_548
          						}
          					}
          				  case 1:
/*<192>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<193>*/ 						printf(/* textboxtype: 1, unk: 2, line: 90 */ "<0x10009:0x00000003>I'm glad to hear that Machi is safe,\nyes, kwee, but I still worry about the\nother Kikwis.\n\n<color red<Three >coloroff>of my tribe are still unaccounted\nfor. Could I convince you to search the\narea for them and make sure they are\nsafe?\n<0x10009:0x00000008>Now if I could just recall where that\ngirl went off to, kwee. Hmm...")
          					  case 1:
/*<218>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Kweeeee-heee...<pause 15> I am <color blue<Bucha>coloroff>, the\nKikwi elder.\n\n\nI saw the way you spotted me through\nmy ingenious camouflage. <pause 15>Kweee,\nyou are clearly a master woodsman.\n[1-]Where's Zelda?[2-]Others like you?")
/*<556>*/ 						switch (choice(2)) {
          						  case 0:
/*<558>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<554>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nAh, the girl creature with the blonde\nhair. She looked like one of your kind.\nYes, she was with me, kweeee.\n\n<0x10009:0x0000000c>But now is not the time for such talk...\nThe woods are full of monsters. I am\nworried about my missing tribe.\n\nKweeee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          							flw_557:
/*<557>*/ 							set_camera(29, 0)
/*<555>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>What? You say you've met some of\nmy people, kweee?")
/*<553>*/ 							printf(/* textboxtype: 2, unk: 0, line: 89 */ "<0x10009:0x00000003>Kweee... So Machi is safe, eh?\n\n\n\nAhhh, but the monsters! They are still\nlurking in the forest. I don't dare\nleave this spot.")
/*<559>*/ 							set_camera(-1, 0)
/*<560>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_389:
/*<389>*/ 								printf(/* textboxtype: 0, unk: 1, line: 91 */ "<0x10009:0x00000002><color red<Three >coloroff>Kikwis are still unaccounted for.\nCould I ask you to search for them\nand make sure they are safe, kweee?\n\nI am worried sick for my fellow Kikwis.\nIf you could calm my fears, I might be\nable to remember more about where\nthe girl you seek went off to, kwee.")
          								goto flw_178
          							  case 1:
/*<561>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>And you're looking for one of your\nlost people as well?\n\n\nHmmm... Yes. At one point during the\nmonster panic here, I did speak with a\nblonde girl of your kind, kweee.\n\n<0x10009:0x0000000c>But now is not the time for such talk.\nThe forest is full of monsters, and I am\nworried about my missing tribe.\n\nKweee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
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
/*< 53>*/ 	printf(/* textboxtype: 1, unk: 0, line: 131 */ "<0x10012:0x00000004>Master <heroname>, now would\nbe an excellent time to arm you with\nadditional information regarding the\nuse of your items.\nYou should be aware that you can\ninstantly ready the <color yellow<slingshot >coloroff>you used a\nmoment ago by <color green<quickly tapping >coloroff><icon 41>.<0x10011:0x0fcd>\n\nShould you forget this procedure, you\nmay press <icon 37> to view the <color red<Help>coloroff> and be\nreminded.<0x10011:0x0bcd>")
          }

          void entrypoint_200_92() {
/*<285>*/ 	start()
/*<286>*/ 	printf(/* textboxtype: 1, unk: 0, line: 188 */ "")
          }

          void entrypoint_200_40() {
/*<314>*/ 	start()
/*<315>*/ 	printf(/* textboxtype: 1, unk: 1, line: 108 */ "<0x10005:0x004b0000><0x10012:0x00000001>Master, you have entered <color blue<Faron Woods>coloroff>.")
/*<333>*/ 	temp_flags[50 /* 0x7 04 */] = true;
          }

          void entrypoint_200_07() {
/*< 56>*/ 	start()
/*< 58>*/ 	{'type': 'type3', 'subType': 4, 'param1': 20, 'param2': 0, 'next': 203, 'param3': 13}
/*<203>*/ 	set_camera(3, 0)
/*<573>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 574, 'param3': 13}
/*<574>*/ 	wait_frames(60)
          }

          void entrypoint_200_59() {
/*<204>*/ 	start()
/*<586>*/ 	switch (scene_flags[50 /* 0x7 04 */]) {
          	  case 0:
/*<588>*/ 		printf(/* textboxtype: 0, unk: 1, line: 133 */ "<0x10012:0x00000004>Master <heroname>, you should\nbe aware that I have calculated an\n80% probability that a sacred flame\nlies beyond this lake.")
          	  case 1:
/*<587>*/ 		printf(/* textboxtype: 1, unk: 0, line: 132 */ "<0x10012:0x00000004>Master, my calculations indicate\nthere is an 80% probability that a\nsacred flame lies beyond this gate.\n\nI have also deduced that the power of\nthe goddess the Kikwi hermit referred\nto is in fact the <color red<Skyward Strike>coloroff>.\n\nCharge your sword while standing in\nfront of the gate and use its energy to\n<color green<draw the missing portion of the symbol>coloroff>.")
/*<620>*/ 		scene_flags[1 'Faron Woods'][52 /* 0x7 10 */] = true;
          	}
          }

          void entrypoint_200_41() {
/*<316>*/ 	start()
/*<317>*/ 	printf(/* textboxtype: 0, unk: 1, line: 109 */ "<0x10005:0x004b0000>The plentiful water in this region\nclearly sustains a large diversity\nof flora, including this massive tree.")
          }

          void entrypoint_200_93() {
/*<417>*/ 	start()
/*<418>*/ 	printf(/* textboxtype: 0, unk: 2, line: 163 */ "<0x10009:0x00000001>Now, there is a face I know. Hey, bud!")
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
/*<319>*/ 	printf(/* textboxtype: 1, unk: 0, line: 110 */ "<0x10005:0x004b0000>It is logical that the lush plant life and\nwater resources have attracted animal\nspecies to the region.")
          }

          void entrypoint_200_94() {
/*<419>*/ 	start()
/*<425>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 427, 'param3': 46}
/*<427>*/ 	set_camera(35, 0)
/*<429>*/ 	switch (scene_flags[34 /* 0x5 04 */]) {
          	  case 0:
/*<488>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<487>*/ 			printf(/* textboxtype: 0, unk: 2, line: 181 */ "<0x10009:0x00000002><0x10008:0x02cd>Hey, do not run off!\n\n\n\nI need your help figuring out the secret\nof these Goddess Cubes.")
          			flw_437:
/*<437>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 435, 'param3': 49}
/*<435>*/ 			{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 356, 'next': 436, 'param3': 15}
/*<436>*/ 			set_camera(36, 0)
/*<483>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<489>*/ 			printf(/* textboxtype: 1, unk: 0, line: 182 */ "<0x10009:0x00000002><0x10008:0x02cd>Hold up, bud!\n\n\n\nI need to ask you a favor.")
          			goto flw_437
          		}
          	  case 1:
/*<434>*/ 		scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<453>*/ 		scene_flags[1 'Faron Woods'][36 /* 0x5 10 */] = true;
/*<433>*/ 		printf(/* textboxtype: 2, unk: 1, line: 183 */ "<0x10009:0x00000003><0x10008:0x02cd>Hold it, bud!\n\n\n\n<0x10009:0x00170600>Do not walk on by like you do not see\nme when I know you do.<pause 15> Are you mad\nat me or something?\n[1-]Sorry![2-]I don't like you.")
/*<431>*/ 		switch (choice(2)) {
          		  case 0:
/*<430>*/ 			printf(/* textboxtype: 0, unk: 2, line: 184 */ "<0x10009:0x00161e07>Oh, you are busy searching for your\nfriend. I get it. Sorry to get in your\nway, bud. Really, I am.\n\nBut this will not take long. Come help\nme out, will you?")
          			goto flw_437
          		  case 1:
/*<432>*/ 			printf(/* textboxtype: 1, unk: 0, line: 185 */ "<0x10009:0x00161e56>Oh. Ouch. Is that so? I guess it is just\nhow it is for us explorer types. We are\nfated to be misunderstood.\n\nJust the same, could you take a few\nminutes to help me out?")
          			goto flw_437
          		}
          	}
          }

          void entrypoint_200_60() {
/*< 25>*/ 	start()
/*< 57>*/ 	{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 230, 'param3': 51}
/*<230>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 221, 'param3': 17}
/*<221>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 225, 'param3': 13}
/*<225>*/ 	wait_frames(27)
/*<404>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 222, 'param3': 49}
/*<222>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 0, 'next': 224, 'param3': 13}
/*<224>*/ 	make_actor_do_something(0, 0)
/*<232>*/ 	wait_frames(24)
/*<405>*/ 	{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 84, 'param3': 13}
/*< 84>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 407, 'param3': 50}
/*<407>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 26, 'param3': 17}
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0, line: 134 */ "<0x10012:0x00000004>Master, we have obtained new\ninformation on Zelda's current status.\n\n\nThis information indicates that she was\nassailed by monsters but somehow\nevaded capture. However, I infer that\nshe is still in significant danger.")
/*<154>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 256, 'next': 336, 'param3': 30}
/*<336>*/ 	wait_frames(15)
/*<313>*/ 	story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */] = true;
/*<153>*/ 	printf(/* textboxtype: 1, unk: 1, line: 135 */ "<sound 4>I have marked the position of the\nKikwi known as Machi. Please\nconfirm your current location.")
/*<157>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 337, 'param3': 34}
/*<337>*/ 	wait_frames(15)
/*<223>*/ 	{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 0, 'next': 282, 'param3': 13}
/*<282>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 155, 'param3': 17}
/*<155>*/ 	printf(/* textboxtype: 0, unk: 1, line: 136 */ "Furthermore, my analysis suggests that\nthis Kikwi most likely produces a\nfalse-positive dowsing reaction due to\nprevious direct contact with Zelda.\nUsing this hypothesis, I theorize there\nis an 85% chance that the Kikwi elder\nwill also generate a dowsing reaction\nfor the same reason.\nI propose you continue dowsing to\nsearch for Zelda.")
/*<156>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 406, 'param3': 36}
/*<406>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 226, 'param3': 17}
/*<226>*/ 	wait_frames(21)
/*<229>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 263, 'param3': 13}
/*<263>*/ 	wait_frames(30)
/*<341>*/ 	set_camera(19, 0)
/*<264>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 228, 'param3': 17}
/*<228>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 227, 'param3': 13}
/*<227>*/ 	printf(/* textboxtype: 2, unk: 0, line: 20 */ "<0x10009:0x0000000d>You really spooked me, kwee... \nYou keep some very strange company,\nfriend.")
/*<495>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 494, 'param3': 13}
/*<494>*/ 	printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00000007>Kee-paleep... It sounds like you're\nset on finding this friend and the elder.\n\n\nIf you're heading that way anyway, \nkwee, would you mind <color red<telling our elder\nthat I'm safe>coloroff>?\n\n<0x10009:0x00000005>Cheer up, koo-weep! I bet your\nfriend is safe with our elder.")
/*<583>*/ 	scene_flags[1 'Faron Woods'][45 /* 0x4 20 */] = true;
/*<584>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_09() {
/*<140>*/ 	start()
/*<141>*/ 	printf(/* textboxtype: 1, unk: 1, line: 102 */ "<0x10009:0x00000002>With that slingshot, kwee, you should\nbe able to find a path into the Deep\nWoods where that temple is.")
/*<354>*/ 	set_camera(21, 0)
/*<355>*/ 	{'type': 'type3', 'subType': 2, 'param1': 33, 'param2': 356, 'next': 356, 'param3': 15}
/*<356>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 357, 'param3': 32}
/*<357>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 358, 'param3': 17}
/*<358>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 359, 'param3': 17}
/*<359>*/ 	set_camera(22, 0)
/*<362>*/ 	switch (scene_flags[5 /* 0x1 20 */]) {
          	  case 0:
/*<364>*/ 		printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x00000008>To get started, why don't you shoot that\nvine over—<pause 15> Huh?\n\n\nCouldn't wait to shoot it, could you?<pause 15>\nWell, kwee...I suppose that's a good\nthing. It will make my explanation\nthat much easier to understand.")
          		flw_365:
/*<365>*/ 		printf(/* textboxtype: 1, unk: 1, line: 105 */ "<0x10009:0x00000002>Hold <icon 41> to ready your slingshot, kwee,\nthen release <icon 41> to let a shot fly.<0x10011:0x0fcd>\n\n\nIf you run out of ammunition, just \n<color green<grab some seeds>coloroff> from the fruit that\ngrows on the trees over there.")
/*<360>*/ 		set_camera(23, 0)
/*<368>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 367, 'param3': 17}
/*<367>*/ 		switch (scene_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*<361>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 366, 'param3': 17}
/*<366>*/ 			printf(/* textboxtype: 0, unk: 1, line: 106 */ "<0x10009:0x00000006>Now go find that girl! I'll be rooting\nfor you. Kwee heh heh.")
/*<372>*/ 			set_camera(25, 0)
/*<373>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<369>*/ 			printf(/* textboxtype: 0, unk: 1, line: 106 */ "<0x10009:0x00000006>Now go find that girl! I'll be rooting\nfor you. Kwee heh heh.")
/*<370>*/ 			set_camera(24, 0)
/*<371>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<363>*/ 		printf(/* textboxtype: 0, unk: 1, line: 103 */ "<0x10009:0x00000008>To start, why not try shooting that\ncurled-up vine over there?")
          		goto flw_365
          	}
          }

          void entrypoint_200_43() {
/*<320>*/ 	start()
/*<321>*/ 	printf(/* textboxtype: 1, unk: 1, line: 111 */ "<0x10005:0x004b0000>Looking at the probabilities, it is\nextremely likely that Zelda is\nsomewhere in the area.\n\n<0x10005:0x004b0000>I recommend you continue to use your\ndowsing ability to search for her.")
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
/*<490>*/ 			printf(/* textboxtype: 0, unk: 2, line: 181 */ "<0x10009:0x00000002><0x10008:0x02cd>Hey, do not run off!\n\n\n\nI need your help figuring out the secret\nof these Goddess Cubes.")
          			flw_446:
/*<446>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 444, 'param3': 49}
/*<444>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 445, 'param3': 15}
/*<445>*/ 			set_camera(36, 0)
/*<484>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<492>*/ 			printf(/* textboxtype: 1, unk: 0, line: 182 */ "<0x10009:0x00000002><0x10008:0x02cd>Hold up, bud!\n\n\n\nI need to ask you a favor.")
          			goto flw_446
          		}
          	  case 1:
/*<443>*/ 		scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<454>*/ 		scene_flags[1 'Faron Woods'][36 /* 0x5 10 */] = true;
/*<442>*/ 		printf(/* textboxtype: 2, unk: 1, line: 183 */ "<0x10009:0x00000003><0x10008:0x02cd>Hold it, bud!\n\n\n\n<0x10009:0x00170600>Do not walk on by like you do not see\nme when I know you do.<pause 15> Are you mad\nat me or something?\n[1-]Sorry![2-]I don't like you.")
/*<440>*/ 		switch (choice(2)) {
          		  case 0:
/*<439>*/ 			printf(/* textboxtype: 0, unk: 2, line: 184 */ "<0x10009:0x00161e07>Oh, you are busy searching for your\nfriend. I get it. Sorry to get in your\nway, bud. Really, I am.\n\nBut this will not take long. Come help\nme out, will you?")
          			goto flw_446
          		  case 1:
/*<441>*/ 			printf(/* textboxtype: 1, unk: 0, line: 185 */ "<0x10009:0x00161e56>Oh. Ouch. Is that so? I guess it is just\nhow it is for us explorer types. We are\nfated to be misunderstood.\n\nJust the same, could you take a few\nminutes to help me out?")
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
/*<197>*/ 	printf(/* textboxtype: 1, unk: 0, line: 137 */ "Learning that Zelda is no longer with\nthe Kikwi elder is an unfortunate\nsetback.<pause 15> But he may still have useful\ninformation.\nTaking this into account, I calculate\nan 85% probability that your quest\nwill be aided if you find the lost Kikwis\nfor the elder.\nTo expedite your search for these\nforest-dwelling creatures, I have\nadded <sound 4><color red<Kikwis>coloroff> as a dowsing option.")
/*<618>*/ 	open_dowsing_wheel(1)
/*<619>*/ 	printf(/* textboxtype: 1, unk: 1, line: 138 */ "Do you need me to explain how to\nswitch dowsing targets? \n[1-]Yes![2]No, thanks.")
/*<601>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_496:
/*<496>*/ 		printf(/* textboxtype: 0, unk: 1, line: 139 */ "Press and hold (^) to display the targets\nyou are currently able to dowse for.<0x10011:0x08cd>\n\n\nSelect your target, and release (^) to\nconfirm your selection.<0x10011:0x08cd>\n\n\nIf you do not want to dowse for\nanything, <color green<look around >coloroff>and release (^).\n[1-]Again, please?[2]Got it.")
/*<497>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_496
          		  case 1:
          			flw_617:
/*<617>*/ 			printf(/* textboxtype: 1, unk: 0, line: 140 */ "Additionally, I will mark any Kikwis\nyou discover on your map and disable\ndowsing readings for them. That way,\nyou will not revisit the same Kikwis.\nThis concludes my explanation. When\nready, please begin your search for\nthe missing Kikwis.")
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
/*<424>*/ 	printf(/* textboxtype: 1, unk: 0, line: 176 */ "<0x10009:0x00151908>WHOOOA! Did you see that?! The cube\njust shot up into the sky!\n\n\n<0x10009:0x00131b00>I think it reacted to that whirly-beam\nthing that shot out of your sword.\n\n\n<0x10009:0x00001b05>And where do you think the cube shot\noff to, anyhow? This mystery just got a\nwhole lot more, uh, mysterious!\n\n<0x10009:0x00161e00>The texts say there are cubes like that\none all over this land.\n\n\n<0x10009:0x00001700>Tell you what. You blast as many of\nthose cubes as you can find. If you find\nout more about them along the way,\nyou come see me.")
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
/*<269>*/ 						wait_frames(27)
/*<237>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 234, 'param3': 16}
/*<234>*/ 						printf(/* textboxtype: 1, unk: 1, line: 147 */ "I am not detecting any additional\ndowsing responses in the area.\n\n\nI suggest you go speak with the Kikwi\nelder.")
/*<236>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 271, 'param3': 36}
          						flw_271:
/*<271>*/ 						wait_frames(21)
/*<344>*/ 						set_camera(17, 0)
/*<343>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 347, 'param3': 17}
/*<347>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 346, 'param3': 17}
/*<346>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 345, 'param3': 13}
/*<345>*/ 						printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x00000014>What WAS that just now, kwee? \nDon't scare me like that!")
/*<378>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<678>*/ 						set_camera(16, 0)
/*<669>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 673, 'param3': 51}
/*<673>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 671, 'param3': 17}
/*<671>*/ 						{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 10, 'next': 672, 'param3': 13}
/*<672>*/ 						wait_frames(27)
/*<670>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 676, 'param3': 16}
/*<676>*/ 						printf(/* textboxtype: 0, unk: 1, line: 142 */ "I have marked <sound 4> the location of Oolo\nthe Kikwi on your map. Unfortunately,\nZelda is not with him.")
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
/*<581>*/ 	wait_frames(60)
/*<328>*/ 	set_camera(15, 0)
/*<326>*/ 	wait_frames(75)
/*<331>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1002, 'next': 332, 'param3': 24}
/*<332>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 356, 'next': 325, 'param3': 15}
/*<325>*/ 	{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 327, 'param3': 13}
/*<327>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 100, 'next': 329, 'param3': 14}
/*<329>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 330, 'param3': 17}
/*<330>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 291, 'param3': 13}
/*<291>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00000007>Hey! It's me, kwee! Did you find the\ngirl?\n[1-]Who are you?[2-]Not yet...")
/*<292>*/ 	switch (choice(2)) {
          	  case 0:
/*<295>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 293, 'param3': 13}
/*<293>*/ 		printf(/* textboxtype: 2, unk: 0, line: 26 */ "<0x10009:0x00000013>What do you mean, who am I? Don't\ntell me you forgot your old buddy\n<color blue<Machi>coloroff>! Now I'm sad... Koo-kwee...")
          		flw_297:
/*<297>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 298, 'param3': 13}
/*<298>*/ 		printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00000007>I'm so glad I've finally been reunited\nwith all my Kikwi friends. It's all\nthanks to you, koo-weep!")
/*<290>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 296, 'param3': 13}
/*<296>*/ 		printf(/* textboxtype: 2, unk: 0, line: 29 */ "<0x10009:0x00000005>With any luck, hopefully you'll find\nthat girl you've been searching for real\nsoon, koro-koo! Take care, OK?")
/*<299>*/ 		{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 0, 'next': 300, 'param3': 14}
/*<300>*/ 		story_flags[69 /* us: 805A9ADE 0x01, jp: 805ACD5E 0x01 */] = true;
/*<322>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<289>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 294, 'param3': 13}
/*<294>*/ 		printf(/* textboxtype: 1, unk: 2, line: 27 */ "<0x10009:0x00000013>Oh. That's too bad. But it sounds like\nyou at least know where you need to\nsearch next to find her, kwee.\nThat's...something, right?")
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
/*<273>*/ 						wait_frames(28)
/*<246>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 243, 'param3': 16}
/*<243>*/ 						printf(/* textboxtype: 1, unk: 1, line: 147 */ "I am not detecting any additional\ndowsing responses in the area.\n\n\nI suggest you go speak with the Kikwi\nelder.")
/*<245>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 275, 'param3': 36}
          						flw_275:
/*<275>*/ 						wait_frames(21)
/*<375>*/ 						set_camera(26, 0)
/*<374>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 278, 'param3': 17}
/*<278>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 277, 'param3': 17}
/*<277>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 276, 'param3': 13}
/*<276>*/ 						printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x0000000d>I thought you were another monster.\nDon't scare me like that, koo-kwee!")
/*<582>*/ 						scene_flags[1 'Faron Woods'][53 /* 0x7 20 */] = true;
/*<585>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<679>*/ 						set_camera(27, 0)
/*<660>*/ 						{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 665, 'param3': 35}
/*<665>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 663, 'param3': 17}
/*<663>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 10, 'next': 664, 'param3': 13}
/*<664>*/ 						wait_frames(28)
/*<662>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 667, 'param3': 16}
/*<667>*/ 						printf(/* textboxtype: 1, unk: 2, line: 144 */ "I have marked<sound 4> the location of Lopsa\nthe Kikwi on your map. Unfortunately,\nZelda is not with him.")
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
/*<376>*/ 						printf(/* textboxtype: 1, unk: 1, line: 147 */ "I am not detecting any additional\ndowsing responses in the area.\n\n\nI suggest you go speak with the Kikwi\nelder.")
          						flw_252:
/*<252>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 231, 'param3': 36}
/*<231>*/ 						wait_frames(21)
/*<350>*/ 						set_camera(17, 0)
/*<349>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 352, 'param3': 17}
/*<352>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 351, 'param3': 17}
/*<351>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 172, 'param3': 13}
/*<172>*/ 						switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          						  case 0:
/*<173>*/ 							printf(/* textboxtype: 2, unk: 0, line: 59 */ "<0x10009:0x00000005>You met the elder? And he's OK?\nPhew, glad to hear it, kwee!\n\n\n<0x10009:0x00000014>If you see him again, would you\nplease tell him I'm here?")
          							flw_379:
/*<379>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*<171>*/ 							printf(/* textboxtype: 1, unk: 2, line: 60 */ "<0x10009:0x00000004>No one hides like the elder. He's a\ntrue master of camouflage. I don't\nknow if you'll ever find him, koo-weep!")
          							goto flw_379
          						}
          					  case 1:
/*<680>*/ 						set_camera(38, 0)
/*<656>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 657, 'param3': 51}
/*<657>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 658, 'param3': 16}
/*<658>*/ 						printf(/* textboxtype: 2, unk: 0, line: 146 */ "I have marked<sound 4> the location of Erla\nthe Kikwi on your map. Unfortunately,\nZelda is not with him.")
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
/*<421>*/ 	printf(/* textboxtype: 2, unk: 1, line: 189 */ "He who descended from above:\nlook to the star that the bird\nrising heavenward gazes upon,\nand aim your shot there.")
          }

          void entrypoint_200_65() {
/*<599>*/ 	start()
/*<600>*/ 	printf(/* textboxtype: 1, unk: 0, line: 158 */ "I have confirmed the plant life of this\narea matches that of Faron Woods.\nWe have reached the area locally\nreferred to as the Deep Woods.\nNow we should continue toward the \ntemple in search of Zelda.")
/*<611>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<612>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_200_50() {
/*<258>*/ 	start()
/*<301>*/ 	printf(/* textboxtype: 1, unk: 1, line: 150 */ "<0x10012:0x00000004>Master <heroname>, I have\ndetected <color blue<Zelda>coloroff>'s aura emanating\nfrom within this structure.")
/*<302>*/ 	set_camera(13, 0)
/*<265>*/ 	set_camera(-1, 0)
/*<259>*/ 	printf(/* textboxtype: 0, unk: 1, line: 151 */ "However, I have also detected the\npresence of numerous monsters.\nAre you sure you want to proceed?\n[1-]Of course![2-]No.")
/*<260>*/ 	switch (choice(2)) {
          	  case 0:
/*<262>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "It would be very unwise to display\noverconfidence here. Within the walls\nof this place, no one will come to\nyour aid.")
          		flw_266:
/*<266>*/ 		set_camera(14, 0)
/*<267>*/ 		printf(/* textboxtype: 0, unk: 1, line: 154 */ "If you feel unprepared to face the\ndangers ahead, consider <color green<returning to\nthe sky>coloroff> to properly equip yourself.")
/*<607>*/ 		set_camera(-1, 0)
/*<603>*/ 		switch (adventure_pouch_has(0 0x0000)) {
          		  case 0:
/*<605>*/ 			printf(/* textboxtype: 1, unk: 1, line: 156 */ "It would be wise to carry a <color red<shield >coloroff>to\nprotect yourself, as well as a stock of\n<color red<potions >coloroff>to restore lost hearts.")
          			flw_606:
/*<606>*/ 			printf(/* textboxtype: 0, unk: 1, line: 157 */ "Now we should continue the search for\nZelda.")
          		  case 1:
/*<604>*/ 			printf(/* textboxtype: 1, unk: 0, line: 155 */ "<0x10012:0x00000001>Master, it appears you do not currently\nhave a <color red<shield>coloroff> equipped. To reduce the\nprobability of extreme bodily harm,\nI recommend carrying one at all times.")
          			goto flw_606
          		}
          	  case 1:
/*<261>*/ 		printf(/* textboxtype: 1, unk: 1, line: 153 */ "Do not feel embarrassed. Fear is a\nnatural self-preservation instinct\ncommon among living creatures.")
          		goto flw_266
          	}
          }

          void entrypoint_200_51() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 0, unk: 1, line: 112 */ "<0x10012:0x0000000b>Master, I picked up a highly interesting\nspike in <color red<dowsing readings>coloroff> from the\ncreature you just encountered.\n[1-]Really?[2-]Zelda?")
/*< 15>*/ 	switch (choice(2)) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0, line: 113 */ "<0x10012:0x00000005>Yes, Master. Based on the creature's\ncharacteristics, I must conclude that it\nis a peaceful, forest-dwelling animal\nknown as a <color blue<Kikwi>coloroff>.\nKikwis are intelligent beings capable of\nspeech<pause 15>. However, such a creature could\nobviously not be confused with Zelda.\n\nIt is unclear why such a creature would\nelicit a dowsing response attuned to\nZelda. You should follow the creature\nand investigate this phenomenon.")
          		flw_132:
/*<132>*/ 		set_camera(10, 0)
/*<134>*/ 		wait_frames(30)
          	  case 1:
/*< 17>*/ 		printf(/* textboxtype: 1, unk: 1, line: 114 */ "The probability of this life-form being\nZelda is 5%, so I must conclude that \nthis is, in fact, not Zelda but a peaceful\nforest creature known as a Kikwi.\nKikwis are highly intelligent beings, \ncapable of speech.<pause 15> Yes, upon further\nobservation...clearly not Zelda.\n\nIt is unclear why such a creature would\nelicit a dowsing response attuned to\nZelda. You should follow the creature\nand investigate this phenomenon.")
          		goto flw_132
          	}
          }

          void entrypoint_200_69() {
/*<621>*/ 	start()
/*<622>*/ 	printf(/* textboxtype: 1, unk: 1, line: 159 */ "<0x10012:0x00000004>Master <heroname>, should\nyou have questions about anything,\nI encourage you to call me with (v).<0x10011:0x09cd>\n\nOnce I'm summoned, select <color red<Advice>coloroff> and\nthen <color red<Hint >coloroff>and I will promptly offer you\ninformation pertinent to your current\ncircumstance.")
/*<628>*/ 	scene_flags[1 'Faron Woods'][69 /* 0x9 20 */] = true;
          }

