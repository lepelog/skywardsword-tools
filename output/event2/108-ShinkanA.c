          void entrypoint_108_03() {
/*< 32>*/ 	start()
/*<255>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 113), ('next', 33), ('param3', 24)])
/*< 33>*/ 	printf("_____Go!______")
          }

          void entrypoint_108_20() {
/*<156>*/ 	start()
/*<289>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<290>*/ 		printf("______While her statue may be gone, the\ngoddess is still with us, for she lives on\nin our hearts. Don't you agree,\nLink?")
          	  case 1:
/*<282>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*<283>*/ 			printf("______It seems every time I bump into you,\nyou appear stronger and somehow\nmore confident. Whatever you're\ndoing, keep it up, Link.")
          		  case 1:
/*<278>*/ 			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          			  case 0:
/*<281>*/ 				printf("______Levias?!____( I've heard rumors about\nwhat's been going on out there, but\nlittle more.\n\nI'm afraid I lack sufficient knowledge\non this subject to be of help to you.\n\n\nGo speak with the head of physical\ntraining, <b<Instructor Owlan>>. I'm sure\nhe can teach you more about this\nparticular topic!")
          			  case 1:
/*<279>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<280>*/ 					printf("______I must admit I'm starting to think I\nmight need to get a Remlit of my own.\n_____The Triforce?! What's that?____( Does it\nhave anything to do with little Mia?")
          				  case 1:
/*<157>*/ 					printf("______Lately I've been taking care of Mia\nfor the headmaster...\n\n\nIt's dangerous having her around.\nShe's so adorable that I'm starting to\nthink I need one of my own!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_04() {
/*< 34>*/ 	start()
/*<151>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 59), ('param3', 32)])
/*< 59>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', -1), ('next', 153), ('param3', 50)])
/*<153>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 10), ('next', 150), ('param3', 49)])
/*<150>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 10), ('next', 152), ('param3', 33)])
/*<152>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 2578), ('param2', 2562), ('next', 35), ('param3', 13)])
/*< 35>*/ 	printf("__________Hey, Link!\nUp here!")
/*< 57>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 11), ('param2', 0), ('next', 244), ('param3', 39)])
/*<244>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 10), ('next', 213), ('param3', 33)])
/*<213>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 10), ('next', 261), ('param3', 17)])
/*<261>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<262>*/ 		printf("______Good morning to you,\nLink! I'm impressed\nwith your decision to test\nyour resolve in <r<Hero Mode>>!\nOh, but today's the day of the long-\nawaited <r<Wing Ceremony>>!\n\n\nAre you feeling ready? There's\nsomething I'd like to talk to you about.\n\n\nLook this way while pressing and\nholding (Z), then press (A) to have a\nquick chat with me._____")
          		flw_64:
/*< 64>*/ 		scene_flags[0 'Skyloft'][36 /* 0x5 10 */] = true;
/*< 75>*/ 		story_flags[565 /* us: 805A9B19 0x10, jp: 805ACD99 0x10 */] = true;
/*<254>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', -1), ('param3', 42)])
          	  case 1:
/*< 56>*/ 		printf("______Good morning to you,\nLink! Today's finally\nthe day of the long-awaited\n<r<Wing Ceremony>>!\nAre you feeling ready? Oh, I just\nremembered. There's something I'd\nlike to ask you about.\n\nLook this way while pressing and\nholding (Z), then press (A) to have a\nquick chat with me._____")
          		goto flw_64
          	}
          }

          void entrypoint_108_21() {
/*<186>*/ 	start()
/*<192>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 101), ('next', 190), ('param3', 32)])
/*<190>*/ 	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 2), ('next', 187), ('param3', 13)])
/*<187>*/ 	printf("_____Hey, Link!")
/*<188>*/ 	printf("__\n_______\n_I don't care how good a jumper you\nthink you are. You'll never reach a\nroof that high just pressing (A) to <g<dash>>.")
/*<191>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 100), ('param2', 101), ('next', 193), ('param3', 17)])
/*<193>*/ 	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 15), ('next', 189), ('param3', 6)])
/*<189>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 19), ('param2', 0), ('next', 230), ('param3', 39)])
/*<230>*/ 	printf("There should be a wooden box up there.\nGrab and move one with (A), and use it\nas a platform of sorts.\n\nYou can climb onto a platform by \npressing (A) to <g<dash >>or by pressing _____\nfor a few moments.")
          }

          void entrypoint_108_05() {
/*< 36>*/ 	start()
/*<267>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<268>*/ 		printf("______Yes. It looks like you've mastered\n<g<dashing>> with (A). Just remember, if you\noverdo it, your stamina gauge will run\nout and you'll be huffing and puffing.\nAll right, then. You know what to do\nnext, right?\n[1]Tell me![2-]I know.")
/*<270>*/ 		switch (choice(2, 0)) {
          		  case 0:
/*<271>*/ 			printf("You can easily jump a distance like\nthat just by jogging along toward it.\nYou'll <g<autojump>> right across.\n\nAutojump_____...~~~ _____No matter how many\ntimes I say it, I never get tired of\nhearing it! A name for the ages, surely.")
          		  case 1:
/*<269>*/ 			printf("I see. Well then, come on over here\nquickly!")
          		}
          	  case 1:
/*<266>*/ 		printf("______So what do you think? Using (A) to\n<g<dash >>is useful, isn't it?\n\n\nHowever, don't dash around so much\nthat you tire yourself out, or your\n<r<stamina gauge>> will empty and you'll be\ncompletely out of breath.\nIt's best to take a little break when\nyour stamina gauge gets close to\nempty.\n\nGot all that? On to the next point...\n\n\n\nYou can jump a short distance like this\njust by moving toward it. I like to call\nit the <g<autojump>>. Ahh, yes, autojump_____..._____\nIt just has a nice ring to it.")
          	}
          }

          void entrypoint_108_22() {
/*<208>*/ 	start()
/*<210>*/ 	switch (scene_flags[92 /* 0xA 10 */]) {
          	  case 0:
/*<211>*/ 		printf("______The ceremony won't start until you\nhave found your Loftwing.\n\n\nDon't worry about anything else.\nJust hurry up and find your bird!")
          	  case 1:
/*<212>*/ 		printf("______The start of the Wing Ceremony is\nbeing delayed until you find your\nLoftwing. Good news, isn't it?")
          	}
          }

          void entrypoint_108_06() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf("______You can't just ignore your instructor\nlike this, Link!\n\n\nLook over here and press (Z) to target\nme, then press (A) to talk._____")
          }

          void entrypoint_108_23() {
/*<217>*/ 	start()
/*<225>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<226>*/ 		printf("______How are things, Link?!\nIs everything going well?\n\n\nIf there's anything else you need,\ndon't hesitate to come talk to me.\nI am your instructor, after all!")
          	  case 1:
/*<221>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*<224>*/ 			printf("______The Spiral Charge is a stressful\nmaneuver for most any Loftwing to\npull off.\n\nBut you and that red bird of yours...\nI'll bet you can handle it without\na sweat!")
          		  case 1:
/*<220>*/ 			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          			  case 0:
/*<223>*/ 				printf("__________Link... What are you\ndoing out at this hour?\n\n\nWhat's all this about Levias? Listen,\nthis isn't something I want to talk\nabout at this hour...\n\nCome back tomorrow morning. \nI'll tell you everything I know then.")
          			  case 1:
/*<219>*/ 				switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          				  case 0:
/*<222>*/ 					printf("______Well, Link... Are you close\nto finding Zelda?\n\n\nDon't give up! I believe if anyone can\nfind Zelda, it's you.")
          				  case 1:
/*<218>*/ 					printf("______You aren't allowed to ride your birds\nat night, so I'm afraid you won't be\nable to search for Zelda then, either.\n\nFor tonight, I suggest you go to bed and\nget some rest. You can start your\nquest tomorrow.\n\nYou won't make smart decisions if\nyou don't take the time to rest your\nmind and body.")
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_07() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf("____\n__________Link!\n\n\n\n_____You still don't get it?!")
          }

          void entrypoint_108_24() {
/*<232>*/ 	start()
/*<245>*/ 	switch (scene_flags[41 /* 0x4 02 */]) {
          	  case 0:
/*<238>*/ 		printf("______Hey now, Link! Now is\ncertainly not the time for that.\n\n\nHurry and find your Loftwing!\nYou should talk to the students inside\nthe academy. Perhaps they know\nsomething?")
          	  case 1:
/*<239>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<246>*/ 			printf("______Hey, Link! What do you\nthink you're doing slinking by your\ninstructors like that?!\n\nCome here for a moment.")
          		  case 1:
/*<233>*/ 			printf("______Hey, Link! What exactly\ndo you think you're doing ignoring\nyour instructor and just walking by\nlike that?\nCome over here and listen to what your\ninstructor has to say!")
          		}
          	}
          }

          void entrypoint_108_08() {
/*< 76>*/ 	start()
/*< 88>*/ 	switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          	  case 0:
/*<209>*/ 		printf("")
          	  case 1:
/*< 83>*/ 		switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          		  case 0:
/*< 85>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 77), ('param3', 31)])
/*< 77>*/ 			printf("______Ah, Link. How goes your\nsearch for Zelda? Have you found her\nyet?\n\n______What? ____(Levias? Ah, so you've been\ntalking to the headmaster, I take it?\n\n\nIf I'm correct, Levias is the one inside\nthe thunderhead. But_____...__________that's not the\nLevias that we all know.\n\n_____That's...____(_____a <r<monster>>!\n\n\n\n______It certainly looks like Levias, but last\ntime I approached him, he came\nrushing at me! And his eyes...\nThey were full of malice.\nPeople change... Or old, wizened\ncreatures change, rather. _____Perhaps\nit's more that...__________he is possessed by\nsomething. _____That's how it felt to me.")
/*<203>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 40), ('next', 78), ('param3', 6)])
/*< 78>*/ 			printf("______What?____( You want to talk to Levias?\n\n\n\n_____That's..._____impossible. I don't think\nLevias is capable of listening. Not in\nhis current state, no.\n\n_____And..._____even if you were to get close\nenough to talk to him, it will likely end\nwith you getting brushed aside and sent\nflying to your death in a sea of clouds.")
/*<204>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 40), ('next', 201), ('param3', 6)])
/*<201>*/ 			printf("_____RWhat? ____(You're still planning on going?\n\n\n\n_____I see..._____ It's because you need to find\nZelda.\n\n\nI understand..._____ I get the feeling\nnothing I could say would talk you\nout of it.")
/*<205>*/ 			OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 30), ('next', 202), ('param3', 6)])
/*<202>*/ 			printf("Hey! I have an idea. \nCome with me!")
/*< 86>*/ 			story_flags[362 /* us: 805A9B03 0x01, jp: 805ACD83 0x01 */] = true;
/*< 87>*/ 			changeScene(0, 0) // 
          		  case 1:
/*<276>*/ 			switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          			  case 0:
/*<277>*/ 				printf("______Oh, hello, Link!\n_____Hmm? The Triforce?\n\n\nSorry, I can't say I know what that is!\nPerhaps you should ask the\nheadmaster?")
          			  case 1:
/*< 84>*/ 				printf("______Ah, Link! How's your\nsearch for Zelda going?\n\n\nSorry for leaving it all up to you.\nI know you must be doing everything\nyou can to find her.")
          			}
          		}
          	}
          }

          void entrypoint_108_09() {
/*< 79>*/ 	start()
/*< 80>*/ 	printf("______Levias is inside the thunderhead.\nHe's been acting so strangely...\nLike something has possessed him.\n\nIf we can somehow free him from\nwhatever it is that has a hold over\nhim, then there's a chance he will\nreturn to his senses.\nListen well, Link, because\nI'm about to teach you a very\npowerful bird-riding technique. \n\n______It's called the <r<Spiral Charge>>!")
/*<259>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 22), ('param2', 0), ('next', 257), ('param3', 39)])
/*<257>*/ 	printf("Using the Spiral Charge, you can rid\nLevias of the blight that has hold\nof him!\n\nThe technique is quite easy to perform.\nAll you have to do is press (A).\n\n\nHowever, the acceleration effect lasts\nlonger than any <r<attack>> move you've\nused so far. Maintaining stable flight\ncan be tricky.\nThis is a technique that only senior\nKnight Academy students who have\nmastered high-level flight skills are\nallowed to perform.\nIt's still a bit too early for you, but...\n_____This is an extraordinary circumstance,\nso I'll make an exception this time.\nHowever, I will test you.")
/*<260>*/ 	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 258), ('param3', 39)])
/*<258>*/ 	printf("______First, dive off this platform and call\nyour bird.")
/*< 94>*/ 	story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
/*< 99>*/ 	story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*<249>*/ 	loadzone_temp_flags[13 /* 0x8 20 */] = true;
          }

          void entrypoint_108_10() {
/*< 91>*/ 	start()
/*<129>*/ 	switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          	  case 0:
/*<130>*/ 		printf("______What happened to Zelda...it's just\nterrible.\n\n\nBut there's no point in your kicking\nyourself about it. It was an accident...")
          	  case 1:
/*<128>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<197>*/ 			switch (scene_flags[91 /* 0xA 08 */]) {
          			  case 0:
/*<199>*/ 				printf("______Leave the ceremony to us. You just\nfocus on finding your bird as quickly\nas you can.")
          			  case 1:
/*<127>*/ 				printf("______What's wrong, Link?\n_____Your bird won't come to you when\nyou call it?\n\nFor a Loftwing to ignore its master's\ncall...something must be very wrong_____...\n\n\nHave you talked to<b< Instructor Horwell\n>>about this? He's leading today's\nceremony and should be made aware\nof what's going on!\nI see... Well, if the headmaster is aware\nof the situation, then I'm sure he'll \ndelay the ceremony for you.\n\nYou just worry about finding that\nbird of yours!")
/*<200>*/ 				scene_flags[0 'Skyloft'][91 /* 0xA 08 */] = true;
          			}
          		  case 1:
/*<195>*/ 			switch (scene_flags[90 /* 0xA 04 */]) {
          			  case 0:
/*<196>*/ 				printf("______That reminds me... You always seem\nto confuse <b<Instructor Horwell >>and\nme!\n\nI am <b<Owlan>>, of course. I have white\nhair, and I teach practical skills.\n<b<Instructor Horwell >>has brown hair, and\nhe teaches academics. Don't forget it!")
          			  case 1:
/*< 92>*/ 				printf("______Hey, Link. The day of the\nWing Ceremony is finally upon us!\n\n\nIt's time to put what you've learned to\nuse... All those practical skills I taught\nyou, and all the academic prowess\n<b<Instructor Horwell>> taught you!\nWhile we're at it, do you remember how\nto <r<look around >>using (C)?_____\n\n\n<g<Press>> (C) when you want to take a look\nat your surroundings!_____\n\n\nIf you feel as though the <r<cursor has\nmoved out of alignment>>, point the Wii\nRemote at the screen and press (v) to\neasily rectify the situation._____")
/*<198>*/ 				scene_flags[0 'Skyloft'][90 /* 0xA 04 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_108_11() {
/*<123>*/ 	start()
/*<163>*/ 	switch (scene_flags[20 /* 0x3 10 */]) {
          	  case 0:
/*<273>*/ 		switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          		  case 0:
/*<275>*/ 			printf("______Could there truly be a world below the\nclouds?\n\n\nShould it even exist, I imagine its\nterrain to be the exact opposite of our\nlush green world. It's probably nothing\nbut dust and rock...")
          		  case 1:
/*<272>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<274>*/ 				printf("______How goes your search for Zelda?\n\n\n\nRemember to find a bed and sleep if\nyou start getting tired. A quick nap can\nrestore your hearts and refresh your\nmind to explore after dark.")
          			  case 1:
/*<167>*/ 				printf("______Take good care of yourself, and best of\nluck in your search for Zelda!")
          			}
          		}
          	  case 1:
/*<168>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 124), ('param3', 31)])
/*<124>*/ 		printf("______I heard the news, Link!\nZelda's fallen down through the clouds,\nand you're going to look for her.\nIs that right?\nThe headmaster told me there's land\nbeneath the clouds... Do you know\nanything about that?")
/*<169>*/ 		switch (adventure_pouch_has(9 0x0009)) {
          		  case 0:
/*<171>*/ 			printf("So that's the famous sword... Ah, and\na shield____\n.____\n.____\n.____\n It looks like you have one\nalready. Very good!\n\nHere--take this as a little gift from me.")
          			flw_172:
/*<172>*/ 			give_item(4 0x04);
/*<256>*/ 			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 173), ('param3', 12)])
          			flw_173:
/*<173>*/ 			printf("If you're not sure how to use a shield,\n<b<Knight Commander Eagus >>at the\nSparring Hall will happily teach you.")
/*<166>*/ 			scene_flags[0 'Skyloft'][20 /* 0x3 10 */] = true;
/*<214>*/ 			switch (scene_flags[89 /* 0xA 02 */]) {
          			  case 0:
          			  case 1:
/*<215>*/ 				story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
/*<216>*/ 				scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
          			}
          		  case 1:
/*<247>*/ 			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 17), ('param4', 2), ('param5', 80)])) {
          			  case 0:
/*<248>*/ 				printf("So that's the famous sword... Ah, but\nit won't do you much good if you don't\nhave a shield to protect yourself with!\n\nUnfortunately, you don't seem to have\nspace to carry any other items. Here,\ntake this instead. Consider it a little\ngift from your friend and teacher.")
          				goto flw_172
          			  case 1:
/*<170>*/ 				printf("So that's the famous sword... Ah, but\nit won't do you much good if you don't\nhave a shield to protect yourself with!\n\nHere--take this with you!")
/*<164>*/ 				give_item(116 0x74);
/*<165>*/ 				printf("The Wooden Shield is light and\nmaneuverable, but it's the weakest\nof all the shields. Also, keep in mind\nthat it's particularly vulnerable to fire.\nIf it breaks, you can buy a new one\nat the bazaar.\n\n\nTo equip the shield, <g<hold <g<_____ <g<>>and <g<point\n>>at it with the Wii Remote._____")
          				goto flw_173
          			}
          		}
          	}
          }

          void entrypoint_108_12() {
/*< 95>*/ 	start()
/*<206>*/ 	switch (scene_flags[77 /* 0x8 20 */]) {
          	  case 0:
/*<207>*/ 		printf("")
          	  case 1:
/*< 97>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*< 81>*/ 			printf("_____\nOh! You managed to destroy 10 targets\nwithin the time limit!\n\n\nIf you can control your bird that well,\nyou'll have no problems at all! I knew\nyou could do it, Link.\nAnd what a magnificent red bird...\nYou are henceforth permitted to use\nthe Spiral Charge attack as a qualified\nbird rider!")
/*< 82>*/ 			printf("The next thing we have to address is\njust how to go about finding Levias.\n\n\nMaybe the <r<owner of the Lumpy\nPumpkin >>might know something.\nEvery year he makes an offering of\nhis pumpkin soup for Levias.\nGo to the Lumpy Pumpkin and\nask him what he knows!")
/*<107>*/ 			scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = true;
          		  case 1:
/*< 96>*/ 			switch (story_flags[641 /* us: 805A9B1D 0x04, jp: 805ACD9D 0x04 */]) {
          			  case 0:
/*< 98>*/ 				printf("______If you can't destroy 10 targets in \nunder 120 seconds, I can't in good\nconscience give you permission to\nuse this dangerous technique.\nI'll be here for a while, so why don't you\ntake a break and cool off? Come talk\nto me when you want to try again. ")
/*<100>*/ 				story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = false;
/*<227>*/ 				story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = false;
/*<228>*/ 				story_flags[641 /* us: 805A9B1D 0x04, jp: 805ACD9D 0x04 */] = false;
/*<105>*/ 				scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = true;
          			  case 1:
          			}
          		}
          	}
          }

          void entrypoint_108_13() {
/*<101>*/ 	start()
/*<103>*/ 	switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          	  case 0:
/*<104>*/ 		printf("______The Lumpy Pumpkin is a little\ngathering spot on an oblong island to\nthe southeast of Skyloft.\n\nThe owner's daughter, <b<Kina>>, works\nthere. She has the most lovely voice.\n\n\n_____I'm also_____..._____a fan of hers. But you don't\nneed to tell anyone else about that,\ndo you?")
          	  case 1:
/*<106>*/ 		switch (scene_flags[77 /* 0x8 20 */]) {
          		  case 0:
          			flw_108:
/*<108>*/ 			printf("______Hey, Link! Want to try\nsome Spiral Charge training?\n[1]Yep![2-]Later.")
/*<109>*/ 			switch (choice(2, 0)) {
          			  case 0:
/*<110>*/ 				printf("______Excellent. That's what I want to hear!\nWell then, dive off this platform.")
/*<112>*/ 				scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = false;
/*<113>*/ 				story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
/*<114>*/ 				story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*<251>*/ 				loadzone_temp_flags[13 /* 0x8 20 */] = true;
          			  case 1:
/*<111>*/ 				printf("I think it's fine to wait until you feel\nready!\n\n\nI'll be here for a while. Come back\nanytime!")
/*<253>*/ 				loadzone_temp_flags[13 /* 0x8 20 */] = false;
          			}
          		  case 1:
/*<122>*/ 			switch (story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */]) {
          			  case 0:
/*<102>*/ 				printf("______What's wrong?! Hurry up and dive off\nthe platform! Are you having second\nthoughts?\n[1]I'll do it![2-]I quit.")
/*<117>*/ 				switch (choice(2, 0)) {
          				  case 0:
/*<121>*/ 					printf("______Ah! That's the answer I was looking\nfor. Take to the skies,\nLink!")
/*<250>*/ 					loadzone_temp_flags[13 /* 0x8 20 */] = true;
          				  case 1:
/*<118>*/ 					story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = false;
/*<119>*/ 					story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = false;
/*<120>*/ 					printf("I think it's fine to wait until you feel\nready!\n\n\nI'll be here for a while. Come back\nanytime!")
/*<252>*/ 					loadzone_temp_flags[13 /* 0x8 20 */] = false;
          				}
          			  case 1:
          				goto flw_108
          			}
          		}
          	}
          }

          void entrypoint_108_30() {
/*<142>*/ 	start()
/*<143>*/ 	printf("Listen up, Link!\n\n\n\nI taught your Loftwing to perform a\n<g<Spiral Charge >>when you press (A).")
          }

          void entrypoint_108_14() {
/*<115>*/ 	start()
/*<116>*/ 	printf("")
          }

          void entrypoint_108_31() {
/*<144>*/ 	start()
/*<147>*/ 	printf("Press (A) to <r<Spiral Charge >>and break\nthe <r<10 targets >>placed around the\nfloating boulders up ahead.")
          }

          void entrypoint_108_15() {
/*<125>*/ 	start()
/*<126>*/ 	printf("______Hey, Link! Where do you\nthink you're going? This is a\ncompetition! Dive off the platform!")
          }

          void entrypoint_108_32() {
/*<145>*/ 	start()
/*<148>*/ 	printf("If you can destroy 10 targets in under \n<r<120 seconds>>, I will recognize you as\na skilled bird rider.")
          }

          void entrypoint_108_16() {
/*<131>*/ 	start()
/*<284>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<286>*/ 		switch (loadzone_temp_flags[15 /* 0x8 80 */]) {
          		  case 0:
/*<288>*/ 			printf("______This gives me pause... The monsters\nthat usually prowl Skyloft at night are\nnowhere to be seen, and the Remlits\nno longer show aggressive behavior.\nWhat could have happened?")
          		  case 1:
/*<285>*/ 			printf("______Look, Link! Though night\nhas come, Mia exhibits none of the\nnocturnal aggressiveness we've come\nto expect in Remlits!\nIt's just amazing!")
/*<287>*/ 			loadzone_temp_flags[15 /* 0x8 80 */] = true;
          		}
          	  case 1:
/*<158>*/ 		switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          		  case 0:
/*<159>*/ 			printf("______I keep my distance from Mia at night.\n\n\n\nThere was that one time when she\nsnuck into the academy after nightfall.\n\n\nI recommend that you be extra careful\nwhen you go out at night. Oh dear...\nThat caused quite the commotion.")
          		  case 1:
/*<132>*/ 			printf("______It's dangerous to be out at night.\nYes, best to avoid it entirely!\n\n\nEven the headmaster's darling Mia\nturns quite feral when night falls...\nA mysterious energy settles over\nSkyloft with the darkness.")
          		}
          	}
          }

          void entrypoint_108_33() {
/*<146>*/ 	start()
/*<149>*/ 	printf("All right! Off you go!")
          }

          void entrypoint_108_17() {
/*<133>*/ 	start()
/*<134>*/ 	printf("__________Link! Where are you\nheaded?\n\n\nDive off this platform and call your\nLoftwing!")
          }

          void entrypoint_108_18() {
/*<135>*/ 	start()
/*<136>*/ 	printf("______Ah, Link! You'd like a\nlesson from me, even at a time like\nthis?\n[1]Please![2-]No...")
/*<137>*/ 	switch (choice(2, 0)) {
          	  case 0:
/*<139>*/ 		printf("Well, well! Such enthusiasm!\n\n\n\nAllow me tell you about the history of\nSkyloft!\n\n\nSkyloft is an island that has floated\nhere for ages... Thousands of years.\n\n\nOur ancestors have always lived on this \nisland, as well as the surrounding\nislands in the sky.\n\n______There is an impenetrable barrier of\nclouds below Skyloft. Nobody who has\nfallen down through the clouds has\never been seen again.\nThey say there is a vast expanse of\npure nothingness beneath the clouds!\n\n\n____\n_Ah, but that's a good place to leave it\ntoday. You'd better go prepare for the\nWing Ceremony.")
          	  case 1:
/*<138>*/ 		printf("I... I see. Well, classes are canceled\ntoday due to the Wing Ceremony!\n\n\nDon't you think you'd better head\noutside and get ready for the\nceremony?")
          	}
          }

          void entrypoint_108_01() {
          	start()
/*<  9>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 71>*/ 		switch (scene_flags[41 /* 0x4 02 */]) {
          		  case 0:
/*< 63>*/ 			printf("I'll see what I can do about the\nceremony. You go hurry and find\nyour bird!")
          		  case 1:
/*< 62>*/ 			printf("______What's wrong, Link?\nYou're looking a little pale...\n\n\nWhat?!____2 Your Loftwing is missing?!\nHow strange and troubling.\nDo you_____..._____think you can find him?\n\nYou're going to start looking for him\nnow?! How will you make it back in \ntime to fly in the ceremony?!\n\nIt looks like your participation in the\nceremony hinges on <r<feather>> or\nnot you can find that bird on time_____..._____\n\n___________Ahem. Excuse me..._____")
/*<160>*/ 			switch (scene_flags[30 /* 0x2 40 */]) {
          			  case 0:
/*<161>*/ 				printf("I see... So the headmaster has\nsummoned me?\n\n\nAll right then, I'll go speak with him\nimmediately.\n\n\nI still owe you for helping me out\nearlier, so don't worry about the\nceremony for now. You focus on\nfinding your Loftwing!")
          				flw_72:
/*< 72>*/ 				scene_flags[0 'Skyloft'][41 /* 0x4 02 */] = true;
          			  case 1:
/*<162>*/ 				printf("Maybe that's life's way of getting\nback at you for not listening to your\ninstructors...\n\nAnyway, never mind that... So you say\nthe headmaster is summoning me?\n\n\nIn that case, don't you worry about the\nceremony. Just go find that bird of\nyours!")
/*<240>*/ 				story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = false;
          				goto flw_72
          			}
          		}
          	  case 1:
/*< 48>*/ 		switch (scene_flags[28 /* 0x2 10 */]) {
          		  case 0:
/*< 51>*/ 			switch (scene_flags[30 /* 0x2 40 */]) {
          			  case 0:
/*< 10>*/ 				printf("____\n_Ahhh, I'm so glad Mia is safe.\n\n\n<b<\n>>______Such an odd creature, the <b<Remlit>>.\nShe may look cuddly now, but at night,\nit's another story entirely!\n[1]Why?[2]At night?")
/*< 11>*/ 				switch (choice(2, 0)) {
          				  case 0:
/*< 12>*/ 					printf("Hmm... You don't know what happens\nto Remlits at night?\n\n\nIt's frightening, really...")
          					flw_13:
/*< 13>*/ 					printf("______When night falls here in Skyloft, \ncreatures like this Remlit become\npossessed by an evil force.\n\nAnd monsters that hide in caves during\nthe day make their way out and prowl\nin the dark of night.\n\nThat is why nobody dares to leave their\nhome at night. Certainly not if they can\navoid it.\n\nIt might be fine for youngsters like \nyou, well trained in the way of the\nknight. You can defend yourself!\n\nBut still, it would be wise to keep\nyour guard up when you're out and\nabout after dark!")
          				  case 1:
          					goto flw_13
          				}
          			  case 1:
/*< 93>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 17), ('param2', 0), ('next', 49), ('param3', 39)])
/*< 49>*/ 				printf("______Nice work! You've brought her back\nsafe and sound!\n\n\n____#______Sorry for troubling you with this.\nI know you're busy, Link!\nI suppose I should feed Mia now...")
/*<155>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 20), ('param2', 0), ('next', 52), ('param3', 39)])
/*< 52>*/ 				printf("Please tell the headmaster that we\nfound his pet. He should be up by\nthe <r<Statue of the Goddess>>.")
/*<241>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 21), ('param2', 0), ('next', 242), ('param3', 39)])
/*<242>*/ 				printf("I believe Zelda is there with him, so\nyou should hurry along.")
/*<243>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', -1), ('next', 50), ('param3', 42)])
/*< 50>*/ 				scene_flags[0 'Skyloft'][30 /* 0x2 40 */] = true;
          			}
          		  case 1:
/*< 46>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*< 47>*/ 				printf("______What is it, Link?")
/*< 61>*/ 				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 14), ('param2', 0), ('next', 60), ('param3', 39)])
/*< 60>*/ 				printf("If you dash at the wall from there,\nyou'll be able to <g<hang >>from the edge!\n\n\nDo be careful when you're hanging\noff the ledge, and keep an eye on\nyour <r<stamina gauge>>.")
          			  case 1:
/*<  6>*/ 				switch (temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<  7>*/ 					printf("______So will you help by finding Mia and\nbringing her back to me?\n[1]Sure![2]Nah.")
/*<  8>*/ 					switch (choice(2, 0)) {
          					  case 0:
          						flw_2:
/*<  2>*/ 						printf("______Fantastic! So you'll do it?! I know\nyou're in a hurry, so I really appreciate\nyour taking the time to help.")
/*< 43>*/ 						OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 3328), ('param2', 0), ('next', 44), ('param3', 22)])
/*< 44>*/ 						printf("______You should be able to climb up\nsomewhere over there. If you hang off\nthat ledge there, you can climb onto\nthe roof from the other side.\n______I'm terribly sorry, but I know you're\nquite the climber! I really do\nappreciate it.")
/*< 45>*/ 						temp_flags[2 /* 0x1 04 */] = true;
/*<235>*/ 						story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
          					  case 1:
/*<229>*/ 						printf("______Ah, I see...\n\n\n\nCan you please tell the headmaster\nthat Instructor Horwell has found Mia\nand that he shouldn't worry?")
          					}
          				  case 1:
/*< 68>*/ 					switch (scene_flags[38 /* 0x5 40 */]) {
          					  case 0:
/*<231>*/ 						OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 1), ('param3', 31)])
/*<  1>*/ 						printf("______So what are you up to? Rushing to get\nsome last-minute bird-riding practice\nin this morning, Link?\n\nOh? _____You have someone to meet?\n_____Ah, <b<Zelda>>'s waiting for you, is she?")
/*< 42>*/ 						printf("Perfect timing, then!\n\n\n\nYou see, Zelda's father--Headmaster\n<b<Gaepora>>--has a pet named <r<Mia>>, and,\nwell...she's scampered off again.")
/*<237>*/ 						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 12), ('param2', 0), ('next', 236), ('param3', 39)])
/*<236>*/ 						printf("Look!__\n___ Over there! Do you see her?\n\n\n\n__\n___The headmaster is so busy working\nwith Zelda preparing for the\nceremony...\n\nI thought that maybe I should feed her,\nbut the ceremony is about to start and\nI just put on a fresh set of clothes\nand, well...you see...\n______Will you help me out and go retrieve\nMia for me?\n[1]I'm on it![2]I'm busy...")
/*<  4>*/ 						switch (choice(2, 0)) {
          						  case 0:
/*< 54>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 2), ('param3', 39)])
          							goto flw_2
          						  case 1:
/*< 55>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', -1), ('param2', 0), ('next', 3), ('param3', 39)])
/*<  3>*/ 							printf("______Ah, I see...\n\n\n\nCan you please tell the headmaster\nthat Instructor Horwell has found Mia\nand that he shouldn't worry?")
/*<  5>*/ 							temp_flags[1 /* 0x1 02 */] = true;
/*<234>*/ 							story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
          						}
          					  case 1:
/*< 65>*/ 						switch (scene_flags[37 /* 0x5 20 */]) {
          						  case 0:
/*< 90>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 9), ('param2', 0), ('next', 67), ('param3', 39)])
/*< 67>*/ 							printf("______What are you waiting for?!\nListen to your instructor for once!")
          						  case 1:
/*<154>*/ 							story_flags[565 /* us: 805A9B19 0x10, jp: 805ACD99 0x10 */] = false;
/*<174>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 100), ('next', 89), ('param3', 17)])
/*< 89>*/ 							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 9), ('param2', 0), ('next', 264), ('param3', 39)])
/*<264>*/ 							switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          							  case 0:
/*<265>*/ 								printf("______Right, right. Use (Z) to target\nsomething in the direction you're\nfacing._____\n\n______You're looking at me like you already\nknow all this. There's no harm in\nreviewing the basics, you know.\n\n______<r<In Hero Mode>>...___________you'll <r<lose hearts\ntwice as fast>>, so it's doubly important\nto know how to effectively <g<(Z)>> target._____\n\nIt's a little silly to carry on a\nconversation from this distance.\nWhy don't you come join me up here?")
          								flw_58:
/*< 58>*/ 								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 10), ('param2', 0), ('next', 41), ('param3', 39)])
/*< 41>*/ 								printf("______You should be able to climb up if you\n<g<dash>> up to the top of that wooden box, \ndon't you think?\n\nMove while holding (A) to <g<dash>>.\nYou should be able to make that jump\nfairly easily!\n\nTry climbing up here!")
/*< 66>*/ 								scene_flags[0 'Skyloft'][37 /* 0x5 20 */] = true;
          							  case 1:
/*<263>*/ 								printf("______Excellent! Always remember you can\npress (Z) to target something._____\n\n\nOnce you have <g<targeted>> someone with\n(Z), you can easily talk to him or her\nby pressing (A)._____\n\nAnd even when there isn't anything to\ntarget, <g<pressing>> (Z) is a convenient\nway to quickly face your view forward._____\n\nOh, but it's a little silly to carry on a\nconversation from this distance.\nWhy don't you come join me up here?")
          								goto flw_58
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_19() {
/*<140>*/ 	start()
/*<141>*/ 	printf("______Hey now! That's my seat that you've\nperched yourself on. Students must sit\nin the student seating!")
          }

          void entrypoint_108_02() {
/*< 14>*/ 	start()
/*< 38>*/ 	switch (story_flags[31 /* us: 805A9ADA 0x80, jp: 805ACD5A 0x80 */]) {
          	  case 0:
/*< 21>*/ 		printf("______What are you doing? <g<Dash >>off the ledge\nwith <r<(A)>>, <r<dive >>down, and get on your\nbird!\n\nRemember, you'll need to press (v) to\ncall your bird!_____")
          	  case 1:
/*< 28>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 22), ('param3', 39)])
/*< 22>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 4), ('next', 23), ('param3', 32)])
/*< 23>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 5), ('next', 24), ('param3', 32)])
/*< 24>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 6), ('next', 177), ('param3', 32)])
/*<177>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 1), ('next', 180), ('param3', 32)])
/*<180>*/ 		OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 2), ('next', 25), ('param3', 32)])
/*< 25>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 26), ('param3', 17)])
/*< 26>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 27), ('param3', 17)])
/*< 27>*/ 		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 181), ('param3', 17)])
/*<181>*/ 		OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 0), ('param2', 19), ('next', 15), ('param3', 13)])
/*< 15>*/ 		printf("______Your attention, please. At last we are\nready to begin the <r<Wing C>><r<eremony>>.\n\n\nI was beginning to worry that we'd have\nto proceed without Link,\nbut luckily that is no longer a concern.\n\nI'm glad you could all make it. Before\nwe start, I'll explain the rules for\ntoday's competition.")
          		flw_16:
/*< 16>*/ 		printf("I have attached a small statuette to this\nbird, who I will then release to the\nskies.\n\nOn my signal, press (A) to <r<dash >>and\n<r<dive >>off the ledge. Once you are in the\nair, mount your Loftwing.\n\nRemember to <g<call your bird>> promptly\nwith (v) once you dive off the edge._____\n\n\nWhoever catches the bird and claims\nthe statuette with (A) will be this year's\nchampion.\n\n__\n___Those are the rules. Simple enough,\nI should think, but do you need to hear\nthem again?\n[1]Nope!_____Again!")
/*< 18>*/ 		switch (choice(2, 0)) {
          		  case 0:
/*< 30>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 0), ('next', 17), ('param3', 39)])
/*< 17>*/ 			printf("___________Excellent.\n\n\n\nAs you well know, today's champion\nwill graduate to the next class, bringing\nhim one step closer to knighthood.\n\nHe will also receive a <r<gift >>from the\nyoung woman chosen to play the role\nof the <r<goddess >>in this year's ritual.\n\nToday is a special day for many\nreasons, but it is also the 25th\nanniversary of our fine institution.\n\nTo celebrate the occasion, today's\nchampion shall also receive his gift\nhigh <r<atop the Statue of the Goddess>>. \n\nI hear the young woman performing\nthe role of the goddess this year has\ncrafted the gift herself.\n\nAnd as you all well know, the role of\nthe goddess this year will be\nperformed by...")
/*<185>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 267), ('param2', 3840), ('next', 178), ('param3', 13)])
/*<178>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 5), ('param2', 0), ('next', 175), ('param3', 39)])
/*<175>*/ 			printf("___________The lovely Zelda!")
/*<194>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 1048), ('param2', 3084), ('next', 31), ('param3', 13)])
/*< 31>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 0), ('next', 20), ('param3', 39)])
/*< 20>*/ 			printf("Let's see your finest flying out there.\nShow me just how hard you've\nbeen practicing.\n\nAlso, I want to see good, clean flying.\nAnyone caught interfering with other\nriders will answer to me!")
/*<179>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 6), ('param2', 0), ('next', 182), ('param3', 39)])
/*<182>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 4), ('next', 183), ('param3', 50)])
/*<183>*/ 			OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 512), ('param2', 23), ('next', 176), ('param3', 13)])
/*<176>*/ 			printf("_____That goes ______double for you,\nGroose!")
/*< 40>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 4), ('param2', 0), ('next', 184), ('param3', 39)])
/*<184>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 100), ('next', 53), ('param3', 50)])
/*< 53>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 0), ('next', 39), ('param3', 33)])
/*< 39>*/ 			printf("______All right, gentlemen, line up. At my\ncommand, the competition will begin!")
/*< 37>*/ 			story_flags[31 /* us: 805A9ADA 0x80, jp: 805ACD5A 0x80 */] = true;
          		  case 1:
/*< 19>*/ 			printf("_____RVery well... But listen close this time!")
/*< 29>*/ 			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 1), ('param2', 0), ('next', 16), ('param3', 39)])
          			goto flw_16
          		}
          	}
          }

