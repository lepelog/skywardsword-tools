          void entrypoint_102_15() {
/*<183>*/ 	start()
/*<184>*/ 	printf(/* textboxtype: 1, unk: 1, line: 45 */ "While riding your Loftwing, you\ncan press <icon 19> at any time to go over\nthe basic controls again.<0x10011:0x0bcd>\n\nYou can also <color green<charge>coloroff>, which is an attack\nthat also gives you a <color red<burst of speed>coloroff> as\nwell as <color red<slow down>coloroff> when you need to. Try\nall these moves and see how they feel!")
/*<240>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 241, 'param3': 60}
/*<241>*/ 	{'type': 'type3', 'subType': 0, 'param1': -1, 'param2': -1, 'next': -1, 'param3': 63}
          }

          void entrypoint_102_16() {
/*<223>*/ 	start()
/*<224>*/ 	printf(/* textboxtype: 0, unk: 1, line: 46 */ "Here's a tip for how to really <color red<build\nup some speed >coloroff>on your bird,\n<heroname>!\n\nGain some altitude, and when you are\n<color red<high>coloroff> enough, go into a dive to increase\nyour speed. Climb and dive. Got it?\nThat's how you increase your speed!")
          }

          void entrypoint_102_01() {
          	start()
/*<199>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 26, 'next': 1, 'param3': 13}
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x30001:0x><heroname>, I'm going to tend to\nmy bird and make sure he's not hurt.\nI'll catch up with you later.\n\n<0x10009:0x00000500>Go and see if anyone in town knows\nwhat happened to your Loftwing.")
          }

          void entrypoint_102_02() {
/*<  2>*/ 	start()
/*< 77>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 15, 'param3': 32}
/*< 15>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 100, 'next': 103, 'param3': 17}
/*<103>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 1, 'next': 78, 'param3': 17}
/*< 78>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': -1, 'next': 3, 'param3': 16}
/*<  3>*/ 	printf(/* textboxtype: 0, unk: 1, line: 1 */ "Hey, <heroname>, I was hoping\nI'd find you here.\n\n\n<0x1000A:0x001700cd>I heard you'd gone searching for your\nbird around the waterfall, so I thought\nI'd fly around and help you look.\n\nHow's your search going? Any sign of\nyour Loftwing?")
/*< 76>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x01000514>Oh no...\n\n\n\n<0x10009:0x01000c00>Well, let's not lose hope yet. There's a\nplace up ahead that Groose and his\ngang are always hanging around.\nMaybe we'll find something there!")
/*<138>*/ 	set_camera(22, 0)
/*<202>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 203, 'param3': 24}
/*<203>*/ 	wait_frames(30)
/*<137>*/ 	{'type': 'type3', 'subType': 4, 'param1': 260, 'param2': 528, 'next': 135, 'param3': 13}
/*<135>*/ 	printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10006:0xfccd>Huh...?<0x10006:0x00cd>")
/*<170>*/ 	set_camera(25, 0)
/*<171>*/ 	printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x01001500>Who... Who's that?\n\n\n\n<0x10009:0x01001500>Who's calling for me?")
/*<139>*/ 	set_camera(24, 0)
/*<141>*/ 	{'type': 'type3', 'subType': 4, 'param1': 268, 'param2': 5376, 'next': 136, 'param3': 13}
/*<136>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "Oh<pause 20>, sorry, <heroname>. I got\ndistracted for a moment. Let's go!")
/*<140>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_102_03() {
/*<  4>*/ 	start()
/*<201>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1004, 'next': 102, 'param3': 24}
/*<102>*/ 	set_camera(4, 0)
/*< 19>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 16, 'param3': 32}
/*< 16>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 257, 'next': 79, 'param3': 15}
/*< 79>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 100, 'next': 80, 'param3': 15}
/*< 80>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 356, 'next': 181, 'param3': 14}
/*<181>*/ 	{'type': 'type3', 'subType': 1, 'param1': 25, 'param2': 0, 'next': 104, 'param3': 40}
/*<104>*/ 	{'type': 'type3', 'subType': 4, 'param1': 273, 'param2': 4864, 'next': 81, 'param3': 13}
/*< 81>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 1, 'next': 105, 'param3': 14}
/*<105>*/ 	set_camera(1, 0)
/*< 20>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 99, 'next': 106, 'param3': 50}
/*<106>*/ 	{'type': 'type3', 'subType': 4, 'param1': 270, 'param2': 4360, 'next': 5, 'param3': 13}
/*<  5>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "Look! There he is!")
/*< 21>*/ 	set_camera(2, 0)
/*< 14>*/ 	printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00090500><0x10008:0x01cd>No doubt about it. That's your\nLoftwing, <heroname>!")
/*< 17>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 100, 'next': 18, 'param3': 17}
/*< 18>*/ 	set_camera(3, 0)
/*<172>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_102_04() {
/*<  6>*/ 	start()
/*< 73>*/ 	switch (scene_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*< 74>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00001514>Oh boy, I see you messed up your\nlanding.\n\n\n<0x10009:0x00000c00>Remember, <color red<once you dive >coloroff>off the edge,\nyou can control the angle of your fall\nby <color green<tilting >coloroff>your body. I bet you're ready\nto try again, aren't you?\nI won't push you this time, so take\nthe leap when you're ready! \n\n\nJust <color green<dash >coloroff>off the edge to jump into a\ndive. Then, just before you hit the\nground, press and hold <icon 41>!<0x10011:0x0fcd>\n\nOh, and don't forget that you've got to\nland in the <color red<middle of that round design\nin that courtyard below>coloroff>.")
/*< 75>*/ 		scene_flags[0 'Skyloft'][3 /* 0x1 08 */] = false;
/*<235>*/ 		switch (story_flags[1110 /* us: 805A9B54 0x10, jp: 805ACDD4 0x10 */]) {
          		  case 0:
          		  case 1:
/*<236>*/ 			story_flags[1110 /* us: 805A9B54 0x10, jp: 805ACDD4 0x10 */] = true;
/*<237>*/ 			story_flags[832 /* us: 805A9B32 0x01, jp: 805ACDB2 0x01 */] = true;
          		}
          	  case 1:
/*< 10>*/ 		switch (story_flags[39 /* us: 805A9AE5 0x20, jp: 805ACD65 0x20 */]) {
          		  case 0:
/*<173>*/ 			printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00000004>OK, let's try this again, shall we?\nThis time you won't have me to push\nyou over the edge, so gather up some\ncourage and JUMP!\nJust <color green<dash >coloroff>off the edge to leap into\na dive.\n\n\nOh, and just before you land, be sure\nyou press <icon 41> to open up your\nSailcloth and slow your fall, or it's\ngoing to be an ugly landing...<0x10011:0x0fcd>\nAnd don't forget that you've got to\nland in the <color red<middle of that round\ndesign in the courtyard below>coloroff>!")
          		  case 1:
/*<  8>*/ 			switch (story_flags[26 /* us: 805A9ADA 0x04, jp: 805ACD5A 0x04 */]) {
          			  case 0:
/*<  9>*/ 				printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x000f0513>That's so cruel! They've boarded him\nup in there!\n\n\n<0x30001:0x><heroname>, can you do something to\nget all those planks out of the way?")
          			  case 1:
/*<  7>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000006>What're you waiting around for,\n<heroname>? Let's go get\nyour Loftwing!")
          			}
          		}
          	}
          }

          void entrypoint_102_05() {
/*< 11>*/ 	start()
/*< 12>*/ 	story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */] = true;
/*< 13>*/ 	changeScene(9, 0) // 
          }

          void entrypoint_102_06() {
/*< 22>*/ 	start()
/*<191>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1001, 'next': 23, 'param3': 24}
/*< 23>*/ 	printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x000c0e09>Your Loftwing really is amazing.\nEspecially considering everything the\npoor guy has been through this\nmorning.\n<0x10009:0x00000c00>I'm going to fly back and tell Father\nwhat happened.")
/*< 64>*/ 	set_camera(10, 0)
/*<143>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 4864, 'next': 60, 'param3': 13}
/*< 60>*/ 	{'type': 'type3', 'subType': 2, 'param1': 16, 'param2': 0, 'next': 42, 'param3': 14}
/*< 42>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 43, 'param3': 32}
/*< 43>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 44, 'param3': 32}
/*< 44>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 6, 'next': 144, 'param3': 32}
/*<144>*/ 	set_camera(9, 0)
/*<142>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 4, 'next': 93, 'param3': 14}
/*< 93>*/ 	set_camera(12, 0)
/*< 45>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 24, 'param3': 16}
/*< 24>*/ 	printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x04000004>Well, well, if it isn't <heroname>!")
/*<146>*/ 	set_camera(9, 0)
/*< 94>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1038, 'param2': 11776, 'next': 145, 'param3': 13}
/*<145>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x04000000>Word around the plaza is you found\nthat dumb bird of yours.\n\n\n<0x1000A:0x000b00cd>Well, that's just great. Because you and\nyour dumb bird can't tell time, all the\nprerace warm-ups me and the guys did\nwere for nothin'. Now I'm all stiff.\nWe've been waiting forever for the\nrace to start, and they delay it for\nyou? I don't get it. The big flake gets\nspecial treatment?")
/*< 95>*/ 	set_camera(12, 0)
/*< 96>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12606, 'next': 25, 'param3': 13}
/*< 25>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "You're almost a man, and yet you still\ncan't seem to go anywhere without\nZelda.\n\nI bet you can't even decide what to\nhave for lunch on your own, huh?\n\n\nAnd don't think we haven't noticed the\nsmug looks. “Ooh, Zelda and I are \nBEST friends. We go everywhere\ntogether.\" Ugh!\n<0x10006:0xfccd>...<0x10006:0x00cd>You think you're pretty suave,\n<0x10009:0x04000017>don't you?<pause 60> <0x10009:0x040b0aff>Well? Don't you?!")
/*< 65>*/ 	set_camera(13, 0)
/*< 46>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 6, 'next': 48, 'param3': 16}
/*< 48>*/ 	{'type': 'type3', 'subType': 1, 'param1': 6, 'param2': 5, 'next': 26, 'param3': 17}
/*< 26>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x0500000e>Groose has been going on forever\nabout how he's gonna be the one to\nbe with Zelda. He's really got his\npompadour in a ruffle about her!")
/*< 47>*/ 	{'type': 'type3', 'subType': 1, 'param1': 6, 'param2': 5, 'next': 27, 'param3': 16}
/*< 27>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x06000014>Der her her.")
/*< 50>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 66, 'param3': 17}
/*< 66>*/ 	set_camera(12, 0)
/*< 49>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 28, 'param3': 16}
/*< 28>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x040d0b00>I hate to break it to you, but today's\nthe day I bust up this adorable little\nfantasyland you're living in.\n\n<0x10009:0x04000b00>Zelda's playing the role of the goddess\nat today's ceremony, and I'm gonna be\nthe one to claim that <color yellow<Sailcloth>coloroff>.\n\nWhen I heard she made it herself, man,\nno way was I gonna let some scrawny\nclown snatch that prize from me.")
/*< 63>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 5, 'next': 29, 'param3': 17}
/*< 29>*/ 	printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x04041700>Oh yes, that Sailcloth—Zelda's\nSailcloth—will be mine! Duh huh huh...\n\n\nOh, man, I bet she was thinking about\nme when she was stitching it...\n\n\nYup, I can see it now. First, I win the\nbig race, and then Zelda and I finish\nthe ceremony together on the statue.\nJust the two of us...\nIt'll be our special moment alone.\nNobody is stopping me and Zelda from\nhaving our moment. Oh, it's so real\nI can... I can see it...")
/*<107>*/ 	set_camera(17, 0)
/*<108>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1048, 'param2': 5644, 'next': 109, 'param3': 13}
/*<109>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "Duh... Duh huh huh huh!\nOh yeah...")
/*< 51>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 4, 'next': 110, 'param3': 50}
/*<110>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1296, 'param2': 3865, 'next': 111, 'param3': 13}
/*<111>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1552, 'param2': 2060, 'next': 67, 'param3': 13}
/*< 67>*/ 	set_camera(18, 0)
/*< 30>*/ 	printf(/* textboxtype: 0, unk: 1, line: 28 */ "Groose! Pssst, Groose!\n<pause 30>Behind you!<pause 30> Right behind you!")
/*< 52>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 5, 'next': 31, 'param3': 16}
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x04000000><0x1000A:0x000b00cd>WHAT?! Can't you two see I'm in the\nmiddle of—")
/*< 61>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 0, 'next': 92, 'param3': 15}
/*< 92>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 4, 'next': 97, 'param3': 17}
/*< 97>*/ 	set_camera(14, 0)
/*< 53>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 32, 'param3': 17}
/*< 32>*/ 	printf(/* textboxtype: 1, unk: 1, line: 30 */ "<0x10009:0x04191715>GAH!")
/*< 54>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 6, 'next': 147, 'param3': 16}
/*<147>*/ 	{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 4103, 'next': 90, 'param3': 13}
/*< 90>*/ 	set_camera(19, 0)
/*< 33>*/ 	printf(/* textboxtype: 0, unk: 1, line: 31 */ "Care to explain just what you meant\nby “our special moment alone\"?")
/*< 68>*/ 	set_camera(15, 0)
/*< 55>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 34, 'param3': 16}
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x04ffff0d>I...uh, nothing big, really. Just...\nJust...\n\n\n<0x30001:0x><0x10009:0x04000000><heroname>! Yeah, I was just\ntelling my buddy here how glad I was \nhe found that red bird of his. Boy,\nam I looking forward to a fair race!")
/*< 87>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 86, 'param3': 17}
/*< 86>*/ 	printf(/* textboxtype: 1, unk: 1, line: 33 */ "<0x10009:0x04000000>Anyhow, later, Zelda. Look for me\nduring the race. I'll be the one\npulling off all the dangerous moves.")
/*< 62>*/ 	{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 4, 'next': 56, 'param3': 14}
/*< 56>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 4, 'next': 91, 'param3': 16}
/*< 91>*/ 	{'type': 'type3', 'subType': 1, 'param1': 6, 'param2': 4, 'next': 98, 'param3': 17}
/*< 98>*/ 	set_camera(18, 0)
/*< 35>*/ 	printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x05050013><0x10009:0x06070000>Hey, Groose!<0x10005:0x00140000> Wait up!")
/*< 99>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1298, 'param2': 4352, 'next': 100, 'param3': 13}
/*<100>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1553, 'param2': 4096, 'next': 114, 'param3': 13}
/*<114>*/ 	make_actor_do_something(0, 5)
/*<115>*/ 	make_actor_do_something(0, 6)
/*<116>*/ 	wait_frames(50)
/*<205>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 206, 'param3': 16}
/*<206>*/ 	wait_frames(5)
/*< 69>*/ 	set_camera(16, 0)
/*< 36>*/ 	printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00091014>Did you hear that guy? A fair race? \nYeah, the chances of that happening\nare just about less than zero.\n\n<0x10009:0x0000ff00>Either way, don't let those fools get\nyou down, <heroname>! Just get\nout there and fly the best you can!\n\nI know you've got these guys beat, and\ndeep down I think you do too.\n[1-]Yeah![2-]I dunno...[3-]Us? Alone?")
/*< 57>*/ 	switch (choice(3)) {
          	  case 0:
/*< 37>*/ 		printf(/* textboxtype: 1, unk: 1, line: 36 */ "<0x10009:0x000c0e00>That's the spirit, <heroname>!\nTrust me—you can win this.")
          		flw_101:
/*<101>*/ 		{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': -256, 'next': 207, 'param3': 13}
/*<207>*/ 		make_actor_do_something(0, 0)
/*< 58>*/ 		{'type': 'type3', 'subType': 1, 'param1': 6, 'param2': -1, 'next': 221, 'param3': 16}
/*<221>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 112, 'next': 40, 'param3': 24}
/*< 40>*/ 		printf(/* textboxtype: 1, unk: 1, line: 39 */ "The Wing Ceremony will now begin!\nParticipating students, please\nassemble!")
/*< 59>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 41, 'param3': 16}
/*< 41>*/ 		printf(/* textboxtype: 0, unk: 1, line: 40 */ "Looks like it's race time. Good luck,\n<heroname>!")
/*< 70>*/ 		changeScene(18, 0) // 
          	  case 1:
/*< 38>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x000c1500>Aww, don't be nervous. You can do this!")
          		goto flw_101
          	  case 2:
/*< 39>*/ 		printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00100e04>Come on, <heroname>! Try to \nfocus for once.")
          		goto flw_101
          	}
          }

          void entrypoint_102_07() {
/*< 71>*/ 	start()
/*< 72>*/ 	printf(/* textboxtype: 1, unk: 0, line: 41 */ "")
          }

          void entrypoint_102_08() {
/*< 82>*/ 	start()
/*< 83>*/ 	printf(/* textboxtype: 1, unk: 2, line: 42 */ "<0x30001:0x><heroname>, let's run your bird\nthrough the basics just to\nmake sure he's not hurt.")
/*< 84>*/ 	printf(/* textboxtype: 0, unk: 1, line: 43 */ "You can fly your bird in any direction.\nWhen it's headed upward, it'll slowly\nlose speed.\n\nWhen you want to <color red<speed up>coloroff>, direct your\nbird upward to gain <color red<altitude>coloroff>, then drop\ninto a fast dive!\n\nSo, again, gain some altitude, then dive\nto speed up! Those are the basics of\ngetting your bird up to top speed.")
/*< 85>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ "So how's he handling? Do you think\nhe's flying all right?")
/*<239>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 3, 'next': 242, 'param3': 60}
/*<242>*/ 	{'type': 'type3', 'subType': 0, 'param1': -1, 'param2': -1, 'next': -1, 'param3': 63}
          }

          void entrypoint_102_09() {
/*< 88>*/ 	start()
/*< 89>*/ 	printf(/* textboxtype: 1, unk: 0, line: 47 */ "Well, that's a huge relief! I don't know\nabout you, <heroname>, but your\nLoftwing looks like he's flying great.\n\nMy father and the others are probably\nworried about your bird, so let's go\ngive them the good news!")
          }

          void entrypoint_102_10() {
/*<112>*/ 	start()
/*<117>*/ 	set_camera(26, 0)
/*<119>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 120, 'param3': 32}
/*<120>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': -1, 'next': 113, 'param3': 16}
/*<113>*/ 	printf(/* textboxtype: 0, unk: 0, line: 14 */ "")
/*<118>*/ 	set_camera(-1, 0)
          }

          void entrypoint_102_11() {
/*<121>*/ 	start()
/*<200>*/ 	{'type': 'type3', 'subType': 4, 'param1': 256, 'param2': 2, 'next': 122, 'param3': 13}
/*<122>*/ 	printf(/* textboxtype: 1, unk: 1, line: 48 */ "<0x1000D:0x1906><0x10008:0x01cd><0x30001:0x><heroname>!")
          }

          void entrypoint_102_12() {
/*<123>*/ 	start()
/*<208>*/ 	story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */] = true;
/*<127>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<128>*/ 		story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */] = true;
/*<150>*/ 		switch (story_flags[373 /* us: 805A9B02 0x08, jp: 805ACD82 0x08 */]) {
          		  case 0:
/*<151>*/ 			story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */] = true;
          			flw_152:
/*<152>*/ 			switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          			  case 0:
/*<153>*/ 				story_flags[473 /* us: 805A9B0E 0x20, jp: 805ACD8E 0x20 */] = true;
          				flw_195:
/*<195>*/ 				switch (story_flags[725 /* us: 805A9B24 0x20, jp: 805ACDA4 0x20 */]) {
          				  case 0:
          					flw_174:
/*<174>*/ 					switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          					  case 0:
/*<175>*/ 						switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          						  case 0:
/*<176>*/ 							story_flags[376 /* us: 805A9B02 0x40, jp: 805ACD82 0x40 */] = true;
          							flw_131:
/*<131>*/ 							switch (story_flags[545 /* us: 805A9B17 0x04, jp: 805ACD97 0x04 */]) {
          							  case 0:
/*<197>*/ 								switch (story_flags[725 /* us: 805A9B24 0x20, jp: 805ACDA4 0x20 */]) {
          								  case 0:
          									flw_159:
/*<159>*/ 									switch (story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */]) {
          									  case 0:
/*<160>*/ 										story_flags[558 /* us: 805A9B16 0x80, jp: 805ACD96 0x80 */] = true;
/*<162>*/ 										story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
          										flw_166:
/*<166>*/ 										switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          										  case 0:
/*<167>*/ 											story_flags[638 /* us: 805A9B1D 0x01, jp: 805ACD9D 0x01 */] = true;
          											flw_182:
/*<182>*/ 											story_flags[653 /* us: 805A9B1C 0x20, jp: 805ACD9C 0x20 */] = false;
/*<186>*/ 											story_flags[632 /* us: 805A9B1A 0x04, jp: 805ACD9A 0x04 */] = false;
/*<194>*/ 											story_flags[679 /* us: 805A9B22 0x02, jp: 805ACDA2 0x02 */] = true;
/*<215>*/ 											switch (story_flags[548 /* us: 805A9B17 0x20, jp: 805ACD97 0x20 */]) {
          											  case 0:
/*<217>*/ 												switch (story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */]) {
          												  case 0:
          													flw_225:
/*<225>*/ 													switch (story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */]) {
          													  case 0:
/*<230>*/ 														switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          														  case 0:
/*<226>*/ 															story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */] = true;
          															flw_227:
/*<227>*/ 															switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
          															  case 0:
/*<229>*/ 																switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          																  case 0:
/*<228>*/ 																	story_flags[393 /* us: 805A9B0C 0x08, jp: 805ACD8C 0x08 */] = true;
          																	flw_231:
/*<231>*/ 																	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          																	  case 0:
/*<232>*/ 																		story_flags[1200 /* us: 805A9B61 0x40, jp: 805ACDE1 0x40 */] = true;
          																	  case 1:
          																	}
          																  case 1:
          																	goto flw_231
          																}
          															  case 1:
          																goto flw_231
          															}
          														  case 1:
          															goto flw_227
          														}
          													  case 1:
          														goto flw_227
          													}
          												  case 1:
/*<216>*/ 													story_flags[549 /* us: 805A9B17 0x40, jp: 805ACD97 0x40 */] = true;
          													goto flw_225
          												}
          											  case 1:
          												goto flw_225
          											}
          										  case 1:
          											goto flw_182
          										}
          									  case 1:
          										goto flw_166
          									}
          								  case 1:
/*<132>*/ 									switch (story_flags[548 /* us: 805A9B17 0x20, jp: 805ACD97 0x20 */]) {
          									  case 0:
          										goto flw_159
          									  case 1:
/*<133>*/ 										switch (story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */]) {
          										  case 0:
          											goto flw_159
          										  case 1:
/*<134>*/ 											scene_flags[0 'Skyloft'][65 /* 0x9 02 */] = true;
          											goto flw_159
          										}
          									}
          								}
          							  case 1:
          								goto flw_159
          							}
          						  case 1:
          							goto flw_131
          						}
          					  case 1:
          						goto flw_131
          					}
          				  case 1:
          					goto flw_174
          				}
          			  case 1:
          				goto flw_195
          			}
          		  case 1:
          			goto flw_152
          		}
          	  case 1:
          		goto flw_174
          	}
          }

          void entrypoint_102_13() {
/*<124>*/ 	start()
/*<209>*/ 	story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */] = false;
/*<125>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<126>*/ 		story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */] = true;
/*<148>*/ 		switch (story_flags[373 /* us: 805A9B02 0x08, jp: 805ACD82 0x08 */]) {
          		  case 0:
/*<149>*/ 			story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */] = true;
          			flw_154:
/*<154>*/ 			switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          			  case 0:
/*<155>*/ 				story_flags[473 /* us: 805A9B0E 0x20, jp: 805ACD8E 0x20 */] = true;
          				flw_196:
/*<196>*/ 				switch (story_flags[725 /* us: 805A9B24 0x20, jp: 805ACDA4 0x20 */]) {
          				  case 0:
          					flw_198:
/*<198>*/ 					switch (story_flags[725 /* us: 805A9B24 0x20, jp: 805ACDA4 0x20 */]) {
          					  case 0:
          						flw_156:
/*<156>*/ 						switch (story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */]) {
          						  case 0:
/*<220>*/ 							switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          							  case 0:
/*<157>*/ 								story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */] = true;
          								flw_158:
/*<158>*/ 								switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
          								  case 0:
/*<219>*/ 									switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          									  case 0:
/*<218>*/ 										story_flags[393 /* us: 805A9B0C 0x08, jp: 805ACD8C 0x08 */] = true;
          										flw_161:
/*<161>*/ 										switch (story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */]) {
          										  case 0:
/*<163>*/ 											story_flags[558 /* us: 805A9B16 0x80, jp: 805ACD96 0x80 */] = true;
/*<164>*/ 											story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
          											flw_165:
/*<165>*/ 											switch (story_flags[581 /* us: 805A9B1B 0x10, jp: 805ACD9B 0x10 */]) {
          											  case 0:
/*<185>*/ 												story_flags[581 /* us: 805A9B1B 0x10, jp: 805ACD9B 0x10 */] = false;
          												flw_168:
/*<168>*/ 												switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          												  case 0:
/*<169>*/ 													story_flags[638 /* us: 805A9B1D 0x01, jp: 805ACD9D 0x01 */] = true;
          													flw_177:
/*<177>*/ 													switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
          													  case 0:
          														flw_192:
/*<192>*/ 														switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          														  case 0:
/*<193>*/ 															story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */] = true;
          															flw_213:
/*<213>*/ 															switch (story_flags[549 /* us: 805A9B17 0x40, jp: 805ACD97 0x40 */]) {
          															  case 0:
/*<214>*/ 																story_flags[549 /* us: 805A9B17 0x40, jp: 805ACD97 0x40 */] = false;
          																flw_233:
/*<233>*/ 																switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          																  case 0:
/*<234>*/ 																	story_flags[1200 /* us: 805A9B61 0x40, jp: 805ACDE1 0x40 */] = true;
          																	flw_238:
/*<238>*/ 																	temp_flags[53 /* 0x7 20 */] = false;
          																  case 1:
          																	goto flw_238
          																}
          															  case 1:
          																goto flw_233
          															}
          														  case 1:
          															goto flw_213
          														}
          													  case 1:
/*<222>*/ 														switch (story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */]) {
          														  case 0:
/*<178>*/ 															switch (story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */]) {
          															  case 0:
          																goto flw_192
          															  case 1:
/*<179>*/ 																story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */] = true;
          																goto flw_192
          															}
          														  case 1:
          															goto flw_192
          														}
          													}
          												  case 1:
          													goto flw_177
          												}
          											  case 1:
          												goto flw_168
          											}
          										  case 1:
          											goto flw_165
          										}
          									  case 1:
          										goto flw_161
          									}
          								  case 1:
          									goto flw_161
          								}
          							  case 1:
          								goto flw_158
          							}
          						  case 1:
          							goto flw_158
          						}
          					  case 1:
/*<130>*/ 						switch (scene_flags[65 /* 0x9 02 */]) {
          						  case 0:
/*<129>*/ 							scene_flags[0 'Skyloft'][65 /* 0x9 02 */] = false;
          							goto flw_156
          						  case 1:
          							goto flw_156
          						}
          					}
          				  case 1:
          					goto flw_198
          				}
          			  case 1:
          				goto flw_196
          			}
          		  case 1:
          			goto flw_154
          		}
          	  case 1:
/*<212>*/ 		switch (story_flags[725 /* us: 805A9B24 0x20, jp: 805ACDA4 0x20 */]) {
          		  case 0:
          			goto flw_198
          		  case 1:
/*<210>*/ 			story_flags[301 /* us: 805A9AFD 0x80, jp: 805ACD7D 0x80 */] = false;
/*<211>*/ 			scene_flags[0 'Skyloft'][66 /* 0x9 04 */] = false;
          			goto flw_198
          		}
          	}
          }

          void entrypoint_102_14() {
/*<180>*/ 	start()
/*<204>*/ 	set_camera(30, 0)
/*<189>*/ 	printf(/* textboxtype: 0, unk: 1, line: 49 */ "This is Zelda's journal. One of the \nentries is unfinished.\nRead the entry?\n[1-]Read it![2]Don't read.")
/*<190>*/ 	switch (choice(2)) {
          	  case 0:
/*<187>*/ 		printf(/* textboxtype: 1, unk: 1, line: 51 */ "Tomorrow's the big day! The Wing\nCeremony! Finally, <heroname>\ncan take a big step toward becoming\na knight.\nI can't wait to see him promoted\nto full knighthood, but I'm a little\nworried he might have some trouble\nwinning the race.\nLately, <heroname> hasn't taken\nhis flight training seriously. Someone\nneeds to make sure he doesn't mess up\nhis chance!\nSo I've made up my mind. Tomorrow\nI'll wake him up extra early and make\nsure he gets in some last-minute\npractice, whether he likes it or not.\nHe has to win, or we won't be able to\nperform the closing ceremony\ntogether!")
          	  case 1:
/*<188>*/ 		printf(/* textboxtype: 1, unk: 0, line: 50 */ "You've chosen not to read her journal.")
          	}
          }

