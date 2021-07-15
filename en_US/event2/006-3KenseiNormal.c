          void entrypoint_006_300() {
          	start()
/*<  7>*/ 	switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          	  case 0:
/*<  8>*/ 		printf("I cannot offer my usual analysis\nbecause you are currently engaged in\na challenge created by the Thunder\nDragon Lanayru.")
          	  case 1:
/*<  1>*/ 		printf("You are located in the <b<Sealed Grounds>>.\nI detect the auras of a small number\nof relatively weak enemies.")
/*<  5>*/ 		printf("\x0E\x01\x12\x04\x00\x01Master, your current selection of\npouch items is <string arg0>.")
/*<  2>*/ 		printf("Suitability to current location is <numeric arg0>%.")
/*<  6>*/ 		printf("My projections indicate that equipping\na sword is sufficient for combat at\nthis location.\n\nYou could also consider stocking your\npouch with helpful items.")
/*<  3>*/ 		switch (adventure_pouch_has(6 0x0006)) {
          		  case 0:
/*<  4>*/ 			printf("To make matters worse, your Wooden\nShield is not well suited to defend you\nfrom fire-based attacks.<pause0F> I do not\nrecommend that you equip it.")
          		  case 1:
          		}
          	}
          }

          void entrypoint_006_301() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("I do not have any relevant information\nto report at this time.")
          }

