          void entrypoint_107_04() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf("\x0E\x02\x04\x02\x14CD Statue of the Goddess")
          }

          void entrypoint_107_21() {
/*< 41>*/ 	start()
/*< 42>*/ 	printf("Bath")
          }

          void entrypoint_107_56() {
/*< 63>*/ 	start()
/*<158>*/ 	story_flags[104 /* us: 805A9ADE 0x20, jp: 805ACD5E 0x20 */] = true;
/*<153>*/ 	check_item_flag(502, 80)
/*<152>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 26}) {
          	  case 0:
/*<112>*/ 		printf("A report, \x0E\x01\x12\x04\x00\x0BMaster.\n\n\n\nDue to your sword's enhancements, it is\nnow possible to use your <r<dowsing>> ability\nto detect feelings of gratitude.\n\nI have added <r<Gratitude>> <r<Crystals>> to\nyour list of <r<dowsing>> targets.<pling>")
/*<159>*/ 		open_dowsing_wheel(19)
/*<160>*/ 		printf("However, I sense that you have already\ngathered all of the gratitude possible,\n\x0E\x01\x12\x04\x00\x02Master. Congratulations.")
          	  case 1:
/*< 64>*/ 		printf("A report, \x0E\x01\x12\x04\x00\x0BMaster.\n\n\n\nDue to your sword's enhancements, it is\nnow possible to use your <r<dowsing>> ability\nto detect feelings of gratitude.\n\nI have added <r<Gratitude>> <r<Crystals>> to\nyour list of <r<dowsing>> targets.<pling>")
/*< 65>*/ 		open_dowsing_wheel(19)
          	}
          }

          void entrypoint_107_39() {
/*<137>*/ 	start()
/*<145>*/ 	printf("Our delicious pumpkin soup\nis best piping hot!")
          }

          void entrypoint_107_05() {
/*<  8>*/ 	start()
/*<  9>*/ 	printf("\x0E\x02\x04\x02\x14CD Skyloft Plaza")
          }

          void entrypoint_107_22() {
/*< 45>*/ 	start()
/*< 46>*/ 	printf("Sparring Hall")
          }

          void entrypoint_107_57() {
/*< 78>*/ 	start()
/*< 80>*/ 	printf("A report, \x0E\x01\x12\x04\x00\x0BMaster.\n\n\n\nAnalysis indicates Loftwings cannot\nfly at night. Please return to your bed\nand rest, then depart during the day.")
          }

          void entrypoint_107_06() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf("\x0E\x02\x04\x02\x14CD Knight Academy")
          }

          void entrypoint_107_58() {
/*< 79>*/ 	start()
/*< 81>*/ 	printf("A report, \x0E\x01\x12\x04\x00\x0BMaster.\n\n\n\nI have determined that there is a <r<Trial\nGate>> somewhere among these floating\nislands that can be opened by the\nSong of the Hero.\nI suggest you use your <r<dowsing >>ability\nto locate it.")
/*<161>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 162, 'param3': 58}
/*<162>*/ 	open_dowsing_wheel(6)
/*<163>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_107_23() {
/*< 82>*/ 	start()
/*< 84>*/ 	switch (story_flags[712 /* us: 805A9B25 0x04, jp: 805ACDA5 0x04 */]) {
          	  case 0:
/*< 83>*/ 		printf("\x0E\x01\x08\x02\xFFCDItem Check Girl\n\x0E\x01\x08\x02ÍPeatrice's House")
          	  case 1:
          	}
          }

          void entrypoint_107_40() {
/*<138>*/ 	start()
/*<146>*/ 	printf("Now accepting applications\nfor workers to plow the\npumpkin fields!")
          }

          void entrypoint_107_07() {
/*< 51>*/ 	start()
/*< 52>*/ 	printf("No running in the halls!")
          }

          void entrypoint_107_24() {
/*< 85>*/ 	start()
/*< 86>*/ 	switch (story_flags[713 /* us: 805A9B25 0x08, jp: 805ACDA5 0x08 */]) {
          	  case 0:
/*< 87>*/ 		printf("Piper's House")
          	  case 1:
          	}
          }

          void entrypoint_107_59() {
/*<117>*/ 	start()
/*<118>*/ 	printf("\x0E\x01\x12\x04\x00\x01Congratulations, Master.\n\n\n\nYou have passed all of the trials.")
/*<121>*/ 	set_camera(6, 0)
/*<119>*/ 	printf("The <r<<itemB4>>> you just obtained is\nactually one of a pair, \x0E\x01\x12\x04\x00\x02Master.\n\n\nAnother similar object with a mark\njust like the one you hold exists\nsomewhere on this island.\n\nCombining the two should open the\nway to the <y+<Triforce>>.\n\n\n\x0E\x01\n\x04\xFFFFÍI suggest that you search for that\nmatching stone.")
/*<120>*/ 	story_flags[769 /* us: 805A9B2A 0x02, jp: 805ACDAA 0x02 */] = true;
          }

          void entrypoint_107_41() {
/*<139>*/ 	start()
/*<147>*/ 	printf("Skyloft is only a flap or three\nto the northwest!")
          }

          void entrypoint_107_25() {
/*< 88>*/ 	start()
/*< 89>*/ 	switch (story_flags[714 /* us: 805A9B25 0x10, jp: 805ACDA5 0x10 */]) {
          	  case 0:
/*< 90>*/ 		printf("Kukiel's House")
          	  case 1:
          	}
          }

          void entrypoint_107_08() {
/*<113>*/ 	start()
/*<114>*/ 	printf("Always dive from a designated\ndiving platform when\nmounting your Loftwing\nin Skyloft.")
          }

          void entrypoint_107_42() {
/*<140>*/ 	start()
/*<148>*/ 	printf("Karane + Caw...")
          }

          void entrypoint_107_26() {
/*< 91>*/ 	start()
/*< 92>*/ 	switch (story_flags[715 /* us: 805A9B25 0x20, jp: 805ACDA5 0x20 */]) {
          	  case 0:
/*< 93>*/ 		printf("Orielle & Parrow's House")
          	  case 1:
          	}
          }

          void entrypoint_107_09() {
/*<115>*/ 	start()
/*<116>*/ 	printf("Cleanliness is next to\nknightliness! Keep your\nsleeping quarters tidy.")
          }

          void entrypoint_107_60() {
/*<124>*/ 	start()
/*<126>*/ 	set_camera(10, 0)
/*<129>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 356, 'next': 127, 'param3': 15}
/*<127>*/ 	set_camera(11, 0)
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 128, 'param3': 51}
/*<128>*/ 	set_camera(12, 0)
/*<125>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaster Link, I have\nmemories of this island.\n\n\nIt is known as the <b<Isle of Songs>>.\nSigns indicate that it was left here\nfor you by the goddess, \x0E\x01\x12\x04\x00\x02Master.\n\nHowever, I am unable to determine a\nmeans of entering the structure ahead.\nI suggest you investigate the area.")
/*<131>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 132, 'param3': 36}
/*<132>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_107_43() {
/*<168>*/ 	start()
/*<169>*/ 	printf("Rotate the center pedestal to\ncomplete the bridge that allows\nyou to step to the great tower\non the Isle of Songs.")
          }

          void entrypoint_107_27() {
/*< 94>*/ 	start()
/*< 95>*/ 	switch (story_flags[716 /* us: 805A9B25 0x40, jp: 805ACDA5 0x40 */]) {
          	  case 0:
/*< 96>*/ 		printf("\x0E\x01\x08\x02\xFFCDGear Peddler\n\x0E\x01\x08\x02ÍRupin's House")
          	  case 1:
          	}
          }

          void entrypoint_107_61() {
/*<154>*/ 	start()
/*<156>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaster, I have confirmed the location\nof a second opening in the cloud\nbarrier. It is located in the skies to\nthe northeast.\nThis opening will allow you to access a\nnew area on the surface. I suggest\nyou fly there as soon as you complete\nnecessary preparations.")
          }

          void entrypoint_107_44() {
/*<178>*/ 	start()
/*<179>*/ 	printf("The bazaar is now closed.\nWe will be open again for\nbusiness tomorrow.\n\nFor urgent dealings, please\nvisit the merchant with whom\nyou have business at home.\n-Bazaar Peddler Association")
          }

          void entrypoint_107_10() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf("\x0E\x03\x01\x00Link")
          }

          void entrypoint_107_28() {
/*< 97>*/ 	start()
/*< 98>*/ 	switch (story_flags[717 /* us: 805A9B25 0x80, jp: 805ACDA5 0x80 */]) {
          	  case 0:
/*< 99>*/ 		printf("Pipit's House")
          	  case 1:
          	}
          }

          void entrypoint_107_62() {
/*<155>*/ 	start()
/*<157>*/ 	printf("\x0E\x01\x12\x04\x00\x0BI've confirmed the location of a third\nopening in the cloud barrier in the\nsky to the southwest.\n\nIt will allow you to reach a new area on\nthe surface. I suggest going there as\nsoon as you are suitably prepared.")
          }

          void entrypoint_107_45() {
/*<180>*/ 	start()
/*<181>*/ 	printf("Clean hands are happy hands!")
          }

          void entrypoint_107_11() {
/*< 21>*/ 	start()
/*< 28>*/ 	printf("Groose")
          }

          void entrypoint_107_29() {
/*<100>*/ 	start()
/*<101>*/ 	switch (story_flags[718 /* us: 805A9B24 0x01, jp: 805ACDA4 0x01 */]) {
          	  case 0:
/*<102>*/ 		printf("\x0E\x01\x08\x02\xFFCDFortune-teller\n\x0E\x01\x08\x02ÍSparrot's House")
          	  case 1:
          	}
          }

          void entrypoint_107_63() {
/*<165>*/ 	start()
/*<166>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaster Link...\n\n\n\nIt will be necessary for you to learn\nhow to execute the Spiral Charge\nmaneuver in order to rid Levias of\nhis blight.\nOwlan is currently waiting <r<near the\nbird statue>> in the northeastern part\nof Skyloft. I suggest you go there\nto speak with him.")
          }

          void entrypoint_107_46() {
/*<182>*/ 	start()
/*<183>*/ 	printf("Keep it squeaky clean in here.")
          }

          void entrypoint_107_12() {
/*< 22>*/ 	start()
/*< 29>*/ 	printf("Cawlin & Strich")
          }

          void entrypoint_107_64() {
/*<170>*/ 	start()
/*<172>*/ 	switch (story_flags[649 /* us: 805A9B1C 0x04, jp: 805ACD9C 0x04 */]) {
          	  case 0:
/*<174>*/ 		printf("\x0E\x01\x12\x04\x00\x0BMaster Link...\n\n\n\n\x0E\x01\n\x04\x0DÍThis treasure-chest-like object is a\nrelic of ancient times, left by the\ngoddess for her chosen hero.")
/*<176>*/ 		set_camera(-1, 0)
/*<175>*/ 		printf("It would appear that each chest\nresponds to the energy released when a\nspecific <r<Goddess Cube>> is launched\nskyward, releasing its lock mechanism.\nSearch for Goddess Cubes in the lands\nbelow and send them into the air.\nIt is the only way to open these chests.")
          	  case 1:
/*<171>*/ 		printf("\x0E\x01\x12\x04\x00\x0BMaster Link...\n\n\n\n\x0E\x01\n\x04\x0DÍThis treasure-chest-like object is a\nrelic of ancient times, left by the\ngoddess for her chosen hero.")
/*<177>*/ 		set_camera(-1, 0)
/*<173>*/ 		printf("However, I lack any information on\nhow it can be opened at this time.")
          	}
          }

          void entrypoint_107_47() {
/*<184>*/ 	start()
/*<185>*/ 	printf("Out to work for the day.\nThose who have business for me\ncan find me here at night.\n\x0E\x01\x06\x02\x5CD-Beedle")
          }

          void entrypoint_107_13() {
/*< 23>*/ 	start()
/*< 30>*/ 	printf("Fledge")
          }

          void entrypoint_107_30() {
/*< 47>*/ 	start()
/*< 48>*/ 	printf("Let sound the goddess's song\nBeneath the light's radiance\nUnto her chosen hero shall fall\nA piercing ray of guidance")
          }

          void entrypoint_107_14() {
/*< 24>*/ 	start()
/*< 31>*/ 	printf("Headmaster Gaepora")
          }

          void entrypoint_107_31() {
/*<103>*/ 	start()
/*<104>*/ 	switch (story_flags[719 /* us: 805A9B24 0x02, jp: 805ACDA4 0x02 */]) {
          	  case 0:
/*<105>*/ 		printf("\x0E\x01\x08\x02\xFFCDScrap Shop Owner\n\x0E\x01\x08\x02ÍGondo's House")
          	  case 1:
          	}
          }

          void entrypoint_107_15() {
/*< 25>*/ 	start()
/*< 32>*/ 	printf("Instructor Owlan")
          }

          void entrypoint_107_32() {
/*<106>*/ 	start()
/*<107>*/ 	switch (story_flags[720 /* us: 805A9B24 0x04, jp: 805ACDA4 0x04 */]) {
          	  case 0:
/*<108>*/ 		printf("\x0E\x01\x08\x02\xFFCDPotion Shop Owner\n\x0E\x01\x08\x02ÍBertie's House")
          	  case 1:
          	}
          }

          void entrypoint_107_50() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf("\x0E\x01\x12\x04\x00\x04Master Link... Observe.\nThe <r<green pillar>> before you is a <b<column\nof light>>. It marks the point at which\nyou can descend to the surface.")
/*< 70>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 72, 'param3': 30}
/*< 72>*/ 	printf("You can confirm your current\nlocation on the map. Please see\nwhere you are in relation to Skyloft.")
/*< 71>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 73, 'param3': 34}
/*< 73>*/ 	printf("It appears that you will be able to reach\nthe surface by passing through the\nportal in the clouds at the column's\nbase.")
/*< 14>*/ 	story_flags[198 /* us: 805A9AEF 0x01, jp: 805ACD6F 0x01 */] = true;
          }

          void entrypoint_107_16() {
/*< 26>*/ 	start()
/*< 33>*/ 	printf("Instructor Horwell")
          }

          void entrypoint_107_33() {
/*<109>*/ 	start()
/*<110>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<111>*/ 		printf("Batreaux's House")
          	  case 1:
          	}
          }

          void entrypoint_107_51() {
/*< 15>*/ 	start()
/*< 17>*/ 	printf("\x0E\x01\x12\x04\x00\x01Master, I have an update regarding\nthe stone tablet and the resulting\ncolumn of light it created.\n\nThe column of light has appeared to\nthe south of our location, and signs\nindicate that it has created an opening\nin the cloud barrier to the land below.")
/*< 66>*/ 	printf("I must also caution you that descending\nto the surface armed only with a sword\nwould result in a decreased probability\nof survival.\nIf you have not already done so, I\nadvise you to purchase a <r<shield>> and\n<r<potions >>at the bazaar in preparation\nfor your journey.")
/*< 53>*/ 	story_flags[198 /* us: 805A9AEF 0x01, jp: 805ACD6F 0x01 */] = true;
/*< 67>*/ 	story_flags[679 /* us: 805A9B22 0x02, jp: 805ACDA2 0x02 */] = true;
/*<167>*/ 	story_flags[358 /* us: 805A9B00 0x10, jp: 805ACD80 0x10 */] = true;
          }

          void entrypoint_107_17() {
/*< 27>*/ 	start()
/*< 34>*/ 	printf("Karane")
          }

          void entrypoint_107_34() {
/*<122>*/ 	start()
/*<123>*/ 	printf("Skyloft Map\nN: Statue of the Goddess\nE: Residential Quarter\nS: Plaza    W: Knight Academy")
          }

          void entrypoint_107_52() {
/*< 18>*/ 	start()
/*< 16>*/ 	printf("\x0E\x01\x12\x04\x00\x01Master, the column of light is visible\nfrom here.")
/*< 75>*/ 	set_camera(2, 0)
/*< 74>*/ 	printf("Dive off a ledge and call your Loftwing\nfrom here, where you can see the\ncolumn of light.")
/*< 77>*/ 	set_camera(-1, 0)
/*< 76>*/ 	printf("It is time for you to set out on your\nsearch for Zelda. You can call your\nLoftwing with (v) after you dive off.\x0E\x01\x11\x02\x9CD")
          }

          void entrypoint_107_18() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf("Zelda")
          }

          void entrypoint_107_35() {
/*<133>*/ 	start()
/*<141>*/ 	printf("Try our pumpkin soup!\nNutritious and bowl-lickin'\ndelicious! One cup, 10 Rupees!")
          }

          void entrypoint_107_01() {
          	start()
/*<  1>*/ 	printf("Waterfall Cave\n\nBeware of bloodsucking\nmonsters! No kids allowed.")
          }

          void entrypoint_107_19() {
/*< 37>*/ 	start()
/*< 49>*/ 	switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          	  case 0:
/*< 50>*/ 		printf("\x0E\x03\x01\x00Link Claims\nWinner's Perch in the\nWing Ceremony!\nSadly, Tragedy Also Strikes")
          	  case 1:
/*< 38>*/ 		printf("The Wing Ceremony is today!\nRiders: Groose, Cawlin,\nStrich, and Link.\nWho will claim the prize?")
          	}
          }

          void entrypoint_107_53() {
/*< 43>*/ 	start()
/*<186>*/ 	switch (scene_flags[25 /* 0x2 02 */]) {
          	  case 0:
/*<187>*/ 		printf("\x0E\x01\x12\x04\x00\x04Master Link, please\ninsert the <r<stone tablet >>you recently\nacquired into the altar.")
          	  case 1:
/*< 68>*/ 		switch (story_flags[38 /* us: 805A9AE5 0x10, jp: 805ACD65 0x10 */]) {
          		  case 0:
/*< 44>*/ 			printf("\x0E\x01\x12\x04\x00\x04Master Link, I suggest\nyou imbue that crest with the power of\nyour <r<Skyward Strike>> and then insert\nthe tablet I gave you a moment ago.\nTo gather energy from the heavens\nand charge up a <r<Skyward Strike>>,\n<g<point your sword skyward>>.")
          		  case 1:
/*< 69>*/ 			printf("I am known as <b<Fi>>... Please step up to\nthe pedestal and draw the sword.")
          		}
          	}
          }

          void entrypoint_107_36() {
/*<134>*/ 	start()
/*<149>*/ 	switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          	  case 0:
/*<150>*/ 		printf("Kina's Stage\nNot-so-regularly-scheduled\nnighttime performances")
          	  case 1:
/*<142>*/ 		printf("Kina's Stage is temporarily\nclosed due to lack of musical\naccompanist. Now seeking\nmusical accompanists!")
          	}
          }

          void entrypoint_107_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf("\x0E\x02\x04\x02\x16CD Knight Academy\n    Residential Quarter \x0E\x02\x04\x02\x17CD")
          }

          void entrypoint_107_54() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf("\x0E\x01\x12\x04\x00\x04Master Link...\n\n\n\nWhen you hit that <r<Goddess Cube >>with\na <r<Skyward Strike>> earlier, I was able\nto detect a resulting energy reaction\nabove the clouds.")
/*< 58>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 7, 'next': 151, 'param3': 30}
/*<151>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 56, 'param3': 6}
/*< 56>*/ 	printf("The location I have marked on your\nmap indicates the spot where I sensed\nan energy reaction.")
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 57, 'param3': 34}
/*< 57>*/ 	printf("I advise you to investigate the area\naround this location.")
/*< 62>*/ 	scene_flags[21 'The Sky'][13 /* 0x0 20 */] = true;
          }

          void entrypoint_107_37() {
/*<135>*/ 	start()
/*<143>*/ 	printf("Customers wishing to see\nthe Lumpy Pumpkin's famed\nchandelier should visit the\nsecond-floor viewing gallery.")
          }

          void entrypoint_107_03() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf("\x0E\x02\x04\x02\x14CD Bazaar")
          }

          void entrypoint_107_20() {
/*< 39>*/ 	start()
/*< 40>*/ 	printf("Restroom")
          }

          void entrypoint_107_55() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf("A seedling planted here would require\nseveral thousand years to mature.\nI would suggest not planting one\nat this location.")
          }

          void entrypoint_107_38() {
/*<136>*/ 	start()
/*<144>*/ 	printf("No roughhousing on the\nbalcony! Big ruckuses cause\nthe chandelier to shake.")
          }

