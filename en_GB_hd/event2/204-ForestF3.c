          void entrypoint_204_25() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 59>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "Hurry back! The <color blue<Water Dragon >coloroff>is\nwaiting!")
          	  case 1:
/*< 60>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 83>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_116:
/*<116>*/ 				switch (story_flags[78 /* us: 805A9AE8 0x80, jp: 805ACD68 0x80 */]) {
          				  case 0:
          					flw_119:
/*<119>*/ 					printf(/* textboxtype: 0, unk: 0, line: 35 */ "If you make those spiky things <color red<explode>coloroff>,\nyou're in for a world of hurt. They're\nlike bombs!")
          				  case 1:
/*<117>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 118, 'param3': 31}
/*<118>*/ 					story_flags[78 /* us: 805A9AE8 0x80, jp: 805ACD68 0x80 */] = true;
          					goto flw_119
          				}
          			  case 1:
/*< 82>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "The Kikwi elder has been looking for\nyou. Why don't you go and hear what he\nhas to say?")
          			}
          		  case 1:
          			goto flw_116
          		}
          	}
          }

          void entrypoint_204_26() {
/*< 99>*/ 	start()
/*<100>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*<101>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "Hurry back! The <color blue<Water Dragon >coloroff>is\nwaiting!")
          	  case 1:
/*<102>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*<104>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_138:
/*<138>*/ 				switch (story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */]) {
          				  case 0:
          					flw_141:
/*<141>*/ 					printf(/* textboxtype: 1, unk: 2, line: 36 */ "Tadtones get along with everybody.\nYou can usually find them where\n<color red<other fish are swimming>coloroff>.")
          				  case 1:
/*<139>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 140, 'param3': 31}
/*<140>*/ 					story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */] = true;
          					goto flw_141
          				}
          			  case 1:
/*<103>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "The Kikwi elder has been looking for\nyou. Why don't you go and hear what he\nhas to say?")
          			}
          		  case 1:
          			goto flw_138
          		}
          	}
          }

          void entrypoint_204_09() {
/*<150>*/ 	start()
/*<151>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x0000000e>Hey, <heroname>! Some nasty\nfish seem to have swum their way into\nthe flooded woods. I'd hate to bump\ninto those things underwater, kewww!\nWatch your toes!")
          }

          void entrypoint_204_27() {
/*<166>*/ 	start()
/*<167>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "The woods have been flooded!")
          }

          void entrypoint_204_10() {
/*< 35>*/ 	start()
/*< 17>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x0000000e>Oh, <heroname>! \nYou've gathered all the Tadtones,\nhaven't you? That's no small feat! Or \nshould I say no small beat, kewwwww!\nAhem... Anyway, hurry and return to\nthe <color blue<Water Dragon>coloroff>!")
/*<195>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          }

          void entrypoint_204_28() {
/*<168>*/ 	start()
/*<169>*/ 	printf(/* textboxtype: 0, unk: 1, line: 43 */ "The Water Dragon is furious!")
          }

          void entrypoint_204_29() {
/*<170>*/ 	start()
/*<171>*/ 	printf(/* textboxtype: 0, unk: 0, line: 44 */ "There aren't as many monsters in the\nwoods anymore.")
          }

          void entrypoint_204_12() {
/*<146>*/ 	start()
/*<149>*/ 	printf(/* textboxtype: 0, unk: 1, line: 52 */ "It's a human!\n\n\n\nThe current is strong beyond this\npoint. It's too swift for a human like\nyou to swim through, so you better\nuse the exit over there.")
          }

          void entrypoint_204_30() {
/*< 41>*/ 	start()
/*<142>*/ 	{'type': 'type3', 'subType': 1, 'param1': 23, 'param2': 0, 'next': 145, 'param3': 35}
/*<145>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 42, 'param3': 16}
/*< 42>*/ 	printf(/* textboxtype: 1, unk: 0, line: 48 */ "Signs indicate this is a reference to\nyour <color red<dowsing>coloroff> ability.\n\n\nIt is a valid suggestion, <0x10012:0x00000002>Master. I am\nfamiliar with the unique aura\nsignatures of Tadtones.")
/*<183>*/ 	story_flags[81 /* us: 805A9AEB 0x04, jp: 805ACD6B 0x04 */] = true;
/*<184>*/ 	open_dowsing_wheel(9)
/*< 53>*/ 	printf(/* textboxtype: 0, unk: 1, line: 49 */ "I will calibrate your <sound 4><color red<dowsing>coloroff> ability to\nlocate Tadtones. This capability should\nprove to be quite useful in your search.\n\nHowever, please note that you <color red<cannot\nuse your dowsing ability underwater>coloroff>.")
/*<181>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*< 54>*/ 	scene_flags[3 'Flooded Faron Woods'][20 /* 0x3 10 */] = true;
/*<143>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_204_13() {
/*<147>*/ 	start()
/*<148>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "Hey, hey! The current is pretty strong\npast here. If you're heading outside,\nyou better use the exit above!")
          }

          void entrypoint_204_31() {
/*<172>*/ 	start()
/*<173>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "The woods are a lake now!")
          }

          void entrypoint_204_14() {
/*<174>*/ 	start()
/*<176>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*<175>*/ 		printf(/* textboxtype: 0, unk: 0, line: 47 */ "")
          	  case 1:
/*<177>*/ 		printf(/* textboxtype: 0, unk: 1, line: 46 */ "")
          	}
          }

          void entrypoint_204_32() {
/*<185>*/ 	start()
/*<186>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*<187>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "Hurry back! The <color blue<Water Dragon >coloroff>is\nwaiting!")
          	  case 1:
/*<188>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*<190>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_191:
/*<191>*/ 				switch (story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */]) {
          				  case 0:
          					flw_194:
/*<194>*/ 					printf(/* textboxtype: 0, unk: 1, line: 40 */ "Tadtones store oxygen in their bodies,\nso when you catch one, it will <color red<restore\nsome of your air>coloroff>.")
          				  case 1:
/*<192>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 193, 'param3': 31}
/*<193>*/ 					story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */] = true;
          					goto flw_194
          				}
          			  case 1:
/*<189>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "The Kikwi elder has been looking for\nyou. Why don't you go and hear what he\nhas to say?")
          			}
          		  case 1:
          			goto flw_191
          		}
          	}
          }

          void entrypoint_204_01() {
          	start()
/*<  2>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 22>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 23>*/ 			printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00000007>Yeah, the forest's flooded, ka-roo, but\nI'm holding up! Give my best to the\n<color blue<Water Dragon>coloroff>!")
          		  case 1:
/*<120>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<121>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
          					flw_123:
/*<123>*/ 					printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000001>I'll teach you something useful.\nSome rocks will roll away if you\nattack them, kwi-koo!")
          				  case 1:
/*<122>*/ 					printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000007>Our elder is waiting for you, koo-kew!\nGo and hear what he has to say!")
          				}
          			  case 1:
          				goto flw_123
          			}
          		}
          	  case 1:
/*< 43>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 1, 'param3': 31}
/*<  1>*/ 		printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000004>Koro-koo! <sound 4>I was so shocked when\nwater started flowing out of the\n<color red<Great Tree's roots>coloroff>!\n\n<0x10009:0x00110005>Kwee... How am I supposed to hide\nwhen the whole forest is underwater?\nI hope things go back to normal soon!")
          	}
          }

          void entrypoint_204_02() {
/*<  3>*/ 	start()
/*<  5>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 24>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 25>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x0009000c>Oh, when will this water go away?!\nI can't swim, kik-kwoo!")
          		  case 1:
/*<124>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<125>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<137>*/ 					printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x0009000c>I don't care if you go dowsing or\ndiving or what, kwi-koo. Just please\nfind those Tadtones!")
          				  case 1:
/*<126>*/ 					printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000007>Our elder is waiting for you, koo-kew!\nGo and hear what he has to say!")
          				}
          			  case 1:
/*<127>*/ 				printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x0009000c>The <color blue<Water Dragon>coloroff> flooded the forest?\nKew-aroo! She's probably planning to\neat us all when we're soggy!")
          			}
          		}
          	  case 1:
/*< 44>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 4, 'param3': 31}
/*<  4>*/ 		printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x0009000c>We're finished, kew! What'll become\nof our forest? It's so...wet.")
          	}
          }

          void entrypoint_204_03() {
/*<  6>*/ 	start()
/*<  8>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 26>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 27>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000007>Yeah, the forest's flooded, karoo, but\nI'm holding up! Give my regards to the\n<color blue<Water Dragon>coloroff>!")
          		  case 1:
/*<128>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<129>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
          					flw_131:
/*<131>*/ 					printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x0011000b>Kik-kwee! If you want to know more\nabout Tadtones, you should talk to the\nParella. They know all about them.\n[1-]Parella?[2]I know.")
/*<178>*/ 					switch (choice(2)) {
          					  case 0:
/*<180>*/ 						printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x000c0001>They're those water-dwelling folks with\nthe pointy mouths, kwee-koo!")
          						flw_179:
/*<179>*/ 						printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x000b0005>If you run into one in the water, kweek,\nsee what it has to say!")
          					  case 1:
          						goto flw_179
          					}
          				  case 1:
/*<130>*/ 					printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000007>Our elder is waiting for you, koo-kew!\nGo and hear what he has to say!")
          				}
          			  case 1:
          				goto flw_131
          			}
          		}
          	  case 1:
/*< 45>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 7, 'param3': 31}
/*<  7>*/ 		printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x0000000f>All this started after the <color blue<Water Dragon>coloroff>\nshowed up, kera-kwoo! This flood must\nbe her fault!")
          	}
          }

          void entrypoint_204_20() {
/*< 30>*/ 	start()
/*< 39>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 40>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "Hurry back! The <color blue<Water Dragon >coloroff>is\nwaiting!")
          	  case 1:
/*< 48>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 77>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_105:
/*<105>*/ 				switch (story_flags[74 /* us: 805A9AE8 0x08, jp: 805ACD68 0x08 */]) {
          				  case 0:
          					flw_31:
/*< 31>*/ 					printf(/* textboxtype: 0, unk: 1, line: 28 */ "You can catch those rogue <color blue<Tadtones>coloroff>\nwith a <color green<spin>coloroff>! It will pull them toward\nyou so you can grab them.\n\nOh... <pause 30>But I guess you humans <color red<use up air\n>coloroff>when you do that, so don't go\noverboard!")
          				  case 1:
/*<106>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 107, 'param3': 31}
/*<107>*/ 					story_flags[74 /* us: 805A9AE8 0x08, jp: 805ACD68 0x08 */] = true;
          					goto flw_31
          				}
          			  case 1:
/*< 49>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "The Kikwi elder has been looking for\nyou. Why don't you go and hear what he\nhas to say?")
          			}
          		  case 1:
          			goto flw_105
          		}
          	}
          }

          void entrypoint_204_04() {
/*<  9>*/ 	start()
/*< 11>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 28>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 29>*/ 			printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000014>Hurry back to the <color blue<Water Dragon>coloroff>, kwee!")
          		  case 1:
/*<132>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<133>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<136>*/ 					printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00000014>Try dowsing, kwook, and find the\nTadtones!")
          				  case 1:
/*<134>*/ 					printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000007>Our elder is waiting for you, koo-kew!\nGo and hear what he has to say!")
          				}
          			  case 1:
/*<135>*/ 				printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00000014>As you collect Tadtones, kew-kwee,\nyou'll fill in the musical score.\nKeep searching till you find them all!")
          			}
          		}
          	  case 1:
/*< 46>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 10, 'param3': 31}
/*< 10>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000004>Kee-paleep! I saw the <color blue<Water Dragon>coloroff>!\nShe must be hiding around here\nsomewhere!")
          	}
          }

          void entrypoint_204_21() {
/*< 61>*/ 	start()
/*< 62>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 63>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "Hurry back! The <color blue<Water Dragon >coloroff>is\nwaiting!")
          	  case 1:
/*< 64>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 79>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_108:
/*<108>*/ 				switch (story_flags[75 /* us: 805A9AE8 0x10, jp: 805ACD68 0x10 */]) {
          				  case 0:
          					flw_111:
/*<111>*/ 					printf(/* textboxtype: 0, unk: 0, line: 29 */ "The pretty bubbles are <color red<poisonous>coloroff>.\nBe careful! If you breathe one in,\nyou'll <color red<choke>coloroff>!")
          				  case 1:
/*<109>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 110, 'param3': 31}
/*<110>*/ 					story_flags[75 /* us: 805A9AE8 0x10, jp: 805ACD68 0x10 */] = true;
          					goto flw_111
          				}
          			  case 1:
/*< 78>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "The Kikwi elder has been looking for\nyou. Why don't you go and hear what he\nhas to say?")
          			}
          		  case 1:
          			goto flw_108
          		}
          	}
          }

          void entrypoint_204_05() {
/*< 12>*/ 	start()
/*< 14>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 18>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 33>*/ 			printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x0000000e>Off you go, now! Hurry and return to\nthe <color blue<Water Dragon>coloroff>!")
          		  case 1:
/*< 55>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
/*< 56>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x0000000e>Yes, yes! That's it! Dowsing! Use your\ndowsing ability, and you'll find the rest\nof those Tadtones in no time flat! ...Or\nis it sharp? Ahem...kewww...")
          			  case 1:
/*< 50>*/ 				switch (scene_flags[25 /* 0x2 02 */]) {
          				  case 0:
/*< 51>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 52, 'param3': 31}
/*< 52>*/ 					printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00000001>Kewwww... How nice to see you again,\n<heroname>!\n\n\nHow goes the <color blue<Tadtone>coloroff> gathering?\nI'd actually thought of something\nyou might be interested to know.\n\n<0x10009:0x00040011>You see, it's like...hrmm... How\nshould I explain this, kewwww?\n\n\nThere was a technique you used when\nsearching for the others of my tribe,\nremember? That!\n\n<0x10009:0x00060009>Use that thing you do, kewww, and\nyou'll have a much easier time getting\nthose Tadtones!")
/*<144>*/ 					scene_flags[3 'Flooded Faron Woods'][26 /* 0x2 04 */] = true;
          				  case 1:
/*< 15>*/ 					printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x0000000e>Oh, <heroname>.\n\n\n\n<0x10009:0x00060003>What's this? The <color blue<Water Dragon>coloroff> caused\nthis flood? So the old girl finally grew\nangry with all the monsters running\nabout the forest, kewwww?\n<0x10009:0x0001000c>...The woods won't be getting drier\nanytime soon, kewwww...")
          				}
          			}
          		}
          	  case 1:
/*<163>*/ 		switch (scene_flags[27 /* 0x2 08 */]) {
          		  case 0:
/*<164>*/ 			printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x00060001>All of a sudden water came gushing\nfrom the <color red<base of the tree >coloroff>and flooded\nthe entire woods, kewwwww.\n\n<0x10009:0x00010006>But, you know...I rather like it this\nway! Oh ho ho!")
          		  case 1:
/*< 47>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 13, 'param3': 31}
/*< 13>*/ 			printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x0000000e>Oh, kewwwwww. You.<pause 15>.<pause 15>.<pause 20> You're that one\nfrom before. Come to think of it, I'd\nforgotten to ask your name.\n\n<0x10009:0x00000003>...<pause 25>I see. <0x30001:0x><heroname>, is it?\nNow there's an odd name, kewwwww.\n<0x10009:0x00000000>Ah...\n\nWhat brings you to see me?\n[1-]This water![2-]The woods...")
/*<161>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_162:
/*<162>*/ 				printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00000002>Kewwww, it's good to see you again!\nYes, things look a bit different here,\ndon't they?\n\n<0x10009:0x00040000>The water came gushing out of the <color red<base\nof the tree>coloroff> behind me<sound 4> and flooded the\nentire woods.\n\n<0x10009:0x00000003>I don't know what caused it,\nbut I suppose it will clear out the\nmonster infestation, kewww, so you\nwon't hear me complaining!")
/*< 32>*/ 				wait_frames(1)
/*<165>*/ 				scene_flags[3 'Flooded Faron Woods'][27 /* 0x2 08 */] = true;
          			  case 1:
          				goto flw_162
          			}
          		}
          	}
          }

          void entrypoint_204_22() {
/*< 65>*/ 	start()
/*< 67>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 68>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "Hurry back! The <color blue<Water Dragon >coloroff>is\nwaiting!")
          	  case 1:
/*< 70>*/ 		switch (story_flags[76 /* us: 805A9AE8 0x20, jp: 805ACD68 0x20 */]) {
          		  case 0:
/*< 75>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*< 81>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
          					flw_76:
/*< 76>*/ 					printf(/* textboxtype: 1, unk: 0, line: 33 */ "Some Tadtones hang out in groups.\nYou have to catch those similar\nTadtones <color red<one right after the other>coloroff>, or\nthey'll swim out of your score.\nIf you want to catch a bunch at once,\nuse a <color green<spin maneuver>coloroff> to <color red<draw in>coloroff> nearby\nTadtones. That's your best bet.")
          				  case 1:
/*< 80>*/ 					printf(/* textboxtype: 1, unk: 0, line: 42 */ "The woods have been flooded!")
          				}
          			  case 1:
          				goto flw_76
          			}
          		  case 1:
/*< 69>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 66, 'param3': 31}
/*< 66>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "Hey, are you collecting Tadtones?\n[1-]Yep.[2-]Nope.")
/*< 71>*/ 			switch (choice(2)) {
          			  case 0:
/*< 73>*/ 				printf(/* textboxtype: 0, unk: 0, line: 32 */ "I'll let you in on a secret, then.\n\n\n\nSome Tadtones hang out in groups.\nYou have to catch those similar\nTadtones <color red<one right after the other>coloroff>, or\nthey'll swim out of your score.\nIf you want to catch a bunch at once,\nuse a <color green<spin maneuver>coloroff> to <color red<draw in>coloroff> nearby\nTadtones. That's your best bet.\n\nAside from that...<pause 30>it's really just a\nmatter of keeping at it!")
/*< 74>*/ 				story_flags[76 /* us: 805A9AE8 0x20, jp: 805ACD68 0x20 */] = true;
          			  case 1:
/*< 72>*/ 				printf(/* textboxtype: 0, unk: 1, line: 31 */ "Oh...sorry.")
          			}
          		}
          	}
          }

          void entrypoint_204_06() {
/*< 16>*/ 	start()
/*< 19>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 21>*/ 		story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */] = true;
/*<182>*/ 		story_flags[176 /* us: 805A9AE2 0x80, jp: 805ACD62 0x80 */] = false;
/*<160>*/ 		story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = false;
/*< 36>*/ 		switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          		  case 0:
/*< 37>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 38>*/ 				story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */] = true;
          				flw_34:
/*< 34>*/ 				changeScene(7, 0) // 
          			  case 1:
          				goto flw_34
          			}
          		  case 1:
          			goto flw_34
          		}
          	  case 1:
/*< 20>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000006>If you wish to earn my favor, gather\nthe <color red<Tadtones>coloroff> and return to me.")
          	}
          }

          void entrypoint_204_23() {
/*< 84>*/ 	start()
/*< 85>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 86>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "Hurry back! The <color blue<Water Dragon >coloroff>is\nwaiting!")
          	  case 1:
/*< 87>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 89>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_112:
/*<112>*/ 				switch (story_flags[77 /* us: 805A9AE8 0x40, jp: 805ACD68 0x40 */]) {
          				  case 0:
          					flw_115:
/*<115>*/ 					printf(/* textboxtype: 0, unk: 1, line: 34 */ "If you don't collect Tadtones of the\nsame color <color red<one right after another>coloroff>,\nthey'll wriggle out of your score.\nBut don't work yourself into a panic!")
          				  case 1:
/*<113>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 114, 'param3': 31}
/*<114>*/ 					story_flags[77 /* us: 805A9AE8 0x40, jp: 805ACD68 0x40 */] = true;
          					goto flw_115
          				}
          			  case 1:
/*< 88>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "The Kikwi elder has been looking for\nyou. Why don't you go and hear what he\nhas to say?")
          			}
          		  case 1:
          			goto flw_112
          		}
          	}
          }

          void entrypoint_204_24() {
/*< 90>*/ 	start()
/*< 91>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 92>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "Hurry back! The <color blue<Water Dragon >coloroff>is\nwaiting!")
          	  case 1:
/*< 93>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 95>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_96:
/*< 96>*/ 				switch (scene_flags[24 /* 0x2 01 */]) {
          				  case 0:
/*<196>*/ 					switch (scene_flags[70 /* 0x9 40 */]) {
          					  case 0:
          						flw_98:
/*< 98>*/ 						printf(/* textboxtype: 1, unk: 0, line: 39 */ "The <color blue<ferocious fish>coloroff> are baaaaack!\nSWIM FOR YOUR LIFE!\n\n\nThey can't follow you if you dive\n<color red<deep>coloroff>!")
          					  case 1:
/*<152>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 197, 'param3': 31}
/*<197>*/ 						scene_flags[3 'Flooded Faron Woods'][70 /* 0x9 40 */] = true;
          						goto flw_98
          					}
          				  case 1:
/*< 97>*/ 					printf(/* textboxtype: 2, unk: 52, line: 38 */ "Those big fish are scary. They charge\nyou for no reason! So testy... I'm glad\nnone of them are around right now.")
          				}
          			  case 1:
/*< 94>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "The Kikwi elder has been looking for\nyou. Why don't you go and hear what he\nhas to say?")
          			}
          		  case 1:
          			goto flw_96
          		}
          	}
          }

          void entrypoint_204_07() {
/*<153>*/ 	start()
/*<154>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 155, 'param3': 47}
/*<155>*/ 	set_camera(4, 0)
/*<156>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 158, 'param3': 48}
/*<158>*/ 	wait_frames(15)
/*<157>*/ 	printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x0000000e>Kewwwwww, <heroname>!\nCan you hear me?\n\n\nI thought up something good! Why\ndon't you come and chat with me for a\nmoment, kewwwwwww?")
/*<159>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

