          void entrypoint_103_01() {
          	start()
/*< 77>*/ 	switch (scene_flags[92 /* 0xA 10 */]) {
          	  case 0:
/*< 78>*/ 		printf("\x0E\x01\x09\x04\x00\x05Still can't find your bird?\n\n\n\nCalm yourself and use your head.\nI'm sure you'll find a lead to his\nwhereabouts soon.")
          	  case 1:
/*<  1>*/ 		switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          		  case 0:
/*<  3>*/ 			printf("\x0E\x01\x09\x04\x00\x01Ah, hello, Link. Have you\nmanaged to find your Loftwing yet?\n\n\n<pause28>You suspect that <b<Groose>> had a hand in\nyour bird's disappearance? I tell you,\nthat boy is always up to trouble.")
/*< 79>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 71, 'param3': 32}
/*< 71>*/ 			{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': -1, 'next': 72, 'param3': 16}
/*< 72>*/ 			{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 0, 'next': 73, 'param3': 17}
/*< 73>*/ 			printf("...Headmaster, if that is true, then all\nthe better. Groose has made it that\nmuch easier to delay the start of\nthe race.\nI doubt even Groose will have the gall\nto complain openly, considering it's his\nfault we had to delay in the first place.")
/*< 74>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 75, 'param3': 16}
/*< 75>*/ 			printf("I see. Yes, he has painted himself into\na bit of a corner, hasn't he? Well, it's\nsettled then.\n\n\x0E\x03\x01\x00Link, don't worry about\nthe race starting without you. Take the\ntime you need to find your Loftwing.")
/*< 76>*/ 			scene_flags[0 'Skyloft'][92 /* 0xA 10 */] = true;
          		  case 1:
/*<  2>*/ 			printf("\x0E\x01\x09\x04\x00\x05Don't worry, Link--I'll be\nsure to explain your predicament to\n<b<Instructor Horwell>>.<pause0F> Go find him and\nask him to meet me in my quarters.\nWhile we chat, why don't you go ask\nsome of the other students about your\nbird? I seem to recall a few of them\nwere gathered near the plaza.")
          		}
          	}
          }

          void entrypoint_103_02() {
/*< 13>*/ 	start()
/*< 14>*/ 	scene_flags[0 'Skyloft'][5 /* 0x1 20 */] = true;
/*< 15>*/ 	scene_flags[0 'Skyloft'][6 /* 0x1 40 */] = true;
/*< 16>*/ 	scene_flags[0 'Skyloft'][1 /* 0x1 02 */] = true;
/*< 42>*/ 	scene_flags[0 'Skyloft'][67 /* 0x9 08 */] = true;
          }

          void entrypoint_103_03() {
/*< 67>*/ 	start()
/*< 68>*/ 	printf("\x0E\x01\x09\x04\x00\x05Quite a number of inexplicable things\nseem to be happening here...\n\n\nWhat might happen if you do as that\nstrange being asks?")
          }

          void entrypoint_103_06() {
/*< 17>*/ 	start()
/*< 63>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*< 82>*/ 		switch (zone_temp_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			flw_84:
/*< 84>*/ 			printf("\x0E\x01\x09\x04\x00\x04I have faith that you shall bring my\ndaughter back to me. I desire that\nmore than an explanation of whatever\nit was that transpired here!\nGood luck, Link!")
/*< 83>*/ 			zone_temp_flags[19 /* 0x3 08 */] = true;
          		  case 1:
/*< 64>*/ 			printf("\x0E\x01\x09\x04\x00\x02It's happened, Link!\n\n\n\nThe goddess...<pause1E> The goddess and her\nisle have vanished from Skyloft!\n[1]The truth is...[2]Err...")
/*< 66>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_65:
/*< 65>*/ 				printf("No need to explain, Link!\n\n\n\n<y+<When all catastrophes are overcome,\nonly then will the goddess make her\nreturn to the surface.>>\n\nThese are the last of the <r<secret words>>\npassed down here in Skyloft.<pause14> It is only\nnow that I realize the significance of\nthem. Yes...\nTheir meaning is clear to me. This must\nmean it's all over...<pause14> And my Zelda...<pause0A>\nshe's safe at last?\n[1]I'm sorry.[2]No.")
/*< 98>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_99:
/*< 99>*/ 					printf("And...whatever other surprises fate\nmay have in store for you, I'm sure you\nwill triumph. We're counting on you\nafter all!\nJust stay focused on the task at hand. \nPut all your strength into it, and you\ncan't go wrong!")
          					goto flw_84
          				  case 1:
          					goto flw_99
          				}
          			  case 1:
          				goto flw_65
          			}
          		}
          	  case 1:
/*< 96>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*< 97>*/ 			printf("\x0E\x01\x09\x04\x00\x04I could've sworn I heard the most\nthunderous noise outside a moment\nago.\n\nWell, it's probably just these old ears\nplaying tricks on me. Don't let me hold\nyou up. I'm counting on you to bring\nZelda back!")
          		  case 1:
/*< 87>*/ 			switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          			  case 0:
/*< 88>*/ 				switch (zone_temp_flags[19 /* 0x3 08 */]) {
          				  case 0:
/*< 91>*/ 					printf("\x0E\x01\x09\x04\x00\x04I'm quite certain I've seen a stone like\nthat before, but I don't recall where.\n\n\nPerhaps the town fortune-teller might\nbe able to put you on the right track?")
          				  case 1:
/*< 89>*/ 					printf("\x0E\x01\x09\x04\x00\x02Hello, Link! I hope your\nsearch is progressing well.\n\n\nYou need to find somewhere to insert\nthis <r<<itemB4>>>, you say?\n\n\nThat gem...yes, I do believe I have seen\nsomething that it might fit into, but I\njust can't recall where...")
/*< 90>*/ 					zone_temp_flags[19 /* 0x3 08 */] = true;
          				}
          			  case 1:
/*< 80>*/ 				switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          				  case 0:
/*< 81>*/ 					printf("Amazing! So you've not only calmed\nthe senseless rage that gripped\nLevias, but you've also discerned the\nlocation of the Triforce as well?\n\x0E\x03\x01\x00Link, lately you've grown\nso much that I feel as though I am\nlooking at a different person each\ntime we meet.\nMany troubles still await you, no doubt,\nbut I'm confident you shall overcome\nany obstacle that stands in your way.\nMay the goddess protect you!")
          				  case 1:
/*< 60>*/ 					switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          					  case 0:
/*< 62>*/ 						{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 61, 'param3': 13}
/*< 61>*/ 						printf("I see. So Levias is possessed...\nThe Spiral Charge is a high-risk\nmaneuver, so make sure you know\nwhat you're doing when you unleash it!")
          					  case 1:
/*< 34>*/ 						switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          						  case 0:
/*< 59>*/ 							{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 4, 'next': 31, 'param3': 13}
/*< 31>*/ 							printf("If you wish to know more about\nLevias's current location, speak with\n<b<Instructor Owlan>>. He should be in his\nchambers next door.")
          						  case 1:
/*< 85>*/ 							switch (story_flags[327 /* us: 805A9AFF 0x20, jp: 805ACD7F 0x20 */]) {
          							  case 0:
/*< 86>*/ 								printf("\x0E\x01\x09\x04\x00\x02Do I know anyone else who might know\nmore about the Triforce?\n\n\nWithin Skyloft? No, I doubt anyone\nelse in town would know much about a\nsubject as ancient and archaic as that...")
          							  case 1:
/*< 20>*/ 								switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          								  case 0:
/*< 35>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 58, 'param3': 31}
/*< 58>*/ 									{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 21, 'param3': 13}
/*< 21>*/ 									printf("Ah, hello, Link! Have you\nheard anything more about my\ndaughter?\n\nWhat is it\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í? If you know anything at\nall, I urge you to share it with me.")
/*< 69>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 22, 'param3': 6}
/*< 22>*/ 									printf("\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02ÍYou want to tell me but you can't?\nHmm. I...understand. I'm sure you\nhave good reason for keeping quiet\x0E\x01\x06\x02\xFECD...")
/*< 70>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 37, 'param3': 6}
/*< 37>*/ 									printf("\x0E\x03\x01\x00Link, I've been doing\nsome thinking since we last spoke.\n\n\nYou have had this destiny thrust upon\nyou without warning...or choice, for\nthat matter. But I wish to help you as\nbest I can.\nI'm getting older, and I lack the\nvigor of youth\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Íbut even old men\nhave ways of being useful, too!\n\nI wish to share as much of my\nknowledge with you as I can!\n\n\nIf you have any question...any question\nat all about Skyloft or its history, I will\nbe glad to tell you all that I know.\n[1]Actually...[2]Not now.")
/*< 23>*/ 									switch (choice(2)) {
          									  case 0:
          										flw_25:
/*< 25>*/ 										printf("What do I know of the <y+<Triforce>>\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í?\n\n\n\n\x0E\x03\x01\x00Link, where did you hear\nthat word?\n\n\nIt's true that the ancient texts make\nseveral mentions of the Triforce\nwithin their pages.\n\nUnfortunately, the actual location of\nthe Triforce isn't illuminated in\nany of those tomes. Its whereabouts\nare lost to history.")
/*< 26>*/ 										printf("Sorry, Link. It shames me\nto say it, but my knowledge is of little\nuse on this subject.")
/*< 32>*/ 										story_flags[327 /* us: 805A9AFF 0x20, jp: 805ACD7F 0x20 */] = true;
          									  case 1:
/*< 24>*/ 										printf("So you have no need for the wisdom of\nan old man like myself?\n\n\nWell, just remember that the wisdom\nof years can prevail where youth alone\nmight fall short. If you desire my help,\nI'll be here.")
          										goto flw_25
          									}
          								  case 1:
/*< 19>*/ 									switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          									  case 0:
/*< 57>*/ 										{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 5, 'next': 18, 'param3': 13}
/*< 18>*/ 										printf("\x0E\x03\x01\x00Link, you're the only hope\nZelda has now. I'm counting on you.\n\n\nFind her and bring her home safe as\nquickly as you can!")
          									  case 1:
/*< 11>*/ 										switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          										  case 0:
/*< 56>*/ 											{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1, 'next': 12, 'param3': 13}
/*< 12>*/ 											printf("Guide the two great whirling sails\ntoward the Light Tower. The youth who\ndoes so shall be led to the place where\nsongs of legend dwell. \n\x0E\x03\x01\x00Link, these lyrics have\nbeen passed down through countless\ngenerations here in Skyloft.\n\nThere's a strong probability that the\n<r<two whirling sails >>the song mentions\nmust also exist somewhere in Skyloft.\n\nBear in mind, this is only a wild theory,\nbut hopefully some of this will prove\nuseful in your search.")
          										  case 1:
/*< 50>*/ 											switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          											  case 0:
/*< 36>*/ 												{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 31}
/*< 55>*/ 												{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 3, 'next': 92, 'param3': 13}
/*< 92>*/ 												printf("You're back, Link!\nGood to see you're still in one piece.\n\n\nSo, how's it going down there? Are you\nany closer to finding my Zelda? ")
/*< 94>*/ 												set_camera(10, 0)
/*< 93>*/ 												printf("\x0E\x01\x09\x04\x00\x05Hmm... I see\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í My dear Zelda... \nThings must be terribly trying for her\ndown there.\n\nAnd it can't be easy for you now either,\ncan it?")
/*< 95>*/ 												set_camera(-1, 0)
/*<  4>*/ 												printf("What?<pause28> You want to know the lyrics to\nthe song Zelda sang on the day of the\nWing Ceremony?\n\nYou know, I'm not much of a singer...\n[1]Just lyrics![2]Sing it!")
/*<  5>*/ 												switch (choice(2)) {
          												  case 0:
/*<  7>*/ 													printf("You just want the lyrics? Oh! What a\nrelief. You really put me on the spot\nthere for a moment. I believe the lyrics\ngo something like this...")
          													flw_8:
/*<  8>*/ 													printf("<y+<\x0E\x01\x06\x02\xFCCDOh youth, guided by the servant of the\ngoddess, unite earth and sky, and\nbring light to the land.>>\x0E\x01\x06\x02Í\n\nThat's the first part, but as I recall\nthere's a second verse to the song.\n\n\n<y+<\x0E\x01\x06\x02\xFCCDOh youth, show the two whirling sails\nthe way to the Light Tower...and\nbefore you a path shall open, and a\nheavenly song you shall hear.\x0E\x01\x06\x02Í>>")
/*<  9>*/ 													printf("I believe that's the whole thing.\n\n\n\nThe <r<Light Tower>> mentioned in the song\nis a real place; I'm sure you've seen the\ntower in the plaza. I don't know a thing\nabout two whirling sails though\x0E\x01\x06\x02\xFECD...\nIt sounds like the song is suggesting\nthat if one shows these whirling sails\nthe way to the tower, something will\nhappen?\nBut how do you go about doing that,\nand what does it mean? <r<Two whirling\nsails>>. Hmm\x0E\x01\x06\x02\xFECD...")
/*< 10>*/ 													story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */] = true;
/*<100>*/ 													story_flags[142 /* us: 805A9AEE 0x01, jp: 805ACD6E 0x01 */] = true;
          												  case 1:
/*<  6>*/ 													printf("Listen--as I said, I wouldn't feel \ncomfortable serenading you. But if it's\nthe lyrics you're after, I can recite\nthem for you. Let's see...")
          													goto flw_8
          												}
          											  case 1:
/*< 52>*/ 												switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          												  case 0:
/*< 51>*/ 													printf("\x0E\x01\x09\x04\x00\x02Ah, Link! How goes your\nsearch? Have you found any leads as\nto Zelda's whereabouts?\n\nI feel terrible forcing you to face this\ntask alone, but we mustn't let the\nrest of the village catch wind of what\ntranspired that awful night.\nIf the truth of what we saw that night\nwas exposed to the village, it could\ncause mass confusion amongst the\npeople here.\nI'm afraid this mission has to fall to\nyou alone. Good luck, and may the\nwinds be at your back. ")
          												  case 1:
/*< 53>*/ 													printf("\x0E\x01\x09\x04\x00\x01I hear your sparring instructor,\nthe <r<Knight Commander>>, also knows\nthat you will set out from Skyloft. \nHe's concerned for you.\nWhy don't you consider stopping by\nthe Sparring Hall and speaking with\nhim before you go?\n\n\x0E\x03\x01\x00Link...be safe out there.\nI'm counting on you to find Zelda!")
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
          	}
          }

          void entrypoint_103_07() {
/*< 27>*/ 	start()
/*< 54>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 28, 'param3': 13}
/*< 28>*/ 	printf("\x0E\x03\x01\x00Link, just a moment!")
/*< 43>*/ 	set_camera(1, 0)
/*< 44>*/ 	{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 100, 'next': 29, 'param3': 15}
/*< 29>*/ 	printf("Though, there is one whose vast\nknowledge may be of use...\n\n\nSurely you're familiar with <b<Levias>>, the\ngreat<r< sky spirit >>who has guarded our\nrealm for ages?\n\n\x0E\x01\n\x04\x02ÍLevias has served as the protector\nof our skies for a long time, and his\nknowledge of our world is\nencyclopedic, to put it mildly.\nIf anyone in the entirety of Skyloft and\nbeyond were to know about the\nTriforce, it would be him.\n[1]Where is he?[2]Encyclopedic?")
/*< 38>*/ 	switch (choice(2)) {
          	  case 0:
/*< 39>*/ 		printf("Yes... I feared that might be your next\nquestion. About that...")
          		flw_45:
/*< 45>*/ 		set_camera(3, 0)
/*< 30>*/ 		printf("I imagine in your travels you've taken\nnotice of the tremendous <r<thunderhead>>\nthat suddenly appeared in our skies.\n\nRecently, I've heard rumors suggesting\nthat Levias is trapped inside that\nmassive cloud.\n")
/*< 46>*/ 		set_camera(4, 0)
/*< 41>*/ 		printf("I asked <b<Instructor Owlan>> to look into\nthis troubling cloud in order to\ndetermine if there is any truth to these\nrumors.\nI had meant to inquire about his\nfindings earlier but completely forgot\nabout it after Zelda went missing.\n\n<b<Instructor Owlan>> can fill me in on the\ndetails later, so why don't you go\nspeak with him yourself and see\nwhat his investigation has revealed?")
/*< 33>*/ 		story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */] = true;
/*< 47>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 40>*/ 		printf("Yes, his knowledge is almost limitless,\nbut I fear meeting him may be harder\nthan you anticipate...")
          		goto flw_45
          	}
          }

          void entrypoint_103_08() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf("\x0E\x01\x09\x04\x00\x17What are you standing around for?\nEveryone's already in the sky! Jump\noff the edge and call your bird! ")
          }

