          void entrypoint_006_209() {
/*< 32>*/ 	start()
/*< 33>*/ 	switch (story_flags[463 /* us: 805A9B0F 0x01, jp: 805ACD8F 0x01 */]) {
          	  case 0:
/*< 34>*/ 		printf("Unfortunately, she has now been led\naway by an unknown individual and\nhas already moved to another area.\n\nAs you did at <b<Skyview Spring>>,\nI recommend seeking guidance from\nthe goddess statue located within\nthe <b<Earth Spring>>.<entrypoint_296>")
          	  case 1:
/*< 35>*/ 		printf("The probability of recovering Zelda\nunharmed is decreasing rapidly.\nYou must find her as soon as possible.<entrypoint_296>")
          	}
          }

          void entrypoint_006_243() {
/*< 61>*/ 	start()
/*< 62>*/ 	switch (story_flags[362 /* us: 805A9B03 0x01, jp: 805ACD83 0x01 */]) {
          	  case 0:
/*< 63>*/ 		printf("However, in order to aid Levias,\nyou will need to learn the <g<Spiral\nCharge >>flight maneuver from\n<b<Instructor Owlan>>.<entrypoint_296>")
          	  case 1:
/*< 64>*/ 		printf("<b<Instructor Owlan >>knows a great deal\nabout Levias. I recommend that you\nask him for more information about\nthis great spirit.<entrypoint_296>")
          	}
          }

          void entrypoint_006_226() {
/*< 65>*/ 	start()
/*< 66>*/ 	switch (story_flags[157 /* us: 805A9AE0 0x08, jp: 805ACD60 0x08 */]) {
          	  case 0:
/*< 67>*/ 		printf("Using the <y<Clawshots>>, you have managed\nto enter the <b<Lanayru Sand Sea>>.\nI suggest you search the area for\nclues leading to the next sacred flame.<entrypoint_296>")
          	  case 1:
/*< 68>*/ 		printf("There is a 96% chance that you can \nreach new locations within <b<Lanayru\nProvince>> using the <y<Clawshots>> you got\nfrom the <r<trial >>in the <b<Lanayru Desert>>.<entrypoint_296>")
          	}
          }

          void entrypoint_006_244() {
/*< 55>*/ 	start()
/*< 56>*/ 	switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          	  case 0:
/*< 57>*/ 		printf("However, Levias is behaving in a highly\naggressive manner. It is impossible to\ntalk with him in this state.\n\nI suggest you utilize the Spiral Charge\nto dislodge the foreign objects\nattached to him.<entrypoint_296>")
          	  case 1:
/*< 60>*/ 		switch (story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */]) {
          		  case 0:
/*< 58>*/ 			printf("I calculate a 90% chance that <b<Levias\n>>will appear if you take him an\noffering of the <y<pumpkin soup >>he\nenjoys consuming.\nTo this end, I suggest you take the\npumpkin soup to the small island with\nthe <r<rainbow>> inside the <b<thunderhead>>.<entrypoint_296>")
          		  case 1:
/*< 59>*/ 			printf("There is an 85% chance that talking\nwith the owner of the Lumpy Pumpkin\nwill yield information that will aid\nyour search for Levias.<entrypoint_296>")
          		}
          	}
          }

          void entrypoint_006_296() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf("Current Session Play Time: <r<\x0E\x02\x03\x06\x00\x00\x2CD\xFF1A<numeric arg1(2)>>>\nTotal Play Time: <r<<numeric arg2(2)>>><r<\xFF1A\x0E\x02\x03\x06\x00\x03\x2CD>>\nThis concludes my analysis.")
          }

          void entrypoint_006_227() {
/*< 77>*/ 	start()
/*< 78>*/ 	switch (story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */]) {
          	  case 0:
/*< 80>*/ 		printf("I advise you to take the sea chart\nyou've obtained back to the robot\ncaptain.<entrypoint_296>")
          	  case 1:
/*< 79>*/ 		printf("To take back the ship, you will first\nneed to travel to <b<Skipper's Retreat>>\nand obtain a sea chart.<entrypoint_296>")
          	}
          }

          void entrypoint_006_248() {
/*<  2>*/ 	start()
/*<  3>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<  4>*/ 		switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          		  case 0:
/*<  5>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
          			  case 1:
/*<  6>*/ 				printf("You have learned two parts of the <r<Song\nof the <r<<r<Hero<r<<r<>>. Your next move should be\nto seek out the dragon who rules over\n<b<Lanayru Province>> as fast as possible.\n[1]And after that?[2-]Got it.")
          				flw_16:
/*< 16>*/ 				switch (choice(2)) {
          				  case 0:
/*< 17>*/ 					printf("When you have collected three parts\nof the Song of the Hero, return to\nthe great sky spirit, <b<Levias>>, and\ncomplete the Song of the Hero.\nIf the information you've gathered is\naccurate, doing this will open the path\nto the <y+<Triforce>>.\n\nShould you go on to successfully obtain\nthe <y+<Triforce>>, you must use its power to\nvanquish <b<Demise>>.\n\nThis is not only your ultimate goal but\nalso your destiny, \x0E\x01\x12\x04\x00\x02Master.<entrypoint_296>")
          				  case 1:
          				}
          			}
          		  case 1:
/*<  7>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*<  8>*/ 				printf("You have learned two parts of the <r<Song\nof the <r<<r<Hero<r<<r<>>. Your next move should be\nto seek out the dragon who rules over\n<b<Eldin Province>> as fast as possible.\n[1]And after that?[2-]Got it.")
          				goto flw_16
          			  case 1:
/*<  9>*/ 				printf("You have learned one part of the <r<Song\nof the <r<<r<Hero<r<<r<>>. To find the other parts,\nseek out the dragons who rule over the\n<b<Eldin and Lanayru Provinces>>.\n[1]And after that?[2-]Got it.")
          				goto flw_16
          			}
          		}
          	  case 1:
/*< 10>*/ 		switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          		  case 0:
/*< 11>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 15>*/ 				printf("You have learned two parts of the <r<Song\nof the <r<<r<Hero<r<<r<>>. Your next move should\nbe to seek out the dragon who rules\nover <b<Faron Province>> as fast as possible.\n[1]And after that?[2-]Got it.")
          				goto flw_16
          			  case 1:
/*< 12>*/ 				printf("You have learned one part of the <r<Song\nof the <r<<r<Hero<r<<r<>>. To find the other parts,\nseek out the dragons who rule over the\n<b<Faron and Lanayru Provinces>>.\n[1]And after that?[2-]Got it.")
          				goto flw_16
          			}
          		  case 1:
/*< 13>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 14>*/ 				printf("You have learned one part of the <r<Song\nof the <r<<r<Hero<r<<r<>>. To find the other parts,\nseek out the dragons who rule over the\n<b<Faron and Eldin Provinces>>.\n[1]And after that?[2-]Got it.")
          				goto flw_16
          			  case 1:
          			}
          		}
          	}
          }

          void entrypoint_006_249() {
/*< 18>*/ 	start()
/*< 19>*/ 	printf("I recommend returning to <b<Levias>>, the \ngreat sky spirit, to hear the final part\nand complete the Song of the Hero.\n[1]And after that?[2-]Got it.")
/*< 20>*/ 	switch (choice(2)) {
          	  case 0:
/*< 21>*/ 		printf("I infer the completed Song of the\nHero will open a path to the Triforce.\n\n\nShould you go on to successfully obtain\nthe <y+<Triforce>>, you must use its power to\nvanquish <b<Demise>>.\x0E\x01\x12\x04\x00\x02 \n\nDoing so is your ultimate goal and your\ndestiny, \x0E\x01\x12\x04\x00\x02Master.")
          	  case 1:
          	}
          }

          void entrypoint_006_217() {
/*< 36>*/ 	start()
/*< 84>*/ 	switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          	  case 0:
/*< 85>*/ 		printf("By rotating the windmills to face the\nLight Tower, you have revealed a\nstructure hidden atop the tower.\nI advise you to investigate it.<entrypoint_296>")
          	  case 1:
/*< 82>*/ 		switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          		  case 0:
/*< 37>*/ 			printf("There is an 80% chance that one of\nthe <r<two whirling sails>> we seek is the\nwindmill repaired by <b<Jakamar>>.<entrypoint_296>")
          		  case 1:
/*< 81>*/ 			switch (story_flags[1108 /* us: 805A9B54 0x04, jp: 805ACDD4 0x04 */]) {
          			  case 0:
/*< 83>*/ 				printf("Although a connection with the two\nsails is uncertain, there is an 85%\nchance that the object you just found\nis a <r<propeller>> from a Skyloft windmill.\nI recommend guiding the robot from\nthe Scrap Shop back to Skyloft while\nhe carries the alleged propeller.<entrypoint_296>")
          			  case 1:
/*< 39>*/ 				switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          				  case 0:
/*< 40>*/ 					printf("Although a connection with the two\nsails is not 100% certain, it is clear that\na <r<propeller >>from a Skyloft windmill\nhas fallen below the clouds.\nIt is possible to locate the propeller\nusing your <g<dowsing >>ability.\n\n\nOnce you have located it, you can\nget the robot you reactivated in the\nScrap Shop to carry it back to\nSkyloft for you.<entrypoint_296>")
          				  case 1:
/*< 41>*/ 					switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          					  case 0:
/*< 42>*/ 						printf("Although a connection with the two\nsails is not 100% certain, it is clear that\na <r<propeller >>from a Skyloft windmill\nhas fallen below the clouds.\nI recommend you look for a way to\nretrieve this propeller.<entrypoint_296>")
          					  case 1:
/*< 38>*/ 						printf("Although the meaning of this phrase is\nunclear, I recommend that you search\naround Skyloft for two things that\ncould be construed as whirling sails.<entrypoint_296>")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_006_200() {
          	start()
/*<  1>*/ 	printf("To search for <b<Zelda>>, I recommend you\n<g<dive>> into the <r<column of light >>in the\nclouds and fall to the ground below.\n\nThe column of light is to the south of\n<b<Skyloft>>.<entrypoint_296>")
          }

          void entrypoint_006_201() {
/*< 22>*/ 	start()
/*< 23>*/ 	switch (story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */]) {
          	  case 0:
/*< 24>*/ 		printf("I recommend you follow the advice of\nthe old woman at the <b<Sealed Temple \n>>and head to <b<Faron Woods>>.<entrypoint_296>")
          	  case 1:
/*< 25>*/ 		printf("I've detected remnants of civilization\nhere on the surface. I advise you to\nfirst explore the area near where you\ntouched down.<entrypoint_296>")
          	}
          }

          void entrypoint_006_236() {
/*< 47>*/ 	start()
/*< 48>*/ 	switch (story_flags[187 /* us: 805A9AE9 0x04, jp: 805ACD69 0x04 */]) {
          	  case 0:
/*< 49>*/ 		printf("I've confirmed a very large structure\npositioned atop the volcano's summit.\nI recommend you explore it.<entrypoint_296>")
          	  case 1:
/*< 50>*/ 		printf("To extinguish the wall of fire blocking\nyour path beyond the summit, you need\nto transport the giant <r<water basin >>used\nby the Water Dragon.<entrypoint_296>")
          	}
          }

          void entrypoint_006_202() {
/*< 26>*/ 	start()
/*< 27>*/ 	switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          	  case 0:
/*< 71>*/ 		switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          		  case 0:
/*< 72>*/ 			printf("I recommend that you climb onto\n<b<Bucha>>'s back and take the Kikwi\nheirloom.")
          		  case 1:
/*< 28>*/ 			printf("If we can locate all of the Kikwis\nscattered throughout the area, it is\nlikely the elder Kikwi will be able to\nprovide helpful information.<entrypoint_296>")
          		}
          	  case 1:
/*< 31>*/ 		switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          		  case 0:
/*< 29>*/ 			printf("Based on information received from\nthe Kikwi <b<Machi>>, there is an 80%\nchance that finding the Kikwi elder\nwill aid our search for Zelda.<entrypoint_296>")
          		  case 1:
/*< 30>*/ 			printf("Zelda is likely to be perceived as a\nconspicuous character in these woods.\nConfer with local life-forms to see if\nthey know her whereabouts.<entrypoint_296>")
          		}
          	}
          }

          void entrypoint_006_222() {
/*< 43>*/ 	start()
/*< 44>*/ 	switch (story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */]) {
          	  case 0:
/*< 45>*/ 		printf("The entrance to the place that holds\n<r<Farore's Flame>>, one of the sacred\nflames, has been opened by the\nWater Dragon.\nIt is very likely that a great number of\nmonsters infest this place, so I highly\nrecommend you equip yourself\nproperly for a hostile environment.<entrypoint_296>")
          	  case 1:
/*< 46>*/ 		printf("To learn the location of the sacred\nflame in <b<Faron Province>>, you must find\n<y<sacred water>> for the Water Dragon.\n\nI have registered the sacred water as\na target you can now search for using\nyour <g<dowsing >>ability.<entrypoint_296>")
          	}
          }

          void entrypoint_006_240() {
/*< 51>*/ 	start()
/*< 52>*/ 	switch (story_flags[344 /* us: 805A9AFE 0x40, jp: 805ACD7E 0x40 */]) {
          	  case 0:
/*< 53>*/ 		printf("\x0E\x01\x12\x04\x00\x01Master, you have now passed through\nthe <r<Gate of Time>>.\n\n\nProceed forward. I calculate a 99%\nprobability that <b<Zelda >>waits just ahead.<entrypoint_296>")
          	  case 1:
/*< 54>*/ 		printf("The time has finally come to awaken\nthe <r<Gate of Time >>using the power of\nyour enhanced sword. I suggest you\nmake this your immediate priority.<entrypoint_296>")
          	}
          }

          void entrypoint_006_208() {
/*< 73>*/ 	start()
/*< 74>*/ 	switch (story_flags[120 /* us: 805A9AEA 0x20, jp: 805ACD6A 0x20 */]) {
          	  case 0:
/*< 76>*/ 		printf("You have reassembled the key to the\ntemple on Eldin Volcano, and you are\nheaded there to open its door.<entrypoint_296>")
          	  case 1:
/*< 75>*/ 		printf("You are currently looking for the <r<key\nto open the temple door>>. This key\nhas been split into five pieces which can\nbe located with your <g<dowsing>> ability.<entrypoint_296>")
          	}
          }

