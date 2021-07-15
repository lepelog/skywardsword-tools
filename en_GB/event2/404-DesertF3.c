          void entrypoint_404_03() {
/*<  3>*/ 	start()
/*< 43>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*< 44>*/ 		printf("I love the view from here, vweep.")
          	  case 1:
/*< 50>*/ 		check_item_flag(198, 1)
/*< 51>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 24}) {
          		  case 0:
/*< 52>*/ 			printf("Brrm-ZORT! Is that what I think it is?!<pause1E>\nQuick, take it to <b<Master Thunder\nDragon>>, vweep-vweep!")
          		  case 1:
/*< 30>*/ 			check_item_flag(497, 1)
/*< 31>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 10}) {
          			  case 0:
/*<111>*/ 				switch (scene_flags[23 /* 0x3 80 */]) {
          				  case 0:
/*<113>*/ 					printf("\x0E\x01\x09\x04\x03\xC00I don't think there's any way that\nseedling would ever mature if you\nplanted it in the <b<Lanayru area>>, vrrm...\n\n\x0E\x01\x09\x04\x00\x900We need your help, brrzrrt! \x0E\x01\x09\x04\x03\x900Master\nThunder Dragon needs the <r<fruit from\nthe Tree of Life >>to regain his strength!")
          				  case 1:
/*< 70>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 32, 'param3': 31}
/*< 32>*/ 					printf("\x0E\x01\x09\x04\x03\x900What are you doing with that seedling,\nvrrm?!<pause1E> <b<Master Thunder Dragon>> needs\n<r<fruit from the Tree of Life>> to recover!\n\n\x0E\x01\x09\x04\x03\x900Unless you mean to help our master,\nbzzzzt?\n[1]Of course.[2]Not really.")
/*<131>*/ 					switch (choice(2)) {
          					  case 0:
/*<132>*/ 						printf("\x0E\x01\x09\x04\x03\x900Really, vrrm?! Thank you, zrrt!\nMake sure you plant the seedling\nsomewhere it will be sure to thrive,\nphoo-weep.\n\x0E\x01\x09\x04\x03\x900I fear growing the seedling to maturity\nin <r<Lanayru province is impossible>>,<pling>\nbrrzrrt. We're counting on you, vweep!")
          						flw_72:
/*< 72>*/ 						scene_flags[9 'Lanayru Gorge'][11 /* 0x0 08 */] = true;
/*<112>*/ 						scene_flags[9 'Lanayru Gorge'][23 /* 0x3 80 */] = true;
          					  case 1:
/*<133>*/ 						printf("\x0E\x01\x09\x04\x03\x900Well, since you uprooted it, it's your\nresponsibility now, vrrm! Make sure\nyou plant that seedling where it can\ngrow to maturity, phoo-weep.\n\x0E\x01\x09\x04\x03\x900And that means taking it somewhere\n<r<outside of the Lanayru area>>, bzzt!<pling>\nWe're all counting on you, vweep!")
          						goto flw_72
          					}
          				}
          			  case 1:
/*<  4>*/ 				printf("\x0E\x01\x09\x04\x03\xC00<b<Master Thunder Dragon>>'s condition has\nbeen bad for a long time,<pause0F> and the soil\nhere is not suitable for growing trees,\nzrrt.<pause1E> \x0E\x01\x09\x04\x01\xC00If only we had more time, vrrm...")
          			}
          		}
          	}
          }

          void entrypoint_404_55() {
/*<106>*/ 	start()
/*<108>*/ 	switch (scene_flags[107 /* 0xC 08 */]) {
          	  case 0:
/*<123>*/ 		switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          		  case 0:
/*<124>*/ 			printf("\x0E\x01\x09\x04\x2F08\xD09You have certainly proved your passion\nfor digging, my friend! If you find\nout anything about the legend of the\nthree dragons, be sure to let me know.")
          			flw_99:
/*< 99>*/ 			scene_flags[9 'Lanayru Gorge'][107 /* 0xC 08 */] = true;
/*<110>*/ 			scene_flags[9 'Lanayru Gorge'][108 /* 0xC 10 */] = true;
          		  case 1:
/*<109>*/ 			printf("\x0E\x01\x09\x04\x2F00\x06Is there anything else I can help you\nwith? If you find out anything about\nthe legend of the three dragons,\nbe sure to let me know!")
          			goto flw_99
          		}
          	  case 1:
/*<107>*/ 		printf("\x0E\x01\x09\x04\x2F00\xD0AI almost never get visitors!<pause1E> My name is\n<b<Golo>>, and I am researching the <r<legend\nof the three dragons>>, one of which is\nsaid to live here!\n\x0E\x01\x09\x04\x2F00\x07At first glance, it would seem that\nthere is nothing in this area, but I know\nthere is something here. I will just keep\non looking!\nSo your name is Link?\nI see... Not the easiest name to\nsay, is it?\n\n\x0E\x01\x09\x04\x2F01\xD00And how about you, Link?\nWhy are you here.<pause0F>.<pause0F>.<pause0F>?\n\n\n\x0E\x01\x09\x04\x2F00\x07You are looking for a <b<sacred flame>>?\nThat sounds like something I have\nheard of before,<pause19> but maybe not...\n\n\x0E\x01\x09\x04\x2F0F\x709Sweet goro,<pause19> \x0E\x01\x09\x04\x2F00\xD00I remember now! I read\nsomething about it in ancient\nscrolls that spoke of the <b<Lanayru\nSand Sea>>.\n\x0E\x01\x09\x04\x2F08\xD00I do not remember all the details, but\nyou can get to Lanayru Sand Sea if you\njust go straight through here.")
/*<125>*/ 		set_camera(2, 0)
/*<126>*/ 		set_camera(-1, 0)
/*<128>*/ 		printf("\x0E\x01\x09\x04\x2F08\xD00If you want to get to the Lanayru Sand\nSea, you are going to need this key!")
/*<127>*/ 		give_item(1 0x01);
/*<129>*/ 		printf("\x0E\x01\x09\x04\x2F08\xD09Good luck to you!")
          		goto flw_99
          	}
          }

          void entrypoint_404_04() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf("...")
          }

          void entrypoint_404_56() {
/*<143>*/ 	start()
/*<155>*/ 	switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          	  case 0:
/*<156>*/ 		printf("\x0E\x01\x09\x04\x2F08\x709You made it to the dragon's home,\nLink?<pause54>\n\n\n\x0E\x01\x09\x04\x2F01\x805\x0E\x01\x08\x02\x2CDI am so jealous!<pause5A>\n\n\n\n\x0E\x01\x09\x04\x2F0F\x706\x0E\x01\x08\x02\x2CDYou beat me to the punch!")
          		flw_154:
/*<154>*/ 		scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
          	  case 1:
/*<147>*/ 		switch (scene_flags[35 /* 0x5 08 */]) {
          		  case 0:
/*<149>*/ 			printf("\x0E\x01\x09\x04\x2F08\xD0AI was able to dig a tunnel to the place\nwhere the <r<Thunder Dragon>> lives, but...<pause2D>\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x09\x04\x2F0D\x800It is too narrow for me to go through.\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x09\x04\x2F08\x700What am I going to do?")
          			goto flw_154
          		  case 1:
/*<150>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 31}
/*<144>*/ 			switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          			  case 0:
/*<158>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD02Nice to see you, Link.\n\n\n\nSay, you ever find that <b<sacred flame>>\nyou were looking for? Really?\nYou did?! Great! I was pretty curious\nabout it, so spill all the details!\n\x0E\x01\x09\x04\x2F08\x407.<pause14>.<pause14>.<pause14>I see. So after all that adventuring,\nyou finally found it! \n\n\n\x0E\x03\x01\x00Link, I have to say... \nYou are pretty amazing!")
/*<170>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD0AYou are not the only one! I found \nout some more about the legend of the\nthree dragons. This news is going to\nblow your mind!\n...I have found out that there is indeed\na hidden area beyond here! There is a\n<r<narrow path>> <pling>that I cannot fit through\nwithout losing a few pounds!\n\x0E\x01\x09\x04\x2F00\xD00My theory is that it probably links to\nthe home of the <r<Thunder Dragon>>, one\nof the three dragons in the legend.\n\n\x0E\x01\x09\x04\x2F00\x800And I am convinced that these robots\nmust have something to do with it as\nwell.<pause0F>\n\n\x0E\x01\x09\x04\x2F01\x807\x0E\x01\x06\x02\xFFCDThe <r<Thunder Dragon>>, a bunch of\nrobots, and Timeshift Stones<pause14>.<pause14>.<pause14>.\n\n\n\x0E\x01\x09\x04\x2F08\x708\x0E\x01\x08\x02\x2CDWhat a story!")
/*<146>*/ 				printf("\x0E\x01\x09\x04\x08\xD00Oh, I almost forgot, Link!\nDo you remember that excavation\nproject you invested in?<pause14>\n\nWell, we hit the jackpot! I found a\nlarge cache of Timeshift Stones.\n\x0E\x01\x09\x04\x2F00\xD01I can pay you back tenfold now!")
/*<145>*/ 				rupees += 100;
          				flw_148:
/*<148>*/ 				scene_flags[9 'Lanayru Gorge'][35 /* 0x5 08 */] = true;
          				goto flw_154
          			  case 1:
/*<157>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD02Nice to see you, Link.\n\n\n\nSay, you ever find that <b<sacred flame>>\nyou were looking for? Really?\nYou did?! Great! I was pretty curious\nabout it, so spill all the details!\n\x0E\x01\x09\x04\x2F08\x407.<pause14>.<pause14>.<pause14>I see. So after all that adventuring,\nyou finally found it! \n\n\n\x0E\x03\x01\x00Link, I have to say... \nYou are pretty amazing!")
/*<171>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD0AYou are not the only one! I found \nout some more about the legend of the\nthree dragons. This news is going to\nblow your mind!\n...I have found out that there is indeed\na hidden area beyond here! There is a\n<r<narrow path>> <pling>that I cannot fit through\nwithout losing a few pounds!\n\x0E\x01\x09\x04\x2F00\xD00My theory is that it probably links to\nthe home of the <r<Thunder Dragon>>, one\nof the three dragons in the legend.\n\n\x0E\x01\x09\x04\x2F00\x800And I am convinced that these robots\nmust have something to do with it as\nwell.<pause0F>\n\n\x0E\x01\x09\x04\x2F01\x807\x0E\x01\x06\x02\xFFCDThe <r<Thunder Dragon>>, a bunch of\nrobots, and Timeshift Stones<pause14>.<pause14>.<pause14>.\n\n\n\x0E\x01\x09\x04\x2F08\x708\x0E\x01\x08\x02\x2CDWhat a story!")
          				goto flw_148
          			}
          		}
          	}
          }

          void entrypoint_404_05() {
/*<  7>*/ 	start()
/*< 45>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*<135>*/ 		switch (temp_flags[63 /* 0x6 80 */]) {
          		  case 0:
/*< 46>*/ 			printf("Master Thunder Dragon has regained\nhis strength, and it is all thanks to your\nhelp, brrzrrt! We thank you, vweep!")
          		  case 1:
/*<136>*/ 			printf("Did you come to visit Master Thunder\nDragon, phoo-weep?")
          		}
          	  case 1:
/*< 53>*/ 		check_item_flag(198, 1)
/*< 54>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 26}) {
          		  case 0:
/*< 55>*/ 			printf("Once he eats the <r<fruit from the Tree\nof Life>>, Master Thunder Dragon will\nregain his strength, vrrm!")
          		  case 1:
/*< 35>*/ 			check_item_flag(497, 1)
/*< 36>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 14}) {
          			  case 0:
/*< 38>*/ 				printf("\x0E\x01\x09\x04\x03\xC00This area is only good for growing\ngrass and flowers, zrrt.<pause1E> \x0E\x01\x09\x04\x01\xC00If we can't find\na way to grow the seedling quickly...\n\x0E\x01\x06\x02\xFECDOur master will not make it, bzzt...")
          			  case 1:
/*< 33>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*<168>*/ 					switch (scene_flags[23 /* 0x3 80 */]) {
          					  case 0:
/*<169>*/ 						printf("\x0E\x01\x09\x04\x00\x00Master Thunder Dragon's present\ncondition concerns me greatly, vwerp.\nFind him <r<fruit from the Tree of Life>> or\nhis systems may fail...")
          					  case 1:
/*< 37>*/ 						printf("\x0E\x01\x09\x04\x03\x900We wanted Master Thunder Dragon to\nget well, so we planted a <r<seedling from\nthe Tree of Life>>, which bears a fruit\nthat is said to cure any illness, vrrm.")
          					}
          				  case 1:
/*<  8>*/ 					printf("\x0E\x01\x09\x04\x03\xC00Situation critical, vrrrrm! <b<Master\nThunder Dragon >>is very sick, bzzt.<pause0F>\n\n\n\x0E\x01\x09\x04\x03\xC00And we can't do anything with this\nTimeshift Stone without Master\nThunder Dragon's permission, vrrm.<pause1E>\n\n\x0E\x01\x09\x04\x01\xC00But I guess we have bigger things to\nworry about than a Timeshift Stone,\nbrrzrrt...")
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_57() {
/*<151>*/ 	start()
/*<152>*/ 	printf("\x0E\x01\x09\x04\x2F0C\xD01\x0E\x01\x06\x02\xFFCD\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x2F00\x01Hey, over there! Is that you,\nLink?\n\n\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x08\x02\x1CDNice timing!<pause0F> I have been \nmeaning to look for you!<pause0F>\n\n\n\x0E\x01\x06\x02\x2CD\x0E\x01\x08\x02\x1CDCome over here for a minute!")
/*<153>*/ 	scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
/*<159>*/ 	story_flags[829 /* us: 805A9B33 0x20, jp: 805ACDB3 0x20 */] = true;
/*<160>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<161>*/ 	story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<162>*/ 	story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          }

          void entrypoint_404_06() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("...")
          }

          void entrypoint_404_58() {
/*<163>*/ 	start()
/*<164>*/ 	printf("\x0E\x01\x09\x04\x2F08\x709Hey there, Link! \nI wanted to tell you that I found a hole\nthat leads farther in!\n\nBut this rock is really strong. It looks\nlike it will be a while before I can get\nall the way through it.")
          }

          void entrypoint_404_07() {
/*< 11>*/ 	start()
/*< 24>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 25>*/ 		printf("You should hurry up before you get left\nbehind, vrrm!")
          	  case 1:
/*< 71>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 31}
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x03\x900There are lots of big Timeshift Stones\nhere, zrrt.<pause1E> \x0E\x01\x09\x04\x00\x900Did you get permission from\n<b<Master Thunder Dragon >>to come here\nlike we did, vrrm?\n\x0E\x01\x09\x04\x01\x900We were just about to transport this\nTimeshift Stone to Master Thunder\nDragon, vweep.")
/*< 18>*/ 		temp_flags[0 /* 0x1 01 */] = true;
/*< 87>*/ 		set_camera(1, 0)
/*< 86>*/ 		printf("\x0E\x01\x05\x04(\x00There are many monsters, vrrm.<pause0F>\n\x0E\x01\x09\x04\x03\xC00Practice extreme caution, bzrt!")
          	}
          }

          void entrypoint_404_08() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("...")
          }

          void entrypoint_404_09() {
/*< 15>*/ 	start()
/*< 47>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*<134>*/ 		switch (temp_flags[63 /* 0x6 80 */]) {
          		  case 0:
/*< 48>*/ 			printf("Master Thunder Dragon is in very high\nspirits, vweep!")
          		  case 1:
/*<137>*/ 			printf("Master Thunder Dragon is strong\nagain, vrrm!")
          		}
          	  case 1:
/*< 56>*/ 		check_item_flag(198, 1)
/*< 57>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 28}) {
          		  case 0:
/*< 58>*/ 			printf("Kerr-CHUNK! Where did you get that\nfruit?!<pause2D> Did you bring it for <b<Master\nThunder Dragon>>, voo-weep?!")
          		  case 1:
/*< 27>*/ 			check_item_flag(197, 1)
/*< 28>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          			  case 0:
/*< 39>*/ 				printf("\x0E\x01\x09\x04\x03\xC00The <b<Lanayru area>> is terrible for\ngrowing trees, zrrt.<pause1E> \x0E\x01\x09\x04\x03\x900Do you know\nof a place where trees grow quickly,\nvweep?")
          			  case 1:
/*< 26>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*< 29>*/ 					printf("On the other side of the bridge, we\nplanted a <r<seedling from the Tree of\nLife>>, which is said to bear fruit that\ncan cure any illness, vrrm.<pause1E>\n\x0E\x01\x09\x04\x00\xC00But trees don't grow so well around\nhere, vweep...")
          				  case 1:
/*< 16>*/ 					printf("\x0E\x01\x09\x04\x03\x900We got permission from our master,\nthe Thunder Dragon, to dig for\n<b<Timeshift Stones>>, vweep.\n\n<pause1E>\x0E\x01\x09\x04\x03\xC00But <b<Master Thunder Dragon >>is very ill\nright now, brrzrrt.<pause0F> I'm worried about\nhim, vrrm.<pause1E> \x0E\x01\x09\x04\x01\xC00At this rate, our master may\ncease functioning, vweep...")
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_10() {
/*< 94>*/ 	start()
/*<116>*/ 	switch (scene_flags[14 /* 0x0 40 */]) {
          	  case 0:
/*<118>*/ 		printf("<pause14>.<pause14>.<pause14>.")
          	  case 1:
/*<115>*/ 		switch (scene_flags[9 /* 0x0 02 */]) {
          		  case 0:
/*<119>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
/*<121>*/ 				printf("<pause14>.<pause14>.<pause14>.")
          			  case 1:
/*<117>*/ 				printf("<pause14>.<pause14>.<pause14>.")
/*<120>*/ 				scene_flags[9 'Lanayru Gorge'][26 /* 0x2 04 */] = true;
          			}
          		  case 1:
/*< 96>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 97>*/ 				printf("<pause14>.<pause14>.<pause14>.")
          			  case 1:
/*<114>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 95, 'param3': 31}
/*< 95>*/ 				printf("<pause14>.<pause14>.<pause14>.")
/*<100>*/ 				scene_flags[9 'Lanayru Gorge'][18 /* 0x3 04 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_404_11() {
/*<138>*/ 	start()
/*<140>*/ 	printf("\x0E\x01\x09\x04\x0B\x901\x0E\x03\x01\x00Link! I owe you my life!\nYou have to let me repay you.\n\n\n\x0E\x01\x09\x04\x00\x900Give me some time to prepare, and\nwhen you next return to visit me...\nI believe you will be mightily pleased!")
/*<139>*/ 	scene_flags[9 'Lanayru Gorge'][29 /* 0x2 20 */] = true;
          }

          void entrypoint_404_30() {
/*< 19>*/ 	start()
/*< 20>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*< 21>*/ 		switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          		  case 0:
/*< 22>*/ 			story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */] = true;
          			flw_79:
/*< 79>*/ 			story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */] = true;
/*< 23>*/ 			temp_flags[63 /* 0x6 80 */] = true;
/*<122>*/ 			entrypoint_006_04();
          		  case 1:
          			goto flw_79
          		}
          	  case 1:
          		goto flw_79
          	}
          }

          void entrypoint_404_31() {
/*< 80>*/ 	start()
/*< 91>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*< 81>*/ 	printf("\x0E\x01\x05\x04K\x00This is <b<Lanayru Gorge>>. Legend tells of\na dragon loyal to the goddess living\nin this area.")
          }

          void entrypoint_404_32() {
/*< 82>*/ 	start()
/*< 83>*/ 	printf("\x0E\x01\x05\x04Z\x00Signs indicate that an ancient\ncivilization established a quarry\nhere to mine the deposit of\nhigh-quality Timeshift Stones.")
          }

          void entrypoint_404_50() {
/*< 17>*/ 	start()
/*< 68>*/ 	switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          	  case 0:
/*< 69>*/ 		printf("\x0E\x01\x09\x04\x2F08\xD09You have certainly proved your passion\nfor digging, my good friend! I will \nmake sure these funds are put to good\nuse, and I appreciate your patience.")
          	  case 1:
/*< 61>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 62, 'param3': 12}
/*< 62>*/ 		printf("\x0E\x01\x09\x04\x2F00\xD09So...you would not happen to be\ninterested in excavating, would you?<pause3C>\nYou are?! Well then, you are going to\nlove this!<pause3C>\n\x0E\x01\x09\x04\x2F00\xD07The thing is, these research digs can\nget really expensive...<pause1E> But they can\nalso be lucrative! Any interest in\ninvesting 10 Rupees in my dig?\n[1]Sure![2-]No chance.")
/*< 59>*/ 		switch (choice(2)) {
          		  case 0:
/*< 63>*/ 			switch (has_rupees(10)) {
          			  case 0:
/*< 64>*/ 				rupees += -10;
/*< 66>*/ 				printf("\x0E\x01\x09\x04\x2F02\x208Thanks! I will put these funds to good\nuse!")
/*< 67>*/ 				story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */] = true;
          				flw_98:
/*< 98>*/ 				scene_flags[9 'Lanayru Gorge'][106 /* 0xC 04 */] = true;
          			  case 1:
/*< 65>*/ 				printf("Little goro, it seems you do not have \nenough Rupees. Well, you could always \ncome back later to make a small \ninvestment. My research needs you!")
          				goto flw_98
          			}
          		  case 1:
/*< 60>*/ 			printf("\x0E\x01\x09\x04\x2F01\x805\x0E\x01\x06\x02\xFFCDThat is too bad...<pause1E> I guess no one\nunderstands the importance of\nfunding research digs these days...")
          			goto flw_98
          		}
          	}
          }

          void entrypoint_404_33() {
/*< 84>*/ 	start()
/*< 85>*/ 	printf("\x0E\x01\x05\x04Z\x00Consequently, the terrain is intricately\nsubdivided with the remnants of long-\nabandoned mining equipment, such as\nmine carts and their tracks.")
          }

          void entrypoint_404_51() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf("Ahead is Lanayru Sand Sea,\nan area covered in an ocean of\nsand! There are lots of ancient\nruins there.")
          }

          void entrypoint_404_34() {
/*<166>*/ 	start()
/*<167>*/ 	printf("Some Bokoblins carry a Monster Horn\non their waist.\n\n\nIf you latch on to it and <rd<pull with your\nwhip>>, it is possible to claim it for\nyourself.")
          }

          void entrypoint_404_52() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf("Ahead is Lanayru Desert.\nAdventures await those\nsolving the mysteries of the\nquarry in the desert!")
          }

          void entrypoint_404_01() {
          	start()
/*< 88>*/ 	check_item_flag(198, 1)
/*< 89>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 36}) {
          	  case 0:
/*<165>*/ 		story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = false;
/*< 90>*/ 		changeScene(18, 0) // 
          	  case 1:
/*< 40>*/ 		check_item_flag(497, 1)
/*< 41>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 16}) {
          		  case 0:
/*<103>*/ 			switch (scene_flags[22 /* 0x3 40 */]) {
          			  case 0:
/*<105>*/ 				printf("What's that, Link?\nYou say you will find a place where\nthe seedling <r<will >><r<grow quickly >>for me?\n\n\x0E\x01\x09\x04\x11\x804That would be a great help... All I\nwould need to do is eat one piece of\n<r<fruit from the Tree of Life>> to recover\nmy full strength.\n\x0E\x01\x09\x04\x08\xA00But that seedling cannot be planted\njust anywhere. Look for a place with\n<r<very rich soil>>.")
          			  case 1:
/*< 42>*/ 				printf("\x0E\x01\x09\x04\x08\xA03Hello there, Link.<pause0F>\nIt looks like you've found a <r<seedling\nfrom the Tree of Life>>, haven't you?\n\nBut it's too late. I'm done for.<pause1E>\nI won't live long enough for the tree to\ngrow large and produce the fruit that\ncould save me.\x0E\x01\x09\x04\x08\x110C Cough...cough...\nIt's such a shame. If I had the strength,\nI could sing you as many songs as you\nwanted.<pause1E> \x0E\x01\x09\x04\x08\x1102Cough...cough...")
/*<104>*/ 				scene_flags[9 'Lanayru Gorge'][22 /* 0x3 40 */] = true;
          			}
          		  case 1:
/*<141>*/ 			switch (story_flags[794 /* us: 805A9B2F 0x04, jp: 805ACDAF 0x04 */]) {
          			  case 0:
/*<142>*/ 				printf("\x0E\x03\x01\x00Link... Please bring me\nthe <b<fruit from the Tree of Life >>as\nsoon as you...can.")
          			  case 1:
/*<101>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*<102>*/ 					printf("The robots were worried about me, so\nthey planted a <r<seedling from the Tree\nof Life>>. The fruit of this tree is said to\nbe able to cure any illness...\nThey planted the seedling over there.<pause14>\nCough...\x0E\x01\x09\x04\x08\x110C<pause1E> \x0E\x01\x09\x04\x00\x00But it just won't grow.<pause1E>\nCough...\x0E\x01\x09\x04\x08\x110C<pause2D> \x0E\x01\x09\x04\x11\x804I think this is the end for me.<pause14>")
          				  case 1:
/*<  1>*/ 					printf("\x0E\x01\x09\x04\x11\x804\x0E\x01\x08\x02\x2CD\x0E\x01\x06\x02\xFFCDCough...cough...<pause1E>\n\n\n\n\x0E\x01\x09\x04\x08\xA03Oh, hello...<pause14> I haven't had a visitor like\nyou here in...quite a while.\n\n\n\x0E\x01\x09\x04\x08\xA00You're a human, aren't you? You must\nhave some reason for coming this far.\nWhat is it?\n\n<pause0F>.<pause0F>.<pause0F>.\n\n\n\n\x0E\x01\x09\x04\x11\x80CI see, I see. So you're Link\nfrom the sky... \x0E\x01\x06\x02\xFFCDCough...<pause0F>\nThat's not much of a name, is it?\n\n\x0E\x01\x09\x04\x08\xA00How about I add a model number to\nyour name like my friends have got?\n<r<LD-Link-16>>.<pause14>.<pause14>.<pause14>?\n\nOh. I can tell you don't like the sound\nof that.<pause0F> That's a shame...\n<pause0F>\x0E\x01\x09\x04\x08\x802Cough...cough...\nSo, what can I do for you?\n\x0E\x01\x09\x04\x08\xA03Ohh...<pause1E> You say you need me to teach\nyou a song? Cough...")
/*<130>*/ 					printf("\x0E\x01\x09\x04\x08\xA00Hold on, now. Didn't you just say you\ncame from the sky, Link?\nSo then you're the hero chosen by the\ngoddess, aren't you?\nI see... Well, that is something...\n\n\n\n\x0E\x01\x09\x04\n\xA00Although I must apologize. You see,\nI can't really help you.\n\n\n\x0E\x01\x09\x04\n\xA00I may have enough strength for a brief\nchat like this, but... Well, as you can\nsee, I am quite ill.<pause1E> \x0E\x01\x09\x04\x00\x0CCough...\n\n\x0E\x01\x09\x04\n\xA00I'm in no shape to sing.\n\n\n\n\x0E\x01\x09\x04\x11\x804And to think it was the goddess herself\nwho entrusted me with this important\nduty... I feel the deepest shame...\nCough...")
/*< 34>*/ 					story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */] = true;
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_53() {
/*< 77>*/ 	start()
/*< 78>*/ 	printf("Ahead is Lanayru Mine. It is\nthere that I will solve the\nmystery of the Timeshift\nStones!")
          }

          void entrypoint_404_02() {
/*<  2>*/ 	start()
/*< 49>*/ 	printf("...")
          }

          void entrypoint_404_54() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf("Entry to the area ahead is\nallowed only by permission of\nthe <b<Thunder Dragon>>, <b<Lanayru>>.")
          }

