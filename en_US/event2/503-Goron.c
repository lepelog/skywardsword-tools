          void entrypoint_503_57() {
/*< 38>*/ 	start()
/*<560>*/ 	printf("\x0E\x01\x09\x04\x17\x1909THAT IS IT! One of the <r<talking statues\n>>the ancient texts spoke of! There is\njust no mistaking it!")
/*<561>*/ 	scene_flags[10 'Sealed Grounds'][73 /* 0x8 02 */] = true;
/*<614>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_503_74() {
/*<259>*/ 	start()
/*<116>*/ 	temp_flags[3 /* 0x1 08 */] = true;
/*<117>*/ 	temp_flags[4 /* 0x1 10 */] = true;
/*<118>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<422>*/ 	temp_flags[11 /* 0x0 08 */] = true;
/*< 66>*/ 	switch (scene_flags[64 /* 0x9 01 */]) {
          	  case 0:
/*< 68>*/ 		printf("\x0E\x01\x09\x04\x18\x1704Today, buddy, I would like to witness\nthe magic of <y<bombs>> emerging from the\nwall! For my research, of course!\n\n<pause1E>...By the way, would you like to\nreview what was written in the text?\n[1]Please![2-]Nah.")
          		flw_67:
/*< 67>*/ 		switch (choice(2)) {
          		  case 0:
/*< 69>*/ 			printf("\x0E\x01\x09\x04\x16\x1E07<r<Closed Circle>><pause1E>... Ye who hungers for\ndestructive force, draw this shape so\nthat it may be known.")
/*<105>*/ 			printf("\x0E\x01\x09\x04\x18\x1700Well, that is what is written there!\nDoes that mean anything to you?")
          			flw_137:
/*<137>*/ 			temp_flags[9 /* 0x0 02 */] = true;
/*<216>*/ 			story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<509>*/ 			story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          		  case 1:
/*< 70>*/ 			printf("\x0E\x01\x09\x04\x08\x1E0AReally? <pause1E>Well then...I want to see it!")
          			goto flw_137
          		}
          	  case 1:
/*< 71>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07<r<Closed Circle>><pause1E>... Ye who hungers for\ndestructive force, draw this shape so\nthat it may be known.")
/*<104>*/ 		printf("\x0E\x01\x09\x04\x18\x1700Well, that is what is written there!\nDoes that mean anything to you?")
          		goto flw_137
          	}
          }

          void entrypoint_503_58() {
/*<146>*/ 	start()
          	flw_55:
/*< 55>*/ 	switch (choice(2)) {
          	  case 0:
/*< 57>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07<r<Glimmering Hexagon>><pause1E>... Ye who seeks\ngreat riches, draw this shape so that it\nmay be known.")
/*<109>*/ 		printf("\x0E\x01\x09\x04\x18\x1700Well, that is what is written there!\nDoes that mean anything to you?")
          		flw_135:
/*<135>*/ 		temp_flags[7 /* 0x1 80 */] = true;
/*<221>*/ 		story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<507>*/ 		story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          	  case 1:
/*< 58>*/ 		printf("\x0E\x01\x09\x04\x08\x1E0AReally? <pause1E>Well then...I want to see it!")
          		goto flw_135
          	}
          }

          void entrypoint_503_75() {
/*<260>*/ 	start()
/*<119>*/ 	temp_flags[3 /* 0x1 08 */] = true;
/*<120>*/ 	temp_flags[4 /* 0x1 10 */] = true;
/*<121>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*<423>*/ 	temp_flags[11 /* 0x0 08 */] = true;
/*< 72>*/ 	switch (scene_flags[65 /* 0x9 02 */]) {
          	  case 0:
/*< 74>*/ 		printf("\x0E\x01\x09\x04\x18\x1704Today I would like to witness the magic\nof <y<arrows>> emerging from the wall!\nFor my research, of course.\n\n<pause1E>...By the way, would you like to review\nwhat was written in the text?\n[1]Please![2-]Nah.")
          		flw_73:
/*< 73>*/ 		switch (choice(2)) {
          		  case 0:
/*< 75>*/ 			printf("\x0E\x01\x09\x04\x16\x1E07<r<Arrow in Repose>><pause1E>... Ye who yearns to\nstrike targets from afar, draw this\nshape so that it may be known.")
/*<103>*/ 			printf("\x0E\x01\x09\x04\x18\x1700Well, that is what is written there!\nDoes that mean anything to you?")
          			flw_138:
/*<138>*/ 			temp_flags[10 /* 0x0 04 */] = true;
/*<217>*/ 			story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<510>*/ 			story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          		  case 1:
/*< 76>*/ 			printf("\x0E\x01\x09\x04\x08\x1E0AReally? <pause1E>Well then...I want to see it!")
          			goto flw_138
          		}
          	  case 1:
/*< 77>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07<r<Arrow in Repose>><pause1E>... Ye who yearns to\nstrike targets from afar, draw this\nshape so that it may be known.")
/*<102>*/ 		printf("\x0E\x01\x09\x04\x18\x1700Well, that is what is written there!\nDoes that mean anything to you?")
          		goto flw_138
          	}
          }

          void entrypoint_503_59() {
/*<147>*/ 	start()
          	flw_61:
/*< 61>*/ 	switch (choice(2)) {
          	  case 0:
/*< 63>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07<r<Life's Crimson Vessel>><pause1E>... Ye who longs\nfor the source of life, draw this shape\nso that it may be known.\n\nDo so, and from the heavens shall fall\na rain of life's essence.")
/*<107>*/ 		printf("\x0E\x01\x09\x04\x18\x1700Well, that is what is written there!\nDoes that mean anything to you?")
          		flw_136:
/*<136>*/ 		temp_flags[8 /* 0x0 01 */] = true;
/*<222>*/ 		story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<508>*/ 		story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          	  case 1:
/*< 64>*/ 		printf("\x0E\x01\x09\x04\x08\x1E0AReally? <pause1E>Well then...I want to see it!")
          		goto flw_136
          	}
          }

          void entrypoint_503_07() {
/*<166>*/ 	start()
/*<367>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 364, 'param3': 32}
/*<364>*/ 	{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 280, 'next': 368, 'param3': 15}
/*<368>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6145, 'param2': 256, 'next': 575, 'param3': 13}
/*<575>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 365, 'param3': 6}
/*<365>*/ 	set_camera(3, 0)
/*<366>*/ 	{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 328, 'param3': 16}
/*<328>*/ 	switch (scene_flags[69 /* 0x9 20 */]) {
          	  case 0:
/*<329>*/ 		switch (scene_flags[68 /* 0x9 10 */]) {
          		  case 0:
          			flw_171:
/*<171>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
/*<172>*/ 				printf("\x0E\x01\x09\x04\x1817\x1909BLESSED BUTTERFLIES!\nYou are the best, bud! Thanks.")
          				flw_195:
/*<195>*/ 				entrypoint_503_17();
          			  case 1:
/*<173>*/ 				printf("\x0E\x01\x09\x04\x1817\x1908SWEET MONEYBAGS!\n\n\n\nSo that is what it meant by great\nriches!")
/*<174>*/ 				scene_flags[10 'Sealed Grounds'][61 /* 0x6 20 */] = true;
          				goto flw_195
          			}
          		  case 1:
/*<582>*/ 			scene_flags[10 'Sealed Grounds'][61 /* 0x6 20 */] = true;
/*<562>*/ 			printf("\x0E\x01\x09\x04\x1817\x1908SWEET MONEYBAGS!\n\n\n\nSo that is what it meant by great\nriches!")
/*<486>*/ 			entrypoint_503_20();
          		}
          	  case 1:
          		goto flw_171
          	}
          }

          void entrypoint_503_76() {
/*<441>*/ 	start()
/*<435>*/ 	temp_flags[3 /* 0x1 08 */] = true;
/*<436>*/ 	temp_flags[4 /* 0x1 10 */] = true;
/*<437>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*<442>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<427>*/ 	switch (scene_flags[63 /* 0x6 80 */]) {
          	  case 0:
/*<429>*/ 		printf("\x0E\x01\x09\x04\x18\x1704Today, buddy, I would like to witness\nthe magic of <y<Fairies>> emerging from the\nwall! For my research, of course!\n\n<pause1E>...By the way, would you like to review\nwhat was written in the text?\n[1]Please![2-]Nah.")
          		flw_428:
/*<428>*/ 		switch (choice(2)) {
          		  case 0:
/*<430>*/ 			printf("\x0E\x01\x09\x04\x00\x07...The three... ...ngles...\n...the Tri...ce... ...and...")
/*<434>*/ 			printf("\x0E\x01\x09\x04\x17\x1700...The text is too badly damaged\nto read at all beyond that point.\nWhat do you suppose it could say?")
          			flw_438:
/*<438>*/ 			temp_flags[12 /* 0x0 10 */] = true;
/*<440>*/ 			story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<506>*/ 			story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          		  case 1:
/*<431>*/ 			printf("\x0E\x01\x09\x04\x08\x1E0AReally? <pause1E>Well then...I want to see it!")
          			goto flw_438
          		}
          	  case 1:
/*<432>*/ 		printf("\x0E\x01\x09\x04\x00\x07...The three... ...ngles...\n...the Tri...ce... ...and...")
/*<433>*/ 		printf("\x0E\x01\x09\x04\x17\x1700...The text is too badly damaged\nto read at all beyond that point.\nWhat do you suppose it could say?")
          		goto flw_438
          	}
          }

          void entrypoint_503_08() {
/*<167>*/ 	start()
/*<372>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 369, 'param3': 32}
/*<369>*/ 	{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 280, 'next': 373, 'param3': 15}
/*<373>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6145, 'param2': 256, 'next': 576, 'param3': 13}
/*<576>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 370, 'param3': 6}
/*<370>*/ 	set_camera(3, 0)
/*<371>*/ 	{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 330, 'param3': 16}
/*<330>*/ 	switch (scene_flags[69 /* 0x9 20 */]) {
          	  case 0:
/*<331>*/ 		switch (scene_flags[68 /* 0x9 10 */]) {
          		  case 0:
          			flw_183:
/*<183>*/ 			switch (scene_flags[62 /* 0x6 40 */]) {
          			  case 0:
/*<175>*/ 				printf("\x0E\x01\x09\x04\x1817\x1909BLESSED BUTTERFLIES!\nYou are the best, bud! Thanks.")
          				flw_194:
/*<194>*/ 				entrypoint_503_17();
          			  case 1:
/*<176>*/ 				printf("\x0E\x01\x09\x04\x1817\x1908ASTONISHING!\n\n\n\nSo that is what the ancient writing\nmeant by a crimson vessel!")
/*<184>*/ 				scene_flags[10 'Sealed Grounds'][62 /* 0x6 40 */] = true;
          				goto flw_194
          			}
          		  case 1:
/*<583>*/ 			scene_flags[10 'Sealed Grounds'][62 /* 0x6 40 */] = true;
/*<563>*/ 			printf("\x0E\x01\x09\x04\x1817\x1908ASTONISHING!\n\n\n\nSo that is what the ancient writing\nmeant by a crimson vessel!")
/*<498>*/ 			entrypoint_503_20();
          		}
          	  case 1:
          		goto flw_183
          	}
          }

          void entrypoint_503_77() {
/*<460>*/ 	start()
/*<461>*/ 	switch (random(4)) {
          	  case 0:
/*<469>*/ 		entrypoint_503_76();
          	  case 1:
/*<462>*/ 		switch (random(4)) {
          		  case 0:
/*<465>*/ 			entrypoint_503_72();
          		  case 1:
/*<466>*/ 			entrypoint_503_73();
          		  case 2:
/*<467>*/ 			entrypoint_503_74();
          		  case 3:
/*<468>*/ 			entrypoint_503_75();
          		}
          	  case 2:
/*<463>*/ 		switch (random(4)) {
          		  case 0:
/*<470>*/ 			entrypoint_503_72();
          		  case 1:
/*<471>*/ 			entrypoint_503_73();
          		  case 2:
/*<472>*/ 			entrypoint_503_74();
          		  case 3:
/*<473>*/ 			entrypoint_503_75();
          		}
          	  case 3:
/*<464>*/ 		switch (random(4)) {
          		  case 0:
/*<474>*/ 			entrypoint_503_72();
          		  case 1:
/*<475>*/ 			entrypoint_503_73();
          		  case 2:
/*<476>*/ 			entrypoint_503_74();
          		  case 3:
/*<477>*/ 			entrypoint_503_75();
          		}
          	}
          }

          void entrypoint_503_60() {
/*<148>*/ 	start()
          	goto flw_67
          }

          void entrypoint_503_09() {
/*<168>*/ 	start()
          	flw_377:
/*<377>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 374, 'param3': 32}
/*<374>*/ 	{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 280, 'next': 378, 'param3': 15}
/*<378>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6145, 'param2': 256, 'next': 577, 'param3': 13}
/*<577>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 375, 'param3': 6}
/*<375>*/ 	set_camera(3, 0)
/*<376>*/ 	{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 185, 'param3': 16}
/*<185>*/ 	switch (scene_flags[63 /* 0x6 80 */]) {
          	  case 0:
/*<177>*/ 		printf("\x0E\x01\x09\x04\x1817\x1909BLESSED BUTTERFLIES!\nYou are the best, bud! Thanks.")
/*<196>*/ 		entrypoint_503_17();
          	  case 1:
/*<178>*/ 		printf("\x0E\x01\x09\x04\x1817\x1908HOLY GORON!\n\n\n\nSo this is what the lost part of the old\ntext was explaining! Nice going, bud!")
/*<559>*/ 		set_camera(6, 0)
/*<186>*/ 		scene_flags[10 'Sealed Grounds'][63 /* 0x6 80 */] = true;
/*<515>*/ 		scene_flags[10 'Sealed Grounds'][112 /* 0xF 01 */] = true;
/*<419>*/ 		printf("\x0E\x01\x09\x04\x1808\xB02Now I have seen everything that those\nancient writings described!\n\n\nI really owe you, bud, so let me give you\nthis! Just my way of saying thanks.")
/*<418>*/ 		give_item(33 0x21);
/*<615>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 556, 'param3': 12}
/*<556>*/ 		set_camera(5, 0)
/*<588>*/ 		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          		  case 0:
          			flw_394:
/*<394>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<599>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 589, 'param3': 32}
/*<589>*/ 			{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 280, 'next': 394, 'param3': 15}
          			goto flw_394
          		}
          	}
          }

          void entrypoint_503_78() {
/*<571>*/ 	start()
          	flw_517:
/*<517>*/ 	printf("\x0E\x01\x09\x04\x18\x1701Lost writings in an ancient text...\n<pause1E>What secrets could have been\nwritten there?\n\nLayers upon layers of mysteries...\n\n\n\n\x0E\x01\x09\x04\x08\xB00...By the way, would you like to review\nwhat was written in the text?\n[1]Please![2-]No, thanks.")
          	flw_459:
/*<459>*/ 	entrypoint_503_65();
          }

          void entrypoint_503_61() {
/*<149>*/ 	start()
          	goto flw_73
          }

          void entrypoint_503_62() {
/*<163>*/ 	start()
          	flw_79:
/*< 79>*/ 	switch (choice(2)) {
          	  case 0:
/*< 81>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07<r<Glimmering Hexagon>><pause1E>... Ye who seeks\ngreat riches, draw this shape so that it\nmay be known.")
/*<101>*/ 		printf("\x0E\x01\x09\x04\x18\x1700Well, that is what is written there!\nDoes that mean anything to you?")
          		flw_139:
/*<139>*/ 		temp_flags[7 /* 0x1 80 */] = true;
/*<218>*/ 		story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<511>*/ 		story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          	  case 1:
/*< 82>*/ 		printf("\x0E\x01\x09\x04\x08\x1E0AReally? <pause1E>Well then...I want to see it!")
          		goto flw_139
          	}
          }

          void entrypoint_503_10() {
/*<169>*/ 	start()
/*<382>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 379, 'param3': 32}
/*<379>*/ 	{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 280, 'next': 383, 'param3': 15}
/*<383>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6145, 'param2': 256, 'next': 579, 'param3': 13}
/*<579>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 380, 'param3': 6}
/*<380>*/ 	set_camera(3, 0)
/*<381>*/ 	{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 332, 'param3': 16}
/*<332>*/ 	switch (scene_flags[69 /* 0x9 20 */]) {
          	  case 0:
/*<333>*/ 		switch (scene_flags[68 /* 0x9 10 */]) {
          		  case 0:
          			flw_187:
/*<187>*/ 			switch (scene_flags[64 /* 0x9 01 */]) {
          			  case 0:
/*<179>*/ 				printf("\x0E\x01\x09\x04\x1817\x1909BLESSED BUTTERFLIES!\nYou are the best, bud! Thanks.")
          				flw_192:
/*<192>*/ 				entrypoint_503_17();
          			  case 1:
/*<180>*/ 				printf("\x0E\x01\x09\x04\x1817\x1908SWEET BOMBO-DONGO!\n\n\n\nSo that is what it meant by great\ndestructive force!")
/*<188>*/ 				scene_flags[10 'Sealed Grounds'][64 /* 0x9 01 */] = true;
          				goto flw_192
          			}
          		  case 1:
/*<584>*/ 			scene_flags[10 'Sealed Grounds'][64 /* 0x9 01 */] = true;
/*<564>*/ 			printf("\x0E\x01\x09\x04\x1817\x1908SWEET BOMBO-DONGO!\n\n\n\nSo that is what it meant by great\ndestructive force!")
/*<499>*/ 			entrypoint_503_20();
          		}
          	  case 1:
          		goto flw_187
          	}
          }

          void entrypoint_503_63() {
/*<164>*/ 	start()
          	flw_85:
/*< 85>*/ 	switch (choice(2)) {
          	  case 0:
/*< 87>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07<r<Life's Crimson Vessel>><pause1E>... Ye who longs\nfor the source of life, draw this shape\nso that it may be known.\n\nDo so, and from the heavens shall fall\na rain of life's essence.")
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x18\x1700Well, that is what is written there!\nDoes that mean anything to you?")
          		flw_140:
/*<140>*/ 		temp_flags[8 /* 0x0 01 */] = true;
/*<219>*/ 		story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<512>*/ 		story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          	  case 1:
/*< 88>*/ 		printf("\x0E\x01\x09\x04\x08\x1E0AReally? <pause1E>Well then...I want to see it!")
          		goto flw_140
          	}
          }

          void entrypoint_503_64() {
/*<165>*/ 	start()
          	flw_91:
/*< 91>*/ 	switch (choice(2)) {
          	  case 0:
/*< 93>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07<r<Closed Circle>><pause1E>... Ye who hungers for\ndestructive force, draw this shape so\nthat it may be known.")
/*< 97>*/ 		printf("\x0E\x01\x09\x04\x18\x1700Well, that is what is written there!\nDoes that mean anything to you?")
          		flw_141:
/*<141>*/ 		temp_flags[9 /* 0x0 02 */] = true;
/*<220>*/ 		story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<513>*/ 		story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
          	  case 1:
/*< 94>*/ 		printf("\x0E\x01\x09\x04\x08\x1E0AReally? <pause1E>Well then...I want to see it!")
          		goto flw_141
          	}
          }

          void entrypoint_503_65() {
/*<439>*/ 	start()
          	goto flw_428
          }

          void entrypoint_503_66() {
/*<544>*/ 	start()
          	flw_51:
/*< 51>*/ 	switch (story_flags[401 /* us: 805A9B05 0x04, jp: 805ACD85 0x04 */]) {
          	  case 0:
/*<586>*/ 		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          		  case 0:
/*<223>*/ 			printf("\x0E\x01\x09\x04&\x1301Over time, the power of the goddess\nwalls is <r<restored>>!\n\n\n\x0E\x01\x09\x04\x0E\x1700When that happens, I would like your\nhelp with my research again!")
          		  case 1:
/*<587>*/ 			printf("\x0E\x01\x09\x04\x1808\xB01Over time, the power of the goddess\nwalls is <r<restored>>!\n\n\n\x0E\x01\x09\x04\x18\x1700When that happens, I would like your\nhelp with my research again!")
          		}
          	  case 1:
/*< 41>*/ 		check_item_flag(19, 1)
/*< 40>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 22}) {
          		  case 0:
/*< 52>*/ 			switch (scene_flags[67 /* 0x9 08 */]) {
          			  case 0:
/*<443>*/ 				switch (scene_flags[68 /* 0x9 10 */]) {
          				  case 0:
/*<569>*/ 					switch (scene_flags[63 /* 0x6 80 */]) {
          					  case 0:
/*<134>*/ 						switch (temp_flags[7 /* 0x1 80 */]) {
          						  case 0:
/*<142>*/ 							printf("\x0E\x01\x09\x04!\x1701I want to see a bunch of <y<Rupees\n>>pop out of the wall again!\n\n\n\x0E\x01\x09\x04\x08\xB00...By the way, would you like to review\nwhat was written in the text?\n[1]Please![2-]Nope.")
/*<150>*/ 							entrypoint_503_58();
          						  case 1:
/*<133>*/ 							switch (temp_flags[8 /* 0x0 01 */]) {
          							  case 0:
/*<143>*/ 								printf("\x0E\x01\x09\x04!\x1701I want to see the wall rain <y<hearts>> down\non you again!\n\n\n\x0E\x01\x09\x04\x08\xB00...By the way, would you like to review\nwhat was written in the text?\n[1]Please![2-]Nope.")
/*<151>*/ 								entrypoint_503_59();
          							  case 1:
/*<132>*/ 								switch (temp_flags[9 /* 0x0 02 */]) {
          								  case 0:
/*<144>*/ 									printf("\x0E\x01\x09\x04\x18\x1701Buddy, I have always said that an\nexplosive is worth a pound of...uh,\nboom? Anyway, I want to see <y<bombs\n>>come out of that wall today!\n\x0E\x01\x09\x04\x08\xB00...By the way, would you like to review\nwhat was written in the text?\n[1]Please![2-]Nope.")
/*<152>*/ 									entrypoint_503_60();
          								  case 1:
/*<131>*/ 									switch (temp_flags[10 /* 0x0 04 */]) {
          									  case 0:
/*<145>*/ 										printf("\x0E\x01\x09\x04!\x1701Listen, buddy, I need to see some\n<y<arrows>> come flying out of that wall!\n\n\n\x0E\x01\x09\x04\x08\xB00...By the way, would you like to review\nwhat was written in the text?\n[1]Please![2-]Nope.")
/*<153>*/ 										entrypoint_503_61();
          									  case 1:
/*<457>*/ 										switch (temp_flags[12 /* 0x0 10 */]) {
          										  case 0:
/*<516>*/ 											switch (scene_flags[63 /* 0x6 80 */]) {
          											  case 0:
/*<458>*/ 												printf("\x0E\x01\x09\x04!\x1701I want to see more <y<Fairies>> appear!\nThink you can do it again?\n\n\n\x0E\x01\x09\x04\x08\xB00...By the way, would you like to review\nwhat was written in the text?\n[1]Please![2-]Nope.")
          												goto flw_459
          											  case 1:
          												goto flw_517
          											}
          										  case 1:
/*<570>*/ 											entrypoint_503_77();
          										}
          									}
          								}
          							}
          						}
          					  case 1:
/*<607>*/ 						temp_flags[3 /* 0x1 08 */] = true;
/*<608>*/ 						temp_flags[4 /* 0x1 10 */] = true;
/*<609>*/ 						temp_flags[5 /* 0x1 20 */] = true;
/*<610>*/ 						temp_flags[6 /* 0x1 40 */] = true;
/*<568>*/ 						entrypoint_503_78();
          					}
          				  case 1:
/*<447>*/ 					switch (temp_flags[7 /* 0x1 80 */]) {
          					  case 0:
/*<518>*/ 						switch (scene_flags[61 /* 0x6 20 */]) {
          						  case 0:
/*<448>*/ 							printf("\x0E\x01\x09\x04!\x1701I want to see a bunch of <y<Rupees\n>>pop out of the wall again!\n\n\n\x0E\x01\x09\x04\x08\xB00...By the way, would you like to review\nwhat was written in the text?\n[1]Please![2-]Nope.")
          							flw_452:
/*<452>*/ 							entrypoint_503_58();
          						  case 1:
/*<522>*/ 							printf("\x0E\x01\x09\x04\x00\x1B05Great riches, eh? Do you suppose\nthey...they really meant it?!\n\n\n\x0E\x01\x09\x04\x08\xB00...By the way, would you like to review\nwhat was written in the text?\n[1]Please![2-]Nope.")
          							goto flw_452
          						}
          					  case 1:
/*<446>*/ 						switch (temp_flags[8 /* 0x0 01 */]) {
          						  case 0:
/*<519>*/ 							switch (scene_flags[62 /* 0x6 40 */]) {
          							  case 0:
/*<449>*/ 								printf("\x0E\x01\x09\x04!\x1701I want to see the wall rain <y<hearts>> down\non you again!\n\n\n\x0E\x01\x09\x04\x08\xB00...By the way, would you like to review\nwhat was written in the text?\n[1]Please![2-]Nope.")
          								flw_453:
/*<453>*/ 								entrypoint_503_59();
          							  case 1:
/*<523>*/ 								printf("\x0E\x01\x09\x04\x16\xB04From the heavens shall fall\na rain of life's essence...\n\n\n\x0E\x01\x09\x04\x00\xB05What do you think that means, bud?\nWhatever it is, it sounds kind of...\nrefreshing!\n\n\x0E\x01\x09\x04\x08\xB00...By the way, want to see what was\nwritten in the text again, bud?\n[1]Please![2-]No, thanks.")
          								goto flw_453
          							}
          						  case 1:
/*<445>*/ 							switch (temp_flags[9 /* 0x0 02 */]) {
          							  case 0:
/*<520>*/ 								switch (scene_flags[64 /* 0x9 01 */]) {
          								  case 0:
/*<450>*/ 									printf("\x0E\x01\x09\x04\x18\x1701Buddy, I have always said that an\nexplosive is worth a pound of...uh,\nboom? Anyway, I want to see <y<bombs\n>>come out of that wall today!\n\x0E\x01\x09\x04\x08\xB00...By the way, would you like to review\nwhat was written in the text?\n[1]Please![2-]Nope.")
          									flw_454:
/*<454>*/ 									entrypoint_503_60();
          								  case 1:
/*<524>*/ 									printf("\x0E\x01\x09\x04!\x1705What kind of shape is a closed circle,\nanyway? Huh. I thought all of them\nwere closed.\n\n\x0E\x01\x09\x04\x16\x1E04This is just a hunch, but...<pause0A>I think it\nmight just be a regular old circle!\n\n\n\x0E\x01\x09\x04\x08\xB00...By the way, want to see what was\nwritten in the text again, bud?\n[1]Please![2-]No, thanks.")
          									goto flw_454
          								}
          							  case 1:
/*<444>*/ 								switch (temp_flags[10 /* 0x0 04 */]) {
          								  case 0:
/*<521>*/ 									switch (scene_flags[65 /* 0x9 02 */]) {
          									  case 0:
/*<451>*/ 										printf("\x0E\x01\x09\x04!\x1701Listen, buddy, I need to see some\n<y<arrows>> come flying out of that wall!\n\n\n\x0E\x01\x09\x04\x08\xB00...By the way, would you like to review\nwhat was written in the text?\n[1]Please![2-]Nope.")
          										flw_455:
/*<455>*/ 										entrypoint_503_61();
          									  case 1:
/*<525>*/ 										printf("\x0E\x01\x09\x04\x16\x2005Strike targets from afar... You do not\nsuppose that could mean THAT, do\nyou, bud?\n\n\x0E\x01\x09\x04\x08\xB00...By the way, want to see what was\nwritten in the text again, bud?\n[1]Please![2-]No, thanks.")
          										goto flw_455
          									}
          								  case 1:
/*<456>*/ 									entrypoint_503_71();
          								}
          							}
          						}
          					}
          				}
          			  case 1:
/*< 42>*/ 				printf("\x0E\x01\x09\x04\x18\x1701I came across an ancient volume\nin the course of my research!\nWant to know what it had to say?\n[1]Of course![2-]Nah...")
/*< 43>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_53:
/*< 53>*/ 					printf("\x0E\x01\x09\x04\x16\x1E07<r<Arrow in Repose>><pause1E>... Ye who yearns to\nstrike targets from afar, draw this\nshape so that it may be known.")
/*< 45>*/ 					printf("\x0E\x01\x09\x04\x18\x1700Well, that is what is written there!\nDoes that mean anything to you?")
/*< 46>*/ 					scene_flags[10 'Sealed Grounds'][67 /* 0x9 08 */] = true;
/*<336>*/ 					temp_flags[3 /* 0x1 08 */] = true;
/*<337>*/ 					temp_flags[4 /* 0x1 10 */] = true;
/*<338>*/ 					temp_flags[5 /* 0x1 20 */] = true;
/*<339>*/ 					temp_flags[10 /* 0x0 04 */] = true;
/*<553>*/ 					temp_flags[11 /* 0x0 08 */] = true;
/*<340>*/ 					story_flags[491 /* us: 805A9B13 0x02, jp: 805ACD93 0x02 */] = false;
/*<514>*/ 					story_flags[427 /* us: 805A9B06 0x10, jp: 805ACD86 0x10 */] = true;
/*<625>*/ 					switch (scene_flags[61 /* 0x6 20 */]) {
          					  case 0:
/*<626>*/ 						switch (scene_flags[62 /* 0x6 40 */]) {
          						  case 0:
/*<627>*/ 							switch (scene_flags[64 /* 0x9 01 */]) {
          							  case 0:
/*<628>*/ 								scene_flags[10 'Sealed Grounds'][69 /* 0x9 20 */] = true;
          							  case 1:
          							}
          						  case 1:
          						}
          					  case 1:
          					}
          				  case 1:
/*< 44>*/ 					printf("\x0E\x01\x09\x04\x08\xB07No need to be shy, now! I can see\nthe excitement on your face, bud!\nOh, all right, I will tell you!")
          					goto flw_53
          				}
          			}
          		  case 1:
/*< 50>*/ 			printf("\x0E\x01\x09\x04\x181F\x1908There is no mistaking it! This symbol\nmust mark one of the <r<goddess walls>>\nleft for the hero by the goddess!")
/*<156>*/ 			switch (temp_flags[7 /* 0x1 80 */]) {
          			  case 0:
/*<527>*/ 				switch (scene_flags[61 /* 0x6 20 */]) {
          				  case 0:
/*<157>*/ 					printf("\x0E\x01\x09\x04!\x1701I want to see a bunch of <y<Rupees\n>>pop out of the wall again!\n\n\n\x0E\x01\x09\x04\x08\xB00...By the way, would you like to review\nwhat was written in the text?\n[1]Please![2-]Nope.")
          					flw_160:
/*<160>*/ 					entrypoint_503_62();
          				  case 1:
/*<529>*/ 					printf("\x0E\x01\x09\x04\x00\x1B05Great riches, eh? Do you suppose\nthey...they really meant it?!\n\n\n\x0E\x01\x09\x04\x08\xB00...By the way, would you like to review\nwhat was written in the text?\n[1]Please![2-]Nope.")
          					goto flw_160
          				}
          			  case 1:
/*<155>*/ 				switch (temp_flags[8 /* 0x0 01 */]) {
          				  case 0:
/*<526>*/ 					switch (scene_flags[62 /* 0x6 40 */]) {
          					  case 0:
/*<158>*/ 						printf("\x0E\x01\x09\x04!\x1701I want to see the wall rain <y<hearts>> down\non you again!\n\n\n\x0E\x01\x09\x04\x08\xB00...By the way, would you like to review\nwhat was written in the text?\n[1]Please![2-]Nope.")
          						flw_161:
/*<161>*/ 						entrypoint_503_63();
          					  case 1:
/*<530>*/ 						printf("\x0E\x01\x09\x04\x16\xB04From the heavens shall fall\na rain of life's essence...\n\n\n\x0E\x01\x09\x04\x00\xB05What do you think that means, bud?\nWhatever it is, it sounds kind of...\nrefreshing!\n\n\x0E\x01\x09\x04\x08\xB00...By the way, want to see what was\nwritten in the text again, bud?\n[1]Please![2-]No, thanks.")
          						goto flw_161
          					}
          				  case 1:
/*<154>*/ 					switch (temp_flags[9 /* 0x0 02 */]) {
          					  case 0:
/*<528>*/ 						switch (scene_flags[64 /* 0x9 01 */]) {
          						  case 0:
/*<159>*/ 							printf("\x0E\x01\x09\x04\x18\x1701Buddy, I have always said that an\nexplosive is worth a pound of...uh,\nboom? Anyway, I want to see <y<bombs\n>>come out of that wall today!\n\x0E\x01\x09\x04\x08\xB00...By the way, would you like to review\nwhat was written in the text?\n[1]Please![2-]Nope.")
          							flw_162:
/*<162>*/ 							entrypoint_503_64();
          						  case 1:
/*<531>*/ 							printf("\x0E\x01\x09\x04!\x1705What kind of shape is a closed circle,\nanyway? Huh. I thought all of them\nwere closed.\n\n\x0E\x01\x09\x04\x16\x1E04This is just a hunch, but...<pause0A>I think it\nmight just be a regular old circle!\n\n\n\x0E\x01\x09\x04\x08\xB00...By the way, want to see what was\nwritten in the text again, bud?\n[1]Please![2-]No, thanks.")
          							goto flw_162
          						}
          					  case 1:
/*<252>*/ 						entrypoint_503_67();
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_503_15() {
/*<170>*/ 	start()
/*<387>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 384, 'param3': 32}
/*<384>*/ 	{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 280, 'next': 388, 'param3': 15}
/*<388>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6145, 'param2': 256, 'next': 580, 'param3': 13}
/*<580>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 385, 'param3': 6}
/*<385>*/ 	set_camera(3, 0)
/*<386>*/ 	{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 334, 'param3': 16}
/*<334>*/ 	switch (scene_flags[69 /* 0x9 20 */]) {
          	  case 0:
/*<335>*/ 		switch (scene_flags[68 /* 0x9 10 */]) {
          		  case 0:
          			flw_189:
/*<189>*/ 			switch (scene_flags[65 /* 0x9 02 */]) {
          			  case 0:
/*<181>*/ 				printf("\x0E\x01\x09\x04\x1817\x1909BLESSED BUTTERFLIES!\nYou are the best, bud! Thanks.")
          				flw_193:
/*<193>*/ 				entrypoint_503_17();
          			  case 1:
/*<182>*/ 				printf("\x0E\x01\x09\x04\x1817\x1908SWEET GORON!\n\n\n\nSo that is what the ancient writing\nmeant by striking targets from afar!")
/*<190>*/ 				scene_flags[10 'Sealed Grounds'][65 /* 0x9 02 */] = true;
          				goto flw_193
          			}
          		  case 1:
/*<585>*/ 			scene_flags[10 'Sealed Grounds'][65 /* 0x9 02 */] = true;
/*<565>*/ 			printf("\x0E\x01\x09\x04\x1817\x1908SWEET GORON!\n\n\n\nSo that is what the ancient writing\nmeant by striking targets from afar!")
/*<500>*/ 			entrypoint_503_20();
          		}
          	  case 1:
          		goto flw_189
          	}
          }

          void entrypoint_503_67() {
/*<251>*/ 	start()
/*<224>*/ 	switch (scene_flags[61 /* 0x6 20 */]) {
          	  case 0:
/*<227>*/ 		switch (scene_flags[62 /* 0x6 40 */]) {
          		  case 0:
/*<230>*/ 			switch (scene_flags[64 /* 0x9 01 */]) {
          			  case 0:
/*<234>*/ 				switch (random(3)) {
          				  case 0:
/*<239>*/ 					entrypoint_503_68();
          				  case 1:
/*<240>*/ 					entrypoint_503_69();
          				  case 2:
/*<241>*/ 					entrypoint_503_70();
          				}
          			  case 1:
/*<232>*/ 				entrypoint_503_70();
          			}
          		  case 1:
/*<229>*/ 			switch (scene_flags[64 /* 0x9 01 */]) {
          			  case 0:
/*<233>*/ 				entrypoint_503_69();
          			  case 1:
/*<235>*/ 				switch (random(2)) {
          				  case 0:
/*<242>*/ 					entrypoint_503_70();
          				  case 1:
/*<243>*/ 					entrypoint_503_69();
          				}
          			}
          		}
          	  case 1:
/*<225>*/ 		switch (scene_flags[62 /* 0x6 40 */]) {
          		  case 0:
/*<228>*/ 			switch (scene_flags[64 /* 0x9 01 */]) {
          			  case 0:
/*<231>*/ 				entrypoint_503_68();
          			  case 1:
/*<237>*/ 				switch (random(2)) {
          				  case 0:
/*<244>*/ 					entrypoint_503_68();
          				  case 1:
/*<245>*/ 					entrypoint_503_70();
          				}
          			}
          		  case 1:
/*<226>*/ 			switch (scene_flags[64 /* 0x9 01 */]) {
          			  case 0:
/*<236>*/ 				switch (random(2)) {
          				  case 0:
/*<246>*/ 					entrypoint_503_68();
          				  case 1:
/*<247>*/ 					entrypoint_503_69();
          				}
          			  case 1:
/*<238>*/ 				switch (random(3)) {
          				  case 0:
/*<248>*/ 					entrypoint_503_68();
          				  case 1:
/*<249>*/ 					entrypoint_503_69();
          				  case 2:
/*<250>*/ 					entrypoint_503_70();
          				}
          			}
          		}
          	}
          }

          void entrypoint_503_68() {
/*<253>*/ 	start()
/*<128>*/ 	temp_flags[4 /* 0x1 10 */] = true;
/*<129>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*<130>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<424>*/ 	temp_flags[11 /* 0x0 08 */] = true;
/*< 78>*/ 	switch (scene_flags[61 /* 0x6 20 */]) {
          	  case 0:
/*< 80>*/ 		printf("\x0E\x01\x09\x04\x18\x1704Today I would like to witness the magic\nof <y<Rupees>> emerging from the wall.\nFor my research, of course!\n\n<pause1E>...By the way, would you like to\nreview what was written in the text?\n[1]Please![2-]No need.")
          		goto flw_79
          	  case 1:
/*< 83>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07<r<Glimmering Hexagon>><pause1E>... Ye who seeks\ngreat riches, draw this shape so that it\nmay be known.")
/*<100>*/ 		printf("\x0E\x01\x09\x04\x18\x1700Well, that is what is written there!\nDoes that mean anything to you?")
          		goto flw_139
          	}
          }

          void entrypoint_503_51() {
          	start()
/*<351>*/ 	switch (scene_flags[110 /* 0xC 40 */]) {
          	  case 0:
          		flw_13:
/*< 13>*/ 		printf("\x0E\x01\x09\x04%\x1356It is sort of embarrassing to admit, but \nthat is all I have figured out so far. \nBut, hey, I just started my research!\n\n\x0E\x01\x09\x04\x0E\x1300If you find yourself still hankering to\nlearn more, come back and talk to me\nagain later!\n\n\x0E\x01\x09\x04\x00\x1300Meanwhile, I will keep trying to dig\nup more information!")
          	  case 1:
/*<352>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 5, 'param3': 31}
/*<  5>*/ 		printf("\x0E\x01\x09\x04\x00\x01Oh, hey, bud! We meet again! In a\nhurry as usual, eh?\n\n\n\x0E\x01\x09\x04\x1B\x1300Yup, I have been keeping busy too,\nchecking out the wonders of the world.\n\n\n\x0E\x01\x09\x04\x0E\x1300Say, you want to hear about some\nof my research?\n[1]Sure![2-]Nah...")
/*<  9>*/ 		switch (choice(2)) {
          		  case 0:
/*< 10>*/ 			printf("\x0E\x01\x07\x04\x0E\x1908OK, bud, prepare to be amazed!\nI made a huge discovery while I was\nout doing my field research.\n\nSo get a load of this... Apparently,\nthere are <r<walls >>and <r<statues>> that\nrespond to \x0E\x01\x07\x04\x00\x1300<r<beautiful tones>>!\n\n\x0E\x01\x07\x04\x0E\x1300Wild, right? Want to know more?\n[1]Of course![2-]Nah...")
/*< 12>*/ 			switch (choice(2)) {
          			  case 0:
/*<353>*/ 				scene_flags[10 'Sealed Grounds'][110 /* 0xC 40 */] = true;
          				goto flw_13
          			  case 1:
          				flw_11:
/*< 11>*/ 				printf("\x0E\x01\x09\x04%\xE05Oh, that is too bad. Well, if you ever \nget in a researchy kind of mood, you\nknow where to find me.")
          			}
          		  case 1:
          			goto flw_11
          		}
          	}
          }

          void entrypoint_503_17() {
/*<191>*/ 	start()
/*<557>*/ 	set_camera(6, 0)
/*<631>*/ 	switch (scene_flags[113 /* 0xF 02 */]) {
          	  case 0:
/*<197>*/ 		switch (random(4)) {
          		  case 0:
/*<198>*/ 			switch (random(4)) {
          			  case 0:
/*<409>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Let me give you a little token of my\nappreciation for assisting with\nmy research!")
/*<400>*/ 				give_item(62 0x3E);
          				flw_554:
/*<554>*/ 				set_camera(5, 0)
/*<596>*/ 				switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          				  case 0:
          					flw_501:
/*<501>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				  case 1:
/*<598>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 597, 'param3': 32}
/*<597>*/ 					{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 280, 'next': 501, 'param3': 15}
          					goto flw_501
          				}
          			  case 1:
/*<410>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Let me give you a little token of my\nappreciation for assisting with\nmy research!")
/*<401>*/ 				give_item(4 0x04);
/*<616>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 554, 'param3': 12}
          				goto flw_554
          			  case 2:
/*<212>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Let me give you a little token of my\nappreciation for assisting with\nmy research!")
/*<213>*/ 				give_item(62 0x3E);
          				goto flw_554
          			  case 3:
/*<214>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Let me give you a little token of my\nappreciation for assisting with\nmy research!")
/*<215>*/ 				give_item(62 0x3E);
          				goto flw_554
          			}
          		  case 1:
/*<199>*/ 			switch (random(4)) {
          			  case 0:
/*<411>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Let me give you a little token of my\nappreciation for assisting with\nmy research!")
/*<402>*/ 				give_item(63 0x3F);
          				goto flw_554
          			  case 1:
/*<412>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Let me give you a little token of my\nappreciation for assisting with\nmy research!")
/*<403>*/ 				give_item(4 0x04);
/*<617>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 554, 'param3': 12}
          				goto flw_554
          			  case 2:
/*<204>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Let me give you a little token of my\nappreciation for assisting with\nmy research!")
/*<205>*/ 				give_item(62 0x3E);
          				goto flw_554
          			  case 3:
/*<206>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Let me give you a little token of my\nappreciation for assisting with\nmy research!")
/*<207>*/ 				give_item(63 0x3F);
          				goto flw_554
          			}
          		  case 2:
/*<200>*/ 			switch (random(4)) {
          			  case 0:
/*<413>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Let me give you a little token of my\nappreciation for assisting with\nmy research!")
/*<404>*/ 				give_item(63 0x3F);
          				goto flw_554
          			  case 1:
/*<414>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Let me give you a little token of my\nappreciation for assisting with\nmy research!")
/*<405>*/ 				give_item(4 0x04);
/*<618>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 554, 'param3': 12}
          				goto flw_554
          			  case 2:
/*<208>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Let me give you a little token of my\nappreciation for assisting with\nmy research!")
/*<209>*/ 				give_item(64 0x40);
          				goto flw_554
          			  case 3:
/*<210>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Let me give you a little token of my\nappreciation for assisting with\nmy research!")
/*<211>*/ 				give_item(63 0x3F);
          				goto flw_554
          			}
          		  case 3:
/*<201>*/ 			switch (random(4)) {
          			  case 0:
/*<415>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Let me give you a little token of my\nappreciation for assisting with\nmy research!")
/*<406>*/ 				give_item(64 0x40);
          				goto flw_554
          			  case 1:
/*<416>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Let me give you a little token of my\nappreciation for assisting with\nmy research!")
/*<407>*/ 				give_item(4 0x04);
/*<619>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 554, 'param3': 12}
          				goto flw_554
          			  case 2:
/*<202>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Let me give you a little token of my\nappreciation for assisting with\nmy research!")
/*<203>*/ 				give_item(32 0x20);
/*<629>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 554, 'param3': 12}
          				goto flw_554
          			  case 3:
/*<417>*/ 				printf("\x0E\x01\x09\x04\x1808\xB02Let me give you a little token of my\nappreciation for assisting with\nmy research!")
/*<408>*/ 				give_item(32 0x20);
/*<620>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 554, 'param3': 12}
          				goto flw_554
          			}
          		}
          	  case 1:
/*<633>*/ 		scene_flags[10 'Sealed Grounds'][113 /* 0xF 02 */] = true;
/*<632>*/ 		printf("\x0E\x01\x09\x04\x1808\xB02For helping me out with my research,\nI would like to give you a little\nsomething!")
/*<630>*/ 		give_item(94 0x5E);
/*<638>*/ 		set_camera(3, 0)
/*<640>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 639, 'param3': 32}
/*<639>*/ 		printf("\x0E\x01\x09\x04\x1808\x1301The magical power of the goddess walls\n<r<returns>> after a little time has passed,\nso come by and help me with my\nresearch again sometime, OK?")
/*<635>*/ 		set_camera(5, 0)
/*<636>*/ 		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          		  case 0:
          			flw_634:
/*<634>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<637>*/ 			{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 280, 'next': 634, 'param3': 15}
          			goto flw_634
          		}
          	}
          }

          void entrypoint_503_69() {
/*<254>*/ 	start()
/*<125>*/ 	temp_flags[3 /* 0x1 08 */] = true;
/*<126>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*<127>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<425>*/ 	temp_flags[11 /* 0x0 08 */] = true;
/*< 84>*/ 	switch (scene_flags[62 /* 0x6 40 */]) {
          	  case 0:
/*< 86>*/ 		printf("\x0E\x01\x09\x04\x18\x1704Today I would like to witness the magic\nof <y<hearts>> emerging from the wall!\nHow astonishing would that be?\n\n<pause1E>...By the way, would you like to review\nwhat was written in the text?\n[1]Please![2-]No need.")
          		goto flw_85
          	  case 1:
/*< 89>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07<r<Life's Crimson Vessel>><pause1E>... Ye who longs\nfor the source of life, draw this shape\nso that it may be known.\n\nDo so, and from the heavens shall fall\na rain of life's essence.")
/*< 98>*/ 		printf("\x0E\x01\x09\x04\x18\x1700Well, that is what is written there!\nDoes that mean anything to you?")
          		goto flw_140
          	}
          }

          void entrypoint_503_52() {
/*<  1>*/ 	start()
/*<346>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*<396>*/ 		printf("\x0E\x01\x09\x04\x1D\x1353What is going on here?! <pause1E>This has never\nhappened before!")
          	  case 1:
/*<354>*/ 		switch (scene_flags[111 /* 0xC 80 */]) {
          		  case 0:
          			flw_22:
/*< 22>*/ 			printf("\x0E\x01\x09\x04\n\x1304Ancient tomes mention these\nbutterflies flapping around in packs\nby certain walls and statues!\n\nSeems like these butterflies have some\nkind of sixth sense. They are detecting,\nuh...something! Want to hear more?\n[1]Please![2-]Enough.")
/*< 23>*/ 			switch (choice(2)) {
          			  case 0:
/*<502>*/ 				scene_flags[10 'Sealed Grounds'][111 /* 0xC 80 */] = true;
/*< 24>*/ 				printf("\x0E\x01\x09\x04\x0E\x1300Which are you interested in?\n[1]Walls.[2]Statues.")
/*< 25>*/ 				switch (choice(2)) {
          				  case 0:
/*< 27>*/ 					printf("\x0E\x01\x09\x04\x00\x01From what I have learned, it sounds\nlike these walls were left behind by\nthe goddess for the hero mentioned\nin legends!\nThe things the hero desires are said to\nspring forth from behind the walls.\nThat is why they call them <r<goddess\nwalls>>, I suppose. Hungry to hear more?\n[1]Of course![2-]Sorry...")
/*< 28>*/ 					switch (choice(2)) {
          					  case 0:
/*< 29>*/ 						printf("\x0E\x01\x09\x04%\x1B56THAT IS THE SPIRIT! But sadly, that\nis as far as my research has gotten me.\n\n\n\x0E\x01\x09\x04\n\x1300As soon as I make any new discoveries,\nyou will be the first to know!")
          					  case 1:
/*< 30>*/ 						printf("\x0E\x01\x09\x04\x00\x04I am hard at work investigating the\nlocations of those <r<goddess walls>> now!")
          					}
          				  case 1:
/*< 26>*/ 					printf("\x0E\x01\x09\x04\x00\x01The writings claim that the statues\nappear out of nowhere with a\n\x201Cboing-oing\" sound and speak a\nstrange language!\nCan you believe it, buddy? <r<Talking\nstatues>>! I know you want to hear more\nabout this!\n[1]Tell me![2-]No, thanks.")
/*<503>*/ 					switch (choice(2)) {
          					  case 0:
/*<504>*/ 						printf("\x0E\x01\x09\x04%\x1B56THAT IS THE SPIRIT! But sadly, that\nis as far as my research has gotten me.\n\n\n\x0E\x01\x09\x04\n\x1300As soon as I make any new discoveries,\nyou will be the first to know!")
          					  case 1:
/*<505>*/ 						printf("\x0E\x01\x09\x04\x00\x04I am hard at work investigating the\nlocations of those <r<talking statues>> now!")
          					}
          				}
          			  case 1:
          				flw_16:
/*< 16>*/ 				printf("\x0E\x01\x09\x04%\xE05Oh, that is too bad. Well, if you ever \nget in a researchy kind of mood, you\nknow where to find me.")
          			}
          		  case 1:
/*<355>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 6, 'param3': 31}
/*<  6>*/ 			printf("\x0E\x01\x09\x04\x00\x01Oh, hey, bud! We meet again! In a\nhurry as usual, eh?\n\n\n\x0E\x01\x09\x04\x1B\x1300Yup, I have been keeping busy too,\nchecking out the wonders of the world.\n\n\n\x0E\x01\x09\x04\x0E\x1300Say, you want to hear about some\nof my research?\n[1]Sure![2-]Nah...")
/*< 14>*/ 			switch (choice(2)) {
          			  case 0:
/*< 15>*/ 				printf("\x0E\x01\x07\x04\x0E\x1908OK, bud, prepare to be amazed!\nI made a huge discovery while I was\nout doing my field research.\n\nSo get a load of this... Apparently,\nthere are <r<walls >>and <r<statues>> that\nrespond to \x0E\x01\x07\x04\x00\x1300<r<beautiful tones>>!\n\n\x0E\x01\x07\x04\x0E\x1300Wild, right? Want to know more?\n[1]Of course![2-]Nah...")
/*< 17>*/ 				switch (choice(2)) {
          				  case 0:
/*< 18>*/ 					printf("\x0E\x01\x09\x04\x0E\x1904ALL RIGHT! That is the kind of\narchaeological enthusiasm I like to see!\n\n\n\x0E\x01\x09\x04\x00\x1900Oh, but before we get into the\nfascinating details of <r<walls>> and <r<statues>>,\nthere is something I had better ask you\nabout, bud.\n\x0E\x01\x09\x04\x0E\xB00You ever heard of a <b<Blessed Butterfly>>?\n[1]I've seen one![2-]Nope.")
/*< 19>*/ 					switch (choice(2)) {
          					  case 0:
/*< 20>*/ 						printf("All right, bud, then let me jump\nstraight to the point.")
          						goto flw_22
          					  case 1:
/*< 21>*/ 						printf("\x0E\x01\x09\x04\x0E\x1300Oh! Right, so a <b<Blessed Butterfly>> is\nthis kind of pretty, blue butterfly!\n\n\n\x0E\x01\x09\x04\x1B\x1300You may not believe it, but they are\nsuper hardy. They live in all kinds of\nplaces you would never expect.\n\n\x0E\x01\x09\x04\x0E\x1300Even in a land like this, you will see\nplenty of them!")
          						goto flw_22
          					}
          				  case 1:
          					goto flw_16
          				}
          			  case 1:
          				goto flw_16
          			}
          		}
          	}
          }

          void entrypoint_503_18() {
/*<341>*/ 	start()
/*<611>*/ 	switch (story_flags[424 /* us: 805A9B06 0x02, jp: 805ACD86 0x02 */]) {
          	  case 0:
/*<613>*/ 		entrypoint_503_21();
          	  case 1:
/*<392>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 389, 'param3': 32}
/*<389>*/ 		{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 280, 'next': 393, 'param3': 15}
/*<393>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6145, 'param2': 256, 'next': 581, 'param3': 13}
/*<581>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 390, 'param3': 6}
/*<390>*/ 		set_camera(3, 0)
/*<391>*/ 		{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 399, 'param3': 16}
/*<399>*/ 		switch (temp_flags[8 /* 0x0 01 */]) {
          		  case 0:
/*<552>*/ 			switch (story_flags[421 /* us: 805A9B07 0x40, jp: 805ACD87 0x40 */]) {
          			  case 0:
/*<343>*/ 				printf("\x0E\x01\x09\x04\x1817\x1908WHOA NOW!\n\n\n\n\x0E\x01\x09\x04\x1816\x1E00...Three piddly hearts? Hardly a rain\nfrom the heavens, now is it?\n\n\nThat was not what I was expecting\nwould appear. I better do some more\nresearch!")
/*<342>*/ 				printf("\x0E\x01\x09\x04\x1808\xB01Over time, the power of the goddess\nwalls is <r<restored>>!\n\n\n\x0E\x01\x09\x04\x18\x1700When that happens, I would like your\nhelp with my research again!")
          				flw_532:
/*<532>*/ 				set_camera(4, 0)
/*<590>*/ 				switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          				  case 0:
          					flw_395:
/*<395>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				  case 1:
/*<591>*/ 					{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 280, 'next': 395, 'param3': 15}
          					goto flw_395
          				}
          			  case 1:
          				flw_398:
/*<398>*/ 				printf("\x0E\x01\x09\x04\x1817\x1908WHAZIT?!\n\n\n\n\x0E\x01\x09\x04\x1816\x1E00That was not what I was expecting\nwould appear. I better do a little\nmore research!")
/*<397>*/ 				printf("\x0E\x01\x09\x04\x1808\xB01Over time, the power of the goddess\nwalls is <r<restored>>!\n\n\n\x0E\x01\x09\x04\x18\x1700When that happens, I would like your\nhelp with my research again!")
          				goto flw_532
          			}
          		  case 1:
          			goto flw_398
          		}
          	}
          }

          void entrypoint_503_53() {
/*<  2>*/ 	start()
/*< 34>*/ 	switch (scene_flags[73 /* 0x8 02 */]) {
          	  case 0:
/*< 35>*/ 		printf("\x0E\x01\x09\x04\x00\nIt is just like the old texts say, buddy!\nIt appeared with a \x201Cboing-oing\" and\nspoke in some strange tongue!\n\n\x0E\x01\x09\x04\x16\x1E0BThis is a major leap forward in my\nstudy of the <r<talking statues>>!\n\n\n\x0E\x01\x09\x04\x1E\xB00Next up are those <r<goddess walls>>!\nI have got an inkling I will not have to \nlook very far for those, either. And I \nmean to find one, no matter what!")
          	  case 1:
/*< 36>*/ 		switch (scene_flags[66 /* 0x9 04 */]) {
          		  case 0:
/*< 37>*/ 			printf("\x0E\x01\x09\x04\x16\x200BOh... This could be a problem.\nI cannot carry a tune.\n\n\n\x0E\x01\x09\x04\x00\x2000I could not create beautiful tones if\nwild animals threatened to roll me\ndown a hill! What can we do?")
          		  case 1:
/*<624>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 600, 'param3': 32}
/*<600>*/ 			printf("\x0E\x01\x09\x04\x08\xB08GREAT GORON?!\nI have found some!")
/*<622>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 623, 'param3': 17}
/*<623>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 621, 'param3': 6}
/*<621>*/ 			set_camera(7, 0)
/*< 31>*/ 			printf("\x0E\x01\x09\x04\x17\x190ALook! Those butterflies that respond\nto beautiful tones are swarming all\nover this place!\n\n\x0E\x01\x09\x04\x00\x1900This has to be the right spot...")
/*< 32>*/ 			printf("\x0E\x01\x09\x04\x00\x1E00...Hrm.")
/*< 33>*/ 			printf("\x0E\x01\x09\x04\x16\x200BOh... This could be a problem.\nI cannot carry a tune.\n\n\n\x0E\x01\x09\x04\x00\x2000I could not create beautiful tones if\nwild animals threatened to roll me\ndown a hill! What can we do?")
          		}
          	}
          }

          void entrypoint_503_70() {
/*<255>*/ 	start()
/*<122>*/ 	temp_flags[3 /* 0x1 08 */] = true;
/*<123>*/ 	temp_flags[4 /* 0x1 10 */] = true;
/*<124>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<426>*/ 	temp_flags[11 /* 0x0 08 */] = true;
/*< 90>*/ 	switch (scene_flags[64 /* 0x9 01 */]) {
          	  case 0:
/*< 92>*/ 		printf("\x0E\x01\x09\x04\x18\x1704Today, buddy, I would like to witness\nthe magic of <y<bombs>> emerging from the\nwall! For my research, of course!\n\n<pause1E>...By the way, would you like to\nreview what was written in the text?\n[1]Please![2-]Nah.")
          		goto flw_91
          	  case 1:
/*< 95>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07<r<Closed Circle>><pause1E>... Ye who hungers for\ndestructive force, draw this shape so\nthat it may be known.")
/*< 96>*/ 		printf("\x0E\x01\x09\x04\x18\x1700Well, that is what is written there!\nDoes that mean anything to you?")
          		goto flw_141
          	}
          }

          void entrypoint_503_19() {
/*<478>*/ 	start()
/*<573>*/ 	switch (scene_flags[68 /* 0x9 10 */]) {
          	  case 0:
          		goto flw_377
          	  case 1:
          		flw_482:
/*<482>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 479, 'param3': 32}
/*<479>*/ 		{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 280, 'next': 483, 'param3': 15}
/*<483>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6145, 'param2': 256, 'next': 578, 'param3': 13}
/*<578>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 480, 'param3': 6}
/*<480>*/ 		set_camera(3, 0)
/*<481>*/ 		{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 484, 'param3': 16}
/*<484>*/ 		printf("\x0E\x01\x09\x04\x1813\x1B01GREAT GORON!\n\n\n\n\x0E\x01\x09\x04\x1817\x1908Something I have never seen before\njust materialized out of that wall!\n\n\n\x0E\x01\x09\x04\x1816\x1E00\x0E\x01\x06\x02\xFFCD...\x0E\x01\x06\x02ÍThat could not have been a... \x0E\x01\x09\x04\x1808\xB00\nNo, that is impossible! Forget it.")
/*<533>*/ 		set_camera(4, 0)
/*<592>*/ 		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          		  case 0:
          			flw_485:
/*<485>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<593>*/ 			{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 280, 'next': 485, 'param3': 15}
          			goto flw_485
          		}
          	}
          }

          void entrypoint_503_54() {
/*<  3>*/ 	start()
/*<356>*/ 	switch (scene_flags[68 /* 0x9 10 */]) {
          	  case 0:
          		flw_39:
/*< 39>*/ 		switch (story_flags[431 /* us: 805A9B09 0x01, jp: 805ACD89 0x01 */]) {
          		  case 0:
          			goto flw_51
          		  case 1:
/*<  7>*/ 			printf("\x0E\x01\x09\x04\x08\xB02You again, eh?!\n\n\n\n\x0E\x01\x09\x04\x16\xB00Oh! You would probably want to know\nthat I have seen <b<Blessed Butterflies\n>>flying around here lately!\n\n\x0E\x01\x09\x04\x00\x1E0BToo bad I have no musical talent\nwhatsoever.\n\n\nYep, I could not make a beautiful tone\nto save my life.")
          		}
          	  case 1:
/*<357>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 39, 'param3': 31}
          		goto flw_39
          	}
          }

          void entrypoint_503_71() {
/*<256>*/ 	start()
/*<261>*/ 	switch (scene_flags[61 /* 0x6 20 */]) {
          	  case 0:
/*<262>*/ 		switch (scene_flags[62 /* 0x6 40 */]) {
          		  case 0:
/*<264>*/ 			switch (scene_flags[64 /* 0x9 01 */]) {
          			  case 0:
/*<268>*/ 				switch (scene_flags[65 /* 0x9 02 */]) {
          				  case 0:
/*<282>*/ 					switch (random(4)) {
          					  case 0:
/*<288>*/ 						entrypoint_503_72();
          					  case 1:
/*<289>*/ 						entrypoint_503_73();
          					  case 2:
/*<290>*/ 						entrypoint_503_74();
          					  case 3:
/*<291>*/ 						entrypoint_503_75();
          					}
          				  case 1:
/*<324>*/ 					scene_flags[10 'Sealed Grounds'][69 /* 0x9 20 */] = true;
/*<292>*/ 					entrypoint_503_75();
          				}
          			  case 1:
/*<269>*/ 				switch (scene_flags[65 /* 0x9 02 */]) {
          				  case 0:
/*<327>*/ 					scene_flags[10 'Sealed Grounds'][69 /* 0x9 20 */] = true;
/*<293>*/ 					entrypoint_503_74();
          				  case 1:
/*<283>*/ 					switch (random(2)) {
          					  case 0:
/*<294>*/ 						entrypoint_503_75();
          					  case 1:
/*<295>*/ 						entrypoint_503_74();
          					}
          				}
          			}
          		  case 1:
/*<265>*/ 			switch (scene_flags[64 /* 0x9 01 */]) {
          			  case 0:
/*<270>*/ 				switch (scene_flags[65 /* 0x9 02 */]) {
          				  case 0:
/*<325>*/ 					scene_flags[10 'Sealed Grounds'][69 /* 0x9 20 */] = true;
/*<296>*/ 					entrypoint_503_73();
          				  case 1:
/*<284>*/ 					switch (random(2)) {
          					  case 0:
/*<297>*/ 						entrypoint_503_73();
          					  case 1:
/*<298>*/ 						entrypoint_503_75();
          					}
          				}
          			  case 1:
/*<271>*/ 				switch (scene_flags[65 /* 0x9 02 */]) {
          				  case 0:
/*<285>*/ 					switch (random(2)) {
          					  case 0:
/*<299>*/ 						entrypoint_503_73();
          					  case 1:
/*<300>*/ 						entrypoint_503_74();
          					}
          				  case 1:
/*<286>*/ 					switch (random(3)) {
          					  case 0:
/*<301>*/ 						entrypoint_503_73();
          					  case 1:
/*<302>*/ 						entrypoint_503_74();
          					  case 2:
/*<303>*/ 						entrypoint_503_75();
          					}
          				}
          			}
          		}
          	  case 1:
/*<263>*/ 		switch (scene_flags[62 /* 0x6 40 */]) {
          		  case 0:
/*<266>*/ 			switch (scene_flags[64 /* 0x9 01 */]) {
          			  case 0:
/*<272>*/ 				switch (scene_flags[65 /* 0x9 02 */]) {
          				  case 0:
/*<326>*/ 					scene_flags[10 'Sealed Grounds'][69 /* 0x9 20 */] = true;
/*<304>*/ 					entrypoint_503_72();
          				  case 1:
/*<287>*/ 					switch (random(2)) {
          					  case 0:
/*<305>*/ 						entrypoint_503_72();
          					  case 1:
/*<306>*/ 						entrypoint_503_75();
          					}
          				}
          			  case 1:
/*<273>*/ 				switch (scene_flags[65 /* 0x9 02 */]) {
          				  case 0:
/*<281>*/ 					switch (random(2)) {
          					  case 0:
/*<307>*/ 						entrypoint_503_72();
          					  case 1:
/*<308>*/ 						entrypoint_503_74();
          					}
          				  case 1:
/*<280>*/ 					switch (random(3)) {
          					  case 0:
/*<309>*/ 						entrypoint_503_72();
          					  case 1:
/*<310>*/ 						entrypoint_503_74();
          					  case 2:
/*<311>*/ 						entrypoint_503_75();
          					}
          				}
          			}
          		  case 1:
/*<267>*/ 			switch (scene_flags[64 /* 0x9 01 */]) {
          			  case 0:
/*<274>*/ 				switch (scene_flags[65 /* 0x9 02 */]) {
          				  case 0:
/*<279>*/ 					switch (random(2)) {
          					  case 0:
/*<312>*/ 						entrypoint_503_72();
          					  case 1:
/*<313>*/ 						entrypoint_503_73();
          					}
          				  case 1:
/*<278>*/ 					switch (random(3)) {
          					  case 0:
/*<314>*/ 						entrypoint_503_72();
          					  case 1:
/*<315>*/ 						entrypoint_503_73();
          					  case 2:
/*<316>*/ 						entrypoint_503_75();
          					}
          				}
          			  case 1:
/*<275>*/ 				switch (scene_flags[65 /* 0x9 02 */]) {
          				  case 0:
/*<277>*/ 					switch (random(3)) {
          					  case 0:
/*<317>*/ 						entrypoint_503_72();
          					  case 1:
/*<318>*/ 						entrypoint_503_73();
          					  case 2:
/*<319>*/ 						entrypoint_503_74();
          					}
          				  case 1:
/*<276>*/ 					switch (random(4)) {
          					  case 0:
/*<320>*/ 						entrypoint_503_72();
          					  case 1:
/*<321>*/ 						entrypoint_503_73();
          					  case 2:
/*<322>*/ 						entrypoint_503_74();
          					  case 3:
/*<323>*/ 						entrypoint_503_75();
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_503_55() {
/*<  4>*/ 	start()
/*<344>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*<538>*/ 		switch (story_flags[401 /* us: 805A9B05 0x04, jp: 805ACD85 0x04 */]) {
          		  case 0:
/*<345>*/ 			printf("\x0E\x01\x09\x04\x1B\x1053AGAIN?! <pause1E>What is going on?!\n\n\n\n\x0E\x01\x09\x04%\x1600Still, even at times like these,\nresearch must go on!")
          			flw_545:
/*<545>*/ 			switch (story_flags[431 /* us: 805A9B09 0x01, jp: 805ACD89 0x01 */]) {
          			  case 0:
/*<536>*/ 				entrypoint_503_66();
          			  case 1:
/*<546>*/ 				printf("\x0E\x01\x09\x04\x13\xB04Oh, hey, bud! You would probably want\nto know that I have seen <b<Blessed\nButterflies >>flapping around here\nlately!\n\x0E\x01\x09\x04\x16\x1E0BToo bad I have absolutely no musical\nability whatsoever.\n\n\nI could not create beautiful tones to\nsave my life!")
          			}
          		  case 1:
/*<539>*/ 			printf("\x0E\x01\x09\x04\x13\x1953AGAIN?! <pause1E>What in the world is going\non?!\n\n\n\x0E\x01\x09\x04\x16\x1E00Still, even at times like these,\nresearch must go on!")
          			goto flw_545
          		}
          	  case 1:
/*<534>*/ 		switch (zone_temp_flags[1 /* 0x1 02 */]) {
          		  case 0:
          			goto flw_545
          		  case 1:
/*<535>*/ 			switch (story_flags[350 /* us: 805A9B01 0x10, jp: 805ACD81 0x10 */]) {
          			  case 0:
/*<540>*/ 				switch (story_flags[401 /* us: 805A9B05 0x04, jp: 805ACD85 0x04 */]) {
          				  case 0:
/*<537>*/ 					printf("\x0E\x01\x09\x04\x00\x140A<pause1E>...Huh?<pause1E> \x0E\x01\x09\x04\x0E\x1300Is there something different\nabout your sword, or is it just me?\n\n\nEither way, bud, you have got to get rid\nof those bad guys down there!")
          					flw_601:
/*<601>*/ 					switch (story_flags[431 /* us: 805A9B09 0x01, jp: 805ACD89 0x01 */]) {
          					  case 0:
/*<604>*/ 						switch (story_flags[401 /* us: 805A9B05 0x04, jp: 805ACD85 0x04 */]) {
          						  case 0:
/*<606>*/ 							printf("\x0E\x01\x09\x04\x00\x05You know, bud, even at a time like\nthis, I never stop thinking about my\nresearch!")
          							flw_603:
/*<603>*/ 							entrypoint_503_66();
          						  case 1:
/*<605>*/ 							printf("\x0E\x01\x09\x04\x00\x05You know, bud, even at a time like\nthis, I never stop thinking about my\nresearch!")
          							goto flw_603
          						}
          					  case 1:
/*<602>*/ 						printf("\x0E\x01\x09\x04\x13\xB04Oh, hey, bud! You would probably want\nto know that I have seen <b<Blessed\nButterflies >>flapping around here\nlately!\n\x0E\x01\x09\x04\x16\x1E0BToo bad I have absolutely no musical\nability whatsoever.\n\n\nI could not create beautiful tones to\nsave my life!")
          					}
          				  case 1:
/*<541>*/ 					printf("\x0E\x01\x09\x04\x00\xB0A<pause1E>...Huh?<pause1E> \x0E\x01\x09\x04\x08\xB00Is there something different\nabout your sword, or is it just me?\n\n\nEither way, bud, you have got to get rid\nof those bad guys down there!")
          					goto flw_601
          				}
          			  case 1:
/*<542>*/ 				switch (story_flags[401 /* us: 805A9B05 0x04, jp: 805ACD85 0x04 */]) {
          				  case 0:
/*<543>*/ 					printf("\x0E\x01\x09\x04\x0E\x1301You are back?! <pause1E>A bunch of strange\ncreatures came out down below!\nI have never seen anything like them!\n\n\x0E\x01\x09\x04\x00\x02Is there any way you could get rid of\nthem like you did before?!")
          					goto flw_601
          				  case 1:
/*<  8>*/ 					printf("\x0E\x01\x09\x04\x08\xB01You are back?! <pause1E>A bunch of strange\ncreatures came out down below!\nI have never seen anything like them!\n\n\x0E\x01\x09\x04\x18\x1802Is there any way you could get rid of\nthem like you did before?!")
          					goto flw_601
          				}
          			}
          		}
          	}
          }

          void entrypoint_503_03() {
/*< 47>*/ 	start()
/*<362>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 358, 'param3': 32}
/*<358>*/ 	{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 280, 'next': 363, 'param3': 15}
/*<363>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6145, 'param2': 256, 'next': 574, 'param3': 13}
/*<574>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 359, 'param3': 6}
/*<359>*/ 	set_camera(3, 0)
/*<361>*/ 	{'type': 'type3', 'subType': 1, 'param1': 24, 'param2': 100, 'next': 48, 'param3': 16}
/*< 48>*/ 	printf("\x0E\x01\x09\x04\x1817\x1B09WHOA! I think my heart stopped!\n\n\n\n\x0E\x01\x09\x04\x1800\x1900This is it! The discovery of a lifetime!")
/*< 49>*/ 	printf("\x0E\x01\x09\x04\x181F\x1908There is no mistaking it! This symbol\nmust mark one of the <r<goddess walls>>\nleft for the hero by the goddess!")
/*<350>*/ 	scene_flags[10 'Sealed Grounds'][93 /* 0xA 20 */] = true;
/*<360>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_503_72() {
/*<257>*/ 	start()
/*<110>*/ 	temp_flags[4 /* 0x1 10 */] = true;
/*<111>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*<112>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<420>*/ 	temp_flags[11 /* 0x0 08 */] = true;
/*< 54>*/ 	switch (scene_flags[61 /* 0x6 20 */]) {
          	  case 0:
/*< 56>*/ 		printf("\x0E\x01\x09\x04\x18\x1704Today I would like to witness the magic\nof <y<Rupees>> emerging from the wall.\nFor my research, of course!\n\n<pause1E>...By the way, would you like to\nreview what was written in the text?\n[1]Please![2-]No need.")
          		goto flw_55
          	  case 1:
/*< 59>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07<r<Glimmering Hexagon>><pause1E>... Ye who seeks\ngreat riches, draw this shape so that it\nmay be known.")
/*<108>*/ 		printf("\x0E\x01\x09\x04\x18\x1700Well, that is what is written there!\nDoes that mean anything to you?")
          		goto flw_135
          	}
          }

          void entrypoint_503_20() {
/*<497>*/ 	start()
/*<487>*/ 	scene_flags[10 'Sealed Grounds'][68 /* 0x9 10 */] = true;
/*<558>*/ 	set_camera(6, 0)
/*<488>*/ 	printf("\x0E\x01\x09\x04\x1808\xB02Let me give you a little token of my\nappreciation for assisting with\nmy research!")
/*<490>*/ 	give_item(168 0xA8);
/*<567>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 566, 'param3': 32}
/*<566>*/ 	set_camera(3, 0)
/*<489>*/ 	printf("\x0E\x01\x09\x04\x1816\xB01This answers all the mysteries from\nthose ancient texts!\n\n\n...At least, except for the mysteries\nthat followed after that. Do you want\nto know what else was written in\nthere?!\n[1]Absolutely![2-]I'll pass.")
/*<494>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_492:
/*<492>*/ 		printf("\x0E\x01\x09\x04\x1800\x07...The three... ...ngles...\n...the Tri...ce... ...and...")
/*<493>*/ 		printf("\x0E\x01\x09\x04\x1817\x1700...The text is too badly damaged\nto read at all beyond that point.\nWhat do you suppose it could say?")
/*<495>*/ 		printf("\x0E\x01\x09\x04\x1808\x1300Over time, the power of the goddess\nwalls is <r<restored>>!\n\n\n\x0E\x01\x09\x04\x1818\x1700When that happens, I want you to try\nsome different things in order to solve\nthe final mystery!")
/*<572>*/ 		scene_flags[10 'Sealed Grounds'][112 /* 0xF 01 */] = false;
/*<555>*/ 		set_camera(5, 0)
/*<594>*/ 		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          		  case 0:
          			flw_491:
/*<491>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<595>*/ 			{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 280, 'next': 491, 'param3': 15}
          			goto flw_491
          		}
          	  case 1:
/*<496>*/ 		printf("\x0E\x01\x09\x04\x1808\xB00No need to be stubborn, now.\nJust listen!")
          		goto flw_492
          	}
          }

          void entrypoint_503_73() {
/*<258>*/ 	start()
/*<113>*/ 	temp_flags[3 /* 0x1 08 */] = true;
/*<114>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*<115>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<421>*/ 	temp_flags[11 /* 0x0 08 */] = true;
/*< 60>*/ 	switch (scene_flags[62 /* 0x6 40 */]) {
          	  case 0:
/*< 62>*/ 		printf("\x0E\x01\x09\x04\x18\x1704Today I would like to witness the magic\nof <y<hearts>> emerging from the wall!\nHow astonishing would that be?\n\n<pause1E>...By the way, would you like to review\nwhat was written in the text?\n[1]Please![2-]No need.")
          		goto flw_61
          	  case 1:
/*< 65>*/ 		printf("\x0E\x01\x09\x04\x16\x1E07<r<Life's Crimson Vessel>><pause1E>... Ye who longs\nfor the source of life, draw this shape\nso that it may be known.\n\nDo so, and from the heavens shall fall\na rain of life's essence.")
/*<106>*/ 		printf("\x0E\x01\x09\x04\x18\x1700Well, that is what is written there!\nDoes that mean anything to you?")
          		goto flw_136
          	}
          }

          void entrypoint_503_56() {
/*<347>*/ 	start()
/*<348>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*<547>*/ 		switch (story_flags[401 /* us: 805A9B05 0x04, jp: 805ACD85 0x04 */]) {
          		  case 0:
/*<349>*/ 			printf("\x0E\x01\x09\x04\x1B\x1053AGAIN?! <pause1E>What is going on?!\n\n\n\n\x0E\x01\x09\x04%\x1600Still, even at times like these,\nresearch must go on!")
          			flw_550:
/*<550>*/ 			switch (story_flags[431 /* us: 805A9B09 0x01, jp: 805ACD89 0x01 */]) {
          			  case 0:
/*<549>*/ 				entrypoint_503_66();
          			  case 1:
/*<551>*/ 				printf("\x0E\x01\x09\x04\x13\xB04Oh, hey, bud! You would probably want\nto know that I have seen <b<Blessed\nButterflies >>flapping around here\nlately!\n\x0E\x01\x09\x04\x16\x1E0BToo bad I have absolutely no musical\nability whatsoever.\n\n\nI could not create beautiful tones to\nsave my life!")
          			}
          		  case 1:
/*<548>*/ 			printf("\x0E\x01\x09\x04\x13\x1953AGAIN?! <pause1E>What in the world is going\non?!\n\n\n\x0E\x01\x09\x04\x16\x1E00Still, even at times like these,\nresearch must go on!")
          			goto flw_550
          		}
          	  case 1:
          		goto flw_550
          	}
          }

          void entrypoint_503_21() {
/*<612>*/ 	start()
          	goto flw_482
          }

