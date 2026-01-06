          void entrypoint_121_02() {
/*<102>*/ 	start()
/*<103>*/ 	printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x00150c09>No, I beg you! Stop! That chest is not to\nbe opened, under any circumstance!\nThere's something unspeakable inside!\n[1-]What?[2-]I want to open it.")
/*<104>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_106:
/*<106>*/ 		printf(/* textboxtype: 1, unk: 1, line: 45 */ "<0x10009:0x00130800>That chest contains the infamous evil\nof the dreaded <color yellow<Cursed Medal>coloroff>.\n\n\nIf you carry that medal with you, you'll\nfind more Rupees than ever before!\n<0x10009:0x00150c00>You'll even have better chances of\ndiscovering treasure!\n<0x10009:0x00140a00>You'll... You'll... Oh, don't make me\nsay it!\n[1-]Sounds handy![2-]Say...what?")
/*<108>*/ 		switch (choice(2)) {
          		  case 0:
/*<109>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00130800>Now that you mention it, that does\nsound pretty enticing, but...")
          			flw_107:
/*<107>*/ 			printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x00150c00>It gets worse! Far, far worse...\n\n\n\n<0x10009:0x00140a00>Any poor soul who holds that medal\nwill find himself <color red<unable to open his\npouch>coloroff>!\n\nNo matter how badly you want to use\nyour potions or shields, they will be\ndenied to you! Can you imagine a\nmore gruesome fate?\n<0x10009:0x00150c00>Please, push any thought of this chest\nout of your mind forever! You must\nnever think of it again.")
/*<110>*/ 			scene_flags[0 'Skyloft'][84 /* 0xB 10 */] = true;
          		  case 1:
          			goto flw_107
          		}
          	  case 1:
/*<105>*/ 		printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x00130800>I said NO!")
          		goto flw_106
          	}
          }

          void entrypoint_121_20() {
/*<  1>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000003>Stop! Please! I beg of you...\ndon't hurt me!\n\n\nOh goodness, I know how bad this must\nlook to you right now, but I assure you I\nmean no harm! We were just playing\nthe scream-as-loud-as-you-can game!")
/*< 66>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2560, 'next': 114, 'param3': 13}
/*<114>*/ 	make_actor_do_something(2, 0)
/*<  4>*/ 	printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000005>Isn't that a fun game...? Oh, dear...\nPerhaps an explanation is in order! \n\n\nMy name is <color blue<Batreaux>coloroff>, and I am a\nmonster who resides here in this\nhumble dwelling below Skyloft.\n\nBut please allow me to correct one\npopular misconception. While I'm\ncertainly a monster, I wouldn't dream\nof terrorizing the people of this town!\nYou see, this adorable little girl is the\nonly one who didn't let loose a blood-\ncurdling scream at the sight of me!\n\nSince she began to visit me here, I've\nfelt positively jubilant! You see, my\nheart's only wish is to become friends\nwith the lovely people of Skyloft.\nBut as you can surely imagine, it has\nproven quite difficult to break the ice\nwhen they are struck with paralyzing\nfear at the mere sight of me!")
/*< 75>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 2048, 'next': 72, 'param3': 13}
/*< 72>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "I assure you, nothing would fill my\nheart with joy more than to be friends\nwith the fine people of this town.\n\nBut as soon as I try to approach any of\nthem and extend my claw in friendship,\nthey run and scream as though they've\nseen a walking nightmare!\nOh, right... Silly me. I've gotten ahead\nof myself! You see, there is an old tale\namong my monstrous kin that goes\nas follows...")
/*< 76>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3077, 'next': 73, 'param3': 13}
/*< 73>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "It seems that when humans make other\nhumans happy, the happy humans\nproduce a substance known as a\n<color yellow<Gratitude Crystal>coloroff>.")
/*< 77>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2572, 'next': 74, 'param3': 13}
/*< 74>*/ 	printf(/* textboxtype: 0, unk: 1, line: 4 */ "<color yellow<Gratitude Crystals>coloroff> are quite amazing!\nJust looking at them and knowing there\nwas such gratitude in the world could\nturn me from a monster into a human!")
/*< 78>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 115, 'param3': 13}
/*<115>*/ 	make_actor_do_something(3, 0)
/*< 10>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00000007>Oh goodness, nothing would delight me\nmore than to become a human!\n\n\nFrom the moment I laid my regrettably\ndemonic eyes on you, I could tell\nyou had a gentle and generous heart.")
/*< 79>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 2048, 'next': 116, 'param3': 13}
/*<116>*/ 	make_actor_do_something(4, 0)
/*< 80>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "Won't you please gather <color yellow<Gratitude\nCrystals >coloroff>and show them to me?\n[1-]Sure![2]Nope.")
/*<  5>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_82:
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3086, 'next': 117, 'param3': 13}
/*<117>*/ 		make_actor_do_something(5, 0)
/*<  8>*/ 		printf(/* textboxtype: 0, unk: 0, line: 8 */ "Truly?! You'll help me?")
/*<118>*/ 		make_actor_do_something(6, 0)
/*<113>*/ 		printf(/* textboxtype: 1, unk: 0, line: 9 */ "I've heard that you can obtain pure\n<color yellow<Gratitude>coloroff> <color yellow<Crystals>coloroff> by helping people\nsolve their troubles!")
/*< 84>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2572, 'next': 83, 'param3': 13}
/*< 83>*/ 		printf(/* textboxtype: 0, unk: 1, line: 10 */ "They could also be merely lying about\nhere in Skyloft or elsewhere among the\nclouds...anywhere you find people!\n\nI'm sure someone with a heart as pure\nand genuine as yours will be able to see\nthem.\n\nPlease, solve some troubles and gather\nme all the <color yellow<Gratitude Crystals >coloroff>you\ncan find!")
/*< 86>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3079, 'next': 85, 'param3': 13}
/*< 85>*/ 		printf(/* textboxtype: 0, unk: 0, line: 11 */ "Any help you can provide will be dearly\nappreciated. I promise your assistance\nwill not go unrewarded!")
/*<  2>*/ 		story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */] = true;
/*< 65>*/ 		scene_flags[0 'Skyloft'][78 /* 0x8 40 */] = true;
/*< 11>*/ 		switch (story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */]) {
          		  case 0:
/*< 12>*/ 			story_flags[370 /* us: 805A9B02 0x01, jp: 805ACD82 0x01 */] = true;
          			flw_167:
/*<167>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
          			goto flw_167
          		}
          	  case 1:
          		flw_81:
/*< 81>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2572, 'next': 6, 'param3': 13}
/*<  6>*/ 		printf(/* textboxtype: 0, unk: 1, line: 7 */ "Please, gentle sir! I beg you. Do not\nmake me bend my wings and grovel.\n[1-]OK, fine.[2]No chance!")
/*<  7>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_82
          		  case 1:
          			goto flw_81
          		}
          	}
          }

          void entrypoint_121_03() {
/*<152>*/ 	start()
/*<158>*/ 	switch (story_flags[1091 /* us: 805A9B52 0x02, jp: 805ACDD2 0x02 */]) {
          	  case 0:
/*<159>*/ 		printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x00000a07>When I figured out that my very\npresence in Skyloft was causing trouble\nfor its good citizens, it was quite a\nmost unpleasant shock.\nBut now I can put that all behind me!\nI feel like I'm finally an ordinary\nresident of Skyloft. Thank you!")
          	  case 1:
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00000005>Good evening, <heroname>!\nI thought I'd take a refreshing stroll\naround town, and to my surprise \nthere's not a monster to be seen.\nYou don't suppose their disappearance\nhas something to do with me becoming\nhuman, do you?\n[1-]Could be![2-]No way.")
/*<154>*/ 		switch (choice(2)) {
          		  case 0:
/*<155>*/ 			printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x00000856>Goodness, I suppose you are right...")
          			flw_157:
/*<157>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00080800>There's no denying that when I was a\ndemon, I must have radiated a fiendish\npower into my surroundings.\n\nNow that I'm human, it seems that\nmost-unpleasant aura has completely\nfaded from this place, like an\nodious aroma in the wind!\n<0x10009:0x00150a07>And goodness me, I couldn't be more\nelated! Now everyone can finally live\nin peace, and it's all thanks to you.")
/*<160>*/ 			story_flags[1091 /* us: 805A9B52 0x02, jp: 805ACDD2 0x02 */] = true;
          		  case 1:
/*<156>*/ 			printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x00000814>Please, there's no reason to hide your\ndoubts from me.")
          			goto flw_157
          		}
          	}
          }

          void entrypoint_121_30() {
/*<  9>*/ 	start()
/*<111>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*<112>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00130808>Ah! Oh dear...now you've done it!\nYou opened it, didn't you?!\n\n\nHuman desire is an insatiable,\nfearsome thing...even to a demon!\nBut then again, I suppose it's also\nwhat makes your kind so intriguing...\nIf your pouch won't open, fear not.\nThat will only happen while you're\ncarrying that medal.\n\nIf you leave it at an <color blue<Item Check>coloroff>, you'll\nbe able to open your pouch once again.")
          	  case 1:
/*<120>*/ 		switch (story_flags[583 /* us: 805A9B1B 0x40, jp: 805ACD9B 0x40 */]) {
          		  case 0:
/*<121>*/ 			story_flags[734 /* us: 805A9B27 0x40, jp: 805ACDA7 0x40 */] = true;
          			flw_13:
/*< 13>*/ 			switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          			  case 0:
/*<125>*/ 				switch (scene_flags[79 /* 0x8 80 */]) {
          				  case 0:
/*<126>*/ 					printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x000a0c05>Oh, thank you so much! Now I can\nfinally walk the streets of Skyloft\nwithout fear of eliciting screams!")
          				  case 1:
/*< 95>*/ 					{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 3072, 'next': 17, 'param3': 13}
/*< 17>*/ 					printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00000005>Well? Were you surprised? I bet for a\nmoment there you could not recognize\nwho was standing before you!")
/*< 96>*/ 					{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 97, 'param3': 13}
/*< 97>*/ 					printf(/* textboxtype: 0, unk: 0, line: 38 */ "It's quite understandable, really.\nEverything is so new and different,\nI don't even feel like myself!")
/*<124>*/ 					scene_flags[0 'Skyloft'][79 /* 0x8 80 */] = true;
          				}
          			  case 1:
/*< 39>*/ 				switch (scene_flags[70 /* 0x9 40 */]) {
          				  case 0:
/*< 41>*/ 					switch (scene_flags[71 /* 0x9 80 */]) {
          					  case 0:
/*< 46>*/ 						switch (scene_flags[72 /* 0x8 01 */]) {
          						  case 0:
/*< 52>*/ 							switch (scene_flags[73 /* 0x8 02 */]) {
          							  case 0:
/*< 55>*/ 								switch (scene_flags[74 /* 0x8 04 */]) {
          								  case 0:
/*< 58>*/ 									switch (scene_flags[75 /* 0x8 08 */]) {
          									  case 0:
/*< 35>*/ 										switch (context_related2(6)) {
          										  case 0:
/*< 98>*/ 											{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3083, 'next': 36, 'param3': 13}
/*< 36>*/ 											printf(/* textboxtype: 0, unk: 1, line: 40 */ "Oh, my! You've gathered <color red<80>coloroff> <color yellow<Gratitude\nCrystals>coloroff>! If I'm not mistaken, that's all\nthe Gratitude Crystals in the whole\nwonderful world!\n<0x10009:0x00070807>Thank you! Thank you ever so much!\n\n\n\nPlease accept this final gift with all\nof my gratitude.")
          											flw_166:
/*<166>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 37, 'param3': 12}
/*< 37>*/ 											give_item(111 0x6F);
/*< 20>*/ 											printf(/* textboxtype: 1, unk: 0, line: 36 */ "This is an embarrassingly small token\nof my gratitude, but I hope it will be\nuseful to you.")
/*< 87>*/ 											{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 15, 'param3': 13}
/*< 15>*/ 											printf(/* textboxtype: 0, unk: 0, line: 29 */ "Oh, dear... With this, I now have all the\n<color yellow<Gratitude Crystals>coloroff> I require to\nbecome human!\n\n<0x10009:0x00070809>I wonder if I'll really be able to make\nthe transformation... My heart is\naflutter!")
/*<148>*/ 											scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          										  case 1:
/*< 62>*/ 											printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00000005>Oh, I want to be a human so badly it\npains me! Please hurry and gather\nmore <color yellow<Gratitude Crystals>coloroff>!\n\nNext, come and see me when you've\ngathered <color red<80 >coloroff>of them!")
          										}
          									  case 1:
/*< 34>*/ 										switch (context_related2(5)) {
          										  case 0:
/*< 59>*/ 											printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00090d0b>Oh! You've gathered quite a lot of\n<color yellow<Gratitude Crystals>coloroff>, haven't you?\nHow magnificent!\n\n<0x10009:0x00070807>Please take this as a token of this\ndemon's deepest appreciation!")
          											flw_127:
/*<127>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 161, 'param3': 12}
/*<161>*/ 											give_item(33 0x21);
/*<162>*/ 											printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00090d0b>But that's not all I want you to have.\nGoodness, no. I have so much more\nthanks to give!\n\n<0x10009:0x00070807>Here, take this too!")
/*<163>*/ 											give_item(33 0x21);
/*< 60>*/ 											printf(/* textboxtype: 1, unk: 0, line: 24 */ "I only require a few more <color yellow<Gratitude\nCrystals>coloroff> to become human. Please\nhelp this needy demon a bit more...")
/*< 61>*/ 											scene_flags[0 'Skyloft'][75 /* 0x8 08 */] = true;
/*<143>*/ 											switch (context_related2(6)) {
          											  case 0:
/*<144>*/ 												printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00090d0b>Oh, you're back! And it does appear \nyou've gathered more <color yellow<Gratitude\nCrystals>coloroff>!\n\nOh, my! You've gathered <color red<80>coloroff> <color yellow<Gratitude\nCrystals>coloroff>! If I'm not mistaken, that's all\nthe Gratitude Crystals in the whole\nwonderful world!\n<0x10009:0x00070807>Thank you! Thank you ever so much!\n\n\n\nPlease accept this final gift with all\nof my gratitude.")
          												goto flw_166
          											  case 1:
/*<147>*/ 												scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          											}
          										  case 1:
/*< 57>*/ 											printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00000005>Oh, I want to be a human so badly it\npains me! Please hurry and gather\nmore <color yellow<Gratitude Crystals>coloroff>!\n\nNext, come and see me when you've\ngathered <color red<70 >coloroff>of them!")
          										}
          									}
          								  case 1:
/*< 33>*/ 									switch (context_related2(4)) {
          									  case 0:
/*< 28>*/ 										printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00090d0b>Oh! You've gathered quite a lot of\n<color yellow<Gratitude Crystals>coloroff>, haven't you?\nHow magnificent!\n\n<0x10009:0x00070807>Please take this as a token of this\ndemon's deepest appreciation!")
          										flw_165:
/*<165>*/ 										{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 12}
/*< 27>*/ 										give_item(110 0x6E);
/*< 29>*/ 										printf(/* textboxtype: 1, unk: 0, line: 24 */ "I only require a few more <color yellow<Gratitude\nCrystals>coloroff> to become human. Please\nhelp this needy demon a bit more...")
/*< 56>*/ 										scene_flags[0 'Skyloft'][74 /* 0x8 04 */] = true;
/*<141>*/ 										switch (context_related2(5)) {
          										  case 0:
/*<142>*/ 											printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00090d0b>Oh gracious me! That is a prodigious\nquantity of <color yellow<Gratitude Crystals>coloroff> you've\nbrought for me!\n\n<0x10009:0x00070807>This is such an appallingly insufficient\nreward that my cheeks burn hot with\nembarrassment, but please...take this!")
          											goto flw_127
          										  case 1:
/*<146>*/ 											scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          										}
          									  case 1:
/*< 54>*/ 										printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000005>Oh, I want to be a human so badly it\npains me! Please hurry and gather\nmore <color yellow<Gratitude Crystals>coloroff>!\n\nNext, come and see me when you've\ngathered <color red<50 >coloroff>of them!")
          									}
          								}
          							  case 1:
/*< 32>*/ 								switch (context_related2(3)) {
          								  case 0:
/*< 50>*/ 									printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00090d0b>Oh! You've gathered quite a lot of\n<color yellow<Gratitude Crystals>coloroff>, haven't you?\nHow magnificent!\n\n<0x10009:0x00070807>Please take this as a token of this\ndemon's deepest appreciation!")
          									flw_164:
/*<164>*/ 									{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 49, 'param3': 12}
/*< 49>*/ 									give_item(33 0x21);
/*< 51>*/ 									printf(/* textboxtype: 0, unk: 0, line: 23 */ "You have made such magnificent\nprogress gathering <color yellow<Gratitude Crystals>coloroff>.\n\n\nPlease just continue helping me a bit\nlonger...")
/*< 53>*/ 									scene_flags[0 'Skyloft'][73 /* 0x8 02 */] = true;
/*<139>*/ 									switch (context_related2(4)) {
          									  case 0:
/*<140>*/ 										printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00090d0b>Oh gracious me! That is a prodigious\nquantity of <color yellow<Gratitude Crystals>coloroff> you've\nbrought for me!\n\n<0x10009:0x00070807>This is such an appallingly insufficient\nreward that my cheeks burn hot with\nembarrassment, but please...take this!")
          										goto flw_165
          									  case 1:
/*<145>*/ 										scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          									}
          								  case 1:
/*< 48>*/ 									printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00000005>Oh, I want to be a human so badly it\npains me! Please hurry and gather\nmore <color yellow<Gratitude Crystals>coloroff>!\n\nNext, come and see me when you've\ngathered <color red<40 >coloroff>of them!")
          								}
          							}
          						  case 1:
/*< 31>*/ 							switch (context_related2(2)) {
          							  case 0:
/*< 25>*/ 								printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00090d0b>Oh! You've gathered quite a lot of\n<color yellow<Gratitude Crystals>coloroff>, haven't you?\nHow magnificent!\n\n<0x10009:0x00070807>Please take this as a token of this\ndemon's deepest appreciation!")
          								flw_24:
/*< 24>*/ 								give_item(109 0x6D);
/*< 26>*/ 								printf(/* textboxtype: 0, unk: 0, line: 23 */ "You have made such magnificent\nprogress gathering <color yellow<Gratitude Crystals>coloroff>.\n\n\nPlease just continue helping me a bit\nlonger...")
/*< 47>*/ 								scene_flags[0 'Skyloft'][72 /* 0x8 01 */] = true;
/*<137>*/ 								switch (context_related2(3)) {
          								  case 0:
/*<138>*/ 									printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00090d0b>Oh gracious me! That is a prodigious\nquantity of <color yellow<Gratitude Crystals>coloroff> you've\nbrought for me!\n\n<0x10009:0x00070807>This is such an appallingly insufficient\nreward that my cheeks burn hot with\nembarrassment, but please...take this!")
          									goto flw_164
          								  case 1:
/*< 99>*/ 									scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          								}
          							  case 1:
/*< 64>*/ 								printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000005>Oh, I want to be a human so badly it\npains me! Please hurry and gather\nmore <color yellow<Gratitude Crystals>coloroff>!\n\nNext, come and see me when you've\ngathered <color red<30 >coloroff>of them!")
          							}
          						}
          					  case 1:
/*< 30>*/ 						switch (context_related2(1)) {
          						  case 0:
/*< 43>*/ 							printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00090d0b>Oh! You've gathered quite a lot of\n<color yellow<Gratitude Crystals>coloroff>, haven't you?\nHow magnificent!\n\n<0x10009:0x00070807>Please take this as a token of this\ndemon's deepest appreciation!")
          							flw_42:
/*< 42>*/ 							give_item(94 0x5E);
/*< 44>*/ 							printf(/* textboxtype: 0, unk: 1, line: 22 */ "I'm still going to need more <color yellow<Gratitude\nCrystals>coloroff> to become a human.\n\n\nPlease, won't you aid a poor,\nunfortunate demon in need?")
/*< 45>*/ 							scene_flags[0 'Skyloft'][71 /* 0x9 80 */] = true;
/*<135>*/ 							switch (context_related2(2)) {
          							  case 0:
/*<136>*/ 								printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00090d0b>Oh gracious me! That is a prodigious\nquantity of <color yellow<Gratitude Crystals>coloroff> you've\nbrought for me!\n\n<0x10009:0x00070807>This is such an appallingly insufficient\nreward that my cheeks burn hot with\nembarrassment, but please...take this!")
          								goto flw_24
          							  case 1:
          							}
          						  case 1:
/*< 40>*/ 							printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000005>Oh, I want to be a human so badly it\npains me! Please hurry and gather\nmore <color yellow<Gratitude Crystals>coloroff>!\n\nNext, come and see me when you've\ngathered <color red<10 >coloroff>of them!")
          						}
          					}
          				  case 1:
/*< 63>*/ 					switch (context_related2(0)) {
          					  case 0:
/*< 22>*/ 						printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00090d0b>Oh! You've gathered quite a lot of\n<color yellow<Gratitude Crystals>coloroff>, haven't you?\nHow magnificent!\n\n<0x10009:0x00070807>Please take this as a token of this\ndemon's deepest appreciation!")
/*< 21>*/ 						give_item(108 0x6C);
/*< 23>*/ 						printf(/* textboxtype: 0, unk: 1, line: 22 */ "I'm still going to need more <color yellow<Gratitude\nCrystals>coloroff> to become a human.\n\n\nPlease, won't you aid a poor,\nunfortunate demon in need?")
/*< 38>*/ 						scene_flags[0 'Skyloft'][70 /* 0x9 40 */] = true;
/*<133>*/ 						switch (context_related2(1)) {
          						  case 0:
/*<134>*/ 							printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00090d0b>Oh gracious me! That is a prodigious\nquantity of <color yellow<Gratitude Crystals>coloroff> you've\nbrought for me!\n\n<0x10009:0x00070807>This is such an appallingly insufficient\nreward that my cheeks burn hot with\nembarrassment, but please...take this!")
          							goto flw_42
          						  case 1:
          						}
          					  case 1:
/*<132>*/ 						switch (zone_temp_flags[1 /* 0x1 02 */]) {
          						  case 0:
          							flw_122:
/*<122>*/ 							switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          							  case 0:
/*< 14>*/ 								printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000005>Oh, dear, I want to be a human so\nbadly it pains me! Please hurry along\nand gather some <color yellow<Gratitude Crystals>coloroff>...\n\nJust come and show me <color red<five >coloroff>to start\nwith. If you do a great kindness for\nsomeone, you may even get several\nat once!")
          							  case 1:
/*<123>*/ 								printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00000005>That dear girl should be back home\nsafe and sound by tomorrow morning.\nGive her parents my warmest regards\nwhen you see them.\nOh, and good luck gathering the\n<color yellow<Gratitude Crystals >coloroff>I require. To start,\nplease bring me <color red<five>coloroff> if you can!\nThat would be so splendid!\nIf you do a great kindness for someone,\nyou may even find several at once!")
          							}
          						  case 1:
/*<129>*/ 							check_item_flag(48, 1)
/*<128>*/ 							switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 46}) {
          							  case 0:
/*<130>*/ 								printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00000005>Magnificent! Yes, that is truly a\n<color yellow<Gratitude Crystal>coloroff>!<pause 20> That did not take\nyou long at all.\n\nAs a start, can you please bring me\n<color red<five>coloroff> of them?\n\n\nIf you do a great kindness for someone,\nyou may even get several of them at\nonce!")
/*<131>*/ 								zone_temp_flags[1 /* 0x1 02 */] = true;
          							  case 1:
          								goto flw_122
          							}
          						}
          					}
          				}
          			}
          		  case 1:
          			goto flw_13
          		}
          	}
          }

          void entrypoint_121_00() {
          	start()
/*< 70>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 35, 'next': 18, 'param3': 32}
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0000000b>It's...aghh!<0x10005:0x003c0000>")
/*< 67>*/ 	make_actor_do_something(0, 0)
/*<119>*/ 	wait_frames(40)
/*< 68>*/ 	printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00000004><0x10008:0x02cd>Graaauuugh!<0x10005:0x001e0000>")
/*< 69>*/ 	make_actor_do_something(1, 0)
/*< 71>*/ 	{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': -1, 'next': 88, 'param3': 16}
/*< 88>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8969, 'param2': 3072, 'next': 89, 'param3': 13}
/*< 89>*/ 	printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10006:0xfccd>...<0x10006:0x00cd><0x10009:0x00000007>Well? How do I look, my dear\nfriend <heroname>?")
/*< 90>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8968, 'param2': 2560, 'next': 91, 'param3': 13}
/*< 91>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "...Oh, you needn't even say it. I can\ntell from the look of sheer\nastonishment on your face.")
/*< 92>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8970, 'param2': 3072, 'next': 93, 'param3': 13}
/*< 93>*/ 	printf(/* textboxtype: 0, unk: 1, line: 34 */ "My appearance has changed so\ndramatically you've been struck\nspeechless, haven't you?")
/*< 94>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8969, 'param2': 3072, 'next': 19, 'param3': 13}
/*< 19>*/ 	printf(/* textboxtype: 0, unk: 0, line: 35 */ "Allow me to tell you this...there's\nsimply no word in your language to\ndescribe how grateful I am for your\nhelp. I am deeply touched!\nFrom now on, I plan to live happily\nwith everyone else. Not as a monster...\nbut as any other person.")
/*< 16>*/ 	story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */] = true;
          }

          void entrypoint_121_01() {
/*<100>*/ 	start()
/*<149>*/ 	switch (temp_flags[12 /* 0x0 10 */]) {
          	  case 0:
/*<151>*/ 		printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00080a0c>Look how bright and cheery this place\nis! Such a flurry of color and activity—\nit's positively bustling! I could spend\nall day here just taking it in.")
          	  case 1:
/*<101>*/ 		printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x00000005>Oh, good day, <heroname>!\nI simply can't thank you enough for all\nyour help! I'm overjoyed!\n\nFor so long, I wondered what it would\nbe like to casually stroll through the\nbazaar, and here I am!\n\n<0x10009:0x00150c00>And look around... The best part is\nnobody is screaming in horror!")
/*<150>*/ 		temp_flags[12 /* 0x0 10 */] = true;
          	}
          }

