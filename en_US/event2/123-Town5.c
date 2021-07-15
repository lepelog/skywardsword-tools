          void entrypoint_123_06() {
/*< 54>*/ 	start()
/*< 47>*/ 	switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          	  case 0:
/*< 48>*/ 		switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          		  case 0:
/*<266>*/ 			switch (story_flags[691 /* us: 805A9B20 0x01, jp: 805ACDA0 0x01 */]) {
          			  case 0:
/*< 74>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*< 75>*/ 					switch (story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */]) {
          					  case 0:
/*< 77>*/ 						switch (story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */]) {
          						  case 0:
/*< 82>*/ 							switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          							  case 0:
/*< 83>*/ 								switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          								  case 0:
/*< 84>*/ 									switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          									  case 0:
/*< 87>*/ 										printf("\x0E\x01\x09\x04\x00\x07Hello, darling! I'll store anything you\nwant me to here.\n[1]Great![2-]No, thanks.")
          										flw_273:
/*<273>*/ 										entrypoint_112_06();
          									  case 1:
/*< 86>*/ 										printf("\x0E\x01\x09\x04\x00\x08Welcome, darling!\n\n\n\nI'm happy to hold on to anything my\nprecious darling needs me to!\nAnything at all!\n[1]Great![2-]No, thanks.")
/*< 90>*/ 										story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */] = true;
          										goto flw_273
          									}
          								  case 1:
/*< 85>*/ 									switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          									  case 0:
/*< 89>*/ 										printf("\x0E\x01\x09\x04\x00\x0EWelcome, Link. Do you\nhave something to deposit with me, the\nwoman who got over her broken heart\nand is getting prettier by the day?\n[1]Yes, please![2-]No, thanks.")
          										flw_272:
/*<272>*/ 										entrypoint_112_06();
          									  case 1:
/*< 88>*/ 										printf("\x0E\x01\x09\x04\x00\x05Oh... Welcome, Link.\n\n\n\nSorry for acting so crazy the other day.\nI thought long and hard about it, and\nI'm completely over it now.\n\nThere's an old saying that women grow\nmore beautiful after their heart's been\nbroken. I think I know what that\nmeans now...\nAnd I fully intend to make myself\nmore and more beautiful every day.\n\n\nNo regrets, OK?\n\n\n\nSo...where were we? Anything to\ndeposit today?\n[1]Yes, please![2-]No, thanks.")
/*< 91>*/ 										story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */] = true;
          										goto flw_272
          									}
          								}
          							  case 1:
/*<435>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 81, 'param3': 31}
/*< 81>*/ 								printf("\x0E\x01\x09\x04\x00\x05Hello, darling!\n\n\n\n\x0E\x01\x09\x04\x0D\xF00Umm... I, uhh... <r<I want you to visit me\nat my house tonight>>. I have something\nI need to say.\n\n\x0E\x01\x09\x04\x08\xA00My house is just next to the bazaar.\nYou'll definitely come, right?\nI'll be waiting!")
          								flw_79:
/*< 79>*/ 								printf("Oh, and do you have something you\nwant to pick up or have me store?\n[1]Yes, please![2-]No, thanks.")
/*< 80>*/ 								story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */] = true;
/*<271>*/ 								entrypoint_112_06();
          							}
          						  case 1:
/*<280>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 78, 'param3': 31}
/*< 78>*/ 							printf("\x0E\x01\x09\x04\x00\x05Hello, darling!\n\n\n\n\x0E\x01\x09\x04\x0D\xF00Umm... I, uhh... <r<I want you to visit me\nat my house tonight>>. I have something\nI need to say.\n\n\x0E\x01\x09\x04\x08\xA00My house is just next to the bazaar.\nYou'll definitely come, right?\nI'll be waiting!")
          							goto flw_79
          						}
          					  case 1:
          						flw_267:
/*<267>*/ 						printf("\x0E\x01\x09\x04\x00\x07Welcome, my <r<darling>>! I've been waiting\nfor you! You can trust me with\nanything! Errr, your stuff, I mean...\n\nAnything you want me to hold on to?\nOr anything you want to pick up?\n[1]Yes, please.[2-]No, thanks.")
          						flw_270:
/*<270>*/ 						entrypoint_112_06();
          					}
          				  case 1:
          					goto flw_267
          				}
          			  case 1:
/*<256>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 20480, 'next': 61, 'param3': 13}
/*< 61>*/ 				printf("\x0E\x01\x09\x04\x00\x08...Oh.")
/*< 63>*/ 				printf("\x0E\x01\x09\x04\x08\xA00You... You came to see me!\nI'm so happy!\n[1]...[2]That's right.")
/*< 62>*/ 				switch (choice(2)) {
          				  case 0:
/*< 64>*/ 					printf("\x0E\x01\x09\x04\x0D\xF0ADon't stare at me like that.\nYou're making me blush, <r<darling>>!")
          					flw_66:
/*< 66>*/ 					printf("\x0E\x01\x09\x04\x12\xA00Lately, when I think about you, my\nhead gets all fuzzy, my heart races,\nI get short of breath, and I feel all\ndizzy...\nYou don't think... Could this be...\n\n\n\n[1]Sounds bad.[2]Yep, it's love.")
/*< 68>*/ 					switch (choice(2)) {
          					  case 0:
/*< 67>*/ 						printf("\x0E\x01\x09\x04\x0F\x120EOh, you're such a tease...")
          						flw_70:
/*< 70>*/ 						printf("\x0E\x01\x09\x04\x12\xA00Whoops. Kinda forgot myself there.\nBack to work!\n\n\n\x0E\x01\x09\x04\x0E\x1000Now where was I? Oh yeah, I was going\nto ask you if you wanted me to\ntake care of you forever...\n[1]Yes, please.[2-]...")
/*< 71>*/ 						switch (choice(2)) {
          						  case 0:
/*< 73>*/ 							printf("\x0E\x01\x09\x04\x0E\x100FReally...? That makes me so happy...")
          							flw_72:
/*< 72>*/ 							printf("\x0E\x01\x09\x04\x0D\xF0AOh no! I am SO sorry! I need to learn\nhow to keep these delirious dreams\nin check.\n\n\x0E\x01\x09\x04\x08\xA00...No, wait... Ahh! I mean, are there\nsome items you want me to check?\n<r<Darling>>?\n[1]Please![2-]No, thanks.")
/*<257>*/ 							story_flags[691 /* us: 805A9B20 0x01, jp: 805ACDA0 0x01 */] = true;
          							goto flw_270
          						  case 1:
          							goto flw_72
          						}
          					  case 1:
/*< 69>*/ 						printf("\x0E\x01\x09\x04\x0F\xF0DAaaah! I can't believe you just said it\nout loud! It's so embarrassing!")
          						goto flw_70
          					}
          				  case 1:
/*< 65>*/ 					printf("\x0E\x01\x09\x04\x0D\xF0AYou...make me so happy... I think I'm\ngoing to keel over...")
          					goto flw_66
          				}
          			}
          		  case 1:
/*<264>*/ 			switch (story_flags[690 /* us: 805A9B21 0x80, jp: 805ACDA1 0x80 */]) {
          			  case 0:
/*<265>*/ 				printf("\x0E\x01\x09\x04\x00\x05Oh. You're back. I'll hold on to\nanything of yours you want me to.\n\n\nSomething in your pouch today that\nyou want to deposit? Or something\nyou want to pick up?\n[1]Yes, please![2-]No, thanks.")
          				flw_60:
/*< 60>*/ 				entrypoint_112_06();
          			  case 1:
/*< 55>*/ 				printf("Hello. Welcome to the Item Check...\n\x0E\x01\x09\x04\x00\x05Oh.")
/*<279>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 57, 'param3': 6}
/*< 57>*/ 				printf("Oh. I, uhh... W-welcome...\n[1]What's wrong?[2]You seem different.")
/*< 56>*/ 				switch (choice(2)) {
          				  case 0:
/*< 58>*/ 					printf("\x0E\x01\x09\x04\n\xF18Um... Nothing... There's nothing\nwrong...")
          					flw_76:
/*< 76>*/ 					printf("It's not like \x201COh, hey, that guy's back!\nI'm so happy!\" or anything like that...\n\n\nBut...if you think about how often\nwe meet, you have to admit that our\nrelationship has gone beyond employee\nand customer, you know?\n\x0E\x01\x09\x04\x10\x1405Oh no... I didn't mean to... What am\nI saying?!\n\n\nPlease forget everything I just said.\nOK?\n\n\n\x0E\x01\x09\x04\x07\x800OK, get it together... Be professional...\nDo you have anything you want me to\nhold on to?\n[1]Yes, please.[2-]No, thanks.")
/*<269>*/ 					story_flags[690 /* us: 805A9B21 0x80, jp: 805ACDA1 0x80 */] = true;
          					goto flw_60
          				  case 1:
/*< 59>*/ 					printf("\x0E\x01\x09\x04\n\xF18I... I do? I don't think I do...\nMaybe you're mistaken?")
          					goto flw_76
          				}
          			}
          		}
          	  case 1:
/*<261>*/ 		switch (story_flags[689 /* us: 805A9B21 0x40, jp: 805ACDA1 0x40 */]) {
          		  case 0:
/*<262>*/ 			printf("\x0E\x01\x09\x04\x00\x01Oh. Hey. This is the Item Check.\nBut I bet you're here just to check me\nout, right? Well don't make a habit of\nit, OK?\nAnyway, you need to grab something?\nOr drop something off?\n[1]Yes, please![2-]No, thanks.")
          			flw_263:
/*<263>*/ 			entrypoint_112_06();
          		  case 1:
/*< 50>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hey. Welcome to the Item Check.\n...Oh, it's you again...\n\n\nYou've been coming by a lot recently.\nYou're pretty much the only one who\ncomes by regularly, actually...\n\n\x0E\x01\x09\x04\x00\x04Hey...wait a second...\n\n\n\nI don't suppose...\n\n\n\nYou don't come by here just to see me,\ndo you?\n\n\n[1]Uhh, no.[2]Yes, it's true.")
/*< 49>*/ 			switch (choice(2)) {
          			  case 0:
/*< 51>*/ 				printf("\x0E\x01\x09\x04\x00\x02Oh... Right...\n\n\n\nWell, of course. That wouldn't even\nmake sense, right?\n\n\n\x0E\x01\x09\x04\n\xC00Oh, it's no big deal that you don't.\nNot at all.")
          				flw_53:
/*< 53>*/ 				printf("\x0E\x01\x09\x04\x07\x800...Oh! I almost forgot. I still have a\njob to do. Do you have something\nfor me to hold on to?\n[1]Yes, please.[2-]No, thanks.")
/*<268>*/ 				story_flags[689 /* us: 805A9B21 0x40, jp: 805ACDA1 0x40 */] = true;
          				goto flw_263
          			  case 1:
/*< 52>*/ 				printf("\x0E\x01\x09\x04\x00\x02What?! Really?\n\n\n\nYeah, right... You think I'm going to\nfall for that old line?\n\n\n\x0E\x01\x09\x04\n\xC00But...if it were true, that might be\nkind of nice...")
          				goto flw_53
          			}
          		}
          	}
          }

          void entrypoint_123_07() {
/*< 93>*/ 	start()
/*< 92>*/ 	switch (story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */]) {
          	  case 0:
/*< 94>*/ 		switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          		  case 0:
/*< 95>*/ 			switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          			  case 0:
/*< 96>*/ 				switch (story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */]) {
          				  case 0:
/*< 97>*/ 					switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          					  case 0:
/*< 98>*/ 						switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          						  case 0:
/*<105>*/ 							switch (zone_temp_flags[0 /* 0x1 01 */]) {
          							  case 0:
/*<106>*/ 								printf("\x0E\x01\x09\x04\x00\x09I'm glad you told me how you feel,\ndarling. See you soon at the shop!")
          							  case 1:
/*<109>*/ 								printf("\x0E\x01\x09\x04\x00\x0DDarling! I told you that we need to\nkeep our relationship secret! If you\ncome over too often, my dad will\ncatch on to us!\nWhat could you possibly want this late?\n[1]Need to talk![2]Nothing.[3]Deposit items!")
/*<110>*/ 								switch (choice(3)) {
          								  case 0:
/*<111>*/ 									printf("\x0E\x01\x09\x04\x08\x08I'd love to talk forever with you,\nbut my father is staring at us!\nWe can talk another time!")
          								  case 1:
/*<112>*/ 									printf("\x0E\x01\x09\x04\x08\xA00Well, aren't you the strong and\ndomineering type? But that's\njust how I like you, my darling!")
          								  case 2:
/*<113>*/ 									printf("Well, if that's all you wanted, couldn't\nyou have just come to visit me at the\nItem Check during the day?\n\n\x0E\x01\x09\x04\x0E\x1000Or are you trying to tell me that that's\nall I am to you?")
          								}
          							}
          						  case 1:
/*<104>*/ 							switch (zone_temp_flags[0 /* 0x1 01 */]) {
          							  case 0:
/*<107>*/ 								printf("\x0E\x01\x09\x04\x00\x14I'm strong. I'll get over you. Please let\nme be alone with the cold night now...")
          							  case 1:
/*<108>*/ 								switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          								  case 0:
/*<115>*/ 									switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
          									  case 0:
/*<117>*/ 										printf("\x0E\x01\x09\x04\x00\x13I don't know why, but my father\nhas been in a great mood lately...\n\n\nDoes he even realize that his only\ndaughter has just had her heart\nbroken for the very first time?\nHow annoying...")
          									  case 1:
/*<116>*/ 										printf("\x0E\x01\x09\x04\x00\x14I know I said I'd get over it, but...\nSometimes at night, I feel this pain in\nmy chest... I guess that's why they call\nit a broken heart...")
          									}
          								  case 1:
/*<114>*/ 									printf("\x0E\x01\x09\x04\x00\x0EOh, Link... \nI never knew it would hurt so much...\nto have my heart broken...\x0E\x01\x09\x04\x00\x14")
          								}
          							}
          						}
          					  case 1:
/*<103>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 224, 'param3': 31}
/*<224>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 225, 'param3': 47}
/*<225>*/ 						{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 230, 'param3': 15}
/*<230>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 226, 'param3': 6}
/*<226>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 227, 'param3': 17}
/*<227>*/ 						{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 229, 'param3': 13}
/*<229>*/ 						set_camera(12, 0)
/*<228>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 223, 'param3': 48}
/*<223>*/ 						printf("\x0E\x01\x09\x04\x00\x05\x0E\x03\x01\x00Link... You came to see\nme. Thank you.\n\n\n\x0E\x01\x09\x04\x0E\xF00The truth is...there's something I'm\njust dying to get off my chest,\nLink.\n\nI'm just going to ask you something\npoint-blank, OK?")
/*<222>*/ 						set_camera(11, 0)
/*<297>*/ 						printf("What do you think about me?\n\n\n[1]I like you.[2]You store items.")
/*<296>*/ 						switch (choice(2)) {
          						  case 0:
/*<299>*/ 							printf("\x0E\x01\x09\x04\x0E\x100FYou do? Really?! You're not lying?!\n[1]Really![2]Lying, actually...")
/*<300>*/ 							switch (choice(2)) {
          							  case 0:
          								flw_302:
/*<302>*/ 								printf("\x0E\x01\x09\x04\x08\xA08I'm so happy! I feel like I'm in a dream.\nI have to hear it again just to be sure!\n\n\n\x0E\x01\x09\x04\x0E\x1000Do you really, really, really like me?\n\n\n\n[1]I do![2]Uh, sorry...")
/*<304>*/ 								switch (choice(2)) {
          								  case 0:
/*<305>*/ 									printf("\x0E\x01\x09\x04\x0D\xF0AYou're not lying, are you? I don't know\nwhat I'd do if I found out you're lying!\n\n\n[1]It's true![2]I'm lying.")
/*<312>*/ 									switch (choice(2)) {
          									  case 0:
          										flw_309:
/*<309>*/ 										printf("\x0E\x01\x09\x04\x08\xA09...Thank you! I love you so much,\ndarling! I'm sorry I doubted you and\nput you through all that questioning!")
/*<318>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 317, 'param3': 6}
/*<317>*/ 										set_camera(12, 0)
/*<321>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 320, 'param3': 6}
/*<320>*/ 										{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 319, 'param3': 13}
/*<319>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 314, 'param3': 6}
/*<314>*/ 										printf("\x0E\x01\x09\x04\x00\x13...But I understand your true feelings.\nBetter than you know.\n\n\nYou're saying that you cannot give\nyourself over to love just yet...\nThat you have much more important\nthings to do right now.\n\x0E\x01\x09\x04\x0E\x1000You have some kind of serious job you\nhave to attend to first, right?\n\n\n\x0E\x01\x09\x04\x0D\xF00If you weren't off on an adventure,\nyou probably wouldn't need to come\nby the Item Check so often.\n\nAnd that's why I won't ask any more of\nyou. I'll just watch over you, protecting\nyou from afar, keeping a vigilant eye\non your items.\n\x0E\x01\x09\x04\x0E\x1000And when your important work is done,\nwe'll tell my dad we're in love!\n\n\n\x0E\x01\x09\x04\x0B\xD00Until then, we'll keep our love secret!\nDarling, I... I'll see you again at the\nItem Check.")
/*<316>*/ 										give_gratitude_crystals();
/*<315>*/ 										story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */] = true;
          										flw_333:
/*<333>*/ 										story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */] = true;
/*<334>*/ 										zone_temp_flags[0 /* 0x1 01 */] = true;
/*<335>*/ 										{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
          										flw_310:
/*<310>*/ 										printf("\x0E\x01\x09\x04\x0F\x1214...I understand. That's your answer...\n\n\n\nI'm sorry for causing you trouble...")
/*<329>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 328, 'param3': 6}
/*<328>*/ 										set_camera(12, 0)
/*<331>*/ 										{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 330, 'param3': 13}
/*<330>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 332, 'param3': 6}
/*<332>*/ 										printf("\x0E\x01\x09\x04\x00\x13...Don't. I don't need your sympathy.\n\n\n\nI'm fine. I'll get over you quickly...\n\n\n\n\x0E\x01\x09\x04\x14\xD00The next time we meet, I'll greet\nyou as I would any old customer...")
/*<323>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 324, 'param3': 32}
/*<324>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 322, 'param3': 6}
/*<322>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 325, 'param3': 17}
/*<325>*/ 										{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 5120, 'next': 326, 'param3': 13}
/*<326>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 327, 'param3': 6}
/*<327>*/ 										printf("But tonight I want to be alone...\n\n\n\nGoodnight...my darling.")
          										goto flw_333
          									}
          								  case 1:
          									flw_307:
/*<307>*/ 									printf("\x0E\x01\x09\x04\x0F\x120ANo way...\n\n\n\n\x0E\x01\x09\x04\x0E\x1000You have no feelings for me? All I am\nto you is some girl who stores your\nitems? You really think that?\n[1]Actually, I like you![2]Yep.")
/*<311>*/ 									switch (choice(2)) {
          									  case 0:
          										goto flw_309
          									  case 1:
          										goto flw_310
          									}
          								}
          							  case 1:
          								flw_303:
/*<303>*/ 								printf("\x0E\x01\x09\x04\x0F\x120FAre you serious?! How could you do\nthat to me?!\n\n\n\x0E\x01\x09\x04\x0E\x1000Oh, wait... I see what's going on here...\nYou're just too shy to admit your true\nfeelings, aren't you?\n[1]Yep, I'm shy![2]No...")
/*<306>*/ 								switch (choice(2)) {
          								  case 0:
/*<308>*/ 									printf("\x0E\x01\x09\x04\x08\xA08What? So you really do like me?\n\n\n\n[1]I like you![2]I'm...sorry.")
/*<313>*/ 									switch (choice(2)) {
          									  case 0:
          										goto flw_309
          									  case 1:
          										goto flw_310
          									}
          								  case 1:
          									goto flw_307
          								}
          							}
          						  case 1:
/*<298>*/ 							printf("\x0E\x01\x09\x04\x0F\x1210...Huh?\n\n\n\n\x0E\x01\x09\x04\x0D\xF00M-maybe I didn't ask you the right\nway...\n\n\n\x0E\x01\x09\x04\x0E\x1000OK. Let me think here... What am I\nto you?\n[1]Someone I like![2]A shopkeeper.")
/*<301>*/ 							switch (choice(2)) {
          							  case 0:
          								goto flw_302
          							  case 1:
          								goto flw_303
          							}
          						}
          					}
          				  case 1:
/*<102>*/ 					printf("\x0E\x01\x09\x04\x00\x07Hello, <r<darling>>! Welcome...\n\n\n\nYou've come to see me at home...\nI'm so happy!")
          				}
          			  case 1:
/*<101>*/ 				printf("\x0E\x01\x09\x04\x00\x15Oh, hello! You decided to come see me\nat home...\n\n\nYou're not trying to tell me I'm your\nspecial someone, are you?")
          			}
          		  case 1:
/*<100>*/ 			printf("\x0E\x01\x09\x04\x00\x17No matter how much you may miss me,\nI don't make it a habit of having\ncustomers come around my house when\nI'm off the clock, you know?\n\x0E\x01\x09\x04\x01\x800Or am I being too self-conscious?")
          		}
          	  case 1:
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x00\x02Sigh... Isn't there anyone special out\nthere for me? I wonder... I wish I could\nfind someone to share a beautiful love\nwith...\n\x0E\x01\x09\x04\x01\x800Uhh... Hey, buddy, do you mind?\nDo you always just walk into people's\nhouses without asking permission?")
          	}
          }

          void entrypoint_123_08() {
/*<184>*/ 	start()
/*<188>*/ 	switch (story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */]) {
          	  case 0:
/*<189>*/ 		printf("\x0E\x01\x09\x04\x00\xD02Thank you so much, Link!\n\n\n\n\x0E\x01\x09\x04\n\x900My home is sparkling clean again!\nIt feels so much better when the\nplace isn't under a blanket of dust.")
/*<195>*/ 		make_actor_do_something(1, 0)
          		flw_190:
/*<190>*/ 		printf("\x0E\x01\x09\x04\x01\x909...I can't let you go without your\nreward. Watch out--there's some big\nmoney coming... BAM, <r<20 Rupees>>!\x0E\x01\x09\x04\n\xD00")
/*<191>*/ 		give_item(4 0x04);
/*<428>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 192, 'param3': 12}
/*<192>*/ 		printf("\x0E\x01\x09\x04\x01\x900If the place gets dusty again, I might\nneed you to come back and tidy it up\nfor me. But I'll pay you again, OK?")
/*<430>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 429, 'param3': 12}
/*<429>*/ 		printf("\x0E\x01\x09\x04\n\x900Oh...one more thing.\nDon't tell Pipit about this.\n\n\n\x0E\x01\x09\x04\x08\x900He'll only get angry at me for spending\nmoney on something he thinks I should\nbe doing myself. You can keep a secret,\nright?")
/*<193>*/ 		story_flags[581 /* us: 805A9B1B 0x10, jp: 805ACD9B 0x10 */] = true;
/*<194>*/ 		zone_temp_flags[0 /* 0x1 01 */] = false;
/*<196>*/ 		story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
/*<199>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<185>*/ 		printf("\x0E\x01\x09\x04\x00\xD02Thank you so much, Link!\n\n\n\n\x0E\x01\x09\x04\n\x900My home is sparkling clean again!\nIt feels so much better when the\nplace isn't under a blanket of dust.")
/*<187>*/ 		make_actor_do_something(1, 0)
/*<186>*/ 		give_gratitude_crystals();
/*<198>*/ 		story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */] = true;
/*<197>*/ 		story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */] = true;
          		goto flw_190
          	}
          }

          void entrypoint_123_09() {
/*<208>*/ 	start()
/*<201>*/ 	printf("\x0E\x01\x09\x04\x00\x02Oh, it's so nice to have someone who's\ngoing to do some cleaning around here,\nLink.\n\nWhen all the dust is gone, I'll give you\nsome money, so make sure you talk to\nme afterward, OK?\n\n\x0E\x01\x09\x04\x01\x900Or are you already done?\n[1]All done![2-]Not quite.")
/*<202>*/ 	switch (choice(2)) {
          	  case 0:
/*<204>*/ 		printf("\x0E\x01\x09\x04\x00\nWell, that's too bad... Oh well.\nLet me know if you can help out\nnext time, OK?")
/*<205>*/ 		make_actor_do_something(1, 0)
/*<206>*/ 		zone_temp_flags[0 /* 0x1 01 */] = false;
/*<207>*/ 		story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
          	  case 1:
/*<203>*/ 		printf("\x0E\x01\x09\x04\n\x900Oh, well then by all means, please\ncontinue. I'd start with the floor, as\nit could really use some work...\n\nThere's probably still some dust around\nthe <r<window>>, the <r<shelves>>, and the <r<bed>> as\nwell. You have to keep a sharp eye out\nto get all of it!")
          	}
          }

          void entrypoint_123_10() {
/*<132>*/ 	start()
/*<437>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 139, 'param3': 17}
/*<139>*/ 	set_camera(4, 0)
          	flw_219:
/*<219>*/ 	switch (zone_temp_flags[8 /* 0x0 01 */]) {
          	  case 0:
/*<220>*/ 		printf("Hold on there, Link.\nI've got your reward for cleaning the\nplace. Just come on over here.")
          	  case 1:
/*<133>*/ 		printf("\x0E\x01\x09\x04\x00\x04Oh. Hi there, Link. \nAre you still working on cleaning the\nplace?\n\nOr are you done for today?\n[1]All done![2-]Almost...")
/*<134>*/ 		switch (choice(2)) {
          		  case 0:
/*<136>*/ 			printf("\x0E\x01\x09\x04\x00\nWell, that's too bad... Oh well.\nLet me know if you can help out\nnext time, OK?")
/*<294>*/ 			{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 137, 'param3': 15}
/*<137>*/ 			make_actor_do_something(1, 0)
/*<138>*/ 			zone_temp_flags[0 /* 0x1 01 */] = false;
/*<150>*/ 			story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
          			flw_140:
/*<140>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<135>*/ 			printf("\x0E\x01\x09\x04\n\x900Oh, well then by all means, please\ncontinue. I'd start with the floor, as\nit could really use some work...\n\nThere's probably still some dust around\nthe <r<window>>, the <r<shelves>>, and the <r<bed>> as\nwell. You have to keep a sharp eye out\nto get all of it!")
/*<165>*/ 			{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 140, 'param3': 15}
          			goto flw_140
          		}
          	}
          }

          void entrypoint_123_11() {
/*<141>*/ 	start()
/*<436>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 147, 'param3': 17}
/*<147>*/ 	set_camera(4, 0)
/*<142>*/ 	switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
          	  case 0:
          		flw_164:
/*<164>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
          			goto flw_219
          		  case 1:
/*<145>*/ 			printf("\x0E\x01\x09\x04\x00\x04Leaving already, Link?\n\n\n\nIf you see Pipit out on patrol, make\nsure you wave and say hello!")
/*<146>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
/*<163>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<143>*/ 		switch (story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */]) {
          		  case 0:
/*<144>*/ 			story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */] = false;
          			goto flw_164
          		  case 1:
          			goto flw_164
          		}
          	}
          }

          void entrypoint_123_12() {
/*<214>*/ 	start()
/*<274>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 215, 'param3': 6}
/*<215>*/ 	set_camera(10, 0)
/*<216>*/ 	printf("\x0E\x01\x09\x04\x00\xD08Oh my! There's no more dust in my\nhome! Thank you, Link!\n\n\n\x0E\x01\x09\x04\n\x900You've brightened my day. Come over\nhere, and let me pay you.")
/*<217>*/ 	zone_temp_flags[9 /* 0x0 02 */] = false;
/*<221>*/ 	zone_temp_flags[8 /* 0x0 01 */] = true;
/*<218>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_123_13() {
/*<399>*/ 	start()
/*<381>*/ 	printf("\x0E\x01\x09\x04\x1F0A\x309That was a very valuable item,\nso you're going to have to pay me\n<r<30 Rupees or so>>! And I didn't just\nmake that number up!")
/*<382>*/ 	switch (random(4)) {
          	  case 0:
/*<383>*/ 		check_item_flag(501, 24)
/*<384>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 174}) {
          		  case 0:
          			flw_385:
/*<385>*/ 			rupees += -24;
          			flw_400:
/*<400>*/ 			entrypoint_123_14();
          		  case 1:
/*<386>*/ 			printf("...But you don't even have enough to\npay! Hmph. The nerve!\n\n\nThen I'll just take what you have on\nyou. And next time, be more careful!")
/*<406>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_385
          		}
          	  case 1:
/*<387>*/ 		check_item_flag(501, 26)
/*<388>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 176}) {
          		  case 0:
          			flw_389:
/*<389>*/ 			rupees += -26;
          			goto flw_400
          		  case 1:
/*<390>*/ 			printf("...But you don't even have enough to\npay! Hmph. The nerve!\n\n\nThen I'll just take what you have on\nyou. And next time, be more careful!")
/*<407>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_389
          		}
          	  case 2:
/*<391>*/ 		check_item_flag(501, 29)
/*<392>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 178}) {
          		  case 0:
          			flw_393:
/*<393>*/ 			rupees += -29;
          			goto flw_400
          		  case 1:
/*<394>*/ 			printf("...But you don't even have enough to\npay! Hmph. The nerve!\n\n\nThen I'll just take what you have on\nyou. And next time, be more careful!")
/*<408>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_393
          		}
          	  case 3:
/*<395>*/ 		check_item_flag(501, 38)
/*<396>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 180}) {
          		  case 0:
          			flw_397:
/*<397>*/ 			rupees += -38;
          			goto flw_400
          		  case 1:
/*<398>*/ 			printf("...But you don't even have enough to\npay! Hmph. The nerve!\n\n\nThen I'll just take what you have on\nyou. And next time, be more careful!")
/*<409>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_397
          		}
          	}
          }

          void entrypoint_123_14() {
/*<337>*/ 	start()
          	flw_246:
/*<246>*/ 	zone_temp_flags[1 /* 0x1 02 */] = false;
/*<247>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
          		flw_248:
/*<248>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<245>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_248
          	}
          }

          void entrypoint_123_15() {
/*<360>*/ 	start()
/*<359>*/ 	printf("\x0E\x01\x09\x04\x1F0A\x309That was a pretty expensive item,\nso you're going to have to pay me\n<r<about 20 Rupees>>! And I didn't just\nmake that number up!")
/*<358>*/ 	switch (random(4)) {
          	  case 0:
/*<357>*/ 		check_item_flag(501, 17)
/*<356>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 152}) {
          		  case 0:
          			flw_355:
/*<355>*/ 			rupees += -17;
          			flw_342:
/*<342>*/ 			entrypoint_123_14();
          		  case 1:
/*<354>*/ 			printf("...But you don't even have enough to\npay! Hmph. The nerve!\n\n\nThen I'll just take what you have on\nyou. And next time, be more careful!")
/*<410>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_355
          		}
          	  case 1:
/*<353>*/ 		check_item_flag(501, 19)
/*<352>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 150}) {
          		  case 0:
          			flw_351:
/*<351>*/ 			rupees += -19;
          			goto flw_342
          		  case 1:
/*<350>*/ 			printf("...But you don't even have enough to\npay! Hmph. The nerve!\n\n\nThen I'll just take what you have on\nyou. And next time, be more careful!")
/*<411>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_351
          		}
          	  case 2:
/*<349>*/ 		check_item_flag(501, 22)
/*<348>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 148}) {
          		  case 0:
          			flw_347:
/*<347>*/ 			rupees += -22;
          			goto flw_342
          		  case 1:
/*<346>*/ 			printf("...But you don't even have enough to\npay! Hmph. The nerve!\n\n\nThen I'll just take what you have on\nyou. And next time, be more careful!")
/*<412>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_347
          		}
          	  case 3:
/*<345>*/ 		check_item_flag(501, 23)
/*<344>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 146}) {
          		  case 0:
          			flw_343:
/*<343>*/ 			rupees += -23;
          			goto flw_342
          		  case 1:
/*<341>*/ 			printf("...But you don't even have enough to\npay! Hmph. The nerve!\n\n\nThen I'll just take what you have on\nyou. And next time, be more careful!")
/*<413>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_343
          		}
          	}
          }

          void entrypoint_123_16() {
/*<379>*/ 	start()
/*<361>*/ 	printf("\x0E\x01\x09\x04\x1F0A\x309That was a pretty nice item,\nso you're going to have to pay me\n<r<roughly 10 Rupees>>! And no...I didn't\njust make that number up!")
/*<362>*/ 	switch (random(4)) {
          	  case 0:
/*<363>*/ 		check_item_flag(501, 7)
/*<364>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 162}) {
          		  case 0:
          			flw_365:
/*<365>*/ 			rupees += -7;
          			flw_380:
/*<380>*/ 			entrypoint_123_14();
          		  case 1:
/*<366>*/ 			printf("...But you don't even have enough to\npay! Hmph. The nerve!\n\n\nThen I'll just take what you have on\nyou. And next time, be more careful!")
/*<414>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_365
          		}
          	  case 1:
/*<367>*/ 		check_item_flag(501, 8)
/*<368>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 164}) {
          		  case 0:
          			flw_369:
/*<369>*/ 			rupees += -8;
          			goto flw_380
          		  case 1:
/*<370>*/ 			printf("...But you don't even have enough to\npay! Hmph. The nerve!\n\n\nThen I'll just take what you have on\nyou. And next time, be more careful!")
/*<415>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_369
          		}
          	  case 2:
/*<371>*/ 		check_item_flag(501, 11)
/*<372>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 166}) {
          		  case 0:
          			flw_373:
/*<373>*/ 			rupees += -11;
          			goto flw_380
          		  case 1:
/*<374>*/ 			printf("...But you don't even have enough to\npay! Hmph. The nerve!\n\n\nThen I'll just take what you have on\nyou. And next time, be more careful!")
/*<416>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_373
          		}
          	  case 3:
/*<375>*/ 		check_item_flag(501, 13)
/*<376>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 168}) {
          		  case 0:
          			flw_377:
/*<377>*/ 			rupees += -13;
          			goto flw_380
          		  case 1:
/*<378>*/ 			printf("...But you don't even have enough to\npay! Hmph. The nerve!\n\n\nThen I'll just take what you have on\nyou. And next time, be more careful!")
/*<417>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_377
          		}
          	}
          }

          void entrypoint_123_00() {
          	start()
/*<  4>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<  5>*/ 		check_item_flag(49, 1)
/*<  6>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 6}) {
          		  case 0:
/*<  1>*/ 			switch (story_flags[574 /* us: 805A9B18 0x20, jp: 805ACD98 0x20 */]) {
          			  case 0:
/*<  7>*/ 				switch (story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */]) {
          				  case 0:
/*< 44>*/ 					switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
          					  case 0:
/*< 43>*/ 						switch (story_flags[580 /* us: 805A9B1B 0x08, jp: 805ACD9B 0x08 */]) {
          						  case 0:
          							flw_19:
/*< 19>*/ 							switch (story_flags[581 /* us: 805A9B1B 0x10, jp: 805ACD9B 0x10 */]) {
          							  case 0:
/*< 20>*/ 								printf("\x0E\x01\x09\x04\x00\x01Welcome, Link.\n\n\n\nIf my house gets dirty again, you'll be\nthe first to know!")
          							  case 1:
/*<124>*/ 								switch (zone_temp_flags[0 /* 0x1 01 */]) {
          								  case 0:
/*<211>*/ 									switch (context_related2(0)) {
          									  case 0:
/*<213>*/ 										entrypoint_123_08();
          									  case 1:
/*<212>*/ 										entrypoint_123_09();
          									}
          								  case 1:
/*<123>*/ 									switch (zone_temp_flags[1 /* 0x1 02 */]) {
          									  case 0:
/*<125>*/ 										printf("\x0E\x01\x09\x04\x08\xD01Do you think you could do some light\ncleaning for me? I've always hated\ncleaning...\n\n\x0E\x01\x09\x04\n\x900I'll give you some money, OK?\n[1]Sure![2-]No, sorry.")
          										flw_126:
/*<126>*/ 										switch (choice(2)) {
          										  case 0:
/*<128>*/ 											printf("\x0E\x01\x09\x04\x01\xD07Oh, that makes me so happy! I knew\nyou wouldn't leave me to a life of dirt,\nLink.\n\n\x0E\x01\x09\x04\x01\xD00So I'll just leave you to it, then!")
/*<130>*/ 											make_actor_do_something(0, 0)
/*<149>*/ 											story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = true;
/*<129>*/ 											zone_temp_flags[0 /* 0x1 01 */] = true;
          										  case 1:
/*<127>*/ 											printf("\x0E\x01\x09\x04\x01\x90AOh...Link, I was sure\nyou'd help me out!")
/*<131>*/ 											zone_temp_flags[1 /* 0x1 02 */] = true;
          										}
          									  case 1:
/*<276>*/ 										{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2304, 'next': 21, 'param3': 13}
/*< 21>*/ 										printf("\x0E\x01\x09\x04\x00\x01Welcome, Link.\n\n\n\n\x0E\x01\x09\x04\x08\x900My house is all dusty again. Do you\nmind cleaning it? I'll give you some\npocket money...\n[1]Sure![2-]No, sorry.")
          										goto flw_126
          									}
          								}
          							}
          						  case 1:
/*<277>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 45, 'param3': 13}
/*< 45>*/ 							printf("\x0E\x01\x09\x04\x00\x01Hi there, Link.\n\n\n\n\x0E\x01\x09\x04\x08\x900Pipit is really angry with me...\n\n\n\n\x0E\x01\x09\x04\n\x900He said I shouldn't be spending our\nmoney on a housekeeper.\n\n\n\x0E\x01\x09\x04\x01\xC00...\n\n\n\n\x0E\x01\x09\x04\x08\xD09But...you're not exactly a housekeeper,\nare you, Link?\nThat makes it OK, doesn't it?\n\n\x0E\x01\x09\x04\x08\x900Anyway, that's good enough for me.\nAs far as I'm concerned, I'll pay you to\nclean my house anytime it gets dusty.")
/*< 46>*/ 							story_flags[580 /* us: 805A9B1B 0x08, jp: 805ACD9B 0x08 */] = true;
          						}
          					  case 1:
          						goto flw_19
          					}
          				  case 1:
/*<438>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 120, 'param3': 31}
/*<120>*/ 					switch (zone_temp_flags[0 /* 0x1 01 */]) {
          					  case 0:
/*<200>*/ 						switch (context_related2(0)) {
          						  case 0:
/*<210>*/ 							entrypoint_123_08();
          						  case 1:
/*<209>*/ 							entrypoint_123_09();
          						}
          					  case 1:
/*<  8>*/ 						switch (zone_temp_flags[1 /* 0x1 02 */]) {
          						  case 0:
/*< 15>*/ 							printf("\x0E\x01\x09\x04\x08\xD01Do you think you could do some light\ncleaning for me? I've always hated\ncleaning...\n\n\x0E\x01\x09\x04\n\x900I'll give you some money, OK?\n[1]Sure![2-]No, sorry.")
          							flw_2:
/*<  2>*/ 							switch (choice(2)) {
          							  case 0:
/*< 12>*/ 								printf("\x0E\x01\x09\x04\n\xD07You will?! Great! I knew you wouldn't\nleave me to sit in this dusty house,\nLink.\n\n\x0E\x01\x09\x04\x08\x904What's that? ...A broom? You know,\nI don't even remember where we keep\nthe crazy thing...\n\x0E\x01\x08\x02\xFFCD...Or if we ever owned one...\n\x0E\x01\x09\x04\x09\x900Most of the time I just wait for a good\nstrong wind to come along and <r<blow the\ndust away>>.\n\n\x0E\x01\x09\x04\x01\x900So look, I don't really care how you get\nthe job done--I just want you to <r<blow it\nall away >>for me.\n\n\x0E\x01\x09\x04\x08\x902So I'll just leave you to it, then!")
/*<119>*/ 								make_actor_do_something(0, 0)
/*<148>*/ 								story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = true;
/*<  3>*/ 								zone_temp_flags[0 /* 0x1 01 */] = true;
          								flw_122:
/*<122>*/ 								switch (story_flags[574 /* us: 805A9B18 0x20, jp: 805ACD98 0x20 */]) {
          								  case 0:
          									flw_121:
/*<121>*/ 									zone_temp_flags[1 /* 0x1 02 */] = true;
          								  case 1:
/*<118>*/ 									story_flags[574 /* us: 805A9B18 0x20, jp: 805ACD98 0x20 */] = true;
          									goto flw_121
          								}
          							  case 1:
/*< 13>*/ 								printf("\x0E\x01\x09\x04\x01\x90AOh...Link, I was sure\nyou'd help me out!")
          								goto flw_122
          							}
          						  case 1:
/*< 14>*/ 							printf("\x0E\x01\x09\x04\x08\xD01Ahh, Link. Welcome.\n\n\n\n\x0E\x01\x09\x04\x01\x900Do you think you could do some light\ncleaning for me? I've always hated\ncleaning...\n\n\x0E\x01\x09\x04\n\x900I'll even pay you...OK?\n\n\n\n[1]Sure![2-]Sorry, no.")
          							goto flw_2
          						}
          					}
          				}
          			  case 1:
/*<  9>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 275, 'param3': 31}
/*<275>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2304, 'next': 11, 'param3': 13}
/*< 11>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ahh, Link. Welcome.\n\n\n\n\x0E\x01\x09\x04\x08\x900So here's the thing, Link.\nMy house is terribly dirty...\n\n\n\x0E\x01\x09\x04\x09\x900Pipit is always telling me to do some\ndusting around here, but I just can't\nbring myself to do it.\n\n\x0E\x01\x09\x04\x08\x900That's why I wanted to ask you if you\nwouldn't mind cleaning it for me.\nI'll even pay you, Link.\n[1]I'm on it![2-]Nah...")
          				goto flw_2
          			}
          		  case 1:
          			flw_17:
/*< 17>*/ 			switch (zone_temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 18>*/ 				printf("\x0E\x01\x09\x04\x00\x02How's my Pipit doing at school?\n\n\n\nHe's a real go-getter, unlike myself,\nso I'm sure I have no reason to worry.\n[1]Such a mess![2]...")
/*<166>*/ 				switch (choice(2)) {
          				  case 0:
/*<167>*/ 					printf("\x0E\x01\x09\x04\x01\x909Oh, you're right... This place is filthy\nagain. It keeps doing that!\n\n\n\x0E\x01\x09\x04\n\x90AIt's just that I hate cleaning, you know.\nIt would be great if someone would\nclean the place up for me...")
          				  case 1:
/*<168>*/ 					printf("\x0E\x01\x09\x04\x01\x904Oh, what's wrong? You just made a\nface like you wanted to say something.")
          				}
          			  case 1:
/*< 10>*/ 				printf("\x0E\x01\x09\x04\x00\xD01Ahh, Link. Welcome.\n\n\n\n\x0E\x01\x09\x04\n\x900How's my Pipit doing at school?")
/*< 16>*/ 				zone_temp_flags[1 /* 0x1 02 */] = true;
          			}
          		}
          	  case 1:
          		goto flw_17
          	}
          }

          void entrypoint_123_01() {
/*< 22>*/ 	start()
/*<295>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1014, 'next': 23, 'param3': 24}
/*< 23>*/ 	printf("We've been over this, Mom!")
/*<180>*/ 	set_camera(7, 0)
/*<282>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 24, 'param3': 6}
/*< 24>*/ 	set_camera(1, 0)
/*<172>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 169, 'param3': 6}
/*<169>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 100, 'next': 25, 'param3': 14}
/*< 25>*/ 	printf("Calm down, Pipit. Don't get so mad...")
/*< 26>*/ 	printf("How could I not be mad?!\n\n\n\nIt's been obvious lately that you've\nbeen <r<giving someone Rupees >>to\nclean the house!\n\nI gave you that money so you could buy\nsome bread!\n\n\nIf you keep spending money like this,\nI won't have any money to go to the\nKnight Academy!\n\nI didn't take that job patrolling just so\nyou could live a life of luxury!\n\n\nYou've got to stop doing this!")
/*< 29>*/ 	story_flags[577 /* us: 805A9B1B 0x01, jp: 805ACD9B 0x01 */] = true;
/*<179>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 28, 'param3': 6}
/*< 28>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 18, 'next': 286, 'param3': 32}
/*<286>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 33, 'param3': 32}
/*< 33>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 90, 'next': 32, 'param3': 6}
/*< 32>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 274, 'next': 171, 'param3': 15}
/*<171>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 100, 'next': 281, 'param3': 50}
/*<281>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 283, 'param3': 17}
/*<283>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 170, 'param3': 6}
/*<170>*/ 	set_camera(2, 0)
/*<173>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4609, 'param2': 3072, 'next': 27, 'param3': 13}
/*< 27>*/ 	printf("Oh... Hey there, Link...\nWhat could you want at this hour?")
/*<182>*/ 	set_camera(8, 0)
/*<183>*/ 	printf("\x0E\x01\x09\x04\x120B\x1100You...didn't hear any of that, did you?\nThere's no way you heard, right?\n[1]Heard what?[2]Sorry...")
/*<151>*/ 	switch (choice(2)) {
          	  case 0:
/*<152>*/ 		printf("\x0E\x01\x09\x04\x1201\x1100Nothing... It's nothing.\n\n\n\n\x0E\x01\x09\x04\x1208\x400Anyway, I've got to get back out on\npatrol! You take care of yourself when\nyou're out walking the streets!")
          		flw_181:
/*<181>*/ 		set_camera(2, 0)
/*< 30>*/ 		{'type': 'type3', 'subType': 2, 'param1': 26, 'param2': 18, 'next': 31, 'param3': 14}
/*< 31>*/ 		story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */] = true;
/*< 34>*/ 		story_flags[578 /* us: 805A9B1B 0x02, jp: 805ACD9B 0x02 */] = true;
/*< 35>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<153>*/ 		printf("\x0E\x01\x09\x04\x1201\x1100Oh... You heard!\n\n\n\n\x0E\x01\x09\x04\x120F\x1100It's true. I'm working the night patrol\nto earn some money!\n\n\n\x0E\x01\x09\x04\x1208\x1100But don't look at me like that!\nYou're not exactly Mr. Perfect either,\nare you, Mr. Eavesdropper!\n\n\x0E\x01\x09\x04\x120C\xC00Maybe we should just forget about\neverything that happened here tonight!")
/*<154>*/ 		scene_flags[0 'Skyloft'][76 /* 0x8 10 */] = true;
          		goto flw_181
          	}
          }

          void entrypoint_123_02() {
/*< 36>*/ 	start()
/*<434>*/ 	switch (zone_temp_flags[16 /* 0x3 01 */]) {
          	  case 0:
/*<432>*/ 		printf("\x0E\x01\x09\x04\x10\x1100Hmm...<pause1E> Recently the monsters that\nusually roam the town at night are\nnowhere to be seen.\n\n\x0E\x01\x09\x04ÿ\xFF00I wonder what's going on... Not that\nI'm complaining or anything!\nPeaceful nights are the best.")
          	  case 1:
/*< 37>*/ 		switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (story_flags[579 /* us: 805A9B1B 0x04, jp: 805ACD9B 0x04 */]) {
          			  case 0:
/*<178>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 41, 'param3': 13}
/*< 41>*/ 				printf("Hey, Link! It can be\ndangerous out here at night, so be\ncareful.\n\n\x0E\x01\x09\x04\x11\xC09Oh, and about that thing the other\nnight... We agreed to keep that secret,\nright?!")
          				flw_431:
/*<431>*/ 				switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          				  case 0:
/*<433>*/ 					zone_temp_flags[16 /* 0x3 01 */] = true;
          				  case 1:
          				}
          			  case 1:
/*<161>*/ 				switch (scene_flags[76 /* 0x8 10 */]) {
          				  case 0:
/*<176>*/ 					{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 4376, 'next': 39, 'param3': 13}
/*< 39>*/ 					printf("\x0E\x03\x01\x00You...weren't supposed to see that\nwhole spectacle, Link. \nHow embarrassing...\n\n\x0E\x01\x09\x04\x0F\x1100I feel so ashamed of my mother\nsometimes. She's just so lazy\nsometimes. I don't know what to do.\n\n\x0E\x01\x09\x04\x08\xC0BBut I'll be fine. You don't need to\nworry about me.\n\n\n\x0E\x01\x09\x04\x01\x1100I still haven't worked out who did the\ncleaning for my mother, though...\n\n\n\x0E\x01\x09\x04\x08\xC16Who do they think they are, getting\ninvolved in our business like that?")
/*< 40>*/ 					story_flags[579 /* us: 805A9B1B 0x04, jp: 805ACD9B 0x04 */] = true;
          				  case 1:
/*<177>*/ 					{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 162, 'param3': 13}
/*<162>*/ 					printf("Hey, Link. I'm protecting\nthe peace in Skyloft!\n\n\n\x0E\x01\x09\x04\x0C\x400Let's make this a safe place to live,\nwhere we all can live in peace!\n\n\n\x0E\x01\x09\x04\x01\xC52Umm...<pause1E> Why are you looking at me so\nsuspiciously?")
          					goto flw_431
          				}
          			}
          		  case 1:
/*<159>*/ 			switch (zone_temp_flags[4 /* 0x1 10 */]) {
          			  case 0:
/*<175>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1029, 'next': 160, 'param3': 13}
/*<160>*/ 				printf("\x0E\x03\x01\x00Link! One day you'll\nunderstand what it is to be a knight!\nDon't you worry.")
          				goto flw_431
          			  case 1:
/*<174>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 42, 'param3': 13}
/*< 42>*/ 				printf("Hey, Link! It's dangerous\nout at night, so be careful!\n\n\n\x0E\x01\x09\x04\x0B\x400This area is my patrol route.\n\n\n\n\x0E\x01\x09\x04\x08\x404At night, monsters get really active\naround here!\n\n\nIt's the duty of a knight to protect the\npublic from any danger!\n[1]How admirable![2]Duty or job?")
/*<155>*/ 				switch (choice(2)) {
          				  case 0:
/*<156>*/ 					printf("\x0E\x01\x09\x04\x09\xC09Admirable?! Nonsense! It's the bare\nminimum of what people expect from\nus! We are knights in training, and this\nis what knights do!\nThat's the Pipit way! All I need are\nthe smiles of the people I protect as\nmy payment!\n\n\x0E\x01\x09\x04\x08\x400This is what it means to be a knight.\n\x0E\x01\x09\x04\x00\x05I'm sure you'll understand how that\nfeels one day too, Link!")
          					flw_158:
/*<158>*/ 					zone_temp_flags[4 /* 0x1 10 */] = true;
          				  case 1:
/*<157>*/ 					printf("\x0E\x03\x01\x00\x0E\x01\x09\x04\x0C\xC17Link! For shame! Why did\nyou decide to become a knight,\nanyway?\n\nFor the money?! How could you be\nswayed by the temptation of material\ngain? Do you have no honor?!\n\n\x0E\x01\x09\x04\x08\x405That's the Pipit way! More than money,\nI love seeing people happy and safe.\nThat's what being a knight is all about!")
          					goto flw_158
          				}
          			}
          		}
          	}
          }

          void entrypoint_123_03() {
/*<251>*/ 	start()
/*<253>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*<255>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 768, 'next': 254, 'param3': 13}
/*<254>*/ 		printf("\x0E\x01\x09\x04\x00\x09You broke my antique!\n\n\n\nNext time that happens, we're going to\nhave words!")
          	  case 1:
/*<252>*/ 		printf("\x0E\x01\x09\x04\x00\x07I love to collect antiques, you know?\nAll the things you see in my house\nare very old and valuable.\n\nMake sure you don't break anything!")
          	}
          }

          void entrypoint_123_04() {
/*<231>*/ 	start()
/*<250>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 31, 'next': 278, 'param3': 32}
/*<278>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 100, 'next': 249, 'param3': 50}
/*<249>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7945, 'param2': 768, 'next': 233, 'param3': 13}
/*<233>*/ 	printf("\x0E\x01\x09\x04\x1F00\nNooo! How could you?!")
/*<241>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 100, 'next': 242, 'param3': 16}
/*<242>*/ 	set_camera(3, 0)
/*<336>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 232, 'param3': 24}
/*<232>*/ 	switch (story_flags[378 /* us: 805A9B05 0x01, jp: 805ACD85 0x01 */]) {
          	  case 0:
/*<237>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*<239>*/ 			printf("\x0E\x01\x09\x04\x1F0A\x300YOU! Did I do something horrible to\nyou in a past life?! Why are you\npunishing me like this?!")
          			flw_401:
/*<401>*/ 			check_item_flag(501, 1)
/*<402>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 182}) {
          			  case 0:
/*<244>*/ 				switch (random(3)) {
          				  case 0:
/*<338>*/ 					entrypoint_123_13();
          				  case 1:
/*<339>*/ 					entrypoint_123_15();
          				  case 2:
/*<340>*/ 					entrypoint_123_16();
          				}
          			  case 1:
/*<405>*/ 				switch (zone_temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*<418>*/ 					printf("...Look, I already know you don't have\neven a single Rupee to your name...\nSO STOP BREAKING THINGS!\n\nGet out of here!")
          					goto flw_246
          				  case 1:
/*<403>*/ 					printf("...But you don't even have a single\nRupee on you!\n\n\nSo you think you can just wander \nabout, penniless, destroying people's\nthings and laughing in their faces when\nthey ask for money in return?!\nThe nerve! I don't even want your\nmoney anymore. Just get out of my\nsight!")
/*<404>*/ 					zone_temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_246
          				}
          			}
          		  case 1:
/*<240>*/ 			printf("\x0E\x01\x09\x04\x1F09\x300You broke my precious antique!")
          			goto flw_401
          		}
          	  case 1:
/*<238>*/ 		printf("\x0E\x01\x09\x04\x1F09\x300You broke my antique!\n\n\n\nThat's it! You break it, you buy it!\n\n\n\n\x0E\x01\x09\x04\x1F0B\x700Let me see now... That was a very\nexpensive antique, so <r<about>> <r<20 Rupees\n>>should suffice!\n\n\x0E\x01\x09\x04\x1F01\x305What's that look for? Oh, you think I'm\njust making that number up?\n\n\n\x0E\x01\x09\x04\x1F09\x309That's ridiculous! I know the value of\nevery item in my possession, and I\nintend to be compensated in full!")
/*<419>*/ 		check_item_flag(501, 1)
/*<420>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 186}) {
          		  case 0:
/*<423>*/ 			check_item_flag(501, 18)
/*<424>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 188}) {
          			  case 0:
          				flw_425:
/*<425>*/ 				rupees += -18;
/*<234>*/ 				printf("\x0E\x01\x09\x04\x1F0A\x300Next time that happens, we're going to\nhave words!")
          				flw_235:
/*<235>*/ 				story_flags[378 /* us: 805A9B05 0x01, jp: 805ACD85 0x01 */] = true;
/*<236>*/ 				zone_temp_flags[0 /* 0x1 01 */] = true;
/*<243>*/ 				zone_temp_flags[1 /* 0x1 02 */] = false;
          				goto flw_248
          			  case 1:
/*<426>*/ 				printf("...But you don't even have enough to\npay! Hmph. The nerve!\n\n\nThen I'll just take what you have on\nyou. And next time, be more careful!")
/*<427>*/ 				zone_temp_flags[2 /* 0x1 04 */] = true;
          				goto flw_425
          			}
          		  case 1:
/*<421>*/ 			printf("...But you don't even have a single\nRupee on you!\n\n\nSo you think you can just wander \nabout, penniless, destroying people's\nthings and laughing in their faces when\nthey ask for money in return?!\nThe nerve! I don't even want your\nmoney anymore. Just get out of my\nsight!")
/*<422>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_235
          		}
          	}
          }

          void entrypoint_123_05() {
/*<258>*/ 	start()
/*<284>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 43, 'next': 292, 'param3': 32}
/*<292>*/ 	set_camera(13, 0)
/*<291>*/ 	{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 100, 'next': 287, 'param3': 14}
/*<287>*/ 	{'type': 'type3', 'subType': 1, 'param1': 43, 'param2': 99, 'next': 259, 'param3': 50}
/*<259>*/ 	printf("")
/*<290>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 43, 'next': 288, 'param3': 17}
/*<288>*/ 	set_camera(6, 0)
/*<285>*/ 	make_actor_do_something(0, 43)
/*<293>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 103, 'next': 289, 'param3': 24}
/*<289>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 260, 'param3': 6}
/*<260>*/ 	changeScene(0, 0) // 
          }

