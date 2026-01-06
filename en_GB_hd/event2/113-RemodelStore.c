          void entrypoint_113_33() {
/*<174>*/ 	start()
/*<177>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x000e0e0c>Hey, kid! You're a little short on\nmaterials. You don't have enough\n<color yellow<<item 164>s>coloroff>.\n\nMy grandpa's notes say you can get\nthese from monsters that look like\nlizards.")
/*<178>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>So, is there anything else you want to\nupgrade?")
/*<176>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 175, 'param3': 12}
/*<175>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_34() {
/*<179>*/ 	start()
/*<182>*/ 	printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x000e0e0c>Looks like you're coming up short on\nmaterials, kid. Yep, you don't have\nenough <color yellow<<item 165>>coloroff>.\n\nMy grandpa's notes say you can find\nthat stuff buried within fiery\nmountains.")
/*<187>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>So, is there anything else you want to\nupgrade?")
/*<181>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 180, 'param3': 12}
/*<180>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_35() {
/*<183>*/ 	start()
/*<241>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*<242>*/ 		printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x000e0e0c>Hey, kid! Looks like you're a bit\nshort on materials. You don't have\nenough <color yellow<<item 166>s>coloroff>.\n\nMy grandpa's notes say these blooms\nused to grow all over a sandy land.\nIt's the same type of flower you used\nto fix Scrapper, remember?")
          		flw_188:
/*<188>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>So, is there anything else you want to\nupgrade?")
/*<185>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 184, 'param3': 12}
/*<184>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<186>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x000e0e0c>Hey, kid! Looks like you're a bit\nshort on materials. You don't have\nenough <color yellow<<item 166>s>coloroff>.\n\nMy grandpa's notes say these things\nused to bloom out in sandy land, but\nwho knows if there are still any around\nout there.")
          		goto flw_188
          	}
          }

          void entrypoint_113_01() {
          	start()
/*< 92>*/ 	switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          	  case 0:
/*< 93>*/ 		printf(/* textboxtype: 18, unk: 0, line: 114 */ "<0x10009:0x00000003>Hey, kid! How's <color blue<Scrapper>coloroff> treating\nyou? Anything to upgrade today?\n[1-]Upgrade.[2-]Repair shield.[3]No, thanks.")
          		flw_4:
/*<  4>*/ 		switch (choice(3)) {
          		  case 0:
/*< 31>*/ 			switch (context_related2(0)) {
          			  case 0:
/*<  2>*/ 				printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000009>You got it! These are all the items you\nhave that I can upgrade right now.")
/*<  5>*/ 				make_actor_do_something(0, 0)
          			  case 1:
/*< 32>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x000e0e0c>Hey, kid! You don't have anything\nI can upgrade for you right now...\nHow about you head over to Rupin's\nshop and buy something?")
          			}
          		  case 1:
/*< 69>*/ 			switch (context_related2(2)) {
          			  case 0:
/*< 68>*/ 				printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00000009>These are the shields you can repair\nright now.")
/*< 71>*/ 				make_actor_do_something(10, 0)
          			  case 1:
/*< 70>*/ 				printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x000e0e0c>What's all this nonsense? You don't\neven have any shields that need fixing!\n\n\nHaven't you got something better to\ndo than play jokes on hardworking\nfolks like me who are neck deep in\nelbow grease?")
          			}
          		  case 2:
/*<  3>*/ 			printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x000e0e0c>What the whazzit? Well then, why'd\nyou even come and talk to me?!")
          		}
          	  case 1:
/*< 54>*/ 		switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          		  case 0:
/*< 51>*/ 			printf(/* textboxtype: 19, unk: 0, line: 111 */ "<0x10009:0x00001104>So...take good care of <color blue<Scrapper>coloroff>\nfor me, will you? By the way, he can\nsense people's thought waves or\nsomething...\n<0x10009:0x00080700>That means wherever you are, if you\nneed him, he'll be there in a jiffy!\n\n\nHe's got kind of a mean little mouth on\nhim, but if he's in a good mood, he'll\nwork hard for you!\n<pause 30>Anyway, enough of my yappin'!")
/*< 55>*/ 			printf(/* textboxtype: 0, unk: 17, line: 112 */ "<0x10009:0x00070700>So how 'bout another upgrade?\nI'll repair your shield too!\n[1-]Upgrade.[2-]Repair shield.[3]No, thanks.")
          			goto flw_4
          		  case 1:
/*< 33>*/ 			switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          			  case 0:
/*< 39>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 40, 'param3': 31}
/*< 40>*/ 				printf(/* textboxtype: 0, unk: 18, line: 97 */ "<0x10009:0x00000003>Hey, kid! What's up? You look like you\nneed to get something off your chest...\n\n\nI think I know what it is. You've got a\nfavor to ask me, right?\n[1-]Yes.[2]Not really.")
/*< 41>*/ 				switch (choice(2)) {
          				  case 0:
/*< 36>*/ 					switch (story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */]) {
          					  case 0:
/*< 38>*/ 						printf(/* textboxtype: 0, unk: 0, line: 107 */ "<0x10009:0x00000001>If you want me to get <color blue<Scrapper>coloroff> here\nworking again, I need one <color yellow<Ancient\nFlower>coloroff>. But I dunno where they are.\n[1-]I have one![2]Me neither.")
          						flw_84:
/*< 84>*/ 						switch (choice(2)) {
          						  case 0:
/*< 85>*/ 							printf(/* textboxtype: 19, unk: 0, line: 102 */ "<0x10009:0x00070717>WHAT?! You have one?! Are you\nkiddin' me?! That's amazing!")
/*< 34>*/ 							switch (context_related2(1)) {
          							  case 0:
/*< 35>*/ 								printf(/* textboxtype: 0, unk: 0, line: 104 */ "<0x10009:0x000e0e0c>Hold it<0x10006:0xfdcd>... Why would you say you have\none when you really don't?! That's a\ndirty trick, kid.")
/*< 37>*/ 								story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
          							  case 1:
/*< 98>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 101, 'param3': 47}
/*<101>*/ 								set_camera(4, 0)
/*<100>*/ 								{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 356, 'next': 99, 'param3': 15}
/*< 99>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 42, 'param3': 48}
/*< 42>*/ 								printf(/* textboxtype: 18, unk: 0, line: 108 */ "<0x10009:0x00000018>So this is an <color yellow<Ancient Flower>coloroff>?!\nI can feel some slick, oily stuff coming\nout of its stem! Great, with this we can\nfix <color blue<Scrapper>coloroff>!\n<0x10009:0x00070700>...Wait right here! I'll have him up and\nrunning in no time!")
/*<112>*/ 								{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 61, 'param3': 42}
/*< 61>*/ 								make_actor_do_something(2, 0)
          							}
          						  case 1:
/*< 86>*/ 							printf(/* textboxtype: 0, unk: 17, line: 103 */ "<0x10009:0x000f0916>Yeah, who has, right?\nBut if I just had one <color yellow<Ancient Flower>coloroff>...")
/*< 91>*/ 							story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
/*<158>*/ 							zone_temp_flags[3 /* 0x1 08 */] = false;
          						}
          					  case 1:
/*< 52>*/ 						printf(/* textboxtype: 0, unk: 0, line: 98 */ "<0x10009:0x00101008>...Huh? <pause 40>It's about this old robot my\ngrandpa used to tinker around with?\n\n\n<0x10009:0x00000e00>...You probably just came here to make\nfun of the crazy junk guy for believing\nin his grandpa's stupid stories, right?\n\nWell, get in line... I've heard it before.<pause 40>\nWait... That's not why you're here?\nYou say you need to pick up something\nfrom below the clouds with this robot?\n<0x10009:0x00070700>Do you know what that means?!\nThat means...you believe in my\ngrandpa's stories too, don't you?!")
/*< 53>*/ 						printf(/* textboxtype: 18, unk: 0, line: 99 */ "<0x10009:0x000d0900>Well, I'm happy to hear that someone\nelse believes me, but I don't think I can\nhelp you. You see, my grandpa's old\nrobot... What's it called again...")
/*< 94>*/ 						set_camera(3, 0)
/*< 95>*/ 						printf(/* textboxtype: 0, unk: 19, line: 100 */ "Oh, hey, that's right... I remember!\nHis name is <color blue<Scrapper>coloroff>. He may not be\nmuch to look at these days...\n\nBut he was an amazing robot once!\nWhen you called him, he would go\nanywhere and haul anything!\n\nSadly, as you can see now<0x10006:0xffcd>...<0x10006:0x00cd>he's just\nanother busted ol' hunk of junk...")
/*< 96>*/ 						set_camera(-1, 0)
/*< 97>*/ 						printf(/* textboxtype: 0, unk: 0, line: 101 */ "<0x10009:0x000d0e00>But old Gramps did tell me this:\nyou can get him working again with the\nextract from an <color yellow<Ancient Flower>coloroff>.\nIt's like oil to this guy.\n<0x10009:0x000f0e00>But I've never even heard of, much less\nseen, any such thing!\n[1-]Take mine![2]Me neither.")
          						goto flw_84
          					}
          				  case 1:
          					flw_25:
/*< 25>*/ 					zone_temp_flags[4 /* 0x1 10 */] = false;
/*<  1>*/ 					printf(/* textboxtype: 1, unk: 1, line: 0 */ "<0x10009:0x00000001>Heyyyyy! Welcome to the Scrap Shop!\nI can use the stuff you find to upgrade \nyour gear and make it even stronger!\n\nAnd if your shield takes a beating, no\nworries. I can fix that too.\nSo what'll it be?\n[1-]Upgrade gear.[2-]Fix shield.[3]Never mind.")
          					goto flw_4
          				}
          			  case 1:
          				goto flw_25
          			}
          		}
          	}
          }

          void entrypoint_113_36() {
/*<189>*/ 	start()
/*<192>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x000e0e0c>Hey, kid! Looks like you're a bit\nshort on materials. You don't have\nenough <color yellow<<item 167>s>coloroff>.\n\nMy grandpa's notes say you can find\n<color yellow<<item 167>s>coloroff> in lots of different\nplaces. Seems like it's one treasure\nthat's not so hard to find.")
/*<193>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>So, is there anything else you want to\nupgrade?")
/*<191>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 190, 'param3': 12}
/*<190>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_02() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00080806>All right. You want to upgrade this?\nThere's no going back, y'hear?\n[1-]Go for it![2]Never mind.")
/*<  8>*/ 	switch (choice(2)) {
          	  case 0:
/*<128>*/ 		make_actor_do_something(3, 0)
/*< 10>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x0007070e>OK! You just wait right there!")
/*<102>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 12}
/*< 12>*/ 		make_actor_do_something(1, 0)
/*< 14>*/ 		printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00080809>All done! Here you go!")
/*< 26>*/ 		zone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 11>*/ 		printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x000e0e05>Make up your mind, little buddy!\nTry picking something else.")
/*<103>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 18, 'param3': 12}
/*< 18>*/ 		make_actor_do_something(0, 0)
          	}
          }

          void entrypoint_113_37() {
/*<194>*/ 	start()
/*<197>*/ 	printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x000e0e0c>Looks like you're coming up short on\nmaterials, kid. Yep, you don't have\nenough <color yellow<<item 168>s>coloroff>.\n\nMy grandpa's notes say you can find\nthese in the \"world of the spirit\"...\nwhatever that's supposed to mean.")
/*<198>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>So, is there anything else you want to\nupgrade?")
/*<196>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 195, 'param3': 12}
/*<195>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_03() {
/*<  9>*/ 	start()
/*<104>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 12}
/*< 27>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 28>*/ 		printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00080800>Oh, thanks! Come again soon, y'hear!<0x10009:0x00000002>")
/*<123>*/ 		story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
          		flw_143:
/*<143>*/ 		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          		  case 0:
/*<149>*/ 			switch (story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */]) {
          			  case 0:
          			  case 1:
/*<145>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 51}
/*<144>*/ 				printf(/* textboxtype: 19, unk: 0, line: 129 */ "A report, <0x10012:0x0000000b>Master.\n\n\n\nBecause of the improvement to your\nsword, you can now use your dowsing\nability to locate <color red<treasure>coloroff>.\n\nPlease use the additional entry in\nyour dowsing target list at your\nleisure and convenience.")
/*<146>*/ 				story_flags[102 /* us: 805A9ADE 0x08, jp: 805ACD5E 0x08 */] = true;
/*<157>*/ 				open_dowsing_wheel(18)
/*<147>*/ 				story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */] = true;
/*<148>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          			}
          		  case 1:
          		}
          	  case 1:
/*< 13>*/ 		printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x0009090d>Hold on now... You changed your \nmind? Well, in all the...\n\n\n<0x10009:0x00ffff00>Ehh, it's fine. Come see me whenever\nyou change it back, little buddy!<0x10009:0x00000002>")
          		goto flw_143
          	}
          }

          void entrypoint_113_20() {
/*< 58>*/ 	start()
/*< 60>*/ 	printf(/* textboxtype: 0, unk: 0, line: 113 */ "<0x10012:0x00000065><0x10009:0x0000000f>Phew<0x10006:0xfccd>...<0x10006:0x00cd> There you go!<0x10005:0x001e0000>")
          }

          void entrypoint_113_38() {
/*<199>*/ 	start()
/*<202>*/ 	printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x000e0e0c>Hey, kid! Looks like you're a bit\nshort on materials. You don't have\nenough <color yellow<<item 169>s>coloroff>.\n\nMy grandpa's notes say you can get\nthat disgusting stuff from soft,\nsquishy monsters.")
/*<207>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>So, is there anything else you want to\nupgrade?")
/*<201>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 200, 'param3': 12}
/*<200>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_04() {
/*< 15>*/ 	start()
/*<152>*/ 	switch (context_related2(0)) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 0, unk: 0, line: 11 */ "If you've got anything else you want\nme to tinker around with, you just let\nme know!")
/*< 17>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<151>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "Huh. Looks like you don't have\nanything else I can upgrade.\nCome again soon!")
          	}
          }

          void entrypoint_113_21() {
/*< 59>*/ 	start()
/*<111>*/ 	set_camera(5, 0)
/*< 62>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 22, 'next': 63, 'param3': 32}
/*< 63>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 0, 'next': 43, 'param3': 16}
/*< 43>*/ 	printf(/* textboxtype: 0, unk: 0, line: 116 */ "<0x10009:0x161a0200>Thank you, BZZRT! I've got a full tank\nof energy, and I'm ready to carry\nanything, zzzzt!")
/*<118>*/ 	set_camera(8, 0)
/*<119>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 113, 'param3': 16}
/*<113>*/ 	printf(/* textboxtype: 18, unk: 0, line: 117 */ "<pause 30><0x10009:0x160c0900>Huh...?<pause 30> Who is this green-clad\nindividual of small stature?")
/*<120>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 22, 'next': 44, 'param3': 50}
/*< 44>*/ 	printf(/* textboxtype: 0, unk: 19, line: 109 */ "<0x10009:0x0008110a>WHOA! It talked! Can you believe\nthat? I guess I really did fix him!\n\n\nThis kid gave me the materials I\nneeded to fix you. Go on!\nSay thank you!")
/*< 64>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 45, 'param3': 16}
/*< 45>*/ 	printf(/* textboxtype: 0, unk: 19, line: 118 */ "<0x10009:0x160b0900>...Hmmm. Are you sure it was him,\ngrrzt?\n\n\n<0x10009:0x160c0900>...Well then, I extend my reluctant\nthanks to you in a gesture of obligatory\ngratitude, vrrrrrrt-CHONK.")
/*< 65>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 22, 'next': 46, 'param3': 50}
/*< 46>*/ 	printf(/* textboxtype: 0, unk: 0, line: 110 */ "<0x10009:0x00090952>Heyyyy now! Watch it! That's no way\nto talk to someone who just saved\nyour life!\n\n<0x10009:0x00070700>...Anyway, this kid wants you to haul\nsome stuff around, and you're going\nto help him!")
/*< 66>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 47, 'param3': 16}
/*< 47>*/ 	printf(/* textboxtype: 0, unk: 0, line: 119 */ "<0x10009:0x160b0900>Hmmph. This individual may have\nrestored my operations, but I am not\ninclined to offer assistance, zrrt.\n\n<0x10009:0x160c0900>Serving children is very low in my task\npriority, dzzt!")
/*< 56>*/ 	{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 114, 'param3': 51}
/*<114>*/ 	set_camera(6, 0)
/*< 67>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 48, 'param3': 16}
/*< 48>*/ 	printf(/* textboxtype: 0, unk: 0, line: 125 */ "<0x10012:0x00000001>Master <heroname>...\n\n\n\nMaterials from the windmill have\nyielded a signal that you may search\nfor with your <color red<<sound 4>dowsing >coloroff>ability. Use it to\nlocate the fallen <color red<propeller>coloroff>.")
/*<136>*/ 	story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<137>*/ 	story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<138>*/ 	story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<139>*/ 	story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<140>*/ 	story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<141>*/ 	story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<155>*/ 	open_dowsing_wheel(12)
/*<154>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<156>*/ 	printf(/* textboxtype: 18, unk: 0, line: 126 */ "However, it will not be possible to\ncarry the item in your pouch and\nreturn to the sky.")
/*<125>*/ 	set_camera(11, 0)
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 22, 'next': 115, 'param3': 17}
/*<115>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 3, 'next': 49, 'param3': 50}
/*< 49>*/ 	printf(/* textboxtype: 19, unk: 0, line: 120 */ "<0x10009:0x161a0200>Who are you?!\n<0x10009:0x160e0200>ZRRPT-FOOOSH!")
/*<126>*/ 	set_camera(10, 0)
/*<129>*/ 	printf(/* textboxtype: 0, unk: 17, line: 121 */ "<0x10009:0x160e0200>Your name is...Fi? Dzzt! Should I call\nyou Mistress Fi? Are you looking for\nsomething, Mistress Fi?")
/*<116>*/ 	printf(/* textboxtype: 0, unk: 0, line: 122 */ "<0x10009:0x160c0200>I... <pause 20>I understand, vrrt!\n\n\n\n<0x10009:0x160e0200>At your request, I will carry anything,\nregardless of weight or destination...\nwhizzt!")
/*< 87>*/ 	printf(/* textboxtype: 0, unk: 19, line: 127 */ "<0x10006:0xfccd><0x10012:0x00000014>......<0x10006:0x00cd>")
/*<131>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 88, 'param3': 16}
/*< 88>*/ 	printf(/* textboxtype: 0, unk: 0, line: 128 */ "<0x10012:0x00000001>Master...\n\n\n\nWe now have the means to bring the\npropeller back to Skyloft. You may\nimmediately begin your search for the\n<color blue<Windmill Propeller>coloroff>.")
/*< 57>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 90, 'param3': 36}
/*< 90>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 127, 'param3': 16}
/*<127>*/ 	set_camera(11, 0)
/*< 89>*/ 	printf(/* textboxtype: 18, unk: 0, line: 123 */ "<0x10009:0x160c0200>Master Shortpants! I offer\nassistance! I can now detect Mistress\nFi's thought waves, vrrt!\n\n<0x10009:0x160e0200>Should you need me, ask Mistress Fi to\ncall me, and I will arrive with haste,\nbzzat!")
/*< 50>*/ 	story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */] = true;
/*<135>*/ 	set_camera(8, 0)
/*<150>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 134, 'param3': 50}
/*<134>*/ 	printf(/* textboxtype: 0, unk: 18, line: 115 */ "<0x10009:0x00070700>So how do you plan to recover all the\nstuff that fell beneath the clouds?\n\n\nYou know, you could always ask the\n<color red<fortune-teller >coloroff>over there...\n\n\nI know he's kind of goofy looking,\nbut when it comes to finding things,\nhe's always right on the money.")
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 142, 'param3': 42}
/*<142>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<153>*/ 	zone_temp_flags[3 /* 0x1 08 */] = false;
          }

          void entrypoint_113_39() {
/*<203>*/ 	start()
/*<206>*/ 	printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x000e0e0c>Looks like you're coming up short on\nmaterials, kid. Yep, you don't have\nenough <color yellow<<item 170>s>coloroff>.\n\nMy grandpa's notes say you can get\n<color yellow<<item 170>s>coloroff> from flying monsters,\nincluding the ones that come out \naround here at night.")
/*<239>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<240>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00100e11>Hmm...though now that I think of it,\nnights around here have been strangely\nmonster free lately!")
          		flw_208:
/*<208>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>So, is there anything else you want to\nupgrade?")
/*<205>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 204, 'param3': 12}
/*<204>*/ 		make_actor_do_something(0, 0)
          	  case 1:
          		goto flw_208
          	}
          }

          void entrypoint_113_05() {
/*< 19>*/ 	start()
/*< 21>*/ 	printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x000e0e0c>Hey, kid! I can't upgrade that if you\nhaven't got the treasure I need to do it!\n\n\n<0x10009:0x00070700>Come on. Pick something else\nfor me to upgrade for you!")
/*<105>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 24, 'param3': 12}
/*< 24>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_06() {
/*< 20>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x000e0e0c>Hey, kid! You don't have enough\nRupees. I don't do charity upgrades!\n\n\n<0x10009:0x00070700>Pick something else for me to upgrade\nfor you!")
/*<106>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 23, 'param3': 12}
/*< 23>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_40() {
/*<209>*/ 	start()
/*<212>*/ 	printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x000e0e0c>Hey, kid! Looks like you're a bit\nshort on materials. You don't have\nenough <color yellow<<item 171>s>coloroff>.\n\nGrandpa's notes say you can get 'em\nfrom monsters that use them to call\ntheir buddies, but you'd need to pull\n'em out of their hands using something.")
/*<213>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>So, is there anything else you want to\nupgrade?")
/*<211>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 210, 'param3': 12}
/*<210>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_07() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x000e0e0c>Hey, kid! You don't have anything\nI can upgrade for you right now...\nHow about you head over to Rupin's\nshop and buy something?")
          }

          void entrypoint_113_41() {
/*<214>*/ 	start()
/*<217>*/ 	printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x000e0e0c>Looks like you're coming up short on\nmaterials, kid. Yep, you don't have\nenough <color yellow<<item 172>s>coloroff>.\n\nAccording to my grandpa's notes,\nyou can sometimes get these from\nmonsters that carry clubs...")
/*<218>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>So, is there anything else you want to\nupgrade?")
/*<216>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 215, 'param3': 12}
/*<215>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_08() {
/*< 72>*/ 	start()
/*< 77>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 73, 'param3': 12}
/*< 73>*/ 	printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00080800>OK. One shield in need of patching up.\nThat'll be <color red<10 rupees>coloroff>.\n[1-]OK![2]No, thanks.")
/*< 74>*/ 	switch (choice(2)) {
          	  case 0:
/*< 81>*/ 		switch (has_rupees(10)) {
          		  case 0:
/*< 83>*/ 			rupees += -10;
/*< 78>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x0007070e>OK! You just wait right there!")
/*<132>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 121, 'param3': 12}
/*<121>*/ 			story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = true;
/*< 79>*/ 			make_actor_do_something(11, 0)
/*< 80>*/ 			printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00080809>All done! Here you go!")
          		  case 1:
/*< 82>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x000e0e0c>Hey, kid! You don't have enough\nRupees! Go find some and come back!")
          		}
          	  case 1:
/*< 75>*/ 		printf(/* textboxtype: 0, unk: 0, line: 17 */ "Not interested, huh? Do you need me\nto fix anything else?")
/*<133>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 12}
/*< 76>*/ 		make_actor_do_something(10, 0)
          	}
          }

          void entrypoint_113_42() {
/*<219>*/ 	start()
/*<222>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000e0e0c>Hey, kid! Looks like you're a bit\nshort on materials. You don't have\nenough <color yellow<<item 173>s>coloroff>.\n\nAccording to my grandpa's notes, you\ncan get 'em by slaying monsters who\nhave the power to curse you...")
/*<227>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>So, is there anything else you want to\nupgrade?")
/*<221>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 220, 'param3': 12}
/*<220>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_09() {
/*<124>*/ 	start()
/*<122>*/ 	story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
/*<107>*/ 	switch (context_related2(2)) {
          	  case 0:
/*<108>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00080800>Hey, kid! You want me to fix any of\nyour other shields?")
/*<110>*/ 		make_actor_do_something(10, 0)
          	  case 1:
/*<109>*/ 		printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00080800>Hey, kid! Looks like you're out of\nshields that need repairing.\nSee you later!")
          	}
          }

          void entrypoint_113_43() {
/*<223>*/ 	start()
/*<226>*/ 	printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x000e0e0c>Hey, kid! Looks like you're a bit\nshort on materials. You don't have\nenough <color yellow<<item 174>s>coloroff>.\n\nMy grandpa's notes say you can get\nthese feathers from the rare little\nblue birds living in wooded areas.\nYou'll need a Bug Net, though!")
/*<228>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>So, is there anything else you want to\nupgrade?")
/*<225>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 224, 'param3': 12}
/*<224>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_44() {
/*<229>*/ 	start()
/*<232>*/ 	printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x000e0e0c>Hey, kid! Looks like you're a bit\nshort on materials. You don't have\nenough <color yellow<<item 175>s>coloroff>.\n\n<color yellow<<0x30001:0x><item 175>s>coloroff> are <item 172>s\nthat shine bright like gold. Seems like\nthey are crazy rare!")
/*<233>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>So, is there anything else you want to\nupgrade?")
/*<231>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 230, 'param3': 12}
/*<230>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_45() {
/*<234>*/ 	start()
/*<237>*/ 	printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x000e0e0c>Hey, kid! Looks like you're a bit\nshort on materials. You don't have\nenough <color yellow<<item 176>s>coloroff>.\n\nThey're very rare and extremely\nvaluable, or at least that's what it says\nhere in my grandpa's notes.")
/*<238>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>So, is there anything else you want to\nupgrade?")
/*<236>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 235, 'param3': 12}
/*<235>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_30() {
/*<159>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x000e0e0c>Hey, kid! It looks like you're a bit short\non materials. You don't have enough\n<color yellow<<item 161>>coloroff>.\n\nMy grandpa's notes say you can find\nthe stuff in some of the Deku Hornet\nhives found in heavily wooded areas.")
/*<167>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>So, is there anything else you want to\nupgrade?")
/*<161>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 160, 'param3': 12}
/*<160>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_31() {
/*<163>*/ 	start()
/*<166>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x000e0e0c>Hey, kid! It looks like you're a bit short\non materials. You don't have enough\n<color yellow<<item 162>s>coloroff>.\n\nMy grandpa's notes say you can find\nthese feathers on little birds living in\nwooded areas. If you find one, you'll\nneed to use your Bug Net to catch it.")
/*<168>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>So, is there anything else you want to\nupgrade?")
/*<165>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 164, 'param3': 12}
/*<164>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_32() {
/*<169>*/ 	start()
/*<172>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x000e0e0c>Looks like you're coming up short on\nmaterials, kid. Yep, you don't have\nenough <color yellow<<item 163>s>coloroff>.\n\nMy grandpa's notes say you can find\n<color yellow<<item 163>s>coloroff> rolling around in the\ndesert. You'll need a net to catch them,\nthough.")
/*<173>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>So, is there anything else you want to\nupgrade?")
/*<171>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 170, 'param3': 12}
/*<170>*/ 	make_actor_do_something(0, 0)
          }

