          void entrypoint_111_01() {
          	start()
/*< 12>*/ 	switch (story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */]) {
          	  case 0:
/*< 18>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
          			flw_19:
/*< 19>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "What? I just told you what your\nfortune was. I described everything I\nsaw in detail! Didn't you hear me the\nfirst time?!\nFine. Fine... I'll tell you one more time,\nso listen up! And don't think I can't\nsee when you're not paying attention.")
/*<162>*/ 			zone_temp_flags[3 /* 0x1 08 */] = false;
          			flw_74:
/*< 74>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*< 76>*/ 				printf(/* textboxtype: 0, unk: 0, line: 53 */ "Young man, whatever have you done?\n\n\n\nIf my eyes do not betray me, then you\nare the one behind the disappearance\nof the Isle of the Goddess! Yess...\nNothing escapes my gaze.\nWell, worry not. I can see that you did\nnot make the isle disappear just for\nidle amusement!\n\nStill, I am afraid that it will be up to\nyou to find the proper path from here.\nTrust yourself!")
          				flw_127:
/*<127>*/ 				entrypoint_111_05();
          			  case 1:
/*<137>*/ 				switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          				  case 0:
/*<138>*/ 					printf(/* textboxtype: 0, unk: 0, line: 59 */ "Ah, yesss... My vision reveals that you\nwill find what you seek on the Isle of\nthe Goddess.\n\nHowever, these great big eyes also see\nmuch peril. Your path will not be an\neasy one. Prepare yourself well!")
          					goto flw_127
          				  case 1:
/*< 73>*/ 					switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          					  case 0:
/*<136>*/ 						printf(/* textboxtype: 0, unk: 1, line: 58 */ "So I see you have finally passed the\nfinal trial... Oh, yessss, all is revealed\nto my uncanny vision.\n\nI can see what you're after. You want\nto know what to do with the item you\ngot from the trial, don't you? \n\nSomewhere here in Skyloft is a <color red<statue\nof an odd bird >coloroff>with <color red<gem-like eyes>coloroff>.\nOh, but one of the gems is missing.\nSurely you've seen it before...\nAhem... If you place the item you have\nin the socket, your path will be clear!\nYessss...I see it all now...")
          						goto flw_127
          					  case 1:
/*< 72>*/ 						switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          						  case 0:
/*<129>*/ 							printf(/* textboxtype: 1, unk: 0, line: 57 */ "You will use the song you obtained\nfrom the great swimmer above the\nclouds to discover <color red<the location of the\nnext trial>coloroff>.\nMy vision shows me that this next trial\nawaits you <color red<somewhere in this very town\nof Skyloft>coloroff>.\n\nStrange... I have no idea what that\neven means!")
          							goto flw_127
          						  case 1:
/*<199>*/ 							switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          							  case 0:
/*<198>*/ 								switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          								  case 0:
/*<200>*/ 									switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          									  case 0:
/*<201>*/ 										printf(/* textboxtype: 0, unk: 0, line: 56 */ "Oh, there it is! Yesss, I see you have\ngathered three parts of the song you\nseek, and the fourth... It is held by\nsomeone very, very big!\nMake haste, for when you find this\nmassive creature, your song will be\ncomplete. I have foreseen it!")
          										goto flw_127
          									  case 1:
          										flw_71:
/*< 71>*/ 										switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          										  case 0:
/*< 77>*/ 											check_item_flag(497, 1)
/*< 78>*/ 											switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 52}) {
          											  case 0:
/*< 79>*/ 												printf(/* textboxtype: 0, unk: 1, line: 37 */ "I see the task that lies before you,\nyoung man... Oh yes, I see all...\n\n\nYou seek a place to lay down roots.\nBut these are the roots of no ordinary\ntree, are they? So where can this tree\ngrow deep and strong?\n<0x10006:0xfccd>I see...<0x10006:0x00cd>a temple! A temple where an\nold woman now lives. Yes, there you\nwill find the perfect place!")
          												flw_88:
/*< 88>*/ 												entrypoint_111_05();
          											  case 1:
/*< 75>*/ 												printf(/* textboxtype: 0, unk: 1, line: 55 */ "Young man, you seek a song that has\nbeen divided into four parts, do you\nnot? Yes, yessss...I see all.\n\nThen there are one...two...<pause 10>three\nregions that you must visit! And you\nmay go to them in the order of your\nchoosing!\nIn other words, go wherever you want,\nOK? You're bound to find something.")
          												goto flw_88
          											}
          										  case 1:
/*< 70>*/ 											switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          											  case 0:
/*<128>*/ 												printf(/* textboxtype: 1, unk: 0, line: 54 */ "I see you've finally found the one\nyou've been searching for! That is\nwonderful news.\n\nHowever, your trials are not yet ended!\nNow you must speak to the great giant\nwho swims above the clouds.\n\nIf you wish to know more, you should\ntalk to the <color red<headmaster of the Knight\nAcademy>coloroff>.")
          												flw_126:
/*<126>*/ 												entrypoint_111_05();
          											  case 1:
/*< 66>*/ 												switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          												  case 0:
/*< 69>*/ 													printf(/* textboxtype: 0, unk: 1, line: 52 */ "Gulp... Again I see the shadow of a\ntowering monster...\n\n\nMy boy...no matter how many times I\npeer into your future, it never provides\na dull moment!\n\nOh, do forgive me... I didn't mean to\nimply your fate was entertaining, even\nif it is... Just take plenty of <color red<potions>coloroff>.\nThe fortunes tell me you'll be fine!")
          													goto flw_126
          												  case 1:
/*<183>*/ 													switch (story_flags[73 /* us: 805A9AE9 0x40, jp: 805ACD69 0x40 */]) {
          													  case 0:
/*< 90>*/ 														switch (story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */]) {
          														  case 0:
/*< 92>*/ 															switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
          															  case 0:
/*<179>*/ 																switch (story_flags[187 /* us: 805A9AE9 0x04, jp: 805ACD69 0x04 */]) {
          																  case 0:
/*<180>*/ 																	printf(/* textboxtype: 1, unk: 0, line: 51 */ "Aha! The task before you is as clear as\nmy unblinking eyes, young man!\n\n\nIt is also as hot as ever within the\nmountain of fire. To go there with\nan <color red<Iron Shield>coloroff> would be most wise!")
          																	flw_186:
/*<186>*/ 																	entrypoint_111_05();
          																  case 1:
/*<188>*/ 																	switch (story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */]) {
          																	  case 0:
/*<187>*/ 																		printf(/* textboxtype: 0, unk: 0, line: 50 */ "I see a vision, yesss... I see you at a\nmountain of fire, guiding a basin of\nwater.\n\nAnd...ah, yes! Failure to deliver it will\nspell trouble for a certain someone!")
          																		goto flw_186
          																	  case 1:
/*< 93>*/ 																		printf(/* textboxtype: 0, unk: 1, line: 49 */ "Water, water nowhere...and so great\nthe need! Such a thirst to quench!\nThis is a vexing circumstance indeed. \n\nBut, young man, you have already\ndiscovered the basin needed in order\nto carry the water.\n\nYes, yes...it's all clear to me now.\nNever forget...these eyes see ALL!\nGo to the woods, for it is there that\nyou will find what you seek.")
/*< 94>*/ 																		switch (story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */]) {
          																		  case 0:
          																			goto flw_186
          																		  case 1:
/*<123>*/ 																			{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 178, 'param3': 51}
/*<178>*/ 																			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 95, 'param3': 16}
/*< 95>*/ 																			printf(/* textboxtype: 0, unk: 0, line: 65 */ "I calculate a 60% probability that the\nobject you seek is in the woods.\nI advise you to search there.\n\n<sound 4>Do you want me to calibrate your\n<color red<dowsing>coloroff> ability to search for the\n<color red<Water Basin>coloroff>?\n[1-]Yep![2]No, thanks.")
/*< 97>*/ 																			switch (choice(2)) {
          																			  case 0:
/*< 99>*/ 																				story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = true;
/*<100>*/ 																				story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<101>*/ 																				story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<102>*/ 																				story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<103>*/ 																				story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<104>*/ 																				story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<189>*/ 																				open_dowsing_wheel(13)
/*< 96>*/ 																				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10012:0x00000005>Yes, Master. Your <color red<dowsing>coloroff> ability\nis now set to detect the <color red<Water Basin>coloroff>.\nI suggest you begin searching at once.")
/*<190>*/ 																				story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          																				flw_105:
/*<105>*/ 																				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 125, 'param3': 36}
/*<125>*/ 																				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 124, 'param3': 16}
/*<124>*/ 																				entrypoint_111_05();
          																			  case 1:
/*< 98>*/ 																				printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10012:0x00000005>Yes, Master. I have canceled your\nrequest to set your dowsing ability.\nPlease talk to this person again when\nyou want to regain this dowsing target.")
          																				goto flw_105
          																			}
          																		}
          																	}
          																}
          															  case 1:
/*< 91>*/ 																printf(/* textboxtype: 1, unk: 0, line: 48 */ "Ahhh, I see you passed the trial of fire\nwith ease. But you have jumped from\nthe frying pan into...troubled water!\nOh dear... I mean, water troubles!\nOoooh, yess... I see that lack of water\nwill cause you much hardship. When\nthis happens, return and visit me\nonce more.")
          																flw_89:
/*< 89>*/ 																entrypoint_111_05();
          															}
          														  case 1:
/*< 68>*/ 															printf(/* textboxtype: 0, unk: 0, line: 47 */ "Sheesh! How many of these trials\nmust you undergo before your hunger\nfor challenge will be sated?!\n\nThis time I see...fire! You will find\n<color red<the entrance to a trial>coloroff> lying hidden on\na fiery mountain!\n\nAnd of course you would not think to\ntake a <color red<Wooden Shield>coloroff>, because that\nwould be foolish!")
          															goto flw_89
          														}
          													  case 1:
/*< 65>*/ 														switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          														  case 0:
/*<184>*/ 															printf(/* textboxtype: 0, unk: 0, line: 44 */ "My big, crystal-clear eyes...they see\na path before you! You must learn a\n<color red<song >coloroff>within a holy sanctum!\n\nAnd what's this? My vision shows me\nit is a place you've visited before.\nA sacred place among the clouds...")
          															flw_185:
/*<185>*/ 															entrypoint_111_05();
          														  case 1:
/*<181>*/ 															switch (story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */]) {
          															  case 0:
/*<205>*/ 																switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          																  case 0:
/*<206>*/ 																	printf(/* textboxtype: 0, unk: 1, line: 46 */ "Oho! You appear to have passed a\ngreat trial in a sandy place. No time\nfor congratulations—more visions\napproach!\nHmm... You must go to a place with\neven MORE sand. But I also see\n<color red<an expanse of water>coloroff>...<pause 20> And a <color red<ship>coloroff>!<pause 20>\nThis is all very confusing to behold...\nAnyway, you need to get to another\nsandy place!")
          																	goto flw_185
          																  case 1:
/*< 67>*/ 																	printf(/* textboxtype: 1, unk: 0, line: 45 */ "What's next for you? Let's see what\nwe can see... You will find <color red<the entrance\nto a trial >coloroff>lying hidden in a sandy place!\n\nThat is all the vision shows. These\neyes, they have seen much. Your next\ndestination is a place awash in sand.")
          																	goto flw_185
          																}
          															  case 1:
/*< 64>*/ 																switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          																  case 0:
/*<182>*/ 																	printf(/* textboxtype: 0, unk: 0, line: 44 */ "My big, crystal-clear eyes...they see\na path before you! You must learn a\n<color red<song >coloroff>within a holy sanctum!\n\nAnd what's this? My vision shows me\nit is a place you've visited before.\nA sacred place among the clouds...")
          																	flw_87:
/*< 87>*/ 																	entrypoint_111_05();
          																  case 1:
/*< 62>*/ 																	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
          																	  case 0:
/*<203>*/ 																		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          																		  case 0:
/*<204>*/ 																			printf(/* textboxtype: 0, unk: 1, line: 43 */ "Oh! I see that you've safely cleared the\ntrial in the woods. Yessss...you can hide\nnothing from these eyes!\n\nMy visions...they show me a<color red< large tree\n>coloroff>in the middle of that forest. There is\nan important individual there.\n\nAnd a large stone statue...<pause 20>yesss...\nUnderground...<pause 20> Going up, going\ndown... Oh, yes, I see a flurry of\nactivity in your future.\nAnyway, just get yourself to the place\nwith many trees!")
          																			goto flw_87
          																		  case 1:
/*< 63>*/ 																			printf(/* textboxtype: 1, unk: 0, line: 42 */ "Young man, I see visions of the path\nthat lies before you. You will face a\ntrial! Yesss...deep within the shadows.\nA hair-raising test...\nGo to the woods! There you will find\nthe test that awaits you!")
          																			goto flw_87
          																		}
          																	  case 1:
/*< 60>*/ 																		switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          																		  case 0:
/*< 61>*/ 																			printf(/* textboxtype: 0, unk: 0, line: 41 */ "Two whirling sails face a great tower,\nand atop that tower you play a tune.\nThen I see...light! A great light!\n\nThe light illuminates the path you\nmust follow!")
/*<202>*/ 																			entrypoint_111_05();
          																		  case 1:
/*<175>*/ 																			switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          																			  case 0:
/*< 57>*/ 																				switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          																				  case 0:
/*< 58>*/ 																					printf(/* textboxtype: 0, unk: 0, line: 38 */ "Ahhhh, yesss... You are searching\nfor something. Allow me to gaze into\nyour future...\n\nI see...a propeller falling through a\nsea of clouds... It is discarded, left to\nthe elements...\n\nAhhh, I see a <color red<mountain of fire>coloroff>...\nI see a temple on this burning\nmountain! What you seek is <color red<just down\nthe mountain from this temple>coloroff>...\nA burning mountain... Could such a\nthing truly exist?")
/*<120>*/ 																					switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          																					  case 0:
/*<121>*/ 																						entrypoint_111_05();
          																					  case 1:
/*<111>*/ 																						{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 177, 'param3': 51}
/*<177>*/ 																						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 108, 'param3': 16}
/*<108>*/ 																						printf(/* textboxtype: 0, unk: 0, line: 68 */ "")
/*<109>*/ 																						switch (choice(2)) {
          																						  case 0:
/*<112>*/ 																							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<113>*/ 																							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<114>*/ 																							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<115>*/ 																							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<116>*/ 																							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<117>*/ 																							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<191>*/ 																							open_dowsing_wheel(13)
/*<193>*/ 																							printf(/* textboxtype: 1, unk: 0, line: 69 */ "")
/*<192>*/ 																							story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          																							flw_118:
/*<118>*/ 																							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 122, 'param3': 36}
/*<122>*/ 																							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 119, 'param3': 16}
/*<119>*/ 																							entrypoint_111_05();
          																						  case 1:
/*<110>*/ 																							printf(/* textboxtype: 0, unk: 1, line: 70 */ "")
          																							goto flw_118
          																						}
          																					}
          																				  case 1:
/*<194>*/ 																					switch (story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */]) {
          																					  case 0:
/*<195>*/ 																						printf(/* textboxtype: 0, unk: 1, line: 40 */ "Let me see... You seek a certain\nsomething in order to repair a broken\nobject. Yesss...\n\nAh... I see an <color yellow<Ancient Flower>coloroff><0x10006:0xfbcd>...<0x10006:0x00cd>\n\n\n\nIn my visions, I have seen Ancient\nFlowers blossoming in ages past where\nthere is now <color red<sand>coloroff>.<pause 20> If you scour the\nsands, you will find one!")
          																						flw_86:
/*< 86>*/ 																						entrypoint_111_05();
          																					  case 1:
/*< 59>*/ 																						printf(/* textboxtype: 1, unk: 0, line: 39 */ "Ahh... Structures with large, whirling\nsails come into focus. Something\ncreates a gust, and the structures...\nturn! The two buildings face...a tower!")
          																						goto flw_86
          																					}
          																				}
          																			  case 1:
/*< 56>*/ 																				switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          																				  case 0:
/*<176>*/ 																					printf(/* textboxtype: 0, unk: 1, line: 64 */ "Ah, yesss... You have overcome a major\nobstacle and are understandably\npleased.\n\nYour next endeavor will be... <pause 30>Ohhhh!\nThe <color red<Ballad of the Goddess>coloroff>... <pause 30>I see you\nwant to learn about it!\n\nSo who would be able to tell you about\nsuch a thing, you might wonder?\n\n\nGazing into my crystal ball, I see the...\n<color red<headmaster of the Knight Academy>coloroff>!\nHe is the one to whom you should\nspeak, yesssss...")
          																					flw_85:
/*< 85>*/ 																					entrypoint_111_05();
          																				  case 1:
/*< 36>*/ 																					switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          																					  case 0:
/*< 37>*/ 																						printf(/* textboxtype: 1, unk: 0, line: 36 */ "The place you are traveling to...\n\n\n\nSomething large awakens? Hmm?<pause 30>\nIt's huge... <pause 20>Whatever it is, it's big!\n<pause 40>It's bigger than huge!\n\nI'm seeing that you should take extra\n<color red<Heart Potions>coloroff>. Oh, yesss... I foresee\nthat will help you succeed.")
          																						goto flw_85
          																					  case 1:
/*< 35>*/ 																						switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          																						  case 0:
/*< 34>*/ 																							printf(/* textboxtype: 0, unk: 0, line: 35 */ "I see a place...yes, it's coming into\nfocus now... SAND! Hmm, sand?\nA sandbox? A giant sandbox?\n\nWell, whatever it is, I see it's a desolate\nplace that will cause you troubles with\nelectricity...\n\nIron won't do you any good there. I see\nyou'll need a <color red<Wooden Shield >coloroff>or one\nthat's stronger...\n\nAnd you might find yourself in need of\nbombs there. Make sure to carry\nseveral <color red<Bomb Bags>coloroff>.")
          																							goto flw_85
          																						  case 1:
/*< 22>*/ 																							switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          																							  case 0:
/*< 23>*/ 																								printf(/* textboxtype: 0, unk: 1, line: 34 */ "Young man, my visions see...\nFlames! Burning! Smoke! Scorching\nheat! This is in your future...\n\nThe thought of taking a Wooden\nShield to such a place is madness...\nIron! You will need an <color red<Iron Shield >coloroff>to\nprotect yourself!\nAnd you should also take with you some\n<color red<potions to restore your vitality>coloroff>...")
/*< 84>*/ 																								entrypoint_111_05();
          																							  case 1:
/*< 16>*/ 																								printf(/* textboxtype: 1, unk: 0, line: 33 */ "Young man, are you about to head into \na densely wooded area? Somewhere\nblanketed in green, yes? Ahhh...\nMy eyes, they see all...\nTrees! Everywhere!<pause 20> Yes. <pause 10>Many trees...\nIt would serve you well to buy a <color red<Wooden\nShield >coloroff>before you travel.\n\nI can see that you are a bit young and\ngreen yourself, so it couldn't hurt to\ntake a <color red<Heart Potion >coloroff>with you.")
/*< 83>*/ 																								entrypoint_111_05();
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
          										}
          									}
          								  case 1:
          									goto flw_71
          								}
          							  case 1:
          								goto flw_71
          							}
          						}
          					}
          				}
          			}
          		  case 1:
/*< 31>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 13, 'param3': 12}
/*< 13>*/ 			printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00000003>You there! I see you, yes! Come, allow\nme to foresee your own fortune. It'll\ncost just<color red< 10 Rupees >coloroff>to light the way\nalong your cloudy path ahead.\nDo you hunger to know what these\nbig, lovely eyes will behold? Shall I\nbegin? It'll cost but <color red<1>coloroff><color red<0 Rupees>coloroff>.\n[1-]Please![2]No, thanks.")
/*< 14>*/ 			switch (choice(2)) {
          			  case 0:
/*< 29>*/ 				switch (has_rupees(10)) {
          				  case 0:
/*< 30>*/ 					rupees += -10;
          					flw_160:
/*<160>*/ 					switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          					  case 0:
/*<141>*/ 						printf(/* textboxtype: 1, unk: 0, line: 15 */ "So, what information do you seek?\nWhat is it that you want to know?\n[1-]Where to next?[2-]Treasure!")
/*<174>*/ 						scene_flags[0 'Skyloft'][86 /* 0xB 40 */] = true;
/*< 27>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 12}
/*<142>*/ 						switch (choice(2)) {
          						  case 0:
/*< 20>*/ 							printf(/* textboxtype: 0, unk: 0, line: 5 */ "Magnificent! Come closer, then! Let us\nsee what I can...see!")
          							flw_38:
/*< 38>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2560, 'next': 164, 'param3': 13}
/*<164>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 50, 'next': 39, 'param3': 54}
/*< 39>*/ 							wait_frames(160)
/*< 40>*/ 							{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -238, 'next': 165, 'param3': 13}
/*<165>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 50, 'next': 17, 'param3': 54}
/*< 17>*/ 							zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 21>*/ 							printf(/* textboxtype: 1, unk: 0, line: 9 */ "Ahaaaaaaaaaa. I see many things...\nAll is revealed...")
          							goto flw_74
          						  case 1:
/*<145>*/ 							entrypoint_111_06();
          						}
          					  case 1:
/*<161>*/ 						printf(/* textboxtype: 0, unk: 1, line: 16 */ "Very well. Let me see what I can see!\nYesssss... Your fortune...it's all coming\ninto focus now...")
/*<163>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 38, 'param3': 12}
          						goto flw_38
          					}
          				  case 1:
/*< 32>*/ 					printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00090909>But what's this, young man?! I've just\nhad a vision, and it's telling me you\ndon't have the money to pay me for my\namazing services!\nYou surely aren't asking me, with my\nunfathomable, all-seeing eyes, to tell\nyour fortune for free, are you?!")
          				}
          			  case 1:
/*< 15>*/ 				printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00090909>Fine. Fine. I know the time will come\nwhen you wish these round, stupendous\neyes could see your fortune! But\ndon't come running to me!")
          			}
          		}
          	  case 1:
/*<173>*/ 		scene_flags[0 'Skyloft'][26 /* 0x2 04 */] = true;
/*< 24>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 1, 'param3': 12}
/*<  1>*/ 		printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000003>Gaze into my eyes... Stare deeply into\nmy eyes... These eyes see many things.\nOh yes, these lovely, round eyes can\neven see...into the future!\nAllow me to tell your fortune, boy!\nDo you doubt these eyes? I look upon\nyour shirt, boy, and I see a single\nthread loose on your sleeve stitching!\nNothing can hide from these eyes!\nNormally, I seek 10 Rupees to tell a\nfortune, but this time I will charge but\n<color red<1 Rupee>coloroff>.\nSo do you want me to tell your\nfortune? Do you dare discover what\nfate these eyes see? Only <color red<1 Rupee>coloroff>!\n[1-]OK.[2]Maybe later.")
/*<  4>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_25:
/*< 25>*/ 			switch (has_rupees(1)) {
          			  case 0:
/*< 26>*/ 				rupees += -1;
/*<  8>*/ 				printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x0000000a>Yessssss! I knew it! Aha... What a treat!\nYou are the first customer I've had in\na while!\n\nOh<0x10006:0xfdcd>...<0x10006:0x00cd> I mean, I'm the best at what I do!\nYou can trust these glistening eyes!")
          				goto flw_160
          			  case 1:
/*< 28>*/ 				printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00090909>But what's this?! I see you don't\ncarry even a single Rupee in your\nshriveled wallet. These tantalizing\neyes do not work for free!")
          			}
          		  case 1:
/*<  5>*/ 			printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000007>I'm hurt! Is this how you respond to\nkindness?\n\n\nDon't you trust these big, round, \nall-seeing eyes? I might not look on\nyou so favorably next time. Are you\nsure you don't want your fortune told?[1-]Actually...[2]No, thanks.")
/*<  6>*/ 			switch (choice(2)) {
          			  case 0:
          				goto flw_25
          			  case 1:
/*<  7>*/ 				printf(/* textboxtype: 0, unk: 0, line: 2 */ "You are stubborn...but I saw that\nfrom across the room. I can also see\non your face that you don't believe in\nfortune-telling.\nGetting your fortune told will aid you\non your path... Aren't you curious\nabout what these large, dewy eyes\nwill behold?\n[1-]OK, OK.[2]No!")
/*<  9>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_25
          				  case 1:
/*< 10>*/ 					printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00090909>Hm... Peering into your eyes, I see you\nare a disbeliever. Don't come crying to\nme later, asking for my help when you\nfind yourself lost...<0x10008:0xfecd> Hmph!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_111_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00000002>What's this...? What is it that my eyes\nbehold?!\n\n\nOh, young man, what calamitous\nvisions appear before me...\n\n\nYou may choose not to believe me,\nbut my eyes foresee a hazardous,\nthorny road ahead for you...\n\nBut I can foresee what will befall you, \nfor I am a fortune-teller!\n\n\nTrust my<0x10006:0xfccd> <color red<piercing eyes>coloroff>...<0x10006:0x00cd> Listen to\nmy pure and innocent voice.\n\n\nI will do you no harm. Gaze deeply into\nmy eyes and come closer!")
          }

          void entrypoint_111_03() {
/*< 48>*/ 	start()
          	goto flw_160
          }

          void entrypoint_111_04() {
/*< 53>*/ 	start()
          	goto flw_19
          }

          void entrypoint_111_05() {
/*< 82>*/ 	start()
/*<130>*/ 	switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
          	  case 0:
/*<131>*/ 		printf(/* textboxtype: 1, unk: 0, line: 60 */ "Also, if you happen to be looking for a\n<color red<plant>coloroff> of some kind, then I also saw\na great green <color red<forest>coloroff>. <0x10006:0xfbcd>Hmm... I can\nhardly imagine such a place...")
          		flw_132:
/*<132>*/ 		switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          		  case 0:
/*<133>*/ 			printf(/* textboxtype: 0, unk: 1, line: 61 */ "Also...you are searching for someone\nto plow a field for you, are you not?\n\n\nYou will find no such person in Skyloft!\nInstead, you must go to the <color red<caves>coloroff> where\n<color red<those who are skilled at digging>coloroff> dwell!\n\nThere you will find the right person for\nthe job. I have foreseen it!")
          			flw_134:
/*<134>*/ 			switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          			  case 0:
/*<135>*/ 				printf(/* textboxtype: 0, unk: 0, line: 62 */ "Ah! Yes, yes! I see it! You are searching\nfor something lost. A shiny, whirling\nthing...\n\nI see <color red<a dry place with sand>coloroff>! You will\nfind it there in a place that is, itself,\nnot easy to find. These big, dewy\neyes...they do not lie!")
          				flw_170:
/*<170>*/ 				switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          				  case 0:
/*<171>*/ 					switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          					  case 0:
          						flw_33:
/*< 33>*/ 						printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00000012>That's all I can see for the moment...\nMy eyes, they grow weary. Come see\nme again if you should lose your way.")
/*< 41>*/ 						printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10005:0x001e0000><0x10009:0x000b0b0d>Good luck, young man!")
/*< 11>*/ 						story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */] = true;
          					  case 1:
/*<172>*/ 						printf(/* textboxtype: 1, unk: 0, line: 63 */ "Oh! The mists are parting... I also see a\nperson who has lost a rare bug...\n\n\nMy crystal ball reveals that this bug \nis being held in secret on an island\nby <color red<one with a love for insects>coloroff>!")
          						goto flw_33
          					}
          				  case 1:
          					goto flw_33
          				}
          			  case 1:
          				goto flw_170
          			}
          		  case 1:
          			goto flw_134
          		}
          	  case 1:
          		goto flw_132
          	}
          }

          void entrypoint_111_06() {
/*<143>*/ 	start()
/*<144>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "Yesssss... Treasure, eh? You wish for\nme to gaze into my crystal ball and\nforesee treasure. I must confess,\nI know little about treasure...\nAh well. I guess I can give it a shot.")
/*<147>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2560, 'next': 166, 'param3': 13}
/*<166>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 50, 'next': 148, 'param3': 54}
/*<148>*/ 	wait_frames(160)
/*<149>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -238, 'next': 167, 'param3': 13}
/*<167>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 50, 'next': 146, 'param3': 54}
/*<146>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "Ahaaaaaaaaaa. I see many things...\nAll is revealed...")
/*<156>*/ 	printf(/* textboxtype: 0, unk: 1, line: 19 */ "Yesss... A towering forest... Sandy\ndunes... A blazing mountain...\nMonsters... These are the sources of\ntreasure that I foresee.\nWhich source of treasure do you want\nto hear about?\n[1-]Forest.[2-]Dunes.[3-]Mountain.[4-]Monsters.")
/*<150>*/ 	switch (choice(4)) {
          	  case 0:
/*<151>*/ 		printf(/* textboxtype: 0, unk: 0, line: 20 */ "Yesss... I see a towering forest...\nTreasures often found in these great\nwoods are <color yellow<Bird Feathers>coloroff> and\n<color yellow<Hornet Larvae>coloroff>...\nI see you finding a<color yellow< Bird Feather>coloroff> by\ncatching a small bird in your net!\n\n\nAnd <color yellow<Hornet Larvae>coloroff>... Oh yesss, you will\nfind them by knocking down hives!\n\n\nAmong all the small bird feathers, I see\none that is highly prized! Yesss, \nthe <color red<Blue Bird Feather>coloroff>... It is said to\nbring happiness!\nIf you see one, young man, you are\nvery fortunate!")
          		flw_155:
/*<155>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "And then there's the <color yellow<Amber Relic >coloroff>and\nthe <color yellow<Dusk Relic>coloroff>. These can be found in\nevery region, I see...\n\nBut for some reason, the <color yellow<Dusk Relic\n>coloroff>can only be found during some kind\nof trial...\n\nAnd my eyes, they see that the\n<color yellow<Goddess Plume >coloroff>is the rarest of all\ntreasures! If you should find one, you\nwill be the luckiest man alive!")
/*<157>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00000012>That's all I can see for the moment...\nMy eyes, they grow weary. Come see\nme again if you should lose your way.")
/*<158>*/ 		printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10005:0x001e0000><0x10009:0x000b0b0d>Good luck, young man!")
/*<159>*/ 		story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */] = true;
          	  case 1:
/*<152>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "The land of sands, eh... In the land of\nsands, I see you will find <color yellow<Tumbleweeds>coloroff>.\nYessss... And something called an\n<color yellow<Ancient Flower>coloroff>.\nTo catch a <color yellow<Tumbleweed>coloroff>, I foresee you\nswinging a net quickly just as one\nrolls across your path.\n\nAs the name suggests, I see you can\npick an <color yellow<Ancient Flower>coloroff> only by\ntraveling back to ancient times.")
          		goto flw_155
          	  case 2:
/*<153>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "Smoldering and sulfurous...yesss...\nI see a blazing mountain! There you\nwill find...\n\n<color yellow<Lizard Tails >coloroff>and something called\n<color yellow<Eldin Ore>coloroff>! I see it now...\n\n\n<color yellow<Eldin Ore>coloroff> can sometimes be found by\ndigging in the ground, yess... I see\ndirt in your future...\n\n<color yellow<Lizard Tails>coloroff>... I see you claiming this\ntreasure by defeating horrifying\nlizard-like creatures. This vision...\nIt will haunt my dreams!")
          		goto flw_155
          	  case 3:
/*<154>*/ 		printf(/* textboxtype: 0, unk: 0, line: 23 */ "Monsters. I see monsters... When you\ndefeat a monster, you will often find\none of these...\n\nA <color yellow<Monster Claw>coloroff>, <color yellow<Ornamental Skull>coloroff>,\n<color yellow<Jelly Blob>coloroff>, or <color yellow<Monster Horn>coloroff>...\n\n\n<color yellow<Monster Claws >coloroff>come from monsters\nthat flutter and flap in the air!\n\n\n<color yellow<Ornamental Skulls>coloroff> come from human-\nlooking monsters. They are\ndisgusting to behold!\n\n<color yellow<Jelly Blobs >coloroff>come from soft-looking\nmonsters. Oh, how they ooze...")
/*<207>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "And <color yellow<Monster Horns >coloroff>come from the\nmonsters who carry them. You can\nclaim them for yourself by using some\nsort of tool to snatch them away.\n<color yellow<Evil Crystals>coloroff> often come from\nmonsters that cast spells. Dark\nmagic... It gives me chills...\n\nAnd rarely, so very rarely...a <color yellow<Golden\nSkull>coloroff> will be found instead of an\nOrnamental Skull.")
          		goto flw_155
          	}
          }

          void entrypoint_111_07() {
/*<168>*/ 	start()
/*<169>*/ 	printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00000002>Oh no... Er, hang on a second...\n\n\n\nI see you're looking well these days!\nIf I didn't know any better, I'd say\nyou'd found the time to gather all\nvariety of magnificent treasures.\nCome! Come closer! If it's treasure you\nseek, I'll use my mystical vision to find\nanswers for you!")
          }

          void entrypoint_111_11() {
/*< 42>*/ 	start()
/*< 52>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*< 54>*/ 		entrypoint_111_04();
          	  case 1:
/*< 43>*/ 		switch (story_flags[374 /* us: 805A9B02 0x10, jp: 805ACD82 0x10 */]) {
          		  case 0:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0000000a>Yesssss! The young man is here!\nWelcome! I've been waiting!\n\n\nAnd you've got that smirk on your face,\nyesssss... The one that says you want\nme to see what the future will bring!")
          			flw_140:
/*<140>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 47, 'param3': 12}
/*< 47>*/ 			printf(/* textboxtype: 0, unk: 1, line: 31 */ "Come now! Let me see into the future\nwith these big, round eyes! And you\nget my special rate—half off!\n\nShall I begin to peer into your future?\nIt'll be <color red rupee<5 Rupees>coloroff>. What do you say?\n[1-]Sure![2]No, thanks.")
/*< 50>*/ 			switch (choice(2)) {
          			  case 0:
/*<197>*/ 				check_item_flag(501, 5)
/*<196>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 100}) {
          				  case 0:
/*<139>*/ 					rupees += -5;
/*< 49>*/ 					entrypoint_111_03();
          				  case 1:
/*< 55>*/ 					printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00090909>But what's this, young man?!\nI see you have no money at all!\n\n\nLook into these steely, unflinching eyes\nand you will see that no amount of\npleading will get me to lower my price.\nReturn with money!")
          				}
          			  case 1:
/*< 51>*/ 				printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00090909>Fine. Fine. I know the time will come\nwhen you wish these round, stupendous\neyes could see your fortune! But\ndon't come running to me!")
          			}
          		  case 1:
/*< 44>*/ 			printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x0000000a>Ahhh! You're that young man from\nbefore!\n\n\nThanks to you, I've been able to return\nto a life of gazing into the future to\ntell people's fortunes!\n\nWhat do you say I tell you yours, hm?\nAnd I'll even cut you a deal... From now\non, it's just half price!")
/*< 45>*/ 			story_flags[374 /* us: 805A9B02 0x10, jp: 805ACD82 0x10 */] = true;
          			goto flw_140
          		}
          	}
          }

          void entrypoint_111_30() {
/*< 80>*/ 	start()
/*<106>*/ 	switch (story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */]) {
          	  case 0:
/*<107>*/ 		printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00010703>Yesss, thanks to you, young man,\nmy life is full of happiness!\n\n\nI have not yet foreseen how your life\nwill fare, but if you'd like to find out,\ncome to the bazaar during the daylight\nhours and we shall see!")
          	  case 1:
/*< 81>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00010701>Hey! What would bring you here at\nthis hour<0x10006:0xfccd>...<0x10006:0x00cd> I'm not open at night. \nCome to my stall in the bazaar at a\nsane hour!")
          	}
          }

