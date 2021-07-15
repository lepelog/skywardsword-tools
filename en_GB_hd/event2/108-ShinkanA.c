          void entrypoint_108_03() {
/*< 32>*/ 	start()
/*<254>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 113, 'next': 33, 'param3': 24}
/*< 33>*/ 	printf("\x0E\x01\x08\x02\x1CDGo!\x0E\x01\x05\x04\x0F\x00")
          }

          void entrypoint_108_20() {
/*<155>*/ 	start()
/*<288>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<289>*/ 		printf("\x0E\x01\x09\x04\x00\x01While her statue may be gone, the\ngoddess is still with us, for she lives on\nin our hearts. Don't you agree,\nLink?")
          	  case 1:
/*<281>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*<282>*/ 			printf("\x0E\x01\x09\x04\x00\x01It seems every time I bump into you,\nyou appear stronger and somehow\nmore confident. Whatever you're\ndoing, keep it up, Link.")
          		  case 1:
/*<277>*/ 			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          			  case 0:
/*<280>*/ 				printf("\x0E\x01\x09\x04\x00\x01Levias?!<pause28> I've heard rumors about\nwhat's been going on out there, but\nlittle more.\n\nI'm afraid I lack sufficient knowledge\non this subject to be of help to you.\n\n\nGo speak with the head of physical\ntraining, <b<Instructor Owlan>>. I'm sure\nhe can teach you more about this\nparticular topic!")
          			  case 1:
/*<278>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<279>*/ 					printf("\x0E\x01\x09\x04\x00\x01I must admit I'm starting to think I\nmight need to get a Remlit of my own.\n<pause1E>The Triforce?! What's that?<pause28> Does it\nhave anything to do with little Mia?")
          				  case 1:
/*<156>*/ 					printf("\x0E\x01\x09\x04\x00\x01Lately I've been taking care of Mia\nfor the headmaster...\n\n\nIt's dangerous having her around.\nShe's so adorable that I'm starting to\nthink I need one of my own!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_04() {
/*< 34>*/ 	start()
/*<150>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 59, 'param3': 32}
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': -1, 'next': 152, 'param3': 50}
/*<152>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 149, 'param3': 49}
/*<149>*/ 	make_actor_do_something(0, 10)
/*<151>*/ 	{'type': 'type3', 'subType': 4, 'param1': 2578, 'param2': 2562, 'next': 35, 'param3': 13}
/*< 35>*/ 	printf("\x0E\x01\x0D\x02\x1906\x0E\x01\x08\x02\x1CDHey, Link!\nUp here!")
/*< 57>*/ 	set_camera(11, 0)
/*<243>*/ 	make_actor_do_something(1, 10)
/*<212>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 10, 'next': 260, 'param3': 17}
/*<260>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<261>*/ 		printf("\x0E\x01\x09\x04\xA0E\xA01Good morning to you,\nLink! I'm impressed\nwith your decision to test\nyour resolve in <r<Hero Mode>>!\nOh, but today's the day of the long-\nawaited <r<Wing Ceremony>>!\n\n\nAre you feeling ready? There's\nsomething I'd like to talk to you about.\n\n\n<g<Target>> me, and we can have a quick chat.")
          		flw_64:
/*< 64>*/ 		scene_flags[0 'Skyloft'][36 /* 0x5 10 */] = true;
/*<291>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 253, 'param3': 60}
/*<253>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 293, 'param3': 42}
/*<293>*/ 		scene_flags[0 'Skyloft'][27 /* 0x2 08 */] = true;
          	  case 1:
/*< 56>*/ 		printf("\x0E\x01\x09\x04\xA0E\xA01Good morning to you,\nLink! Today's finally\nthe day of the long-awaited\n<r<Wing Ceremony>>!\nAre you feeling ready? Oh, I just\nremembered. There's something I'd\nlike to ask you about.\n\n<g<Target>> me, and we can have a quick chat.")
          		goto flw_64
          	}
          }

          void entrypoint_108_21() {
/*<185>*/ 	start()
/*<191>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 189, 'param3': 32}
/*<189>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 186, 'param3': 13}
/*<186>*/ 	printf("\x0E\x01\x08\x02\x1CDHey, Link!")
/*<187>*/ 	printf("\x0E\x01\n\x04\x12Í\x0E\x01\x09\x04\n\x202I don't care how good a jumper you\nthink you are. You'll never reach a\nroof by just <g<dashing>>.")
/*<190>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 192, 'param3': 17}
/*<192>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 188, 'param3': 6}
/*<188>*/ 	set_camera(19, 0)
/*<229>*/ 	printf("There should be a wooden box up there.\nGrab and move one with (A), and use it\nas a platform of sorts.\n\nYou can climb onto a platform by \n<g<dashing >>or by tilting \x0E\x02\x04\x02\x9CD for a few\nmoments.")
          }

          void entrypoint_108_05() {
/*< 36>*/ 	start()
/*<266>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<267>*/ 		printf("")
/*<269>*/ 		switch (choice(2)) {
          		  case 0:
/*<270>*/ 			printf("")
          		  case 1:
/*<268>*/ 			printf("")
          		}
          	  case 1:
/*<265>*/ 		printf("")
          	}
          }

          void entrypoint_108_22() {
/*<207>*/ 	start()
/*<209>*/ 	switch (scene_flags[92 /* 0xA 10 */]) {
          	  case 0:
/*<210>*/ 		printf("\x0E\x01\x09\x04\x00\x01The ceremony won't start until you\nhave found your Loftwing.\n\n\nDon't worry about anything else.\nJust hurry up and find your bird!")
          	  case 1:
/*<211>*/ 		printf("\x0E\x01\x09\x04\x00\x01The start of the Wing Ceremony is\nbeing delayed until you find your\nLoftwing. Good news, isn't it?")
          	}
          }

          void entrypoint_108_06() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf("\x0E\x01\x09\x04\x0B\xA52You can't just ignore your instructor\nlike this, Link!\n\n\n<r<Target>> me, then talk with me!")
/*<294>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 60}
          }

          void entrypoint_108_23() {
/*<216>*/ 	start()
/*<224>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<225>*/ 		printf("\x0E\x01\x09\x04\x00\x01How are things, Link?!\nIs everything going well?\n\n\nIf there's anything else you need,\ndon't hesitate to come talk to me.\nI am your instructor, after all!")
          	  case 1:
/*<220>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*<223>*/ 			printf("\x0E\x01\x09\x04\x00\x01The Spiral Charge is a stressful\nmaneuver for most any Loftwing to\npull off.\n\nBut you and that red bird of yours...\nI'll bet you can handle it without\na sweat!")
          		  case 1:
/*<219>*/ 			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          			  case 0:
/*<222>*/ 				printf("\x0E\x01\x09\x04\x00\x05\x0E\x03\x01\x00Link... What are you\ndoing out at this hour?\n\n\nWhat's all this about Levias? Listen,\nthis isn't something I want to talk\nabout at this hour...\n\nCome back tomorrow morning. \nI'll tell you everything I know then.")
          			  case 1:
/*<218>*/ 				switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          				  case 0:
/*<221>*/ 					printf("\x0E\x01\x09\x04\x00\x01Well, Link... Are you close\nto finding Zelda?\n\n\nDon't give up! I believe if anyone can\nfind Zelda, it's you.")
          				  case 1:
/*<217>*/ 					printf("\x0E\x01\x09\x04\x00\x01You aren't allowed to ride your birds\nat night, so I'm afraid you won't be\nable to search for Zelda then, either.\n\nFor tonight, I suggest you go to bed and\nget some rest. You can start your\nquest tomorrow.\n\nYou won't make smart decisions if\nyou don't take the time to rest your\nmind and body.")
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_07() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf("\x0E\x01\x09\x04\n\xA00\x0E\x01\x08\x02\x2CD\x0E\x03\x01\x00Link!\n\n\n\n\x0E\x01\x08\x02\x2CDYou still don't get it?!")
          }

          void entrypoint_108_24() {
/*<231>*/ 	start()
/*<244>*/ 	switch (scene_flags[41 /* 0x4 02 */]) {
          	  case 0:
/*<237>*/ 		printf("\x0E\x01\x09\x04\x00\x02Hey now, Link! Now is\ncertainly not the time for that.\n\n\nHurry and find your Loftwing!\nYou should talk to the students inside\nthe academy. Perhaps they know\nsomething?")
          	  case 1:
/*<238>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<245>*/ 			printf("\x0E\x01\x09\x04\x00\x02Hey, Link! What do you\nthink you're doing slinking by your\ninstructors like that?!\n\nCome here for a moment.")
          		  case 1:
/*<232>*/ 			printf("\x0E\x01\x09\x04\x00\x02Hey, Link! What exactly\ndo you think you're doing ignoring\nyour instructor and just walking by\nlike that?\nCome over here and listen to what your\ninstructor has to say!")
          		}
          	}
          }

          void entrypoint_108_08() {
/*< 75>*/ 	start()
/*< 87>*/ 	switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          	  case 0:
/*<208>*/ 		printf("")
          	  case 1:
/*< 82>*/ 		switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          		  case 0:
/*< 84>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 31}
/*< 76>*/ 			printf("\x0E\x01\x09\x04\x00\x01Ah, Link. How goes your\nsearch for Zelda? Have you found her\nyet?\n\n\x0E\x01\x09\x04\x00\x05What? <pause28>Levias? Ah, so you've been\ntalking to the headmaster, I take it?\n\n\nIf I'm correct, Levias is the one inside\nthe thunderhead. But\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í<pause19>that's not the\nLevias that we all know.\n\n\x0E\x01\x06\x02\xFECDThat's...<pause28>\x0E\x01\x06\x02\x1CDa <r<monster>>!\n\n\n\n\x0E\x01\x09\x04\x00\x0FIt certainly looks like Levias, but last\ntime I approached him, he came\nrushing at me! And his eyes...\nThey were full of malice.\nPeople change... Or old, wizened\ncreatures change, rather. \x0E\x01\x06\x02\xFECDPerhaps\nit's more that...\x0E\x01\x06\x02Í<pause19>he is possessed by\nsomething. <pause19>That's how it felt to me.")
/*<202>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 77, 'param3': 6}
/*< 77>*/ 			printf("\x0E\x01\x09\x04\x00\x05What?<pause28> You want to talk to Levias?\n\n\n\n\x0E\x01\x06\x02\xFECDThat's...\x0E\x01\x06\x02Íimpossible. I don't think\nLevias is capable of listening. Not in\nhis current state, no.\n\n\x0E\x01\x06\x02\xFECDAnd...\x0E\x01\x06\x02Íeven if you were to get close\nenough to talk to him, it will likely end\nwith you getting brushed aside and sent\nflying to your death in a sea of clouds.")
/*<203>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 200, 'param3': 6}
/*<200>*/ 			printf("\x0E\x01\x09\x04\x00RWhat? <pause28>You're still planning on going?\n\n\n\n\x0E\x01\x06\x02\xFECDI see...\x0E\x01\x06\x02Í It's because you need to find\nZelda.\n\n\nI understand...<pause1E> I get the feeling\nnothing I could say would talk you\nout of it.")
/*<204>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 201, 'param3': 6}
/*<201>*/ 			printf("Hey! I have an idea. \nCome with me!")
/*< 85>*/ 			story_flags[362 /* us: 805A9B03 0x01, jp: 805ACD83 0x01 */] = true;
/*< 86>*/ 			changeScene(0, 0) // 
          		  case 1:
/*<275>*/ 			switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          			  case 0:
/*<276>*/ 				printf("\x0E\x01\x09\x04\x00\x01Oh, hello, Link!\n<pause1E>Hmm? The Triforce?\n\n\nSorry, I can't say I know what that is!\nPerhaps you should ask the\nheadmaster?")
          			  case 1:
/*< 83>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ah, Link! How's your\nsearch for Zelda going?\n\n\nSorry for leaving it all up to you.\nI know you must be doing everything\nyou can to find her.")
          			}
          		}
          	}
          }

          void entrypoint_108_09() {
/*< 78>*/ 	start()
/*< 79>*/ 	printf("\x0E\x01\x09\x04\x00\x02Levias is inside the thunderhead.\nHe's been acting so strangely...\nLike something has possessed him.\n\nIf we can somehow free him from\nwhatever it is that has a hold over\nhim, then there's a chance he will\nreturn to his senses.\nListen well, Link, because\nI'm about to teach you a very\npowerful bird-riding technique. \n\n\x0E\x01\x09\x04\x00\x03It's called the <r<Spiral Charge>>!")
/*<258>*/ 	set_camera(22, 0)
/*<256>*/ 	printf("Using the Spiral Charge, you can rid\nLevias of the blight that has hold\nof him!\n\nThe technique is quite easy to perform.\nAll you have to do is press \x0E\x02\x04\x02\x1ECD.\x0E\x01\x11\x02\x10CD\n\n\nHowever, the acceleration effect lasts\nlonger than any <r<attack>> move you've\nused so far. Maintaining stable flight\ncan be tricky.\nThis is a technique that only senior\nKnight Academy students who have\nmastered high-level flight skills are\nallowed to perform.\nIt's still a bit too early for you, but...\n<pause1E>This is an extraordinary circumstance,\nso I'll make an exception this time.\nHowever, I will test you.")
/*<259>*/ 	set_camera(-1, 0)
/*<257>*/ 	printf("\x0E\x01\x09\x04\x00\x04First, dive off this platform and call\nyour bird.")
/*< 93>*/ 	story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
/*< 98>*/ 	story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*<248>*/ 	zone_temp_flags[13 /* 0x0 20 */] = true;
          }

          void entrypoint_108_10() {
/*< 90>*/ 	start()
/*<128>*/ 	switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          	  case 0:
/*<129>*/ 		printf("\x0E\x01\x09\x04\x00\x0FWhat happened to Zelda...it's just\nterrible.\n\n\nBut there's no point in your kicking\nyourself about it. It was an accident...")
          	  case 1:
/*<127>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<196>*/ 			switch (scene_flags[91 /* 0xA 08 */]) {
          			  case 0:
/*<198>*/ 				printf("\x0E\x01\x09\x04\x00\x01Leave the ceremony to us. You just\nfocus on finding your bird as quickly\nas you can.")
          			  case 1:
/*<126>*/ 				printf("\x0E\x01\x09\x04\x00\x0FWhat's wrong, Link?\n<pause1E>Your bird won't come to you when\nyou call it?\n\nFor a Loftwing to ignore its master's\ncall...something must be very wrong\x0E\x01\x06\x02\xFECD...\n\n\nHave you talked to<b< Instructor Horwell\n>>about this? He's leading today's\nceremony and should be made aware\nof what's going on!\nI see... Well, if the headmaster is aware\nof the situation, then I'm sure he'll \ndelay the ceremony for you.\n\nYou just worry about finding that\nbird of yours!")
/*<199>*/ 				scene_flags[0 'Skyloft'][91 /* 0xA 08 */] = true;
          			}
          		  case 1:
/*<194>*/ 			switch (scene_flags[90 /* 0xA 04 */]) {
          			  case 0:
/*<195>*/ 				printf("\x0E\x01\x09\x04\x00\x01That reminds me... You always seem\nto confuse <b<Instructor Horwell >>and\nme!\n\nI am <b<Owlan>>, of course. I have white\nhair, and I teach practical skills.\n<b<Instructor Horwell >>has brown hair, and\nhe teaches academics. Don't forget it!")
          			  case 1:
/*< 91>*/ 				printf("\x0E\x01\x09\x04\x00\x01Hey, Link. The day of the\nWing Ceremony is finally upon us!\n\n\nIt's time to put what you've learned to\nuse... All those practical skills I taught\nyou, and all the academic prowess\n<b<Instructor Horwell>> taught you!\nWhile we're at it, do you remember how\nto <r<look around >>using (^)?\x0E\x01\x11\x02\x8CD\n\n\n<g<Press>> \x0E\x02\x04\x02\x22CD when you want to take a look\nat your surroundings!\x0E\x01\x11\x02\x8CD")
/*<197>*/ 				scene_flags[0 'Skyloft'][90 /* 0xA 04 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_108_11() {
/*<122>*/ 	start()
/*<162>*/ 	switch (scene_flags[20 /* 0x3 10 */]) {
          	  case 0:
/*<272>*/ 		switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          		  case 0:
/*<274>*/ 			printf("\x0E\x01\x09\x04\x00\x01Could there truly be a world below the\nclouds?\n\n\nShould it even exist, I imagine its\nterrain to be the exact opposite of our\nlush green world. It's probably nothing\nbut dust and rock...")
          		  case 1:
/*<271>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<273>*/ 				printf("\x0E\x01\x09\x04\x00\x01How goes your search for Zelda?\n\n\n\nRemember to find a bed and sleep if\nyou start getting tired. A quick nap can\nrestore your hearts and refresh your\nmind to explore after dark.")
          			  case 1:
/*<166>*/ 				printf("\x0E\x01\x09\x04\x00\x01Take good care of yourself, and best of\nluck in your search for Zelda!")
          			}
          		}
          	  case 1:
/*<167>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 123, 'param3': 31}
/*<123>*/ 		printf("\x0E\x01\x09\x04\x00\x11I heard the news, Link!\nZelda's fallen down through the clouds,\nand you're going to look for her.\nIs that right?\nThe headmaster told me there's land\nbeneath the clouds... Do you know\nanything about that?")
/*<168>*/ 		switch (adventure_pouch_has(9 0x0009)) {
          		  case 0:
/*<170>*/ 			printf("So that's the famous sword... Ah, and\na shield<pause0A>.<pause0A>.<pause0A>.<pause0A> It looks like you have one\nalready. Very good!\n\nHere\x2014take this as a little gift from me.")
          			flw_171:
/*<171>*/ 			give_item(4 0x04);
/*<255>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 172, 'param3': 12}
          			flw_172:
/*<172>*/ 			printf("If you're not sure how to use a shield,\n<b<Knight Commander Eagus >>at the\nSparring Hall will happily teach you.")
/*<165>*/ 			scene_flags[0 'Skyloft'][20 /* 0x3 10 */] = true;
/*<213>*/ 			switch (scene_flags[89 /* 0xA 02 */]) {
          			  case 0:
          			  case 1:
/*<214>*/ 				story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
/*<215>*/ 				scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
          			}
          		  case 1:
/*<246>*/ 			switch (is_adventure_pouch_full()) {
          			  case 0:
/*<247>*/ 				printf("So that's the famous sword... Ah, but\nit won't do you much good if you don't\nhave a shield to protect yourself with!\n\nUnfortunately, you don't seem to have\nspace to carry any other items. Here,\ntake this instead. Consider it a little\ngift from your friend and teacher.")
          				goto flw_171
          			  case 1:
/*<169>*/ 				printf("So that's the famous sword... Ah, but\nit won't do you much good if you don't\nhave a shield to protect yourself with!\n\nHere\x2014take this with you!")
/*<163>*/ 				give_item(116 0x74);
/*<164>*/ 				printf("The Wooden Shield is light and\nmaneuverable, but it's the weakest\nof all the shields. Also, keep in mind\nthat it's particularly vulnerable to fire.\nIf it breaks, you can buy a new one\nat the bazaar.\n\n\nTo equip a shield, <g<hold >>\x0E\x02\x04\x02\x28CD, select\nthe shield you want to use, and let\ngo of \x0E\x02\x04\x02\x28CD.\x0E\x01\x11\x02\xECD")
          				goto flw_172
          			}
          		}
          	}
          }

          void entrypoint_108_12() {
/*< 94>*/ 	start()
/*<205>*/ 	switch (scene_flags[77 /* 0x8 20 */]) {
          	  case 0:
/*<206>*/ 		printf("")
          	  case 1:
/*< 96>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*< 80>*/ 			printf("\x0E\x01\x09\x04\x00\nOh! You managed to destroy 10 targets\nwithin the time limit!\n\n\nIf you can control your bird that well,\nyou'll have no problems at all! I knew\nyou could do it, Link.\nAnd what a magnificent red bird...\nYou are henceforth permitted to use\nthe Spiral Charge attack as a qualified\nbird rider!")
/*< 81>*/ 			printf("The next thing we have to address is\njust how to go about finding Levias.\n\n\nMaybe the <r<owner of the Lumpy\nPumpkin >>might know something.\nEvery year he makes an offering of\nhis pumpkin soup for Levias.\nGo to the Lumpy Pumpkin and\nask him what he knows!")
/*<106>*/ 			scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = true;
          		  case 1:
/*< 95>*/ 			switch (story_flags[641 /* us: 805A9B1D 0x04, jp: 805ACD9D 0x04 */]) {
          			  case 0:
/*< 97>*/ 				printf("\x0E\x01\x09\x04\x00\x0FIf you can't destroy 10 targets in \nunder 120 seconds, I can't in good\nconscience give you permission to\nuse this dangerous technique.\nI'll be here for a while, so why don't you\ntake a break and cool off? Come talk\nto me when you want to try again. ")
/*< 99>*/ 				story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = false;
/*<226>*/ 				story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = false;
/*<227>*/ 				story_flags[641 /* us: 805A9B1D 0x04, jp: 805ACD9D 0x04 */] = false;
/*<104>*/ 				scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = true;
          			  case 1:
          			}
          		}
          	}
          }

          void entrypoint_108_13() {
/*<100>*/ 	start()
/*<102>*/ 	switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          	  case 0:
/*<103>*/ 		printf("\x0E\x01\x09\x04\x00\x01The Lumpy Pumpkin is a little\ngathering spot on an oblong island to\nthe southeast of Skyloft.\n\nThe owner's daughter, <b<Kina>>, works\nthere. She has the most lovely voice.\n\n\n<pause1E>I'm also\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Ía fan of hers. But you don't\nneed to tell anyone else about that,\ndo you?")
          	  case 1:
/*<105>*/ 		switch (scene_flags[77 /* 0x8 20 */]) {
          		  case 0:
          			flw_107:
/*<107>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hey, Link! Want to try\nsome Spiral Charge training?\n[1]Yep![2-]Later.")
/*<108>*/ 			switch (choice(2)) {
          			  case 0:
/*<109>*/ 				printf("\x0E\x01\x09\x04\x00\x03Excellent. That's what I want to hear!\nWell then, dive off this platform.")
/*<111>*/ 				scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = false;
/*<112>*/ 				story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
/*<113>*/ 				story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*<250>*/ 				zone_temp_flags[13 /* 0x0 20 */] = true;
          			  case 1:
/*<110>*/ 				printf("I think it's fine to wait until you feel\nready!\n\n\nI'll be here for a while. Come back\nanytime!")
/*<252>*/ 				zone_temp_flags[13 /* 0x0 20 */] = false;
          			}
          		  case 1:
/*<121>*/ 			switch (story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */]) {
          			  case 0:
/*<101>*/ 				printf("\x0E\x01\x09\x04\x00\x01What's wrong?! Hurry up and dive off\nthe platform! Are you having second\nthoughts?\n[1]I'll do it![2-]I quit.")
/*<116>*/ 				switch (choice(2)) {
          				  case 0:
/*<120>*/ 					printf("\x0E\x01\x09\x04\x00\x03Ah! That's the answer I was looking\nfor. Take to the skies,\nLink!")
/*<249>*/ 					zone_temp_flags[13 /* 0x0 20 */] = true;
          				  case 1:
/*<117>*/ 					story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = false;
/*<118>*/ 					story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = false;
/*<119>*/ 					printf("I think it's fine to wait until you feel\nready!\n\n\nI'll be here for a while. Come back\nanytime!")
/*<251>*/ 					zone_temp_flags[13 /* 0x0 20 */] = false;
          				}
          			  case 1:
          				goto flw_107
          			}
          		}
          	}
          }

          void entrypoint_108_30() {
/*<141>*/ 	start()
/*<142>*/ 	printf("Listen up, Link!\n\n\n\nI taught your Loftwing to perform a\n<g<Spiral Charge >>when you press \x0E\x02\x04\x02\x1ECD.")
          }

          void entrypoint_108_14() {
/*<114>*/ 	start()
/*<115>*/ 	printf("")
          }

          void entrypoint_108_31() {
/*<143>*/ 	start()
/*<146>*/ 	printf("Use the <r<Spiral Charge >>attack to break\nthe <r<10 targets >>placed around the\nfloating boulders up ahead.")
          }

          void entrypoint_108_15() {
/*<124>*/ 	start()
/*<125>*/ 	printf("\x0E\x01\x09\x04\x00\x02Hey, Link! Where do you\nthink you're going? This is a\ncompetition! Dive off the platform!")
          }

          void entrypoint_108_32() {
/*<144>*/ 	start()
/*<147>*/ 	printf("If you can destroy 10 targets in under \n<r<120 seconds>>, I will recognize you as\na skilled bird rider.")
          }

          void entrypoint_108_16() {
/*<130>*/ 	start()
/*<283>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<285>*/ 		switch (zone_temp_flags[15 /* 0x0 80 */]) {
          		  case 0:
/*<287>*/ 			printf("\x0E\x01\x09\x04\x00\x16This gives me pause... The monsters\nthat usually prowl Skyloft at night are\nnowhere to be seen, and the Remlits\nno longer show aggressive behavior.\nWhat could have happened?")
          		  case 1:
/*<284>*/ 			printf("\x0E\x01\x09\x04\x00\x0DLook, Link! Though night\nhas come, Mia exhibits none of the\nnocturnal aggressiveness we've come\nto expect in Remlits!\nIt's just amazing!")
/*<286>*/ 			zone_temp_flags[15 /* 0x0 80 */] = true;
          		}
          	  case 1:
/*<157>*/ 		switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          		  case 0:
/*<158>*/ 			printf("\x0E\x01\x09\x04\x00\x16I keep my distance from Mia at night.\n\n\n\nThere was that one time when she\nsnuck into the academy after nightfall.\n\n\nI recommend that you be extra careful\nwhen you go out at night. Oh dear...\nThat caused quite the commotion.")
          		  case 1:
/*<131>*/ 			printf("\x0E\x01\x09\x04\x00\x04It's dangerous to be out at night.\nYes, best to avoid it entirely!\n\n\nEven the headmaster's darling Mia\nturns quite feral when night falls...\nA mysterious energy settles over\nSkyloft with the darkness.")
          		}
          	}
          }

          void entrypoint_108_33() {
/*<145>*/ 	start()
/*<148>*/ 	printf("All right! Off you go!")
          }

          void entrypoint_108_17() {
/*<132>*/ 	start()
/*<133>*/ 	printf("\x0E\x01\x09\x04\x00\x02\x0E\x03\x01\x00Link! Where are you\nheaded?\n\n\nDive off this platform and call your\nLoftwing!")
          }

          void entrypoint_108_18() {
/*<134>*/ 	start()
/*<135>*/ 	printf("\x0E\x01\x09\x04\x00\x02Ah, Link! You'd like a\nlesson from me, even at a time like\nthis?\n[1]Please![2-]No...")
/*<136>*/ 	switch (choice(2)) {
          	  case 0:
/*<138>*/ 		printf("Well, well! Such enthusiasm!\n\n\n\nAllow me tell you about the history of\nSkyloft!\n\n\nSkyloft is an island that has floated\nhere for ages... Thousands of years.\n\n\nOur ancestors have always lived on this \nisland, as well as the surrounding\nislands in the sky.\n\n\x0E\x01\x09\x04\x09\xA00There is an impenetrable barrier of\nclouds below Skyloft. Nobody who has\nfallen down through the clouds has\never been seen again.\nThey say there is a vast expanse of\npure nothingness beneath the clouds!\n\n\n\x0E\x01\x09\x04\n\xA00Ah, but that's a good place to leave it\ntoday. You'd better go prepare for the\nWing Ceremony.")
          	  case 1:
/*<137>*/ 		printf("I... I see. Well, classes are canceled\ntoday due to the Wing Ceremony!\n\n\nDon't you think you'd better head\noutside and get ready for the\nceremony?")
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
/*< 62>*/ 			printf("\x0E\x01\x09\x04\x00\x01What's wrong, Link?\nYou're looking a little pale...\n\n\nWhat?!<pause32> Your Loftwing is missing?!\nHow strange and troubling.\nDo you\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Íthink you can find him?\n\nYou're going to start looking for him\nnow?! How will you make it back in \ntime to fly in the ceremony?!\n\nIt looks like your participation in the\nceremony hinges on <r<feather>> or\nnot you can find that bird on time\x0E\x01\x06\x02\xFCCD...<pause1E>\n\n\x0E\x01\x09\x04\x00\x05\x0E\x01\x06\x02\x2CDAhem. Excuse me...<pause1E>")
/*<159>*/ 			switch (scene_flags[30 /* 0x2 40 */]) {
          			  case 0:
/*<160>*/ 				printf("I see... So the headmaster has\nsummoned me?\n\n\nAll right then, I'll go speak with him\nimmediately.\n\n\nI still owe you for helping me out\nearlier, so don't worry about the\nceremony for now. You focus on\nfinding your Loftwing!")
          				flw_72:
/*< 72>*/ 				scene_flags[0 'Skyloft'][41 /* 0x4 02 */] = true;
          			  case 1:
/*<161>*/ 				printf("Maybe that's life's way of getting\nback at you for not listening to your\ninstructors...\n\nAnyway, never mind that... So you say\nthe headmaster is summoning me?\n\n\nIn that case, don't you worry about the\nceremony. Just go find that bird of\nyours!")
/*<239>*/ 				story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = false;
          				goto flw_72
          			}
          		}
          	  case 1:
/*< 48>*/ 		switch (scene_flags[28 /* 0x2 10 */]) {
          		  case 0:
/*< 51>*/ 			switch (scene_flags[30 /* 0x2 40 */]) {
          			  case 0:
/*< 10>*/ 				printf("\x0E\x01\x09\x04\n\x404Ahhh, I'm so glad Mia is safe.\n\n\n<b<\n>>\x0E\x01\x09\x04\x00\xA00Such an odd creature, the <b<Remlit>>.\nShe may look cuddly now, but at night,\nit's another story entirely!\n[1]Why?[2]At night?")
/*< 11>*/ 				switch (choice(2)) {
          				  case 0:
/*< 12>*/ 					printf("Hmm... You don't know what happens\nto Remlits at night?\n\n\nIt's frightening, really...")
          					flw_13:
/*< 13>*/ 					printf("\x0E\x01\x09\x04\x00\x16When night falls here in Skyloft, \ncreatures like this Remlit become\npossessed by an evil force.\n\nAnd monsters that hide in caves during\nthe day make their way out and prowl\nin the dark of night.\n\nThat is why nobody dares to leave their\nhome at night. Certainly not if they can\navoid it.\n\nIt might be fine for youngsters like \nyou, well trained in the way of the\nknight. You can defend yourself!\n\nBut still, it would be wise to keep\nyour guard up when you're out and\nabout after dark!")
          				  case 1:
          					goto flw_13
          				}
          			  case 1:
/*< 92>*/ 				set_camera(17, 0)
/*< 49>*/ 				printf("\x0E\x01\x09\x04\x0F\x40DNice work! You've brought her back\nsafe and sound!\n\n\n<pause23>\x0E\x01\x09\x04\x09\x400Sorry for troubling you with this.\nI know you're busy, Link!\nI suppose I should feed Mia now...")
/*<154>*/ 				set_camera(20, 0)
/*< 52>*/ 				printf("Please tell the headmaster that we\nfound his pet. He should be up by\nthe <r<Statue of the Goddess>>.")
/*<240>*/ 				set_camera(21, 0)
/*<241>*/ 				printf("I believe Zelda is there with him, so\nyou should hurry along.\n\n\nOh yes, I should give you a reward...\nIt's not much, but please take this.\nEr, don't tell the others.")
/*<242>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 50, 'param3': 42}
/*< 50>*/ 				scene_flags[0 'Skyloft'][30 /* 0x2 40 */] = true;
/*<292>*/ 				give_item(4 0x04);
          			}
          		  case 1:
/*< 46>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*< 47>*/ 				printf("\x0E\x01\x09\x04\x00\x06What is it, Link?")
/*< 61>*/ 				set_camera(14, 0)
/*< 60>*/ 				printf("If you dash at the wall from there,\nyou'll be able to <g<hang >>from the edge!\n\n\nDo be careful when you're hanging\noff the ledge, and keep an eye on\nyour <r<stamina gauge>>.")
          			  case 1:
/*<  6>*/ 				switch (temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<  7>*/ 					printf("\x0E\x01\x09\x04\x09\x400So will you help by finding Mia and\nbringing her back to me?\n[1]Sure![2]Nah.")
/*<  8>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_2:
/*<  2>*/ 						printf("\x0E\x01\x09\x04\x09\x40DFantastic! So you'll do it?! I know\nyou're in a hurry, so I really appreciate\nyour taking the time to help.")
/*< 43>*/ 						{'type': 'type3', 'subType': 4, 'param1': 3328, 'param2': 0, 'next': 44, 'param3': 22}
/*< 44>*/ 						printf("\x0E\x01\x09\x04\x09\x400You should be able to climb up\nsomewhere over there. If you hang off\nthat ledge there, you can climb onto\nthe roof from the other side.\n\x0E\x01\x07\x04\xFF00\x00I'm terribly sorry, but I know you're\nquite the climber! I really do\nappreciate it.")
/*< 45>*/ 						temp_flags[2 /* 0x1 04 */] = true;
/*<234>*/ 						story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
          					  case 1:
/*<228>*/ 						printf("\x0E\x01\x09\x04\x00\xA00Ah, I see...\n\n\n\nCan you please tell the headmaster\nthat Instructor Horwell has found Mia\nand that he shouldn't worry?")
          					}
          				  case 1:
/*< 68>*/ 					switch (scene_flags[38 /* 0x5 40 */]) {
          					  case 0:
/*<230>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 1, 'param3': 31}
/*<  1>*/ 						printf("\x0E\x01\x09\x04\x00\x01So what are you up to? Rushing to get\nsome last-minute bird-riding practice\nin this morning, Link?\n\nOh? <pause1E>You have someone to meet?\n<pause1E>Ah, <b<Zelda>>'s waiting for you, is she?")
/*< 42>*/ 						printf("Perfect timing, then!\n\n\n\nYou see, Zelda's father\x2014Headmaster\n<b<Gaepora>>\x2014has a pet named <r<Mia>>, and,\nwell...she's scampered off again.")
/*<236>*/ 						set_camera(12, 0)
/*<235>*/ 						printf("Look!\x0E\x01\n\x04\x10Í Over there! Do you see her?\n\n\n\n\x0E\x01\n\x04\xFFFFÍThe headmaster is so busy working\nwith Zelda preparing for the\nceremony...\n\nI thought that maybe I should feed her,\nbut the ceremony is about to start and\nI just put on a fresh set of clothes\nand, well...you see...\n\x0E\x01\x07\x04\xFF00\x00Will you help me out and go retrieve\nMia for me?\n[1]I'm on it![2]I'm busy...")
/*<  4>*/ 						switch (choice(2)) {
          						  case 0:
/*< 54>*/ 							set_camera(-1, 0)
          							goto flw_2
          						  case 1:
/*< 55>*/ 							set_camera(-1, 0)
/*<  3>*/ 							printf("\x0E\x01\x09\x04\x00\xA00Ah, I see...\n\n\n\nCan you please tell the headmaster\nthat Instructor Horwell has found Mia\nand that he shouldn't worry?")
/*<  5>*/ 							temp_flags[1 /* 0x1 02 */] = true;
/*<233>*/ 							story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
          						}
          					  case 1:
/*< 65>*/ 						switch (scene_flags[37 /* 0x5 20 */]) {
          						  case 0:
/*< 89>*/ 							set_camera(9, 0)
/*< 67>*/ 							printf("\x0E\x01\x09\x04\x0B\xA06What are you waiting for?!\nListen to your instructor for once!")
          						  case 1:
/*<153>*/ 							story_flags[565 /* us: 805A9B19 0x10, jp: 805ACD99 0x10 */] = false;
/*<173>*/ 							{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 100, 'next': 88, 'param3': 17}
/*< 88>*/ 							set_camera(9, 0)
/*<263>*/ 							switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          							  case 0:
/*<264>*/ 								printf("\x0E\x01\x09\x04\x0B\xA0DExcellent! Always remember you can\n<g<target >>someone to talk to them easily.\n\n\n\x0E\x01\x09\x04\x00\xC04You're looking at me like you already\nknow all this. There's no harm in going\nover the basics, you know. \n\n\x0E\x01\x09\x04\x00\xA00<r<In Hero Mode>>...<pause1E><pling>you'll <r<lose hearts\ntwice as fast>>, so it's doubly important\nto know how to effectively <g<target>>.\n\nOh, but it's a little silly to carry on a\nconversation from this distance.\nWhy don't you come join me up here?")
          								flw_58:
/*< 58>*/ 								set_camera(10, 0)
/*< 41>*/ 								printf("\x0E\x01\x09\x04\x0B\xA00You should be able to climb up if you\n<g<dash>> up to the top of that wooden box, \ndon't you think?\n\nThen you can make that jump\nfairly easily!\n\n\nTry climbing up here!")
/*< 66>*/ 								scene_flags[0 'Skyloft'][37 /* 0x5 20 */] = true;
/*<290>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': -1, 'param3': 60}
          							  case 1:
/*<262>*/ 								printf("\x0E\x01\x09\x04\x0B\xA0DExcellent! Always remember you can\n<g<target >>someone to talk to them easily.\n\n\nAnd even when there isn't anything to\ntarget, it's a convenient way to quickly\nface your view forward.\n\nOh, but it's a little silly to carry on a\nconversation from this distance.\nWhy don't you come join me up here?")
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
/*<139>*/ 	start()
/*<140>*/ 	printf("\x0E\x01\x09\x04\x00\x04Hey now! That's my seat that you've\nperched yourself on. Students must sit\nin the student seating!")
          }

          void entrypoint_108_02() {
/*< 14>*/ 	start()
/*< 38>*/ 	switch (story_flags[31 /* us: 805A9ADA 0x80, jp: 805ACD5A 0x80 */]) {
          	  case 0:
/*< 21>*/ 		printf("\x0E\x01\x09\x04\x00\x02What are you doing? <g<Dash >>off the ledge\nwith (B), <r<dive >>down, and get on your\nbird!\n\nRemember, you'll need to press (v) to\ncall your bird!\x0E\x01\x11\x02\x9CD")
          	  case 1:
/*< 28>*/ 		set_camera(1, 0)
/*< 22>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 23, 'param3': 32}
/*< 23>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 24, 'param3': 32}
/*< 24>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 6, 'next': 176, 'param3': 32}
/*<176>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 179, 'param3': 32}
/*<179>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 25, 'param3': 32}
/*< 25>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 26, 'param3': 17}
/*< 26>*/ 		{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 0, 'next': 27, 'param3': 17}
/*< 27>*/ 		{'type': 'type3', 'subType': 1, 'param1': 6, 'param2': 0, 'next': 180, 'param3': 17}
/*<180>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 19, 'next': 15, 'param3': 13}
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\x02Your attention, please. At last we are\nready to begin the <r<Wing C>><r<eremony>>.\n\n\nI was beginning to worry that we'd have\nto proceed without Link,\nbut luckily that is no longer a concern.\n\nI'm glad you could all make it. Before\nwe start, I'll explain the rules for\ntoday's competition.")
          		flw_16:
/*< 16>*/ 		printf("I have attached a small statuette to this\nbird, who I will then release to the\nskies.\n\nOn my signal, <g<dash >>from the starting line\nand <r<dive >>off the ledge. Once you are in\nthe air, mount your Loftwing.\n\nRemember to <g<call your bird>> promptly\nwith (v) once you dive off the edge.\x0E\x01\x11\x02\x9CD\n\n\nWhoever catches the bird and claims\nthe <r<statuette>> will be this year's champion.\n\n\n\x0E\x01\n\x04\x02ÍThose are the rules. Simple enough,\nI should think, but do you need to hear\nthem again?\n[1]Nope![2?]Again!")
/*< 18>*/ 		switch (choice(2)) {
          		  case 0:
/*< 30>*/ 			set_camera(3, 0)
/*< 17>*/ 			printf("\x0E\x01\x09\x04\x00\x03\x0E\x01\x08\x02\x1CDExcellent.\n\n\n\nAs you well know, today's champion\nwill graduate to the next class, bringing\nhim one step closer to knighthood.\n\nHe will also receive a <r<gift >>from the\nyoung woman chosen to play the role\nof the <r<goddess >>in this year's ritual.\n\nToday is a special day for many\nreasons, but it is also the 25th\nanniversary of our fine institution.\n\nTo celebrate the occasion, today's\nchampion shall also receive his gift\nhigh <r<atop the Statue of the Goddess>>. \n\nI hear the young woman performing\nthe role of the goddess this year has\ncrafted the gift herself.\n\nAnd as you all well know, the role of\nthe goddess this year will be\nperformed by...")
/*<184>*/ 			{'type': 'type3', 'subType': 4, 'param1': 267, 'param2': 3840, 'next': 177, 'param3': 13}
/*<177>*/ 			set_camera(5, 0)
/*<174>*/ 			printf("\x0E\x01\x09\x04\x100\x09\x0E\x01\x08\x02\x1CDThe lovely Zelda!")
/*<193>*/ 			{'type': 'type3', 'subType': 4, 'param1': 1048, 'param2': 3084, 'next': 31, 'param3': 13}
/*< 31>*/ 			set_camera(2, 0)
/*< 20>*/ 			printf("Let's see your finest flying out there.\nShow me just how hard you've\nbeen practicing.\n\nAlso, I want to see good, clean flying.\nAnyone caught interfering with other\nriders will answer to me!")
/*<178>*/ 			set_camera(6, 0)
/*<181>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 4, 'next': 182, 'param3': 50}
/*<182>*/ 			{'type': 'type3', 'subType': 4, 'param1': 512, 'param2': 23, 'next': 175, 'param3': 13}
/*<175>*/ 			printf("\x0E\x01\x08\x02\x1CDThat goes \x0E\x01\x09\x04\x419\x1700double for you,\nGroose!")
/*< 40>*/ 			set_camera(4, 0)
/*<183>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 53, 'param3': 50}
/*< 53>*/ 			make_actor_do_something(0, 0)
/*< 39>*/ 			printf("\x0E\x01\x09\x04\x00\x02All right, gentlemen, line up. At my\ncommand, the competition will begin!")
/*< 37>*/ 			story_flags[31 /* us: 805A9ADA 0x80, jp: 805ACD5A 0x80 */] = true;
          		  case 1:
/*< 19>*/ 			printf("\x0E\x01\x09\x04\x00RVery well... But listen close this time!")
/*< 29>*/ 			set_camera(1, 0)
          			goto flw_16
          		}
          	}
          }

