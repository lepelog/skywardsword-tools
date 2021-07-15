          void entrypoint_303_27() {
/*< 91>*/ 	start()
/*< 92>*/ 	printf("Did you see that, Mistress Fi?")
          }

          void entrypoint_303_44() {
/*<203>*/ 	start()
/*<204>*/ 	printf("Whoa! Sure is hot here, brrzrrt.\nNo sweat, though, because I'm a\ncutting-edge, zzort, robot!")
          }

          void entrypoint_303_10() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf("\x0E\x01\x0B\x04\x00rBzzzrpt! Where are you going now?\nI'll wait here if you've got an errand\nto run, zzzt, but get going!")
          }

          void entrypoint_303_28() {
/*< 93>*/ 	start()
/*< 94>*/ 	printf("If there's anything else I can do to be\nof assistance, zzzzrp, just call me!\nAnytime, zzzrbtzz!")
          }

          void entrypoint_303_45() {
/*<205>*/ 	start()
/*<206>*/ 	printf("Hey! This isn't the right way, zrrt!\nDo you need to stop and ask for\ndirections?")
          }

          void entrypoint_303_11() {
/*< 56>*/ 	start()
/*< 57>*/ 	printf("\x0E\x01\x0B\x04\x00rZzzbt! I'm in trouble over here!\nHurry up and help me, bzzzzat!")
          }

          void entrypoint_303_29() {
/*< 95>*/ 	start()
/*< 96>*/ 	printf("The flames blocking your path have\nbeen fully extinguished. I recommend\nproceeding ahead.")
/*<200>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<291>*/ 	story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = false;
          }

          void entrypoint_303_46() {
/*<207>*/ 	start()
/*<208>*/ 	printf("Are we almost there? Let's get a move\non, brzzt!")
          }

          void entrypoint_303_12() {
/*< 58>*/ 	start()
/*< 59>*/ 	printf("\x0E\x01\x0B\x04\x00rHEY! Brzzpt! I need help...NOW!")
          }

          void entrypoint_303_47() {
/*<219>*/ 	start()
/*<220>*/ 	printf("Welcome back, \x0E\x01\x12\x04\x00\x04Master.\n\n\n\nI conjecture your newly acquired\n<y<Fireshield Earrings >>will allow you to\nsafely travel in extremely hot areas.\n\nI recommend continuing your search\nfor the<r< sacred flame>>.")
          }

          void entrypoint_303_13() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf("\x0E\x01\x05\x04<\x00\x0E\x01\x08\x02\x2CDZZRRRPT!")
          }

          void entrypoint_303_30() {
/*< 97>*/ 	start()
/*< 98>*/ 	printf("\x0E\x01\x05\x04K\x00\x0E\x01\x12\x04\x00\x0BI have a status update for you, Master.\nWe are now near the crater at the peak\nof <b<Eldin Volcano>>.")
          }

          void entrypoint_303_48() {
/*<221>*/ 	start()
/*<223>*/ 	switch (scene_flags[108 /* 0xC 10 */]) {
          	  case 0:
/*<252>*/ 		switch (scene_flags[112 /* 0xF 01 */]) {
          		  case 0:
/*<254>*/ 			switch (scene_flags[113 /* 0xF 02 */]) {
          			  case 0:
/*<270>*/ 				switch (scene_flags[114 /* 0xF 04 */]) {
          				  case 0:
/*<271>*/ 					printf("\x0E\x01\x09\x04\x11\x801Hey, pal. You bust up those <r<mugs with\nthe big shields >>yet?\n\n\n\x0E\x01\x09\x04ÿ\xFF00Here's all you got to remember:\ncut wooden shields, repel spear \nattacks, and clamber up shields like\nthey were walls.\nIf you keep all that in your head, you'll\ndo just fine. I promise!")
/*<272>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				  case 1:
/*<263>*/ 					printf("Hey, pal. You still haven't figured out\nthose <r<mugs with the big shields>>, right?\n\n\n\x0E\x01\x09\x04\x15\x80BI've got one <r<last bit of secret info >>that\nwill make your life a whole lot easier.")
/*<264>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 256, 'param3': 12}
/*<256>*/ 					printf("You know the drill by now, right?\n\x0E\x01\x09\x04ÿ\xFF09It's gonna cost you some R-<pause0A>U-<pause0A>P-<pause0A>E-<pause0A>E-<pause0A>S.<pause0A>\nAnd the price for this is <r<50 Rupees>>.\n[1]OK![2-]No, thanks.")
          					flw_245:
/*<245>*/ 					switch (choice(2)) {
          					  case 0:
/*<247>*/ 						check_item_flag(501, 50)
/*<248>*/ 						switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 84}) {
          						  case 0:
/*<269>*/ 							rupees += -50;
/*<250>*/ 							printf("\x0E\x01\x09\x04\x11\x80BYes! There's not a stingy bone in your\nbody, is there? Truth be told, it makes\nme a bit worried about ya.\n\n\x0E\x01\x09\x04\x14\x1200Keep your wits about ya, pal.\nThere are hustlers out there who'll\nfleece ya for every Rupee you've got. ")
/*<251>*/ 							scene_flags[4 'Eldin Volcano'][114 /* 0xF 04 */] = true;
/*<265>*/ 							printf("\x0E\x01\x09\x04ÿ\xFF00All right, here goes my last secret.\nThose creeps' shields are huge, right?\nLike a wall?\n\n\x0E\x01\x09\x04\x11\x800Well then, treat 'em like a wall and\njab, jab, jab!\n\n\n\x0E\x01\x09\x04ÿ\xFF09I'm not going to tell ya what happens,\nbut I highly recommend ya try it.\nI think you'll like the results!\n\n\x0E\x01\x09\x04\x11\x800Go get 'em, pal! And thanks again for\nthe business.")
/*<266>*/ 							scene_flags[4 'Eldin Volcano'][114 /* 0xF 04 */] = true;
/*<275>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						  case 1:
/*<249>*/ 							printf("\x0E\x01\x09\x04\x14\x1215What are you trying to pull, pal? You\ndon't have enough Rupees!\n\n\n\x0E\x01\x09\x04ÿ\xFF00Come back when you've managed to\nscrape together <r<50 Rupees>>, all right?")
/*<274>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					  case 1:
/*<246>*/ 						printf("\x0E\x01\x09\x04\x14\x1215What are you getting all stingy for?\nIt's a lousy <r<50 Rupees>>.\n\n\n\x0E\x01\x09\x04ÿ\xFF00Pfft. Whatever. Come see me if you\nchange your mind.")
/*<273>*/ 						zone_temp_flags[7 /* 0x1 80 */] = true;
          					}
          				}
          			  case 1:
/*<261>*/ 				printf("Hey, pal. You still having problems\nwith them <r<mugs with the big shields>>?\n\n\n\x0E\x01\x09\x04\x15\x80BI got some<r< more secret information\n>>that will make your life a whole lot\neasier.")
/*<262>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 255, 'param3': 12}
/*<255>*/ 				printf("But there's no free lunch, ya hear me?\n\x0E\x01\x09\x04ÿ\xFF09It's gonna cost you some R-<pause0A>U-<pause0A>P-<pause0A>E-<pause0A>E-<pause0A>S.<pause0A>\nYep, <r<30 Rupees >>to be exact.\n[1]OK![2-]No, thanks.")
          				flw_234:
/*<234>*/ 				switch (choice(2)) {
          				  case 0:
/*<236>*/ 					check_item_flag(501, 30)
/*<237>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 78}) {
          					  case 0:
/*<268>*/ 						rupees += -30;
/*<239>*/ 						printf("\x0E\x01\x09\x04\x11\x808I knew there was a reason I liked ya!\nAll right, here goes...\n\n\n\x0E\x01\x09\x04ÿ\xFF00Those thugs are always trying to skewer\nya with those monster spears, right?\nTake one of those in the gut, and it's\nlights out.\nIf ya time it right, you can<r< repel >>their\nattacks and...<pause0F>\x0E\x01\x09\x04\x11\x800well, you know what\nhappens after that.<pause0F>\n[1]Good info![2]I knew that.")
/*<241>*/ 						scene_flags[4 'Eldin Volcano'][113 /* 0xF 02 */] = true;
/*<242>*/ 						switch (choice(2)) {
          						  case 0:
/*<244>*/ 							printf("\x0E\x01\x09\x04\x11\x80BYou bet it is! I put my life on the line\nto get it too.\n\n\n\x0E\x01\x09\x04ÿ\xFF00And I got more where that came from.\nThis next one's the hidden cherry\non top of the secret sundae. It's only\n<pause14><r<50 Rupees>>.[1]Gimme![2-]No, thanks.")
          							goto flw_245
          						  case 1:
/*<243>*/ 							printf("\x0E\x01\x09\x04\x12\xE04You did? Nice work, pal. You're an\nobservant...uhm...whatever you are.\n\n\n\x0E\x01\x09\x04ÿ\xFF00Good thing I saved the best for last!\nThis one's a real showstopper, but it\nain't cheap. It'll cost ya <r<50 Rupees>>!\n[1]I'm in![2-]No, thanks.")
          							goto flw_245
          						}
          					  case 1:
/*<238>*/ 						printf("\x0E\x01\x09\x04\x14\x1215What's the deal, pal? You don't have\nenough Rupees, so you're getting a\nload of nothing from me.\n\n\x0E\x01\x09\x04ÿ\xFF00Find yourself <r<30 Rupees>>, then come\nand see me.")
/*<276>*/ 						zone_temp_flags[7 /* 0x1 80 */] = true;
          					}
          				  case 1:
/*<235>*/ 					printf("\x0E\x01\x09\x04\x14\x1215What're you being so stingy for?\nIt's only <r<30 Rupees>>. \n\n\n\x0E\x01\x09\x04ÿ\xFF00All right, whatever. Come see me if you\nchange your mind.")
/*<277>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				}
          			}
          		  case 1:
/*<259>*/ 			printf("Hey, pal. You still having problems\nwith them <r<mugs with the big shields>>?\n\n\n\x0E\x01\x09\x04\x15\x80BI got some<r< secret information>> here that\nwill make your life a whole lot easier.")
/*<260>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 253, 'param3': 12}
/*<253>*/ 			printf("But nothing in life is free, ya know?\n\x0E\x01\x09\x04ÿ\xFF09It's gonna cost ya some R-<pause0A>U-<pause0A>P-<pause0A>E-<pause0A>E-<pause0A>S.<pause0A>\nYep, <r<30 Rupees >>to be exact.\n[1]OK![2-]No, thanks.")
          			flw_225:
/*<225>*/ 			switch (choice(2)) {
          			  case 0:
/*<227>*/ 				check_item_flag(501, 30)
/*<228>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 72}) {
          				  case 0:
/*<267>*/ 					rupees += -30;
/*<230>*/ 					printf("\x0E\x01\x09\x04\x11\x809Thank you very much, pal! Listen up!\nThis is for your ears only. Don't go\nsquawking about it with every mug\nyou meet.\n\x0E\x01\x09\x04ÿ\xFF00Here's the deal... <pause14>The shields those\nlugs are carrying around? You can cut\nthem with your sword! What did I tell\nyou? Is that not top-notch info?\nWatch out for the creeps with the tough\niron shields, though\x2014you can't cut\nthem. \n[1]Got it, thanks! [2]What? Is that it?")
/*<240>*/ 					scene_flags[4 'Eldin Volcano'][112 /* 0xF 01 */] = true;
/*<231>*/ 					switch (choice(2)) {
          					  case 0:
/*<233>*/ 						printf("\x0E\x01\x09\x04\x15\x90BHeh heh... And I've got plenty more\ninfo where that came from. You\nknow you want to hear it.\n\n\x0E\x01\x09\x04ÿ\xFF00You willing to cough up...<pause14>another\n<r<30 Rupees>>?\n[1]You bet! [2-]No way.")
          						goto flw_234
          					  case 1:
/*<232>*/ 						printf("Yo! What's up with you giving me that\nface? You know, the \x201CI've heard it all\nbefore\" face.\n\n\x0E\x01\x09\x04\x15\x809That last tidbit was just the tip of the\niceberg, pal. Not that I ever seen one...\nI got something really juicy here for\nyou. Got another <r<30 Rupees>> on you?[1]Yep![2-]Nope.")
          						goto flw_234
          					}
          				  case 1:
/*<229>*/ 					printf("\x0E\x01\x09\x04\x14\x1215What's the deal, pal? You don't have\nenough Rupees, so you're getting a\nload of nothing from me.\n\n\x0E\x01\x09\x04ÿ\xFF00Find yourself <r<30 Rupees>>, then come\nand see me.")
/*<278>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				}
          			  case 1:
/*<226>*/ 				printf("\x0E\x01\x09\x04\x14\x1215What're you being so stingy for?\nIt's only <r<30 Rupees>>. \n\n\n\x0E\x01\x09\x04ÿ\xFF00All right, whatever. Come see me if you\nchange your mind.")
/*<279>*/ 				zone_temp_flags[7 /* 0x1 80 */] = true;
          			}
          		}
          	  case 1:
/*<222>*/ 		printf("\x0E\x01\x09\x04\x00\x01Yo, pal. This your idea of a break\nroom? Battling all them monsters\ngot ya a little run down, huh?\n\n\x0E\x01\x09\x04\x11\x900If those creeps with the <r<big shields>>\nare as tough as they are ugly, they\nmust be a real pain in the neck.\n\n\x0E\x01\x09\x04\x15\x80BSee, I got some<r< secret information>> that\nI'm sure will make your life easier.")
/*<258>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 257, 'param3': 12}
/*<257>*/ 		printf("\x0E\x01\x09\x04ÿ\xFF09Of course, nothing comes for free in\nthis day and age. You're gonna have\nto part with some R-<pause0A>U-<pause0A>P-<pause0A>E-<pause0A>E-<pause0A>S.\nThat spells Rupees, by the way.\nIt's all yours for <r<30 Rupees>>.\nWhaddya say?\n[1]Tell me! [2-]Nah.")
/*<224>*/ 		scene_flags[4 'Eldin Volcano'][108 /* 0xC 10 */] = true;
          		goto flw_225
          	}
          }

          void entrypoint_303_14() {
/*< 62>*/ 	start()
/*< 63>*/ 	printf("\x0E\x01\x05\x04Z\x00MAL-MAL-MALfunction! Zzrrt!\nToo...zzrrggt...damage...bzzzz...")
          }

          void entrypoint_303_31() {
/*< 99>*/ 	start()
/*<100>*/ 	printf("\x0E\x01\x05\x04Z\x00I am detecting extremely high\ntemperatures in this area. However,\nyour<y< Fireshield Earrings >>will allow for\nextended periods of exploration.")
          }

          void entrypoint_303_49() {
/*<280>*/ 	start()
/*<281>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaster Link, I detect\nno<r< water >>in the immediate vicinity.\n\n\nOf course, you will need a large basin\nto proceed past the impediment, but\nyou will also need <r<water>>. <pling>I recommend\nyou start with that task.")
/*<282>*/ 	scene_flags[5 'Eldin Volcano Summit'][115 /* 0xF 08 */] = true;
          }

          void entrypoint_303_15() {
/*< 64>*/ 	start()
/*< 65>*/ 	printf("\x0E\x01\x12\x04\x00dHEY! I can't use that, zzrrpt! You're\ngoing to have to walk!")
          }

          void entrypoint_303_32() {
/*<101>*/ 	start()
/*<102>*/ 	printf("\x0E\x01\x05\x04Z\x00I calculate the probability of finding\nthe final<r< sacred flame >>here at 90%.\nI recommend searching for flames.")
          }

          void entrypoint_303_16() {
/*< 66>*/ 	start()
/*< 67>*/ 	printf("\x0E\x01\x0B\x04\x00rBrrzt! Wait for me!")
          }

          void entrypoint_303_33() {
/*<103>*/ 	start()
/*<104>*/ 	printf("I am detecting malfunctions within the\nrobot. I recommend repairing it and\ntrying again.")
          }

          void entrypoint_303_50() {
/*<293>*/ 	start()
/*<294>*/ 	printf("\x0E\x01\x12\x04\x00\x0BA report, Master Link.\nThe transport robot is waiting for you\nat the base of the volcano.\n\nI recommend going up into the sky\nagain and returning to the base of\nthe volcano to guide the robot to\nthis location.")
/*<295>*/ 	temp_flags[29 /* 0x2 20 */] = true;
          }

          void entrypoint_303_17() {
/*< 68>*/ 	start()
/*< 69>*/ 	printf("\x0E\x01\x0B\x04\x00rI can't see you, brrrzt! Open your <r<map\n>>with \x0E\x02\x04\x02\x2CD and see where I am. Then\ncome get me, brzzzpt!")
          }

          void entrypoint_303_34() {
/*<105>*/ 	start()
/*<106>*/ 	printf("Do better this time, zzbrrrt!")
/*<199>*/ 	story_flags[723 /* us: 805A9B24 0x08, jp: 805ACDA4 0x08 */] = false;
          }

          void entrypoint_303_00() {
          	start()
/*<  1>*/ 	printf("Get moving, Master Shortpants!\nI'll be following right behind you, zrrt!")
          }

          void entrypoint_303_18() {
/*< 70>*/ 	start()
/*<196>*/ 	switch (random(3)) {
          	  case 0:
/*< 71>*/ 		printf("\x0E\x01\x0B\x04\x00rMonsters! Zrrrbt, are you going to\nhandle those or what?!")
          	  case 1:
/*<197>*/ 		printf("\x0E\x01\x0B\x04\x00rBzzzrt! Help! DANGER!")
          	  case 2:
/*<198>*/ 		printf("\x0E\x01\x0B\x04\x00rMonsters, zzzbrt! I can't stand\nmonsters!")
          	}
          }

          void entrypoint_303_35() {
/*<107>*/ 	start()
/*<108>*/ 	printf("If there's anything else I can do to be\nof assistance, zzzzrp, just call me!\nAnytime, zzzrbtzz!")
          }

          void entrypoint_303_01() {
/*<  2>*/ 	start()
/*<  6>*/ 	switch (story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */]) {
          	  case 0:
/*<  8>*/ 		printf("I have got a hunch there are still \n<y<Goddess Cubes >>on this mountain. \nYou should see if you can find them.")
          	  case 1:
/*<  3>*/ 		printf("\x0E\x01\x09\x04\x15\x1B09Oh, hey! We meet again. How have you\nbeen, bud?\n\n\nI rumbled over here 'cause I heard\nsomeone had spotted <y<Goddess Cubes\n>>in the area.\n\nYou may have already found some,\nbut I got a feeling there are some\nothers hidden away around here.\n\n\x0E\x01\x09\x04\x18\x17FFYou might think about searching for\nthem yourself when you get the time.")
/*<  9>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_303_19() {
/*< 72>*/ 	start()
/*< 74>*/ 	switch (random(3)) {
          	  case 0:
/*< 73>*/ 		printf("\x0E\x01\x0B\x04\x00rHEY! Just how long, zzrrt, do I have to\nwait for you? Press \x0E\x02\x04\x02\x2CD and use your\n<r<map >>to find me, brzzzt!")
          	  case 1:
/*< 75>*/ 		printf("\x0E\x01\x0B\x04\x00rWhy are you so, zzzrrrt, SLOW?\nPress \x0E\x02\x04\x02\x2CD to open your <r<map >>and\nconfirm my location!")
          	  case 2:
/*< 76>*/ 		printf("\x0E\x01\x0B\x04\x00rBrrzpt! What are you doing? Get over\nhere already! If you don't know where\nI am, press \x0E\x02\x04\x02\x2CD to open your <r<map>>, zzzrt!")
          	}
          }

          void entrypoint_303_36() {
/*<109>*/ 	start()
/*<213>*/ 	switch (story_flags[744 /* us: 805A9B29 0x01, jp: 805ACDA9 0x01 */]) {
          	  case 0:
/*<215>*/ 		set_camera(2, 0)
/*<216>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 49, 'next': 217, 'param3': 32}
/*<217>*/ 		make_actor_do_something(0, 49)
/*<214>*/ 		printf("")
/*<218>*/ 		story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = true;
          	  case 1:
/*<116>*/ 		set_camera(2, 0)
/*<209>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 49, 'next': 210, 'param3': 32}
/*<210>*/ 		make_actor_do_something(0, 49)
/*<110>*/ 		printf("\x0E\x01\x12\x04\x00dWhat's going on, brzzt? I almost blew\na rotor trying to slow myself during\nthat descent, zrbt... Anyway, this is\nwhere you wanted the water, right?\n<pause0A>WHAT?! THE SUMMIT? <pause0F>Why didn't\nyou say so from the start, bzzrt?\nI don't want to carry this thing back\nto the sky. IT'S HEAVY, BRZZZT!\nBzzzrt...zrrbt...tzzptrr.<pause0F>")
/*<114>*/ 		set_camera(1, 0)
/*<111>*/ 		printf("\x0E\x01\x12\x04\x00dThis place is, zrrrt, swarming with\nmonsters. Vrrrrrm...")
/*<115>*/ 		set_camera(3, 0)
/*<112>*/ 		printf("\x0E\x01\x12\x04\x00dI bust up enemies like a junkyard\nwrecker, zzizat! Too bad I've got\nmy mitts full with this basin, bzzz...")
/*<113>*/ 		printf("\x0E\x01\x12\x04\x00dHey, Master Shortpants! Since we\ncame all this way, let's play a little\ngame called \x201Cprotect the robot,\" bzzrt!\n\nHere's how it works\x2014I'll follow you up\nthe volcano, zzzrt, and you make sure\nnothing touches me. Got it? Good!")
/*<187>*/ 		printf("\x0E\x01\x12\x04\x00dYour job is simple, zzrrt! You make\nsure none of these monsters lays a\nclaw on me. NOT...ONE...CLAW!")
/*<211>*/ 		story_flags[744 /* us: 805A9B29 0x01, jp: 805ACDA9 0x01 */] = true;
/*<212>*/ 		story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = true;
          	}
          }

          void entrypoint_303_02() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaster, I have information for you.\nWith the enhanced capabilities of your\nsword, you are now able to use your\n<r<dowsing >>ability to find <y<Goddess Cubes>>. \nI have taken the liberty of registering\n<y<Goddess Cubes >>as <r<dowsing >>targets.\n<pling>Please use this ability as you deem\nnecessary.")
/*<  7>*/ 	story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */] = true;
/*<290>*/ 	open_dowsing_wheel(21)
          }

          void entrypoint_303_37() {
/*<117>*/ 	start()
/*<124>*/ 	switch (story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */]) {
          	  case 0:
/*<125>*/ 		printf("Too bad you came all this way only to\nget stopped dead in your tracks.\nIt's just not your lucky day, bud.\n\n\x0E\x01\x09\x04\x15\xDFFUh...<pause14>I get the feeling I'm forgetting\nsomething important...\n\n\nI think it's something my buddy told\nme once, but... <pause14>\x0E\x01\x09\x04\x00\x04Nope, can't remember.\n\n\n\x0E\x01\x09\x04\x09\x8FFOh well, back to the water. If you need\nlots of the wet stuff, you should head\nover to <r<Lake Floria>>. I think you'll find\nwhat you need.")
          		flw_141:
/*<141>*/ 		switch (story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */]) {
          		  case 0:
          		  case 1:
/*<138>*/ 			zone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	  case 1:
/*<118>*/ 		printf("\x0E\x01\x09\x04\x11\x801Well, look who we have here! You still\nlooking for your friend?\n\n\n\x0E\x01\x09\x04\x09\x8FFOf course, I'm on the hunt for \ntreasure. Heard there were some fancy\nruins out this way...so here I am!\n\n\x0E\x01\x09\x04\x15\xDFFBelieve it or not, I haven't found a\nthing. Got any information for me?\n[1]Want to know?[2]I'm not telling!")
/*<119>*/ 		switch (choice(2)) {
          		  case 0:
/*<120>*/ 			printf("\x0E\x01\x09\x04\x11\x900You know something? Spill it!\nWe're friends, right?")
          			flw_122:
/*<122>*/ 			printf("\x0E\x01\x09\x04\x09\x80EWhat? There's some fire blocking your\npath? Why don'tcha just pour some\nwater on it and move on?\n\n\x0E\x01\x09\x04\x15\x800Ya need how much water? Whoa...\nI get it. <pause14>So the water we got here's not\nenough, right?\n\n\x0E\x01\x09\x04\x09\x8FFYou know, I hear the little water we\ngot here is fed by some far-off water\nsource called <r<Lake Floria<pling>>>.\n\n\x0E\x01\x09\x04\x11\x8FFSo a buddy of mine went huntin' for\ntreasure in <b<Faron Woods>>, and he told\nme he used the waterways there to find\nhis way back home.\n\x0E\x01\x09\x04\x09\x8FFHe tells me Lake Floria was just about\nthe biggest lake you could imagine. Bet\nif you checked it out, there'd be enough\nwater there to solve your dilemma.")
/*<123>*/ 			story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */] = true;
          			goto flw_141
          		  case 1:
/*<121>*/ 			printf("\x0E\x01\x09\x04\x14\x120ADon't get all tight lipped on me now!\nWe're friends, right? Out with it!")
          			goto flw_122
          		}
          	}
          }

          void entrypoint_303_03() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf("Quench my thirst to\nclear your path.")
          }

          void entrypoint_303_20() {
/*< 77>*/ 	start()
/*< 78>*/ 	printf("\x0E\x01\x0B\x04\x00rIt's about time, bzrrt! Don't leave me\nhanging like that.")
          }

          void entrypoint_303_38() {
/*<126>*/ 	start()
/*<135>*/ 	switch (scene_flags[114 /* 0xF 04 */]) {
          	  case 0:
/*<136>*/ 		printf("\x0E\x01\x12\x04\x00\x0BMaster Link, I have a\nstatus report for you. \x0E\x01\x12\x04\x00\x01The flames that\nimpede your progress have not yet been\nextinguished. \nShall I register the <b<Water Dragon>>'s\nvessel as a <g<dowsing >>target?\n[1]Yes![2-]Not yet.")
          		flw_139:
/*<139>*/ 		switch (choice(2)) {
          		  case 0:
/*<128>*/ 			story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = true;
/*<129>*/ 			story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<130>*/ 			story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<131>*/ 			story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<132>*/ 			story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<133>*/ 			story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<289>*/ 			printf("\x0E\x01\x12\x04\x00\x05Master, I have completed registering\nthe <b<Water Dragon>>'s vessel as a <g<dowsing\n>>target.<pling>")
/*<288>*/ 			open_dowsing_wheel(13)
          			flw_134:
/*<134>*/ 			scene_flags[5 'Eldin Volcano Summit'][114 /* 0xF 04 */] = true;
/*<137>*/ 			zone_temp_flags[0 /* 0x1 01 */] = false;
          		  case 1:
/*<140>*/ 			printf("\x0E\x01\x12\x04\x00\x05Understood, Master. I will not proceed\nwith registration.")
          			goto flw_134
          		}
          	  case 1:
/*<127>*/ 		printf("A report, \x0E\x01\x12\x04\x00\x0BMaster Link.\nI recommend following the <b<Mogma>>'s\nadvice and returning to <r<Lake Floria>>.\n\nI also have some advice pertinent to\nthe situation. It concerns a method\nfor transporting water from the lake...<pause0F>\nI suggest you visit the <r<Water Dragon>>.<pling>\nI conjecture that you can transport\na large volume of water using the <r<water\nbasin>> that the previously injured\nWater Dragon recuperated in.")
/*<296>*/ 		printf("Would you like me to analyze previous\ndata and register the vessel as a\n<r<dowsing>> target?\n[1]Yes![2-]Not yet.")
          		goto flw_139
          	}
          }

          void entrypoint_303_04() {
/*< 12>*/ 	start()
/*< 14>*/ 	switch (story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */]) {
          	  case 0:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x15\x1B09Hey! Are you here looking for\n<y<Goddess Cubes>> too? Nice work getting \npast that hot spot back there, bud.\n\n\x0E\x01\x09\x04ÿ\xFF00The heat back there did not bother\nme a bit, but these flames right\nhere are another matter.")
          		flw_17:
/*< 17>*/ 		printf("\x0E\x01\x09\x04\x18\x17FFI wish there was something we could do\nto put out these flames...")
          	  case 1:
/*< 13>*/ 		printf("\x0E\x01\x09\x04\x15\x1B09Oh, hey! We meet again. How have you\nbeen, bud?\n\n\n\x0E\x01\x09\x04\x16\xBFFI rumbled over here 'cause I heard\nsomeone had spotted some<y< Goddess\nCubes >>in the area.\n\n\x0E\x01\x09\x04\x00\xB00I have got a hunch they may be down in\nthat direction, but...this flaming\nwall of fire is blocking the way!")
/*< 16>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_17
          	}
          }

          void entrypoint_303_21() {
/*< 79>*/ 	start()
/*< 80>*/ 	printf("\x0E\x01\x0B\x04\x00rBzzzort! What do you think you're\ndoing?")
          }

          void entrypoint_303_39() {
/*<148>*/ 	start()
/*<150>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*<151>*/ 		printf("\x0E\x01\x09\x04\x0C\x405If I'm going to retire, I want to live in\na place up high with a glorious view.\n\n\n\x0E\x01\x09\x04\x0C\xDFFI've lived most of my life underground,\nit's true, but I still gaze up at that sky.\nIt's so...big and blue and fluffy.\n\n\x0E\x01\x09\x04\x09\x906If I had my way, I'd like to come back\nin my next life as a bird and spend my\ntime soaring the wild blue yonder.")
          	  case 1:
/*<149>*/ 		printf("\x0E\x01\x09\x04\x0B\xC07Oh, you again! It's been a looong time,\nbut I remember that face.\n\n\n\x0E\x01\x09\x04\x0B\x506Heh heh heh. How're those gloves I\ninvented treatin' ya? Are they up to\nyour satisfaction?\n\nHow've I been? Awful nice of ya to ask.\nLemme see...\n\n\n\x0E\x01\x09\x04\x0C\x405I've been searchin' high and low for\nnew treasure, but I've come up empty\npawed.\n\nI gotta say, I'm tired of diggin' after\nmy fortune in this blast furnace.\n\n\n\x0E\x01\x09\x04\x09\x908I'm startin' to think it's time I gave\nup this life of treasure huntin' and\nsettled down to enjoy my twilight\nyears.")
/*<152>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          	}
          }

          void entrypoint_303_05() {
/*< 23>*/ 	start()
/*< 21>*/ 	switch (scene_flags[106 /* 0xC 04 */]) {
          	  case 0:
/*< 22>*/ 		printf("\x0E\x01\x09\x04\x18\x1700Well, I know if you head out of here\nand hang a right, you will find this\nnice, refreshing <r<spring>>, but...\n\nYeah, I am not sure what you should\ndo, to be honest.")
          	  case 1:
/*< 20>*/ 		switch (scene_flags[105 /* 0xC 02 */]) {
          		  case 0:
/*< 18>*/ 			printf("\x201CQuench my thirst\"? Hmm... That\nreminds me. If you head back out of\nhere and turn right, you will end up\noutside.\nI found a <r<spring >>there. <pling>Let me tell you,\nbud, that water was dee-licious!\n\n\n\x0E\x01\x09\x04\x18\x1705No idea how you would bring it in here,\nthough. I doubt those weird-looking\nfrog beasts would carry it for you.\n<pause0F>Got any ideas?")
/*< 19>*/ 			scene_flags[5 'Eldin Volcano Summit'][106 /* 0xC 04 */] = true;
          		  case 1:
/*< 24>*/ 			printf("\x0E\x01\x09\x04\x18\x17FFI wish there was something we could do\nto put out these flames...")
          		}
          	}
          }

          void entrypoint_303_22() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf("\x0E\x01\x0B\x04\x00rHEY! Keep that up, and you're going to\nbreak something, zzbrrt!")
          }

          void entrypoint_303_06() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf("\x0E\x01\x09\x04\x17\x1908Hey, the flames are out! Now we can\nget through here.")
/*<153>*/ 	{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6911, 'next': 28, 'param3': 13}
/*< 28>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 0, 'next': 27, 'param3': 14}
/*< 27>*/ 	story_flags[468 /* us: 805A9B0F 0x40, jp: 805ACD8F 0x40 */] = true;
/*<142>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_303_23() {
/*< 83>*/ 	start()
/*< 84>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaster, the robot is waiting at the\nvolcano. I suggest you return there.")
          }

          void entrypoint_303_40() {
/*<155>*/ 	start()
/*<157>*/ 	switch (story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */]) {
          	  case 0:
          		flw_165:
/*<165>*/ 		switch (scene_flags[81 /* 0xB 02 */]) {
          		  case 0:
/*<166>*/ 			printf("\x0E\x01\x09\x04\x1A\x30DElder...I'm gonna do ya proud\x2014just\nwait and see. I hope ya watch over\nme from wherever it is you are now!")
          		  case 1:
/*<158>*/ 			printf("\x0E\x01\x09\x04\x1C\x180FWh-wha-what? The elder got...\nlaunched up somewhere?\nWhere'd he go, then?\n[1]Up in the sky![2]Beyond...")
/*<161>*/ 			switch (choice(2)) {
          			  case 0:
/*<162>*/ 				printf("\x0E\x01\x09\x04\x1A\x2011The sky? Up in the big, blue stuff, eh?\n\n\n\nOh... \x0E\x01\x09\x04\x1B\x407Well, <pause14>he always was talkin' about\nhow much he loved the sky.\n\n\nI bet he's up there now digging around\nin the clouds for treasure.")
          				flw_164:
/*<164>*/ 				scene_flags[4 'Eldin Volcano'][81 /* 0xB 02 */] = true;
          			  case 1:
/*<163>*/ 				printf("\x0E\x01\x09\x04\x1A\x2011Beyond?\n\n\n\nUh...\x0E\x01\x09\x04\x1B\x2207beyond? <pause14>Whaddya mean\n\x201Cbeyond\"? Are ya telling me he's\n\x201Cgone\" gone?\n\nI mean, we all gotta go sometime, \nbut, wow...")
          				goto flw_164
          			}
          		}
          	  case 1:
/*<186>*/ 		switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          		  case 0:
          			goto flw_165
          		  case 1:
/*<160>*/ 			switch (scene_flags[81 /* 0xB 02 */]) {
          			  case 0:
/*<176>*/ 				switch (zone_temp_flags[4 /* 0x1 10 */]) {
          				  case 0:
/*<177>*/ 					printf("\x0E\x01\x09\x04\x1B\x2207Traveling back and forth between here\nand the sky. The elder is soooo cool!")
          				  case 1:
/*<174>*/ 					printf("\x0E\x01\x09\x04\x1A\x2011What do you mean, the elder's back?\n\n\n\n\x0E\x01\x09\x04\x1B\x2207Are you saying he can travel between\nhere and the sky? That is one amazing\nguy, I tell you.")
/*<175>*/ 					zone_temp_flags[4 /* 0x1 10 */] = true;
          				}
          			  case 1:
/*<167>*/ 				switch (zone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<172>*/ 					switch (zone_temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*<173>*/ 						printf("\x0E\x01\x09\x04\x00\x15Twilight years, eh? Well, if that's\nwhat the elder wants, help an old\nMogma out, will ya?")
          					  case 1:
/*<286>*/ 						switch (story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */]) {
          						  case 0:
/*<170>*/ 							printf("\x0E\x01\x09\x04\x1A\x2001Hey, pal, did ya go and visit the elder?\nHow's he doin'?\n\n\n\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x1A\x2011What? Twilight years?\n\n\n\nUh...\x0E\x01\x09\x04\x00ÿwhat are ya talkin' about?\nIs \x201Ctwilight years\" some sort of\ncode name for a big treasure?\n\n\x0E\x01\x09\x04\x1B\x1E15I gotta tell ya, I've never heard of such\na thing.\n\n\nBut if that's what the elder wants help\nwith, go on and help him out, will ya?")
          							flw_171:
/*<171>*/ 							zone_temp_flags[3 /* 0x1 08 */] = true;
          						  case 1:
/*<287>*/ 							printf("\x0E\x01\x09\x04\x1B\x2201Whoa! It's my old pal! How've you\nbeen?\n\n\nMe? Ah, my claws are sharp, and my\nnose is tuned in to treasure! I'm great!\n\n\n\x0E\x01\x09\x04\x00\x02One thing's got me worried, though.\nThe tribal elder's been acting odd since\ngoing to those ruins. He's just not\nhimself.\n\x0E\x01\x09\x04\x1B\x22FFYou talked to him earlier, right?\nHow was he doing?\n\n\n\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x1A\x2011What? Twilight years?\n\n\n\nUh...\x0E\x01\x09\x04\x00ÿwhat are you talking about?\nIs \x201Ctwilight years\" some sort of code\nname for treasure?\n\n\x0E\x01\x09\x04\x1B\x1E15I gotta tell you, I've never heard of\nsuch a thing. And I know a thing or two\nabout treasure.\n\nBut if that's what the elder wants, help\nhim out, will ya?")
/*<292>*/ 							story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */] = true;
          							goto flw_171
          						}
          					}
          				  case 1:
/*<168>*/ 					switch (story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */]) {
          					  case 0:
/*<169>*/ 						printf("\x0E\x01\x09\x04\x1B\x50A<b<Guld>>'s wanderin' around over there\nsomewhere. Go see him! Chat with him\na bit, ya know?\n\nIt might cheer him up to see a familiar\nface.")
          					  case 1:
/*<156>*/ 						printf("\x0E\x01\x09\x04\x1B\x2201Whoa there! It's my old pal! How ya\nbeen, old pal?\n\n\nMe? Ah, my claws are sharp, and my\nnose is tuned in to treasure! Yep, I'd\nsay I'm great.\n\n\x0E\x01\x09\x04\x00\x02One thing's got me worried, though.\nSee, our elder, <b<Guld>>, has been actin'\nkinda odd since going to those ruins.\n\n\x0E\x01\x09\x04\x1B\x230AWould ya go and see<b< Guld>>? He's over\nthataway somewhere, and I know he'd\nbe happy to see your mug.")
/*<159>*/ 						story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */] = true;
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_303_07() {
/*< 29>*/ 	start()
/*< 31>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
          		flw_32:
/*< 32>*/ 		printf("Hate to ask you this, bud, but could\nyou do the fire-extinguisher routine\nagain?")
          	  case 1:
/*< 30>*/ 		printf("\x0E\x01\x09\x04\x16\x1E56More flames... This is starting to burn\nme up...")
/*< 33>*/ 		temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_32
          	}
          }

          void entrypoint_303_24() {
/*< 85>*/ 	start()
/*< 86>*/ 	printf("\x0E\x01\x12\x04\x00dWhere have you been, zzzrbt! Get me\nto the top of the volcano! Now, brrzzt!")
          }

          void entrypoint_303_41() {
/*<178>*/ 	start()
/*<180>*/ 	switch (zone_temp_flags[5 /* 0x1 20 */]) {
          	  case 0:
/*<181>*/ 		printf("\x0E\x01\x09\x04\x1B\x2215The deal with <b<Plats >>is he only shows\nsome backbone when he's off\nhunting treasure.")
          	  case 1:
/*<179>*/ 		printf("\x0E\x01\x09\x04\x1A\x200FHey, it's you! That guy from before...<pause0F>\n\n\n\n\x0E\x01\x09\x04\x1B\x2209Heh heh heh... Yeah, that was\npretty embarrassing.\n\n\nWe're all good now, though, because\nmy pal found out about it.\n\n\n\x0E\x01\x09\x04\x1B\x1EFFTruth is he got captured once too.\nGuess that makes us even. Nothin' for\neither of us to worry about.\n\n\x0E\x01\x09\x04\x1A\xA12Yeah, anyway, you seen <b<Plats>> around\nanywhere?\n[1]He was over there.[2]Nope.")
/*<183>*/ 		switch (choice(2)) {
          		  case 0:
/*<184>*/ 			printf("\x0E\x01\x09\x04\x1B\xA12Oh, really? We're all cool, then.\n\n\n\nI just hadn't seen his ugly mug in a\nwhile and, well, you know...\n\n\n\x0E\x01\x09\x04\x1B\x160FI thought maybe he'd gone and gotten\nhimself all tied up again.\n\n\n\x0E\x01\x09\x04\x1B\x16FFLet me tell ya, that guy's like a\ntrouble magnet!")
          			flw_182:
/*<182>*/ 			zone_temp_flags[5 /* 0x1 20 */] = true;
          		  case 1:
/*<185>*/ 			printf("\x0E\x01\x09\x04\x1B\x2207That dirt-brain... <pause14>I bet he's off on some\nsolo treasure-hunting dig.\n\n\nHe knows he's not supposed to be out\nby himself. This place is dangerous!\n\n\n\x0E\x01\x09\x04\x1B\x09What am I supposed to do, huh?\nI guess that's what you get when you're\n<b<treasure hunters>>. Bunch of guys who\ndon't know when to quit.\nIf you happen to run into <b<Plats>>, give\nhim my best, will you?")
          			goto flw_182
          		}
          	}
          }

          void entrypoint_303_08() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf("\x0E\x01\x09\x04\x17\x1908Hey! Nice work, bud. Now we are \ngetting somewhere!")
/*<154>*/ 	{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6911, 'next': 37, 'param3': 13}
/*< 37>*/ 	{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 0, 'next': 36, 'param3': 14}
/*< 36>*/ 	story_flags[469 /* us: 805A9B0E 0x02, jp: 805ACD8E 0x02 */] = true;
/*<143>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_303_25() {
/*< 87>*/ 	start()
/*< 88>*/ 	printf("\x0E\x01\x12\x04\x00dDon't leave me! Press \x0E\x02\x04\x02\x2CD to open your\n<r<map >>to find me, zzrrt!\x0E\x01\x11\x02\x2CD")
          }

          void entrypoint_303_42() {
/*<188>*/ 	start()
/*<190>*/ 	switch (scene_flags[82 /* 0xB 04 */]) {
          	  case 0:
/*<191>*/ 		printf("\x0E\x01\x09\x04\x0D\x509All right, then. Where's the next place\nto hunt for riches, eh?")
          	  case 1:
/*<189>*/ 		printf("\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x0E\x1008Hey, pal! You're still alive!\n\n\n\n\x0E\x01\x09\x04\x11\x110BAnd by the looks of it, ya got all your\nloot back too. I knew you had it in ya.\n\n\nSo, uh...<pause14>did ya find any treasure?\n[1]Tons![2]Not a thing...")
/*<192>*/ 		switch (choice(2)) {
          		  case 0:
/*<193>*/ 			printf("\x0E\x01\x09\x04\x0E\x505Seriously? I'm soooo jealous!\n\n\n\n\x0E\x01\x09\x04\x0E\x1F0ABut the world's a big place, ya know?\nAnd I'm sure there's more treasure\nout there for the swiping.\n\nYeah, I'm not sitting on my tail waiting\nfor it to fall into my lap! You know\nwho's going to find all the loot next\ntime? Me! This guy! That's who!")
          			flw_195:
/*<195>*/ 			scene_flags[4 'Eldin Volcano'][82 /* 0xB 04 */] = true;
          		  case 1:
/*<194>*/ 			printf("\x0E\x01\x09\x04\x0E\x40AWhaaat? Ya didn't find much of\nanything? Aw, that's too bad, pal.\n\n\n\x0E\x01\x09\x04\x0F\x508Don't get all sad and weepy on me,\nthough. The world's a big place, and\nit's filled with treasure!")
          			goto flw_195
          		}
          	}
          }

          void entrypoint_303_09() {
/*< 38>*/ 	start()
/*< 45>*/ 	switch (story_flags[173 /* us: 805A9AE2 0x10, jp: 805ACD62 0x10 */]) {
          	  case 0:
/*< 52>*/ 		switch (scene_flags[111 /* 0xC 80 */]) {
          		  case 0:
/*< 53>*/ 			printf("I am off to continue my research, bud.\nI am sure I will bump into you again!")
          		  case 1:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x18\x1702Well, how was it? What did you find?\n[1]Traps![2]Monsters!")
/*< 47>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_49:
/*< 49>*/ 				switch (story_flags[248 /* us: 805A9AF7 0x04, jp: 805ACD77 0x04 */]) {
          				  case 0:
/*< 50>*/ 					printf("\x0E\x01\x09\x04\x16\x1E56Is that so? Hmm... Guess I will leave\nthe exploring past here to you, bud.\n\n\n\x0E\x01\x09\x04\x08\xBFFI am going to head out to another\nlocation and continue my research.\nGive me a holler if you see me again.")
          					flw_51:
/*< 51>*/ 					scene_flags[5 'Eldin Volcano Summit'][111 /* 0xC 80 */] = true;
          				  case 1:
/*< 48>*/ 					printf("\x0E\x01\x09\x04\x16\x1E56Is that so? Hmm... Guess I will leave\nthe exploring past here to you, bud.\n\n\n\x0E\x01\x09\x04\x08\xBFFBy the way, I have got a hunch there is\na <y<Goddess Cube >>somewhere nearby.\n\n\nAnd my hunches are usually spot on,\nso you should take a good look around.")
          					goto flw_51
          				}
          			  case 1:
          				goto flw_49
          			}
          		}
          	  case 1:
/*< 43>*/ 		switch (story_flags[187 /* us: 805A9AE9 0x04, jp: 805ACD69 0x04 */]) {
          		  case 0:
/*< 44>*/ 			printf("\x0E\x01\x09\x04\x17\x1908You are something else, bud! There is\nnothing you cannot do!\n\n\n\x0E\x01\x09\x04\x08\xBFFYou go ahead on in! You have earned\nthe right to blaze this trail.")
          		  case 1:
/*< 40>*/ 			switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
          			  case 0:
/*<284>*/ 				switch (temp_flags[15 /* 0x0 80 */]) {
          				  case 0:
/*<285>*/ 					printf("\x0E\x01\x09\x04\x18\x1707Lots of<r< water >>and <r<something to carry it\naround in>>... Any bright ideas on where\nto find those things, bud?")
          				  case 1:
/*< 41>*/ 					printf("\x0E\x01\x09\x04\x18\x1707How are we supposed to give this fellow\nenough <r<water>>? Whatever it is, it is\ngoing to have to be one<r< big container>>...\n\n\x0E\x01\x09\x04\x16\x1EFFYou have been adventuring all over the\nplace, right? You got any ideas?")
/*<283>*/ 					temp_flags[15 /* 0x0 80 */] = true;
          				}
          			  case 1:
/*< 39>*/ 				printf("Do you see this, bud? Talk about\nintriguing! We are definitely off the\nmap here.\n\n\x0E\x01\x09\x04\x17\x1908This does not feel like<y< Goddess Cube\n>>stuff to me! I bet there is something\n<r<super important >>hidden around here!")
/*<144>*/ 				set_camera(4, 0)
/*<146>*/ 				printf("\x0E\x01\x09\x04\x16\x1EFFAll I can say is that is a big frog with\na big thirst. I do not think the amount\nof water one of your little <y<bottles >>can\nhold is going to cut it this time.")
/*<145>*/ 				set_camera(-1, 0)
/*<147>*/ 				printf("\x0E\x01\x09\x04\x00\x07Hmmm...<pause0F>\x0E\x01\x09\x04\x18\x1700 You will have to have a<r< big\ncontainer >>to hold the water needed\nfor this job. <pling>Got anything like that?\n\n\x0E\x01\x09\x04\x16\x1EFFAnd speaking of which, where are you\ngoing to get all the<r< water>>? I gotta\nsay, I am pretty much stumped.")
/*< 42>*/ 				story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_303_26() {
/*< 89>*/ 	start()
/*< 90>*/ 	printf("You want me to pour the water on this?\nNo problem, zzzbrt!")
          }

          void entrypoint_303_43() {
/*<201>*/ 	start()
/*<202>*/ 	printf("We have arrived at Eldin Volcano.\n\n\n\nYou can use your <r<dowsing>> ability to\nlocate the gate to the trial. You must\npass this trial in order to locate the\nsacred flame.")
          }

