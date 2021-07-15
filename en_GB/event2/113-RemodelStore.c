          void entrypoint_113_33() {
/*<174>*/ 	start()
/*<177>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, kid! You're a little short on\nmaterials. You don't have enough\n<y<<itemA4>s>>.\n\nMy grandpa's notes say you can get\nthese from monsters that look like\nlizards.")
/*<178>*/ 	printf("\x0E\x01\x09\x04\x07\x700So, is there anything else you want to\nupgrade?")
/*<176>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 175, 'param3': 12}
/*<175>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_34() {
/*<179>*/ 	start()
/*<182>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CLooks like you're coming up short on\nmaterials, kid. Yep, you don't have\nenough <y<<itemA5>>>.\n\nMy grandpa's notes say you can find\nthat stuff buried within fiery\nmountains.")
/*<187>*/ 	printf("\x0E\x01\x09\x04\x07\x700So, is there anything else you want to\nupgrade?")
/*<181>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 180, 'param3': 12}
/*<180>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_35() {
/*<183>*/ 	start()
/*<241>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*<242>*/ 		printf("\x0E\x01\x09\x04\x0E\xE0CHey, kid! Looks like you're a bit\nshort on materials. You don't have\nenough <y<<itemA6>s>>.\n\nMy grandpa's notes say these blooms\nused to grow all over a sandy land.\nIt's the same type of flower you used\nto fix Scrapper, remember?")
          		flw_188:
/*<188>*/ 		printf("\x0E\x01\x09\x04\x07\x700So, is there anything else you want to\nupgrade?")
/*<185>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 184, 'param3': 12}
/*<184>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<186>*/ 		printf("\x0E\x01\x09\x04\x0E\xE0CHey, kid! Looks like you're a bit\nshort on materials. You don't have\nenough <y<<itemA6>s>>.\n\nMy grandpa's notes say these things\nused to bloom out in sandy land, but\nwho knows if there are still any around\nout there.")
          		goto flw_188
          	}
          }

          void entrypoint_113_01() {
          	start()
/*< 92>*/ 	switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          	  case 0:
/*< 93>*/ 		printf("\x0E\x01\x09\x04\x00\x03Hey, kid! How's <b<Scrapper>> treating\nyou? Anything to upgrade today?\n[1]Upgrade.[2]Repair shield.[3-]No, thanks.")
          		flw_4:
/*<  4>*/ 		switch (choice(3)) {
          		  case 0:
/*< 31>*/ 			switch (context_related2(0)) {
          			  case 0:
/*<  2>*/ 				printf("\x0E\x01\x09\x04\x00\x09You got it! These are all the items you\nhave that I can upgrade right now.")
/*<  5>*/ 				make_actor_do_something(0, 0)
          			  case 1:
/*< 32>*/ 				printf("\x0E\x01\x09\x04\x0E\xE0CHey, kid! You don't have anything\nI can upgrade for you right now...\nHow about you head over to Rupin's\nshop and buy something?")
          			}
          		  case 1:
/*< 69>*/ 			switch (context_related2(2)) {
          			  case 0:
/*< 68>*/ 				printf("\x0E\x01\x09\x04\x00\x09These are the shields you can repair\nright now.")
/*< 71>*/ 				make_actor_do_something(10, 0)
          			  case 1:
/*< 70>*/ 				printf("\x0E\x01\x09\x04\x0E\xE0CWhat's all this nonsense? You don't\neven have any shields that need fixing!\n\n\nHaven't you got something better to\ndo than play jokes on hardworking\nfolks like me who are neck deep in\nelbow grease?")
          			}
          		  case 2:
/*<  3>*/ 			printf("\x0E\x01\x09\x04\x0E\xE0CWhat the whazzit?! Well then, why'd\nyou even come and talk to me?!")
          		}
          	  case 1:
/*< 54>*/ 		switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          		  case 0:
/*< 51>*/ 			printf("\x0E\x01\x09\x04\x00\x1104So...take good care of <b<Scrapper>>\nfor me, will you? By the way, he can\nsense people's thought waves or\nsomething...\n\x0E\x01\x09\x04\x08\x700That means wherever you are, if you\nneed him, he'll be there in a jiffy!\n\n\nHe's got kind of a mean little mouth on\nhim, but if he's in a good mood, he'll\nwork hard for you!\n<pause1E>Anyway, enough of my yappin'!")
/*< 55>*/ 			printf("\x0E\x01\x09\x04\x07\x700So how 'bout another upgrade?\nI'll repair your shield too!\n[1]Upgrade.[2]Repair shield.[3-]No, thanks.")
          			goto flw_4
          		  case 1:
/*< 33>*/ 			switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          			  case 0:
/*< 39>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 40, 'param3': 31}
/*< 40>*/ 				printf("\x0E\x01\x09\x04\x00\x03Hey, kid! What's up? You look like you\nneed to get something off your chest...\n\n\nI think I know what it is. You've got a\nfavor to ask me, right?\n[1]Yes.[2-]Not really.")
/*< 41>*/ 				switch (choice(2)) {
          				  case 0:
/*< 36>*/ 					switch (story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */]) {
          					  case 0:
/*< 38>*/ 						printf("\x0E\x01\x09\x04\x00\x01If you want me to get <b<Scrapper>> here\nworking again, I need one <y<Ancient\nFlower>>. But I dunno where they are.\n[1]I have one![2-]Me, neither.")
          						flw_84:
/*< 84>*/ 						switch (choice(2)) {
          						  case 0:
/*< 85>*/ 							printf("\x0E\x01\x09\x04\x07\x717WHAT?! You have one?! Are you\nkiddin' me?! That's amazing!")
/*< 34>*/ 							switch (context_related2(1)) {
          							  case 0:
/*< 35>*/ 								printf("\x0E\x01\x09\x04\x0E\xE0CHold it\x0E\x01\x06\x02\xFDCD... Why would you say you have\none when you really don't?! That's a\ndirty trick, kid.")
/*< 37>*/ 								story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
          							  case 1:
/*< 98>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 101, 'param3': 47}
/*<101>*/ 								set_camera(4, 0)
/*<100>*/ 								{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 356, 'next': 99, 'param3': 15}
/*< 99>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 42, 'param3': 48}
/*< 42>*/ 								printf("\x0E\x01\x09\x04\x00\x18So this is an <y<Ancient Flower>>?!\nI can feel some slick, oily stuff coming\nout of its stem! Great, with this we can\nfix <b<Scrapper>>!\n\x0E\x01\x09\x04\x07\x700...Wait right here! I'll have him up and\nrunning in no time!")
/*<112>*/ 								{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 61, 'param3': 42}
/*< 61>*/ 								make_actor_do_something(2, 0)
          							}
          						  case 1:
/*< 86>*/ 							printf("\x0E\x01\x09\x04\x0F\x916Yeah, who has, right?\nBut if I just had one <y<Ancient Flower>>...")
/*< 91>*/ 							story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
/*<158>*/ 							zone_temp_flags[3 /* 0x1 08 */] = false;
          						}
          					  case 1:
/*< 52>*/ 						printf("\x0E\x01\x09\x04\x10\x1008...Huh? <pause28>It's about this old robot my\ngrandpa used to tinker around with?\n\n\n\x0E\x01\x09\x04\x00\xE00...You probably just came here to make\nfun of the crazy junk guy for believing\nin his grandpa's stupid stories, right?\n\nWell, get in line... I've heard it before.<pause28>\nWait... That's not why you're here?\nYou say you need to pick up something\nfrom below the clouds with this robot?\n\x0E\x01\x09\x04\x07\x700Do you know what that means?!\nThat means...you believe in my\ngrandpa's stories too, don't you?!")
/*< 53>*/ 						printf("\x0E\x01\x09\x04\x0D\x900Well, I'm happy to hear that someone\nelse believes me, but I don't think I can\nhelp you. You see, my grandpa's old\nrobot... What's it called again...")
/*< 94>*/ 						set_camera(3, 0)
/*< 95>*/ 						printf("Oh, hey, that's right... I remember!\nHis name is <b<Scrapper>>. He may not be\nmuch to look at these days...\n\nBut he was an amazing robot once!\nWhen you called him, he would go\nanywhere and haul anything!\n\nSadly, as you can see now\x0E\x01\x06\x02\xFFCD...\x0E\x01\x06\x02Íhe's just\nanother busted ol' hunk of junk...")
/*< 96>*/ 						set_camera(-1, 0)
/*< 97>*/ 						printf("\x0E\x01\x09\x04\x0D\xE00But old Gramps did tell me this:\nyou can get him working again with the\nextract from an <y<Ancient Flower>>.\nIt's like oil to this guy.\n\x0E\x01\x09\x04\x0F\xE00But I've never even heard of, much less\nseen, any such thing!\n[1]Take mine![2-]Me neither.")
          						goto flw_84
          					}
          				  case 1:
          					flw_25:
/*< 25>*/ 					zone_temp_flags[4 /* 0x1 10 */] = false;
/*<  1>*/ 					printf("\x0E\x01\x09\x04\x00\x01Heyyyyy! Welcome to the Scrap Shop!\nI can use the stuff you find to upgrade \nyour gear and make it even stronger!\n\nAnd if your shield takes a beating, no\nworries. I can fix that too.\nSo what'll it be?\n[1]Upgrade gear.[2]Fix shield.[3-]Never mind.")
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
/*<192>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, kid! Looks like you're a bit\nshort on materials. You don't have\nenough <y<<itemA7>s>>.\n\nMy grandpa's notes say you can find\n<y<<itemA7>s>> in lots of different\nplaces. Seems like it's one treasure\nthat's not so hard to find.")
/*<193>*/ 	printf("\x0E\x01\x09\x04\x07\x700So, is there anything else you want to\nupgrade?")
/*<191>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 190, 'param3': 12}
/*<190>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_02() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf("\x0E\x01\x09\x04\x08\x806All right. You want to upgrade this?\nThere's no going back, y'hear?\n[1]Go for it![2-]Never mind.")
/*<  8>*/ 	switch (choice(2)) {
          	  case 0:
/*<128>*/ 		make_actor_do_something(3, 0)
/*< 10>*/ 		printf("\x0E\x01\x09\x04\x07\x70EOK! You just wait right there!")
/*<102>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 12}
/*< 12>*/ 		make_actor_do_something(1, 0)
/*< 14>*/ 		printf("\x0E\x01\x09\x04\x08\x809All done! Here you go!")
/*< 26>*/ 		zone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 11>*/ 		printf("\x0E\x01\x09\x04\x0E\xE05Make up your mind, little buddy!\nTry picking something else.")
/*<103>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 18, 'param3': 12}
/*< 18>*/ 		make_actor_do_something(0, 0)
          	}
          }

          void entrypoint_113_37() {
/*<194>*/ 	start()
/*<197>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CLooks like you're coming up short on\nmaterials, kid. Yep, you don't have\nenough <y<<itemA8>s>>.\n\nMy grandpa's notes say you can find\nthese in the \"world of the spirit\"...\nwhatever that's supposed to mean.")
/*<198>*/ 	printf("\x0E\x01\x09\x04\x07\x700So, is there anything else you want to\nupgrade?")
/*<196>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 195, 'param3': 12}
/*<195>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_03() {
/*<  9>*/ 	start()
/*<104>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 12}
/*< 27>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 28>*/ 		printf("\x0E\x01\x09\x04\x08\x800Oh, thanks! Come again soon, y'hear!\x0E\x01\x09\x04\x00\x02")
/*<123>*/ 		story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
          		flw_143:
/*<143>*/ 		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          		  case 0:
/*<149>*/ 			switch (story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */]) {
          			  case 0:
          			  case 1:
/*<145>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 51}
/*<144>*/ 				printf("A report, \x0E\x01\x12\x04\x00\x0BMaster.\n\n\n\nBecause of the improvement to your\nsword, you can now use your dowsing\nability to locate <r<treasure>>.\n\nPlease use the additional entry in\nyour dowsing target list at your\nleisure and convenience.")
/*<146>*/ 				story_flags[102 /* us: 805A9ADE 0x08, jp: 805ACD5E 0x08 */] = true;
/*<157>*/ 				open_dowsing_wheel(18)
/*<147>*/ 				story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */] = true;
/*<148>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          			}
          		  case 1:
          		}
          	  case 1:
/*< 13>*/ 		printf("\x0E\x01\x09\x04\x09\x90DHold on now... You changed your \nmind? Well, in all the...\n\n\n\x0E\x01\x09\x04ÿ\xFF00Ehh, it's fine. Come see me whenever\nyou change it back, little buddy!\x0E\x01\x09\x04\x00\x02")
          		goto flw_143
          	}
          }

          void entrypoint_113_20() {
/*< 58>*/ 	start()
/*< 60>*/ 	printf("\x0E\x01\x12\x04\x00e\x0E\x01\x09\x04\x00\x0FPhew\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í There you go!\x0E\x01\x05\x04\x1E\x00")
          }

          void entrypoint_113_38() {
/*<199>*/ 	start()
/*<202>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, kid! Looks like you're a bit\nshort on materials. You don't have\nenough <y<<itemA9>s>>.\n\nMy grandpa's notes say you can get\nthat disgusting stuff from soft,\nsquishy monsters.")
/*<207>*/ 	printf("\x0E\x01\x09\x04\x07\x700So, is there anything else you want to\nupgrade?")
/*<201>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 200, 'param3': 12}
/*<200>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_04() {
/*< 15>*/ 	start()
/*<152>*/ 	switch (context_related2(0)) {
          	  case 0:
/*< 16>*/ 		printf("If you've got anything else you want\nme to tinker around with, you just let\nme know!")
/*< 17>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<151>*/ 		printf("Huh. Looks like you don't have\nanything else I can upgrade.\nCome again soon!")
          	}
          }

          void entrypoint_113_21() {
/*< 59>*/ 	start()
/*<111>*/ 	set_camera(5, 0)
/*< 62>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 22, 'next': 63, 'param3': 32}
/*< 63>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 0, 'next': 43, 'param3': 16}
/*< 43>*/ 	printf("\x0E\x01\x09\x04\x161A\x200Thank you, BZZRT! I've got a full tank\nof energy, and I'm ready to carry\nanything, zzzzt!")
/*<118>*/ 	set_camera(8, 0)
/*<119>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 113, 'param3': 16}
/*<113>*/ 	printf("<pause1E>\x0E\x01\x09\x04\x160C\x900Huh...?<pause1E> Who is this green-clad\nindividual of small stature?")
/*<120>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 22, 'next': 44, 'param3': 50}
/*< 44>*/ 	printf("\x0E\x01\x09\x04\x08\x110AWHOA! It talked! Can you believe\nthat? I guess I really did fix him!\n\n\nThis kid gave me the materials I\nneeded to fix you. Go on!\nSay thank you!")
/*< 64>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 45, 'param3': 16}
/*< 45>*/ 	printf("\x0E\x01\x09\x04\x160B\x900...Hmmm. Are you sure it was him,\ngrrzt?\n\n\n\x0E\x01\x09\x04\x160C\x900...Well then, I extend my reluctant\nthanks to you in a gesture of obligatory\ngratitude, vrrrrrrt-CHONK.")
/*< 65>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 22, 'next': 46, 'param3': 50}
/*< 46>*/ 	printf("\x0E\x01\x09\x04\x09\x952Heyyyy now! Watch it! That's no way\nto talk to someone who just saved\nyour life!\n\n\x0E\x01\x09\x04\x07\x700...Anyway, this kid wants you to haul\nsome stuff around, and you're going\nto help him!")
/*< 66>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 47, 'param3': 16}
/*< 47>*/ 	printf("\x0E\x01\x09\x04\x160B\x900Hmmph. This individual may have\nrestored my operations, but I am not\ninclined to offer assistance, zrrt.\n\n\x0E\x01\x09\x04\x160C\x900Serving children is very low in my task\npriority, dzzt!")
/*< 56>*/ 	{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 114, 'param3': 51}
/*<114>*/ 	set_camera(6, 0)
/*< 67>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 48, 'param3': 16}
/*< 48>*/ 	printf("\x0E\x01\x12\x04\x00\x01Master Link...\n\n\n\nMaterials from the windmill have\nyielded a signal that you may search\nfor with your <r<<pling>dowsing >>ability. Use it to\nlocate the fallen <r<propeller>>.")
/*<136>*/ 	story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<137>*/ 	story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<138>*/ 	story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<139>*/ 	story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<140>*/ 	story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<141>*/ 	story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<155>*/ 	open_dowsing_wheel(12)
/*<154>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<156>*/ 	printf("However, it will not be possible to\ncarry the item in your pouch and\nreturn to the sky.")
/*<125>*/ 	set_camera(11, 0)
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 22, 'next': 115, 'param3': 17}
/*<115>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 3, 'next': 49, 'param3': 50}
/*< 49>*/ 	printf("\x0E\x01\x09\x04\x161A\x200Who are you?!\n\x0E\x01\x09\x04\x160E\x200ZRRPT-FOOOSH!")
/*<126>*/ 	set_camera(10, 0)
/*<129>*/ 	printf("\x0E\x01\x09\x04\x160E\x200Your name is...Fi? Dzzt! Should I call\nyou Mistress Fi? Are you looking for\nsomething, Mistress Fi?")
/*<116>*/ 	printf("\x0E\x01\x09\x04\x160C\x200I... <pause14>I understand, vrrt!\n\n\n\n\x0E\x01\x09\x04\x160E\x200At your request, I will carry anything,\nregardless of weight or destination...\nwhizzt!")
/*< 87>*/ 	printf("\x0E\x01\x06\x02\xFCCD\x0E\x01\x12\x04\x00\x14......\x0E\x01\x06\x02Í")
/*<131>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 88, 'param3': 16}
/*< 88>*/ 	printf("\x0E\x01\x12\x04\x00\x01Master...\n\n\n\nWe now have the means to bring the\npropeller back to Skyloft. You may\nimmediately begin your search for the\n<b<Windmill Propeller>>.")
/*< 57>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 90, 'param3': 36}
/*< 90>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 127, 'param3': 16}
/*<127>*/ 	set_camera(11, 0)
/*< 89>*/ 	printf("\x0E\x01\x09\x04\x160C\x200Master Shortpants! I offer\nassistance! I can now detect Mistress\nFi's thought waves, vrrt!\n\n\x0E\x01\x09\x04\x160E\x200Should you need me, ask Mistress Fi to\ncall me, and I will arrive with haste,\nbzzat!")
/*< 50>*/ 	story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */] = true;
/*<135>*/ 	set_camera(8, 0)
/*<150>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 134, 'param3': 50}
/*<134>*/ 	printf("\x0E\x01\x09\x04\x07\x700So how do you plan to recover all the\nstuff that fell beneath the clouds?\n\n\nYou know, you could always ask the\n<r<fortune-teller >>over there...\n\n\nI know he's kind of goofy looking,\nbut when it comes to finding things,\nhe's always right on the money.")
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 142, 'param3': 42}
/*<142>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<153>*/ 	zone_temp_flags[3 /* 0x1 08 */] = false;
          }

          void entrypoint_113_39() {
/*<203>*/ 	start()
/*<206>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CLooks like you're coming up short on\nmaterials, kid. Yep, you don't have\nenough <y<<itemAA>s>>.\n\nMy grandpa's notes say you can get\n<y<<itemAA>s>> from flying monsters,\nincluding the ones that come out \naround here at night.")
/*<239>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<240>*/ 		printf("\x0E\x01\x09\x04\x10\xE11Hmm...though now that I think of it,\nnights around here have been strangely\nmonster free lately!")
          		flw_208:
/*<208>*/ 		printf("\x0E\x01\x09\x04\x07\x700So, is there anything else you want to\nupgrade?")
/*<205>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 204, 'param3': 12}
/*<204>*/ 		make_actor_do_something(0, 0)
          	  case 1:
          		goto flw_208
          	}
          }

          void entrypoint_113_05() {
/*< 19>*/ 	start()
/*< 21>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, kid! I can't upgrade that if you\nhaven't got the treasure I need to do it!\n\n\n\x0E\x01\x09\x04\x07\x700Come on. Pick something else\nfor me to upgrade for you!")
/*<105>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 24, 'param3': 12}
/*< 24>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_06() {
/*< 20>*/ 	start()
/*< 22>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, kid! You don't have enough\nRupees. I don't do charity upgrades!\n\n\n\x0E\x01\x09\x04\x07\x700Pick something else for me to upgrade\nfor you!")
/*<106>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 23, 'param3': 12}
/*< 23>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_40() {
/*<209>*/ 	start()
/*<212>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, kid! Looks like you're a bit\nshort on materials. You don't have\nenough <y<<itemAB>s>>.\n\nGrandpa's notes say you can get 'em\nfrom monsters that use them to call\ntheir buddies, but you'd need to pull\n'em out of their hands using something.")
/*<213>*/ 	printf("\x0E\x01\x09\x04\x07\x700So, is there anything else you want to\nupgrade?")
/*<211>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 210, 'param3': 12}
/*<210>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_07() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, kid! You don't have anything\nI can upgrade for you right now...\nHow about you head over to Rupin's\nshop and buy something?")
          }

          void entrypoint_113_41() {
/*<214>*/ 	start()
/*<217>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CLooks like you're coming up short on\nmaterials, kid. Yep, you don't have\nenough <y<<itemAC>s>>.\n\nAccording to my grandpa's notes,\nyou can sometimes get these from\nmonsters that carry clubs...")
/*<218>*/ 	printf("\x0E\x01\x09\x04\x07\x700So, is there anything else you want to\nupgrade?")
/*<216>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 215, 'param3': 12}
/*<215>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_08() {
/*< 72>*/ 	start()
/*< 77>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 73, 'param3': 12}
/*< 73>*/ 	printf("\x0E\x01\x09\x04\x08\x800OK. One shield in need of patching up.\nThat'll be <r<10 rupees>>.\n[1]OK![2-]No, thanks.")
/*< 74>*/ 	switch (choice(2)) {
          	  case 0:
/*< 81>*/ 		switch (has_rupees(10)) {
          		  case 0:
/*< 83>*/ 			rupees += -10;
/*< 78>*/ 			printf("\x0E\x01\x09\x04\x07\x70EOK! You just wait right there!")
/*<132>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 121, 'param3': 12}
/*<121>*/ 			story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = true;
/*< 79>*/ 			make_actor_do_something(11, 0)
/*< 80>*/ 			printf("\x0E\x01\x09\x04\x08\x809All done! Here you go!")
          		  case 1:
/*< 82>*/ 			printf("\x0E\x01\x09\x04\x0E\xE0CHey, kid! You don't have enough\nRupees! Go find some and come back!")
          		}
          	  case 1:
/*< 75>*/ 		printf("Not interested, huh? Do you need me\nto fix anything else?")
/*<133>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 12}
/*< 76>*/ 		make_actor_do_something(10, 0)
          	}
          }

          void entrypoint_113_42() {
/*<219>*/ 	start()
/*<222>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, kid! Looks like you're a bit\nshort on materials. You don't have\nenough <y<<itemAD>s>>.\n\nAccording to my grandpa's notes, you\ncan get 'em by slaying monsters who\nhave the power to curse you...")
/*<227>*/ 	printf("\x0E\x01\x09\x04\x07\x700So, is there anything else you want to\nupgrade?")
/*<221>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 220, 'param3': 12}
/*<220>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_09() {
/*<124>*/ 	start()
/*<122>*/ 	story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
/*<107>*/ 	switch (context_related2(2)) {
          	  case 0:
/*<108>*/ 		printf("\x0E\x01\x09\x04\x08\x800Hey, kid! You want me to fix any of\nyour other shields?")
/*<110>*/ 		make_actor_do_something(10, 0)
          	  case 1:
/*<109>*/ 		printf("\x0E\x01\x09\x04\x08\x800Hey, kid! Looks like you're out of\nshields that need repairing.\nSee you later!")
          	}
          }

          void entrypoint_113_43() {
/*<223>*/ 	start()
/*<226>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, kid! Looks like you're a bit\nshort on materials. You don't have\nenough <y<<itemAE>s>>.\n\nMy grandpa's notes say you can get\nthese feathers from the rare little\nblue birds living in wooded areas.\nYou'll need a Bug Net, though!")
/*<228>*/ 	printf("\x0E\x01\x09\x04\x07\x700So, is there anything else you want to\nupgrade?")
/*<225>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 224, 'param3': 12}
/*<224>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_44() {
/*<229>*/ 	start()
/*<232>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, kid! Looks like you're a bit\nshort on materials. You don't have\nenough <y<<itemAF>s>>.\n\n<y<\x0E\x03\x01\x00<itemAF>s>> are <itemAC>s\nthat shine bright like gold. Seems like\nthey are crazy rare!")
/*<233>*/ 	printf("\x0E\x01\x09\x04\x07\x700So, is there anything else you want to\nupgrade?")
/*<231>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 230, 'param3': 12}
/*<230>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_45() {
/*<234>*/ 	start()
/*<237>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, kid! Looks like you're a bit\nshort on materials. You don't have\nenough <y<<itemB0>s>>.\n\nThey're very rare and extremely\nvaluable, or at least that's what it says\nhere in my grandpa's notes.")
/*<238>*/ 	printf("\x0E\x01\x09\x04\x07\x700So, is there anything else you want to\nupgrade?")
/*<236>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 235, 'param3': 12}
/*<235>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_30() {
/*<159>*/ 	start()
/*<162>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, kid! It looks like you're a bit short\non materials. You don't have enough\n<y<<itemA1>>>.\n\nMy grandpa's notes say you can find\nthe stuff in some of the Deku Hornet\nhives found in heavily wooded areas.")
/*<167>*/ 	printf("\x0E\x01\x09\x04\x07\x700So, is there anything else you want to\nupgrade?")
/*<161>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 160, 'param3': 12}
/*<160>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_31() {
/*<163>*/ 	start()
/*<166>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHey, kid! It looks like you're a bit short\non materials. You don't have enough\n<y<<itemA2>s>>.\n\nMy grandpa's notes say you can find\nthese feathers on little birds living in\nwooded areas. If you find one, you'll\nneed to use your Bug Net to catch it.")
/*<168>*/ 	printf("\x0E\x01\x09\x04\x07\x700So, is there anything else you want to\nupgrade?")
/*<165>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 164, 'param3': 12}
/*<164>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_32() {
/*<169>*/ 	start()
/*<172>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CLooks like you're coming up short on\nmaterials, kid. Yep, you don't have\nenough <y<<itemA3>s>>.\n\nMy grandpa's notes say you can find\n<y<<itemA3>s>> rolling around in the\ndesert. You'll need a net to catch them,\nthough.")
/*<173>*/ 	printf("\x0E\x01\x09\x04\x07\x700So, is there anything else you want to\nupgrade?")
/*<171>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 170, 'param3': 12}
/*<170>*/ 	make_actor_do_something(0, 0)
          }

