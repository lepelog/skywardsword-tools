          void entrypoint_204_25() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 59>*/ 		printf("Hurry back! The <b<Water Dragon >>is\nwaiting!")
          	  case 1:
/*< 60>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 83>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_116:
/*<116>*/ 				switch (story_flags[78 /* us: 805A9AE8 0x80, jp: 805ACD68 0x80 */]) {
          				  case 0:
          					flw_119:
/*<119>*/ 					printf("If you make those spiky things <r<explode>>,\nyou're in for a world of hurt. They're\nlike bombs!")
          				  case 1:
/*<117>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 118, 'param3': 31}
/*<118>*/ 					story_flags[78 /* us: 805A9AE8 0x80, jp: 805ACD68 0x80 */] = true;
          					goto flw_119
          				}
          			  case 1:
/*< 82>*/ 				printf("The Kikwi elder has been looking for\nyou. Why don't you go and hear what he\nhas to say?")
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
/*<101>*/ 		printf("Hurry back! The <b<Water Dragon >>is\nwaiting!")
          	  case 1:
/*<102>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*<104>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_138:
/*<138>*/ 				switch (story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */]) {
          				  case 0:
          					flw_141:
/*<141>*/ 					printf("Tadtones get along with everybody.\nYou can usually find them where\n<r<other fish are swimming>>.")
          				  case 1:
/*<139>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 140, 'param3': 31}
/*<140>*/ 					story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */] = true;
          					goto flw_141
          				}
          			  case 1:
/*<103>*/ 				printf("The Kikwi elder has been looking for\nyou. Why don't you go and hear what he\nhas to say?")
          			}
          		  case 1:
          			goto flw_138
          		}
          	}
          }

          void entrypoint_204_09() {
/*<150>*/ 	start()
/*<151>*/ 	printf("\x0E\x01\x09\x04\x00\x0EHey, Link! Some nasty\nfish seem to have swum their way into\nthe flooded woods. I'd hate to bump\ninto those things underwater, kewww!\nWatch your toes!")
          }

          void entrypoint_204_27() {
/*<166>*/ 	start()
/*<167>*/ 	printf("The woods have been flooded!")
          }

          void entrypoint_204_10() {
/*< 35>*/ 	start()
/*< 17>*/ 	printf("\x0E\x01\x09\x04\x00\x0EOh, Link! \nYou've gathered all the Tadtones,\nhaven't you? That's no small feat! Or \nshould I say no small beat, kewwwww!\nAhem... Anyway, hurry and return to\nthe <b<Water Dragon>>!")
/*<195>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          }

          void entrypoint_204_28() {
/*<168>*/ 	start()
/*<169>*/ 	printf("The Water Dragon is furious!")
          }

          void entrypoint_204_29() {
/*<170>*/ 	start()
/*<171>*/ 	printf("There aren't as many monsters in the\nwoods anymore.")
          }

          void entrypoint_204_12() {
/*<146>*/ 	start()
/*<149>*/ 	printf("It's a human!\n\n\n\nThe current is strong beyond this\npoint. It's too swift for a human like\nyou to swim through, so you better\nuse the exit over there.")
          }

          void entrypoint_204_30() {
/*< 41>*/ 	start()
/*<142>*/ 	{'type': 'type3', 'subType': 1, 'param1': 23, 'param2': 0, 'next': 145, 'param3': 35}
/*<145>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 42, 'param3': 16}
/*< 42>*/ 	printf("Signs indicate this is a reference to\nyour <r<dowsing>> ability.\n\n\nIt is a valid suggestion, \x0E\x01\x12\x04\x00\x02Master. I am\nfamiliar with the unique aura\nsignatures of Tadtones.")
/*<183>*/ 	story_flags[81 /* us: 805A9AEB 0x04, jp: 805ACD6B 0x04 */] = true;
/*<184>*/ 	open_dowsing_wheel(9)
/*< 53>*/ 	printf("I will calibrate your <pling><r<dowsing>> ability to\nlocate Tadtones. This capability should\nprove to be quite useful in your search.\n\nHowever, please note that you <r<cannot\nuse your dowsing ability underwater>>.")
/*<181>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*< 54>*/ 	scene_flags[3 'Flooded Faron Woods'][20 /* 0x3 10 */] = true;
/*<143>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_204_13() {
/*<147>*/ 	start()
/*<148>*/ 	printf("Hey, hey! The current is pretty strong\npast here. If you're heading outside,\nyou better use the exit above!")
          }

          void entrypoint_204_31() {
/*<172>*/ 	start()
/*<173>*/ 	printf("The woods are a lake now!")
          }

          void entrypoint_204_14() {
/*<174>*/ 	start()
/*<176>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*<175>*/ 		printf("")
          	  case 1:
/*<177>*/ 		printf("")
          	}
          }

          void entrypoint_204_32() {
/*<185>*/ 	start()
/*<186>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*<187>*/ 		printf("Hurry back! The <b<Water Dragon >>is\nwaiting!")
          	  case 1:
/*<188>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*<190>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_191:
/*<191>*/ 				switch (story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */]) {
          				  case 0:
          					flw_194:
/*<194>*/ 					printf("Tadtones store oxygen in their bodies,\nso when you catch one, it will <r<restore\nsome of your air>>.")
          				  case 1:
/*<192>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 193, 'param3': 31}
/*<193>*/ 					story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */] = true;
          					goto flw_194
          				}
          			  case 1:
/*<189>*/ 				printf("The Kikwi elder has been looking for\nyou. Why don't you go and hear what he\nhas to say?")
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
/*< 23>*/ 			printf("\x0E\x01\x09\x04\x00\x07Yeah, the forest's flooded, ka-roo, but\nI'm holding up! Give my best to the\n<b<Water Dragon>>!")
          		  case 1:
/*<120>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<121>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
          					flw_123:
/*<123>*/ 					printf("\x0E\x01\x09\x04\x00\x01I'll teach you something useful.\nSome rocks will roll away if you\nattack them, kwi-koo!")
          				  case 1:
/*<122>*/ 					printf("\x0E\x01\x09\x04\x00\x07Our elder is waiting for you, koo-kew!\nGo and hear what he has to say!")
          				}
          			  case 1:
          				goto flw_123
          			}
          		}
          	  case 1:
/*< 43>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 1, 'param3': 31}
/*<  1>*/ 		printf("\x0E\x01\x09\x04\x00\x04Koro-koo! <pling>I was so shocked when\nwater started flowing out of the\n<r<Great Tree's roots>>!\n\n\x0E\x01\x09\x04\x11\x05Kwee... How am I supposed to hide\nwhen the whole forest is underwater?\nI hope things go back to normal soon!")
          	}
          }

          void entrypoint_204_02() {
/*<  3>*/ 	start()
/*<  5>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 24>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 25>*/ 			printf("\x0E\x01\x09\x04\x09\x0COh, when will this water go away?!\nI can't swim, kik-kwoo!")
          		  case 1:
/*<124>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<125>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<137>*/ 					printf("\x0E\x01\x09\x04\x09\x0CI don't care if you go dowsing or\ndiving or what, kwi-koo. Just please\nfind those Tadtones!")
          				  case 1:
/*<126>*/ 					printf("\x0E\x01\x09\x04\x00\x07Our elder is waiting for you, koo-kew!\nGo and hear what he has to say!")
          				}
          			  case 1:
/*<127>*/ 				printf("\x0E\x01\x09\x04\x09\x0CThe <b<Water Dragon>> flooded the forest?\nKew-aroo! She's probably planning to\neat us all when we're soggy!")
          			}
          		}
          	  case 1:
/*< 44>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 4, 'param3': 31}
/*<  4>*/ 		printf("\x0E\x01\x09\x04\x09\x0CWe're finished, kew! What'll become\nof our forest? It's so...wet.")
          	}
          }

          void entrypoint_204_03() {
/*<  6>*/ 	start()
/*<  8>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 26>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 27>*/ 			printf("\x0E\x01\x09\x04\x00\x07Yeah, the forest's flooded, karoo, but\nI'm holding up! Give my regards to the\n<b<Water Dragon>>!")
          		  case 1:
/*<128>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<129>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
          					flw_131:
/*<131>*/ 					printf("\x0E\x01\x09\x04\x11\x0BKik-kwee! If you want to know more\nabout Tadtones, you should talk to the\nParella. They know all about them.\n[1]Parella?[2-]I know.")
/*<178>*/ 					switch (choice(2)) {
          					  case 0:
/*<180>*/ 						printf("\x0E\x01\x09\x04\x0C\x01They're those water-dwelling folks with\nthe pointy mouths, kwee-koo!")
          						flw_179:
/*<179>*/ 						printf("\x0E\x01\x09\x04\x0B\x05If you run into one in the water, kweek,\nsee what it has to say!")
          					  case 1:
          						goto flw_179
          					}
          				  case 1:
/*<130>*/ 					printf("\x0E\x01\x09\x04\x00\x07Our elder is waiting for you, koo-kew!\nGo and hear what he has to say!")
          				}
          			  case 1:
          				goto flw_131
          			}
          		}
          	  case 1:
/*< 45>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 7, 'param3': 31}
/*<  7>*/ 		printf("\x0E\x01\x09\x04\x00\x0FAll this started after the <b<Water Dragon>>\nshowed up, kera-kwoo! This flood must\nbe her fault!")
          	}
          }

          void entrypoint_204_20() {
/*< 30>*/ 	start()
/*< 39>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 40>*/ 		printf("Hurry back! The <b<Water Dragon >>is\nwaiting!")
          	  case 1:
/*< 48>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 77>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_105:
/*<105>*/ 				switch (story_flags[74 /* us: 805A9AE8 0x08, jp: 805ACD68 0x08 */]) {
          				  case 0:
          					flw_31:
/*< 31>*/ 					printf("You can catch those rogue <b<Tadtones>>\nwith a <g<spin>>! It will pull them toward\nyou so you can grab them.\n\nOh... <pause1E>But I guess you humans <r<use up air\n>>when you do that, so don't go\noverboard!")
          				  case 1:
/*<106>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 107, 'param3': 31}
/*<107>*/ 					story_flags[74 /* us: 805A9AE8 0x08, jp: 805ACD68 0x08 */] = true;
          					goto flw_31
          				}
          			  case 1:
/*< 49>*/ 				printf("The Kikwi elder has been looking for\nyou. Why don't you go and hear what he\nhas to say?")
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
/*< 29>*/ 			printf("\x0E\x01\x09\x04\x00\x14Hurry back to the <b<Water Dragon>>, kwee!")
          		  case 1:
/*<132>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<133>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<136>*/ 					printf("\x0E\x01\x09\x04\x00\x14Try dowsing, kwook, and find the\nTadtones!")
          				  case 1:
/*<134>*/ 					printf("\x0E\x01\x09\x04\x00\x07Our elder is waiting for you, koo-kew!\nGo and hear what he has to say!")
          				}
          			  case 1:
/*<135>*/ 				printf("\x0E\x01\x09\x04\x00\x14As you collect Tadtones, kew-kwee,\nyou'll fill in the musical score.\nKeep searching till you find them all!")
          			}
          		}
          	  case 1:
/*< 46>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 10, 'param3': 31}
/*< 10>*/ 		printf("\x0E\x01\x09\x04\x00\x04Kee-paleep! I saw the <b<Water Dragon>>!\nShe must be hiding around here\nsomewhere!")
          	}
          }

          void entrypoint_204_21() {
/*< 61>*/ 	start()
/*< 62>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 63>*/ 		printf("Hurry back! The <b<Water Dragon >>is\nwaiting!")
          	  case 1:
/*< 64>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 79>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_108:
/*<108>*/ 				switch (story_flags[75 /* us: 805A9AE8 0x10, jp: 805ACD68 0x10 */]) {
          				  case 0:
          					flw_111:
/*<111>*/ 					printf("The pretty bubbles are <r<poisonous>>.\nBe careful! If you breathe one in,\nyou'll <r<choke>>!")
          				  case 1:
/*<109>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 110, 'param3': 31}
/*<110>*/ 					story_flags[75 /* us: 805A9AE8 0x10, jp: 805ACD68 0x10 */] = true;
          					goto flw_111
          				}
          			  case 1:
/*< 78>*/ 				printf("The Kikwi elder has been looking for\nyou. Why don't you go and hear what he\nhas to say?")
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
/*< 33>*/ 			printf("\x0E\x01\x09\x04\x00\x0EOff you go, now! Hurry and return to\nthe <b<Water Dragon>>!")
          		  case 1:
/*< 55>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
/*< 56>*/ 				printf("\x0E\x01\x09\x04\x00\x0EYes, yes! That's it! Dowsing! Use your\ndowsing ability, and you'll find the rest\nof those Tadtones in no time flat! ...Or\nis it sharp? Ahem...kewww...")
          			  case 1:
/*< 50>*/ 				switch (scene_flags[25 /* 0x2 02 */]) {
          				  case 0:
/*< 51>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 52, 'param3': 31}
/*< 52>*/ 					printf("\x0E\x01\x09\x04\x00\x01Kewwww... How nice to see you again,\nLink!\n\n\nHow goes the <b<Tadtone>> gathering?\nI'd actually thought of something\nyou might be interested to know.\n\n\x0E\x01\x09\x04\x04\x11You see, it's like...hrmm... How\nshould I explain this, kewwww?\n\n\nThere was a technique you used when\nsearching for the others of my tribe,\nremember? That!\n\n\x0E\x01\x09\x04\x06\x09Use that thing you do, kewww, and\nyou'll have a much easier time getting\nthose Tadtones!")
/*<144>*/ 					scene_flags[3 'Flooded Faron Woods'][26 /* 0x2 04 */] = true;
          				  case 1:
/*< 15>*/ 					printf("\x0E\x01\x09\x04\x00\x0EOh, Link.\n\n\n\n\x0E\x01\x09\x04\x06\x03What's this? The <b<Water Dragon>> caused\nthis flood? So the old girl finally grew\nangry with all the monsters running\nabout the forest, kewwww?\n\x0E\x01\x09\x04\x01\x0C...The woods won't be getting drier\nanytime soon, kewwww...")
          				}
          			}
          		}
          	  case 1:
/*<163>*/ 		switch (scene_flags[27 /* 0x2 08 */]) {
          		  case 0:
/*<164>*/ 			printf("\x0E\x01\x09\x04\x06\x01All of a sudden water came gushing\nfrom the <r<base of the tree >>and flooded\nthe entire woods, kewwwww.\n\n\x0E\x01\x09\x04\x01\x06But, you know...I rather like it this\nway! Oh ho ho!")
          		  case 1:
/*< 47>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 13, 'param3': 31}
/*< 13>*/ 			printf("\x0E\x01\x09\x04\x00\x0EOh, kewwwwww. You.<pause0F>.<pause0F>.<pause14> You're that one\nfrom before. Come to think of it, I'd\nforgotten to ask your name.\n\n\x0E\x01\x09\x04\x00\x03...<pause19>I see. \x0E\x03\x01\x00Link, is it?\nNow there's an odd name, kewwwww.\n\x0E\x01\x09\x04\x00\x00Ah...\n\nWhat brings you to see me?\n[1]This water![2]The woods...")
/*<161>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_162:
/*<162>*/ 				printf("\x0E\x01\x09\x04\x00\x02Kewwww, it's good to see you again!\nYes, things look a bit different here,\ndon't they?\n\n\x0E\x01\x09\x04\x04\x00The water came gushing out of the <r<base\nof the tree>> behind me<pling> and flooded the\nentire woods.\n\n\x0E\x01\x09\x04\x00\x03I don't know what caused it,\nbut I suppose it will clear out the\nmonster infestation, kewww, so you\nwon't hear me complaining!")
/*< 32>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 165, 'param3': 6}
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
/*< 68>*/ 		printf("Hurry back! The <b<Water Dragon >>is\nwaiting!")
          	  case 1:
/*< 70>*/ 		switch (story_flags[76 /* us: 805A9AE8 0x20, jp: 805ACD68 0x20 */]) {
          		  case 0:
/*< 75>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*< 81>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
          					flw_76:
/*< 76>*/ 					printf("Some Tadtones hang out in groups.\nYou have to catch those similar\nTadtones <r<one right after the other>>, or\nthey'll swim out of your score.\nIf you want to catch a bunch at once,\nuse a <g<spin maneuver>> to <r<draw in>> nearby\nTadtones. That's your best bet.")
          				  case 1:
/*< 80>*/ 					printf("The woods have been flooded!")
          				}
          			  case 1:
          				goto flw_76
          			}
          		  case 1:
/*< 69>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 66, 'param3': 31}
/*< 66>*/ 			printf("Hey, are you collecting Tadtones?\n[1]Yep.[2]Nope.")
/*< 71>*/ 			switch (choice(2)) {
          			  case 0:
/*< 73>*/ 				printf("I'll let you in on a secret, then.\n\n\n\nSome Tadtones hang out in groups.\nYou have to catch those similar\nTadtones <r<one right after the other>>, or\nthey'll swim out of your score.\nIf you want to catch a bunch at once,\nuse a <g<spin maneuver>> to <r<draw in>> nearby\nTadtones. That's your best bet.\n\nAside from that...<pause1E>it's really just a\nmatter of keeping at it!")
/*< 74>*/ 				story_flags[76 /* us: 805A9AE8 0x20, jp: 805ACD68 0x20 */] = true;
          			  case 1:
/*< 72>*/ 				printf("Oh...sorry.")
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
/*< 20>*/ 		printf("\x0E\x01\x09\x04\x00\x06If you wish to earn my favor, gather\nthe <r<Tadtones>> and return to me.")
          	}
          }

          void entrypoint_204_23() {
/*< 84>*/ 	start()
/*< 85>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 86>*/ 		printf("Hurry back! The <b<Water Dragon >>is\nwaiting!")
          	  case 1:
/*< 87>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 89>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_112:
/*<112>*/ 				switch (story_flags[77 /* us: 805A9AE8 0x40, jp: 805ACD68 0x40 */]) {
          				  case 0:
          					flw_115:
/*<115>*/ 					printf("If you don't collect Tadtones of the\nsame color <r<one right after another>>,\nthey'll wriggle out of your score.\nBut don't work yourself into a panic!")
          				  case 1:
/*<113>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 114, 'param3': 31}
/*<114>*/ 					story_flags[77 /* us: 805A9AE8 0x40, jp: 805ACD68 0x40 */] = true;
          					goto flw_115
          				}
          			  case 1:
/*< 88>*/ 				printf("The Kikwi elder has been looking for\nyou. Why don't you go and hear what he\nhas to say?")
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
/*< 92>*/ 		printf("Hurry back! The <b<Water Dragon >>is\nwaiting!")
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
/*< 98>*/ 						printf("The <b<ferocious fish>> are baaaaack!\nSWIM FOR YOUR LIFE!\n\n\nThey can't follow you if you dive\n<r<deep>>!")
          					  case 1:
/*<152>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 197, 'param3': 31}
/*<197>*/ 						scene_flags[3 'Flooded Faron Woods'][70 /* 0x9 40 */] = true;
          						goto flw_98
          					}
          				  case 1:
/*< 97>*/ 					printf("Those big fish are scary. They charge\nyou for no reason! So testy... I'm glad\nnone of them are around right now.")
          				}
          			  case 1:
/*< 94>*/ 				printf("The Kikwi elder has been looking for\nyou. Why don't you go and hear what he\nhas to say?")
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
/*<158>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 157, 'param3': 6}
/*<157>*/ 	printf("\x0E\x01\x09\x04\x00\x0EKewwwwww, Link!\nCan you hear me?\n\n\nI thought up something good! Why\ndon't you come and chat with me for a\nmoment, kewwwwwww?")
/*<159>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

