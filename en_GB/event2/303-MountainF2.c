          void entrypoint_303_27() {
/*< 91>*/ 	start()
/*< 92>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "Did you see that, Mistress Fi?")
          }

          void entrypoint_303_44() {
/*<203>*/ 	start()
/*<204>*/ 	printf(/* textboxtype: 1, unk: 0, line: 1 */ "Whoa! Sure is hot here, brrzrrt.\nNo sweat, though, because I'm a\ncutting-edge, zzort, robot!")
          }

          void entrypoint_303_10() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ "<sound 114>Bzzzrpt! Where are you going now?\nI'll wait here if you've got an errand\nto run, zzzt, but get going!")
          }

          void entrypoint_303_28() {
/*< 93>*/ 	start()
/*< 94>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "If there's anything else I can do to be\nof assistance, zzzzrp, just call me!\nAnytime, zzzrbtzz!")
          }

          void entrypoint_303_45() {
/*<205>*/ 	start()
/*<206>*/ 	printf(/* textboxtype: 1, unk: 0, line: 2 */ "Hey! This isn't the right way, zrrt!\nDo you need to stop and ask for\ndirections?")
          }

          void entrypoint_303_11() {
/*< 56>*/ 	start()
/*< 57>*/ 	printf(/* textboxtype: 1, unk: 0, line: 5 */ "<sound 114>Zzzbt! I'm in trouble over here!\nHurry up and help me, bzzzzat!")
          }

          void entrypoint_303_29() {
/*< 95>*/ 	start()
/*< 96>*/ 	printf(/* textboxtype: 2, unk: 0, line: 104 */ "The flames blocking your path have\nbeen fully extinguished. I recommend\nproceeding ahead.")
/*<200>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<291>*/ 	story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = false;
          }

          void entrypoint_303_46() {
/*<207>*/ 	start()
/*<208>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "Are we almost there? Let's get a move\non, brzzt!")
          }

          void entrypoint_303_12() {
/*< 58>*/ 	start()
/*< 59>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "<sound 114>HEY! Brzzpt! I need help...NOW!")
          }

          void entrypoint_303_47() {
/*<219>*/ 	start()
/*<220>*/ 	printf(/* textboxtype: 2, unk: 0, line: 121 */ "Welcome back, <0x10012:0x00000004>Master.\n\n\n\nI conjecture your newly acquired\n<color yellow<Fireshield Earrings >coloroff>will allow you to\nsafely travel in extremely hot areas.\n\nI recommend continuing your search\nfor the<color red< sacred flame>coloroff>.")
          }

          void entrypoint_303_13() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10005:0x003c0000><0x10008:0x02cd>ZZRRRPT!")
          }

          void entrypoint_303_30() {
/*< 97>*/ 	start()
/*< 98>*/ 	printf(/* textboxtype: 2, unk: 0, line: 105 */ "<0x10005:0x004b0000><0x10012:0x0000000b>I have a status update for you, Master.\nWe are now near the crater at the peak\nof Eldin Volcano.")
          }

          void entrypoint_303_48() {
/*<221>*/ 	start()
/*<223>*/ 	switch (scene_flags[108 /* 0xC 10 */]) {
          	  case 0:
/*<252>*/ 		switch (scene_flags[112 /* 0xF 01 */]) {
          		  case 0:
/*<254>*/ 			switch (scene_flags[113 /* 0xF 02 */]) {
          			  case 0:
/*<270>*/ 				switch (scene_flags[114 /* 0xF 04 */]) {
          				  case 0:
/*<271>*/ 					printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x00110801>Hey, pal. You bust up those <color red<mugs with\nthe big shields >coloroff>yet?\n\n\n<0x10009:0x00ffff00>Here's all you got to remember:\ncut wooden shields, repel spear attacks,\nand jab shields like they were walls.\n\nIf you keep all that in your head, you'll\ndo just fine. I promise!")
/*<272>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				  case 1:
/*<263>*/ 					printf(/* textboxtype: 1, unk: 0, line: 97 */ "Hey, pal. You still haven't figured out\nthose <color red<mugs with the big shields>coloroff>, right?\n\n\n<0x10009:0x0015080b>I've got one <color red<last bit of secret info >coloroff>that\nwill make your life a whole lot easier.")
/*<264>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 256, 'param3': 12}
/*<256>*/ 					printf(/* textboxtype: 1, unk: 0, line: 98 */ "You know the drill by now, right?\n<0x10009:0x00ffff09>It's gonna cost you some R-<pause 10>U-<pause 10>P-<pause 10>E-<pause 10>E-<pause 10>S.<pause 10>\nAnd the price for this is <color red<50 Rupees>coloroff>.\n[1-]OK![2]No, thanks.")
          					flw_245:
/*<245>*/ 					switch (choice(2)) {
          					  case 0:
/*<247>*/ 						check_item_flag(501, 50)
/*<248>*/ 						switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 84}) {
          						  case 0:
/*<269>*/ 							rupees += -50;
/*<250>*/ 							printf(/* textboxtype: 1, unk: 0, line: 91 */ "<0x10009:0x0011080b>Yes! There's not a stingy bone in your\nbody, is there? Truth be told, it makes\nme a bit worried about ya.\n\n<0x10009:0x00141200>Keep your wits about ya, pal.\nThere are hustlers out there who'll\nfleece ya for every Rupee you've got. ")
/*<251>*/ 							scene_flags[4 'Eldin Volcano'][114 /* 0xF 04 */] = true;
/*<265>*/ 							printf(/* textboxtype: 1, unk: 0, line: 92 */ "<0x10009:0x00ffff00>All right, here goes my last secret.\nThose creeps' shields are huge, right?\nLike a wall?\n\n<0x10009:0x00110800>Well then, treat 'em like a wall and\njab, jab, jab!\n\n\n<0x10009:0x00ffff09>I'm not going to tell ya what happens,\nbut I highly recommend ya try it.\nI think you'll like the results!\n\n<0x10009:0x00110800>Go get 'em, pal! And thanks again for\nthe business.")
/*<266>*/ 							scene_flags[4 'Eldin Volcano'][114 /* 0xF 04 */] = true;
/*<275>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						  case 1:
/*<249>*/ 							printf(/* textboxtype: 1, unk: 0, line: 101 */ "<0x10009:0x00141215>What are you trying to pull, pal? You\ndon't have enough Rupees!\n\n\n<0x10009:0x00ffff00>Come back when you've managed to\nscrape together <color red<50 Rupees>coloroff>, all right?")
/*<274>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					  case 1:
/*<246>*/ 						printf(/* textboxtype: 1, unk: 0, line: 100 */ "<0x10009:0x00141215>What are you getting all stingy for?\nIt's a lousy <color red<50 Rupees>coloroff>.\n\n\n<0x10009:0x00ffff00>Pfft. Whatever. Come see me if you\nchange your mind.")
/*<273>*/ 						zone_temp_flags[7 /* 0x1 80 */] = true;
          					}
          				}
          			  case 1:
/*<261>*/ 				printf(/* textboxtype: 1, unk: 0, line: 95 */ "Hey, pal. You still having problems\nwith them <color red<mugs with the big shields>coloroff>?\n\n\n<0x10009:0x0015080b>I got some<color red< more secret information\n>coloroff>that will make your life a whole lot\neasier.")
/*<262>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 255, 'param3': 12}
/*<255>*/ 				printf(/* textboxtype: 1, unk: 0, line: 96 */ "But there's no free lunch, ya hear me?\n<0x10009:0x00ffff09>It's gonna cost you some R-<pause 10>U-<pause 10>P-<pause 10>E-<pause 10>E-<pause 10>S.<pause 10>\nYep, <color red<30 Rupees >coloroff>to be exact.\n[1-]OK![2]No, thanks.")
          				flw_234:
/*<234>*/ 				switch (choice(2)) {
          				  case 0:
/*<236>*/ 					check_item_flag(501, 30)
/*<237>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 78}) {
          					  case 0:
/*<268>*/ 						rupees += -30;
/*<239>*/ 						printf(/* textboxtype: 1, unk: 0, line: 88 */ "<0x10009:0x00110808>I knew there was a reason I liked ya!\nAll right, here goes...\n\n\n<0x10009:0x00ffff00>Those thugs are always trying to skewer\nya with those monster spears, right?\nTake one of those in the gut, and it's\nlights out.\nIf ya time it right, you can<color red< repel >coloroff>their\nattacks and...<pause 15>well, you know what\n<0x10009:0x00110800>happens after that.<pause 15>\n[1-]Good info![2-]I knew that.")
/*<241>*/ 						scene_flags[4 'Eldin Volcano'][113 /* 0xF 02 */] = true;
/*<242>*/ 						switch (choice(2)) {
          						  case 0:
/*<244>*/ 							printf(/* textboxtype: 1, unk: 0, line: 89 */ "<0x10009:0x0011080b>You bet it is! I put my life on the line\nto get it too.\n\n\n<0x10009:0x00ffff00>And I got more where that came from.\nThis next one's the hidden cherry\non top of the secret sundae. It's only\n<pause 20><color red<50 Rupees>coloroff>.[1-]Gimme![2]No, thanks.")
          							goto flw_245
          						  case 1:
/*<243>*/ 							printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x00120e04>You did? Nice work, pal. You're an\nobservant...uhm...whatever you are.\n\n\n<0x10009:0x00ffff00>Good thing I saved the best for last!\nThis one's a real showstopper, but it\nain't cheap. It'll cost ya <color red<50 Rupees>coloroff>!\n[1-]I'm in![2]No, thanks.")
          							goto flw_245
          						}
          					  case 1:
/*<238>*/ 						printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00141215>What's the deal, pal? You don't have\nenough Rupees, so you're getting a\nload of nothing from me.\n\n<0x10009:0x00ffff00>Find yourself <color red<30 Rupees>coloroff>, then come\nand see me.")
/*<276>*/ 						zone_temp_flags[7 /* 0x1 80 */] = true;
          					}
          				  case 1:
/*<235>*/ 					printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00141215>What're you being so stingy for?\nIt's only <color red<30 Rupees>coloroff>. \n\n\n<0x10009:0x00ffff00>All right, whatever. Come see me if you\nchange your mind.")
/*<277>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				}
          			}
          		  case 1:
/*<259>*/ 			printf(/* textboxtype: 1, unk: 0, line: 93 */ "Hey, pal. You still having problems\nwith them <color red<mugs with the big shields>coloroff>?\n\n\n<0x10009:0x0015080b>I got some<color red< secret information>coloroff> here that\nwill make your life a whole lot easier.")
/*<260>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 253, 'param3': 12}
/*<253>*/ 			printf(/* textboxtype: 1, unk: 0, line: 94 */ "But nothing in life is free, ya know?\n<0x10009:0x00ffff09>It's gonna cost ya some R-<pause 10>U-<pause 10>P-<pause 10>E-<pause 10>E-<pause 10>S.<pause 10>\nYep, <color red<30 Rupees >coloroff>to be exact.\n[1-]OK![2]No, thanks.")
          			flw_225:
/*<225>*/ 			switch (choice(2)) {
          			  case 0:
/*<227>*/ 				check_item_flag(501, 30)
/*<228>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 72}) {
          				  case 0:
/*<267>*/ 					rupees += -30;
/*<230>*/ 					printf(/* textboxtype: 1, unk: 0, line: 85 */ "<0x10009:0x00110809>Thank you very much, pal! Listen up!\nThis is for your ears only. Don't go\nsquawking about it with every mug\nyou meet.\n<0x10009:0x00ffff00>Here's the deal... <pause 20>The shields those\nlugs are carrying around? You can cut\nthem with your sword! What did I tell\nyou? Is that not top-notch info?\nWatch out for the creeps with the tough\niron shields, though--you can't cut\nthem. \n[1-]Got it, thanks! [2-]What? Is that it?")
/*<240>*/ 					scene_flags[4 'Eldin Volcano'][112 /* 0xF 01 */] = true;
/*<231>*/ 					switch (choice(2)) {
          					  case 0:
/*<233>*/ 						printf(/* textboxtype: 1, unk: 0, line: 86 */ "<0x10009:0x0015090b>Heh heh... And I've got plenty more\ninfo where that came from. You\nknow you want to hear it.\n\n<0x10009:0x00ffff00>You willing to cough up...<pause 20>another\n<color red<30 Rupees>coloroff>?\n[1-]You bet! [2]No way.")
          						goto flw_234
          					  case 1:
/*<232>*/ 						printf(/* textboxtype: 1, unk: 0, line: 87 */ "Yo! What's up with you giving me that\nface? You know, the “I've heard it all\nbefore\" face.\n\n<0x10009:0x00150809>That last tidbit was just the tip of the\niceberg, pal. Not that I ever seen one...\nI got something really juicy here for\nyou. Got another <color red<30 Rupees>coloroff> on you?[1-]Yep![2]Nope.")
          						goto flw_234
          					}
          				  case 1:
/*<229>*/ 					printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00141215>What's the deal, pal? You don't have\nenough Rupees, so you're getting a\nload of nothing from me.\n\n<0x10009:0x00ffff00>Find yourself <color red<30 Rupees>coloroff>, then come\nand see me.")
/*<278>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				}
          			  case 1:
/*<226>*/ 				printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00141215>What're you being so stingy for?\nIt's only <color red<30 Rupees>coloroff>. \n\n\n<0x10009:0x00ffff00>All right, whatever. Come see me if you\nchange your mind.")
/*<279>*/ 				zone_temp_flags[7 /* 0x1 80 */] = true;
          			}
          		}
          	  case 1:
/*<222>*/ 		printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000001>Yo, pal. This your idea of a break\nroom? Battling all them monsters\ngot ya a little run down, huh?\n\n<0x10009:0x00110900>If those creeps with the <color red<big shields>coloroff>\nare as tough as they are ugly, they\nmust be a real pain in the neck.\n\n<0x10009:0x0015080b>See, I got some<color red< secret information>coloroff> that\nI'm sure will make your life easier.")
/*<258>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 257, 'param3': 12}
/*<257>*/ 		printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x00ffff09>Of course, nothing comes for free in\nthis day and age. You're gonna have\nto part with some R-<pause 10>U-<pause 10>P-<pause 10>E-<pause 10>E-<pause 10>S.\nThat spells Rupees, by the way.\nIt's all yours for <color red<30 Rupees>coloroff>.\nWhaddya say?\n[1-]Tell me! [2]Nah.")
/*<224>*/ 		scene_flags[4 'Eldin Volcano'][108 /* 0xC 10 */] = true;
          		goto flw_225
          	}
          }

          void entrypoint_303_14() {
/*< 62>*/ 	start()
/*< 63>*/ 	printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10005:0x005a0000>MAL-MAL-MALfunction! Zzrrt!\nToo...zzrrggt...damage...bzzzz...")
          }

          void entrypoint_303_31() {
/*< 99>*/ 	start()
/*<100>*/ 	printf(/* textboxtype: 2, unk: 0, line: 106 */ "<0x10005:0x005a0000>I am detecting extremely high\ntemperatures in this area. However,\nyour<color yellow< Fireshield Earrings >coloroff>will allow for\nextended periods of exploration.")
          }

          void entrypoint_303_49() {
/*<280>*/ 	start()
/*<281>*/ 	printf(/* textboxtype: 2, unk: 0, line: 122 */ "<0x10012:0x0000000b>Master <heroname>, I detect\nno<color red< water >coloroff>in the immediate vicinity.\n\n\nOf course, you will need a large basin\nto proceed past the impediment, but\nyou will also need <color red<water>coloroff>. <sound 4>I recommend\nyou start with that task.")
/*<282>*/ 	scene_flags[5 'Eldin Volcano Summit'][115 /* 0xF 08 */] = true;
          }

          void entrypoint_303_15() {
/*< 64>*/ 	start()
/*< 65>*/ 	printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10012:0x00000064>HEY! I can't use that, zzrrpt! You're\ngoing to have to walk!")
          }

          void entrypoint_303_32() {
/*<101>*/ 	start()
/*<102>*/ 	printf(/* textboxtype: 2, unk: 0, line: 107 */ "<0x10005:0x005a0000>I calculate the probability of finding\nthe final<color red< sacred flame >coloroff>here at 90%.\nI recommend searching for flames.")
          }

          void entrypoint_303_16() {
/*< 66>*/ 	start()
/*< 67>*/ 	printf(/* textboxtype: 1, unk: 0, line: 11 */ "<sound 114>Brrzt! Wait for me!")
          }

          void entrypoint_303_33() {
/*<103>*/ 	start()
/*<104>*/ 	printf(/* textboxtype: 2, unk: 0, line: 108 */ "I am detecting malfunctions within the\nrobot. I recommend repairing it and\ntrying again.")
          }

          void entrypoint_303_50() {
/*<293>*/ 	start()
/*<294>*/ 	printf(/* textboxtype: 2, unk: 0, line: 123 */ "<0x10012:0x0000000b>A report, Master <heroname>.\nThe transport robot is waiting for you\nat the base of the volcano.\n\nI recommend going up into the sky\nagain and returning to the base of\nthe volcano to guide the robot to\nthis location.")
/*<295>*/ 	temp_flags[29 /* 0x2 20 */] = true;
          }

          void entrypoint_303_17() {
/*< 68>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 1, unk: 0, line: 12 */ "<sound 114>I can't see you, brrrzt! Open your <color red<map\n>coloroff>with (+) and see where I am. Then\ncome get me, brzzzpt!")
          }

          void entrypoint_303_34() {
/*<105>*/ 	start()
/*<106>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "Do better this time, zzbrrrt!")
/*<199>*/ 	story_flags[723 /* us: 805A9B24 0x08, jp: 805ACDA4 0x08 */] = false;
          }

          void entrypoint_303_00() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "Get moving, Master Shortpants!\nI'll be following right behind you, zrrt!")
          }

          void entrypoint_303_18() {
/*< 70>*/ 	start()
/*<196>*/ 	switch (random(3)) {
          	  case 0:
/*< 71>*/ 		printf(/* textboxtype: 1, unk: 0, line: 13 */ "<sound 114>Monsters! Zrrrbt, are you going to\nhandle those or what?!")
          	  case 1:
/*<197>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "<sound 114>Bzzzrt! Help! DANGER!")
          	  case 2:
/*<198>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "<sound 114>Monsters, zzzbrt! I can't stand\nmonsters!")
          	}
          }

          void entrypoint_303_35() {
/*<107>*/ 	start()
/*<108>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "If there's anything else I can do to be\nof assistance, zzzzrp, just call me!\nAnytime, zzzrbtzz!")
          }

          void entrypoint_303_01() {
/*<  2>*/ 	start()
/*<  6>*/ 	switch (story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */]) {
          	  case 0:
/*<  8>*/ 		printf(/* textboxtype: 1, unk: 0, line: 35 */ "I have got a hunch there are still \n<color yellow<Goddess Cubes >coloroff>on this mountain. \nYou should see if you can find them.")
          	  case 1:
/*<  3>*/ 		printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x00151b09>Oh, hey! We meet again. How have you\nbeen, bud?\n\n\nI rumbled over here 'cause I heard\nsomeone had spotted <color yellow<Goddess Cubes\n>coloroff>in the area.\n\nYou may have already found some,\nbut I got a feeling there are some\nothers hidden away around here.\n\n<0x10009:0x001817ff>You might think about searching for\nthem yourself when you get the time.")
/*<  9>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_303_19() {
/*< 72>*/ 	start()
/*< 74>*/ 	switch (random(3)) {
          	  case 0:
/*< 73>*/ 		printf(/* textboxtype: 1, unk: 0, line: 16 */ "<sound 114>HEY! Just how long, zzrrt, do I have to\nwait for you? Press (+) and use your\n<color red<map >coloroff>to find me, brzzzt!")
          	  case 1:
/*< 75>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "<sound 114>Why are you so, zzzrrrt, SLOW?\nPress (+) to open your <color red<map >coloroff>and\nconfirm my location!")
          	  case 2:
/*< 76>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<sound 114>Brrzpt! What are you doing? Get over\nhere already! If you don't know where\nI am, press (+) to open your <color red<map>coloroff>, zzzrt!")
          	}
          }

          void entrypoint_303_36() {
/*<109>*/ 	start()
/*<213>*/ 	switch (story_flags[744 /* us: 805A9B29 0x01, jp: 805ACDA9 0x01 */]) {
          	  case 0:
/*<215>*/ 		set_camera(2, 0)
/*<216>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 49, 'next': 217, 'param3': 32}
/*<217>*/ 		make_actor_do_something(0, 49)
/*<214>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "")
/*<218>*/ 		story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = true;
          	  case 1:
/*<116>*/ 		set_camera(2, 0)
/*<209>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 49, 'next': 210, 'param3': 32}
/*<210>*/ 		make_actor_do_something(0, 49)
/*<110>*/ 		printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10012:0x00000064>What's going on, brzzt? I almost blew\na rotor trying to slow myself during\nthat descent, zrbt... Anyway, this is\nwhere you wanted the water, right?\n<pause 10>WHAT?! THE SUMMIT? <pause 15>Why didn't\nyou say so from the start, bzzrt?\nI don't want to carry this thing back\nto the sky. IT'S HEAVY, BRZZZT!\nBzzzrt...zrrbt...tzzptrr.<pause 15>")
/*<114>*/ 		set_camera(1, 0)
/*<111>*/ 		printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10012:0x00000064>This place is, zrrrt, swarming with\nmonsters. Vrrrrrm...")
/*<115>*/ 		set_camera(3, 0)
/*<112>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10012:0x00000064>I bust up enemies like a junk-yard\nwrecker, zzizat! Too bad I've got\nmy mitts full with this basin, bzzz...")
/*<113>*/ 		printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10012:0x00000064>Hey, Master Shortpants! Since we\ncame all this way, let's play a little\ngame called “protect the robot,\" bzzrt!\n\nHere's how it works--I'll follow you up\nthe volcano, zzzrt, and you make sure\nnothing touches me. Got it? Good!")
/*<187>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10012:0x00000064>Your job is simple, zzrrt! You make\nsure none of these monsters lays a\nclaw on me. NOT...ONE...CLAW!")
/*<211>*/ 		story_flags[744 /* us: 805A9B29 0x01, jp: 805ACDA9 0x01 */] = true;
/*<212>*/ 		story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = true;
          	}
          }

          void entrypoint_303_02() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 2, unk: 0, line: 103 */ "<0x10012:0x0000000b>Master, I have information for you.\nWith the enhanced capabilities of your\nsword, you are now able to use your\n<color red<dowsing >coloroff>ability to find <color yellow<Goddess Cubes>coloroff>. \nI have taken the liberty of registering\n<color yellow<Goddess Cubes >coloroff>as <color red<dowsing >coloroff>targets.\n<sound 4>Please use this ability as you deem\nnecessary.")
/*<  7>*/ 	story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */] = true;
/*<290>*/ 	open_dowsing_wheel(21)
          }

          void entrypoint_303_37() {
/*<117>*/ 	start()
/*<124>*/ 	switch (story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */]) {
          	  case 0:
/*<125>*/ 		printf(/* textboxtype: 1, unk: 0, line: 59 */ "Too bad you came all this way only to\nget stopped dead in your tracks.\nIt's just not your lucky day, bud.\n\n<0x10009:0x00150dff>Uh...<pause 20>I get the feeling I'm forgetting\nsomething important...\n\n\nI think it's something my buddy told\nme once, but... <pause 20><0x10009:0x00000004>Nope, I can't remember.\n\n\n<0x10009:0x000908ff>Oh well, back to the water. If you need\nlots of the wet stuff, you should head\nover to <color red<Lake Floria>coloroff>. I think you'll find\nwhat you need.")
          		flw_141:
/*<141>*/ 		switch (story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */]) {
          		  case 0:
          		  case 1:
/*<138>*/ 			zone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	  case 1:
/*<118>*/ 		printf(/* textboxtype: 1, unk: 1, line: 55 */ "<0x10009:0x00110801>Well, look who we have here! You still\nlooking for your friend?\n\n\n<0x10009:0x000908ff>Of course, I'm on the hunt for\ntreasure. Heard there were some\nfancy ruins out in this direction...\nSo here I am!\n<0x10009:0x00150dff>Believe it or not, I haven't found a\nthing. Got any information for me?\n[1-]Want to know?[2-]I'm not telling!")
/*<119>*/ 		switch (choice(2)) {
          		  case 0:
/*<120>*/ 			printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x00110900>You know something? Spill it!\nWe're friends, right?")
          			flw_122:
/*<122>*/ 			printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x0009080e>What? There's some fire blocking your\npath? Why don'tcha just pour some\nwater on it and move on?\n\n<0x10009:0x00150800>Ya need how much water? Whoa...\nI get it. <pause 20>So the water we got here's not\nenough, right?\n\n<0x10009:0x000908ff>You know, I hear the little water we\ngot here is fed by some far-off water\nsource called <color red<Lake Floria<sound 4>>coloroff>.\n\n<0x10009:0x001108ff>So a buddy of mine went huntin' for\ntreasure in <color blue<Faron Woods>coloroff>, and he told\nme he used the waterways there to find\nhis way back home.\n<0x10009:0x000908ff>He tells me Lake Floria was just about\nthe biggest lake you could imagine. Bet\nif you checked it out, there'd be enough\nwater there to solve your dilemma.")
/*<123>*/ 			story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */] = true;
          			goto flw_141
          		  case 1:
/*<121>*/ 			printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x0014120a>Don't get all tight-lipped on me now!\nWe're friends, right? Out with it!")
          			goto flw_122
          		}
          	}
          }

          void entrypoint_303_03() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 7, unk: 0, line: 102 */ "Quench my thirst to\nclear your path.")
          }

          void entrypoint_303_20() {
/*< 77>*/ 	start()
/*< 78>*/ 	printf(/* textboxtype: 1, unk: 0, line: 19 */ "<sound 114>It's about time, bzrrt! Don't leave me\nhanging like that.")
          }

          void entrypoint_303_38() {
/*<126>*/ 	start()
/*<135>*/ 	switch (scene_flags[114 /* 0xF 04 */]) {
          	  case 0:
/*<136>*/ 		printf(/* textboxtype: 2, unk: 1, line: 117 */ "<0x10012:0x0000000b>Master <heroname>, I have a\nstatus report for you. <0x10012:0x00000001>The flames that\nimpede your progress have not yet been\nextinguished. \nShall I register the <color blue<Water Dragon>coloroff>'s\nvessel as a <color green<dowsing >coloroff>target?\n[1-]Yes![2]Not yet.")
          		flw_139:
/*<139>*/ 		switch (choice(2)) {
          		  case 0:
/*<128>*/ 			story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = true;
/*<129>*/ 			story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<130>*/ 			story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<131>*/ 			story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<132>*/ 			story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<133>*/ 			story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<289>*/ 			printf(/* textboxtype: 2, unk: 0, line: 118 */ "<0x10012:0x00000005>Master, I have completed registering\nthe <color blue<Water Dragon>coloroff>'s vessel as a <color green<dowsing\n>coloroff>target.<sound 4>")
/*<288>*/ 			open_dowsing_wheel(13)
          			flw_134:
/*<134>*/ 			scene_flags[5 'Eldin Volcano Summit'][114 /* 0xF 04 */] = true;
/*<137>*/ 			zone_temp_flags[0 /* 0x1 01 */] = false;
          		  case 1:
/*<140>*/ 			printf(/* textboxtype: 2, unk: 0, line: 119 */ "<0x10012:0x00000005>Understood, Master. I will not proceed\nwith registration.")
          			goto flw_134
          		}
          	  case 1:
/*<127>*/ 		printf(/* textboxtype: 2, unk: 1, line: 109 */ "A report, <0x10012:0x0000000b>Master <heroname>.\nI recommend following the <color blue<Mogma>coloroff>'s\nadvice and returning to <color red<Lake Floria>coloroff>.\n\nI also have some advice pertinent to\nthe situation. It concerns a method\nfor transporting water from the lake...<pause 15>\nI suggest you visit the <color red<Water Dragon>coloroff>.<sound 4>\nI conjecture that you can transport\na large volume of water using the <color red<water\nbasin>coloroff> that the previously injured\nWater Dragon recuperated in.")
/*<296>*/ 		printf(/* textboxtype: 2, unk: 1, line: 116 */ "Would you like me to analyze previous\ndata and register the vessel as a\n<color red<dowsing>coloroff> target?\n[1-]Yes![2]Not yet.")
          		goto flw_139
          	}
          }

          void entrypoint_303_04() {
/*< 12>*/ 	start()
/*< 14>*/ 	switch (story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */]) {
          	  case 0:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00151b09>Hey! Are you here looking for\n<color yellow<Goddess Cubes>coloroff> too? Nice work getting \npast that hot spot back there, bud.\n\n<0x10009:0x00ffff00>The heat back there did not bother\nme a bit, but these flames right\nhere are another matter.")
          		flw_17:
/*< 17>*/ 		printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x001817ff>I wish there was something we could do\nto put out these flames...")
          	  case 1:
/*< 13>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00151b09>Oh, hey! We meet again. How have you\nbeen, bud?\n\n\n<0x10009:0x00160bff>I rumbled over here 'cause I heard\nsomeone had spotted some<color yellow< Goddess\nCubes >coloroff>in the area.\n\n<0x10009:0x00000b00>I have got a hunch they may be down in\nthat direction, but...this flaming\nwall of fire is blocking the way!")
/*< 16>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_17
          	}
          }

          void entrypoint_303_21() {
/*< 79>*/ 	start()
/*< 80>*/ 	printf(/* textboxtype: 1, unk: 0, line: 20 */ "<sound 114>Bzzzort! What do you think you're\ndoing?")
          }

          void entrypoint_303_39() {
/*<148>*/ 	start()
/*<150>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*<151>*/ 		printf(/* textboxtype: 1, unk: 2, line: 61 */ "<0x10009:0x000c0405>If I'm going to retire, I want to live in\na place up high with a glorious view.\n\n\n<0x10009:0x000c0dff>I've lived most of my life underground,\nit's true, but I still gaze up at that sky.\nIt's so...big and blue and fluffy.\n\n<0x10009:0x00090906>If I had my way, I'd like to come back\nin my next life as a bird and spend my\ntime soaring the wild blue yonder.")
          	  case 1:
/*<149>*/ 		printf(/* textboxtype: 1, unk: 2, line: 60 */ "<0x10009:0x000b0c07>Oh, you again! It's been a looong time,\nbut I remember that face.\n\n\n<0x10009:0x000b0506>Heh heh heh. How're those gloves I\ninvented treatin' ya? Are they up to\nyour satisfaction?\n\nHow've I been? Awful nice of ya to ask.\nLemme see...\n\n\n<0x10009:0x000c0405>I've been searchin' high and low for\nnew treasure, but I've come up empty\npawed.\n\nI gotta say, I'm tired of diggin' after\nmy fortune in this blast furnace.\n\n\n<0x10009:0x00090908>I'm startin' to think it's time I gave\nup this life of treasure hunting and\nsettle down to enjoy my twilight years.")
/*<152>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          	}
          }

          void entrypoint_303_05() {
/*< 23>*/ 	start()
/*< 21>*/ 	switch (scene_flags[106 /* 0xC 04 */]) {
          	  case 0:
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x00181700>Well, I know if you head out of here\nand hang a right, you will find this\nnice, refreshing <color red<spring>coloroff>, but...\n\nYeah, I am not sure what you should\ndo, to be honest.")
          	  case 1:
/*< 20>*/ 		switch (scene_flags[105 /* 0xC 02 */]) {
          		  case 0:
/*< 18>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "“Quench my thirst\"? Hmm... That\nreminds me. If you head back out of\nhere and turn right, you will end up\noutside.\nI found a <color red<spring >coloroff>there. <sound 4>Let me tell you,\nbud, that water was dee-licious!\n\n\n<0x10009:0x00181705>No idea how you would bring it in here,\nthough. I doubt those weird-looking\nfrog beasts would carry it for you.\n<pause 15>Got any ideas?")
/*< 19>*/ 			scene_flags[5 'Eldin Volcano Summit'][106 /* 0xC 04 */] = true;
          		  case 1:
/*< 24>*/ 			printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x001817ff>I wish there was something we could do\nto put out these flames...")
          		}
          	}
          }

          void entrypoint_303_22() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<sound 114>HEY! Keep that up and you're going to\nbreak something, zzbrrt!")
          }

          void entrypoint_303_06() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x00171908>Hey, the flames are out! Now we can\nget through here.")
/*<153>*/ 	{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6911, 'next': 28, 'param3': 13}
/*< 28>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 0, 'next': 27, 'param3': 14}
/*< 27>*/ 	story_flags[468 /* us: 805A9B0F 0x40, jp: 805ACD8F 0x40 */] = true;
/*<142>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_303_23() {
/*< 83>*/ 	start()
/*< 84>*/ 	printf(/* textboxtype: 2, unk: 0, line: 22 */ "<0x10012:0x0000000b>Master, the robot is waiting at the\nvolcano. I suggest you return there.")
          }

          void entrypoint_303_40() {
/*<155>*/ 	start()
/*<157>*/ 	switch (story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */]) {
          	  case 0:
          		flw_165:
/*<165>*/ 		switch (scene_flags[81 /* 0xB 02 */]) {
          		  case 0:
/*<166>*/ 			printf(/* textboxtype: 1, unk: 0, line: 70 */ "<0x10009:0x001a030d>Elder...I'm gonna do ya proud--just\nwait and see. I hope ya watch over\nme from wherever it is you are now!")
          		  case 1:
/*<158>*/ 			printf(/* textboxtype: 1, unk: 1, line: 67 */ "<0x10009:0x001c180f>Wh-wha-what? The elder got...\nlaunched up somewhere?\nWhere'd he go, then?\n[1-]Up in the sky![2-]Beyond...")
/*<161>*/ 			switch (choice(2)) {
          			  case 0:
/*<162>*/ 				printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x001a2011>The sky? Up in the big, blue stuff, eh?\n\n\n\nOh... <0x10009:0x001b0407>Well, <pause 20>he always was talkin' about\nhow much he loved the sky.\n\n\nI bet he's up there now digging around\nin the clouds for treasure.")
          				flw_164:
/*<164>*/ 				scene_flags[4 'Eldin Volcano'][81 /* 0xB 02 */] = true;
          			  case 1:
/*<163>*/ 				printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x001a2011>Beyond?\n\n\n\nUh...<0x10009:0x001b2207>beyond? <pause 20>Whaddya mean\n“beyond\"? Are ya telling me he's\n“gone\" gone?\n\nI mean, we all gotta go sometime, \nbut, wow...")
          				goto flw_164
          			}
          		}
          	  case 1:
/*<186>*/ 		switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          		  case 0:
          			goto flw_165
          		  case 1:
/*<160>*/ 			switch (scene_flags[81 /* 0xB 02 */]) {
          			  case 0:
/*<176>*/ 				switch (zone_temp_flags[4 /* 0x1 10 */]) {
          				  case 0:
/*<177>*/ 					printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x001b2207>Traveling back and forth between here\nand the sky. The elder is soooo cool!")
          				  case 1:
/*<174>*/ 					printf(/* textboxtype: 1, unk: 0, line: 71 */ "<0x10009:0x001a2011>What do you mean, the elder's back?\n\n\n\n<0x10009:0x001b2207>Are you saying he can travel between\nhere and the sky? That is one amazing\nguy, I tell you.")
/*<175>*/ 					zone_temp_flags[4 /* 0x1 10 */] = true;
          				}
          			  case 1:
/*<167>*/ 				switch (zone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<172>*/ 					switch (zone_temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*<173>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000015>Twilight years, eh? Well, if that's\nwhat the elder wants, help an old\nMogma out, will ya?")
          					  case 1:
/*<286>*/ 						switch (story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */]) {
          						  case 0:
/*<170>*/ 							printf(/* textboxtype: 1, unk: 0, line: 64 */ "<0x10009:0x001a2001>Hey, pal, did ya go and visit the elder?\nHow's he doin'?\n\n\n<0x10008:0x01cd><0x10009:0x001a2011>What? Twilight years?\n\n\n\nUh...<0x10009:0x000000ff>what are ya talkin' about?\nIs “twilight years\" some sort of\ncode name for a big treasure?\n\n<0x10009:0x001b1e15>I gotta tell ya, I've never heard of such\na thing.\n\n\nBut if that's what the elder wants help\nwith, go on and help him out, will ya?")
          							flw_171:
/*<171>*/ 							zone_temp_flags[3 /* 0x1 08 */] = true;
          						  case 1:
/*<287>*/ 							printf(/* textboxtype: 1, unk: 0, line: 65 */ "<0x10009:0x001b2201>Whoa! It's my old pal! How've you\nbeen?\n\n\nMe? Ah, my claws are sharp, and my\nnose is tuned in to treasure! I'm great!\n\n\n<0x10009:0x00000002>One thing's got me worried, though.\nThe tribal elder's been acting odd since\ngoing to those ruins. He's just not\nhimself.\n<0x10009:0x001b22ff>You talked to him earlier, right?\nHow was he doing?\n\n\n<0x10008:0x01cd><0x10009:0x001a2011>What? Twilight years?\n\n\n\nUh...<0x10009:0x000000ff>what are you talking about?\nIs “twilight years\" some sort of code\nname for treasure?\n\n<0x10009:0x001b1e15>I gotta tell you, I've never heard of\nsuch a thing. And I know a thing or\ntwo about treasure.\n\nBut if that's what the elder wants, help\nhim out, will ya?")
/*<292>*/ 							story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */] = true;
          							goto flw_171
          						}
          					}
          				  case 1:
/*<168>*/ 					switch (story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */]) {
          					  case 0:
/*<169>*/ 						printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x001b050a><color blue<Guld>coloroff>'s wanderin' around over there\nsomewhere. Go see him! Chat with him\na bit, ya know?\n\nIt might cheer him up to see a familiar\nface.")
          					  case 1:
/*<156>*/ 						printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x001b2201>Whoa there! It's my old pal! How ya\nbeen, old pal?\n\n\nMe? Ah, my claws are sharp and my\nnose is tuned in to treasure! Yep, I'd\nsay I'm great.\n\n<0x10009:0x00000002>One thing's got me worried, though.\nSee, our elder, <color blue<Guld>coloroff>, has been actin'\nkinda odd since going to those ruins.\n\n<0x10009:0x001b230a>Would ya go and see<color blue< Guld>coloroff>? He's over\nthataway somewhere, and I know he'd\nbe happy to see your mug.")
/*<159>*/ 						story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */] = true;
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_303_07() {
/*< 29>*/ 	start()
/*< 31>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
          		flw_32:
/*< 32>*/ 		printf(/* textboxtype: 1, unk: 0, line: 43 */ "Hate to ask you this, bud, but could\nyou do the fire-extinguisher routine\nagain?")
          	  case 1:
/*< 30>*/ 		printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00161e56>More flames... This is starting to burn\nme up...")
/*< 33>*/ 		temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_32
          	}
          }

          void entrypoint_303_24() {
/*< 85>*/ 	start()
/*< 86>*/ 	printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10012:0x00000064>Where have you been, zzzrbt! Get me\nto the top of the volcano! Now, brrzzt!")
          }

          void entrypoint_303_41() {
/*<178>*/ 	start()
/*<180>*/ 	switch (zone_temp_flags[5 /* 0x1 20 */]) {
          	  case 0:
/*<181>*/ 		printf(/* textboxtype: 1, unk: 0, line: 76 */ "<0x10009:0x001b2215>The deal with <color blue<Plats >coloroff>is he only shows\nsome backbone when he's off\nhunting treasure.")
          	  case 1:
/*<179>*/ 		printf(/* textboxtype: 1, unk: 1, line: 73 */ "<0x10009:0x001a200f>Hey, it's you! That guy from before...<pause 15>\n\n\n\n<0x10009:0x001b2209>Heh heh heh... Yeah, that was\npretty embarrassing.\n\n\nWe're all good now, though, because\nmy pal found out about it.\n\n\n<0x10009:0x001b1eff>Truth is he got captured once too.\nGuess that makes us even. Nothin' for\neither of us to worry about.\n\n<0x10009:0x001a0a12>Yeah, anyway, you seen <color blue<Plats>coloroff> around\nanywhere?\n[1-]He was over there.[2-]Nope.")
/*<183>*/ 		switch (choice(2)) {
          		  case 0:
/*<184>*/ 			printf(/* textboxtype: 1, unk: 0, line: 74 */ "<0x10009:0x001b0a12>Oh, really? We're all cool, then.\n\n\n\nI just hadn't seen his ugly mug in a\nwhile and, well, you know...\n\n\n<0x10009:0x001b160f>I thought maybe he'd gone and gotten\nhimself all tied up again.\n\n\n<0x10009:0x001b16ff>Let me tell ya, that guy's like a\ntrouble magnet!")
          			flw_182:
/*<182>*/ 			zone_temp_flags[5 /* 0x1 20 */] = true;
          		  case 1:
/*<185>*/ 			printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x001b2207>That dirt-brain... <pause 20>I bet he's off on some\nsolo treasure-hunting dig.\n\n\nHe knows he's not supposed to be out\nby himself. This place is dangerous!\n\n\n<0x10009:0x001b0009>What am I supposed to do, huh?\nI guess that's what you get when you're\n<color blue<treasure hunters>coloroff>. Bunch of guys who\ndon't know when to quit.\nIf you happen to run into <color blue<Plats>coloroff>, give\nhim my best, will you?")
          			goto flw_182
          		}
          	}
          }

          void entrypoint_303_08() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x00171908>Hey! Nice work, bud. Now we are \ngetting somewhere!")
/*<154>*/ 	{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6911, 'next': 37, 'param3': 13}
/*< 37>*/ 	{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 0, 'next': 36, 'param3': 14}
/*< 36>*/ 	story_flags[469 /* us: 805A9B0E 0x02, jp: 805ACD8E 0x02 */] = true;
/*<143>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_303_25() {
/*< 87>*/ 	start()
/*< 88>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10012:0x00000064>Don't leave me! Press (+) to open your\n<color red<map >coloroff>to find me, zzrrt!<0x10011:0x03cd>")
          }

          void entrypoint_303_42() {
/*<188>*/ 	start()
/*<190>*/ 	switch (scene_flags[82 /* 0xB 04 */]) {
          	  case 0:
/*<191>*/ 		printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x000d0509>All right, then. Where's the next place\nto hunt for riches, eh?")
          	  case 1:
/*<189>*/ 		printf(/* textboxtype: 1, unk: 1, line: 77 */ "<0x10008:0x01cd><0x10009:0x000e1008>Hey, pal! You're still alive!\n\n\n\n<0x10009:0x0011110b>And by the looks of it, ya got all your\nloot back too. I knew you had it in ya.\n\n\nSo, uh...<pause 20>did ya find any treasure?\n[1-]Tons![2-]Not a thing...")
/*<192>*/ 		switch (choice(2)) {
          		  case 0:
/*<193>*/ 			printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x000e0505>Seriously? I'm soooo jealous!\n\n\n\n<0x10009:0x000e1f0a>But the world's a big place, ya know?\nAnd I'm sure there's more treasure\nout there for the swiping.\n\nYeah, I'm not sitting on my tail waiting\nfor it to fall into my lap! You know\nwho's going to find all the loot next\ntime? Me! This guy! That's who!")
          			flw_195:
/*<195>*/ 			scene_flags[4 'Eldin Volcano'][82 /* 0xB 04 */] = true;
          		  case 1:
/*<194>*/ 			printf(/* textboxtype: 1, unk: 0, line: 79 */ "<0x10009:0x000e040a>Whaaat? Ya didn't find much of\nanything? Aw, that's too bad, pal.\n\n\n<0x10009:0x000f0508>Don't get all sad and weepy on me,\nthough. The world's a big place and\nit's filled with treasure!")
          			goto flw_195
          		}
          	}
          }

          void entrypoint_303_09() {
/*< 38>*/ 	start()
/*< 45>*/ 	switch (story_flags[173 /* us: 805A9AE2 0x10, jp: 805ACD62 0x10 */]) {
          	  case 0:
/*< 52>*/ 		switch (scene_flags[111 /* 0xC 80 */]) {
          		  case 0:
/*< 53>*/ 			printf(/* textboxtype: 1, unk: 0, line: 54 */ "I am off to continue my research, bud.\nI am sure I will bump into you again!")
          		  case 1:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 1, line: 51 */ "<0x10009:0x00181702>Well, how was it? What did you find?\n[1-]Traps![2-]Monsters!")
/*< 47>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_49:
/*< 49>*/ 				switch (story_flags[248 /* us: 805A9AF7 0x04, jp: 805ACD77 0x04 */]) {
          				  case 0:
/*< 50>*/ 					printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x00161e56>Is that so? Hmm... Guess I will leave\nthe exploring past here to you, bud.\n\n\n<0x10009:0x00080bff>I am going to head out to another\nlocation and continue my research.\nGive me a holler if you see me again.")
          					flw_51:
/*< 51>*/ 					scene_flags[5 'Eldin Volcano Summit'][111 /* 0xC 80 */] = true;
          				  case 1:
/*< 48>*/ 					printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00161e56>Is that so? Hmm... Guess I will leave\nthe exploring past here to you, bud.\n\n\n<0x10009:0x00080bff>By the way, I have got a hunch there is\na <color yellow<Goddess Cube >coloroff>somewhere nearby.\n\n\nAnd my hunches are usually spot on,\nso you should take a good look around.")
          					goto flw_51
          				}
          			  case 1:
          				goto flw_49
          			}
          		}
          	  case 1:
/*< 43>*/ 		switch (story_flags[187 /* us: 805A9AE9 0x04, jp: 805ACD69 0x04 */]) {
          		  case 0:
/*< 44>*/ 			printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00171908>You are something else, bud! There is\nnothing you cannot do!\n\n\n<0x10009:0x00080bff>You go ahead on in! You have earned\nthe right to blaze this trail.")
          		  case 1:
/*< 40>*/ 			switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
          			  case 0:
/*<284>*/ 				switch (temp_flags[15 /* 0x0 80 */]) {
          				  case 0:
/*<285>*/ 					printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00181707>Lots of<color red< water >coloroff>and <color red<something to carry it\naround in>coloroff>... Any bright ideas on where\nto find those things, bud?")
          				  case 1:
/*< 41>*/ 					printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00181707>How are we supposed to give this fellow\nenough <color red<water>coloroff>? Whatever it is, it is\ngoing to have to be one<color red< big container>coloroff>...\n\n<0x10009:0x00161eff>You have been adventuring all over the\nplace, right? You got any ideas?")
/*<283>*/ 					temp_flags[15 /* 0x0 80 */] = true;
          				}
          			  case 1:
/*< 39>*/ 				printf(/* textboxtype: 1, unk: 0, line: 45 */ "Do you see this, bud? Talk about\nintriguing! We are definitely off the\nmap here.\n\n<0x10009:0x00171908>This does not feel like<color yellow< Goddess Cube\n>coloroff>stuff to me! I bet there is something\n<color red<super important >coloroff>hidden around here!")
/*<144>*/ 				set_camera(4, 0)
/*<146>*/ 				printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x00161eff>All I can say is that is a big frog with\na big thirst. I do not think the amount\nof water one of your little <color yellow<bottles >coloroff>can\nhold is going to cut it this time.")
/*<145>*/ 				set_camera(-1, 0)
/*<147>*/ 				printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00000007>Hmmm...<pause 15><0x10009:0x00181700> You will have to have a<color red< big\ncontainer >coloroff>to hold the water needed\nfor this job. <sound 4>Got anything like that?\n\n<0x10009:0x00161eff>And speaking of which, where are you\ngoing to get all the<color red< water>coloroff>? I gotta\nsay, I am pretty much stumped.")
/*< 42>*/ 				story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_303_26() {
/*< 89>*/ 	start()
/*< 90>*/ 	printf(/* textboxtype: 1, unk: 0, line: 25 */ "You want me to pour the water on this?\nNo problem, zzzbrt!")
          }

          void entrypoint_303_43() {
/*<201>*/ 	start()
/*<202>*/ 	printf(/* textboxtype: 2, unk: 0, line: 120 */ "We have arrived at Eldin Volcano.\n\n\n\nYou can use your <color red<dowsing>coloroff> ability to\nlocate the gate to the trial. You must\npass this trial in order to locate the\nsacred flame.")
          }

