          void entrypoint_114_03() {
          	start()
/*< 48>*/ 	switch (story_flags[202 /* us: 805A9AEF 0x10, jp: 805ACD6F 0x10 */]) {
          	  case 0:
/*< 49>*/ 		printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00070002>Hey, <heroname>! Did you find\nany clues about Zelda? I know you\ncan find her. Don't give up!")
          	  case 1:
/*< 12>*/ 		switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
          		  case 0:
/*< 13>*/ 			printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000009>Hey, <heroname>! Just make sure\nyou come back and see me.")
          		  case 1:
/*< 53>*/ 			switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          			  case 0:
/*< 54>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00070811>Zelda fell from her bird... I can't\nbelieve it...\n\n\nShe's such a good rider, you know?\n\n\n\n<0x10009:0x00000e00>Since I'm pretty much the worst rider\naround, all I can do is hope she's OK.")
          			  case 1:
/*<  7>*/ 				switch (scene_flags[40 /* 0x4 01 */]) {
          				  case 0:
/*<  6>*/ 					printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00000811>That's pretty serious,\n<heroname>.<pause 25> Hope you find\nyour bird soon<0x10006:0xfbcd>...<0x10006:0x00cd>")
          				  case 1:
/*<  4>*/ 					switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          					  case 0:
/*<  5>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00010708>Hey, what's wrong, <heroname>?\n\n\n\n<0x10009:0x00070c00>You...don't know where your bird is?\n<pause 25>What are you talking about,\n<heroname>?\n\nYou called it, but<0x10006:0xfbcd>...<0x10006:0x00cd>it didn't even come\nto you?\n\n\n<0x10009:0x00010800><0x10006:0xfbcd>...<0x10006:0x00cd>So that means...<pause 25>\n<0x10008:0xffcd>Oh... I knew it...\n\n\n<0x10009:0x00080807>Huh? <pause 25>Oh, uh, nothing.<pause 25> Really, I was,\nuh...<pause 20>talking to myself. You know, like\nI do...")
/*< 29>*/ 						scene_flags[0 'Skyloft'][40 /* 0x4 01 */] = true;
          					  case 1:
/*< 10>*/ 						switch (scene_flags[23 /* 0x3 80 */]) {
          						  case 0:
/*< 11>*/ 							printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00000009>I have to hang back and watch the\nacademy today. Good luck with the\n<color red<ceremony>coloroff>, <heroname>!")
          						  case 1:
/*<  1>*/ 							switch (scene_flags[39 /* 0x5 80 */]) {
          							  case 0:
/*<  2>*/ 								printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00000809>I'm not like you, <heroname>.\nI fail at everything I try.\n\n\nThat's why I'm still here practicing\n<color green<picking up >coloroff>barrels with (A).\n\n\n<0x10009:0x00070e00>I guess it's not all bad. At least I'm\ngetting paid.")
          							  case 1:
/*<  3>*/ 								printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000002>Good morning, <heroname>!\nToday's the big <color red<Wing Ceremony>coloroff>,\nright?\n\n<0x10009:0x00010800>I wanted to fly too, but I<0x10006:0xfbcd>...<0x10006:0x00cd> I didn't\nmake the cut, so I'm stuck back here at\nthe academy.\n\n<0x10009:0x00070800>Plus, I've got to move these <color red<barrels\n>coloroff>over to the kitchen.\n\n\n<0x10009:0x00010800>I was hoping to at least be able to\ncheer you on, <heroname>, but...\n<0x10009:0x00070a00>I guess that's the way it goes.<pause 20>\nGo out there and wow them, buddy!")
/*< 26>*/ 								scene_flags[0 'Skyloft'][39 /* 0x5 80 */] = true;
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_114_20() {
/*< 55>*/ 	start()
/*< 77>*/ 	switch (context_related2(0)) {
          	  case 0:
/*<107>*/ 		switch (scene_flags[31 /* 0x2 80 */]) {
          		  case 0:
          			flw_72:
/*< 72>*/ 			switch (story_flags[400 /* us: 805A9B10 0x01, jp: 805ACD90 0x01 */]) {
          			  case 0:
/*<117>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 84, 'param3': 12}
/*< 84>*/ 				switch (temp_flags[6 /* 0x1 40 */]) {
          				  case 0:
/*< 85>*/ 					printf(/* textboxtype: 1, unk: 1, line: 34 */ "<0x10009:0x00000002>Want to try again? It'll cost you\nanother <color red<20 Rupees>coloroff>.\n[1-]Yep! [2-]Rules?[3]Nah.")
          					flw_74:
/*< 74>*/ 					switch (choice(3)) {
          					  case 0:
          						flw_67:
/*< 67>*/ 						switch (has_rupees(20)) {
          						  case 0:
/*< 68>*/ 							rupees += -20;
/*< 70>*/ 							printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00070a0a>All right! Let's get started. Show me\nhow it's done, <heroname>!")
/*< 71>*/ 							make_actor_do_something(0, 0)
          						  case 1:
          							flw_66:
/*< 66>*/ 							printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00010811>Can't afford it, huh? Must be rough\nnot having enough Rupees to play\na little game, huh, <heroname>?")
          						}
          					  case 1:
          						flw_63:
/*< 63>*/ 						printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00070200>I'll toss pumpkins for <color red<90 seconds>coloroff>!\nYou get 10 points for every pumpkin\nyou hit.\n\n<0x10009:0x00000a00>The more pumpkins you hit in a row,\nthe more points you get. Don't miss!")
/*< 69>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 64, 'param3': 12}
/*< 64>*/ 						printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00070200>Oh, and one more thing. It will cost you\n20 Rupees a try.\n\n\n<0x10009:0x00080a00>Playing for free is no fun, right?\nSo what do you say? You want to\ngive it a shot for <color red<20 Rupees>coloroff>?\n[1-]Sure! [2]No, thanks.")
/*< 65>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_67
          						  case 1:
          							goto flw_66
          						}
          					  case 2:
/*< 75>*/ 						printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00070811>OK, <heroname>. I know how\nbusy you are.\n\n\nYou've got the whole “save Zelda\"\nmission going on and stuff. <pause 10>\nSorry for bugging you.")
          					}
          				  case 1:
/*< 73>*/ 					printf(/* textboxtype: 1, unk: 1, line: 33 */ "<0x10009:0x00000002>Hey, <heroname>! How's\neverything going?\n\n\nYou want to try shooting some\npumpkins? One go around will cost\nyou <color red<20 Rupees>coloroff>!\n[1-]Yep![2-]Rules?[3]No, thanks.")
          					goto flw_74
          				}
          			  case 1:
/*<102>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 31}
/*< 76>*/ 				story_flags[400 /* us: 805A9B10 0x01, jp: 805ACD90 0x01 */] = true;
/*< 56>*/ 				printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00070202>Hey, <heroname>!\n\n\n\nI've pretty much maxed out on push-\nups. Wonder what exercise I can pick\nup next...\n\n<0x10009:0x00000207>Whoa! <pause 30>That's one sweet bow you've\ngot there, <heroname>!\n\n\nBet you're a total natural with it, too.\n[1-]Yep. [2-]Uh...")
/*< 58>*/ 				switch (choice(2)) {
          				  case 0:
/*< 57>*/ 					printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x00070aff>You're amazing, <heroname>!\n\n\n\n<0x10009:0x00010200>Even if I work my way up to 3,000\npush-ups, I'll never be as cool as you.")
          					flw_59:
/*< 59>*/ 					printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00070a00>I've got it! Why don't you show\nme how good you are with\nyour bow?\n\nI'm going to toss some pumpkins into\nthe air, OK?\n\n\n<0x10009:0x00000200>You show me how good you are by\nfilling them full of arrows!\n\n\n<0x10009:0x00070a00>Throwing the pumpkins in the air will\ngive me a good workout too!\nTwo birds with one stone!\n[1-]OK! [2]No, thanks.")
/*< 61>*/ 					switch (choice(2)) {
          					  case 0:
          						goto flw_63
          					  case 1:
/*< 62>*/ 						printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00070811>OK, <heroname>. I know how\nbusy you are.\n\n\nYou've got the whole “save Zelda\"\nmission going on and stuff. <pause 10>\nSorry for bugging you.")
          					}
          				  case 1:
/*< 60>*/ 					printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00000a09>Why are you blushing? You know\nit's true!")
          					goto flw_59
          				}
          			}
          		  case 1:
/*<108>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<109>*/ 				printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000501>Hey, <heroname>! The Isle of the \nGoddess vanished! What's going on?\n\n\n<0x10009:0x00000800>Oh<0x10006:0xfbcd>...<0x10006:0x00cd>so you already know everything,\nhuh, <heroname>?\n\n\n<0x10009:0x00000200>It must have something to do with\nfinding Zelda. I get it. I'm done being\nsurprised by this stuff. You just make\nsure you find Zelda, OK?")
/*<110>*/ 				scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          			  case 1:
          				goto flw_72
          			}
          		}
          	  case 1:
/*< 83>*/ 		temp_flags[6 /* 0x1 40 */] = true;
/*< 90>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 78, 'param3': 44}
/*< 78>*/ 		switch (context_related4(0)) {
          		  case 0:
/*< 92>*/ 			{'type': 'type3', 'subType': 4, 'param1': 28, 'param2': 9472, 'next': 79, 'param3': 13}
/*< 79>*/ 			printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00000012>You scored <numeric arg0 0> <0x30004:0x02cd>.\n\n\n\nJust not feeling it today, huh,\n<heroname>? Sorry, but you\ndon't get a prize with that score.\n\n<0x10009:0x00070200>The easiest way to hit a pumpkin is\nto lead it. You know, put the cursor a\nlittle ahead of it as it's flying.\n\nDo that, and I bet you can score\n<color red<150 points >coloroff>or so.\n\n\n<0x10009:0x00010a00>Not that I'm giving you advice or\nanything. I mean, I know you know\nwhat you're doing.")
          			flw_86:
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00070a00>Drop by when you want to try again!")
          			flw_91:
/*< 91>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 103, 'param3': 45}
/*<103>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*< 93>*/ 			{'type': 'type3', 'subType': 4, 'param1': 29, 'param2': 9728, 'next': 80, 'param3': 13}
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0, line: 36 */ "Wow, <0x10009:0x0000000b><numeric arg0 0> <0x30004:0x02cd>! Nice job,\n<heroname>!\n\n\nIt's not the best score ever, but you\nwere pretty smooth, <heroname>!\n\n\nNext time, I want you to aim for at\nleast <color red<400 points>coloroff>!\n\n\n<0x10009:0x00070a00>Anyway, here's 50 Rupees I've earned\nfrom doing chores for the grumpy\nkitchen lady.")
/*< 87>*/ 			rupees += 50;
          			goto flw_86
          		  case 2:
/*< 94>*/ 			{'type': 'type3', 'subType': 4, 'param1': 29, 'param2': 9728, 'next': 81, 'param3': 13}
/*< 81>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0000000b>Wow, <numeric arg0 0> <0x30004:0x02cd>! That's great,\n<heroname>!\n\n\nYou're good at everything you do,\n<heroname>.\n\n\n<0x10009:0x00070a00>Here's your prize!")
/*<106>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 88, 'param3': 42}
/*< 88>*/ 			give_item(62 0x3E);
/*<115>*/ 			printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00070a00>It would be great to see you hit <color red<600\npoints>coloroff> and set a record next time.\nGive it your best shot!")
          			goto flw_91
          		  case 3:
/*< 95>*/ 			{'type': 'type3', 'subType': 4, 'param1': 30, 'param2': 9984, 'next': 97, 'param3': 13}
/*< 97>*/ 			switch (story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */]) {
          			  case 0:
/*< 82>*/ 				printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x0000000b>You got <numeric arg0 0> <0x30004:0x02cd>! That's beyond\namazing, <heroname>!\n\n\n<0x10009:0x00070a00>The pride of the Knight Academy is\ntruly riding on your shoulders,\n<heroname>! Here, take this!")
/*<105>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 89, 'param3': 42}
/*< 89>*/ 				give_item(64 0x40);
          				goto flw_91
          			  case 1:
/*< 96>*/ 				story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */] = true;
/*< 98>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x0000000b>You got <numeric arg0 0> <0x30004:0x02cd>! That's beyond\namazing, <heroname>!\n\n\nThe hopes of the Knight Academy are\ntruly riding on your shoulders,\n<heroname>!\n\n<0x10009:0x00070a00>Take this<color red< symbol of friendship\n>coloroff>between you and me,\n<heroname>!")
/*<104>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 99, 'param3': 42}
/*< 99>*/ 				give_item(94 0x5E);
          				goto flw_86
          			}
          		}
          	}
          }

          void entrypoint_114_04() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000001><0x10008:0x01cd><0x30001:0x><heroname>!<0x1000D:0x1906>")
/*< 39>*/ 	set_camera(4, 0)
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 37, 'param3': 16}
/*< 37>*/ 	printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00010800><0x10008:0xffcd>Hey,<pause 20> umm... I should probably tell you...\n\n\n\n<0x10009:0x00070800>Ah, forget it. Never mind.<pause 20>\nSorry...")
          }

          void entrypoint_114_05() {
/*< 32>*/ 	start()
/*< 41>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*< 42>*/ 		printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00070a0b>Thanks! That was a huge help,\n<heroname>!\n\n\n<0x10009:0x00000209>I know it's not much, but here's half of\nthe pay the old lady offered me to\ndo that.")
/*< 43>*/ 		give_item(4 0x04);
/*<116>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 44, 'param3': 12}
/*< 44>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00000009>I have to hang back and watch the\nacademy today. Good luck with the\n<color red<ceremony>coloroff>, <heroname>!")
/*< 45>*/ 		scene_flags[0 'Skyloft'][23 /* 0x3 80 */] = true;
          	  case 1:
/*< 40>*/ 		switch (zone_temp_flags[11 /* 0x0 08 */]) {
          		  case 0:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00070203>I need you to carry one of these <color red<barrels>coloroff>\nover to the old lady who works in the\nkitchen.\n\nPress (A) to pick up a barrel, then press\n(A) again to <color green<put it down >coloroff>at your feet.\n\n\n<0x10009:0x00010200>If you <color green<hold the Wii Remote up and\nswing it>coloroff>, you can <color green<throw >coloroff>whatever you're\ncarrying.\n\nYou can <color green<roll >coloroff>small items like pots by\n<color green<holding the Wii Remote down >coloroff>and\n<color green<swinging >coloroff>it.\n\n<0x10009:0x0c070200>But we'll get in huge trouble if any of\nthese barrels break, so don't even think\nabout throwing or rolling them.")
/*<114>*/ 			printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00010200>If you forget any of this, just <color green<press >coloroff><color green<(2)>coloroff>.<0x10011:0x05cd>\n\n\n\nThat'll bring up an explanation of\nactions available to you at that moment\nin time. Pretty handy, huh?")
          		  case 1:
/*< 33>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00000003>Aww, thanks. I didn't think you had\ntime to help me out,\n<heroname>.\n[1-]No problem![2]I'm busy...")
/*< 34>*/ 			switch (choice(2)) {
          			  case 0:
/*< 35>*/ 				printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00000a0b>Really? Thanks! OK, so...")
/*<  9>*/ 				printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00070203>I need you to carry one of these <color red<barrels>coloroff>\nover to the old lady who works in the\nkitchen.\n\nPress (A) to pick up a barrel, then press\n(A) again to <color green<put it down >coloroff>at your feet.\n\n\n<0x10009:0x00010200>If you <color green<hold the Wii Remote up and\nswing it>coloroff>, you can <color green<throw >coloroff>whatever you're\ncarrying.\n\nYou can <color green<roll >coloroff>small items like pots by\n<color green<holding the Wii Remote down >coloroff>and\n<color green<swinging >coloroff>it.\n\n<0x10009:0x0c070200>But we'll get in huge trouble if any of\nthese barrels break, so don't even think\nabout throwing or rolling them.")
/*<113>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00010200>If you forget any of this, just <color green<press >coloroff><color green<(2)>coloroff>.<0x10011:0x05cd>\n\n\n\nThat'll bring up an explanation of\nactions available to you at that moment\nin time. Pretty handy, huh?")
/*<  8>*/ 				zone_temp_flags[11 /* 0x0 08 */] = true;
          			  case 1:
/*< 36>*/ 				printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00000019>Oh, right<0x10006:0xfbcd>... <0x10006:0x00cd>You've got today's\nWing Ceremony to think about!\nYou can leave that there.")
          			}
          		}
          	}
          }

          void entrypoint_114_01() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00070201><0x30001:0x><heroname>!")
/*< 23>*/ 	set_camera(1, 0)
/*< 18>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 100, 'next': 25, 'param3': 15}
/*< 25>*/ 	set_camera(3, 0)
/*< 17>*/ 	{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 0, 'next': 22, 'param3': 14}
/*< 22>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 20, 'param3': 16}
/*< 20>*/ 	printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00071800>That green uniform looks so...\nadventurous! You sure look like a\nknight now.")
/*<111>*/ 	set_camera(2, 0)
/*<112>*/ 	printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x000b0200>The headmaster said you're heading\nout to look for Zelda.\n\n\n<0x10009:0x00001700>You're really something else. I could\nnever imagine myself doing what\nyou're about to do.\n\n<0x1000A:0x000500cd>I put a lot of work into making this!\nYou should take it with you.")
/*< 51>*/ 	{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 4096, 'next': 52, 'param3': 13}
/*< 52>*/ 	wait_frames(20)
/*< 50>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 16, 'param3': 42}
/*< 16>*/ 	give_item(112 0x70);
/*< 19>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "It's an<color red< Adventure Pouch>coloroff>. It's for...\nadventures. It's neat because you can\nfit <color red<four>coloroff> things in it that you'll need\non your big journey.\nYou can buy all kinds of stuff at the\nbazaar that you can put in this pouch.\nYou should go look!\n\n<0x10009:0x00070a09>You could buy some <color yellow<potions >coloroff>and a\n<color yellow<shield>coloroff>. They'd fit in the pouch, and they\nmight come in handy on an adventure.")
/*< 24>*/ 	set_camera(2, 0)
/*< 21>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x30001:0x><heroname>! <0x10009:0x00010c00>I just know you'll\nfind Zelda for us.")
/*<100>*/ 	scene_flags[0 'Skyloft'][0 /* 0x1 01 */] = true;
/*<101>*/ 	scene_flags[0 'Skyloft'][21 /* 0x3 20 */] = true;
/*< 47>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_114_02() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0, line: 5 */ "")
          }

