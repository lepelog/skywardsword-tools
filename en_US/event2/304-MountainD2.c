          void entrypoint_304_14() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (scene_flags[107 /* 0xC 08 */]) {
          	  case 0:
/*< 63>*/ 		printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x000c0e09>Here it is, the Mogma legend of these\nruins...\n\n\n“Ye who seek the entrance to the king's\ntreasure, look for the <color red<two statues that\nface one another>coloroff>.\"\n\n“Show your bravery and <color red<jump into the\nmouth of the sleeping statue>coloroff>. Do this,\nand the path will open before you.\"\n\n<0x10009:0x00090908>It might all just be some frilly old story\nfor baby Mogmas, but we'll never stop\nlooking. And today's no exception.")
          	  case 1:
/*< 98>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 99, 'param3': 49}
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0, line: 53 */ "<sound 1012><0x10009:0x00ffff02>Ho ho ho... Ahhh!\nThe exit at last...")
/*<100>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 59, 'param3': 17}
/*< 59>*/ 		printf(/* textboxtype: 1, unk: 0, line: 46 */ "...<0x10008:0x02cd><0x10009:0x000a5304>Whoa!\n\n\n\n<0x10008:0x00cd><0x10009:0x000909ff>Don't scare me like that! I thought you\nwere one of those monster creeps!\n\n\n...<0x10009:0x000b0c07>Oh, hey, what's this?\n\n\n\nYou got yourself a swanky pair of\n<color yellow<Digging Mitts>coloroff>, don'tcha?\n\n\n<0x10009:0x00ffff0a>Who are ya, anyway? Whatcha doing\nhere?\n[1-]On a quest![2-]Well...")
/*< 60>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_62:
/*< 62>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x000c0d05>Hmm... I getcha.\n\n\n\n<0x10009:0x000c0d07>Huh? Me?\n\n\n\n<0x10009:0x0009090a>Oh yah, the name's <color blue<Guld>coloroff>. I'm the big\nboss of the Mogmas.\n\n\nThose Digging Mitts you got right\nthere... I invented 'em!\n\n\n<0x10009:0x0009090b>Hahah!")
/*< 61>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "...<0x10009:0x000c0409>No offense, pal, but you don't look\nlike the kinda guy I'd send in here on a\ntreasure-huntin' mission...\n\n<0x10009:0x00090e08>But what do I know... Ya might just\nsurprise me.\n\n\nSo here's the deal... Word in the\ntunnels is there's a huge treasure \nhidden in these here ruins...\n\nBut nobody who's ever seen it has\ncome back to tell the tale.\n\n\nCountless treasure hunters have\ndisappeared in here! Poof! Gone.\n\n\n<0x10009:0x000c0409>As a treasure digger, I gotta warn\nyou to just turn around and enjoy the\nmany peaceful years of diggin' left to\nyou, but...\n<0x10009:0x00ffff08>You're gonna do this no matter what\nI say, aren't ya?\n[1-]Pretty much.[2-]...")
/*< 80>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_76:
/*< 76>*/ 				printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00090905>All right, then... I'm gonna let you in\non an ancient treasure-hunting legend\npassed down among generations of\nMogmas.\n<0x10009:0x00ffff0b>Every Mogma worth a handful o' dirt\nknows this one...\n\n\n<0x10009:0x000c0d0a>Here we go...\n\n\n\n“Ye who seek the entrance to the king's\ntreasure, look for the <color red<two statues that\nface one another>coloroff>.\"\n\n“Show your bravery and <color red<jump into the\nmouth of the sleeping statue>coloroff>. Do this,\nand the path will open before you.\"\n\n<0x10009:0x00ff0509>You remember all that, and you're\ngolden.\n[1-]Thanks.[2-]Say it again!")
          				flw_78:
/*< 78>*/ 				switch (choice(2)) {
          				  case 0:
/*< 79>*/ 					printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00090905>Some of my guys are searchin' around\nhere for the treasure.\n\n\nIf you get lost, holler at one of 'em.")
/*< 64>*/ 					scene_flags[15 'Eldin: Fire Sanctuary'][107 /* 0xC 08 */] = true;
          				  case 1:
/*< 77>*/ 					printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00ff0007>Hahah hah... You sure are set on this!\n\n\n\nReady? Here goes...\n\n\n\n<0x10009:0x000c0d0a>“Ye who seek the entrance to the king's\ntreasure, look for the <color red<two statues that\nface one another>coloroff>.\"\n\n“Show your bravery and <color red<jump into the\nmouth of the sleeping statue>coloroff>. Do this,\nand the path will open before you.\"\n\n<0x10009:0x00090109>Got it this time?\n[1-]Yep![2-]One more time.")
          					goto flw_78
          				}
          			  case 1:
          				goto flw_76
          			}
          		  case 1:
          			goto flw_62
          		}
          	}
          }

          void entrypoint_304_15() {
/*< 65>*/ 	start()
/*< 66>*/ 	printf(/* textboxtype: 7, unk: 0, line: 63 */ "Bring light to each statue in\naccordance with the number of\nwings each possesses, from least\nto most.\nWhen light resides in each\nstatue, the king's treasure shall\nbe yours.")
          }

          void entrypoint_304_16() {
/*< 67>*/ 	start()
/*< 82>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 85>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x001b0a02>Those mitts I gave you were one of\nthe finest pieces in my collection.")
          	  case 1:
/*< 83>*/ 		printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x001b0a01>Hey, pal! How are the mitts I gave ya?\n\n\n\nPress (Z) when you're diggin' down\nunderground to get a quick peep at\nwhat's happening aboveground.<0x10011:0x07cd>\n\nEven when we're burrowing, we know\nwhat's happening aboveground too!")
/*< 84>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_304_17() {
/*< 68>*/ 	start()
/*<170>*/ 	switch (story_flags[84 /* us: 805A9AE8 0x01, jp: 805ACD68 0x01 */]) {
          	  case 0:
/*<171>*/ 		printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x001b0a0d>Maaan... Why can't I just do one thing\nright?! What a lunkhead!")
          	  case 1:
/*< 87>*/ 		switch (zone_temp_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x001b0a0e>...Did you already figure out where\nthe treasure was from that map?")
          		  case 1:
/*< 88>*/ 			printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x001b0b12>Seriously? Then what did I give\nyou that map for? And you call\nyourself an adventurer...\n\n<0x10009:0x001b0a0d>Agh... Well, I must look dumber than\na jug of Moblin drool right now...")
/*< 89>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		}
          	}
          }

          void entrypoint_304_18() {
/*< 69>*/ 	start()
/*< 92>*/ 	switch (zone_temp_flags[2 /* 0x1 04 */]) {
          	  case 0:
/*< 90>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x000f0f09>As long as those monsters are still\nthere, you and me oughta stay clear!")
          	  case 1:
/*< 91>*/ 		printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x000f0f0b>Hey, guy! Still in one piece, eh?\n\n\n\nDid ya see all the monsters around\nthat place I was talkin' about?\n\n\n<0x10009:0x000e0e0a>I wonder what in the ever-tunnelin'\nworld those guys are looking for...")
/*< 93>*/ 		zone_temp_flags[2 /* 0x1 04 */] = true;
          	}
          }

          void entrypoint_304_01() {
/*< 14>*/ 	start()
/*< 10>*/ 	switch (scene_flags[100 /* 0xD 10 */]) {
          	  case 0:
/*<101>*/ 		switch (scene_flags[50 /* 0x7 04 */]) {
          		  case 0:
/*<105>*/ 			switch (scene_flags[108 /* 0xC 10 */]) {
          			  case 0:
/*<103>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x3311120f>Hey, pal!\n\n\n\nYou're the one who lowered the level of\nthe lava, right?\n\n\n<0x10009:0x33111213>While you're at it, maybe you could\ndo something about this chain too!")
          			  case 1:
/*<138>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 51, 'next': 139, 'param3': 32}
/*<139>*/ 				{'type': 'type3', 'subType': 1, 'param1': 51, 'param2': 100, 'next': 137, 'param3': 16}
/*<137>*/ 				set_camera(6, 0)
/*<102>*/ 				printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x33111208>Hey!\n\n\n\nI was watching ya, pal! Ya really \nsocked it to those lava thingers!\nAmazing stuff!\n\n<0x10009:0x33111213>And if ya don't mind doing one more\nthing while you're at it, how about ya\nget me down from here!")
/*<104>*/ 				scene_flags[15 'Eldin: Fire Sanctuary'][108 /* 0xC 10 */] = true;
/*<176>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		  case 1:
/*<114>*/ 			{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 1536, 'next': 12, 'param3': 13}
/*< 12>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00131317>Hot! HOT!\n\n\n\nI'm not some sideshow for ya to gawk\nat! Get lost! Shoo now!")
          		}
          	  case 1:
/*<115>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 51, 'next': 113, 'param3': 32}
/*<113>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13311, 'param2': 1536, 'next': 111, 'param3': 13}
/*<111>*/ 		set_camera(3, 0)
/*< 11>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x33131917>That stuff looks HOT! I wouldn't mind\na little hot bath for my sore shoulders,\nbut this is too much!")
/*<112>*/ 		set_camera(4, 0)
/*<117>*/ 		{'type': 'type3', 'subType': 1, 'param1': 51, 'param2': 100, 'next': 116, 'param3': 16}
/*<116>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x33161614>What've we got here? Another new\nguard?\n\n\nHah!\n\n\n\nYou can't break me with interrogation,\nson. You'll never make me talk!\n\n\n<0x10009:0x33131913>I'm not some sideshow for you to gawk\nat! Get lost! Shoo now!")
/*<118>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 13, 'param3': 42}
/*< 13>*/ 		scene_flags[15 'Eldin: Fire Sanctuary'][100 /* 0xD 10 */] = true;
          	}
          }

          void entrypoint_304_19() {
/*< 70>*/ 	start()
/*< 71>*/ 	printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10006:0xfdcd>...Enough of this foolishness...\nI am Ghirahim, Demon Lord!")
          }

          void entrypoint_304_02() {
/*< 30>*/ 	start()
/*< 31>*/ 	switch (scene_flags[101 /* 0xD 20 */]) {
          	  case 0:
/*< 32>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x331b0a05>All yours!\n\n\n\nThey've been in a buried treasure\nchest, so they ain't dirty or anything.\n\n\nNow these ain't the kind of thing that\nyou can easily get your hands on just\nanywhere, so take good care of 'em!")
/*< 81>*/ 		printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x331b0502>Right, then--I'm outta here!\nSo long!")
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x330b0208>Oh yaaah! I'm saved!\n\n\n\n<0x10009:0x00080aff>I don't know who ya are or where\nyou're from, but I owe ya big-time!\n\n\nAre ya here looking for treasure too?\n[1-]Yep![2-]Treasure?")
/*< 16>*/ 		switch (choice(2)) {
          		  case 0:
/*<119>*/ 			printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x00080509>Ha ha! You were totally caught up in\nthat too, pal!")
          			flw_17:
/*< 17>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "I can see it on your face! You're here\nbecause of the “legend of the <color red<sleeping\nstatue>coloroff>,\" right?!\n\nBut those are some busted, old diggin'\nmitts. Ya can't go using them for\ntreasure huntin'!\n\n<0x10009:0x3308090b>I got it! As thanks, I'm gonna give ya\na replacement pair from my secret\nstash! Don'tcha go nowhere!")
/*< 29>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][101 /* 0xD 20 */] = true;
          		  case 1:
/*<120>*/ 			printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00080509>Well, well! No point trying to hide it!\nThere's only one reason you could have\nfor coming so far in here!")
          			goto flw_17
          		}
          	}
          }

          void entrypoint_304_20() {
/*< 72>*/ 	start()
/*< 73>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "It shouldn't matter how powerful your\nsword is, you are still nothing...\nNot just a human... A human child!<pause 20>\nAnd yet you prevail!")
          }

          void entrypoint_304_03() {
/*<153>*/ 	start()
/*<157>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 51, 'next': 158, 'param3': 32}
/*<158>*/ 	{'type': 'type3', 'subType': 1, 'param1': 51, 'param2': 100, 'next': 156, 'param3': 16}
/*<156>*/ 	set_camera(4, 0)
/*<154>*/ 	printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x33111208>Hey!\n\n\n\nI was watching ya, pal! Ya really \nsocked it to those lava thingers!\nAmazing stuff!\n\n<0x10009:0x33111213>And if ya don't mind doing one more\nthing while you're at it, how about ya\nget me down from here!")
/*<155>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][108 /* 0xC 10 */] = true;
/*<175>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_304_21() {
/*< 74>*/ 	start()
/*< 75>*/ 	printf(/* textboxtype: 1, unk: 0, line: 58 */ "You filthy scamp! You have awakened \na wrath that will burn for eons! I swear\nto you, whatever it takes, I will drag\nyou into an eternity of torment!")
/*< 97>*/ 	story_flags[84 /* us: 805A9AE8 0x01, jp: 805ACD68 0x01 */] = true;
/*<166>*/ 	story_flags[172 /* us: 805A9AE2 0x08, jp: 805ACD62 0x08 */] = false;
/*<169>*/ 	story_flags[820 /* us: 805A9B30 0x10, jp: 805ACDB0 0x10 */] = true;
/*<167>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][22 /* 0x3 40 */] = true;
/*<168>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][20 /* 0x3 10 */] = true;
          }

          void entrypoint_304_05() {
/*<  2>*/ 	start()
/*<  8>*/ 	printf(/* textboxtype: 1, unk: 0, line: 55 */ "")
          }

          void entrypoint_304_22() {
/*< 95>*/ 	start()
/*< 96>*/ 	printf(/* textboxtype: 1, unk: 0, line: 28 */ "Hey, pal!\n\n\n\nHow are those mitts treatin' ya?\n\n\n<color red<\n>coloroff>If you want to get a good look \n<color red<aboveground>coloroff>, try pressing (Z)!<0x10011:0x07cd>\n\n\nGot it? Press (Z) to see <color red<aboveground>coloroff>!\nDon't you go forgettin' it!<0x10011:0x07cd>")
/*<124>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_304_06() {
/*<  7>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 60 */ "")
          }

          void entrypoint_304_23() {
/*<127>*/ 	start()
/*<141>*/ 	switch (scene_flags[97 /* 0xD 02 */]) {
          	  case 0:
/*<140>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x001b0a01>Me? I'm going to explore this room a\nlittle more.\n\n\nI also need to report to the boss for\nthat guy who ran off.")
          	  case 1:
/*<132>*/ 		switch (scene_flags[119 /* 0xF 80 */]) {
          		  case 0:
/*<133>*/ 			printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x001b1a15>Wow, you just took down the wall!\nYou got some starch in your socks,\npal!")
          		  case 1:
/*<128>*/ 			switch (scene_flags[77 /* 0x8 20 */]) {
          			  case 0:
/*<130>*/ 				printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x001b0a02>This room has a <color red<fake wall>coloroff> somewhere...\n\n\n\nAnd on the other side of that wall,\nthere's another room. Or so I hear...\n\n\n<0x10009:0x001b1e0a>The ground underneath us is full of\nmonsters, so we don't go tunneling\ntoo much down there, but...\n\n<sound 4>If you're feelin' adventurous, there\njust might be a <color red<hidden route>coloroff>...")
          			  case 1:
/*<134>*/ 				switch (scene_flags[78 /* 0x8 40 */]) {
          				  case 0:
/*<136>*/ 					printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x001b0a09>Did you get that from one of ours?\nDon't you worry. I won't try to take it\nfrom ya.\n\n<0x10009:0x001b0a02>I'm tellin' ya, the information in that\nbox... I think it'll definitely be useful.")
          				  case 1:
/*<126>*/ 					printf(/* textboxtype: 1, unk: 0, line: 31 */ "...")
/*<129>*/ 					printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x001b0a09>Heyyy! We meet again!\n\n\n\nHeh heh heh... Sorry, but I kinda\nhappened to overhear that\nconversation.\n\nIt seems one of my guys was giving ya\na hard time. Sorry about that.\n\n\n<0x10009:0x001b0c02>But that stuff he was sayin' was all\ntrue.\n\n\nThere's a breeze coming from\nsomewhere in this room. I tell ya,\nI can smell it.\n\n<0x10009:0x331b0a0b>I figure the information in that chest\nwill be useful to ya.")
/*<135>*/ 					scene_flags[15 'Eldin: Fire Sanctuary'][78 /* 0x8 40 */] = true;
          				}
          			}
          		}
          	}
          }

          void entrypoint_304_07() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 1, unk: 0, line: 61 */ "")
/*< 94>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][121 /* 0xE 02 */] = true;
/*<  6>*/ 	changeScene(1, 0) // 
          }

          void entrypoint_304_24() {
/*<106>*/ 	start()
/*<107>*/ 	printf(/* textboxtype: 7, unk: 0, line: 64 */ "The bridge of decision...\nChoose the path you believe in...\nMove forward bravely.")
          }

          void entrypoint_304_08() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 20, unk: 0, line: 62 */ "Fire Sanctuary")
          }

          void entrypoint_304_25() {
/*<160>*/ 	start()
/*<159>*/ 	printf(/* textboxtype: 2, unk: 0, line: 4 */ "Signs indicate that there is an 80%\nchance the information held by this\nindividual will be of benefit to you.\n\nI strongly recommend that you rescue\nhim and acquire the information.")
/*<164>*/ 	set_camera(7, 0)
/*<163>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 161, 'param3': 42}
/*<161>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][98 /* 0xD 04 */] = false;
          }

          void entrypoint_304_09() {
/*< 37>*/ 	start()
/*< 39>*/ 	switch (scene_flags[105 /* 0xC 02 */]) {
          	  case 0:
/*<151>*/ 		set_camera(2, 0)
/*<149>*/ 		printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00111213>Hey! Hey! Come on, pal! Please help\nme! Get me offa this chain!\n\n\n<0x10009:0x00161614>I got a hot tip just for you if you help\nme out! ")
/*<152>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*<110>*/ 		{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 1536, 'next': 108, 'param3': 13}
/*<108>*/ 		set_camera(1, 0)
/*<109>*/ 		set_camera(2, 0)
/*< 41>*/ 		printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00111213>Ohhh yah! You've come along at the\nright time, pal!\n\n\n<0x10009:0x00161614>I don't know who ya are or where \nyou're from, but what I need right now\nis for ya to get me offa this chain!\n[1-]I'm in a hurry.[2-]...")
/*< 42>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_43:
/*< 43>*/ 			printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x0011130f>I'm not asking ya to do it for nothing,\nthough! Set me free, and I'll tell ya the\n<color red<big, gigantic secret >coloroff>about this room!\n\nIt's a secret about treasure! OK?")
/*< 38>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][105 /* 0xC 02 */] = true;
          		  case 1:
          			goto flw_43
          		}
          	}
          }

          void entrypoint_304_10() {
/*< 50>*/ 	start()
/*< 49>*/ 	switch (scene_flags[106 /* 0xC 04 */]) {
          	  case 0:
/*< 53>*/ 		printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x331b2203>Here! Take this!\n\n\n\nThis here's some super-secret info that\nI put together. Took some real sweat\nand work too.\n\nI had to survey this place near a\nhundred times to figure it out, but... \n\n\nYou ready for this? Now don't go\nfaintin' when I tell ya. Right around\nhere, there is...\n\n<0x10009:0x331a2008><0x10008:0x02cd>A <color red<hidden room>coloroff>!\n\n\n\n...\n\n\n\n<0x10009:0x331b050a>So in return, please don't tell anyone\nthat I was captured. It'll just be our\nlittle secret, OK?\n[1-]OK, it's a secret.[2-]...")
/*<142>*/ 		switch (scene_flags[119 /* 0xF 80 */]) {
          		  case 0:
/*<144>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][37 /* 0x5 20 */] = true;
/*<145>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][79 /* 0x8 80 */] = true;
/*<174>*/ 			story_flags[822 /* us: 805A9B30 0x40, jp: 805ACDB0 0x40 */] = true;
/*<143>*/ 			switch (choice(2)) {
          			  case 0:
/*<147>*/ 				printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x331b2200>All right, then! Go ahead and open\n'er up! But don't forget our deal!")
          				flw_123:
/*<123>*/ 				story_flags[820 /* us: 805A9B30 0x10, jp: 805ACDB0 0x10 */] = true;
/*<165>*/ 				scene_flags[15 'Eldin: Fire Sanctuary'][98 /* 0xD 04 */] = true;
/*<173>*/ 				scene_flags[15 'Eldin: Fire Sanctuary'][99 /* 0xD 08 */] = true;
          			  case 1:
/*<148>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x3300100d>You low-down, no-good'un!")
          				goto flw_123
          			}
          		  case 1:
/*<146>*/ 			story_flags[819 /* us: 805A9B30 0x08, jp: 805ACDB0 0x08 */] = true;
/*< 54>*/ 			switch (choice(2)) {
          			  case 0:
/*< 55>*/ 				printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x331b2200>All right, then! Go ahead and open\n'er up. But don't forget our deal!\n\n\nLater, then... I said bye now.")
          				flw_131:
/*<131>*/ 				printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10008:0x02cd>Oh...")
          				goto flw_123
          			  case 1:
/*< 56>*/ 				printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x3300100d>Well, ain't that the lowest of the low!\nAnd here I thought I was bein' polite...")
          				goto flw_131
          			}
          		}
          	  case 1:
/*< 47>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x330b0a08>Hoooo-yah! That is the sweet, sweet\nflavor of freedom, hoss!\n\n\n<0x10009:0x33080a09>And, uhh...heh heh...thanks for\ntaking the trouble to free me...\nSucker!\n\nYou really think I would divulge super-\nsecret info about treasure? My momma\ndidn't raise no patsy! I spent too long\nfindin' that info!\n<0x10009:0x33251a06><0x10008:0x02cd>Huh?!\n\n\n\n<0x10009:0x00080a00>Those gloves are from my brother's\nsecret collection! Are ya friends with\nmy brother or something?\n\n[1-]That's right.[2-]I helped him!")
/*< 48>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_51:
/*< 51>*/ 			printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x33251a00>Wait, wait, wait! There's somethin'\nI want to give you!\n\n\n<0x10009:0x00000500>I'll just go get it. Wait here!")
/*< 52>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][106 /* 0xC 04 */] = true;
          		  case 1:
          			goto flw_51
          		}
          	}
          }

          void entrypoint_304_11() {
/*<150>*/ 	start()
/*< 45>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 46>*/ 		printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00111312>Hey! Where are you tearin' off to right\nthis second?!\n\n\nI've got some pipin'-hot info, and all\nya need to do for it is get me offa\nthis chain!")
          		flw_44:
/*< 44>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
/*<162>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*< 40>*/ 		printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00111312>Hey! Hang on there a second!\n\n\n\nWhat kinda right-thinkin' person does\nthat? Just ignores a fella in need?\nThat's just despicable. Terrible,\nisn't it? Isn't it?\nI've got some pipin'-hot info, and all\nya need to do for it is get me offa this\nchain!")
          		goto flw_44
          	}
          }

          void entrypoint_304_12() {
/*<  9>*/ 	start()
/*< 18>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 1, 'param3': 31}
/*<  1>*/ 	switch (scene_flags[103 /* 0xD 80 */]) {
          	  case 0:
/*< 23>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 21>*/ 			printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x33080802>ACK! You again?!\n\n\n\n<0x10009:0x330b0901>Heh heh! Doesn't matter how many\ntimes you try to catch me, you'll always\nend up empty handed!")
          		  case 1:
/*< 20>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "Aghhh! A green monster!\n\n\n\n<0x10009:0x332a09ff>Ack... I can't believe they're following\nus down here now...\n\n\nGuess I can have some fun with him for\nnow, though...\n\n\n<0x10009:0x330b0901>Heh, heh, heh! You're on Mogma turf\nnow, fiend! You may be scary, but <color red<as\nlong as the way ahead of me is clear>coloroff>,\nyou'll never catch me!")
/*< 24>*/ 			zone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	  case 1:
/*< 19>*/ 		printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x331a1a0b>Ahhh! So busy, so busy... Burning the\nmidnight oil again looking for loot!")
          		scene_flags[15 'Eldin: Fire Sanctuary'][103 /* 0xD 80 */] = true;
          	}
          }

          void entrypoint_304_13() {
/*< 33>*/ 	start()
/*< 26>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 36>*/ 		printf(/* textboxtype: 1, unk: 0, line: 43 */ "Here ya go!\n\n\n\n<0x10009:0x330e0eff>Ya know, some monsters seemed to be\nlooking for something on those cliffs\nahead of us...\n\nYou heading that way too, guy?\nYou take care out there. Don't wanna\nsee you get skewered or nothin'.\n\n<0x10009:0x330f0f0b>Me? I'm headin' back to the boss's\nplace. I'll open the door for you while\nI'm at it. See ya!")
/*<121>*/ 		scene_flags[15 'Eldin: Fire Sanctuary'][33 /* 0x5 02 */] = true;
/*<122>*/ 		story_flags[821 /* us: 805A9B30 0x20, jp: 805ACDB0 0x20 */] = true;
/*<172>*/ 		story_flags[822 /* us: 805A9B30 0x40, jp: 805ACDB0 0x40 */] = true;
/*<125>*/ 		scene_flags[15 'Eldin: Fire Sanctuary'][82 /* 0xB 04 */] = true;
          	  case 1:
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x33211601>Noooooooo... You got me! Go on, then,\nyou monster! Boil me, bake me...\nDo your worst!\n\n...\n\n\n\n<0x10009:0x331c1d05>Huh? I know those gloves...\n\n\n\nAin't those from my brother's secret\ncollection?\n[1-]He gave me 'em.[2-]That's right.")
/*< 25>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_34:
/*< 34>*/ 			printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x331d000b>What?! You know my brother?!\n\n\n\nAwww, you're all green. I thought you\nwere a monster!\n\n\n<0x10009:0x33242109>Hey, don't get all angry! I thought you\nwere one of them. Sorry, guy!\n\n\nLemme give ya something good to make\nup for it. Hang on there a sec.")
/*< 35>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][104 /* 0xC 01 */] = true;
          		  case 1:
          			goto flw_34
          		}
          	}
          }

