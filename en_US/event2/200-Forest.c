          void entrypoint_200_00() {
          	start()
/*< 54>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 11, 'param3': 31}
/*< 11>*/ 	switch (random(2)) {
          	  case 0:
/*< 60>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 1, 'param3': 13}
/*<  1>*/ 		printf(/* textboxtype: 1, unk: 2, line: 3 */ "<0x10009:0x0000000e><0x10008:0xfecd>Come on... Just go away...")
          	  case 1:
/*< 59>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 12, 'param3': 13}
/*< 12>*/ 		printf(/* textboxtype: 1, unk: 2, line: 4 */ "<0x10009:0x0000000e><0x10008:0xfecd>Just play dead... Just play dead, koo-kwee...\nPlay dead... Must think dead...")
          	}
          }

          void entrypoint_200_52() {
/*< 48>*/ 	start()
/*< 78>*/ 	switch (scene_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 79>*/ 		printf(/* textboxtype: 2, unk: 1, line: 115 */ "<0x10012:0x00000001>Master, I recommend you investigate\nthe well-being of the creature curled\nup on the forest floor.")
          	  case 1:
/*< 49>*/ 		printf(/* textboxtype: 2, unk: 1, line: 116 */ "<0x10012:0x00000001>Master, if you do not inquire into the\nhealth of the creature curled up here,\nit has less than a 5% chance of survival.")
          	}
          }

          void entrypoint_200_53() {
/*<  2>*/ 	start()
/*<439>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 443, 'param3': 46}
/*<443>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 444, 'param3': 51}
/*<444>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 3, 'param3': 16}
/*<  3>*/ 	printf(/* textboxtype: 2, unk: 1, line: 117 */ "")
/*<  4>*/ 	switch (choice(2)) {
          	  case 0:
/*<  5>*/ 		printf(/* textboxtype: 2, unk: 1, line: 118 */ "")
          		flw_222:
/*<222>*/ 		printf(/* textboxtype: 2, unk: 1, line: 120 */ "")
/*<  7>*/ 		switch (choice(2)) {
          		  case 0:
/*<436>*/ 			set_camera(33, 0)
/*<  8>*/ 			printf(/* textboxtype: 2, unk: 1, line: 121 */ "")
/*<438>*/ 			set_camera(32, 0)
/*<437>*/ 			printf(/* textboxtype: 2, unk: 1, line: 122 */ "")
          			flw_441:
/*<441>*/ 			set_camera(34, 0)
/*<442>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 440, 'param3': 36}
/*<440>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 10, 'param3': 42}
/*< 10>*/ 			story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<643>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          		  case 1:
/*<  9>*/ 			printf(/* textboxtype: 2, unk: 1, line: 123 */ "")
          			goto flw_441
          		}
          	  case 1:
/*<  6>*/ 		printf(/* textboxtype: 2, unk: 1, line: 119 */ "")
          		goto flw_222
          	}
          }

          void entrypoint_200_01() {
/*<105>*/ 	start()
/*<300>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 72>*/ 		{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 81, 'param3': 13}
/*< 81>*/ 		wait_frames(30)
/*< 77>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 202, 'param3': 17}
/*<202>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 63, 'param3': 13}
/*< 63>*/ 		set_camera(1, 0)
/*< 61>*/ 		printf(/* textboxtype: 1, unk: 2, line: 6 */ "<0x10008:0x01cd>Kwee-koo! Now there's a green\none! I didn't even know they\ncame in green!")
/*< 64>*/ 		{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 0, 'next': 62, 'param3': 13}
/*< 62>*/ 		printf(/* textboxtype: 1, unk: 2, line: 7 */ "<0x10009:0x0000000f>Don't hurt me, koo-weep!")
/*<121>*/ 		{'type': 'type3', 'subType': 2, 'param1': 18, 'param2': 0, 'next': 124, 'param3': 14}
/*<124>*/ 		{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 256, 'next': 203, 'param3': 15}
/*<203>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 0, 'next': 135, 'param3': 13}
/*<135>*/ 		set_camera(2, 0)
/*< 18>*/ 		wait_frames(27)
/*<122>*/ 		{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 0, 'next': 123, 'param3': 14}
/*<123>*/ 		story_flags[50 /* us: 805A9ADD 0x20, jp: 805ACD5D 0x20 */] = true;
/*<137>*/ 		set_camera(9, 0)
          	  case 1:
/*<299>*/ 		printf(/* textboxtype: 1, unk: 2, line: 5 */ "<0x10009:0x0000000b>Huh...? It's gone quiet.")
/*<301>*/ 		temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_200_70() {
/*<658>*/ 	start()
/*<659>*/ 	printf(/* textboxtype: 2, unk: 1, line: 160 */ "<0x10012:0x00000004>Master, I am also capable of providing\nan analysis of your current battle-\nperformance rating versus each enemy\ntype you've encountered.")
/*<664>*/ 	scene_flags[1 'Faron Woods'][70 /* 0x9 40 */] = true;
/*<665>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 103, 'next': 670, 'param3': 32}
/*<670>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 103, 'next': 671, 'param3': 17}
/*<671>*/ 	wait_frames(5)
/*<666>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 103, 'next': 667, 'param3': 17}
/*<667>*/ 	wait_frames(10)
/*<669>*/ 	set_camera(39, 0)
/*<668>*/ 	printf(/* textboxtype: 2, unk: 1, line: 161 */ "While <color green<targeting>coloroff> an enemy with (Z),\npress (v) to summon me. I will provide\ninformation on your enemy as well as\nyour battle-performance rating.<0x10011:0x09cd>")
/*<672>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 673, 'param3': 36}
/*<673>*/ 	wait_frames(15)
/*<674>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_02() {
/*< 19>*/ 	start()
/*< 23>*/ 	switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          	  case 0:
/*< 40>*/ 		switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          		  case 0:
/*< 41>*/ 			printf(/* textboxtype: 1, unk: 2, line: 23 */ "<0x10009:0x00000007>Thanks a ton for finding all my other\nKikwi buddies.\n\n\n<0x10009:0x00000013>Too bad that girl you've been looking\nfor wasn't with any of my friends.\nI just hope you find her, kwee!")
          		  case 1:
/*<101>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 153, 'param3': 13}
/*<153>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<154>*/ 				printf(/* textboxtype: 1, unk: 2, line: 22 */ "<0x10009:0x00000007>It's good to hear the elder is OK!\nI can't believe he was hiding nearby\nall this time, kweee!\n\n<0x10009:0x00000013>Sorry to hear that girl you're looking\nfor wasn't with him, though.")
          			  case 1:
/*< 24>*/ 				printf(/* textboxtype: 1, unk: 2, line: 21 */ "<0x10009:0x00000004>Tell the elder that I'm safe. I'm sure\nthe girl you're looking for is safe too.\nShe's probably with the elder, kwi-koo!")
          			}
          		}
          	  case 1:
/*< 55>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 346, 'param3': 31}
/*<346>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1002, 'next': 65, 'param3': 24}
/*< 65>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 22, 'param3': 13}
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 2, line: 9 */ "It spotted me again!")
/*<362>*/ 		set_camera(18, 0)
/*<429>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 67, 'param3': 49}
/*< 67>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 18, 'next': 75, 'param3': 13}
/*< 75>*/ 		make_actor_do_something(0, 0)
/*<430>*/ 		printf(/* textboxtype: 1, unk: 2, line: 10 */ "<0x10008:0x02cd>Kweeee!")
/*< 68>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4, 'param2': 0, 'next': 66, 'param3': 13}
/*< 66>*/ 		printf(/* textboxtype: 1, unk: 2, line: 11 */ "<0x10008:0xfecd><0x10006:0xfdcd>... ...")
/*< 74>*/ 		{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 11, 'next': 73, 'param3': 13}
/*< 73>*/ 		printf(/* textboxtype: 1, unk: 2, line: 12 */ "Huh? You don't want to...eat me?\nKwee... And come to think of it, \nwhy did you fight off all those red\nmonsters?")
/*<379>*/ 		set_camera(19, 0)
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 83, 'param3': 13}
/*< 83>*/ 		wait_frames(30)
/*<431>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 76, 'param3': 17}
/*< 76>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 27, 'param3': 13}
/*< 27>*/ 		printf(/* textboxtype: 1, unk: 2, line: 13 */ "<0x10009:0x00000001>Kee-paleep! I'm <color blue<Machi>coloroff>. I'm a Kikwi.\nYou seem OK, even though you're \nscary. Thanks for helping me!")
/*<139>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 138, 'param3': 13}
/*<138>*/ 		printf(/* textboxtype: 1, unk: 2, line: 14 */ "<0x10009:0x00000005>That's weird, kee-koo. A little while\nago I ran into another funny animal\nlike you, but that one was a girl.\n[1-]Who?[2-]Zelda?")
/*< 85>*/ 		switch (choice(2)) {
          		  case 0:
/*< 88>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 86, 'param3': 13}
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 2, line: 15 */ "<0x10009:0x00000004>I don't know who she was, but she\nseemed to be in big trouble when I saw\nher. She a friend of yours, kwee?")
          			flw_90:
/*< 90>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 91, 'param3': 13}
/*< 91>*/ 			printf(/* textboxtype: 1, unk: 2, line: 17 */ "<0x10009:0x0000000a>A pack of those mean red guys were\nafter her, kwee, but she escaped with\nthe Kikwi <color blue<elder>coloroff>.")
/*<360>*/ 			set_camera(20, 0)
/*<361>*/ 			entrypoint_200_60();
          		  case 1:
/*< 89>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 87, 'param3': 13}
/*< 87>*/ 			printf(/* textboxtype: 1, unk: 2, line: 16 */ "<0x10009:0x00000004>What's a Zelda? I don't know who this\ngirl was, koo-kwee, but she was in a\nbunch of trouble when I saw her.")
          			goto flw_90
          		}
          	}
          }

          void entrypoint_200_54() {
/*< 50>*/ 	start()
/*< 51>*/ 	printf(/* textboxtype: 2, unk: 1, line: 124 */ "I have detected an exceptionally strong\ndowsing response in this area. You\nshould continue searching the vicinity.")
          }

          void entrypoint_200_71() {
/*<678>*/ 	start()
/*<679>*/ 	{'type': 'type3', 'subType': 1, 'param1': 315, 'param2': 0, 'next': 680, 'param3': 51}
/*<680>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 681, 'param3': 16}
/*<681>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 682, 'param3': 17}
/*<682>*/ 	set_camera(40, 0)
/*<683>*/ 	entrypoint_006_08();
          }

          void entrypoint_200_03() {
/*< 28>*/ 	start()
/*< 29>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 31>*/ 		printf(/* textboxtype: 1, unk: 2, line: 43 */ "<0x10009:0x00000007>Thanks for finding all of my friends,\nkoo-weep!\n\n\n<0x10009:0x00000013>But...it looks like it's still dangerous\nhere in the forest.")
          	  case 1:
/*< 93>*/ 		switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          		  case 0:
/*<102>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 163, 'param3': 13}
/*<163>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<164>*/ 				printf(/* textboxtype: 1, unk: 2, line: 42 */ "<0x10009:0x00000007>Good to hear the elder is safe, kwee.\nI'm going to stay here for a while,\nthough, and wait until all those\nmonsters are out of here.")
          			  case 1:
/*<162>*/ 				printf(/* textboxtype: 1, unk: 2, line: 41 */ "<0x10009:0x00000004>I'm going to stay here for a while.\nIf you see the elder, kwee, would you\ntell him where I am?")
          			}
          		  case 1:
/*<364>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 3, 'next': 92, 'param3': 46}
/*< 92>*/ 			{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 12, 'next': 30, 'param3': 13}
/*< 30>*/ 			printf(/* textboxtype: 1, unk: 2, line: 34 */ "Don't eat me! I taste TERRIBLE!\nLet me go, kwee!")
/*<160>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<597>*/ 				{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 161, 'param3': 13}
/*<161>*/ 				printf(/* textboxtype: 1, unk: 2, line: 37 */ "<0x10009:0x00000005>Huh? The elder was worried about\nme? I'm glad to hear he's safe, kwee!")
          				flw_209:
/*<209>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 208, 'param3': 13}
/*<208>*/ 				printf(/* textboxtype: 1, unk: 2, line: 39 */ "<0x10009:0x00000001>I'm <color blue<Oolo>coloroff>. If you meet the elder,\ntell him I'm here, kee-paleep!\n\n\n<0x10009:0x0000000f>I don't know if it's safe yet... I'm going\nto stay here awhile longer and wait\nfor those monsters to go away.")
/*< 32>*/ 				story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */] = true;
/*<365>*/ 				set_camera(16, 0)
/*<366>*/ 				entrypoint_200_62();
          			  case 1:
/*<598>*/ 				{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 100, 'param3': 13}
/*<100>*/ 				printf(/* textboxtype: 1, unk: 2, line: 38 */ "<0x10009:0x00000005>Huh? But you don't seem like a\nmonster, koo-weep...\n\n\nA girl with blonde hair, you say?<pause 15>\n<0x10009:0x00000013>Can't say I saw anyone like that.\nI was lying low this whole time.")
          				goto flw_209
          			}
          		}
          	}
          }

          void entrypoint_200_55() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf(/* textboxtype: 2, unk: 1, line: 125 */ "I detect no monsters in the immediate\narea and therefore conclude it is\nsafe for the Kikwi to leave its perch.\n\nIt seems that this Kikwi is unable to\ndescend the tree. I suggest you\nfind a way to expedite his dismount.\n\n<0x10012:0x00000001>If you find yourself lacking ideas,\nyou can always press (2) to review your\navailable actions.<0x10011:0x05cd>")
          }

          void entrypoint_200_04() {
/*< 33>*/ 	start()
/*< 34>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 35>*/ 		printf(/* textboxtype: 1, unk: 2, line: 55 */ "<0x10009:0x00000007>Kee-paleep! Thanks for finding all the\nother Kikwis!\n\n\n<0x10009:0x0000000b>It looks like this clearing is monster\nfree right now, unlike most of the\nforest, so I'm sticking here for now.")
          	  case 1:
/*< 99>*/ 		switch (scene_flags[13 /* 0x0 20 */]) {
          		  case 0:
/*<115>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<169>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 171, 'param3': 13}
/*<171>*/ 				switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          				  case 0:
/*<172>*/ 					printf(/* textboxtype: 1, unk: 2, line: 54 */ "<0x10009:0x00000007>It's a relief to hear the elder is safe.\n\n\n\n<0x10009:0x00000013>My legs are still shaking, kwee, so I'm \ngoing to stay here for a while.")
          				  case 1:
/*<170>*/ 					printf(/* textboxtype: 1, unk: 2, line: 53 */ "<0x10009:0x00000004>I'm going to rest here awhile. If you\nsee the elder, let him know I'm here,\nkoo-weep!")
          				}
          			  case 1:
/*<113>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 207, 'param3': 31}
/*<207>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 112, 'param3': 13}
/*<112>*/ 				printf(/* textboxtype: 1, unk: 2, line: 48 */ "<0x10009:0x00000011>Ouch! That, uh...was effective.<pause 30>\nAnyway, thanks to you I'm saved,\nkee-paleep!")
/*<114>*/ 				{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 167, 'param3': 13}
/*<167>*/ 				switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          				  case 0:
/*<168>*/ 					printf(/* textboxtype: 1, unk: 2, line: 49 */ "<0x10009:0x00000005>Really? The elder was worried about\nme? Well, I'm glad to hear he's safe,\nkwee-koo.")
          					flw_212:
/*<212>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 211, 'param3': 13}
/*<211>*/ 					printf(/* textboxtype: 1, unk: 2, line: 51 */ "<0x10009:0x00000001>My name's <color blue<Lopsa>coloroff>. If you see the elder,\ncan you please tell him where I am?\n<0x10009:0x00000013>Oh kwee... My legs are still shaking.")
/*<165>*/ 					story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */] = true;
/*<116>*/ 					set_camera(27, 0)
/*<400>*/ 					entrypoint_200_63();
          				  case 1:
/*<166>*/ 					printf(/* textboxtype: 1, unk: 2, line: 50 */ "<0x10009:0x00000005>Huh? A girl? Sorry, kwee, I don't know\nanything about that.\n\n\n<0x10009:0x00000004>The elder will probably know\nsomething about her, though.")
          					goto flw_212
          				}
          			}
          		  case 1:
/*<130>*/ 			{'type': 'type3', 'subType': 4, 'param1': 22, 'param2': 0, 'next': 204, 'param3': 13}
/*<204>*/ 			set_camera(4, 0)
/*<129>*/ 			printf(/* textboxtype: 1, unk: 2, line: 46 */ "<0x10009:0x00000002><0x10008:0xfecd>Kikwi!")
/*<111>*/ 			set_camera(5, 0)
/*<131>*/ 			wait_frames(60)
/*<118>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 0, 'next': 117, 'param3': 13}
/*<117>*/ 			printf(/* textboxtype: 1, unk: 1, line: 47 */ "<0x10009:0x0000000b>You fought off all those red guys.\nSo does that mean that you're...<pause 15>\na good guy?\n\n<0x10009:0x00000013>See, I've got this problem. My legs\nhave turned to jelly, and I can't get\ndown. Think you could help me, kwee?")
/*<119>*/ 			temp_flags[1 /* 0x1 02 */] = true;
/*<133>*/ 			set_camera(6, 0)
          		}
          	}
          }

          void entrypoint_200_56() {
/*< 47>*/ 	start()
/*<333>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*<332>*/ 		printf(/* textboxtype: 2, unk: 1, line: 128 */ "Master, I highly suggest you save the\nprogress of your quest before you set\nout for the temple deep within the\nwoods in pursuit of Zelda.")
          	  case 1:
/*<327>*/ 		switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          		  case 0:
/*<328>*/ 			switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          			  case 0:
/*<330>*/ 				switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          				  case 0:
/*<331>*/ 					switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          					  case 0:
/*<325>*/ 						printf(/* textboxtype: 2, unk: 1, line: 127 */ "An analysis of dowsing readings\nindicates that there are no additional\nKikwis in this area.\n\nI suggest you speak with the Kikwi\nelder.")
          					  case 1:
          						flw_326:
/*<326>*/ 						printf(/* textboxtype: 2, unk: 1, line: 129 */ "This area commands an excellent view\nof your surroundings. It would be wise\nto utilize this vantage point to dowse\nfor nearby Kikwis.")
          					}
          				  case 1:
          					goto flw_326
          				}
          			  case 1:
          				goto flw_326
          			}
          		  case 1:
/*<596>*/ 			printf(/* textboxtype: 2, unk: 1, line: 126 */ "I do not detect a strong dowsing\nresponse corresponding with Zelda in\nthis area. It would be best to move\nyour search to another location.")
          		}
          	}
          }

          void entrypoint_200_90() {
/*<221>*/ 	start()
/*<334>*/ 	switch (story_flags[227 /* us: 805A9AF2 0x20, jp: 805ACD72 0x20 */]) {
          	  case 0:
/*<329>*/ 		printf(/* textboxtype: 1, unk: 1, line: 177 */ "<0x10009:0x00181705>Hmm? What is up, bud? You got a\nquestion? \n[1-]Cubes?[2-]Temple?[3]Not really.")
/*<476>*/ 		switch (choice(3)) {
          		  case 0:
/*<475>*/ 			printf(/* textboxtype: 1, unk: 0, line: 178 */ "<0x10009:0x00161e04>Yeah, hit those cubes with a blast of\nlight from your sword and WHOOSH...\nThey shoot up into the sky.\n\nThe ancient texts I have read say those\ncubes are all over this land.")
          			flw_631:
/*<631>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<633>*/ 			printf(/* textboxtype: 1, unk: 0, line: 179 */ "<0x10009:0x00080b04>The old texts refer to a place near here\ncalled Skyview Temple where, as the\nstory goes, a visitor from the sky will\none day be received.")
/*<477>*/ 			switch (scene_flags[29 /* 0x2 20 */]) {
          			  case 0:
          				goto flw_631
          			  case 1:
/*<478>*/ 				printf(/* textboxtype: 1, unk: 0, line: 180 */ "<0x10009:0x00001707>Come to think of it, I seem to\nremember seeing an old stone marker\nsomewhere in these parts.\n\n<0x10009:0x00160b00>I do not remember exactly what was\nwritten on the thing,<pause 15> but my gut tells\nme it is the key to getting inside!")
          				goto flw_631
          			}
          		  case 2:
/*<632>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<626>*/ 		switch (scene_flags[47 /* 0x4 80 */]) {
          		  case 0:
/*<480>*/ 			switch (scene_flags[37 /* 0x5 20 */]) {
          			  case 0:
/*<521>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 479, 'param3': 32}
          				flw_479:
/*<479>*/ 				printf(/* textboxtype: 1, unk: 0, line: 174 */ "<0x10009:0x00ffff00>This cube is made of some sort of\nmetal I have never seen. I have whaled\non it, but nothing happens.")
/*<494>*/ 				set_camera(-1, 0)
/*<505>*/ 				printf(/* textboxtype: 1, unk: 0, line: 175 */ "<0x10009:0x00160b07>You know, bud, I would say the key to\ncracking this egg is that one line.\nYou know, <0x10009:0x00001705>“<color red<the light from a\nheavenly blade>coloroff>\"?")
/*<506>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 507, 'param3': 17}
/*<507>*/ 				{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 508, 'param3': 17}
/*<508>*/ 				wait_frames(30)
/*<509>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<514>*/ 				scene_flags[1 'Faron Woods'][37 /* 0x5 20 */] = true;
/*<483>*/ 				switch (scene_flags[36 /* 0x5 10 */]) {
          				  case 0:
          					flw_499:
/*<499>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 500, 'param3': 32}
/*<500>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 501, 'param3': 17}
/*<501>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 502, 'param3': 17}
/*<502>*/ 					wait_frames(30)
/*<485>*/ 					set_camera(37, 0)
/*<486>*/ 					printf(/* textboxtype: 1, unk: 0, line: 167 */ "<0x10009:0x00ffff05>If I remember right...<pause 15> Yup, this is one\nof the things the goddess was said to\nhave left behind for the hero of legend.\n\nPretty amazing, right? I even thought\nup a name for these things.<pause 30> I have been\ncalling them Goddess Cubes!\nMakes sense, right?")
/*<487>*/ 					set_camera(-1, 0)
/*<488>*/ 					printf(/* textboxtype: 1, unk: 0, line: 168 */ "<0x10009:0x00001e04>Those ancient texts say some real\ninteresting stuff about these things.\nHow did it go again? Let me see, uh...\n\n“Summon forth the light from a\nheavenly blade<pause 30>, and may that sword's\nmaster receive aid.\"<pause 30> So there you\nhave it.")
/*<503>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 504, 'param3': 17}
/*<504>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 489, 'param3': 17}
/*<489>*/ 					printf(/* textboxtype: 1, unk: 0, line: 169 */ "<0x10009:0x0018170b>I see you got yourself a sword there.\nWhat do you say we try and crack the\nmystery of this cube together?\n[1-]Sure![2-]Nah.")
/*<491>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_490:
/*<490>*/ 						printf(/* textboxtype: 1, unk: 0, line: 170 */ "<0x10009:0x00171908>Hey! Thanks a billion, bud!")
          						flw_493:
/*<493>*/ 						set_camera(37, 0)
          						goto flw_479
          					  case 1:
/*<492>*/ 						printf(/* textboxtype: 1, unk: 0, line: 171 */ "<0x10009:0x0018170c>Aww, come on, I am begging you here!\nHelp me out?\n[1-]OK.[2-]Nope.")
/*<495>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_490
          						  case 1:
/*<496>*/ 							printf(/* textboxtype: 1, unk: 0, line: 172 */ "<0x10009:0x00080007>OK, I get the picture. I will make sure\nthis is worth your while.")
/*<498>*/ 							give_item(161 0xA1);
/*<497>*/ 							printf(/* textboxtype: 1, unk: 0, line: 173 */ "<0x10009:0x00171906>You would have to be crazy to refuse\nme now! Unless you are... You are not\ncrazy, are you?")
          							goto flw_493
          						}
          					}
          				  case 1:
/*<484>*/ 					printf(/* textboxtype: 1, unk: 0, line: 166 */ "<0x10009:0x00171908>I tell you, your timing could not have\nbeen better.\n\n\nLook here. I stumbled onto one of\nthese things just now, and it looks just\nlike something I have seen in those\nancient texts!")
          					goto flw_499
          				}
          			}
          		  case 1:
/*<628>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*<629>*/ 				printf(/* textboxtype: 1, unk: 0, line: 165 */ "<0x10009:0x00000001>Hey, bud, come over here and give a\nGoron a hand, will you?")
/*<630>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<627>*/ 				scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<624>*/ 				printf(/* textboxtype: 1, unk: 0, line: 164 */ "<0x10009:0x00000001>Now, there is a face I know! Hey, bud!\n\n\n\nI got something I need your help with.\nCome over here and take a look!")
/*<625>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		}
          	}
          }

          void entrypoint_200_57() {
/*< 20>*/ 	start()
/*< 21>*/ 	printf(/* textboxtype: 2, unk: 1, line: 130 */ "")
          }

          void entrypoint_200_05() {
/*< 36>*/ 	start()
/*< 37>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 39>*/ 		printf(/* textboxtype: 1, unk: 2, line: 64 */ "<0x10009:0x00000013>You've found everyone? Wow, you're\npretty serious about searching. Maybe\nyou should rest your eyes, koo-weep.")
          	  case 1:
/*< 95>*/ 		switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          		  case 0:
/*<103>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 96, 'param3': 13}
/*< 96>*/ 			printf(/* textboxtype: 1, unk: 2, line: 61 */ "<0x10009:0x00000005>How did you find me?! I was blending\nin perfectly with my environment,\nkwee...")
/*< 97>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 177, 'param3': 13}
/*<177>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<178>*/ 				printf(/* textboxtype: 1, unk: 2, line: 63 */ "<0x10009:0x00000007>You found him already?! I don't know\nhow you do it, but you sure do have a\nknack for spotting hidden things, kwee!")
          			  case 1:
/*<176>*/ 				printf(/* textboxtype: 1, unk: 2, line: 62 */ "<0x10009:0x00000014>I'm impressed you found me, kwee,\nbut you still haven't found the elder,\nright?")
          			}
          		  case 1:
/*<345>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 372, 'param3': 31}
/*<372>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 3, 'next': 80, 'param3': 46}
/*< 80>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1003, 'next': 104, 'param3': 24}
/*<104>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 38, 'param3': 13}
/*< 38>*/ 			printf(/* textboxtype: 1, unk: 2, line: 57 */ "<0x10009:0x00000013>I've been discovered! And here I\nthought I had a good hiding place,\nkwee...")
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 210, 'param3': 13}
/*<210>*/ 			printf(/* textboxtype: 1, unk: 2, line: 58 */ "<0x10009:0x00000001>I'm <color blue<Erla>coloroff>. You won't find another\nKikwi in these woods that's half as\ngood at hiding as I am. Except the\nelder, of course. Kwee!")
/*<637>*/ 			story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = true;
/*<676>*/ 			story_flags[1155 /* us: 805A9B5A 0x02, jp: 805ACDDA 0x02 */] = true;
/*<373>*/ 			set_camera(38, 0)
/*<374>*/ 			entrypoint_200_64();
          		}
          	}
          }

          void entrypoint_200_91() {
/*<303>*/ 	start()
/*<304>*/ 	printf(/* textboxtype: 7, unk: 0, line: 187 */ "")
          }

          void entrypoint_200_06() {
/*< 42>*/ 	start()
/*< 43>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 45>*/ 		switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          		  case 0:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 1, line: 100 */ "<0x10009:0x00000002>No doubt about it, kwee. This Zelda girl\nyou're looking for ran off toward the\ntemple in the Deep Woods.")
/*<120>*/ 			printf(/* textboxtype: 1, unk: 1, line: 101 */ "With a <color yellow<slingshot>coloroff>, a clever young man\nlike you should be able to find a way\nto the temple.\n\n<0x10009:0x00000006>Go now and find that girl! I'll be\nrooting for you. Kwee hee hee...")
          		  case 1:
/*<106>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<107>*/ 				switch (random(2)) {
          				  case 0:
/*<110>*/ 					printf(/* textboxtype: 1, unk: 2, line: 97 */ "<0x10009:0x00000001>Go on, kwee. Just climb up onto me and\ntake the reward you earned!")
          				  case 1:
/*<109>*/ 					printf(/* textboxtype: 1, unk: 2, line: 96 */ "<0x10009:0x00000001>Come now, kwee, no need to be shy!\nClimb up onto my back and claim your\nreward.")
          				}
          			  case 1:
          				flw_128:
/*<128>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 44, 'param3': 31}
/*< 44>*/ 				printf(/* textboxtype: 1, unk: 1, line: 92 */ "<0x10009:0x0000000a>Kwee! So all my fellow Kikwis are well.\nAnd they want me to stop worrying?\nAha, excellent! They know me too well.\n\nYou have a real talent for finding\nwhatever is missing, kweee. I don't\nknow who you are or where you come\nfrom, but you have my thanks.")
/*<604>*/ 				switch (temp_flags[4 /* 0x1 10 */]) {
          				  case 0:
/*<605>*/ 					printf(/* textboxtype: 1, unk: 1, line: 99 */ "<0x10009:0x00000008>What's that, kwee? You are also\nsearching for someone who is lost?\n\n\nWell, kwee...now that I think about it,\nI did bump into a young lady earlier. \nShe had blonde hair, that one.")
          					flw_595:
/*<595>*/ 					set_camera(-1, 0)
/*<420>*/ 					printf(/* textboxtype: 1, unk: 1, line: 98 */ "<0x10009:0x00000002>That young girl...Zelda--was that her\nname? Yes...it's all coming back to me.\nShe said she had to travel to the temple\ndeep within these woods, kweee...\nOho! I tried to warn her about how\ndangerous it was there, but the clever\nlittle thing vaulted off my belly and\nran off on her own just the same.")
/*<421>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 422, 'param3': 32}
/*<422>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 102, 'next': 423, 'param3': 17}
/*<423>*/ 					wait_frames(15)
/*<424>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 427, 'param3': 17}
/*<427>*/ 					wait_frames(30)
/*<425>*/ 					set_camera(31, 0)
/*<126>*/ 					set_camera(7, 0)
/*<140>*/ 					{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 100, 'next': 141, 'param3': 15}
/*<141>*/ 					make_actor_do_something(3, 0)
/*<125>*/ 					printf(/* textboxtype: 1, unk: 1, line: 94 */ "<0x10009:0x00000003>I think she headed down that way\ntoward the temple, kwee...<pause 15>but be sure\nto take great care if you follow her.\nThat area is crawling with monsters.")
/*<428>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 144, 'param3': 17}
/*<144>*/ 					set_camera(8, 0)
/*<145>*/ 					{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 356, 'next': 146, 'param3': 15}
/*<146>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 309, 'param3': 17}
/*<309>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 426, 'param3': 17}
/*<426>*/ 					wait_frames(15)
/*<127>*/ 					printf(/* textboxtype: 1, unk: 1, line: 95 */ "<0x10009:0x0000000e><0x10008:0x01cd>Oho! I almost forgot, kwee!\n\n\n\nAs a reward for finding all my fellow\nKikwis, I will give you a precious\nKikwi heirloom.\n\n<0x10009:0x00000008>Let me just fetch it for you right\nnow, kweee. Pardon me a moment...")
/*<108>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          				  case 1:
/*<606>*/ 					printf(/* textboxtype: 1, unk: 1, line: 93 */ "<0x10009:0x00000009>Kwee hee hee, I feel much less worried\nnow! I believe I just remembered\nwhere that young lady went!")
          					goto flw_595
          				}
          			}
          		}
          	  case 1:
/*<147>*/ 		switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          		  case 0:
/*<148>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<149>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<150>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<409>*/ 						wait_frames(20)
/*<408>*/ 						set_camera(29, 0)
/*<677>*/ 						story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          						flw_410:
/*<410>*/ 						story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */] = true;
/*<526>*/ 						story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
          						goto flw_128
          					  case 1:
/*<151>*/ 						printf(/* textboxtype: 1, unk: 1, line: 66 */ "<0x10009:0x00000006>Kweeeee-heee...<pause 15> I am <color blue<Bucha>coloroff>, the\nKikwi elder.\n\n\nI saw the way you spotted me through\nmy ingenious camouflage. <pause 15>Kweee,\nyou are clearly a master woodsman.\n[1-]Where's Zelda?[2-]Others like you?")
/*<592>*/ 						switch (choice(2)) {
          						  case 0:
/*<594>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<590>*/ 							printf(/* textboxtype: 1, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nAh, the girl creature with the blonde\nhair. She looked like one of your kind.\nYes, she was with me, kweeee.\n\n<0x10009:0x0000000c>But now is not the time for such talk...\nThe woods are full of monsters. I am\nworried about my missing tribe.\n\nKweeee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          							flw_593:
/*<593>*/ 							set_camera(29, 0)
/*<591>*/ 							printf(/* textboxtype: 1, unk: 1, line: 68 */ "<0x10009:0x0000000e>What? You say you've met some of\nmy people, kweee?")
/*<152>*/ 							story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */] = true;
/*<198>*/ 							scene_flags[1 'Faron Woods'][16 /* 0x3 01 */] = true;
          							goto flw_410
          						  case 1:
/*<675>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_593
          						}
          					}
          				  case 1:
/*<179>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<181>*/ 						printf(/* textboxtype: 1, unk: 1, line: 72 */ "<0x10009:0x00000003>So Machi, Oolo, and Lopsa are safe,\neh? Sadly, <color red<one more >coloroff><color red<Kikwi>coloroff> remains\nunaccounted for. Would you mind\nsearching for him to see if he's OK?\n<0x10009:0x00000002>He likes to hide in grassy areas, so\nsearch any tufts of grass you see...\n\n\nBy the way, I haven't forgotten about\nthe girl you search for. Give me just a\nbit more time, and I'm sure I can recall\nsomething about where she was headed.")
          					  case 1:
/*<214>*/ 						printf(/* textboxtype: 1, unk: 1, line: 66 */ "<0x10009:0x00000006>Kweeeee-heee...<pause 15> I am <color blue<Bucha>coloroff>, the\nKikwi elder.\n\n\nI saw the way you spotted me through\nmy ingenious camouflage. <pause 15>Kweee,\nyou are clearly a master woodsman.\n[1-]Where's Zelda?[2-]Others like you?")
/*<530>*/ 						switch (choice(2)) {
          						  case 0:
/*<532>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<527>*/ 							printf(/* textboxtype: 1, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nAh, the girl creature with the blonde\nhair. She looked like one of your kind.\nYes, she was with me, kweeee.\n\n<0x10009:0x0000000c>But now is not the time for such talk...\nThe woods are full of monsters. I am\nworried about my missing tribe.\n\nKweeee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          							flw_531:
/*<531>*/ 							set_camera(29, 0)
/*<528>*/ 							printf(/* textboxtype: 1, unk: 1, line: 68 */ "<0x10009:0x0000000e>What? You say you've met some of\nmy people, kweee?")
/*<529>*/ 							printf(/* textboxtype: 1, unk: 1, line: 71 */ "<0x10009:0x00000003>Hmm... So Machi, Oolo, and Lopsa are\nsafe, are they? Oh, but there are still\nmonsters lurking in the forest, so I\ndare not leave this spot, kwee.")
/*<533>*/ 							set_camera(-1, 0)
/*<534>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_411:
/*<411>*/ 								printf(/* textboxtype: 1, unk: 1, line: 73 */ "<0x10009:0x00000008>A <color red<single Kikwi>coloroff> remains unaccounted\nfor, kweee. Would you mind searching\nfor him to see if he's OK?\n\nHe likes to hide in grassy areas, so you\nhad better thoroughly search any\ngrassy tufts you spot.\n\n<0x10009:0x00000002>If you can find him for me, I should\nbe able to remember the whereabouts\nof that girl you're looking for, kwee.")
          								flw_180:
/*<180>*/ 								scene_flags[1 'Faron Woods'][16 /* 0x3 01 */] = true;
/*<418>*/ 								set_camera(30, 0)
/*<419>*/ 								entrypoint_200_61();
          							  case 1:
/*<535>*/ 								printf(/* textboxtype: 1, unk: 1, line: 69 */ "<0x10009:0x00000008>And you're looking for one of your\nlost people as well?\n\n\nHmmm... Yes. At one point during the\nmonster panic here, I did speak with a\nblonde girl of your kind, kweee.\n\n<0x10009:0x0000000c>But now is not the time for such talk.\nThe forest is full of monsters, and I am\nworried about my missing tribe.\n\nKweee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          								goto flw_411
          							}
          						  case 1:
          							goto flw_531
          						}
          					}
          				}
          			  case 1:
/*<182>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<183>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<186>*/ 						printf(/* textboxtype: 1, unk: 1, line: 75 */ "<0x10009:0x00000003>Kwee... So Machi, Oolo, and Erla are\nnow safe?\n\n\nSadly, <color red<one more >coloroff><color red<Kikwi>coloroff> remains\nunaccounted for. Would you mind\nsearching for him to see if he's OK?\n\n<0x10009:0x00000002>He likes to climb trees, so I'd suggest\nyou search the treetops for him, kwee.\n\n\nBy the way, I haven't forgotten about\nthe girl you search for. Give me just a\nbit more time, and I'm sure I can recall\nsomething about where she was headed.")
          					  case 1:
/*<215>*/ 						printf(/* textboxtype: 1, unk: 1, line: 66 */ "<0x10009:0x00000006>Kweeeee-heee...<pause 15> I am <color blue<Bucha>coloroff>, the\nKikwi elder.\n\n\nI saw the way you spotted me through\nmy ingenious camouflage. <pause 15>Kweee,\nyou are clearly a master woodsman.\n[1-]Where's Zelda?[2-]Others like you?")
/*<539>*/ 						switch (choice(2)) {
          						  case 0:
/*<541>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<537>*/ 							printf(/* textboxtype: 1, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nAh, the girl creature with the blonde\nhair. She looked like one of your kind.\nYes, she was with me, kweeee.\n\n<0x10009:0x0000000c>But now is not the time for such talk...\nThe woods are full of monsters. I am\nworried about my missing tribe.\n\nKweeee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          							flw_540:
/*<540>*/ 							set_camera(29, 0)
/*<538>*/ 							printf(/* textboxtype: 1, unk: 1, line: 68 */ "<0x10009:0x0000000e>What? You say you've met some of\nmy people, kweee?")
/*<536>*/ 							printf(/* textboxtype: 1, unk: 1, line: 74 */ "<0x10009:0x00000003>Hmm... So Machi, Oolo, and Erla are\nsafe, are they? Oh, but there are still\nmonsters lurking in the forest, so I\ndare not leave this spot, kwee.")
/*<542>*/ 							set_camera(-1, 0)
/*<543>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_412:
/*<412>*/ 								printf(/* textboxtype: 1, unk: 1, line: 76 */ "<0x10009:0x00000008><color red<One more >coloroff><color red<Kikwi>coloroff> remains unaccounted\nfor, kweee. Would you mind searching\nfor him to see if he's OK?\n\n<0x10009:0x00000002>He likes to climb trees, so I'd suggest\nyou search the treetops for him,\nkwee.\n\nBy the way, I haven't forgotten about\nthe girl you search for. Give me just a\nbit more time, and I'm sure I can recall\nsomething about where she was headed.")
          								goto flw_180
          							  case 1:
/*<544>*/ 								printf(/* textboxtype: 1, unk: 1, line: 69 */ "<0x10009:0x00000008>And you're looking for one of your\nlost people as well?\n\n\nHmmm... Yes. At one point during the\nmonster panic here, I did speak with a\nblonde girl of your kind, kweee.\n\n<0x10009:0x0000000c>But now is not the time for such talk.\nThe forest is full of monsters, and I am\nworried about my missing tribe.\n\nKweee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          								goto flw_412
          							}
          						  case 1:
          							goto flw_540
          						}
          					}
          				  case 1:
/*<184>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<185>*/ 						printf(/* textboxtype: 1, unk: 1, line: 78 */ "<0x10009:0x00000003>I'm glad to hear that Machi and Oolo\nare safe, kwee, but I still worry about\nthe other Kikwis.\n\n<color red<Two>coloroff> Kikwis are still unaccounted for.\nCould I ask you to search the area\nfor them and make sure they are safe?\n\n<0x10009:0x00000008>Oh, and I believe I remembered\nsomething about the girl you seek.\nShe took off that way, kwee! Or maybe\nit was this way? Oh dear.")
          					  case 1:
/*<216>*/ 						printf(/* textboxtype: 1, unk: 1, line: 66 */ "<0x10009:0x00000006>Kweeeee-heee...<pause 15> I am <color blue<Bucha>coloroff>, the\nKikwi elder.\n\n\nI saw the way you spotted me through\nmy ingenious camouflage. <pause 15>Kweee,\nyou are clearly a master woodsman.\n[1-]Where's Zelda?[2-]Others like you?")
/*<548>*/ 						switch (choice(2)) {
          						  case 0:
/*<550>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<546>*/ 							printf(/* textboxtype: 1, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nAh, the girl creature with the blonde\nhair. She looked like one of your kind.\nYes, she was with me, kweeee.\n\n<0x10009:0x0000000c>But now is not the time for such talk...\nThe woods are full of monsters. I am\nworried about my missing tribe.\n\nKweeee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          							flw_549:
/*<549>*/ 							set_camera(29, 0)
/*<547>*/ 							printf(/* textboxtype: 1, unk: 1, line: 68 */ "<0x10009:0x0000000e>What? You say you've met some of\nmy people, kweee?")
/*<545>*/ 							printf(/* textboxtype: 1, unk: 1, line: 77 */ "<0x10009:0x00000003>Kweee... So Machi and Oolo are safe,\neh?\n\n\nOh, but there are still monsters lurking\nin the forest, so I dare not leave this\nspot.")
/*<551>*/ 							set_camera(-1, 0)
/*<552>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_413:
/*<413>*/ 								printf(/* textboxtype: 1, unk: 1, line: 79 */ "<0x10009:0x00000002><color red<Two more>coloroff> of my tribe are still\nunaccounted for, kwee! Could I ask\nyou to search the area for them\nand make sure they are safe?\nI've been worried about my fellow\nKikwis, but if you could put my fears\nto rest, I might remember something\nabout where the girl you seek went.")
          								goto flw_180
          							  case 1:
/*<553>*/ 								printf(/* textboxtype: 1, unk: 1, line: 69 */ "<0x10009:0x00000008>And you're looking for one of your\nlost people as well?\n\n\nHmmm... Yes. At one point during the\nmonster panic here, I did speak with a\nblonde girl of your kind, kweee.\n\n<0x10009:0x0000000c>But now is not the time for such talk.\nThe forest is full of monsters, and I am\nworried about my missing tribe.\n\nKweee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          								goto flw_413
          							}
          						  case 1:
          							goto flw_549
          						}
          					}
          				}
          			}
          		  case 1:
/*<187>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<188>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<189>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<197>*/ 						printf(/* textboxtype: 1, unk: 1, line: 81 */ "<0x10009:0x00000003>Kwee... So Machi, Lopsa, and Erla are\nsafe, are they? \n\n\nGood news! Oh, but <color red<one last Kikwi>coloroff>\nis still unaccounted for. Could I ask\nyou to search the area for him?\n\n<0x10009:0x00000002>He has quite a talent for disguising\nhimself as a clump of tall grass, so\nlook for him amongst any lush,\ngrassy tufts you may encounter, kwee.\nOn a separate note, I feel like I'm on\nthe verge of remembering something\nabout that girl you're after and where\nshe went. I need just a little more time.")
          					  case 1:
/*<217>*/ 						printf(/* textboxtype: 1, unk: 1, line: 66 */ "<0x10009:0x00000006>Kweeeee-heee...<pause 15> I am <color blue<Bucha>coloroff>, the\nKikwi elder.\n\n\nI saw the way you spotted me through\nmy ingenious camouflage. <pause 15>Kweee,\nyou are clearly a master woodsman.\n[1-]Where's Zelda?[2-]Others like you?")
/*<557>*/ 						switch (choice(2)) {
          						  case 0:
/*<559>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<555>*/ 							printf(/* textboxtype: 1, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nAh, the girl creature with the blonde\nhair. She looked like one of your kind.\nYes, she was with me, kweeee.\n\n<0x10009:0x0000000c>But now is not the time for such talk...\nThe woods are full of monsters. I am\nworried about my missing tribe.\n\nKweeee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          							flw_558:
/*<558>*/ 							set_camera(29, 0)
/*<556>*/ 							printf(/* textboxtype: 1, unk: 1, line: 68 */ "<0x10009:0x0000000e>What? You say you've met some of\nmy people, kweee?")
/*<554>*/ 							printf(/* textboxtype: 1, unk: 1, line: 80 */ "<0x10009:0x00000003>Kwee... So Machi, Lopsa, and Erla are\nsafe, eh?\n\n\nOh, but there are still monsters lurking\nin the forest. I dare not leave this spot.")
/*<560>*/ 							set_camera(-1, 0)
/*<561>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_414:
/*<414>*/ 								printf(/* textboxtype: 1, unk: 1, line: 82 */ "<0x10009:0x00000008><color red<One last Kikwi>coloroff> is still unaccounted\nfor. Could I ask you to search the\narea for him, kwee?\n\nHe has quite a talent for disguising\nhimself as a clump of tall grass, so\nlook for him amongst any lush,\ngrassy tufts you may encounter.\n<0x10009:0x00000002>Oh, but I feel like I'm on the verge of\nremembering something about that girl\nyou're after and where she went, kwee.\nGive me just a little more time.")
          								goto flw_180
          							  case 1:
/*<562>*/ 								printf(/* textboxtype: 1, unk: 1, line: 69 */ "<0x10009:0x00000008>And you're looking for one of your\nlost people as well?\n\n\nHmmm... Yes. At one point during the\nmonster panic here, I did speak with a\nblonde girl of your kind, kweee.\n\n<0x10009:0x0000000c>But now is not the time for such talk.\nThe forest is full of monsters, and I am\nworried about my missing tribe.\n\nKweee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          								goto flw_414
          							}
          						  case 1:
          							goto flw_558
          						}
          					}
          				  case 1:
/*<190>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<191>*/ 						printf(/* textboxtype: 1, unk: 1, line: 84 */ "<0x10009:0x00000003>I'm glad to hear that Machi and Lopsa\nare safe, kwee, but I still worry about\nthe other Kikwis.\n\n<color red<Two >coloroff>of my tribe are still unaccounted\nfor. Could you please search the area\nfor them and make sure they are safe?\n\n<0x10009:0x00000008>Oh, and I believe I remembered\nsomething about the girl you seek.\nShe took off that way, kwee!\nOr maybe it was this way? Oh dear.")
          					  case 1:
/*<218>*/ 						printf(/* textboxtype: 1, unk: 1, line: 66 */ "<0x10009:0x00000006>Kweeeee-heee...<pause 15> I am <color blue<Bucha>coloroff>, the\nKikwi elder.\n\n\nI saw the way you spotted me through\nmy ingenious camouflage. <pause 15>Kweee,\nyou are clearly a master woodsman.\n[1-]Where's Zelda?[2-]Others like you?")
/*<566>*/ 						switch (choice(2)) {
          						  case 0:
/*<568>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<564>*/ 							printf(/* textboxtype: 1, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nAh, the girl creature with the blonde\nhair. She looked like one of your kind.\nYes, she was with me, kweeee.\n\n<0x10009:0x0000000c>But now is not the time for such talk...\nThe woods are full of monsters. I am\nworried about my missing tribe.\n\nKweeee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          							flw_567:
/*<567>*/ 							set_camera(29, 0)
/*<565>*/ 							printf(/* textboxtype: 1, unk: 1, line: 68 */ "<0x10009:0x0000000e>What? You say you've met some of\nmy people, kweee?")
/*<563>*/ 							printf(/* textboxtype: 1, unk: 1, line: 83 */ "<0x10009:0x00000003>Kweee... So Machi and Lopsa are\nsafe, eh?\n\n\nBut it's not safe! There are still\nmonsters lurking in the forest, so\nI dare not leave this spot.")
/*<569>*/ 							set_camera(-1, 0)
/*<570>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_415:
/*<415>*/ 								printf(/* textboxtype: 1, unk: 1, line: 85 */ "<0x10009:0x00000002><color red<Two more>coloroff> of my tribe are still\nunaccounted for. Could I ask you\nto search the area for them and\nmake sure they are safe, kwee?\nI am worried about my fellow Kikwis.\nIf you could calm my panic, I might be\nable to remember more about where\nthe girl you seek went off to.")
          								goto flw_180
          							  case 1:
/*<571>*/ 								printf(/* textboxtype: 1, unk: 1, line: 69 */ "<0x10009:0x00000008>And you're looking for one of your\nlost people as well?\n\n\nHmmm... Yes. At one point during the\nmonster panic here, I did speak with a\nblonde girl of your kind, kweee.\n\n<0x10009:0x0000000c>But now is not the time for such talk.\nThe forest is full of monsters, and I am\nworried about my missing tribe.\n\nKweee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          								goto flw_415
          							}
          						  case 1:
          							goto flw_567
          						}
          					}
          				}
          			  case 1:
/*<192>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<193>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<196>*/ 						printf(/* textboxtype: 1, unk: 1, line: 87 */ "<0x10009:0x00000003>I'm relieved to hear that Machi and\nErla are safe, kwee, but I still worry\nabout the other Kikwis.\n\n<color red<Two >coloroff>of my tribe are still unaccounted\nfor. Do you think you could search the\narea for them and make sure they\nare safe?\n<0x10009:0x00000008>Oh, and I believe I remembered\nsomething about the girl you seek.\nShe took off that way, kweee!\nOr maybe it was this way? Oh dear.")
          					  case 1:
/*<219>*/ 						printf(/* textboxtype: 1, unk: 1, line: 66 */ "<0x10009:0x00000006>Kweeeee-heee...<pause 15> I am <color blue<Bucha>coloroff>, the\nKikwi elder.\n\n\nI saw the way you spotted me through\nmy ingenious camouflage. <pause 15>Kweee,\nyou are clearly a master woodsman.\n[1-]Where's Zelda?[2-]Others like you?")
/*<575>*/ 						switch (choice(2)) {
          						  case 0:
/*<577>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<573>*/ 							printf(/* textboxtype: 1, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nAh, the girl creature with the blonde\nhair. She looked like one of your kind.\nYes, she was with me, kweeee.\n\n<0x10009:0x0000000c>But now is not the time for such talk...\nThe woods are full of monsters. I am\nworried about my missing tribe.\n\nKweeee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          							flw_576:
/*<576>*/ 							set_camera(29, 0)
/*<574>*/ 							printf(/* textboxtype: 1, unk: 1, line: 68 */ "<0x10009:0x0000000e>What? You say you've met some of\nmy people, kweee?")
/*<572>*/ 							printf(/* textboxtype: 1, unk: 1, line: 86 */ "<0x10009:0x00000003>Kweee... So Machi and Erla are\nsafe, eh?\n\n\nOh, there are still monsters lurking in\nthe forest. I dare not leave this spot.")
/*<578>*/ 							set_camera(-1, 0)
/*<579>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_416:
/*<416>*/ 								printf(/* textboxtype: 1, unk: 0, line: 88 */ "<0x10009:0x00000002><color red<Two>coloroff> of my tribe are still missing, kwee.\nCould you please search around the\narea and make sure they're safe?\n\nI've been so worried about my Kikwis.\nBut if you could put my fears to rest,\nI might remember where that girl\nyou seek ran off to, kwee.")
          								goto flw_180
          							  case 1:
/*<580>*/ 								printf(/* textboxtype: 1, unk: 1, line: 69 */ "<0x10009:0x00000008>And you're looking for one of your\nlost people as well?\n\n\nHmmm... Yes. At one point during the\nmonster panic here, I did speak with a\nblonde girl of your kind, kweee.\n\n<0x10009:0x0000000c>But now is not the time for such talk.\nThe forest is full of monsters, and I am\nworried about my missing tribe.\n\nKweee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          								goto flw_416
          							}
          						  case 1:
          							goto flw_576
          						}
          					}
          				  case 1:
/*<194>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<195>*/ 						printf(/* textboxtype: 1, unk: 1, line: 90 */ "<0x10009:0x00000003>I'm glad to hear that Machi is safe,\nyes, kwee, but I still worry about the\nother Kikwis.\n\n<color red<Three >coloroff>of my tribe are still unaccounted\nfor. Could I convince you to search the\narea for them and make sure they are\nsafe?\n<0x10009:0x00000008>Now if I could just recall where that\ngirl went off to, kwee. Hmm...")
          					  case 1:
/*<220>*/ 						printf(/* textboxtype: 1, unk: 1, line: 66 */ "<0x10009:0x00000006>Kweeeee-heee...<pause 15> I am <color blue<Bucha>coloroff>, the\nKikwi elder.\n\n\nI saw the way you spotted me through\nmy ingenious camouflage. <pause 15>Kweee,\nyou are clearly a master woodsman.\n[1-]Where's Zelda?[2-]Others like you?")
/*<584>*/ 						switch (choice(2)) {
          						  case 0:
/*<586>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<582>*/ 							printf(/* textboxtype: 1, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nAh, the girl creature with the blonde\nhair. She looked like one of your kind.\nYes, she was with me, kweeee.\n\n<0x10009:0x0000000c>But now is not the time for such talk...\nThe woods are full of monsters. I am\nworried about my missing tribe.\n\nKweeee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          							flw_585:
/*<585>*/ 							set_camera(29, 0)
/*<583>*/ 							printf(/* textboxtype: 1, unk: 1, line: 68 */ "<0x10009:0x0000000e>What? You say you've met some of\nmy people, kweee?")
/*<581>*/ 							printf(/* textboxtype: 1, unk: 1, line: 89 */ "<0x10009:0x00000003>Kweee... So Machi is safe, eh?\n\n\n\nAhhh, but the monsters! They are still\nlurking in the forest. I don't dare\nleave this spot.")
/*<587>*/ 							set_camera(-1, 0)
/*<588>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_417:
/*<417>*/ 								printf(/* textboxtype: 1, unk: 1, line: 91 */ "<0x10009:0x00000002><color red<Three >coloroff>Kikwis are still unaccounted for.\nCould I ask you to search for them\nand make sure they are safe, kweee?\n\nI am worried sick for my fellow Kikwis.\nIf you could calm my fears, I might be\nable to remember more about where\nthe girl you seek went off to, kwee.")
          								goto flw_180
          							  case 1:
/*<589>*/ 								printf(/* textboxtype: 1, unk: 1, line: 69 */ "<0x10009:0x00000008>And you're looking for one of your\nlost people as well?\n\n\nHmmm... Yes. At one point during the\nmonster panic here, I did speak with a\nblonde girl of your kind, kweee.\n\n<0x10009:0x0000000c>But now is not the time for such talk.\nThe forest is full of monsters, and I am\nworried about my missing tribe.\n\nKweee... The shock and worry has\nmade my memories of the girl quite\nhazy...")
          								goto flw_417
          							}
          						  case 1:
          							goto flw_585
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_200_58() {
/*< 52>*/ 	start()
/*< 53>*/ 	printf(/* textboxtype: 2, unk: 1, line: 131 */ "<0x10012:0x00000004>Master <heroname>, now would\nbe an excellent time to arm you with\nadditional information regarding the\nuse of your items.\nYou should be aware that you can\ninstantly ready the <color yellow<slingshot >coloroff>you used a\nmoment ago by <color green<quickly tapping >coloroff>(B)<0x10011:0x01cd>.\n\nIf you experience difficulty aiming\nwhile you're using this at any time,\npoint the Wii Remote forward and \npress (v) to <color green<recenter your aim>coloroff>.<0x10011:0x09cd>")
          }

          void entrypoint_200_92() {
/*<305>*/ 	start()
/*<306>*/ 	printf(/* textboxtype: 7, unk: 0, line: 188 */ "")
          }

          void entrypoint_200_40() {
/*<336>*/ 	start()
/*<337>*/ 	printf(/* textboxtype: 2, unk: 1, line: 108 */ "<0x10005:0x004b0000><0x10012:0x00000001>Master, you have entered <color blue<Faron Woods>coloroff>.")
/*<355>*/ 	temp_flags[50 /* 0x7 04 */] = true;
          }

          void entrypoint_200_07() {
/*< 56>*/ 	start()
/*< 58>*/ 	{'type': 'type3', 'subType': 4, 'param1': 20, 'param2': 0, 'next': 205, 'param3': 13}
/*<205>*/ 	set_camera(3, 0)
/*<602>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 603, 'param3': 13}
/*<603>*/ 	wait_frames(60)
          }

          void entrypoint_200_59() {
/*<206>*/ 	start()
/*<621>*/ 	switch (scene_flags[50 /* 0x7 04 */]) {
          	  case 0:
/*<623>*/ 		printf(/* textboxtype: 2, unk: 1, line: 133 */ "<0x10012:0x00000004>Master <heroname>, you should\nbe aware that I have calculated an\n80% probability that a sacred flame\nlies beyond this lake.")
          	  case 1:
/*<622>*/ 		printf(/* textboxtype: 2, unk: 1, line: 132 */ "<0x10012:0x00000004>Master, my calculations indicate\nthere is an 80% probability that a\nsacred flame lies beyond this gate.\n\nI have also deduced that the power of\nthe goddess the Kikwi hermit referred\nto is in fact the <color red<Skyward Strike>coloroff>.\n\nCharge your sword while standing in\nfront of the gate and use its energy to\n<color green<draw the missing portion of the symbol>coloroff>.")
/*<655>*/ 		scene_flags[1 'Faron Woods'][52 /* 0x7 10 */] = true;
          	}
          }

          void entrypoint_200_41() {
/*<338>*/ 	start()
/*<339>*/ 	printf(/* textboxtype: 2, unk: 1, line: 109 */ "<0x10005:0x004b0000>The plentiful water in this region\nclearly sustains a large diversity\nof flora, including this massive tree.")
          }

          void entrypoint_200_93() {
/*<445>*/ 	start()
/*<446>*/ 	printf(/* textboxtype: 1, unk: 0, line: 163 */ "<0x10009:0x00000001>Now, there is a face I know. Hey, bud!")
/*<513>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_08() {
/*<132>*/ 	start()
/*<213>*/ 	switch (story_flags[59 /* us: 805A9ADF 0x04, jp: 805ACD5F 0x04 */]) {
          	  case 0:
/*<601>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 10, 'next': 660, 'param3': 13}
/*<660>*/ 		switch (zone_temp_flags[20 /* 0x3 10 */]) {
          		  case 0:
/*<662>*/ 			scene_flags[1 'Faron Woods'][69 /* 0x9 20 */] = true;
          		  case 1:
/*<661>*/ 			zone_temp_flags[20 /* 0x3 10 */] = true;
          		}
          	  case 1:
/*<600>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': -1, 'param3': 13}
          	}
          }

          void entrypoint_200_42() {
/*<340>*/ 	start()
/*<341>*/ 	printf(/* textboxtype: 2, unk: 1, line: 110 */ "<0x10005:0x004b0000>It is logical that the lush plant life and\nwater resources have attracted animal\nspecies to the region.")
          }

          void entrypoint_200_94() {
/*<447>*/ 	start()
/*<453>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 455, 'param3': 46}
/*<455>*/ 	set_camera(35, 0)
/*<457>*/ 	switch (scene_flags[34 /* 0x5 04 */]) {
          	  case 0:
/*<516>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<515>*/ 			printf(/* textboxtype: 1, unk: 0, line: 181 */ "<0x10009:0x00000002><0x10008:0x02cd>Hey, do not run off!\n\n\n\nI need your help figuring out the secret\nof these Goddess Cubes.")
          			flw_465:
/*<465>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 463, 'param3': 49}
/*<463>*/ 			{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 356, 'next': 464, 'param3': 15}
/*<464>*/ 			set_camera(36, 0)
/*<511>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<517>*/ 			printf(/* textboxtype: 1, unk: 0, line: 182 */ "<0x10009:0x00000002><0x10008:0x02cd>Hold up, bud!\n\n\n\nI need to ask you a favor.")
          			goto flw_465
          		}
          	  case 1:
/*<462>*/ 		scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<481>*/ 		scene_flags[1 'Faron Woods'][36 /* 0x5 10 */] = true;
/*<461>*/ 		printf(/* textboxtype: 1, unk: 0, line: 183 */ "<0x10009:0x00000003><0x10008:0x02cd>Hold it, bud!\n\n\n\n<0x10009:0x00170600>Do not walk on by like you do not see\nme when I know you do.<pause 15> Are you mad\nat me or something?\n[1-]Sorry![2-]I don't like you.")
/*<459>*/ 		switch (choice(2)) {
          		  case 0:
/*<458>*/ 			printf(/* textboxtype: 1, unk: 0, line: 184 */ "<0x10009:0x00161e07>Oh, you are busy searching for your\nfriend. I get it. Sorry to get in your\nway, bud. Really, I am.\n\nBut this will not take long. Come help\nme out, will you?")
          			goto flw_465
          		  case 1:
/*<460>*/ 			printf(/* textboxtype: 1, unk: 0, line: 185 */ "<0x10009:0x00161e56>Oh. Ouch. Is that so? I guess it is just\nhow it is for us explorer types. We are\nfated to be misunderstood.\n\nJust the same, could you take a few\nminutes to help me out?")
          			goto flw_465
          		}
          	}
          }

          void entrypoint_200_60() {
/*< 25>*/ 	start()
/*< 57>*/ 	{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 232, 'param3': 51}
/*<232>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 223, 'param3': 17}
/*<223>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 227, 'param3': 13}
/*<227>*/ 	wait_frames(27)
/*<432>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 224, 'param3': 49}
/*<224>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 0, 'next': 226, 'param3': 13}
/*<226>*/ 	make_actor_do_something(0, 0)
/*<234>*/ 	wait_frames(24)
/*<433>*/ 	{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 84, 'param3': 13}
/*< 84>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 435, 'param3': 50}
/*<435>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 26, 'param3': 17}
/*< 26>*/ 	printf(/* textboxtype: 2, unk: 1, line: 134 */ "<0x10012:0x00000004>Master, we have obtained new\ninformation on Zelda's current status.\n\n\nThis information indicates that she was\nassailed by monsters but somehow\nevaded capture. However, I infer that\nshe is still in significant danger.")
/*<156>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 256, 'next': 358, 'param3': 30}
/*<358>*/ 	wait_frames(15)
/*<335>*/ 	story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */] = true;
/*<155>*/ 	printf(/* textboxtype: 2, unk: 1, line: 135 */ "<sound 4>I have marked the position of the\nKikwi known as Machi. Please\nconfirm your current location.")
/*<159>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 359, 'param3': 34}
/*<359>*/ 	wait_frames(15)
/*<225>*/ 	{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 0, 'next': 302, 'param3': 13}
/*<302>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 157, 'param3': 17}
/*<157>*/ 	printf(/* textboxtype: 2, unk: 1, line: 136 */ "Furthermore, my analysis suggests that\nthis Kikwi most likely produces a\nfalse-positive dowsing reaction due to\nprevious direct contact with Zelda.\nUsing this hypothesis, I theorize there\nis an 85% chance that the Kikwi elder\nwill also generate a dowsing reaction\nfor the same reason.\nI propose you continue dowsing to\nsearch for Zelda.")
/*<158>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 434, 'param3': 36}
/*<434>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 228, 'param3': 17}
/*<228>*/ 	wait_frames(21)
/*<231>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 277, 'param3': 13}
/*<277>*/ 	wait_frames(30)
/*<363>*/ 	set_camera(19, 0)
/*<278>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 230, 'param3': 17}
/*<230>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 229, 'param3': 13}
/*<229>*/ 	printf(/* textboxtype: 1, unk: 2, line: 20 */ "<0x10009:0x0000000d>You really spooked me, kwee... \nYou keep some very strange company,\nfriend.")
/*<523>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 522, 'param3': 13}
/*<522>*/ 	printf(/* textboxtype: 1, unk: 2, line: 19 */ "<0x10009:0x00000007>Kee-paleep... It sounds like you're\nset on finding this friend and the elder.\n\n\nIf you're heading that way anyway, \nkwee, would you mind <color red<telling our elder\nthat I'm safe>coloroff>?\n\n<0x10009:0x00000005>Cheer up, koo-weep! I bet your\nfriend is safe with our elder.")
/*<618>*/ 	scene_flags[1 'Faron Woods'][45 /* 0x4 20 */] = true;
/*<619>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_09() {
/*<142>*/ 	start()
/*<143>*/ 	printf(/* textboxtype: 1, unk: 1, line: 102 */ "<0x10009:0x00000002>With that slingshot, kwee, you should\nbe able to find a path into the Deep\nWoods where that temple is.")
/*<380>*/ 	set_camera(21, 0)
/*<381>*/ 	{'type': 'type3', 'subType': 2, 'param1': 33, 'param2': 356, 'next': 382, 'param3': 15}
/*<382>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 383, 'param3': 32}
/*<383>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 384, 'param3': 17}
/*<384>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 385, 'param3': 17}
/*<385>*/ 	set_camera(22, 0)
/*<388>*/ 	switch (scene_flags[5 /* 0x1 20 */]) {
          	  case 0:
/*<390>*/ 		printf(/* textboxtype: 1, unk: 1, line: 104 */ "<0x10009:0x00000008>To get started, why don't you shoot that\nvine over--<pause 15> Huh?\n\n\nCouldn't wait to shoot it, could you?<pause 15>\nWell, kwee...I suppose that's a good\nthing. It will make my explanation\nthat much easier to understand.")
          		flw_391:
/*<391>*/ 		printf(/* textboxtype: 1, unk: 1, line: 105 */ "<0x10009:0x00000002>Press (B) to ready your slingshot, kwee,\nthen press (A) to let a shot fly.<0x10011:0x01cd>\n\n\nIf you run out of ammunition, just \n<color green<grab some seeds>coloroff> from the fruit that\ngrows on the trees over there.")
/*<386>*/ 		set_camera(23, 0)
/*<394>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 393, 'param3': 17}
/*<393>*/ 		switch (scene_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*<387>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 392, 'param3': 17}
/*<392>*/ 			printf(/* textboxtype: 1, unk: 1, line: 106 */ "<0x10009:0x00000006>Now go find that girl! I'll be rooting\nfor you. Kwee heh heh.")
/*<398>*/ 			set_camera(25, 0)
/*<399>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<395>*/ 			printf(/* textboxtype: 1, unk: 1, line: 106 */ "<0x10009:0x00000006>Now go find that girl! I'll be rooting\nfor you. Kwee heh heh.")
/*<396>*/ 			set_camera(24, 0)
/*<397>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<389>*/ 		printf(/* textboxtype: 1, unk: 1, line: 103 */ "<0x10009:0x00000008>To start, why not try shooting that\ncurled-up vine over there?")
          		goto flw_391
          	}
          }

          void entrypoint_200_43() {
/*<342>*/ 	start()
/*<343>*/ 	printf(/* textboxtype: 2, unk: 1, line: 111 */ "<0x10005:0x004b0000>Looking at the probabilities, it is\nextremely likely that Zelda is\nsomewhere in the area.\n\nI recommend you continue to use your\ndowsing ability to search for her.")
/*<644>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<645>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_200_95() {
/*<450>*/ 	start()
/*<454>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 456, 'param3': 46}
/*<456>*/ 	set_camera(35, 0)
/*<466>*/ 	switch (scene_flags[34 /* 0x5 04 */]) {
          	  case 0:
/*<519>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<518>*/ 			printf(/* textboxtype: 1, unk: 0, line: 181 */ "<0x10009:0x00000002><0x10008:0x02cd>Hey, do not run off!\n\n\n\nI need your help figuring out the secret\nof these Goddess Cubes.")
          			flw_474:
/*<474>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 472, 'param3': 49}
/*<472>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 473, 'param3': 15}
/*<473>*/ 			set_camera(36, 0)
/*<512>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<520>*/ 			printf(/* textboxtype: 1, unk: 0, line: 182 */ "<0x10009:0x00000002><0x10008:0x02cd>Hold up, bud!\n\n\n\nI need to ask you a favor.")
          			goto flw_474
          		}
          	  case 1:
/*<471>*/ 		scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<482>*/ 		scene_flags[1 'Faron Woods'][36 /* 0x5 10 */] = true;
/*<470>*/ 		printf(/* textboxtype: 1, unk: 0, line: 183 */ "<0x10009:0x00000003><0x10008:0x02cd>Hold it, bud!\n\n\n\n<0x10009:0x00170600>Do not walk on by like you do not see\nme when I know you do.<pause 15> Are you mad\nat me or something?\n[1-]Sorry![2-]I don't like you.")
/*<468>*/ 		switch (choice(2)) {
          		  case 0:
/*<467>*/ 			printf(/* textboxtype: 1, unk: 0, line: 184 */ "<0x10009:0x00161e07>Oh, you are busy searching for your\nfriend. I get it. Sorry to get in your\nway, bud. Really, I am.\n\nBut this will not take long. Come help\nme out, will you?")
          			goto flw_474
          		  case 1:
/*<469>*/ 			printf(/* textboxtype: 1, unk: 0, line: 185 */ "<0x10009:0x00161e56>Oh. Ouch. Is that so? I guess it is just\nhow it is for us explorer types. We are\nfated to be misunderstood.\n\nJust the same, could you take a few\nminutes to help me out?")
          			goto flw_474
          		}
          	}
          }

          void entrypoint_200_61() {
/*< 71>*/ 	start()
/*<651>*/ 	story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */] = true;
/*<200>*/ 	{'type': 'type3', 'subType': 1, 'param1': 300, 'param2': 0, 'next': 405, 'param3': 51}
/*<405>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 201, 'param3': 17}
/*<201>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 199, 'param3': 16}
/*<199>*/ 	printf(/* textboxtype: 2, unk: 1, line: 137 */ "Learning that Zelda is no longer with\nthe Kikwi elder is an unfortunate\nsetback.<pause 15> But he may still have useful\ninformation.\nTaking this into account, I calculate\nan 85% probability that your quest\nwill be aided if you find the lost Kikwis\nfor the elder.\nTo expedite your search for these\nforest-dwelling creatures, I have\nadded <sound 4><color red<Kikwis>coloroff> as a dowsing option.")
/*<653>*/ 	open_dowsing_wheel(1)
/*<654>*/ 	printf(/* textboxtype: 2, unk: 1, line: 138 */ "Do you need me to explain how to\nswitch dowsing targets? \n[1-]Yes![2]No, thanks.")
/*<636>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_524:
/*<524>*/ 		printf(/* textboxtype: 2, unk: 1, line: 139 */ "Press and hold (C) to display the targets\nyou are currently able to dowse for.<0x10011:0x06cd>\n\n\n<color green<Point the Wii Remote>coloroff> at the target you\nwant to dowse for, and release (C)\nto confirm your selection.<0x10011:0x06cd>\n\nIf you do not want to dowse for\nanything, <color green<look around >coloroff>and release (C).\n[1-]Again, please?[2]Got it.")
/*<525>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_524
          		  case 1:
          			flw_652:
/*<652>*/ 			printf(/* textboxtype: 2, unk: 1, line: 140 */ "Additionally, I will mark any Kikwis\nyou discover on your map and disable\ndowsing readings for them. That way,\nyou will not revisit the same Kikwis.\nThis concludes my explanation. When\nready, please begin your search for\nthe missing Kikwis.")
/*<648>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<649>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 650, 'param3': 36}
/*<650>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
          		goto flw_652
          	}
          }

          void entrypoint_200_44() {
/*<356>*/ 	start()
/*<357>*/ 	temp_flags[51 /* 0x7 08 */] = true;
          }

          void entrypoint_200_96() {
/*<451>*/ 	start()
/*<452>*/ 	printf(/* textboxtype: 1, unk: 0, line: 176 */ "<0x10009:0x00151908>WHOOOA! Did you see that?! The cube\njust shot up into the sky!\n\n\n<0x10009:0x00131b00>I think it reacted to that whirly-beam\nthing that shot out of your sword.\n\n\n<0x10009:0x00001b05>And where do you think the cube shot\noff to, anyhow? This mystery just got a\nwhole lot more, uh, mysterious!\n\n<0x10009:0x00161e00>The texts say there are cubes like that\none all over this land.\n\n\n<0x10009:0x00001700>Tell you what. You blast as many of\nthose cubes as you can find. If you find\nout more about them along the way,\nyou come see me.")
/*<510>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_62() {
/*< 94>*/ 	start()
/*<235>*/ 	switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          	  case 0:
/*<236>*/ 		switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          		  case 0:
/*<244>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<245>*/ 				switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          				  case 0:
/*<246>*/ 					switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          					  case 0:
/*<241>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 287, 'param3': 51}
/*<287>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 285, 'param3': 17}
/*<285>*/ 						{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 10, 'next': 286, 'param3': 13}
/*<286>*/ 						wait_frames(27)
/*<243>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 240, 'param3': 16}
/*<240>*/ 						printf(/* textboxtype: 2, unk: 1, line: 147 */ "I am not detecting any additional\ndowsing responses in the area.\n\n\nI suggest you go speak with the Kikwi\nelder.")
/*<242>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 288, 'param3': 36}
          						flw_288:
/*<288>*/ 						wait_frames(21)
/*<368>*/ 						set_camera(17, 0)
/*<367>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 371, 'param3': 17}
/*<371>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 370, 'param3': 17}
/*<370>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 369, 'param3': 13}
/*<369>*/ 						printf(/* textboxtype: 1, unk: 2, line: 40 */ "<0x10009:0x00000014>What WAS that just now, kwee? \nDon't scare me like that!")
/*<406>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
          						flw_238:
/*<238>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 284, 'param3': 51}
/*<284>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 282, 'param3': 17}
/*<282>*/ 						{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 10, 'next': 283, 'param3': 13}
/*<283>*/ 						wait_frames(27)
/*<239>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 612, 'param3': 16}
/*<612>*/ 						switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          						  case 0:
/*<237>*/ 							printf(/* textboxtype: 2, unk: 1, line: 141 */ "I have marked<sound 4> the location of Oolo\nthe Kikwi on your map. However,\ndowsing readings indicate there are\nstill Kikwis to search for.")
          							flw_308:
/*<308>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 599, 'param3': 17}
/*<599>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 288, 'param3': 36}
          							goto flw_288
          						  case 1:
/*<613>*/ 							printf(/* textboxtype: 2, unk: 1, line: 142 */ "I have marked <sound 4> the location of Oolo\nthe Kikwi on your map. Unfortunately,\nZelda is not with him.")
          							goto flw_308
          						}
          					}
          				  case 1:
          					goto flw_238
          				}
          			  case 1:
          				goto flw_238
          			}
          		  case 1:
          			goto flw_238
          		}
          	  case 1:
          		goto flw_238
          	}
          }

          void entrypoint_200_10() {
/*<310>*/ 	start()
/*<607>*/ 	set_camera(-1, 0)
/*<608>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 609, 'param3': 40}
/*<609>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 610, 'param3': 13}
/*<610>*/ 	wait_frames(60)
/*<350>*/ 	set_camera(15, 0)
/*<348>*/ 	wait_frames(75)
/*<353>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1002, 'next': 354, 'param3': 24}
/*<354>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 356, 'next': 347, 'param3': 15}
/*<347>*/ 	{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 349, 'param3': 13}
/*<349>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 100, 'next': 351, 'param3': 14}
/*<351>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 352, 'param3': 17}
/*<352>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 313, 'param3': 13}
/*<313>*/ 	printf(/* textboxtype: 1, unk: 2, line: 25 */ "<0x10009:0x00000007>Hey! It's me, kwee! Did you find the\ngirl?\n[1-]Who are you?[2-]Not yet...")
/*<314>*/ 	switch (choice(2)) {
          	  case 0:
/*<317>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 315, 'param3': 13}
/*<315>*/ 		printf(/* textboxtype: 1, unk: 2, line: 26 */ "<0x10009:0x00000013>What do you mean, who am I? Don't\ntell me you forgot your old buddy\n<color blue<Machi>coloroff>! Now I'm sad... Koo-kwee...")
          		flw_319:
/*<319>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 320, 'param3': 13}
/*<320>*/ 		printf(/* textboxtype: 1, unk: 2, line: 28 */ "<0x10009:0x00000007>I'm so glad I've finally been reunited\nwith all my Kikwi friends. It's all\nthanks to you, koo-weep!")
/*<312>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 318, 'param3': 13}
/*<318>*/ 		printf(/* textboxtype: 1, unk: 2, line: 29 */ "<0x10009:0x00000005>With any luck, hopefully you'll find\nthat girl you've been searching for real\nsoon, koro-koo! Take care, OK?")
/*<321>*/ 		{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 0, 'next': 322, 'param3': 14}
/*<322>*/ 		story_flags[69 /* us: 805A9ADE 0x01, jp: 805ACD5E 0x01 */] = true;
/*<344>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<311>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 316, 'param3': 13}
/*<316>*/ 		printf(/* textboxtype: 1, unk: 2, line: 27 */ "<0x10009:0x00000013>Oh. That's too bad. But it sounds like\nyou at least know where you need to\nsearch next to find her, kwee.\nThat's...something, right?")
          		goto flw_319
          	}
          }

          void entrypoint_200_63() {
/*<247>*/ 	start()
/*<248>*/ 	switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          	  case 0:
/*<249>*/ 		switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          		  case 0:
/*<258>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<259>*/ 				switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          				  case 0:
/*<260>*/ 					switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          					  case 0:
/*<255>*/ 						{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 294, 'param3': 35}
/*<294>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 292, 'param3': 17}
/*<292>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 10, 'next': 293, 'param3': 13}
/*<293>*/ 						wait_frames(28)
/*<257>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 254, 'param3': 16}
/*<254>*/ 						printf(/* textboxtype: 2, unk: 1, line: 147 */ "I am not detecting any additional\ndowsing responses in the area.\n\n\nI suggest you go speak with the Kikwi\nelder.")
/*<256>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 295, 'param3': 36}
          						flw_295:
/*<295>*/ 						wait_frames(21)
/*<402>*/ 						set_camera(26, 0)
/*<401>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 298, 'param3': 17}
/*<298>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 297, 'param3': 17}
/*<297>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 296, 'param3': 13}
/*<296>*/ 						printf(/* textboxtype: 1, unk: 2, line: 52 */ "<0x10009:0x0000000d>I thought you were another monster.\nDon't scare me like that, koo-kwee!")
/*<611>*/ 						scene_flags[1 'Faron Woods'][53 /* 0x7 20 */] = true;
/*<620>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
          						flw_251:
/*<251>*/ 						{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 291, 'param3': 35}
/*<291>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 289, 'param3': 17}
/*<289>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 10, 'next': 290, 'param3': 13}
/*<290>*/ 						wait_frames(28)
/*<253>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 614, 'param3': 16}
/*<614>*/ 						switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          						  case 0:
/*<250>*/ 							printf(/* textboxtype: 2, unk: 1, line: 143 */ "I have marked<sound 4> the location of Lopsa\nthe Kikwi on your map. However,\ndowsing readings indicate there are\nstill Kikwis to search for.")
          							flw_307:
/*<307>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 252, 'param3': 17}
/*<252>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 295, 'param3': 36}
          							goto flw_295
          						  case 1:
/*<615>*/ 							printf(/* textboxtype: 2, unk: 1, line: 144 */ "I have marked<sound 4> the location of Lopsa\nthe Kikwi on your map. Unfortunately,\nZelda is not with him.")
          							goto flw_307
          						}
          					}
          				  case 1:
          					goto flw_251
          				}
          			  case 1:
          				goto flw_251
          			}
          		  case 1:
          			goto flw_251
          		}
          	  case 1:
          		goto flw_251
          	}
          }

          void entrypoint_200_64() {
/*<261>*/ 	start()
/*<262>*/ 	switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          	  case 0:
/*<263>*/ 		switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          		  case 0:
/*<269>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<270>*/ 				switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          				  case 0:
/*<271>*/ 					switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          					  case 0:
/*<267>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 268, 'param3': 51}
/*<268>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 404, 'param3': 16}
/*<404>*/ 						printf(/* textboxtype: 2, unk: 1, line: 147 */ "I am not detecting any additional\ndowsing responses in the area.\n\n\nI suggest you go speak with the Kikwi\nelder.")
          						flw_265:
/*<265>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 233, 'param3': 36}
/*<233>*/ 						wait_frames(21)
/*<376>*/ 						set_camera(17, 0)
/*<375>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 378, 'param3': 17}
/*<378>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 377, 'param3': 17}
/*<377>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 174, 'param3': 13}
/*<174>*/ 						switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          						  case 0:
/*<175>*/ 							printf(/* textboxtype: 1, unk: 2, line: 59 */ "<0x10009:0x00000005>You met the elder? And he's OK?\nPhew, glad to hear it, kwee!\n\n\n<0x10009:0x00000014>If you see him again, would you\nplease tell him I'm here?")
          							flw_407:
/*<407>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*<173>*/ 							printf(/* textboxtype: 1, unk: 2, line: 60 */ "<0x10009:0x00000004>No one hides like the elder. He's a\ntrue master of camouflage. I don't\nknow if you'll ever find him, koo-weep!")
          							goto flw_407
          						}
          					  case 1:
          						flw_264:
/*<264>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 266, 'param3': 51}
/*<266>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 616, 'param3': 16}
/*<616>*/ 						switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          						  case 0:
/*<403>*/ 							printf(/* textboxtype: 2, unk: 1, line: 145 */ "I have marked<sound 4> the location of Erla\nthe Kikwi on your map. However,\ndowsing readings indicate there are\nstill Kikwis to search for.")
          							goto flw_265
          						  case 1:
/*<617>*/ 							printf(/* textboxtype: 2, unk: 1, line: 146 */ "I have marked<sound 4> the location of Erla\nthe Kikwi on your map. Unfortunately,\nZelda is not with him.")
          							goto flw_265
          						}
          					}
          				  case 1:
          					goto flw_264
          				}
          			  case 1:
          				goto flw_264
          			}
          		  case 1:
          			goto flw_264
          		}
          	  case 1:
          		goto flw_264
          	}
          }

          void entrypoint_200_99() {
/*<448>*/ 	start()
/*<449>*/ 	printf(/* textboxtype: 7, unk: 0, line: 189 */ "He who descended from above:\nlook to the star that the bird\nrising heavenward gazes upon,\nand aim your shot there.")
          }

          void entrypoint_200_65() {
/*<634>*/ 	start()
/*<635>*/ 	printf(/* textboxtype: 2, unk: 1, line: 158 */ "I have confirmed the plant life of this\narea matches that of Faron Woods.\nWe have reached the area locally\nreferred to as the Deep Woods.\nNow we should continue toward the \ntemple in search of Zelda.")
/*<646>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<647>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_200_50() {
/*<272>*/ 	start()
/*<323>*/ 	printf(/* textboxtype: 2, unk: 1, line: 150 */ "<0x10012:0x00000004>Master <heroname>, I have\ndetected <color blue<Zelda>coloroff>'s aura emanating\nfrom within this structure.")
/*<324>*/ 	set_camera(13, 0)
/*<279>*/ 	set_camera(-1, 0)
/*<273>*/ 	printf(/* textboxtype: 2, unk: 1, line: 151 */ "However, I have also detected the\npresence of numerous monsters.\nAre you sure you want to proceed?\n[1-]Of course![2]No.")
/*<274>*/ 	switch (choice(2)) {
          	  case 0:
/*<276>*/ 		printf(/* textboxtype: 2, unk: 1, line: 152 */ "It would be very unwise to display\noverconfidence here. Within the walls\nof this place, no one will come to\nyour aid.")
          		flw_280:
/*<280>*/ 		set_camera(14, 0)
/*<281>*/ 		printf(/* textboxtype: 2, unk: 1, line: 154 */ "If you feel unprepared to face the\ndangers ahead, consider <color green<returning to\nthe sky>coloroff> to properly equip yourself.")
/*<642>*/ 		set_camera(-1, 0)
/*<638>*/ 		switch (adventure_pouch_has(0 0x0000)) {
          		  case 0:
/*<640>*/ 			printf(/* textboxtype: 2, unk: 1, line: 156 */ "It would be wise to carry a <color red<shield >coloroff>to\nprotect yourself, as well as a stock of\n<color red<potions >coloroff>to restore lost hearts.")
          			flw_641:
/*<641>*/ 			printf(/* textboxtype: 2, unk: 1, line: 157 */ "Now we should continue the search for\nZelda.")
          		  case 1:
/*<639>*/ 			printf(/* textboxtype: 2, unk: 1, line: 155 */ "<0x10012:0x00000001>Master, it appears you do not currently\nhave a <color red<shield>coloroff> equipped. To reduce the\nprobability of extreme bodily harm,\nI recommend carrying one at all times.")
          			goto flw_641
          		}
          	  case 1:
/*<275>*/ 		printf(/* textboxtype: 2, unk: 1, line: 153 */ "Do not feel embarrassed. Fear is a\nnatural self-preservation instinct\ncommon among living creatures.")
          		goto flw_280
          	}
          }

          void entrypoint_200_51() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 2, unk: 1, line: 112 */ "<0x10012:0x0000000b>Master, I picked up a highly interesting\nspike in <color red<dowsing readings>coloroff> from the\ncreature you just encountered.\n[1-]Really?[2-]Zelda?")
/*< 15>*/ 	switch (choice(2)) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 2, unk: 1, line: 113 */ "<0x10012:0x00000005>Yes, Master. Based on the creature's\ncharacteristics, I must conclude that it\nis a peaceful, forest-dwelling animal\nknown as a <color blue<Kikwi>coloroff>.\nKikwis are intelligent beings capable of\nspeech<pause 15>. However, such a creature could\nobviously not be confused with Zelda.\n\nIt is unclear why such a creature would\nelicit a dowsing response attuned to\nZelda. You should follow the creature\nand investigate this phenomenon.")
          		flw_134:
/*<134>*/ 		set_camera(10, 0)
/*<136>*/ 		wait_frames(30)
          	  case 1:
/*< 17>*/ 		printf(/* textboxtype: 2, unk: 1, line: 114 */ "The probability of this life-form being\nZelda is 5%, so I must conclude that \nthis is, in fact, not Zelda but a peaceful\nforest creature known as a Kikwi.\nKikwis are highly intelligent beings, \ncapable of speech.<pause 15> Yes, upon further\nobservation...clearly not Zelda.\n\nIt is unclear why such a creature would\nelicit a dowsing response attuned to\nZelda. You should follow the creature\nand investigate this phenomenon.")
          		goto flw_134
          	}
          }

          void entrypoint_200_69() {
/*<656>*/ 	start()
/*<657>*/ 	printf(/* textboxtype: 2, unk: 1, line: 159 */ "<0x10012:0x00000004>Master <heroname>, should\nyou have questions about anything,\nI encourage you to call me with (v).<0x10011:0x09cd>\n\nOnce I'm summoned, select <color red<Advice>coloroff> or\n<color red<Hints >coloroff>and I will promptly offer you\ninformation pertinent to your current\ncircumstance.")
/*<663>*/ 	scene_flags[1 'Faron Woods'][69 /* 0x9 20 */] = true;
          }

