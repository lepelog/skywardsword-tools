          void entrypoint_100_11() {
/*< 17>*/ 	start()
/*<172>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<176>*/ 		switch (temp_flags[16 /* 0x3 01 */]) {
          		  case 0:
/*<175>*/ 			printf("\x0E\x01\x09\x04\x00\x04You can't go flying at night.\nYou just can't.\n\n\nIf you want to go out flying, tuck\nyourself into bed and sleep until\ntomorrow morning.")
          		  case 1:
/*<177>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 173, 'param3': 31}
/*<173>*/ 			printf("\x0E\x01\x09\x04\x00\x01What are you doing out here\nso late?!\n\n\n\x0E\x01\x09\x04\x0C\xC09You what?! You can't seriously think\nyou're going to ride your Loftwing at\nthis time of night, do you?!\n\n\x0E\x01\x09\x04\x09\xC00Listen up. Loftwings can't fly at\nnight! They have terrible night vision,\nand only the few who have received\nspecial training can fly in the dark.\n\x0E\x01\x09\x04\x08\x400If you really need to fly, you'll just\nhave to wait for daylight.")
/*<174>*/ 			temp_flags[16 /* 0x3 01 */] = true;
          		}
          	  case 1:
/*< 19>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 39>*/ 				printf("\x0E\x01\x09\x04\x0B\xC00You won't find your bird hanging\naround here unless he's enrolling in\nthe academy. You should stick with\nsearching outside for now.\nI'll be asking around for leads too,\nand I'll let you know if I find out\nanything that'll help.")
          			  case 1:
/*< 20>*/ 				printf("\x0E\x01\x09\x04\x00\xC06You're not still wandering around\nthe academy, are you?!\n\n\n\x0E\x01\x09\x04\x0C\xC09What?!<pause14> Your Loftwing won't come\nwhen you call for it? \x0E\x01\x09\x04\x01\xC00Why would a\nguardian bird not come when it's\ncalled?\nYou know, I've never heard of this\never happening before, so I can't even\ntell you what you're doing wrong...\n\n\x0E\x01\x09\x04\x08\x400But a good senior never hangs an\nunderclassman out to dry. We'll figure\nthis out together!\n\n\x0E\x01\x09\x04\x0B\xC00You go to the plaza, and ask people\nthere if they know anything. In the\nmeantime, I'll ask around here.")
/*< 21>*/ 				scene_flags[0 'Skyloft'][18 /* 0x3 04 */] = true;
          			}
          		  case 1:
/*< 36>*/ 			switch (scene_flags[35 /* 0x5 08 */]) {
          			  case 0:
/*< 37>*/ 				printf("\x0E\x01\x09\x04\x0C\x405If you need to know anything about\nbirds, you just let ol' <b<Pipit>> know!")
          			  case 1:
/*< 18>*/ 				printf("\x0E\x01\x09\x04\x09\x401Morning, Link!\n\n\n\n\x0E\x01\x09\x04\x08\x400So...today's the <r<Wing Ceremony>>.\nAre you ready?\n\n\nAll I'm saying is everyone else is out\npracticing at the plaza, but you seem\npretty...relaxed about the whole thing.\n\n\x0E\x01\x09\x04\x0B\x400Of course, that <r<Crimson Loftwing >>of\nyours is something special. I'd feel\npretty confident riding him, too!\n\nMy bird won the last ceremony, but\neven I don't think he could beat that\nred terror of yours...\n\n\x0E\x01\x09\x04\x08\x400Of course, a bird's true speed in a\nrace always comes down to the skill\nof the rider.\n\nI'm something of a bird researcher\naround here. \x0E\x01\x09\x04\x0C\x405So, you know, if you\never find yourself in need of some\nbird expertise, come see ol' <b<Pipit>>. ")
/*< 35>*/ 				scene_flags[0 'Skyloft'][35 /* 0x5 08 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_100_12() {
/*< 22>*/ 	start()
/*< 26>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*<145>*/ 		switch (scene_flags[64 /* 0x9 01 */]) {
          		  case 0:
/*<146>*/ 			printf("\x0E\x01\x09\x04\x00\x06<b<Pipit>> should be in front of the <r<Sparring\nHall>>. You know, at the back of the\nKnight Academy.")
          		  case 1:
/*< 27>*/ 			printf("\x0E\x01\x09\x04\x08\x406Huh?<pause28> Why do you want to know where\n<b<Groose >>hangs out?\n\n\n\x0E\x01\x09\x04\x00\xD00Is he up to no good again?\n\n\n\nI\x0E\x01\x09\x04\x0C\x400 have no clue where he hangs out.\n<b<Pipit>> probably does, though.\nYou should talk to him.\n\n\x0E\x01\x09\x04\x08\xE04And I think he was looking for you\njust now\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í He should be in front of the\n<r<Sparring Hall>>.")
/*<144>*/ 			scene_flags[0 'Skyloft'][64 /* 0x9 01 */] = true;
          		}
          	  case 1:
/*< 25>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<141>*/ 			switch (scene_flags[63 /* 0x6 80 */]) {
          			  case 0:
/*<143>*/ 				printf("\x0E\x01\x09\x04\x08\xE06<b<Pipit>> is the one to ask about birds.\nI saw him downstairs a minute ago.\nWhy don't you look for him there?")
          			  case 1:
/*<150>*/ 				set_camera(14, 0)
/*<148>*/ 				make_actor_do_something(0, 0)
/*<139>*/ 				printf("\x0E\x01\x09\x04\n\xE56\x0E\x01\x08\x02\xFFCDDon't men open doors for a lady anymore?\nHow long am I supposed to stand here waiting\nfor a little chivalry?! Ugh...")
/*<151>*/ 				set_camera(-1, 0)
/*<149>*/ 				make_actor_do_something(1, 0)
/*< 24>*/ 				printf("\x0E\x01\x09\x04\x01\x406Oh! It's you, Link... Say,\nyou look all flustered. Did something\nhappen?\n\n\x0E\x01\x09\x04\x08\xD00What?! <pause28>You can't find your Loftwing?\n\n\n\n\x0E\x01\x09\x04\x0C\xD12Umm\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í I don't know what to tell you.\nI've been here at school the whole time.")
/*<142>*/ 				printf("\x0E\x01\x09\x04\x08\xE06<b<Pipit>> is the one to ask about birds.\nI saw him downstairs a minute ago.\nWhy don't you look for him there?")
/*<140>*/ 				scene_flags[0 'Skyloft'][63 /* 0x6 80 */] = true;
          			}
          		  case 1:
/*<136>*/ 			switch (scene_flags[62 /* 0x6 40 */]) {
          			  case 0:
/*<138>*/ 				printf("\x0E\x01\x09\x04\x08\x900If you win today's <r<ceremony>>, you'll\nbecome a <r<senior >>like us. Good luck!")
          			  case 1:
/*< 23>*/ 				printf("\x0E\x01\x09\x04\x08\x901Good morning, Link!\nGood luck in the <r<Wing Ceremony\n>>today!\n\n\x0E\x01\x09\x04\x00\x400Just think: if you win today, you'll\nbecome a <r<senior>> like us and you'll be\na very big step closer to graduating as\na <r<knight>>.\n\x0E\x01\x09\x04\x08\x900You'll even get a <r<knight's uniform>> like\nI'm wearing. Something tells me you'll\nbe pretty handsome in it!\n\n\x0E\x01\x09\x04\x0B\x713But still not as dreamy as...him...")
/*<137>*/ 				scene_flags[0 'Skyloft'][62 /* 0x6 40 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_100_13() {
/*<158>*/ 	start()
/*<159>*/ 	printf("\x0E\x01\x09\x04\x00\x01Look at this thing. Who knows how long\nthis statue has been here?\n\n\nAnd it only has one eye. Poor thing...\nYou probably know this, but you\ncan press (C) to look around! \x0E\x01\x11\x02\x6CD")
          }

          void entrypoint_100_30() {
/*<180>*/ 	start()
/*<181>*/ 	set_camera(30, 0)
/*<183>*/ 	set_camera(31, 0)
/*<182>*/ 	{'type': 'type3', 'subType': 1, 'param1': 25, 'param2': 0, 'next': -1, 'param3': 40}
          }

          void entrypoint_100_14() {
/*<160>*/ 	start()
/*<165>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<166>*/ 		printf("\x0E\x01\x09\x04\x00\x04Mmm-MMM! Another day, another\ntasty soup!")
          	  case 1:
/*<161>*/ 		printf("\x0E\x01\x09\x04\x00\x02That boy really gets me steamed!\nIt's nearly time for dinner, and he's\nnowhere to be seen! He'd better not\nbe chasing bugs again.")
          	}
          }

          void entrypoint_100_15() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf("\x0E\x01\x09\x04\x00\x07Where are you going with that?\nThat's no use to me there!\n\n\n\x0E\x01\x09\x04\x00\x1200Stop fiddling around, and finish what\nyou came to do!")
          }

          void entrypoint_100_16() {
/*<167>*/ 	start()
/*<194>*/ 	switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          	  case 0:
/*<196>*/ 		printf("\x0E\x01\x09\x04\x08\x909Ah! \x0E\x03\x01\x00Link! Thank you\nso much! I'm so happy now...and it's\nall because of you.\n\nMy guy is going out on patrol again\ntonight. It's not even required of\nhim--it's just something he feels he\nhas to do...\n\x0E\x01\x09\x04\x0E\x90AJust thinking about him makes my\nheart start pounding like I just ran\nup a flight of stairs!")
          	  case 1:
/*<192>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<195>*/ 			printf("\x0E\x01\x09\x04\x00\xE12This letter from Cawlin... I don't know\nwhat to do about it!\n\n\n\x0E\x01\x09\x04\x0B\xE00What will Pipit think if he finds out\nabout this?")
          		  case 1:
/*<188>*/ 			switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          			  case 0:
/*<197>*/ 				switch (zone_temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
          					flw_193:
/*<193>*/ 					switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          					  case 0:
          					  case 1:
/*<190>*/ 						printf("\x0E\x01\x09\x04\x08\xD57You need to talk to me? Just come find\nme sometime during the day tomorrow.")
/*<198>*/ 						zone_temp_flags[16 /* 0x3 01 */] = true;
          					}
          				  case 1:
/*<189>*/ 					printf("\x0E\x01\x09\x04\n\xE57What do you think you're doing in a\ngirl's room at this time of night?!\n\n\nI need to take a bath, so get out of\nhere, Link!\n\n\n\x0E\x01\x09\x04\x0C\xE14Well...I mean I WOULD take a bath if\nwhoever is in there now would hurry\nup and get out. They've been in there\na loooong time...")
/*<191>*/ 					switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          					  case 0:
          						goto flw_193
          					  case 1:
          					}
          				}
          			  case 1:
/*<168>*/ 				printf("\x0E\x01\x09\x04\x0C\xD14I can't believe Zelda fell off her bird\nand then down through the clouds.\nShe's so good at riding her bird...\n\n\x0E\x01\x09\x04\n\xD06You saw a ghost?! Are you sure you\nweren't just in shock and maybe\nimagined it?")
          			}
          		}
          	}
          }

          void entrypoint_100_17() {
/*< 40>*/ 	start()
/*< 41>*/ 	printf("\x0E\x01\x09\x04\x01\x02\x0E\x03\x01\x00Link!\x0E\x01\x0D\x02\x1906")
/*<127>*/ 	set_camera(9, 0)
/*<128>*/ 	printf("If you're heading over to the plaza,\nthe quickest way is out the door on the\nground floor.\n\n\x0E\x01\x09\x04\x09\x400The exit on the top floor is still locked,\nso you obviously can't get out there.")
/*<130>*/ 	set_camera(11, 0)
/*<129>*/ 	printf("\x0E\x01\x09\x04\x0C\xC16What's taking the lunch lady so long?\nI'm going to have a word with her later.")
          }

          void entrypoint_100_18() {
/*< 70>*/ 	start()
/*< 91>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 92>*/ 		switch (story_flags[28 /* us: 805A9ADA 0x10, jp: 805ACD5A 0x10 */]) {
          		  case 0:
/*< 94>*/ 			printf("\x0E\x01\x09\x04\x00\xC05Listen. As an upperclassman, I've got\nsome advice for you. There's something\nyou should always do before you\ngo somewhere dangerous.\nYou should find a bird statue and <r<send\nyour prayers to the goddess to save\nyour progress>>. Make it part of your\nroutine!\nThe <r<bird statues>> you can pray to are\nmarked on your map. It should be easy\nto find one.")
          		  case 1:
/*< 93>*/ 			printf("\x0E\x01\x09\x04\x0C\xC05If you're going out to the waterfall,\nremember that there are some\ndangerous things there. Creepy, crawly\nthings. You'll need to carry a <r<sword>>.\n\x0E\x01\x09\x04\x09\xC00I think I saw the<b< Knight Commander >>go\ninto the Sparring Hall a while ago.\nYou should go ask him if you can\nborrow one!")
/*< 95>*/ 			scene_flags[0 'Skyloft'][56 /* 0x6 01 */] = true;
          		}
          	  case 1:
/*<107>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 74, 'param3': 31}
/*< 74>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 199, 'param3': 32}
/*<199>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 20, 'next': 200, 'param3': 47}
/*<200>*/ 		set_camera(13, 0)
/*<201>*/ 		{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 100, 'next': 203, 'param3': 15}
/*<203>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 202, 'param3': 16}
/*<202>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 20, 'next': 72, 'param3': 48}
/*< 72>*/ 		switch (scene_flags[54 /* 0x7 40 */]) {
          		  case 0:
/*< 71>*/ 			printf("\x0E\x01\x09\x04\x08\x401Hey, Link! I was just\nlooking for you.")
          			flw_73:
/*< 73>*/ 			printf("\x0E\x01\x09\x04\x09\xC00I heard your Loftwing has gone\nmissing, so I thought I'd join in the\nsearch.\n\n\x0E\x01\x09\x04\x00\xC00And get this: when I asked Fledge what\nhe knew, he started acting weird.")
/*< 75>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 0, 'next': 133, 'param3': 16}
/*<133>*/ 			set_camera(12, 0)
/*<163>*/ 			make_actor_do_something(0, 0)
/*<135>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 100, 'next': 76, 'param3': 17}
/*< 76>*/ 			printf("\x0E\x01\x09\x04\xC00\x812I'm so sorry, Link!\n\n\n\n\x0E\x01\x09\x04\xC00\x800I really wanted to tell you, but...\x0E\x01\x06\x02Íif\n<b<Groose>> found out I told you...")
/*<204>*/ 			make_actor_do_something(1, 12)
/*< 77>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 134, 'param3': 16}
/*<134>*/ 			set_camera(13, 0)
/*< 78>*/ 			printf("\x0E\x01\x09\x04\x00\xC16It sounds like <b<Groose>> forced him to\nkeep quiet about it.")
/*<131>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 12, 'next': 132, 'param3': 17}
/*<132>*/ 			printf("\x0E\x01\x09\x04\x08\xC00Go on!<pause23> Tell him the truth.")
/*< 79>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 80, 'param3': 16}
/*< 80>*/ 			printf("\x0E\x01\x09\x04\xC07\xE11Just a little while ago, when I was\ncleaning the dining hall, Groose and\nhis buddies came in.\n\n\x0E\x01\x09\x04\xC00\x800They didn't notice I was there and\nstarted talking about their <r<plan >><r<to hide\n>>your Loftwing.\n\n\x0E\x01\x09\x04\xC00\x800I wanted to warn you,\nLink. But just as I\ntried to sneak away...\n\n\x0E\x01\x09\x04\xC01\xE00Groose and his gang grabbed me...\n\n\n\n\x0E\x01\x09\x04\xC07\xE00They said that if I told you, they'd\nmake sure I would never be able to\nride a bird ever again!")
/*< 81>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 82, 'param3': 16}
/*< 82>*/ 			printf("\x0E\x01\x09\x04\x09\xC00It sounds like Groose and his buddies\nhad a plan to capture your bird and\nhide him near a <r<<r<<pling><r<waterfall>>.\n\n\x0E\x01\x09\x04\x08\xC00Well, near a waterfall would mean\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\n<pause28>Quick--let's take a look at your <r<map>>.")
/*< 87>*/ 			scene_flags[0 'Skyloft'][14 /* 0x0 40 */] = true;
/*< 83>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 85, 'param3': 30}
/*< 85>*/ 			printf("That's it! Right there. I think it means\nthe <r<waterfall >>marked here with \x0E\x02\x04\x02\x19CD.")
/*< 84>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 86, 'param3': 34}
/*< 86>*/ 			printf("\x0E\x01\x09\x04\x00\x404You know how to read a map, right?\nPress \x0E\x02\x04\x02\x3CD at any time to see a map of\nthe area.\x0E\x01\x11\x02\x3CD \x0E\x01\x09\x04\x08\x400If you get lost, just press \x0E\x02\x04\x02\x3CD!\x0E\x01\x11\x02\x3CD")
/*< 88>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 89, 'param3': 16}
/*< 89>*/ 			printf("\x0E\x01\x09\x04\xC00\x819Forgive me, Link! I can't\nhelp being such a coward...\nI'm really sorry.")
/*< 90>*/ 			scene_flags[0 'Skyloft'][55 /* 0x7 80 */] = true;
/*<162>*/ 			story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
/*<164>*/ 			story_flags[33 /* us: 805A9ADD 0x02, jp: 805ACD5D 0x02 */] = true;
/*<157>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<106>*/ 			printf("\x0E\x01\x09\x04\x00\xC01\x0E\x03\x01\x00Link! Perfect timing.")
/*<156>*/ 			scene_flags[0 'Skyloft'][54 /* 0x7 40 */] = true;
          			goto flw_73
          		}
          	}
          }

          void entrypoint_100_01() {
          	start()
/*< 50>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*< 52>*/ 		switch (scene_flags[45 /* 0x4 20 */]) {
          		  case 0:
/*< 57>*/ 			printf("\x0E\x01\x09\x04\x00\x02If you're talking Loftwings, talk to\n<b<Pipit>>. That guy knows almost\neverything about anything with wings.\n\nYou know Pipit, right? He's one of\nthe top students at the Knight\nAcademy.")
          		  case 1:
/*< 55>*/ 			printf("\x0E\x01\x09\x04\x00\x04What's wrong, Link?\x0E\x01\x09\x04\x00\x1100\nWhat?! Your Loftwing is <pause32>missing?\n\n\n\x0E\x01\x09\x04\x11\x1100That's terrible! I was so looking\nforward to seeing that red blur\nstreak through the sky.\n\nNo, no\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02ÍI haven't seen him.\n\n\n\n\x0E\x01\x09\x04\n\x1100Hmm\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Why not check with\nSkyloft's<r< bird expert>>, <b<<pling>Pipit>>?\n\x0E\x01\x09\x04\x00\x700He might be able to help.")
/*< 56>*/ 			scene_flags[0 'Skyloft'][45 /* 0x4 20 */] = true;
          		}
          	  case 1:
/*< 51>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*< 54>*/ 			printf("\x0E\x01\x09\x04\n\x705I'm looking forward to seeing your\nLoftwing in action!")
          		  case 1:
/*<  1>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hey, Link!\nHow's it going? The Wing Ceremony's\nabout to begin, right?\n\nRemember when <b<Pipit>> won the last\none right at the last second? It was\nsoooo close. Now, that was a race...\n\n\x0E\x01\x09\x04\n\x700Hey, your Crimson Loftwing will be\nin the race, right? <pause28>I'm looking forward\nto seeing what he can do.")
/*< 53>*/ 			scene_flags[0 'Skyloft'][44 /* 0x4 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_19() {
/*< 96>*/ 	start()
/*<116>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 205, 'param3': 32}
/*<205>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3073, 'param2': 256, 'next': 97, 'param3': 13}
/*< 97>*/ 	printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CDHey!\x0E\x01\x0D\x02\x1906 \x0E\x03\x01\x00Link!")
/*<115>*/ 	set_camera(2, 0)
/*<117>*/ 	make_actor_do_something(2, 12)
/*<147>*/ 	printf("\x0E\x01\x08\x02\x2CDOver here!\x0E\x01\x08\x02Í\n\n\n\n\x0E\x01\n\x04\x03ÍI have some information about\nyour Loftwing. Come over here!")
/*<118>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 98, 'param3': 42}
/*< 98>*/ 	scene_flags[0 'Skyloft'][54 /* 0x7 40 */] = true;
          }

          void entrypoint_100_02() {
/*<  2>*/ 	start()
/*< 28>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 29>*/ 		printf("\x0E\x01\x09\x04\x00\x03Are you talking to me about your\nLoftwing? Right now?\n\n\n\x0E\x01\x09\x04\x10\xE00I'm a little busy here, so buzz off!")
          	  case 1:
/*<184>*/ 		switch (scene_flags[22 /* 0x3 40 */]) {
          		  case 0:
/*<185>*/ 			printf("\x0E\x01\x09\x04\x00\x01The <r<Wing Ceremony >>is starting soon.\nQuit with the dillyin' and dallyin', and\nget your tail over there!")
          		  case 1:
/*<  3>*/ 			printf("\x0E\x01\x09\x04\x00\x02Where in the clouds is that <b<Fledge>> boy?\nHe's supposed to be bringing me\n<r<barrels>>!\n\n\x0E\x01\x09\x04\x10\xF00Sometimes I just don't know what's\ngoing on in that boy's head.")
          		}
          	}
          }

          void entrypoint_100_03() {
/*< 32>*/ 	start()
/*< 33>*/ 	printf("\x0E\x01\x12\x04\x00\x01Master, there is a high probability\nthat this beam of light will lead us to\nclues as to the whereabouts of the\nthree flames.\nI recommend that you investigate what\nlies at the end of this beam of light.")
/*<171>*/ 	story_flags[195 /* us: 805A9AEC 0x20, jp: 805ACD6C 0x20 */] = true;
          }

          void entrypoint_100_20() {
/*< 99>*/ 	start()
/*<100>*/ 	printf("\x0E\x01\x09\x04\x00\x04One more thing, Link!")
/*<101>*/ 	printf("\x0E\x01\x09\x04\x0C\xC05If you're going out to the waterfall,\nremember that there are some\ndangerous things there. Creepy, crawly\nthings. You'll need to carry a <r<sword>>.\n\x0E\x01\x09\x04\x09\xC00I think I saw the<b< Knight Commander >>go\ninto the Sparring Hall a while ago.\nYou should go ask him if you can\nborrow one!")
          }

          void entrypoint_100_04() {
/*<  4>*/ 	start()
/*< 10>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 68>*/ 		switch (scene_flags[53 /* 0x7 20 */]) {
          		  case 0:
/*< 69>*/ 			printf("\x0E\x01\x09\x04\x00\x05Still got more questions, eh?\n[1]My bird! [2]Groose?")
          			flw_16:
/*< 16>*/ 			switch (choice(2)) {
          			  case 0:
/*< 64>*/ 				printf("\x0E\x01\x09\x04\x00\x12Uh, I think...uh... Well, to be honest,\nI don't really know where they went.")
/*< 67>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			  case 1:
/*< 65>*/ 				printf("\x0E\x01\x09\x04\x00\x04Oh, <b<Groose >>and his little cronies were\nsaying they were headed down to the\nWing Ceremony.\n\nSo my guess is they might be in town.\nNormally, the fastest way there is just\ndown this path...\n\nBut this gate here still needs some work\nbefore it'll open. Can you go around\nthrough the academy?")
/*< 66>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			}
          		  case 1:
/*< 63>*/ 			printf("\x0E\x01\x09\x04\x00\x05Is something wrong? What's the\nbig hurry?\n\n\nWhat?! Your Loftwing is missing?!\n<pause32>But <pling>I just <r<saw>> him. <b<Groose's bird >>was\nchasing off after your feathered fella.\n[1]Which way?[2]Where's Groose?")
          			goto flw_16
          		}
          	  case 1:
/*< 15>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 58, 'param3': 31}
/*< 58>*/ 		switch (scene_flags[52 /* 0x7 10 */]) {
          		  case 0:
/*< 60>*/ 			printf("\x0E\x01\x09\x04\x00\x03I'm still workin' on the gate here, so\nit'll be out of commission for a little\nbit until I finish up.\n[1]Where's Zelda? [2]Ceremony?")
/*<  9>*/ 			switch (choice(2)) {
          			  case 0:
/*< 62>*/ 				printf("\x0E\x01\x09\x04\x00\x05<b<Zelda>>? <pause1E>Oh, she was just at the Statue\nof the Goddess with Headmaster\nGaepora.\n\nWhat's the best way up to the big\nstatue? It's time you learn for\nyourself, kid. Just press (C) to take a\nlook around. You can't miss her!\x0E\x01\x11\x02\x6CD\nIf your view gets a little off when\nyou're <g<looking around>> using (C),\nyou can always<g< center your view>> with\n(v). Remember that!\x0E\x01\x11\x02\x6CD\x0E\x01\x11\x02\x9CD")
          			  case 1:
/*< 61>*/ 				printf("\x0E\x01\x09\x04\x00\x03All set for today's big <r<Wing Ceremony>>?\n\n\n\nIf you come away with a win, you'll\nmove on up to the <r<senior class>>.\nThen after you graduate, you get to\nbe a <r<rescue knight>>.\nThose knights sure do keep order here\nin Skyloft, and I don't have to tell you\nthat it's a pretty big deal to become\none. I'd like to see you make it.")
          			}
          		  case 1:
/*<  5>*/ 			printf("\x0E\x01\x09\x04\x00\x01Mornin', Link. How's\nlife? Did you manage to get even a\nwink of sleep last night?\n\nFigured you might've been tossin' and\nturnin' all night thinkin' about the big\n<r<ceremony>> today.\n\nWhat am I doin'? <pause28>Oh, just fixin' this\ngate here...\n\n\nIt's been squeaky lately, and we can't\nhave that on the day of the ceremony!\n\n\n\x0E\x01\x09\x04\x0C\xC00Hey, you haven't already forgotten to\n<r<send your >><r<prayers >>to the goddess this\nmorning, have you?\n\n\x0E\x01\n\x04\x06ÍJust face the <r<bird statue >>over there,\nand say a short prayer to <r<save>> your\nprogress.\n\n\x0E\x01\x09\x04\x0C\xC00\x0E\x01\n\x04\xFFFFÍAs you know, those bird statues are all\nover Skyloft. It's about time you get in\nthe habit of stoppin' at a statue every\ntime you run by one.\n\x0E\x01\x09\x04\x00\x08<r<A prayer in time saves nine>>, if you\nknow what I'm sayin'!")
/*< 59>*/ 			scene_flags[0 'Skyloft'][52 /* 0x7 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_21() {
/*<102>*/ 	start()
/*<103>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*<105>*/ 		printf("\x0E\x01\x09\x04\xC00\x800\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02ÍDo you think you'll make it in time,\nLink?\n\n\n\x0E\x01\x09\x04\xC00\xE06I'm such a wimp\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í I'm so sorry.")
          	  case 1:
/*<104>*/ 		printf("\x0E\x01\x09\x04\xC01\x900\x0E\x01\x06\x02\xFBCD......\x0E\x01\x06\x02Í")
          	}
          }

          void entrypoint_100_56() {
/*<186>*/ 	start()
/*<212>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<213>*/ 		printf("\x0E\x01\x09\x04\x00\x02Watch your step there! Haven't they\ntaught you at the academy that knights\nmust always be vigilant? Sharpen up,\nor you'll never make it to knighthood!")
          	  case 1:
/*<187>*/ 		printf("\x0E\x01\x09\x04\x00\x02Watch your step there! You can't\nalways depend on knights like me to\nswoop in and save you.")
          	}
          }

          void entrypoint_100_05() {
/*<  6>*/ 	start()
/*< 34>*/ 	switch (scene_flags[58 /* 0x6 04 */]) {
          	  case 0:
/*<111>*/ 		printf("\x0E\x01\x09\x04\x0F\x1300Awwww! My <b<Sky Stag Beetle>>...\nSo close... \x0E\x01\x09\x04\n\x900Oh well. To catch it, I would\nneed a <item47>, anyway.\n\nI wish I hadn't thrown out the one I\nbought at <r<Beedle's Airshop>>.\n\x0E\x01\x09\x04\x11\x200Awwww...")
          	  case 1:
/*<110>*/ 		printf("\x0E\x01\x09\x04\x00\x04OK, so to <g<roll>>, first thing you gotta do\nis press (A) to run super fast...\n\n\nWhile you're running, just <r<shake the\nNunchuk>> and BAM! If you hit it just\nright, something will drop down from\nabove. So come on... <pause1E>You have to try it!")
          	}
          }

          void entrypoint_100_22() {
/*<178>*/ 	start()
/*<206>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<207>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<208>*/ 			switch (story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */]) {
          			  case 0:
          				flw_220:
/*<220>*/ 				printf("\x0E\x01\x09\x04\x00\x01I don't hear that voice from the\nrestroom anymore. I wonder who\nit was...")
          			  case 1:
/*<210>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 209, 'param3': 31}
/*<209>*/ 				printf("\x0E\x01\x09\x04\x00\x01These past few days, I swear I hear\na voice every time I walk past the\n<r<restroom at night>>.\n\nWho in the world is in there? I just\nwish they'd pipe down!")
          			}
          		  case 1:
          			flw_222:
/*<222>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<224>*/ 				printf("\x0E\x01\x09\x04\x00\x01I haven't seen Groose around recently.\nI wonder how that boy's doing.")
          			  case 1:
/*<221>*/ 				switch (story_flags[4 /* us: 805A9AD9 0x20, jp: 805ACD59 0x20 */]) {
          				  case 0:
/*<223>*/ 					printf("\x0E\x01\x09\x04\x00\x01How are things? Now that you're here,\nyou should find yourself a <r<bed >>to lie\ndown in and take a rest.")
          				  case 1:
/*<179>*/ 					printf("\x0E\x01\x09\x04\x00\x01Oh, you're taking off on your journey\nnow? <pause14>Then you probably won't be\neating here for a while!\n\n\x0E\x01\x09\x04\n\xC00Well, take care of yourself!\n\n\n\n\x0E\x01\x09\x04\x09\x800Make sure you come home every now\nand then. Nothing like a good sleep in\nyour own bed.")
          				}
          			}
          		}
          	  case 1:
          		goto flw_222
          	}
          }

          void entrypoint_100_57() {
/*<214>*/ 	start()
/*<215>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<217>*/ 		printf("\x0E\x01\x09\x04\x00\x02Whoa there, trainee! You'll never be\npromoted to full knighthood if you\ncan't learn to keep your wits about you.\n\nOh, and don't let me catch you going\nout flying at night. Only trained\nknights such as myself should be doing\nthat. You take care now!")
          	  case 1:
/*<216>*/ 		printf("\x0E\x01\x09\x04\x00\x02Watch your footing out there! In the\ndark you never know when you might\ntake a wrong step off a ledge.\n\nOh, and don't let me catch you going\nout flying at night. Only trained\nknights such as myself should be doing\nthat. You take care now!")
          	}
          }

          void entrypoint_100_23() {
/*<108>*/ 	start()
/*<109>*/ 	printf("\x0E\x01\x09\x04\x00\x01\x0E\x01\x0D\x02\x1906Hold up, Link!\nHey! Hey, Link!\n\n\x0E\x01\x0D\x02\x500\nCould you help me with something?\nAll you have to do is use (A) to <g<dash >>and\n<g<roll >>into the tree.\n\nJust like I've been doing. Dash, then\n<r<shake the Nunchuk >>when you're in\nfront of the tree to--BAM! Do a<g< roll\n>>right into it! So come on...<pause1E> Pleeeeease?")
          }

          void entrypoint_100_07() {
/*< 11>*/ 	start()
/*<169>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<218>*/ 		switch (story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */]) {
          		  case 0:
/*<219>*/ 			switch (story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */]) {
          			  case 0:
/*<211>*/ 				printf("\x0E\x01\x09\x04\x00\x01I don't hear any voices coming from\nthe restroom anymore.\n\n\nBut now Cawlin has been crying\nhimself to sleep in Groose's room...\nIs there anything we can do?")
          			  case 1:
          				goto flw_220
          			}
          		  case 1:
/*<225>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<226>*/ 				printf("\x0E\x01\x09\x04\x00\x01I haven't seen Groose around recently.\nI wonder how that boy's doing.")
          			  case 1:
/*<227>*/ 				switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          				  case 0:
/*<228>*/ 					printf("\x0E\x01\x09\x04\x00\x01How are things? Now that you're here,\nyou should find yourself a <r<bed >>to lie\ndown in and take a rest.")
          				  case 1:
/*<170>*/ 					printf("\x0E\x01\x09\x04\x00\xB05Even those bratty kids are asleep.\nAhhhh, finally some peace.\n\n\n\x0E\x01\x09\x04\n\x800So! Do you think you can find Zelda?\nBest of luck to you!")
          				}
          			}
          		}
          	  case 1:
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x00\x03I'm gonna shut this! We can't have any\ncreepy apparitions crawlin' in at night.\n\n\nI'll leave that door up on the second\nfloor open, though. Just don't let me\ncatch you going out after dark!\n\nNow I know your cute little friend\nZelda is gone and you want to go rescue\nher, but no honest folk here in Skyloft\ngo skulking around in the night.")
          	}
          }

          void entrypoint_100_24() {
/*<112>*/ 	start()
/*<113>*/ 	printf("\x0E\x01\x09\x04\x00\x08Whooooooooa!<pause1E> You did it! \nA <b<Sky Stag Beetle>>!\n\n\nWait up!")
/*<114>*/ 	scene_flags[0 'Skyloft'][58 /* 0x6 04 */] = true;
          }

          void entrypoint_100_25() {
/*<119>*/ 	start()
/*<120>*/ 	switch (zone_temp_flags[13 /* 0x0 20 */]) {
          	  case 0:
/*<126>*/ 		printf("\x0E\x01\x09\x04\x0C\x1252\x0E\x01\x08\x02\x2CDI've had it!\n\x0E\x01\x0D\x02\x1906\n\n\n\x0E\x01\n\x04\x0FÍI'm going to have a word with\nthe headmaster about having you\nexpelled!")
          	  case 1:
/*<121>*/ 		switch (zone_temp_flags[12 /* 0x0 10 */]) {
          		  case 0:
/*<124>*/ 			printf("\x0E\x01\x09\x04\x0C\x1207\x0E\x01\x08\x02\x1CDEnough already! \x0E\x01\x0D\x02\x1906You little brat!\n\n\n\n\x0E\x01\n\x04\x0FÍDo that again, and you'll be mopping\nsoup stains for a week!")
/*<125>*/ 			zone_temp_flags[13 /* 0x0 20 */] = true;
          		  case 1:
/*<122>*/ 			printf("\x0E\x01\x09\x04\x0C\x1206What do you think you're doing?!\n\n\n\n\x0E\x01\x0D\x02\x1906\x0E\x01\n\x04\x0FÍYou'd better clean that up!")
/*<123>*/ 			zone_temp_flags[12 /* 0x0 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_09() {
/*<  7>*/ 	start()
/*< 42>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*< 46>*/ 		switch (scene_flags[43 /* 0x4 08 */]) {
          		  case 0:
/*< 49>*/ 			printf("\x0E\x01\x09\x04\x00\x04Press \x0E\x02\x04\x02\x3CD to check your <r<map >>and find\nyour way to the Statue of the Goddess.\nLook for your bird there!\x0E\x01\x11\x02\x3CD")
          		  case 1:
/*< 47>*/ 			printf("\x0E\x01\x09\x04\x00WWhat's up, Link? You\nseem to be in a hurry...\n\n\nWhat's this about your bird? Oh, that\nunusual Crimson Loftwing...\n<pause28>Have I seen him?\x0E\x01\x06\x02\xFBCD\x0E\x01\x06\x02Í \x0E\x01\x09\x04\x11\x200I'm sorry. I haven't.\n\n\x0E\x01\x09\x04\x09\x204Why don't you look for him by the\nStatue of the Goddess? You'll have a\ngood view of the whole town from way\nup there.\nJust check your <r<map >>using \x0E\x02\x04\x02\x3CD.\nKnowing you, that's the best way to\navoid getting lost...again.\x0E\x01\x11\x02\x3CD")
/*< 48>*/ 			scene_flags[0 'Skyloft'][43 /* 0x4 08 */] = true;
          		}
          	  case 1:
/*< 44>*/ 		switch (scene_flags[42 /* 0x4 04 */]) {
          		  case 0:
/*< 45>*/ 			printf("\x0E\x01\x09\x04\x0C\x209I dream of playing the part of the\ngoddess at the Wing Ceremony!\nJust to have a romantic ceremony\nwith the handsome, winning knight.\nJust once is all I ask...")
          		  case 1:
/*<  8>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hiya, Link! Nice breeze\ntoday, huh? Perfect for the ceremony!\n\n\n\x0E\x01\x09\x04\x11\x200So who do you think will win today?\nI guess <b<Groose>> is a strong contender,\nbut...\n\n\x0E\x01\x09\x04\x0C\x200The winner will get blessed by a village\ngirl chosen to represent the goddess...\n\x0E\x01\x09\x04\x00\x609How romantic!")
/*< 43>*/ 			scene_flags[0 'Skyloft'][42 /* 0x4 04 */] = true;
          		}
          	}
          }

          void entrypoint_100_26() {
/*<152>*/ 	start()
/*<154>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*<155>*/ 		printf("\x0E\x01\x09\x04\x09\x802What's all this? I thought I told <b<Fledge\n>>to carry that! Bah, it's probably for\nthe best... That skinny boy would\nprobably have gotten flattened.\n\x0E\x01\x09\x04\n\xC00Say...don't you have some important\nceremony or some such today? Hmph!\nWell, thanks for the help.")
          	  case 1:
/*<153>*/ 		printf("\x0E\x01\x09\x04\n\x401Oh? \x0E\x03\x01\x00Link! You're\ndelivering something for me?\n\n\n\x0E\x01\x09\x04\x10\x802That was supposed to be <b<Fledge's\n>>job...\n\n\n\x0E\x01\x09\x04\x09\x400Anyhow, just bring the <r<barrel>> here.\nYes, here.")
          	}
          }

          void entrypoint_100_10() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("")
          }

