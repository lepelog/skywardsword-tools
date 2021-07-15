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
/*<  4>*/ 						printf("\x0E\x01\x09\x04\x00\x01You ready to start catching some\nbugs? Maybe you'll get bitten by the\nbug-catching fever, just like me.\nOr maybe you'll just get bitten...\nAnyway, it's <r<20 Rupees >>for the Bug\nBeginner level or <r<50 >>for the Bug\nWrangler level. What do you say?\n[1]Bug Beginner![2]Bug Wrangler![3-]No, thanks.")
          						flw_1:
/*<  1>*/ 						switch (choice(3)) {
          						  case 0:
/*<102>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 96>*/ 								switch (has_rupees(20)) {
          								  case 0:
/*< 98>*/ 									rupees += -20;
/*< 91>*/ 									printf("\x0E\x01\x09\x04\x03\x100I'm going to be timing you while you're\nin the course. If you get a decent time,\nI'll give you a prize!\n\n\x0E\x01\x09\x04\x00\x100In the Bug Beginner course, I will show\nyou pictures of five different bugs.\nCatch one of each to finish! Got it?\nOK, get ready!")
/*< 75>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = false;
/*<  2>*/ 									make_actor_do_something(0, 0)
          								  case 1:
/*< 97>*/ 									printf("\x0E\x01\x09\x04\x12\x315Looks like you don't have enough\nmoney. So what if we went to the\nKnight Academy together? I'm not\ncutting you any deals.")
          								}
          							  case 1:
          								flw_104:
/*<104>*/ 								printf("\x0E\x01\x09\x04\x12\x813Think you can go bug catching with\nso few <r<hearts>>? You're not taking this\nseriously. It's not looking good for you.\n\n\x0E\x01\x09\x04\x00\x100Come back once you get some\nmore hearts.")
          							}
          						  case 1:
/*<103>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 93>*/ 								switch (has_rupees(50)) {
          								  case 0:
/*< 95>*/ 									rupees += -50;
/*< 92>*/ 									printf("\x0E\x01\x09\x04\x03\x100I'm going to be timing you while you're\nin the course. If you get a decent time,\nI'll give you a prize!\n\n\x0E\x01\x09\x04\x00\x100In the Bug Wrangler course, you will\nneed to catch a total of ten bugs that\nI specify from among eight different\ntypes. Got all that? OK, get ready!")
/*< 76>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = true;
/*< 12>*/ 									make_actor_do_something(1, 0)
          								  case 1:
/*< 94>*/ 									printf("\x0E\x01\x09\x04\x12\x315Looks like you don't have enough\nmoney. So what if we went to the\nKnight Academy together? I'm not\ncutting you any deals.")
          								}
          							  case 1:
          								goto flw_104
          							}
          						  case 2:
/*<  3>*/ 							printf("\x0E\x01\x09\x04\x12\x513Well, I guess that means you never\nwere a real bug lover.")
          						}
          					  case 1:
/*<116>*/ 						printf("\x0E\x01\x09\x04\x13\x80AWHAT?! You don't even have a\n<r<Bug Net>>?! I don't believe this.\n\n\n\x0E\x01\x09\x04\x00\x500You've never experienced the passion,\nthrill, and joy of bug hunting? I feel\nsorry for you.\n\n\x0E\x01\x09\x04\x03\x100You can buy a Bug Net at <r<Beedle's\nAirshop>>, so do yourself a favor and go\nthere right now and get one!")
          					}
          				  case 1:
/*< 56>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 7, 'param3': 12}
/*<  7>*/ 					story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */] = true;
/*< 49>*/ 					story_flags[286 /* us: 805A9AFA 0x01, jp: 805ACD7A 0x01 */] = true;
/*<  6>*/ 					printf("\x0E\x01\x09\x04\x00\x01\x0E\x03\x01\x00Link? I wasn't expecting\nto see you here.\n\n\n\x0E\x01\x09\x04\x12\x600I flew into this thick fog and ended up\non this island.\n\n\n\x0E\x01\x09\x04\x00\x100But once I got here, I looked around\nand realized...this is some kind of\ninsect paradise!\n\n\x0E\x01\x09\x04\x03\x104So I decided to go after my dream and\nraise a bunch of bugs here. Now I can\nspend my days catching all the bugs\nI want!\n\x0E\x01\x09\x04\x00\x100You want to try catching some bugs?\nI'll release a few for you, so why don't\nyou give it a shot?")
/*<112>*/ 					check_item_flag(71, 1)
/*<111>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 62}) {
          					  case 0:
/*<110>*/ 						printf("\x0E\x01\x09\x04\x00\x100I have come up with two levels for my\nbug-catching competition: an easy\n<r<Bug Beginner >>level and a <r<Bug Wrangler\n>>level for real bug masters like me.\n\x0E\x01\x09\x04\x03\x100Since you aren't a bug lover, I'll\ncharge you <r<20 Rupees >>for the Bug\nBeginner level and <r<50 >>for the Bug\nWrangler level. Do you want in on this?\n[1]Bug Beginner![2]Bug Wrangler![3-]No, thanks.")
          						goto flw_1
          					  case 1:
/*<113>*/ 						printf("\x0E\x01\x09\x04\x13\x80AWHAT?! You don't even have a\n<r<Bug Net>>?! I don't believe this.\n\n\n\x0E\x01\x09\x04\x00\x500You've never experienced the passion,\nthrill, and joy of bug hunting? I feel\nsorry for you.\n\n\x0E\x01\x09\x04\x03\x100You can buy a Bug Net at <r<Beedle's\nAirshop>>, so do yourself a favor and go\nthere right now and get one!")
          					}
          				}
          			  case 1:
/*< 26>*/ 				switch (story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */]) {
          				  case 0:
/*< 42>*/ 					printf("\x0E\x01\x09\x04\x00\x04Heh heh heh... You've come to take\nback the <b<Horned Colossus Beetle>>, eh?\n[1]Of course![2-]Nope.")
          					flw_50:
/*< 50>*/ 					switch (choice(2)) {
          					  case 0:
/*< 58>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 36, 'param3': 12}
/*< 36>*/ 						printf("And because this is still business,\nI'll be taking <r<10 Rupees >>from you...\n[1]OK...[2-]No, thanks.")
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
/*< 41>*/ 										printf("\x0E\x01\x09\x04\x04\x100Well then, go get ten insects of my\nchoosing!\n\n\n\x0E\x01\x09\x04\x03\x100I'll be timing you. You've got to get\nten insects <r<within three minutes>>.\n\n\n\x0E\x01\x09\x04\x00\x100If you somehow do it, I'll give the\n<b<Horned Colossus Beetle>> back.\n\n\nAll right then, get set!")
/*< 37>*/ 										make_actor_do_something(1, 0)
          									  case 1:
/*<119>*/ 										printf("\x0E\x01\x09\x04\x13\x807Hold on! Just hold it. You still don't\nhave a <y<Bug Net>>! Why am I wasting my\ntime with you?\n\n\x0E\x01\x09\x04\x04\x100Come back when you finally get around\nto buying one!")
          									}
          								  case 1:
/*<106>*/ 									printf("\x0E\x01\x09\x04\x12\x813Think you can go bug catching with\nso few <r<hearts>>? You're not taking this\nseriously. It's not looking good for you.\n\n\x0E\x01\x09\x04\x00\x100Come back once you get some\nmore hearts.")
          								}
          							  case 1:
/*< 39>*/ 								printf("\x0E\x01\x09\x04\x12\x315Looks like you don't have enough\nmoney. So what if we went to the\nKnight Academy together? I'm not\ncutting you any deals.")
          							}
          						  case 1:
          							flw_52:
/*< 52>*/ 							printf("\x0E\x01\x09\x04\x12\x305Oh, so are you hoping to become part\nof my collection too?\n\n\n\x0E\x01\x09\x04\x00\x100I mean, you are an annoying gnat...\nheh heh heh.\x0E\x01\x09\x04\x00\x04")
          						}
          					  case 1:
          						goto flw_52
          					}
          				  case 1:
/*< 31>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 28, 'param3': 31}
/*< 28>*/ 					printf("\x0E\x01\x09\x04\x00\x04Heh heh heh heh. Well well, it's\nLink!\nHow have you been?!\n\n\x0E\x01\x09\x04\x00\x100Oh, you think I look happy? Heh heh...\nWell, I guess I can't help it.\n\n\nI mean, I did discover an insanely rare\ninsect, after all.\n[1]Tell me![2]Who cares?")
/*< 29>*/ 					switch (choice(2)) {
          					  case 0:
/*< 27>*/ 						story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */] = true;
/*< 32>*/ 						printf("\x0E\x01\x09\x04\x03\x100You want to know more, huh?\n\n\n\nWell...<pause1E> \x0E\x01\x09\x04\x13\x100Let's just say I managed to land\na legendary <b<<b<Horned Colossus Beetle<b<.\n\n\n>>\x0E\x01\x09\x04\x03\x100It's pretty much a miracle that I found\nit! I can't stop laughing or smiling.\nI'm so happy, my face hurts!")
/*< 54>*/ 						printf("\x0E\x01\x09\x04\x01\x800What?! You're saying this is Beedle's\npet bug?! The same Beedle who flies\naround in that shack selling his junk?\n[1]Give it back![2]Poor Beedle...")
/*< 33>*/ 						switch (choice(2)) {
          						  case 0:
/*< 35>*/ 							printf("\x0E\x01\x09\x04\x10\x800So you really think a sob story like\nthat is going to work on me?\nWhat a joke.\n\n\x0E\x01\x09\x04\x13\x100I found this bug, and it's all mine!")
          							flw_51:
/*< 51>*/ 							printf("\x0E\x01\x06\x02\xFDCD...\x0E\x01\x06\x02ÍI suppose it would be kind of mean\nto keep someone's favorite pet bug.\n\n\n\x0E\x01\x09\x04\x12\x100But at the same time, I don't feel so\nbad that I'm just going to give it\nright back...\n\n\x0E\x01\x09\x04\x00\x500How about this?\n\n\n\n\x0E\x01\x09\x04\x00\x100If you can pull off a time in my game\nthat makes even me admit you are\na master bug catcher, I'll give this little\nguy back.\n\x0E\x01\x09\x04\x03\x100So, what's it going to be? Are you up\nfor the challenge?\n\n\n[1]You're on![2-]Not now.")
          							goto flw_50
          						  case 1:
/*< 34>*/ 							printf("\x0E\x01\x09\x04\x12\x500Do you have any idea how much\nthis bug is worth?\n\n\n\x0E\x01\x09\x04\x00\x100With this bad boy in my collection,\nmy credibility in the bug-catching\ncommunity will skyrocket! I'll be\na bug-catching celebrity!")
          							goto flw_51
          						}
          					  case 1:
/*< 30>*/ 						printf("\x0E\x01\x09\x04\x12\x515I see... You really are a snake\nin the grass...")
          					}
          				}
          			}
          		  case 1:
          			goto flw_5
          		}
          	  case 1:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\x05Hey! You're not thinking about quitting\nthis round of bug-catching, are you?\n[1]I quit![2-]Continue.")
/*< 17>*/ 		switch (choice(2)) {
          		  case 0:
/*< 14>*/ 			printf("\x0E\x01\x09\x04\x12\x500So you really are quitting... I guess you\ndon't appreciate bugs like I do.")
/*< 18>*/ 			make_actor_do_something(3, 0)
          		  case 1:
/*< 16>*/ 			printf("I know, right? Time flies when you're\ncatching bugs!")
          		}
          	  case 2:
/*< 19>*/ 		printf("\x0E\x01\x09\x04\x12\x500Uhh...don't you think you're taking\ntoo long?\n\n\n\x0E\x01\x09\x04\x00\x100I know you're not done yet, but I'm\ncalling it. Time's up!")
/*< 23>*/ 		make_actor_do_something(4, 0)
          	  case 3:
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x13\x1000Easy now! You were about to make a\nbeeline for a quick death there!\n\n\n\x0E\x01\x09\x04\x03\x100Don't forget that bugs can fight back!\nI knew you were in over your head\nthere, so I had to stop the game.")
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
/*< 10>*/ 				printf("\x0E\x01\x09\x04\x12\x107That's it--time's up! Umm...you've still\ngot A LOT of improving to do.\n\n\n\x0E\x01\x09\x04\x00\x100For starters, shoot for getting your\ntime <r<under five minutes>>. Just keep on\npracticing.\n\n\x0E\x01\x09\x04\x03\x100Oh, at night, I buy bugs back in my\nroom in Skyloft. You should come by\nand sell me any beauties you find.")
/*< 45>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 21>*/ 				printf("\x0E\x01\x09\x04\x12\x500It's pretty sad that you can't see just\nhow fun catching bugs can be.\n\n\n\x0E\x01\x09\x04\x00\x100But come back when you change\nyour mind!")
          			  case 2:
/*< 22>*/ 				printf("\x0E\x01\x09\x04\x03\x100Sorry, I don't do refunds!\n\n\n\n\x0E\x01\x09\x04\x00\x100Better luck next time. Heh heh heh.")
          			  case 3:
/*<101>*/ 				printf("\x0E\x01\x09\x04\x00\x04Heh heh heh... Who would have thought\nyou'd get so into bug catching that\nyou'd put your own life at risk?!\n\n\x0E\x01\x09\x04\x00\x500Sorry, I don't do refunds! Come back\nlater when you have more hearts.")
          			}
          		  case 1:
/*< 79>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 77, 'param3': 44}
/*< 77>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 78>*/ 				printf("\x0E\x01\x09\x04\x12\x104Time's up! That was pretty decent,\nI have to admit.\n\n\n\x0E\x01\x09\x04\x00\x100Your times will get even better if you\nremember where the bugs live. Next\ntime, shoot for <r<under three minutes>>.")
/*< 59>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 120, 'param3': 12}
/*<120>*/ 				printf("\x0E\x01\x09\x04\x03\x100All right, here's some money. You\nget <r<80 Rupees>>!")
/*< 81>*/ 				rupees += 80;
/*< 80>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 11>*/ 				printf("\x0E\x01\x09\x04\x00\x04OK, you're done! Huh. I guess I\nshould've expected this kind of time\nfrom you.\n\n\x0E\x01\x09\x04\x00\x100You know, sometimes the same type of\nbug is a lot easier to catch in just a\ndifferent place. Make sure you look\naround for the right spot.")
/*<122>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 121, 'param3': 12}
/*<121>*/ 				printf("\x0E\x01\x09\x04\x03\x100Next time, try for <r<under three minutes>>.\nOh, and I guess I should throw you\na little money. Here's <r<30 Rupees>>.")
/*< 55>*/ 				rupees += 30;
/*< 46>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 2:
/*< 88>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 87, 'param3': 44}
/*< 87>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 83>*/ 				printf("\x0E\x01\x09\x04\x00\x811OK! Time! Hey... This is incredible!\n\n\n\n\x0E\x01\x09\x04\x00\x100I think you might be in the running for\nsecond place as the best bug catcher\nafter me. You should aim for <r<under two\nminutes>>.\nDo that, and a prize package of <r<five\nfabulous bugs>> is yours to take home!")
/*< 82>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 45}
/*<129>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<108>*/ 				give_item(23 0x17);
/*<130>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<125>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00Take good care of them for me...")
          			  case 1:
/*< 60>*/ 				printf("\x0E\x01\x09\x04\x00\x11That's it--time's up! Whoa...\nI'm impressed. You might just be a\nnatural at this!\n\n\x0E\x01\x09\x04\x12\x500Don't get full of yourself, though.\nYou're still not good enough to win\nany of my rare insects.")
/*<124>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 123, 'param3': 12}
/*<123>*/ 				printf("Next time, pull out all the stops and\ntry to finish in <r<less than two minutes>>.\n\n\nOh, and your prize this time is \n<r<50 Rupees>>!")
/*< 86>*/ 				rupees += 50;
/*< 47>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 3:
/*< 90>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 89, 'param3': 44}
/*< 89>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 84>*/ 				printf("\x0E\x01\x09\x04\x13\x811OK, time's up! ...Th-this is amazing!\n\n\n\n\x0E\x01\x09\x04\x00\x100I don't have any choice. I'm forced to\nadmit you're the greatest bug catcher\nof all time! I bow down to your\nbug-wrangling skills.\n\x0E\x01\x09\x04\x04\x100Let me give you your prize! You get\na set of insects... <r<Five>> rare ones at that!")
/*< 85>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 131, 'param3': 45}
/*<131>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<109>*/ 				give_item(24 0x18);
/*<133>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<126>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00Take good care of them for me...")
          			  case 1:
/*< 43>*/ 				printf("\x0E\x01\x09\x04\x03\x811Stop! Stop! Time's up! That was just... \nincredible!\n\n\n\x0E\x01\x09\x04\x12\x100Oh, but let me just remind you that you\nwere doing the Bug Beginner level\nof difficulty.\n\n\x0E\x01\x09\x04\x00\x100Next time, try Bug Wrangler! As a\nprize, here are <r<five>> of my absolute\nfavorite <r<bugs>>!")
/*< 48>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 132, 'param3': 45}
/*<132>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<107>*/ 				give_item(22 0x16);
/*<134>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<127>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00Take good care of them for me...")
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
/*< 64>*/ 					printf("\x0E\x01\x09\x04\x00\x13Phew...\n\n\n\n\x0E\x01\x09\x04\x12\x500Sorry, but I won't be able to give the\n<b<Horned Colossus Beetle>> back!\n\n\n\x0E\x01\x09\x04\x00\x100Not with that kind of time. At the very\nleast, you're going to have to finish in\nless than three minutes... Come on!\nLet's see some hustle!")
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
/*< 71>*/ 				printf("OK, you're done!\n\x0E\x01\x09\x04\x00\x04Heh heh heh... Who would have thought\nit would be so easy for you to break the\nrecord time!")
/*< 67>*/ 				printf("\x0E\x01\x09\x04\x12\x500OK, OK... As I promised, here's the\n<b<Horned Colossus Beetle>>.\n\n\n\x0E\x01\x09\x04\x00\x100I have to admit, you're a pretty tough\ncompetitor. I guess I won't be able to\n<r<bug >>you anymore.\n\n\x0E\x01\x09\x04\x03\x100Heh heh heh...")
/*< 68>*/ 				story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */] = true;
/*< 69>*/ 				give_item(159 0x9F);
/*< 74>*/ 				printf("\x0E\x01\x09\x04\x04\x500Make sure to tell Beedle that, bug\nlover to bug lover, I feel sort of bad\nfor causing him so much stress.")
/*< 70>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 3:
          				goto flw_72
          			}
          		  case 1:
          			goto flw_9
          		}
          	}
          }

