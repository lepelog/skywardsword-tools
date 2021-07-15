          void entrypoint_006_600() {
          	start()
/*<  1>*/ 	printf("Target lock: <b<Remlit (Day)>><b<<entrypoint_601>>>")
/*<  3>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 21, 'param4': 2, 'param5': 0}) {
          	  case 0:
/*<  2>*/ 		printf("You have defeated <numeric arg0(1)> of this type of\nenemy. My analysis shows that your\nbattle performance rating with this\nenemy is <string arg0>.")
          	  case 1:
          	}
          }

          void entrypoint_006_652() {
/*< 88>*/ 	start()
/*< 90>*/ 	printf("I have insufficient data on this\nmonster.\n\n\nIts enormous size and ominous aura\ncannot be compared with previously\nencountered monsters.\n[1]Tell me more![2-]Understood.")
/*< 91>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_239:
/*<239>*/ 		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
          		  case 0:
          			flw_89:
/*< 89>*/ 			printf("I can confirm that the <r<sealing spike\n>>observed at the top of its head is the\nsame object originally found in the\n<b<Sealed Grounds>>.\nI hypothesize that damage can be\ninflicted by driving the stone pillar\ninto the monster's head.\n\nBut first, I recommend attacking the\nbeast's feet\x2014where your sword can\nreach\x2014to stop it from moving.\n[1]Tell me more![2-]Got it.")
/*< 93>*/ 			switch (choice(2)) {
          			  case 0:
/*< 94>*/ 				printf("It is probable that the monster will be\nunable to move if you destroy all of\nits toes.\n\nI recommend using the air vents to\nmove ahead of the monster instead\nof chasing it from behind.\n[1]Tell me more![2-]Got it.")
/*< 95>*/ 				switch (choice(2)) {
          				  case 0:
/*< 96>*/ 					printf("If you are able to get between the\nmonster's toes, my analysis indicates\nyou can effectively inflict great\ndamage with a <g<spin attack>>.\nYou can also choose to decrease your\nrisk of physical harm by using <y<bombs>> to\nattack from a distance.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<256>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_89
          			  case 1:
/*< 92>*/ 				printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, \x0E\x01\x12\x04\x00\x02Master, your sword will flash.\nYou can always press (v) to call on me.\x0E\x01\x11\x02\x9CD\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n<r<Analysis>>.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_653() {
/*< 97>*/ 	start()
/*< 99>*/ 	printf("There is insufficient data on this target\nto make a full report at this time.\n\n\nBut I can confirm the appearance of\nlimb-like appendages that were not\npreviously present. The evil power of\nthis creature has also increased.[1]More info![2-]Understood.")
/*<100>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_240:
/*<240>*/ 		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
          		  case 0:
          			flw_98:
/*< 98>*/ 			printf("Analysis indicates that you should be\nable to use the same basic strategy as in\nthe previous encounter to seal the\nmonster in its prison once more.\nThe fingers and toes on its limbs can be\ndestroyed with a physical attack, but\nyou should wait to do so until these\ntargets become a very high priority.\n[1]More info![2-]Got it.")
/*<102>*/ 			switch (choice(2)) {
          			  case 0:
/*<103>*/ 				printf("I calculate a 100% probability that the\nlarge apparatus Groose constructed\nwill be effective against this\nmonster.\nIt is likely that a direct hit from this\napparatus will stop the monster's\nmovement, creating a window of\nopportunity for you to attack.[1]More info![2-]Got it.")
/*<104>*/ 				switch (choice(2)) {
          				  case 0:
/*<105>*/ 					printf("<b<Groose>>'s defense apparatus can be\nrepositioned by pushing \x0E\x02\x04\x02\xECD.\n\n\nWhen the monster is in your blind spot,\nI recommend you reposition the\napparatus and target the monster.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<257>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_98
          			  case 1:
/*<101>*/ 				printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, \x0E\x01\x12\x04\x00\x02Master, your sword will flash.\nYou can always press (v) to call on me.\x0E\x01\x11\x02\x9CD\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n<r<Analysis>>.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_601() {
/*<294>*/ 	start()
/*<297>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<295>*/ 		printf("These small animals dwell in <b<Skyloft>>.\nDue to <b<Batreaux>>'s transformation into\na human, they no longer exhibit\naggressive tendencies at night.")
          	  case 1:
/*<296>*/ 		printf("These small creatures inhabit <b<Skyloft>>.\nThey have friendly dispositions during\nthe day, but can become aggressive at\nnight. Approach with caution.")
          	}
          }

          void entrypoint_006_654() {
/*<106>*/ 	start()
/*<108>*/ 	printf("Though the details are still unclear,\nthis monstrosity is the demonic vessel\nof <b<Demise>>.\n\nI can confirm a previously unseen\ntaillike appendage.\n\n\nI recommend generous use of <b<Groose>>'s \ncatapult.\n[1]Tell me more![2-]Understood.")
/*<109>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_241:
/*<241>*/ 		switch (story_flags[786 /* us: 805A9B2C 0x04, jp: 805ACDAC 0x04 */]) {
          		  case 0:
          			flw_107:
/*<107>*/ 			printf("You must attempt to seal this beast\naway again. I suggest a plan of attack\nsimilar to what you used in previous\nencounters.\nThe monster's fingers, like its toes, are\ncomparatively soft targets and can be\ndestroyed by physical attack.\n[1]Tell me more![2-]Got it.")
/*<111>*/ 			switch (choice(2)) {
          			  case 0:
/*<112>*/ 				printf("After toppling the monster, it is\npossible that the beast's enormous bulk\nmay prevent you from approaching\nthe <r<sealing spike>>.\nIn this scenario, I recommend that you\ndescend a level and use an air vent to\ntravel to the head of the monster.\n[1]More info![2-]Got it.")
/*<113>*/ 				switch (choice(2)) {
          				  case 0:
/*<114>*/ 					printf("The monster has evolved to an\nimmensely powerful state. I calculate\nthe odds you will defeat it by sword\nalone at approximately 0%.\nI recommend you utilize Groose's\ndefense apparatus. As a last-ditch\nmeasure, you can launch <r<yourself>>,\n\x0E\x01\x12\x04\x00\x02Master, as a projectile.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<258>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_107
          			  case 1:
/*<110>*/ 				printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, \x0E\x01\x12\x04\x00\x02Master, your sword will flash.\nYou can always press (v) to call on me.\x0E\x01\x11\x02\x9CD\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n<r<Analysis>>.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_689() {
/*<124>*/ 	start()
/*<126>*/ 	printf("There is a 90% change in outward\nappearance compared to previous\nencounters with him. I detect a dark\naura emanating from his entire body.\nI can confirm a change in Ghirahim's\nfighting style, likely as a result of the\nminor damage he has suffered.\n[1]More info![2-]Understood.")
/*<127>*/ 	switch (choice(2)) {
          	  case 0:
/*<243>*/ 		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
          		  case 0:
          			flw_125:
/*<125>*/ 			printf("I project that the <r<weak spot revealed\non his chest >>from the previous attack\nwill continue to be an effective target.\n\nHowever, there is a 100% probability\nthat Ghirahim will block all attacks\ntargeting this area while he is in his\nstandard state.\n[1]More info![2-]Got it.")
/*<129>*/ 			switch (choice(2)) {
          			  case 0:
/*<130>*/ 				printf("I suggest you attempt to parry\nGhirahim's sword away, \x0E\x01\x12\x04\x00\x02Master.\nThis should leave the <r<weak spot on\nhis chest>> open to attack.\nTaking advantage of opportunities to\nattack the villain's weak spot should\nbe your top priority.[1]More info![2-]Got it.")
/*<131>*/ 				switch (choice(2)) {
          				  case 0:
/*<132>*/ 					printf("My analysis shows that it is impossible\nto parry away Ghirahim's sword\nin one attack.\n\nI theorize that it will become possible\nby <r<attacking in the same direction>>\na number of times.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<254>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_125
          			  case 1:
/*<128>*/ 				printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, \x0E\x01\x12\x04\x00\x02Master, your sword will flash.\nYou can always press (v) to call on me.\x0E\x01\x11\x02\x9CD\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n<r<Analysis>>.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_602() {
/*<298>*/ 	start()
/*<299>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<301>*/ 		printf("These small animals dwell in <b<Skyloft>>.\nDue to <b<Batreaux>>'s transformation into\na human, they no longer exhibit\naggressive tendencies at night.")
          	  case 1:
/*<300>*/ 		printf("During the day they are quite docile,\nbut after dark their personality turns\naggressive and they will attack. Don't\nbe fooled by their cute appearance.")
          	}
          }

          void entrypoint_006_655() {
/*<144>*/ 	start()
/*<145>*/ 	printf("This eternal being has conquered time\nitself. It is the source of all monsters.\n\n\nAccording to tales passed down through\ngenerations, it appears differently in\neach epoch and to each person who\nlays eyes on it.[1]Tell me more![2-]Understood.")
/*<146>*/ 	switch (choice(2)) {
          	  case 0:
/*<234>*/ 		printf("It is clear that <r<Skyward Strikes >>cannot\nbe called down to your sword because\nthis place is under the magical\ninfluence of Demise.\nAttacks using <r<Skyward Strike energy\n>>will not be possible here.\n[1]Tell me more.[2-]Got it.")
/*<235>*/ 		switch (choice(2)) {
          		  case 0:
/*<148>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 124}) {
          			  case 0:
/*<260>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_151:
/*<151>*/ 					printf("The probability that a single, standard\nattack of yours will injure Demise,\n\x0E\x01\x12\x04\x00\x02Master, is exactly 0%.\n\nA series of attacks that can overwhelm\nDemise's guard is required, such as\n<r<repeated slashing from various angles>>.\n[1]Tell me more![2-]Got it.")
/*<152>*/ 					switch (choice(2)) {
          					  case 0:
/*<153>*/ 						printf("Results from my analysis confirm that\nthe time to strike Demise is when he\nholds his sword aloft.\n\nHowever, vigilance is required.<pause0F>\nAny attack falling near Demise's sword\nhas a 100% chance of being blocked.")
          					  case 1:
          					}
          				  case 1:
/*<149>*/ 					printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, \x0E\x01\x12\x04\x00\x02Master, your sword will flash.\nYou can always press (v) to call on me.\x0E\x01\x11\x02\x9CD\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n<r<Analysis>>.")
          				}
          			  case 1:
          				flw_147:
/*<147>*/ 				printf("It is highly probable that the only\nweapon capable of wounding Demise\nis the <y<Master Sword >>itself. No other\nweapon can affect him.\n[1]Tell me more![2-]Got it.")
/*<150>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_151
          				  case 1:
          				}
          			  case 2:
          				goto flw_147
          			  case 3:
          				goto flw_147
          			}
          		  case 1:
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_690() {
/*<133>*/ 	start()
/*<134>*/ 	printf("There has been a 90% change in his\noutward appearance since our last\nmeeting. I detect a black aura\nemanating from his entire body.\nI have also confirmed that he is\nusing a new weapon.\n[1]More info![2-]Understood.")
/*<135>*/ 	switch (choice(2)) {
          	  case 0:
/*<244>*/ 		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
          		  case 0:
          			flw_137:
/*<137>*/ 			printf("Results from my analysis confirm that\nthe sword Ghirahim wields <r<can be\nbroken >>by your sword, \x0E\x01\x12\x04\x00\x02Master.\n\nI theorize that Ghirahim used magic\nto call this weapon into existence.\n\n\nNow that he is deeply wounded,\nthe sword he wields appears to\nhave become brittle.\n[1]More info![2-]Got it.")
/*<138>*/ 			switch (choice(2)) {
          			  case 0:
/*<139>*/ 				printf("I have detected identical responses\nfrom <r<the center of Ghirahim's sword\nand Ghirahim's chest>>.\n\nBy destroying the <r<sword's core>>, there is\na 100% probability that the sword itself\nwill be destroyed.\n\nI recommend carefully watching the\nsword's movement and repeatedly\nattacking the <r<same spot>>.")
          			  case 1:
          			}
          		  case 1:
/*<255>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_137
          			  case 1:
/*<136>*/ 				printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, \x0E\x01\x12\x04\x00\x02Master, your sword will flash.\nYou can always press (v) to call on me.\x0E\x01\x11\x02\x9CD\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n<r<Analysis>>.")
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_656() {
/*<161>*/ 	start()
/*<163>*/ 	printf("This eternal being has conquered time\nitself. It is the source of all monsters.\n\n\nAccording to tales passed down through\ngenerations, it appears differently in\neach epoch and to each person who\nlays eyes on it.[1]Tell me more![2-]Understood.")
/*<162>*/ 	switch (choice(2)) {
          	  case 0:
/*<236>*/ 		printf("It is clear that <r<Skyward Strikes >>cannot\nbe called down to your sword because\nthis place is under the magical\ninfluence of Demise.\nAttacks using <r<Skyward Strike energy\n>>will not be possible here.\n[1]Tell me more.[2-]Got it.")
/*<224>*/ 		scene_flags[10 'Sealed Grounds'][120 /* 0xE 01 */] = true;
/*<237>*/ 		switch (choice(2)) {
          		  case 0:
/*<155>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 132}) {
          			  case 0:
/*<259>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_154:
/*<154>*/ 					printf("\x0E\x01\x12\x04\x00\x02Master, I see no reason why you cannot\nmake use of the lightning strikes the\nsame way Demise does.\n[1]Tell me more![2-]Got it.")
/*<157>*/ 					switch (choice(2)) {
          					  case 0:
/*<158>*/ 						printf("It is possible to store lightning in the\n<r<Master Sword >>by raising your sword\nin the air as if you were readying a\n<r<Skyward Strike>>.\nWhen lightning strikes in the distance\nand the sky lights up, quickly raise\nyour sword skyward to call down the\nlightning.\nHowever, be aware that while you are\nattempting to be struck by lightning,\nyou will be leaving yourself open to\nDemise's attacks.")
          					  case 1:
          					}
          				  case 1:
/*<159>*/ 					printf("I can confirm it is possible for Demise\nto store the electrical energy of a\nlightning strike in his sword and use it\nto his advantage.\n\x0E\x01\x12\x04\x00\x02Master, should your sword come into\ncontact with Demise's sword once it\nhas electrified, you will receive a\npainful shock.\nIt is essential that you time your\nattacks carefully. Very carefully.\n[1]Tell me more.[2-]Understood.")
/*<160>*/ 					switch (choice(2)) {
          					  case 0:
/*<156>*/ 						printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, \x0E\x01\x12\x04\x00\x02Master, your sword will flash.\nYou can always press (v) to call on me.\x0E\x01\x11\x02\x9CD\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n<r<Analysis>>.")
          					  case 1:
          					}
          				}
          			  case 1:
          				goto flw_154
          			  case 2:
          				goto flw_154
          			  case 3:
          				goto flw_154
          			}
          		  case 1:
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_605() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf("This species of parasite is currently\nattached to <b<Levias>>. It is known for its\nenormous optical structure.\n\nThis horrifying life-form utterly\ncontrols the mind and body of its host.[1]Tell me more![2-]Understood.")
/*<  6>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_242:
/*<242>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<  8>*/ 			printf("My analysis indicates the projectiles\nspit by the <b<Bilocyte >>can be <r<repelled>>\nby your sword, \x0E\x01\x12\x04\x00\x02Master.\n\nFurthermore, I infer that repelling the\nBilocyte's own projectiles back toward\nit could become a very effective means\nof attack.\n[1]Tell me more![2-]Got it.")
/*<  9>*/ 			switch (choice(2)) {
          			  case 0:
/*< 10>*/ 				printf("Based on the creature's anatomy,\nit is probable that this monster's\nweakness is its central <r<eye>>.\n\nHowever, I can confirm that while the\n<r<fins>> on the sides of its head are\nextended, any attack on the <r<eye >>will be\nquite ineffective.\n[1]Tell me more.[2-]Got it.")
/*< 11>*/ 				switch (choice(2)) {
          				  case 0:
/*< 12>*/ 					printf("In order to effectively hit the Bilocyte\nby repelling its projectiles, you must\nconsider the direction in which you are\nswinging your sword.\nBy swinging left and right, you can\ncontrol the direction of the deflection.\n<pause0F>Swinging up or down will deflect\nprojectiles straight back.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<  7>*/ 			printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, \x0E\x01\x12\x04\x00\x02Master, your sword will flash.\nYou can always press (v) to call on me.\x0E\x01\x11\x02\x9CD\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n<r<Analysis>>.")
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_657() {
/*<164>*/ 	start()
/*<165>*/ 	printf("I have something to report, \x0E\x01\x12\x04\x00\x0BMaster.\nMy analysis of this enemy's movement\npatterns is complete.\n\nWhile holding (Z) to lock on to the\nenemy, press (v) to call me. I will\ngive you my analysis.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD Would you like to\nhear it now?[1]Yes.[2-]No.")
/*<166>*/ 	story_flags[772 /* us: 805A9B2A 0x10, jp: 805ACDAA 0x10 */] = true;
/*<167>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_69:
/*< 69>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*< 56>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 46}) {
          			  case 0:
/*<250>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_53:
/*< 53>*/ 					printf("Analysis indicates that the daggers\nGhirahim shoots will align on a single\nplane in one of three orientations:\nhorizontal, vertical, or diagonal.\nWith good timing, you might be able to\nrepel them with a single swing of your\nsword, but my judgment shows that this\nmaneuver will be difficult.[1]Anything else?[2-]Got it.")
/*< 58>*/ 					switch (choice(2)) {
          					  case 0:
/*< 59>*/ 						printf("I can now confirm that Ghirahim has\nthe ability to teleport.\n\n\nFurther study reveals that he may be\nvulnerable immediately after\nteleportation. This is your chance to\nattack.\nHowever, be aware Ghirahim may use\nhis sword to guard against just such\nan attack.\n[1]Anything else?[2-]Got it.")
/*< 60>*/ 						switch (choice(2)) {
          						  case 0:
/*< 61>*/ 							printf("Ghirahim will repeatedly move around\nyou, \x0E\x01\x12\x04\x00\x02Master. I recommend <r<engaging>> \nhim with your sword as he makes his\nattack.\nIt is probable that the moment before\nGhirahim readies his attack, he will\nreveal the direction he will move\nas he attempts to flank you.\nIf you are unable to establish the\ncorrect timing to attack, I suggest\nusing your <g<spin attack>>.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<140>*/ 					printf("I have detected a change in Ghirahim's\nfighting style from the beginning of \nthe battle. \n\nI theorize that this change happened\nbecause of the small amount of damage\nhe sustained.[1]Tell me more![2-]Understood.")
/*<141>*/ 					switch (choice(2)) {
          					  case 0:
/*< 57>*/ 						printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, \x0E\x01\x12\x04\x00\x02Master, your sword will flash.\nYou can always press (v) to call on me.\x0E\x01\x11\x02\x9CD\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n<r<Analysis>>.")
          					  case 1:
          					}
          				}
          			  case 1:
          				goto flw_53
          			  case 2:
          				goto flw_53
          			  case 3:
          				goto flw_53
          			}
          		  case 1:
/*< 63>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 54}) {
          			  case 0:
/*<249>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_62:
/*< 62>*/ 					printf("Speech analysis indicates absolute\nconfidence in his own abilities.\n\n\n\x0E\x01\x12\x04\x00\x02Master, you must watch for Ghirahim's\nability to grasp your sword with his\nbare <r<right hand>>.\n\nIt is highly probable that he observes\nthe <r<angle you hold your sword at>> and\nprepares his defense accordingly.\n\nI recommend attacking from the\ndirection opposite his hand.\n[1]More info![2-]I'm ready.")
/*< 65>*/ 					switch (choice(2)) {
          					  case 0:
/*< 66>*/ 						printf("Should he catch hold of your sword,\nI recommend swinging in the\n<r<direction Ghirahim's hand opens>>.\n[1]More info![2-]Got it.")
/*< 67>*/ 						switch (choice(2)) {
          						  case 0:
/*< 68>*/ 							printf("My analysis confirms that <r<Ghirahim>>'s \nfingers always point upward when\nhe holds \x0E\x01\x12\x04\x00\x01your sword, Master.\n\nThe probability of escaping his grip\n<r<by swinging your sword upward>>\nis approximately 100%.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<284>*/ 					printf("Speech analysis indicates absolute\nconfidence in his own abilities.\n\n\n\x0E\x01\x12\x04\x00\x02Master, you must watch for Ghirahim's\nability to grasp your sword with his\nbare <r<right hand>>.\n\nIt is highly probable that he observes\nthe <r<angle you hold your sword at>> and\nprepares his defense accordingly.\n\nI recommend attacking from the\ndirection opposite his hand.\n[1]More info![2-]I'm ready.")
/*<285>*/ 					switch (choice(2)) {
          					  case 0:
/*< 64>*/ 						printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, \x0E\x01\x12\x04\x00\x02Master, your sword will flash.\nYou can always press (v) to call on me.\x0E\x01\x11\x02\x9CD\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n<r<Analysis>>.")
          					  case 1:
          					}
          				}
          			  case 1:
          				goto flw_62
          			  case 2:
          				goto flw_62
          			  case 3:
          				goto flw_62
          			}
          		}
          	  case 1:
/*<168>*/ 		printf("Whatever you think is best, \x0E\x01\x12\x04\x00\x05Master.\nPlease call for me if you want to hear\nmy findings at a later time.")
          	}
          }

          void entrypoint_006_658() {
/*<169>*/ 	start()
/*<170>*/ 	printf("I have something to report, \x0E\x01\x12\x04\x00\x0BMaster.\nMy analysis of this enemy's movement\npatterns is complete.\n\nWhile holding (Z) to lock on to the\nenemy, press (v) to call me. I will\ngive you my analysis.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD Would you like to\nhear it now?[1]Yes.[2-]No.")
/*<171>*/ 	story_flags[773 /* us: 805A9B2A 0x20, jp: 805ACDAA 0x20 */] = true;
/*<172>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_231:
/*<231>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
          			flw_34:
/*< 34>*/ 			printf("There is a 0% probability that your\nsword will be effective against the\nrock that covers this target's body.\n\nI strongly recommend using items with\npowerful destructive properties.\n[1]More info![2-]Got it.")
/*< 38>*/ 			switch (choice(2)) {
          			  case 0:
/*< 39>*/ 				printf("There is a 100% probability that <y<bombs>>\nthat come into contact with Scaldera's\nbody will immediately explode, due to\nthe creature's high body temperature.\nAnalysis indicates that explosions on\nScaldera's outer surface will not yield\ndesired results, however. You must\nlook for a more effective target site.\n[1]More info![2-]Got it.")
/*< 40>*/ 				switch (choice(2)) {
          				  case 0:
/*< 41>*/ 					printf("Results from my analysis confirm that\nin order to remove the rocks covering\nScaldera, you will need to inflict\npowerful internal damage.\nWhen Scaldera is inhaling a large\namount of air, I suggest<r< throwing a\nbomb >><r<into its mouth>>.")
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<247>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_34
          			  case 1:
/*< 37>*/ 				printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, \x0E\x01\x12\x04\x00\x02Master, your sword will flash.\nYou can always press (v) to call on me.\x0E\x01\x11\x02\x9CD\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n<r<Analysis>>.")
          			}
          		}
          	  case 1:
/*<173>*/ 		printf("Whatever you think is best, \x0E\x01\x12\x04\x00\x05Master.\nPlease call for me if you want to hear\nmy findings at a later time.")
          	}
          }

          void entrypoint_006_659() {
/*<174>*/ 	start()
/*<175>*/ 	printf("I have something to report, \x0E\x01\x12\x04\x00\x0BMaster.\nMy analysis of this enemy's movement\npatterns is complete.\n\nWhile holding (Z) to lock on to the\nenemy, press (v) to call me. I will\ngive you my analysis.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD Would you like to\nhear it now?[1]Yes.[2-]No.")
/*<176>*/ 	story_flags[774 /* us: 805A9B2A 0x40, jp: 805ACDAA 0x40 */] = true;
/*<177>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_17:
/*< 17>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 10}) {
          		  case 0:
/*<245>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				flw_14:
/*< 14>*/ 				printf("The <r<weak points >>are its overdeveloped\npincers, but you must hit each at the\nright angle relative to the pincer's \nposition to be effective.\n[1]Tell me more.[2-]Got it.")
/*< 19>*/ 				switch (choice(2)) {
          				  case 0:
/*< 20>*/ 					printf("This beast has a tendency to bury itself\nin the sand when it feels its health\nis endangered.\n\nWhen it is burrowed below the sand,\nyou can expect at least an 85% chance\nthat it will attempt to stab you with\nits tail.\nI highly recommend removing the\ncreature's environmental advantage\nby <r<blowing away >>sand, thereby\nrevealing its position.\n[1]Tell me more![2-]Got it.")
/*< 21>*/ 					switch (choice(2)) {
          					  case 0:
/*< 22>*/ 						printf("Analysis reveals that the creature's\n<r<central eye >>will be vulnerable to\nattack once its pincers have been\nproperly disposed of.\nI calculate a near 100% chance that\nan assault on this weak point will \nultimately prove quite fatal.\n\nHowever, I infer from the armor\nsurrounding the <r<central eye >>that\nhorizontal, vertical, and diagonal\nslashes will be entirely ineffective.")
          					  case 1:
          					}
          				  case 1:
          				}
          			  case 1:
/*< 18>*/ 				printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, \x0E\x01\x12\x04\x00\x02Master, your sword will flash.\nYou can always press (v) to call on me.\x0E\x01\x11\x02\x9CD\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n<r<Analysis>>.")
          			}
          		  case 1:
          			goto flw_14
          		  case 2:
          			goto flw_14
          		  case 3:
          			goto flw_14
          		}
          	  case 1:
/*<178>*/ 		printf("Whatever you think is best, \x0E\x01\x12\x04\x00\x05Master.\nPlease call for me if you want to hear\nmy findings at a later time.")
          	}
          }

          void entrypoint_006_677() {
/*< 42>*/ 	start()
/*< 44>*/ 	printf("As you can likely gather from its other\ntitle, this \x201CAbyssal Leviathan\" is said to\nhave been a tyrant of the ancient seas.\n\nIts <y<<r<enormous tentacles<y< >>can be repelled,\nbut they will regenerate after a\nshort time.\n[1]More info![2-]Understood.")
/*< 45>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_268:
/*<268>*/ 		switch (zone_temp_flags[20 /* 0x3 10 */]) {
          		  case 0:
/*<262>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 226}) {
          			  case 0:
/*<269>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_261:
/*<261>*/ 					printf("In order to attack Tentalus's weak\nspot, its <r<eye>>, you must first deal with\nthe tentacles attempting to latch on\nto you.\nMy analysis shows you can easily\nslice the tip of the tentacles with\nyour sword.\n[1]More info![2-]Got it.")
/*<264>*/ 					switch (choice(2)) {
          					  case 0:
/*<265>*/ 						printf("Because this monster's tentacles attack\nincessantly and in large number, it is\ntoo dangerous to respond to them one\nat a time.\nMy analysis indicates it is possible to\nrepel the tentacles more efficiently by\nconcentrating an all-out assault on\nthem with your sword.\n[1]More info![2-]Got it.")
/*<266>*/ 						switch (choice(2)) {
          						  case 0:
/*<267>*/ 							printf("When the tentacles are repelled,\nthey may drop <r<hearts>> and <r<arrows>>.\n\n\nShould you find yourself in danger\nbecause of low hearts or arrows,\nconcentrate on attacking the tentacles\nrather than fleeing from battle.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<263>*/ 					printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, \x0E\x01\x12\x04\x00\x02Master, your sword will flash.\nYou can always press (v) to call on me.\x0E\x01\x11\x02\x9CD\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n<r<Analysis>>.")
          				}
          			  case 1:
          				goto flw_261
          			  case 2:
          				goto flw_261
          			  case 3:
          				goto flw_261
          			}
          		  case 1:
/*< 46>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 36}) {
          			  case 0:
/*<248>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_43:
/*< 43>*/ 					printf("My analysis shows that by repelling\na number of its aggressive tentacles,\nthe beast will reveal itself.\n\nThere is a 99% probability that the\ntentacles that attacked you on the ship,\nMaster, can be attributed to Tentalus.\n\nI theorize that using a <r<sacred power>> \nwill be the most effective means\nof repelling the tentacles.\n[1]More info![2-]Got it.")
/*< 48>*/ 					switch (choice(2)) {
          					  case 0:
/*< 49>*/ 						printf("Results from my analysis confirm that\nits tentacles can be severed with a\nwell-aimed <r<Skyward Strike>>.\n\nI theorize that the creature's <r<eye>> is its \nweak point, but the probability that you\ncan actually hit the eye with a Skyward\nStrike is approximately 0%.\nInstead, I recommend utilizing\nlong-range weapons.\n[1]More info![2-]Got it.")
/*< 50>*/ 						switch (choice(2)) {
          						  case 0:
/*< 51>*/ 							printf("To accurately strike at the creature's\n<y<eye>>\x2014its weak spot\x2014a <y<bow>> will be most\neffective.\n\nYou can press \x0E\x02\x04\x02\x8CD to move with your\n<r<<y<bow<r< >>drawn. I recommend shooting\n<r<arrows >>immediately after dodging\nattacks launched by Tentalus.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*< 47>*/ 					printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, \x0E\x01\x12\x04\x00\x02Master, your sword will flash.\nYou can always press (v) to call on me.\x0E\x01\x11\x02\x9CD\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n<r<Analysis>>.")
          				}
          			  case 1:
          				goto flw_43
          			  case 2:
          				goto flw_43
          			  case 3:
          				goto flw_43
          			}
          		}
          	  case 1:
          	}
          }

          void entrypoint_006_660() {
/*<179>*/ 	start()
/*<180>*/ 	printf("A report, \x0E\x01\x12\x04\x00\x0BMaster. My analysis of this\nenemy's movement patterns is\ncomplete.\n\nWould you like to hear my analysis\nnow?\n[1]Yes.[2-]No.")
/*<181>*/ 	story_flags[775 /* us: 805A9B2A 0x80, jp: 805ACDAA 0x80 */] = true;
/*<182>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_27:
/*< 27>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 20}) {
          		  case 0:
/*<246>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				flw_24:
/*< 24>*/ 				printf("It is highly probable that if the <r<red\ncores >>in its arms were to be ejected,\nthe unit would lose integrity and the\nlimbs would sever from the body.\nHowever, during normal operation the\ncores are likely hidden below the\nforearm plating.\n[1]More info![2-]Got it.")
/*< 29>*/ 				switch (choice(2)) {
          				  case 0:
/*< 30>*/ 					printf("Results from my analysis show that the\n<r<red cores>> in Koloktos's arms will only\nbe revealed when the arms are\nstretched out to full length.\nFast and timely counterattacks after\nKoloktos swings its arms down have\nthe best chance of success.\n[1]More info![2-]Got it.")
/*< 31>*/ 					switch (choice(2)) {
          					  case 0:
/*< 32>*/ 						printf("I estimate a high probability that the\n<r<red cores >>can be removed using your\n<y<whip>>.\n\nWhen Koloktos's arms lower, there\nwill be a brief moment when you can \nattack the <r<chest core>>. \n\nHowever, when targeting the <r<chest\ncore>>, there is nowhere to hook on to\nwith your <y<whip>>. Therefore, removing\nthe core will not be possible.")
          					  case 1:
          					}
          				  case 1:
          				}
          			  case 1:
/*< 28>*/ 				printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, \x0E\x01\x12\x04\x00\x02Master, your sword will flash.\nYou can always press (v) to call on me.\x0E\x01\x11\x02\x9CD\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n<r<Analysis>>.")
          			}
          		  case 1:
          			goto flw_24
          		  case 2:
          			goto flw_24
          		  case 3:
          			goto flw_24
          		}
          	  case 1:
/*<183>*/ 		printf("Understood, Master. If you wish to\nhear my analysis later, simply hold (Z) \nto lock on to the enemy and then press\n(v) to call me.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_661() {
/*<184>*/ 	start()
/*<185>*/ 	printf("A report, \x0E\x01\x12\x04\x00\x0BMaster. My analysis of this\nenemy's movement patterns is\ncomplete.\n\nWould you like to hear my analysis\nnow?\n[1]Yes.[2-]No.")
/*<186>*/ 	story_flags[776 /* us: 805A9B2D 0x01, jp: 805ACDAD 0x01 */] = true;
/*<187>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_268
          	  case 1:
/*<188>*/ 		printf("Understood, Master. If you wish to\nhear my analysis later, simply hold (Z) \nto lock on to the enemy and then press\n(v) to call me.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_610() {
/*< 13>*/ 	start()
/*< 15>*/ 	printf("An <b<Aracha>> that has survived its very\nlengthy larval stage is known as a\n\x201CThousand-Year Arachnid,\" which\nis precisely what you see before you.\nOver 90% of its body is shielded by a\ntough, chitinous armor that can deflect\neven the sharpest blade.\n[1]Tell me more.[2-]Understood.")
/*< 16>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_17
          	  case 1:
          	}
          }

          void entrypoint_006_662() {
/*<189>*/ 	start()
/*<190>*/ 	printf("A report, \x0E\x01\x12\x04\x00\x0BMaster. My analysis of this\nenemy's movement patterns is\ncomplete.\n\nWould you like to hear my analysis\nnow?\n[1]Yes.[2-]No.")
/*<191>*/ 	story_flags[777 /* us: 805A9B2D 0x02, jp: 805ACDAD 0x02 */] = true;
/*<192>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_87:
/*< 87>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*< 74>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 66}) {
          			  case 0:
/*<252>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_71:
/*< 71>*/ 					printf("When Ghirahim shoots his daggers,\nI recommend repelling them by\nswinging your sword along the line\nthe knives are positioned in.\nLogically, if surrounded by daggers,\nusing <r<a sword technique that attacks in \nall directions >>would be effective.\n[1]Anything else?[2-]I'm ready.")
/*< 76>*/ 					switch (choice(2)) {
          					  case 0:
/*< 77>*/ 						printf("There will be a significant opening for\ncounterattacks if you are able to avoid\nGhirahim's overhead attack when he\nteleports above your head.\nHe will teleport to places other than\nabove you, of course, but my analysis\nconfirms an interesting behavior\npattern.\nHe assumes different stances when he\nplans to teleport above you and when\nhe plans to go somewhere else.\n[1]Anything else?[2-]Got it.")
/*< 78>*/ 						switch (choice(2)) {
          						  case 0:
/*< 79>*/ 							printf("I am confident Ghirahim will use his\nsword to defend against your attacks,\n\x0E\x01\x12\x04\x00\x01Master.\n\nGhirahim wields two swords, so the\nprobability that he will block two of\nyour sequential attacks is 100%.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*<142>*/ 					printf("I have detected a change in Ghirahim's\nfighting style since the beginning of\nthe battle.\n\nI have concluded that this change\nhappened because of the small amount\nof damage he sustained.\n[1]Tell me more![2-]Understood.")
/*<143>*/ 					switch (choice(2)) {
          					  case 0:
/*< 75>*/ 						printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, \x0E\x01\x12\x04\x00\x02Master, your sword will flash.\nYou can always press (v) to call on me.\x0E\x01\x11\x02\x9CD\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n<r<Analysis>>.")
          					  case 1:
          					}
          				}
          			  case 1:
          				goto flw_71
          			  case 2:
          				goto flw_71
          			  case 3:
          				goto flw_71
          			}
          		  case 1:
/*< 81>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 22, 'param4': 4, 'param5': 74}) {
          			  case 0:
/*<251>*/ 				switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          				  case 0:
          					flw_80:
/*< 80>*/ 					printf("Analysis indicates that the daggers that\nappear around Ghirahim also act as a\ndefensive barrier.\n\nRemoving these daggers before\nattacking should be an effective means\nof breaking down his defenses.\n[1]More info![2-]Got it.")
/*< 83>*/ 					switch (choice(2)) {
          					  case 0:
/*< 84>*/ 						printf("It appears that Ghirahim prefers to\nuse his right hand to attempt to grab\nyour sword, \x0E\x01\x12\x04\x00\x02Master.\n\nShould he succeed, I recommend\n<r<swinging your sword up and down\n>>to force him to release it.\n\nHowever, Ghirahim continues to utilize\nmore of his true power, and the\nprobability of it taking more than one\nswing to release your sword is 100%.\n[1]Tell me more![2-]Got it.")
/*< 85>*/ 						switch (choice(2)) {
          						  case 0:
/*< 86>*/ 							printf("To land an attack on Ghirahim, I\nadvise you to swing your sword from a\ndirection that cannot be blocked by\ndaggers or Ghirahim's right hand.\nGhirahim will move his right hand\nin time with your attacks. However,\n\x0E\x01\x12\x04\x00\x02Master, there will be times when <r<he is\ntoo slow to meet your attack>>.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*< 82>*/ 					printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, \x0E\x01\x12\x04\x00\x02Master, your sword will flash.\nYou can always press (v) to call on me.\x0E\x01\x11\x02\x9CD\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n<r<Analysis>>.")
          				}
          			  case 1:
          				goto flw_80
          			  case 2:
          				goto flw_80
          			  case 3:
          				goto flw_80
          			}
          		}
          	  case 1:
/*<193>*/ 		printf("Understood, Master. If you wish to\nhear my analysis later, simply hold (Z) \nto lock on to the enemy and then press\n(v) to call me.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_663() {
/*<194>*/ 	start()
/*<195>*/ 	printf("A report, \x0E\x01\x12\x04\x00\x0BMaster. My analysis of this\nenemy's movement patterns is\ncomplete.\n\nWould you like to hear my analysis\nnow?\n[1]Yes.[2-]No.")
/*<196>*/ 	story_flags[778 /* us: 805A9B2D 0x04, jp: 805ACDAD 0x04 */] = true;
/*<197>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_239
          	  case 1:
/*<198>*/ 		printf("Understood, Master. If you wish to\nhear my analysis later, simply hold (Z) \nto lock on to the enemy and then press\n(v) to call me.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_664() {
/*<199>*/ 	start()
/*<200>*/ 	printf("A report, \x0E\x01\x12\x04\x00\x0BMaster. My analysis of this\nenemy's movement patterns is\ncomplete.\n\nWould you like to hear my analysis\nnow?\n[1]Yes.[2-]No.")
/*<201>*/ 	story_flags[779 /* us: 805A9B2D 0x08, jp: 805ACDAD 0x08 */] = true;
/*<202>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_240
          	  case 1:
/*<203>*/ 		printf("Understood, Master. If you wish to\nhear my analysis later, simply hold (Z) \nto lock on to the enemy and then press\n(v) to call me.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_699() {
/*<270>*/ 	start()
/*<271>*/ 	switch (story_flags[844 /* us: 805A9B35 0x08, jp: 805ACDB5 0x08 */]) {
          	  case 0:
/*<273>*/ 		printf("This giant species of spider inhabits the\ndeepest areas of forests. It attacks\nwith highly adhesive webbing in order\nto prevent its prey from escaping.\nIt has a tough outer carapace, but its\nstomach may be vulnerable to attack.\n[1]Tell me more![2-]Got it.")
/*<275>*/ 		switch (choice(2)) {
          		  case 0:
/*<281>*/ 			switch (story_flags[845 /* us: 805A9B35 0x10, jp: 805ACDB5 0x10 */]) {
          			  case 0:
/*<283>*/ 				printf("I have observed that it has a tendency\nto move with its back toward its prey\nto prevent its weak point from being\nexposed.\nTherefore, you must find a way to flip\nit over to attack its weak point.\n[1]Anything else?[2-]Got it.")
/*<276>*/ 				switch (choice(2)) {
          				  case 0:
/*<277>*/ 					printf("Its lone weak point is the center of its\nabdomen, but it is surrounded by tough\nchitin. This leads me to conclude that a\n<g<fatal blow>> will be most effective.")
          					flw_279:
/*<279>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 21, 'param4': 2, 'param5': 244}) {
          					  case 0:
/*<278>*/ 						printf("You have defeated <numeric arg0(1)> of this type of\nenemy. My analysis shows that your\nbattle performance rating with this\nenemy is <string arg0>.")
          					  case 1:
          					}
          				  case 1:
          					goto flw_279
          				}
          			  case 1:
/*<282>*/ 				printf("I have observed that it has a tendency\nto move with its back toward its prey\nto prevent its weak point from being\nexposed.\nTherefore, you must find a way to flip\nthe beast over to access its weak point.")
/*<280>*/ 				story_flags[845 /* us: 805A9B35 0x10, jp: 805ACDB5 0x10 */] = true;
          				goto flw_279
          			}
          		  case 1:
          			goto flw_279
          		}
          	  case 1:
/*<272>*/ 		printf("This giant species of spider inhabits the\ndeepest areas of forests. It attacks\nwith highly adhesive webbing in order\nto prevent its prey from escaping.\nIt has a tough outer carapace, but its\nstomach may be vulnerable to attack.\n\n\nI am currently conducting additional\nanalysis into its movement patterns.")
/*<274>*/ 		story_flags[844 /* us: 805A9B35 0x08, jp: 805ACDB5 0x08 */] = true;
          		goto flw_279
          	}
          }

          void entrypoint_006_648() {
/*< 23>*/ 	start()
/*< 25>*/ 	printf("The cursed energy supply Ghirahim\nprovided to this contraption has\ngiven it power far beyond its\nconventional limits.\nThe <r<red, orb-shaped cores >>embedded\nin its torso and arms provide it limited\nstability and prevent it from falling\nto pieces.\n[1]More info![2-]Understood.")
/*< 26>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_27
          	  case 1:
          	}
          }

          void entrypoint_006_665() {
/*< 33>*/ 	start()
/*< 35>*/ 	printf("Its body is completely covered in rock,\nbut you can see its weak point, the <r<eye>>,\nthrough the cracks in this outer shell.\n\nIf you are able to remove parts of this\ncreature's rocky shell, you will vastly\nincrease your probability of success.[1]More info![2-]Understood.")
/*< 36>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_231
          	  case 1:
          	}
          }

          void entrypoint_006_649() {
/*< 52>*/ 	start()
/*< 54>*/ 	printf("I have no confirmed information about\nthis man, other than he refers to\nhimself as a \x201CDemon Lord.\"\n\nI sense a powerful and evil aura, and I\nestimate his level of ability as highly\nadept. However, according to analysis,\nhe has yet to reveal his true power.\n[1]More info![2-]Understood.")
/*< 55>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_69
          	  case 1:
          	}
          }

          void entrypoint_006_666() {
/*<204>*/ 	start()
/*<205>*/ 	printf("A report, \x0E\x01\x12\x04\x00\x0BMaster. My analysis of this\nenemy's movement patterns is\ncomplete.\n\nWould you like to hear my analysis\nnow?\n[1]Yes.[2-]No.")
/*<206>*/ 	story_flags[780 /* us: 805A9B2D 0x10, jp: 805ACDAD 0x10 */] = true;
/*<207>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_241
          	  case 1:
/*<208>*/ 		printf("Understood, Master. If you wish to\nhear my analysis later, simply hold (Z) \nto lock on to the enemy and then press\n(v) to call me.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_667() {
/*<209>*/ 	start()
/*<210>*/ 	printf("A report, \x0E\x01\x12\x04\x00\x0BMaster. My analysis of this\nenemy's movement patterns is\ncomplete.\n\nWould you like to hear my analysis\nnow?\n[1]Yes.[2-]No.")
/*<211>*/ 	story_flags[781 /* us: 805A9B2D 0x20, jp: 805ACDAD 0x20 */] = true;
/*<212>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_242
          	  case 1:
/*<213>*/ 		printf("Understood, Master. If you wish to\nhear my analysis later, simply hold (Z) \nto lock on to the enemy and then press\n(v) to call me.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_650() {
/*< 70>*/ 	start()
/*< 72>*/ 	printf("Ghirahim is the <b<Demon Lord >>leading\nthe monsters. He displays superior\nmental and physical prowess, as well\nas expert command of magic.\nThough possessing some gentleman-\nlike qualities, he will devolve to his\ntrue nature when enraged.\n[1]Tell me more![2-]Understood.")
/*< 73>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_87
          	  case 1:
          	}
          }

          void entrypoint_006_668() {
/*<214>*/ 	start()
/*<215>*/ 	printf("A report, \x0E\x01\x12\x04\x00\x0BMaster. My analysis of this\nenemy's movement patterns is\ncomplete.\n\nWould you like to hear my analysis\nnow?\n[1]Yes.[2-]No.")
/*<216>*/ 	story_flags[782 /* us: 805A9B2D 0x40, jp: 805ACDAD 0x40 */] = true;
/*<217>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_238:
/*<238>*/ 		switch (story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */]) {
          		  case 0:
          			flw_116:
/*<116>*/ 			printf("He is now revealing his true power.\nI am detecting a significant increase\nin muscular strength.\n\nUnfortunately, I must also conclude\nthat none of your weapons will be\neffective against him.\n[1]Tell me more![2-]Got it.")
/*<120>*/ 			switch (choice(2)) {
          			  case 0:
/*<121>*/ 				printf("Analysis indicates that attacks from\nyour sword <r<may drive Ghirahim back>>,\nif ever so slightly, \x0E\x01\x12\x04\x00\x01Master.\n[1]More info![2-]Got it.")
/*<122>*/ 				switch (choice(2)) {
          				  case 0:
/*<123>*/ 					printf("I have noted that Ghirahim has a\ntendency to stand near the center of\nthe platform, \x0E\x01\x12\x04\x00\x02Master.\n\nThere is an 85% probability he does\nthis to avoid falling off.\n[1]More info![2-]Got it.")
/*<286>*/ 					switch (choice(2)) {
          					  case 0:
/*<287>*/ 						printf("\x0E\x01\x12\x04\x00\x02Master, there is a 95% chance that\nGhirahim will attempt <r<to intercept\nyour sword >>in order to defend against\nyour attacks, just like last time.\nIf you notice a large change in his\nstance, take care to note the <r<position\nof his hand>>.")
          					  case 1:
          					}
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
/*<253>*/ 			switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          			  case 0:
          				goto flw_116
          			  case 1:
/*<288>*/ 				printf("He is now revealing his true power.\nI am detecting a significant increase\nin muscular strength.\n\nUnfortunately, I must also conclude\nthat none of your weapons will be\neffective against him.\n[1]Tell me more![2-]Got it.")
/*<289>*/ 				switch (choice(2)) {
          				  case 0:
/*<290>*/ 					printf("Analysis indicates that attacks from\nyour sword <r<may drive Ghirahim back>>,\nif ever so slightly, \x0E\x01\x12\x04\x00\x01Master.\n[1]More info![2-]Got it.")
/*<291>*/ 					switch (choice(2)) {
          					  case 0:
/*<292>*/ 						printf("I have noted that Ghirahim has a\ntendency to stand near the center of\nthe platform, \x0E\x01\x12\x04\x00\x02Master.\n\nThere is an 85% probability he does\nthis to avoid falling off.\n[1]More info![2-]Got it.")
/*<293>*/ 						switch (choice(2)) {
          						  case 0:
/*<119>*/ 							printf("This is all the information I have at\nthe present time.\n\n\nWhen I have more information to\nreport, \x0E\x01\x12\x04\x00\x02Master, your sword will flash.\nYou can always press (v) to call on me.\x0E\x01\x11\x02\x9CD\n\nFurthermore, when you require\ninformation about your equipment or\nyour surroundings, please select\n<r<Analysis>>.")
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
          				}
          			}
          		}
          	  case 1:
/*<218>*/ 		printf("Understood, Master. If you wish to\nhear my analysis later, simply hold (Z) \nto lock on to the enemy and then press\n(v) to call me.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

          void entrypoint_006_651() {
/*<115>*/ 	start()
/*<117>*/ 	printf("There is a 90% change in outward\nappearance compared to previous\nencounters with him. I detect a dark\naura emanating from his entire body.\nBe cautious, \x0E\x01\x12\x04\x00\x01Master. This opponent is \nextremely dangerous and likely to\nfell you with a single blow.\n[1]Tell me more.[2-]Understood.")
/*<118>*/ 	switch (choice(2)) {
          	  case 0:
          		goto flw_238
          	  case 1:
          	}
          }

          void entrypoint_006_669() {
/*<219>*/ 	start()
/*<220>*/ 	printf("A report, \x0E\x01\x12\x04\x00\x0BMaster. My preliminary\nanalysis of <b<Demise>> is now complete.\nWould you like to hear what I have\ndiscovered?\n[1]Yes.[2-]No.")
/*<221>*/ 	story_flags[783 /* us: 805A9B2D 0x80, jp: 805ACDAD 0x80 */] = true;
/*<222>*/ 	switch (choice(2)) {
          	  case 0:
/*<232>*/ 		printf("It is clear that <r<Skyward Strikes >>cannot\nbe called down to your sword because\nthis place is under the magical\ninfluence of Demise.\nAttacks using <r<Skyward Strike energy\n>>will not be possible here.\n[1]Tell me more.[2-]Got it.")
/*<233>*/ 		switch (choice(2)) {
          		  case 0:
/*<225>*/ 			printf("It is highly probable that the only\nweapon capable of wounding Demise\nis the <y<Master Sword >>itself. No other\nweapon can affect him.\n[1]Tell me more![2-]Got it.")
/*<226>*/ 			switch (choice(2)) {
          			  case 0:
/*<227>*/ 				switch (scene_flags[120 /* 0xE 01 */]) {
          				  case 0:
/*<228>*/ 					printf("I can confirm it is possible for Demise\nto store the electrical energy of a\nlightning strike in his sword and use it\nto his advantage.\n\x0E\x01\x12\x04\x00\x02Master, should your sword come into\ncontact with Demise's sword once it\nhas electrified, you will receive a\npainful shock.[1]Tell me more.[2-]Understood.")
/*<230>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_229:
/*<229>*/ 						printf("I need more time to complete my\nanalysis of Demise.\n\n\nIn a few moments, use (Z) to lock on to\nDemise, and then call me with (v).\nI will report my findings then.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          					  case 1:
          					}
          				  case 1:
          					goto flw_229
          				}
          			  case 1:
          			}
          		  case 1:
          		}
          	  case 1:
/*<223>*/ 		printf("Understood, Master. If you wish to\nhear my analysis later, simply hold (Z) \nto lock on to the enemy and then press\n(v) to call me.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          	}
          }

