          void entrypoint_400_13() {
/*< 33>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "...")
          }

          void entrypoint_400_65() {
/*<161>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 2, unk: 0, line: 84 */ "We have arrived at <color blue<Lanayru Mine>coloroff>.\n\n\n\nYou can use your dowsing ability to\nlocate the entrance to the trial you\nmust pass to open the way to the\nsacred flame.")
/*<163>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_30() {
/*<234>*/ 	start()
/*<235>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "Huh? You're looking for work, zrrpt?\nThen get rid of that funny-looking hat\nand come back with a helmet, vrrm!")
/*<244>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_14() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 1, unk: 0, line: 16 */ "The mine cart in front of the door is\ngoing to pass through here, so it's\ndangerous for you to be there, vrrm!\nMaybe you should just go away, zrrpt!")
/*< 71>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_66() {
/*<164>*/ 	start()
/*<165>*/ 	printf(/* textboxtype: 2, unk: 0, line: 85 */ "We have arrived at <color blue<Lanayru Desert>coloroff>.\n\n\n\nYou can use your dowsing ability to\nlocate the entrance to the trial you\nmust pass to open the way to the \nsacred flame.")
/*<166>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_31() {
/*<236>*/ 	start()
/*<237>*/ 	printf(/* textboxtype: 1, unk: 0, line: 52 */ "...")
          }

          void entrypoint_400_15() {
/*< 37>*/ 	start()
/*<307>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<308>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_38:
/*< 38>*/ 			printf(/* textboxtype: 1, unk: 0, line: 17 */ "...")
          		  case 1:
/*<345>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				flw_310:
/*<310>*/ 				printf(/* textboxtype: 1, unk: 0, line: 17 */ "...")
          			  case 1:
/*<309>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 310, 'param3': 31}
          				goto flw_310
          			}
          		}
          	  case 1:
          		goto flw_38
          	}
          }

          void entrypoint_400_67() {
/*<167>*/ 	start()
/*<168>*/ 	printf(/* textboxtype: 2, unk: 0, line: 86 */ "We have arrived at the <color blue<Temple of\nTime>coloroff>.\n\n\nYou can use your dowsing ability to\nlocate the entrance to the trial you\nmust pass to open the way to the\nsacred flame.")
/*<169>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_32() {
/*<238>*/ 	start()
/*<239>*/ 	printf(/* textboxtype: 1, unk: 0, line: 53 */ "These strange things have started\nattacking us recently, vrrm. We don't\nhave any weapons to defend ourselves,\nso if they attack, we're fried, phweep!")
/*<245>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_16() {
/*< 39>*/ 	start()
/*<  9>*/ 	switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          	  case 0:
/*<311>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<312>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_12:
/*< 12>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "Still hanging around here?\nBe careful, vrrm!")
          			  case 1:
/*<313>*/ 				printf(/* textboxtype: 1, unk: 0, line: 62 */ "You are looking for the dragon god,\nzrrpt?\n\n\n<0x10009:0x13030000>If it's <color blue<Master Thunder Dragon >coloroff>you \nwant to meet, he's to the south of\n<color blue<Lanayru Caves>coloroff>, bzzt. I don't know of \nany other dragons, though, phweep.")
/*<344>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_12
          		}
          	  case 1:
/*<  5>*/ 		switch (story_flags[90 /* us: 805A9AEF 0x80, jp: 805ACD6F 0x80 */]) {
          		  case 0:
          			flw_10:
/*< 10>*/ 			printf(/* textboxtype: 1, unk: 0, line: 20 */ "I've added a <color red<pincer modification so\nyou can grab things>coloroff>, brrrrrrrt.\nBe careful out there, zrrt!")
/*< 77>*/ 			scene_flags[7 'Lanayru Desert'][5 /* 0x1 20 */] = true;
/*<283>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<  6>*/ 			switch (context_related2(0)) {
          			  case 0:
/*<277>*/ 				printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x13030000>Thank you, zrrt!")
/*<278>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 279, 'param3': 47}
/*<279>*/ 				set_camera(6, 0)
/*<281>*/ 				{'type': 'type3', 'subType': 2, 'param1': 27, 'param2': 356, 'next': 280, 'param3': 15}
/*<280>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 282, 'param3': 17}
/*<282>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 7, 'param3': 48}
/*<  7>*/ 				printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x13030000>If you hadn't come along, they would\nhave sucked all of the electricity out\nof me, vrrm!\n\nOh...<pause 30> Look at that, zrrpt... You have a\n<color yellow white<<item 53>>coloroff>. It appears to be an older model\nof Lanayru fabrication.\n\nAs thanks for saving me, I will upgrade \n<color red<that>coloroff> for you, zwooop. <0x10009:0x13030000>Give it here for a\nsecond, phwing!")
/*< 91>*/ 				make_actor_do_something(0, 0)
/*<284>*/ 				{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 8, 'param3': 42}
/*<  8>*/ 				give_item(75 0x4B);
/*< 11>*/ 				story_flags[90 /* us: 805A9AEF 0x80, jp: 805ACD6F 0x80 */] = true;
          				goto flw_10
          			  case 1:
/*<  4>*/ 				printf(/* textboxtype: 1, unk: 0, line: 18 */ "Help, zrrt!")
/*< 76>*/ 				scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
/*<228>*/ 				scene_flags[7 'Lanayru Desert'][28 /* 0x2 10 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_400_50() {
/*< 58>*/ 	start()
/*<142>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*< 59>*/ 	printf(/* textboxtype: 2, unk: 0, line: 63 */ "<0x10005:0x005a0000><0x10012:0x0000000b>A report, Master <heroname>.\nWe have arrived at <color blue<Lanayru Mine>coloroff>.")
          }

          void entrypoint_400_68() {
/*<170>*/ 	start()
/*<172>*/ 	set_camera(-1, 0)
/*<171>*/ 	printf(/* textboxtype: 2, unk: 0, line: 87 */ "Congratulations, <0x10012:0x00000004>Master.")
/*<173>*/ 	printf(/* textboxtype: 2, unk: 0, line: 88 */ "<0x10012:0x00000001>You have completed the trial. You now\nhave the power to proceed to the sacred\nflame that will be entrusted to your\nsword and your strong spirit.")
/*<175>*/ 	set_camera(3, 0)
/*<174>*/ 	printf(/* textboxtype: 2, unk: 0, line: 89 */ "The <color yellow<<item 20> >coloroff>are one of the goddess's\nsacred gifts.\n\n\nYou can extend these claws attached to\nchains to pull yourself to <color red<targets >coloroff>and\n<color red<vines>coloroff> beyond your reach.")
/*<177>*/ 	set_camera(-1, 0)
/*<176>*/ 	printf(/* textboxtype: 2, unk: 0, line: 90 */ "The flame is somewhere in the desert...\nI conjecture that it lies in a place\nyou have not yet visited, <0x10012:0x00000001>Master.")
          }

          void entrypoint_400_33() {
/*<240>*/ 	start()
/*<241>*/ 	printf(/* textboxtype: 1, unk: 0, line: 54 */ "...")
          }

          void entrypoint_400_17() {
/*< 40>*/ 	start()
/*<125>*/ 	switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          	  case 0:
/*<216>*/ 		switch (scene_flags[89 /* 0xA 02 */]) {
          		  case 0:
/*<218>*/ 			printf(/* textboxtype: 1, unk: 0, line: 106 */ "<0x10009:0x00162007>I am going to explore inside! <0x10009:0x00002000>I have to\nhead back to the Sealed Grounds soon,\nso it looks like I am going to be busy.")
          		  case 1:
/*<126>*/ 			printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x00151b09>What? You made it inside?\n\n\n\n<0x10009:0x00151b00>You mean to say there is a secret\npassage I did not know about?\nWhy did you not tell me, bud?!\n\n<0x10009:0x00082100>I was just about to give up and go home\nwhen I heard this huge crash. I rushed\nback to find that the way had been\ncleared.\n<0x10009:0x00162007>I am going to explore inside. <0x10009:0x00002000>I have to\ngo back to the Sealed Grounds soon, \nso it looks like I am going to be busy!")
/*<217>*/ 			scene_flags[7 'Lanayru Desert'][89 /* 0xA 02 */] = true;
          		}
          	  case 1:
/*<150>*/ 		switch (scene_flags[73 /* 0x8 02 */]) {
          		  case 0:
/*<152>*/ 			printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x00162007>I wish I could see what is happening\non the other side! Maybe there is\nanother way into the temple?")
          		  case 1:
/*< 41>*/ 			printf(/* textboxtype: 1, unk: 0, line: 103 */ "<0x10009:0x00000002>Good to see you, bud! Seems like you\npop up everywhere! Though I am one\nto talk...\n\n<0x10009:0x00172008>Anyway, bud, there is something I am\ndying to tell you. It is the discovery of\nthe century!\n\n<0x10009:0x00002000>This is a sacred place known as the\n<color blue<Temple of Time>coloroff>.\n\n\n<0x10009:0x0000190a>I could not believe my eyes when I saw a\n<color red<human who lives on the legendary\nIsle of the Goddess>coloroff>!\n\n<0x10009:0x00001900>It wore clothes just like the ones\nwritten about in the ancient\nmanuscripts! And it looked just\nlike you, bud!\n<0x10009:0x00082105>It came with another person...and they\nentered the temple! I wanted to chase\nafter them...\n\n<0x10009:0x00151b00>But then there was an explosion all of a\nsudden! And the entrance... Well, you\ncan see for yourself, bud.\n\n<0x10009:0x00162007>I do not think we are getting past this\nmess. I just wish we could find out\nwhat is happening on the other side!")
/*<151>*/ 			scene_flags[7 'Lanayru Desert'][73 /* 0x8 02 */] = true;
          		}
          	}
          }

          void entrypoint_400_51() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf(/* textboxtype: 2, unk: 0, line: 67 */ "I am able to confirm that a time shift\nhas occurred within this space.\n\n\nAny impact to the blue stones creates a\nsustained temporal disruption field in\nthe surrounding area. Readings show\nthat this area <color red<<sound 4>is in a past time state>coloroff>.")
          }

          void entrypoint_400_69() {
/*<207>*/ 	start()
/*<208>*/ 	printf(/* textboxtype: 8, unk: 0, line: 108 */ "Avoid workplace accidents,\nvrrm! Safety first, zrrt!\n           	  --Floor Supervisor")
          }

          void entrypoint_400_34() {
/*<242>*/ 	start()
/*<243>*/ 	printf(/* textboxtype: 1, unk: 0, line: 55 */ "You're interested in the Timeshift\nStones? Then you should take a tour\nof <color blue<Lanayru Mining Facility>coloroff>, zooop!")
/*<246>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_52() {
/*< 87>*/ 	start()
/*< 88>*/ 	printf(/* textboxtype: 2, unk: 0, line: 69 */ "Readings indicate the materials used \nto construct the <color blue<generator>coloroff> are also \npresent in this area. You can now use \nyour <sound 4><color red<dowsing>coloroff> ability to locate them.")
/*<220>*/ 	story_flags[107 /* us: 805A9AE1 0x01, jp: 805ACD61 0x01 */] = true;
/*<294>*/ 	open_dowsing_wheel(3)
/*<268>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_400_35() {
/*<247>*/ 	start()
/*<248>*/ 	printf(/* textboxtype: 1, unk: 0, line: 56 */ "...")
          }

          void entrypoint_400_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 2 */ "...")
          }

          void entrypoint_400_19() {
/*< 42>*/ 	start()
/*<314>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<315>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_43:
/*< 43>*/ 			printf(/* textboxtype: 1, unk: 0, line: 23 */ "...")
          		  case 1:
/*<347>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_43
          			  case 1:
/*<316>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 43, 'param3': 31}
          				goto flw_43
          			}
          		}
          	  case 1:
          		goto flw_43
          	}
          }

          void entrypoint_400_53() {
/*< 92>*/ 	start()
/*<113>*/ 	story_flags[109 /* us: 805A9AE1 0x04, jp: 805ACD61 0x04 */] = true;
/*<114>*/ 	printf(/* textboxtype: 2, unk: 0, line: 77 */ "")
/*<159>*/ 	set_camera(1, 0)
/*<160>*/ 	printf(/* textboxtype: 2, unk: 0, line: 78 */ "")
/*<178>*/ 	set_camera(-1, 0)
/*<179>*/ 	printf(/* textboxtype: 2, unk: 0, line: 79 */ "")
          }

          void entrypoint_400_70() {
/*<209>*/ 	start()
/*<210>*/ 	printf(/* textboxtype: 8, unk: 0, line: 109 */ "This month's shipping quota:\n150 containers\n                  --Floor Supervisor")
          }

          void entrypoint_400_36() {
/*<249>*/ 	start()
/*<250>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "The Timeshift Stones power us, as\nwell as the machines we use, vreep!\nThat's why we have to stay hard at\nwork, zoop!")
/*<259>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "")
/*< 72>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_54() {
/*<100>*/ 	start()
/*<205>*/ 	switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          	  case 0:
/*<206>*/ 		printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x2f080709><0x30001:0x><heroname>! You made it into the\ndragon's territory?!<pause 84>\n\n\n<0x10009:0x2f010805><0x10008:0x02cd>I am so jealous!<pause 90>\n\n\n\n<0x10009:0x2f0f0706><0x10008:0x02cd>You outdid me again, bud!")
          		flw_149:
/*<149>*/ 		scene_flags[7 'Lanayru Desert'][76 /* 0x8 10 */] = true;
/*<269>*/ 		story_flags[828 /* us: 805A9B33 0x10, jp: 805ACDB3 0x10 */] = true;
/*<270>*/ 		story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<271>*/ 		story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<272>*/ 		story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          	  case 1:
/*<109>*/ 		switch (scene_flags[75 /* 0x8 08 */]) {
          		  case 0:
/*<111>*/ 			printf(/* textboxtype: 1, unk: 0, line: 100 */ "<0x10009:0x2f080d0a>I found the passage that leads\nto where the <color red<Thunder Dragon>coloroff> lives...<pause 45>\n\n\n<0x10006:0xffcd><0x10009:0x2f0d0800>But it is too narrow for a big guy like\nme to pass through. <0x10006:0xffcd><0x10009:0x2f080700>If only there was a\nway...")
          			goto flw_149
          		  case 1:
/*<112>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 105, 'param3': 31}
/*<105>*/ 			switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          			  case 0:
/*<275>*/ 				printf(/* textboxtype: 1, unk: 0, line: 96 */ "<0x10009:0x2f080d02>Hello, hello, <heroname>.")
/*<276>*/ 				set_camera(5, 0)
/*<108>*/ 				printf(/* textboxtype: 1, unk: 0, line: 98 */ "How is your search for that <color blue<sacred\nflame >coloroff>going? Did you find it?!\n\n\nI have been dying to hear whether you\nfound it. Well...did you?\n\n\n<0x10009:0x2f080407>.<pause 20>.<pause 20>.<pause 20>So after that wild, long adventure,\nyou found it! <0x30001:0x><heroname>, you\nare truly amazing.")
/*<358>*/ 				printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x2f080d0a>You know, I think it is time I tell you\nwhat I found out about the legend of\nthe three dragons.<pause 15>\n\nI am certain there is a hidden area just\nbeyond here in the desert!\n\n\nYou see, I found a <color red<narrow passageway>coloroff><sound 4>\nthat was too tight for me to fit through.\n\n\n<0x10009:0x2f000d00>And my gut tells me that one of the\nthree dragons of legend, the <color red<Thunder\nDragon>coloroff>, lives there!\n\n<0x10009:0x2f000800>These robots are connected to him\nsomehow. I am sure of it, bud.<pause 15>\n\n\n<color red<<0x10009:0x2f010807><0x10006:0xffcd>The T>coloroff><color red<hunder Dragon>coloroff>, robots, and\nTimeshift Stones<pause 20>.<pause 20>.<pause 20>.<pause 20>\n\n\n<0x10009:0x2f080708><0x10008:0x02cd><0x10008:0x02cd>What an adventure!")
/*<107>*/ 				printf(/* textboxtype: 1, unk: 0, line: 97 */ "<0x10009:0x00080d00>I just remembered, <heroname>.\nI have got something to report on the\nexcavation project you invested in\nearlier!<pause 20>\nI found loads of Timeshift Stones!\n<0x10009:0x2f000d01>Now I can pay you back 10 times what\nyou gave me!")
/*<106>*/ 				rupees += 100;
          				flw_285:
/*<285>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 110, 'param3': 42}
/*<110>*/ 				scene_flags[7 'Lanayru Desert'][75 /* 0x8 08 */] = true;
          				goto flw_149
          			  case 1:
/*<273>*/ 				printf(/* textboxtype: 1, unk: 0, line: 96 */ "<0x10009:0x2f080d02>Hello, hello, <heroname>.")
/*<274>*/ 				set_camera(5, 0)
/*<211>*/ 				printf(/* textboxtype: 1, unk: 0, line: 98 */ "How is your search for that <color blue<sacred\nflame >coloroff>going? Did you find it?!\n\n\nI have been dying to hear whether you\nfound it. Well...did you?\n\n\n<0x10009:0x2f080407>.<pause 20>.<pause 20>.<pause 20>So after that wild, long adventure,\nyou found it! <0x30001:0x><heroname>, you\nare truly amazing.")
/*<359>*/ 				printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x2f080d0a>You know, I think it is time I tell you\nwhat I found out about the legend of\nthe three dragons.<pause 15>\n\nI am certain there is a hidden area just\nbeyond here in the desert!\n\n\nYou see, I found a <color red<narrow passageway>coloroff><sound 4>\nthat was too tight for me to fit through.\n\n\n<0x10009:0x2f000d00>And my gut tells me that one of the\nthree dragons of legend, the <color red<Thunder\nDragon>coloroff>, lives there!\n\n<0x10009:0x2f000800>These robots are connected to him\nsomehow. I am sure of it, bud.<pause 15>\n\n\n<color red<<0x10009:0x2f010807><0x10006:0xffcd>The T>coloroff><color red<hunder Dragon>coloroff>, robots, and\nTimeshift Stones<pause 20>.<pause 20>.<pause 20>.<pause 20>\n\n\n<0x10009:0x2f080708><0x10008:0x02cd><0x10008:0x02cd>What an adventure!")
          				goto flw_285
          			}
          		}
          	}
          }

          void entrypoint_400_71() {
/*<213>*/ 	start()
/*<214>*/ 	printf(/* textboxtype: 2, unk: 0, line: 91 */ "A report, <0x10012:0x0000000b>Master <heroname>.")
/*<298>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 299, 'param3': 30}
/*<299>*/ 	printf(/* textboxtype: 2, unk: 0, line: 92 */ "The symbols on this power generator\ncorrespond to the symbols on the three\nremote power nodes you activated.\nLogic suggests that they are connected.")
/*<300>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 34}
          }

          void entrypoint_400_37() {
/*<251>*/ 	start()
/*<252>*/ 	printf(/* textboxtype: 1, unk: 0, line: 58 */ "...")
          }

          void entrypoint_400_03() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ "...")
          }

          void entrypoint_400_20() {
/*< 44>*/ 	start()
/*< 63>*/ 	switch (scene_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<317>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<318>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_66:
/*< 66>*/ 				printf(/* textboxtype: 1, unk: 0, line: 26 */ "No matter how many times I see the\nTemple of Time, my circuits still get\noverloaded with impressiveness, zrrp!")
          			  case 1:
/*<319>*/ 				printf(/* textboxtype: 1, unk: 0, line: 62 */ "You are looking for the dragon god,\nzrrpt?\n\n\n<0x10009:0x13030000>If it's <color blue<Master Thunder Dragon >coloroff>you \nwant to meet, he's to the south of\n<color blue<Lanayru Caves>coloroff>, bzzt. I don't know of \nany other dragons, though, phweep.")
/*<346>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_66
          		}
          	  case 1:
/*< 94>*/ 		switch (scene_flags[69 /* 0x9 20 */]) {
          		  case 0:
/*< 96>*/ 			printf(/* textboxtype: 1, unk: 0, line: 28 */ "That was scary, vrrrrrm...\nThanks for helping me, bzzt.")
/*< 93>*/ 			make_actor_do_something(1, 0)
/*< 45>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00030900>This is the <color blue<Temple of Time>coloroff>. Within it\nis the sacred <color blue<Gate of Time >coloroff>made by the\ngoddess, bzzt.\n\n<0x10009:0x00030900>It's my job to patrol outside the temple,\nvrrm! If you want to reach the Gate of\nTime, you will need to pass through\nthat door, bzzap.\n<0x10009:0x00030900>Huh? You need another way in,\nphoo-weep?\n\n\n<0x10009:0x00030900>Well, <color blue<Lanayru Mining Facility >coloroff>and the\n<color blue<Temple of Time >coloroff><color red<are connected\nunderground>coloroff>, dzzt. Lanayru Mining\nFacility is right here!")
/*<202>*/ 			make_actor_do_something(2, 0)
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 215, 'param3': 30}
/*<215>*/ 			wait_frames(30)
/*< 90>*/ 			scene_flags[7 'Lanayru Desert'][3 /* 0x1 08 */] = true;
/*< 99>*/ 			wait_frames(30)
/*< 97>*/ 			printf(/* textboxtype: 1, unk: 0, line: 29 */ "This map... It looks inaccurate, bzzt.\nI'm going to fix it for you, zrrm!")
/*< 64>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 3, 'next': 197, 'param3': 30}
/*<197>*/ 			{'type': 'type3', 'subType': 2, 'param1': 9, 'param2': 356, 'next': 67, 'param3': 15}
/*< 67>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 200, 'param3': 34}
/*<200>*/ 			set_camera(4, 0)
/*<199>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 65, 'param3': 17}
/*< 65>*/ 			printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x00030900>Lanayru Mining Facility is just ahead.\nGood luck, vrrt!")
/*<203>*/ 			make_actor_do_something(3, 0)
/*< 68>*/ 			{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 0, 'next': 89, 'param3': 14}
/*< 89>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 101, 'param3': 17}
/*<101>*/ 			story_flags[129 /* us: 805A9AED 0x40, jp: 805ACD6D 0x40 */] = true;
/*<196>*/ 			scene_flags[7 'Lanayru Desert'][53 /* 0x7 20 */] = true;
/*<198>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 201, 'param3': 17}
/*<201>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 204, 'param3': 42}
/*<204>*/ 			make_actor_do_something(4, 0)
          		  case 1:
/*< 95>*/ 			printf(/* textboxtype: 1, unk: 0, line: 27 */ "Help, zrrt!")
/*<127>*/ 			scene_flags[7 'Lanayru Desert'][53 /* 0x7 20 */] = true;
          		}
          	}
          }

          void entrypoint_400_55() {
/*<102>*/ 	start()
/*<286>*/ 	printf(/* textboxtype: 2, unk: 0, line: 70 */ "A report, <0x10012:0x00000001>Master. I can no longer\ndetect <color blue<Zelda>coloroff>'s aura.")
/*<287>*/ 	set_camera(7, 0)
/*<288>*/ 	printf(/* textboxtype: 2, unk: 0, line: 71 */ "The moment the gate was destroyed,\nZelda's presence disappeared from my\nreadings. <sound 4><color red<You can no longer search for\nher with your dowsing ability>coloroff>.")
/*<289>*/ 	set_camera(-1, 0)
/*<103>*/ 	printf(/* textboxtype: 2, unk: 0, line: 72 */ "Zelda's companion instructed you to\nmeet with the ancient one in the Sealed\nGrounds.\n\nThis corresponds with the records in\nmy memory. I propose that we travel to\nthe <color blue<Sealed Temple>coloroff>.")
/*<104>*/ 	scene_flags[7 'Lanayru Desert'][57 /* 0x6 02 */] = true;
/*<219>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = false;
/*<290>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_400_72() {
/*<221>*/ 	start()
/*<222>*/ 	printf(/* textboxtype: 8, unk: 0, line: 110 */ "Monthly Temple of Time\nCleaning Assignments\n                  --Floor Supervisor")
          }

          void entrypoint_400_38() {
/*<253>*/ 	start()
/*<254>*/ 	printf(/* textboxtype: 1, unk: 0, line: 59 */ "I don't see many humans around here,\nvrrt. Are you interested in the\nTimeshift Stones, phweep?")
/*<260>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_04() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 1, unk: 0, line: 5 */ "")
/*< 73>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_21() {
/*< 46>*/ 	start()
/*<320>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<321>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_47:
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "...")
          		  case 1:
/*<349>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_47
          			  case 1:
/*<322>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 47, 'param3': 31}
          				goto flw_47
          			}
          		}
          	  case 1:
          		goto flw_47
          	}
          }

          void entrypoint_400_56() {
/*<128>*/ 	start()
/*<129>*/ 	printf(/* textboxtype: 1, unk: 0, line: 107 */ "")
          }

          void entrypoint_400_73() {
/*<223>*/ 	start()
/*<224>*/ 	printf(/* textboxtype: 8, unk: 0, line: 111 */ "Plants are drying out, vrrt!\nLet's keep Lanayru green, zzt!\n                  --Floor Supervisor")
          }

          void entrypoint_400_39() {
/*<255>*/ 	start()
/*<256>*/ 	printf(/* textboxtype: 1, unk: 0, line: 60 */ "...")
          }

          void entrypoint_400_05() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "")
          }

          void entrypoint_400_22() {
/*< 48>*/ 	start()
/*< 78>*/ 	switch (scene_flags[103 /* 0xD 80 */]) {
          	  case 0:
/*< 79>*/ 		switch (scene_flags[30 /* 0x2 40 */]) {
          		  case 0:
/*<323>*/ 			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          			  case 0:
/*<324>*/ 				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          				  case 0:
          					flw_81:
/*< 81>*/ 					switch (scene_flags[8 /* 0x0 01 */]) {
          					  case 0:
/*< 83>*/ 						printf(/* textboxtype: 1, unk: 0, line: 34 */ "This is <color blue<Lanayru Mining Facility>coloroff>,\nphwing! It is where Timeshift Stones\nare produced.\n\n<0x10009:0x13030000>No matter how many times I see this\nplace, my rotors still hum with\nadmiration, bzzt!")
          					  case 1:
/*< 82>*/ 						printf(/* textboxtype: 1, unk: 0, line: 33 */ "Did you figure out how to access the\nremote power nodes, zrrbt? That is\nmost impressive...for a human, vrrm.\n\n<0x10009:0x13030000>This is <color blue<Lanayru Mining Facility>coloroff>,\nphwing! It is where Timeshift Stones\nare produced.\n\n<0x10009:0x13030000>No matter how many times I see this\nplace, my rotors still hum with\nadmiration, bzzt!")
/*< 84>*/ 						scene_flags[7 'Lanayru Desert'][8 /* 0x0 01 */] = true;
          						flw_85:
/*< 85>*/ 						scene_flags[7 'Lanayru Desert'][35 /* 0x5 08 */] = true;
          					}
          				  case 1:
/*<325>*/ 					printf(/* textboxtype: 1, unk: 0, line: 62 */ "You are looking for the dragon god,\nzrrpt?\n\n\n<0x10009:0x13030000>If it's <color blue<Master Thunder Dragon >coloroff>you \nwant to meet, he's to the south of\n<color blue<Lanayru Caves>coloroff>, bzzt. I don't know of \nany other dragons, though, phweep.")
/*<348>*/ 					story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          				}
          			  case 1:
          				goto flw_81
          			}
          		  case 1:
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0, line: 32 */ "Did you figure out how to access the\nremote power nodes, zrrpt? Just\nsetting the dials will not be enough to\nopen the entrance to the facility, vrrm.")
          			goto flw_85
          		}
          	  case 1:
/*< 49>*/ 		printf(/* textboxtype: 1, unk: 0, line: 31 */ "You are not in my memory banks, brrt.\n\n\n\n<0x10009:0x13030000>This is the power generator for the\nmechanism that opens the entrance\nto Lanayru Mining Facility, zrrpt!\n\n<0x10009:0x13030000>But it won't budge until you activate\nthe remote power nodes and set those\n<color red<three dials>coloroff> to access them correctly.")
/*< 86>*/ 		scene_flags[7 'Lanayru Desert'][34 /* 0x5 04 */] = true;
          	}
          }

          void entrypoint_400_57() {
/*<130>*/ 	start()
/*<131>*/ 	printf(/* textboxtype: 2, unk: 0, line: 64 */ "<0x10005:0x005a0000>This arid region was transformed into\na desert over the course of several\nhundred years.")
          }

          void entrypoint_400_74() {
/*<229>*/ 	start()
/*<230>*/ 	switch (scene_flags[11 /* 0x0 08 */]) {
          	  case 0:
          	  case 1:
/*< 62>*/ 		printf(/* textboxtype: 2, unk: 0, line: 66 */ "My estimates indicate that this object\nhas been broken for many years.\nI am unable to analyze the content of\nits speech at this time.")
/*<231>*/ 		scene_flags[7 'Lanayru Desert'][11 /* 0x0 08 */] = true;
          	}
          }

          void entrypoint_400_06() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 1, unk: 0, line: 7 */ "")
/*< 74>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_23() {
/*< 50>*/ 	start()
/*<326>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<327>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_51:
/*< 51>*/ 			printf(/* textboxtype: 1, unk: 0, line: 35 */ "...")
          		  case 1:
/*<351>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_51
          			  case 1:
/*<328>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 51, 'param3': 31}
          				goto flw_51
          			}
          		}
          	  case 1:
          		goto flw_51
          	}
          }

          void entrypoint_400_58() {
/*<132>*/ 	start()
/*<133>*/ 	printf(/* textboxtype: 2, unk: 0, line: 65 */ "<0x10005:0x005a0000>My projections show that <color blue<Zelda>coloroff> must\nhave traveled through this area.")
/*<267>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<266>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_400_40() {
/*<257>*/ 	start()
/*<258>*/ 	printf(/* textboxtype: 1, unk: 0, line: 61 */ "My friend was kidnapped the other\nday, vrrt! And I heard they sucked out\nall of his electricity, zrrrrpt!")
/*<261>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_75() {
/*<291>*/ 	start()
/*<292>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 2, 'next': 293, 'param3': 40}
/*<293>*/ 	wait_frames(45)
          }

          void entrypoint_400_07() {
/*< 21>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 1, unk: 0, line: 8 */ "...")
          }

          void entrypoint_400_24() {
/*< 52>*/ 	start()
/*<186>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<329>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<330>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_187:
/*<187>*/ 				printf(/* textboxtype: 1, unk: 0, line: 39 */ "Did you figure out how to access the\nremote power nodes, zrrbt? That is\nmost impressive...for a human, vrrm.")
          			  case 1:
/*<331>*/ 				printf(/* textboxtype: 1, unk: 0, line: 62 */ "You are looking for the dragon god,\nzrrpt?\n\n\n<0x10009:0x13030000>If it's <color blue<Master Thunder Dragon >coloroff>you \nwant to meet, he's to the south of\n<color blue<Lanayru Caves>coloroff>, bzzt. I don't know of \nany other dragons, though, phweep.")
/*<350>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_187
          		}
          	  case 1:
/*<115>*/ 		switch (scene_flags[100 /* 0xD 10 */]) {
          		  case 0:
/*<116>*/ 			printf(/* textboxtype: 1, unk: 0, line: 37 */ "Ahhh! What are you doing, vrrt?!\n\n\n\n<0x10009:0x13030000>Still... You'll never get it to open just\nfiddling with the dials, bzzt.")
          			flw_155:
/*<155>*/ 			story_flags[732 /* us: 805A9B27 0x10, jp: 805ACDA7 0x10 */] = true;
/*<157>*/ 			story_flags[733 /* us: 805A9B27 0x20, jp: 805ACDA7 0x20 */] = true;
          		  case 1:
/*<180>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*< 53>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "You're trying to figure out how to\nconfigure the device to get you into\nLanayru Mining Facility, zrrpt?\n\n<0x10009:0x13030000>You look kind of suspicious, vrrm.\nI probably shouldn't be telling you how\nto access the remote power nodes to\nenter the facility, zwoop.\n<0x10009:0x13030000>And don't let me catch you stabbing\nor fiddling with this device, bzzt!")
          				goto flw_155
          			  case 1:
/*<181>*/ 				printf(/* textboxtype: 1, unk: 0, line: 38 */ "You look kind of suspicious, vrrm.\n\n\n\n<0x10009:0x13030000>Don't let me catch you fiddling with\nthis device, bzzt!")
          				goto flw_155
          			}
          		}
          	}
          }

          void entrypoint_400_59() {
/*<134>*/ 	start()
/*<143>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<135>*/ 	printf(/* textboxtype: 2, unk: 0, line: 73 */ "<color blue<<0x10005:0x005a0000>>coloroff>We have arrived at <color blue<Lanayru Deser>coloroff><color blue<t>coloroff>.\nThe terrain in this area changed\ndramatically as climate forces rapidly\nturned it into a desert.")
          }

          void entrypoint_400_76() {
/*<295>*/ 	start()
/*<296>*/ 	printf(/* textboxtype: 2, unk: 0, line: 86 */ "We have arrived at the <color blue<Temple of\nTime>coloroff>.\n\n\nYou can use your dowsing ability to\nlocate the entrance to the trial you\nmust pass to open the way to the\nsacred flame.")
/*<297>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_08() {
/*< 23>*/ 	start()
/*<225>*/ 	switch (scene_flags[29 /* 0x2 20 */]) {
          	  case 0:
/*<226>*/ 		printf(/* textboxtype: 1, unk: 0, line: 10 */ "Stay away from the blue stones, zrrpt.\nThey're too dangerous, vrrrrrm, for\nhumans! And try not to get in the way!")
          	  case 1:
/*< 24>*/ 		printf(/* textboxtype: 1, unk: 0, line: 9 */ "Where did you come from, dzzzzt?\nWe're here collecting Timeshift Stones\nand transporting them to <color blue<Lanayru\nMining Facility>coloroff>.\n<0x10009:0x13030000>Stay away from the blue stones, zrrpt.\nThey're too dangerous for humans!")
/*<227>*/ 		scene_flags[7 'Lanayru Desert'][29 /* 0x2 20 */] = true;
/*< 75>*/ 		scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          	}
          }

          void entrypoint_400_25() {
/*< 54>*/ 	start()
/*<332>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<333>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_55:
/*< 55>*/ 			printf(/* textboxtype: 1, unk: 0, line: 40 */ "...")
          		  case 1:
/*<353>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_55
          			  case 1:
/*<334>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 31}
          				goto flw_55
          			}
          		}
          	  case 1:
          		goto flw_55
          	}
          }

          void entrypoint_400_77() {
/*<301>*/ 	start()
/*<302>*/ 	printf(/* textboxtype: 2, unk: 0, line: 93 */ "<0x10012:0x0000000b>Master <heroname>, all three\nremote power nodes have been\nactivated.\n\nPlease make your way to the <color red<power\ngenerator >coloroff>in front of <color blue<Lanayru\nMining Facility>coloroff>.")
          }

          void entrypoint_400_09() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0, line: 11 */ "...")
          }

          void entrypoint_400_26() {
/*< 56>*/ 	start()
/*<188>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<335>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<336>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_189:
/*<189>*/ 				printf(/* textboxtype: 1, unk: 0, line: 44 */ "Did you figure out how to access the\nremote power nodes, zrrbt? That is\nmost impressive...for a human, vrrm.")
          			  case 1:
/*<337>*/ 				printf(/* textboxtype: 1, unk: 0, line: 62 */ "You are looking for the dragon god,\nzrrpt?\n\n\n<0x10009:0x13030000>If it's <color blue<Master Thunder Dragon >coloroff>you \nwant to meet, he's to the south of\n<color blue<Lanayru Caves>coloroff>, bzzt. I don't know of \nany other dragons, though, phweep.")
/*<352>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_189
          		}
          	  case 1:
/*<117>*/ 		switch (scene_flags[102 /* 0xD 40 */]) {
          		  case 0:
/*<118>*/ 			printf(/* textboxtype: 1, unk: 0, line: 42 */ "Ahhh! What are you doing, vrrt?!\n\n\n\n<0x10009:0x13030000>Still... You'll never get it to open just\nfiddling with the dials, bzzt.")
          			flw_153:
/*<153>*/ 			story_flags[731 /* us: 805A9B27 0x08, jp: 805ACDA7 0x08 */] = true;
/*<158>*/ 			story_flags[733 /* us: 805A9B27 0x20, jp: 805ACDA7 0x20 */] = true;
          		  case 1:
/*<182>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*< 57>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "You're trying to figure out how to\nconfigure the device to get you into\nLanayru Mining Facility, zrrpt?\n\n<0x10009:0x13030000>You look kind of suspicious, vrrm.\nI probably shouldn't be telling you how\nto access the remote power nodes to\nenter the facility, zwoop.\n<0x10009:0x13030000>And don't let me catch you stabbing\nor fiddling with this device, bzzt!")
          				goto flw_153
          			  case 1:
/*<183>*/ 				printf(/* textboxtype: 1, unk: 0, line: 43 */ "You look kind of suspicious, vrrm.\n\n\n\n<0x10009:0x13030000>Don't let me catch you fiddling with\nthis device, bzzt!")
          				goto flw_153
          			}
          		}
          	}
          }

          void entrypoint_400_60() {
/*<136>*/ 	start()
/*<137>*/ 	printf(/* textboxtype: 2, unk: 0, line: 74 */ "<0x10005:0x005a0000>I have confirmed numerous areas of\n<color red<sinksand>coloroff>. Should you step in sinksand,\nyou may be swallowed by the desert.\nBodily danger has increased by 30%.")
          }

          void entrypoint_400_78() {
/*<303>*/ 	start()
/*<304>*/ 	printf(/* textboxtype: 2, unk: 0, line: 94 */ "A report, <0x10012:0x0000000b>Master <heroname>.\nMy analysis indicates that you can\nrestore this <color red<device>coloroff> to an operable state\nby inserting a source of energy.")
          }

          void entrypoint_400_27() {
/*<119>*/ 	start()
/*<338>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<339>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_120:
/*<120>*/ 			printf(/* textboxtype: 1, unk: 0, line: 45 */ "...")
          		  case 1:
/*<355>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_120
          			  case 1:
/*<340>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 120, 'param3': 31}
          				goto flw_120
          			}
          		}
          	  case 1:
          		goto flw_120
          	}
          }

          void entrypoint_400_61() {
/*<138>*/ 	start()
/*<139>*/ 	printf(/* textboxtype: 2, unk: 0, line: 75 */ "<0x10005:0x005a0000>As a safety measure, I recommend\nyou <color red<<sound 4>check the terrain>coloroff> on your map\nwith (+). <0x10011:0x03cd>")
          }

          void entrypoint_400_79() {
/*<305>*/ 	start()
/*<306>*/ 	printf(/* textboxtype: 2, unk: 0, line: 80 */ "<0x10012:0x0000000b>A report, Master <heroname>.\n\n\n\nThe map you possess corresponds to the\nactual terrain of this area with only\n35% accuracy.\n\nThe robot you met earlier modified\nyour map to show <color red<past terrain>coloroff><sound 4> that is\nnow submerged below the sinksand.")
          }

          void entrypoint_400_10() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0, line: 12 */ "That's a mine cart for transporting\nTimeshift Stones, zrrpt. They're not\nfor human use, so get lost, vrrm!")
/*< 69>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_28() {
/*<121>*/ 	start()
/*<190>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<341>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<342>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_191:
/*<191>*/ 				printf(/* textboxtype: 1, unk: 0, line: 49 */ "Did you figure out how to access the\nremote power nodes, zrrbt? That is\nmost impressive...for a human, vrrm.")
          			  case 1:
/*<343>*/ 				printf(/* textboxtype: 1, unk: 0, line: 62 */ "You are looking for the dragon god,\nzrrpt?\n\n\n<0x10009:0x13030000>If it's <color blue<Master Thunder Dragon >coloroff>you \nwant to meet, he's to the south of\n<color blue<Lanayru Caves>coloroff>, bzzt. I don't know of \nany other dragons, though, phweep.")
/*<354>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_191
          		}
          	  case 1:
/*<123>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*<124>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "Ahhh! What are you doing, vrrt?!\n\n\n\n<0x10009:0x13030000>Still... You'll never get it to open just\nfiddling with the dials, bzzt.")
          			flw_154:
/*<154>*/ 			story_flags[731 /* us: 805A9B27 0x08, jp: 805ACDA7 0x08 */] = true;
/*<156>*/ 			story_flags[732 /* us: 805A9B27 0x10, jp: 805ACDA7 0x10 */] = true;
          		  case 1:
/*<184>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*<122>*/ 				printf(/* textboxtype: 1, unk: 0, line: 46 */ "You're trying to figure out how to\nconfigure the device to get you into\nLanayru Mining Facility, zrrpt?\n\n<0x10009:0x13030000>You look kind of suspicious, vrrm.\nI probably shouldn't be telling you how\nto access the remote power nodes to\nenter the facility, zwoop.\n<0x10009:0x13030000>And don't let me catch you stabbing\nor fiddling with this device, bzzt!")
          				goto flw_154
          			  case 1:
/*<185>*/ 				printf(/* textboxtype: 1, unk: 0, line: 48 */ "You look kind of suspicious, vrrm.\n\n\n\n<0x10009:0x13030000>Don't let me catch you fiddling with\nthis device, bzzt!")
          				goto flw_154
          			}
          		}
          	}
          }

          void entrypoint_400_62() {
/*<140>*/ 	start()
/*<141>*/ 	printf(/* textboxtype: 2, unk: 0, line: 76 */ "<0x10005:0x005a0000>My readings indicate that <color blue<Zelda >coloroff>has\npassed through here. As previously\nstated, this area is highly dangerous.\n\n<color blue<<0x10005:0x005a0000>>coloroff>I suggest reuniting with her quickly\nto determine the motivations behind\nher actions at <color blue<Eldin>coloroff> <color blue<Province>coloroff>.")
          }

          void entrypoint_400_11() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0, line: 13 */ "...")
          }

          void entrypoint_400_63() {
/*<144>*/ 	start()
/*<145>*/ 	printf(/* textboxtype: 2, unk: 0, line: 81 */ "<0x10012:0x0000000b>Master <heroname>, I have\ninformation to report.\n\n\nI can confirm that you will not be\nconsumed by the sinksand in this\ncurrent position. I suggest verifying\nyour location on the map.")
/*<192>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 261, 'next': 193, 'param3': 30}
/*<193>*/ 	printf(/* textboxtype: 2, unk: 0, line: 82 */ "Readings indicate that there is a\nsubmerged path beneath the\nsinksand.\n\nIt is possible to walk along a route\nabove this path without submerging\ncompletely into the sinksand.\n\nSimulations suggest that placing\nbeacons to mark a safe route along\nthese paths before proceeding would\nsignificantly reduce risk.")
/*<212>*/ 	printf(/* textboxtype: 2, unk: 0, line: 83 */ "I recommend placing <color blue<multiple>coloroff><sound 4> beacons.")
/*<195>*/ 	story_flags[745 /* us: 805A9B29 0x02, jp: 805ACDA9 0x02 */] = true;
/*<194>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 34}
          }

          void entrypoint_400_29() {
/*<232>*/ 	start()
/*<233>*/ 	printf(/* textboxtype: 1, unk: 0, line: 50 */ "...")
          }

          void entrypoint_400_80() {
/*<356>*/ 	start()
/*<357>*/ 	printf(/* textboxtype: 2, unk: 0, line: 95 */ "<color blue<Tumbleweeds>coloroff> sometimes roll across the\nsand in Lanayru Desert and other\nplaces.\n\nTumbleweeds are used as a material to \nupgrade a variety of items. You can\ncollect them with a<color red< Bug Net>coloroff>.")
          }

          void entrypoint_400_12() {
/*< 31>*/ 	start()
/*< 32>*/ 	printf(/* textboxtype: 1, unk: 0, line: 14 */ "Do not interfere with mining\noperations! Stop talking to me, zrrpt!")
/*< 70>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_64() {
/*<146>*/ 	start()
/*<147>*/ 	printf(/* textboxtype: 1, unk: 0, line: 101 */ "<0x10009:0x2f0c0d01><0x10006:0xffcd><0x10008:0x01cd><0x10009:0x2f000001>Hey, you over there! Say, is that\nmy buddy <heroname>?\nIt is!\n\n<0x10006:0xffcd><0x10008:0x01cd>You have come at the perfect\ntime! <pause 15>I have something I want to\nshow you.<pause 15>\n\n<0x10006:0x02cd><0x10008:0x01cd>Come on up here!")
/*<148>*/ 	scene_flags[7 'Lanayru Desert'][76 /* 0x8 10 */] = true;
/*<262>*/ 	story_flags[828 /* us: 805A9B33 0x10, jp: 805ACDB3 0x10 */] = true;
/*<263>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<264>*/ 	story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<265>*/ 	story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          }

