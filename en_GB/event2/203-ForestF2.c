          void entrypoint_203_55() {
/*<147>*/ 	start()
/*<149>*/ 	switch (story_flags[188 /* us: 805A9AE9 0x08, jp: 805ACD69 0x08 */]) {
          	  case 0:
/*<148>*/ 		printf("Were you to transport this <rd<basin >>to the\nvolcano, the water in this container has\nan 85% chance of extinguishing the\nflames barring your path.\nI recommend you attempt to borrow\nthis basin<pling> from the Water Dragon.")
          	  case 1:
/*<150>*/ 		printf("Measurements indicate a large amount\nof water in this <rd<basin>>. This quantity of\nwater has an 85% chance of putting out\nthe flames that block our path.\nI recommend you attempt to borrow\nthis basin<pling> from the Water Dragon.")
/*<167>*/ 		story_flags[188 /* us: 805A9AE9 0x08, jp: 805ACD69 0x08 */] = true;
          	}
          }

          void entrypoint_203_72() {
/*<163>*/ 	start()
/*<162>*/ 	printf("Master Shortpants! Watch carefully\nwhile I demonstrate what a real hero\nlooks like, bzzzzat!")
          }

          void entrypoint_203_03() {
/*<420>*/ 	start()
/*<421>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<422>*/ 		printf("\x0E\x01\x09\x04\x00\x04I love that it's so safe here, but you\nknow...it's kind of boring now.\n\n\n\x0E\x01\x09\x04\x11\x05I should really stop complaining and\njust enjoy this \x201Cproblem\" of mine.")
          	  case 1:
/*<423>*/ 		printf("\x0E\x01\x09\x04\x00\x14You may not have noticed, but I'm\ntrying to hide here. Could you please\nscoot along before you draw monsters\nover this way?")
          	}
          }

          void entrypoint_203_90() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf("\x0E\x01\x09\x04\x00\x0FHmm...")
          }

          void entrypoint_203_56() {
/*<151>*/ 	start()
/*<177>*/ 	switch (scene_flags[127 /* 0xE 80 */]) {
          	  case 0:
/*<178>*/ 		printf("Very well,<pause0F> shall I call for the robot?\n[1]Sure![2]Not that guy...")
          		flw_153:
/*<153>*/ 		switch (choice(2)) {
          		  case 0:
/*<152>*/ 			printf("Understood, \x0E\x01\x12\x04\x00\x05Master. I will call him\nat once.")
          		  case 1:
/*<181>*/ 			switch (scene_flags[127 /* 0xE 80 */]) {
          			  case 0:
/*<182>*/ 				printf("\x0E\x01\x12\x04\x00\x01Master...<pause0F>despite your somewhat\nwarranted reservations, it would be\nirrational to abandon the most logical\nsolution. I will call for the robot now.")
          			  case 1:
/*<154>*/ 				printf("\x0E\x01\x12\x04\x00\x01Master...<pause0F>unless you plan to carry the\ntub on your back, now is not the\ntime to be picky about who will help\nyou. I will call for the robot.")
          			}
          		}
          	  case 1:
/*<155>*/ 		printf("To transport the Water Dragon's basin\nto the volcano, you will need to enlist\nthe service of that transport robot.\nShall I send word to him?\n[1]Call him![2]Not that guy...")
          		goto flw_153
          	}
          }

          void entrypoint_203_73() {
/*<165>*/ 	start()
/*<164>*/ 	printf("As usual, vrrrt, I shall await you in the\nskies above.")
/*<588>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          }

          void entrypoint_203_04() {
/*<441>*/ 	start()
/*<442>*/ 	switch (zone_temp_flags[11 /* 0x0 08 */]) {
          	  case 0:
/*<445>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 443, 'param3': 6}
/*<443>*/ 		printf("\x0E\x01\x09\x04\x00\x04It's nice to get lost in your own\nthoughts sometimes.\n\n\n\x0E\x01\x09\x04\x00\x01Sitting down for a quick break does\nwonders for the body and the mind.")
/*<444>*/ 		scene_flags[1 'Faron Woods'][54 /* 0x7 40 */] = true;
          	  case 1:
/*<424>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*<426>*/ 			switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          			  case 0:
/*<427>*/ 				printf("\x0E\x01\x09\x04\x00\x13Hiding from you isn't even fun. You're\ntoo good at finding me.")
          			  case 1:
/*<428>*/ 				printf("\x0E\x01\x09\x04\x11\x13You found me again. Sheesh, there's\njust no hiding from those eagle eyes\nof yours.\n\n\x0E\x01\x09\x04\x0B\x07You know, I think you deserve a\nreward. Here--take this. I found it\nwhile I was hiding.")
/*<430>*/ 				give_item(176 0xB0);
/*<429>*/ 				printf("\x0E\x01\x09\x04\x00\x14Don't forget: it's a secret to everybody!")
/*<431>*/ 				story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = true;
          			}
          		  case 1:
/*<425>*/ 			printf("\x0E\x01\x09\x04\x00\x07This is where we've made our home.\nThere's plenty of food to go around. \nIt's a pretty nice place, all in all.")
          		}
          	}
          }

          void entrypoint_203_05() {
/*<  2>*/ 	start()
/*<224>*/ 	switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          	  case 0:
/*<432>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*<433>*/ 			printf("\x0E\x01\x09\x04\x00\x02I confess that now that the water has\nreceded, I do miss it a bit. It was\nexciting to have a change of scenery.")
/*<486>*/ 			printf("\x0E\x01\x09\x04\x00\x06Hoo-hoo-hoo.")
/*<532>*/ 			entrypoint_203_09();
          		  case 1:
/*<434>*/ 			printf("\x0E\x01\x09\x04\x00\x0ESo the Water Dragon has found you\nworthy, has she? You are full of\nsurprises.")
/*<531>*/ 			entrypoint_203_09();
          		}
          	  case 1:
/*<225>*/ 		switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          		  case 0:
/*<226>*/ 			printf("\x0E\x01\x09\x04\x00\x0ESo you've met Her Excellence, the\nWater Dragon? What an experience!\nI am terribly envious of you.")
/*<530>*/ 			entrypoint_203_09();
          		  case 1:
/*<  5>*/ 			switch (scene_flags[55 /* 0x7 80 */]) {
          			  case 0:
/*<  9>*/ 				switch (story_flags[60 /* us: 805A9ADC 0x80, jp: 805ACD5C 0x80 */]) {
          				  case 0:
/*< 13>*/ 					switch (story_flags[63 /* us: 805A9ADC 0x40, jp: 805ACD5C 0x40 */]) {
          					  case 0:
/*< 15>*/ 						switch (temp_flags[5 /* 0x1 20 */]) {
          						  case 0:
          							flw_16:
/*< 16>*/ 							printf("\x0E\x01\x09\x04\x00\x02What a wild world we live in. I hope\nI can meet our lost brother soon.")
/*<334>*/ 							printf("\x0E\x01\x09\x04\x00\x06Hoo-hoo-hoo.")
/*<529>*/ 							entrypoint_203_09();
          						  case 1:
/*< 14>*/ 							printf("\x0E\x01\x09\x04\x00\x0EWhat's that? You met an old hermit\nKikwi living up in the tree? Amazing!\nAll this time I was sure there were only\nfive of our kind in these woods!")
/*< 17>*/ 							temp_flags[5 /* 0x1 20 */] = true;
          							goto flw_16
          						}
          					  case 1:
/*< 12>*/ 						printf("\x0E\x01\x09\x04\x00\x0ESo you climbed your way to the\nvery top of the tree? Very impressive!\n\n\n\x0E\x01\x09\x04\x00\x08What's that? Someone's living up\nthere? Well, I'm counting on you to\nfind out more about this mystery tree\nresident.")
/*<528>*/ 						entrypoint_203_09();
          					}
          				  case 1:
/*< 11>*/ 					switch (scene_flags[19 /* 0x3 08 */]) {
          					  case 0:
/*<  8>*/ 						printf("\x0E\x01\x09\x04\x00\x0EYou found a way inside the great\ntree, eh? Hah, impressive!")
/*< 80>*/ 						printf("\x0E\x01\x09\x04\x00\x02If you reach the top branches of the\ntree, the view is spectacular!\nYou never know what you might\nsee from up there.")
/*<527>*/ 						entrypoint_203_09();
          					  case 1:
/*< 10>*/ 						printf("\x0E\x01\x09\x04\x00\x03There are still some parts of this forest\nthat you haven't discovered yet,\nkewwwww.\n\n\x0E\x01\x09\x04\x00\x08If you use the power of the Water\nDragon's Scale, you can dive\nunderwater, kewww. Just hold (A)\non the water's surface.")
/*<526>*/ 						entrypoint_203_09();
          					}
          				}
          			  case 1:
/*<436>*/ 				switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          				  case 0:
/*< 20>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 328, 'param3': 31}
/*<328>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 327, 'param3': 6}
/*<327>*/ 					set_camera(1, 0)
/*<330>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 3, 'param3': 13}
/*<  3>*/ 					printf("\x0E\x01\x09\x04\x00\x0EAh, hello again. I see you have the\nWater Dragon's Scale there,\nkewwww.\n\n\x0E\x01\x09\x04\x00\x02That's amazing! I heard that if you\nhave one, kewww, you can swim\nthrough the water like a dragon soars\nthrough the sky!")
/*<329>*/ 					set_camera(-1, 0)
/*<  6>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 7, 'param3': 13}
/*<  7>*/ 					printf("\x0E\x01\x09\x04\x00\x03There must be places here in the woods\nthat you haven't visited yet, kewww.\n\n\n\x0E\x01\x09\x04\x00\x08You should use the Water Dragon's\nScale to explore areas you couldn't\neven get to before, kewww!")
/*<331>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 332, 'param3': 13}
/*<332>*/ 					printf("\x0E\x01\x09\x04\x00\x06Hoo-hoo-hoo.")
/*<333>*/ 					scene_flags[1 'Faron Woods'][55 /* 0x7 80 */] = true;
/*<525>*/ 					entrypoint_203_09();
          				  case 1:
/*<435>*/ 					printf("\x0E\x01\x09\x04\x00\x03I see that you didn't find the girl in the\ndeep woods, kee-paleep.\n\n\n\x0E\x01\x09\x04\x00\x02But you can't lose heart! Just as I have\nbeen reunited with my fellow Kikwis,\nyou will find your friend one day, kwii!")
/*<524>*/ 					entrypoint_203_09();
          				}
          			}
          		}
          	}
          }

          void entrypoint_203_91() {
/*< 49>*/ 	start()
/*< 51>*/ 	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          	  case 0:
/*< 70>*/ 		switch (adventure_pouch_has(7 0x0007)) {
          		  case 0:
/*<319>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<320>*/ 				printf("\x0E\x01\x09\x04\x09\x707What's this? You have a bottle of the\n<b<sacred water>> I seek here with you?\nGo on and pour it into my basin!")
          				flw_351:
/*<351>*/ 				story_flags[85 /* us: 805A9AE8 0x02, jp: 805ACD68 0x02 */] = true;
/*<515>*/ 				{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<549>*/ 				printf("\x0E\x01\x09\x04\x00\x0FHmm...")
/*<318>*/ 				printf("\x0E\x01\x09\x04\x07\x709Yes! Just look at that color. There's\nno doubt this is the water I need.\nQuickly, boy, pour it into my basin!")
          				goto flw_351
          			}
          		  case 1:
/*<548>*/ 			printf("\x0E\x01\x09\x04\x00\x0FHmm...")
/*< 69>*/ 			printf("\x0E\x01\x09\x04\x07\x706Quickly now, bring me the sacred water\nI desire. Do so, and I will show you\nthe way to the sacred flame.")
          		}
          	  case 1:
/*< 53>*/ 		switch (scene_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 50>*/ 			printf("\x0E\x01\x09\x04\x00\x0FHmm...")
/*< 58>*/ 			printf("\x0E\x01\x09\x04\x09\x706I am willing to lead you to the sacred\nflame you seek, but only if you bring\nme the <b<sacred water>> I seek.\n[1]All right.[2-]No, thanks.")
/*< 60>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_61:
/*< 61>*/ 				entrypoint_203_52();
          			  case 1:
/*< 59>*/ 				printf("\x0E\x01\x09\x04\x09\x704Hmph. So it's too great a task for you?\nThen I guess you are a mere human\nafter all.")
/*<473>*/ 				temp_flags[0 /* 0x1 01 */] = true;
          			}
          		  case 1:
/*<282>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*<457>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 454, 'param3': 49}
/*<454>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 455, 'param3': 6}
/*<455>*/ 				set_camera(11, 0)
/*<456>*/ 				{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 356, 'next': 283, 'param3': 15}
          				flw_283:
/*<283>*/ 				printf("\x0E\x01\x09\x04\x00\x0FYou have intruded into my home,\na sacred place few are permitted to\nenter!\n\n\x0E\x01\x09\x04\x09\x700This is no place for one such as you.\nAnd yet here you stand! You will\nexplain how you got here, and quickly.\n[1]Water Dragon?[2]I'm lost.")
/*< 54>*/ 				switch (choice(2)) {
          				  case 0:
/*<458>*/ 					scene_flags[2 'Lake Floria'][0 /* 0x1 01 */] = true;
/*<474>*/ 					set_camera(27, 0)
/*<475>*/ 					printf("\x0E\x01\x09\x04\x07\x903I am. Those with manners address\nme as Faron, warden of the woods.\nI was appointed by the goddess herself.\n\nThough my current stature is less\nthan, well, intimidating, shall we say,\nknow that you stand in the presence\nof a loyal servant of the goddess!\n\x0E\x01\x09\x04\x09\x900<pause0A>.<pause0A>.<pause0A>.<pause0A>\x0E\x01\x09\x04\x00\x07Hmm?")
/*<451>*/ 					set_camera(11, 0)
/*<452>*/ 					printf("\x0E\x01\x09\x04\x09\x900\x0E\x01\x06\x02\xFECDI say,<pause0F>\x0E\x01\x09\x04\x00\x06\x0E\x01\x06\x02\x2CD that's one of MY scales you have\nthere!\n\n\n\x0E\x01\x09\x04\x09\x700A sacred gift such as that could only be\ncarried by the goddess's chosen hero.\n\x0E\x01\x09\x04\x00\x05But could you really be him?\n\n\x0E\x01\x09\x04\x07\x700This raises questions. Even with that\nscale in your possession, finding my\nhall is no easy task... How did you\nfind me?")
/*<453>*/ 					set_camera(27, 0)
/*< 55>*/ 					printf("\x0E\x01\x09\x04\x07\x704Ah, yes...<pause1E> That cackling, old hermit\nKikwi told you where I live, didn't he?\n\n\n\x0E\x01\x09\x04\x09\x910Honestly, I can't remember how many\ntimes I've told that scruffy thing to\nkeep his mouth shut. That's the last\nstraw. Next time I see him, he's dinner!\n\x0E\x01\x09\x04\x07\x900Oh, but I digress.<pause1E> You've come here\nseeking a <r<sacred flame>>, have you?\n[1]Of course![2]I forget...")
/*<284>*/ 					switch (choice(2)) {
          					  case 0:
/*<285>*/ 						printf("\x0E\x01\x09\x04\x09\x704I knew it.")
          						flw_463:
/*<463>*/ 						printf("\x0E\x01\x09\x04\x09\x700But I'll be straight with you. A shrimpy\nboy like you hardly looks the part of\nthe goddess's chosen hero.\n\n\x0E\x01\x09\x04\x07\x703There's no doubt about it. A test is in\norder to prove you're everything you\nsay you are.\n\nShortly before your arrival, I was\nattacked by a pompous creature calling\nhimself <b<Ghirahim>>.\n\nI stood against this self-proclaimed\nDemon Lord, but I was wounded in the\nencounter.")
/*<465>*/ 						set_camera(28, 0)
/*<464>*/ 						printf("\x0E\x01\x09\x04\x07\x70FThe wounds he's given me are stubborn\nthings. I have been forced to\nrecuperate in this basin of <b<sacred\nwater>>.\n\x0E\x01\x09\x04\x09\x700Unfortunately, the healing properties\nof the sacred water have diminished,\nand I am now in need of another dose\nto freshen up my healing bath.\n\x0E\x01\x09\x04\x09\x906<r<Bring me the<pling> container of fresh sacred\nwater>> that I require.")
/*<450>*/ 						set_camera(27, 0)
/*< 56>*/ 						printf("Do me this favor, and I'll gladly show\nyou where to find the sacred flame\nyou desire. What say you?\n[1]You got it![2-]No, thanks.")
/*< 57>*/ 						switch (choice(2)) {
          						  case 0:
/*<466>*/ 							temp_flags[3 /* 0x1 08 */] = true;
          							goto flw_61
          						  case 1:
/*<286>*/ 							printf("\x0E\x01\x09\x04\x09\x704Hmph. So it's too great a task for you?\nThen I guess you are a mere human\nafter all.")
/*<287>*/ 							temp_flags[0 /* 0x1 01 */] = true;
/*<460>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						}
          					  case 1:
/*<291>*/ 						set_camera(11, 0)
/*<292>*/ 						printf("\x0E\x01\x09\x04\x09\x910\x0E\x01\x08\x02\x1CDDo not mock me, boy! If this is\nan attempt at humor, you will\nfind this a cold audience!\n\n\x0E\x01\x09\x04\x01\x900Still...few mortals have had the\ncourage to speak so boldly before me.\nYou do not intimidate easily. Yes,\na laudable trait to be sure.")
/*<296>*/ 						set_camera(27, 0)
          						goto flw_463
          					}
          				  case 1:
/*<289>*/ 					set_camera(11, 0)
/*<290>*/ 					printf("\x0E\x01\x09\x04\x09\x910Do not mock me, boy!\n\n\n\nLinger in my hall a moment longer,\nand I'll bite your head clean off!")
/*<459>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				}
          			  case 1:
/*<449>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 298, 'param3': 49}
/*<298>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 412, 'param3': 6}
/*<412>*/ 				set_camera(11, 0)
/*<448>*/ 				{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 356, 'next': 52, 'param3': 15}
/*< 52>*/ 				printf("\x0E\x01\x09\x04\x00\x01\x0E\x01\x08\x02\x2CDAh! You there, human!")
/*<281>*/ 				temp_flags[1 /* 0x1 02 */] = true;
/*<288>*/ 				set_camera(27, 0)
          				goto flw_283
          			}
          		}
          	}
          }

          void entrypoint_203_57() {
/*<156>*/ 	start()
/*<157>*/ 	printf("\x0E\x01\x12\x04\x00\x01Master, your task here is complete for\nthe moment. We should return to the\nsky so that we can set a course for\nthe volcano.")
/*<166>*/ 	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = true;
/*<206>*/ 	story_flags[677 /* us: 805A9B20 0x40, jp: 805ACDA0 0x40 */] = true;
/*<280>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
/*<176>*/ 	scene_flags[2 'Lake Floria'][127 /* 0xE 80 */] = true;
/*<316>*/ 	story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<203>*/ 	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = false;
/*<204>*/ 	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
/*<202>*/ 	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = false;
/*<205>*/ 	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = false;
/*<200>*/ 	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = false;
/*<201>*/ 	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = false;
          }

          void entrypoint_203_06() {
/*< 31>*/ 	start()
/*<392>*/ 	printf("\x0E\x01\x09\x04\x03\x0FI forgot to mention this earlier, but\nit's important.<pause0F> Her Excellence, the\nWater Dragon, is VERY persnickety\nabout manners... So watch yours!\n\x0E\x01\x09\x04\x01\x00I've heard stories of folks who caught\nher in a fussy mood. \x0E\x01\x09\x04\x00\x0BThey ended up as\nmidmorning snacks, kwwwwrk!")
/*<447>*/ 	set_camera(18, 0)
/*<393>*/ 	printf("\x0E\x01\x09\x04\x01\x00I probably taste like old cave moss,\nbut I'm not in a hurry to become a\nroyal meal, kwwwrk!\n\n\x0E\x01\x09\x04\x03\x06So don't let her know I told you about\nFarore's Flame, OK?\n\n\n\x0E\x01\x09\x04\x03\x07And remember, when you're in her\nhall, you'd better be on your best\nbehavior and be a gracious guest.")
/*<446>*/ 	set_camera(20, 0)
/*<387>*/ 	printf("\x0E\x01\x09\x04\x00\x13I'll be here nappin' if you need some\nof my elder wisdom. See you around!\nKwwwwwwrk...")
/*<388>*/ 	story_flags[63 /* us: 805A9ADC 0x40, jp: 805ACD5C 0x40 */] = true;
/*<389>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_92() {
/*< 68>*/ 	start()
/*<172>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<488>*/ 		switch (scene_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*<497>*/ 			entrypoint_203_85();
          		  case 1:
/*<487>*/ 			printf("\x0E\x01\x09\x04\x07\x702It pleases me that you have driven so\nmany monsters from these woods.\nYou have finally grown to possess\nstrength worthy of the sword you bear.\n\x0E\x01\x09\x04\x07\x704When you first came to my hall, you\nseemed an uncertain little thing...<pause1E>\nBut now your confidence is written\nacross your face.\n\x0E\x01\x09\x04\x07\x706Just the same, continue to temper your\nbody and mind! You must, if you hope\nto carry out the divine task entrusted\nto you.")
/*<489>*/ 			scene_flags[2 'Lake Floria'][1 /* 0x1 02 */] = true;
          		}
          	  case 1:
/*<173>*/ 		switch (story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */]) {
          		  case 0:
/*<170>*/ 			printf("\x0E\x01\x09\x04\x07\x702Return the basin to me when you finish\nwith it. There is no rush, though.\nIt's yours to do with as you please.")
          		  case 1:
/*<171>*/ 			switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
          			  case 0:
/*<174>*/ 				switch (scene_flags[127 /* 0xE 80 */]) {
          				  case 0:
/*<175>*/ 					printf("\x0E\x01\x09\x04\x07\x707Hmm? You wish to borrow my <r<water\nbasin >>once again?\n\n\n<pause1E>\x0E\x01\x09\x04\x00\x05Hmm...<pause0F>very well. But I must say the\nannoying contraption that returned\nwith it last time had a wicked tongue\non him!\n\x0E\x01\x09\x04\x07\x706I let it go because he's in your service,\nbut if you don't teach that impudent\nrunt some manners, know that I will.")
          				  case 1:
/*<169>*/ 					printf("\x0E\x01\x09\x04\x00\x06Ah, it's you. Tell me, are you mastering\nthe power that dwells within your\nsword?\n\n\x0E\x01\x09\x04\x07\x707Oh? You wish to borrow my <r<water\nbasin>>?<pause1E> \x0E\x01\x09\x04\x00\x05Hmm...<pause0F> Very well. I have\nrecovered fully, and I have no intention\nof having to soak in it again soon!\n\x0E\x01\x09\x04\x07\x706Begone with it. It's yours to use as\nyou please.")
          				}
          			  case 1:
/*<168>*/ 				switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          				  case 0:
/*< 86>*/ 					printf("\x0E\x01\x09\x04\x07\x702That is a great sword you carry.\nDevote yourself to growing into a man\nstrong enough to wield its might.")
          				  case 1:
/*< 74>*/ 					switch (story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */]) {
          					  case 0:
/*< 73>*/ 						printf("\x0E\x01\x09\x04\x07\x70FOne day I shall also repay Ghirahim in\nfull for his actions here.")
          					  case 1:
/*< 71>*/ 						printf("\x0E\x01\x09\x04\x09\x900Mmmmmm! Exquisite! I can feel its\nenergy surging through me!")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_203_58() {
/*<299>*/ 	start()
/*<301>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 300, 'param3': 40}
/*<300>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 302, 'param3': 6}
/*<302>*/ 	{'type': 'type3', 'subType': 1, 'param1': 340, 'param2': 0, 'next': 310, 'param3': 51}
/*<310>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 307, 'param3': 40}
/*<307>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 308, 'param3': 16}
/*<308>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 309, 'param3': 17}
/*<309>*/ 	set_camera(13, 0)
/*<304>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaster, I have information to report.\n\n\n\nBy my estimates, you are currently\nsituated in the southwest area of\nFaron Woods. Please confirm your\nlocation with your map.")
/*<321>*/ 	scene_flags[1 'Faron Woods'][56 /* 0x6 01 */] = true;
/*<322>*/ 	{'type': 'type3', 'subType': 4, 'param1': 256, 'param2': 0, 'next': 305, 'param3': 30}
/*<305>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 306, 'param3': 34}
/*<306>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 303, 'param3': 6}
/*<303>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 311, 'param3': 36}
/*<311>*/ 	set_camera(14, 0)
/*<312>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_93() {
/*< 72>*/ 	start()
/*<187>*/ 	set_camera(3, 0)
/*<198>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 79, 'param3': 17}
/*< 79>*/ 	printf("\x0E\x01\x09\x04\x07\x705Now...behold.")
/*<188>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 190, 'param3': 32}
/*<190>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 189, 'param3': 17}
/*<189>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 270, 'param3': 17}
/*<270>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 268, 'param3': 6}
/*<268>*/ 	set_camera(5, 0)
/*<269>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 0, 'next': 266, 'param3': 13}
/*<266>*/ 	printf("\x0E\x01\x09\x04\x00\x300\x0E\x01\x05\x04<\x00\x0E\x01\x08\x02\x1CDHah-hmm\x0E\x01\x06\x02\xFCCD...")
/*<265>*/ 	set_camera(4, 0)
/*<267>*/ 	printf("")
/*< 78>*/ 	scene_flags[2 'Lake Floria'][100 /* 0xD 10 */] = true;
/*<273>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 196, 'param3': 6}
/*<196>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 194, 'param3': 13}
/*<194>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 191, 'param3': 17}
/*<191>*/ 	printf("\x0E\x01\x09\x04\x00\x06Go. The sacred flame you seek lies\nwithin this place.\n\n\nWhile the waterfall has barred\nentrance to this place for many\nyears, monsters have still found a\nway in...and inside they flourish.")
/*<274>*/ 	set_camera(8, 0)
/*<195>*/ 	set_camera(3, 0)
/*<192>*/ 	printf("\x0E\x01\x09\x04\x07\x704Ah, but you are the goddess's chosen\nhero. Swatting a few monsters will be\nno trouble for you.\n\nI imagine you and I will cross paths\nagain. Until then, do not lower your\nguard.\n\n\x0E\x01\x09\x04\x07\x703Farewell, boy.")
/*<193>*/ 	set_camera(6, 0)
/*<278>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 277, 'param3': 6}
/*<277>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 199, 'param3': 17}
/*<199>*/ 	make_actor_do_something(0, 0)
/*<314>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 279, 'param3': 6}
/*<279>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 313, 'param3': 17}
/*<313>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 197, 'param3': 6}
/*<197>*/ 	story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */] = true;
/*<271>*/ 	set_camera(7, 0)
/*<272>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_07() {
/*<352>*/ 	start()
/*<353>*/ 	printf("\x0E\x01\x05\x04<\x00\x0E\x01\x08\x02\x2CDKikwiiiiiiiiii!")
          }

          void entrypoint_203_59() {
/*<476>*/ 	start()
/*<477>*/ 	printf("Yes, as I suspected, the water level in\nFaron Woods has dropped. The forest\nhas returned to its former less-\naquatic state.")
/*<478>*/ 	entrypoint_006_04();
          }

          void entrypoint_203_94() {
/*<207>*/ 	start()
/*<315>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 209, 'param3': 17}
/*<209>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 210, 'param3': 6}
/*<210>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 208, 'param3': 17}
/*<208>*/ 	printf("\x0E\x01\x09\x04\x07\x702Ah, the sword you carry is different\nsince I last saw you. Yes, I see it is \nmuch improved...")
/*<212>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1792, 'next': 211, 'param3': 13}
/*<211>*/ 	printf("To think, the goddess's chosen hero is\nbut a mere boy. Quite a twist...")
/*<215>*/ 	set_camera(3, 0)
/*<214>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 4, 'next': 213, 'param3': 13}
/*<213>*/ 	printf("\x0E\x01\x09\x04\x07\x700Chosen hero or not, you do not yet\npossess the strength required to wield\nthe full power of that blade.")
/*<217>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 216, 'param3': 13}
/*<216>*/ 	printf("You must train yourself further!\nDevote yourself wholly to this task.")
/*<481>*/ 	set_camera(32, 0)
/*<480>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 6, 'next': 479, 'param3': 13}
/*<479>*/ 	printf("\x0E\x01\x09\x04\x07\x700Farewell, boy.")
/*<483>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 484, 'param3': 32}
/*<484>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 485, 'param3': 17}
/*<485>*/ 	make_actor_do_something(0, 0)
/*<482>*/ 	set_camera(9, 0)
/*<218>*/ 	story_flags[118 /* us: 805A9AEA 0x08, jp: 805ACD6A 0x08 */] = true;
/*<275>*/ 	set_camera(10, 0)
/*<276>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_08() {
/*<390>*/ 	start()
/*<391>*/ 	printf("\x0E\x01\x09\x04\x01\x0B\x0E\x01\x05\x04<\x00\x0E\x01\x08\x02\x2CDOh, wait up!")
          }

          void entrypoint_203_95() {
/*<335>*/ 	start()
/*<336>*/ 	printf("\x0E\x01\x09\x04\x07\x705Now...behold.")
          }

          void entrypoint_203_60() {
/*<500>*/ 	start()
/*<501>*/ 	printf("I never knew there were humans who\ncould dive this deep!\n\n\nCan you also do a <r<spin>> by <g<shaking your\nNunchuk>>?")
          }

          void entrypoint_203_09() {
/*<519>*/ 	start()
/*<520>*/ 	switch (story_flags[481 /* us: 805A9B11 0x20, jp: 805ACD91 0x20 */]) {
          	  case 0:
/*<523>*/ 		printf("\x0E\x01\x09\x04\x00\x08Speaking of a change of scenery, how \nis Oolo faring out there in the big,\nwide world? Is he well?")
          	  case 1:
/*<521>*/ 		switch (story_flags[1094 /* us: 805A9B52 0x10, jp: 805ACDD2 0x10 */]) {
          		  case 0:
/*<522>*/ 			printf("\x0E\x01\x09\x04\x00\x08By the by, did you hear about Oolo?\nHe's considering leaving the woods on\nhis own. That's one brave Kikwi...")
          		  case 1:
          		}
          	}
          }

          void entrypoint_203_96() {
/*<337>*/ 	start()
/*<339>*/ 	printf("\x0E\x01\x09\x04\x00\x300\x0E\x01\x05\x04<\x00\x0E\x01\x08\x02\x1CDHah-hmm\x0E\x01\x06\x02\xFCCD...")
          }

          void entrypoint_203_61() {
/*<502>*/ 	start()
/*<503>*/ 	printf("Say, Mr. Human Person, do you know\nhow to do a <r<spin jump>>?\n\n\nIf you spin up <r<toward the water's\nsurface>>, you can do an amazing leap\nright out of the water!")
          }

          void entrypoint_203_97() {
/*<340>*/ 	start()
/*<338>*/ 	printf("")
          }

          void entrypoint_203_62() {
/*<504>*/ 	start()
/*<505>*/ 	printf("Hah! Human in the water! <pause14>Look at him\ntrying to flap around in the water!")
          }

          void entrypoint_203_10() {
/*<579>*/ 	start()
/*<580>*/ 	story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */] = true;
/*<581>*/ 	set_camera(24, 0)
/*<582>*/ 	printf("\x0E\x01\x09\x04\x00\x03Channel the power of the goddess\ninto the gate, and complete the symbol\ncarved upon its doors using that power.")
/*<583>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 584, 'param3': 30}
/*<584>*/ 	printf("\x0E\x01\x09\x04\x00\x09Place a beacon on your map over\nthis \x0E\x02\x04\x02\x19CD so that you can find the\nlocation I was talking about, kwwwrk!")
/*<585>*/ 	set_camera(18, 0)
          	flw_406:
/*<406>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 35, 'param3': 34}
/*< 35>*/ 	printf("\x0E\x01\x09\x04\x01\x06Is all of this seeping into your head,\nlad? Do you know where you must go\nto find the symbol you seek?\n[1]Got it![2-]Uh...")
/*< 36>*/ 	switch (choice(2)) {
          	  case 0:
/*< 45>*/ 		switch (story_flags[63 /* us: 805A9ADC 0x40, jp: 805ACD5C 0x40 */]) {
          		  case 0:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x00\x13I'll be here nappin' if you need some\nof my elder wisdom. See you around!\nKwwwwwwrk...")
          		  case 1:
/*< 47>*/ 			printf("\x0E\x01\x09\x04\x03\x07Then I wish you safe travels, lad.")
/*< 48>*/ 			story_flags[61 /* us: 805A9ADF 0x01, jp: 805ACD5F 0x01 */] = true;
          		}
          	  case 1:
/*< 38>*/ 		printf("\x0E\x01\x09\x04\x00\x03All right, kwwwwrk, let's try that\nagain...")
          		flw_37:
/*< 37>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 32, 'param3': 30}
/*< 32>*/ 		switch (story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */]) {
          		  case 0:
/*< 33>*/ 			printf("\x0E\x01\x09\x04\x00\x09Place a beacon on your map over\nthis \x0E\x02\x04\x02\x19CD so that you can find the\nlocation I was talking about, kwwwrk!")
          			goto flw_406
          		  case 1:
/*< 34>*/ 			story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */] = true;
/*<411>*/ 			printf("\x0E\x01\x09\x04\x01\x04The gate is down in the south, so it's\nlikely that there's a matching symbol\nsomewhere up north. Try searching\nnear this \x0E\x02\x04\x02\x19CD, kwwwrk!")
          			goto flw_406
          		}
          	}
          }

          void entrypoint_203_80() {
/*< 87>*/ 	start()
/*<104>*/ 	switch (story_flags[111 /* us: 805A9AEB 0x10, jp: 805ACD6B 0x10 */]) {
          	  case 0:
/*<105>*/ 		switch (story_flags[112 /* us: 805A9AEB 0x20, jp: 805ACD6B 0x20 */]) {
          		  case 0:
/*<121>*/ 			switch (story_flags[113 /* us: 805A9AEB 0x40, jp: 805ACD6B 0x40 */]) {
          			  case 0:
/*<129>*/ 				switch (story_flags[114 /* us: 805A9AEB 0x80, jp: 805ACD6B 0x80 */]) {
          				  case 0:
/*<138>*/ 					switch (scene_flags[15 /* 0x0 80 */]) {
          					  case 0:
/*<140>*/ 						switch (temp_flags[15 /* 0x0 80 */]) {
          						  case 0:
/*<262>*/ 							switch (temp_flags[16 /* 0x3 01 */]) {
          							  case 0:
/*<263>*/ 								printf("Please, come in.")
          							  case 1:
/*<261>*/ 								printf("Her Excellence the Water Dragon is \njust up ahead. Hang on just a second.")
/*<264>*/ 								temp_flags[16 /* 0x3 01 */] = true;
          							}
          						  case 1:
/*<139>*/ 							printf("At last, we're here!")
/*<142>*/ 							temp_flags[15 /* 0x0 80 */] = true;
          						}
          					  case 1:
/*<141>*/ 						printf("Wow! The goddess sure knows how to\npick them! You did great!")
/*<143>*/ 						scene_flags[2 'Lake Floria'][15 /* 0x0 80 */] = true;
          					}
          				  case 1:
/*<130>*/ 					switch (scene_flags[14 /* 0x0 40 */]) {
          					  case 0:
/*<345>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 0, 'next': 131, 'param3': 13}
/*<131>*/ 						switch (temp_flags[14 /* 0x0 40 */]) {
          						  case 0:
/*<132>*/ 							printf("Hey there, big guy... We're friends,\nright? We both like...water.\nDon't hurt me now...")
          						  case 1:
/*<555>*/ 							scene_flags[2 'Lake Floria'][50 /* 0x7 04 */] = false;
/*<554>*/ 							scene_flags[2 'Lake Floria'][51 /* 0x7 08 */] = true;
/*<556>*/ 							printf("Yikes! Oh, they're back! That's one of\nthe fish that weirdo brought in here\nand used to attack Her Excellence.\n\nWatch out--they're mean as they come!")
/*<557>*/ 							temp_flags[14 /* 0x0 40 */] = true;
/*<550>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 551, 'param3': 32}
/*<551>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 552, 'param3': 17}
/*<552>*/ 							set_camera(33, 0)
/*<553>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						}
          					  case 1:
/*<133>*/ 						printf("Wow! Perfect jump!\n\n\n\nI'd call you amazing, but I think we\nboth know it was the Water Dragon's\nScale that made that little stunt\npossible.")
/*<134>*/ 						scene_flags[2 'Lake Floria'][14 /* 0x0 40 */] = true;
          					}
          				}
          			  case 1:
/*<122>*/ 				switch (scene_flags[13 /* 0x0 20 */]) {
          				  case 0:
/*<124>*/ 					switch (temp_flags[13 /* 0x0 20 */]) {
          					  case 0:
/*<125>*/ 						printf("If you can't pass through here, you'll\njust have to jump over the top of the\nwall.")
/*<587>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          					  case 1:
/*<123>*/ 						printf("Come on, come on! Hurry up!\n\n\n\nHuh? You can't get through? Sheesh,\nyou humans and your bones. Talk about\ninconvenient. I guess you can leap over\nthe top of this wall if you have to.")
/*<127>*/ 						temp_flags[13 /* 0x0 20 */] = true;
          					}
          				  case 1:
/*<126>*/ 					printf("Oh, now that's using your noodle!\nHer Excellence is just up ahead.\nOver this way!")
/*<128>*/ 					scene_flags[2 'Lake Floria'][13 /* 0x0 20 */] = true;
          				}
          			}
          		  case 1:
/*<113>*/ 			switch (scene_flags[12 /* 0x0 10 */]) {
          			  case 0:
/*<115>*/ 				switch (temp_flags[12 /* 0x0 10 */]) {
          				  case 0:
/*<116>*/ 					printf("You see those pointy, bloated fellas\nover there? Sure they look tough, but\nif you <g<shake your Nunchuk>> and <r<spin>> at\n'em, they go down easy.")
          				  case 1:
/*<114>*/ 					printf("Huh? That's weird. I was expecting\nto meet up with my friend here...\nAnd the path is blocked with a\nhuge boulder.\nLovely. Now what do we do?")
/*<118>*/ 					temp_flags[12 /* 0x0 10 */] = true;
          				}
          			  case 1:
/*<117>*/ 				printf("GAH! How is that even possible?\nI've never seen a human pull off a\nspin like that!\n\nWait.<pause0A>.<pause0A>.<pause0A> That's a <b<Water Dragon's Scale>>!\nDoes that make you the emissary\nof the goddess, like the Water\nDragon said?\nHey, I've got an idea! Maybe you\ncan help Her Excellence! \n[1]What's wrong?[2]Take me to her!")
/*<498>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_499:
/*<499>*/ 					printf("Yeah, about that...<pause0F> It happened really\nrecently. This weirdo came in here\nwith a gang of monsters and went\nright after Her Excellence.\nMy lady the Water Dragon is a fierce\nfighter, and, boy, did she gobble up\nmost of those monsters in the first\nfew seconds.\nThing is, there were just so many of\nthem! While she was distracted, the\nweirdo leading all those creatures\nmanaged to wound her.\nShe's healing up now, but she says we\ndon't have enough special water for her\nto make a full recovery.\n\nSo could you please go talk with Her\nExcellence and see if you can help\nher out?\n\nI'll even take you to her. Follow me!\n\n")
/*<119>*/ 					scene_flags[2 'Lake Floria'][12 /* 0x0 10 */] = true;
          				  case 1:
          					goto flw_499
          				}
          			}
          		}
          	  case 1:
/*<106>*/ 		switch (scene_flags[11 /* 0x0 08 */]) {
          		  case 0:
/*<108>*/ 			switch (temp_flags[11 /* 0x0 08 */]) {
          			  case 0:
/*<109>*/ 				printf("Yep, nothing short of a mighty <g<spin\n>>move will get you through here, and\nyou obviously can't do that!")
/*<586>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          			  case 1:
/*<107>*/ 				printf("Ha-HA! Didn't see that coming,\ndid you? Yep, there's no way you're\ngoing to be able to follow me now!\n\nSo, what now? Are you going to cry?\nIf you think you can make it through,\njust go ahead and try!")
/*<111>*/ 				temp_flags[11 /* 0x0 08 */] = true;
          			}
          		  case 1:
/*<508>*/ 			switch (scene_flags[110 /* 0xC 40 */]) {
          			  case 0:
/*<110>*/ 				printf("Quit following me, pest! If you don't\nmove along, I'll be forced to tell\nHer Excellence the Water Dragon\nabout your little incursion!")
/*<112>*/ 				scene_flags[2 'Lake Floria'][11 /* 0x0 08 */] = true;
          			  case 1:
/*<509>*/ 				printf("Ack! Another human!\n\n\n\nOK, OK... I just have to avoid eye\ncontact and back away slowly...")
/*<510>*/ 				scene_flags[2 'Lake Floria'][110 /* 0xC 40 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_203_98() {
/*<341>*/ 	start()
/*<342>*/ 	printf("\x0E\x01\x09\x04\x00\x06Go. The sacred flame you seek lies\nwithin this place.\n\n\nWhile the waterfall has barred\nentrance to this place for many\nyears, monsters have still found a\nway in...and inside they flourish.")
          }

          void entrypoint_203_63() {
/*<506>*/ 	start()
/*<507>*/ 	printf("The place was just perfectly peaceful\nfor the longest time. Then weirdo\npeople like you started showing up.\n\nOn top of that, scary fish have been \nterrorizing our water! All this\ncommotion has made it impossible\nfor me to get any shut-eye.")
          }

          void entrypoint_203_81() {
/*< 88>*/ 	start()
/*< 90>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<101>*/ 		printf("Talk about bad luck. While the woods\nwere flooded, I had to stay here and\nhold down the fort.\n\nTalk about disappointment! I was\nreally looking forward to swimming\naround that area for once.")
/*<562>*/ 		set_camera(34, 0)
/*<103>*/ 		make_actor_do_something(0, 0)
/*<102>*/ 		printf("Disappointment!\nDisappointment!")
          		flw_563:
/*<563>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<323>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<324>*/ 			printf("Her Excellence is currently out\nand about.")
/*<561>*/ 			set_camera(34, 0)
/*<326>*/ 			make_actor_do_something(0, 0)
/*<325>*/ 			printf("Out and about!\nOut and about!")
          			goto flw_563
          		  case 1:
/*< 89>*/ 			switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          			  case 0:
/*< 98>*/ 				printf("Thanks to you, the Water Dragon has\nmade a complete recovery.\nMany thanks!")
/*<560>*/ 				set_camera(34, 0)
/*<100>*/ 				make_actor_do_something(0, 0)
/*< 99>*/ 				printf("Many thanks!\nMany thanks!")
          				goto flw_563
          			  case 1:
/*< 93>*/ 				switch (random(2)) {
          				  case 0:
/*< 95>*/ 					printf("Please help Her Excellence recover!")
/*<558>*/ 					set_camera(34, 0)
/*< 97>*/ 					make_actor_do_something(0, 0)
/*< 96>*/ 					printf("Help her! Help her!")
          					goto flw_563
          				  case 1:
/*< 91>*/ 					printf("Her Excellence is just up ahead.\nPlease, go in and speak with her!")
/*<559>*/ 					set_camera(34, 0)
/*< 94>*/ 					make_actor_do_something(0, 0)
/*< 92>*/ 					printf("Go on! Talk with the Water Dragon!")
          					goto flw_563
          				}
          			}
          		}
          	}
          }

          void entrypoint_203_99() {
/*<343>*/ 	start()
/*<344>*/ 	printf("\x0E\x01\x09\x04\x07\x704Ah, but you are the goddess's chosen\nhero. Swatting a few monsters will be\nno trouble for you.\n\nI imagine you and I will cross paths\nagain. Until then, do not lower your\nguard.\n\n\x0E\x01\x09\x04\x07\x703Farewell, boy.")
/*<518>*/ 	story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */] = true;
          }

          void entrypoint_203_64() {
/*<511>*/ 	start()
/*<512>*/ 	printf("That one over there? He's dying to\nget in good with the Water Dragon.\n\n\nMy advice? Keep your distance.\nNothing good will come of hanging\naround with a fin-kissing Parella.")
          }

          void entrypoint_203_82() {
/*<120>*/ 	start()
/*<136>*/ 	switch (random(2)) {
          	  case 0:
/*<137>*/ 		printf("Come on, come on! Hurry up!\n\n\n\nHuh? You can't get through? Sheesh,\nyou humans and your bones. Talk about\ninconvenient. I guess you can leap over\nthe top of this wall if you have to.")
          	  case 1:
/*<135>*/ 		printf("Ha-HA! Didn't see that coming,\ndid you? Yep, there's no way you're\ngoing to be able to follow me now!\n\nSo, what now? Are you going to cry?\nIf you think you can make it through,\njust go ahead and try!")
          	}
          }

          void entrypoint_203_65() {
/*<513>*/ 	start()
/*<514>*/ 	printf("I love my home here. I just wish it was\na little easier to get in and out of the\nplace.")
          }

          void entrypoint_203_83() {
/*<233>*/ 	start()
/*<245>*/ 	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          	  case 0:
/*<246>*/ 		switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          		  case 0:
/*<248>*/ 			switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          			  case 0:
/*<251>*/ 				printf("It's a shame the woods aren't flooded\nanymore. I wish I could have explored\na bit more outside.")
          			  case 1:
/*<250>*/ 				printf("I'm so glad Her Excellence has made\na speedy recovery. Thank you for\ncoming to her aid!")
          			}
          		  case 1:
/*<249>*/ 			printf("Her Excellence hasn't been herself\nsince the attack. Can't you do\nsomething for her?")
          		}
          	  case 1:
/*<252>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<247>*/ 			printf("The Water Dragon is actually very\nkind...unless you irritate her.\nMake sure you stay on her good side!")
/*<253>*/ 			printf("It's a secret to everybody.")
          		  case 1:
/*<234>*/ 			printf("Eeep! Don't eat me!\n[1]Your Excellence?[2]I won't eat you.")
/*<236>*/ 			switch (choice(2)) {
          			  case 0:
/*<241>*/ 				switch (scene_flags[25 /* 0x2 02 */]) {
          				  case 0:
/*<244>*/ 					printf("Me, the Water Dragon? No!<pause1E>\nAre you looking for Her Excellence?\n\n\nShe's actually very kind, but if you're\nrude to her...she can be quite scary!\nWhen you see her, make sure you\nstay on her good side.")
          					flw_239:
/*<239>*/ 					printf("It's a secret to everybody.")
/*<240>*/ 					scene_flags[2 'Lake Floria'][19 /* 0x3 08 */] = true;
          				  case 1:
/*<237>*/ 					printf("Me, the Water Dragon? No!<pause1E>\nAre you looking for Her Excellence?\n\n\nYou possess one of her scales, so you\nmust be a friend to our kind. I will\ntell you where you can find her.")
/*<242>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 238, 'param3': 30}
/*<238>*/ 					printf("The Water Dragon lives just a little\nways up from here. If you want to\nmake a note of that, now's probably\na good time to do it!")
/*<243>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 239, 'param3': 34}
          					goto flw_239
          				}
          			  case 1:
/*<235>*/ 				printf("Whaaa?<pause0F> You don't want to gobble\nme up?<pause0F> Oh, that's a relief.\n\n\nI've been hiding here for a while.\nEver since that school of scary-looking\nfish swam through.")
          			}
          		}
          	}
          }

          void entrypoint_203_49() {
/*<564>*/ 	start()
/*<565>*/ 	printf("\x0E\x01\x12\x04\x00\x01Master, listen closely.\nDo you hear that?")
          }

          void entrypoint_203_50() {
/*<  4>*/ 	start()
/*<255>*/ 	set_camera(-1, 0)
/*<254>*/ 	printf("Congratulations, \x0E\x01\x12\x04\x00\x04\nMaster Link.")
/*<256>*/ 	printf("You have passed this trial. You now\nhave the power to proceed to the\nlocation of the first sacred flame\nthat will enhance your sword.")
/*<258>*/ 	set_camera(2, 0)
/*<257>*/ 	printf("The <y<<item44>>> is one\nof the goddess's sacred gifts.\n\n\nThe great spirit of the <b<Water Dragon\n>>has provided you with the ability to\nswim freely underwater.")
/*<260>*/ 	set_camera(-1, 0)
/*<259>*/ 	printf("The flame you seek is somewhere \nwithin these woods... \x0E\x01\x12\x04\x00\x01Master, I must\nconclude that this flame is likely in a\npart of this area you have not explored.")
          }

          void entrypoint_203_85() {
/*<490>*/ 	start()
/*<492>*/ 	printf("\x0E\x01\x09\x04\x07\x707Yes? If you have a question for me,\nyou need only speak it.\n[1]Fire Dragon?[2]Thunder Dragon?[3]Faron Woods?[4-]Nothing.")
/*<491>*/ 	switch (choice(4)) {
          	  case 0:
/*<493>*/ 		printf("\x0E\x01\x09\x04\x07\x704Hah! Him?<pause0F> Just as I was charged with\nwatching the woods, so does he preside\nover the volcanic lands to the north. \n\nHe's a peculiar fellow who has made\nhis lair deep in the sweltering depths\nof the volcano, beyond the reach of\nmonster and man.\nIf you can't handle the heat, I'd suggest\nyou stay clear. That is, unless you want\nthe flame-charred look!")
          	  case 1:
/*<494>*/ 		printf("\x0E\x01\x09\x04\x07\x704Hah! Oh, him?<pause0F> Just as the goddess\ncharged me with watching the woods,\nso does he preside over the bone-dry\nsands of the desert.\nHe's the oldest of the dragons. For\nsome time, he's neglected his own\nhealth.<pause0F> I wonder how he's been faring\nof late...")
          	  case 2:
/*<495>*/ 		printf("\x0E\x01\x09\x04\x07\x704A great many ancient songs praise the\nway humans once lived in these woods.\nThey were in harmony with nature.\n\nHonestly, I think those songs fail to\nsee the big picture. Don't you agree\nthese woods are far more beautiful\nnow that the humans are gone? ")
          	  case 3:
/*<496>*/ 		printf("\x0E\x01\x09\x04\x07\x706Continue to temper your body and\nmind! This is vital if you are to carry\nout the divine mission entrusted to you!")
          	}
          }

          void entrypoint_203_51() {
/*< 18>*/ 	start()
/*<349>*/ 	set_camera(15, 0)
/*<346>*/ 	set_camera(16, 0)
/*<347>*/ 	{'type': 'type3', 'subType': 2, 'param1': 35, 'param2': 356, 'next': 348, 'param3': 15}
/*<348>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 146, 'param3': 40}
/*<146>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 0, 'next': 29, 'param3': 13}
/*< 29>*/ 	{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 27, 'param3': 35}
/*< 27>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 144, 'param3': 16}
/*<144>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 99, 'next': 350, 'param3': 17}
/*<350>*/ 	printf("You have reached the top of the tree.\n\n\n\nFrom this vantage point, you have a\ngood view of the woods. Perhaps you\nwill see an area you haven't explored.")
/*< 19>*/ 	story_flags[60 /* us: 805A9ADC 0x80, jp: 805ACD5C 0x80 */] = true;
/*<566>*/ 	scene_flags[1 'Faron Woods'][51 /* 0x7 08 */] = true;
/*< 44>*/ 	make_actor_do_something(0, 0)
/*<145>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 394, 'param3': 17}
/*<394>*/ 	set_camera(17, 0)
/*<395>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 381, 'param3': 17}
/*<381>*/ 	printf("\x0E\x01\x12\x04\x00\x01Master, look up there...")
/*<382>*/ 	set_camera(18, 0)
/*<386>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 383, 'param3': 6}
/*<383>*/ 	printf("I have confirmed the discovery of\na new Kikwi.\n\n\nAnalysis indicates a 90% chance that\nthe sounds we have been hearing were\nthe loud snores of this Kikwi.")
/*<384>*/ 	set_camera(19, 0)
/*<385>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 30, 'param3': 6}
/*< 30>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 28, 'param3': 36}
/*< 28>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_86() {
/*<398>*/ 	start()
/*<399>*/ 	printf("\x0E\x01\x09\x04\x09\x900Mmmmmm! Exquisite! I can feel its\nenergy surging through me!")
          }

          void entrypoint_203_00() {
          	start()
/*< 81>*/ 	switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          	  case 0:
/*<541>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*<542>*/ 			printf("\x0E\x01\x09\x04\x01\x14You! I told you to keep quiet about\nour conversation!\n\n\nWhen the Water Dragon flooded the\nforest, I was sure she was going to\neat me like a dinner salad!\n\n\x0E\x01\x09\x04\x01\x07Still, the flood isn't so bad, is it?\nThe water's flushed out most of those\nmonsters. The woods are quite\npeaceful, really.")
          			flw_540:
/*<540>*/ 			printf("\x0E\x01\x09\x04\x00\x13I'll be here nappin' if you need some\nof my elder wisdom. See you around!\nKwwwwwwrk...")
          		  case 1:
/*<543>*/ 			printf("\x0E\x01\x09\x04\x01\x01Ack! That stings!\n\n\n\n\x0E\x01\x09\x04\x01\x07I hear the Water Dragon's pretty\nimpressed with you.\n\n\nOf course, she's been impressed with\nme for ages now, so...")
          			goto flw_540
          		}
          	  case 1:
/*< 82>*/ 		switch (scene_flags[50 /* 0x7 04 */]) {
          		  case 0:
/*<536>*/ 			switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          			  case 0:
/*<538>*/ 				switch (adventure_pouch_has(7 0x0007)) {
          				  case 0:
/*<539>*/ 					printf("\x0E\x01\x09\x04\x01\x01There's no need to be so rough,\nyou know.\n\n\n\x0E\x01\x09\x04\x01\x07Ah, no mistaking it. That's the water\nHer Excellence craves. If you're\nembarrassed to give it to her, you\ncould always say it's a gift from me!")
          					goto flw_540
          				  case 1:
/*<544>*/ 					printf("\x0E\x01\x09\x04\x01\x01There's no need to be so rough,\nyou know.\n\n\n\x0E\x01\x09\x04\x01\x06Hmm? You need to fetch some sacred\nwater to prove yourself to the\nWater Dragon?\n\nDid you try searching the temple here?\nI think I remember Her Excellence\nwas quite fond of the water from one\nof the little springs inside.")
          					goto flw_540
          				}
          			  case 1:
/*<537>*/ 				printf("\x0E\x01\x09\x04\x01\x01Hey now! You're going to give me\na bruise like that.\n\n\n\x0E\x01\x09\x04\x01\x07So you've managed to open the gate\nto Lake Floria, eh?\n\n\nRemember, if the Water Dragon\nasks how you found out where she\nresides, you didn't hear it from me!")
          				goto flw_540
          			}
          		  case 1:
/*< 83>*/ 			switch (story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */]) {
          			  case 0:
/*< 39>*/ 				switch (story_flags[61 /* us: 805A9ADF 0x01, jp: 805ACD5F 0x01 */]) {
          				  case 0:
/*< 40>*/ 					printf("\x0E\x01\x09\x04\x01\x04Hmmmmmm? Oh, you again...kwwrk.\nIs there something I can do for you?\n[1]Yes.[2-]No.")
/*< 41>*/ 					switch (choice(2)) {
          					  case 0:
/*< 42>*/ 						printf("\x0E\x01\x09\x04\x00\x03Channel the power of the goddess\ninto the gate, and complete the symbol\ncarved upon its doors using that power.")
          						goto flw_37
          					  case 1:
/*< 43>*/ 						printf("\x0E\x01\x09\x04\x00\x13I'll be here nappin' if you need some\nof my elder wisdom. See you around!\nKwwwwwwrk...")
          					}
          				  case 1:
          					goto flw_37
          				}
          			  case 1:
/*<356>*/ 				printf("\x0E\x01\x09\x04\x00\x14Whoozit?! I'm nappin'! ")
/*<375>*/ 				set_camera(20, 0)
/*<569>*/ 				switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          				  case 0:
/*<570>*/ 					printf("\x0E\x01\x09\x04\x01\x01\x0E\x01\x06\x02\xFCCDWhazzit?<pause0F> \x0E\x01\x06\x02ÍSay, you got a familiar face.\nHave you and I met before, kwrrrrrk?\n[1]Sure have![2]Nah...")
/*<571>*/ 					switch (choice(2)) {
          					  case 0:
/*<575>*/ 						set_camera(18, 0)
/*<574>*/ 						printf("\x0E\x01\x09\x04\x00\x07Ah, you're playing in <r<Hero Mode>>. That\nexplains it. In that case, you don't need\nme blabbing on about what you need to\ndo, do you?[1]Pretty much.[2]Uh, I forgot...")
/*<576>*/ 						switch (choice(2)) {
          						  case 0:
/*<578>*/ 							entrypoint_203_10();
          						  case 1:
/*<577>*/ 							printf("\x0E\x01\x09\x04\x00\x03Uh-oh. If your memory is so shaky that\nyou've already forgotten our past\nconversation, things could get pretty\nhairy for you this time around, kwwrk!")
          							flw_378:
/*<378>*/ 							set_camera(20, 0)
          							flw_379:
/*<379>*/ 							printf("\x0E\x01\x09\x04\x01\x06Listen, do you promise not to breathe\na word of what I'm about to tell you\nto another soul? I'm serious, kwwwrk!\n\n[1]I promise.[2]No promises!")
/*< 21>*/ 							switch (choice(2)) {
          							  case 0:
          								flw_354:
/*<354>*/ 								printf("\x0E\x01\x09\x04\x03\x08All right, I'll tell you. But remember--\nit's a secret to everybody.")
          								flw_355:
/*<355>*/ 								set_camera(18, 0)
/*<364>*/ 								printf("\x0E\x01\x09\x04\x03\x04The flame that you seek...<pause0F>is most\nlikely <pling><b<Farore's Flame>>.\n\n\n\x0E\x01\x09\x04\x01\x00Yes, yes... Farore's Flame...<pause0F> That story\nbegins very long ago, when the goddess\nwas still with us, kwwwrk...")
/*<365>*/ 								set_camera(21, 0)
/*<366>*/ 								printf("\x0E\x01\x09\x04\x00\x02The goddess gave the flame to the\n<b<Water Dragon>>, a great spirit that\npresides over <b<Faron Woods>>.")
/*<367>*/ 								set_camera(22, 0)
/*<368>*/ 								printf("\x0E\x01\x09\x04\x00\x04The way I hear it is she left the flame\nin the care of the Water Dragon so that\none day the mighty dragon could pass\nit on to the \x201C<b<one from the sky>>\"...")
/*<369>*/ 								set_camera(20, 0)
/*<370>*/ 								printf("You see, kwwwwrk, I've got a hunch\nthat the goddess was talking about\nyou, lad.\n\n\x0E\x01\x09\x04\x03\x09Well, that settles that. You must\nseek out the mighty Water Dragon.")
/*<371>*/ 								set_camera(23, 0)
/*<372>*/ 								printf("Her lair is deep in a lake in the south\nof these woods, kwwwwwwrk.\nShe watches over the flame there.")
/*<373>*/ 								set_camera(24, 0)
/*<374>*/ 								printf("\x0E\x01\x09\x04\x00\x04There's a problem, though. The gate\nthat leads to that lake is sealed shut to\nall those judged unworthy...\n\n\x0E\x01\x09\x04\x00\x07But don't worry, kwwwwrk. I'll let you\nin on the trick to opening the gate.")
/*<407>*/ 								set_camera(25, 0)
/*<408>*/ 								printf("\x0E\x01\x09\x04\x01\x04To open the gate,<pause0F> you have to channel\nthe <r<power of the goddess >>into the\nsymbol carved into its doors, kwwwrk!\n\n\x0E\x01\x09\x04\x00\x09Oh, but it isn't so simple!<pause0F> The symbol is\nincomplete. To unlock the gate,\nyou must make the symbol whole.")
/*<409>*/ 								set_camera(18, 0)
/*<410>*/ 								printf("\x0E\x01\x09\x04\x03\x01The only way you'll know what the\ncompleted symbol should look like is\nto first find that same completed\nsymbol somewhere else in these woods.")
          								goto flw_37
          							  case 1:
/*<380>*/ 								set_camera(18, 0)
/*< 22>*/ 								printf("\x0E\x01\x09\x04\x03\x14\x0E\x01\x08\x02\x2CDYou can't keep a secret?!\n\n\n\n\x0E\x01\x09\x04\x01\x06Here I am trying to let you in on a big\nsecret, and you can't even promise to\nkeep it to yourself? Do you even want\nto hear it, kwwwwwrk?\n[1]Please![2]Nah...")
/*< 23>*/ 								switch (choice(2)) {
          								  case 0:
          									goto flw_354
          								  case 1:
/*< 24>*/ 									printf("\x0E\x01\x09\x04\x03\x0B\x0E\x01\x08\x02\x2CDWHATSIT?!\n\n\n\n\x0E\x01\x09\x04\x01\x03Oh, fine.<pause0F> I give up, kwwwrk.\nYou climbed all the way up here,\nso I'll tell you anyway.")
          									goto flw_355
          								}
          							}
          						}
          					  case 1:
/*<572>*/ 						printf("\x0E\x01\x09\x04\x00\x03Huh, maybe so. Maybe so. This must be\nwhat folks call déjà vu, kwwwrk.\nCreepy.")
/*<573>*/ 						set_camera(18, 0)
          						flw_363:
/*<363>*/ 						printf("\x0E\x01\x09\x04\x03\x06...But forget all that nonsense and tell\nme, kwwwrk, what business does a\nreal live human have in these woods?\n\n[1]The flame![2]Nothing.")
/*<360>*/ 						switch (choice(2)) {
          						  case 0:
/*<361>*/ 							printf("\x0E\x01\x09\x04\x01\x01You're out questing for a flame to\nenhance your sword, kwwrk? So that\nyou can find someone important to\nyou, eh?\nHow about that...<pause0F> A human who can see\nme and seeks a great flame, kwwwrk!")
          							goto flw_378
          						  case 1:
/*<396>*/ 							set_camera(20, 0)
/*<397>*/ 							printf("\x0E\x01\x09\x04\x01\x14Remember what I said about it being\nmy job to watch over the forest?\nI know things most don't, kwrrrk!\n\nA human who seeks a great flame to\nenhance his sword... Pffft. I know\nwho you are!")
          							goto flw_379
          						}
          					}
          				  case 1:
/*<357>*/ 					printf("\x0E\x01\x09\x04\x01\x01Oooh, look at that! A real live human!\nHaven't seen one of you in a while,\nkwrrrrrk.\n\nThey used to call me <b<Yerbal>>. Now I'm\njust the old <b<Kikwi hermit>>. I watch over\nthis forest here...when I'm not nappin'.\n\n\x0E\x01\x09\x04\x01\x06I don't know how you wandered all the\nway up here, but let me ask you\nsomething... Can you really see me?\n[1]Sure can.[2]Nope.")
/*<358>*/ 					switch (choice(2)) {
          					  case 0:
/*<362>*/ 						printf("\x0E\x01\x09\x04\x00\x07Is that so? Well then, slap yourself on\nthe back, kwwwrk! You know, some\nKikwis can't even see me these days.")
/*<377>*/ 						set_camera(18, 0)
          						goto flw_363
          					  case 1:
/*<376>*/ 						set_camera(18, 0)
/*<359>*/ 						printf("\x0E\x01\x09\x04\x03\x0BFibber! You're a fibbity fibber, kwwrk!\n\n\n\n\x0E\x01\x09\x04\x01\x14And just how did you peg me with your\nfancy shooter thing without being able\nto see me, eh?")
          						goto flw_363
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_203_52() {
/*< 62>*/ 	start()
/*< 65>*/ 	story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */] = true;
/*<468>*/ 	switch (temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<516>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 467, 'param3': 35}
/*<467>*/ 		set_camera(30, 0)
          		flw_64:
/*< 64>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 84, 'param3': 16}
/*< 84>*/ 		switch (adventure_pouch_has(7 0x0007)) {
          		  case 0:
/*< 85>*/ 			printf("I am analyzing the water in this basin\x0E\x01\x06\x02\xFCCD...<pause0F>\x0E\x01\x06\x02Í\nIts unique <r<properties >><r<match >>the water\nyou collected at Skyview Spring.")
/*<186>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 517, 'param3': 36}
/*<517>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 317, 'param3': 6}
/*<317>*/ 			temp_flags[2 /* 0x1 04 */] = true;
/*<470>*/ 			switch (temp_flags[3 /* 0x1 08 */]) {
          			  case 0:
/*<469>*/ 				set_camera(31, 0)
          				flw_183:
/*<183>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 185, 'param3': 16}
/*<185>*/ 				entrypoint_203_91();
          			  case 1:
          				goto flw_183
          			}
          		  case 1:
/*< 67>*/ 			printf("I am analyzing the water remaining in\nthis basin.\x0E\x01\x06\x02\xFCCD.<pause0F>.\x0E\x01\x06\x02Í<pling> Excellent. I can now help\nyou <r<dowse >>for the water type you are\nsearching for.")
/*<568>*/ 			open_dowsing_wheel(5)
/*<567>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<230>*/ 			switch (adventure_pouch_has(1 0x0001)) {
          			  case 0:
/*<231>*/ 				printf("\x0E\x01\x12\x04\x00\x01Master, you have wisely elected to\ncarry an <y<Empty Bottle>>. Use it to carry\nthe water you seek.")
          				flw_66:
/*< 66>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 297, 'param3': 36}
/*<297>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 462, 'param3': 6}
/*<462>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 294, 'param3': 16}
/*<294>*/ 				set_camera(12, 0)
/*<293>*/ 				printf("\x0E\x01\x09\x04\x00\x05If you continue down this way, you will\nfind an exit back to the woods.")
/*<471>*/ 				switch (temp_flags[0 /* 0x1 01 */]) {
          				  case 0:
/*<295>*/ 					set_camera(-1, 0)
          					flw_184:
/*<184>*/ 					printf("\x0E\x01\x09\x04\x09\x706Excellent. Now run along. One does not\nkeep a dragon waiting.")
/*<461>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				  case 1:
/*<472>*/ 					set_camera(27, 0)
          					goto flw_184
          				}
          			  case 1:
/*<229>*/ 				printf("\x0E\x01\x12\x04\x00\x01Master, you do not have a container\nsuitable for transporting water. Please\nprepare a vessel for this purpose.")
          				goto flw_66
          			}
          		}
          	  case 1:
/*< 63>*/ 		{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 64, 'param3': 35}
          		goto flw_64
          	}
          }

          void entrypoint_203_87() {
/*<400>*/ 	start()
/*<401>*/ 	printf("Behold the full majesty of <b<Faron>>,\nWater Dragon and guardian of these\nlands! I stand tall, healed, and whole\nonce again!")
          }

          void entrypoint_203_01() {
/*<  1>*/ 	start()
/*<413>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<414>*/ 		printf("\x0E\x01\x09\x04\x00\x07I'm sure glad all those mean guys\nare gone. We can finally live in\npeace again!\n\n\x0E\x01\x09\x04\x00\x04I really hope you find your friend,\njust so the two of you can get back\nto life as usual!")
          	  case 1:
/*<415>*/ 		printf("\x0E\x01\x09\x04\x00\x01Heya! Remember me? You ever find\nthat girl you were searching after?\n[1]Who're you?[2]Not yet...")
/*<533>*/ 		switch (choice(2)) {
          		  case 0:
/*<534>*/ 			printf("\x0E\x01\x09\x04\x11\x13Who am I...?<pause1E> Is it that hard to\nremember who I am?\n\n\n\x0E\x01\x09\x04\x0B\x04Want to know the best way to tell us\nKikwis apart? If you point to us on\nyour map, you'll see our names appear.")
          		  case 1:
/*<535>*/ 			printf("\x0E\x01\x09\x04\x11\x13Oh... I sure hope you two find each\nother soon. Let me tell you, there's\nnothing like reuniting with friends.")
          		}
          	}
          }

          void entrypoint_203_53() {
/*< 75>*/ 	start()
/*<221>*/ 	story_flags[68 /* us: 805A9ADF 0x80, jp: 805ACD5F 0x80 */] = true;
/*<219>*/ 	{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 220, 'param3': 35}
/*<220>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 227, 'param3': 16}
/*<227>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 223, 'param3': 17}
/*<223>*/ 	printf("")
/*<222>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 228, 'param3': 36}
/*<228>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_70() {
/*<159>*/ 	start()
/*<158>*/ 	printf("Mistress Fi, bzzzt! My deep apologies\nfor keeping you waiting!")
          }

          void entrypoint_203_88() {
/*<402>*/ 	start()
/*<545>*/ 	switch (temp_flags[2 /* 0x1 04 */]) {
          	  case 0:
/*<546>*/ 		printf("\x0E\x01\x09\x04\x09\x700Human. You have done well to bring\nme the <b<sacred water>> I asked you for.\n\n\nI see now it was no coincidence that\nyou completed the goddess's trial\nand obtained a <b<Water Dragon's Scale>>.")
          	  case 1:
/*<547>*/ 		printf("\x0E\x01\x09\x04\x09\x700Human. You have done well to bring\nme the <b<sacred water>> I asked you for.\n\n\nI see now it was no coincidence that\nyou completed the goddess's trial\nand obtained a <b<Water Dragon's Scale>>.")
          	}
          }

          void entrypoint_203_54() {
/*< 76>*/ 	start()
/*< 77>*/ 	printf("I estimate an 80% probability that this\nsymbol is the one the hermit was\ndescribing.")
/*<232>*/ 	set_camera(26, 0)
/*<437>*/ 	printf("I recommend you memorize its shape.")
/*<438>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 439, 'param3': 6}
/*<439>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 440, 'param3': 36}
/*<440>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 6}
          }

          void entrypoint_203_71() {
/*<161>*/ 	start()
/*<179>*/ 	switch (scene_flags[127 /* 0xE 80 */]) {
          	  case 0:
/*<180>*/ 		printf("Ugh, vweep. This old <r<basin >>again...<pause0F>\nFine, vrrm! I got this...")
          	  case 1:
/*<160>*/ 		printf("Let's see here... This cargo looks very\nheavy,<pause0F> but it's well within my payload\ntolerances, bzzrrt!")
          	}
          }

          void entrypoint_203_89() {
/*<403>*/ 	start()
/*<404>*/ 	printf("\x0E\x01\x09\x04\x07\x700In turn, I will grant you the favor you\nhave asked of me and lead you to the\n<r<sacred flame>> of my land.\n\nCome.")
/*<405>*/ 	changeScene(2, 0) // 
          }

          void entrypoint_203_02() {
/*<416>*/ 	start()
/*<417>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<418>*/ 		printf("\x0E\x01\x09\x04\x09\x0CEveryone keeps saying the forest\nis safe again, but I don't buy it.\n\n\n\x0E\x01\x09\x04\x07\x13I mean, is anywhere truly safe\nanymore? One day, I'd like to go for\na walk without cringing with fear\nevery time I hear a sound.")
          	  case 1:
/*<419>*/ 		printf("\x0E\x01\x09\x04\x09\x0CHow long do we have to live in\nconstant fear?\n\n\n\x0E\x01\x09\x04\x07\x13Is no place in the woods completely\nsafe? One day it would be nice to\ngo for a relaxing walk.")
          	}
          }

