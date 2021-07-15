          void entrypoint_121_02() {
/*<102>*/ 	start()
/*<103>*/ 	printf("\x0E\x01\x09\x04\x15\xC09No, I beg you! Stop! That chest is not to\nbe opened, under any circumstance!\nThere's something unspeakable inside!\n[1]What?[2]I want to open it.")
/*<104>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_106:
/*<106>*/ 		printf("\x0E\x01\x09\x04\x13\x800That chest contains the infamous evil\nof the dreaded <y<Cursed Medal>>.\n\n\nIf you carry that medal with you, you'll\nfind more Rupees than ever before!\n\x0E\x01\x09\x04\x15\xC00You'll even have better chances of\ndiscovering treasure!\n\x0E\x01\x09\x04\x14\xA00You'll... You'll... Oh, don't make me\nsay it!\n[1]Sounds handy![2]Say...what?")
/*<108>*/ 		switch (choice(2)) {
          		  case 0:
/*<109>*/ 			printf("\x0E\x01\x09\x04\x13\x800Now that you mention it, that does\nsound pretty enticing, but...")
          			flw_107:
/*<107>*/ 			printf("\x0E\x01\x09\x04\x15\xC00It gets worse! Far, far worse...\n\n\n\n\x0E\x01\x09\x04\x14\xA00Any poor soul who holds that medal\nwill find himself <r<unable to open his\npouch>>!\n\nNo matter how badly you want to use\nyour potions or shields, they will be\ndenied to you! Can you imagine a\nmore gruesome fate?\n\x0E\x01\x09\x04\x15\xC00Please, push any thought of this chest\nout of your mind forever! You must\nnever think of it again.")
/*<110>*/ 			scene_flags[0 'Skyloft'][84 /* 0xB 10 */] = true;
          		  case 1:
          			goto flw_107
          		}
          	  case 1:
/*<105>*/ 		printf("\x0E\x01\x09\x04\x13\x800I said NO!")
          		goto flw_106
          	}
          }

          void entrypoint_121_20() {
/*<  1>*/ 	start()
/*<  3>*/ 	printf("\x0E\x01\x09\x04\x00\x03Stop! Please! I beg of you...\ndon't hurt me!\n\n\nOh goodness, I know how bad this must\nlook to you right now, but I assure you I\nmean no harm! We were just playing\nthe scream-as-loud-as-you-can game!")
/*< 66>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2560, 'next': 114, 'param3': 13}
/*<114>*/ 	make_actor_do_something(2, 0)
/*<  4>*/ 	printf("\x0E\x01\x09\x04\x00\x05Isn't that a fun game...? Oh, dear...\nPerhaps an explanation is in order! \n\n\nMy name is <b<Batreaux>>, and I am a\nmonster who resides here in this\nhumble dwelling below Skyloft.\n\nBut please allow me to correct one\npopular misconception. While I'm\ncertainly a monster, I wouldn't dream\nof terrorizing the people of this town!\nYou see, this adorable little girl is the\nonly one who didn't let loose a blood-\ncurdling scream at the sight of me!\n\nSince she began to visit me here, I've\nfelt positively jubilant! You see, my\nheart's only wish is to become friends\nwith the lovely people of Skyloft.\nBut as you can surely imagine, it has\nproven quite difficult to break the ice\nwhen they are struck with paralyzing\nfear at the mere sight of me!")
/*< 75>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 2048, 'next': 72, 'param3': 13}
/*< 72>*/ 	printf("I assure you, nothing would fill my\nheart with joy more than to be friends\nwith the fine people of this town.\n\nBut as soon as I try to approach any of\nthem and extend my claw in friendship,\nthey run and scream as though they've\nseen a walking nightmare!\nOh, right... Silly me. I've gotten ahead\nof myself! You see, there is an old tale\namong my monstrous kin that goes\nas follows...")
/*< 76>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3077, 'next': 73, 'param3': 13}
/*< 73>*/ 	printf("It seems that when humans make other\nhumans happy, the happy humans\nproduce a substance known as a\n<y<Gratitude Crystal>>.")
/*< 77>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2572, 'next': 74, 'param3': 13}
/*< 74>*/ 	printf("<y<Gratitude Crystals>> are quite amazing!\nJust looking at them and knowing there\nwas such gratitude in the world could\nturn me from a monster into a human!")
/*< 78>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 115, 'param3': 13}
/*<115>*/ 	make_actor_do_something(3, 0)
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x00\x07Oh goodness, nothing would delight me\nmore than to become a human!\n\n\nFrom the moment I laid my regrettably\ndemonic eyes on you, I could tell\nyou had a gentle and generous heart.")
/*< 79>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 2048, 'next': 116, 'param3': 13}
/*<116>*/ 	make_actor_do_something(4, 0)
/*< 80>*/ 	printf("Won't you please gather <y<Gratitude\nCrystals >>and show them to me?\n[1]Sure![2-]Nope.")
/*<  5>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_82:
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3086, 'next': 117, 'param3': 13}
/*<117>*/ 		make_actor_do_something(5, 0)
/*<  8>*/ 		printf("Truly?! You'll help me?")
/*<118>*/ 		make_actor_do_something(6, 0)
/*<113>*/ 		printf("I've heard that you can obtain pure\n<y<Gratitude>> <y<Crystals>> by helping people\nsolve their troubles!")
/*< 84>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2572, 'next': 83, 'param3': 13}
/*< 83>*/ 		printf("They could also be merely lying about\nhere in Skyloft or elsewhere among the\nclouds...anywhere you find people!\n\nI'm sure someone with a heart as pure\nand genuine as yours will be able to see\nthem.\n\nPlease, solve some troubles and gather\nme all the <y<Gratitude Crystals >>you\ncan find!")
/*< 86>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3079, 'next': 85, 'param3': 13}
/*< 85>*/ 		printf("Any help you can provide will be dearly\nappreciated. I promise your assistance\nwill not go unrewarded!")
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
/*<  6>*/ 		printf("Please, gentle sir! I beg you. Do not\nmake me bend my wings and grovel.\n[1]OK, fine.[2-]No chance!")
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
/*<159>*/ 		printf("\x0E\x01\x09\x04\x00\xA07When I figured out that my very\npresence in Skyloft was causing trouble\nfor its good citizens, it was quite a\nmost unpleasant shock.\nBut now I can put that all behind me!\nI feel like I'm finally an ordinary\nresident of Skyloft. Thank you!")
          	  case 1:
/*<153>*/ 		printf("\x0E\x01\x09\x04\x00\x05Good evening, Link!\nI thought I'd take a refreshing stroll\naround town, and to my surprise \nthere's not a monster to be seen.\nYou don't suppose their disappearance\nhas something to do with me becoming\nhuman, do you?\n[1]Could be![2]No way.")
/*<154>*/ 		switch (choice(2)) {
          		  case 0:
/*<155>*/ 			printf("\x0E\x01\x09\x04\x00\x856Goodness, I suppose you are right...")
          			flw_157:
/*<157>*/ 			printf("\x0E\x01\x09\x04\x08\x800There's no denying that when I was a\ndemon, I must have radiated a fiendish\npower into my surroundings.\n\nNow that I'm human, it seems that\nmost-unpleasant aura has completely\nfaded from this place, like an\nodious aroma in the wind!\n\x0E\x01\x09\x04\x15\xA07And goodness me, I couldn't be more\nelated! Now everyone can finally live\nin peace, and it's all thanks to you.")
/*<160>*/ 			story_flags[1091 /* us: 805A9B52 0x02, jp: 805ACDD2 0x02 */] = true;
          		  case 1:
/*<156>*/ 			printf("\x0E\x01\x09\x04\x00\x814Please, there's no reason to hide your\ndoubts from me.")
          			goto flw_157
          		}
          	}
          }

          void entrypoint_121_30() {
/*<  9>*/ 	start()
/*<111>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*<112>*/ 		printf("\x0E\x01\x09\x04\x13\x808Ah! Oh dear...now you've done it!\nYou opened it, didn't you?!\n\n\nHuman desire is an insatiable,\nfearsome thing...even to a demon!\nBut then again, I suppose it's also\nwhat makes your kind so intriguing...\nIf your pouch won't open, fear not.\nThat will only happen while you're\ncarrying that medal.\n\nIf you leave it at an <b<Item Check>>, you'll\nbe able to open your pouch once again.")
          	  case 1:
/*<120>*/ 		switch (story_flags[583 /* us: 805A9B1B 0x40, jp: 805ACD9B 0x40 */]) {
          		  case 0:
/*<121>*/ 			story_flags[734 /* us: 805A9B27 0x40, jp: 805ACDA7 0x40 */] = true;
          			flw_13:
/*< 13>*/ 			switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          			  case 0:
/*<125>*/ 				switch (scene_flags[79 /* 0x8 80 */]) {
          				  case 0:
/*<126>*/ 					printf("\x0E\x01\x09\x04\n\xC05Oh, thank you so much! Now I can\nfinally walk the streets of Skyloft\nwithout fear of eliciting screams!")
          				  case 1:
/*< 95>*/ 					{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 3072, 'next': 17, 'param3': 13}
/*< 17>*/ 					printf("\x0E\x01\x09\x04\x00\x05Well? Were you surprised? I bet for a\nmoment there you could not recognize\nwho was standing before you!")
/*< 96>*/ 					{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 97, 'param3': 13}
/*< 97>*/ 					printf("It's quite understandable, really.\nEverything is so new and different,\nI don't even feel like myself!")
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
/*< 36>*/ 											printf("Oh, my! You've gathered <r<80>> <y<Gratitude\nCrystals>>! If I'm not mistaken, that's all\nthe Gratitude Crystals in the whole\nwonderful world!\n\x0E\x01\x09\x04\x07\x807Thank you! Thank you ever so much!\n\n\n\nPlease accept this final gift with all\nof my gratitude.")
          											flw_166:
/*<166>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 37, 'param3': 12}
/*< 37>*/ 											give_item(111 0x6F);
/*< 20>*/ 											printf("This is an embarrassingly small token\nof my gratitude, but I hope it will be\nuseful to you.")
/*< 87>*/ 											{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 15, 'param3': 13}
/*< 15>*/ 											printf("Oh, dear... With this, I now have all the\n<y<Gratitude Crystals>> I require to\nbecome human!\n\n\x0E\x01\x09\x04\x07\x809I wonder if I'll really be able to make\nthe transformation... My heart is\naflutter!")
/*<148>*/ 											scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          										  case 1:
/*< 62>*/ 											printf("\x0E\x01\x09\x04\x00\x05Oh, I want to be a human so badly it\npains me! Please hurry and gather\nmore <y<Gratitude Crystals>>!\n\nNext, come and see me when you've\ngathered <r<80 >>of them!")
          										}
          									  case 1:
/*< 34>*/ 										switch (context_related2(5)) {
          										  case 0:
/*< 59>*/ 											printf("\x0E\x01\x09\x04\x09\xD0BOh! You've gathered quite a lot of\n<y<Gratitude Crystals>>, haven't you?\nHow magnificent!\n\n\x0E\x01\x09\x04\x07\x807Please take this as a token of this\ndemon's deepest appreciation!")
          											flw_127:
/*<127>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 161, 'param3': 12}
/*<161>*/ 											give_item(33 0x21);
/*<162>*/ 											printf("\x0E\x01\x09\x04\x09\xD0BBut that's not all I want you to have.\nGoodness, no. I have so much more\nthanks to give!\n\n\x0E\x01\x09\x04\x07\x807Here, take this too!")
/*<163>*/ 											give_item(33 0x21);
/*< 60>*/ 											printf("I only require a few more <y<Gratitude\nCrystals>> to become human. Please\nhelp this needy demon a bit more...")
/*< 61>*/ 											scene_flags[0 'Skyloft'][75 /* 0x8 08 */] = true;
/*<143>*/ 											switch (context_related2(6)) {
          											  case 0:
/*<144>*/ 												printf("\x0E\x01\x09\x04\x09\xD0BOh, you're back! And it does appear \nyou've gathered more <y<Gratitude\nCrystals>>!\n\nOh, my! You've gathered <r<80>> <y<Gratitude\nCrystals>>! If I'm not mistaken, that's all\nthe Gratitude Crystals in the whole\nwonderful world!\n\x0E\x01\x09\x04\x07\x807Thank you! Thank you ever so much!\n\n\n\nPlease accept this final gift with all\nof my gratitude.")
          												goto flw_166
          											  case 1:
/*<147>*/ 												scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          											}
          										  case 1:
/*< 57>*/ 											printf("\x0E\x01\x09\x04\x00\x05Oh, I want to be a human so badly it\npains me! Please hurry and gather\nmore <y<Gratitude Crystals>>!\n\nNext, come and see me when you've\ngathered <r<70 >>of them!")
          										}
          									}
          								  case 1:
/*< 33>*/ 									switch (context_related2(4)) {
          									  case 0:
/*< 28>*/ 										printf("\x0E\x01\x09\x04\x09\xD0BOh! You've gathered quite a lot of\n<y<Gratitude Crystals>>, haven't you?\nHow magnificent!\n\n\x0E\x01\x09\x04\x07\x807Please take this as a token of this\ndemon's deepest appreciation!")
          										flw_165:
/*<165>*/ 										{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 12}
/*< 27>*/ 										give_item(110 0x6E);
/*< 29>*/ 										printf("I only require a few more <y<Gratitude\nCrystals>> to become human. Please\nhelp this needy demon a bit more...")
/*< 56>*/ 										scene_flags[0 'Skyloft'][74 /* 0x8 04 */] = true;
/*<141>*/ 										switch (context_related2(5)) {
          										  case 0:
/*<142>*/ 											printf("\x0E\x01\x09\x04\x09\xD0BOh gracious me! That is a prodigious\nquantity of <y<Gratitude Crystals>> you've\nbrought for me!\n\n\x0E\x01\x09\x04\x07\x807This is such an appallingly insufficient\nreward that my cheeks burn hot with\nembarrassment, but please...take this!")
          											goto flw_127
          										  case 1:
/*<146>*/ 											scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          										}
          									  case 1:
/*< 54>*/ 										printf("\x0E\x01\x09\x04\x00\x05Oh, I want to be a human so badly it\npains me! Please hurry and gather\nmore <y<Gratitude Crystals>>!\n\nNext, come and see me when you've\ngathered <r<50 >>of them!")
          									}
          								}
          							  case 1:
/*< 32>*/ 								switch (context_related2(3)) {
          								  case 0:
/*< 50>*/ 									printf("\x0E\x01\x09\x04\x09\xD0BOh! You've gathered quite a lot of\n<y<Gratitude Crystals>>, haven't you?\nHow magnificent!\n\n\x0E\x01\x09\x04\x07\x807Please take this as a token of this\ndemon's deepest appreciation!")
          									flw_164:
/*<164>*/ 									{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 49, 'param3': 12}
/*< 49>*/ 									give_item(33 0x21);
/*< 51>*/ 									printf("You have made such magnificent\nprogress gathering <y<Gratitude Crystals>>.\n\n\nPlease just continue helping me a bit\nlonger...")
/*< 53>*/ 									scene_flags[0 'Skyloft'][73 /* 0x8 02 */] = true;
/*<139>*/ 									switch (context_related2(4)) {
          									  case 0:
/*<140>*/ 										printf("\x0E\x01\x09\x04\x09\xD0BOh gracious me! That is a prodigious\nquantity of <y<Gratitude Crystals>> you've\nbrought for me!\n\n\x0E\x01\x09\x04\x07\x807This is such an appallingly insufficient\nreward that my cheeks burn hot with\nembarrassment, but please...take this!")
          										goto flw_165
          									  case 1:
/*<145>*/ 										scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          									}
          								  case 1:
/*< 48>*/ 									printf("\x0E\x01\x09\x04\x00\x05Oh, I want to be a human so badly it\npains me! Please hurry and gather\nmore <y<Gratitude Crystals>>!\n\nNext, come and see me when you've\ngathered <r<40 >>of them!")
          								}
          							}
          						  case 1:
/*< 31>*/ 							switch (context_related2(2)) {
          							  case 0:
/*< 25>*/ 								printf("\x0E\x01\x09\x04\x09\xD0BOh! You've gathered quite a lot of\n<y<Gratitude Crystals>>, haven't you?\nHow magnificent!\n\n\x0E\x01\x09\x04\x07\x807Please take this as a token of this\ndemon's deepest appreciation!")
          								flw_24:
/*< 24>*/ 								give_item(109 0x6D);
/*< 26>*/ 								printf("You have made such magnificent\nprogress gathering <y<Gratitude Crystals>>.\n\n\nPlease just continue helping me a bit\nlonger...")
/*< 47>*/ 								scene_flags[0 'Skyloft'][72 /* 0x8 01 */] = true;
/*<137>*/ 								switch (context_related2(3)) {
          								  case 0:
/*<138>*/ 									printf("\x0E\x01\x09\x04\x09\xD0BOh gracious me! That is a prodigious\nquantity of <y<Gratitude Crystals>> you've\nbrought for me!\n\n\x0E\x01\x09\x04\x07\x807This is such an appallingly insufficient\nreward that my cheeks burn hot with\nembarrassment, but please...take this!")
          									goto flw_164
          								  case 1:
/*< 99>*/ 									scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          								}
          							  case 1:
/*< 64>*/ 								printf("\x0E\x01\x09\x04\x00\x05Oh, I want to be a human so badly it\npains me! Please hurry and gather\nmore <y<Gratitude Crystals>>!\n\nNext, come and see me when you've\ngathered <r<30 >>of them!")
          							}
          						}
          					  case 1:
/*< 30>*/ 						switch (context_related2(1)) {
          						  case 0:
/*< 43>*/ 							printf("\x0E\x01\x09\x04\x09\xD0BOh! You've gathered quite a lot of\n<y<Gratitude Crystals>>, haven't you?\nHow magnificent!\n\n\x0E\x01\x09\x04\x07\x807Please take this as a token of this\ndemon's deepest appreciation!")
          							flw_42:
/*< 42>*/ 							give_item(94 0x5E);
/*< 44>*/ 							printf("I'm still going to need more <y<Gratitude\nCrystals>> to become a human.\n\n\nPlease, won't you aid a poor,\nunfortunate demon in need?")
/*< 45>*/ 							scene_flags[0 'Skyloft'][71 /* 0x9 80 */] = true;
/*<135>*/ 							switch (context_related2(2)) {
          							  case 0:
/*<136>*/ 								printf("\x0E\x01\x09\x04\x09\xD0BOh gracious me! That is a prodigious\nquantity of <y<Gratitude Crystals>> you've\nbrought for me!\n\n\x0E\x01\x09\x04\x07\x807This is such an appallingly insufficient\nreward that my cheeks burn hot with\nembarrassment, but please...take this!")
          								goto flw_24
          							  case 1:
          							}
          						  case 1:
/*< 40>*/ 							printf("\x0E\x01\x09\x04\x00\x05Oh, I want to be a human so badly it\npains me! Please hurry and gather\nmore <y<Gratitude Crystals>>!\n\nNext, come and see me when you've\ngathered <r<10 >>of them!")
          						}
          					}
          				  case 1:
/*< 63>*/ 					switch (context_related2(0)) {
          					  case 0:
/*< 22>*/ 						printf("\x0E\x01\x09\x04\x09\xD0BOh! You've gathered quite a lot of\n<y<Gratitude Crystals>>, haven't you?\nHow magnificent!\n\n\x0E\x01\x09\x04\x07\x807Please take this as a token of this\ndemon's deepest appreciation!")
/*< 21>*/ 						give_item(108 0x6C);
/*< 23>*/ 						printf("I'm still going to need more <y<Gratitude\nCrystals>> to become a human.\n\n\nPlease, won't you aid a poor,\nunfortunate demon in need?")
/*< 38>*/ 						scene_flags[0 'Skyloft'][70 /* 0x9 40 */] = true;
/*<133>*/ 						switch (context_related2(1)) {
          						  case 0:
/*<134>*/ 							printf("\x0E\x01\x09\x04\x09\xD0BOh gracious me! That is a prodigious\nquantity of <y<Gratitude Crystals>> you've\nbrought for me!\n\n\x0E\x01\x09\x04\x07\x807This is such an appallingly insufficient\nreward that my cheeks burn hot with\nembarrassment, but please...take this!")
          							goto flw_42
          						  case 1:
          						}
          					  case 1:
/*<132>*/ 						switch (zone_temp_flags[1 /* 0x1 02 */]) {
          						  case 0:
          							flw_122:
/*<122>*/ 							switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          							  case 0:
/*< 14>*/ 								printf("\x0E\x01\x09\x04\x00\x05Oh, dear, I want to be a human so\nbadly it pains me! Please hurry along\nand gather some <y<Gratitude Crystals>>...\n\nJust come and show me <r<five >>to start\nwith. If you do a great kindness for\nsomeone, you may even get several\nat once!")
          							  case 1:
/*<123>*/ 								printf("\x0E\x01\x09\x04\x00\x05That dear girl should be back home\nsafe and sound by tomorrow morning.\nGive her parents my warmest regards\nwhen you see them.\nOh, and good luck gathering the\n<y<Gratitude Crystals >>I require. To start,\nplease bring me <r<five>> if you can!\nThat would be so splendid!\nIf you do a great kindness for someone,\nyou may even find several at once!")
          							}
          						  case 1:
/*<129>*/ 							check_item_flag(48, 1)
/*<128>*/ 							switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 46}) {
          							  case 0:
/*<130>*/ 								printf("\x0E\x01\x09\x04\x00\x05Magnificent! Yes, that is truly a\n<y<Gratitude Crystal>>!<pause14> That did not take\nyou long at all.\n\nAs a start, can you please bring me\n<r<five>> of them?\n\n\nIf you do a great kindness for someone,\nyou may even get several of them at\nonce!")
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
/*< 18>*/ 	printf("\x0E\x01\x09\x04\x00\x0BIt's...aghh!\x0E\x01\x05\x04<\x00")
/*< 67>*/ 	make_actor_do_something(0, 0)
/*<119>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 68, 'param3': 6}
/*< 68>*/ 	printf("\x0E\x01\x09\x04\x00\x04\x0E\x01\x08\x02\x2CDGraaauuugh!\x0E\x01\x05\x04\x1E\x00")
/*< 69>*/ 	make_actor_do_something(1, 0)
/*< 71>*/ 	{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': -1, 'next': 88, 'param3': 16}
/*< 88>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8969, 'param2': 3072, 'next': 89, 'param3': 13}
/*< 89>*/ 	printf("\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í\x0E\x01\x09\x04\x00\x07Well? How do I look, my dear\nfriend Link?")
/*< 90>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8968, 'param2': 2560, 'next': 91, 'param3': 13}
/*< 91>*/ 	printf("...Oh, you needn't even say it. I can\ntell from the look of sheer\nastonishment on your face.")
/*< 92>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8970, 'param2': 3072, 'next': 93, 'param3': 13}
/*< 93>*/ 	printf("My appearance has changed so\ndramatically you've been struck\nspeechless, haven't you?")
/*< 94>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8969, 'param2': 3072, 'next': 19, 'param3': 13}
/*< 19>*/ 	printf("Allow me to tell you this...there's\nsimply no word in your language to\ndescribe how grateful I am for your\nhelp. I am deeply touched!\nFrom now on, I plan to live happily\nwith everyone else. Not as a monster...\nbut as any other person.")
/*< 16>*/ 	story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */] = true;
          }

          void entrypoint_121_01() {
/*<100>*/ 	start()
/*<149>*/ 	switch (temp_flags[12 /* 0x0 10 */]) {
          	  case 0:
/*<151>*/ 		printf("\x0E\x01\x09\x04\x08\xA0CLook how bright and cheery this place\nis! Such a flurry of color and activity--\nit's positively bustling! I could spend\nall day here just taking it in.")
          	  case 1:
/*<101>*/ 		printf("\x0E\x01\x09\x04\x00\x05Oh, good day, Link!\nI simply can't thank you enough for all\nyour help! I'm overjoyed!\n\nFor so long, I wondered what it would\nbe like to casually stroll through the\nbazaar, and here I am!\n\n\x0E\x01\x09\x04\x15\xC00And look around... The best part is\nnobody is screaming in horror!")
/*<150>*/ 		temp_flags[12 /* 0x0 10 */] = true;
          	}
          }

