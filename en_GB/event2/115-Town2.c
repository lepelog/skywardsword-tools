          void entrypoint_115_02() {
/*<444>*/ 	start()
/*<443>*/ 	switch (story_flags[297 /* us: 805A9AFD 0x08, jp: 805ACD7D 0x08 */]) {
          	  case 0:
/*<433>*/ 		printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x0000000a>So you want to sell some treasure?")
          		flw_495:
/*<495>*/ 		make_actor_do_something(8, 0)
/*<432>*/ 		printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00120600>Well, today I am buying these\ntreasures:\n\n\n<color yellow<<string arg0>\n>coloroff><color yellow<<string arg1>>coloroff>\n<color yellow<<string arg2>>coloroff>\n<color yellow<<string arg3>>coloroff>\n<0x10009:0x00100600>Just these four! So, what do you want\nto do?\n[1-]I'll sell![2]No deal.")
/*<415>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_414:
/*<414>*/ 			printf(/* textboxtype: 1, unk: 1, line: 9 */ "Which will you sell to me?\n<color yellow<[1-]<string arg0>>coloroff>.<color yellow<[2-]<string arg1>>coloroff>.<color yellow<[3-]<string arg2>>coloroff>.<color yellow<[4-]<string arg3>>coloroff>.")
/*<413>*/ 			switch (choice(4)) {
          			  case 0:
/*<488>*/ 				make_actor_do_something(0, 0)
/*<481>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<489>*/ 					printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00120600>How about <numeric arg0 0> Rupees for each\n<color yellow<<string arg0>>coloroff>?")
          					flw_656:
/*<656>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 412, 'param3': 12}
/*<412>*/ 					printf(/* textboxtype: 1, unk: 1, line: 14 */ "<0x10009:0x00100600>I see that you're carrying <numeric arg4 0> of those.\nHow many will you sell me?\n[1-]1.[2-]5.[3-]All of them![4]No deal.")
/*<411>*/ 					switch (choice(4)) {
          					  case 0:
/*<500>*/ 						make_actor_do_something(4, 0)
          						flw_497:
/*<497>*/ 						switch (context_related2(0)) {
          						  case 0:
/*<409>*/ 							printf(/* textboxtype: 1, unk: 0, line: 15 */ "<color yellow<<0x10009:0x00120900>>coloroff>Ah, the old <color yellow<<string arg0>>coloroff> deal, eh?\nAnd you've got <numeric arg0 0> of 'em?\nI'll give you <numeric arg1 0> Rupees.\n[1-]It's a deal![2]Never mind.")
/*<408>*/ 							switch (choice(2)) {
          							  case 0:
/*<430>*/ 								printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x0010080a>All right. Here's your money.")
/*<496>*/ 								make_actor_do_something(7, 0)
/*<572>*/ 								set_camera(6, 0)
/*<571>*/ 								{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 2048, 'next': 573, 'param3': 13}
/*<573>*/ 								wait_frames(45)
/*<429>*/ 								printf(/* textboxtype: 1, unk: 0, line: 19 */ "Thanks. Come back soon.")
/*<574>*/ 								{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          							  case 1:
          								flw_410:
/*<410>*/ 								printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x000f000c>Oh. Really? OK, well, hopefully you'll\ncome back again sometime.")
          							}
          						  case 1:
/*<431>*/ 							printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x000f0409>You don't even have that many!\nQuit wasting my time.")
          							goto flw_656
          						}
          					  case 1:
/*<499>*/ 						make_actor_do_something(5, 0)
          						goto flw_497
          					  case 2:
/*<498>*/ 						make_actor_do_something(6, 0)
          						goto flw_497
          					  case 3:
          						goto flw_410
          					}
          				  case 1:
          					flw_494:
/*<494>*/ 					printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x000f0409>Listen, pal...I've had enough of the\nfunny business. You don't even have a\nsingle one of those. So do you want to\nsell something else or what?\n[1-]I'll sell![2]No deal.")
/*<480>*/ 					switch (choice(2)) {
          					  case 0:
          						goto flw_414
          					  case 1:
          						goto flw_410
          					}
          				}
          			  case 1:
/*<487>*/ 				make_actor_do_something(1, 0)
/*<482>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<490>*/ 					printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00120600>How about <numeric arg1 0> Rupees for each\n<color yellow<<string arg1>>coloroff>?")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			  case 2:
/*<486>*/ 				make_actor_do_something(2, 0)
/*<483>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<491>*/ 					printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00120600>How about <numeric arg2 0> Rupees for each\n<color yellow<<string arg2>>coloroff>?")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			  case 3:
/*<485>*/ 				make_actor_do_something(3, 0)
/*<484>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<492>*/ 					printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00120600>How about <numeric arg3 0> Rupees for each\n<color yellow<<string arg3>>coloroff>?")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			}
          		  case 1:
          			goto flw_410
          		}
          	  case 1:
/*<493>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 442, 'param3': 31}
/*<442>*/ 		printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x0000000a>Ah, hey... What do you need?\n[1-]Shopping![2-]Um...")
/*<441>*/ 		switch (choice(2)) {
          		  case 0:
/*<440>*/ 			printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x000f0409>You want to do some shopping? Just\ncome back to the shop tomorrow.")
          		  case 1:
/*<439>*/ 			printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00130609>So when you say “um\"...that means\nyou don't have a good reason to be\nhere, huh?")
/*<438>*/ 			printf(/* textboxtype: 1, unk: 0, line: 3 */ "What? You think I'm being gruff?\nYou think I'm totally different during\nthe day?\n\n<0x10009:0x0010060b>Well, I get tired of having to be a\nsmiley shopkeeper all day, all right?\nJust don't think that this is the real\nme.\nAnyway, enough about that... You're\nhere to make some money at my\n<color red rupee<night market>coloroff>, am I right?\n[1-]Night market?[2-]Yep!")
/*<437>*/ 			switch (choice(2)) {
          			  case 0:
/*<436>*/ 				printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00000009>Ah, it's your first time here, isn't it?\nOh well...")
          				flw_434:
/*<434>*/ 				printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00120600>Night is when I do my buying. See,\n<color red<I buy treasure>coloroff>, but that's not to say\nI'll buy just any old thing. I only deal\nin <color red<specific types of treasure>coloroff>.\n<0x10009:0x00100600>Right. Let's get on with it, shall we?")
/*<428>*/ 				story_flags[297 /* us: 805A9AFD 0x08, jp: 805ACD7D 0x08 */] = true;
          				goto flw_495
          			  case 1:
/*<435>*/ 				printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x000f0409>Why didn't you tell me that from the\nbeginning?")
          				goto flw_434
          			}
          		}
          	}
          }

          void entrypoint_115_20() {
/*< 56>*/ 	start()
/*<535>*/ 	switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          	  case 0:
/*<173>*/ 		{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6656, 'next': 57, 'param3': 13}
/*< 57>*/ 		printf(/* textboxtype: 1, unk: 0, line: 194 */ "<0x10009:0x00000054>Ugh... Nngh...nngh...\nH-help...")
/*<528>*/ 		switch (zone_temp_flags[17 /* 0x3 02 */]) {
          		  case 0:
          		  case 1:
/*<724>*/ 			zone_temp_flags[17 /* 0x3 02 */] = true;
/*<529>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<174>*/ 		{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6656, 'next': 536, 'param3': 13}
/*<536>*/ 		printf(/* textboxtype: 1, unk: 0, line: 195 */ "<0x10009:0x00000017>Ugh... Stupid <color blue<Pipit>coloroff>... So much hate\nfor you... For crying out loud...")
          	}
          }

          void entrypoint_115_03() {
/*<426>*/ 	start()
/*<425>*/ 	switch (story_flags[298 /* us: 805A9AFD 0x10, jp: 805ACD7D 0x10 */]) {
          	  case 0:
/*<717>*/ 		switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          		  case 0:
/*<718>*/ 			switch (story_flags[810 /* us: 805A9B31 0x04, jp: 805ACDB1 0x04 */]) {
          			  case 0:
          				flw_479:
/*<479>*/ 				switch (random(2)) {
          				  case 0:
/*<478>*/ 					printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00030001>Oh, it's you, <heroname>.\nI thought you might come by.\nLet's just say a little bug told me...")
          					flw_476:
/*<476>*/ 					make_actor_do_something(8, 0)
/*<475>*/ 					printf(/* textboxtype: 1, unk: 0, line: 34 */ "Let's see... Tonight I feel like buying:\n<color yellow<<string arg0>\n<color yellow<<string arg1><color yellow<\n<color yellow<<string arg2><color yellow<>coloroff>\n[1-]I'll sell![2]No deal.")
/*<474>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_472:
/*<472>*/ 						printf(/* textboxtype: 1, unk: 1, line: 36 */ "Which do you want to sell me?\n<color yellow<[1-]<string arg0>>coloroff>.<color yellow<[2-]<string arg1>>coloroff>.<color yellow<[3-]<string arg2>>coloroff>.")
/*<471>*/ 						switch (choice(3)) {
          						  case 0:
/*<466>*/ 							make_actor_do_something(0, 0)
/*<461>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<467>*/ 								printf(/* textboxtype: 1, unk: 0, line: 37 */ "<color yellow<<string arg0>>coloroff>, eh?\nHow about <numeric arg0 0> Rupees for one?")
          								flw_657:
/*<657>*/ 								{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 458, 'param3': 12}
/*<458>*/ 								printf(/* textboxtype: 1, unk: 1, line: 42 */ "How many have you got there--<numeric arg4 0>?\nAnd how many of those are you looking\nto sell?\n[1-]1.[2-]5.[3-]All of them![4]No deal.")
/*<457>*/ 								switch (choice(4)) {
          								  case 0:
/*<455>*/ 									make_actor_do_something(4, 0)
          									flw_452:
/*<452>*/ 									switch (context_related2(0)) {
          									  case 0:
/*<456>*/ 										printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x00030014><numeric arg0 0> <color yellow<<string arg0>>coloroff>, eh?\nI'll give you <numeric arg1 0> Rupees.\n[1-]OK![2]Never mind.")
/*<449>*/ 										switch (choice(2)) {
          										  case 0:
/*<451>*/ 											printf(/* textboxtype: 1, unk: 0, line: 45 */ "OK, here's your money.")
/*<445>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 448, 'param3': 12}
/*<448>*/ 											make_actor_do_something(7, 0)
/*<450>*/ 											printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x0003ff04>Thanks, mantis face!\n\n\n\nI mean that in a good way! I love\nmantises. Well, I'm looking forward\nto seeing more of your bugs,\n<heroname>.")
          										  case 1:
          											flw_473:
/*<473>*/ 											printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x0001ff13>Well, that's too bad...\n<0x10009:0x00000500>I guess I'll “bee\" seeing you...")
          										}
          									  case 1:
/*<459>*/ 										printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x00120100>You don't have that many... So I'll ask\nyou again...")
          										goto flw_657
          									}
          								  case 1:
/*<454>*/ 									make_actor_do_something(5, 0)
          									goto flw_452
          								  case 2:
/*<453>*/ 									make_actor_do_something(6, 0)
          									goto flw_452
          								  case 3:
          									goto flw_473
          								}
          							  case 1:
          								flw_470:
/*<470>*/ 								printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x0010ff0c>You don't have even one of those!\nYou look like you wouldn't harm a fly,\nbut you're still trying to rip me off?\n\n<0x10009:0x0001ff00>Or do you just want to sell me a\ndifferent bug?\n[1-]Yep![2]No deal.")
/*<460>*/ 								switch (choice(2)) {
          								  case 0:
          									goto flw_472
          								  case 1:
          									goto flw_473
          								}
          							}
          						  case 1:
/*<465>*/ 							make_actor_do_something(1, 0)
/*<462>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<468>*/ 								printf(/* textboxtype: 1, unk: 0, line: 38 */ "<color yellow<<string arg1>>coloroff>, hmm?\nHow about <numeric arg1 0> Rupees for 1?")
          								goto flw_657
          							  case 1:
          								goto flw_470
          							}
          						  case 2:
/*<464>*/ 							make_actor_do_something(2, 0)
/*<463>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<469>*/ 								printf(/* textboxtype: 1, unk: 0, line: 39 */ "<color yellow<<string arg2>>coloroff>, hmm?\nHow about <numeric arg2 0> Rupees for 1?")
          								goto flw_657
          							  case 1:
          								goto flw_470
          							}
          						}
          					  case 1:
          						goto flw_473
          					}
          				  case 1:
/*<477>*/ 					printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00030001>Hey, <heroname>. Something's\nbugging me today. I mean that in a\ngood way...")
          					goto flw_476
          				}
          			  case 1:
/*<721>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 719, 'param3': 31}
/*<719>*/ 				printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00030001><0x30001:0x><heroname>... Want to hear\nsomething neat? OK, so...earlier in\nthe night, I went back into those\ncaves behind the waterfall.\nI saw some <color red<Blessed Butterflies >coloroff>in this\nempty area. I wonder why they were\nswarming around that spot...\nWeird, right? \nIf you want to see them for yourself,\nyou should go into the caves at night.")
/*<722>*/ 				printf(/* textboxtype: 1, unk: 0, line: 33 */ "Oh, right. Let's see what kind of bugs\nyou've got for me today.")
/*<720>*/ 				story_flags[810 /* us: 805A9B31 0x04, jp: 805ACDB1 0x04 */] = true;
          				goto flw_476
          			}
          		  case 1:
          			goto flw_479
          		}
          	  case 1:
/*<446>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 666, 'param3': 31}
/*<666>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 427, 'param3': 13}
/*<427>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x0000ff01>Oh. It's you... <0x30001:0x><heroname>.\nWhat do you want with me?")
/*<578>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 416, 'param3': 13}
/*<416>*/ 		printf(/* textboxtype: 1, unk: 0, line: 22 */ "<color red<<0x10009:0x00000300>>coloroff>Huh? What am I doing?\n\n\n\n<color red<<0x10009:0x00ff0114>>coloroff><color red<Bugs>coloroff>... I'm looking at bugs.")
/*<575>*/ 		set_camera(22, 0)
/*<577>*/ 		wait_frames(30)
/*<418>*/ 		printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x0001ff00>Bugs are amazing. Even more\namazing than Groose in a lot of ways...\n\n\nOh...<pause 30>wait. I'm not saying Groose isn't\nas amazing as a bug.")
/*<576>*/ 		set_camera(-1, 0)
/*<417>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "Look, <color red<I just really like bugs>coloroff>... I want to\ncollect all kinds of bugs. Sometimes,\nI even dream about having, like, an\nentire island full of bugs...")
/*<424>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x00ffff01>...How about this!\n\n\n\n<0x30001:0x><heroname>, here's the plan.\n<color red<If you find a bug, come sell it to me.\n>coloroff>When it comes to bugs, Rupees are \nno object.\n[1-]Sure![2-]Er...")
/*<423>*/ 		switch (choice(2)) {
          		  case 0:
/*<422>*/ 			printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x0003ff04>Mwah hah hah! Now all my\nbug-collecting ambitions will finally\nbe realized...")
          			flw_420:
/*<420>*/ 			printf(/* textboxtype: 1, unk: 0, line: 28 */ "So if you ever want to sell any bugs,\njust bring them to me. I usually hang\nout here at night...\n\n<0x10009:0x00120100>I won't just buy any bug, though.\nWhat I buy on any given day just\ndepends on the <color red<mood>coloroff> I'm in.\n\nOh, one other thing... This might bug\nyou a little bit, but I only want to\n<color red<do these deals at night>coloroff>. I have a\nreputation to protect, you know.\n<0x10009:0x0003ff14>Got it, <heroname>? I don't mean\nto be a pest, but I'm counting on you.\nI can't stop thinking about bugs...")
/*<447>*/ 			printf(/* textboxtype: 1, unk: 0, line: 29 */ "...So let's get to it. Want to sell me\nsomething?")
/*<419>*/ 			story_flags[298 /* us: 805A9AFD 0x10, jp: 805ACD7D 0x10 */] = true;
          			goto flw_476
          		  case 1:
/*<421>*/ 			printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x0001ff05>What? I was sure you'd go for that...\nDon't make me set Groose on you...")
          			goto flw_420
          		}
          	}
          }

          void entrypoint_115_04() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x00000000>Nnngghh snrrrk...\nSNNNNRRRKK....")
          }

          void entrypoint_115_21() {
/*< 67>*/ 	start()
/*< 68>*/ 	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          	  case 0:
/*< 85>*/ 		switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          		  case 0:
/*<798>*/ 			entrypoint_115_28();
          		  case 1:
/*< 84>*/ 			switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          			  case 0:
/*<115>*/ 				switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          				  case 0:
/*<799>*/ 					switch (zone_temp_flags[20 /* 0x3 10 */]) {
          					  case 0:
/*<116>*/ 						printf(/* textboxtype: 1, unk: 0, line: 222 */ "<0x10009:0x00080909>Hee hee! Thank you, <heroname>.\nThanks to you, I have an amazing new\nboyfriend!\n\nBut I feel kind of bad about <color blue<Cawlin>coloroff>,\nyou know?")
          					  case 1:
/*<800>*/ 						entrypoint_115_28();
          					}
          				  case 1:
/*< 87>*/ 					printf(/* textboxtype: 1, unk: 0, line: 221 */ "<0x10009:0x00000001>Thank you for bringing me the letter,\n<heroname>.\n\n\n<0x10009:0x00010d14>Sigh... I wonder what <color blue<Pipit>coloroff> would think\nif he knew about this...")
          				}
          			  case 1:
/*<130>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 133, 'param3': 31}
/*<133>*/ 				make_actor_do_something(2, 0)
/*<587>*/ 				{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1024, 'next': 73, 'param3': 13}
/*< 73>*/ 				printf(/* textboxtype: 1, unk: 0, line: 211 */ "<0x10009:0x00000014>Sigh... Oh, <color blue<Pipit>coloroff>... How can I get you to\nnotice me?")
/*<134>*/ 				make_actor_do_something(3, 0)
/*< 74>*/ 				printf(/* textboxtype: 1, unk: 0, line: 212 */ "<0x10009:0x00080404>Ah! <0x30001:0x><heroname>!\n\n\n\nUhh, what's the matter? Do you, uh...\nneed something? <0x10008:0xffcd>I wonder if he heard\nwhat I was just talking about...?<0x10008:0x00cd>\n[1-]Give the letter.[2-]Don't give it.")
/*< 75>*/ 				switch (choice(2)) {
          				  case 0:
/*< 77>*/ 					printf(/* textboxtype: 1, unk: 0, line: 214 */ "<0x10009:0x00080906>Huh? A letter? For me<pause 10>.<pause 10>.<pause 10>.<pause 10>?\nCould it be from <color blue<Pipit>coloroff>?!\n[1-]Here you go![2-]Never mind.")
/*< 78>*/ 					switch (choice(2)) {
          					  case 0:
/*< 80>*/ 						printf(/* textboxtype: 1, unk: 0, line: 216 */ "<0x10009:0x000e090a>Oh... Thank you. I'll just take that.")
/*<592>*/ 						{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3072, 'next': 593, 'param3': 13}
/*<593>*/ 						wait_frames(5)
/*<598>*/ 						set_camera(23, 0)
/*<599>*/ 						wait_frames(10)
/*<611>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 591, 'param3': 49}
/*<591>*/ 						printf(/* textboxtype: 1, unk: 0, line: 217 */ "<0x10009:0x00100400>I wonder who it's from?!")
/*<594>*/ 						wait_frames(30)
/*< 81>*/ 						printf(/* textboxtype: 1, unk: 0, line: 218 */ "<0x10009:0x00100d00>Whoa...<pause 20> <0x10006:0xfecd>That's some really terrible\nhandwriting...<0x10006:0x00cd>\n\n\n<0x10009:0x00100400>Anyway, never mind that... Let's see\nwhat it says...")
/*<596>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': -256, 'next': 665, 'param3': 13}
/*<665>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 104, 'next': 597, 'param3': 24}
/*<597>*/ 						wait_frames(15)
/*<600>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4608, 'next': 595, 'param3': 13}
/*<595>*/ 						printf(/* textboxtype: 1, unk: 0, line: 219 */ "...“Greetings. My love for you is wider\nthan the horizon and deeper than the\nclouds.\"\n\n<0x10009:0x00131200>“I would very much like it if you would\ngo out with me.\nYour brave knight,\n<color blue<Cawlin>coloroff>\"\n\n<0x10009:0x00000500>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.\n\n\n\n<0x10009:0x00010d00>Wow... This <color blue<Cawlin >coloroff>guy... Isn't he one\nof <color blue<Groose>coloroff>'s flunkies?\n\n\n<0x10009:0x000c0400>And...this... This is a love letter from\nthat <color blue<Cawlin>coloroff> kid...right?\n\n\n<0x10009:0x000b0712>Hoo boy...")
/*<588>*/ 						set_camera(-1, 0)
/*<589>*/ 						{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1792, 'next': 590, 'param3': 13}
/*<590>*/ 						wait_frames(15)
/*<612>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 82, 'param3': 16}
/*< 82>*/ 						printf(/* textboxtype: 1, unk: 0, line: 220 */ "<0x10009:0x00000009>So, yeah... I have to say, he really put\nhis heart into it and everything...\n\n\nI don't know... Maybe I should consider\ngoing out with <color blue<Cawlin>coloroff>.\n\n\n<0x10009:0x00080900>...Hah! As if!\n\n\n\n<0x10009:0x00010d14>Sigh... I wonder what <color blue<Pipit>coloroff> would think\nif he knew about this...")
/*< 83>*/ 						story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */] = true;
          					  case 1:
/*< 79>*/ 						printf(/* textboxtype: 1, unk: 0, line: 215 */ "<0x10009:0x00080912>What kind of a trick is that?\nStop messing around!")
          					}
          				  case 1:
/*< 76>*/ 					printf(/* textboxtype: 1, unk: 0, line: 213 */ "<0x10009:0x00010406>Huh? You're a strange one, aren't you,\n<heroname>?")
          				}
          			}
          		}
          	  case 1:
/*<667>*/ 		switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          		  case 0:
/*< 69>*/ 			printf(/* textboxtype: 1, unk: 0, line: 206 */ "<0x10009:0x00000001>Hey, <heroname>, what do you\nthink about <color blue<Pipit>coloroff>?\n\n[1-]He's nice.[2-]Why?")
/*< 70>*/ 			switch (choice(2)) {
          			  case 0:
/*< 71>*/ 				printf(/* textboxtype: 1, unk: 0, line: 207 */ "<0x10009:0x000b070a>Yes! Yes, he is! He's kind and caring.\nAnd handsome and wonderful!\n\n\n<0x10009:0x000c0416>Oh dear... I don't know what's come\nover me all of a sudden...\n\n\n<0x10009:0x00080400>Sorry for bothering you with such an\nawkward question...")
          			  case 1:
/*< 72>*/ 				printf(/* textboxtype: 1, unk: 0, line: 208 */ "<0x10009:0x00010406>Huh? Oh... Well, you know... I just...\n\n\n\n<0x10009:0x00080416>Oh, forget about it. I don't even know\nwhat I was thinking asking you a\nstrange question like that. Silly me...")
          			}
          		  case 1:
/*<669>*/ 			switch (zone_temp_flags[15 /* 0x0 80 */]) {
          			  case 0:
/*<671>*/ 				printf(/* textboxtype: 1, unk: 0, line: 210 */ "<0x10009:0x00001001>That outfit looks great on you!\n\n\n\n<0x10009:0x0000040a>Not as good as it looks on Pipit,\nthough!")
          			  case 1:
/*<668>*/ 				printf(/* textboxtype: 1, unk: 0, line: 209 */ "<0x10009:0x00010404>Ah! <pause 20><0x30001:0x><heroname>! \nCongratulations on advancing!\n\n\n<0x10009:0x00080400>Wow... So this year's knight's uniform\nis dark green, eh? <pause 20>Looks neat! \n\n\n<0x10009:0x000a1000>I bet Zelda will be really happy to see\nyou in that...\n\n\n<0x10009:0x00000406>Oh, and don't worry... I'm sure she's\nfine, wherever she is! She'll definitely\nbe home soon.")
/*<670>*/ 				zone_temp_flags[15 /* 0x0 80 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_115_05() {
/*<  7>*/ 	start()
/*<830>*/ 	switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          	  case 0:
/*<  8>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 17>*/ 			switch (story_flags[386 /* us: 805A9B0D 0x10, jp: 805ACD8D 0x10 */]) {
          			  case 0:
/*< 22>*/ 				switch (story_flags[387 /* us: 805A9B0D 0x20, jp: 805ACD8D 0x20 */]) {
          				  case 0:
/*<104>*/ 					switch (zone_temp_flags[0 /* 0x1 01 */]) {
          					  case 0:
/*<579>*/ 						{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 3584, 'next': 105, 'param3': 13}
/*<105>*/ 						printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x00000e08>Finally, I can sleep! Thank you!")
          					  case 1:
/*<580>*/ 						{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 3584, 'next': 23, 'param3': 13}
/*< 23>*/ 						printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x00000008>Oh, thank you, thank you! I appreciate\neverything you've done.")
          					}
          				  case 1:
/*<123>*/ 					check_item_flag(160, 1)
/*<124>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 60}) {
          					  case 0:
/*<126>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 19, 'param3': 31}
/*< 19>*/ 						printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00000e0d>Is that...? The baby's <color yellow<<item 160>>coloroff>!\nYou found it!")
/*<584>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 586, 'param3': 47}
/*<586>*/ 						story_flags[387 /* us: 805A9B0D 0x20, jp: 805ACD8D 0x20 */] = true;
/*<712>*/ 						{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 713, 'param3': 15}
/*<713>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 714, 'param3': 17}
/*<714>*/ 						wait_frames(10)
/*<556>*/ 						set_camera(10, 0)
/*<555>*/ 						{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3328, 'next': 585, 'param3': 13}
/*<585>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 557, 'param3': 48}
/*<557>*/ 						wait_frames(60)
/*< 20>*/ 						printf(/* textboxtype: 1, unk: 0, line: 60 */ "Who's a sleepy baby?\nTime for beddy-bye.<0x10005:0x00780000>")
/*<558>*/ 						{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3584, 'next': 559, 'param3': 13}
/*<559>*/ 						set_camera(29, 0)
/*< 21>*/ 						printf(/* textboxtype: 1, unk: 0, line: 61 */ "<0x10009:0x00000e08>Whew. The baby seems to have settled\ndown nicely. I bet the baby will sleep\nwell tonight. Oh! That means I'll\nfinally get a good night's sleep too!\n<0x10009:0x00100e00>Thank you so much! I won't forget\nwhat you did for me.")
/*<103>*/ 						zone_temp_flags[0 /* 0x1 01 */] = true;
/*<715>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 125, 'param3': 42}
/*<125>*/ 						give_gratitude_crystals();
/*<716>*/ 						set_camera(30, 0)
          					  case 1:
/*<743>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 18, 'param3': 31}
/*< 18>*/ 						printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x000d0f09>Ahh...I hope someone finds the \nbaby's <color yellow<<item 160>>coloroff>...\n\n\n<0x10009:0x00100000>A <color red<bird flew away with it>coloroff>. It must still\nbe <color red<somewhere in town>coloroff>... <0x10009:0x000d0000>Sigh.\nIt looks like I won't get any sleep\ntonight, either...")
          					}
          				}
          			  case 1:
/*< 10>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 561, 'param3': 31}
/*<561>*/ 				set_camera(10, 0)
/*<560>*/ 				{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 3072, 'next': 562, 'param3': 13}
/*<562>*/ 				wait_frames(75)
/*< 11>*/ 				printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10006:0xfccd>...<pause 45><0x10006:0x00cd><0x10009:0x000d0000>Sigh...<0x10005:0x00410000>")
/*<563>*/ 				set_camera(-1, 0)
/*<565>*/ 				{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 564, 'param3': 13}
/*<564>*/ 				printf(/* textboxtype: 1, unk: 0, line: 51 */ "Ahhh... Doesn't look like I'll get much\nsleep tonight...again.\n[1-]Why?[2-]Are you tired?")
/*< 12>*/ 				switch (choice(2)) {
          				  case 0:
/*< 24>*/ 					printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00100f06>Sorry to worry you...")
          					flw_26:
/*< 26>*/ 					printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x000d0f00>The baby just goes on and on like this\nall night. I haven't slept a wink in...\nAhhh... I don't even know how long.\n\nThe baby usually sleeps like a sack of\nrocks. But that was before we lost\nthe you know what...\n[1-]No, what?[2-]Oh, that?")
/*< 27>*/ 					switch (choice(2)) {
          					  case 0:
/*< 13>*/ 						printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x00100f01>The baby's <color yellow<<item 160>>coloroff>.")
          						flw_15:
/*< 15>*/ 						printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x00000f00>If we had the you know what, then\nthe baby would settle down. But we \nlost it the other day.\n\n<color red<A bird picked it up >coloroff>in its beak and <color red<flew\noff with it>coloroff>. Maybe the bird thought it\nwas food. I don't know...\n\n<0x10009:0x000e0f00>Of course, the bird wouldn't have \neaten it, so I think it must still be\n<color red<somewhere here in town>coloroff>. I just don't\nknow where...\n<0x10009:0x00000009>Sigh... It sure would be nice if\nsomeone would find it for me.")
/*< 16>*/ 						story_flags[386 /* us: 805A9B0D 0x10, jp: 805ACD8D 0x10 */] = true;
          					  case 1:
/*< 14>*/ 						printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x00100f04>So you know about it? Yes, the baby's\n<color yellow<<item 160>>coloroff>.")
          						goto flw_15
          					}
          				  case 1:
/*< 25>*/ 					printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x00100f07>Well, you can see what my nights are\nlike, right?")
          					goto flw_26
          				}
          			}
          		  case 1:
          			flw_9:
/*<  9>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00000003>Ahhh... This child just won't go to\nsleep for me... What can I do? Ahhh...\n[1-]That's terrible![2-]And your wife?")
/*<127>*/ 			switch (choice(2)) {
          			  case 0:
/*<128>*/ 				printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00000004>Yeah, it is pretty terrible... But even\nwhen babies cry, they're still really\ncute... If they're yours, I guess.\n\nYou'll understand someday when\nyou've got one of your own!")
          			  case 1:
/*<129>*/ 				printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00000007>Ah, the missus<pause 10>.<pause 10>.<pause 10>. She gets tired from\nrunning the business all day.\n\n\n<0x10009:0x000d0f06>I have to let her get some rest\nsometime, right...? Ha ha...")
          			}
          		}
          	  case 1:
          		goto flw_9
          	}
          }

          void entrypoint_115_22() {
/*< 88>*/ 	start()
/*< 89>*/ 	switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          	  case 0:
/*< 91>*/ 		switch (story_flags[556 /* us: 805A9B16 0x20, jp: 805ACD96 0x20 */]) {
          		  case 0:
/*< 98>*/ 			switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          			  case 0:
/*<794>*/ 				switch (zone_temp_flags[20 /* 0x3 10 */]) {
          				  case 0:
/*< 99>*/ 					printf(/* textboxtype: 1, unk: 0, line: 243 */ "<0x10009:0x000c0401>Hey, <heroname>! Thanks to you, \nI found a wonderful girlfriend!\nThank you so much!")
          				  case 1:
/*<796>*/ 					entrypoint_115_27();
          				}
          			  case 1:
/*<547>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 3072, 'next': 548, 'param3': 13}
/*<548>*/ 				printf(/* textboxtype: 1, unk: 0, line: 242 */ "<0x10009:0x00000018>Erm... Hmm...\n\n\n\n<0x10009:0x000f1100>Let's just say you had an interest \nin how that relationship turned out.\nDo you think it would be best to go \nand ask her about it?\n<0x10009:0x00110e00>I mean... That isn't to say that I have\na personal interest here, though.\nI'm just interested in the emotion\nof love...in general...")
          			}
          		  case 1:
/*<132>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 546, 'param3': 31}
/*<546>*/ 			{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 1024, 'next': 92, 'param3': 13}
/*< 92>*/ 			printf(/* textboxtype: 1, unk: 0, line: 234 */ "<0x10009:0x00000001>What's up, <heroname>?")
/*<545>*/ 			printf(/* textboxtype: 1, unk: 0, line: 235 */ "<0x10009:0x00010c09>...Huh? <color blue<Karane>coloroff> got a love letter?\n\n\n\n<0x10009:0x000f1100>I-I see... That's interesting...\nWow...\n\n\n<0x10009:0x000c0c54>Erm... Wh-what do you think she\nintends to do...?\n[1-]Date him.[2-]Beats me.")
/*< 93>*/ 			switch (choice(2)) {
          			  case 0:
/*< 94>*/ 				printf(/* textboxtype: 1, unk: 0, line: 236 */ "<0x10009:0x00110e53>What?! Th-this is a big problem,\nisn't it?!")
          				flw_96:
/*< 96>*/ 				printf(/* textboxtype: 1, unk: 0, line: 238 */ "<0x10009:0x00110e09>...Oh! I mean, uhh... It's not like\nthere's anything going on between\nme and <color blue<Karane>coloroff>, you know?\nWe're just friends...\nSo it's not my business who she goes\nout with. I don't have much to say\nabout it.\n\n<0x10009:0x000c0c00>But you know...I do have a duty to\nmake sure that everyone is living up\nto the high ideals of our knight school,\nright?\n<0x10009:0x00080c00>I mean, ideal love is unfettered and\npassionate. Anything less than that\ncan't really be called love at all, you\nknow what I mean? \n<0x10009:0x000b0c00>So I should just step in and make sure\nthat she's found a true love that\naspires to the highest ideals of our\nfine educational institution, right?\n<0x10009:0x00110e00>And what about me? I have the right to\nexperience an unfettered and\npassionate love too, don't I?\n\n<0x10009:0x000c0c1b>You understand, don't you,\n<heroname>? I'm not wrong\nabout this, am I?\n[1-]I don't know.[2-]You like her?")
/*<119>*/ 				switch (choice(2)) {
          				  case 0:
/*<121>*/ 					printf(/* textboxtype: 1, unk: 0, line: 240 */ "<0x10009:0x000f1152>I see... Of course. You've got more\nimportant things to worry about\nthan this right now!")
          					flw_122:
/*<122>*/ 					printf(/* textboxtype: 1, unk: 0, line: 241 */ "<0x10009:0x00101117>Well, either way...\n\n\n\n<0x10009:0x000f0c00>I don't suppose you'd mind asking her\nwhat her decision is going to be,\nwould you?")
/*< 97>*/ 					story_flags[556 /* us: 805A9B16 0x20, jp: 805ACD96 0x20 */] = true;
/*<114>*/ 					story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
          				  case 1:
/*<120>*/ 					printf(/* textboxtype: 1, unk: 0, line: 239 */ "<0x10009:0x00110e53>Wha-what?! Don't be ridiculous,\n<heroname>!\n\n\n<0x10009:0x00120c00>I don't even understand how you could\nmake such a wild accusation!")
          					goto flw_122
          				}
          			  case 1:
/*< 95>*/ 				printf(/* textboxtype: 1, unk: 0, line: 237 */ "<0x10009:0x000f1118>So you don't know? Well... That's going\nto bother me until I find out...")
          				goto flw_96
          			}
          		}
          	  case 1:
/*<814>*/ 		entrypoint_115_27();
          	}
          }

          void entrypoint_115_06() {
/*<253>*/ 	start()
/*<252>*/ 	switch (story_flags[388 /* us: 805A9B0D 0x40, jp: 805ACD8D 0x40 */]) {
          	  case 0:
/*<744>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 256, 'param3': 31}
/*<256>*/ 		switch (story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */]) {
          		  case 0:
/*<257>*/ 			printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00071602>I'll do my best! And someday I'll be\nstrong. Come back soon so I can show\nyou the new me!")
          		  case 1:
/*<258>*/ 			switch (adventure_pouch_has(4 0x0004)) {
          			  case 0:
/*<278>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 277, 'param3': 32}
/*<277>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 260, 'param3': 13}
/*<260>*/ 				printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00000011>I just...whoo...need a breather...\n<0x30001:0x><heroname>, what have you got\nthere? Is that...<color yellow<Stamina Potion>coloroff>?\n\nI don't suppose you'd...let me have\nthat, would you?\n[1-]Take it![2]Sorry...")
          				flw_261:
/*<261>*/ 				switch (choice(2)) {
          				  case 0:
/*<263>*/ 					printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x0000000b>Really?! Thank you! I owe you one!")
/*<266>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3092, 'param2': 7936, 'next': 271, 'param3': 13}
/*<271>*/ 					wait_frames(4)
/*<270>*/ 					set_camera(5, 0)
/*<267>*/ 					wait_frames(135)
/*<265>*/ 					make_actor_do_something(0, 0)
/*<279>*/ 					set_camera(-1, 0)
/*<280>*/ 					wait_frames(20)
/*<264>*/ 					printf(/* textboxtype: 1, unk: 0, line: 79 */ "<0x10009:0x00000010>Whoo-yeah! I can feel my muscles\nperking back up already!")
/*<268>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 269, 'param3': 13}
/*<269>*/ 					printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x00000012>It's just that...at this rate, I don't\nknow if I'll ever get strong and burly.\n[1-]Try your best![2-]Yes, you can!")
/*<281>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 291, 'param3': 13}
/*<291>*/ 					switch (choice(2)) {
          					  case 0:
/*<292>*/ 						printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000009>Right! That's exactly what I need to do.\nNo more whining! I need to push\nmyself.")
          						flw_294:
/*<294>*/ 						printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00001800>Thank you, <heroname>.\nI'll make you proud. You'll see! I'll be\nsuper burly in no time!\n\n<0x10009:0x00151800>OK, back to training! Come back soon\nso I can show you the new me!")
/*<295>*/ 						story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */] = true;
/*<213>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<293>*/ 						printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x00001609>Wow... Really? It's great to hear\nyou're so confident in me. Maybe I can\nactually do this...")
          						goto flw_294
          					}
          				  case 1:
/*<262>*/ 					printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x00000011>Oh... Of course... I don't mean to put\nyou out.")
/*<288>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': 3072, 'next': 287, 'param3': 13}
/*<287>*/ 					printf(/* textboxtype: 1, unk: 0, line: 73 */ "<0x10009:0x00000003>Oh...but don't worry about me...\nI still have some get-up-and-go in\nme... I think... Maybe...")
          				}
          			  case 1:
/*<275>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 274, 'param3': 32}
/*<274>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 276, 'param3': 13}
/*<276>*/ 				printf(/* textboxtype: 1, unk: 0, line: 74 */ "<0x10009:0x00000011>Whew...whoo... It's no good...\n\n\n\nIf only I had <color red<a potion that would give\nme stamina>coloroff>, then maybe I could reach\ndown deep for that 110%...")
/*<290>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 289, 'param3': 13}
/*<289>*/ 				printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00000003>...Fat chance, right? I suppose I'll have\nto just put my nose to the grindstone...\nYep, just buckle down my bootstraps\nand all that... Right?\nAnyway, I'll just keep working on this\nfor as long as I can! All on my own,\nI guess... Sigh...")
          			}
          		}
          	  case 1:
/*<259>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 273, 'param3': 31}
/*<273>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 272, 'param3': 32}
/*<272>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': 6912, 'next': 254, 'param3': 13}
/*<254>*/ 		printf(/* textboxtype: 1, unk: 0, line: 70 */ "<0x10009:0x00000010>Whew... Let me catch my breath...\n\n\n\n<0x10009:0x00101600>Hey...<0x30001:0x><heroname>! Oh, what am I\ndoing? I'm training!\n\n\nI can't even lift a single barrel...\nPathetic, I know! That's why I want\nto get stronger.\n\nI'm a bit embarrassed about it, though,\nso I do it at night when no one's\naround to laugh at me...\n\n<0x10009:0x00001711>But it's not going so well. I'm just too\ntired. I was actually about ready to\nthrow in the towel...")
/*<255>*/ 		story_flags[388 /* us: 805A9B0D 0x40, jp: 805ACD8D 0x40 */] = true;
/*<282>*/ 		switch (adventure_pouch_has(4 0x0004)) {
          		  case 0:
/*<284>*/ 			printf(/* textboxtype: 1, unk: 0, line: 76 */ "<0x10009:0x0000000b>Oh! <0x30001:0x><heroname>, what have you\ngot there? That's not... It's not a\n<color yellow<Stamina Potion>coloroff>, is it?\n\nI don't suppose you would mind letting\nme have that, would you?\n[1-]Take it![2]No way.")
          			goto flw_261
          		  case 1:
/*<283>*/ 			printf(/* textboxtype: 1, unk: 0, line: 71 */ "Ahh...if only there were <color red<a potion that\nwould give me stamina>coloroff>, then I could\ndrink that and maybe find that last\nlittle bit of strength I need...")
/*<286>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 285, 'param3': 13}
/*<285>*/ 			printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00000003>...Fat chance, right? I suppose I'll have\nto just put my nose to the grindstone...\nYep, just buckle down my bootstraps\nand all that... Right?\nAnyway, I'll just keep working on this\nfor as long as I can! All on my own,\nI guess... Sigh...")
          		}
          	}
          }

          void entrypoint_115_23() {
/*<530>*/ 	start()
/*<531>*/ 	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          	  case 0:
/*<680>*/ 		switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          		  case 0:
/*<681>*/ 			switch (story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */]) {
          			  case 0:
          				flw_534:
/*<534>*/ 				entrypoint_115_24();
          			  case 1:
/*<682>*/ 				printf(/* textboxtype: 1, unk: 0, line: 190 */ "<0x10009:0x00000008>What now, <heroname>!?\nTonight my head is swimming\nwith thoughts of Karane!\n\nIf you need to talk to me about\nsomething, it can wait until\ntomorrow. Now get lost!")
          			}
          		  case 1:
          			goto flw_534
          		}
          	  case 1:
/*<532>*/ 		printf(/* textboxtype: 1, unk: 0, line: 193 */ "<0x10009:0x00000010>Heh heh heh... I'm not afraid of\n<color blue<Groose>coloroff>! His room is mine now!")
          	}
          }

          void entrypoint_115_07() {
/*<298>*/ 	start()
/*<299>*/ 	switch (story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */]) {
          	  case 0:
/*<745>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 302, 'param3': 31}
/*<302>*/ 		switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
          		  case 0:
/*<304>*/ 			printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x00000002><0x30001:0x><heroname>! You're going to be\nshocked by how strong I am!\nCome back and see me soon!")
          		  case 1:
/*<300>*/ 			switch (adventure_pouch_has(4 0x0004)) {
          			  case 0:
/*<332>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 331, 'param3': 32}
/*<331>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 305, 'param3': 13}
/*<305>*/ 				printf(/* textboxtype: 1, unk: 0, line: 89 */ "<0x10009:0x00000010>Whoo... I can't seem to catch my\nbreath...\n\n\nHey, <heroname>, would you\nmind sharing some <color yellow<Stamina Potion\n>coloroff>with me?\n[1-]Take some![2]Sorry.")
          				flw_306:
/*<306>*/ 				switch (choice(2)) {
          				  case 0:
/*<308>*/ 					printf(/* textboxtype: 1, unk: 0, line: 92 */ "<0x10009:0x0000000b>Really? Wow, thanks! I'll gladly take\nit, then.")
/*<333>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3092, 'param2': 7936, 'next': 312, 'param3': 13}
/*<312>*/ 					wait_frames(4)
/*<311>*/ 					set_camera(5, 0)
/*<310>*/ 					wait_frames(135)
/*<309>*/ 					make_actor_do_something(0, 0)
/*<334>*/ 					set_camera(-1, 0)
/*<335>*/ 					wait_frames(20)
/*<345>*/ 					printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x00000010>Whoo-hoo! That's the stuff! It's like a\nrefreshing splash of ENERGY!")
/*<347>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 346, 'param3': 13}
/*<346>*/ 					printf(/* textboxtype: 1, unk: 0, line: 94 */ "<0x10009:0x00000012>...Sometimes I worry, though. All this\ntraining, and no results! How long do I\nneed to train before I start to get\nstronger?\nWhat do you think, <heroname>?\nHow many push-ups do you think I\nneed to do to get strong?\n[1-]About 1,000![2-]Not about numbers.")
/*<348>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3073, 'param2': 2048, 'next': 349, 'param3': 13}
/*<349>*/ 					switch (choice(2)) {
          					  case 0:
/*<350>*/ 						printf(/* textboxtype: 1, unk: 0, line: 95 */ "<0x10009:0x00000053>Ulp... That many? Really?\n\n\n\n<0x10009:0x00100e00>OK, then... I guess there really is no\ngain unless there is also pain. So much\npain...")
          						flw_352:
/*<352>*/ 						printf(/* textboxtype: 1, unk: 0, line: 97 */ "<0x10009:0x00011600>I guess that makes sense. Now that I\nknow that, I'll definitely start getting\nstronger!\n\n<0x10009:0x00001800>Come back soon so you can see how\nI'm doing!")
/*<353>*/ 						story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */] = true;
/*<354>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<351>*/ 						printf(/* textboxtype: 1, unk: 0, line: 96 */ "<0x10009:0x00000007>It's not about numbers? ...Of course!\n\n\n\n<0x10009:0x00070800>You mean I should just keep at it until\nI've forgotten how many I've done,\nright?")
          						goto flw_352
          					}
          				  case 1:
/*<307>*/ 					printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x00000011>Of course, of course... Sorry, I was\nbeing foolish and presumptuous.")
/*<344>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 343, 'param3': 13}
/*<343>*/ 					printf(/* textboxtype: 1, unk: 0, line: 91 */ "It's OK. I'll be fine! I'll just keep at it\non my own.")
          				}
          			  case 1:
/*<330>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 329, 'param3': 32}
/*<329>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 303, 'param3': 13}
/*<303>*/ 				printf(/* textboxtype: 1, unk: 0, line: 74 */ "<0x10009:0x00000011>Whew...whoo... It's no good...\n\n\n\nIf only I had <color red<a potion that would give\nme stamina>coloroff>, then maybe I could reach\ndown deep for that 110%...")
/*<342>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 341, 'param3': 13}
/*<341>*/ 				printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00000003>No, no... I can't keep asking you for\nfavors like that! I'll just keep working\nat it on my own.")
          			}
          		}
          	  case 1:
/*<301>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 328, 'param3': 31}
/*<328>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 327, 'param3': 32}
/*<327>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': 6912, 'next': 296, 'param3': 13}
/*<296>*/ 		printf(/* textboxtype: 1, unk: 0, line: 85 */ "<0x10009:0x00000010>Oh...whoo...I'm sweating up a storm.\nGood evening, <heroname>!\n\n\n<0x10009:0x0c10ff00>I've been training hard ever since we\nlast spoke, but I still feel so sluggish...\nMaybe I've just run out of energy.")
/*<297>*/ 		story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */] = true;
/*<336>*/ 		switch (adventure_pouch_has(4 0x0004)) {
          		  case 0:
/*<338>*/ 			printf(/* textboxtype: 1, unk: 0, line: 88 */ "<0x10009:0x0000000b>Ah! <0x30001:0x><heroname>, is that...\nIs that a <color red<Stamina Potion>coloroff> you're \ncarrying?\n\nWould you mind if I had some?\n[1-]Take some![2]Sorry.")
          			goto flw_306
          		  case 1:
/*<337>*/ 			printf(/* textboxtype: 1, unk: 0, line: 86 */ "Hey, <heroname>. Do you think\nyou could give me some more\n<color red<Stamina Potion>coloroff>?")
/*<340>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 339, 'param3': 13}
/*<339>*/ 			printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00000003>No, no... I can't keep asking you for\nfavors like that! I'll just keep working\nat it on my own.")
          		}
          	}
          }

          void entrypoint_115_24() {
/*<533>*/ 	start()
          	flw_58:
/*< 58>*/ 	switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          	  case 0:
/*< 61>*/ 		switch (story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */]) {
          		  case 0:
/*< 66>*/ 			printf(/* textboxtype: 1, unk: 0, line: 201 */ "")
          		  case 1:
/*<679>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 686, 'param3': 31}
/*<686>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 687, 'param3': 47}
/*<687>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 689, 'param3': 15}
/*<689>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 690, 'param3': 16}
/*<690>*/ 			set_camera(27, 0)
/*<829>*/ 			make_actor_do_something(4, 0)
/*<688>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 568, 'param3': 48}
/*<568>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3072, 'next': 59, 'param3': 13}
/*< 59>*/ 			printf(/* textboxtype: 1, unk: 0, line: 196 */ "<0x10009:0x00000002>Hey, <heroname>! Did you hand\nover that letter like I asked?\n[1-]Actually...[2-]Huh?")
/*< 60>*/ 			switch (choice(2)) {
          			  case 0:
/*< 62>*/ 				printf(/* textboxtype: 1, unk: 0, line: 197 */ "<0x10009:0x00111f1d>Wh-what did you just say?! You gave it\nto that weirdo in the restroom?!")
          				flw_64:
/*< 64>*/ 				printf(/* textboxtype: 1, unk: 0, line: 199 */ "<0x10009:0x00011f00>Didn't I specifically tell you NOT to\ngive it to the weirdo in the restroom?!\nSeriously! I said it like five times!\nI know I did!\n<0x10009:0x001a1f17>You fool! How could you?! Anyone who\nblocks the path of true love deserves\nto be kicked by a bird!\n\nI hate you, <heroname>!")
/*<692>*/ 				{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 7936, 'next': 683, 'param3': 13}
/*<683>*/ 				{'type': 'type3', 'subType': 2, 'param1': 14, 'param2': 0, 'next': 691, 'param3': 14}
/*<691>*/ 				printf(/* textboxtype: 1, unk: 0, line: 200 */ "<0x10009:0x00001f18>Uwahhhhh!!!")
/*<697>*/ 				{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 256, 'next': 698, 'param3': 15}
/*<698>*/ 				wait_frames(1)
/*<696>*/ 				set_camera(28, 0)
/*<695>*/ 				{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 1024, 'next': 693, 'param3': 13}
/*<693>*/ 				{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 0, 'next': 65, 'param3': 14}
/*< 65>*/ 				story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */] = true;
/*<707>*/ 				story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
/*<708>*/ 				story_flags[771 /* us: 805A9B2A 0x08, jp: 805ACDAA 0x08 */] = true;
/*<694>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*< 63>*/ 				printf(/* textboxtype: 1, unk: 0, line: 198 */ "<0x10009:0x00151f12>Y... You... Are you out of your mind?!\n\n\n\n<0x10009:0x00111b00>Seriously?! You gave it to that creep\nin the restroom? Really?! You gave\nit to that restroom weirdo?!")
          				goto flw_64
          			}
          		}
          	  case 1:
/*<821>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 113, 'param3': 31}
/*<113>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<541>*/ 			switch (story_flags[664 /* us: 805A9B1F 0x40, jp: 805ACD9F 0x40 */]) {
          			  case 0:
/*<570>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 6912, 'next': 544, 'param3': 13}
/*<544>*/ 				printf(/* textboxtype: 1, unk: 0, line: 192 */ "<0x10009:0x0000000f>Ahhh...so <color blue<Karane>coloroff> finally knows how\nI feel about her...\n\n\n<0x10008:0xffcd><0x10009:0x00011f00>What should I do...?\nMy heart is pounding...")
          			  case 1:
/*<567>*/ 				{'type': 'type3', 'subType': 4, 'param1': 24, 'param2': 6912, 'next': 542, 'param3': 13}
/*<542>*/ 				printf(/* textboxtype: 1, unk: 0, line: 191 */ "<0x10009:0x00000013>What?! You actually did it?!\nYou gave the letter to <color blue<Karane>coloroff>...?!\n\n\n<0x10009:0x00012500>Oh no. OH NO. What now?! What do\nI do? Maybe I should go see what she\nthought of the letter...\n<0x10008:0xffcd><0x10009:0x00011f00>Ahh, but...this is so embarrassing...")
/*<543>*/ 				story_flags[664 /* us: 805A9B1F 0x40, jp: 805ACD9F 0x40 */] = true;
          			}
          		  case 1:
/*<566>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 40, 'param3': 13}
/*< 40>*/ 			printf(/* textboxtype: 1, unk: 0, line: 189 */ "<0x10009:0x00000002>Get it straight, <heroname>.\nI need you to give the letter to the cute\nsenior with the <color red<round hat>coloroff>.\n\n<0x10009:0x00011b00>And don't even think about giving it to\nthat <color red<weirdo in the restroom>coloroff>! Not even\nby mistake! Don't you DARE!")
          		}
          	}
          }

          void entrypoint_115_25() {
/*<239>*/ 	start()
/*<243>*/ 	switch (story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */]) {
          	  case 0:
/*<248>*/ 		switch (story_flags[393 /* us: 805A9B0C 0x08, jp: 805ACD8C 0x08 */]) {
          		  case 0:
/*<250>*/ 			switch (temp_flags[53 /* 0x7 20 */]) {
          			  case 0:
/*<251>*/ 				printf(/* textboxtype: 1, unk: 0, line: 69 */ "Hrrrnnnnghhh...!")
          			  case 1:
/*<249>*/ 				printf(/* textboxtype: 1, unk: 0, line: 68 */ "3,985...3,986...\n3,987...3,988...")
/*<844>*/ 				temp_flags[53 /* 0x7 20 */] = true;
          			}
          		  case 1:
/*<245>*/ 			switch (temp_flags[53 /* 0x7 20 */]) {
          			  case 0:
/*<247>*/ 				printf(/* textboxtype: 1, unk: 0, line: 67 */ "Snrrrrrk... Hrrmphh...")
          			  case 1:
/*<244>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10006:0xfecd>55...56...57...")
/*<843>*/ 				temp_flags[53 /* 0x7 20 */] = true;
          			}
          		}
          	  case 1:
/*<242>*/ 		switch (temp_flags[53 /* 0x7 20 */]) {
          		  case 0:
/*<246>*/ 			printf(/* textboxtype: 1, unk: 0, line: 65 */ "Nnghh... Snrrrk... Hrmmph...")
          		  case 1:
/*<240>*/ 			printf(/* textboxtype: 1, unk: 0, line: 64 */ "<0x10006:0xfccd>5...6...7...")
/*<241>*/ 			temp_flags[53 /* 0x7 20 */] = true;
          		}
          	}
          }

          void entrypoint_115_08() {
/*<313>*/ 	start()
/*<314>*/ 	switch (story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */]) {
          	  case 0:
/*<326>*/ 		switch (zone_temp_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*<321>*/ 			printf(/* textboxtype: 1, unk: 0, line: 103 */ "<0x10009:0x0015180a>I could just keep going and going!\nNext, I'm going to train so hard that\nI can lift a barrel with one finger.")
          		  case 1:
/*<322>*/ 			printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x0015180a>Phew... That was a good warm-up.")
          		}
          	  case 1:
/*<323>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 315, 'param3': 31}
/*<315>*/ 		printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x0015190a>Phew... That was a good warm-up.\n\n\n\n<0x10009:0x00011600>...Hey, <heroname>! I was just\nhoping you'd come by. I wanted to ask\nyou something.\n\n<0x10009:0x00071800>The other day I tried lifting some\nbarrels, and I was able to do it with\none arm!\n\n<0x10009:0x00001600>Do you think that means I've got\nenough muscle? What do you think,\n<heroname>? Do I look strong?\n[1-]Too strong![2-]For sure.")
/*<317>*/ 		switch (choice(2)) {
          		  case 0:
/*<319>*/ 			printf(/* textboxtype: 1, unk: 0, line: 101 */ "<0x10009:0x00071809>Huh? Aww, you're just saying that.\nBut it's still nice to hear it.")
          			flw_320:
/*<320>*/ 			printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x00001600>It's all thanks to you,\n<heroname>.\n\n\n<0x10009:0x00011900>I would have gotten discouraged if\nyou hadn't come by to cheer me on.\nYou gave me motivation!\n\n<0x10009:0x0007180b>Thank you so much, <heroname>!")
/*<324>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
/*<316>*/ 			story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */] = true;
/*<325>*/ 			give_gratitude_crystals();
          		  case 1:
/*<318>*/ 			printf(/* textboxtype: 1, unk: 0, line: 100 */ "<0x10009:0x0000180b>Really? Thanks! I'm so happy.")
          			goto flw_320
          		}
          	}
          }

          void entrypoint_115_09() {
/*<175>*/ 	start()
/*<212>*/ 	switch (story_flags[383 /* us: 805A9B0D 0x02, jp: 805ACD8D 0x02 */]) {
          	  case 0:
/*<215>*/ 		switch (story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */]) {
          		  case 0:
/*<788>*/ 			switch (temp_flags[11 /* 0x0 08 */]) {
          			  case 0:
/*<789>*/ 				printf(/* textboxtype: 1, unk: 0, line: 125 */ "<0x10009:0x000b0e09>Hey, <heroname>, thanks for\ntaking care of my sister like that.\nI won't forget what you did.")
          			  case 1:
/*<772>*/ 				entrypoint_115_26();
          			}
          		  case 1:
/*<742>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 731, 'param3': 31}
/*<731>*/ 			switch (story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */]) {
          			  case 0:
/*<214>*/ 				printf(/* textboxtype: 1, unk: 0, line: 121 */ "<0x10009:0x000b0e09><0x30001:0x><heroname>! My sister made it\nhome safely! <0x10009:0x000a0400>Thank goodness... I was\nso worried about her.\n\n<0x10009:0x000b0400>Thanks so much for your help,\n<heroname>!")
/*<216>*/ 				story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */] = true;
/*<787>*/ 				temp_flags[11 /* 0x0 08 */] = true;
/*<732>*/ 				give_gratitude_crystals();
          			  case 1:
/*<734>*/ 				printf(/* textboxtype: 1, unk: 0, line: 122 */ "<0x10009:0x000b0e09><0x30001:0x><heroname>! My sister is safe!\n\n\n\n<0x10009:0x000a0400>I'm so relieved! I was getting so\nworried there. All these worst-case\nscenarios kept popping into my head.\n\nWhat? You're the one who gave my\nsister the bird medicine?<pause 20>\n\n\n<0x10009:0x000b0400>Thank you so much! I don't have much\nto give you to repay you, but please\ntake this with my gratitude!")
/*<738>*/ 				switch (is_adventure_pouch_full()) {
          				  case 0:
/*<739>*/ 					switch (is_item_check_full()) {
          					  case 0:
/*<740>*/ 						printf(/* textboxtype: 1, unk: 0, line: 123 */ "<0x10009:0x000b0a05>Oh, that's a shame. I wanted to\ngive you this <color yellow<Empty Bottle>coloroff>, but it looks\nlike your pouch is full and you're also\nout of room at the Item Check...\nBut I'll hang on to it for you. If you can\nget rid of something from your pouch\nor make some room at the Item Check,\ncome see me later and it's all yours.")
          					  case 1:
          						flw_735:
/*<735>*/ 						story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */] = true;
/*<736>*/ 						story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */] = true;
/*<733>*/ 						give_item(153 0x99);
/*<786>*/ 						temp_flags[11 /* 0x0 08 */] = true;
/*<812>*/ 						printf(/* textboxtype: 1, unk: 0, line: 124 */ "<0x10009:0x000b0400>It may not look like much, but believe\nme, there's a dozen uses for a fine\nbottle like that. Thanks again!")
/*<813>*/ 						give_gratitude_crystals();
          					}
          				  case 1:
          					goto flw_735
          				}
          			}
          		}
          	  case 1:
/*<176>*/ 		switch (story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */]) {
          		  case 0:
/*<741>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 183, 'param3': 31}
/*<183>*/ 			switch (story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */]) {
          			  case 0:
/*<200>*/ 				switch (story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */]) {
          				  case 0:
/*<204>*/ 					switch (adventure_pouch_has(5 0x0005)) {
          					  case 0:
/*<205>*/ 						printf(/* textboxtype: 1, unk: 0, line: 120 */ "<0x10009:0x000b0409>What are you doing,\n<heroname>?\nYou need to hurry up and take those\n<color yellow<<item 55> >coloroff>to my sister!\n<0x10009:0x000a0400>I'm counting on you!")
          					  case 1:
/*<201>*/ 						printf(/* textboxtype: 1, unk: 0, line: 118 */ "<0x10009:0x000b0406>Where did all the <color yellow<<item 55>\n>coloroff>go? You haven't given them to her yet?\n\n\n<0x10009:0x000a0400>To get more <color yellow<<item 55>>coloroff>, just\n<color red<collect them from mushrooms>coloroff>. I'm\ncounting on you, <heroname>.")
          					}
          				  case 1:
/*<220>*/ 					switch (story_flags[395 /* us: 805A9B0C 0x80, jp: 805ACD8C 0x80 */]) {
          					  case 0:
/*<221>*/ 						printf(/* textboxtype: 1, unk: 0, line: 119 */ "<0x10009:0x000b0409>Great--you've made room in your\npouch. Well then, take these!\n\n\n<color yellow<<0x10009:0x000a0400>>coloroff>They're<color yellow< <item 55>>coloroff>.\nThey'll heal the bird's injury.")
          						flw_231:
/*<231>*/ 						switch (is_adventure_pouch_full()) {
          						  case 0:
/*<228>*/ 							printf(/* textboxtype: 1, unk: 0, line: 116 */ "<0x10009:0x0000050d>But, wait... You're carrying too much.\n<0x10009:0x00000400>Make some space in your pouch,\nand then come and talk to me.")
/*<229>*/ 							story_flags[395 /* us: 805A9B0C 0x80, jp: 805ACD8C 0x80 */] = true;
          						  case 1:
/*<746>*/ 							story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */] = true;
/*<230>*/ 							give_item(55 0x37);
/*<747>*/ 							story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */] = false;
/*<232>*/ 							printf(/* textboxtype: 1, unk: 0, line: 117 */ "<0x10009:0x000b0404>If she uses this, it will quickly heal\nthe bird. She should then be able to\nmake her own way home.\n<0x10009:0x00000c00>Take it to my sister!\n<0x10009:0x00000400>You can keep the <color red<Empty Bottle >coloroff>once\nshe's had a chance to use the stuff\ninside.\n\nI'm counting on you,\n<heroname>!")
/*<227>*/ 							story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */] = true;
          						}
          					  case 1:
          						flw_199:
/*<199>*/ 						printf(/* textboxtype: 1, unk: 0, line: 115 */ "<0x10009:0x000b050d>What?! You found my sister?!\nHer bird's injured and can't fly?!\n\n\n<0x10009:0x000a0c00>That's terrible! In that case, take her\nthis as quick as you can!\n\n\n<color yellow<<0x10009:0x00000400>>coloroff>These are <color yellow<<item 55>>coloroff>. \nThey will heal the bird's injury.")
          						goto flw_231
          					}
          				}
          			  case 1:
/*<184>*/ 				printf(/* textboxtype: 1, unk: 0, line: 112 */ "<0x10009:0x000a0c12>I'm so worried... I feel just...sick.\nWhat was she thinking?\n\n\nI always made her take a <color red<bottle>coloroff>\nof potion with her...but today I\nforgot...")
/*<835>*/ 				make_actor_do_something(0, 0)
/*<836>*/ 				printf(/* textboxtype: 1, unk: 0, line: 113 */ "<0x10009:0x000d0400>My sister said she was curious about\nthat <color blue<colorful island>coloroff> that appeared\nrecently, so I suspect she's somewhere\nin the <color red<south>coloroff><color red<<color red<western <color red<sky>coloroff>.")
/*<837>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 838, 'param3': 17}
/*<838>*/ 				printf(/* textboxtype: 1, unk: 0, line: 114 */ "<0x10009:0x00010400>Would you please help us look for her,\n<heroname>?")
          			}
          		  case 1:
/*<202>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 177, 'param3': 31}
/*<177>*/ 			printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x000a0c12>Ugh... I'm so worried...\nSo worried...\n[1-]What's wrong?[2-]Calm down.")
/*<178>*/ 			switch (choice(2)) {
          			  case 0:
/*<179>*/ 				printf(/* textboxtype: 1, unk: 0, line: 106 */ "<0x10009:0x00000411>Ahh, <heroname>. You really\nwant to hear about all my troubles?\nThat's kind of you.")
          				flw_181:
/*<181>*/ 				printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x00000400>So you see, a short while ago my <color red<little\nsister >coloroff>went out for a quick flight, but\nshe hasn't come home yet.\n\nIt was getting late for her to still be\nout, so I went looking for her\neverywhere... But I couldn't find her.\n\n<0x10009:0x000b0500>I just hope nothing has happened.\n...I'm worried sick thinking about it.")
/*<198>*/ 				switch (story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */]) {
          				  case 0:
/*<219>*/ 					story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */] = true;
          					goto flw_199
          				  case 1:
/*<197>*/ 					printf(/* textboxtype: 1, unk: 0, line: 109 */ "<0x10009:0x00000411>Hey, <heroname>, would you\nmind helping me look for her?")
/*<831>*/ 					make_actor_do_something(0, 0)
/*<832>*/ 					printf(/* textboxtype: 1, unk: 0, line: 110 */ "<0x10009:0x000d0400>She said she was curious about that\n<color blue<colorful island>coloroff> that appeared recently,\nso I suspect she's somewhere in the\n<color red<south>coloroff><color red<<color red<western <color red<sky>coloroff>.")
/*<833>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 834, 'param3': 17}
/*<834>*/ 					printf(/* textboxtype: 1, unk: 0, line: 111 */ "<0x10009:0x00010400>I'm counting on you,\n<heroname>!")
/*<182>*/ 					story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */] = true;
          				}
          			  case 1:
/*<180>*/ 				printf(/* textboxtype: 1, unk: 0, line: 107 */ "<0x10009:0x000b0500>CALM?! How could I be calm at a time\nlike this?! ...I'm sorry. I know I\nshouldn't be yelling at you.\nThat won't help.")
          				goto flw_181
          			}
          		}
          	}
          }

          void entrypoint_115_26() {
/*<762>*/ 	start()
/*<765>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<766>*/ 		printf(/* textboxtype: 1, unk: 0, line: 135 */ "<0x10009:0x000b0409>The Isle of the Goddess has...\ndisappeared!? I mean, how does\nthat even happen?\n\n<0x10009:0x000a0400>This can't be good. Something bad is\nabout to happen, I know it. I mean,\nother than the island disappearing...")
          		flw_790:
/*<790>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
          		  case 1:
/*<791>*/ 			switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          			  case 0:
/*<792>*/ 				printf(/* textboxtype: 1, unk: 0, line: 138 */ "<0x10009:0x00010400>Just a while back I bumped into <color blue<Strich>coloroff>,\nwho told me he'd found some <color red<rare bug>coloroff>.\nThe guy headed for the thunderhead\nlooking happier than I'd ever seen him.\nLooks like he's setting himself up to\nbomb his exam again...")
          			  case 1:
/*<767>*/ 				switch (story_flags[811 /* us: 805A9B31 0x08, jp: 805ACDB1 0x08 */]) {
          				  case 0:
/*<771>*/ 					printf(/* textboxtype: 1, unk: 0, line: 137 */ "<0x10009:0x00010400>That <color blue<Strich>coloroff> guy said he was getting\na bunch of insects together so he could\ncreate Bug Heaven on an island <color red<inside\nthat thunderhead>coloroff>!")
          				  case 1:
/*<770>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 768, 'param3': 31}
/*<768>*/ 					printf(/* textboxtype: 1, unk: 0, line: 136 */ "<0x10009:0x000a0a00>Hey, you have a classmate named\n<color blue<Strich>coloroff>, right?\n\n\nHe said he'd discovered some kind of\ninsect paradise <color red<inside that big\nthunderhead>coloroff>. That guy really loves\nbugs, doesn't he?\n<0x10009:0x000b0400>I wonder what he intends to do\nwith this insect paradise...")
/*<769>*/ 					story_flags[811 /* us: 805A9B31 0x08, jp: 805ACDB1 0x08 */] = true;
          				}
          			}
          		}
          	  case 1:
/*<810>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<811>*/ 			printf(/* textboxtype: 1, unk: 0, line: 134 */ "<0x10009:0x00000001>Did you hear all that racket just now?\nIt sounded like the island was fixing to\nshake itself to bits. What was all that?")
          			goto flw_790
          		  case 1:
/*<774>*/ 			switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          			  case 0:
/*<775>*/ 				printf(/* textboxtype: 1, unk: 0, line: 133 */ "<0x10009:0x00000001>Were you up to something down in the\nplaza? All of a sudden the whole sky\ngot real dark.")
          				goto flw_790
          			  case 1:
/*<773>*/ 				switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          				  case 0:
/*<764>*/ 					printf(/* textboxtype: 1, unk: 0, line: 132 */ "<0x10009:0x000a0405>Doesn't it seem weird that all these\nbutterflies have been gathering here in\nthe plaza? There's nothing I can see\nthat would draw them here.")
          					goto flw_790
          				  case 1:
/*<841>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*<842>*/ 						printf(/* textboxtype: 1, unk: 0, line: 131 */ "<0x10009:0x00000001>Hey, <heroname>! Always in a\nhurry to get somewhere, aren't you?")
          						goto flw_790
          					  case 1:
/*<779>*/ 						switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          						  case 0:
/*<784>*/ 							switch (story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */]) {
          							  case 0:
/*<783>*/ 								printf(/* textboxtype: 1, unk: 0, line: 129 */ "<0x10009:0x00000001>Hey there, <heroname>! Have you\nseen those three troublemakers around\nhere recently? It's been a while since\nI've seen them hanging around.\nMaybe failing the test to get promoted\nto the senior class got them to finally \nbuckle down and study for once.")
          							  case 1:
/*<785>*/ 								printf(/* textboxtype: 1, unk: 0, line: 130 */ "<0x10009:0x00000001>Hello, <heroname>! Did I tell you\nI went to see that Fun Fun Island place\nmy sister was talking about?\n\nThe guy I met there was telling me how\nhe dropped his <color red<party wheel >coloroff>below the\nclouds, whatever that is. He looked\npretty broken up about it.\nIf you ask me, he'd best get over it.\nEveryone knows that once something\nfalls below the clouds, it's long gone!")
          							}
          						  case 1:
/*<776>*/ 							switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          							  case 0:
/*<782>*/ 								printf(/* textboxtype: 1, unk: 0, line: 128 */ "<0x10009:0x000a0405>Hey! Did you see what's going on?!\nThe Light Tower is shooting a beam of\nlight off into the thunderhead.\n\nIt's almost like the tower is telling us\nto head into that big mass of\nthunderclouds...or something.")
          							  case 1:
/*<840>*/ 								switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          								  case 0:
          									flw_780:
/*<780>*/ 									printf(/* textboxtype: 1, unk: 0, line: 126 */ "<0x10009:0x00000001>Hey there, <heroname>! I haven't\nseen Zelda around lately. Do you know\nwhat happened to her?")
          								  case 1:
/*<778>*/ 									switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          									  case 0:
/*<781>*/ 										printf(/* textboxtype: 1, unk: 0, line: 127 */ "<0x10009:0x00000001>Hey there, <heroname>!\n\n\n\n<0x10009:0x000a0400>What's that? Something about <color red<two\n>coloroff><color red<sails>coloroff>?<pause 30> Sorry, but I've got zero interest\nin silly riddles. Why don't you go ask\nthe town <color red<fortune-teller>coloroff> for help?")
          									  case 1:
/*<777>*/ 										switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          										  case 0:
          											goto flw_780
          										  case 1:
/*<763>*/ 											printf(/* textboxtype: 1, unk: 0, line: 125 */ "<0x10009:0x000b0e09>Hey, <heroname>, thanks for\ntaking care of my sister like that.\nI won't forget what you did.")
          										}
          									}
          								}
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_115_27() {
/*<795>*/ 	start()
/*<816>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<818>*/ 		printf(/* textboxtype: 1, unk: 0, line: 232 */ "<0x10009:0x000c0401>Can you believe it? The Isle of the\nGoddess fell right out of the sky!\n\n\n<pause 30>It breaks my heart to see it missing\nfrom Skyloft...<0x10009:0x00110e00>but, you know, I think\nit was a message from the goddess,\ntelling us to make the most of our lives.")
/*<819>*/ 		switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          		  case 0:
/*<820>*/ 			printf(/* textboxtype: 1, unk: 0, line: 233 */ "<0x10009:0x000c040b><0x10008:0xffcd>Besides, she's not the only goddess in my life...")
          		  case 1:
          		}
          	  case 1:
/*<815>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<817>*/ 			printf(/* textboxtype: 1, unk: 0, line: 231 */ "<0x10009:0x00001101>Hey, <heroname>. Listen to this...\nIt's a confidential piece of information\nthat hasn't been shared with anyone\nbut you.\n<0x10009:0x000c0400>So, I was flying around outside when\nall of a sudden this weird building\npopped out of the bottom half of the\nIsle of the Goddess!\n<0x10009:0x00110e00>Just what's going on here in Skyloft?!")
          		  case 1:
/*<702>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<703>*/ 				printf(/* textboxtype: 1, unk: 0, line: 229 */ "<0x10009:0x00000005>Hey, <heroname>! \nYou're looking pretty upbeat lately.\n\n\n<0x10009:0x0000040b>That's the spirit! <pause 20>Zelda will be home\nbefore you even know it. Just keep on\nbelieving that while you wait for her\nto come back!")
          			  case 1:
/*<700>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<701>*/ 					printf(/* textboxtype: 1, unk: 0, line: 230 */ "<0x10009:0x00000001>Hey, <heroname>!\nHow are you doing?\n\n\n<0x10009:0x000c1400>Huh?! What's this about a Triforce\nhidden by the goddess?\n\n\n<0x10009:0x00101100>Uhhh, I really don't know anything\nabout that...\n\n\n<0x10009:0x00081400>If you want to know about that kind\nof stuff, then you should ask one of\nthe instructors.")
          				  case 1:
/*<663>*/ 					switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          					  case 0:
/*<662>*/ 						printf(/* textboxtype: 1, unk: 0, line: 229 */ "<0x10009:0x00000005>Hey, <heroname>! \nYou're looking pretty upbeat lately.\n\n\n<0x10009:0x0000040b>That's the spirit! <pause 20>Zelda will be home\nbefore you even know it. Just keep on\nbelieving that while you wait for her\nto come back!")
          					  case 1:
/*<661>*/ 						switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          						  case 0:
/*<660>*/ 							printf(/* textboxtype: 1, unk: 0, line: 228 */ "<0x10009:0x00000001>Hey, <heroname>! How are you?\nFeeling a bit better, I hope.\n\n\n<0x10009:0x00091400>I'm afraid I've got some problems too.\nBut, you know, I try to put on a brave\nface in front of other people.\n\n<0x10009:0x00110400>If you do that, the unhappiness rolls\noff like water on a Loftwing's back.\nI always try to keep that in mind.")
          						  case 1:
/*< 90>*/ 							printf(/* textboxtype: 1, unk: 0, line: 227 */ "<0x10009:0x00000001>Hey, <heroname>! You made it!\nFinally in the senior class! That outfit\nsuits you.\n\n<0x10009:0x00101100>But now's hardly the time to celebrate,\nright? I can't believe Zelda has gone\nmissing.\n\n<0x10009:0x000c1400>You and Zelda are so close... I know\nyou must be worried sick!\n\n\n<0x10009:0x00081400>I don't know... I just have this feeling\nshe's alive and well somewhere!\nYou've got to believe that and wait\nfor her to come home.")
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_115_10() {
/*<185>*/ 	start()
/*<186>*/ 	switch (story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */]) {
          	  case 0:
/*<206>*/ 		switch (adventure_pouch_has(5 0x0005)) {
          		  case 0:
/*<845>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 195, 'param3': 31}
/*<195>*/ 			switch (story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */]) {
          			  case 0:
/*<207>*/ 				printf(/* textboxtype: 1, unk: 0, line: 149 */ "<0x10009:0x0000000b>...Oh, <color yellow<<item 55>>coloroff>! What a relief!\nYou brought the medicine!\n[1-]Here, take it![2]Sorry, no.")
          				flw_208:
/*<208>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_210:
/*<210>*/ 					printf(/* textboxtype: 1, unk: 0, line: 151 */ "<0x10009:0x000b0409>Thank you! Now I can heal my bird's\ninjury.")
/*<607>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 610, 'param3': 47}
/*<610>*/ 					{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 224, 'param3': 15}
/*<224>*/ 					make_actor_do_something(0, 0)
/*<647>*/ 					wait_frames(1)
/*<646>*/ 					{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 256, 'next': 234, 'param3': 15}
/*<234>*/ 					set_camera(7, 0)
/*<235>*/ 					{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': -256, 'next': 608, 'param3': 13}
/*<608>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 236, 'param3': 48}
/*<236>*/ 					wait_frames(45)
/*<233>*/ 					printf(/* textboxtype: 1, unk: 0, line: 152 */ "<0x10009:0x00000004>Now my poor bird should be healthy\nagain in no time!")
/*<237>*/ 					wait_frames(30)
/*<581>*/ 					make_actor_do_something(1, 0)
/*<609>*/ 					set_camera(24, 0)
/*<238>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 1280, 'next': 222, 'param3': 13}
/*<222>*/ 					printf(/* textboxtype: 1, unk: 0, line: 153 */ "<0x10009:0x00000009>I was beginning to think we were\ndoomed...\n\n\nYou've saved my life...and my bird's!\nWe both owe you a big thanks!")
/*<225>*/ 					give_gratitude_crystals();
/*<223>*/ 					printf(/* textboxtype: 1, unk: 0, line: 154 */ "<0x10009:0x00000004>Here we go! See you back in town!")
/*<615>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 582, 'param3': 47}
/*<582>*/ 					make_actor_do_something(2, 0)
/*<613>*/ 					set_camera(25, 0)
/*<617>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 583, 'param3': 17}
/*<583>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 40, 'next': 616, 'param3': 48}
/*<616>*/ 					make_actor_do_something(3, 0)
/*<211>*/ 					story_flags[383 /* us: 805A9B0D 0x02, jp: 805ACD8D 0x02 */] = true;
/*<823>*/ 					story_flags[838 /* us: 805A9B32 0x40, jp: 805ACDB2 0x40 */] = true;
/*<614>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				  case 1:
/*<209>*/ 					printf(/* textboxtype: 1, unk: 0, line: 150 */ "<0x10009:0x00001113>You...you monster!")
          				}
          			  case 1:
/*<730>*/ 				printf(/* textboxtype: 1, unk: 0, line: 144 */ "<0x10009:0x0000050b>So you'll give me those Mushroom\nSpores you're carrying? If you could\njust give them to me, my bird would be\nbetter in no time!\n[1-]Here you go.[2]No way.")
          				goto flw_208
          			}
          		  case 1:
/*<226>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 196, 'param3': 31}
/*<196>*/ 			printf(/* textboxtype: 1, unk: 0, line: 148 */ "<color red<<0x10009:0x00000001>My brother has some bird medicine>coloroff>.\nPlease go find him!\n\n\nI'll be waiting for you here with\nmy bird.")
          		}
          	  case 1:
/*<203>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 188, 'param3': 31}
/*<188>*/ 		printf(/* textboxtype: 1, unk: 0, line: 139 */ "<0x10009:0x0000050b>Well! If it isn't <heroname>!\nI'm so glad you're here. <0x10009:0x00120200>My bird\ngot injured while I was out for a\nquick flight, and now he can't fly.\n<0x10009:0x00011500>I somehow managed to make a\ncrash landing here, but now we can't\nget home!\n\n<0x10009:0x00121500>I can't go home until my bird's better.\n<color red<I need medicine>coloroff> to get him healthy.\nOf course, it can't be human medicine.\nIt has to be <color red<bird medicine>coloroff>.\nHey, <heroname>, <0x10009:0x00150200> I really need\nyour help. Will you go get some bird\nmedicine for me?\n[1-]Of course![2-]Sorry.")
/*<189>*/ 		switch (choice(2)) {
          		  case 0:
/*<190>*/ 			printf(/* textboxtype: 1, unk: 0, line: 140 */ "<0x10009:0x000b0409>Thank you! You're a real lifesaver.")
          			flw_192:
/*<192>*/ 			printf(/* textboxtype: 1, unk: 0, line: 142 */ "<color red<My older brother has some bird\nmedicine.>coloroff> Just go find him, and he'll\ngive you what I need.\n\nI bet he's probably pacing <color red<around\nthe plaza in Skyloft>coloroff>, waiting for me\nto come home and being worried\nout of his mind.")
/*<727>*/ 			story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */] = true;
/*<725>*/ 			switch (adventure_pouch_has(5 0x0005)) {
          			  case 0:
/*<726>*/ 				printf(/* textboxtype: 1, unk: 0, line: 143 */ "<0x10009:0x00090509>So you have the medicine after all!\nWhy didn't you say so? Those\n<color yellow<Mushroom Spores>coloroff> are just what I need!\n\nIf you could just give them to me,\nmy bird would be better in no time!\nDo you mind if I have them?\n[1-]Here you go.[2]No way.")
/*<728>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_210
          				  case 1:
/*<737>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 4352, 'next': 729, 'param3': 13}
/*<729>*/ 					printf(/* textboxtype: 1, unk: 0, line: 145 */ "No? Oh... Well, I guess there's nothing\nelse I can do but ask you to find my\nbrother and tell him what's happened\nhere. Would you mind?")
          				}
          			  case 1:
/*<187>*/ 				switch (story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */]) {
          				  case 0:
/*<193>*/ 					printf(/* textboxtype: 1, unk: 0, line: 146 */ "Huh? Really? You already spoke to\nhim? Well, that makes things easier.")
          					flw_194:
/*<194>*/ 					printf(/* textboxtype: 1, unk: 0, line: 147 */ "I'll be waiting for you here with\nmy bird. Hurry back!")
          				  case 1:
          					goto flw_194
          				}
          			}
          		  case 1:
/*<191>*/ 			printf(/* textboxtype: 1, unk: 0, line: 141 */ "<0x10009:0x000c1513>You...you monster!\n\n\n\n<0x10009:0x000b0409>...But you're just joking, right?\nYou must be...")
          			goto flw_192
          		}
          	}
          }

          void entrypoint_115_28() {
/*<797>*/ 	start()
/*<805>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<806>*/ 		printf(/* textboxtype: 1, unk: 0, line: 226 */ "<0x10009:0x000c0456>Did you hear all that noise outside a\nlittle while ago? I wonder what that\nwas all about...")
          	  case 1:
/*<807>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
          			flw_86:
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 0, line: 223 */ "<0x10009:0x00000001>Well, if it isn't <heroname>.\nYou know, you seem to be getting more\nhandsome by the day.\n\nThat knight's uniform really suits you.\nAnd you give off that “reliable guy\"\nvibe too.")
          		  case 1:
/*<802>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<804>*/ 				printf(/* textboxtype: 1, unk: 0, line: 225 */ "<0x10009:0x00080e06>Whoa, you can already Spiral Charge?!\n\n\n\n<0x10009:0x00080909>Wow...that's so cool, <heroname>!\n<pause 30><0x10009:0x000c0400>I mean...<pause 20>whatever. I'm sure Pipit can\ndo it, too!")
          			  case 1:
/*<801>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<803>*/ 					printf(/* textboxtype: 1, unk: 0, line: 224 */ "<0x10009:0x00000006>Huh, the Triforce?<pause 30> What's that\nsupposed to mean?")
          				  case 1:
          					goto flw_86
          				}
          			}
          		}
          	}
          }

          void entrypoint_115_11() {
/*<217>*/ 	start()
/*<759>*/ 	switch (story_flags[1082 /* us: 805A9B53 0x01, jp: 805ACDD3 0x01 */]) {
          	  case 0:
/*<704>*/ 		switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          		  case 0:
/*<705>*/ 			printf(/* textboxtype: 1, unk: 0, line: 162 */ "<0x10009:0x00000001>The Isle of the Goddess has\nvanished, <heroname>!\n\n\n<0x10009:0x00001513>And it was such a great resting spot\nfor the birds...")
          		  case 1:
/*<808>*/ 			switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          			  case 0:
/*<809>*/ 				printf(/* textboxtype: 1, unk: 0, line: 161 */ "<0x10009:0x00000013>Wow, I've never felt the island shake\nlike it did. What could've happened?")
          			  case 1:
/*<753>*/ 				switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          				  case 0:
/*<758>*/ 					printf(/* textboxtype: 1, unk: 0, line: 160 */ "<0x10009:0x00000001>Hey, <heroname>.\n\n\n\n<0x10009:0x000c0200>So is it true you learned how to get\nyour Loftwing to pull off that\nlegendary Spiral Charge maneuver?<pause 30>\n<0x10009:0x000c050b>That's amazing!")
          				  case 1:
/*<752>*/ 					switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          					  case 0:
/*<757>*/ 						printf(/* textboxtype: 1, unk: 0, line: 159 */ "<0x10009:0x00000057>What?! The Triforce?!\nYeah, never heard of it...\n\n\nHave you tried asking the Knight\nAcademy headmaster about it?")
          					  case 1:
/*<751>*/ 						switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          						  case 0:
          							flw_754:
/*<754>*/ 							printf(/* textboxtype: 1, unk: 0, line: 156 */ "<0x10009:0x00000001>Oh, hey, <heroname>. \nWhere's your friend from the \nacademy? You know, Zelda<pause 5>.<pause 5>.<pause 5>.<pause 5>\nWas that it?\nI haven't seen you two together at all\nrecently. Did you have a fight or\nsomething?")
          						  case 1:
/*<748>*/ 							switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          							  case 0:
/*<756>*/ 								printf(/* textboxtype: 1, unk: 0, line: 158 */ "<0x10009:0x00000013>For a moment there, it looked like\nthe sky was shrouded in darkness.\nI wonder if something happened...")
          							  case 1:
/*<839>*/ 								switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          								  case 0:
          									goto flw_754
          								  case 1:
/*<750>*/ 									switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          									  case 0:
/*<755>*/ 										printf(/* textboxtype: 1, unk: 0, line: 157 */ "<0x10009:0x00000001>Hey, <heroname>.\n\n\n\n<0x10009:0x00110057><color red<Two whirling sails>coloroff>, you say?\n\n\n\n<0x10009:0x00010000>You know, those blades on the\n<color red<windmills >coloroff>look kind of like whirling\nsails, don't they? I wonder if that's it...")
          									  case 1:
/*<749>*/ 										switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          										  case 0:
          											goto flw_754
          										  case 1:
/*<218>*/ 											printf(/* textboxtype: 1, unk: 0, line: 155 */ "<0x10009:0x0000000b>Oh, <heroname>. Thanks for all \nyour help!\n\n\n<0x10009:0x00000400>My bird is back to full health.\nThank you so much.")
          										}
          									}
          								}
          							}
          						}
          					}
          				}
          			}
          		}
          	  case 1:
/*<760>*/ 		printf(/* textboxtype: 1, unk: 0, line: 155 */ "<0x10009:0x0000000b>Oh, <heroname>. Thanks for all \nyour help!\n\n\n<0x10009:0x00000400>My bird is back to full health.\nThank you so much.")
/*<761>*/ 		story_flags[1082 /* us: 805A9B53 0x01, jp: 805ACDD3 0x01 */] = true;
          	}
          }

          void entrypoint_115_12() {
/*< 28>*/ 	start()
/*<654>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 673, 'param3': 32}
/*<673>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 29, 'param3': 24}
/*< 29>*/ 	printf(/* textboxtype: 1, unk: 0, line: 163 */ "Ooooooooh...")
/*<106>*/ 	set_camera(3, 0)
/*<653>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 674, 'param3': 17}
/*<674>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 106, 'next': 107, 'param3': 24}
/*<107>*/ 	printf(/* textboxtype: 1, unk: 0, line: 164 */ "Oooooh... Somebody...\nPlease, somebody help me...")
/*< 30>*/ 	story_flags[545 /* us: 805A9B17 0x04, jp: 805ACD97 0x04 */] = true;
/*< 54>*/ 	scene_flags[0 'Skyloft'][65 /* 0x9 02 */] = true;
/*<652>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_115_13() {
/*<501>*/ 	start()
/*<504>*/ 	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          	  case 0:
/*<510>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<676>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 106, 'next': 506, 'param3': 24}
/*<506>*/ 			printf(/* textboxtype: 1, unk: 0, line: 167 */ "<0x10009:0x00000001>Please forget about the paper...\nGood-bye...")
/*<509>*/ 			story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          			flw_507:
/*<507>*/ 			scene_flags[0 'Skyloft'][65 /* 0x9 02 */] = false;
          		  case 1:
/*<677>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 505, 'param3': 24}
/*<505>*/ 			printf(/* textboxtype: 1, unk: 0, line: 166 */ "Ahhh... <color red<Paper>coloroff>! You brought me\nsome <color red<paper>coloroff>!\n\n\nI'll open the door... Please come in...")
/*<508>*/ 			story_flags[548 /* us: 805A9B17 0x20, jp: 805ACD97 0x20 */] = true;
/*<709>*/ 			story_flags[549 /* us: 805A9B17 0x40, jp: 805ACD97 0x40 */] = true;
          			goto flw_507
          		}
          	  case 1:
/*<675>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 502, 'param3': 24}
/*<502>*/ 		printf(/* textboxtype: 1, unk: 0, line: 165 */ "Oooh... <color red<Paper>coloroff>...\n\n\n\nPlease... Somebody bring me <color red<paper>coloroff>...\n<color red<Bring me some paper>coloroff>...\n\n\n<color red<Any kind of paper at all>coloroff>... Ooooh...")
/*<503>*/ 		story_flags[546 /* us: 805A9B17 0x08, jp: 805ACD97 0x08 */] = true;
          	}
          }

          void entrypoint_115_14() {
/*< 31>*/ 	start()
/*< 33>*/ 	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          	  case 0:
          		goto flw_58
          	  case 1:
/*<141>*/ 		switch (zone_temp_flags[11 /* 0x0 08 */]) {
          		  case 0:
/*<163>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 142, 'param3': 13}
/*<142>*/ 			printf(/* textboxtype: 1, unk: 0, line: 185 */ "<0x10009:0x00001b1b>You fool! How dare you! This is no\nordinary piece of paper! It's a <color red<letter>coloroff>!\nA very special one at that!\n\n<0x10009:0x00172500>I put my heart into every word...\nI guess you could say it's sort of like a...\nAll right, fine! It's a love letter!\n\n<0x10009:0x00171800>And that is why you will not, under any\ncircumstances, EVER allow it to be\nused as toilet paper! Do you hear me?!")
/*<169>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 172, 'param3': 13}
/*<172>*/ 			wait_frames(30)
/*<167>*/ 			printf(/* textboxtype: 1, unk: 0, line: 186 */ "So listen up! The person you must give\nit to is a girl... A senior student...\nHer name is <color blue<Karane>coloroff>.\n\n<0x10009:0x00010c11>You know who I mean, right?\nShe's the one with the <color red<round hat>coloroff>.\nShe's really cute. You know the one.\n\n<0x10009:0x00171800>And don't you dare...not even by\nmistake...even think of giving it to\nthat <color red<weirdo in the restroom>coloroff>! Swear it!")
/*<170>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 549, 'param3': 13}
/*<549>*/ 			wait_frames(45)
/*<168>*/ 			printf(/* textboxtype: 1, unk: 0, line: 187 */ "Here it is. I'm entrusting this letter\nto you. So don't read what's inside!\nDo you hear me?!")
/*<710>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 109, 'next': 165, 'param3': 24}
/*<165>*/ 			story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */] = true;
/*<166>*/ 			give_item(158 0x9E);
/*<164>*/ 			printf(/* textboxtype: 1, unk: 0, line: 188 */ "I'm counting on you,\n<heroname>! If you don't\nmess this up, then maybe I'll let\nyou be my sidekick! Now get to it!")
/*<550>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<139>*/ 			switch (zone_temp_flags[10 /* 0x0 04 */]) {
          			  case 0:
/*<160>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 3072, 'next': 108, 'param3': 13}
/*<108>*/ 				printf(/* textboxtype: 1, unk: 0, line: 183 */ "<0x10009:0x00000008>Huh...? What's your problem? Why are\nyou looking at the restroom?")
/*<162>*/ 				{'type': 'type3', 'subType': 4, 'param1': 23, 'param2': 6144, 'next': 161, 'param3': 13}
/*<161>*/ 				printf(/* textboxtype: 1, unk: 0, line: 184 */ "What? There's someone in the\nrestroom at night who wants...paper?")
/*<143>*/ 				zone_temp_flags[11 /* 0x0 08 */] = true;
          			  case 1:
/*< 32>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 135, 'param3': 31}
/*<135>*/ 				make_actor_do_something(1, 0)
/*<155>*/ 				{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4608, 'next': 34, 'param3': 13}
/*< 34>*/ 				printf(/* textboxtype: 1, unk: 0, line: 177 */ "Hmm... Should I give it to her...?\nShould I not give it to her...?")
/*<136>*/ 				make_actor_do_something(2, 0)
/*<672>*/ 				{'type': 'type3', 'subType': 4, 'param1': 20, 'param2': 4889, 'next': 35, 'param3': 13}
/*< 35>*/ 				printf(/* textboxtype: 1, unk: 0, line: 178 */ "...Uwah! <0x30001:0x><heroname>, it's you!\nDon't sneak up on me like that!\n\n\n<0x10009:0x00171800>I have a serious dilemma on my mind\nright now. And you're distracting me!\n[1-]Dilemma?[2-]Can I help?")
/*<156>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 3072, 'next': 37, 'param3': 13}
/*< 37>*/ 				switch (choice(2)) {
          				  case 0:
/*< 36>*/ 					printf(/* textboxtype: 1, unk: 0, line: 179 */ "What? You want to hear about it?\n\n\n\n<0x10009:0x0000001c>Hmph! Normally I would never,\never tell someone like you...\nBut these are dire times...")
          					flw_157:
/*<157>*/ 					{'type': 'type3', 'subType': 4, 'param1': 23, 'param2': 6144, 'next': 39, 'param3': 13}
/*< 39>*/ 					printf(/* textboxtype: 1, unk: 0, line: 181 */ "Come to think of it, you might be just\nthe person I need! You seem to be\npretty good with the ladies...\n\n...Ugh. I can't believe I just said that.\nBut whatever! Let's do this!\n<0x30001:0x><heroname>! I have a task for\nyou!")
/*<159>*/ 					{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 171, 'param3': 13}
/*<171>*/ 					wait_frames(45)
/*<158>*/ 					printf(/* textboxtype: 1, unk: 0, line: 182 */ "So listen up... Your mission is to take\nthis piece of <color red<paper >coloroff>to a certain person!\nIt's a very important piece of <color red<paper>coloroff>!\nMake SURE you deliver it.")
/*<140>*/ 					zone_temp_flags[10 /* 0x0 04 */] = true;
          				  case 1:
/*< 38>*/ 					printf(/* textboxtype: 1, unk: 0, line: 180 */ "Huh? Really?!\n\n\n\n<0x10009:0x0000001c>Arrgh... Normally, I would never ask\nsomeone like you for help... But these\nare dire times...")
          					goto flw_157
          				}
          			}
          		}
          	}
          }

          void entrypoint_115_15() {
/*< 41>*/ 	start()
/*<118>*/ 	switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          	  case 0:
/*<110>*/ 		set_camera(4, 0)
/*<678>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 106, 'next': 42, 'param3': 24}
/*< 42>*/ 		printf(/* textboxtype: 1, unk: 0, line: 167 */ "<0x10009:0x00000001>Please forget about the paper...\nGood-bye...")
/*< 55>*/ 		story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          		flw_53:
/*< 53>*/ 		story_flags[550 /* us: 805A9B17 0x80, jp: 805ACD97 0x80 */] = true;
          	  case 1:
/*<109>*/ 		set_camera(4, 0)
/*<137>*/ 		make_actor_do_something(0, 0)
/*<112>*/ 		wait_frames(45)
/*<111>*/ 		wait_frames(45)
          		goto flw_53
          	}
          }

          void entrypoint_115_16() {
/*< 43>*/ 	start()
/*<117>*/ 	switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          	  case 0:
/*< 44>*/ 		printf(/* textboxtype: 1, unk: 0, line: 167 */ "<0x10009:0x00000001>Please forget about the paper...\nGood-bye...")
/*<138>*/ 		make_actor_do_something(1, 0)
/*< 45>*/ 		story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          	  case 1:
/*<131>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 31}
/*<144>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4, 'param2': 1, 'next': 154, 'param3': 13}
/*<154>*/ 		wait_frames(45)
/*< 46>*/ 		printf(/* textboxtype: 1, unk: 0, line: 168 */ "Ooooh...<color red< Paper>coloroff>...\nI need <color red<paper>coloroff>...\n\n\nI'm not angry or anything...\n<color red<I just need some paper>coloroff>...\n[1-]Give letter.[2]Don't do it.")
/*< 47>*/ 		switch (choice(2)) {
          		  case 0:
/*< 49>*/ 			printf(/* textboxtype: 1, unk: 0, line: 170 */ "<0x10009:0x000b0004>Huh? You're giving me paper?\nI'm so happy...")
/*<146>*/ 			{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 0, 'next': 511, 'param3': 13}
/*<511>*/ 			wait_frames(45)
/*<145>*/ 			printf(/* textboxtype: 1, unk: 0, line: 171 */ "But...this looks like someone's letter...\nAre you sure I can have this?\n[1-]Yes.[2]No.")
/*< 50>*/ 			switch (choice(2)) {
          			  case 0:
/*<147>*/ 				{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 0, 'next': 711, 'param3': 13}
/*<711>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 109, 'next': 706, 'param3': 24}
/*<706>*/ 				make_actor_do_something(3, 0)
/*<517>*/ 				set_camera(8, 0)
/*<516>*/ 				wait_frames(30)
/*<153>*/ 				printf(/* textboxtype: 1, unk: 0, line: 172 */ "<0x10009:0x00000002>Thank you... I will use it with care...\n\n\n\nBut I'm shy, so don't ask me what I\nwant the paper for...\n\n\nMay we meet again...\nYou kind soul...")
/*<514>*/ 				make_actor_do_something(1, 0)
/*<513>*/ 				story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
/*<512>*/ 				story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */] = true;
/*<554>*/ 				story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */] = true;
/*<515>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
          				flw_48:
/*< 48>*/ 				printf(/* textboxtype: 1, unk: 0, line: 169 */ "<0x10009:0x00050003>Ooooh... Somebody... Paper...")
          			}
          		  case 1:
          			goto flw_48
          		}
          	}
          }

          void entrypoint_115_17() {
/*< 51>*/ 	start()
/*< 52>*/ 	switch (story_flags[553 /* us: 805A9B16 0x04, jp: 805ACD96 0x04 */]) {
          	  case 0:
/*<518>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 148, 'param3': 32}
/*<148>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 0, 'next': 149, 'param3': 13}
/*<149>*/ 		printf(/* textboxtype: 1, unk: 0, line: 176 */ "<0x10009:0x00000002>Ahh... My love... I will always be by\nyour side... Tee hee...")
          	  case 1:
/*<824>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 527, 'param3': 31}
/*<527>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 152, 'param3': 32}
/*<152>*/ 		{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 526, 'param3': 13}
/*<526>*/ 		wait_frames(15)
/*<151>*/ 		printf(/* textboxtype: 1, unk: 0, line: 173 */ "<0x10009:0x00000004>Ah... You're the one from the\nother day...")
/*<524>*/ 		set_camera(9, 0)
/*<525>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 150, 'param3': 15}
/*<150>*/ 		printf(/* textboxtype: 1, unk: 0, line: 174 */ "<0x10009:0x00060002>It's good to see you again... Actually,\nthanks to you, I met my true love...\n\n\nYes, him...\n\n\n\n<0x10009:0x000c0000>It all started with that letter that\nyou gave me...\n\n\n<0x10009:0x00060000>Those beautiful words of affection\ncaused me to fall hopelessly in love...")
/*<521>*/ 		printf(/* textboxtype: 1, unk: 0, line: 175 */ "<0x10009:0x00000002>Ahh, my heart is bursting with thoughts\nof him... I feel so excited, so cheerful,\nso full of life...")
/*<723>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 522, 'param3': 42}
/*<522>*/ 		give_gratitude_crystals();
/*<523>*/ 		set_camera(-1, 0)
/*<658>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 0, 'next': 519, 'param3': 13}
/*<519>*/ 		printf(/* textboxtype: 1, unk: 0, line: 176 */ "<0x10009:0x00000002>Ahh... My love... I will always be by\nyour side... Tee hee...")
/*<520>*/ 		story_flags[553 /* us: 805A9B16 0x04, jp: 805ACD96 0x04 */] = true;
/*<655>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_115_18() {
/*<357>*/ 	start()
/*<664>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1005, 'next': 358, 'param3': 24}
/*<358>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 359, 'param3': 32}
/*<359>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 18, 'next': 360, 'param3': 32}
/*<360>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 826, 'param3': 32}
/*<826>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 30, 'next': 822, 'param3': 47}
/*<822>*/ 	make_actor_do_something(3, 5)
/*<621>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5121, 'param2': -256, 'next': 361, 'param3': 13}
/*<361>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 5, 'next': 828, 'param3': 16}
/*<828>*/ 	set_camera(31, 0)
/*<827>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 30, 'next': 362, 'param3': 48}
/*<362>*/ 	set_camera(11, 0)
/*<365>*/ 	{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 356, 'next': 363, 'param3': 15}
/*<363>*/ 	printf(/* textboxtype: 1, unk: 0, line: 244 */ "You're the one who sent the letter,\nright?")
/*<366>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 364, 'param3': 16}
/*<364>*/ 	printf(/* textboxtype: 1, unk: 0, line: 245 */ "Y-yes...")
/*<622>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': -256, 'next': 367, 'param3': 13}
/*<367>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 5, 'next': 368, 'param3': 16}
/*<368>*/ 	printf(/* textboxtype: 1, unk: 0, line: 246 */ "<0x10009:0x14000009>Tee hee. It was a wonderful love letter.\nThank you!")
/*<370>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 369, 'param3': 16}
/*<369>*/ 	printf(/* textboxtype: 1, unk: 0, line: 247 */ "<0x10009:0x05000011>It wasn't...that...great...")
/*<371>*/ 	set_camera(12, 0)
/*<375>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1301, 'param2': 3072, 'next': 373, 'param3': 13}
/*<373>*/ 	printf(/* textboxtype: 1, unk: 0, line: 248 */ "And, um... Wh-what's your...answer?")
/*<376>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 5, 'next': 374, 'param3': 16}
/*<374>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5131, 'param2': -256, 'next': 372, 'param3': 13}
/*<372>*/ 	printf(/* textboxtype: 1, unk: 0, line: 249 */ "<0x10009:0x14000012>My answer? Ah...my answer...")
/*<377>*/ 	set_camera(13, 0)
/*<623>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5121, 'param2': 256, 'next': 380, 'param3': 13}
/*<380>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 274, 'next': 601, 'param3': 15}
/*<601>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 381, 'param3': 16}
/*<381>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1288, 'param2': 3328, 'next': 378, 'param3': 13}
/*<378>*/ 	printf(/* textboxtype: 1, unk: 0, line: 250 */ "<0x10009:0x05002519>Oh, please! Please go out...with me!")
/*<382>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': 256, 'next': 602, 'param3': 13}
/*<602>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 551, 'param3': 50}
/*<551>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4609, 'param2': 3074, 'next': 379, 'param3': 13}
/*<379>*/ 	printf(/* textboxtype: 1, unk: 2, line: 251 */ "Wait!")
/*<383>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 18, 'next': 384, 'param3': 17}
/*<384>*/ 	set_camera(14, 0)
/*<385>*/ 	wait_frames(45)
/*<386>*/ 	set_camera(19, 0)
/*<388>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4625, 'param2': 3072, 'next': 387, 'param3': 13}
/*<387>*/ 	printf(/* textboxtype: 1, unk: 0, line: 252 */ "I think you should go out with me\ninstead! I mean...er...I want to ask\nyou out!")
/*<391>*/ 	set_camera(15, 0)
/*<648>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4609, 'param2': 256, 'next': 624, 'param3': 13}
/*<624>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': -256, 'next': 603, 'param3': 13}
/*<603>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 99, 'next': 389, 'param3': 50}
/*<389>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1306, 'param2': 6912, 'next': 390, 'param3': 13}
/*<390>*/ 	printf(/* textboxtype: 1, unk: 0, line: 253 */ "<0x10009:0x05001b09>What...? Hey, hold on there!\nWhat are you trying to pull all\nof a sudden?")
/*<604>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 99, 'next': 392, 'param3': 50}
/*<392>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5140, 'param2': 2304, 'next': 393, 'param3': 13}
/*<393>*/ 	printf(/* textboxtype: 1, unk: 0, line: 254 */ "Errr...<0x10009:0x14000900>\nI want to go out with... Pipit...")
/*<649>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 99, 'next': 650, 'param3': 50}
/*<650>*/ 	printf(/* textboxtype: 1, unk: 0, line: 255 */ "<0x10009:0x05150c10>Ha! See that, you fool?! I knew she\nwould choose me! She's been checking\nme out for weeks! Uhh, wait a second...")
/*<394>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 629, 'param3': 17}
/*<629>*/ 	printf(/* textboxtype: 1, unk: 0, line: 256 */ "<0x10009:0x05111d1d>Wait... Really?!")
/*<630>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': 0, 'next': 620, 'param3': 13}
/*<620>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 274, 'next': 395, 'param3': 15}
/*<395>*/ 	set_camera(14, 0)
/*<628>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 397, 'param3': 17}
/*<397>*/ 	{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 18, 'next': 396, 'param3': 14}
/*<396>*/ 	wait_frames(10)
/*<605>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 99, 'next': 398, 'param3': 50}
/*<398>*/ 	printf(/* textboxtype: 1, unk: 0, line: 257 */ "<0x10009:0x1201ff00>Truly? You choose me?")
/*<606>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 399, 'param3': 50}
/*<399>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5140, 'param2': 2323, 'next': 400, 'param3': 13}
/*<400>*/ 	printf(/* textboxtype: 1, unk: 0, line: 258 */ "Yes! <0x10009:0x14000900>I'm so happy. Thank you...")
/*<632>*/ 	set_camera(16, 0)
/*<636>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5121, 'param2': 256, 'next': 635, 'param3': 13}
/*<635>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1306, 'param2': 7936, 'next': 631, 'param3': 13}
/*<631>*/ 	printf(/* textboxtype: 1, unk: 0, line: 259 */ "<0x10009:0x05001d17>This can't be happening...")
/*<634>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1293, 'param2': 7936, 'next': 633, 'param3': 13}
/*<633>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 5, 'next': 639, 'param3': 14}
/*<639>*/ 	wait_frames(1)
/*<638>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 261, 'next': 637, 'param3': 15}
/*<637>*/ 	printf(/* textboxtype: 1, unk: 0, line: 260 */ "<0x10009:0x05000018>Aaaaaghhhh!!!")
/*<626>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 99, 'next': 625, 'param3': 50}
/*<625>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 5, 'next': 407, 'param3': 17}
/*<407>*/ 	set_camera(17, 0)
/*<619>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1293, 'param2': 1024, 'next': 618, 'param3': 13}
/*<618>*/ 	{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 5, 'next': 552, 'param3': 14}
/*<552>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4625, 'param2': 1024, 'next': 401, 'param3': 13}
/*<401>*/ 	printf(/* textboxtype: 1, unk: 0, line: 261 */ "<0x10009:0x12000001><0x30001:0x><heroname>!")
/*<402>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 100, 'next': 403, 'param3': 16}
/*<403>*/ 	set_camera(18, 0)
/*<643>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4616, 'param2': 1024, 'next': 640, 'param3': 13}
/*<640>*/ 	printf(/* textboxtype: 1, unk: 0, line: 262 */ "When you told me about the letter,\nit was at that moment I finally\nrealized. I realized that...I love her.\n\n<0x10009:0x12090c00>I thought to myself, “I can't let anyone\nelse take her from me!\"\n\n\n<0x10009:0x12010400>If you hadn't told me, I might\nnever have even noticed my own\nfeelings for her.\n\n<0x10009:0x1208000b>I'm so grateful. I don't know how I can\never thank you!")
/*<651>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 641, 'param3': 42}
/*<641>*/ 	give_gratitude_crystals();
/*<642>*/ 	set_camera(20, 0)
/*<404>*/ 	story_flags[561 /* us: 805A9B19 0x04, jp: 805ACD99 0x04 */] = true;
/*<405>*/ 	story_flags[558 /* us: 805A9B16 0x80, jp: 805ACD96 0x80 */] = true;
/*<659>*/ 	story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
/*<355>*/ 	story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */] = true;
/*<356>*/ 	story_flags[560 /* us: 805A9B19 0x02, jp: 805ACD99 0x02 */] = true;
/*<553>*/ 	story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */] = true;
/*<699>*/ 	story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */] = true;
/*<627>*/ 	zone_temp_flags[21 /* 0x3 20 */] = false;
/*<406>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 793, 'param3': 42}
/*<793>*/ 	zone_temp_flags[20 /* 0x3 10 */] = true;
          }

          void entrypoint_115_01() {
          	start()
/*<  4>*/ 	set_camera(2, 0)
/*<  3>*/ 	{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 100, 'next': 1, 'param3': 15}
/*<  1>*/ 	set_camera(1, 0)
/*<  2>*/ 	story_flags[203 /* us: 805A9AEF 0x20, jp: 805ACD6F 0x20 */] = true;
/*<644>*/ 	scene_flags[0 'Skyloft'][0 /* 0x1 01 */] = false;
/*<645>*/ 	scene_flags[0 'Skyloft'][21 /* 0x3 20 */] = false;
          }

          void entrypoint_115_19() {
/*<100>*/ 	start()
/*<684>*/ 	switch (story_flags[558 /* us: 805A9B16 0x80, jp: 805ACD96 0x80 */]) {
          	  case 0:
/*<101>*/ 		switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          		  case 0:
/*<537>*/ 			switch (zone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*<540>*/ 				printf(/* textboxtype: 1, unk: 0, line: 204 */ "<0x10009:0x001b1f1b>Ever since you botched that mission\nwith the letter, I've been having\nnightmares and can't get any sleep!\nIt's just one thing after another!\nWhat is going on?! I wonder if that\nbed is cursed? Maybe it's <color blue<Groose>coloroff>'s\nrevenge! You gotta help me,\n<heroname>!")
          			  case 1:
/*<538>*/ 				printf(/* textboxtype: 1, unk: 0, line: 203 */ "<0x10009:0x001b1f17>What do you want, <heroname>?!\nI won't forget what you've done to me!\n\n\nAnd ever since you botched that thing\nwith the letter, I've been having\nnightmares and can't get any sleep!\nIt's just one thing after another!\nWhat is going on?! I wonder if that\nbed is cursed? Maybe it's <color blue<Groose>coloroff>'s\nrevenge! <0x10009:0x001c1a18>You gotta help me,\n<heroname>!")
/*<539>*/ 				zone_temp_flags[0 /* 0x1 01 */] = true;
          			}
          		  case 1:
/*<569>*/ 			{'type': 'type3', 'subType': 4, 'param1': 27, 'param2': 7936, 'next': 102, 'param3': 13}
/*<102>*/ 			printf(/* textboxtype: 1, unk: 0, line: 205 */ "<0x10009:0x00000017>It's over... It's all over...\n\n\n\n<0x10009:0x001c1f00>What do you want, <heroname>?!\nHave you come to laugh at me in my\nmiserable state? Just leave me alone!")
          		}
          	  case 1:
/*<825>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 685, 'param3': 31}
/*<685>*/ 		printf(/* textboxtype: 1, unk: 0, line: 202 */ "<0x10009:0x001b1f17>What do you want, <heroname>?!\nI'm just hurting so bad right now...\n\n\n<0x10009:0x001c1f00>I don't know who that was in the\nrestroom, but I'm completely freaked\nout just knowing that they read my\nletter...\nI still can't even believe it! Who exactly\ndid you give it to?!")
          	}
          }

