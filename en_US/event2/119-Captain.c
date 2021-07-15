          void entrypoint_119_10() {
/*<113>*/ 	start()
/*<120>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*<112>*/ 		printf("\x0E\x01\x09\x04\x17\x209\x0E\x01\x08\x02\x2CDGood one!")
/*<124>*/ 		set_camera(3, 0)
/*<125>*/ 		printf("\x0E\x01\x09\x04\x17\x1A08That sure looked like it felt good!\n\n\n\n\x0E\x01\x09\x04\x09\x200So... Why don't you try a <g<fatal blow\n>>to close out our session?\n[1]Sure![2-]Nah.")
          	  case 1:
/*<121>*/ 		printf("\x0E\x01\x09\x04\x09\x1D04What's the matter, Link?\nYou don't seem your usual self.")
/*<122>*/ 		set_camera(3, 0)
/*<123>*/ 		printf("\x0E\x01\x09\x04\x08\x1D01Stand in the center of a pack of\nenemies, and swing the Wii Remote and\nNunchuk <r<horizontally at the same time>>.\nThat's how you do a real spin attack.\n\x0E\x01\x09\x04\x09\x200Do you want to try again?\n[1]Please![2-]Nah...")
          	}
          }

          void entrypoint_119_11() {
/*<115>*/ 	start()
/*<111>*/ 	printf("\x0E\x01\x09\x04\x08\x200Great! Now I'm going to surround you\nwith logs. You need to cut them all\nwithout moving from that spot!\n\nAll you have to do is swing the\nWii Remote and Nunchuk <g<horizontally\n>><r<at the same time>>.\n\n\x0E\x01\x09\x04\x09\x200Give it a shot!")
          }

          void entrypoint_119_12() {
/*<126>*/ 	start()
/*<127>*/ 	printf("\x0E\x01\x09\x04\x08\x1D03All right! When your enemy is down,\n<r<target >>it with (Z) and <r<swing the\nWii Remote and Nunchuk at the same\ntime >>to land a <g<fatal blow>>.\x0E\x01\x11\x02\x7CD\n\x0E\x01\x09\x04\x09\x1D00Do a side slash on that log. When it's\ndown, try finishing it off with this\ntechnique!")
          }

          void entrypoint_119_13() {
/*<128>*/ 	start()
/*<129>*/ 	printf("\x0E\x01\x09\x04\x17\x1A09\x0E\x01\x08\x02\x1CDThat's the way!")
/*<130>*/ 	set_camera(3, 0)
/*<131>*/ 	printf("\x0E\x01\x09\x04\x19\x200A <g<fatal blow>> is also an effective\nmove to use right after you've used\nyour <r<shield >>or a well-placed <g<spin attack\n>>to knock an enemy on its back.\n\x0E\x01\x09\x04\x1C\x200Oh, but monsters don't stay down for\nlong, so you'll have to swing the\nWii Remote and Nunchuk quickly\nbefore they get back on their feet!")
          }

          void entrypoint_119_01() {
          	start()
/*< 68>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*< 70>*/ 		printf("\x0E\x01\x09\x04\x09\x1901Send my regards to the owner of\nthe Lumpy Pumpkin!")
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
/*< 58>*/ 					printf("\x0E\x01\x09\x04\x00\x03Hey...did you happen to bring more\npiping-hot pumpkin soup?! It looks\nsooo good...\n[1]Uh...here.[2]...")
/*< 59>*/ 					switch (choice(2)) {
          					  case 0:
/*< 61>*/ 						printf("\x0E\x01\x09\x04\x17\x1909Oh! For me?! I mean, sorry for just\nassuming it was for me...\n\n\nWell, in that case, I'll help myself!")
/*<138>*/ 						{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 108, 'param3': 47}
/*<108>*/ 						make_actor_do_something(0, 0)
/*< 62>*/ 						make_actor_do_something(1, 0)
/*<119>*/ 						{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 99, 'param3': 15}
/*< 99>*/ 						set_camera(10, 0)
/*<100>*/ 						{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 139, 'param3': 13}
/*<139>*/ 						{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 102, 'param3': 48}
/*<102>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 96, 'next': 101, 'param3': 6}
/*<101>*/ 						{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5651, 'next': 103, 'param3': 13}
/*<103>*/ 						printf("Sooo good!\x0E\x01\x05\x04\x1E\x00")
/*<104>*/ 						set_camera(11, 0)
/*< 63>*/ 						printf("\x0E\x01\x09\x04\x17\x1900Yeah! That hits the spot!\n\n\n\n\x0E\x01\x09\x04\x17\x1900I tell you, morning, noon, or night,\nnothing satisfies like Pumm's yummy \npumpkin soup!")
/*<154>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 144, 'param3': 47}
/*<144>*/ 						set_camera(12, 0)
/*<143>*/ 						make_actor_do_something(2, 0)
/*<155>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 142, 'param3': 48}
/*<142>*/ 						printf("\x0E\x01\x09\x04\x08\x200Thank you, Link! \nHere's a token of my appreciation.")
/*<105>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 64, 'param3': 42}
/*< 64>*/ 						give_item(4 0x04);
/*< 71>*/ 						zone_temp_flags[1 /* 0x1 02 */] = true;
          					  case 1:
/*< 60>*/ 						printf("\x0E\x01\x06\x02\xFCCD...\n...\x0E\x01\x06\x02Í\n\n\n\x0E\x01\x09\x04\x08\x1900HAH! Just joking around with you!")
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
/*< 37>*/ 					printf("\x0E\x01\x09\x04\x08\x1901Hey! \x0E\x03\x01\x00Link! Have you been\nworking hard on your swordsmanship?\n\n\n\x0E\x01\x09\x04\x00\x200Hmm? I smell something...\n\n\n\n\x0E\x01\x09\x04\x00\x1909I know that earthy aroma! Isn't that\nmy favorite <r<pumpkin soup>>?!\n\n\n\x0E\x01\x09\x04\x00\x200I asked the owner of the Lumpy\nPumpkin to bring me some, but...\n\n\nYou went out of your way to deliver\nsome to me?!\n[1]That's right![2-]Uh, no...")
/*< 41>*/ 					switch (choice(2)) {
          					  case 0:
/*< 42>*/ 						printf("\x0E\x01\x09\x04\x17\x1909YES! Give it to me!\n[1]Here you go![2-]Sorry...")
/*< 44>*/ 						switch (choice(2)) {
          						  case 0:
/*<135>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 107, 'param3': 47}
/*<107>*/ 							make_actor_do_something(0, 0)
/*< 48>*/ 							make_actor_do_something(1, 0)
/*<118>*/ 							{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 95, 'param3': 15}
/*< 95>*/ 							set_camera(10, 0)
/*< 91>*/ 							{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 136, 'param3': 13}
/*<136>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 93, 'param3': 48}
/*< 93>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 96, 'next': 92, 'param3': 6}
/*< 92>*/ 							{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5655, 'next': 94, 'param3': 13}
/*< 94>*/ 							printf("Sooo good!\x0E\x01\x05\x04\x1E\x00")
/*< 96>*/ 							set_camera(11, 0)
/*< 52>*/ 							printf("\x0E\x01\x09\x04\x00\x13Mmm! This is the stuff!\n\n\n\n\x0E\x01\x09\x04\x17\x1900Pumpkin soup is best piping hot!")
/*<151>*/ 							{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 141, 'param3': 47}
/*<141>*/ 							make_actor_do_something(2, 0)
/*<145>*/ 							set_camera(12, 0)
/*<152>*/ 							{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 140, 'param3': 48}
/*<140>*/ 							printf("\x0E\x01\x09\x04\x08\x1900Well done! Say thanks to the owner\nfor me!")
/*< 51>*/ 							story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */] = true;
/*< 66>*/ 							zone_temp_flags[1 /* 0x1 02 */] = true;
/*<153>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*< 47>*/ 							printf("\x0E\x01\x09\x04\x00\x1D00What?! Weren't you asked to bring\nthis to me? You think you can tease\nme like this? You DO NOT tease a man\nabout pumpkin soup!\n\x0E\x01\x09\x04\x08\x1D00If this soup isn't good anymore, you're\ngoing to have to go get me some more!\n\n\nAnd it had better be hot!")
          						}
          					  case 1:
/*< 40>*/ 						printf("\x0E\x01\x09\x04\x0E\x1D00Huh... I told Pumm to bring some\nright away, so what is he doing?\n\x0E\x01\x09\x04\x08\x1D00You do not want to be around me when\nI don't get my daily pumpkin soup.")
          					}
          				  case 1:
/*< 35>*/ 					switch (adventure_pouch_has(3 0x0003)) {
          					  case 0:
/*< 36>*/ 						printf("\x0E\x01\x09\x04\x08\x1901Hey! \x0E\x03\x01\x00Link! Have you been\nworking hard on your swordsmanship?\n\n\n\x0E\x01\x09\x04\x00\x200Hmm? I smell something...\n\n\n\n\x0E\x01\x09\x04\x00\x1909I know that earthy aroma! Isn't that\nmy favorite <r<pumpkin soup>>?!\n\n\n\x0E\x01\x09\x04\x00\x200I asked the owner of the Lumpy\nPumpkin to bring me some, but...\n\n\nYou went out of your way to deliver\nsome to me?!\n[1]That's right![2-]Uh, no...")
/*< 39>*/ 						switch (choice(2)) {
          						  case 0:
/*< 43>*/ 							printf("\x0E\x01\x09\x04\x17\x1909YES! Give it to me!\n[1]Here you go![2-]Sorry...")
/*< 45>*/ 							switch (choice(2)) {
          							  case 0:
/*<132>*/ 								{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 106, 'param3': 47}
/*<106>*/ 								make_actor_do_something(0, 0)
/*< 49>*/ 								make_actor_do_something(1, 0)
/*<117>*/ 								{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 97, 'param3': 15}
/*< 97>*/ 								set_camera(10, 0)
/*< 88>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 133, 'param3': 13}
/*<133>*/ 								{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 90, 'param3': 48}
/*< 90>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 96, 'next': 89, 'param3': 6}
/*< 89>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4118, 'next': 147, 'param3': 13}
/*<147>*/ 								set_camera(11, 0)
/*<146>*/ 								printf("Ugh! This is disgusting...<pause14> It's cold!")
/*<148>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 149, 'param3': 47}
/*<149>*/ 								{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 7424, 'next': 134, 'param3': 13}
/*<134>*/ 								make_actor_do_something(2, 0)
/*< 98>*/ 								set_camera(12, 0)
/*<150>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 50, 'param3': 48}
/*< 50>*/ 								printf("If there are two things I can't stand in\nthis world, it's cold soup and slackers.\nNow bring me another one--and make\nit hot!")
/*<137>*/ 								{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          							  case 1:
/*< 46>*/ 								printf("\x0E\x01\x09\x04\x00\x1D00What?! Weren't you asked to bring\nthis to me? You think you can tease\nme like this? You DO NOT tease a man\nabout pumpkin soup!\n\x0E\x01\x09\x04\x08\x1D00If this soup isn't good anymore, you're\ngoing to have to go get me some more!\n\n\nAnd it had better be hot!")
          							}
          						  case 1:
/*< 38>*/ 							printf("\x0E\x01\x09\x04\x0E\x1D00Huh... I told Pumm to bring some\nright away, so what is he doing?\n\x0E\x01\x09\x04\x08\x1D00You do not want to be around me when\nI don't get my daily pumpkin soup.")
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
/*< 25>*/ 	printf("\x0E\x01\x09\x04\xB0D\x02Hey! \x0E\x01\x0D\x02\x1900\x0E\x03\x01\x00Link!")
/*< 31>*/ 	{'type': 'type3', 'subType': 1, 'param1': 11, 'param2': 0, 'next': 72, 'param3': 16}
/*< 72>*/ 	set_camera(1, 0)
/*< 28>*/ 	printf("\x0E\x01\x09\x04\x08\x1D00You can't take swords outside of the\nSparring Hall.\n\n\nWhat do you think you're doing\nsneaking out with that?!")
/*< 73>*/ 	set_camera(2, 0)
/*< 29>*/ 	make_actor_do_something(3, 11)
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 11, 'next': 26, 'param3': 17}
/*< 26>*/ 	printf("\x0E\x01\x09\x04\x00\x05What? <pause28>Your Loftwing is missing?\n<pause28>You want to go look for it?\n\n\nWell I guess I could make an exception\njust this once. \x0E\x01\x09\x04\x09\xE00But remember that\nSkyloft is a peaceful place. Only\nknights carry swords!\nSo I don't want to see you swinging\nit around like crazy out there!\nI don't want to get in a ton of trouble\nover this, so here's the deal...\nMake sure you get plenty of practice\non these logs first, and once you get\noutside with that sword, only use it\nwhen you absolutely have to, got it?")
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
/*< 17>*/ 			printf("\x0E\x01\x09\x04\x00\x05Oh? Ready to talk more about the\n<r<secrets of defense>>?\n[1]Practical stuff.[2]Basics![3-]No, thanks.")
/*< 19>*/ 			switch (choice(3)) {
          			  case 0:
/*< 20>*/ 				printf("<r<Practical stuff>>? OK!\n\n\n\n\x0E\x01\x09\x04\x19\x1D00If you ready your shield right before an\nenemy attacks you, the force from your\nshield arm will <g<repel >>the enemy's \nattack. \n\x0E\x01\x09\x04\x1C\x1D00This technique is called a <r<shield bash>>,\nand it will make the enemy recoil,\ngiving you an opening in which to\nattack.\n\x0E\x01\x09\x04\x0D\x200This technique is very useful against\nenemies who throw weapons at you or\njust refuse to give you an opening\nfor attack.")
          				flw_21:
/*< 21>*/ 				printf("\x0E\x01\x09\x04\x0E\x200In a real battle, pulling off a defensive\nshield maneuver requires perfect\ntiming. Believe me, you really don't\nwant to miss.\n\x0E\x01\x09\x04\x08\x200Why don't you put what you learned\nto use with that <r<defense-practice>> <r<log>>?")
          			  case 1:
/*< 18>*/ 				printf("\x0E\x01\x09\x04\x1C\x200<g<Give your Nunchuk a shake >>to take\nyour <r<shield>> out. Simple stuff, I know,\nbut you need to review the basics!\n\n\x0E\x01\x09\x04\x0E\x200To lower your shield, <g<swing your sword\nwith the Wii Remote>>, or press (A) to put\nyour sword and shield away entirely.\n\n\x0E\x01\x09\x04\x08\x200Just be careful when trying to attack\nwhile on the defensive. Every time you \n<g<swing your sword>>, you move your shield\nout of the way, <r<lowering your guard>>!")
          				goto flw_21
          			  case 2:
/*<160>*/ 				printf("\x0E\x01\x09\x04\x09\x200I see... Well, trying it out for yourself\nis the best way to learn. Why don't\nyou practice on that defense log?")
          			}
          		  case 1:
/*< 22>*/ 			switch (scene_flags[59 /* 0x6 08 */]) {
          			  case 0:
/*< 14>*/ 				printf("\x0E\x01\x09\x04\x00\x09Impressive, Link! That's\na nice shield you have there.\n\x0E\x01\x09\x04\x19\x200Well then, it's time I taught you the\n<r<art of defense>>!\nWe'll start with <r<basic training>>!")
          				flw_15:
/*< 15>*/ 				printf("\x0E\x01\x09\x04\x1C\x200<g<Give your Nunchuk a shake >>to take\nyour <r<shield>> out. Simple stuff, I know,\nbut you need to review the basics!\n\n\x0E\x01\x09\x04\x0E\x200To lower your shield, <g<swing your sword\nwith the Wii Remote>>, or press (A) to put\nyour sword and shield away entirely.\n\n\x0E\x01\x09\x04\x08\x200Just be careful when trying to attack\nwhile on the defensive. Every time you \n<g<swing your sword>>, you move your shield\nout of the way, <r<lowering your guard>>!")
/*< 16>*/ 				printf("\x0E\x01\x09\x04\x09\x1D00Why don't you try that first!")
/*< 23>*/ 				scene_flags[0 'Skyloft'][60 /* 0x6 10 */] = true;
          			  case 1:
/*<157>*/ 				printf("\x0E\x01\x09\x04\x08\x1D04\x0E\x03\x01\x00Link... The headmaster\ntold me about Zelda. Poor girl...\nI'm worried about her...\n\nNow, I don't know all the details of\nwhat's going on here...\n\n\nBut that sword you're carrying isn't\nfrom Skyloft. It's an <r<ancient artifact>>\nthat can only be carried by the chosen\none.\nAnd since you happen to be the one\ncarrying it, I guess I can figure out\na lot of the rest of this crazy story...")
/*<159>*/ 				printf("\x0E\x01\x09\x04\x00\x1D04You know, Link...\nI just wish there was more I could do\nfor you...\n\nBut I can offer this as a parting gift...\n\x0E\x01\x09\x04\x19\x1D00Get ready to learn some new moves!\nIt's time to learn the <r<secrets of\ndefense>>.\n\x0E\x01\x09\x04\x00\x200First, we should start with the <r<basics>>!")
          				goto flw_15
          			}
          		}
          	  case 1:
/*< 11>*/ 		switch (scene_flags[59 /* 0x6 08 */]) {
          		  case 0:
/*< 12>*/ 			printf("\x0E\x01\x09\x04\x19\x1D01The art of the shield is the art of\ndefense. You don't have a chance of\nwinning a battle if your attack and\ndefense aren't balanced.\n\x0E\x01\x09\x04\x08\xE00You can get a <r<shield >>at the<r< bazaar>>.\nAlways practice with a shield in your\nhand. It will lead you to the way of\nthe sword!\n\x0E\x01\x09\x04\x09\x1D00I'm telling you all this for your\nbenefit, so pay attention!")
          		  case 1:
/*<  8>*/ 			switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
          			  case 0:
/*<  9>*/ 				printf("\x0E\x01\x09\x04\x08\x1D04\x0E\x03\x01\x00Link... The headmaster\ntold me about Zelda. Poor girl...\nI'm worried about her...\n\nNow, I don't know all the details of\nwhat's going on here...\n\n\nBut that sword you're carrying isn't\nfrom Skyloft. It's an <r<ancient artifact>>\nthat can only be carried by the chosen\none.\nAnd since you happen to be the one\ncarrying it, I guess I can figure out\na lot of the rest of this crazy story...")
/*<158>*/ 				printf("\x0E\x01\x09\x04\x00\x1D00I wish there was something else I could\ndo for you, Link...\nWait, maybe there is... Yes! Get a\n<r<shield >>and come back here!\n\x0E\x01\x09\x04\x19\x1D00Then I'll be able to teach you the\n<r<secrets of defense>>! It's the least\nI can do for you.")
/*< 10>*/ 				scene_flags[0 'Skyloft'][59 /* 0x6 08 */] = true;
          			  case 1:
/*<  5>*/ 				switch (scene_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*<  6>*/ 					printf("\x0E\x01\x09\x04\x00\x05Oh yeah? You want to learn about how\nto use a sword?\n[1]Yes, please. [2-]No, thanks.")
/*<  4>*/ 					switch (choice(2)) {
          					  case 0:
/*<  3>*/ 						printf("\x0E\x01\x09\x04\x09\x203OK! <r<Just swing the Wii Remote >>to swing\nyour sword!\n\n\nSwing the Wii Remote vertically to do a\n<g<vertical slash>>, and swing it sideways to\ndo a <g<side slash>>.\n\nThrust the Wii Remote forward to do a\n<g<thrust>>!\n\n\n\x0E\x01\x09\x04\x17\x200And then there's the <g<spin attack>>,\na more advanced technique. To do that,\nswing the Wii Remote and Nunchuk\ntogether in a sideways motion.\n\x0E\x01\x09\x04\x18\x1D00If you remember these moves, you can\nhandle yourself in any fight.\n\n\n\x0E\x01\x09\x04\x00\x1D04Just remember the fundamentals!\nAlways press<r< >>(Z) <r<to target>> an enemy\nas soon as you see it.\x0E\x01\x11\x02\x7CD")
          						flw_7:
/*<  7>*/ 						printf("\x0E\x01\x09\x04\x1C\x1D03Try getting in some good practice on\nthose <r<logs>>!\n\n\n\x0E\x01\x09\x04\x09\x200If the sword doesn't respond quite the\nway you want it to, try big <r<vertical\n>><g<overhead practice<g< <g<>><g<swings >>in front of\nyou, then get back to the action.\n\x0E\x01\x09\x04\x08\x200Once you've sliced up those logs, I'll\nset it up so you can try out your\n<r<big move>>.")
          					  case 1:
/*<  2>*/ 						printf("\x0E\x01\x09\x04\x0E\x1A08That's right. You're good with a sword.\n\n\n\n\x0E\x01\x09\x04\x08\x200But practice is everything! You don't\nbecome a sword master sitting on \nyour rear end.\n\n\x0E\x01\x09\x04\x19\x1D00You've got to practice those\nfundamentals, like using (Z)<r< to target\nenemies>>. It's not glamorous, but that's\na swordsman's bread and butter.\x0E\x01\x11\x02\x7CD")
          						goto flw_7
          					}
          				  case 1:
/*<  1>*/ 					printf("\x0E\x01\x09\x04\x00\x03Hey! It's Link!\n\n\n\n\x0E\x01\x09\x04\x09\x200So you still want to get in some sword\npractice, even though today is the Wing\nCeremony? I'm impressed.\n\nThe sword is in the back room.\nGo on back there and get it.\n\n\nI'll be here for a while, so if there's\nanything you don't understand about \nhandling a sword, go ahead and ask.")
          				}
          			}
          		}
          	}
          }

          void entrypoint_119_04() {
/*< 76>*/ 	start()
/*< 84>*/ 	printf("\x0E\x01\x09\x04\x01\x201That's a log for practicing your\n<r<vertical slash>>. Hold the Wii Remote\nstraight up, and then swing it straight\ndown to make a clean cut!")
          }

          void entrypoint_119_05() {
/*< 80>*/ 	start()
/*< 85>*/ 	printf("\x0E\x01\x09\x04\x19\x203That's a log for practicing your\n<r<side slash>>. Hold the Wii Remote\nhorizontally, and then slash it to the\nside to make a clean cut!")
          }

          void entrypoint_119_06() {
/*< 81>*/ 	start()
/*< 86>*/ 	printf("\x0E\x01\x09\x04\x1D\x202That log is set up for practicing your\n<r<diagonal slash>>. Swing the Wii Remote\ndiagonally to cut right along the gash\nin the log.")
          }

          void entrypoint_119_07() {
/*< 82>*/ 	start()
/*< 87>*/ 	printf("\x0E\x01\x09\x04\x08\x203That's a log used for practicing your\n<r<thrust>>. Sharply move the Wii Remote\nforward to thrust your sword.")
          }

          void entrypoint_119_08() {
/*< 83>*/ 	start()
/*<161>*/ 	switch (adventure_pouch_has(0 0x0000)) {
          	  case 0:
/*< 79>*/ 		printf("\x0E\x01\x09\x04\x19\x202That log is used to practice defense.\n\n\n\n\x0E\x01\x09\x04\x1C\x1D00Hit the log with your sword, and then\n<g<sharply move the Nunchuk forward >>to\nexecute a <r<shield bash >>when it swings\nback at you.")
          	  case 1:
/*< 77>*/ 		switch (adventure_pouch_has(9 0x0009)) {
          		  case 0:
/*<162>*/ 			printf("\x0E\x01\x09\x04\x19\x1D02That log is used to practice <r<defense>>.\nYou don't have a <r<shield>> equipped,\nthough, so don't mess with it, or it'll\nsend you flying!")
          		  case 1:
/*< 78>*/ 			printf("\x0E\x01\x09\x04\x19\x1D02That log there is for practicing\n<r<defense>>. You don't have a <r<shield>> yet, so\ndon't mess with it, or it'll send you\nflying!")
          		}
          	}
          }

          void entrypoint_119_09() {
/*<109>*/ 	start()
/*<114>*/ 	printf("\x0E\x01\x09\x04\n\x213That's right, Link!")
/*<116>*/ 	set_camera(3, 0)
/*<110>*/ 	printf("\x0E\x01\x09\x04\x08\x1908You really are a strong swordsman. \nEasy to teach too. You make this\ninstructor proud!\n\n\x0E\x01\x09\x04\x09\x200Are you ready to try a <g<spin attack>>?\n[1]OK![2-]Not yet.")
          }

