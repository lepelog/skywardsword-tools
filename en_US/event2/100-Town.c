          void entrypoint_100_11() {
/*< 17>*/ 	start()
/*<172>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<176>*/ 		switch (temp_flags[16 /* 0x3 01 */]) {
          		  case 0:
/*<175>*/ 			printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00000004>You can't go flying at night.\nYou just can't.\n\n\nIf you want to go out flying, tuck\nyourself into bed and sleep until\ntomorrow morning.")
          		  case 1:
/*<177>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 173, 'param3': 31}
/*<173>*/ 			printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x00000001>What are you doing out here\nso late?!\n\n\n<0x10009:0x000c0c09>You what?! You can't seriously think\nyou're going to ride your Loftwing at\nthis time of night, do you?!\n\n<0x10009:0x00090c00>Listen up. Loftwings can't fly at\nnight! They have terrible night vision,\nand only the few who have received\nspecial training can fly in the dark.\n<0x10009:0x00080400>If you really need to fly, you'll just\nhave to wait for daylight.")
/*<174>*/ 			temp_flags[16 /* 0x3 01 */] = true;
          		}
          	  case 1:
/*< 19>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 39>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000b0c00>You won't find your bird hanging\naround here unless he's enrolling in\nthe academy. You should stick with\nsearching outside for now.\nI'll be asking around for leads too,\nand I'll let you know if I find out\nanything that'll help.")
          			  case 1:
/*< 20>*/ 				printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00000c06>You're not still wandering around\nthe academy, are you?!\n\n\n<0x10009:0x000c0c09>What?!<pause 20> Your Loftwing won't come\nwhen you call for it? <0x10009:0x00010c00>Why would a\nguardian bird not come when it's\ncalled?\nYou know, I've never heard of this\never happening before, so I can't even\ntell you what you're doing wrong...\n\n<0x10009:0x00080400>But a good senior never hangs an\nunderclassman out to dry. We'll figure\nthis out together!\n\n<0x10009:0x000b0c00>You go to the plaza, and ask people\nthere if they know anything. In the\nmeantime, I'll ask around here.")
/*< 21>*/ 				scene_flags[0 'Skyloft'][18 /* 0x3 04 */] = true;
          			}
          		  case 1:
/*< 36>*/ 			switch (scene_flags[35 /* 0x5 08 */]) {
          			  case 0:
/*< 37>*/ 				printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x000c0405>If you need to know anything about\nbirds, you just let ol' <color blue<Pipit>coloroff> know!")
          			  case 1:
/*< 18>*/ 				printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00090401>Morning, <heroname>!\n\n\n\n<0x10009:0x00080400>So...today's the <color red<Wing Ceremony>coloroff>.\nAre you ready?\n\n\nAll I'm saying is everyone else is out\npracticing at the plaza, but you seem\npretty...relaxed about the whole thing.\n\n<0x10009:0x000b0400>Of course, that <color red<Crimson Loftwing >coloroff>of\nyours is something special. I'd feel\npretty confident riding him, too!\n\nMy bird won the last ceremony, but\neven I don't think he could beat that\nred terror of yours...\n\n<0x10009:0x00080400>Of course, a bird's true speed in a\nrace always comes down to the skill\nof the rider.\n\nI'm something of a bird researcher\naround here. <0x10009:0x000c0405>So, you know, if you\never find yourself in need of some\nbird expertise, come see ol' <color blue<Pipit>coloroff>. ")
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
/*<146>*/ 			printf(/* textboxtype: 1, unk: 0, line: 65 */ "<0x10009:0x00000006><color blue<Pipit>coloroff> should be in front of the <color red<Sparring\nHall>coloroff>. You know, at the back of the\nKnight Academy.")
          		  case 1:
/*< 27>*/ 			printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x00080406>Huh?<pause 40> Why do you want to know where\n<color blue<Groose >coloroff>hangs out?\n\n\n<0x10009:0x00000d00>Is he up to no good again?\n\n\n\nI<0x10009:0x000c0400> have no clue where he hangs out.\n<color blue<Pipit>coloroff> probably does, though.\nYou should talk to him.\n\n<0x10009:0x00080e04>And I think he was looking for you\njust now<0x10006:0xfccd>...<0x10006:0x00cd> He should be in front of the\n<color red<Sparring Hall>coloroff>.")
/*<144>*/ 			scene_flags[0 'Skyloft'][64 /* 0x9 01 */] = true;
          		}
          	  case 1:
/*< 25>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<141>*/ 			switch (scene_flags[63 /* 0x6 80 */]) {
          			  case 0:
/*<143>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00080e06><color blue<Pipit>coloroff> is the one to ask about birds.\nI saw him downstairs a minute ago.\nWhy don't you look for him there?")
          			  case 1:
/*<150>*/ 				set_camera(14, 0)
/*<148>*/ 				make_actor_do_something(0, 0)
/*<139>*/ 				printf(/* textboxtype: 1, unk: 0, line: 64 */ "<0x10009:0x000a0e56><0x10008:0xffcd>Don't men open doors for a lady anymore?\nHow long am I supposed to stand here waiting\nfor a little chivalry?! Ugh...")
/*<151>*/ 				set_camera(-1, 0)
/*<149>*/ 				make_actor_do_something(1, 0)
/*< 24>*/ 				printf(/* textboxtype: 1, unk: 0, line: 61 */ "<0x10009:0x00010406>Oh! It's you, <heroname>... Say,\nyou look all flustered. Did something\nhappen?\n\n<0x10009:0x00080d00>What?! <pause 40>You can't find your Loftwing?\n\n\n\n<0x10009:0x000c0d12>Umm<0x10006:0xfccd>...<0x10006:0x00cd> I don't know what to tell you.\nI've been here at school the whole time.")
/*<142>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00080e06><color blue<Pipit>coloroff> is the one to ask about birds.\nI saw him downstairs a minute ago.\nWhy don't you look for him there?")
/*<140>*/ 				scene_flags[0 'Skyloft'][63 /* 0x6 80 */] = true;
          			}
          		  case 1:
/*<136>*/ 			switch (scene_flags[62 /* 0x6 40 */]) {
          			  case 0:
/*<138>*/ 				printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x00080900>If you win today's <color red<ceremony>coloroff>, you'll\nbecome a <color red<senior >coloroff>like us. Good luck!")
          			  case 1:
/*< 23>*/ 				printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x00080901>Good morning, <heroname>!\nGood luck in the <color red<Wing Ceremony\n>coloroff>today!\n\n<0x10009:0x00000400>Just think: if you win today, you'll\nbecome a <color red<senior>coloroff> like us and you'll be\na very big step closer to graduating as\na <color red<knight>coloroff>.\n<0x10009:0x00080900>You'll even get a <color red<knight's uniform>coloroff> like\nI'm wearing. Something tells me you'll\nbe pretty handsome in it!\n\n<0x10009:0x000b0713>But still not as dreamy as...him...")
/*<137>*/ 				scene_flags[0 'Skyloft'][62 /* 0x6 40 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_100_13() {
/*<158>*/ 	start()
/*<159>*/ 	printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x00000001>Look at this thing. Who knows how long\nthis statue has been here?\n\n\nAnd it only has one eye. Poor thing...\nYou probably know this, but you\ncan press (C) to look around! <0x10011:0x06cd>")
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
/*<166>*/ 		printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00000004>Mmm-MMM! Another day, another\ntasty soup!")
          	  case 1:
/*<161>*/ 		printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x00000002>That boy really gets me steamed!\nIt's nearly time for dinner, and he's\nnowhere to be seen! He'd better not\nbe chasing bugs again.")
          	}
          }

          void entrypoint_100_15() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0, line: 70 */ "<0x10009:0x00000007>Where are you going with that?\nThat's no use to me there!\n\n\n<0x10009:0x00001200>Stop fiddling around, and finish what\nyou came to do!")
          }

          void entrypoint_100_16() {
/*<167>*/ 	start()
/*<194>*/ 	switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          	  case 0:
/*<196>*/ 		printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00080909>Ah! <0x30001:0x><heroname>! Thank you\nso much! I'm so happy now...and it's\nall because of you.\n\nMy guy is going out on patrol again\ntonight. It's not even required of\nhim--it's just something he feels he\nhas to do...\n<0x10009:0x000e090a>Just thinking about him makes my\nheart start pounding like I just ran\nup a flight of stairs!")
          	  case 1:
/*<192>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<195>*/ 			printf(/* textboxtype: 1, unk: 0, line: 74 */ "<0x10009:0x00000e12>This letter from Cawlin... I don't know\nwhat to do about it!\n\n\n<0x10009:0x000b0e00>What will Pipit think if he finds out\nabout this?")
          		  case 1:
/*<188>*/ 			switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          			  case 0:
/*<197>*/ 				switch (zone_temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
          					flw_193:
/*<193>*/ 					switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          					  case 0:
          					  case 1:
/*<190>*/ 						printf(/* textboxtype: 1, unk: 0, line: 73 */ "<0x10009:0x00080d57>You need to talk to me? Just come find\nme sometime during the day tomorrow.")
/*<198>*/ 						zone_temp_flags[16 /* 0x3 01 */] = true;
          					}
          				  case 1:
/*<189>*/ 					printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x000a0e57>What do you think you're doing in a\ngirl's room at this time of night?!\n\n\nI need to take a bath, so get out of\nhere, <heroname>!\n\n\n<0x10009:0x000c0e14>Well...I mean I WOULD take a bath if\nwhoever is in there now would hurry\nup and get out. They've been in there\na loooong time...")
/*<191>*/ 					switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          					  case 0:
          						goto flw_193
          					  case 1:
          					}
          				}
          			  case 1:
/*<168>*/ 				printf(/* textboxtype: 1, unk: 0, line: 71 */ "<0x10009:0x000c0d14>I can't believe Zelda fell off her bird\nand then down through the clouds.\nShe's so good at riding her bird...\n\n<0x10009:0x000a0d06>You saw a ghost?! Are you sure you\nweren't just in shock and maybe\nimagined it?")
          			}
          		}
          	}
          }

          void entrypoint_100_17() {
/*< 40>*/ 	start()
/*< 41>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00010002><0x30001:0x><heroname>!<0x1000D:0x1906>")
/*<127>*/ 	set_camera(9, 0)
/*<128>*/ 	printf(/* textboxtype: 1, unk: 0, line: 43 */ "If you're heading over to the plaza,\nthe quickest way is out the door on the\nground floor.\n\n<0x10009:0x00090400>The exit on the top floor is still locked,\nso you obviously can't get out there.")
/*<130>*/ 	set_camera(11, 0)
/*<129>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x000c0c16>What's taking the lunch lady so long?\nI'm going to have a word with her later.")
          }

          void entrypoint_100_18() {
/*< 70>*/ 	start()
/*< 91>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 92>*/ 		switch (story_flags[28 /* us: 805A9ADA 0x10, jp: 805ACD5A 0x10 */]) {
          		  case 0:
/*< 94>*/ 			printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00000c05>Listen. As an upperclassman, I've got\nsome advice for you. There's something\nyou should always do before you\ngo somewhere dangerous.\nYou should find a bird statue and <color red<send\nyour prayers to the goddess to save\nyour progress>coloroff>. Make it part of your\nroutine!\nThe <color red<bird statues>coloroff> you can pray to are\nmarked on your map. It should be easy\nto find one.")
          		  case 1:
/*< 93>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x000c0c05>If you're going out to the waterfall,\nremember that there are some\ndangerous things there. Creepy, crawly\nthings. You'll need to carry a <color red<sword>coloroff>.\n<0x10009:0x00090c00>I think I saw the<color blue< Knight Commander >coloroff>go\ninto the Sparring Hall a while ago.\nYou should go ask him if you can\nborrow one!")
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
/*< 71>*/ 			printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00080401>Hey, <heroname>! I was just\nlooking for you.")
          			flw_73:
/*< 73>*/ 			printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00090c00>I heard your Loftwing has gone\nmissing, so I thought I'd join in the\nsearch.\n\n<0x10009:0x00000c00>And get this: when I asked Fledge what\nhe knew, he started acting weird.")
/*< 75>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 0, 'next': 133, 'param3': 16}
/*<133>*/ 			set_camera(12, 0)
/*<163>*/ 			make_actor_do_something(0, 0)
/*<135>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 100, 'next': 76, 'param3': 17}
/*< 76>*/ 			printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x0c000812>I'm so sorry, <heroname>!\n\n\n\n<0x10009:0x0c000800>I really wanted to tell you, but...<0x10006:0x00cd>if\n<color blue<Groose>coloroff> found out I told you...")
/*<204>*/ 			make_actor_do_something(1, 12)
/*< 77>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 134, 'param3': 16}
/*<134>*/ 			set_camera(13, 0)
/*< 78>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00000c16>It sounds like <color blue<Groose>coloroff> forced him to\nkeep quiet about it.")
/*<131>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 12, 'next': 132, 'param3': 17}
/*<132>*/ 			printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x00080c00>Go on!<pause 35> Tell him the truth.")
/*< 79>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 80, 'param3': 16}
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x0c070e11>Just a little while ago, when I was\ncleaning the dining hall, Groose and\nhis buddies came in.\n\n<0x10009:0x0c000800>They didn't notice I was there and\nstarted talking about their <color red<plan >coloroff><color red<to hide\n>coloroff>your Loftwing.\n\n<0x10009:0x0c000800>I wanted to warn you,\n<heroname>. But just as I\ntried to sneak away...\n\n<0x10009:0x0c010e00>Groose and his gang grabbed me...\n\n\n\n<0x10009:0x0c070e00>They said that if I told you, they'd\nmake sure I would never be able to\nride a bird ever again!")
/*< 81>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 82, 'param3': 16}
/*< 82>*/ 			printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00090c00>It sounds like Groose and his buddies\nhad a plan to capture your bird and\nhide him near a <color red<<color red<<sound 4><color red<waterfall>coloroff>.\n\n<0x10009:0x00080c00>Well, near a waterfall would mean<0x10006:0xfbcd>...<0x10006:0x00cd>\n<pause 40>Quick--let's take a look at your <color red<map>coloroff>.")
/*< 87>*/ 			scene_flags[0 'Skyloft'][14 /* 0x0 40 */] = true;
/*< 83>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 85, 'param3': 30}
/*< 85>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "That's it! Right there. I think it means\nthe <color red<waterfall >coloroff>marked here with (X).")
/*< 84>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 86, 'param3': 34}
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x00000404>You know how to read a map, right?\nPress (+) at any time to see a map of\nthe area.<0x10011:0x03cd> <0x10009:0x00080400>If you get lost, just press (+)!<0x10011:0x03cd>")
/*< 88>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 89, 'param3': 16}
/*< 89>*/ 			printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x0c000819>Forgive me, <heroname>! I can't\nhelp being such a coward...\nI'm really sorry.")
/*< 90>*/ 			scene_flags[0 'Skyloft'][55 /* 0x7 80 */] = true;
/*<162>*/ 			story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
/*<164>*/ 			story_flags[33 /* us: 805A9ADD 0x02, jp: 805ACD5D 0x02 */] = true;
/*<157>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<106>*/ 			printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x00000c01><0x30001:0x><heroname>! Perfect timing.")
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
/*< 57>*/ 			printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00000002>If you're talking Loftwings, talk to\n<color blue<Pipit>coloroff>. That guy knows almost\neverything about anything with wings.\n\nYou know Pipit, right? He's one of\nthe top students at the Knight\nAcademy.")
          		  case 1:
/*< 55>*/ 			printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00000004>What's wrong, <heroname>?<0x10009:0x00001100>\nWhat?! Your Loftwing is <pause 50>missing?\n\n\n<0x10009:0x00111100>That's terrible! I was so looking\nforward to seeing that red blur\nstreak through the sky.\n\nNo, no<0x10006:0xfbcd>...<0x10006:0x00cd>I haven't seen him.\n\n\n\n<0x10009:0x000a1100>Hmm<0x10006:0xfbcd>...<0x10006:0x00cd> Why not check with\nSkyloft's<color red< bird expert>coloroff>, <color blue<<sound 4>Pipit>coloroff>?\n<0x10009:0x00000700>He might be able to help.")
/*< 56>*/ 			scene_flags[0 'Skyloft'][45 /* 0x4 20 */] = true;
          		}
          	  case 1:
/*< 51>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*< 54>*/ 			printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x000a0705>I'm looking forward to seeing your\nLoftwing in action!")
          		  case 1:
/*<  1>*/ 			printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00000001>Hey, <heroname>!\nHow's it going? The Wing Ceremony's\nabout to begin, right?\n\nRemember when <color blue<Pipit>coloroff> won the last\none right at the last second? It was\nsoooo close. Now, that was a race...\n\n<0x10009:0x000a0700>Hey, your Crimson Loftwing will be\nin the race, right? <pause 40>I'm looking forward\nto seeing what he can do.")
/*< 53>*/ 			scene_flags[0 'Skyloft'][44 /* 0x4 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_19() {
/*< 96>*/ 	start()
/*<116>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 205, 'param3': 32}
/*<205>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3073, 'param2': 256, 'next': 97, 'param3': 13}
/*< 97>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00000002><0x10008:0x02cd>Hey!<0x1000D:0x1906> <0x30001:0x><heroname>!")
/*<115>*/ 	set_camera(2, 0)
/*<117>*/ 	make_actor_do_something(2, 12)
/*<147>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10008:0x02cd>Over here!<0x10008:0x00cd>\n\n\n\n<0x1000A:0x000300cd>I have some information about\nyour Loftwing. Come over here!")
/*<118>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 98, 'param3': 42}
/*< 98>*/ 	scene_flags[0 'Skyloft'][54 /* 0x7 40 */] = true;
          }

          void entrypoint_100_02() {
/*<  2>*/ 	start()
/*< 28>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 29>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00000003>Are you talking to me about your\nLoftwing? Right now?\n\n\n<0x10009:0x00100e00>I'm a little busy here, so buzz off!")
          	  case 1:
/*<184>*/ 		switch (scene_flags[22 /* 0x3 40 */]) {
          		  case 0:
/*<185>*/ 			printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000001>The <color red<Wing Ceremony >coloroff>is starting soon.\nQuit with the dillyin' and dallyin', and\nget your tail over there!")
          		  case 1:
/*<  3>*/ 			printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00000002>Where in the clouds is that <color blue<Fledge>coloroff> boy?\nHe's supposed to be bringing me\n<color red<barrels>coloroff>!\n\n<0x10009:0x00100f00>Sometimes I just don't know what's\ngoing on in that boy's head.")
          		}
          	}
          }

          void entrypoint_100_03() {
/*< 32>*/ 	start()
/*< 33>*/ 	printf(/* textboxtype: 2, unk: 0, line: 13 */ "<0x10012:0x00000001>Master, there is a high probability\nthat this beam of light will lead us to\nclues as to the whereabouts of the\nthree flames.\nI recommend that you investigate what\nlies at the end of this beam of light.")
/*<171>*/ 	story_flags[195 /* us: 805A9AEC 0x20, jp: 805ACD6C 0x20 */] = true;
          }

          void entrypoint_100_20() {
/*< 99>*/ 	start()
/*<100>*/ 	printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x00000004>One more thing, <heroname>!")
/*<101>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x000c0c05>If you're going out to the waterfall,\nremember that there are some\ndangerous things there. Creepy, crawly\nthings. You'll need to carry a <color red<sword>coloroff>.\n<0x10009:0x00090c00>I think I saw the<color blue< Knight Commander >coloroff>go\ninto the Sparring Hall a while ago.\nYou should go ask him if you can\nborrow one!")
          }

          void entrypoint_100_04() {
/*<  4>*/ 	start()
/*< 10>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 68>*/ 		switch (scene_flags[53 /* 0x7 20 */]) {
          		  case 0:
/*< 69>*/ 			printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00000005>Still got more questions, eh?\n[1-]My bird! [2-]Groose?")
          			flw_16:
/*< 16>*/ 			switch (choice(2)) {
          			  case 0:
/*< 64>*/ 				printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00000012>Uh, I think...uh... Well, to be honest,\nI don't really know where they went.")
/*< 67>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			  case 1:
/*< 65>*/ 				printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00000004>Oh, <color blue<Groose >coloroff>and his little cronies were\nsaying they were headed down to the\nWing Ceremony.\n\nSo my guess is they might be in town.\nNormally, the fastest way there is just\ndown this path...\n\nBut this gate here still needs some work\nbefore it'll open. Can you go around\nthrough the academy?")
/*< 66>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			}
          		  case 1:
/*< 63>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000005>Is something wrong? What's the\nbig hurry?\n\n\nWhat?! Your Loftwing is missing?!\n<pause 50>But <sound 4>I just <color red<saw>coloroff> him. <color blue<Groose's bird >coloroff>was\nchasing off after your feathered fella.\n[1-]Which way?[2-]Where's Groose?")
          			goto flw_16
          		}
          	  case 1:
/*< 15>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 58, 'param3': 31}
/*< 58>*/ 		switch (scene_flags[52 /* 0x7 10 */]) {
          		  case 0:
/*< 60>*/ 			printf(/* textboxtype: 1, unk: 1, line: 15 */ "<0x10009:0x00000003>I'm still workin' on the gate here, so\nit'll be out of commission for a little\nbit until I finish up.\n[1-]Where's Zelda? [2-]Ceremony?")
/*<  9>*/ 			switch (choice(2)) {
          			  case 0:
/*< 62>*/ 				printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000005><color blue<Zelda>coloroff>? <pause 30>Oh, she was just at the Statue\nof the Goddess with Headmaster\nGaepora.\n\nWhat's the best way up to the big\nstatue? It's time you learn for\nyourself, kid. Just press (C) to take a\nlook around. You can't miss her!<0x10011:0x06cd>\nIf your view gets a little off when\nyou're <color green<looking around>coloroff> using (C),\nyou can always<color green< center your view>coloroff> with\n(v). Remember that!<0x10011:0x06cd><0x10011:0x09cd>")
          			  case 1:
/*< 61>*/ 				printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00000003>All set for today's big <color red<Wing Ceremony>coloroff>?\n\n\n\nIf you come away with a win, you'll\nmove on up to the <color red<senior class>coloroff>.\nThen after you graduate, you get to\nbe a <color red<rescue knight>coloroff>.\nThose knights sure do keep order here\nin Skyloft, and I don't have to tell you\nthat it's a pretty big deal to become\none. I'd like to see you make it.")
          			}
          		  case 1:
/*<  5>*/ 			printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00000001>Mornin', <heroname>. How's\nlife? Did you manage to get even a\nwink of sleep last night?\n\nFigured you might've been tossin' and\nturnin' all night thinkin' about the big\n<color red<ceremony>coloroff> today.\n\nWhat am I doin'? <pause 40>Oh, just fixin' this\ngate here...\n\n\nIt's been squeaky lately, and we can't\nhave that on the day of the ceremony!\n\n\n<0x10009:0x000c0c00>Hey, you haven't already forgotten to\n<color red<send your >coloroff><color red<prayers >coloroff>to the goddess this\nmorning, have you?\n\n<0x1000A:0x000600cd>Just face the <color red<bird statue >coloroff>over there,\nand say a short prayer to <color red<save>coloroff> your\nprogress.\n\n<0x10009:0x000c0c00><0x1000A:0xffff00cd>As you know, those bird statues are all\nover Skyloft. It's about time you get in\nthe habit of stoppin' at a statue every\ntime you run by one.\n<0x10009:0x00000008><color red<A prayer in time saves nine>coloroff>, if you\nknow what I'm sayin'!")
/*< 59>*/ 			scene_flags[0 'Skyloft'][52 /* 0x7 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_21() {
/*<102>*/ 	start()
/*<103>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*<105>*/ 		printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x0c000800><0x10006:0xfbcd>...<0x10006:0x00cd>Do you think you'll make it in time,\n<heroname>?\n\n\n<0x10009:0x0c000e06>I'm such a wimp<0x10006:0xfbcd>...<0x10006:0x00cd> I'm so sorry.")
          	  case 1:
/*<104>*/ 		printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x0c010900><0x10006:0xfbcd>......<0x10006:0x00cd>")
          	}
          }

          void entrypoint_100_56() {
/*<186>*/ 	start()
/*<212>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<213>*/ 		printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00000002>Watch your step there! Haven't they\ntaught you at the academy that knights\nmust always be vigilant? Sharpen up,\nor you'll never make it to knighthood!")
          	  case 1:
/*<187>*/ 		printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x00000002>Watch your step there! You can't\nalways depend on knights like me to\nswoop in and save you.")
          	}
          }

          void entrypoint_100_05() {
/*<  6>*/ 	start()
/*< 34>*/ 	switch (scene_flags[58 /* 0x6 04 */]) {
          	  case 0:
/*<111>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x000f1300>Awwww! My <color blue<Sky Stag Beetle>coloroff>...\nSo close... <0x10009:0x000a0900>Oh well. To catch it, I would\nneed a <item 71>, anyway.\n\nI wish I hadn't thrown out the one I\nbought at <color red<Beedle's Airshop>coloroff>.\n<0x10009:0x00110200>Awwww...")
          	  case 1:
/*<110>*/ 		printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00000004>OK, so to <color green<roll>coloroff>, first thing you gotta do\nis press (A) to run super fast...\n\n\nWhile you're running, just <color red<shake the\nNunchuk>coloroff> and BAM! If you hit it just\nright, something will drop down from\nabove. So come on... <pause 30>You have to try it!")
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
/*<220>*/ 				printf(/* textboxtype: 1, unk: 0, line: 79 */ "<0x10009:0x00000001>I don't hear that voice from the\nrestroom anymore. I wonder who\nit was...")
          			  case 1:
/*<210>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 209, 'param3': 31}
/*<209>*/ 				printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x00000001>These past few days, I swear I hear\na voice every time I walk past the\n<color red<restroom at night>coloroff>.\n\nWho in the world is in there? I just\nwish they'd pipe down!")
          			}
          		  case 1:
          			flw_222:
/*<222>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<224>*/ 				printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000001>I haven't seen Groose around recently.\nI wonder how that boy's doing.")
          			  case 1:
/*<221>*/ 				switch (story_flags[4 /* us: 805A9AD9 0x20, jp: 805ACD59 0x20 */]) {
          				  case 0:
/*<223>*/ 					printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x00000001>How are things? Now that you're here,\nyou should find yourself a <color red<bed >coloroff>to lie\ndown in and take a rest.")
          				  case 1:
/*<179>*/ 					printf(/* textboxtype: 1, unk: 0, line: 76 */ "<0x10009:0x00000001>Oh, you're taking off on your journey\nnow? <pause 20>Then you probably won't be\neating here for a while!\n\n<0x10009:0x000a0c00>Well, take care of yourself!\n\n\n\n<0x10009:0x00090800>Make sure you come home every now\nand then. Nothing like a good sleep in\nyour own bed.")
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
/*<217>*/ 		printf(/* textboxtype: 1, unk: 0, line: 85 */ "<0x10009:0x00000002>Whoa there, trainee! You'll never be\npromoted to full knighthood if you\ncan't learn to keep your wits about you.\n\nOh, and don't let me catch you going\nout flying at night. Only trained\nknights such as myself should be doing\nthat. You take care now!")
          	  case 1:
/*<216>*/ 		printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000002>Watch your footing out there! In the\ndark you never know when you might\ntake a wrong step off a ledge.\n\nOh, and don't let me catch you going\nout flying at night. Only trained\nknights such as myself should be doing\nthat. You take care now!")
          	}
          }

          void entrypoint_100_23() {
/*<108>*/ 	start()
/*<109>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00000001><0x1000D:0x1906>Hold up, <heroname>!\nHey! Hey, <heroname>!\n\n<0x1000D:0x0500>\nCould you help me with something?\nAll you have to do is use (A) to <color green<dash >coloroff>and\n<color green<roll >coloroff>into the tree.\n\nJust like I've been doing. Dash, then\n<color red<shake the Nunchuk >coloroff>when you're in\nfront of the tree to--BAM! Do a<color green< roll\n>coloroff>right into it! So come on...<pause 30> Pleeeeease?")
          }

          void entrypoint_100_07() {
/*< 11>*/ 	start()
/*<169>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<218>*/ 		switch (story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */]) {
          		  case 0:
/*<219>*/ 			switch (story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */]) {
          			  case 0:
/*<211>*/ 				printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000001>I don't hear any voices coming from\nthe restroom anymore.\n\n\nBut now Cawlin has been crying\nhimself to sleep in Groose's room...\nIs there anything we can do?")
          			  case 1:
          				goto flw_220
          			}
          		  case 1:
/*<225>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<226>*/ 				printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000001>I haven't seen Groose around recently.\nI wonder how that boy's doing.")
          			  case 1:
/*<227>*/ 				switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          				  case 0:
/*<228>*/ 					printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x00000001>How are things? Now that you're here,\nyou should find yourself a <color red<bed >coloroff>to lie\ndown in and take a rest.")
          				  case 1:
/*<170>*/ 					printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000b05>Even those bratty kids are asleep.\nAhhhh, finally some peace.\n\n\n<0x10009:0x000a0800>So! Do you think you can find Zelda?\nBest of luck to you!")
          				}
          			}
          		}
          	  case 1:
/*< 12>*/ 		printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00000003>I'm gonna shut this! We can't have any\ncreepy apparitions crawlin' in at night.\n\n\nI'll leave that door up on the second\nfloor open, though. Just don't let me\ncatch you going out after dark!\n\nNow I know your cute little friend\nZelda is gone and you want to go rescue\nher, but no honest folk here in Skyloft\ngo skulking around in the night.")
          	}
          }

          void entrypoint_100_24() {
/*<112>*/ 	start()
/*<113>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000008>Whooooooooa!<pause 30> You did it! \nA <color blue<Sky Stag Beetle>coloroff>!\n\n\nWait up!")
/*<114>*/ 	scene_flags[0 'Skyloft'][58 /* 0x6 04 */] = true;
          }

          void entrypoint_100_25() {
/*<119>*/ 	start()
/*<120>*/ 	switch (zone_temp_flags[13 /* 0x0 20 */]) {
          	  case 0:
/*<126>*/ 		printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x000c1252><0x10008:0x02cd>I've had it!\n<0x1000D:0x1906>\n\n\n<0x1000A:0x000f00cd>I'm going to have a word with\nthe headmaster about having you\nexpelled!")
          	  case 1:
/*<121>*/ 		switch (zone_temp_flags[12 /* 0x0 10 */]) {
          		  case 0:
/*<124>*/ 			printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x000c1207><0x10008:0x01cd>Enough already! <0x1000D:0x1906>You little brat!\n\n\n\n<0x1000A:0x000f00cd>Do that again, and you'll be mopping\nsoup stains for a week!")
/*<125>*/ 			zone_temp_flags[13 /* 0x0 20 */] = true;
          		  case 1:
/*<122>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x000c1206>What do you think you're doing?!\n\n\n\n<0x1000D:0x1906><0x1000A:0x000f00cd>You'd better clean that up!")
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
/*< 49>*/ 			printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00000004>Press (+) to check your <color red<map >coloroff>and find\nyour way to the Statue of the Goddess.\nLook for your bird there!<0x10011:0x03cd>")
          		  case 1:
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000057>What's up, <heroname>? You\nseem to be in a hurry...\n\n\nWhat's this about your bird? Oh, that\nunusual Crimson Loftwing...\n<pause 40>Have I seen him?<0x10006:0xfbcd><0x10006:0x00cd> <0x10009:0x00110200>I'm sorry. I haven't.\n\n<0x10009:0x00090204>Why don't you look for him by the\nStatue of the Goddess? You'll have a\ngood view of the whole town from way\nup there.\nJust check your <color red<map >coloroff>using (+).\nKnowing you, that's the best way to\navoid getting lost...again.<0x10011:0x03cd>")
/*< 48>*/ 			scene_flags[0 'Skyloft'][43 /* 0x4 08 */] = true;
          		}
          	  case 1:
/*< 44>*/ 		switch (scene_flags[42 /* 0x4 04 */]) {
          		  case 0:
/*< 45>*/ 			printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x000c0209>I dream of playing the part of the\ngoddess at the Wing Ceremony!\nJust to have a romantic ceremony\nwith the handsome, winning knight.\nJust once is all I ask...")
          		  case 1:
/*<  8>*/ 			printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00000001>Hiya, <heroname>! Nice breeze\ntoday, huh? Perfect for the ceremony!\n\n\n<0x10009:0x00110200>So who do you think will win today?\nI guess <color blue<Groose>coloroff> is a strong contender,\nbut...\n\n<0x10009:0x000c0200>The winner will get blessed by a village\ngirl chosen to represent the goddess...\n<0x10009:0x00000609>How romantic!")
/*< 43>*/ 			scene_flags[0 'Skyloft'][42 /* 0x4 04 */] = true;
          		}
          	}
          }

          void entrypoint_100_26() {
/*<152>*/ 	start()
/*<154>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*<155>*/ 		printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00090802>What's all this? I thought I told <color blue<Fledge\n>coloroff>to carry that! Bah, it's probably for\nthe best... That skinny boy would\nprobably have gotten flattened.\n<0x10009:0x000a0c00>Say...don't you have some important\nceremony or some such today? Hmph!\nWell, thanks for the help.")
          	  case 1:
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x000a0401>Oh? <0x30001:0x><heroname>! You're\ndelivering something for me?\n\n\n<0x10009:0x00100802>That was supposed to be <color blue<Fledge's\n>coloroff>job...\n\n\n<0x10009:0x00090400>Anyhow, just bring the <color red<barrel>coloroff> here.\nYes, here.")
          	}
          }

          void entrypoint_100_10() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 1, unk: 0, line: 32 */ "")
          }

