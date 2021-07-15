          void entrypoint_402_17() {
/*< 38>*/ 	start()
/*< 39>*/ 	printf("This is easily as scary as I thought it\nwould be, vrrm<pause05>.<pause05>.<pause05>.\n\n\n\x0E\x01\x09\x04\x07\x00But if you think about it, they should\nall be dead, brrzrrt!\n\n\n\x0E\x01\x09\x04\x07\x00The only reason I'm up and about like\nthis is because of that Timeshift Stone\non the boat, phoo-weep!\n\n\x0E\x01\x09\x04\x07\x00So I have nothing to worry about, vrrm!\nI feel better now, \x0E\x03\x01\x00Link.\nAnd so it's time for you to go look for\nmy ship, zrt!\n\x0E\x01\x09\x04\x07\x00I'll wait here, of course, bzzt.")
/*< 51>*/ 	story_flags[280 /* us: 805A9AFB 0x04, jp: 805ACD7B 0x04 */] = true;
/*< 85>*/ 	scene_flags[8 'Lanayru Sand Sea'][47 /* 0x4 80 */] = true;
          }

          void entrypoint_402_51() {
/*<116>*/ 	start()
/*<121>*/ 	printf("To the Construction Bay")
          }

          void entrypoint_402_18() {
/*< 74>*/ 	start()
/*<147>*/ 	printf("\x0E\x01\x12\x04\x00\x0BI have information to report, Master.\nPlease take a look.")
/*<167>*/ 	set_camera(3, 0)
/*<148>*/ 	printf("There is a 60% probability that these\nmasts and these sails are from the ship\nthat protects <r<Nayru's Flame>>.")
/*<168>*/ 	set_camera(-1, 0)
/*< 75>*/ 	printf("You can now set your <r<dowsing>> ability\nto search for the ship that holds\n<r<<r<<pling><r<Nayru's Flame>>.")
/*< 76>*/ 	story_flags[275 /* us: 805A9AF8 0x20, jp: 805ACD78 0x20 */] = true;
/*< 80>*/ 	story_flags[271 /* us: 805A9AF8 0x02, jp: 805ACD78 0x02 */] = true;
/*<279>*/ 	open_dowsing_wheel(7)
/*<278>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<149>*/ 	scene_flags[8 'Lanayru Sand Sea'][112 /* 0xF 01 */] = true;
/*<201>*/ 	story_flags[647 /* us: 805A9B1C 0x01, jp: 805ACD9C 0x01 */] = true;
          }

          void entrypoint_402_52() {
/*<117>*/ 	start()
/*<123>*/ 	printf("Approach the cart \nand press (A) to get on.")
          }

          void entrypoint_402_01() {
/*<  1>*/ 	start()
          	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_402_19() {
/*< 77>*/ 	start()
/*<272>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaster, it would appear that in the\nmany years this factory went unused,\nmonsters have moved in and built\na nest.\nI now estimate that the chance of \nfinding a clue in the sand here as to the\nship's location is extremely low.")
/*< 79>*/ 	story_flags[270 /* us: 805A9AF8 0x01, jp: 805ACD78 0x01 */] = true;
/*<239>*/ 	story_flags[741 /* us: 805A9B26 0x20, jp: 805ACDA6 0x20 */] = true;
          }

          void entrypoint_402_53() {
/*<118>*/ 	start()
/*<122>*/ 	printf("Lean your body to balance the\nweight of the cart as you\napproach a curve.")
          }

          void entrypoint_402_70() {
/*<245>*/ 	start()
/*<250>*/ 	printf("Dear Captain,\nThanks for everything, zrrt!\nYours, the Crew, vrrrrrm.")
          }

          void entrypoint_402_02() {
/*<  2>*/ 	start()
/*< 21>*/ 	switch (story_flags[264 /* us: 805A9AF9 0x04, jp: 805ACD79 0x04 */]) {
          	  case 0:
/*< 22>*/ 		switch (story_flags[273 /* us: 805A9AF8 0x08, jp: 805ACD78 0x08 */]) {
          		  case 0:
/*<220>*/ 			switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          			  case 0:
/*<221>*/ 				switch (zone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<223>*/ 					printf("Let's get going quick, vrrm! Don't you\nneed to find that person you're looking\nfor, brrzt?\n\nOr do you need me to take the boat\nsomewhere else on this sea?\n[1]To sea![2]To the Sandship![3-]Never mind.")
          					flw_263:
/*<263>*/ 					switch (choice(3)) {
          					  case 0:
/*<264>*/ 						printf("\x0E\x01\x09\x04\x07\x00All right! Let's go, vrrrrm!")
/*<267>*/ 						changeScene(2, 0) // 
          					  case 1:
/*<265>*/ 						printf("\x0E\x01\x09\x04\x07\x00Right, I'll take you to my boat, vrrm!")
/*<266>*/ 						changeScene(4, 0) // 
          					  case 2:
/*<268>*/ 						printf("\x0E\x01\x09\x04\x07\x00Come and visit again sometime, vrrm!")
          					}
          				  case 1:
/*<281>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*<280>*/ 						switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          						  case 0:
          							flw_222:
/*<222>*/ 							printf("You made it, zrrt! Did you find who\nyou were looking for, phaweep?\n\n\nDo you want me to take you somewhere\nby boat, brrzrrt?\n[1]To sea![2]To the Sandship![3-]Never mind.")
          							goto flw_263
          						  case 1:
/*<292>*/ 							switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          							  case 0:
          								flw_282:
/*<282>*/ 								printf("You are looking for a dragon god,\nvrrm?\n\n\n\x0E\x01\x09\x04\x07\x00If it's <b<Master Thunder Dragon >>you \nwant to meet, he's to the south of \n<b<Lanayru Caves>>, bzzt. I don't know any \nother dragon gods, though, brrzrrt.\n\x0E\x01\x09\x04\x07\x00Do you want me to take you somewhere\nby boat?\n[1]To sea![2]To the Sandship![3-]Never mind.")
          								goto flw_263
          							  case 1:
/*<293>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 294, 'param3': 31}
/*<294>*/ 								story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          								goto flw_282
          							}
          						}
          					  case 1:
          						goto flw_222
          					}
          				}
          			  case 1:
          				flw_150:
/*<150>*/ 				switch (story_flags[272 /* us: 805A9AF8 0x04, jp: 805ACD78 0x04 */]) {
          				  case 0:
/*< 27>*/ 					printf("\x0E\x01\x09\x04\x07\x00Ready to shove off, brrzt?\n[1]To sea.[2]To the Sandship.[3-]Never mind.")
/*< 28>*/ 					switch (choice(3)) {
          					  case 0:
/*< 29>*/ 						printf("\x0E\x01\x09\x04\x07\x00All right! Let's go, vrrrrm!")
/*< 33>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 31>*/ 						printf("\x0E\x01\x09\x04\x07\x00Right, I'll take you to my boat, vrrm!")
/*< 32>*/ 						changeScene(0, 0) // 
          					  case 2:
/*< 30>*/ 						printf("\x0E\x01\x09\x04\x07\x00We need to get a move on, bzzt!")
          					}
          				  case 1:
/*<155>*/ 					printf("\x0E\x01\x09\x04\x07\x00Shall we shove off, vrrm?\n[1]Let's go![2-]Wait...")
/*<154>*/ 					switch (choice(2)) {
          					  case 0:
/*<151>*/ 						printf("\x0E\x01\x09\x04\x07\x00All right! Let's go, vrrrrm!")
/*<153>*/ 						changeScene(2, 0) // 
          					  case 1:
/*<152>*/ 						printf("\x0E\x01\x09\x04\x07\x00We need to get a move on, bzzt!")
          					}
          				}
          			}
          		  case 1:
/*<135>*/ 			printf("What's that, vwooot? Changed\nyour mind?\n\n\nWill you help me to get back my ship,\nbzztzzz?\n[1]I'll help![2-]No way.")
          			flw_134:
/*<134>*/ 			switch (choice(2)) {
          			  case 0:
/*< 26>*/ 				printf("\x0E\x01\x09\x04\x07\x00Really, vrrm? Well, in that case, bzzt...")
/*< 25>*/ 				printf("Hmm<pause0A>.<pause0A>.<pause0A>. There's something weird about\nthat map of yours...vrrm.\n\n\n\x0E\x01\x09\x04\x07\x00If you're going to navigate these\ntreacherous waters, then you need a\nproper <y<sea chart>>, doo-weep!\n\nThere is a <y<sea chart >>in my shack\nat <b<Skipper's Retreat>>, bzzzt. So first\nyou need to get on this boat and set a\ncourse for <b<Skipper's Retreat>>!")
/*< 24>*/ 				story_flags[273 /* us: 805A9AF8 0x08, jp: 805ACD78 0x08 */] = true;
          				goto flw_150
          			  case 1:
/*<133>*/ 				printf("\x0E\x01\x09\x04\x07\x00Then I'm not letting you on board,\nbrrt!\n\n\nAnd you won't be able to get anywhere\nwithout getting on this boat, vweep!")
          			}
          		}
          	  case 1:
/*< 23>*/ 		story_flags[264 /* us: 805A9AF9 0x04, jp: 805ACD79 0x04 */] = true;
/*<  3>*/ 		printf("Hmm<pause0A>.<pause0A>.<pause0A>. Who are you, bzzt?\nSome human, vrrrm?\n\n\nWho am I, brrzrrt<pause05>.<pause05>.<pause05>.?\n\n\n\n\x0E\x01\x09\x04\x07\x00<pling>I am the proud skipper of the ship\nthat protects <r<Nayru's Flame>>, phweep!\n[1]Nayru's Flame?[2]Protector ship?")
/*<208>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_212:
/*<212>*/ 			set_camera(13, 0)
/*<210>*/ 			printf("<pause0A>.<pause0A>.<pause0A>.\n\n\n\nIt was the day of the storm,\nphoo-weep<pause05>.<pause05>.<pause05>. My crew and I were\nnavigating the seas as usual, vrrm...\n\nAnd then those brutes, bzzt<pause05>.<pause05>.<pause05>.\nthe pirates, suddenly attacked us,\nbrrzt.\n\nThey were after <r<Nayru's Flame>>, zzpt.\nMy crew was imprisoned...vrrrt...\nand I was thrown into the sea!")
/*<213>*/ 			set_camera(14, 0)
/*<211>*/ 			printf("\x0E\x01\x09\x04\x07\x00I drifted on the current to this port,\nvrrrrm<pause05>.<pause05>.<pause05>.")
/*<269>*/ 			set_camera(17, 0)
/*<270>*/ 			printf("\x0E\x01\x09\x04\x07\x00After that, I took this boat and went\nsearching for my ship and crew, but\nthey were nowhere to be found, bzzt.")
/*<218>*/ 			set_camera(-1, 0)
/*<217>*/ 			printf("\x0E\x01\x09\x04\x07\x00It haunts me, wondering where my\nship could be, phweep.<pause05>.<pause05>.\n\n\nI'd bet my hat they've turned the ship\ninvisible and are hiding out \nsomewhere, vrrm! You can't see it.\n[1]Why not?[2]Invisible?")
/*<216>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_209:
/*<209>*/ 				printf("\x0E\x01\x09\x04\x07\x00In order to protect <r<Nayru's Flame>>, the\nship has a function that allows it to\nbecome invisible, vweep<pause05>.<pause05>.<pause05>.\n\nYou say you're searching for <r<Nayru's\nFlame>>, bzzt? Oh... So you need <r<Nayru's\nFlame >>to find someone important to\nyou, vrrrm<pause05>.<pause05>.<pause05>.?\n\x0E\x01\x09\x04\x07\x00In that case, you should help me search\nfor my ship and crew, phweep!")
/*<214>*/ 				set_camera(15, 0)
/*<207>*/ 				printf("If you'll help me, vzzzt, then I guess\nI'll let you on my boat.\n[1]I'll help![2-]No way.")
/*<215>*/ 				set_camera(-1, 0)
          				goto flw_134
          			  case 1:
          				goto flw_209
          			}
          		  case 1:
          			goto flw_212
          		}
          	}
          }

          void entrypoint_401_20() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf("")
          }

          void entrypoint_402_54() {
/*<119>*/ 	start()
/*<124>*/ 	printf("If you're moving too fast,\npress (B) to slow down.")
          }

          void entrypoint_402_71() {
/*<246>*/ 	start()
/*<251>*/ 	printf("Dear Dad,\nGood luck at work, vrrm!")
          }

          void entrypoint_402_03() {
/*< 12>*/ 	start()
/*< 14>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_402_55() {
/*<145>*/ 	start()
/*<146>*/ 	printf("Jump up to clear obstacles.")
          }

          void entrypoint_402_72() {
/*<254>*/ 	start()
/*<255>*/ 	printf("To the Pier")
          }

          void entrypoint_402_04() {
/*< 13>*/ 	start()
/*< 41>*/ 	switch (story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */]) {
          	  case 0:
/*< 42>*/ 		switch (story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */]) {
          		  case 0:
/*<284>*/ 			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          			  case 0:
/*<283>*/ 				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          				  case 0:
          					flw_44:
/*< 44>*/ 					printf("That house holds many dear memories\nof my family, vrrm.\n\n\nI wonder when I will be able to go\nhome, zrrt. I really want to see my\nfamily again, phweep.<pause05>.<pause05>.")
          					flw_46:
/*< 46>*/ 					printf("\x0E\x01\x09\x04\x07\x00Shall we set sail, vrrt?\n[1]Set sail![2-]Not yet.")
          					flw_47:
/*< 47>*/ 					switch (choice(2)) {
          					  case 0:
/*< 49>*/ 						printf("\x0E\x01\x09\x04\x07\x00Anchors aweigh, zrrm!")
/*< 50>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 48>*/ 						printf("\x0E\x01\x09\x04\x07\x00I see, phweep...")
          					}
          				  case 1:
/*<295>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_285:
/*<285>*/ 						printf("You are looking for a dragon god,\nvrrm?\n\n\n\x0E\x01\x09\x04\x07\x00If it's <b<Master Thunder Dragon >>you \nwant to meet, he's to the south of \n<b<Lanayru Caves>>, bzzt. I don't know any \nother dragon gods, though, brrzrrt.")
          						goto flw_46
          					  case 1:
/*<296>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 297, 'param3': 31}
/*<297>*/ 						story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          						goto flw_285
          					}
          				}
          			  case 1:
          				goto flw_44
          			}
          		  case 1:
/*< 43>*/ 			printf("You got the <y<sea chart>>, vrrm! Now we\ncan finally navigate properly, zrrt!\n\n\nPhweep! Let's go look for my ship!")
/*< 45>*/ 			story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */] = true;
          			goto flw_46
          		}
          	  case 1:
/*< 15>*/ 		printf("What are you waiting for, zrrt?\nHurry and get the <y<sea chart >>from my\nold house, vrrm!\n\nOr did you want to go back to sea,\nphweep?\n[1]Sea.[2-]Never mind.")
          		goto flw_47
          	}
          }

          void entrypoint_402_21() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf("\x0E\x01\x12\x04\x00dDid you see it, phoo-weep?\nThat's my ship, vrrm!\n\n\nWe must pursue, bzzt! And keep\npounding it with the cannon, zrrt!")
          }

          void entrypoint_402_56() {
/*<143>*/ 	start()
/*<144>*/ 	printf("Last Stop: Construction Bay")
          }

          void entrypoint_402_05() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf("Thank you for getting me my ship back,\nvrrm.\n\n\n\x0E\x01\x09\x04\x07\x00It may have been half wrecked, but my\ncrew and I got it shaped up to almost\nproper working order in no time, vrrt.\n\n\x0E\x01\x09\x04\x07\x00I wish you good luck in finding\nwhomever it is you're looking\nfor, phweep!\n\n\x0E\x01\x09\x04\x07\x00Come visit again. You're welcome\nanytime, vweep!")
/*<137>*/ 	story_flags[815 /* us: 805A9B31 0x80, jp: 805ACDB1 0x80 */] = true;
/*<219>*/ 	zone_temp_flags[1 /* 0x1 02 */] = true;
          }

          void entrypoint_402_22() {
/*< 94>*/ 	start()
/*< 97>*/ 	printf("Open up the <y<sea chart >>you brought\nwith you, zrrt!")
/*<105>*/ 	{'type': 'type3', 'subType': 4, 'param1': 768, 'param2': 6, 'next': 192, 'param3': 30}
/*<192>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 102, 'param3': 6}
/*<102>*/ 	story_flags[519 /* us: 805A9B15 0x01, jp: 805ACD95 0x01 */] = true;
/*<100>*/ 	printf("The <b<<pling>>><b<Shipyard >>is at this location,\nvrrt. Let me mark it for you with an\n\x0E\x02\x04\x02\x19CD, vweep.")
/*<107>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 34}
/*<142>*/ 	printf("\x0E\x01\x09\x04\x07\x00The Shipyard is where we used to build\nour ships, vrrt. My ship was built there\ntoo, vweep!\n\n\x0E\x01\x09\x04\x07\x00If you go to the Shipyard, you might\nfind some clues to the location of my\nship, brrzrrt!")
/*<110>*/ 	printf("\x0E\x01\x09\x04\x07\x00OK! Set sail, vrrm!")
/*<112>*/ 	scene_flags[8 'Lanayru Sand Sea'][30 /* 0x2 40 */] = false;
/*<113>*/ 	scene_flags[8 'Lanayru Sand Sea'][31 /* 0x2 80 */] = true;
/*<259>*/ 	story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */] = true;
          }

          void entrypoint_402_57() {
/*<242>*/ 	start()
/*<247>*/ 	printf("Only YOU can warn your\ncoworkers early enough to\navoid pirate attacks, zrrt!")
          }

          void entrypoint_402_23() {
/*< 95>*/ 	start()
/*<256>*/ 	switch (story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */]) {
          	  case 0:
/*< 98>*/ 		printf("This is pretty scary, vweep<pause05>.<pause05>.<pause05>.\n\n\n\nThe pirate captain is a mechanical\nmaniac, zrrt! He's got no shortage\nof evil underlings too, vrrm!\n\n\x0E\x01\x09\x04\x07\x00I never wanted to lay eyes on him\nagain, brrzrrt. But<pause05>.<pause05>.<pause05>.\n\n\n\x0E\x01\x09\x04\x07\x00If we want to take the ship back, then\nwe have no choice, phoo-weep!")
          		flw_106:
/*<106>*/ 		{'type': 'type3', 'subType': 4, 'param1': 512, 'param2': 0, 'next': 101, 'param3': 30}
/*<101>*/ 		printf("The <pling><b<Pirate Stronghold >>is here at this\n\x0E\x02\x04\x02\x19CD mark, zrrt.")
/*<108>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 109, 'param3': 34}
/*<109>*/ 		printf("\x0E\x01\x09\x04\x07\x00Tighten up whatever you humans have\ninstead of bolts, and let's get going,\nphoo-weep!")
/*<103>*/ 		story_flags[520 /* us: 805A9B15 0x02, jp: 805ACD95 0x02 */] = true;
/*<114>*/ 		scene_flags[8 'Lanayru Sand Sea'][31 /* 0x2 80 */] = false;
          	  case 1:
/*<258>*/ 		printf("\x0E\x01\x09\x04\x07\x00So my ship wasn't here, zrrt?\nThen there is only one place left for us\nto look for clues, vrrm<pause05>.<pause05>.<pause05>.\n\n\x0E\x01\x09\x04\x07\x00Brrzrrt. This could be scary, but...\nwe'll head to the stronghold of the\npirates who stole my ship, phweep!\n\n\x0E\x01\x09\x04\x07\x00The pirate captain is a mechanical\nmaniac, zrrt! Worse, he has plenty of\nevil underlings too, vrrm!\n\n\x0E\x01\x09\x04\x07\x00I never wanted to lay my optical\nreceptors on him again, brrzrrt. But<pause05>.<pause05>.<pause05>.\n\n\n\x0E\x01\x09\x04\x07\x00If we want to take the ship back, then\nwe have no choice, phoo-weep!")
/*<257>*/ 		story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */] = true;
          		goto flw_106
          	}
          }

          void entrypoint_402_40() {
/*<169>*/ 	start()
/*<170>*/ 	printf("\x0E\x01\x12\x04\x00\x01Master, please take a look.")
/*<178>*/ 	set_camera(8, 0)
/*<171>*/ 	printf("This object is called a <y<<pling>Timeshift Orb>>.\n\n\n\nI conjecture that, unlike the Timeshift\nStones we've seen, this device was\ndesigned to be carried around and\ninstalled in different locations.")
/*<179>*/ 	set_camera(-1, 0)
          }

          void entrypoint_402_58() {
/*<243>*/ 	start()
/*<248>*/ 	printf("At the end of this month, rail\ncars will be out of operation\nfor a full day while the track\nis inspected, vrrm.")
          }

          void entrypoint_402_24() {
/*< 96>*/ 	start()
/*<261>*/ 	switch (story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */]) {
          	  case 0:
          		flw_99:
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x07\x00How are we going to search this whole\nhuge sea, vrrm?\n\n\n\x0E\x01\x09\x04\x07\x00I have no choice but to ask you to do\nit for me, brrzrrt! So get cracking,\nvweep!\n\n\x0E\x01\x09\x04\x07\x00There is a high probability that the ship\nis currently hidden from our view,\nphoo-weep. But <pling><g<if we attack it>>, then we\nmight catch a glimpse of it, zrrt!")
/*<104>*/ 		story_flags[521 /* us: 805A9B15 0x04, jp: 805ACD95 0x04 */] = true;
/*<260>*/ 		story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */] = true;
          	  case 1:
/*<262>*/ 		printf("So my ship wasn't at the Pirate\nStronghold either, vrrm<pause05>.<pause05>.<pause05>.\n\n\nWhat's that, bzzt? You found a clue?\n\n\n\n\x0E\x01\x09\x04\x07\x00You know the place, vrrm? Something\ncalled <r<dowsing>>, phweeep? Wow, that's\namazing, brrzrrt!")
          		goto flw_99
          	}
          }

          void entrypoint_402_41() {
/*<172>*/ 	start()
/*<173>*/ 	printf("\x0E\x01\x12\x04\x00\x01Master, look over there.")
/*<176>*/ 	set_camera(9, 0)
/*<174>*/ 	printf("That is the ship containing Nayru's\nFlame. There is a 90% chance that the\nsynthetic life-forms assembled here\nare the crew.")
/*<177>*/ 	set_camera(-1, 0)
/*<175>*/ 	printf("This image would indicate that the\nship's captain spent many happy days\namong his many crew members.")
/*<237>*/ 	story_flags[738 /* us: 805A9B26 0x04, jp: 805ACDA6 0x04 */] = true;
/*<238>*/ 	story_flags[739 /* us: 805A9B26 0x08, jp: 805ACDA6 0x08 */] = true;
          }

          void entrypoint_402_59() {
/*<244>*/ 	start()
/*<249>*/ 	printf("I hope the plans for my ship\nare completed soon...")
          }

          void entrypoint_402_42() {
/*<180>*/ 	start()
/*<181>*/ 	printf("\x0E\x01\x12\x04\x00\x01Master, please take a look.")
/*<190>*/ 	set_camera(10, 0)
/*<186>*/ 	printf("This device looks like it is meant to\nhold a <r<Timeshift Stone>>, but there is\nnot one currently installed.\n\nThere is a 95% chance that it is the\nsame type of device as the ones we\nencountered in <b<Lanayru Mine>>.")
/*<191>*/ 	set_camera(-1, 0)
/*<187>*/ 	printf("Signs indicate that <pling><r<Timeshift Stones>>\nwere used in this facility as a kind of\npower source.")
          }

          void entrypoint_402_25() {
/*<252>*/ 	start()
/*<253>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_402_09() {
/*<  4>*/ 	start()
/*<  6>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_402_60() {
/*<125>*/ 	start()
/*<128>*/ 	printf("\x0E\x01\x05\x04\x0F\x00A report, \x0E\x01\x12\x04\x00\x0BMaster.\n\n\n\n\x0E\x01\x05\x04<\x00This is <b<Lanayru Sand Sea>>. This whole\narea was once a vast ocean.")
          }

          void entrypoint_402_43() {
/*<182>*/ 	start()
/*<183>*/ 	printf("\x0E\x01\x12\x04\x00\x01Master, we have arrived at the\nShipyard construction bay.")
/*<188>*/ 	set_camera(11, 0)
/*<184>*/ 	printf("With the passing of many years, this\nstructure has filled with sand.")
/*<189>*/ 	set_camera(-1, 0)
/*<185>*/ 	printf("I recommend looking in the sand for a\nclue that may direct you to the location\nof the ship.")
          }

          void entrypoint_402_61() {
/*<126>*/ 	start()
/*<129>*/ 	printf("\x0E\x01\x05\x04Z\x00But the water has all evaporated, and\nnow the area is a sea of sand.")
          }

          void entrypoint_402_44() {
/*<224>*/ 	start()
/*<230>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 232, 'param3': 51}
/*<232>*/ 	set_camera(-1, 0)
/*<229>*/ 	printf("\x0E\x01\x12\x04\x00\x01I recommend waiting until after you\nhave achieved your objective before\ntaking a rest. First we need to find the\nsea chart.")
/*<233>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 235, 'param3': 36}
/*<235>*/ 	story_flags[738 /* us: 805A9B26 0x04, jp: 805ACDA6 0x04 */] = true;
          }

          void entrypoint_402_10() {
/*<  5>*/ 	start()
/*< 64>*/ 	switch (story_flags[270 /* us: 805A9AF8 0x01, jp: 805ACD78 0x01 */]) {
          	  case 0:
/*<274>*/ 		switch (story_flags[275 /* us: 805A9AF8 0x20, jp: 805ACD78 0x20 */]) {
          		  case 0:
/*<287>*/ 			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          			  case 0:
/*<286>*/ 				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          				  case 0:
          					flw_275:
/*<275>*/ 					printf("I remember when my ship was finished\nbeing built here, vrrm. I was so happy.\nAh, the good old days, voo-weeet.<pause05>.<pause05>.")
          					flw_67:
/*< 67>*/ 					printf("\x0E\x01\x09\x04\x07\x00Shall we set sail, vrrt?\n[1]Set sail![2-]Not yet.")
          					flw_68:
/*< 68>*/ 					switch (choice(2)) {
          					  case 0:
/*< 70>*/ 						printf("\x0E\x01\x09\x04\x07\x00Anchors aweigh, zrrm!")
/*< 71>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 69>*/ 						printf("\x0E\x01\x09\x04\x07\x00I see, phweep...")
          					}
          				  case 1:
/*<301>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_288:
/*<288>*/ 						printf("You are looking for a dragon god,\nvrrm?\n\n\n\x0E\x01\x09\x04\x07\x00If it's <b<Master Thunder Dragon >>you \nwant to meet, he's to the south of \n<b<Lanayru Caves>>, bzzt. I don't know any \nother dragon gods, though, brrzrrt.")
          						goto flw_67
          					  case 1:
/*<302>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 303, 'param3': 31}
/*<303>*/ 						story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          						goto flw_288
          					}
          				}
          			  case 1:
          				goto flw_275
          			}
          		  case 1:
/*< 65>*/ 			switch (story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */]) {
          			  case 0:
/*< 73>*/ 				printf("Prepare yourself, brrzrrt! We're\nheading to the <b<Pirate Stronghold>>,\nphweep!")
          				goto flw_67
          			  case 1:
/*< 66>*/ 				story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */] = true;
/*< 72>*/ 				printf("\x0E\x01\x09\x04\x07\x00So my ship wasn't here, zrrt?\nThen there is only one place left for us\nto look for clues, vrrm<pause05>.<pause05>.<pause05>.\n\n\x0E\x01\x09\x04\x07\x00Brrzrrt. This could be scary, but...\nwe have to head to the stronghold of\nthe pirates who stole my ship, phweep!\n\n\x0E\x01\x09\x04\x07\x00So let's not waste any time, vrrm!\n[1]Let's go![2-]Wait.")
          				goto flw_68
          			}
          		}
          	  case 1:
/*< 11>*/ 		printf("What are you waiting for, zrrt?\nHurry up and look for clues in the\n<b<Shipyard>>, vrrm!\n\n\x0E\x01\x09\x04\x07\x00Or do you want to go back to sea,\nphweep?\n[1]To the sea![2-]Never mind.")
          		goto flw_68
          	}
          }

          void entrypoint_402_62() {
/*<127>*/ 	start()
/*<130>*/ 	printf("\x0E\x01\x05\x04Z\x00Signs indicate that this place \nfunctioned as a port, linking the land\nto the sea.")
          }

          void entrypoint_402_45() {
/*<225>*/ 	start()
/*<231>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 226, 'param3': 51}
/*<226>*/ 	printf("A report, \x0E\x01\x12\x04\x00\x0BMaster.")
/*<228>*/ 	set_camera(16, 0)
/*<227>*/ 	printf("I have detected a bug infestation in\nthe upper area of the house.")
/*<234>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 236, 'param3': 36}
/*<236>*/ 	story_flags[740 /* us: 805A9B26 0x10, jp: 805ACDA6 0x10 */] = true;
          }

          void entrypoint_402_11() {
/*<  7>*/ 	start()
/*< 91>*/ 	switch (story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */]) {
          	  case 0:
/*< 90>*/ 		printf("\x0E\x01\x12\x04\x00dThat's the stronghold of those\nfearsome pirates, vweep!\n\n\nZrrrt! It's dangerous, so we should stay\nfar away for now. We need to go to the\n<b<Shipyard >>first anyway, vrrm!")
          	  case 1:
/*<  8>*/ 		printf("\x0E\x01\x12\x04\x00dAwooga! There's danger thataway!\nFirst we need to go to <b<Skipper's\nRetreat>>, phoo-weet!")
          	}
          }

          void entrypoint_402_63() {
/*<131>*/ 	start()
/*<132>*/ 	printf("\x0E\x01\x05\x04<\x00This area operated on a new form \nof power. There is a 90% probability\nthat the<r< sacred flame>> is located ahead.\n\n\x0E\x01\x05\x04\x1E\x00I recommend exploring this sand sea.")
          }

          void entrypoint_402_46() {
/*<240>*/ 	start()
/*<241>*/ 	printf("A report, \x0E\x01\x12\x04\x00\x0BMaster. The power of the\nTimeshift Orb appears to have caused\na change in this structure.\n\nI recommend going outside to further\nassess the situation.")
          }

          void entrypoint_402_12() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("My circuits spark to life in the salt air,\nvrrm! It feels good to take to the seas\nagain after so long, but let's see if I can\nremember how to navigate, brrzrrt.\n\x0E\x01\x09\x04\x07\x00Press \x0E\x02\x04\x02\x8CD to move, zrrt. Press (B) while\nmoving to speed up, vrrm!\x0E\x01\x11\x02\x1CD\n\n\nPress \x0E\x02\x04\x02\x29CD to ready the cannon, phweep.\nThen press \x0E\x02\x04\x02\x29CD again to fire it, zrrt!\x0E\x01\x11\x02\xFCD")
/*< 87>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 136, 'param3': 30}
/*<136>*/ 	printf("I placed an \x0E\x02\x04\x02\x19CD mark over on the \nisland where my house is, vrrm!\n\n\nThere's a <r<pier>> on the island where we\ncan dock, brrzrrt!")
/*< 89>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 88, 'param3': 34}
/*< 88>*/ 	printf("\x0E\x01\x09\x04\x07\x00Right, let's go, vrrm!")
/*< 83>*/ 	story_flags[499 /* us: 805A9B12 0x02, jp: 805ACD92 0x02 */] = true;
/*<111>*/ 	scene_flags[8 'Lanayru Sand Sea'][30 /* 0x2 40 */] = true;
          }

          void entrypoint_402_13() {
/*< 16>*/ 	start()
/*< 18>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_402_30() {
/*<271>*/ 	start()
/*< 78>*/ 	printf("\x0E\x01\x12\x04\x00\x0BA report, Master. I calculate a 0%\nchance that searching further in this\nlocation will lead to the appearance\nof the ship.\nBecause of those substantially\nunfavorable odds, I suggest reporting\nto the ship's captain and leaving this\nisland.")
/*<273>*/ 	scene_flags[8 'Lanayru Sand Sea'][89 /* 0xA 02 */] = true;
          }

          void entrypoint_402_14() {
/*< 17>*/ 	start()
/*< 53>*/ 	switch (story_flags[275 /* us: 805A9AF8 0x20, jp: 805ACD78 0x20 */]) {
          	  case 0:
/*<276>*/ 		switch (story_flags[272 /* us: 805A9AF8 0x04, jp: 805ACD78 0x04 */]) {
          		  case 0:
/*<290>*/ 			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          			  case 0:
/*<289>*/ 				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          				  case 0:
          					flw_277:
/*<277>*/ 					printf("Brrzrrrt... I still have nightmares\nabout the day the pirates took my ship,\nvrrm. I was so scared I was fused.<pause05>.<pause05>.")
          					flw_56:
/*< 56>*/ 					printf("\x0E\x01\x09\x04\x07\x00Shall we set sail, vrrt?\n[1]Set sail![2-]Not yet.")
          					flw_57:
/*< 57>*/ 					switch (choice(2)) {
          					  case 0:
/*< 59>*/ 						printf("\x0E\x01\x09\x04\x07\x00Anchors aweigh, zrrm!")
/*< 60>*/ 						changeScene(0, 0) // 
          					  case 1:
/*< 58>*/ 						printf("\x0E\x01\x09\x04\x07\x00I see, phweep...")
          					}
          				  case 1:
/*<298>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_291:
/*<291>*/ 						printf("You are looking for a dragon god,\nvrrm?\n\n\n\x0E\x01\x09\x04\x07\x00If it's <b<Master Thunder Dragon >>you \nwant to meet, he's to the south of \n<b<Lanayru Caves>>, bzzt. I don't know any \nother dragon gods, though, brrzrrt.")
          						goto flw_56
          					  case 1:
/*<299>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 300, 'param3': 31}
/*<300>*/ 						story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          						goto flw_291
          					}
          				}
          			  case 1:
          				goto flw_277
          			}
          		  case 1:
/*< 54>*/ 			switch (story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */]) {
          			  case 0:
/*< 63>*/ 				printf("We need to hurry up, vweeeet, and look\nfor my ship!")
          				goto flw_56
          			  case 1:
/*< 62>*/ 				printf("So my ship wasn't here either, vrrm<pause05>.<pause05>.<pause05>.\n\n\n\nZrrt? Vweeeeet? You found a clue?\n\n\n\n\x0E\x01\x09\x04\x07\x00You know the place? Some kind of\nthing called <r<dowsing>>, vrrm?\nThat's amazing, phoo-weep!\n\n\x0E\x01\x09\x04\x07\x00This time we'll definitely find my ship,\nvoo-whooot!\n\n\n\x0E\x01\x09\x04\x07\x00Ready to set sail, vweep?\n[1]To sea![2-]Not yet.")
/*< 55>*/ 				story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */] = true;
          				goto flw_57
          			}
          		}
          	  case 1:
/*<193>*/ 		switch (scene_flags[76 /* 0x8 10 */]) {
          		  case 0:
/*<198>*/ 			switch (scene_flags[88 /* 0xA 01 */]) {
          			  case 0:
/*<197>*/ 				printf("<pling>There's something at the bridge inside\nthe mouth, vweep!\n\n\nCould be a clue to my ship, zrrt!\nI'm just going to have a look, brzzt!")
/*<202>*/ 				scene_flags[-1 'Skyloft: Silent Realm'][88 /* 0xA 01 */] = true;
          				flw_194:
/*<194>*/ 				printf("\x0E\x01\x09\x04\x07\x00Or do you want to head back out to sea,\nvrrm?\n[1]To sea.[2-]Never mind.")
          				goto flw_57
          			  case 1:
/*<196>*/ 				printf("\x0E\x03\x01\x00Link, voo-weet! That was\nabsolutely amazing!\n\n\nThe big mouth opened, zrrt!\nHow did you do that, vrrm?!")
/*<205>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 199, 'param3': 54}
/*<199>*/ 				set_camera(12, 0)
/*<195>*/ 				printf("<pling>There's something at the bridge inside\nthe mouth, vweep!\n\n\nCould be a clue to my ship, zrrt!\nI'm just going to have a look, brzzt!")
/*<206>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 200, 'param3': 54}
/*<200>*/ 				set_camera(-1, 0)
          				goto flw_194
          			}
          		  case 1:
/*< 61>*/ 			printf("What are you waiting for, vrrm?\nAfraid of the pirates, zrrt?\nDon't worry\x2014they're all dead, vweep.\nOr do you want to head to sea, phweep?\n[1]To sea.[2-]Never mind.")
          			goto flw_57
          		}
          	}
          }

          void entrypoint_402_15() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf("We've arrived, vweep!")
/*<158>*/ 	set_camera(1, 0)
/*<156>*/ 	printf("My shack is at the very top, vrrm!")
/*<159>*/ 	set_camera(2, 0)
/*<157>*/ 	printf("\x0E\x01\x09\x04\x07\x00The <y<<pling>sea chart >>we need is in my shack,\nzrrt. But you're the one who will have\nto go get it, bzzt!\n\nThere are more monsters about than\nbefore, so be careful, vweep!\n\n\n\x0E\x01\x09\x04\x07\x00I can't wander far from the boat,\nso I'll just stay here, vrrm.")
/*< 40>*/ 	story_flags[278 /* us: 805A9AFB 0x01, jp: 805ACD7B 0x01 */] = true;
/*< 84>*/ 	scene_flags[8 'Lanayru Sand Sea'][45 /* 0x4 20 */] = true;
          }

          void entrypoint_402_16() {
/*< 36>*/ 	start()
/*< 37>*/ 	printf("We've arrived, vrrm!\n\n\n\nThis is the island where we used to\nmake our ships, bzzt. You'll find the\nShipyard here, as well as the town\nwhere the workers lived, vweep!")
/*<160>*/ 	set_camera(4, 0)
/*<165>*/ 	printf("That building is the construction bay,\nvrrm!")
/*<166>*/ 	set_camera(5, 0)
/*<138>*/ 	printf("But the entrance is closed, vrrrm.\nLooks like you can't get in.")
/*<162>*/ 	set_camera(6, 0)
/*<139>*/ 	printf("\x0E\x01\x09\x04\x07\x00Each location on the island is linked\nto the others via a mine-cart track,\nvrrm!")
/*<164>*/ 	printf("\x0E\x01\x09\x04\x07\x00You might be able to get to the back\ndoor of the construction bay if you can\nget around to the other side of it using\na mine cart, brrzrrt.")
/*<203>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 161, 'param3': 54}
/*<161>*/ 	set_camera(7, 0)
/*<140>*/ 	printf("There's a mine-cart station over there,\nzrrt!")
/*<204>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 163, 'param3': 54}
/*<163>*/ 	set_camera(6, 0)
/*<141>*/ 	printf("\x0E\x01\x09\x04\x07\x00You should head to the station first.\nI'll wait here, phoo-weep!")
/*< 52>*/ 	story_flags[279 /* us: 805A9AFB 0x02, jp: 805ACD7B 0x02 */] = true;
/*< 86>*/ 	scene_flags[8 'Lanayru Sand Sea'][46 /* 0x4 40 */] = true;
          }

          void entrypoint_402_50() {
/*<115>*/ 	start()
/*<120>*/ 	printf("To Shipyard Center")
          }

