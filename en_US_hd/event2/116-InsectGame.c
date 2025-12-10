          void entrypoint_116_01() {
          	start()
/*< 13>*/ 	switch (context_related4(1)) {
          	  case 0:
/*< 24>*/ 		switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          		  case 0:
/*< 25>*/ 			switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          			  case 0:
          				flw_5:
/*<  5>*/ 				switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          				  case 0:
/*< 57>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 115, 'param3': 12}
/*<115>*/ 					check_item_flag(71, 1)
/*<114>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 64}) {
          					  case 0:
/*<  4>*/ 						printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00000001>You ready to start catching some\nbugs? Maybe you'll get bitten by the\nbug-catching fever, just like me.\nOr maybe you'll just get bitten...\nAnyway, it's <color red<20 Rupees >coloroff>for the Bug\nBeginner level or <color red<50 >coloroff>for the Bug\nWrangler level. What do you say?\n[1-]Bug Beginner![2-]Bug Wrangler![3]No, thanks.")
          						flw_1:
/*<  1>*/ 						switch (choice(3)) {
          						  case 0:
/*<102>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 96>*/ 								switch (has_rupees(20)) {
          								  case 0:
/*< 98>*/ 									rupees += -20;
/*< 91>*/ 									printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00030100>I'm going to be timing you while you're\nin the course. If you get a decent time,\nI'll give you a prize!\n\n<0x10009:0x00000100>In the Bug Beginner course, I will show\nyou pictures of five different bugs.\nCatch one of each to finish! Got it?\nOK, get ready!")
/*< 75>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = false;
/*<  2>*/ 									make_actor_do_something(0, 0)
          								  case 1:
/*< 97>*/ 									printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00120315>Looks like you don't have enough\nmoney. So what if we went to the\nKnight Academy together? I'm not\ncutting you any deals.")
          								}
          							  case 1:
          								flw_104:
/*<104>*/ 								printf(/* textboxtype: 1, unk: 1, line: 6 */ "<0x10009:0x00120813>Think you can go bug catching with\nso few <color red<hearts>coloroff>? You're not taking this\nseriously. It's not looking good for you.\n\n<0x10009:0x00000100>Come back once you get some\nmore hearts.")
          							}
          						  case 1:
/*<103>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 93>*/ 								switch (has_rupees(50)) {
          								  case 0:
/*< 95>*/ 									rupees += -50;
/*< 92>*/ 									printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00030100>I'm going to be timing you while you're\nin the course. If you get a decent time,\nI'll give you a prize!\n\n<0x10009:0x00000100>In the Bug Wrangler course, you will\nneed to catch a total of 10 bugs that\nI specify from among eight different\ntypes. Got all that? OK, get ready!")
/*< 76>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = true;
/*< 12>*/ 									make_actor_do_something(1, 0)
          								  case 1:
/*< 94>*/ 									printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00120315>Looks like you don't have enough\nmoney. So what if we went to the\nKnight Academy together? I'm not\ncutting you any deals.")
          								}
          							  case 1:
          								goto flw_104
          							}
          						  case 2:
/*<  3>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00120513>Well, I guess that means you never\nwere a real bug lover.")
          						}
          					  case 1:
/*<116>*/ 						printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x0013080a>WHAT?! You don't even have a\n<color red<Bug Net>coloroff>?! I don't believe this.\n\n\n<0x10009:0x00000500>You've never experienced the passion,\nthrill, and joy of bug hunting? I feel\nsorry for you.\n\n<0x10009:0x00030100>You can buy a Bug Net at <color red<Beedle's\nAirshop>coloroff>, so do yourself a favor and go\nthere right now and get one!")
          					}
          				  case 1:
/*< 56>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 7, 'param3': 12}
/*<  7>*/ 					story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */] = true;
/*< 49>*/ 					story_flags[286 /* us: 805A9AFA 0x01, jp: 805ACD7A 0x01 */] = true;
/*<  6>*/ 					printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001><0x30001:0x><heroname>? I wasn't expecting\nto see you here.\n\n\n<0x10009:0x00120600>I flew into this thick fog and ended up\non this island.\n\n\n<0x10009:0x00000100>But once I got here, I looked around\nand realized...this is some kind of\ninsect paradise!\n\n<0x10009:0x00030104>So I decided to go after my dream and\nraise a bunch of bugs here. Now I can\nspend my days catching all the bugs\nI want!\n<0x10009:0x00000100>You want to try catching some bugs?\nI'll release a few for you, so why don't\nyou give it a shot?")
/*<112>*/ 					check_item_flag(71, 1)
/*<111>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 62}) {
          					  case 0:
/*<110>*/ 						printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000100>I have come up with two levels for my\nbug-catching competition: an easy\n<color red<Bug Beginner >coloroff>level and a <color red<Bug Wrangler\n>coloroff>level for real bug masters like me.\n<0x10009:0x00030100>Since you aren't a bug lover, I'll\ncharge you <color red<20 Rupees >coloroff>for the Bug\nBeginner level and <color red<50 >coloroff>for the Bug\nWrangler level. Do you want in on this?\n[1-]Bug Beginner![2-]Bug Wrangler![3]No, thanks.")
          						goto flw_1
          					  case 1:
/*<113>*/ 						printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x0013080a>WHAT?! You don't even have a\n<color red<Bug Net>coloroff>?! I don't believe this.\n\n\n<0x10009:0x00000500>You've never experienced the passion,\nthrill, and joy of bug hunting? I feel\nsorry for you.\n\n<0x10009:0x00030100>You can buy a Bug Net at <color red<Beedle's\nAirshop>coloroff>, so do yourself a favor and go\nthere right now and get one!")
          					}
          				}
          			  case 1:
/*< 26>*/ 				switch (story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */]) {
          				  case 0:
/*< 42>*/ 					printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00000004>Heh heh heh... You've come to take\nback the <color blue<Horned Colossus Beetle>coloroff>, eh?\n[1-]Of course![2]Nope.")
          					flw_50:
/*< 50>*/ 					switch (choice(2)) {
          					  case 0:
/*< 58>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 36, 'param3': 12}
/*< 36>*/ 						printf(/* textboxtype: 1, unk: 0, line: 36 */ "And because this is still business,\nI'll be taking <color red<10 Rupees >coloroff>from you...\n[1-]OK...[2]No, thanks.")
/*< 53>*/ 						switch (choice(2)) {
          						  case 0:
/*< 38>*/ 							switch (has_rupees(10)) {
          							  case 0:
/*<105>*/ 								switch (context_related2(0)) {
          								  case 0:
/*<118>*/ 									check_item_flag(71, 1)
/*<117>*/ 									switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 66}) {
          									  case 0:
/*< 40>*/ 										rupees += -10;
/*< 41>*/ 										printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00040100>Well then, go get 10 insects of my\nchoosing!\n\n\n<0x10009:0x00030100>I'll be timing you. You've got to get\n10 insects <color red<within three minutes>coloroff>.\n\n\n<0x10009:0x00000100>If you somehow do it, I'll give the\n<color blue<Horned Colossus Beetle>coloroff> back.\n\n\nAll right then, get set!")
/*< 37>*/ 										make_actor_do_something(1, 0)
          									  case 1:
/*<119>*/ 										printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00130807>Hold on! Just hold it. You still don't\nhave a <color yellow<Bug Net>coloroff>! Why am I wasting my\ntime with you?\n\n<0x10009:0x00040100>Come back when you finally get around\nto buying one!")
          									}
          								  case 1:
/*<106>*/ 									printf(/* textboxtype: 1, unk: 1, line: 6 */ "<0x10009:0x00120813>Think you can go bug catching with\nso few <color red<hearts>coloroff>? You're not taking this\nseriously. It's not looking good for you.\n\n<0x10009:0x00000100>Come back once you get some\nmore hearts.")
          								}
          							  case 1:
/*< 39>*/ 								printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00120315>Looks like you don't have enough\nmoney. So what if we went to the\nKnight Academy together? I'm not\ncutting you any deals.")
          							}
          						  case 1:
          							flw_52:
/*< 52>*/ 							printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00120305>Oh, so are you hoping to become part\nof my collection too?\n\n\n<0x10009:0x00000100>I mean, you are an annoying gnat...\nheh heh heh.<0x10009:0x00000004>")
          						}
          					  case 1:
          						goto flw_52
          					}
          				  case 1:
/*< 31>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 28, 'param3': 31}
/*< 28>*/ 					printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00000004>Heh heh heh heh. Well well, it's\n<heroname>! How's life?\n\n\n<0x10009:0x00000100>Oh, you think I look happy? Heh heh...\nWell, I guess I can't help it.\n\n\nI mean, I did discover an insanely rare\ninsect, after all.\n[1-]Tell me![2-]Who cares?")
/*< 29>*/ 					switch (choice(2)) {
          					  case 0:
/*< 27>*/ 						story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */] = true;
/*< 32>*/ 						printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00030100>You want to know more, huh?\n\n\n\nWell...<pause 30> <0x10009:0x00130100>Let's just say I managed to land\na legendary <color blue<Horned Colossus Beetle>coloroff>.<color blue<\n\n\n>coloroff><0x10009:0x00030100>It's pretty much a miracle that I found\nit! I can't stop laughing or smiling.\nI'm so happy, my face hurts!")
/*< 54>*/ 						printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00010800>What?! You're saying this is Beedle's\npet bug?! The same Beedle who flies\naround in that shack selling his junk?\n[1-]Give it back![2-]Poor Beedle...")
/*< 33>*/ 						switch (choice(2)) {
          						  case 0:
/*< 35>*/ 							printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00100800>So you really think a sob story like\nthat is going to work on me?\nWhat a joke.\n\n<0x10009:0x00130100>I found this bug, and it's all mine!")
          							flw_51:
/*< 51>*/ 							printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10006:0xfdcd>...<0x10006:0x00cd>I suppose it would be kind of mean\nto keep someone's favorite pet bug.\n\n\n<0x10009:0x00120100>But at the same time, I don't feel so\nbad that I'm just going to give it\nright back...\n\n<0x10009:0x00000500>How about this?\n\n\n\n<0x10009:0x00000100>If you can pull off a time in my game\nthat makes even me admit you are\nthe master of bug catching, I'll give\nthis little guy back.\n<0x10009:0x00030100>So, what's it going to be? Are you up\nfor the challenge?\n\n\n[1-]You're on![2]Not now.")
          							goto flw_50
          						  case 1:
/*< 34>*/ 							printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x00120500>Do you have any idea how much\nthis bug is worth?\n\n\n<0x10009:0x00000100>With this bad boy in my collection,\nmy credibility in the bug-catching\ncommunity will skyrocket! I'll be\na bug-catching celebrity!")
          							goto flw_51
          						}
          					  case 1:
/*< 30>*/ 						printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00120515>I see... You really are a snake\nin the grass...")
          					}
          				}
          			}
          		  case 1:
          			goto flw_5
          		}
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000005>Hey! You're not thinking about quitting\nthis round of bug catching, are you?\n[1-]I quit![2]Continue.")
/*< 17>*/ 		switch (choice(2)) {
          		  case 0:
/*< 14>*/ 			printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00120500>So you really are quitting... I guess you\ndon't appreciate bugs like I do.")
/*< 18>*/ 			make_actor_do_something(3, 0)
          		  case 1:
/*< 16>*/ 			printf(/* textboxtype: 0, unk: 0, line: 11 */ "I know, right? Time flies when you're\ncatching bugs!")
          		}
          	  case 2:
/*< 19>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00120500>Uhh...don't you think you're taking\ntoo long?\n\n\n<0x10009:0x00000100>I know you're not done yet, but I'm\ncalling it. Time's up!")
/*< 23>*/ 		make_actor_do_something(4, 0)
          	  case 3:
/*< 99>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00131000>Easy now! You were about to make a\nbeeline for a quick death there!\n\n\n<0x10009:0x00030100>Don't forget that bugs can fight back!\nI knew you were in over your head\nthere, so I had to stop the game.")
/*<100>*/ 		make_actor_do_something(4, 0)
          	}
          }

          void entrypoint_116_02() {
/*<  8>*/ 	start()
/*<128>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 61, 'param3': 42}
/*< 61>*/ 	switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          	  case 0:
          		flw_9:
/*<  9>*/ 		switch (context_related4(0)) {
          		  case 0:
/*< 20>*/ 			switch (context_related4(2)) {
          			  case 0:
/*< 44>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 10, 'param3': 44}
/*< 10>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00120107>That's it—time's up! Umm...you've still\ngot A LOT of improving to do.\n\n\n<0x10009:0x00000100>For starters, shoot for getting your\ntime <color red<under five minutes>coloroff>. Just keep on\npracticing.\n\n<0x10009:0x00030100>Oh, at night, I buy bugs back in my\nroom in Skyloft. You should come by\nand sell me any beauties you find.")
/*< 45>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 21>*/ 				printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00120500>It's pretty sad that you can't see just\nhow fun catching bugs can be.\n\n\n<0x10009:0x00000100>But come back when you change\nyour mind!")
          			  case 2:
/*< 22>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00030100>Sorry, I don't do refunds!\n\n\n\n<0x10009:0x00000100>Better luck next time. Heh heh heh.")
          			  case 3:
/*<101>*/ 				printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00000004>Heh heh heh... Who would have thought\nyou'd get so into bug catching that\nyou'd put your own life at risk?!\n\n<0x10009:0x00000500>Sorry, I don't do refunds! Come back\nlater when you have more hearts.")
          			}
          		  case 1:
/*< 79>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 77, 'param3': 44}
/*< 77>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 78>*/ 				printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00120104>Time's up! That was pretty decent,\nI have to admit.\n\n\n<0x10009:0x00000100>Your times will get even better if you\nremember where the bugs live. Next\ntime, shoot for <color red<under three minutes>coloroff>.")
/*< 59>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 120, 'param3': 12}
/*<120>*/ 				printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00030100>All right, here's some money. You\nget <color red<80 Rupees>coloroff>!")
/*< 81>*/ 				rupees += 80;
/*< 80>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 11>*/ 				printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x00000004>OK, you're done! Huh. I guess I\nshould've expected this kind of time\nfrom you.\n\n<0x10009:0x00000100>You know, sometimes the same type of\nbug is a lot easier to catch in just a\ndifferent place. Make sure you look\naround for the right spot.")
/*<122>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 121, 'param3': 12}
/*<121>*/ 				printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00030100>Next time, try for <color red<under three minutes>coloroff>.\nOh, and I guess I should throw you\na little money. Here's <color red<30 Rupees>coloroff>.")
/*< 55>*/ 				rupees += 30;
/*< 46>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 2:
/*< 88>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 87, 'param3': 44}
/*< 87>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 83>*/ 				printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000811>OK! Time! Hey... This is incredible!\n\n\n\n<0x10009:0x00000100>I think you might be in the running for\nsecond place as the best bug catcher\nafter me. You should aim for <color red<under two\nminutes>coloroff>.\nDo that, and a prize package of <color red<five\nfabulous bugs>coloroff> is yours to take home!")
/*< 82>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 45}
/*<129>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<108>*/ 				give_item(23 0x17);
/*<130>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<125>*/ 				printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00ffff00>Take good care of them for me...")
          			  case 1:
/*< 60>*/ 				printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00000011>That's it—time's up! Whoa...\nI'm impressed. You might just be a\nnatural at this!\n\n<0x10009:0x00120500>Don't get full of yourself, though.\nYou're still not good enough to win\nany of my rare insects.")
/*<124>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 123, 'param3': 12}
/*<123>*/ 				printf(/* textboxtype: 0, unk: 0, line: 26 */ "Next time, pull out all the stops and\ntry to finish in <color red<less than two minutes>coloroff>.\n\n\nOh, and your prize this time is \n<color red<50 Rupees>coloroff>!")
/*< 86>*/ 				rupees += 50;
/*< 47>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 3:
/*< 90>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 89, 'param3': 44}
/*< 89>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 84>*/ 				printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00130811>OK, time's up! ...Th-this is amazing!\n\n\n\n<0x10009:0x00000100>I don't have any choice. I'm forced to\nadmit you're one of the all-time greats\nof bug catching! I bow down to your\nbug-wrangling skills.\n<0x10009:0x00040100>Let me give you your prize! You get\na set of insects... <color red<Five>coloroff> rare ones at that!")
/*< 85>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 131, 'param3': 45}
/*<131>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<109>*/ 				give_item(24 0x18);
/*<133>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<126>*/ 				printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00ffff00>Take good care of them for me...")
          			  case 1:
/*< 43>*/ 				printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00030811>Stop! Stop! Time's up! That was just... \nincredible!\n\n\n<0x10009:0x00120100>Oh, but let me just remind you that you\nwere doing the Bug Beginner level\nof difficulty.\n\n<0x10009:0x00000100>Next time, try Bug Wrangler! As a\nprize, here are <color red<five>coloroff> of my absolute\nfavorite <color red<bugs>coloroff>!")
/*< 48>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 132, 'param3': 45}
/*<132>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<107>*/ 				give_item(22 0x16);
/*<134>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<127>*/ 				printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00ffff00>Take good care of them for me...")
          			}
          		}
          	  case 1:
/*< 62>*/ 		switch (story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */]) {
          		  case 0:
/*< 63>*/ 			switch (context_related4(0)) {
          			  case 0:
/*< 73>*/ 				switch (context_related3(0)) {
          				  case 0:
          					flw_65:
/*< 65>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 64, 'param3': 44}
          					flw_64:
/*< 64>*/ 					printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x00000013>Phew...\n\n\n\n<0x10009:0x00120500>Sorry, but I won't be able to give the\n<color blue<Horned Colossus Beetle>coloroff> back!\n\n\n<0x10009:0x00000100>Not with that kind of time. At the very\nleast, you're going to have to finish in\nless than three minutes... Come on!\nLet's see some hustle!")
/*< 66>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          				  case 1:
          					goto flw_64
          				  case 2:
          					goto flw_64
          				}
          			  case 1:
          				goto flw_65
          			  case 2:
          				flw_72:
/*< 72>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 71, 'param3': 44}
/*< 71>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "OK, you're done!\n<0x10009:0x00000004>Heh heh heh... Who would have thought\nit would be so easy for you to break the\nrecord time!")
/*< 67>*/ 				printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00120500>OK, OK... As I promised, here's the\n<color blue<Horned Colossus Beetle>coloroff>.\n\n\n<0x10009:0x00000100>I have to admit, you're a pretty tough\ncompetitor. I guess I won't be able to\n<color red<bug >coloroff>you anymore.\n\n<0x10009:0x00030100>Heh heh heh...")
/*< 68>*/ 				story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */] = true;
/*< 69>*/ 				give_item(159 0x9F);
/*< 74>*/ 				printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x00040500>Make sure to tell Beedle that, bug\nlover to bug lover, I feel sort of bad\nfor causing him so much stress.")
/*< 70>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 3:
          				goto flw_72
          			}
          		  case 1:
          			goto flw_9
          		}
          	}
          }

