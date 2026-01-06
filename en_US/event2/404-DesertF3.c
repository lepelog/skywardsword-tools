          void entrypoint_404_03() {
/*<  3>*/ 	start()
/*< 43>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*< 44>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "I love the view from here, vweep.")
          	  case 1:
/*< 50>*/ 		check_item_flag(198, 1)
/*< 51>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 24}) {
          		  case 0:
/*< 52>*/ 			printf(/* textboxtype: 1, unk: 0, line: 19 */ "Brrm-ZORT! Is that what I think it is?!<pause 30>\nQuick, take it to <color blue<Master Thunder\nDragon>coloroff>, vweep-vweep!")
          		  case 1:
/*< 30>*/ 			check_item_flag(497, 1)
/*< 31>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 10}) {
          			  case 0:
/*<111>*/ 				switch (scene_flags[23 /* 0x3 80 */]) {
          				  case 0:
/*<113>*/ 					printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00030c00>I don't think there's any way that\nseedling would ever mature if you\nplanted it in the <color blue<Lanayru area>coloroff>, vrrm...\n\n<0x10009:0x00000900>We need your help, brrzrrt! <0x10009:0x00030900>Master\nThunder Dragon needs the <color red<fruit from\nthe Tree of Life >coloroff>to regain his strength!")
          				  case 1:
/*< 70>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 32, 'param3': 31}
/*< 32>*/ 					printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00030900>What are you doing with that seedling,\nvrrm?!<pause 30> <color blue<Master Thunder Dragon>coloroff> needs\n<color red<fruit from the Tree of Life>coloroff> to recover!\n\n<0x10009:0x00030900>Unless you mean to help our master,\nbzzzzt?\n[1-]Of course.[2-]Not really.")
/*<131>*/ 					switch (choice(2)) {
          					  case 0:
/*<132>*/ 						printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00030900>Really, vrrm?! Thank you, zrrt!\nMake sure you plant the seedling\nsomewhere it will be sure to thrive,\nphoo-weep.\n<0x10009:0x00030900>I fear growing the seedling to maturity\nin <color red<Lanayru Province is impossible>coloroff>,<sound 4>\nbrrzrrt. We're counting on you, vweep!")
          						flw_72:
/*< 72>*/ 						scene_flags[9 'Lanayru Gorge'][11 /* 0x0 08 */] = true;
/*<112>*/ 						scene_flags[9 'Lanayru Gorge'][23 /* 0x3 80 */] = true;
          					  case 1:
/*<133>*/ 						printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00030900>Well, since you uprooted it, it's your\nresponsibility now, vrrm! Make sure\nyou plant that seedling where it can\ngrow to maturity, phoo-weep.\n<0x10009:0x00030900>And that means taking it somewhere\n<color red<outside of the Lanayru area>coloroff>, bzzt!<sound 4>\nWe're all counting on you, vweep!")
          						goto flw_72
          					}
          				}
          			  case 1:
/*<  4>*/ 				printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00030c00><color blue<Master Thunder Dragon>coloroff>'s condition has\nbeen bad for a long time,<pause 15> and the soil\nhere is not suitable for growing trees,\nzrrt.<pause 30> <0x10009:0x00010c00>If only we had more time, vrrm...")
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
/*<124>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x2f080d09>You have certainly proved your passion\nfor digging, my friend! If you find\nout anything about the legend of the\nthree dragons, be sure to let me know.")
          			flw_99:
/*< 99>*/ 			scene_flags[9 'Lanayru Gorge'][107 /* 0xC 08 */] = true;
/*<110>*/ 			scene_flags[9 'Lanayru Gorge'][108 /* 0xC 10 */] = true;
          		  case 1:
/*<109>*/ 			printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x2f000006>Is there anything else I can help you\nwith? If you find out anything about\nthe legend of the three dragons,\nbe sure to let me know!")
          			goto flw_99
          		}
          	  case 1:
/*<107>*/ 		printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x2f000d0a>I almost never get visitors!<pause 30> My name is\n<color blue<Golo>coloroff>, and I am researching the <color red<legend\nof the three dragons>coloroff>, one of which is\nsaid to live here!\n<0x10009:0x2f000007>At first glance, it would seem that\nthere is nothing in this area, but I know\nthere is something here. I will just keep\non looking!\nSo your name is <heroname>?\nI see... Not the easiest name to\nsay, is it?\n\n<0x10009:0x2f010d00>And how about you, <heroname>?\nWhy are you here.<pause 15>.<pause 15>.<pause 15>?\n\n\n<0x10009:0x2f000007>You are looking for a <color blue<sacred flame>coloroff>?\nThat sounds like something I have\nheard of before,<pause 25> but maybe not...\n\n<0x10009:0x2f0f0709>Sweet goro,<pause 25> <0x10009:0x2f000d00>I remember now! I read\nsomething about it in ancient\nscrolls that spoke of the <color blue<Lanayru\nSand Sea>coloroff>.\n<0x10009:0x2f080d00>I do not remember all the details, but\nyou can get to Lanayru Sand Sea if you\njust go straight through here.")
/*<125>*/ 		set_camera(2, 0)
/*<126>*/ 		set_camera(-1, 0)
/*<128>*/ 		printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x2f080d00>If you want to get to the Lanayru Sand\nSea, you are going to need this key!")
/*<127>*/ 		give_item(1 0x01);
/*<129>*/ 		printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x2f080d09>Good luck to you!")
          		goto flw_99
          	}
          }

          void entrypoint_404_04() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 0, line: 20 */ "...")
          }

          void entrypoint_404_56() {
/*<143>*/ 	start()
/*<155>*/ 	switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          	  case 0:
/*<156>*/ 		printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x2f080709>You made it to the dragon's home,\n<heroname>?<pause 84>\n\n\n<0x10009:0x2f010805><0x10008:0x02cd>I am so jealous!<pause 90>\n\n\n\n<0x10009:0x2f0f0706><0x10008:0x02cd>You beat me to the punch!")
          		flw_154:
/*<154>*/ 		scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
          	  case 1:
/*<147>*/ 		switch (scene_flags[35 /* 0x5 08 */]) {
          		  case 0:
/*<149>*/ 			printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x2f080d0a>I was able to dig a tunnel to the place\nwhere the <color red<Thunder Dragon>coloroff> lives, but...<pause 45>\n<0x10006:0xffcd><0x10009:0x2f0d0800>It is too narrow for me to go through.\n<0x10006:0xffcd><0x10009:0x2f080700>What am I going to do?")
          			goto flw_154
          		  case 1:
/*<150>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 31}
/*<144>*/ 			switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          			  case 0:
/*<158>*/ 				printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x2f080d02>Nice to see you, <heroname>.\n\n\n\nSay, you ever find that <color blue<sacred flame>coloroff>\nyou were looking for? Really?\nYou did?! Great! I was pretty curious\nabout it, so spill all the details!\n<0x10009:0x2f080407>.<pause 20>.<pause 20>.<pause 20>I see. So after all that adventuring,\nyou finally found it! \n\n\n<0x30001:0x><heroname>, I have to say... \nYou are pretty amazing!")
/*<170>*/ 				printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x2f080d0a>You are not the only one! I found \nout some more about the legend of the\nthree dragons. This news is going to\nblow your mind!\n...I have found out that there is indeed\na hidden area beyond here! There is a\n<color red<narrow path>coloroff> <sound 4>that I cannot fit through\nwithout losing a few pounds!\n<0x10009:0x2f000d00>My theory is that it probably links to\nthe home of the <color red<Thunder Dragon>coloroff>, one\nof the three dragons in the legend.\n\n<0x10009:0x2f000800>And I am convinced that these robots\nmust have something to do with it as\nwell.<pause 15>\n\n<0x10009:0x2f010807><0x10006:0xffcd>The <color red<Thunder Dragon>coloroff>, a bunch of\nrobots, and Timeshift Stones<pause 20>.<pause 20>.<pause 20>.\n\n\n<0x10009:0x2f080708><0x10008:0x02cd>What a story!")
/*<146>*/ 				printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00080d00>Oh, I almost forgot, <heroname>!\nDo you remember that excavation\nproject you invested in?<pause 20>\n\nWell, we hit the jackpot! I found a\nlarge cache of Timeshift Stones.\n<0x10009:0x2f000d01>I can pay you back tenfold now!")
/*<145>*/ 				rupees += 100;
          				flw_148:
/*<148>*/ 				scene_flags[9 'Lanayru Gorge'][35 /* 0x5 08 */] = true;
          				goto flw_154
          			  case 1:
/*<157>*/ 				printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x2f080d02>Nice to see you, <heroname>.\n\n\n\nSay, you ever find that <color blue<sacred flame>coloroff>\nyou were looking for? Really?\nYou did?! Great! I was pretty curious\nabout it, so spill all the details!\n<0x10009:0x2f080407>.<pause 20>.<pause 20>.<pause 20>I see. So after all that adventuring,\nyou finally found it! \n\n\n<0x30001:0x><heroname>, I have to say... \nYou are pretty amazing!")
/*<171>*/ 				printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x2f080d0a>You are not the only one! I found \nout some more about the legend of the\nthree dragons. This news is going to\nblow your mind!\n...I have found out that there is indeed\na hidden area beyond here! There is a\n<color red<narrow path>coloroff> <sound 4>that I cannot fit through\nwithout losing a few pounds!\n<0x10009:0x2f000d00>My theory is that it probably links to\nthe home of the <color red<Thunder Dragon>coloroff>, one\nof the three dragons in the legend.\n\n<0x10009:0x2f000800>And I am convinced that these robots\nmust have something to do with it as\nwell.<pause 15>\n\n<0x10009:0x2f010807><0x10006:0xffcd>The <color red<Thunder Dragon>coloroff>, a bunch of\nrobots, and Timeshift Stones<pause 20>.<pause 20>.<pause 20>.\n\n\n<0x10009:0x2f080708><0x10008:0x02cd>What a story!")
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
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "Master Thunder Dragon has regained\nhis strength, and it is all thanks to your\nhelp, brrzrrt! We thank you, vweep!")
          		  case 1:
/*<136>*/ 			printf(/* textboxtype: 1, unk: 0, line: 26 */ "Did you come to visit Master Thunder\nDragon, phoo-weep?")
          		}
          	  case 1:
/*< 53>*/ 		check_item_flag(198, 1)
/*< 54>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 26}) {
          		  case 0:
/*< 55>*/ 			printf(/* textboxtype: 1, unk: 0, line: 25 */ "Once he eats the <color red<fruit from the Tree\nof Life>coloroff>, Master Thunder Dragon will\nregain his strength, vrrm!")
          		  case 1:
/*< 35>*/ 			check_item_flag(497, 1)
/*< 36>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 14}) {
          			  case 0:
/*< 38>*/ 				printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00030c00>This area is only good for growing\ngrass and flowers, zrrt.<pause 30> <0x10009:0x00010c00>If we can't find\na way to grow the seedling quickly...\n<0x10006:0xfecd>Our master will not make it, bzzt...")
          			  case 1:
/*< 33>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*<168>*/ 					switch (scene_flags[23 /* 0x3 80 */]) {
          					  case 0:
/*<169>*/ 						printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000000>Master Thunder Dragon's present\ncondition concerns me greatly, vwerp.\nFind him <color red<fruit from the Tree of Life>coloroff>,\nor his systems may fail...")
          					  case 1:
/*< 37>*/ 						printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00030900>We wanted Master Thunder Dragon to\nget well, so we planted a <color red<seedling from\nthe Tree of Life>coloroff>, which bears a fruit\nthat is said to cure any illness, vrrm.")
          					}
          				  case 1:
/*<  8>*/ 					printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00030c00>Situation critical, vrrrrm! <color blue<Master\nThunder Dragon >coloroff>is very sick, bzzt.<pause 15>\n\n\n<0x10009:0x00030c00>And we can't do anything with this\nTimeshift Stone without Master\nThunder Dragon's permission, vrrm.<pause 30>\n\n<0x10009:0x00010c00>But I guess we have bigger things to\nworry about than a Timeshift Stone,\nbrrzrrt...")
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_57() {
/*<151>*/ 	start()
/*<152>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x2f0c0d01><0x10006:0xffcd><0x10008:0x01cd><0x10009:0x2f000001>Hey, over there! Is that you,\n<heroname>?\n\n\n<0x10006:0xffcd><0x10008:0x01cd>Nice timing!<pause 15> I have been \nmeaning to look for you!<pause 15>\n\n\n<0x10006:0x02cd><0x10008:0x01cd>Come over here for a minute!")
/*<153>*/ 	scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
/*<159>*/ 	story_flags[829 /* us: 805A9B33 0x20, jp: 805ACDB3 0x20 */] = true;
/*<160>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<161>*/ 	story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<162>*/ 	story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          }

          void entrypoint_404_06() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 0, line: 28 */ "...")
          }

          void entrypoint_404_58() {
/*<163>*/ 	start()
/*<164>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x2f080709>Hey there, <heroname>! \nI wanted to tell you that I found a hole\nthat leads farther in!\n\nBut this rock is really strong. It looks\nlike it will be a while before I can get\nall the way through it.")
          }

          void entrypoint_404_07() {
/*< 11>*/ 	start()
/*< 24>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 25>*/ 		printf(/* textboxtype: 1, unk: 0, line: 31 */ "You should hurry up before you get left\nbehind, vrrm!")
          	  case 1:
/*< 71>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 31}
/*< 12>*/ 		printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00030900>There are lots of big Timeshift Stones\nhere, zrrt.<pause 30> <0x10009:0x00000900>Did you get permission from\n<color blue<Master Thunder Dragon >coloroff>to come here\nlike we did, vrrm?\n<0x10009:0x00010900>We were just about to transport this\nTimeshift Stone to Master Thunder\nDragon, vweep.")
/*< 18>*/ 		temp_flags[0 /* 0x1 01 */] = true;
/*< 87>*/ 		set_camera(1, 0)
/*< 86>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10005:0x00280000>There are many monsters, vrrm.<pause 15>\n<0x10009:0x00030c00>Practice extreme caution, bzrt!")
          	}
          }

          void entrypoint_404_08() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "...")
          }

          void entrypoint_404_09() {
/*< 15>*/ 	start()
/*< 47>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*<134>*/ 		switch (temp_flags[63 /* 0x6 80 */]) {
          		  case 0:
/*< 48>*/ 			printf(/* textboxtype: 1, unk: 0, line: 37 */ "Master Thunder Dragon is in very high\nspirits, vweep!")
          		  case 1:
/*<137>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "Master Thunder Dragon is strong\nagain, vrrm!")
          		}
          	  case 1:
/*< 56>*/ 		check_item_flag(198, 1)
/*< 57>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 28}) {
          		  case 0:
/*< 58>*/ 			printf(/* textboxtype: 1, unk: 0, line: 38 */ "Kerr-CHUNK! Where did you get that\nfruit?!<pause 45> Did you bring it for <color blue<Master\nThunder Dragon>coloroff>, voo-weep?!")
          		  case 1:
/*< 27>*/ 			check_item_flag(197, 1)
/*< 28>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          			  case 0:
/*< 39>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00030c00>The <color blue<Lanayru area>coloroff> is terrible for\ngrowing trees, zrrt.<pause 30> <0x10009:0x00030900>Do you know\nof a place where trees grow quickly,\nvweep?")
          			  case 1:
/*< 26>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*< 29>*/ 					printf(/* textboxtype: 1, unk: 0, line: 35 */ "On the other side of the bridge, we\nplanted a <color red<seedling from the Tree of\nLife>coloroff>, which is said to bear fruit that\ncan cure any illness, vrrm.<pause 30>\n<0x10009:0x00000c00>But trees don't grow so well around\nhere, vweep...")
          				  case 1:
/*< 16>*/ 					printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x00030900>We got permission from our master,\nthe Thunder Dragon, to dig for\n<color blue<Timeshift Stones>coloroff>, vweep.\n\n<pause 30><0x10009:0x00030c00>But <color blue<Master Thunder Dragon >coloroff>is very ill\nright now, brrzrrt.<pause 15> I'm worried about\nhim, vrrm.<pause 30> <0x10009:0x00010c00>At this rate, our master \nmay cease functioning, vweep...")
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_10() {
/*< 94>*/ 	start()
/*<116>*/ 	switch (scene_flags[14 /* 0x0 40 */]) {
          	  case 0:
/*<118>*/ 		printf(/* textboxtype: 1, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
          	  case 1:
/*<115>*/ 		switch (scene_flags[9 /* 0x0 02 */]) {
          		  case 0:
/*<119>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
/*<121>*/ 				printf(/* textboxtype: 1, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
          			  case 1:
/*<117>*/ 				printf(/* textboxtype: 1, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
/*<120>*/ 				scene_flags[9 'Lanayru Gorge'][26 /* 0x2 04 */] = true;
          			}
          		  case 1:
/*< 96>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 97>*/ 				printf(/* textboxtype: 1, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
          			  case 1:
/*<114>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 95, 'param3': 31}
/*< 95>*/ 				printf(/* textboxtype: 1, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
/*<100>*/ 				scene_flags[9 'Lanayru Gorge'][18 /* 0x3 04 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_404_11() {
/*<138>*/ 	start()
/*<140>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x000b0901><0x30001:0x><heroname>! I owe you my life!\nYou have to let me repay you.\n\n\n<0x10009:0x00000900>Give me some time to prepare, and\nwhen you next return to visit me...\nI believe you will be mightily pleased!")
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
/*< 81>*/ 	printf(/* textboxtype: 2, unk: 0, line: 61 */ "<0x10005:0x004b0000>This is <color blue<Lanayru Gorge>coloroff>. Legend tells of\na dragon loyal to the goddess living\nin this area.")
          }

          void entrypoint_404_32() {
/*< 82>*/ 	start()
/*< 83>*/ 	printf(/* textboxtype: 2, unk: 0, line: 62 */ "<0x10005:0x005a0000>Signs indicate that an ancient\ncivilization established a quarry\nhere to mine the deposit of\nhigh-quality Timeshift Stones.")
          }

          void entrypoint_404_50() {
/*< 17>*/ 	start()
/*< 68>*/ 	switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          	  case 0:
/*< 69>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x2f080d09>You have certainly proved your passion\nfor digging, my good friend! I will \nmake sure these funds are put to good\nuse, and I appreciate your patience.")
          	  case 1:
/*< 61>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 62, 'param3': 12}
/*< 62>*/ 		printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x2f000d09>So...you would not happen to be\ninterested in excavating, would you?<pause 60>\nYou are?! Well then, you are going to\nlove this!<pause 60>\n<0x10009:0x2f000d07>The thing is, these research digs can\nget really expensive...<pause 30> But they can\nalso be lucrative! Any interest in\ninvesting 10 Rupees in my dig?\n[1-]Sure![2]No chance.")
/*< 59>*/ 		switch (choice(2)) {
          		  case 0:
/*< 63>*/ 			switch (has_rupees(10)) {
          			  case 0:
/*< 64>*/ 				rupees += -10;
/*< 66>*/ 				printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x2f020208>Thanks! I will put these funds to good\nuse!")
/*< 67>*/ 				story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */] = true;
          				flw_98:
/*< 98>*/ 				scene_flags[9 'Lanayru Gorge'][106 /* 0xC 04 */] = true;
          			  case 1:
/*< 65>*/ 				printf(/* textboxtype: 1, unk: 0, line: 43 */ "Little goro, it seems you do not have \nenough Rupees. Well, you could always \ncome back later to make a small \ninvestment. My research needs you!")
          				goto flw_98
          			}
          		  case 1:
/*< 60>*/ 			printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x2f010805><0x10006:0xffcd>That is too bad...<pause 30> I guess no one\nunderstands the importance of\nfunding research digs these days...")
          			goto flw_98
          		}
          	}
          }

          void entrypoint_404_33() {
/*< 84>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 2, unk: 0, line: 63 */ "<0x10005:0x005a0000>Consequently, the terrain is intricately\nsubdivided with the remnants of long-\nabandoned mining equipment, such as\nmine carts and their tracks.")
          }

          void entrypoint_404_51() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf(/* textboxtype: 8, unk: 0, line: 65 */ "Ahead is Lanayru Sand Sea,\nan area covered in an ocean of\nsand! There are lots of ancient\nruins there.")
          }

          void entrypoint_404_34() {
/*<166>*/ 	start()
/*<167>*/ 	printf(/* textboxtype: 2, unk: 0, line: 64 */ "Some Bokoblins carry a Monster Horn\non their waist.\n\n\nIf you latch on to it and <color also red<pull with your\nwhip>coloroff>, it is possible to claim it for\nyourself.")
          }

          void entrypoint_404_52() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf(/* textboxtype: 8, unk: 0, line: 66 */ "Ahead is Lanayru Desert.\nAdventures await those\nsolving the mysteries of the\nquarry in the desert!")
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
/*<105>*/ 				printf(/* textboxtype: 1, unk: 0, line: 8 */ "What's that, <heroname>?\nYou say you will find a place where\nthe seedling <color red<will >coloroff><color red<grow quickly >coloroff>for me?\n\n<0x10009:0x00110804>That would be a great help... All I\nwould need to do is eat one piece of\n<color red<fruit from the Tree of Life>coloroff> to recover\nmy full strength.\n<0x10009:0x00080a00>But that seedling cannot be planted\njust anywhere. Look for a place with\n<color red<very rich soil>coloroff>.")
          			  case 1:
/*< 42>*/ 				printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00080a03>Hello there, <heroname>.<pause 15>\nIt looks like you've found a <color red<seedling\nfrom the Tree of Life>coloroff>, haven't you?\n\nBut it's too late. I'm done for.<pause 30>\nI won't live long enough for the tree to\ngrow large and produce the fruit that\ncould save me.<0x10009:0x0008110c> Cough...cough...\nIt's such a shame. If I had the strength,\nI could sing you as many songs as you\nwanted.<pause 30> <0x10009:0x00081102>Cough...cough...")
/*<104>*/ 				scene_flags[9 'Lanayru Gorge'][22 /* 0x3 40 */] = true;
          			}
          		  case 1:
/*<141>*/ 			switch (story_flags[794 /* us: 805A9B2F 0x04, jp: 805ACDAF 0x04 */]) {
          			  case 0:
/*<142>*/ 				printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x30001:0x><heroname>... Please bring me\nthe <color blue<fruit from the Tree of Life >coloroff>as soon\nas you...can.")
          			  case 1:
/*<101>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*<102>*/ 					printf(/* textboxtype: 1, unk: 0, line: 7 */ "The robots were worried about me, so\nthey planted a <color red<seedling from the Tree\nof Life>coloroff>. The fruit of this tree is said to\nbe able to cure any illness...\nThey planted the seedling over there.<pause 20>\nCough...<0x10009:0x0008110c><pause 30> <0x10009:0x00000000>But it just won't grow.<pause 30>\nCough...<0x10009:0x0008110c><pause 45> <0x10009:0x00110804>I think this is the end for me.<pause 20>")
          				  case 1:
/*<  1>*/ 					printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00110804><0x10008:0x02cd><0x10006:0xffcd>Cough...cough...<pause 30>\n\n\n\n<0x10009:0x00080a03>Oh, hello...<pause 20> I haven't had a visitor like\nyou here in...quite a while.\n\n\n<0x10009:0x00080a00>You're a human, aren't you? You must\nhave some reason for coming this far.\nWhat is it?\n\n<pause 15>.<pause 15>.<pause 15>.\n\n\n\n<0x10009:0x0011080c>I see. So you're <heroname>\nfrom the sky... <0x10006:0xffcd>Cough...<pause 15>\nThat's not much of a name, is it?\n\n<0x10009:0x00080a00>How about I add a model number to\nyour name like my friends have got?\nMaybe <color red<LD-<heroname>-16>coloroff>.<pause 20>.<pause 20>.<pause 20>?\n\nOh. I can tell you don't like the sound\nof that.<pause 15> That's a shame...\n<pause 15><0x10009:0x00080802>Cough...cough...\nSo, what can I do for you?\n<0x10009:0x00080a03>Ohh...<pause 30> You say you need me to teach\nyou a song? Cough...")
/*<130>*/ 					printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00080a00>Hold on, now. Didn't you just say you\ncame from the sky, <heroname>?\nSo then you're the hero chosen by the\ngoddess, aren't you?\nI see... Well, that is something...\n\n\n\n<0x10009:0x000a0a00>Although I must apologize. You see,\nI can't really help you.\n\n\n<0x10009:0x000a0a00>I may have enough strength for a brief\nchat like this, but... Well, as you can\nsee, I am quite ill.<pause 30> <0x10009:0x0000000c>Cough...\n\n<0x10009:0x000a0a00>I'm in no shape to sing.\n\n\n\n<0x10009:0x00110804>And to think it was the goddess herself\nwho entrusted me with this important\nduty... I feel the deepest shame...\nCough...")
/*< 34>*/ 					story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */] = true;
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_53() {
/*< 77>*/ 	start()
/*< 78>*/ 	printf(/* textboxtype: 8, unk: 0, line: 67 */ "Ahead is Lanayru Mine. It is\nthere that I will solve the\nmystery of the Timeshift\nStones!")
          }

          void entrypoint_404_02() {
/*<  2>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 1, unk: 0, line: 12 */ "...")
          }

          void entrypoint_404_54() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf(/* textboxtype: 7, unk: 0, line: 68 */ "Entry to the area ahead is\nallowed only by permission of\nthe <color blue<Thunder Dragon>coloroff>, <color blue<Lanayru>coloroff>.")
          }

