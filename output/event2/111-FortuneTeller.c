void entrypoint_111_01() {
	start()
	switch (story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */]) {
	  case 0:
		switch (loadzone_temp_flags[3 /* 0x9 08 */]) {
		  case 0:
			flw_19:
			printf("What? I just told you what your\nfortune was. I described everything I\nsaw in detail! Didn't you hear me the\nfirst time?!\nFine. Fine... I'll tell you one more time,\nso listen up! And don't think I can't\nsee when you're not paying attention.")
			loadzone_temp_flags[3 /* 0x9 08 */] = false;
			flw_74:
			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
			  case 0:
				printf("Young man, whatever have you done?\n\n\n\nIf my eyes do not betray me, then you\nare the one behind the disappearance\nof the Isle of the Goddess! Yess...\nNothing escapes my gaze.\nWell, worry not. I can see that you did\nnot make the isle disappear just for\nidle amusement!\n\nStill, I am afraid that it will be up to\nyou to find the proper path from here.\nTrust yourself!")
				flw_127:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 111), ('param2', 5), ('next', -1), ('param3', 7)])
			  case 1:
				switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
				  case 0:
					printf("Ah, yesss... My vision reveals that you\nwill find what you seek on the Isle of\nthe Goddess.\n\nHowever, these great big eyes also see\nmuch peril. Your path will not be an\neasy one. Prepare yourself well!")
					goto flw_127
				  case 1:
					switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
					  case 0:
						printf("So I see you have finally passed the\nfinal trial... Oh, yessss, all is revealed\nto my uncanny vision.\n\nI can see what you're after. You want\nto know what to do with the item you\ngot from the trial, don't you? \n\nSomewhere here in Skyloft is a #####statue\nof an odd bird #####with #####gem-like eyes#####.\nOh, but one of the gems is missing.\nSurely you've seen it before...\nAhem... If you place the item you have\nin the socket, your path will be clear!\nYessss...I see it all now...")
						goto flw_127
					  case 1:
						switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
						  case 0:
							printf("You will use the song you obtained\nfrom the great swimmer above the\nclouds to discover #####the location of the\nnext trial#####.\nMy vision shows me that this next trial\nawaits you #####somewhere in this very town\nof Skyloft#####.\n\nStrange... I have no idea what that\neven means!")
							goto flw_127
						  case 1:
							switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
							  case 0:
								switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
								  case 0:
									switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
									  case 0:
										printf("Oh, there it is! Yesss, I see you have\ngathered three parts of the song you\nseek, and the fourth... It is held by\nsomeone very, very big!\nMake haste, for when you find this\nmassive creature, your song will be\ncomplete. I have foreseen it!")
										goto flw_127
									  case 1:
										flw_71:
										switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
										  case 0:
											OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 497), ('param2', 1), ('next', 78), ('param3', 23)])
											switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 52)])) {
											  case 0:
												printf("I see the task that lies before you,\nyoung man... Oh yes, I see all...\n\n\nYou seek a place to lay down roots.\nBut these are the roots of no ordinary\ntree, are they? So where can this tree\ngrow deep and strong?\n#####I see...#####a temple! A temple where an\nold woman now lives. Yes, there you\nwill find the perfect place!")
												flw_88:
												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 111), ('param2', 5), ('next', -1), ('param3', 7)])
											  case 1:
												printf("Young man, you seek a song that has\nbeen divided into four parts, do you\nnot? Yes, yessss...I see all.\n\nThen there are one...two...####\nthree\nregions that you must visit! And you\nmay go to them in the order of your\nchoosing!\nIn other words, go wherever you want,\nOK? You're bound to find something.")
												goto flw_88
											}
										  case 1:
											switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
											  case 0:
												printf("I see you've finally found the one\nyou've been searching for! That is\nwonderful news.\n\nHowever, your trials are not yet ended!\nNow you must speak to the great giant\nwho swims above the clouds.\n\nIf you wish to know more, you should\ntalk to the #####headmaster of the Knight\nAcademy#####.")
												flw_126:
												OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 111), ('param2', 5), ('next', -1), ('param3', 7)])
											  case 1:
												switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
												  case 0:
													printf("Gulp... Again I see the shadow of a\ntowering monster...\n\n\nMy boy...no matter how many times I\npeer into your future, it never provides\na dull moment!\n\nOh, do forgive me... I didn't mean to\nimply your fate was entertaining, even\nif it is... Just take plenty of #####potions#####.\nThe fortunes tell me you'll be fine!")
													goto flw_126
												  case 1:
													switch (story_flags[73 /* us: 805A9AE9 0x40, jp: 805ACD69 0x40 */]) {
													  case 0:
														switch (story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */]) {
														  case 0:
															switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
															  case 0:
																switch (story_flags[187 /* us: 805A9AE9 0x04, jp: 805ACD69 0x04 */]) {
																  case 0:
																	printf("Aha! The task before you is as clear as\nmy unblinking eyes, young man!\n\n\nIt is also as hot as ever within the\nmountain of fire. To go there with\nan #####Iron Shield##### would be most wise!")
																	flw_186:
																	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 111), ('param2', 5), ('next', -1), ('param3', 7)])
																  case 1:
																	switch (story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */]) {
																	  case 0:
																		printf("I see a vision, yesss... I see you at a\nmountain of fire, guiding a basin of\nwater.\n\nAnd...ah, yes! Failure to deliver it will\nspell trouble for a certain someone!")
																		goto flw_186
																	  case 1:
																		printf("Water, water nowhere...and so great\nthe need! Such a thirst to quench!\nThis is a vexing circumstance indeed. \n\nBut, young man, you have already\ndiscovered the basin needed in order\nto carry the water.\n\nYes, yes...it's all clear to me now.\nNever forget...these eyes see ALL!\nGo to the woods, for it is there that\nyou will find what you seek.")
																		switch (story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */]) {
																		  case 0:
																			goto flw_186
																		  case 1:
																			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 90), ('param2', 0), ('next', 178), ('param3', 51)])
																			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 100), ('next', 95), ('param3', 16)])
																			printf("I calculate a 60% probability that the\nobject you seek is in the woods.\nI advise you to search there.\n\n######Do you want me to calibrate your\n#####dowsing##### ability to search for the\n#####Water Basin#####?\n#####Yep!#####No, thanks.")
																			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 60)])) {
																			  case 0:
																				story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = true;
																				story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
																				story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
																				story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
																				story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
																				story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
																				OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 13), ('next', 96), ('param3', 56)])
																				printf("######Yes, Master. Your #####dowsing##### ability\nis now set to detect the #####Water Basin#####.\nI suggest you begin searching at once.")
																				story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
																				flw_105:
																				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 125), ('param3', 36)])
																				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', 124), ('param3', 16)])
																				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 111), ('param2', 5), ('next', -1), ('param3', 7)])
																			  case 1:
																				printf("######Yes, Master. I have canceled your\nrequest to set your dowsing ability.\nPlease talk to this person again when\nyou want to regain this dowsing target.")
																				goto flw_105
																			}
																		}
																	}
																}
															  case 1:
																printf("Ahhh, I see you passed the trial of fire\nwith ease. But you have jumped from\nthe frying pan into...troubled water!\nOh dear... I mean, water troubles!\nOoooh, yess... I see that lack of water\nwill cause you much hardship. When\nthis happens, return and visit me\nonce more.")
																flw_89:
																OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 111), ('param2', 5), ('next', -1), ('param3', 7)])
															}
														  case 1:
															printf("Sheesh! How many of these trials\nmust you undergo before your hunger\nfor challenge will be sated?!\n\nThis time I see...fire! You will find\n#####the entrance to a trial##### lying hidden on\na fiery mountain!\n\nAnd of course you would not think to\ntake a #####Wooden Shield#####, because that\nwould be foolish!")
															goto flw_89
														}
													  case 1:
														switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
														  case 0:
															printf("My big, crystal-clear eyes...they see\na path before you! You must learn a\n#####song #####within a holy sanctum!\n\nAnd what's this? My vision shows me\nit is a place you've visited before.\nA sacred place among the clouds...")
															flw_185:
															OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 111), ('param2', 5), ('next', -1), ('param3', 7)])
														  case 1:
															switch (story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */]) {
															  case 0:
																switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
																  case 0:
																	printf("Oho! You appear to have passed a\ngreat trial in a sandy place. No time\nfor congratulations--more visions\napproach!\nHmm... You must go to a place with\neven MORE sand. But I also see\n#####an expanse of water#####...##### And a #####ship#####!#####\nThis is all very confusing to behold...\nAnyway, you need to get to another\nsandy place!")
																	goto flw_185
																  case 1:
																	printf("What's next for you? Let's see what\nwe can see... You will find #####the entrance\nto a trial #####lying hidden in a sandy place!\n\nThat is all the vision shows. These\neyes, they have seen much. Your next\ndestination is a place awash in sand.")
																	goto flw_185
																}
															  case 1:
																switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
																  case 0:
																	printf("My big, crystal-clear eyes...they see\na path before you! You must learn a\n#####song #####within a holy sanctum!\n\nAnd what's this? My vision shows me\nit is a place you've visited before.\nA sacred place among the clouds...")
																	flw_87:
																	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 111), ('param2', 5), ('next', -1), ('param3', 7)])
																  case 1:
																	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
																	  case 0:
																		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
																		  case 0:
																			printf("Oh! I see that you've safely cleared the\ntrial in the woods. Yessss...you can hide\nnothing from these eyes!\n\nMy visions...they show me a##### large tree\n#####in the middle of that forest. There is\nan important individual there.\n\nAnd a large stone statue...#####yesss...\nUnderground...##### Going up, going\ndown... Oh, yes, I see a flurry of\nactivity in your future.\nAnyway, just get yourself to the place\nwith many trees!")
																			goto flw_87
																		  case 1:
																			printf("Young man, I see visions of the path\nthat lies before you. You will face a\ntrial! Yesss...deep within the shadows.\nA hair-raising test...\nGo to the woods! There you will find\nthe test that awaits you!")
																			goto flw_87
																		}
																	  case 1:
																		switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
																		  case 0:
																			printf("Two whirling sails face a great tower,\nand atop that tower you play a tune.\nThen I see...light! A great light!\n\nThe light illuminates the path you\nmust follow!")
																			OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 111), ('param2', 5), ('next', -1), ('param3', 7)])
																		  case 1:
																			switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
																			  case 0:
																				switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
																				  case 0:
																					printf("Ahhhh, yesss... You are searching\nfor something. Allow me to gaze into\nyour future...\n\nI see...a propeller falling through a\nsea of clouds... It is discarded, left to\nthe elements...\n\nAhhh, I see a #####mountain of fire#####...\nI see a temple on this burning\nmountain! What you seek is #####just down\nthe mountain from this temple#####...\nA burning mountain... Could such a\nthing truly exist?")
																					switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
																					  case 0:
																						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 111), ('param2', 5), ('next', -1), ('param3', 7)])
																					  case 1:
																						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 90), ('param2', 0), ('next', 177), ('param3', 51)])
																						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 3), ('param2', 100), ('next', 108), ('param3', 16)])
																						printf("")
																						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 64)])) {
																						  case 0:
																							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
																							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
																							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
																							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
																							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
																							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
																							OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 13), ('next', 193), ('param3', 56)])
																							printf("")
																							story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
																							flw_118:
																							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 0), ('next', 122), ('param3', 36)])
																							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', -1), ('next', 119), ('param3', 16)])
																							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 111), ('param2', 5), ('next', -1), ('param3', 7)])
																						  case 1:
																							printf("")
																							goto flw_118
																						}
																					}
																				  case 1:
																					switch (story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */]) {
																					  case 0:
																						printf("Let me see... You seek a certain\nsomething in order to repair a broken\nobject. Yesss...\n\nAh... I see an #####Ancient Flower##########...#####\n\n\n\nIn my visions, I have seen Ancient\nFlowers blossoming in ages past where\nthere is now #####sand#####.##### If you scour the\nsands, you will find one!")
																						flw_86:
																						OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 111), ('param2', 5), ('next', -1), ('param3', 7)])
																					  case 1:
																						printf("Ahh... Structures with large, whirling\nsails come into focus. Something\ncreates a gust, and the structures...\nturn! The two buildings face...a tower!")
																						goto flw_86
																					}
																				}
																			  case 1:
																				switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
																				  case 0:
																					printf("Ah, yesss... You have overcome a major\nobstacle and are understandably\npleased.\n\nYour next endeavor will be... #####Ohhhh!\nThe #####Ballad of the Goddess#####... #####I see you\nwant to learn about it!\n\nSo who would be able to tell you about\nsuch a thing, you might wonder?\n\n\nGazing into my crystal ball, I see the...\n#####headmaster of the Knight Academy#####!\nHe is the one to whom you should\nspeak, yesssss...")
																					flw_85:
																					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 111), ('param2', 5), ('next', -1), ('param3', 7)])
																				  case 1:
																					switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
																					  case 0:
																						printf("The place you are traveling to...\n\n\n\nSomething large awakens? Hmm?#####\nIt's huge... #####Whatever it is, it's big!\n####(It's bigger than huge!\n\nI'm seeing that you should take extra\n#####Heart Potions#####. Oh, yesss... I foresee\nthat will help you succeed.")
																						goto flw_85
																					  case 1:
																						switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
																						  case 0:
																							printf("I see a place...yes, it's coming into\nfocus now... SAND! Hmm, sand?\nA sandbox? A giant sandbox?\n\nWell, whatever it is, I see it's a desolate\nplace that will cause you troubles with\nelectricity...\n\nIron won't do you any good there. I see\nyou'll need a #####Wooden Shield #####or one\nthat's stronger...\n\nAnd you might find yourself in need of\nbombs there. Make sure to carry\nseveral #####Bomb Bags#####.")
																							goto flw_85
																						  case 1:
																							switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
																							  case 0:
																								printf("Young man, my visions see...\nFlames! Burning! Smoke! Scorching\nheat! This is in your future...\n\nThe thought of taking a Wooden\nShield to such a place is madness...\nIron! You will need an #####Iron Shield #####to\nprotect yourself!\nAnd you should also take with you some\n#####potions to restore your vitality#####...")
																								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 111), ('param2', 5), ('next', -1), ('param3', 7)])
																							  case 1:
																								printf("Young man, are you about to head into \na densely wooded area? Somewhere\nblanketed in green, yes? Ahhh...\nMy eyes, they see all...\nTrees! Everywhere!##### Yes. ####\nMany trees...\nIt would serve you well to buy a #####Wooden\nShield #####before you travel.\n\nI can see that you are a bit young and\ngreen yourself, so it couldn't hurt to\ntake a #####Heart Potion #####with you.")
																								OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 111), ('param2', 5), ('next', -1), ('param3', 7)])
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								  case 1:
									goto flw_71
								}
							  case 1:
								goto flw_71
							}
						}
					}
				}
			}
		  case 1:
			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 13), ('param3', 12)])
			printf("######You there! I see you, yes! Come, allow\nme to foresee your own fortune. It'll\ncost just##### 10 Rupees #####to light the way\nalong your cloudy path ahead.\nDo you hunger to know what these\nbig, lovely eyes will behold? Shall I\nbegin? It'll cost but #####1##########0 Rupees#####.\n#####Please!#####No, thanks.")
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 8)])) {
			  case 0:
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 10), ('param3', 10), ('param4', 2), ('param5', 16)])) {
				  case 0:
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', -1), ('param2', -10), ('next', 160), ('param3', 8)])
					flw_160:
					switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
					  case 0:
						printf("So, what information do you seek?\nWhat is it that you want to know?\n#####Where to next?#####Treasure!")
						scene_flags[0 'Skyloft'][86 /* 0xB 40 */] = true;
						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 142), ('param3', 12)])
						switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 76)])) {
						  case 0:
							printf("Magnificent! Come closer, then! Let us\nsee what I can...see!")
							flw_38:
							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2560), ('next', 164), ('param3', 13)])
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 50), ('next', 39), ('param3', 54)])
							OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 160), ('next', 40), ('param3', 6)])
							OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -238), ('next', 165), ('param3', 13)])
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 50), ('next', 17), ('param3', 54)])
							loadzone_temp_flags[3 /* 0x9 08 */] = true;
							printf("Ahaaaaaaaaaa. I see many things...\nAll is revealed...")
							goto flw_74
						  case 1:
							OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 111), ('param2', 6), ('next', -1), ('param3', 7)])
						}
					  case 1:
						printf("Very well. Let me see what I can see!\nYesssss... Your fortune...it's all coming\ninto focus now...")
						OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 0), ('next', 38), ('param3', 12)])
						goto flw_38
					}
				  case 1:
					printf("######But what's this, young man?! I've just\nhad a vision, and it's telling me you\ndon't have the money to pay me for my\namazing services!\nYou surely aren't asking me, with my\nunfathomable, all-seeing eyes, to tell\nyour fortune for free, are you?!")
				}
			  case 1:
				printf("######Fine. Fine. I know the time will come\nwhen you wish these round, stupendous\neyes could see your fortune! But\ndon't come running to me!")
			}
		}
	  case 1:
		scene_flags[0 'Skyloft'][26 /* 0x2 04 */] = true;
		OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 1), ('param3', 12)])
		printf("######Gaze into my eyes... Stare deeply into\nmy eyes... These eyes see many things.\nOh yes, these lovely, round eyes can\neven see...into the future!\nAllow me to tell your fortune, boy!\nDo you doubt these eyes? I look upon\nyour shirt, boy, and I see a single\nthread loose on your sleeve stitching!\nNothing can hide from these eyes!\nNormally, I seek 10 Rupees to tell a\nfortune, but this time I will charge but\n#####1 Rupee#####.\nSo do you want me to tell your\nfortune? Do you dare discover what\nfate these eyes see? Only #####1 Rupee#####!\n#####OK.#####Maybe later.")
		switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 0)])) {
		  case 0:
			flw_25:
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 1), ('param3', 10), ('param4', 2), ('param5', 14)])) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 0), ('param1', -1), ('param2', -1), ('next', 8), ('param3', 8)])
				printf("#####\nYessssss! I knew it! Aha... What a treat!\nYou are the first customer I've had in\na while!\n\nOh#####...##### I mean, I'm the best at what I do!\nYou can trust these glistening eyes!")
				goto flw_160
			  case 1:
				printf("######But what's this?! I see you don't\ncarry even a single Rupee in your\nshriveled wallet. These tantalizing\neyes do not work for free!")
			}
		  case 1:
			printf("######I'm hurt! Is this how you respond to\nkindness?\n\n\nDon't you trust these big, round, \nall-seeing eyes? I might not look on\nyou so favorably next time. Are you\nsure you don't want your fortune told?#####Actually...#####No, thanks.")
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 2)])) {
			  case 0:
				goto flw_25
			  case 1:
				printf("You are stubborn...but I saw that\nfrom across the room. I can also see\non your face that you don't believe in\nfortune-telling.\nGetting your fortune told will aid you\non your path... Aren't you curious\nabout what these large, dewy eyes\nwill behold?\n#####OK, OK.#####No!")
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 4)])) {
				  case 0:
					goto flw_25
				  case 1:
					printf("######Hm... Peering into your eyes, I see you\nare a disbeliever. Don't come crying to\nme later, asking for my help when you\nfind yourself lost...##### Hmph!")
				}
			}
		}
	}
}

void entrypoint_111_02() {
	start()
	printf("######What's this...? What is it that my eyes\nbehold?!\n\n\nOh, young man, what calamitous\nvisions appear before me...\n\n\nYou may choose not to believe me,\nbut my eyes foresee a hazardous,\nthorny road ahead for you...\n\nBut I can foresee what will befall you, \nfor I am a fortune-teller!\n\n\nTrust my##### #####piercing eyes#####...##### Listen to\nmy pure and innocent voice.\n\n\nI will do you no harm. Gaze deeply into\nmy eyes and come closer!")
}

void entrypoint_111_03() {
	start()
	goto flw_160
}

void entrypoint_111_04() {
	start()
	goto flw_19
}

void entrypoint_111_05() {
	start()
	switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
	  case 0:
		printf("Also, if you happen to be looking for a\n#####plant##### of some kind, then I also saw\na great green #####forest#####. #####Hmm... I can\nhardly imagine such a place...")
		flw_132:
		switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
		  case 0:
			printf("Also...you are searching for someone\nto plow a field for you, are you not?\n\n\nYou will find no such person in Skyloft!\nInstead, you must go to the #####caves##### where\n#####those who are skilled at digging##### dwell!\n\nThere you will find the right person for\nthe job. I have foreseen it!")
			flw_134:
			switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
			  case 0:
				printf("Ah! Yes, yes! I see it! You are searching\nfor something lost. A shiny, whirling\nthing...\n\nI see #####a dry place with sand#####! You will\nfind it there in a place that is, itself,\nnot easy to find. These big, dewy\neyes...they do not lie!")
				flw_170:
				switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
				  case 0:
					switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
					  case 0:
						flw_33:
						printf("######That's all I can see for the moment...\nMy eyes, they grow weary. Come see\nme again if you should lose your way.")
						printf("############Good luck, young man!")
						story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */] = true;
					  case 1:
						printf("Oh! The mists are parting... I also see a\nperson who has lost a rare bug...\n\n\nMy crystal ball reveals that this bug \nis being held in secret on an island\nby #####one with a love for insects#####!")
						goto flw_33
					}
				  case 1:
					goto flw_33
				}
			  case 1:
				goto flw_170
			}
		  case 1:
			goto flw_134
		}
	  case 1:
		goto flw_132
	}
}

void entrypoint_111_06() {
	start()
	printf("Yesssss... Treasure, eh? You wish for\nme to gaze into my crystal ball and\nforesee treasure. I must confess,\nI know little about treasure...\nAh well. I guess I can give it a shot.")
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 10), ('param2', 2560), ('next', 166), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 2), ('param2', 50), ('next', 148), ('param3', 54)])
	OrderedDict([('type', 'type3'), ('subType', 0), ('param1', 0), ('param2', 160), ('next', 149), ('param3', 6)])
	OrderedDict([('type', 'type3'), ('subType', 4), ('param1', 255), ('param2', -238), ('next', 167), ('param3', 13)])
	OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 0), ('param2', 50), ('next', 146), ('param3', 54)])
	printf("Ahaaaaaaaaaa. I see many things...\nAll is revealed...")
	printf("Yesss... A towering forest... Sandy\ndunes... A blazing mountain...\nMonsters... These are the sources of\ntreasure that I foresee.\nWhich source of treasure do you want\nto hear about?\n#####Forest.#####Dunes.#####Mountain.#####Monsters.")
	switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 2), ('param4', 4), ('param5', 78)])) {
	  case 0:
		printf("Yesss... I see a towering forest...\nTreasures often found in these great\nwoods are #####Bird Feathers##### and\n#####Hornet Larvae#####...\nI see you finding a##### Bird Feather##### by\ncatching a small bird in your net!\n\n\nAnd #####Hornet Larvae#####... Oh yesss, you will\nfind them by knocking down hives!\n\n\nAmong all the small bird feathers, I see\none that is highly prized! Yesss, \nthe #####Blue Bird Feather#####... It is said to\nbring happiness!\nIf you see one, young man, you are\nvery fortunate!")
		flw_155:
		printf("And then there's the #####Amber Relic #####and\nthe #####Dusk Relic#####. These can be found in\nevery region, I see...\n\nBut for some reason, the #####Dusk Relic\n#####can only be found during some kind\nof trial...\n\nAnd my eyes, they see that the\n#####Goddess Plume #####is the rarest of all\ntreasures! If you should find one, you\nwill be the luckiest man alive!")
		printf("######That's all I can see for the moment...\nMy eyes, they grow weary. Come see\nme again if you should lose your way.")
		printf("############Good luck, young man!")
		story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */] = true;
	  case 1:
		printf("The land of sands, eh... In the land of\nsands, I see you will find #####Tumbleweeds#####.\nYessss... And something called an\n#####Ancient Flower#####.\nTo catch a #####Tumbleweed#####, I foresee you\nswinging a net quickly just as one\nrolls across your path.\n\nAs the name suggests, I see you can\npick an #####Ancient Flower##### only by\ntraveling back to ancient times.")
		goto flw_155
	  case 2:
		printf("Smoldering and sulfurous...yesss...\nI see a blazing mountain! There you\nwill find...\n\n#####Lizard Tails #####and something called\n#####Eldin Ore#####! I see it now...\n\n\n#####Eldin Ore##### can sometimes be found by\ndigging in the ground, yess... I see\ndirt in your future...\n\n#####Lizard Tails#####... I see you claiming this\ntreasure by defeating horrifying\nlizard-like creatures. This vision...\nIt will haunt my dreams!")
		goto flw_155
	  case 3:
		printf("Monsters. I see monsters... When you\ndefeat a monster, you will often find\none of these...\n\nA #####Monster Claw#####, #####Ornamental Skull#####,\n#####Jelly Blob#####, or #####Monster Horn#####...\n\n\n#####Monster Claws #####come from monsters\nthat flutter and flap in the air!\n\n\n#####Ornamental Skulls##### come from human-\nlooking monsters. They are\ndisgusting to behold!\n\n#####Jelly Blobs #####come from soft-looking\nmonsters. Oh, how they ooze...")
		printf("And #####Monster Horns #####come from the\nmonsters who carry them. You can\nclaim them for yourself by using some\nsort of tool to snatch them away.\n#####Evil Crystals##### often come from\nmonsters that cast spells. Dark\nmagic... It gives me chills...\n\nAnd rarely, so very rarely...a #####Golden\nSkull##### will be found instead of an\nOrnamental Skull.")
		goto flw_155
	}
}

void entrypoint_111_07() {
	start()
	printf("######Oh no... Er, hang on a second...\n\n\n\nI see you're looking well these days!\nIf I didn't know any better, I'd say\nyou'd found the time to gather all\nvariety of magnificent treasures.\nCome! Come closer! If it's treasure you\nseek, I'll use my mystical vision to find\nanswers for you!")
}

void entrypoint_111_11() {
	start()
	switch (loadzone_temp_flags[3 /* 0x9 08 */]) {
	  case 0:
		OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 111), ('param2', 4), ('next', -1), ('param3', 7)])
	  case 1:
		switch (story_flags[374 /* us: 805A9B02 0x10, jp: 805ACD82 0x10 */]) {
		  case 0:
			printf("#####\nYesssss! The young man is here!\nWelcome! I've been waiting!\n\n\nAnd you've got that smirk on your face,\nyesssss... The one that says you want\nme to see what the future will bring!")
			flw_140:
			OrderedDict([('type', 'type3'), ('subType', 6), ('param1', 0), ('param2', 1), ('next', 47), ('param3', 12)])
			printf("Come now! Let me see into the future\nwith these big, round eyes! And you\nget my special rate--half off!\n\nShall I begin to peer into your future?\nIt'll be #####5 Rupees#####. What do you say?\n#####Sure!#####No, thanks.")
			switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 0), ('param4', 2), ('param5', 24)])) {
			  case 0:
				OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 501), ('param2', 5), ('next', 196), ('param3', 23)])
				switch (OrderedDict([('type', 'switch'), ('subType', 6), ('param2', 0), ('param3', 7), ('param4', 2), ('param5', 100)])) {
				  case 0:
					OrderedDict([('type', 'type3'), ('subType', 0), ('param1', -1), ('param2', -5), ('next', 49), ('param3', 8)])
					OrderedDict([('type', 'type3'), ('subType', 1), ('param1', 111), ('param2', 3), ('next', -1), ('param3', 7)])
				  case 1:
					printf("######But what's this, young man?!\nI see you have no money at all!\n\n\nLook into these steely, unflinching eyes\nand you will see that no amount of\npleading will get me to lower my price.\nReturn with money!")
				}
			  case 1:
				printf("######Fine. Fine. I know the time will come\nwhen you wish these round, stupendous\neyes could see your fortune! But\ndon't come running to me!")
			}
		  case 1:
			printf("#####\nAhhh! You're that young man from\nbefore!\n\n\nThanks to you, I've been able to return\nto a life of gazing into the future to\ntell people's fortunes!\n\nWhat do you say I tell you yours, hm?\nAnd I'll even cut you a deal... From now\non, it's just half price!")
			story_flags[374 /* us: 805A9B02 0x10, jp: 805ACD82 0x10 */] = true;
			goto flw_140
		}
	}
}

void entrypoint_111_30() {
	start()
	switch (story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */]) {
	  case 0:
		printf("######Yesss, thanks to you, young man,\nmy life is full of happiness!\n\n\nI have not yet foreseen how your life\nwill fare, but if you'd like to find out,\ncome to the bazaar during the daylight\nhours and we shall see!")
	  case 1:
		printf("######Hey! What would bring you here at\nthis hour#####...##### I'm not open at night. \nCome to my stall in the bazaar at a\nsane hour!")
	}
}

