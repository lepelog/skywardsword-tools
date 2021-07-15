          void entrypoint_501_07() {
/*<250>*/ 	start()
/*<251>*/ 	printf("\x0E\x01\x09\x04\x00\x04Yo, Link! Saw the rail\ntrack I put up outside, eh?\n\n\n\x0E\x01\x09\x04\x00\xB00What's it for? Duh huh... Oh, you'll see\nbefore long!")
          }

          void entrypoint_501_24() {
/*<345>*/ 	start()
/*<382>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<386>*/ 		switch (story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */]) {
          		  case 0:
/*<389>*/ 			set_camera(64, 0)
/*<391>*/ 			printf("<pause1E>\x0E\x01\x06\x02\xFFCD...")
          		  case 1:
          			flw_347:
/*<347>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 453, 'param3': 32}
/*<453>*/ 			switch (scene_flags[37 /* 0x5 20 */]) {
          			  case 0:
/*<454>*/ 				printf("Is this tree something or what?!\nNo wonder it's called the Life Tree!")
          			  case 1:
/*<457>*/ 				check_item_flag(497, 1)
/*<456>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 72}) {
          				  case 0:
/*<455>*/ 					printf("Blah, this place is pretty barren.\nConsidering how long she's been here,\nyou'd think Grannie would've tried to\ndecorate a little.\nI guess she likes the all-stone motif.\nAt the very least she could've tried\nplanting a tree or something to liven\nthe place up.")
          				  case 1:
/*<458>*/ 					printf("Hard to leave the old girl all to herself\nhere...\n\n\n\x0E\x01\x09\x04\x00\xA00But don't you dare go telling Cawlin\nand Strich that I'm down here taking\ncare of some little old lady!")
          				}
          			}
          		}
          	  case 1:
/*<383>*/ 		switch (story_flags[350 /* us: 805A9B01 0x10, jp: 805ACD81 0x10 */]) {
          		  case 0:
/*<478>*/ 			switch (story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */]) {
          			  case 0:
          				goto flw_347
          			  case 1:
/*<385>*/ 				switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          				  case 0:
          					flw_384:
/*<384>*/ 					switch (scene_flags[37 /* 0x5 20 */]) {
          					  case 0:
/*<388>*/ 						set_camera(64, 0)
/*<390>*/ 						printf("<pause1E>\x0E\x01\x06\x02\xFFCD...")
          					  case 1:
/*<387>*/ 						printf("<pause1E>\x0E\x01\x06\x02\xFFCD...")
          					}
          				  case 1:
          					goto flw_347
          				}
          			}
          		  case 1:
          			goto flw_384
          		}
          	}
          }

          void entrypoint_501_08() {
/*<170>*/ 	start()
/*<171>*/ 	switch (scene_flags[81 /* 0xB 02 */]) {
          	  case 0:
/*<175>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 174, 'param3': 32}
/*<174>*/ 		{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': -1, 'next': 176, 'param3': 16}
/*<176>*/ 		set_camera(21, 0)
/*<172>*/ 		printf("\x0E\x01\x09\x04\xE00\n\x0E\x03\x01\x00Link, you must not loose\nanother <r<Skyward Strike >>now!\n\n\nWere you to do so, it could speed up the\nmonster's awakening.\n\n\nWe will return to the gate later. For\nthe moment, you must focus your\nefforts on <r<restoring the seal>> that\nholds the beast captive.")
/*<173>*/ 		scene_flags[10 'Sealed Grounds'][30 /* 0x2 40 */] = false;
/*<332>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<154>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 153, 'param3': 32}
/*<153>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 155, 'param3': 32}
/*<155>*/ 		scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<459>*/ 		story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<460>*/ 		scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<477>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1010, 'next': 156, 'param3': 24}
/*<156>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 157, 'param3': 6}
/*<157>*/ 		set_camera(20, 0)
/*<158>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1034, 'param2': 12800, 'next': 159, 'param3': 13}
/*<159>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3605, 'param2': -256, 'next': 275, 'param3': 13}
/*<275>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 99, 'next': 160, 'param3': 50}
/*<160>*/ 		printf("\x0E\x01\x09\x04\x40A\x321F\x0E\x01\x08\x02\x1CDWHOA-HO!\x0E\x01\x05\x04\x1E\x00")
/*<288>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3585, 'param2': -256, 'next': 287, 'param3': 13}
/*<287>*/ 		{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 284, 'param3': 50}
/*<284>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 161, 'param3': 6}
/*<161>*/ 		set_camera(21, 0)
/*<162>*/ 		{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 356, 'next': 285, 'param3': 15}
/*<285>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 286, 'param3': 6}
/*<286>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 297, 'param3': 17}
/*<297>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 293, 'param3': 6}
/*<293>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1085, 'param2': 12800, 'next': 292, 'param3': 13}
/*<292>*/ 		{'type': 'type3', 'subType': 1, 'param1': 13, 'param2': 0, 'next': 163, 'param3': 40}
/*<163>*/ 		printf("\x0E\x01\x09\x04\xE00\nNo... I fear the <r<seal has given way once\nagain>>. That <r<terrible beast>> is awakening\neven as we speak.\n\nIt is likely that the monster reacted to\nthe sacred power given off by your\nsword.\n\n\x0E\x01\x09\x04\xE01\xB00I wish it had not happened, but there\nwas no other way to open the gate.\nSo it goes...")
/*<165>*/ 		set_camera(22, 0)
/*<164>*/ 		printf("\x0E\x01\x09\x04\xE10\x1600\x0E\x03\x01\x00Link, you must imprison\nthe beast once again.")
/*<276>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 167, 'param3': 50}
/*<167>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12544, 'next': 166, 'param3': 13}
/*<166>*/ 		printf("\x0E\x01\x09\x04\x400\x30DAll right! Bring it on!")
/*<290>*/ 		set_camera(50, 0)
/*<289>*/ 		printf("\x0E\x01\x09\x04\x40F\x2F0FThis is what I've been waiting for.\nIt's time to break out my new toy!\nTrust me, that flabby bag of teeth\ndoesn't stand a chance.\n\x0E\x01\x09\x04\x40B\x3101Well? What are we waiting for?\nI'm heading out there!")
/*<291>*/ 		set_camera(22, 0)
/*<294>*/ 		{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 516, 'next': 295, 'param3': 14}
/*<295>*/ 		set_camera(51, 0)
/*<296>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 179, 'param3': 6}
/*<179>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 466, 'param3': 24}
/*<466>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 177, 'param3': 6}
/*<177>*/ 		scene_flags[10 'Sealed Grounds'][30 /* 0x2 40 */] = false;
/*<169>*/ 		scene_flags[10 'Sealed Grounds'][81 /* 0xB 02 */] = true;
/*<451>*/ 		story_flags[795 /* us: 805A9B2F 0x08, jp: 805ACDAF 0x08 */] = false;
/*<178>*/ 		story_flags[144 /* us: 805A9AEE 0x04, jp: 805ACD6E 0x04 */] = true;
/*<468>*/ 		scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*<168>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_501_25() {
/*<346>*/ 	start()
/*<381>*/ 	set_camera(63, 0)
/*<371>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 372, 'param3': 32}
/*<372>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<380>*/ 		printf("\x0E\x01\x06\x02\xFFCDThat red-haired fellow is really quite\nhandy.\n\n\nSome areas of the temple are badly in\nneed of repair. Perhaps he can assist\nme in that work...")
          	  case 1:
/*<375>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<379>*/ 			printf("\x0E\x01\x06\x02\xFFCDThis temple used to be a place of great\npeace and solitude, but life has taken\nquite a turn lately.\n\nStill, now is not the time for thoughts\nlike these.\n\n\nNot when my worst fears are coming\nto pass...")
          		  case 1:
/*<374>*/ 			switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
          			  case 0:
/*<378>*/ 				printf("\x0E\x01\x06\x02\xFFCDI do hope you are able to catch\nup with Zelda...")
          			  case 1:
/*<373>*/ 				switch (story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */]) {
          				  case 0:
/*<377>*/ 					printf("\x0E\x01\x06\x02\xFFCDI do hope you are able to catch\nup with Zelda...")
          				  case 1:
/*<376>*/ 					printf("\x0E\x01\x06\x02\xFECD.<pause0A>.<pause0A>.")
          				}
          			}
          		}
          	}
          }

          void entrypoint_501_09() {
/*<  4>*/ 	start()
/*<216>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<474>*/ 		switch (story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */]) {
          		  case 0:
/*<475>*/ 			printf("\x0E\x01\x09\x04\x00\x05Searching after the three dragons, are\nyou? I seem to recall a dragon who\nlived in the far reaches of the desert...")
          		  case 1:
/*<480>*/ 			switch (story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */]) {
          			  case 0:
/*<484>*/ 				switch (scene_flags[95 /* 0xA 80 */]) {
          				  case 0:
/*<483>*/ 					printf("\x0E\x01\x09\x04\x00\n\x0E\x03\x01\x00Link, work with Groose to\nimprison that monster once more!")
          				  case 1:
/*<481>*/ 					printf("\x0E\x01\x09\x04\x00\nThat terrible <r<monster>> begins to stir yet\nagain! It appears that even though\nZelda has lent her power to strengthen\nit, the seal will soon reach its limit.\nSo be it. You and Groose must work\ntogether to beat that foul beast back\ninto its prison and restore the seal!")
/*<482>*/ 					scene_flags[10 'Sealed Grounds'][95 /* 0xA 80 */] = true;
          				}
          			  case 1:
/*<217>*/ 				printf("\x0E\x01\x09\x04\x00\x05You seek the dragons? When the Song\nof the Hero is complete, the path to\nthe Triforce shall be illuminated?\nThen take care and be on your way!")
          			}
          		}
          	  case 1:
/*<215>*/ 		printf("The clues to finding the Triforce are\nin Skyloft.\n\n\n\x0E\x01\x09\x04\xE00\x07Go forth and find the Triforce.")
          	}
          }

          void entrypoint_501_26() {
/*<349>*/ 	start()
/*<357>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 356, 'param3': 32}
/*<356>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 353, 'param3': 50}
/*<353>*/ 	printf("\x0E\x01\x09\x04\xE00\x04Come back, Link!\nThe disturbance we're feeling is not in\nthat direction.")
/*<354>*/ 	set_camera(62, 0)
/*<352>*/ 	printf("Hurry. Take the door across from me,\nand see what is happening outside!")
/*<355>*/ 	set_camera(-1, 0)
/*<351>*/ 	printf("...Do you need to equip yourself before\nfacing the unknown? Very well. I will\nnot stop you, but you must hurry back!")
/*<350>*/ 	scene_flags[10 'Sealed Grounds'][107 /* 0xC 08 */] = true;
          }

          void entrypoint_501_27() {
/*<440>*/ 	start()
/*<444>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 476, 'param3': 32}
/*<476>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 445, 'param3': 32}
/*<445>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 446, 'param3': 17}
/*<446>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 447, 'param3': 6}
/*<447>*/ 	{'type': 'type3', 'subType': 1, 'param1': 25, 'param2': 0, 'next': 441, 'param3': 40}
/*<441>*/ 	set_camera(3, 0)
/*<442>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 443, 'param3': 6}
/*<443>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 9, 'next': 448, 'param3': 24}
/*<448>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': -1, 'param3': 6}
          }

          void entrypoint_501_10() {
/*< 59>*/ 	start()
/*< 61>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 60, 'param3': 32}
/*< 60>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 405, 'param3': 32}
/*<405>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 404, 'param3': 50}
          	flw_404:
/*<404>*/ 	printf("\x0E\x01\x09\x04\xE00\x03It seems you were successful in\nimprisoning the monster again.")
/*<399>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 400, 'param3': 47}
/*<400>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 356, 'next': 402, 'param3': 15}
/*<402>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 401, 'param3': 6}
/*<401>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 406, 'param3': 17}
/*<406>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 408, 'param3': 50}
/*<408>*/ 	set_camera(26, 0)
/*<409>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 403, 'param3': 6}
/*<403>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 407, 'param3': 48}
/*<407>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 63, 'param3': 6}
/*< 63>*/ 	printf("You have my thanks,\nLink.")
/*< 65>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 62, 'param3': 17}
/*< 62>*/ 	printf("As do you, <b<Groose>>.")
/*<411>*/ 	make_actor_do_something(0, 4)
/*<299>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 64, 'param3': 17}
/*< 64>*/ 	printf("I do not wish to dwell on what may have\nhappened if you two hadn't been here.")
/*< 69>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 70, 'param3': 50}
/*< 70>*/ 	printf("\x0E\x01\x09\x04\x400\x0DDuh huh, aww...you give me too much\ncredit, Grannie.\n\n\nYou were the one who got me to stop\nfeeling sorry for myself and put my\nenergy into doing what I could to help.")
/*<303>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1028, 'param2': 256, 'next': 72, 'param3': 13}
/*< 72>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 71, 'param3': 50}
/*< 71>*/ 	printf("\x0E\x01\x09\x04\xE08\xB0BI did what was necessary to get you to\nrealize your full potential.")
/*<410>*/ 	set_camera(27, 0)
/*<300>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 73, 'param3': 17}
/*< 73>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 301, 'param3': 17}
/*<301>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 74, 'param3': 6}
/*< 74>*/ 	printf("\x0E\x01\x09\x04\xE00\x07\x0E\x03\x01\x00Link, you must wonder\njust what it is you've been fighting out\nthere in the great pit.\n\nThere is much I could tell you, but\nsuffice to say it is the root of the evil\nwe face. When you pass through the\nGate of Time, you shall learn more.\n\x0E\x01\x09\x04\xE01\xB00We may seal it and reseal it into its\nprison a thousand times, but it will\nalways shatter the bonds that confine\nit. Such is its awesome power.\nWe must destroy it at its source or\nsuffer this fate again and again.\n\n\n\x0E\x01\x09\x04\xE10\xB00There is no time to lose. Hit the gate\nwith a Skyward Strike.")
/*<302>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 76, 'param3': 50}
/*< 76>*/ 	printf("\x0E\x01\x09\x04\x40D\x206Come on, already! Charge that sword\nof yours with that sacred force stuff\nGrannie was talkin' about, and <g<zap>> the\nGate of Time!")
/*< 75>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 77, 'param3': 17}
/*< 77>*/ 	printf("Right, Grannie?")
/*<304>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1037, 'param2': 256, 'next': 277, 'param3': 13}
/*<277>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 78, 'param3': 50}
/*< 78>*/ 	printf("\x0E\x01\x09\x04\xE01\x07...Indeed. Now, Link, go.\nGo to the gate.")
/*<306>*/ 	set_camera(53, 0)
/*<307>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 305, 'param3': 6}
/*<305>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_501_28() {
/*<449>*/ 	start()
/*<450>*/ 	printf("My analysis indicates this location is\nideally suited to growing your seedling.\n\n\nHowever, I project that planting the\nseedling in <r<this time >>will make it take\nfar too long for the seedling to grow\ninto a tree capable of producing fruit.")
          }

          void entrypoint_501_11() {
/*<218>*/ 	start()
/*<219>*/ 	printf("\x0E\x01\x09\x04\x00\x03<b<Groose >>shall assist you in making your\nway to the woods.\n\n\nSomething may have happened to the\n<r<Water Dragon of the woods>>. When you\narrive, seek her out!")
          }

          void entrypoint_501_12() {
/*<220>*/ 	start()
/*<225>*/ 	switch (story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */]) {
          	  case 0:
/*<226>*/ 		switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          		  case 0:
/*<239>*/ 			printf("\x0E\x01\x09\x04\x00\nThe time has finally come.\n\n\n\nGo now, Link. Seek out\nthe Triforce in Skyloft!")
          		  case 1:
/*<232>*/ 			switch (scene_flags[96 /* 0xD 01 */]) {
          			  case 0:
/*<227>*/ 				switch (scene_flags[97 /* 0xD 02 */]) {
          				  case 0:
          					flw_487:
/*<487>*/ 					switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          					  case 0:
/*<238>*/ 						printf("\x0E\x01\x09\x04\x00\nWhen you have passed the final trial,\nyou will finally be worthy to receive\nthe power of the Triforce.\n\nHurry back to Skyloft. Whatever\nawaits you in the final trial, you must\nnot fail!")
          					  case 1:
/*<488>*/ 						printf("\x0E\x01\x09\x04\x00\x14Oh, Link! You've learned\nthe parts of the song from the three\ndragons. There's not much time left!\n\nHurry! Return to the sky and complete\nthe Song of the Hero.")
          					}
          				  case 1:
/*<228>*/ 					switch (scene_flags[98 /* 0xD 04 */]) {
          					  case 0:
/*<231>*/ 						printf("\x0E\x01\x09\x04\x00\x03<b<Groose >>waits for you outside <r<by his\ncatapult>>. Go speak with him.")
          					  case 1:
/*<229>*/ 						printf("\x0E\x01\x09\x04\x00\x03Ah, Link, I'm glad you are\nhere. <b<Groose >>has been waiting for you.\n\n\nHe stands outside <r<by his catapult>>.\nGo speak with him. ")
/*<230>*/ 						scene_flags[10 'Sealed Grounds'][98 /* 0xD 04 */] = true;
          					}
          				}
          			  case 1:
/*<233>*/ 				printf("\x0E\x01\x09\x04\x00\x07So that's what happened to the woods?\nI am glad to hear that everything has\nreturned to normal.")
/*<234>*/ 				scene_flags[10 'Sealed Grounds'][96 /* 0xD 01 */] = true;
/*<236>*/ 				switch (scene_flags[97 /* 0xD 02 */]) {
          				  case 0:
          					goto flw_487
          				  case 1:
/*<235>*/ 					printf("\x0E\x01\x09\x04\x00\x03By the way, Link,\n<b<Groose >>is waiting for you.\n\n\nHe proudly stands outside <r<by his\ncatapult>>. Go speak with him.")
/*<237>*/ 					scene_flags[10 'Sealed Grounds'][98 /* 0xD 04 */] = true;
          				}
          			}
          		}
          	  case 1:
/*<222>*/ 		switch (scene_flags[96 /* 0xD 01 */]) {
          		  case 0:
          			flw_224:
/*<224>*/ 			printf("\x0E\x01\x09\x04\x00\nYou must continue to gather the parts\nof the <r<Song of the Hero>>. Time is\nshort!")
          		  case 1:
/*<221>*/ 			printf("\x0E\x01\x09\x04\x00\x07So that's what happened to the woods?\nI am glad to hear that everything has\nreturned to normal.")
/*<223>*/ 			scene_flags[10 'Sealed Grounds'][96 /* 0xD 01 */] = true;
          			goto flw_224
          		}
          	}
          }

          void entrypoint_501_13() {
/*<269>*/ 	start()
/*<270>*/ 	printf("\x0E\x01\x0B\x04\x00\x06Good. You learn fast.\n\n\n\nNow for your next lesson.")
/*<271>*/ 	printf("Focus and play in time with the pulsing\nof the <r<circle of light>>.\n\n\nWhen your timing is right, I shall join\nmy voice to your harp.\n\n\nListen well, for the song I sing will be\nof great help to you in your journey.")
          }

          void entrypoint_501_14() {
/*<253>*/ 	start()
/*<464>*/ 	switch (story_flags[341 /* us: 805A9AFE 0x08, jp: 805ACD7E 0x08 */]) {
          	  case 0:
/*<254>*/ 		switch (story_flags[350 /* us: 805A9B01 0x10, jp: 805ACD81 0x10 */]) {
          		  case 0:
/*<256>*/ 			switch (scene_flags[37 /* 0x5 20 */]) {
          			  case 0:
/*<259>*/ 				printf("\x0E\x01\x09\x04\x0D\xF0AOh yeah! Now this is a tree I could\nlook at all day! It's like a symbol for\nthis temple...or something!\n\n\x0E\x01\x09\x04\x03\x200Every time I stare at it, my jaw starts\nhanging open and I get this weird,\nhappy feeling.")
          			  case 1:
/*<257>*/ 				switch (scene_flags[38 /* 0x5 40 */]) {
          				  case 0:
/*<258>*/ 					printf("\x0E\x01\x09\x04\x0D\x22EIt's great to finally get a sapling here\nand all,<pause14> but it's going to take <r<ages >>to\nget this thing to grow tall!")
          				  case 1:
/*<452>*/ 					check_item_flag(497, 1)
/*<260>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 50}) {
          					  case 0:
/*<261>*/ 						printf("\x0E\x01\x09\x04\x0D\x204Hey, Link, now that is a\nserious seedling. Why didn't you tell\nme you had that thing on you?\n\n\x0E\x01\x09\x04\x00\xE0EI'm no expert, but it seems like the\nperfect fit for this temple. If you\nplant it here, it'll grow for sure.\n\n\x0E\x01\x09\x04\x03\x200Only downside is, <pause0A>it's gonna take\nbasically forever for a seedling that\nbig to grow into a full tree.")
          					  case 1:
/*<255>*/ 						printf("\x0E\x01\x09\x04\x00\x02Don't let me down. I'm counting on\nyou to help <b<Zelda>>, Link!\n\n\nOh, by the way, I've been thinking\nabout how nice it'd be to have a <r<tree\n>>here, but I don't have a seedling or\nanything. You seen one I can plant?")
          					}
          				}
          			}
          		  case 1:
/*<252>*/ 			printf("\x0E\x01\x09\x04\x0C\x206I bet you <b<Zelda>>'s just on the other side\nof that gate, wondering where you are.\nYou shouldn't make the little lady\nwait, Link! Go on!")
          		}
          	  case 1:
/*<465>*/ 		printf("\x0E\x01\x09\x04\x0C\x20DCome on, already! Charge that sword\nof yours with that sacred force stuff\nGrannie was talkin' about, and <g<zap>> the\nGate of Time!\nI bet you <b<Zelda>>'s just on the other side\nof that gate, wonderin' where you are.\nYou shouldn't make the little lady\nwait, Link! Go on!")
          	}
          }

          void entrypoint_501_15() {
/*< 51>*/ 	start()
/*< 54>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 52, 'param3': 32}
/*< 52>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 55, 'param3': 32}
/*< 55>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 53, 'param3': 17}
/*< 53>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 274, 'param3': 17}
/*<274>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 99, 'next': 57, 'param3': 50}
/*< 57>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 2560, 'next': 321, 'param3': 13}
/*<321>*/ 	set_camera(54, 0)
/*<322>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 361, 'param3': 6}
/*<361>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1009, 'next': 56, 'param3': 24}
/*< 56>*/ 	printf("\x0E\x01\x09\x04\x400=Huh? You gotta be kidding me,\nGrannie!")
/*< 58>*/ 	set_camera(18, 0)
          	flw_27:
/*< 27>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 12, 'param3': 6}
/*< 12>*/ 	set_camera(10, 0)
/*< 13>*/ 	printf("\x0E\x01\x09\x04\x400\x02You're messing with me. Say it again,\nI dare you!")
/*< 15>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 16, 'param3': 50}
/*< 16>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3598, 'param2': -256, 'next': 14, 'param3': 13}
/*< 14>*/ 	printf("\x0E\x01\x09\x04\xE00\nI only speak the truth. You are not the\none who will save her. The spirit\nmaiden, your <b<Zelda>>, can only be\nsaved by another.\nIt has been his fate to do this thing,\nand in doing so save us. As it was\ndecided long before you were brought\ncrying into this world.")
/*< 18>*/ 	set_camera(65, 0)
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 33, 'param3': 50}
/*< 33>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12544, 'next': 17, 'param3': 13}
/*< 17>*/ 	printf("\x0E\x01\x09\x04\x400>\x0E\x01\x08\x02\x1CDShut it, Grannie!\n\n\n\nYou obviously don't know me well,\n'cause if you did, you'd know that if\nanyone's gonna save <b<Zelda>>, it's\nGroose!\nHow could it not be me? Plus, if it ain't\nme, why would I even be here? Pffft.\nIf I'm not up to the job of being\nthe hero, just who is?")
/*< 23>*/ 	{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 356, 'next': 28, 'param3': 15}
/*< 28>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 24, 'param3': 6}
/*< 24>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1025, 'param2': 17920, 'next': 35, 'param3': 13}
/*< 35>*/ 	printf("\x0E\x01\x09\x04\x400\x1EHuh?")
/*< 36>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 80, 'param3': 17}
/*< 80>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1025, 'param2': 1792, 'next': 37, 'param3': 13}
/*< 37>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 79, 'param3': 6}
/*< 79>*/ 	set_camera(13, 0)
/*< 19>*/ 	{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 20, 'param3': 14}
/*< 20>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 280, 'param3': 17}
/*<280>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 21, 'param3': 6}
/*< 21>*/ 	printf("\x0E\x01\x09\x04\x400\x3218Oh...now I getcha.\n\n\n\n\x0E\x01\x09\x04\x40D\xA00\x0E\x03\x01\x00Link, Grannie here has\nbeen trying to tell me you're gonna be\nthe big hero who rescues Zelda.")
/*< 22>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12544, 'next': 26, 'param3': 13}
/*< 26>*/ 	set_camera(12, 0)
/*<394>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 395, 'param3': 32}
/*<395>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 393, 'param3': 6}
/*<393>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 25, 'param3': 17}
/*< 25>*/ 	printf("\x0E\x01\x09\x04\x400<What a joke! Look, all I've heard so\nfar is a bunch of babbling about\ndestiny, but that's a load of garbage.\n\n\x0E\x01\x09\x04\x40B\xA00I know you, and you're no hero,\nshrimp!")
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 30, 'param3': 17}
/*< 30>*/ 	set_camera(14, 0)
/*< 29>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 516, 'next': 31, 'param3': 14}
/*< 31>*/ 	printf("\x0E\x01\x09\x04\x4008\x0E\x01\x08\x02\x1CDWaaaah!\x0E\x01\x05\x04-\x00")
/*< 39>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 35, 'next': 462, 'param3': 6}
/*<462>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 463, 'param3': 24}
/*<463>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 281, 'param3': 6}
/*<281>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 282, 'param3': 17}
/*<282>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 40, 'param3': 6}
/*< 40>*/ 	set_camera(49, 0)
/*<283>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 41, 'param3': 16}
/*< 41>*/ 	printf("\x0E\x01\x09\x04\xE00\x08Greetings, Link. Were you\nable to catch up with <b<Zelda>>?")
/*< 42>*/ 	set_camera(16, 0)
/*< 43>*/ 	printf("\x0E\x01\x09\x04\xE0E\xFF05Ah, I see. So the guardian was there as\nwell, was she?\n\n\nThe one you saw by Zelda's side is\nknown as <b<Impa>>. She is a being sent\nforth by the <b<goddess >>to aid Zelda in \nher quest.")
/*< 50>*/ 	printf("The two have traveled somewhere in\norder to accomplish the great task\ndestiny has set before them.\n\nHowever, now that Impa has destroyed\nthe gate that they used, there is only\none way left to find them.")
/*< 49>*/ 	printf("\x0E\x01\x09\x04\xE0E\xFF00You must make use of the <b<harp >>given\nto you by Zelda.")
/*< 47>*/ 	set_camera(15, 0)
/*< 44>*/ 	printf("\x0E\x01\x09\x04\xE00\x08...Tell me, Link, have you\nattempted to play the harp that\nyou received?\n\nMy sense is that you have not yet\nfamiliarized yourself with it. \n\n\nVery well, I shall teach you how to\nplay it. Listen well and do as I say.\n\n\nFirst, press \x0E\x02\x04\x02\x1ECD to ready your harp.\x0E\x01\x11\x02\x10CD")
/*< 48>*/ 	story_flags[135 /* us: 805A9AE4 0x20, jp: 805ACD64 0x20 */] = true;
/*< 46>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 45, 'param3': 42}
/*< 45>*/ 	scene_flags[10 'Sealed Grounds'][28 /* 0x2 10 */] = true;
/*<489>*/ 	temp_flags[40 /* 0x4 01 */] = true;
          }

          void entrypoint_501_16() {
/*< 66>*/ 	start()
/*< 67>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 68, 'param3': 32}
/*< 68>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 298, 'param3': 32}
/*<298>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 404, 'param3': 50}
          	goto flw_404
          }

          void entrypoint_501_17() {
/*<144>*/ 	start()
          	flw_134:
/*<134>*/ 	printf("\x0E\x01\x09\x04\x10\x160FAh, your sword!\n\n\n\n\x0E\x01\x09\x04\x00\xB00There can be no doubt. The sacred\nflames have purified this blade.\nWell done, Link. That\nsword holds tremendous power.")
/*<135>*/ 	printf("\x0E\x01\x09\x04\x01\xFF07That power is a sacred <r<force>>.\n\n\n\n\x0E\x01\x09\x04\x00\xB00It is a divine power left to us by the\ngods of old. The same power that is\nspoken of in the Ballad of the Goddess.\n\nTo look upon you is to see that same\ngreat power, now flowing through you\nand the sword you carry.")
/*<138>*/ 	set_camera(19, 0)
/*<427>*/ 	printf("\x0E\x01\x09\x04\x00\x1603Come, Link. You must\nnow open the Gate of Time.")
/*<396>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 397, 'param3': 32}
/*<397>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 398, 'param3': 6}
/*<398>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 136, 'param3': 17}
/*<136>*/ 	printf("Now that the sacred <r<force>> dwells\nwithin your blade, strike the Gate of\nTime with a <r<Skyward Strike >>and\nit will surely awaken.")
/*<140>*/ 	set_camera(24, 0)
/*<137>*/ 	printf("Climb upon the pedestal, and <g<show\nthe gate your sword's power>>!")
/*<142>*/ 	scene_flags[10 'Sealed Grounds'][80 /* 0xB 01 */] = true;
/*<370>*/ 	scene_flags[10 'Sealed Grounds'][57 /* 0x6 02 */] = false;
/*<469>*/ 	scene_flags[10 'Sealed Grounds'][30 /* 0x2 40 */] = false;
/*<139>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 30, 'next': -1, 'param3': 42}
          }

          void entrypoint_501_18() {
/*< 81>*/ 	start()
/*< 82>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 310, 'param3': 32}
/*<310>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 437, 'param3': 50}
/*<437>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 428, 'param3': 6}
/*<428>*/ 	set_camera(2, 0)
/*< 85>*/ 	printf("\x0E\x01\x09\x04\xE01\x103So you've returned.")
/*<311>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 14, 'next': 429, 'param3': 17}
/*<429>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 430, 'param3': 47}
/*<430>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 356, 'next': 431, 'param3': 15}
/*<431>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 432, 'param3': 6}
/*<432>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 14, 'next': 433, 'param3': 17}
/*<433>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 435, 'param3': 17}
/*<435>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 434, 'param3': 6}
/*<434>*/ 	set_camera(32, 0)
/*<436>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 86, 'param3': 48}
/*< 86>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 461, 'param3': 6}
/*<461>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1015, 'next': 87, 'param3': 24}
/*< 87>*/ 	printf("Then you know everything...")
/*< 83>*/ 	set_camera(30, 0)
/*< 84>*/ 	printf("On the other side of that gate, <b<Zelda>>\nwaits, suspended in a sleep without end.\nBut do not despair, for she is still\nalive and well.")
/*<439>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 313, 'param3': 6}
/*<313>*/ 	set_camera(33, 0)
/*<312>*/ 	printf("True to legend, the Triforce is the one\nthing with the power to vanquish\nDemise. It is thought to have been\nhidden within Skyloft by the goddess. \n\x0E\x01\x09\x04\xE01\xB00Sadly, that is all we know of where it\nrests. <pause0F>All other clues to its whereabouts\nhave been lost to the ages.")
/*<438>*/ 	set_camera(32, 0)
/*<314>*/ 	printf("\x0E\x01\x09\x04\xE14\xB00\x0E\x03\x01\x00Link, you have likely\ncome to the same conclusion, but I will\nspell it out just the same.\n\nThe key to finding the Triforce must\nbe in <b<Skyloft>>.")
/*<315>*/ 	printf("\x0E\x01\x09\x04\xE08\xB07Go now, Link. \nFind the Triforce.")
/*<316>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 319, 'param3': 32}
/*<319>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 317, 'param3': 50}
/*<317>*/ 	printf("\x0E\x01\x09\x04\x401\xFF04\x0E\x01\x08\x02\x1CDWhoa! Whoa there! Hold up!")
/*<318>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 131, 'param3': 16}
/*<131>*/ 	set_camera(48, 0)
/*< 91>*/ 	printf("\x0E\x01\x09\x04\x403\xFF00\x0E\x03\x01\x00Link, there's something I\ngotta tell you.")
/*<308>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1028, 'param2': 256, 'next': 309, 'param3': 13}
/*<309>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 89, 'param3': 6}
/*< 89>*/ 	set_camera(34, 0)
/*< 90>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 75, 'next': 88, 'param3': 6}
/*< 88>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 100, 'next': 92, 'param3': 14}
/*< 92>*/ 	printf("\x0E\x01\x09\x04\x403\xFF02So, Zelda... How's she holding up?\nWas she OK when you saw her?\n\n[1]She's great![2]Actually...")
/*< 95>*/ 	switch (choice(2)) {
          	  case 0:
/*< 93>*/ 		printf("She was? Oh, good to hear.\n\n\n\n\x0E\x01\x09\x04\x403\x200...But she's still stuck there till this\nwhole mess blows over, huh?")
          		flw_97:
/*< 97>*/ 		set_camera(35, 0)
/*< 96>*/ 		printf("\x0E\x01\x09\x04\x40E\xD09\x0E\x03\x01\x00Link...I've made up my\nmind. I'm not going back.\n\n\n\x0E\x01\x09\x04\x400\x200I'm staying right here with Grannie.")
/*< 98>*/ 		printf("\x0E\x01\x09\x04\x400\xFF0DAww, don't look so bummed out. Do I\nlook sad? Nah, I'm doing what I want\nto do!\n\n\x0E\x01\x09\x04\x400\x200I don't know how to explain it. I got\nthis feeling in my belly that there's\nwork to do here.\n\nSomeone's gotta watch that big, ugly\nmonster,\x0E\x01\x09\x04\x400\x211 and someone's gotta make\nsure Grannie's doing all right.\n\nIt ain't as action packed as what you're\ndoing, but maybe this is my destiny.\nKnow what I mean?")
/*<100>*/ 		set_camera(36, 0)
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x403\xD08Besides, it's not so bad here. Living up\nin the sky was OK, I guess, but don't\nyou just love the way it smells down\nhere? What? That's not weird to say!")
/*<101>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 104, 'param3': 32}
/*<104>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1025, 'param2': -256, 'next': 103, 'param3': 13}
/*<103>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 101, 'next': 102, 'param3': 17}
/*<102>*/ 		printf("\x0E\x01\x09\x04\x40D\x209Check it out.")
/*<108>*/ 		{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 109, 'param3': 17}
/*<109>*/ 		set_camera(37, 0)
/*<107>*/ 		printf("\x0E\x01\x09\x04\x404\x208Zelda and Grannie have brought life\nback to the land here.\n\n\nI bet even the weakest <r<sapling >>could\ngrow into one beast of a tree in soil\nlike this. It'd brighten this place up a\nlittle too.\n\x0E\x01\x09\x04\x40D\x211I mean, sure, it'd take a few years for\nit to grow, but as far as I'm concerned,\nI got nothing but time.\n\n\x0E\x01\x09\x04\x400\x12It's weird to say out loud, but that's\njust how I feel right now.")
/*<110>*/ 		set_camera(36, 0)
/*<320>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 106, 'param3': 17}
/*<106>*/ 		printf("\x0E\x01\x09\x04\x40D\x22ESo...yeah...you know. When you get\nback to Skyloft, do me a favor and let\npeople know I'm doing OK down here.\n\n\x0E\x01\x09\x04\x400\xE00Cawlin and Strich might get a little\nemotional since they look up to me,\nbut you tell them I'm happy, OK?\n\n\x0E\x01\x09\x04\x400\x209Thanks, Link.")
/*<105>*/ 		story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */] = true;
/*<111>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 94>*/ 		printf("\x0E\x01\x09\x04\x400\x1400That's terrible. It's gotta be so hard for\nthe poor girl.\n\n\n\x0E\x01\x09\x04\x403\x200But you're going to do something about\nthis mess, right?")
          		goto flw_97
          	}
          }

          void entrypoint_501_01() {
          	start()
/*<  1>*/ 	switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
          	  case 0:
/*<  3>*/ 		switch (story_flags[340 /* us: 805A9AFE 0x04, jp: 805ACD7E 0x04 */]) {
          		  case 0:
/*<133>*/ 			printf("\x0E\x01\x09\x04\x00\nWe shall find more time to talk later.\nFor now, you must go.")
          		  case 1:
/*<132>*/ 			printf("\x0E\x01\x09\x04\x00\x03No doubt you've seen the great\nspiraling pit just outside the temple.\nKnow that something sleeps sealed\naway in the depths of that place.\nDo not worry yourself about what\nslumbers there. It will be made known\nto you when the time is right.")
          		}
          	  case 1:
/*<  2>*/ 		printf("\x0E\x01\x09\x04\x00\x1303The door that leads to Faron Woods\nis open now. Leave through the door\nto my left, and head for the woods.\n\nAll the questions you have now will be\nanswered in time. For now, you must\ngo, Link. Walk bravely.")
          	}
          }

          void entrypoint_501_19() {
/*<210>*/ 	start()
/*<326>*/ 	set_camera(55, 0)
/*<359>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 485, 'param3': 6}
/*<485>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 1, 'next': 327, 'param3': 40}
/*<327>*/ 	{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 100, 'next': 328, 'param3': 14}
/*<328>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 329, 'param3': 6}
/*<329>*/ 	set_camera(59, 0)
/*<336>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 335, 'param3': 6}
/*<335>*/ 	printf("\x0E\x01\x09\x04\x00\x01\x0E\x01\x06\x02\xFECDAh...<pause0F> The traveler descended from\nthe clouds above. I welcome you,\nchild of fate.")
/*<341>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 0, 'next': 342, 'param3': 13}
/*<342>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 340, 'param3': 6}
/*<340>*/ 	set_camera(56, 0)
/*<343>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 337, 'param3': 6}
/*<337>*/ 	printf("\x0E\x01\x09\x04\x00\x08\x0E\x01\x06\x02\xFECDTell me, what is your name?\n\n\n\n...<pause28>\x0E\x03\x01\x00Link?\nAh, Link. Good.\nVery good.\n\nI sense you have already gained control\nover the sacred power that fills your\nsword when <g<pointed skyward>>. The\n<pling><r<Skyward Strike>> is yours to command.\n\x0E\x01\x09\x04\x00\x0BIt is proof that you are fit to bear the\nblade you carry, the <b<Goddess Sword>>.\n\n\n\x0E\x01\x06\x02\xFFCDI have sat here for many years waiting\nfor you to arrive. All so that I could\nfulfill my purpose as your guide.")
/*<181>*/ 	set_camera(43, 0)
/*<182>*/ 	{'type': 'type3', 'subType': 2, 'param1': 9, 'param2': 356, 'next': 183, 'param3': 15}
/*<183>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 180, 'param3': 17}
/*<180>*/ 	set_camera(38, 0)
/*<184>*/ 	printf("You stand under the roof of the Sealed\nTemple, a place built by the goddess\nan eternity ago.\n\nYour arrival here was predestined\nmany, many years ago.\n\n\nThe spirit maiden you seek arrived \nhere shortly before you, descending to\nthis land in a shower of light.\n\nThere's no doubting it. The gears of\nfate have begun to turn.")
/*<187>*/ 	set_camera(57, 0)
/*<344>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 185, 'param3': 6}
/*<185>*/ 	printf("\x0E\x01\x09\x04\x00\nYet all is not as it should be. The spirit\nmaiden was not meant to reach this\nland in the manner she did.\n\nI feel an evil power working in the\nshadows. It moves to warp the destiny\nof which you two are a part.")
/*<339>*/ 	set_camera(60, 0)
/*<338>*/ 	printf("\x0E\x01\x09\x04\x0E\xFF08\x0E\x03\x01\x00Link...<pause1E>You are concerned\nfor the spirit maiden and seek her\nwhereabouts, yes?\n\n...That is understandable, but for now\nyou must focus on moving forward.\nThat girl has her own purpose she must\npursue, as do you.\nShe set out for <b<Faron Woods>> to discover\nthat destiny for herself, and you must\nfollow.")
/*<186>*/ 	story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */] = true;
/*<190>*/ 	printf("\x0E\x01\x09\x04\x0E\xFF00Show me your map.")
/*<188>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 364, 'param3': 30}
/*<364>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 363, 'param3': 6}
/*<363>*/ 	scene_flags[10 'Sealed Grounds'][8 /* 0x0 01 */] = true;
/*<362>*/ 	printf("The \x0E\x02\x04\x02\x19CD upon your map marks the path\nthat will lead you to <b<Faron Woods>>.\n\n\nYou will be traveling in unfamiliar\nland. Many monsters have settled here,\nand a map may not prove guidance\nenough for your journey.\nAnd so I will give you the power to \ncreate <r<beacons>>.\n\n\nWhen a beacon is marked on your map,\na column of light will stand at that \nlocation. It will act as your waypoint \nfrom afar.\nPoint at the \x0E\x02\x04\x02\x19CD and press (A) to place\na beacon.\x0E\x01\x11\x02Í")
/*<189>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 191, 'param3': 34}
          	flw_191:
/*<191>*/ 	switch (scene_flags[24 /* 0x2 01 */]) {
          	  case 0:
/*<193>*/ 		printf("\x0E\x01\x09\x04\x00\x03Though you cannot see it from where\nwe are, a beacon stands outside to \nguide you. Leave the temple through\nthe front doors, and see for yourself.\nWhen you no longer have a use for\na beacon, you can remove it from your\nmap by pressing (A)\x0E\x01\x11\x02Í.\n\nUse your beacons well, and you will\nnever fear getting lost.")
/*<194>*/ 		printf("\x0E\x01\x09\x04\x0E\xFF03Go now. You must head into Faron\nWoods and chase after the spirit\nmaiden...the one you call <b<Zelda>>.\n\nOn your way out, take the contents of\nthe <r<treasure chest>> within this room.\nWhat you find there should prove\nuseful to you on your journey.")
/*<195>*/ 		scene_flags[10 'Sealed Grounds'][83 /* 0xB 08 */] = true;
/*<198>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 196, 'param3': 6}
/*<196>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 197, 'param3': 32}
/*<197>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 199, 'param3': 17}
/*<199>*/ 		set_camera(40, 0)
/*<358>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 10, 'next': 279, 'param3': 13}
/*<279>*/ 		{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 200, 'param3': 17}
/*<200>*/ 		make_actor_do_something(0, 0)
/*<201>*/ 		set_camera(41, 0)
/*<202>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 203, 'param3': 6}
/*<203>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 205, 'param3': 24}
/*<205>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 204, 'param3': 6}
/*<204>*/ 		set_camera(42, 0)
/*<206>*/ 		printf("You are ready. Leave through the door\nbefore you, and head into the woods.\nI wish you safe travel.")
/*<333>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 334, 'param3': 17}
/*<334>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 278, 'param3': 6}
/*<278>*/ 		set_camera(49, 0)
/*<209>*/ 		printf("\x0E\x01\x09\x04\x00\x1303Know that all the questions you have\nnow will be answered in time. For now,\nLink, go bravely!")
/*<207>*/ 		story_flags[494 /* us: 805A9B13 0x10, jp: 805ACD93 0x10 */] = true;
/*<208>*/ 		scene_flags[10 'Sealed Grounds'][23 /* 0x3 80 */] = true;
/*<211>*/ 		scene_flags[10 'Sealed Grounds'][84 /* 0xB 10 */] = true;
/*<331>*/ 		set_camera(61, 0)
/*<330>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<192>*/ 		printf("\x0E\x01\x09\x04\x00\x06You haven't set a beacon over \x0E\x02\x04\x02\x19CD yet.\n\n\n\nTo remove a beacon from your map, \npoint at it and press (A) once more.\x0E\x01\x11\x02Í\n\n\nIf you aim to be more accurate with\nthe placement of your beacons, zoom in\nwith \x0E\x02\x04\x02\x38CD before you lay one down.")
/*<365>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 368, 'param3': 30}
/*<368>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 367, 'param3': 6}
/*<367>*/ 		scene_flags[10 'Sealed Grounds'][8 /* 0x0 01 */] = true;
/*<369>*/ 		printf("Go on now. Point at \x0E\x02\x04\x02\x19CD and press \x0E\x02\x04\x02\x1BCD to\nplace a beacon at that location.\x0E\x01\x11\x02Í")
/*<366>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 191, 'param3': 34}
          		goto flw_191
          	}
          }

          void entrypoint_501_02() {
/*<  5>*/ 	start()
/*<  8>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 6, 'param3': 32}
/*<  6>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 9, 'param3': 32}
/*<  9>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 7, 'param3': 17}
/*<  7>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 273, 'param3': 17}
/*<273>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 99, 'next': 34, 'param3': 50}
/*< 34>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 2560, 'next': 360, 'param3': 13}
/*<360>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1008, 'next': 10, 'param3': 24}
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x400=Huh? You gotta be kidding me,\nGrannie!")
/*<392>*/ 	set_camera(17, 0)
/*< 11>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 14, 'next': 27, 'param3': 17}
          	goto flw_27
          }

          void entrypoint_501_20() {
/*<112>*/ 	start()
/*<114>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 113, 'param3': 32}
/*<113>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 115, 'param3': 32}
/*<115>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 413, 'param3': 50}
          	flw_413:
/*<413>*/ 	printf("\x0E\x01\x09\x04\xE00\x03The beast has been sealed into its\nprison for a third time.")
/*<414>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 415, 'param3': 47}
/*<415>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 356, 'next': 417, 'param3': 15}
/*<417>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 416, 'param3': 6}
/*<416>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 419, 'param3': 17}
/*<419>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 421, 'param3': 50}
/*<421>*/ 	set_camera(26, 0)
/*<422>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 418, 'param3': 6}
/*<418>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 420, 'param3': 48}
/*<420>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 412, 'param3': 6}
/*<412>*/ 	printf("\x0E\x03\x01\x00Link, Groose... You have\nboth done well.\n\n\nBut I fear we can't dwell on your\nsuccess. The strength of the seal\nseems to wane with each escape.\n\nWe are almost out of time,\nLink. Are you close to\ndiscovering the Triforce?\n[1]Yes![2]Actually...")
/*<424>*/ 	set_camera(44, 0)
/*<426>*/ 	printf("<pause19>...I see. You must seek out the three\ndragons and complete the Song of the\nHero to find the Triforce.\n\nIt is right your search led you here.\nThe <b<Faron Woods>> are close by.\n\n\n\x0E\x01\x09\x04\xE00\nUnfortunately, there has been an\nunusual turn of events in the woods...\n\n\n\x0E\x01\x09\x04\xE01\xB00I am unsure of what happened, but a\nshort while ago, I noticed the path to\nthe woods was completely flooded.")
/*<425>*/ 	set_camera(26, 0)
/*<130>*/ 	printf("To protect the land here, I closed the\n<r<gate leading to the woods>> and drove\nback the water with a simple seal.\n\nThe seal will only hold as long as the\ngate remains closed, meaning you\nwill not be able to open it without\nflooding these lands.\nGiven this situation, I am at a loss\nas to how you can enter the woods. ")
/*<128>*/ 	set_camera(46, 0)
/*<126>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 116, 'param3': 50}
/*<116>*/ 	printf("\x0E\x01\x09\x04\x400\x0DHeh! Is that all? Consider the problem\nsolved!\n\n\nSee, that last battle with big ugly got\nme thinking about other ways to use\nthe <r<Groosenator>>!\n\nJust climb up into that bad boy, and I'll\ngive you a \x201Clift\" over to the woods,\nall right?")
/*<127>*/ 	set_camera(26, 0)
/*<125>*/ 	printf("\x0E\x01\x09\x04\x40C\x202I'll run ahead and get her prepped for\nyou! Come see me when you're ready\nto take a little flight.")
/*<118>*/ 	{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 516, 'next': 467, 'param3': 14}
/*<467>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 124, 'param3': 6}
/*<124>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 119, 'param3': 24}
/*<119>*/ 	story_flags[485 /* us: 805A9B10 0x08, jp: 805ACD90 0x08 */] = true;
/*<129>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 117, 'param3': 50}
/*<117>*/ 	printf("\x0E\x01\x09\x04\xE00\x0BOh my...\n\n\n\nThe boy has made himself very useful,\nbut he does have a tendency to cause\ntrouble for those he \x201Chelps\"...")
/*<325>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 323, 'param3': 17}
/*<323>*/ 	printf("\x0E\x01\x09\x04\xE08\xFF00Safe journey. I wish you a soft landing,\nLink.")
/*<423>*/ 	set_camera(1, 0)
/*<324>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_501_03() {
/*<264>*/ 	start()
/*<267>*/ 	give_item(186 0xBA);
/*<268>*/ 	story_flags[343 /* us: 805A9AFE 0x20, jp: 805ACD7E 0x20 */] = true;
/*<348>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_501_21() {
/*<120>*/ 	start()
/*<122>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 121, 'param3': 32}
/*<121>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 123, 'param3': 32}
/*<123>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 413, 'param3': 50}
          	goto flw_413
          }

          void entrypoint_501_22() {
/*<240>*/ 	start()
/*<245>*/ 	switch (story_flags[225 /* us: 805A9AF2 0x10, jp: 805ACD72 0x10 */]) {
          	  case 0:
/*<246>*/ 		switch (scene_flags[100 /* 0xD 10 */]) {
          		  case 0:
/*<470>*/ 			switch (story_flags[490 /* us: 805A9B13 0x01, jp: 805ACD93 0x01 */]) {
          			  case 0:
/*<473>*/ 				switch (story_flags[799 /* us: 805A9B2F 0x80, jp: 805ACDAF 0x80 */]) {
          				  case 0:
/*<471>*/ 					printf("\x0E\x01\x09\x04\x00\nI have no other words for you,\nLink. Know now that you\nare the sole hope for the survival\nof this land.\nThe danger is overwhelming, but you\nmust persevere. You must save our\nworld!")
          				  case 1:
/*<472>*/ 					printf("\x0E\x01\x09\x04\x00\x14Groose left the temple through the\nfront door a few moments ago!\n\n\nI imagine he's out by his <r<catapult>>,\nlike always.")
          				}
          			  case 1:
/*<249>*/ 				printf("\x0E\x01\x09\x04\x00\nI have no other words for you,\nLink. Know now that you\nare the sole hope for the survival\nof this land.\nThe danger is overwhelming, but you\nmust persevere. You must save our\nworld!")
          			}
          		  case 1:
/*<247>*/ 			printf("\x0E\x01\x09\x04\x00\x09No! So Demise has already been\nresurrected... If we do not stop him,\nthis world is doomed.")
/*<248>*/ 			scene_flags[10 'Sealed Grounds'][100 /* 0xD 10 */] = true;
/*<479>*/ 			printf("\x0E\x01\x09\x04\x00\nI have no other words for you,\nLink. Know now that you\nare the sole hope for the survival\nof this land.\nThe danger is overwhelming, but you\nmust persevere. You must save our\nworld!")
          		}
          	  case 1:
/*<242>*/ 		switch (scene_flags[99 /* 0xD 08 */]) {
          		  case 0:
/*<243>*/ 			printf("\x0E\x01\x09\x04\x00\x0D\x0E\x03\x01\x00Link, listen to me! You\nmust do whatever it takes to prevent\nthe resurrection of Demise in the past!\n\nQuickly now! Open the Gate of Time\nand return to the past!")
          		  case 1:
/*<241>*/ 			printf("\x0E\x01\x09\x04\x00\x09For <b<Zelda>> to be taken from us at a time\nlike this... It is unthinkable!\n\n\n\x0E\x03\x01\x00Link, listen to me! You\nmust do whatever it takes to prevent\nthe resurrection of Demise in the past!\n\nQuickly now! Open the Gate of Time\nand return to the past!")
/*<244>*/ 			scene_flags[10 'Sealed Grounds'][99 /* 0xD 08 */] = true;
          		}
          	}
          }

          void entrypoint_501_05() {
/*<265>*/ 	start()
/*<266>*/ 	printf("The \x201C<b<Ballad of the Goddess>>.\" Based on\nmy projections, this is likely the song\nZelda sang on the day of the Wing\nCeremony.\nI calculate an 85% probability that\nsomeone associated with the academy\nwill be able to provide additional\ninformation about this song.")
/*<486>*/ 	story_flags[142 /* us: 805A9AEE 0x01, jp: 805ACD6E 0x01 */] = true;
          }

          void entrypoint_501_06() {
/*<148>*/ 	start()
/*<146>*/ 	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
          	  case 0:
/*<149>*/ 		switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          		  case 0:
/*<141>*/ 			switch (scene_flags[80 /* 0xB 01 */]) {
          			  case 0:
/*<150>*/ 				switch (scene_flags[81 /* 0xB 02 */]) {
          				  case 0:
/*<151>*/ 					switch (story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */]) {
          					  case 0:
/*<213>*/ 						switch (story_flags[344 /* us: 805A9AFE 0x40, jp: 805ACD7E 0x40 */]) {
          						  case 0:
/*<214>*/ 							printf("\x0E\x01\x09\x04\x10\x1606\x0E\x03\x01\x00Link, what are you doing?\nDid you meet with Zelda on the other\nside of the door?\n\n\x0E\x01\x09\x04\x14\xB00If not, you must go back through!")
          						  case 1:
/*<152>*/ 							printf("\x0E\x01\x09\x04\x10\x03\x0E\x03\x01\x00Link, it is time!\nOpen the Gate of Time, and travel\nto the other side.")
          						}
          					  case 1:
/*<212>*/ 						printf("\x0E\x01\x09\x04\x00\nThe beast is awakening from its\nslumber.\n\n\n\x0E\x03\x01\x00Link, you must seal the\nbeast away once more!")
          					}
          				  case 1:
/*<143>*/ 					printf("\x0E\x01\x09\x04\x00\x07Now that the sacred force dwells within\nyour blade, hit the Gate of Time with\na <r<Skyward Strike>> and it will surely\nawaken.\nClimb upon the pedestal, and <g<show\nthe gate your sword's power>>!")
          				}
          			  case 1:
          				goto flw_134
          			}
          		  case 1:
/*<147>*/ 			printf("\x0E\x01\x09\x04\x00\nThe seal's strength will not last. Sooner\nor later the great beast shall break its\nshackles once more.\n\nFortunately, I hear Groose has been\nhard at work preparing something for\nits next assault.\n\n\x0E\x03\x01\x00Link, you must move fast.\nYou must imbue your sword with the\npower of the three sacred flames.")
          		}
          	  case 1:
/*<145>*/ 		printf("\x0E\x01\x09\x04\x00\x03When the three sacred flames have\nimbued your sword, only then will the\nGate of Time open for you.\n\nThe clue that will lead you to the\nflames is woven into the song of your\nhomeland known as the <r<Ballad of the\nGoddess>>. You must return to Skyloft!")
          	}
          }

          void entrypoint_501_23() {
/*<262>*/ 	start()
/*<272>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 2621, 'next': 263, 'param3': 13}
/*<263>*/ 	printf("\x0E\x01\x09\x04\x00\x00You gotta chase after that creep,\nLink! <b<Zelda>>'s counting\non you!")
          }

