          void entrypoint_119_10() {
/*<113>*/ 	start()
/*<120>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*<112>*/ 		printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00170209><0x10008:0x02cd>Good one!")
/*<124>*/ 		set_camera(3, 0)
/*<125>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00171a08>That sure looked like it felt good!\n\n\n\n<0x10009:0x00090200>So... Why don't you try a <color green<fatal blow\n>coloroff>to close out our session?\n[1-]Sure![2]Nah.")
          	  case 1:
/*<121>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00091d04>What's the matter, <heroname>?\nYou don't seem your usual self.")
/*<122>*/ 		set_camera(3, 0)
/*<123>*/ 		printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00081d01>Stand in the center of a pack of\nenemies, and swing the Wii Remote and\nNunchuk <color red<horizontally at the same time>coloroff>.\nThat's how you do a real spin attack.\n<0x10009:0x00090200>Do you want to try again?\n[1-]Please![2]Nah...")
          	}
          }

          void entrypoint_119_11() {
/*<115>*/ 	start()
/*<111>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00080200>Great! Now I'm going to surround you\nwith logs. You need to cut them all\nwithout moving from that spot!\n\nAll you have to do is swing the\nWii Remote and Nunchuk <color green<horizontally\n>coloroff><color red<at the same time>coloroff>.\n\n<0x10009:0x00090200>Give it a shot!")
          }

          void entrypoint_119_12() {
/*<126>*/ 	start()
/*<127>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00081d03>All right! When your enemy is down,\n<color red<target >coloroff>it with (Z) and <color red<swing the\nWii Remote and Nunchuk at the same\ntime >coloroff>to land a <color green<fatal blow>coloroff>.<0x10011:0x07cd>\n<0x10009:0x00091d00>Do a side slash on that log. When it's\ndown, try finishing it off with this\ntechnique!")
          }

          void entrypoint_119_13() {
/*<128>*/ 	start()
/*<129>*/ 	printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x00171a09><0x10008:0x01cd>That's the way!")
/*<130>*/ 	set_camera(3, 0)
/*<131>*/ 	printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00190200>A <color green<fatal blow>coloroff> is also an effective\nmove to use right after you've used\nyour <color red<shield >coloroff>or a well-placed <color green<spin attack\n>coloroff>to knock an enemy on its back.\n<0x10009:0x001c0200>Oh, but monsters don't stay down for\nlong, so you'll have to swing the\nWii Remote and Nunchuk quickly\nbefore they get back on their feet!")
          }

          void entrypoint_119_01() {
          	start()
/*< 68>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*< 70>*/ 		printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00091901>Send my regards to the owner of\nthe Lumpy Pumpkin!")
          	  case 1:
/*< 53>*/ 		switch (story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */]) {
          		  case 0:
/*< 54>*/ 			switch (adventure_pouch_has(2 0x0002)) {
          			  case 0:
/*< 67>*/ 				switch (zone_temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
          					flw_57:
/*< 57>*/ 					entrypoint_119_03();
          				  case 1:
/*< 58>*/ 					printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00000003>Hey...did you happen to bring more\npiping-hot pumpkin soup?! It looks\nsooo good...\n[1-]Uh...here.[2-]...")
/*< 59>*/ 					switch (choice(2)) {
          					  case 0:
/*< 61>*/ 						printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00171909>Oh! For me?! I mean, sorry for just\nassuming it was for me...\n\n\nWell, in that case, I'll help myself!")
/*<138>*/ 						{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 108, 'param3': 47}
/*<108>*/ 						make_actor_do_something(0, 0)
/*< 62>*/ 						make_actor_do_something(1, 0)
/*<119>*/ 						{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 99, 'param3': 15}
/*< 99>*/ 						set_camera(10, 0)
/*<100>*/ 						{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 139, 'param3': 13}
/*<139>*/ 						{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 102, 'param3': 48}
/*<102>*/ 						wait_frames(96)
/*<101>*/ 						{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5651, 'next': 103, 'param3': 13}
/*<103>*/ 						printf(/* textboxtype: 1, unk: 0, line: 44 */ "Sooo good!<0x10005:0x001e0000>")
/*<104>*/ 						set_camera(11, 0)
/*< 63>*/ 						printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00171900>Yeah! That hits the spot!\n\n\n\n<0x10009:0x00171900>I tell you, morning, noon, or night,\nnothing satisfies like Pumm's yummy \npumpkin soup!")
/*<154>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 144, 'param3': 47}
/*<144>*/ 						set_camera(12, 0)
/*<143>*/ 						make_actor_do_something(2, 0)
/*<155>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 142, 'param3': 48}
/*<142>*/ 						printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00080200>Thank you, <heroname>! \nHere's a token of my appreciation.")
/*<105>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 64, 'param3': 42}
/*< 64>*/ 						give_item(4 0x04);
/*< 71>*/ 						zone_temp_flags[1 /* 0x1 02 */] = true;
          					  case 1:
/*< 60>*/ 						printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10006:0xfccd>...\n...<0x10006:0x00cd>\n\n\n<0x10009:0x00081900>HAH! Just joking around with you!")
/*< 65>*/ 						zone_temp_flags[2 /* 0x1 04 */] = true;
          					}
          				}
          			  case 1:
          				goto flw_57
          			}
          		  case 1:
/*< 33>*/ 			switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
          			  case 0:
/*< 34>*/ 				switch (adventure_pouch_has(2 0x0002)) {
          				  case 0:
/*< 37>*/ 					printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00081901>Hey! <0x30001:0x><heroname>! Have you been\nworking hard on your swordsmanship?\n\n\n<0x10009:0x00000200>Hmm? I smell something...\n\n\n\n<0x10009:0x00001909>I know that earthy aroma! Isn't that\nmy favorite <color red<pumpkin soup>coloroff>?!\n\n\n<0x10009:0x00000200>I asked the owner of the Lumpy\nPumpkin to bring me some, but...\n\n\nYou went out of your way to deliver\nsome to me?!\n[1-]That's right![2]Uh, no...")
/*< 41>*/ 					switch (choice(2)) {
          					  case 0:
/*< 42>*/ 						printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00171909>YES! Give it to me!\n[1-]Here you go![2]Sorry...")
/*< 44>*/ 						switch (choice(2)) {
          						  case 0:
/*<135>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 107, 'param3': 47}
/*<107>*/ 							make_actor_do_something(0, 0)
/*< 48>*/ 							make_actor_do_something(1, 0)
/*<118>*/ 							{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 95, 'param3': 15}
/*< 95>*/ 							set_camera(10, 0)
/*< 91>*/ 							{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 136, 'param3': 13}
/*<136>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 93, 'param3': 48}
/*< 93>*/ 							wait_frames(96)
/*< 92>*/ 							{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5655, 'next': 94, 'param3': 13}
/*< 94>*/ 							printf(/* textboxtype: 1, unk: 0, line: 44 */ "Sooo good!<0x10005:0x001e0000>")
/*< 96>*/ 							set_camera(11, 0)
/*< 52>*/ 							printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00000013>Mmm! This is the stuff!\n\n\n\n<0x10009:0x00171900>Pumpkin soup is best piping hot!")
/*<151>*/ 							{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 141, 'param3': 47}
/*<141>*/ 							make_actor_do_something(2, 0)
/*<145>*/ 							set_camera(12, 0)
/*<152>*/ 							{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 140, 'param3': 48}
/*<140>*/ 							printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x00081900>Well done! Say thanks to the owner\nfor me!")
/*< 51>*/ 							story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */] = true;
/*< 66>*/ 							zone_temp_flags[1 /* 0x1 02 */] = true;
/*<153>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*< 47>*/ 							printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00001d00>What?! Weren't you asked to bring\nthis to me? You think you can tease\nme like this? You DO NOT tease a man\nabout pumpkin soup!\n<0x10009:0x00081d00>If this soup isn't good anymore, you're\ngoing to have to go get me some more!\n\n\nAnd it had better be hot!")
          						}
          					  case 1:
/*< 40>*/ 						printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x000e1d00>Huh... I told Pumm to bring some\nright away, so what is he doing?\n<0x10009:0x00081d00>You do not want to be around me when\nI don't get my daily pumpkin soup.")
          					}
          				  case 1:
/*< 35>*/ 					switch (adventure_pouch_has(3 0x0003)) {
          					  case 0:
/*< 36>*/ 						printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00081901>Hey! <0x30001:0x><heroname>! Have you been\nworking hard on your swordsmanship?\n\n\n<0x10009:0x00000200>Hmm? I smell something...\n\n\n\n<0x10009:0x00001909>I know that earthy aroma! Isn't that\nmy favorite <color red<pumpkin soup>coloroff>?!\n\n\n<0x10009:0x00000200>I asked the owner of the Lumpy\nPumpkin to bring me some, but...\n\n\nYou went out of your way to deliver\nsome to me?!\n[1-]That's right![2]Uh, no...")
/*< 39>*/ 						switch (choice(2)) {
          						  case 0:
/*< 43>*/ 							printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00171909>YES! Give it to me!\n[1-]Here you go![2]Sorry...")
/*< 45>*/ 							switch (choice(2)) {
          							  case 0:
/*<132>*/ 								{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 106, 'param3': 47}
/*<106>*/ 								make_actor_do_something(0, 0)
/*< 49>*/ 								make_actor_do_something(1, 0)
/*<117>*/ 								{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 97, 'param3': 15}
/*< 97>*/ 								set_camera(10, 0)
/*< 88>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 133, 'param3': 13}
/*<133>*/ 								{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 90, 'param3': 48}
/*< 90>*/ 								wait_frames(96)
/*< 89>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4118, 'next': 147, 'param3': 13}
/*<147>*/ 								set_camera(11, 0)
/*<146>*/ 								printf(/* textboxtype: 1, unk: 0, line: 40 */ "Ugh! This is disgusting...<pause 20> It's cold!")
/*<148>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 149, 'param3': 47}
/*<149>*/ 								{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 7424, 'next': 134, 'param3': 13}
/*<134>*/ 								make_actor_do_something(2, 0)
/*< 98>*/ 								set_camera(12, 0)
/*<150>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 50, 'param3': 48}
/*< 50>*/ 								printf(/* textboxtype: 1, unk: 0, line: 41 */ "If there are two things I can't stand in\nthis world, it's cold soup and slackers.\nNow bring me another one--and make\nit hot!")
/*<137>*/ 								{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          							  case 1:
/*< 46>*/ 								printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00001d00>What?! Weren't you asked to bring\nthis to me? You think you can tease\nme like this? You DO NOT tease a man\nabout pumpkin soup!\n<0x10009:0x00081d00>If this soup isn't good anymore, you're\ngoing to have to go get me some more!\n\n\nAnd it had better be hot!")
          							}
          						  case 1:
/*< 38>*/ 							printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x000e1d00>Huh... I told Pumm to bring some\nright away, so what is he doing?\n<0x10009:0x00081d00>You do not want to be around me when\nI don't get my daily pumpkin soup.")
          						}
          					  case 1:
/*< 56>*/ 						entrypoint_119_03();
          					}
          				}
          			  case 1:
/*< 69>*/ 				entrypoint_119_03();
          			}
          		}
          	}
          }

          void entrypoint_119_02() {
/*< 24>*/ 	start()
/*< 30>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 11, 'next': 25, 'param3': 32}
/*< 25>*/ 	printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x0b0d0002>Hey! <0x1000D:0x1900><0x30001:0x><heroname>!")
/*< 31>*/ 	{'type': 'type3', 'subType': 1, 'param1': 11, 'param2': 0, 'next': 72, 'param3': 16}
/*< 72>*/ 	set_camera(1, 0)
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00081d00>You can't take swords outside of the\nSparring Hall.\n\n\nWhat do you think you're doing\nsneaking out with that?!")
/*< 73>*/ 	set_camera(2, 0)
/*< 29>*/ 	make_actor_do_something(3, 11)
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 11, 'next': 26, 'param3': 17}
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00000005>What? <pause 40>Your Loftwing is missing?\n<pause 40>You want to go look for it?\n\n\nWell I guess I could make an exception\njust this once. <0x10009:0x00090e00>But remember that\nSkyloft is a peaceful place. Only\nknights carry swords!\nSo I don't want to see you swinging\nit around like crazy out there!\nI don't want to get in a ton of trouble\nover this, so here's the deal...\nMake sure you get plenty of practice\non these logs first, and once you get\noutside with that sword, only use it\nwhen you absolutely have to, got it?")
/*< 74>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 27, 'param3': 42}
/*< 27>*/ 	story_flags[199 /* us: 805A9AEF 0x02, jp: 805ACD6F 0x02 */] = true;
/*< 75>*/ 	scene_flags[0 'Skyloft'][56 /* 0x6 01 */] = true;
          }

          void entrypoint_119_03() {
/*< 55>*/ 	start()
/*< 13>*/ 	switch (adventure_pouch_has(9 0x0009)) {
          	  case 0:
/*<156>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*< 17>*/ 			printf(/* textboxtype: 1, unk: 1, line: 13 */ "<0x10009:0x00000005>Oh? Ready to talk more about the\n<color red<secrets of defense>coloroff>?\n[1-]Practical stuff.[2-]Basics![3]No, thanks.")
/*< 19>*/ 			switch (choice(3)) {
          			  case 0:
/*< 20>*/ 				printf(/* textboxtype: 1, unk: 0, line: 14 */ "<color red<Practical stuff>coloroff>? OK!\n\n\n\n<0x10009:0x00191d00>If you ready your shield right before an\nenemy attacks you, the force from your\nshield arm will <color green<repel >coloroff>the enemy's \nattack. \n<0x10009:0x001c1d00>This technique is called a <color red<shield bash>coloroff>,\nand it will make the enemy recoil,\ngiving you an opening in which to\nattack.\n<0x10009:0x000d0200>This technique is very useful against\nenemies who throw weapons at you or\njust refuse to give you an opening\nfor attack.")
          				flw_21:
/*< 21>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x000e0200>In a real battle, pulling off a defensive\nshield maneuver requires perfect\ntiming. Believe me, you really don't\nwant to miss.\n<0x10009:0x00080200>Why don't you put what you learned\nto use with that <color red<defense-practice>coloroff> <color red<log>coloroff>?")
          			  case 1:
/*< 18>*/ 				printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x001c0200><color green<Give your Nunchuk a shake >coloroff>to take\nyour <color red<shield>coloroff> out. Simple stuff, I know,\nbut you need to review the basics!\n\n<0x10009:0x000e0200>To lower your shield, <color green<swing your sword\nwith the Wii Remote>coloroff>, or press (A) to put\nyour sword and shield away entirely.\n\n<0x10009:0x00080200>Just be careful when trying to attack\nwhile on the defensive. Every time you \n<color green<swing your sword>coloroff>, you move your shield\nout of the way, <color red<lowering your guard>coloroff>!")
          				goto flw_21
          			  case 2:
/*<160>*/ 				printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00090200>I see... Well, trying it out for yourself\nis the best way to learn. Why don't\nyou practice on that defense log?")
          			}
          		  case 1:
/*< 22>*/ 			switch (scene_flags[59 /* 0x6 08 */]) {
          			  case 0:
/*< 14>*/ 				printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00000009>Impressive, <heroname>! That's\na nice shield you have there.\n<0x10009:0x00190200>Well then, it's time I taught you the\n<color red<art of defense>coloroff>!\nWe'll start with <color red<basic training>coloroff>!")
          				flw_15:
/*< 15>*/ 				printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x001c0200><color green<Give your Nunchuk a shake >coloroff>to take\nyour <color red<shield>coloroff> out. Simple stuff, I know,\nbut you need to review the basics!\n\n<0x10009:0x000e0200>To lower your shield, <color green<swing your sword\nwith the Wii Remote>coloroff>, or press (A) to put\nyour sword and shield away entirely.\n\n<0x10009:0x00080200>Just be careful when trying to attack\nwhile on the defensive. Every time you \n<color green<swing your sword>coloroff>, you move your shield\nout of the way, <color red<lowering your guard>coloroff>!")
/*< 16>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00091d00>Why don't you try that first!")
/*< 23>*/ 				scene_flags[0 'Skyloft'][60 /* 0x6 10 */] = true;
          			  case 1:
/*<157>*/ 				printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00081d04><0x30001:0x><heroname>... The headmaster\ntold me about Zelda. Poor girl...\nI'm worried about her...\n\nNow, I don't know all the details of\nwhat's going on here...\n\n\nBut that sword you're carrying isn't\nfrom Skyloft. It's an <color red<ancient artifact>coloroff>\nthat can only be carried by the chosen\none.\nAnd since you happen to be the one\ncarrying it, I guess I can figure out\na lot of the rest of this crazy story...")
/*<159>*/ 				printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00001d04>You know, <heroname>...\nI just wish there was more I could do\nfor you...\n\nBut I can offer this as a parting gift...\n<0x10009:0x00191d00>Get ready to learn some new moves!\nIt's time to learn the <color red<secrets of\ndefense>coloroff>.\n<0x10009:0x00000200>First, we should start with the <color red<basics>coloroff>!")
          				goto flw_15
          			}
          		}
          	  case 1:
/*< 11>*/ 		switch (scene_flags[59 /* 0x6 08 */]) {
          		  case 0:
/*< 12>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00191d01>The art of the shield is the art of\ndefense. You don't have a chance of\nwinning a battle if your attack and\ndefense aren't balanced.\n<0x10009:0x00080e00>You can get a <color red<shield >coloroff>at the<color red< bazaar>coloroff>.\nAlways practice with a shield in your\nhand. It will lead you to the way of\nthe sword!\n<0x10009:0x00091d00>I'm telling you all this for your\nbenefit, so pay attention!")
          		  case 1:
/*<  8>*/ 			switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
          			  case 0:
/*<  9>*/ 				printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00081d04><0x30001:0x><heroname>... The headmaster\ntold me about Zelda. Poor girl...\nI'm worried about her...\n\nNow, I don't know all the details of\nwhat's going on here...\n\n\nBut that sword you're carrying isn't\nfrom Skyloft. It's an <color red<ancient artifact>coloroff>\nthat can only be carried by the chosen\none.\nAnd since you happen to be the one\ncarrying it, I guess I can figure out\na lot of the rest of this crazy story...")
/*<158>*/ 				printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00001d00>I wish there was something else I could\ndo for you, <heroname>...\nWait, maybe there is... Yes! Get a\n<color red<shield >coloroff>and come back here!\n<0x10009:0x00191d00>Then I'll be able to teach you the\n<color red<secrets of defense>coloroff>! It's the least\nI can do for you.")
/*< 10>*/ 				scene_flags[0 'Skyloft'][59 /* 0x6 08 */] = true;
          			  case 1:
/*<  5>*/ 				switch (scene_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*<  6>*/ 					printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00000005>Oh yeah? You want to learn about how\nto use a sword?\n[1-]Yes, please. [2]No, thanks.")
/*<  4>*/ 					switch (choice(2)) {
          					  case 0:
/*<  3>*/ 						printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00090203>OK! <color red<Just swing the Wii Remote >coloroff>to swing\nyour sword!\n\n\nSwing the Wii Remote vertically to do a\n<color green<vertical slash>coloroff>, and swing it sideways to\ndo a <color green<side slash>coloroff>.\n\nThrust the Wii Remote forward to do a\n<color green<thrust>coloroff>!\n\n\n<0x10009:0x00170200>And then there's the <color green<spin attack>coloroff>,\na more advanced technique. To do that,\nswing the Wii Remote and Nunchuk\ntogether in a sideways motion.\n<0x10009:0x00181d00>If you remember these moves, you can\nhandle yourself in any fight.\n\n\n<0x10009:0x00001d04>Just remember the fundamentals!\nAlways press<color red< >coloroff>(Z) <color red<to target>coloroff> an enemy\nas soon as you see it.<0x10011:0x07cd>")
          						flw_7:
/*<  7>*/ 						printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x001c1d03>Try getting in some good practice on\nthose <color red<logs>coloroff>!\n\n\n<0x10009:0x00090200>If the sword doesn't respond quite the\nway you want it to, try big <color red<vertical\n>coloroff><color green<overhead practice<color green< <color green<>coloroff><color green<swings >coloroff>in front of\nyou, then get back to the action.\n<0x10009:0x00080200>Once you've sliced up those logs, I'll\nset it up so you can try out your\n<color red<big move>coloroff>.")
          					  case 1:
/*<  2>*/ 						printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x000e1a08>That's right. You're good with a sword.\n\n\n\n<0x10009:0x00080200>But practice is everything! You don't\nbecome a sword master sitting on \nyour rear end.\n\n<0x10009:0x00191d00>You've got to practice those\nfundamentals, like using (Z)<color red< to target\nenemies>coloroff>. It's not glamorous, but that's\na swordsman's bread and butter.<0x10011:0x07cd>")
          						goto flw_7
          					}
          				  case 1:
/*<  1>*/ 					printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000003>Hey! It's <heroname>!\n\n\n\n<0x10009:0x00090200>So you still want to get in some sword\npractice, even though today is the Wing\nCeremony? I'm impressed.\n\nThe sword is in the back room.\nGo on back there and get it.\n\n\nI'll be here for a while, so if there's\nanything you don't understand about \nhandling a sword, go ahead and ask.")
          				}
          			}
          		}
          	}
          }

          void entrypoint_119_04() {
/*< 76>*/ 	start()
/*< 84>*/ 	printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00010201>That's a log for practicing your\n<color red<vertical slash>coloroff>. Hold the Wii Remote\nstraight up, and then swing it straight\ndown to make a clean cut!")
          }

          void entrypoint_119_05() {
/*< 80>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00190203>That's a log for practicing your\n<color red<side slash>coloroff>. Hold the Wii Remote\nhorizontally, and then slash it to the\nside to make a clean cut!")
          }

          void entrypoint_119_06() {
/*< 81>*/ 	start()
/*< 86>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x001d0202>That log is set up for practicing your\n<color red<diagonal slash>coloroff>. Swing the Wii Remote\ndiagonally to cut right along the gash\nin the log.")
          }

          void entrypoint_119_07() {
/*< 82>*/ 	start()
/*< 87>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00080203>That's a log used for practicing your\n<color red<thrust>coloroff>. Sharply move the Wii Remote\nforward to thrust your sword.")
          }

          void entrypoint_119_08() {
/*< 83>*/ 	start()
/*<161>*/ 	switch (adventure_pouch_has(0 0x0000)) {
          	  case 0:
/*< 79>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00190202>That log is used to practice defense.\n\n\n\n<0x10009:0x001c1d00>Hit the log with your sword, and then\n<color green<sharply move the Nunchuk forward >coloroff>to\nexecute a <color red<shield bash >coloroff>when it swings\nback at you.")
          	  case 1:
/*< 77>*/ 		switch (adventure_pouch_has(9 0x0009)) {
          		  case 0:
/*<162>*/ 			printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x00191d02>That log is used to practice <color red<defense>coloroff>.\nYou don't have a <color red<shield>coloroff> equipped,\nthough, so don't mess with it, or it'll\nsend you flying!")
          		  case 1:
/*< 78>*/ 			printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00191d02>That log there is for practicing\n<color red<defense>coloroff>. You don't have a <color red<shield>coloroff> yet, so\ndon't mess with it, or it'll send you\nflying!")
          		}
          	}
          }

          void entrypoint_119_09() {
/*<109>*/ 	start()
/*<114>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x000a0213>That's right, <heroname>!")
/*<116>*/ 	set_camera(3, 0)
/*<110>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00081908>You really are a strong swordsman. \nEasy to teach too. You make this\ninstructor proud!\n\n<0x10009:0x00090200>Are you ready to try a <color green<spin attack>coloroff>?\n[1-]OK![2]Not yet.")
          }

