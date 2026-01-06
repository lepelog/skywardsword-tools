          void entrypoint_300_24() {
/*<220>*/ 	start()
/*<221>*/ 	switch (scene_flags[73 /* 0x8 02 */]) {
          	  case 0:
/*<223>*/ 		printf(/* textboxtype: 1, unk: 0, line: 96 */ "I just know your friend's waiting on\nyou. That's why ya can't ever, ever\ngive up!")
          	  case 1:
/*<224>*/ 		scene_flags[4 'Eldin Volcano'][73 /* 0x8 02 */] = true;
/*<222>*/ 		printf(/* textboxtype: 1, unk: 1, line: 93 */ "<0x10009:0x00000001>Hey, you! Long time no see. Thanks\nfor helping me earlier.\n\n\nSpeaking of helping, did you find that\nfriend you were looking for?\n[1-]Sure did![2-]Not yet...")
/*<225>*/ 		switch (choice(2)) {
          		  case 0:
/*<227>*/ 			printf(/* textboxtype: 1, unk: 0, line: 94 */ "<0x10009:0x00110808>You did? Heyyy, that's great news!<pause 20>\nHuh? You haven't rescued her?\n\n\n<0x10009:0x000908ff>Don't look so glum, pal. I'm sure you'll\nfigure it out and save her.\nNever give up!")
          		  case 1:
/*<226>*/ 			printf(/* textboxtype: 1, unk: 0, line: 95 */ "<0x10009:0x0013100d>Oh, really? You think those red creeps\nmight have...gulp...you know?<pause 20>\n\n\n<0x10009:0x0011080e>What? You know she's still alive?\nThen everything's gonna be fine!\nStop with the sad face, will ya?\n\n<0x10009:0x00090800>You give up, she's done for. That's why\nya can't ever, ever crawl into your\ntunnel defeated. Ya hear me?")
          		}
          	}
          }

          void entrypoint_300_07() {
/*<324>*/ 	start()
/*<325>*/ 	make_actor_do_something(3, 0)
/*<326>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 327, 'param3': 17}
/*<327>*/ 	switch (zone_temp_flags[16 /* 0x3 01 */]) {
          	  case 0:
          		flw_329:
/*<329>*/ 		printf(/* textboxtype: 1, unk: 0, line: 111 */ "<0x10009:0x00110800>Hey! No running away! Take care of\nthese creeps, will ya?")
          		flw_334:
/*<334>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*<333>*/ 		switch (zone_temp_flags[18 /* 0x3 04 */]) {
          		  case 0:
          			goto flw_329
          		  case 1:
/*<328>*/ 			printf(/* textboxtype: 1, unk: 0, line: 110 */ "<0x10009:0x00110812>Hey, you! You've really got those guys'\nattention. And it looks like they're\nspoiling for a fight.\n\n<0x10009:0x00150d00>Take one for the rest of us and chase\n'em outta here, will you?")
/*<330>*/ 			zone_temp_flags[16 /* 0x3 01 */] = true;
          			goto flw_334
          		}
          	}
          }

          void entrypoint_300_08() {
/*< 20>*/ 	start()
/*< 56>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 57, 'param3': 32}
/*< 57>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': -1, 'next': 338, 'param3': 16}
/*<338>*/ 	make_actor_do_something(4, 16)
/*<155>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 59, 'param3': 17}
/*< 59>*/ 	set_camera(2, 0)
/*<339>*/ 	switch (scene_flags[27 /* 0x2 08 */]) {
          	  case 0:
/*<341>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4114, 'param2': 3590, 'next': 340, 'param3': 13}
/*<340>*/ 		printf(/* textboxtype: 1, unk: 0, line: 60 */ "Gyaah! Sneak attack! Hey, where'd all\nthe lava go? Now the road's open\nagain! You won't get away with this!")
          	  case 1:
/*<166>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4114, 'param2': 3590, 'next': 58, 'param3': 13}
/*< 58>*/ 		printf(/* textboxtype: 1, unk: 0, line: 56 */ "Gyaah! Sneak attack!\n\n\n\nWait... You ain't one of those red guys.\n<pause 15><0x10009:0x10090807>Don't creep up on me like that!\nAlmost had to tackle ya there.\n\n<0x10009:0x100aff00>Didn't mean to yell at ya, but those red\njerks moved in and have been stinking\nup our turf, ya know?")
/*< 61>*/ 		set_camera(3, 0)
/*< 60>*/ 		printf(/* textboxtype: 1, unk: 0, line: 57 */ "They came up through that hole back\nthere, so I sunk the road leading to it\nin lava. That'll stop more of 'em\nfrom moving in, I'd say.")
/*< 63>*/ 		set_camera(4, 0)
/*< 62>*/ 		printf(/* textboxtype: 1, unk: 0, line: 58 */ "Of course, we can tunnel underneath\nit, so it's no sweat for us.\n<0x10009:0x1011080b>Pretty clever, right?")
/*<167>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': -1, 'next': 65, 'param3': 13}
/*< 65>*/ 		set_camera(5, 0)
/*< 64>*/ 		printf(/* textboxtype: 1, unk: 0, line: 59 */ "So stay away from the plug that's\nholding back the lava. It'll do more\nthan singe your brows off. Bye now!")
          	}
          }

          void entrypoint_300_25() {
/*<228>*/ 	start()
/*<229>*/ 	printf(/* textboxtype: 1, unk: 0, line: 97 */ "<0x10009:0x00150d0c>Just curious, but...what do ya think\nthose red guys eat, anyway?")
          }

          void entrypoint_300_09() {
/*< 21>*/ 	start()
/*< 74>*/ 	switch (temp_flags[53 /* 0x7 20 */]) {
          	  case 0:
/*< 76>*/ 		printf(/* textboxtype: 1, unk: 0, line: 63 */ "Oh, hey! Sometimes these<color red< red, blobby\nthings >coloroff>will pop out too. Disgusting!\nBe careful not to let 'em grab you.")
          	  case 1:
/*<303>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2559, 'next': 350, 'param3': 13}
/*<350>*/ 		switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          		  case 0:
/*<351>*/ 			printf(/* textboxtype: 1, unk: 0, line: 62 */ "Whoa! You scared me silly! <pause 20><0x10009:0x00110d00>You can't\njust start digging right above my head,\nyou know?\n\n<0x10009:0x00150809>But I get where you're coming from.\nYou never know what you're going to\nfind when you dig. That's what makes\nit so impossible to stop!\n<color red<<0x10009:0x00ffffff>Rupees >coloroff>are the most common thing\nyou'll dig up, but you might get some\n<color red<Eldin Ore >coloroff>as well!\n\n<0x10009:0x00150d11>Used to be plenty of hearts buried down\nhere too, but weirdly enough I haven't\nseen any recently. Go figure.\n\n<0x10009:0x00ffffff>Anyhow, if you run across a hole and\nyou've got the time, dig, dig, dig!")
          			flw_75:
/*< 75>*/ 			temp_flags[53 /* 0x7 20 */] = true;
          		  case 1:
/*< 22>*/ 			printf(/* textboxtype: 1, unk: 0, line: 61 */ "Whoa! You scared me silly! <pause 20><0x10009:0x00110d00>You can't\njust start digging right above my head,\nyou know?\n\n<0x10009:0x00150809>But I get where you're coming from.\nYou never know what you're going to\nfind when you dig, so it's impossible to\nstop!\n<color red<<0x10009:0x00ffffff>Rupees >coloroff>are the most common treasure\nyou'll dig up, but sometimes you might\neven score <color red<Eldin Ore>coloroff> or some <color red<hearts>coloroff>!\n\nSo if you run across a hole and you've\ngot the time, dig, dig, dig!")
          			goto flw_75
          		}
          	}
          }

          void entrypoint_300_26() {
/*<230>*/ 	start()
/*<231>*/ 	switch (scene_flags[44 /* 0x4 10 */]) {
          	  case 0:
/*<234>*/ 		switch (scene_flags[74 /* 0x8 04 */]) {
          		  case 0:
/*<238>*/ 			switch (scene_flags[75 /* 0x8 08 */]) {
          			  case 0:
          				flw_236:
/*<236>*/ 				printf(/* textboxtype: 1, unk: 0, line: 100 */ "<0x10009:0x000908ff>You can find caves aboveground\nand belowground. I bet you can sniff\nout thin walls wherever you go!")
          			  case 1:
/*<235>*/ 				printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x00150d10>Huh? It was right there all along?\nNice work, greenie.")
/*<237>*/ 				scene_flags[4 'Eldin Volcano'][75 /* 0x8 08 */] = true;
          				goto flw_236
          			}
          		  case 1:
/*<243>*/ 			switch (scene_flags[76 /* 0x8 10 */]) {
          			  case 0:
/*<242>*/ 				printf(/* textboxtype: 1, unk: 0, line: 102 */ "Around here, you can find little\npockets or caves hidden behind thin,\ncracked walls. Who knows what\nyou might find in those places...")
          			  case 1:
/*<244>*/ 				printf(/* textboxtype: 1, unk: 0, line: 103 */ "<0x10009:0x00000001>You're looking pretty chipper, pal.\nYou come back to do some treasure\nhunting?\n\n<0x10009:0x00110800>You may already know this, but <color blue<Eldin\nVolcano >coloroff>is riddled with hidden\ncaves.\n\n<0x10009:0x00110800>You can find 'em by checking around\nfor thin, cracked walls.\n\n\nYou can find all kinds of things in these\ncaves. It's mostly <color yellow<Rupees>coloroff>, sure, but ya\nnever know. <0x10009:0x001108ff>If you get the itch for loot,\nyou should try some cave hunting.")
/*<241>*/ 				scene_flags[4 'Eldin Volcano'][76 /* 0x8 10 */] = true;
/*<272>*/ 				scene_flags[4 'Eldin Volcano'][79 /* 0x8 80 */] = true;
          			}
          		}
          	  case 1:
/*<240>*/ 		switch (scene_flags[74 /* 0x8 04 */]) {
          		  case 0:
/*<239>*/ 			printf(/* textboxtype: 1, unk: 0, line: 101 */ "<0x10009:0x0015080c>I got a hunch there's one around here\nsomewhere...")
          		  case 1:
/*<232>*/ 			printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x00000001>You're looking pretty chipper, pal.\n\n\n\n<0x10009:0x001108ff>You come back here to do some\ntreasure hunting this time? In that\ncase, I'll let you in on a little secret.\n\n<0x10009:0x0009080b><color blue<Eldin Volcano >coloroff>is riddled with hidden\ncaves. You can find 'em by checking\naround for thin walls with cracks.\n\nYou can find all kinds of things in these\ncaves. It's mostly <color yellow<Rupees>coloroff>, but ya never\nknow. <0x10009:0x0015080c>I got a hunch there's one right\naround here somewhere...")
/*<233>*/ 			scene_flags[4 'Eldin Volcano'][74 /* 0x8 04 */] = true;
/*<273>*/ 			scene_flags[4 'Eldin Volcano'][79 /* 0x8 80 */] = true;
          		}
          	}
          }

          void entrypoint_300_27() {
/*<245>*/ 	start()
/*<249>*/ 	switch (scene_flags[77 /* 0x8 20 */]) {
          	  case 0:
/*<248>*/ 		printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x0015080b>Long-lost ruins in the heart of a\nvolcano... Heh... Now that's a tale to\nget any <color blue<treasure hunter>coloroff>'s heart\npumping!")
          	  case 1:
/*<246>*/ 		printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x00110801>Hey, you! I hope you're taking good\ncare of my <color yellow<Bomb Bag>coloroff>.\n\n\n<0x10009:0x000909ff>By the way, you ever been to the\nheart of <color blue<Eldin Volcano>coloroff>?\n\n\n<0x10009:0x00150816>It's so hot down there it'll burn the\nclothes right off your back. POOF!\nYour average traveler will be dead in\nminutes.\n<0x10009:0x000909ff>But if you survive... Well, rumor has it\nthere are amazing ruins overflowing\nwith piles and mountains of treasure.\n\n<0x10009:0x0011080b>Course, it's nothing for my people\nto just tunnel right in there, ya know?\nYeah... I may have to make the effort\nsometime in the near future.")
/*<247>*/ 		scene_flags[4 'Eldin Volcano'][77 /* 0x8 20 */] = true;
          	}
          }

          void entrypoint_300_10() {
/*< 23>*/ 	start()
/*<278>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1000, 'next': 81, 'param3': 24}
/*< 81>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 147, 'param3': 32}
/*<147>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 17, 'next': 277, 'param3': 32}
/*<277>*/ 	make_actor_do_something(1, 16)
/*< 82>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 250, 'param3': 16}
/*<250>*/ 	set_camera(20, 0)
/*<258>*/ 	wait_frames(45)
/*<298>*/ 	make_actor_do_something(2, 16)
/*<168>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 3340, 'next': 24, 'param3': 13}
/*< 24>*/ 	printf(/* textboxtype: 1, unk: 0, line: 35 */ "Hmm... I'm sure they buried it around\nhere someplace, but I can't find it.")
/*< 83>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 25, 'param3': 16}
/*< 25>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "Yo, <color blue<Ledd>coloroff>! This is the place, ain't it?\nSo what is it they buried again?")
/*< 84>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 170, 'param3': 16}
/*<170>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': -245, 'next': 26, 'param3': 13}
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0, line: 37 */ "A <color red<key>coloroff>! <color red<K-E-Y>coloroff>, <color red<KEY>coloroff>!")
/*<148>*/ 	set_camera(24, 0)
/*<259>*/ 	wait_frames(15)
/*<149>*/ 	printf(/* textboxtype: 1, unk: 0, line: 38 */ "They busted up the <color red<key to that door >coloroff>and\nhid the pieces all over the place.\n\n\nI'm telling you, one of the <color red<five pieces >coloroff>is\nburied right around here.")
/*<260>*/ 	wait_frames(30)
/*<251>*/ 	set_camera(21, 0)
/*< 85>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 169, 'param3': 16}
/*<169>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4373, 'param2': 3330, 'next': 27, 'param3': 13}
/*< 27>*/ 	printf(/* textboxtype: 1, unk: 0, line: 39 */ "Hey, that reminds me... That<color red< strange\nblonde girl in the weird clothes >coloroff><sound 4>got\ntaken away too.")
/*<252>*/ 	set_camera(22, 0)
/*< 86>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 28, 'param3': 16}
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x10110d0b>That's right! I bet they got something\nreally valuable stashed in there.\n\n\n<0x10009:0x10090800>And that blonde girl they took is\nprobably part of their master plan too.\nI'm telling you, I can smell the riches\nfrom here!")
/*<253>*/ 	set_camera(23, 0)
/*< 87>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 171, 'param3': 16}
/*<171>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4607, 'param2': -254, 'next': 29, 'param3': 13}
/*< 29>*/ 	printf(/* textboxtype: 1, unk: 0, line: 41 */ "So what're you saying we do once we\nfind all the pieces to the key?")
/*< 88>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 30, 'param3': 16}
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x10110d09>Whaddya think, igneous? We sneak\ninside and take all the treasure we\ncan carry!")
/*<151>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4097, 'param2': -1, 'next': 89, 'param3': 13}
/*< 89>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 172, 'param3': 16}
/*<172>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4371, 'param2': 4103, 'next': 31, 'param3': 13}
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0, line: 43 */ "Hey...<pause 15> Why are we so worried about a\nkey when we can just dig our way in?")
/*<262>*/ 	wait_frames(15)
/*<254>*/ 	set_camera(22, 0)
/*< 90>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 173, 'param3': 16}
/*<173>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4097, 'param2': 511, 'next': 174, 'param3': 13}
/*<174>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4353, 'param2': 511, 'next': 32, 'param3': 13}
/*< 32>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ "What? Um...<pause 30>")
/*<255>*/ 	set_camera(21, 0)
/*< 33>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "Just sayin'.<pause 30>")
/*<256>*/ 	set_camera(23, 0)
/*< 91>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 175, 'param3': 16}
/*<175>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': -1, 'next': 261, 'param3': 13}
/*<261>*/ 	wait_frames(30)
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 0, line: 46 */ "You ain't as dumb as you look!")
/*<257>*/ 	wait_frames(45)
/*<145>*/ 	scene_flags[4 'Eldin Volcano'][72 /* 0x8 01 */] = true;
/*<146>*/ 	wait_frames(45)
/*<345>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_300_28() {
/*<265>*/ 	start()
/*<282>*/ 	temp_flags[30 /* 0x2 40 */] = true;
/*<264>*/ 	printf(/* textboxtype: 2, unk: 0, line: 1 */ "<0x10005:0x004b0000><0x10012:0x0000000b>Master, this is <color blue<Eldin Volcano>coloroff>. It is an\nactive volcano rich with the power\nof the earth.")
          }

          void entrypoint_300_11() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 2, unk: 1, line: 5 */ "<0x10012:0x0000000b>Master <heroname>, I require\nyour confirmation on critical\ninformation obtained from that\n<color blue<Mogma >coloroff>conversation.\nThe<color red< oddly garbed figure >coloroff>taken deeper\ninto the region must be...\n[1-]Zelda! [2-]Woman in black?")
/*< 37>*/ 	switch (choice(2)) {
          	  case 0:
/*< 38>*/ 		printf(/* textboxtype: 2, unk: 0, line: 6 */ "<0x10012:0x00000005>My calculations agree, Master. \nThere is a 90% probability the figure in\nquestion was indeed Zelda.")
          		flw_92:
/*< 92>*/ 		set_camera(7, 0)
/*< 66>*/ 		printf(/* textboxtype: 2, unk: 0, line: 8 */ "Additionally, I calculate there is a 95%\nprobability that the key to this door is\nmade of the same material composition\nas this mechanism that bars it. ")
/*< 93>*/ 		set_camera(-1, 0)
/*< 94>*/ 		printf(/* textboxtype: 2, unk: 1, line: 9 */ "I have detected objects of the same\nmaterial in the surrounding area.\n\n\nAscertaining the location of these\nobjects will aid in our search for\n<color red<Zelda>coloroff>. I have registered them as\n<color red<dowsing >coloroff>targets.<sound 4>")
/*<310>*/ 		story_flags[106 /* us: 805A9ADE 0x80, jp: 805ACD5E 0x80 */] = true;
/*<347>*/ 		open_dowsing_wheel(2)
/*<344>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          	  case 1:
/*< 39>*/ 		printf(/* textboxtype: 2, unk: 0, line: 7 */ "The woman in black? The probability\nof your assessment being correct\nis...<0x10008:0x01cd>10%. <0x10008:0x00cd>Rounded up.\n\nI conclude the subject was likely\n<color red<Zelda>coloroff>.")
          		goto flw_92
          	}
          }

          void entrypoint_300_29() {
/*<267>*/ 	start()
/*<266>*/ 	printf(/* textboxtype: 2, unk: 0, line: 2 */ "<0x10005:0x005a0000>Approximately 65% of the region is\ncovered by lava. It is inhabited by a\nlarge number of creatures that thrive\nin the extreme heat and direct flame.")
          }

          void entrypoint_300_12() {
/*< 40>*/ 	start()
/*< 46>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 47>*/ 		printf(/* textboxtype: 1, unk: 0, line: 70 */ "You listening? You've gotta remember\nthis. There are <color red<no bad holes >coloroff>around a\n<color green rupee<green Rupee>coloroff>.\n\nA <color blue rupee<blue Rupee >coloroff>will have <color red<one or two bad\nholes >coloroff>around it, and a<color red rupee< red Rupee >coloroff>will\nhave <color red<three or four>coloroff>.\n\nA <color silver<silver Rupee>coloroff> will be surrounded by\n<color red<five or six bad holes>coloroff> and a <color gold<gold Rupee\n>coloroff>by <color red<seven or eight>coloroff>. Those are the rules!\n\nThe only thing standing between you\nand being filthy rich is luck. <0x10009:0x00150509>Here's\nhoping you're luckier than you look.\nHeh heh.")
          	  case 1:
/*< 42>*/ 		switch (scene_flags[54 /* 0x7 40 */]) {
          		  case 0:
/*<176>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 2059, 'next': 53, 'param3': 13}
/*< 53>*/ 			printf(/* textboxtype: 1, unk: 1, line: 72 */ "What? You looking to buy what I'm\nselling?")
/*<308>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 309, 'param3': 12}
/*<309>*/ 			printf(/* textboxtype: 1, unk: 1, line: 73 */ "<0x10009:0x00ffff00>Secret information on <color red<Thrill Digger\n>coloroff>can be yours for only <color red<20 Rupees>coloroff>.\n[1-]Tell me![2]Nah...")
          			flw_44:
/*< 44>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				switch (has_rupees(20)) {
          				  case 0:
/*< 51>*/ 					rupees += -20;
/*<179>*/ 					{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2057, 'next': 45, 'param3': 13}
/*< 45>*/ 					printf(/* textboxtype: 1, unk: 0, line: 66 */ "Heh, heh... That's the spirit! Now\nyou've got to promise me this stays\nbetween the two of us. You gotta keep\nyour trap shut. Got it?")
/*<305>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 306, 'param3': 12}
/*<306>*/ 					printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x0011ff00>The color of the Rupee you dig up will\ntell you how many bad holes are\naround you.\n\n<0x10009:0x00ffff0b>Like if you dig up a<color green rupee< green Rupee>coloroff>, there\nare <color red<no bad holes >coloroff>around it!\n\n\nA <color blue rupee<blue Rupee >coloroff>will have <color red<one or two bad\nholes>coloroff>. A<color red rupee< red Rupee >coloroff>will have<color red< three or\nfour>coloroff>, and a <color silver<silver Rupee>coloroff> has got <color red<five or\nsix>coloroff>.\nIf you're lucky enough to dig up a rare\n<color gold<gold Rupee>coloroff>, there will be <color red<seven or eight\nbad holes >coloroff>nearby. There are almost no\ngood holes!")
/*<178>*/ 					{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': -245, 'next': 54, 'param3': 13}
/*< 54>*/ 					printf(/* textboxtype: 1, unk: 0, line: 68 */ "What do you think? Makes planning\nwhere to dig a bit easier, don't it?\n\n\n<0x10009:0x00ffff09>But at the end of the day, it comes down\nto luck. YOUR luck. So just do the\nbest you can, and cross your fingers\nor something.")
/*< 48>*/ 					scene_flags[4 'Eldin Volcano'][55 /* 0x7 80 */] = true;
          				  case 1:
/*< 52>*/ 					printf(/* textboxtype: 1, unk: 0, line: 71 */ "C'mon, pal! You ain't got enough\nRupees.\n\n\n<0x10009:0x00141209>Unless you bring me exactly\n<color red<20 Rupees>coloroff>, I'm not telling you a thing.")
          				}
          			  case 1:
/*<177>*/ 				{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 49, 'param3': 13}
/*< 49>*/ 				printf(/* textboxtype: 1, unk: 0, line: 69 */ "Why you gotta be such a Rupee\npincher? Fortune's knocking at your\ndoor, pal.\n\n<0x10009:0x00ffff00>All right, it's your call. You change\nyour mind, come see me. The info\nwill cost you <color red<20 Rupees>coloroff>.")
          			}
          		  case 1:
/*< 43>*/ 			scene_flags[4 'Eldin Volcano'][54 /* 0x7 40 */] = true;
/*< 41>*/ 			printf(/* textboxtype: 1, unk: 1, line: 64 */ "Hey, you! You're gonna try your mitts\nat <color blue<Tubert's >coloroff><color red<Thrill Digger >coloroff>game, right?\n\n\n<0x10009:0x0015080b>Pssst. You want some <color red<top-secret info>coloroff>?\nIt's guaranteed to make you rich!\n<0x10009:0x00ffff00>R-<pause 10>I-<pause 10>C-<pause 10>H<pause 10>.\n\nNow since you'll be lining your pockets\nwith Rupees, it's only fair I get a little\npiece of the pie. And I want my pie\nnow, thank you.")
/*<304>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 307, 'param3': 12}
/*<307>*/ 			printf(/* textboxtype: 1, unk: 1, line: 65 */ "<0x10009:0x001108ff>I've got a super-discount price just\nfor you, buddy. How does <color red<20 Rupees\n>coloroff>sound?\n[1-]Deal![2]No, thanks.")
          			goto flw_44
          		}
          	}
          }

          void entrypoint_300_13() {
/*< 67>*/ 	start()
/*<297>*/ 	zone_temp_flags[1 /* 0x1 02 */] = true;
/*<205>*/ 	check_item_flag(505, 5)
/*<204>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 36}) {
          	  case 0:
          		flw_207:
/*<207>*/ 		printf(/* textboxtype: 2, unk: 0, line: 14 */ "Master, I am detecting <color red<extremely high\ntemperatures>coloroff> from the area directly\nahead.\n\nYou will not survive this environment\nwith your current <0x10012:0x00000002>heart total.\nI recommend you turn back.")
          		flw_296:
/*<296>*/ 		zone_temp_flags[1 /* 0x1 02 */] = false;
          	  case 1:
/*<206>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
          			goto flw_207
          		  case 1:
/*<203>*/ 			printf(/* textboxtype: 2, unk: 0, line: 13 */ "<0x10012:0x0000000b>Master, I am detecting<color red< extremely high\ntemperatures>coloroff> from the area ahead.\nYou will not survive this environment\nwith your <0x10012:0x00000002>heart total.\nAdditionally, <color red<dowsing >coloroff>results do not\nsupport this path. Please reconfirm\nthe correct direction to proceed.")
/*<208>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_296
          		}
          	}
          }

          void entrypoint_300_30() {
/*<269>*/ 	start()
/*<268>*/ 	printf(/* textboxtype: 2, unk: 0, line: 3 */ "<0x10005:0x005a0000>Please exercise caution with flammable\nmaterials such as <color red<wood >coloroff>and <color red<fabric>coloroff>.")
          }

          void entrypoint_300_14() {
/*< 69>*/ 	start()
/*< 72>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*< 71>*/ 		printf(/* textboxtype: 1, unk: 0, line: 78 */ "I'm pretty sure the getup was blackish.\nBesides that, I don't remember much.")
          	  case 1:
/*<153>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 2065, 'next': 70, 'param3': 13}
/*< 70>*/ 		printf(/* textboxtype: 1, unk: 0, line: 74 */ "Huh? Another stranger? And you're\nnot one of those red creeps, either.\nI swear this neighborhood's getting\ncrummier every day...")
/*< 77>*/ 		set_camera(6, 0)
/*< 78>*/ 		printf(/* textboxtype: 1, unk: 0, line: 75 */ "Huh? Oh, nothing, just talking to\nmyself. Hey, I saw this <color red<funny-dressed\ncharacter >coloroff>go into that hole over there.")
/*< 79>*/ 		set_camera(-1, 0)
/*<154>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3342, 'next': 80, 'param3': 13}
/*< 80>*/ 		printf(/* textboxtype: 1, unk: 2, line: 76 */ "It might be the friend you're looking\nfor? You want to know what this\nkook was wearing?")
/*<349>*/ 		printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x0014120c>Let's see...<pause 30> Yeah, I'm pretty sure the\ngetup was <color red<blackish>coloroff>. Other than that, I\ndon't remember much.")
/*< 73>*/ 		scene_flags[4 'Eldin Volcano'][22 /* 0x3 40 */] = true;
          	}
          }

          void entrypoint_300_31() {
/*<271>*/ 	start()
/*<270>*/ 	printf(/* textboxtype: 2, unk: 0, line: 4 */ "<0x10005:0x004b0000>In the event you catch on fire, I highly\nrecommend you extinguish the flames\nby performing a<color green< forward roll>coloroff> or a <color green<spin\nattack>coloroff>.")
          }

          void entrypoint_300_15() {
/*< 95>*/ 	start()
/*< 18>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0, line: 54 */ "The one that went running through\nhere looked kinda like you.\n\n\nI don't think he was dressed in green,\nthough.")
          	  case 1:
/*< 97>*/ 		printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00110d11>Huh? You're looking for a friend?\nNOT treasure?\n\n\n<0x10009:0x00ffff0e>So that must have been your pal that\npassed by earlier, <color red<sprinting by >coloroff>without\nso much as a glance in this direction.<sound 4>\n\nIt was sorta a blur of movement, so I\ndidn't get a real good look, but I knew\nit wasn't one of those red creeps.\n\nYour pal must have gone straight up\nhere, so why don't you follow?")
/*< 17>*/ 		scene_flags[4 'Eldin Volcano'][36 /* 0x5 10 */] = true;
          	}
          }

          void entrypoint_300_32() {
/*<274>*/ 	start()
/*<275>*/ 	printf(/* textboxtype: 2, unk: 0, line: 15 */ "<0x10012:0x0000000b>Master, the abilities of your sword have\nincreased. It is now possible to <color red<dowse\n>coloroff>for <color yellow<Rupees>coloroff>.\n\nI have registered <color yellow<Rupees >coloroff>as a viable\n<color red<dowsing>coloroff> target. <sound 4>Use this exciting new\nfeature as you deem necessary.")
/*<276>*/ 	story_flags[105 /* us: 805A9ADE 0x40, jp: 805ACD5E 0x40 */] = true;
/*<348>*/ 	open_dowsing_wheel(20)
          }

          void entrypoint_300_16() {
/*< 96>*/ 	start()
/*< 98>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*<102>*/ 		switch (scene_flags[61 /* 0x6 20 */]) {
          		  case 0:
/*< 19>*/ 			printf(/* textboxtype: 1, unk: 0, line: 55 */ "There are loads of these red, blue, and\ngreen stones called <color yellow<Rupees >coloroff>around\nhere. Sometimes you can even find\n<color red<silver >coloroff>and<color red< gold >coloroff>ones too.\nAnd while they ain't technically\ntreasure, you can also find these tough\n<color red<crystals>coloroff>. I bet you could <color red<use them to\nmake stuff>coloroff>.")
          		  case 1:
/*<101>*/ 			printf(/* textboxtype: 1, unk: 0, line: 53 */ "Us <color blue<Mogmas >coloroff>have claimed this territory\nto search around for riches. We're\nwhat you'd call <color blue<treasure hunters>coloroff>.\n\nThere are loads of these red, blue, and\ngreen stones called <color yellow<Rupees >coloroff>around\nhere. Sometimes you can even find\n<color red<silver >coloroff>and<color red< gold >coloroff>ones too.\nAnd while they ain't technically\ntreasure, you can also find these tough\n<color red<mineral chunks>coloroff>. I bet you could <color red<use 'em\nto make stuff>coloroff>.\nSince you're here and all, you might as\nwell look around, right?")
/*<103>*/ 			scene_flags[4 'Eldin Volcano'][61 /* 0x6 20 */] = true;
          		}
          	  case 1:
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00110d11>Huh? You're looking for a friend?\nNOT treasure?\n\n\n<0x10009:0x00ffff0e>So that must have been your pal that\npassed by earlier, <color red<sprinting by >coloroff>without\nso much as a glance in this direction.<sound 4>\n\nIt was sorta a blur of movement, so I\ndidn't get a real good look, but I knew\nit wasn't one of those red creeps.\n\nYour pal must have gone straight up\nhere, so why don't you follow?")
/*<100>*/ 		scene_flags[4 'Eldin Volcano'][36 /* 0x5 10 */] = true;
          	}
          }

          void entrypoint_300_33() {
/*<286>*/ 	start()
/*<291>*/ 	switch (story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */]) {
          	  case 0:
/*<290>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*<289>*/ 			printf(/* textboxtype: 1, unk: 0, line: 107 */ "Wonder where the next treasure might\nbe... Gotta remember not to forget\nabout the whole digging thing.")
          		  case 1:
/*<287>*/ 			printf(/* textboxtype: 1, unk: 0, line: 106 */ "Hey, you! Did ya make it to the ruins?\n\n\n\n<0x10009:0x0013100d>I decided it wasn't worth the trouble.\nBoy, was my partner steamed!\n\n\n<0x10009:0x000908ff>He kept shouting, “All you had to do\nwas dig your way in! How hard could it\nbe?\" <pause 15>He's right too. Digging would\nhave made it easy. Heh heh...")
/*<288>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          		}
          	  case 1:
/*<295>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*<294>*/ 			printf(/* textboxtype: 1, unk: 0, line: 109 */ "Wonder where my search for riches\nwill lead me next... A <color blue<treasure hunter's\njourney never ends>coloroff>. Heh heh...")
          		  case 1:
/*<292>*/ 			printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x00110801>Hey, you. Hope you're taking good care\nof my <color yellow<Bomb Bag>coloroff>.\n\n\n<0x10009:0x000908ff>I was nice enough to give it to you, so\nbe sure you put it to good use.\nOh, and don't burn a hole in it!")
/*<293>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          		}
          	}
          }

          void entrypoint_300_17() {
/*<121>*/ 	start()
/*<180>*/ 	{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 3589, 'next': 123, 'param3': 13}
/*<123>*/ 	printf(/* textboxtype: 1, unk: 0, line: 16 */ "Whoa! Now there's a green one!")
/*<182>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -256, 'next': 181, 'param3': 13}
/*<181>*/ 	printf(/* textboxtype: 1, unk: 0, line: 17 */ "One of your people just came charging\nthrough here. <color red<Dressed all in black>coloroff>!\nThat a friend of yours?<sound 4>")
/*<125>*/ 	set_camera(13, 0)
/*<152>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 126, 'param3': 13}
/*<126>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "See that up ahead? That's what we call\na drop-dead dead end, but this\ncharacter danced right over it.")
/*<127>*/ 	set_camera(-1, 0)
/*<128>*/ 	printf(/* textboxtype: 1, unk: 0, line: 19 */ "Seriously? Jumping over a gap like\nthat? <pause 15>My jaw hit the dirt.")
          }

          void entrypoint_300_18() {
/*<122>*/ 	start()
/*<124>*/ 	printf(/* textboxtype: 1, unk: 0, line: 20 */ "The mountains ahead are crawling with\nthose red troublemakers, but...\n\n\nI got a feeling that shady so-and-so is\ngonna zip right on by 'em.\n\n\nCan you imagine treasure hunting with\nsomeone who could do that? <0x10009:0x001502ff>You got\nyourself some good friends, don'tcha?")
          }

          void entrypoint_300_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "<0x10012:0x0000000b>Master, I require your confirmation.\nYou are currently attempting to\nascertain the location of <color red<Zelda>coloroff>.\n\nAre you familiar with how to use\n<color red<dowsing >coloroff>to search for Zelda?\n[1-]Of course! [2-]I forgot...")
/*<279>*/ 	switch (choice(2)) {
          	  case 0:
/*<280>*/ 		printf(/* textboxtype: 2, unk: 0, line: 10 */ "<0x10012:0x00000005>Of course you do. My apologies. Please\ncontinue your search for Zelda.")
          		flw_311:
/*<311>*/ 		scene_flags[4 'Eldin Volcano'][121 /* 0xE 02 */] = true;
          	  case 1:
/*<281>*/ 		printf(/* textboxtype: 2, unk: 0, line: 11 */ "<0x10012:0x00000005>Understood, Master. To begin <color red<dowsing>coloroff>,\npress and hold (C).<0x10011:0x06cd>\n\n\nUse the Wii Remote to select a dowsing\ntarget. You will be able to sense the\ntarget through the tip of your sword.\n\nThe closer you get to the target, the\n<color red<stronger the sword's reaction will\nbecome>coloroff>. You will be alerted with a\nvibration and audible cue.\nYou may also use the <color red<cursor >coloroff>to gauge\nan accurate direction of the target's\nlocation.\n\nPlease select Zelda as your dowsing\ntarget and commence your search.")
/*<343>*/ 		story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<342>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          		goto flw_311
          	}
          }

          void entrypoint_300_19() {
/*<129>*/ 	start()
/*<130>*/ 	printf(/* textboxtype: 1, unk: 0, line: 115 */ "Zelda is ahead... <pause 20>Hurry.")
/*<131>*/ 	story_flags[184 /* us: 805A9AE6 0x80, jp: 805ACD66 0x80 */] = true;
          }

          void entrypoint_300_02() {
/*<  2>*/ 	start()
/*<107>*/ 	set_camera(10, 0)
/*<156>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 108, 'param3': 13}
/*<108>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "Grrr... Those creeps just shimmied on\nin and took over our territory.")
/*<319>*/ 	make_actor_do_something(3, 0)
/*<106>*/ 	set_camera(-1, 0)
/*<115>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 157, 'param3': 17}
/*<157>*/ 	{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 3590, 'next': 3, 'param3': 13}
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "Yeow! What're you doing? Don't be\nsneakin' up on me like that!\n\n\nHuh? You're looking for your friend?<0x10009:0x001412ff>\nCan't help you there. <0x10009:0x00ffffff>Nobody's come\nthrough here, so...<0x1000A:0x000900cd>\n\nMaybe they went up the mountain\nfrom over thataway.")
/*<105>*/ 	set_camera(-1, 0)
/*<158>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 55, 'param3': 13}
/*< 55>*/ 	printf(/* textboxtype: 1, unk: 0, line: 23 */ "Ahh... <pause 20>Wish someone would chase these\nclowns outta here.")
/*<104>*/ 	scene_flags[4 'Eldin Volcano'][58 /* 0x6 04 */] = true;
          }

          void entrypoint_300_03() {
/*<  4>*/ 	start()
/*<336>*/ 	switch (zone_temp_flags[19 /* 0x3 08 */]) {
          	  case 0:
/*<337>*/ 		set_camera(26, 0)
          		flw_314:
/*<314>*/ 		{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 346, 'param3': 40}
/*<346>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 256, 'next': 313, 'param3': 13}
/*<313>*/ 		{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 320, 'param3': 14}
/*<320>*/ 		make_actor_do_something(3, 0)
/*<263>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 150, 'param3': 17}
/*<150>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 2056, 'next': 5, 'param3': 13}
/*<  5>*/ 		printf(/* textboxtype: 1, unk: 0, line: 28 */ "You're one tough customer! Thanks for\nall your help!\n\n\n<0x10009:0x00ffff0b>I don't blame you for not knowing\nthis, but us <color blue<Mogmas >coloroff>always honor our\ndebts. Let me give you something to\nprove it. Any special requests?\n[1-]A way forward.[2-]Rupees!")
/*<132>*/ 		switch (choice(2)) {
          		  case 0:
/*<133>*/ 			printf(/* textboxtype: 1, unk: 0, line: 29 */ "Oh, right. You're trying to find your\nfriend, aren'tcha?\n\n\n<0x10009:0x00090809>In that case, take these things!\nThey're something pretty special, if I\nsay so myself.")
/*<316>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 6, 'param3': 42}
/*<  6>*/ 			give_item(56 0x38);
/*<  7>*/ 			printf(/* textboxtype: 1, unk: 0, line: 31 */ "With these, you should be able to get to\nthe top of that ledge right behind me.<0x1000A:0x000b00cd>\nJust try digging in that hole below the\nledge. You're in for a surprise!")
/*<109>*/ 			set_camera(-1, 0)
          			flw_137:
/*<137>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "I just hope your friend hasn't been\ncaptured by those red guys. Here's\nhoping everything's OK.")
/*<318>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<159>*/ 			{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 3599, 'next': 134, 'param3': 13}
/*<134>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "Huh? Rupees? Is that really what\nyou're after?\n\n\n<0x10009:0x00151204><0x10008:0xffcd>I mean, it's his reward and all, but...really?\nJust Rupees? Seems like a waste of a reward\nopportunity to me. And I don't even have any.\n<pause 20>Oh wait, I know. I got something good instead.\n<0x10009:0x001412ff>So, hey...uh...<pause 15>I don't exactly have any\nRupees on me...\n\n\n<0x10009:0x00110809>But I got something better! Didn't you\nsay you were looking for a friend?\nWell, I got something that can help you\nreach this friend... Take these instead!")
/*<317>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 135, 'param3': 42}
/*<135>*/ 			give_item(56 0x38);
/*<136>*/ 			printf(/* textboxtype: 1, unk: 0, line: 31 */ "With these, you should be able to get to\nthe top of that ledge right behind me.<0x1000A:0x000b00cd>\nJust try digging in that hole below the\nledge. You're in for a surprise!")
/*<138>*/ 			set_camera(-1, 0)
/*<160>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2048, 'next': 139, 'param3': 13}
/*<139>*/ 			printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10008:0xffcd>It's not like I'm using these things, you know?\nAnd they're WAY better than Rupees!")
/*<161>*/ 			{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 137, 'param3': 13}
          			goto flw_137
          		}
          	  case 1:
/*<315>*/ 		set_camera(25, 0)
          		goto flw_314
          	}
          }

          void entrypoint_300_20() {
/*<140>*/ 	start()
/*<144>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 322, 'param3': 32}
/*<322>*/ 	make_actor_do_something(3, 16)
/*<352>*/ 	make_actor_do_something(4, 16)
/*<143>*/ 	{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 272, 'next': 142, 'param3': 15}
/*<142>*/ 	set_camera(14, 0)
/*<183>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 1799, 'next': 141, 'param3': 13}
/*<141>*/ 	printf(/* textboxtype: 1, unk: 1, line: 27 */ "Whoa... <pause 15>You took out every last one\nof 'em...<pause 15>")
/*<335>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          }

          void entrypoint_300_04() {
/*<  8>*/ 	start()
/*<321>*/ 	make_actor_do_something(3, 0)
/*<323>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 14, 'param3': 17}
/*< 14>*/ 	switch (scene_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*<  9>*/ 		printf(/* textboxtype: 1, unk: 0, line: 34 */ "Hey, I'm hoping you find your friend\nall in one piece!")
          	  case 1:
/*<110>*/ 		switch (zone_temp_flags[17 /* 0x3 02 */]) {
          		  case 0:
/*<111>*/ 			switch (zone_temp_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*<113>*/ 				printf(/* textboxtype: 1, unk: 0, line: 26 */ "When that creep in the <color red<blue hat >coloroff>blows\nhis horn, it starts a bad-guy stampede.\nWhat're you gonna do about it?")
          			  case 1:
/*<331>*/ 				switch (zone_temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<332>*/ 					printf(/* textboxtype: 1, unk: 0, line: 112 */ "<0x10009:0x00110809>You got those creeps all worked up, so\nnow you've got to take care of 'em!\n\n\n<0x10009:0x00ffffff>But they keep using that <color red<horn to call\nin reinforcements>coloroff>. They just keep\ncoming and coming!\n\nI bet the horn blower in the<color red< blue hat>coloroff><sound 4>\nis the leader.")
          					flw_114:
/*<114>*/ 					zone_temp_flags[18 /* 0x3 04 */] = true;
          				  case 1:
/*<112>*/ 					printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x0011080e>What's that? You really sent those\ncreeps packing?\n\n\n<0x10009:0x00151200>Well, seems like they're extra mad at\nyou, so... Guess it's only natural that\nyou had to handle things.\n\n<0x10009:0x00ffff00>But did you notice when you start\nwhittling 'em down, they call in\nreinforcements with that <color red<horn>coloroff>?\nThat ain't a fair fight, if you ask me.\nI bet the horn blower in the <color red<blue cap>coloroff><sound 4>\nis the leader.")
          					goto flw_114
          				}
          			}
          		  case 1:
/*< 15>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "Now there's an idea! Why don'tcha\nmake yourself useful and get rid of\n'em? <0x10009:0x00141209>Yeah, like that's gonna happen...")
          		}
          	}
          }

          void entrypoint_300_21() {
/*<184>*/ 	start()
/*<193>*/ 	switch (scene_flags[65 /* 0x9 02 */]) {
          	  case 0:
/*<194>*/ 		switch (scene_flags[97 /* 0xD 02 */]) {
          		  case 0:
/*<196>*/ 			printf(/* textboxtype: 1, unk: 0, line: 88 */ "I'm stating the obvious here, but you\ncan <color green<pick up and put down >coloroff><color yellow<bomb flowers\n>coloroff>with (A), the same way you do with jars.\n\nWhen you're holding something,\n<color green<point up and swing >coloroff>the Wii Remote\ndown to throw it.\n\nTo roll it, <color green<point down and swing >coloroff>the\nWii Remote up.\n\n\nGo on and practice a bit with those\n<color yellow<bomb flowers >coloroff>over there.")
          		  case 1:
/*<195>*/ 			printf(/* textboxtype: 1, unk: 0, line: 89 */ "<0x10009:0x00150d11>You, uh...know you don't have\na <color yellow<Bomb Bag>coloroff>, don'tcha?\n\n\n<0x10009:0x00110dff>Without a <color yellow<Bomb Bag>coloroff>, you can't safely\ncarry <color yellow<bomb flowers >coloroff>with you when\nyou're out and about. You won't find a\n<color blue<Mogma >coloroff>without one.\n<0x10009:0x00ffffff>What?<pause 20> Why are you staring at me\nlike that?\n\n\n<0x10009:0x00141209>No! No way, no how. You are not\ngetting my bag. You'll have to be\nsatisfied with blowing up stuff\nright around here.")
/*<197>*/ 			scene_flags[4 'Eldin Volcano'][97 /* 0xD 02 */] = true;
          		}
          	  case 1:
/*<185>*/ 		printf(/* textboxtype: 1, unk: 1, line: 79 */ "<0x10009:0x00150d11>Huh? Who're you supposed to be?\nNever seen you around here before...\n\n\nWhoa, hold it right there! <0x10009:0x00110d12>Are you a\nfriend of those red creeps?\n[1-]No way! [2-]Red creeps?")
/*<186>*/ 		switch (choice(2)) {
          		  case 0:
/*<187>*/ 			printf(/* textboxtype: 1, unk: 1, line: 80 */ "<0x10009:0x00ffff07>You're not, huh? <pause 15>Well, you don't look\nlike 'em, that's for sure. You're not\nTHAT ugly.\n\n<0x10009:0x0015ff00>So what then? You here to pick\n<color yellow<bomb flowers>coloroff> ?\n[1-]Bomb what?[2-]Yep.")
          			flw_189:
/*<189>*/ 			switch (choice(2)) {
          			  case 0:
/*<190>*/ 				printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x00ffff00><color yellow<Bomb flowers>coloroff>. You're joking, right?\n<0x1000A:0x001100cd>Those are them growing right over\nthere.")
/*<201>*/ 				set_camera(-1, -1)
/*<198>*/ 				printf(/* textboxtype: 1, unk: 1, line: 83 */ "You pick one with (A), and the fuse\nlights. A few seconds later...BOOM!\nYou don't wanna stop and sniff this\nflower. Dangerous plants, believe me.\n<0x10009:0x0011080b>But once you learn to use them, they're\na powerful weapon. Us <color blue<Mogmas >coloroff>are\ncrazy about 'em!\n\n<0x10009:0x00ffffff>You can <color green<toss>coloroff> and <color green<roll >coloroff>them the same\nway you do jars. See what you can do\nwith those <color yellow<bomb flowers >coloroff>over there.\n\n<0x10006:0xffcd>Um...<pause 15><0x10006:0x00cd><0x10009:0x00110d11> Huh? You do know <color green<how to roll\nand throw >coloroff>stuff, right?\n[1-]Uh-huh.[2-]Not really...")
          				flw_283:
/*<283>*/ 				switch (choice(2)) {
          				  case 0:
/*<284>*/ 					printf(/* textboxtype: 1, unk: 0, line: 86 */ "<0x10009:0x00090809>Of course you do! You use the\nWii Remote. <color green<Point it up and swing it\nforward >coloroff>to <color green<throw >coloroff>things. <color green<Point it down\nand swing it forward >coloroff>to<color green< roll >coloroff>'em.\nI mean, hey, everyone knows that!")
          					flw_192:
/*<192>*/ 					scene_flags[4 'Eldin Volcano'][65 /* 0x9 02 */] = true;
          				  case 1:
/*<285>*/ 					printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00141215>Don't know any of this stuff, huh?<pause 15>\nNo worries, pal. I gotcha covered with\nall the info you need.\n\n<0x10009:0x000908ff>When you've got a <color yellow<bomb flower>coloroff>, point\nthe Wii Remote<color green< up>coloroff>!\n\n\nThe trajectory of the bomb will show\nup for ya, so all ya do is line it up with\nyour target and<color green< swing it down >coloroff>to\nchuck it!\nA trajectory guide will also show up if\nyou point the Wii Remote <color green<down>coloroff>.\n<color green<Swing it up >coloroff>to roll the bomb along that\nguideline!\n<0x10009:0x001108ff>To reach places up <color red<high>coloroff>, it's best to\nthrow bombs, but to <color red<cover distances >coloroff>or\n<color red<pass through narrow spaces>coloroff>, rolling is\ndefinitely the way to go.")
          					goto flw_192
          				}
          			  case 1:
/*<191>*/ 				printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x0011020b>That's what I figured. You can pick\nsome pretty powerful ones in this area.\n\n\n<0x10009:0x00ffffff><0x1000A:0x001100cd>Look! There are some right over there!\nTake as many as you want.")
/*<200>*/ 				set_camera(-1, -1)
/*<199>*/ 				printf(/* textboxtype: 1, unk: 1, line: 85 */ "I'm sure you already know this, but\nonce you pick a flower with (A), the\nfuse starts burning. Then it'll blow up\nin just a couple of seconds.\nYou can also<color green< toss>coloroff> or <color green<roll >coloroff>them, just\nlike you can with some other stuff.\nYou should practice.\n\n<0x10006:0xffcd>Um...<pause 15><0x10006:0x00cd><0x10009:0x00110d11>huh? You do know <color green<how to roll\n>coloroff>stuff, right?\n[1-]Yep.[2-]Not really...")
          				goto flw_283
          			}
          		  case 1:
/*<188>*/ 			printf(/* textboxtype: 1, unk: 1, line: 81 */ "<0x10009:0x00ffff00>Yeah, monsters carrying big blades?\nThey're crawling all over the place.\nCan't believe you haven't run into any\nof 'em.\n<0x10009:0x0015ff07>But if you don't know 'em, I guess\nyou're not pals.\n\n\nSo what is it then? You here to pick\n<color yellow<bomb flowers>coloroff>?\n[1-]Bomb what?[2-]Yep.")
          			goto flw_189
          		}
          	}
          }

          void entrypoint_300_05() {
/*< 10>*/ 	start()
/*<116>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 17, 'next': 210, 'param3': 32}
/*<210>*/ 	make_actor_do_something(0, 0)
/*<162>*/ 	{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 3075, 'next': 11, 'param3': 13}
/*< 11>*/ 	printf(/* textboxtype: 1, unk: 0, line: 47 */ "Hey! Hey! HEY! Y-you mess with our\nturf and you're gonna...pay?")
/*<211>*/ 	make_actor_do_something(0, 17)
/*<302>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4361, 'param2': 2062, 'next': 117, 'param3': 13}
/*<117>*/ 	printf(/* textboxtype: 1, unk: 0, line: 48 */ "Whoa! You're not...<pause 15> Yo, <color blue<Ledd>coloroff>, I don't\nthink this is one of those red creeps.")
/*<212>*/ 	make_actor_do_something(0, 0)
/*<118>*/ 	printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00010800>Y-y-yeah, I think you're right...\nNo reason to scare the hair off us,\nthough!\n\n<0x10009:0x00110d01>Sorry 'bout that, pal. These monsters\nshowing up and messing with our\nturf has got me on edge.\n\n<0x10009:0x00150800>They show up here, and I'm gonna\nknock the red clean out of 'em!\nThat's what I'm doing here.\nYeah, me, <color blue<Ledd>coloroff>.")
/*<213>*/ 	make_actor_do_something(0, 17)
/*<164>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4372, 'param2': 4629, 'next': 119, 'param3': 13}
/*<119>*/ 	printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10008:0xffcd>Yeah, whatever, Mr. Too Scared to Dig in\nthe Dark.")
/*<165>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4353, 'param2': -1, 'next': 214, 'param3': 13}
/*<214>*/ 	make_actor_do_something(0, 0)
/*<163>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 120, 'param3': 13}
/*<120>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "Anyway, if you're looking for treasure,\nyou should stay clear of those red guys.")
/*<312>*/ 	scene_flags[4 'Eldin Volcano'][121 /* 0xE 02 */] = true;
          }

          void entrypoint_300_22() {
/*<202>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 2, unk: 0, line: 12 */ "<0x10012:0x0000000b>Master, I am detecting<color red< extremely high\ntemperatures >coloroff>from the area directly\nahead.\n\nI calculate a 95% chance your clothing\nwill immediately combust upon\nentrance. Please proceed with caution. \n\nYou may be able to pass through safely\nif you<color green< run>coloroff>. I recommend confirming\nyour direction by <color red<dowsing >coloroff>before\nmaking the attempt.")
/*<209>*/ 	scene_flags[4 'Eldin Volcano'][101 /* 0xD 20 */] = true;
          }

          void entrypoint_300_06() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf(/* textboxtype: 1, unk: 0, line: 114 */ "<0x10009:0x00000002>You, the goddess's chosen hero...")
          }

          void entrypoint_300_23() {
/*<215>*/ 	start()
/*<216>*/ 	switch (temp_flags[33 /* 0x5 02 */]) {
          	  case 0:
/*<299>*/ 		switch (zone_temp_flags[16 /* 0x3 01 */]) {
          		  case 0:
/*<301>*/ 			printf(/* textboxtype: 1, unk: 0, line: 92 */ "Do me a favor, will ya? Try not to go\ncrazy and<color green< roll around >coloroff>all over the\nplace. Dust bunnies, ya know?")
          		  case 1:
/*<218>*/ 			printf(/* textboxtype: 1, unk: 0, line: 91 */ "Back again, huh? Don't mind me or\nanything--it's just MY HOUSE!\n\n\n<0x10009:0x10110d0e>What? What do you mean I didn't have\nto tunnel all the way up here?\n\n\n<0x10009:0x10150809>Look, I know it's a run-down, dirty\nhovel, but it's MINE! And I want to\nknow who's dropping by my dirty hovel.\n\n<0x10009:0x100909ff>Oh, and just 'cause you're all rested\ndoesn't mean you can <color green<roll around\n>coloroff>and bust the place up!")
/*<300>*/ 			zone_temp_flags[16 /* 0x3 01 */] = true;
          		}
          	  case 1:
/*<217>*/ 		printf(/* textboxtype: 1, unk: 0, line: 90 */ "Hey! Welcome to my place! Make\nyourself at home.\n\n\n<0x10009:0x1011080e>What? Of course this is my house!\n\n\n\n<0x10009:0x1015080a>OK, OK, those red creeps built it,\nbut...<pause 20> They split, right? So what's\nthe harm?\n\n<0x10009:0x100908ff>Us <color blue<Mogmas >coloroff>live in the ground, so we\ndon't have what you would call\n“houses.\" <0x10009:0x1015080d>I just wanted to see what it\nfelt like to say “Welcome to my place!\"")
/*<219>*/ 		temp_flags[33 /* 0x5 02 */] = true;
          	}
          }

