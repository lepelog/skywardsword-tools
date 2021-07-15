          void entrypoint_118_05() {
/*<  2>*/ 	start()
/*<280>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<281>*/ 		printf("\x0E\x01\x09\x04\n\xA12How weird... I can't see the Statue of\nthe Goddess for some reason.\nThat's weird...\n\nWell, never mind that.")
          		flw_55:
/*< 55>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 56>*/ 			printf("\x0E\x01\x09\x04\x00\x09Oh! Kukiel turned up OK?!\n\n\n\n\x0E\x01\x09\x04\x00\xE00You were the one who found her?\nNice work! That's showing 'em what\na student of the Knight Academy\ncan do!\n\x0E\x01\x09\x04\x00\x400You should go and let her mother\nknow she's safe! Their house is down\nnear the water's edge.")
          		  case 1:
/*< 31>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*< 34>*/ 				printf("\x0E\x01\x09\x04\x00\x01Whoa! What's the matter,\nLink? You look pale!\n\n\n[1]It's Kukiel![2-]Do I?")
/*< 35>*/ 				switch (choice(2)) {
          				  case 0:
/*< 27>*/ 					printf("\x0E\x01\x09\x04\x00\x506What?! Kukiel is missing?\n\n\n\n\x0E\x01\x09\x04\x00\x500She was abducted by a monster?!\n\n\n\n\x0E\x01\x09\x04\x0B\x400You don't think this has anything to\ndo with all those silly stories about\na horrifying monster that's been\nliving here in Skyloft for ages, do you?\n\x0E\x01\x09\x04\n\x500People say the creature appears in\nthe dead of night, scaring folks and\neven taking away children!\n\n\x0E\x01\x09\x04\x00\x400Probably nothing more than a scary\nstory some older brother made up to\nterrorize his younger siblings, but\nstill...it makes me wonder.")
          				  case 1:
/*< 48>*/ 					printf("\x0E\x01\x09\x04\x00\x04Well, it looked that way to me.\nIf nothing is wrong, though, I guess\nthere's nothing to worry about!")
          				}
          			  case 1:
/*<282>*/ 				switch (story_flags[47 /* us: 805A9AE6 0x01, jp: 805ACD66 0x01 */]) {
          				  case 0:
/*<284>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 283, 'param3': 31}
/*<283>*/ 					printf("\x0E\x01\x09\x04\x00\x06Kukiel's mother was calling for her\nlike she was worried. I wonder what\nhappened...")
          				  case 1:
/*< 51>*/ 					printf("\x0E\x01\x09\x04\x0B\xE01I heard you won the Wing Ceremony!\nCongratulations! That's incredible!\n\n\n\x0E\x01\x09\x04\x00\xA00Hey, you don't seem all that happy\nabout winning. What's the matter?")
          				}
          			}
          		}
          	  case 1:
/*<488>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<489>*/ 			printf("\x0E\x01\x09\x04\n\xC12What was that thunderous rumbling\njust now?")
          			goto flw_55
          		  case 1:
          			goto flw_55
          		}
          	}
          }

          void entrypoint_118_22() {
/*<152>*/ 	start()
/*<148>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*<170>*/ 		{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 512, 'next': 156, 'param3': 13}
/*<156>*/ 		printf("\x0E\x01\x09\x04\x00\nOH! How incredible!\n\n\n\nThe world is still full of new plants\nwaiting to be discovered, isn't it?\nI can barely contain my excitement!")
/*<263>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 2560, 'next': 264, 'param3': 13}
/*<264>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 262, 'param3': 17}
/*<262>*/ 		printf("Oh, Link! You have\nno idea what this means to me! \nThank you so much!\n\nI'll take great care of this plant...life-\nform... Whatever it is. If you should\nhappen across any other interesting\nspecimens, be sure to let me know!")
/*<155>*/ 		story_flags[481 /* us: 805A9B11 0x20, jp: 805ACD91 0x20 */] = true;
/*<299>*/ 		story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<157>*/ 		give_gratitude_crystals();
          	  case 1:
/*<168>*/ 		{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 512, 'next': 171, 'param3': 13}
/*<171>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 36, 'next': 172, 'param3': 32}
/*<172>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 36, 'next': 153, 'param3': 17}
/*<153>*/ 		printf("\x0E\x01\x09\x04\x00SThis...this is... Unbelievable! You've\nfound me an entirely new plant species!\nIt's precisely what I wanted!")
/*<169>*/ 		{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 1280, 'next': 154, 'param3': 13}
/*<154>*/ 		printf("Hmm... Fascinating! Should this\nactually be classified as flora or\nfauna...? I mean, plant or animal?\n\nHmm... You know, this may very well\nmark the discovery of a new type of\nspecies altogether!")
/*<147>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_118_06() {
/*<  3>*/ 	start()
/*<373>*/ 	switch (zone_temp_flags[11 /* 0x0 08 */]) {
          	  case 0:
          		flw_57:
/*< 57>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 58>*/ 			printf("\x0E\x01\x09\x04\x09\x257Hmm.<pause0A>.<pause0A>.? The girl who went missing has\nbeen found safe?\n\n\nI see. So she wasn't abducted after all.\nThat's a relief to hear!\n\n\n\x0E\x01\x09\x04\x00\x609Well, anyway, I guess that case is\nclosed! Great work, valiant knight!")
          		  case 1:
/*<398>*/ 			switch (story_flags[825 /* us: 805A9B33 0x02, jp: 805ACDB3 0x02 */]) {
          			  case 0:
/*<399>*/ 				switch (zone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<403>*/ 					printf("\x0E\x01\x09\x04\x00\x1557Hmm. He told you that you should\n<g<deal a blow>> to the <r<gravestone\nnearest the tree>> and then <g<move>> it\nif you want to find the monster?\n\x0E\x01\x09\x04\x00\x1513Either way, you're better off not\nwalking around outside at night.")
          				  case 1:
/*<400>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 401, 'param3': 31}
/*<401>*/ 					printf("\x0E\x01\x09\x04\x00\x01So you went and spoke to that old\npumpkin chugger, did you?\n\n\nHmm. He told you that you should\n<g<deal a blow>> to the <r<gravestone nearest\nthe tree>> and then <g<move>> it...to find\na monster?\n\x0E\x01\x09\x04\x00\x1513Probably just a lot of hot air\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\nEither way, you're better off not\nwalking around outside after dark.")
/*<402>*/ 					zone_temp_flags[11 /* 0x0 08 */] = true;
          				}
          			  case 1:
/*< 32>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*<333>*/ 					switch (zone_temp_flags[11 /* 0x0 08 */]) {
          					  case 0:
          						flw_46:
/*< 46>*/ 						printf("\x0E\x01\x09\x04\x11\x200You want to know where the\nold man is?\n\n\n\x0E\x01\x09\x04\x00\x200I'd imagine he's at the <r<Lumpy\nPumpkin>>, to the east of here, as usual.\n\n\n\x0E\x01\x09\x04\x12\x200You'll need to fly your bird there,\nof course!")
/*<334>*/ 						zone_temp_flags[11 /* 0x0 08 */] = true;
          					  case 1:
/*<289>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 36, 'param3': 31}
/*< 36>*/ 						printf("\x0E\x01\x09\x04\x00\x1513Did you hear? A child who'd been\nplaying in the graveyard went missing.\n\n\n\x0E\x01\x09\x04\x12\x1500Can you believe it? Do you really think\nthere are monsters abducting children\nin our little town?\n[1]I do![2-]I dunno...")
/*< 37>*/ 						switch (choice(2)) {
          						  case 0:
/*< 28>*/ 							printf("\x0E\x01\x09\x04\x01\xC06What?! So there's a chance she\nwas dragged off by a monster?\n\n\n\x0E\x01\x09\x04\x00\xC00Let's not be ridiculous here.\nThis monster business is going a\nbit far. <pause1E>Oh<pause0A>.<pause0A>.<pause0A>.<pause0A>\n\n\x0E\x01\x09\x04\x09\x200Now that you mention it, there's an\n<pling><r<old man>> who lives near here who's\nalways ranting about hidden monsters\nhere in Skyloft...\n\x0E\x01\x09\x04\x12\x200Everyone knows he's a little loony,\nthough, so no one takes him seriously.")
          							goto flw_46
          						  case 1:
/*< 47>*/ 							printf("\x0E\x01\x09\x04\x12\x1557Nothing fazes you, does it? A child\njust vanished from our little village!")
          						}
          					}
          				  case 1:
/*<287>*/ 					switch (story_flags[47 /* us: 805A9AE6 0x01, jp: 805ACD66 0x01 */]) {
          					  case 0:
/*<288>*/ 						printf("\x0E\x01\x09\x04\x00\x1504There's talk going around that a little\ngirl has disappeared!")
          					  case 1:
/*< 52>*/ 						printf("\x0E\x01\x09\x04\x00\x501Oh! So you won the Wing Ceremony\nand graduated to the senior class?\n\n\n\x0E\x01\x09\x04\x0C\x200I can tell by that handsome knight's\nuniform you're wearing! It looks\nvery dashing on you.\n\n\x0E\x01\x09\x04\x0C\x500One step closer to knighthood, eh?")
          					}
          				}
          			}
          		}
          	  case 1:
/*<285>*/ 		switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          		  case 0:
/*<286>*/ 			printf("\x0E\x01\x09\x04\x09\x1501Sweet mercy... First the ground starts\nshaking... Next thing I know, the whole\nIsle of the Goddess disappears!\n\n\x0E\x01\x09\x04\x12\x200Oh, by the way...")
          			goto flw_57
          		  case 1:
/*<490>*/ 			switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          			  case 0:
/*<491>*/ 				printf("\x0E\x01\x09\x04\x00\x13That was some real shaking there!\nWhat do you suppose could have\ncaused it?\n\n\x0E\x01\x09\x04\x12\x200Oh, and while I've got you here...")
          				goto flw_57
          			  case 1:
          				goto flw_57
          			}
          		}
          	}
          }

          void entrypoint_118_23() {
/*<204>*/ 	start()
/*<206>*/ 	printf("\x0E\x01\x09\x04\x00\x02What's up, Link?")
/*<207>*/ 	set_camera(11, 0)
/*<208>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 72, 'param3': 17}
/*< 72>*/ 	printf("So you're curious about that windmill,\neh?\n\n\nPretty smart design, I gotta say. \nSee, you can turn the windmill so that\nit can always catch the wind no matter\nwhich way it's blowing.")
/*<177>*/ 	set_camera(8, 0)
/*<196>*/ 	{'type': 'type3', 'subType': 2, 'param1': 32, 'param2': 0, 'next': 197, 'param3': 15}
/*<197>*/ 	{'type': 'type3', 'subType': 2, 'param1': 33, 'param2': 100, 'next': 175, 'param3': 15}
/*<175>*/ 	printf("But... Well, there used to be this little\n<r<propeller>> attached to the windmill so\nthat you could turn it.\n\nThe thing flew off ages ago. It must\nhave dropped down off the edge, down\nbeneath the clouds.")
/*<195>*/ 	set_camera(4, 0)
/*<178>*/ 	set_camera(5, 0)
/*<176>*/ 	printf("The windmill's been uselessly sitting\nthere ever since.")
/*<179>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 181, 'param3': 6}
/*<181>*/ 	set_camera(9, 0)
/*<180>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 75, 'param3': 6}
/*< 75>*/ 	{'type': 'type3', 'subType': 1, 'param1': 315, 'param2': 0, 'next': 257, 'param3': 51}
/*<257>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 258, 'param3': 50}
/*<258>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 76, 'param3': 17}
/*< 76>*/ 	printf("I highly suggest you retrieve the\n<r<windmill propeller >>from the land\nbelow to reorient the windmill.")
/*< 77>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 165, 'param3': 36}
/*<165>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 259, 'param3': 16}
/*<259>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 198, 'param3': 6}
/*<198>*/ 	set_camera(10, 0)
/*< 78>*/ 	printf("\x0E\x01\x09\x04\x0C\x800You wanna know if I could fix the\nwindmill if you brought back the\npropeller?\n\nWell, if I had the propeller, I could\nprobably rig something together to\nget it back on there, sure...")
/*<199>*/ 	set_camera(12, 0)
/*<200>*/ 	printf("But how would you even go looking\nfor the propeller in the first place?\nOnce something falls through the\nclouds, it's gone for good.")
/*<202>*/ 	set_camera(10, 0)
/*<203>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 2048, 'next': 79, 'param3': 13}
/*< 79>*/ 	printf("\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í\x0E\x01\x09\x04\x0C\xC13Hang on.\n\n\n\nCome to think of it, <b<Gondo>> at the Scrap\nShop told me that someone in his\nfamily once used a <r<flying robot>> to haul\njunk back from beneath the clouds.\nBut we're talking about a tale that's\nbeen passed down over a lot of years,\nso I wouldn't put much stock in it.")
/*< 74>*/ 	story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */] = true;
/*<201>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_118_07() {
/*<  4>*/ 	start()
/*<335>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<336>*/ 		printf("\x0E\x01\x09\x04\x00\x01The Statue of the Goddess is gone!\nWhat are we gonna do?!\n\n\nThat was easily the best place in the\nwhole world to catch bugs!")
          	  case 1:
/*< 60>*/ 		switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          		  case 0:
/*<405>*/ 			switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          			  case 0:
/*<409>*/ 				switch (story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */]) {
          				  case 0:
/*<447>*/ 					switch (zone_temp_flags[8 /* 0x0 01 */]) {
          					  case 0:
/*<406>*/ 						printf("\x0E\x01\x09\x04\x00\x01I have to figure out a way to get up\nto Beedle's Airshop soon so I can\nget a Bug Net too!\n\nThen I'm going straight to the Scrap\nShop to get Gondo to upgrade it and\nmake it even bigger!")
          					  case 1:
/*<451>*/ 						entrypoint_118_28();
          					}
          				  case 1:
/*<410>*/ 					printf("\x0E\x01\x09\x04\x00\x01Hi, Link!\n\n\n\nWHAT? You went to Beedle's Airshop?\nWithout me?! That's so unfair!")
/*<411>*/ 					story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
/*<446>*/ 					zone_temp_flags[8 /* 0x0 01 */] = true;
          				}
          			  case 1:
/*<407>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ahhh, the wait is killing me! I've got\nto have a Bug Net! How can I get up to\nBeedle's Airshop?!")
          			}
          		  case 1:
/*< 59>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*< 61>*/ 				printf("\x0E\x01\x09\x04\x00\x01Oh, Kukiel's safe?!\n\n\n\n\x0E\x01\x09\x04\x0F\x1300I hope she'll be allowed to come out\nand play! I was worried she got eaten!")
          			  case 1:
/*< 33>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*<404>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 420, 'param3': 31}
/*<420>*/ 					switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          					  case 0:
/*<421>*/ 						printf("\x0E\x01\x09\x04\x00\x01Hi, Link!\n\n\n\nWHAT? You went to Beedle's Airshop?\nWithout me?! That's so unfair!")
/*<422>*/ 						story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
          						flw_29:
/*< 29>*/ 						printf("\x0E\x01\x09\x04\x00\x06Kukiel?\n\n\n\n\x0E\x01\x09\x04\x12\x900Well, I did see her playing over\nby the <r<graveyard>> yesterday...\n\n\n\x0E\x01\x09\x04\n\x900My mom called me home, so I left.\nI don't know what she did after that.\n\n\n\x0E\x01\x09\x04\x01\x900Why? Did something happen?")
          					  case 1:
/*< 38>*/ 						printf("\x0E\x01\x09\x04\x10\x1301Hmm... I wonder how I can get my\nhands on a Bug Net from Beedle's\nAirshop.\n[1]Where's Kukiel?[2]Airshop?")
/*< 39>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_29
          						  case 1:
/*< 49>*/ 							printf("\x0E\x01\x09\x04\x00\x04I'm trying to think up a way to get\nBeedle's Airshop to stop.\n\n\n\x0E\x01\x09\x04\x12\x900There's a bell hanging down from\nit, and I hear if you ring it, Beedle\nwill stop for you.\n\n\x0E\x01\x09\x04\x10\x1300But being up that high, you'd have\nto <pling><r<launch>> something at it to have\nany hope of hitting that bell.\n\nIf you ever look around and can't see\nthe shop, try opening your <g<map>>!")
          						}
          					}
          				  case 1:
/*<374>*/ 					switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          					  case 0:
/*<375>*/ 						printf("\x0E\x01\x09\x04\x00\x01Hi, Link!\n\n\n\nWHAT? You went to Beedle's Airshop?\nWithout me?! That's so unfair!")
/*<408>*/ 						story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
          					  case 1:
/*<290>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 50, 'param3': 31}
/*< 50>*/ 						printf("\x0E\x01\x09\x04\x00\x01Hey, look up there! It's <b<Beedle's\nAirshop>>! It's here!\n\n\n\x0E\x01\x09\x04\n\x1300He sells <r<Bug Nets>> there! I want one\nsooooo bad!\n\n\n\x0E\x01\x09\x04\x12\x900There's a bell hanging down from the\nshop, and I hear if you ring it, Beedle\nwill stop for you and pick you up!\n\n\x0E\x01\x09\x04\x10\x1300But that bell is up off the ground...\nYou'd have to <pling><r<launch>> something at it\nto have any hope of ringing it!")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_24() {
/*<323>*/ 	start()
/*<324>*/ 	printf("\x0E\x01\x09\x04\x00\x04This guy here says people will probably\nbe surprised when they see me because\nI don't look like a plant, koo-kwee.\n\n\x0E\x01\x09\x04\x00\x12So in the meantime, kew-kaloo, I've\nbeen told to sit here and not move\na leaf.\n\n\x0E\x01\x09\x04\x09\x13This isn't any different from my\nlife in the forest, kweee!")
          }

          void entrypoint_118_08() {
/*<  5>*/ 	start()
/*< 63>*/ 	switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          	  case 0:
/*<471>*/ 		switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          		  case 0:
/*<475>*/ 			switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          			  case 0:
/*<472>*/ 				printf("\x0E\x01\x09\x04\x00\xD0FOh hello, Link.\nYou haven't seen my husband around, \nhave you?\n\nI know he's curious why the night\nturned silent so suddenly, but it's no\nreason to dash out there. What if he\nbumped into a monster?!")
          			  case 1:
/*<476>*/ 				printf("\x0E\x01\x09\x04\x0C\xE08\x0E\x03\x01\x00Link, it's great. \nEver since Kukiel came back, she's \nstopped wandering out on her own.\n\nIt's too bad her father can't follow her\nexample. He always slips out to wander\naround town.")
          			}
          		  case 1:
/*< 66>*/ 			printf("\x0E\x01\x09\x04\x0C\xE08\x0E\x03\x01\x00Link, thanks so much\nfor finding Kukiel.\n\n\nI'll need to be sure to find and thank\nthat kind gentleman who kept an eye\non her too...")
          		}
          	  case 1:
/*< 62>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*<424>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 142, 'param3': 31}
/*<142>*/ 			switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          			  case 0:
/*< 64>*/ 				printf("\x0E\x01\x09\x04\x0C\xE14Oh, Link!\n\n\n\n\x0E\x01\x09\x04\x00\x800Kukiel is safely back at home, and\nit's all because of you! I don't know\nhow to express my gratitude.\n\n\x0E\x01\x09\x04\x09\x800I can finally smile and laugh again!\nThank you ever so much.")
/*< 65>*/ 				story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */] = true;
/*<144>*/ 				give_gratitude_crystals();
          			  case 1:
/*<143>*/ 				printf("\x0E\x01\x09\x04\x0C\xE13Oh! You found Kukiel?\n\n\n\n\x0E\x01\x09\x04\x0F\xE00Hmm. Well, I guess it's good to hear\nshe's at least with a friendly and\nresponsible adult... But I just can't\nwait to see her!")
          			}
          		  case 1:
/*<492>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*<423>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 278, 'param3': 31}
/*<278>*/ 				switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          				  case 0:
/*<279>*/ 					printf("\x0E\x01\x09\x04\x0B\xD12What is this world coming to?\nThe Isle of the Goddess is falling,\nand there's still no sign of Kukiel...\nOh, my sweet Kukiel...\nPlease, Link! Hurry and\nfind her!\n\n\n\x0E\x01\x09\x04\x09\xD00You...wouldn't think of abandoning\nthe search, would you?!")
          				  case 1:
/*<  6>*/ 					printf("\x0E\x01\x09\x04\x0B\xD12Oh, my sweet Kukiel... <pause0A>Please...<pause0A>find my\ndaughter before anything bad happens\nto her.\n\nIf something happened... I just...\nI don't know what I would do.")
          				}
          			  case 1:
/*<493>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 31}
          			}
          		}
          	}
          }

          void entrypoint_118_25() {
/*<343>*/ 	start()
/*<364>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 276, 'param3': 32}
/*<276>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<277>*/ 		printf("\x0E\x01\x09\x04\x1509\xD00Oh no! This is terrible! The Isle of the\nGoddess has fallen! I was just\nsearching there for my Kukiel...\n\nHave you seen her?! My Kukiel?!\n[1]Nope.[2]Kuki-who?")
          		flw_18:
/*< 18>*/ 		switch (choice(2)) {
          		  case 0:
/*< 19>*/ 			printf("\x0E\x01\x09\x04\x150D\xD12I...I see.")
          			flw_21:
/*< 21>*/ 			printf("\x0E\x01\x09\x04\x150F\xD00Please, Link, won't you\nhelp me look for her? I've been looking\neverywhere, but I can't find her!\n\n\x0E\x01\x09\x04\x1509\xD00I've asked everyone I could find for\nhelp, and a few people have said she's\nbeen spotted with some unknown\nperson with a scary face.\n\x0E\x01\x09\x04\x150B\xD00Someone else even said they thought\nthey'd seen her carried off by a\nmonster. A monster!\n\n\x0E\x01\x09\x04\x150E\xD00She must have been kidnapped!\nShe's so cute and friendly... Someone\nmust have just walked off with her!")
          			flw_22:
/*< 22>*/ 			printf("\x0E\x01\x09\x04\x1509\xD00Find Kukiel, please! Please! It breaks\nmy heart to think she's somewhere\nout there, crying!\n\n\x0E\x01\x09\x04\x150F\xD00Please, Link!\n[1]You got it.[2-]Nah...")
/*< 23>*/ 			switch (choice(2)) {
          			  case 0:
/*< 45>*/ 				printf("\x0E\x01\x09\x04\x150C\xE14Thank you! The Knight Academy\nshould be proud to have a student\nlike you.\n\n\x0E\x01\x09\x04\x1500\x800Please, find my daughter quickly!")
/*<  7>*/ 				story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */] = true;
/*<347>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*< 24>*/ 				printf("\x0E\x01\x09\x04\x1509\xD12And you truly consider yourself a\nknight in training? Isn't it a knight's\nduty to protect the townspeople?!")
          				goto flw_22
          			}
          		  case 1:
/*< 20>*/ 			printf("\x0E\x01\x09\x04\x1509\xD12My daughter! She's a little \nfive-year-old girl!")
          			goto flw_21
          		}
          	  case 1:
/*< 17>*/ 		printf("\x0E\x01\x09\x04\x1509\xD00What perfect timing! You haven't seen\nmy Kukiel, have you?\n[1]Nope.[2]Kuki-who?")
          		goto flw_18
          	}
          }

          void entrypoint_118_09() {
/*< 10>*/ 	start()
/*<260>*/ 	set_camera(13, 0)
/*<300>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 107, 'next': 11, 'param3': 24}
/*< 11>*/ 	printf("\x0E\x01\x0D\x02\x1900EEEEEEEEEEEK!")
/*< 94>*/ 	scene_flags[0 'Skyloft'][66 /* 0x9 04 */] = true;
/*<261>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_118_26() {
/*<348>*/ 	start()
/*<351>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 352, 'param3': 32}
/*<352>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 356, 'param3': 32}
/*<356>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5386, 'param2': 3072, 'next': 355, 'param3': 13}
/*<355>*/ 	set_camera(15, 0)
/*<353>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 8, 'next': 350, 'param3': 16}
/*<350>*/ 	printf("\x0E\x01\x09\x04\x1509\xD11Kukiel! Kukiel! Where could that\nchild have gone?!")
/*<357>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5387, 'param2': 3328, 'next': 349, 'param3': 13}
/*<349>*/ 	printf("Oh, Kukiel... Where did you go?\n\n\n\nWhat will I do if she's been...\nkidnapped?!")
/*<354>*/ 	story_flags[299 /* us: 805A9AFD 0x20, jp: 805ACD7D 0x20 */] = true;
/*<372>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 366, 'param3': 16}
/*<366>*/ 	printf("\x0E\x01\x09\x04\x150E\xD11Oh! \x0E\x03\x01\x00Link!")
/*<362>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 361, 'param3': 47}
/*<361>*/ 	set_camera(16, 0)
/*<360>*/ 	{'type': 'type3', 'subType': 2, 'param1': 49, 'param2': 356, 'next': 359, 'param3': 15}
/*<359>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 367, 'param3': 17}
/*<367>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5390, 'param2': 3840, 'next': 363, 'param3': 13}
/*<363>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 368, 'param3': 48}
/*<368>*/ 	{'type': 'type3', 'subType': 2, 'param1': 49, 'param2': 100, 'next': 358, 'param3': 14}
/*<358>*/ 	entrypoint_118_25();
          }

          void entrypoint_118_27() {
/*<427>*/ 	start()
/*<439>*/ 	switch (zone_temp_flags[7 /* 0x1 80 */]) {
          	  case 0:
/*<442>*/ 		switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          		  case 0:
/*<441>*/ 			printf("\x0E\x01\x09\x04\x07\xC08You probably heard about the Isle of\nthe Goddess, huh? I wonder what\nhappened. It's just crazy...\n\nThere's no sign of Zelda. Groose\nis gone... What is going on around\nhere?!")
/*<443>*/ 			scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          		  case 1:
/*<444>*/ 			printf("\x0E\x01\x09\x04\x00\x05Just you wait! I'm going to keep\nworking out at night until I'm\nstrong like you!")
          		}
          	  case 1:
/*<437>*/ 		switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
          		  case 0:
/*<438>*/ 			printf("\x0E\x01\x09\x04\x07\xA0BHey, Link! How goes it?\nI've been great, thanks to that\n<y<Stamina Potion>> you gave me!\n\n\x0E\x01\x09\x04ÿ\xFF00The longer I train, though, the more\nI realize I'll never measure up to you...\nI'm just so...scrawny.\n\nHey, if you're up for it, why don't you\ncome by and visit again some night?")
          			flw_440:
/*<440>*/ 			zone_temp_flags[7 /* 0x1 80 */] = true;
          		  case 1:
/*<435>*/ 			switch (story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */]) {
          			  case 0:
/*<436>*/ 				printf("\x0E\x01\x09\x04\x00\x01Hey, Link! Any closer to\nfinding Zelda yet?\n\n\nI think I mentioned this before, but\nit's started feeling like maybe I've\nreached my peak. Like maybe I'm just\nwasting my time...\nAnyhow, I'll be here doing my thing at\n<r<night>>, so come by and give me some\nadvice whenever you've got the time.")
          				goto flw_440
          			  case 1:
/*<431>*/ 				switch (story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */]) {
          				  case 0:
/*<434>*/ 					printf("\x0E\x01\x09\x04\x00\x01Hey there, Link! I've been\ntraining hard at <y<night >>since you gave\nme that <y<Stamina Potion>>.\n\n\x0E\x01\x09\x04\x10\x1B00But, I don't know... It's started feeling\nlike maybe I've reached my peak.\nLike maybe I'm just wasting my time.\n\nI don't know if I'll ever be as strong\nas you, Link...\n\n\n\x0E\x01\x09\x04ÿ\xFF00Still, there's nothing to be gained from\nfeeling sorry for myself, so I'll keep\nworking out every <r<night>>! Come by and\ngive me pointers anytime!")
          					goto flw_440
          				  case 1:
/*<430>*/ 					switch (story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */]) {
          					  case 0:
/*<433>*/ 						printf("\x0E\x01\x09\x04\x07\xA0BHey there, Link! Thanks\nagain for that <y<Stamina Potion>>!\nSince you gave it to me, I've been\ndoing push-ups like a machine!\n\x0E\x01\x09\x04ÿ\xFF00You'll see! I'll be as tough as you in\nno time!")
          						goto flw_440
          					  case 1:
/*<432>*/ 						printf("\x0E\x01\x09\x04\x00\x01Oh, how embarrassing... You caught\nme in the middle of my nightly\nworkout routine.\n\nI want to become strong like you, but I\njust don't seem to be making any\nprogress. I'll keep trying, though.")
          						goto flw_440
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_10() {
/*< 25>*/ 	start()
/*<428>*/ 	switch (story_flags[388 /* us: 805A9B0D 0x40, jp: 805ACD8D 0x40 */]) {
          	  case 0:
/*<445>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 429, 'param3': 31}
/*<429>*/ 		entrypoint_118_27();
          	  case 1:
/*< 40>*/ 		switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          		  case 0:
/*< 69>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*< 70>*/ 				switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          				  case 0:
/*<306>*/ 					switch (zone_temp_flags[7 /* 0x1 80 */]) {
          					  case 0:
/*<418>*/ 						switch (story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */]) {
          						  case 0:
/*<419>*/ 							printf("\x0E\x01\x09\x04\x00\x05Just you wait! I'm going to keep\nworking out at night until I'm\nstrong like you!")
          							flw_332:
/*<332>*/ 							switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          							  case 0:
/*<331>*/ 								printf("\x0E\x01\x09\x04\x07\xC08You probably heard about the Isle of\nthe Goddess, huh? I wonder what\nhappened. It's just crazy...\n\nThere's no sign of Zelda. Groose\nis gone... What is going on around\nhere?!")
/*<339>*/ 								scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          							  case 1:
          							}
          						  case 1:
/*<307>*/ 							printf("\x0E\x01\x09\x04\x00\x01I'm sure you'll find Zelda too!")
          							goto flw_332
          						}
          					  case 1:
/*<312>*/ 						switch (story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */]) {
          						  case 0:
/*<498>*/ 							entrypoint_118_29();
          						  case 1:
/*<313>*/ 							printf("\x0E\x01\x09\x04\x00\x12I still haven't seen any sign of Kukiel,\nLink!\n\n\n\x0E\x01\x09\x04\x00\xE10Are you really looking for her?\n\n\n\n\x0E\x01\x09\x04\x00\xC00What? She's safe?!\n\n\n\n\x0E\x01\x09\x04\x07\xA0BThat's a huge relief! I'm so glad you\ntracked her down, Link!\nI knew you'd do it.")
/*<329>*/ 							story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */] = true;
/*<497>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					}
          				  case 1:
/*<308>*/ 					switch (story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */]) {
          					  case 0:
/*<310>*/ 						printf("\x0E\x01\x09\x04\x00\nYou should go and let Kukiel's\nmother know! I'm sure she's at\ntheir house near the water's edge.")
          					  case 1:
/*<309>*/ 						printf("\x0E\x01\x09\x04\x00\x12I still haven't seen any sign of Kukiel,\nLink!\n\n\n\x0E\x01\x09\x04\x00\xE10Are you really looking for her?\n\n\n\n\x0E\x01\x09\x04\x00\xC00What? She's safe?!\n\n\n\n\x0E\x01\x09\x04\x07\xA0BThat's a huge relief! I'm so glad you\ntracked her down, Link!\nI knew you'd do it.")
/*<311>*/ 						story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */] = true;
          					}
          				}
          			  case 1:
/*<328>*/ 				switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          				  case 0:
/*<327>*/ 					printf("\x0E\x01\x09\x04\x07\x801Oh, Link! This is just \nso awful it's hard to believe...\nThe Isle of the Goddess is gone!\n\n\x0E\x01\x09\x04\x00\x800That cute little Kukiel girl has gone\nmissing...\n\n\n\x0E\x01\x09\x04\x00\xE00There's no sign of Zelda. Groose is\ngone... What's this world coming to?!\n\n\n\x0E\x01\x09\x04\x07\x800I'll do my best to help look for\nthem, but this may be up to you,\nLink!")
/*<338>*/ 					scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          				  case 1:
/*<304>*/ 					switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          					  case 0:
/*<305>*/ 						printf("\x0E\x01\x09\x04\x00\x12I still haven't seen any sign of Kukiel,\nLink!\n\n\n\x0E\x01\x09\x04\x00\xE10Have you been really looking for her?\nYou're not putting it off for later\nor anything, are you?\n\n\x0E\x01\x09\x04\x07\x200I'm doing my best to find her, but\nI can't do it alone. You do the same!")
          					  case 1:
/*<301>*/ 						switch (zone_temp_flags[7 /* 0x1 80 */]) {
          						  case 0:
/*<303>*/ 							printf("\x0E\x01\x09\x04\x00\x1701Check the plaza, Link!\nI'll try some other places.\n\n\n\x0E\x01\x09\x04\x08\x1700I wonder if that boy she was playing\nwith yesterday is still around...")
          						  case 1:
/*< 26>*/ 							printf("\x0E\x01\x09\x04\x00\x01Oh, Link! How's it going?\nAny luck tracking down Zelda?\n\n\n.<pause0A>.<pause0A>.<pause0A>I see. Well, we're all pulling for you!\n\n\n\n\x0E\x01\x09\x04\x07\x200By the way, I saw Kukiel's mother\nheading up toward the temple a\nlittle while ago. She looked pretty\nupset...\n\x0E\x01\x09\x04\x08\x1700You don't suppose something\nhappened, do you?")
/*< 30>*/ 							printf("\x0E\x01\x09\x04 \x508Huh? Kukiel's gone missing?!\n\n\n\n\x0E\x01\x09\x04\x07\x800We've got to do something! I'll start\nlooking too! Ask around and see if you\ncan find somebody who's seen her,\nLink!")
/*<302>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					}
          				}
          			}
          		  case 1:
/*<326>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<325>*/ 				printf("\x0E\x01\x09\x04\x07\x801Oh, Link! This is just \nso awful it's hard to believe...\nThe Isle of the Goddess is gone!\n\n\x0E\x01\x09\x04\x00\x800That cute little Kukiel girl has gone\nmissing...\n\n\n\x0E\x01\x09\x04\x00\xE00There's no sign of Zelda. Groose is\ngone... What's this world coming to?!\n\n\n\x0E\x01\x09\x04\x07\x800I'll do my best to help look for\nthem, but this may be up to you,\nLink!")
/*<337>*/ 				scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          			  case 1:
/*< 41>*/ 				printf("\x0E\x01\x09\x04\x00\x01Oh, Link! How's it going?\nAny luck tracking down Zelda?\n\n\n.<pause0A>.<pause0A>.<pause0A>I get it. Well, all of us here are\npulling for you!\n\n\nBy the way, I saw Kukiel's mother\nheading up toward the temple a little\nwhile ago. She looked really upset.\nDo you know if something happened?\n[1]Wait, who?[2]I know!")
/*< 42>*/ 				switch (choice(2)) {
          				  case 0:
/*< 43>*/ 					printf("\x0E\x01\x09\x04\x00\x05You know, she lives in that house\nnear the water with her husband and\ntheir little girl.\n\n\x0E\x01\x09\x04\x07\x800I don't know what was wrong, but\nshe was definitely upset.")
          				  case 1:
/*< 44>*/ 					printf("\x0E\x01\x09\x04\x07\x806...You're just pulling my chain, aren't\nyou?")
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_28() {
/*<450>*/ 	start()
/*<464>*/ 	switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          	  case 0:
          		flw_460:
/*<460>*/ 		switch (random(2)) {
          		  case 0:
/*<459>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hey, Link! I haven't seen\nGroose around lately. I wonder if he\ngot into big trouble and now he has to\ngo to detention at the academy...")
          		  case 1:
/*<461>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hey, Link! Strich taught\nme some great <r<bug-catching\ntechniques>>!\n\nHe said it works better if you swing\nthe net to your side instead of over\nyour head!\n\nHe also said it's best to sneak up on\nthe bugs slowly and then swing fast!")
          		}
          	  case 1:
/*<462>*/ 		switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          		  case 0:
/*<463>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hi, Link!\n\n\n\nHuh? <b<Try and force>>\x0E\x01\x06\x02\xFBCD...?\x0E\x01\x06\x02Í <pause14>What are you\ntalking about? Sometimes you're so\nweird...")
          		  case 1:
/*<458>*/ 			switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          			  case 0:
          				goto flw_460
          			  case 1:
/*<448>*/ 				switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          				  case 0:
/*<449>*/ 					printf("\x0E\x01\x09\x04\x00\x01Hey, Link!\nLook at the Light Tower!\n\n\nThere's a beam of light shooting out\nof it! How cool is that?!")
          				  case 1:
/*<457>*/ 					switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          					  case 0:
          						flw_454:
/*<454>*/ 						printf("\x0E\x01\x09\x04\x00\x01Hey, Link! Is it true you\ncan catch more than just bugs with a\n<r<<item47>>>?\n\nThe guy at the Scrap Shop said you can\nuse one to catch all kinds of stuff...\nlike things you'd never even think of!")
          					  case 1:
/*<455>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<456>*/ 							printf("\x0E\x01\x09\x04\x00\x01Yo, Link!\n\n\n\nHuh? The <r<lyrics>> to a song Zelda\nwas singing?\n\n\nWhat's a <r<lyric>>? Is that some kind of\nbug? I don't get it. I'm so confused...")
          						  case 1:
/*<453>*/ 							switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          							  case 0:
          								goto flw_454
          							  case 1:
/*<452>*/ 								printf("\x0E\x01\x09\x04\x00\x01I have to figure out a way to get up\nto Beedle's Airshop soon so I can\nget a Bug Net too!\n\nThen I'm going straight to the Scrap\nShop to get Gondo to upgrade it and\nmake it even bigger!")
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_11() {
/*< 53>*/ 	start()
/*<162>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*< 54>*/ 		printf("\x0E\x01\x09\x04\x00\x01He's not a bad man! He saved me\none time when I almost fell over the\nedge! And he lets me come here and\nscream as loud as I want!\nAnyway, he said it was dangerous to go\nout alone at night, so I'll just hang out\nhere for a while. Tell my mom I'll come\nhome in the morning!")
          	  case 1:
/*<163>*/ 		printf("\x0E\x01\x09\x04\x00\x06Hey, what's wrong? Why do you look so\nscared? Did something happen to you?")
          	}
          }

          void entrypoint_118_29() {
/*<496>*/ 	start()
/*<413>*/ 	switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          	  case 0:
/*<412>*/ 		switch (story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */]) {
          		  case 0:
/*<417>*/ 			printf("\x0E\x01\x09\x04\x00\x01I've been secretly working out at night\nso that someday I might be strong like\nyou, but...it's not as easy as you make\nit look, Link.\nYou really are amazing!")
          			flw_330:
/*<330>*/ 			zone_temp_flags[7 /* 0x1 80 */] = true;
          		  case 1:
/*<414>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 415, 'param3': 31}
/*<415>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hey, Link. Any closer to\nfinding Zelda?\n\n\nDon't go around telling anyone, but\nlately I've been working out <r<at night\n>>so that I can get strong like you.\n\n<pause05>.<pause05>.<pause05>.<pause0A>No, no, no!\x0E\x01\x09\x04\x00\xA06 Please don't come to\n<r<my room>> at night when I'm training.\nI'd be so embarrassed!")
/*<416>*/ 			story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */] = true;
          			goto flw_330
          		}
          	  case 1:
/*<501>*/ 		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          		  case 0:
          			flw_505:
/*<505>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hey, Link! Did you find\nany trace of Zelda? I hope she gets\nback soon.")
          			goto flw_330
          		  case 1:
/*<500>*/ 			switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          			  case 0:
/*<504>*/ 				printf("\x0E\x01\x09\x04\x00\x811\x0E\x03\x01\x00Link, this is amazing!\nThere's some kind of beam coming out\nof the Light Tower! I've never seen\nanything like it!")
          			  case 1:
/*<507>*/ 				switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          				  case 0:
          					goto flw_505
          				  case 1:
/*<494>*/ 					switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          					  case 0:
/*<503>*/ 						printf("\x0E\x01\x09\x04\x07\xA0BHey, Link!\n\n\n\n\x0E\x01\x09\x04\x00\xFF05<r<Two whirling sails>>, eh...? That's a\ntough one. The wind is really strong\nhere in Skyloft, so there are lots of\nthings that look like sails.")
          					  case 1:
/*<495>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<502>*/ 							printf("\x0E\x01\x09\x04\x07\xA0BOh, hey there, Link!\n\n\n\n\x0E\x01\x09\x04\x00\xFF08Hmm? The <r<Ballad of the Goddess>>?<pause1E>\nSure, I know it. Zelda used to sing it all\nthe time.\n\nI'm afraid I don't know the lyrics, but\nI bet you anything the headmaster\nof the academy does.")
          						  case 1:
/*<314>*/ 							printf("\x0E\x01\x09\x04\x00\x0BOh, hey, Link! Kukiel's\nmother must have been thrilled,\nhuh? I'm sure glad you found her!")
/*<499>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_12() {
/*< 67>*/ 	start()
/*<473>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<474>*/ 		printf("\x0E\x01\x09\x04\x00\x01Heya, Link!\n<pause1E>Huh? Uncle Bats is a human now?\n\n\n\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02ÍAwww, that's too bad. I liked his\nflappy bat wings...")
          	  case 1:
/*< 68>*/ 		printf("\x0E\x01\x09\x04\x00\x01Oh, it's you, Link!\n\n\n\nUncle Bats told me he wants to see all\nthe grabitude crackles he can!\nBut how's he going to do that?")
          	}
          }

          void entrypoint_118_99() {
/*<506>*/ 	start()
/*<293>*/ 	switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          	  case 0:
          	  case 1:
/*<247>*/ 		{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 244, 'param3': 51}
/*<244>*/ 		printf("")
/*<245>*/ 		switch (choice(2)) {
          		  case 0:
/*<248>*/ 			story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<249>*/ 			story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<250>*/ 			story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<251>*/ 			story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<252>*/ 			story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<253>*/ 			story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<378>*/ 			open_dowsing_wheel(13)
/*<380>*/ 			printf("")
/*<379>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          			flw_254:
/*<254>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          		  case 1:
/*<246>*/ 			printf("\x0E\x01\x12\x04\x00\x05Understood, Master. Your <pling>dowsing\nability will not be set to find this item.")
          			goto flw_254
          		}
          	}
          }

          void entrypoint_118_13() {
/*< 71>*/ 	start()
/*< 84>*/ 	switch (story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */]) {
          	  case 0:
/*< 85>*/ 		printf("\x0E\x01\x09\x04\x00\x13Whoa! Isn't that...the beat-up\nold robot from Gondo's place?!")
/*<189>*/ 		make_actor_do_something(1, 0)
/*< 87>*/ 		printf("Wait just a second...\n\n\n\n<pause14>Is that...<pause28> It is! That's the <r<windmill\npropeller>>! That thing was supposed to\nhave fallen down below the clouds!\n\n\x0E\x01\x09\x04\x0C\xC00Are you saying that whole story handed\ndown through Gondo's family was\nactually true?\n\nHmm... Somehow I get the feeling\nthis is all some elaborate prank, but I\nguess I'll try to fix this thing...")
/*<182>*/ 		set_camera(6, 0)
/*< 88>*/ 		printf("This goes in here... And I just crank\nthat a few clicks...")
/*<183>*/ 		{'type': 'type3', 'subType': 2, 'param1': 29, 'param2': 256, 'next': 184, 'param3': 15}
/*<184>*/ 		{'type': 'type3', 'subType': 2, 'param1': 30, 'param2': 356, 'next': 209, 'param3': 15}
/*<209>*/ 		story_flags[661 /* us: 805A9B1F 0x08, jp: 805ACD9F 0x08 */] = true;
/*<186>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 190, 'param3': 6}
/*<190>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 256, 'next': 185, 'param3': 13}
/*<185>*/ 		set_camera(7, 0)
/*<194>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 89, 'param3': 6}
/*< 89>*/ 		printf("\x0E\x01\x09\x04\n\x10EPhew!")
/*<188>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 187, 'param3': 17}
/*<187>*/ 		printf("\x0E\x01\x09\x04\x0C\xC00That ought to do it! If you can find\nsome way to spin the propeller, you can\nprobably turn the windmill around.")
/*<210>*/ 		printf("\x0E\x01\x09\x04\x00\x100\x0E\x01\x08\x02\xFFCDHoneeeeey! Honeeeey?")
/*<297>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 90>*/ 			printf("\x0E\x01\x09\x04\x05\x714Oh no! I think I might've promised my\nwife I'd fix our cupboard! I swear that\nwoman's always looking for somebody.")
/*< 91>*/ 			printf("\x0E\x01\x09\x04\x0C\xC00See you around, Link!")
          			flw_192:
/*<192>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 191, 'param3': 17}
/*<191>*/ 			{'type': 'type3', 'subType': 2, 'param1': 31, 'param2': 0, 'next': 193, 'param3': 14}
/*<193>*/ 			story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */] = true;
/*<294>*/ 			story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<211>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<295>*/ 			printf("\x0E\x01\x09\x04\x05\x714Oh, no! I just remembered I'm\nsupposed to be looking for Kukiel!")
/*<296>*/ 			printf("\x0E\x01\x09\x04\x0C\xC00Catch you later, Link!\nIf you happen to see Kukiel, let me\nknow, all right?")
          			goto flw_192
          		}
          	  case 1:
/*< 73>*/ 		switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          		  case 0:
/*<243>*/ 			printf("\x0E\x01\x09\x04\x00\x05Dredging things up from some mystical\n\x201Cworld beneath the clouds\" that doesn't\neven exist? Sounds like a lot of hot air.\n\n<b<Gondo>> actually bought into the whole\nthing, though. That's why he's always\ntinkering with that busted old robot.")
          		  case 1:
/*<291>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<205>*/ 				printf("\x0E\x01\x09\x04\x00\x01Thank you so much for tracking down\nKukiel, Link! It's such a \ngorgeous day today too.\n\nOn a day like today, there's nothing I'd\nlove more than to head over to the\nLumpy Pumpkin for a sip of soup.\n\nBut of course my wife asked me to fix\nthe cupboard, so I'm not going\nanywhere.\n\nSigh... The story of my life...")
          			  case 1:
/*<292>*/ 				printf("\x0E\x01\x09\x04\x00\x0EHey, Link. Still no sign of \nKukiel! Even I'm starting to get a\nbit worried...\n\nHelp keep an eye out for her, all right?")
          			}
          		}
          	}
          }

          void entrypoint_118_14() {
/*< 80>*/ 	start()
/*< 82>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 83>*/ 		printf("Dzzat! Everything you do is wonderful,\nMistress Fi. I will drop anything to\nfulfill your any wish...bzzrt.")
          	  case 1:
/*< 81>*/ 		printf(".<pause05>.<pause05>.")
          	}
          }

          void entrypoint_118_15() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf("You feel a suspicious presence\nemanating from within the room.")
          }

          void entrypoint_118_16() {
/*< 95>*/ 	start()
/*<102>*/ 	switch (story_flags[373 /* us: 805A9B02 0x08, jp: 805ACD82 0x08 */]) {
          	  case 0:
/*<107>*/ 		printf("\x0E\x01\x09\x04\x01\x701Please come by the bazaar again when\nyou have the chance!\n\n\nI'll tell your fortune for a special\nprice!")
          	  case 1:
/*<101>*/ 		switch (story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */]) {
          		  case 0:
/*<104>*/ 			printf("\x0E\x01\x09\x04\x10\x70D...Oh! What do my eyes behold?!\n\n\n\nThis...this is it! You found it! This is\nexactly the same as the crystal ball I\nused before!")
/*<256>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 105, 'param3': 17}
/*<105>*/ 			printf("\x0E\x01\x09\x04\x00\x700Fates and fortunes! My eyes are wide\nwith the thrill of possibility and damp\nwith tears of gratitude!\n\nI'll be able to start gazing into the\nfuture and making predictions at\nonce!\n\nCome by the bazaar again, and I'll tell\nyour fortune for a special price!")
/*<106>*/ 			story_flags[373 /* us: 805A9B02 0x08, jp: 805ACD82 0x08 */] = true;
/*<298>*/ 			story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<376>*/ 			scene_flags[0 'Skyloft'][26 /* 0x2 04 */] = true;
/*<377>*/ 			scene_flags[0 'Skyloft'][86 /* 0xB 40 */] = true;
/*<141>*/ 			give_gratitude_crystals();
          		  case 1:
/*< 99>*/ 			switch (story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */]) {
          			  case 0:
/*<425>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 212, 'param3': 31}
/*<212>*/ 				switch (story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */]) {
          				  case 0:
/*<161>*/ 					{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1799, 'next': 103, 'param3': 13}
/*<103>*/ 					printf("Come now! What are you doing here?\nHurry and find me a new crystal ball!")
          				  case 1:
/*<214>*/ 					{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1799, 'next': 213, 'param3': 13}
/*<213>*/ 					printf("Come now! What are you doing here?\nHurry and find me a new crystal ball!")
/*<242>*/ 					{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 215, 'param3': 51}
/*<215>*/ 					printf("Your <r<<pling>dowsing >>ability is not currently\ncalibrated to search for the <r<crystal ball>>\nthat this person seeks.\n\n<pling>Do you wish to calibrate your <r<dowsing\n>>ability to search for this <r<crystal ball>>?\n[1]Yes, please.[2-]Not now.")
/*<216>*/ 					switch (choice(2)) {
          					  case 0:
/*<382>*/ 						story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = true;
/*<221>*/ 						story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<220>*/ 						story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<218>*/ 						story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<219>*/ 						story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<222>*/ 						story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<384>*/ 						open_dowsing_wheel(14)
/*<383>*/ 						printf("\x0E\x01\x12\x04\x00\x05Understood, Master.\n\n\n\nYour <pling><r<dowsing >>ability is now set to\ndetect the <r<crystal ball>> this person\nseeks.")
          						flw_241:
/*<241>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          					  case 1:
/*<217>*/ 						printf("\x0E\x01\x12\x04\x00\x05Understood, Master. Your <pling>dowsing\nability will not be set to find this item.")
          						goto flw_241
          					}
          				}
          			  case 1:
/*<100>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 122, 'param3': 31}
/*<122>*/ 				printf("\x0E\x01\x09\x04\x0C\x100FI'm fine. Go on, go on... Please leave\nme be...\n\n\nMy crystal ball has shattered, and\nwithout it, my eyes can no longer gaze\ndeeply into the future...\n\nIt's almost as though these \x0E\x01\x06\x02\xFCCDexquisite,\nall-seeing eyes\x0E\x01\x06\x02Í of mine have begun to\ndull and cloud over with sadness now\nthat my crystal ball is gone.\n<pause1E>If only... If only I had a new crystal\nball to gaze into...")
/*<160>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1798, 'next': 159, 'param3': 13}
/*<159>*/ 				printf("Is it not true that you recovered a\npiece of the windmill from beneath\nthe clouds recently, young man?\n\nThis shattered crystal ball was salvaged\nfrom below by Gondo's ancestor long\nbefore it found its way into my\ndelicate hands.\nThere may still be others like it where\nit came from, yes, yes! Would you\nsearch for a new one for me?\n[1]Yes.[2-]No.")
/*< 96>*/ 				switch (choice(2)) {
          				  case 0:
/*<255>*/ 					{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1802, 'next': 97, 'param3': 13}
/*< 97>*/ 					printf("Yesssss... No doubt you can see the\ngratitude in my eyes!\n\n\nThe robot who originally retrieved this\ncrystal ball was said to have reported\nthat he found it in <r<a building atop a\nmountain peak>>! Can you believe it?!")
/*<123>*/ 					{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 124, 'param3': 51}
/*<124>*/ 					printf("Your <pling><r<dowsing>> ability can be calibrated\nto locate the crystal ball that this\nperson is seeking.\n\nHowever, if you are searching for\nanother object that someone has\nasked you to find, that target will be\nremoved when you switch to this target.\nDo you wish to set the <r<crystal ball >>as\nyour dowsing target?\n[1]Yes![2-]Not yet.")
/*<465>*/ 					switch (choice(2)) {
          					  case 0:
/*<466>*/ 						printf("\x0E\x01\x12\x04\x00\x05Understood, Master. I'll set your\ndowsing target to the crystal ball in\nquestion.")
/*<381>*/ 						story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = true;
/*<388>*/ 						story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<387>*/ 						story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<385>*/ 						story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<386>*/ 						story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<389>*/ 						story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<394>*/ 						open_dowsing_wheel(14)
          						flw_391:
/*<391>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 390, 'param3': 36}
/*<390>*/ 						story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */] = true;
/*<393>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 392, 'param3': 16}
/*<392>*/ 						printf("\x0E\x01\x09\x04\x01\x70BI'm counting on you, young man!\nWithout my crystal ball, I cannot gaze\ninto the future. Oh no... My eyes, they\nwould droop with despair...\nPlease bring me a new crystal ball\nwith all haste!")
          					  case 1:
/*<467>*/ 						printf("\x0E\x01\x12\x04\x00\x05Understood, Master. Should you wish\nto set your dowsing target to the item\nin question later, simply speak to this\nperson again.")
          						goto flw_391
          					}
          				  case 1:
/*< 98>*/ 					printf("\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í\x0E\x01\x09\x04\x0C\x1009Such a cruel world\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í")
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_17() {
/*<109>*/ 	start()
/*<114>*/ 	switch (story_flags[481 /* us: 805A9B11 0x20, jp: 805ACD91 0x20 */]) {
          	  case 0:
/*<478>*/ 		switch (zone_temp_flags[14 /* 0x0 40 */]) {
          		  case 0:
/*<479>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<481>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 15, 'next': 480, 'param3': 13}
/*<480>*/ 				printf("Can you believe the Isle of the Goddess\nis gone? The thought boggles the mind.\n\n\nI couldn't believe it until I went and\nconfirmed the truth of it with my own\neyes!\n\nTerrible though it is, the headmaster\nhas informed me that it was a price we\nhad to pay to save Zelda. We're\ncounting on you to find her!")
          			  case 1:
          				flw_173:
/*<173>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 36, 'next': 509, 'param3': 32}
/*<509>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1, 'next': 322, 'param3': 13}
/*<322>*/ 				printf("Oh, Link! The world is\nbursting with undiscovered surprises,\nisn't it? I wonder how many\nunidentified plants are still out there.")
/*<174>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 36, 'next': 121, 'param3': 17}
/*<121>*/ 				printf("\x0E\x01\x09\x04\x0E\x50AYou know, the longer I spend with this\nplant, the more interested I become!\n\n\n\x0E\x01\x09\x04\x00\x500Just how much of this thing is a\nplant and how much an animal, do\nyou suppose? Fascinating!")
/*<477>*/ 				zone_temp_flags[14 /* 0x0 40 */] = true;
          			}
          		  case 1:
          			goto flw_173
          		}
          	  case 1:
/*<113>*/ 		switch (story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */]) {
          		  case 0:
/*<158>*/ 			entrypoint_118_21();
          		  case 1:
/*<112>*/ 			switch (story_flags[479 /* us: 805A9B11 0x08, jp: 805ACD91 0x08 */]) {
          			  case 0:
/*<426>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 274, 'param3': 31}
/*<274>*/ 				switch (zone_temp_flags[14 /* 0x0 40 */]) {
          				  case 0:
/*<275>*/ 					printf("\x0E\x01\x09\x04\x00\x09Ha! I knew you would lend me a\ngreen thumb, Link!\nThank you in advance!")
          					flw_229:
/*<229>*/ 					switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
          					  case 0:
          					  case 1:
/*<267>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 268, 'param3': 32}
/*<268>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 269, 'param3': 17}
/*<269>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 230, 'param3': 6}
/*<230>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 270, 'param3': 51}
/*<270>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 231, 'param3': 50}
/*<231>*/ 						printf("Your <r<<pling>dowsing >>ability is not currently\ncalibrated to search for the <r<plant\n>>that this person seeks.\n\n<pling>Do you wish to calibrate your <r<dowsing\n>>ability to search for this <r<plant>>?\n[1]Sure.[2-]Not yet.")
/*<232>*/ 						switch (choice(2)) {
          						  case 0:
/*<234>*/ 							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = true;
/*<235>*/ 							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<236>*/ 							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<237>*/ 							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<238>*/ 							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<239>*/ 							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<396>*/ 							open_dowsing_wheel(16)
/*<395>*/ 							printf("\x0E\x01\x12\x04\x00\x05Understood, Master.\n\n\n\nYour <pling><r<dowsing >>ability is now set to\ndetect the <r<plant>> this person seeks.")
          							flw_240:
/*<240>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          						  case 1:
/*<233>*/ 							printf("\x0E\x01\x12\x04\x00\x05Understood, Master. Your <pling>dowsing\nability will not be set to find this item.")
          							goto flw_240
          						}
          					}
          				  case 1:
/*<120>*/ 					printf("\x0E\x01\x09\x04\x00\x01How goes the search for exotic flora?\nAny luck finding new varieties of\nexotic plant species?")
          					goto flw_229
          				}
          			  case 1:
/*<111>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*<318>*/ 					switch (story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */]) {
          					  case 0:
/*<508>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 321, 'param3': 31}
/*<321>*/ 						printf("\x0E\x01\x09\x04\x00\x01Oh! Have you decided to help me\nafter all, Link?\n\n\nCollecting exotic plants is my passion!")
          						flw_118:
/*<118>*/ 						printf("\x0E\x01\x09\x04\x00\x00But you see...I have begun to fear that\nI have collected everything I can hope\nto collect. My plant collection now\nfeatures every known species.\nI've started wondering if, in light of\nyour travels, there isn't somewhere you\nmight be able to discover something\nnew for me.\n\x0E\x01\x09\x04\x09\xA0FWhat do you think? Would you be\nwilling to look for a new plant species\nfor me? Perhaps something exotic...\nThe kind that would turn a few heads?\n[1]I'll try.[2-]Maybe later.")
/*<132>*/ 						switch (choice(2)) {
          						  case 0:
/*<133>*/ 							printf("\x0E\x01\x09\x04\n\xA03Aha! I knew you would be willing\nto help me out, Link.\n\n\nI'm truly sorry to trouble you, but\nplease try to bring me something\nrare... Something no one will have\nseen before!")
/*<265>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 266, 'param3': 32}
/*<266>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 271, 'param3': 17}
/*<271>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 134, 'param3': 6}
/*<134>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 272, 'param3': 51}
/*<272>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 135, 'param3': 50}
/*<135>*/ 							printf("Your <pling><r<dowsing>> ability can be calibrated\nto locate the <r<plant>> that this person\nseeks.\n\nHowever, if you are searching for\nanother object that someone has\nasked you to find, that target will be\nremoved when you switch to this target.\nDo you wish to set this <r<plant>> as your\ncurrent <r<dowsing>> target?\n[1]Yes![2-]Not now.")
/*<468>*/ 							switch (choice(2)) {
          							  case 0:
/*<469>*/ 								printf("\x0E\x01\x12\x04\x00\x05Understood, Master. I will set the plant\nin question as your current dowsing\ntarget.")
/*<223>*/ 								story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = true;
/*<224>*/ 								story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<225>*/ 								story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<226>*/ 								story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<227>*/ 								story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<228>*/ 								story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<397>*/ 								open_dowsing_wheel(16)
          								flw_136:
/*<136>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 119, 'param3': 36}
/*<119>*/ 								story_flags[479 /* us: 805A9B11 0x08, jp: 805ACD91 0x08 */] = true;
/*<273>*/ 								zone_temp_flags[14 /* 0x0 40 */] = true;
          							  case 1:
/*<470>*/ 								printf("\x0E\x01\x12\x04\x00\x05Understood, Master. Should you wish\nto set your dowsing target to the item\nin question later, simply speak to this\nperson again.")
          								goto flw_136
          							}
          						  case 1:
/*<117>*/ 							printf("\x0E\x01\x09\x04\n\xA09Ha! I suppose you do have other\nmatters to be minding. Just don't\nforget to stop and take a moment for\nyourself and relax now and again!\nIf you're always so focused on the\ntask at hand, you'll wear yourself out.")
          						}
          					  case 1:
/*<320>*/ 						story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */] = true;
/*<115>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 484, 'param3': 31}
/*<484>*/ 						switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          						  case 0:
/*<483>*/ 							{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 15, 'next': 482, 'param3': 13}
/*<482>*/ 							printf("Can you believe the Isle of the Goddess\nis gone? The thought boggles the mind.\n\n\nI couldn't believe it until I went and\nconfirmed the truth of it with my own\neyes!\n\nTerrible though it is, the headmaster\nhas informed me that it was a price we\nhad to pay to save Zelda. We're\ncounting on you to find her!")
          							flw_116:
/*<116>*/ 							printf("\x0E\x01\x09\x04\x00\x13Ahem. By the way...would you be\nwilling to listen to a little request\nof mine as well?\n\nAs I'm sure you're aware, I'm the\neminent authority on plant collecting\nin Skyloft. If I do say so myself...")
          							goto flw_118
          						  case 1:
/*<319>*/ 							printf("\x0E\x01\x09\x04\x00\x01Oh, Link! How did it go?\nWere you able to hear what Levias\nhad to say?\n\n...I see! I was right, then. There is\nsomething special about you. I have a\nfeeling you and that vibrant Loftwing\nof yours will be just fine.\nThe road ahead of you certainly won't\nbe a smooth one, but don't lose faith!")
          							goto flw_116
          						}
          					}
          				  case 1:
/*<315>*/ 					switch (story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */]) {
          					  case 0:
/*<110>*/ 						printf("\x0E\x01\x09\x04\x00\x01\x0E\x03\x01\x00Link! I don't suppose\nyou'd be willing to lend an ear to my\ntroubles this time, would you?\n[1]What is it?[2-]No, sorry.")
/*<129>*/ 						switch (choice(2)) {
          						  case 0:
/*<131>*/ 							printf("Actually, let's talk about this matter\nanother time. Since Kukiel has gone\nmissing, her mother has asked me to\nhelp with the search.\nIf you have the time, I'm sure she'd\nappreciate your help as well.")
          						  case 1:
/*<130>*/ 							printf("\x0E\x01\x09\x04\x00\x09Hah! Surely it wouldn't cause you\npain to listen to one of my concerns\nfor once!")
          						}
          					  case 1:
/*<487>*/ 						switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          						  case 0:
/*<486>*/ 							{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 15, 'next': 485, 'param3': 13}
/*<485>*/ 							printf("Can you believe the Isle of the Goddess\nis gone? The thought boggles the mind.\n\n\nI couldn't believe it until I went and\nconfirmed the truth of it with my own\neyes!\n\nTerrible though it is, the headmaster\nhas informed me that it was a price we\nhad to pay to save Zelda. We're\ncounting on you to find her!")
          						  case 1:
/*<316>*/ 							printf("\x0E\x01\x09\x04\x00\x01Oh, Link! How did it go?\nWere you able to hear what Levias\nhad to say?\n\n...I see! I was right, then. There is\nsomething special about you. I have a\nfeeling you and that vibrant Loftwing\nof yours will be just fine.\nThe road ahead of you certainly won't\nbe a smooth one, but don't lose faith!")
/*<317>*/ 							story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */] = true;
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_18() {
/*<137>*/ 	start()
/*<164>*/ 	printf("Here's that <r<windmill propeller>>, zzzazt!")
/*<108>*/ 	make_actor_do_something(0, 0)
/*< 86>*/ 	printf("If you need me...zzrboosh-\nCLANG...feel free to call!\n\n\nFor Mistress Fi, I will travel to\nany destination, ker-dizzzt!")
          }

          void entrypoint_118_19() {
/*<138>*/ 	start()
/*<139>*/ 	printf("\x0E\x01\x09\x04\x09\x11Keeee-paleeep! I'm not used to getting\nstared at like this. It's making me\nblush!")
          }

          void entrypoint_118_20() {
/*<140>*/ 	start()
/*<125>*/ 	printf("Here's that bright and shiny\ncrystal ball, BZZAT!")
/*<127>*/ 	make_actor_do_something(0, 0)
/*<126>*/ 	printf("If you need me...zzrboosh-\nCLANG...feel free to call!\n\n\nFor Mistress Fi, I will travel to\nany destination, ker-dizzzt!")
/*<128>*/ 	zone_temp_flags[2 /* 0x1 04 */] = true;
          }

          void entrypoint_118_04() {
          	start()
/*< 12>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 13, 'param3': 32}
/*< 13>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 145, 'param3': 32}
/*<145>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5386, 'param2': 3072, 'next': 16, 'param3': 13}
/*< 16>*/ 	set_camera(1, 0)
/*< 14>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 8, 'next': 9, 'param3': 16}
/*<  9>*/ 	printf("\x0E\x01\x09\x04\x1509\xD11Kukiel! Kukiel! Where could that\nchild have gone?!")
/*<  8>*/ 	set_camera(2, 0)
/*<146>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5387, 'param2': 3328, 'next': 1, 'param3': 13}
/*<  1>*/ 	printf("Oh, Kukiel... Where did you go?\n\n\n\nWhat will I do if she's been...\nkidnapped?!")
/*< 15>*/ 	story_flags[299 /* us: 805A9AFD 0x20, jp: 805ACD7D 0x20 */] = true;
/*<371>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 369, 'param3': 16}
/*<369>*/ 	printf("\x0E\x01\x09\x04\x150E\xD11Oh! \x0E\x03\x01\x00Link!")
/*<345>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 344, 'param3': 47}
/*<344>*/ 	set_camera(14, 0)
/*<342>*/ 	{'type': 'type3', 'subType': 2, 'param1': 48, 'param2': 356, 'next': 341, 'param3': 15}
/*<341>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 365, 'param3': 17}
/*<365>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5390, 'param2': 3840, 'next': 346, 'param3': 13}
/*<346>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 370, 'param3': 48}
/*<370>*/ 	{'type': 'type3', 'subType': 2, 'param1': 48, 'param2': 100, 'next': 340, 'param3': 14}
/*<340>*/ 	entrypoint_118_25();
          }

          void entrypoint_118_21() {
/*<151>*/ 	start()
/*<166>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*<150>*/ 		printf("Zzzz-TING! If you should have need of\nme again, just call, dzzzrp!")
          	  case 1:
/*<149>*/ 		printf("I have come bearing the unusual Kikwi,\nfzzzzk!")
/*<167>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          	}
          }

