          void entrypoint_302_01() {
          	start()
/*< 19>*/ 	switch (context_related3(0)) {
          	  case 0:
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3585, 'next': 16, 'param3': 13}
/*< 16>*/ 		switch (story_flags[180 /* us: 805A9AE6 0x08, jp: 805ACD66 0x08 */]) {
          		  case 0:
/*< 14>*/ 			printf(/* textboxtype: 0, unk: 1, line: 4 */ "Welcome!")
/*<156>*/ 			{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 53, 'param3': 13}
          			flw_53:
/*< 53>*/ 			switch (context_related2(1)) {
          			  case 0:
/*< 84>*/ 				{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5640, 'next': 54, 'param3': 13}
/*< 54>*/ 				printf(/* textboxtype: 0, unk: 1, line: 7 */ "Here's how it works: you go on and dig\nup ALL the Rupees you can! Well,\nuntil you dig your mitts into a\nspicy little bomb...\nWould you like to... <0x10009:0x00141614>Oh, I'm sorry,\nbut you don't look so good. Why not\ncome back when you have some\nmore hearts?")
/*<118>*/ 				set_camera(5, 0)
/*<119>*/ 				printf(/* textboxtype: 2, unk: 0, line: 8 */ "If you like, use the seat over there\nand take a load off.")
          			  case 1:
/*< 83>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 6, 'next': 1, 'param3': 13}
/*<  1>*/ 				printf(/* textboxtype: 1, unk: 1, line: 0 */ "Do you like money? How about\nexplosions? Well, dig up some Rupees\nbefore you hit a bomb in a suspenseful\ngame of <color blue<Thrill Digger>coloroff>! Want to try it?\n[1-]Beginner![2-]Intermediate![3-]Expert![4]No, thanks.")
          				flw_85:
/*< 85>*/ 				{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 3, 'param3': 13}
/*<  3>*/ 				switch (choice(4)) {
          				  case 0:
/*< 58>*/ 					switch (temp_flags[14 /* 0x0 40 */]) {
          					  case 0:
          						flw_74:
/*< 74>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 87, 'param3': 12}
/*< 87>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5638, 'next': 59, 'param3': 13}
/*< 59>*/ 						printf(/* textboxtype: 0, unk: 1, line: 10 */ "It's <color red<30 Rupees >coloroff>to play. Want to give\nit a go?\n[1-]You bet![2]Nope.")
/*< 88>*/ 						{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 37, 'param3': 13}
/*< 37>*/ 						switch (choice(2)) {
          						  case 0:
/*<110>*/ 							check_item_flag(501, 30)
/*<109>*/ 							switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 37}) {
          							  case 0:
/*< 36>*/ 								rupees += -30;
/*< 90>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5400, 'next': 34, 'param3': 13}
/*< 34>*/ 								printf(/* textboxtype: 0, unk: 1, line: 1 */ "Hope you dig up lots of Rupees!\nJust be careful what you're poking\ndown in the dirt. Could go KA-BOOM!\nSo uh...good luck!")
/*< 57>*/ 								temp_flags[14 /* 0x0 40 */] = true;
/*< 33>*/ 								make_actor_do_something(0, 0)
/*< 47>*/ 								changeScene(1, 0) // 
          							  case 1:
/*< 89>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4633, 'next': 35, 'param3': 13}
/*< 35>*/ 								printf(/* textboxtype: 1, unk: 0, line: 3 */ "You haven't got enough Rupees.\nSave some up and then come back!")
          							}
          						  case 1:
/*< 75>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 38, 'param3': 12}
/*< 38>*/ 							printf(/* textboxtype: 1, unk: 1, line: 15 */ "So which course will it be?\n[1-]Beginner.[2-]Intermediate.[3-]Expert.[4]None.")
          							goto flw_85
          						}
          					  case 1:
/*< 21>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "The Beginner course has less spots to\nburrow into, but it's great for\nfirst-timers!")
          						goto flw_74
          					}
          				  case 1:
/*< 62>*/ 					switch (temp_flags[15 /* 0x0 80 */]) {
          					  case 0:
          						flw_76:
/*< 76>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 91, 'param3': 12}
/*< 91>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5638, 'next': 22, 'param3': 13}
/*< 22>*/ 						printf(/* textboxtype: 1, unk: 0, line: 12 */ "It'll cost you <color red<50 Rupees >coloroff>a go.\nInterested?\n[1-]Sure.[2]Nope.")
/*< 92>*/ 						{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 31, 'param3': 13}
/*< 31>*/ 						switch (choice(2)) {
          						  case 0:
/*< 28>*/ 							switch (has_rupees(50)) {
          							  case 0:
/*< 30>*/ 								rupees += -50;
/*< 96>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5400, 'next': 27, 'param3': 13}
/*< 27>*/ 								printf(/* textboxtype: 0, unk: 1, line: 1 */ "Hope you dig up lots of Rupees!\nJust be careful what you're poking\ndown in the dirt. Could go KA-BOOM!\nSo uh...good luck!")
/*< 60>*/ 								temp_flags[15 /* 0x0 80 */] = true;
/*< 26>*/ 								make_actor_do_something(0, 0)
/*< 45>*/ 								changeScene(2, 0) // 
          							  case 1:
/*< 95>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4633, 'next': 29, 'param3': 13}
/*< 29>*/ 								printf(/* textboxtype: 1, unk: 0, line: 3 */ "You haven't got enough Rupees.\nSave some up and then come back!")
          							}
          						  case 1:
/*< 77>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 32, 'param3': 12}
/*< 32>*/ 							printf(/* textboxtype: 1, unk: 1, line: 15 */ "So which course will it be?\n[1-]Beginner.[2-]Intermediate.[3-]Expert.[4]None.")
          							goto flw_85
          						}
          					  case 1:
/*< 63>*/ 						printf(/* textboxtype: 0, unk: 0, line: 11 */ "The Intermediate course has plenty of\nspots to sink your mitts into, but watch\nout for <color yellow<Rupoors>coloroff>.")
          						goto flw_76
          					}
          				  case 2:
/*< 64>*/ 					switch (temp_flags[16 /* 0x3 01 */]) {
          					  case 0:
          						flw_78:
/*< 78>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 93, 'param3': 12}
/*< 93>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5638, 'next': 23, 'param3': 13}
/*< 23>*/ 						printf(/* textboxtype: 0, unk: 0, line: 14 */ "Each round costs <color red<70 Rupees>coloroff>. Do you\ndare to try?\n[1-]Sure.[2]Nope.")
/*< 94>*/ 						{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 24, 'param3': 13}
/*< 24>*/ 						switch (choice(2)) {
          						  case 0:
/*<113>*/ 							check_item_flag(501, 70)
/*<112>*/ 							switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 39}) {
          							  case 0:
/*< 15>*/ 								rupees += -70;
/*< 98>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5400, 'next': 6, 'param3': 13}
/*<  6>*/ 								printf(/* textboxtype: 0, unk: 1, line: 1 */ "Hope you dig up lots of Rupees!\nJust be careful what you're poking\ndown in the dirt. Could go KA-BOOM!\nSo uh...good luck!")
/*< 61>*/ 								temp_flags[16 /* 0x3 01 */] = true;
/*<  4>*/ 								make_actor_do_something(0, 0)
/*< 46>*/ 								changeScene(3, 0) // 
          							  case 1:
/*< 97>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4633, 'next': 13, 'param3': 13}
/*< 13>*/ 								printf(/* textboxtype: 1, unk: 0, line: 3 */ "You haven't got enough Rupees.\nSave some up and then come back!")
          							}
          						  case 1:
/*< 79>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 25, 'param3': 12}
/*< 25>*/ 							printf(/* textboxtype: 1, unk: 1, line: 15 */ "So which course will it be?\n[1-]Beginner.[2-]Intermediate.[3-]Expert.[4]None.")
          							goto flw_85
          						}
          					  case 1:
/*< 65>*/ 						printf(/* textboxtype: 0, unk: 1, line: 13 */ "The Expert course has more bombs,\nsure, but more valuable Rupees too.\nIt could be highly profitable...\nor highly explosive.")
          						goto flw_78
          					}
          				  case 3:
/*< 86>*/ 					{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5379, 'next': 5, 'param3': 13}
/*<  5>*/ 					printf(/* textboxtype: 0, unk: 0, line: 2 */ "Come back soon!")
          				}
          			}
          		  case 1:
/*< 17>*/ 			printf(/* textboxtype: 0, unk: 0, line: 5 */ "Hello there! Thanks for stopping by.\nFirst time here, am I right?")
/*<155>*/ 			{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 154, 'param3': 13}
/*<154>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "The name's <color blue<Tubert>coloroff>. Nice to meet you! \nI run this little game I like to call\n<color red<Thrill Digger>coloroff>!")
/*< 18>*/ 			story_flags[180 /* us: 805A9AE6 0x08, jp: 805ACD66 0x08 */] = true;
          			goto flw_53
          		}
          	  case 1:
/*< 69>*/ 		story_flags[185 /* us: 805A9AE9 0x01, jp: 805ACD69 0x01 */] = true;
/*<106>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 72, 'param3': 44}
/*< 72>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 20, 'param3': 12}
/*< 20>*/ 		printf(/* textboxtype: 1, unk: 1, line: 24 */ "Here's your grand Rupee total: <color red<<numeric arg0 0>>coloroff>!")
/*< 71>*/ 		make_actor_do_something(1, 0)
/*< 39>*/ 		switch (context_related3(2)) {
          		  case 0:
/*<104>*/ 			{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4628, 'next': 7, 'param3': 13}
/*<  7>*/ 			switch (context_related3(3)) {
          			  case 0:
/*< 11>*/ 				printf(/* textboxtype: 0, unk: 0, line: 17 */ "You didn't dig up even a single Rupee?\nNot a one? You poor little digger...")
          				flw_103:
/*<103>*/ 				{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 81, 'param3': 13}
/*< 81>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 108, 'param3': 12}
/*<108>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 50, 'param3': 45}
/*< 50>*/ 				switch (story_flags[181 /* us: 805A9AE6 0x10, jp: 805ACD66 0x10 */]) {
          				  case 0:
          					flw_55:
/*< 55>*/ 					switch (context_related2(1)) {
          					  case 0:
/*<105>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5640, 'next': 56, 'param3': 13}
/*< 56>*/ 						printf(/* textboxtype: 1, unk: 0, line: 27 */ "You look a bit tired out. Why not rest\nup until you get a few hearts back?")
/*<116>*/ 						set_camera(5, 0)
/*<117>*/ 						printf(/* textboxtype: 0, unk: 1, line: 28 */ "There's a stool over there. It ain't\nexactly lined with satin pillows, but\ngo ahead and take a load off.")
          					  case 1:
/*<  2>*/ 						printf(/* textboxtype: 0, unk: 1, line: 16 */ "You should try again. How about\nanother go?\n[1-]Beginner.[2-]Intermediate.[3-]Expert.[4]I'm done.")
          						goto flw_85
          					}
          				  case 1:
/*< 51>*/ 					printf(/* textboxtype: 0, unk: 0, line: 26 */ "Here's a useful tip: <color red<low-value Rupees \n>coloroff>have only <color red<a few bad spots >coloroff>nearby, \nso you can relax a little.\n\nBut the <color red<higher the value of the Rupee>coloroff>,\nthe <color red<more bad spots >coloroff>are nearby.\nBe careful of the spaces surrounding\na valuable Rupee!\nIf your first burrow digs up a bomb...<pause 20>\nyou'll just have to admit defeat and\ntry again. But don't let it get to you!")
/*< 52>*/ 					story_flags[181 /* us: 805A9AE6 0x10, jp: 805ACD66 0x10 */] = true;
          					goto flw_55
          				}
          			  case 1:
/*<  8>*/ 				printf(/* textboxtype: 1, unk: 1, line: 18 */ "Looks like you took a heavy loss.\nYep. Well, I'm sorry, my friend.")
          				goto flw_103
          			  case 2:
/*< 43>*/ 				printf(/* textboxtype: 0, unk: 1, line: 19 */ "You didn't quite turn a profit.\nChalk that up to bad luck, I say.")
          				flw_102:
/*<102>*/ 				{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 80, 'param3': 13}
/*< 80>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 107, 'param3': 12}
/*<107>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 45}
          				goto flw_55
          			}
          		  case 1:
/*<  9>*/ 			printf(/* textboxtype: 0, unk: 0, line: 20 */ "You broke even! No loss. No gain.\nAt least you had yourself some fun, eh?\nAnd you got to see an explosion!")
          			goto flw_102
          		  case 2:
/*< 44>*/ 			switch (context_related2(4)) {
          			  case 0:
/*<100>*/ 				{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 4363, 'next': 10, 'param3': 13}
/*< 10>*/ 				printf(/* textboxtype: 1, unk: 1, line: 21 */ "You made a small profit. Nice digging!")
          				goto flw_102
          			  case 1:
/*<101>*/ 				{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 4364, 'next': 40, 'param3': 13}
/*< 40>*/ 				printf(/* textboxtype: 0, unk: 1, line: 22 */ "Wow, you made yourself a fortune!\nCongratulations!")
          				goto flw_102
          			}
          		}
          	  case 2:
/*<111>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 73, 'param3': 44}
/*< 73>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 159, 'param3': 12}
/*<159>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "Let's see how many Rupees you\nmanaged to dig up...")
/*< 70>*/ 		make_actor_do_something(1, 0)
/*< 99>*/ 		{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 6415, 'next': 41, 'param3': 13}
/*< 41>*/ 		printf(/* textboxtype: 1, unk: 0, line: 23 */ "Well, I'm just stupefied! You dug up all\nthe Rupees! Listen—you earned this\nprize. Take it!")
/*< 42>*/ 		give_item(64 0x40);
          		goto flw_102
          	}
          }

          void entrypoint_302_02() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 1, unk: 0, line: 48 */ "Thank you very much for your\nparticipation in <color red<Thrill Digger>coloroff>.\n\n\nHere's a helpful tip: <color red<low-value\nRupees >coloroff>have only <color red<a few bad\nspots >coloroff>nearby, so you can relax a\nlittle.\nBut the <color red<higher the value of the\n>coloroff><color red<Rupee>coloroff>, the <color red<more bad spots >coloroff>are\nnearby, so watch it.\nSee you again soon!")
          }

          void entrypoint_302_03() {
/*< 66>*/ 	start()
/*< 67>*/ 	printf(/* textboxtype: 1, unk: 0, line: 30 */ "I wish you'd hurry up about it.\nYour time's almost up...")
          }

          void entrypoint_302_04() {
/*< 68>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "Sorry. There's a time limit here,\nand you just hit it. Time's up!")
          }

          void entrypoint_302_05() {
/*<114>*/ 	start()
/*<115>*/ 	printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00080a04>Ah, you're taking a break? Too much\nsuspense for you?\n\n\nWell then, will you take a load off and\nchat with me a bit?[1-]OK.[2]Not now.")
/*<120>*/ 	switch (choice(2)) {
          	  case 0:
/*<122>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x000f110c>Oh, yes! OK, OK...is there anything\nyou want to ask me?<0x10009:0x00080aff>[1-]Who are you?[2-]Are you floating?[3-]Is it too bright for you?[4]Nothing.<0x10009:0x001316ff>")
          		flw_123:
/*<123>*/ 		switch (choice(4)) {
          		  case 0:
/*<125>*/ 			switch (zone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*<127>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00080a04>My name is <color blue<Tubert>coloroff>! I run this game I\nlike to call <color red<Thrill Digger>coloroff>! Yep, I'm kind\nof important around here.\n\nYou could even call me <color blue<Mr. Tubert>coloroff>.\nYou know, <0x10009:0x00090b09>if you want to. Thanks, kid.")
          				flw_128:
/*<128>*/ 				printf(/* textboxtype: 1, unk: 1, line: 45 */ "<0x10009:0x00131806>So what do you want to ask me next?[1-]Who are you?[2-]Are you floating?[3-]Is it too bright for you?[4]Nothing.")
          				goto flw_123
          			  case 1:
/*<158>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<157>*/ 					printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x00080a04>My name is <color blue<Tubert>coloroff>! I run this game I\nlike to call <color red<Thrill Digger>coloroff>! Yep, I'm kind\nof important around here.\n\nYou could even call me <color blue<Mr. Tubert>coloroff>.\nYou know, <0x10009:0x000d0f01>if you want to. Thanks, kid.\n\n\n<0x10009:0x00080a09>I want everyone to get their hands on\nplenty of Rupees, so I made up this\n<color blue<Thrill Digger>coloroff> thing!\n\n<0x10009:0x00101319>The sad thing is all my <color blue<Mogma>coloroff> friends\nthink Rupees are easy to find. They\nnever come and play...\n\n<0x10009:0x00080aff>So that's why I need you to step up and\nbecome not just a repeat customer,\nbut my only customer!")
          					flw_124:
/*<124>*/ 					zone_temp_flags[0 /* 0x1 01 */] = true;
          					goto flw_128
          				  case 1:
/*<126>*/ 					printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x00080a04>My name is <color blue<Tubert>coloroff>! I run this game I\nlike to call <color red<Thrill Digger>coloroff>! Yep, I'm kind\nof important around here.\n\nYou could even call me <color blue<Mr. Tubert>coloroff>.\nYou know, <0x10009:0x000d0f01>if you want to. Thanks, kid.\n\n\n<0x10009:0x00080a09>I want everyone to get their claws on\nplenty of Rupees, so I made up this\n<color blue<Thrill Digger>coloroff> thing!\n\n<0x10009:0x00101319>The sad thing is there's been a <color red<scary-\nred-monster>coloroff> infestation in these parts\nlately, and it's been bad for business.\nAlmost nobody comes to play!\n<0x10009:0x00080aff>Some days I wish someone would\njust demolish<sound 4> those ugly <color red<towers >coloroff>with\na bang and send them scampering\naway.")
          					goto flw_124
          				}
          			}
          		  case 1:
/*<130>*/ 			switch (zone_temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*<131>*/ 				printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x00080a05>I'm not floating, no. I just want\ncustomers to see my cute little <color red<paws>coloroff>,\nso I'm standing on my tail.")
          				goto flw_128
          			  case 1:
/*<151>*/ 				set_camera(1, 0)
/*<148>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x00141605>No, I'm not floating. I'm standing on\nmy tail.")
/*<152>*/ 				set_camera(2, 0)
/*<149>*/ 				printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x0000000a>I don't need to tell you that my <color red<paws\n>coloroff>are my best feature. ")
/*<153>*/ 				set_camera(-1, 0)
/*<150>*/ 				printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x00080aff>I like to give all my customers a chance\nto admire them. That's why I stand on\nmy tail—it does wonders for sales!")
/*<129>*/ 				zone_temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_128
          			}
          		  case 2:
/*<133>*/ 			switch (zone_temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<135>*/ 				printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x00080a09>No, it's not too bright. I just wear these\nto look cool.")
          				goto flw_128
          			  case 1:
/*<145>*/ 				set_camera(3, 0)
/*<134>*/ 				printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x0014160a>You mean my glasses? Looking dapper,\neh? The round frames make me\nlook even more fashionable!")
/*<146>*/ 				set_camera(4, 0)
/*<143>*/ 				printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00140e0b>And I'm plenty proud of my fine\n<color red<mustache>coloroff> too! Cute and curly,\nall the way. I groom it every day!\nWait. That rhymed, didn't it?")
/*<147>*/ 				set_camera(-1, 0)
/*<144>*/ 				printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00080aff>But it's only to be expected. I can't have\nmy customers upset by my looks!")
/*<132>*/ 				zone_temp_flags[2 /* 0x1 04 */] = true;
          				goto flw_128
          			}
          		  case 3:
/*<137>*/ 			switch (zone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*<138>*/ 				switch (zone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<136>*/ 					switch (zone_temp_flags[2 /* 0x1 04 */]) {
          					  case 0:
/*<140>*/ 						switch (scene_flags[39 /* 0x5 80 */]) {
          						  case 0:
          							flw_139:
/*<139>*/ 							printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x00101319>Really? That's a shame. Well, take\na nice break. <color blue<Thrill Digger >coloroff>is waiting\nfor you whenever you're in the mood\nto poke around for Rupees and bombs!")
          						  case 1:
/*<141>*/ 							printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00101319>Really? What a shame...\n\n\n\n<0x10009:0x000d100c>But thanks for asking all those\ngreat questions! Actually, here,\nlet me tell you something.\n\n<0x10009:0x00080a04>You see the shining stone sticking out\nof the wall? That's pure <color red<Rupee Ore>coloroff>!\nIt's also why there are so many Rupees\nto dig up here.\nIf you sling something at it, it'll <color red<pop\n>coloroff>right out.<sound 4> Go on and give it a try!")
/*<142>*/ 							scene_flags[4 'Eldin Volcano'][39 /* 0x5 80 */] = true;
          						}
          					  case 1:
          						goto flw_139
          					}
          				  case 1:
          					goto flw_139
          				}
          			  case 1:
          				goto flw_139
          			}
          		}
          	  case 1:
/*<121>*/ 		printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00101319>Oh...that's too bad. Anyway, once\nyou've rested up, I hope you'll consider\ngiving <color blue<Thrill Digger >coloroff>a try.")
          	}
          }

