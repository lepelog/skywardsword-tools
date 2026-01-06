          void entrypoint_122_01() {
/*<  2>*/ 	start()
/*<133>*/ 	switch (story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */]) {
          	  case 0:
/*<134>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "With the fortune-teller back on the\njob, this place feels alive again. \nIt's just not the same without him.")
          	  case 1:
/*<125>*/ 		switch (story_flags[370 /* us: 805A9B02 0x01, jp: 805ACD82 0x01 */]) {
          		  case 0:
/*<126>*/ 			switch (story_flags[834 /* us: 805A9B32 0x04, jp: 805ACDB2 0x04 */]) {
          			  case 0:
/*<135>*/ 				switch (story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */]) {
          				  case 0:
/*<136>*/ 					printf(/* textboxtype: 0, unk: 1, line: 7 */ "So the fortune-teller's at home with\na case of the blues, eh?\n\n\nI wonder if he'd come back if we found\nhim a new crystal ball...")
          				  case 1:
/*<128>*/ 					printf(/* textboxtype: 0, unk: 1, line: 4 */ "His place is over on the <color red<eastern\nedge of town>coloroff>...\n\n\nIt's a bit too quiet around here without\nhim. Why don't you go check on him?\nMake sure he's doing all right.")
          				}
          			  case 1:
/*<130>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 127, 'param3': 31}
/*<127>*/ 				printf(/* textboxtype: 1, unk: 0, line: 3 */ "I haven't seen the <color blue<fortune-teller >coloroff>much\nthese days...\n\n\nYou knew his crystal ball got broken,\nright? I just hope he's not sitting at\nhome kicking himself for not\nforeseeing this.")
/*<132>*/ 				switch (story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */]) {
          				  case 0:
/*<193>*/ 					printf(/* textboxtype: 0, unk: 0, line: 8 */ "What?")
/*<194>*/ 					printf(/* textboxtype: 0, unk: 1, line: 7 */ "So the fortune-teller's at home with\na case of the blues, eh?\n\n\nI wonder if he'd come back if we found\nhim a new crystal ball...")
          					flw_129:
/*<129>*/ 					story_flags[834 /* us: 805A9B32 0x04, jp: 805ACDB2 0x04 */] = true;
          				  case 1:
/*<131>*/ 					printf(/* textboxtype: 0, unk: 0, line: 5 */ "Would you mind running over and\nchecking in on him?\n\n\nHis house is on the<color red< eastern edge >coloroff>of\nSkyloft.")
          					goto flw_129
          				}
          			}
          		  case 1:
/*<139>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<140>*/ 				printf(/* textboxtype: 0, unk: 0, line: 2 */ "Have you explored Skyloft at night?\nIt's a different place under the cover\nof darkness.\n\nFor example, if you go to the Gear \nShop owner's house at night, he'll buy \nyour treasures.\n\nNow it's true there are dangers to be\nfound at night, but a student at the\nKnight Academy should have no\ntrouble with that.\nAll you have to do is <color green<nap in a bed >coloroff>until\nnightfall.<pause 25> That's it!")
          			  case 1:
/*<  3>*/ 				printf(/* textboxtype: 0, unk: 1, line: 1 */ "Only one thing to do when you're tired:\nget some sleep. <pause 25><color green<You can sleep anywhere\nthere's a bed>coloroff>, you know?\n\nSkyloft is a different place after the\nsun goes down. It's no lie.\n\n\n<color green<Find a bed and take a nap>coloroff> to sleep until\nnightfall. There's all kinds of curious\nthings to enjoy at night...")
          			}
          		}
          	}
          }

          void entrypoint_122_19() {
/*< 56>*/ 	start()
/*<111>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 34, 'next': 112, 'param3': 32}
/*<112>*/ 	{'type': 'type3', 'subType': 1, 'param1': 34, 'param2': -1, 'next': 57, 'param3': 50}
/*< 57>*/ 	printf(/* textboxtype: 1, unk: 0, line: 60 */ "Mirror, mirror, on the wall...\nWho's the loveliest of them all?")
/*<114>*/ 	set_camera(7, 0)
/*<113>*/ 	printf(/* textboxtype: 0, unk: 1, line: 61 */ "<0x10009:0x22000002>That IS what you were thinking,\nright, <heroname>?")
          }

          void entrypoint_122_02() {
/*<  4>*/ 	start()
/*<161>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<162>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<168>*/ 			switch (story_flags[550 /* us: 805A9B17 0x80, jp: 805ACD97 0x80 */]) {
          			  case 0:
/*<169>*/ 				printf(/* textboxtype: 0, unk: 0, line: 11 */ "I've been hearing a weird rumor.\nApparently, after <color red<nightfall>coloroff>, people\nhave been hearing a woman sobbing\nin the<color red< dormitory>coloroff>.\nI tell you, it gives even a big guy like\nme the creeps.")
/*<170>*/ 				printf(/* textboxtype: 0, unk: 1, line: 13 */ "Huh? A hand? Reaching out of the\nstall?\n\n\nThat...<pause 20>that's one way of going about\nit, I guess.")
          			  case 1:
/*<165>*/ 				switch (story_flags[546 /* us: 805A9B17 0x08, jp: 805ACD97 0x08 */]) {
          				  case 0:
/*<166>*/ 					printf(/* textboxtype: 0, unk: 0, line: 11 */ "I've been hearing a weird rumor.\nApparently, after <color red<nightfall>coloroff>, people\nhave been hearing a woman sobbing\nin the<color red< dormitory>coloroff>.\nI tell you, it gives even a big guy like\nme the creeps.")
/*<167>*/ 					printf(/* textboxtype: 1, unk: 0, line: 12 */ "What? <pause 20>Calling out for toilet paper\nwhile you're stuck in the restroom?\n\n\nYikes, that's rough. I should know—\nI've been there before.")
          				  case 1:
/*<163>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 164, 'param3': 31}
/*<164>*/ 					printf(/* textboxtype: 0, unk: 0, line: 11 */ "I've been hearing a weird rumor.\nApparently, after <color red<nightfall>coloroff>, people\nhave been hearing a woman sobbing\nin the<color red< dormitory>coloroff>.\nI tell you, it gives even a big guy like\nme the creeps.")
          				}
          			}
          		  case 1:
          			flw_137:
/*<137>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<138>*/ 				printf(/* textboxtype: 0, unk: 1, line: 10 */ "Hi there! I hope you're pressing <icon 19>\nwhenever you need help.<0x10011:0x0bcd>")
          			  case 1:
/*<  5>*/ 				printf(/* textboxtype: 1, unk: 0, line: 9 */ "So you're on your way to becoming\na knight now, right? Congratulations!\n\n\nBut I'm sure there's still plenty you\ndon't know. Don't forget to press <icon 19>\nif you need a pointer or two.<0x10011:0x0bcd>")
          			}
          		}
          	  case 1:
          		goto flw_137
          	}
          }

          void entrypoint_122_03() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00000001>Hey, <heroname>! Today's the big\nday, isn't it? You know, the Wing\nCeremony thing!\n\nWin this thing, and you'll get bumped\nup to the senior class.")
/*<  8>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "Here in Skyloft, it's being able to ride a\nLoftwing that separates the kids from\nthe adults.\n\n<0x10009:0x000a0404>And if your goal is to become a knight,\nwell, good technique is even more\nimportant. All of us learned to fly the\nhard way: lots of practice.")
          }

          void entrypoint_122_20() {
/*< 58>*/ 	start()
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': -1, 'param3': 24}
          }

          void entrypoint_122_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000002>Ever heard of banging your knuckles\nagainst the door? It's called knocking.\nBarging into someone's house is what\nmost people call...rude.\nAnyway, you're lucky I'm home.\nI'm usually over at the bazaar working\nat my stall, but we're closed for the \nWing Ceremony.\n<0x10009:0x00000015>Most days at work all I can think about\nis how bored I am, but now that I'm\nnot at work, I'm...even more bored!\nMy life is pretty sad...")
          }

          void entrypoint_122_21() {
/*< 63>*/ 	start()
/*< 68>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 18, 'next': 69, 'param3': 32}
/*< 69>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 116, 'param3': 32}
/*<116>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 117, 'param3': 17}
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 74, 'param3': 17}
/*< 74>*/ 	set_camera(2, 0)
/*< 70>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 64, 'param3': 50}
/*< 64>*/ 	printf(/* textboxtype: 0, unk: 0, line: 62 */ "<0x10009:0x12110016>Th-<pause 15>thanks for your help!")
/*< 71>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 65, 'param3': 50}
/*< 65>*/ 	printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x14080913>Don't you mention it!\n\n\n\nI guess I should hustle over and say\nhello to your mother too.\n\n\nI'm sure she's just like you, Pipit—\ntrustworthy and dependable.")
/*< 72>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 66, 'param3': 50}
/*< 66>*/ 	printf(/* textboxtype: 0, unk: 1, line: 64 */ "<0x10009:0x12090c18>Whoa! Uhhhh, that's moving a bit too\nfast, don't you think?")
/*< 73>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 67, 'param3': 50}
/*< 67>*/ 	printf(/* textboxtype: 0, unk: 0, line: 65 */ "<0x10009:0x14000005>Of course not! Don't be silly. It's best\nto get these things sorted out right\naway.\n\n<0x10009:0x14080913>I hope you'll invite me to your house\nnext time.")
          }

          void entrypoint_122_05() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00000001>Is that you, <heroname>?\nWhat are you doing up so late?\n\n\n<0x10009:0x00111300>I'm hungry! My mom's still cooking,\nbut it's taking forever. When will it\nbe ready?")
          }

          void entrypoint_122_22() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x000e0812>This is unbelievable... The goddess\nstatue is gone!\n\n\n<0x10009:0x000f0d00>Would somebody please explain just\nwhat's going on here in Skyloft?")
/*< 77>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
          	  case 1:
/*< 78>*/ 		printf(/* textboxtype: 0, unk: 1, line: 67 */ "And my little girl, Kukiel, still hasn't\ncome home. I'm starting to get\nworried.\n\n<0x10009:0x00000800>Would you please go and look for\nher, <heroname>?")
          	}
          }

          void entrypoint_122_06() {
/*< 13>*/ 	start()
/*< 83>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 84>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00000001>Heyyy, kid! I hope you're putting ol'\nScrapper to good use.\n\n\nHe's got a bit of a mouth on him, but\nhe's a robot with a good heart. Well,\nif robots had hearts...\n\nJust remember to treat him kindly,\nand everything will work out fine!")
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000003>Heyyy! Up to some late-night mischief,\neh? Better watch yourself, or a Remlit\nwill take a bite out of your backside!\n\nMost of us don't go out after dark\nwithout a really good reason, y'know?")
          	}
          }

          void entrypoint_122_23() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf(/* textboxtype: 0, unk: 0, line: 68 */ "It may look like my master only tinkers\nwith machines as a hobby, bzzt, but\nthat's not the whole story...vrrrrm...\n\nHe's building an automatic washing\nmachine for his mother, bzzt-CLANG!\n\n\nIsn't that great, vrrrrm?\n\n\n\nHe's not at all like a certain someone\nI know who drags Mistress Fi around\nthe world without a care for her\nsafety or happiness, bzzat!")
          }

          void entrypoint_122_07() {
/*< 14>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00000056>Good grief! Will you talk to that boy\nof mine for me?")
          	flw_85:
/*< 85>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 86>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "I thought he would settle down a bit\nand maybe even wash his hands now\nthat he's got that robot up and running,\nbut he's still tinkering away!\nI'm telling you, that boy will never get\nthe grease out from beneath his\nfingernails. Ah...")
          	  case 1:
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "He's up at unspeakable hours trying to\nrepair that rusty pile of an old robot he\ninherited!\n\nWhat he intends to do with that\nscrap-heap reject is beyond me!")
          	}
          }

          void entrypoint_122_24() {
/*< 87>*/ 	start()
/*< 88>*/ 	set_camera(3, 0)
/*< 89>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_122_08() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00000056>All that lug does is make one filthy\nmess after another. I swear he leaves\na grease spot wherever he sits!\n\nI know he likes tinkering around with\nhis oily doodads, but I'm drowning in\ndirty laundry here!\n\n[1-]That lug? [2-]Sounds tough.")
/*< 19>*/ 	switch (choice(2)) {
          	  case 0:
/*< 20>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "That's right! My greasy-fingered son\nwho runs the Scrap Shop in the bazaar!")
          		goto flw_85
          	  case 1:
/*< 21>*/ 		printf(/* textboxtype: 0, unk: 0, line: 23 */ "It IS tough! That greasy lug nut is\nfraying my wires!")
          		goto flw_85
          	}
          }

          void entrypoint_122_25() {
/*< 90>*/ 	start()
/*< 92>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*< 95>*/ 		switch (scene_flags[45 /* 0x4 20 */]) {
          		  case 0:
/*< 94>*/ 			printf(/* textboxtype: 0, unk: 0, line: 71 */ "<0x10009:0x00001101>Hey! Shouldn't you rush off and look\nfor your bird? I think you should.")
          		  case 1:
/*< 93>*/ 			printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10009:0x00001104>I wonder what they're talking about\nover there. It looks pretty serious.")
          		}
          	  case 1:
/*< 91>*/ 		printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00000005>Man, it feels good to just sit here and\nrelax.\n\n\nI like to kick back here and spend time\nthinking about that girl.\n\n\n<0x10009:0x000a0c00>Yep, <color blue<Kina >coloroff>is the best thing about the\nold pumpkin bar. She's adorable!")
          	}
          }

          void entrypoint_122_09() {
/*< 23>*/ 	start()
/*< 79>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*< 80>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000001>Hi, <heroname>. Have you seen\nKukiel anywhere?\n\n\nI swear that child can disappear in the\nblink of an eye! She's quite a magician.")
          	  case 1:
/*< 24>*/ 		printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x0000000a>Pardon me, <heroname>.\nYou haven't seen Kukiel, have you?\n\n\nShe's always running off without a\nword to anyone. I don't know what I'm\ngoing to do with her.\n\nI guess she'll never learn unless she\nruns into trouble one day.")
          	}
          }

          void entrypoint_122_26() {
/*< 96>*/ 	start()
/*< 97>*/ 	set_camera(4, 0)
/*< 98>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_122_27() {
/*<101>*/ 	start()
/*<195>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<197>*/ 		switch (story_flags[1116 /* us: 805A9B57 0x04, jp: 805ACDD7 0x04 */]) {
          		  case 0:
/*<198>*/ 			entrypoint_118_12();
          		  case 1:
          			flw_102:
/*<102>*/ 			printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00000004>Hey, mister! Did you know the goddess\nis gone?\n\n\n<0x10009:0x00000011>Do you think she got mad and left\n'cause I never listen to my mom\nand dad?")
/*<196>*/ 			story_flags[1116 /* us: 805A9B57 0x04, jp: 805ACDD7 0x04 */] = true;
          		}
          	  case 1:
          		goto flw_102
          	}
          }

          void entrypoint_122_10() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00000001>Hi, <heroname>! This house\nbelongs to Kukiel. Pssst—by the way,\nthat's ME.\n\nI'm gonna go play with my special\nfriend today! It's going to be so much\nfun!")
          }

          void entrypoint_122_28() {
/*<103>*/ 	start()
/*<104>*/ 	printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x0009030a>HEY!\n\n\n\n<0x10009:0x00ffff04>Oh... <pause 20>I guess it's OK as long as you're\ngoing to just sit.\n\n\n<0x10009:0x00ff03ff>But listen up! THAT is an expensive\nchair, and if you get it dirty... Well, I\ncan't be held responsible for what\nhappens.")
          }

          void entrypoint_122_11() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00000011>Zzz...let's play...zzz...\nUncle Bats!")
          }

          void entrypoint_122_29() {
/*<105>*/ 	start()
/*<109>*/ 	set_camera(5, 0)
/*<106>*/ 	printf(/* textboxtype: 0, unk: 0, line: 74 */ "You're too late for breakfast.\nWe stopped serving hours ago.\nYou'll have to wait for lunch!")
          }

          void entrypoint_122_12() {
/*< 29>*/ 	start()
/*<189>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<190>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00000001>Hey, <heroname>! Have you\ntaken a look here recently?\n\n\nThere's not a Keese to be seen.\nNo other angry monsters either...\n\n\nBeen a while since I could take a quiet\nwalk out in the dark...")
          	  case 1:
/*< 43>*/ 		switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          		  case 0:
          			flw_42:
/*< 42>*/ 			printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00000001>I heard you're the one responsible\nfor finding Kukiel!\n\n\n<0x10009:0x00000009>Thank you so much! Just look at her...\nShe puts her parents through all\nthat worry and heartache, and now\nshe's out like a light.")
          		  case 1:
/*< 99>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<115>*/ 				switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          				  case 0:
          					goto flw_42
          				  case 1:
/*<100>*/ 					printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x0000000e>What? Are you serious? You found\nKukiel?\n\n\nWhat did I tell you? Nobody here in\nSkyloft would harm a hair on her head!")
          				}
          			  case 1:
/*< 40>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*< 41>*/ 					printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00000004>I wonder where that little mischief\nmaker Kukiel's gone off to now.\n\n\nHer mom thinks she was kidnapped,\nbut I'm not so sure.\n\n\n<0x10009:0x000e0d00>I mean, there's nobody here in Skyloft\nwho would do such a thing, right?\n\n\n<0x10009:0x00000d0f>I bet she'll show up sooner or later.\n\n\n\nAnyway, keep your eyes peeled, and let\nus know right away if you see her.")
          				  case 1:
/*< 30>*/ 					printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000001><0x30001:0x><heroname>, just look at Kukiel\nsleeping. She sure is a cutie.\n\n\nShe makes all the hard work I do\nmeaningful and gives me reason to\nkeep on doing it.\n\nNo idea who or what “Uncle Bats\" is.\nSilly girl.")
          				}
          			}
          		}
          	}
          }

          void entrypoint_122_13() {
/*< 31>*/ 	start()
/*< 61>*/ 	switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          	  case 0:
/*<188>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 60, 'param3': 31}
/*< 60>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00000012>I still can't find Kukiel!\n\n\n\nWould you please help me find her?\nJust...hurry!")
          	  case 1:
/*< 32>*/ 		printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x00000001>Oh, good evening. It's awfully late,\nbut is there something I can do for\nyou?")
          	}
          }

          void entrypoint_122_30() {
/*<107>*/ 	start()
/*<110>*/ 	set_camera(6, 0)
/*<108>*/ 	printf(/* textboxtype: 0, unk: 0, line: 74 */ "You're too late for breakfast.\nWe stopped serving hours ago.\nYou'll have to wait for lunch!")
          }

          void entrypoint_122_14() {
/*< 33>*/ 	start()
/*<122>*/ 	switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          	  case 0:
/*<121>*/ 		printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x00000002>Hey, <heroname>! Kukiel's come\nhome!\n\n\nI heard you were the one who found\nmy girl!\n\n\n<0x10009:0x00100d09>Thanks a lot! The missus is grinning\nfrom ear to ear.")
          	  case 1:
/*<118>*/ 		switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          		  case 0:
/*<119>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x000f0d12>Oh, it's you, <heroname>.\nLooks like Kukiel's run off again.\n\n\n<0x10009:0x00ffff00>My wife's in hysterics. She's telling\nfolks our girl's been kidnapped.\n\n\n<0x10009:0x00100d03>But it's Kukiel we're talking about\nhere!<pause 10> You can bet she's just off playing\nsomewhere.")
/*<120>*/ 			printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x000f0d00>Let me know if you see her, OK?")
          		  case 1:
/*<171>*/ 			switch (zone_temp_flags[14 /* 0x0 40 */]) {
          			  case 0:
/*<172>*/ 				printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00000002>Hi, <heroname>!\n\n\n\nThis is the<color red< Light Tower>coloroff>! You should try\nclimbing to the top. It is sooooo cool\nup there!")
          			  case 1:
/*< 34>*/ 				printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00000002>Hey there, <heroname>.\n\n\n\nYou know what's funny? Folks here call\nthis the <color red<Light Tower>coloroff>. It's supposedly\nhere to help people find Skyloft and\nprevent them from crashing into us.\n<0x10009:0x000f0d00>But I've never seen any light coming\nout of it. I wonder who built it.\nAnd why...\n\n<0x10009:0x00100d00>You should climb all the way to the top,\nanyway. There's one amazing view of\nthe goddess from up there.")
/*< 35>*/ 				printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x000f0d05>Me?\n\n\n\n<0x10009:0x00000800>No, thank you, I'm good right down\nhere. Me and heights, we don't get\nalong.")
          			}
          		}
          	}
          }

          void entrypoint_122_31() {
/*<123>*/ 	start()
/*<124>*/ 	printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10012:0x00000064>Zrrrt! This is the entrance to the\nvolcano! <pause 30>I better get there before\nMaster Shortpants!")
          }

          void entrypoint_122_15() {
/*< 36>*/ 	start()
/*< 44>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 37, 'next': 45, 'param3': 32}
/*< 45>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 38, 'next': 46, 'param3': 32}
/*< 46>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 39, 'next': 62, 'param3': 32}
/*< 62>*/ 	set_camera(1, 0)
/*<179>*/ 	switch (story_flags[33 /* us: 805A9ADD 0x02, jp: 805ACD5D 0x02 */]) {
          	  case 0:
/*<176>*/ 		{'type': 'type3', 'subType': 1, 'param1': 37, 'param2': -1, 'next': 173, 'param3': 16}
/*<173>*/ 		printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x25070707>Did you hear the news? One of the\nstudents in the Wing Ceremony has\nlost his bird. It's gone missing!")
/*<177>*/ 		{'type': 'type3', 'subType': 1, 'param1': 38, 'param2': -1, 'next': 174, 'param3': 16}
/*<174>*/ 		printf(/* textboxtype: 0, unk: 0, line: 47 */ "<0x10009:0x26070701>Oh, really? That's terrible!")
/*<178>*/ 		{'type': 'type3', 'subType': 1, 'param1': 39, 'param2': -1, 'next': 175, 'param3': 16}
/*<175>*/ 		printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x27070702>To tell the truth, I'm not comfortable\naround birds. It's their talons—they\nlook so sharp and painful!")
          	  case 1:
/*< 47>*/ 		{'type': 'type3', 'subType': 1, 'param1': 37, 'param2': -1, 'next': 37, 'param3': 16}
/*< 37>*/ 		printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x25070707>Such a beautiful day, but we're too busy\nto enjoy it. Some things never change.")
/*< 48>*/ 		{'type': 'type3', 'subType': 1, 'param1': 38, 'param2': -1, 'next': 38, 'param3': 16}
/*< 38>*/ 		printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x26070701>Isn't that the truth! The only thing my\nlug nut of a son is good for is getting\ngrease on his shirt! All I do is laundry,\nlaundry, laundry. It never ends!")
/*< 49>*/ 		{'type': 'type3', 'subType': 1, 'param1': 39, 'param2': -1, 'next': 39, 'param3': 16}
/*< 39>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x27070702>I hear you! And I'm terrible at washing\nclothes. I wish I could get someone to\ndo it for me.")
          	}
          }

          void entrypoint_122_32() {
/*<180>*/ 	start()
/*<182>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 186, 'param3': 32}
/*<186>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 7, 'next': 187, 'param3': 17}
/*<187>*/ 	wait_frames(20)
/*<183>*/ 	{'type': 'type3', 'subType': 1, 'param1': 7, 'param2': 99, 'next': 185, 'param3': 16}
/*<185>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1802, 'param2': 3072, 'next': 184, 'param3': 13}
/*<184>*/ 	set_camera(9, 0)
/*<181>*/ 	printf(/* textboxtype: 0, unk: 1, line: 76 */ "<0x10009:0x070a0c12>Uh... <0x10008:0xfecd>I wonder where she's gone...")
          }

          void entrypoint_122_16() {
/*< 50>*/ 	start()
/*<152>*/ 	switch (temp_flags[52 /* 0x7 10 */]) {
          	  case 0:
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0, line: 54 */ "Stop by and chat with me once in a\nwhile, you hear? I may be old, but I'm\nnot boring.")
          	  case 1:
/*<141>*/ 		printf(/* textboxtype: 0, unk: 0, line: 50 */ "Heh heh heh. Seems like you're on the\nroad to success, little friend. How 'bout\nI buy us a beverage?\n[1-]Thanks! [2]Nah.")
/*<142>*/ 		switch (choice(2)) {
          		  case 0:
/*<144>*/ 			printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x00010700>There's a good lad. Cheers!")
/*<148>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 30, 'next': 147, 'param3': 47}
/*<147>*/ 			set_camera(8, 0)
/*<160>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 115, 'next': 150, 'param3': 24}
/*<150>*/ 			wait_frames(60)
/*<149>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 30, 'next': 159, 'param3': 48}
/*<159>*/ 			make_actor_do_something(0, 0)
/*<145>*/ 			printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x00070700>That's the stuff! There we go!")
/*<146>*/ 			set_camera(-1, 0)
/*<154>*/ 			switch (random(4)) {
          			  case 0:
/*<155>*/ 				printf(/* textboxtype: 0, unk: 1, line: 55 */ "Let me tell you something that may\ncome in handy.\n\n\nWhen you're out on the skies, you might\nsee<color red< ring-shaped rocks >coloroff>now and again.\n\n\n<0x10009:0x00010700>I've heard there's some kind of \nunknown energy that builds up in the \ncenter of those big rocks.\n\nSo get this: if you fly your Loftwing\nthrough a hole, you'll come blasting\nout like you were shot out of a cannon.\n\n<0x10009:0x00070700>I hear all the hotshot knights use this\ntrick to cover huge distances in a\nhurry.")
          				flw_151:
/*<151>*/ 				temp_flags[52 /* 0x7 10 */] = true;
          			  case 1:
/*<156>*/ 				printf(/* textboxtype: 0, unk: 0, line: 56 */ "Let me share a bit of wisdom with you.\n\n\n\n<0x10009:0x00010700>The sky is filled with floating islands\nof all shapes and sizes. Skyloft just\nhappens to be the one we call home.\n\nAnd no one knows when they were\ncreated or just how it is they stay\nairborne.\n\n<0x10009:0x00070700>The only thing I can tell you with any\ncertainty is that we owe all of it—and\nthat includes our life here—to the\ngenerosity of the goddess.")
          				goto flw_151
          			  case 2:
          				flw_53:
/*< 53>*/ 				printf(/* textboxtype: 0, unk: 1, line: 49 */ "Let me give you some information you\nmight find useful somewhere down\nthe line.\n\nThe Knight Academy you and your\nfriends attend produces some\nfirst-class Loftwing riders.\n\nKeep your nose to the grindstone,\nand you might find yourself soaring\nthrough the skies and protecting the\ngood folk of Skyloft too.\nDon't know if you've met 'em or not,\nbut the rescue knights save anyone\nclumsy enough to fall off of Skyloft.\n\n<0x10009:0x00010700>Only the Knight Academy's seniors are\ninvited to join that group. They're the\nbest of the best!\n\nYou might just have what it takes to\njoin them, but don't think it'll be easy.\nNo slacking, you hear!\n\n<0x10009:0x00070700>Guess I should tell you my grandson's\none of 'em! Heh <pause 5>heh <pause 5>heh.")
          				goto flw_151
          			  case 3:
/*<158>*/ 				switch (scene_flags[85 /* 0xB 20 */]) {
          				  case 0:
/*<157>*/ 					printf(/* textboxtype: 1, unk: 0, line: 57 */ "Listen—here's a little information you\nmay find useful.\n\n\nAre you using those <color yellow<Stamina Potions\n>coloroff>they're selling over at the bazaar?\n\n\n<0x10009:0x00010700>It's great stuff! Drink some of that,\nand your stamina gauge doesn't empty\nout so darn fast.\n\nAnd it's not just for running, either!\n\n\n\n<0x10009:0x00070700>You can do spin attacks without getting\ntired so easily! I suggest you carry one\naround in case you tangle with\nsomething big and nasty.")
          					goto flw_151
          				  case 1:
          					goto flw_53
          				}
          			}
          		  case 1:
/*<143>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "Hmph! No time for an old-timer...\nI see how it is.")
          		}
          	}
          }

          void entrypoint_122_33() {
/*<191>*/ 	start()
/*<192>*/ 	printf(/* textboxtype: 0, unk: 0, line: 77 */ "<0x10009:0x00000001>Hey, <heroname>! Nice night for\na stroll outside, eh? I forgot how nice\nit feels to be out here at night with no\nmonsters to bother you.")
          }

          void entrypoint_122_17() {
/*< 51>*/ 	start()
/*< 52>*/ 	printf(/* textboxtype: 0, unk: 1, line: 58 */ "You looking to get your grub on?\nThe food here is sooooo good!\n\n\nYou gotta be patient, though. It seems\nlike you wait forever for anything\naround here.")
          }

          void entrypoint_122_00() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Next, a dash of pepper...\n\n\n\n<0x10009:0x00000004>Delicious! Another culinary delight\nready to be savored and enjoyed!")
          }

          void entrypoint_122_18() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf(/* textboxtype: 0, unk: 0, line: 59 */ "<0x10009:0x00000004>Hi, <heroname>. Are you tired?\nYou look beat.\n\n\nI know how you feel! I'm always up\nfor a quick nap.\n\n\n<0x10009:0x00010d00>You just make yourself at home.")
          }

