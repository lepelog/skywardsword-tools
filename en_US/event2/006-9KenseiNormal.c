          void entrypoint_006_950() {
/*< 25>*/ 	start()
/*< 26>*/ 	switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          	  case 0:
/*< 27>*/ 		printf("Additionally, <y<Clawshots>> have the\nability to latch on to vines, so you may\nwant to use them in order to reach\nvines from a distance.")
          	  case 1:
          	}
          }

          void entrypoint_006_916() {
/*< 55>*/ 	start()
/*< 56>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*< 58>*/ 		printf("You can check your <b<map >>to locate\nBeedle's airborne shop. You will need\nto ring the <r<large bell >>hanging from the\nshop to gain access.")
          	  case 1:
/*< 57>*/ 		printf("To enter <b<Beedle>>'s airborne shop, ring\nthe <r<large bell >>hanging below the\nstructure.\n\nUnfortunately, \x0E\x01\x12\x04\x00\x02Master, you do not have\nthe equipment needed to ring the bell.\nYou need to find <r<something >>that can\nshoot a projectile from a distance.")
          	}
          }

          void entrypoint_006_900() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf("Ancient buildings can be found on\nthe small islands floating in the\narea around <b<Skyloft>>.<b<\n\n>>I calculate over an 80% chance that\nchests will be hidden on such islands.")
          }

          void entrypoint_006_918() {
/*< 32>*/ 	start()
/*< 33>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*< 35>*/ 		printf("I now calculate a 95% chance that it is\n<b<Batreaux>> who lives under the shed next\nto the graveyard.")
/*< 36>*/ 		switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          		  case 0:
/*< 54>*/ 			printf("You collected enough <y<Gratitude\nCrystals>> for Batreaux to become a\nhuman. I estimate a 60% chance that\nthe Skyloft-demon rumor will die.\nBut there is still a 40% probability that\nthe rumor will not fade, based upon the\npossibility that people will still find\nBatreaux's new human face terrifying.")
          		  case 1:
/*< 37>*/ 			printf("Batreaux would like you to collect\n<y<Gratitude Crystals >>and wants to see\nthem for himself so that he can become\na human.\nIf you aid him in this search, \x0E\x01\x12\x04\x00\x02Master,\nthere is an 85% probability that it will\nbenefit you as well.")
          		}
          	  case 1:
/*< 34>*/ 		printf("If you are interested, I recommend\ngoing to the<b< >><b<Lumpy Pumpkin>>, where\nthese rumors appear to have\noriginated.")
          	}
          }

          void entrypoint_006_902() {
          	start()
/*<  1>*/ 	switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          	  case 0:
/*<  3>*/ 		printf("The knight apprentice known as <b<Strich>>\nis looking for this island and is often\nobserved exploring in the sky.\n\nIt seems that he recently found an\nisland <b<inside the thunderhead >>suitable\nfor insect habitation.")
          	  case 1:
/*<  2>*/ 		printf("However, nobody has ever reported\nvisiting such a place.")
          	}
          }

          void entrypoint_006_955() {
/*< 42>*/ 	start()
/*< 43>*/ 	switch (story_flags[702 /* us: 805A9B22 0x04, jp: 805ACDA2 0x04 */]) {
          	  case 0:
/*< 49>*/ 		switch (random(3)) {
          		  case 0:
          			flw_44:
/*< 44>*/ 			printf("Any <b<<item07>s >>that don't hit their\ntarget can be picked up and reused.")
          		  case 1:
          			goto flw_44
          		  case 2:
          			flw_45:
/*< 45>*/ 			printf("You possess sufficient arm strength to\nslice your sword through the trunks of\nsmaller trees.\n\nIf a point on a tree appears to glow,\ncut through that spot with your\nsword and you may be rewarded with\na Rupee.")
          		}
          	  case 1:
          		goto flw_45
          	}
          }

          void entrypoint_006_904() {
/*<  4>*/ 	start()
/*<  5>*/ 	switch (story_flags[398 /* us: 805A9B0E 0x01, jp: 805ACD8E 0x01 */]) {
          	  case 0:
/*<  8>*/ 		switch (has_rupees(20)) {
          		  case 0:
/*<  7>*/ 			printf("It is a place of amusement where you\ncan procure high-value Rupees with\nsurprisingly little exertion.\n\nYou will require room in your wallet to\ncarry Rupees back with you, though,\nso it would be wise to plan accordingly. ")
          		  case 1:
/*<  9>*/ 			printf("It is a place of amusement where you\ncan procure high-value Rupees with\nsurprisingly little exertion.\n\nMy analysis indicates that you will\nneed to make a payment to play there.")
          		}
          	  case 1:
/*<  6>*/ 		printf("Some say that it will be an attraction\nwhere you can obtain a great amount\nof Rupees easily.")
          	}
          }

          void entrypoint_006_940() {
/*< 50>*/ 	start()
/*< 51>*/ 	switch (story_flags[89 /* us: 805A9AEC 0x08, jp: 805ACD6C 0x08 */]) {
          	  case 0:
/*< 52>*/ 		printf("Technically speaking, this is no rumor,\nbut I will pass on this information\nnonetheless.\n\nWhen energy is released from the\n<r<Goddess Cubes >>scattered across the\nland and it launches into the sky,\nI can calculate its trajectory.\nThen I will note the location in the sky\nthat the energy has returned to on your\nmap, \x0E\x01\x12\x04\x00\x02Master.")
          	  case 1:
/*< 53>*/ 		printf("Do you recall seeing the <r<mysterious>><r<\ncubes >>bearing the mark of the goddess\nthroughout the land below?\n\nThere seems to be a connection\nbetween those cubes and the locked\nchests in <b<Skyloft>> and the surrounding\nislands.")
          	}
          }

          void entrypoint_006_908() {
/*< 28>*/ 	start()
/*< 29>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*< 31>*/ 		printf("The flying shop cannot be observed\nin <b<Skyloft >>after sundown. This leads me\nto infer that it moves to another island\nat night.\n<r<If you were to stay in the airborne shop\nuntil nightfall>>, there is a possibility you\nwill discover where it travels to.")
          	  case 1:
/*< 30>*/ 		printf("Unfortunately, \x0E\x01\x12\x04\x00\x02Master, you do not have\nthe equipment needed to ring the bell.\nYou need to find <r<something >>that can\nshoot at it from a distance.")
          	}
          }

          void entrypoint_006_943() {
/*< 12>*/ 	start()
/*< 47>*/ 	switch (story_flags[702 /* us: 805A9B22 0x04, jp: 805ACDA2 0x04 */]) {
          	  case 0:
/*< 48>*/ 		switch (random(3)) {
          		  case 0:
          			flw_16:
/*< 16>*/ 			printf("In ancient times, a great warrior\ndevised a strategy to collect lots of \narrows. Do you know it, \x0E\x01\x12\x04\x00\x02Master?\n[1]Tell me![2-]I know it.")
/*< 13>*/ 			switch (choice(2)) {
          			  case 0:
/*< 15>*/ 				printf("The warrior took out his <b<Wooden\nShield >>and approached the Bokoblin\nfort.\n\nHe hid behind his shield as the\nBokoblins rained arrows down on\nhim. He then retreated out of range.\n\nMany arrows <r<were >><r<stuck in his >><r<Wooden\nShield>>. All he needed to do then was\npull them out and fire them back at\nhis enemies with his bow.")
          				flw_14:
/*< 14>*/ 				printf("You could use a Wooden Shield to\nemploy this same strategy, \x0E\x01\x12\x04\x00\x02Master.\n\n\nHowever, doing so will damage your\nshield, so <r<pay attention to your\nshield gauge>>.")
          			  case 1:
          				goto flw_14
          			}
          		  case 1:
          			goto flw_16
          		  case 2:
          			flw_46:
/*< 46>*/ 			printf("<b<Bird Feathers>> are a useful material\noften used in equipment upgrades.\n\n\nHowever, there is a 90% probability\nyou will need some kind of tool to\ncatch the birds who provide these\nfeathers.")
          		}
          	  case 1:
          		goto flw_46
          	}
          }

          void entrypoint_006_944() {
/*< 17>*/ 	start()
/*< 18>*/ 	switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          	  case 0:
/*< 19>*/ 		printf("If you return to places you previously\nvisited, you may be able to reach new\nareas using the power of the\n<b<Water Dragon's Scale>>.\nSince you already possess this item,\nyou can easily dive underwater.\n")
          	  case 1:
/*< 20>*/ 		printf("Somewhere in the world is an item\ncalled a <b<Water Dragon's Scale>>.\nRumors suggest that this item allows\na person to dive deep underwater.")
          	}
          }

          void entrypoint_006_945() {
/*< 21>*/ 	start()
/*< 22>*/ 	switch (story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */]) {
          	  case 0:
/*< 23>*/ 		printf("Of course, you already possess the\n<b<Fireshield Earrings>>, so you can freely\nenter extremely hot areas.\n\nI recommend thoroughly exploring\nplaces that were previously too hot\nto travel through safely.")
          	  case 1:
/*< 24>*/ 		printf("There is an item called <b<Fireshield\nEarrings >>in this world somewhere.\nThey allow the wearer to remain in\nareas of extreme heat.")
          	}
          }

          void entrypoint_006_928() {
/*< 38>*/ 	start()
/*< 39>*/ 	switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          	  case 0:
/*< 41>*/ 		printf("If you get too close to Levias, there is a\ndanger that your Loftwing will collide\nwith one of his fins or his tail.")
          	  case 1:
/*< 40>*/ 		printf("Every year since he was born so long\nago, he has grown larger and larger.\nHe is now the size of a large island.\nHowever, he hasn't been seen recently.")
          	}
          }

