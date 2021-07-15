          void entrypoint_500_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf("\x0E\x01\x09\x04C\x4500Whoops, missed! All this muscle's not\nworth much if I don't hit my target!\n\n\n\x0E\x01\x09\x04A\x4000I'll start loading my machine back up\nwith another bomb, so keep clobbering\nstanky toes till I give you the signal!")
          }

          void entrypoint_500_37() {
/*< 49>*/ 	start()
/*< 61>*/ 	switch (scene_flags[14 /* 0x0 40 */]) {
          	  case 0:
/*<435>*/ 		switch (scene_flags[109 /* 0xC 20 */]) {
          		  case 0:
/*<436>*/ 			printf("\x0E\x01\x09\x04\x00\x01I have to examine this statue further,\nbud. Who knows what I might find out!")
          		  case 1:
/*<427>*/ 			printf("\x0E\x01\x09\x04\x08\xB07According to some of the ancient texts\nI have read, there is a place way up in\nthe sky called the <r<Isle of the Goddess>>.\n\nOld statues like the one behind me\nwere placed here to provide travelers\nwith a way back up to the island.\n\nMy research seems to suggest this\nparticular statue is special in that\nit alone holds the power to <r<activate>>\nall the other statues.\n\x0E\x01\x09\x04\x16\x1900Hey, I will be the first one to admit it\nsounds like something out of a fairy\ntale, but I am starting to believe it!\n\n\x0E\x01\x09\x04\x00\xB04I mean, if that is not true, then what\nare all these statues doing all over\nthis land?")
          			flw_62:
/*< 62>*/ 			printf("\x0E\x01\x09\x04\x18\x1700It is a real head-scratcher, bud. Makes\nyou want to know more, does it not?\n[1]Yeah![2-]Not really...")
/*<423>*/ 			switch (choice(2)) {
          			  case 0:
/*<424>*/ 				printf("\x0E\x01\x09\x04\x15\x1902Ah, sounds like I have a fellow\nconnoisseur of ancient cultures here!\n\n\n\x0E\x01\x09\x04\x16\xB00All right, bud, you had better brace\nyourself, because I am about to blow\nyour mind.\n\nSo get this: people actually live on this\nsky island, and they get around by\nflying on the backs of huge birds that\nare way bigger than birds down here!\n\x0E\x01\x09\x04\x00\x1E00Up there everyone reveres the goddess,\nand the residents of all the little islands\nin the sky live in a perfect society,\ntotally free of conflict or unhappiness!\n\x0E\x01\x09\x04\x00\xB00Not only that, but from what I can tell,\ntheir civilization is way, way more\nadvanced than ours down here.")
/*<426>*/ 				printf("\x0E\x01\x09\x04\x08\xB00But it does not even stop there, bud!\nThis Isle of the Goddess has even more\nstuff to marvel at!\n\n\x0E\x01\x09\x04\x1F\x1E00The place was crafted by the goddess\nherself, so it figures that it is filled \nwith wonders we do not have here.\n\n\x0E\x01\x09\x04\x00\x1908The buildings are all made of gold!\nAn endless spring of mystical water\nfeeds a river through the place. One\nsip of that stuff, and you live forever!\n\x0E\x01\x09\x04\x00\xB00The trees are heavy with plump fruit\nthat cures all disease! The fields are \ncrowded with pumpkins that never rot!\nMagic wildflowers bloom everywhere!\n\x0E\x01\x09\x04\x17\x1900And the weather. Oh, the weather, bud!\nNot too hot, not too cold. No chance of\nsweaty weather in this garden paradise!\nThat is the Isle of the Goddess...\n\x0E\x01\x09\x04\x00\xB05\x0E\x01\x08\x02\x1CDAmazing, right?<pause14> WRONG!\nIT IS BEYOND AMAZING!\n\n\n\x0E\x01\x09\x04!\x1806\x0E\x01\x08\x02\x2CDYou want to hear more \nabout it, don't you, bud?\n[1]Sure![2-]Nah...")
/*<434>*/ 				scene_flags[10 'Sealed Grounds'][109 /* 0xC 20 */] = true;
/*<430>*/ 				switch (choice(2)) {
          				  case 0:
/*<428>*/ 					printf("\x0E\x01\x09\x04'\x1956Good to hear, bud! I am completely\nobsessed with this place. I cannot get\nenough of it!\n\n\x0E\x01\x09\x04\x16\x1E00I wish I had more to tell you now,\nbut I will need to research these statues\nto learn more.\n\n\x0E\x01\x09\x04\x00\xB00Next time I bump into you, I will give\nyou the latest info!")
          					flw_433:
/*<433>*/ 					switch (scene_flags[14 /* 0x0 40 */]) {
          					  case 0:
          					  case 1:
/*< 60>*/ 						scene_flags[10 'Sealed Grounds'][14 /* 0x0 40 */] = true;
/*<579>*/ 						scene_flags[10 'Sealed Grounds'][35 /* 0x5 08 */] = true;
/*<343>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					}
          				  case 1:
/*<429>*/ 					printf("\x0E\x01\x09\x04\x16\x1E56Ah, that so, bud? I was hoping to tell\nyou more, but I guess it can wait.")
          					goto flw_433
          				}
          			  case 1:
/*<425>*/ 				printf("\x0E\x01\x09\x04\x16\x1E56Ah, that so, bud? I was hoping to tell\nyou more, but I guess it can wait.")
          				goto flw_433
          			}
          		}
          	  case 1:
/*< 55>*/ 		switch (scene_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<341>*/ 			printf("\x0E\x01\x09\x04\x00\x08Whew! Thanks for jumping in there to\nrescue me, bud!")
/*<334>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 340, 'param3': 47}
/*<340>*/ 			set_camera(49, 0)
/*<338>*/ 			{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 256, 'next': 339, 'param3': 15}
/*<339>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 335, 'param3': 15}
/*<335>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 58, 'param3': 48}
/*< 58>*/ 			printf("\x0E\x01\x09\x04\x08\xB0AJust who were those red pests?\nI did not expect to run into a pack of\nthem in this peaceful forest.\n\n\x0E\x01\x09\x04\x16\x1E00Same goes for you. This is the second\ntime I've bumped into one of your kind\ntoday. I tell you, all sorts of weird\nthings are going on lately.\n\x0E\x01\x09\x04\x00\xB00I owe you big for taking care of those\nguys, so let me tell you something\nfascinating.")
/*< 57>*/ 			set_camera(13, 0)
/*<437>*/ 			{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 356, 'next': 65, 'param3': 15}
/*< 65>*/ 			{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 256, 'next': 56, 'param3': 15}
/*< 56>*/ 			{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 0, 'next': 260, 'param3': 14}
/*<260>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 342, 'param3': 17}
/*<342>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 365, 'param3': 17}
/*<365>*/ 			{'type': 'type3', 'subType': 2, 'param1': 16, 'param2': 256, 'next': 59, 'param3': 15}
/*< 59>*/ 			printf("\x0E\x01\x09\x04\x08\xB01Hey, bud! I am Gorko the Goron. I am\nresearching the ancient history of\nthese woods here.\n\n\x0E\x01\x09\x04\x00\x1700According to the ancient texts, there is\nsome kind of place up above called the\n<r<Isle of the Goddess>>. Far up in the sky!\n\n\x0E\x01\x09\x04\x00\xB00Apparently, these old statues serve \nas landmarks to those <r<traveling up to\nthe sky>> or down from this Isle of the\nGoddess place.\n<r<<pling>>><r<If you find one, be sure to examine it >>to\nkeep tabs on the number of landmarks.\nThey are rumored to be quite useful.\n\nSupposedly this statue is special, as it is\nsaid to have the ability to activate all\nthe other statues.\n\n\x0E\x01\x09\x04\x16\x1907The whole thing sounds a little\ncrazy, I know, but I for one believe\nit to be true!\n\nOtherwise, why would all these statues\nbe here all over the place?")
          			goto flw_62
          		  case 1:
/*<336>*/ 			switch (scene_flags[94 /* 0xA 40 */]) {
          			  case 0:
/*<337>*/ 				printf("\x0E\x01\x09\x04\x00\xB52G-get them!")
          			  case 1:
/*<258>*/ 				set_camera(37, 0)
/*<465>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 50, 'param3': 32}
/*< 50>*/ 				printf("\x0E\x01\x09\x04\x1800\xB52Out of the way! Scram!")
/*<259>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		}
          	}
          }

          void entrypoint_500_54() {
/*<215>*/ 	start()
/*< 14>*/ 	printf("\x0E\x01\x05\x042\x00\x0E\x01\x12\x04\x00\x04Master Link, we've\narrived.")
          }

          void entrypoint_500_71() {
/*<438>*/ 	start()
/*<439>*/ 	printf("\x0E\x01\x09\x04\x15\x1B09\x0E\x01\x08\x02\x1CDWHOA!")
          }

          void entrypoint_500_03() {
/*<  4>*/ 	start()
/*<568>*/ 	{'type': 'type3', 'subType': 4, 'param1': 62, 'param2': 16384, 'next': 5, 'param3': 13}
/*<  5>*/ 	printf("This time, you're the payload! Haha!\nI'll give you a boost, but there's no\nguaranteeing this is gonna work.")
          }

          void entrypoint_500_55() {
/*<210>*/ 	start()
/*<211>*/ 	printf("\x0E\x01\x05\x04K\x00This is the fabled <b<surface>> that has\nlong been part of Skyloft legend.")
          }

          void entrypoint_500_72() {
/*<442>*/ 	start()
/*<443>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 445, 'param3': 32}
/*<445>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 453, 'param3': 40}
/*<453>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 444, 'param3': 6}
/*<444>*/ 	printf("\x0E\x01\x09\x04\x2800\x04\x0E\x01\x08\x02\x1CDHey! \x0E\x03\x01\x00\x0E\x03\x01\x00Link!")
/*<454>*/ 	set_camera(51, 0)
/*<458>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 446, 'param3': 16}
/*<446>*/ 	printf("\x0E\x01\x07\x04\x2800\x0FDuh huh huh! Try not to drool on your\nshirt as you stare at this amazing\nsuperweapon I've been working on!")
/*<455>*/ 	set_camera(56, 0)
/*<459>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16909, 'next': 447, 'param3': 13}
/*<447>*/ 	printf("I call it...the <r<Groosenator>>!")
/*<460>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 448, 'param3': 13}
/*<448>*/ 	printf("\x0E\x01\x09\x04\x2800\x18Leaves you speechless, doesn't it?\nThat's only natural. You wouldn't\nbelieve how much time I put into\nbuilding this beauty.")
/*<462>*/ 	printf("Here--check it out!")
/*<456>*/ 	set_camera(48, 0)
/*<463>*/ 	printf("\x0E\x01\x09\x04\x2840\x4300First, I got all the fences cluttering the\narea out of the way. Then I laid down\nrails for her to run on. All by myself,\nof course.\nI don't know what came over me!<pause1E> I had\nno clue I had the talent to make\nsomething like this, you know?\n\n\x0E\x01\x09\x04\x2841\x4000Anyhow, you just tell me where you\nwant me to place my shots, and I'll\nput a hurting on that ugly monster!")
/*<464>*/ 	set_camera(32, 0)
/*<449>*/ 	printf("\x0E\x01\x09\x04\x2804\x4000I don't care how beefy you are--you're\nbound to stumble for a few moments\nafter taking one of my big bombs to\nthe body!")
/*<461>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 450, 'param3': 13}
/*<450>*/ 	printf("Hang on, though... That monster\nshowed up a smidge sooner than I\nwas expecting.")
/*<451>*/ 	printf("\x0E\x01\x09\x04\x2841\x4000There are a few final adjustments I\ngotta make before she can move on\nthe rails I've put down.\n\nI'll call out to you when she's ready for\naction. Till then, do whatever you can\nto hold off that beast!")
/*<457>*/ 	set_camera(57, 0)
/*<452>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_04() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf("")
          }

          void entrypoint_500_56() {
/*<214>*/ 	start()
/*<212>*/ 	printf("\x0E\x01\x05\x04K\x00By my calculations, you are currently\npositioned in a location known as\nthe <b<Sealed Grounds>>.")
          }

          void entrypoint_500_73() {
/*<479>*/ 	start()
/*<477>*/ 	printf("...\x0E\x01\x06\x02\xFDCDYoung one...\n\n\n\n\x0E\x01\x06\x02\xFDCDChild of destiny descended from\nthe sky...")
          }

          void entrypoint_500_05() {
/*<  8>*/ 	start()
/*<  9>*/ 	printf("\x0E\x01\x09\x04\x00\x0FI knew it. The seal has given way.\n\n\n\nI'll explain later, but now is the time\nfor action. We must keep that beast\nfrom escaping that pit!\n\nIt must not reach the temple!")
          }

          void entrypoint_500_22() {
/*< 26>*/ 	start()
/*< 81>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 80, 'param3': 32}
/*< 80>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 27, 'param3': 16}
/*< 27>*/ 	printf("\x0E\x01\x09\x04\x10\x160DNow, Link!<pause1E>\n\n\n\nStrike the sealing spike with a <r<Skyward>>\n<r<Strike>>, and restore the seal! \x0E\x01\x09\x04\x11\x1700Quickly!")
          }

          void entrypoint_500_57() {
/*<413>*/ 	start()
/*<370>*/ 	{'type': 'type3', 'subType': 2, 'param1': 23, 'param2': 356, 'next': 310, 'param3': 15}
/*<310>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 311, 'param3': 32}
/*<311>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 484, 'param3': 17}
/*<484>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 40, 'next': 509, 'param3': 17}
/*<509>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<510>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 511, 'param3': 6}
/*<511>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*<515>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 512, 'param3': 6}
/*<512>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
/*<513>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 375, 'param3': 6}
/*<375>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<514>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 517, 'param3': 6}
/*<517>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10302, 'param2': 17664, 'next': 485, 'param3': 13}
/*<485>*/ 	set_camera(52, 0)
/*<376>*/ 	printf("\x0E\x01\x09\x04\x2800SWhoa!\x0E\x01\x05\x04\x1E\x00")
/*<254>*/ 	printf("\x0E\x01\x09\x04\x2800\x4000Feels like that seal is going to give way\nany second.\x0E\x01\x05\x04\x1E\x00")
/*<255>*/ 	printf("\x0E\x01\x09\x04\x283E\x400FUh...but no need to panic!\n\n\n\n\x0E\x01\x09\x04\x2841\x00You know what the <r<Groosenator>> can\ndo, am I right?")
/*<256>*/ 	printf("\x0E\x01\x09\x04\x2800\x00As long as I'm at the controls of this\nbombshell beauty, I don't even know\nthe meaning of the word \x201Cdefeat\"!\n\n\x0E\x01\x09\x04\x2800\x200Flinging bombs on this monster's face,\ndefending the land... It's my purpose,\nI think. It's why I'm here.")
/*<257>*/ 	printf("\x0E\x01\x09\x04\x2800\x200Anyway, Link, I've got\nwork to do. Try not to get in the way of\nmy shots, OK?")
/*<516>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
/*<371>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*<522>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<566>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<567>*/ 	story_flags[176 /* us: 805A9AE2 0x80, jp: 805ACD62 0x80 */] = true;
/*<312>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 419, 'param3': 42}
/*<419>*/ 	story_flags[483 /* us: 805A9B10 0x02, jp: 805ACD90 0x02 */] = true;
          }

          void entrypoint_500_74() {
/*<480>*/ 	start()
/*<478>*/ 	printf("\x0E\x01\x06\x02\xFDCDRaise the sword of the goddess\nskyward... <pause0F>\x0E\x01\x06\x02\xFDCDTake aim at the evil aura\nand unleash its power...")
          }

          void entrypoint_500_40() {
/*< 51>*/ 	start()
/*< 85>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 84, 'param3': 32}
/*< 84>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3592, 'param2': 2829, 'next': 86, 'param3': 13}
/*< 86>*/ 	set_camera(15, 0)
/*< 52>*/ 	printf("\x0E\x03\x01\x00Link, look at the beast's\nforehead! Do you see the <r<sealing spike>>\nembedded there?\n\n\x0E\x01\x09\x04\xE00\x13Drive the spike back into its head, and\nput a stop to its rampage!")
/*< 87>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_58() {
/*<216>*/ 	start()
/*<213>*/ 	printf("\x0E\x01\x05\x04K\x00Please proceed with caution, \x0E\x01\x12\x04\x00\x0BMaster.")
          }

          void entrypoint_500_23() {
/*<475>*/ 	start()
/*<481>*/ 	printf("Master, I have information to report.")
/*<482>*/ 	printf("While these doors appear to have been\nopened recently, they are now sealed\nshut by a powerful unidentified force.")
          }

          void entrypoint_500_75() {
/*<497>*/ 	start()
/*<498>*/ 	story_flags[790 /* us: 805A9B2C 0x40, jp: 805ACDAC 0x40 */] = true;
/*<520>*/ 	scene_flags[10 'Sealed Grounds'][54 /* 0x7 40 */] = true;
          }

          void entrypoint_500_41() {
/*< 76>*/ 	start()
/*< 74>*/ 	printf("\x0E\x01\x09\x04\x00&Nice work there, Link!\nCourse, you couldn't've done it without\nme, but no need to thank Groose. \nI know I saved your tail.\nNow let's get that Gate of Time thing\nup and running. I'll go on ahead!")
          }

          void entrypoint_500_24() {
/*<137>*/ 	start()
/*<547>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<548>*/ 		printf("\x0E\x01\x12\x04\x00\x0BMaster, I have important information\nfor you. The beast you face has a \n<r<sealing spike>> lodged in its forehead.\n\nYou must not leave this place until you\nhave successfully restored the seal\nthat restrains this beast.")
          	  case 1:
/*<139>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<140>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<141>*/ 				printf("\x0E\x01\x12\x04\x00\x0BMaster, you must not leave this area\nuntil you have restored the seal that\nrestrains this beast.")
          			  case 1:
/*<142>*/ 				printf("\x0E\x01\x12\x04\x00\x0BMaster, I have important information\nfor you. The beast you face has a \n<r<sealing spike>> lodged in its forehead.\n\nYou must not leave this place until you\nhave successfully restored the seal\nthat restrains this beast.")
          			}
          		  case 1:
/*<138>*/ 			printf("")
          		}
          	}
          }

          void entrypoint_500_59() {
/*<217>*/ 	start()
/*<218>*/ 	printf("\x0E\x01\x09\x04>\x4515\x0E\x01\x08\x02\x1CDOh NO!\n\n\n\n\x0E\x01\x09\x04\x00\x4000Not good! The road crumbled, and I\ncan't get to the rest of my bomb stash!\nWhat do I do?!")
          }

          void entrypoint_500_76() {
/*<506>*/ 	start()
/*<466>*/ 	printf("\x0E\x01\x09\x04\x13\x1907What in the world just happened?\nDid you use some kind of magic?\n\n\n\x0E\x01\x09\x04\x17\x1B08The statue reacted the moment you\ngot near it, bud. How crazy is that?")
          }

          void entrypoint_500_08() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf("\x0E\x01\x09\x04D\x4300We got it, but that shot hit kinda late!\n\n\n\n\x0E\x01\x09\x04\x00\x4000I'll start loading 'er back up, so keep\nbeating on big ugly till I give you the\nsignal!\n")
          }

          void entrypoint_500_25() {
/*< 35>*/ 	start()
/*<525>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = false;
/*< 70>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*< 38>*/ 	scene_flags[10 'Sealed Grounds'][10 /* 0x0 04 */] = true;
/*< 41>*/ 	scene_flags[10 'Sealed Grounds'][13 /* 0x0 20 */] = false;
/*<582>*/ 	story_flags[852 /* us: 805A9B34 0x04, jp: 805ACDB4 0x04 */] = true;
          }

          void entrypoint_500_42() {
/*< 77>*/ 	start()
/*< 75>*/ 	printf("\x0E\x01\x09\x04 \x3010Whew... I gotta say, Link,\nI thought we were goners this time.\nSorta glad I was wrong about that.\n\n\x0E\x01\x09\x04B\x200I'm gonna run ahead to the temple.\nYou should get back there too!")
          }

          void entrypoint_500_77() {
/*<507>*/ 	start()
/*<508>*/ 	printf("\x0E\x01\x09\x04>\x4026\x0E\x03\x01\x00Link! Come up to the\ntemple, and <r<make your way over\nhere>>. Hustle up!")
          }

          void entrypoint_500_09() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf("\x0E\x01\x09\x04 \x403CNice! You're locked and loaded!\nWe'll aim it to send you straight for\nthe spike on its head!")
          }

          void entrypoint_500_26() {
/*< 36>*/ 	start()
/*<526>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = false;
/*< 48>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*< 39>*/ 	scene_flags[10 'Sealed Grounds'][11 /* 0x0 08 */] = true;
/*< 42>*/ 	scene_flags[10 'Sealed Grounds'][13 /* 0x0 20 */] = false;
/*<583>*/ 	story_flags[853 /* us: 805A9B34 0x08, jp: 805ACDB4 0x08 */] = true;
          }

          void entrypoint_500_43() {
/*<131>*/ 	start()
/*<405>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 369, 'param3': 32}
/*<369>*/ 	set_camera(59, 0)
/*<401>*/ 	{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 260, 'next': 403, 'param3': 15}
/*<403>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1042, 'param2': 4352, 'next': 402, 'param3': 13}
/*<402>*/ 	{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 4, 'next': 483, 'param3': 14}
/*<483>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 404, 'param3': 17}
/*<404>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 521, 'param3': 17}
/*<521>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<133>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<262>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1086, 'param2': 16447, 'next': 132, 'param3': 13}
/*<132>*/ 	printf("\x0E\x03\x01\x00Link, bad news!\nThat beast looks like it's about to break\nfree again!")
/*<263>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1089, 'param2': 16384, 'next': 136, 'param3': 13}
/*<136>*/ 	printf("Gotta get into position! Hang tight!")
/*<135>*/ 	{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 772, 'next': 420, 'param3': 14}
/*<420>*/ 	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
/*<134>*/ 	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
/*<418>*/ 	changeScene(16, 0) // 
          }

          void entrypoint_500_60() {
/*<219>*/ 	start()
/*<372>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 222, 'param3': 32}
/*<222>*/ 	printf("\x0E\x01\x09\x04\x2800\x04\x0E\x01\x08\x02\x1CDHey! \x0E\x03\x01\x00\x0E\x03\x01\x00Link!")
/*<293>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 294, 'param3': 40}
/*<294>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 229, 'param3': 6}
/*<229>*/ 	set_camera(31, 0)
/*<231>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 295, 'param3': 16}
/*<295>*/ 	{'type': 'type3', 'subType': 2, 'param1': 20, 'param2': 356, 'next': 223, 'param3': 15}
/*<223>*/ 	printf("\x0E\x01\x07\x04\x2800\x0FDuh huh huh! Try not to drool on your\nshirt as you stare at this amazing\nsuperweapon I've been working on!")
/*<230>*/ 	set_camera(32, 0)
/*<344>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 224, 'param3': 13}
/*<224>*/ 	printf("I call it...the <r<Groosenator>>!")
/*<345>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10302, 'param2': 512, 'next': 225, 'param3': 13}
/*<225>*/ 	printf("\x0E\x01\x09\x04\x2800\x18Leaves you speechless, doesn't it?\nThat's only natural. You wouldn't\nbelieve how much time I put into\nbuilding this beauty.")
/*<361>*/ 	printf("Here--check it out!")
/*<232>*/ 	set_camera(33, 0)
/*<362>*/ 	printf("\x0E\x01\x09\x04\x2840\x4300First, I got all the fences cluttering the\narea out of the way. Then I laid down\nrails for her to run on. All by myself,\nof course.\nI don't know what came over me!<pause1E> I had\nno clue I had the talent to make\nsomething like this, you know?\n\n\x0E\x01\x09\x04\x2841\x4000Anyhow, you just tell me where you\nwant me to place my shots, and I'll\nput a hurting on that ugly monster!")
/*<233>*/ 	set_camera(32, 0)
/*<226>*/ 	printf("\x0E\x01\x09\x04\x2804\x4000I don't care how beefy you are--you're\nbound to stumble for a few moments\nafter taking one of my big bombs to\nthe body!")
/*<368>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 227, 'param3': 13}
/*<227>*/ 	printf("Hang on, though... That monster\nshowed up a smidge sooner than I\nwas expecting.")
/*<228>*/ 	printf("\x0E\x01\x09\x04\x2841\x4000There are a few final adjustments I\ngotta make before she can move on\nthe rails I've put down.\n\nI'll call out to you when she's ready for\naction. Till then, do whatever you can\nto hold off that beast!")
/*<296>*/ 	set_camera(45, 0)
/*<240>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_78() {
/*<580>*/ 	start()
/*<581>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaster, you must seal away the beast\nthat has broken free. Attempting to\nflee from your current situation will\nnot help you accomplish this task.")
          }

          void entrypoint_500_27() {
/*< 37>*/ 	start()
/*<527>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = false;
/*< 69>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*< 40>*/ 	scene_flags[10 'Sealed Grounds'][12 /* 0x0 10 */] = true;
/*< 43>*/ 	scene_flags[10 'Sealed Grounds'][13 /* 0x0 20 */] = false;
/*<584>*/ 	story_flags[854 /* us: 805A9B34 0x10, jp: 805ACDB4 0x10 */] = true;
          }

          void entrypoint_500_61() {
/*<220>*/ 	start()
/*<243>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 244, 'param3': 32}
/*<244>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 245, 'param3': 16}
/*<245>*/ 	printf("\x0E\x01\x09\x04\x2800\x04\x0E\x01\x08\x02\x1CDHey! \x0E\x03\x01\x00\x0E\x03\x01\x00Link!")
/*<246>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 297, 'param3': 40}
/*<297>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 501, 'param3': 6}
/*<501>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 298, 'param3': 47}
/*<298>*/ 	set_camera(36, 0)
/*<503>*/ 	{'type': 'type3', 'subType': 2, 'param1': 30, 'param2': 356, 'next': 502, 'param3': 15}
/*<502>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 247, 'param3': 48}
/*<247>*/ 	printf("\x0E\x01\x07\x04\x2800\x0FDuh huh huh! Try not to drool on your\nshirt as you stare at this amazing\nsuperweapon I've been working on!")
/*<299>*/ 	set_camera(46, 0)
/*<300>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 346, 'param3': 6}
/*<346>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16909, 'next': 248, 'param3': 13}
/*<248>*/ 	printf("I call it...the <r<Groosenator>>!")
/*<474>*/ 	{'type': 'type3', 'subType': 2, 'param1': 29, 'param2': 356, 'next': 347, 'param3': 15}
/*<347>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 249, 'param3': 13}
/*<249>*/ 	printf("\x0E\x01\x09\x04\x2800\x18Leaves you speechless, doesn't it?\nThat's only natural. You wouldn't\nbelieve how much time I put into\nbuilding this beauty.")
/*<363>*/ 	printf("Here--check it out!")
/*<301>*/ 	set_camera(47, 0)
/*<364>*/ 	printf("\x0E\x01\x09\x04\x2840\x4300First, I got all the fences cluttering the\narea out of the way. Then I laid down\nrails for her to run on. All by myself,\nof course.\nI don't know what came over me!<pause1E> I had\nno clue I had the talent to make\nsomething like this, you know?\n\n\x0E\x01\x09\x04\x2841\x4000Anyhow, you just tell me where you\nwant me to place my shots, and I'll\nput a hurting on that ugly monster!")
/*<367>*/ 	set_camera(32, 0)
/*<250>*/ 	printf("\x0E\x01\x09\x04\x2804\x4000I don't care how beefy you are--you're\nbound to stumble for a few moments\nafter taking one of my big bombs to\nthe body!")
/*<348>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 251, 'param3': 13}
/*<251>*/ 	printf("Hang on, though... That monster\nshowed up a smidge sooner than I\nwas expecting.")
/*<252>*/ 	printf("\x0E\x01\x09\x04\x2841\x4000There are a few final adjustments I\ngotta make before she can move on\nthe rails I've put down.\n\nI'll call out to you when she's ready for\naction. Till then, do whatever you can\nto hold off that beast!")
/*<302>*/ 	set_camera(50, 0)
/*<253>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_44() {
/*<354>*/ 	start()
/*<356>*/ 	switch (scene_flags[6 /* 0x1 40 */]) {
          	  case 0:
/*<358>*/ 		printf("\x0E\x01\x09\x04\x17\x1B08The statue just reacted to you! \nWhat did you do? Come on, do not \nmake a big guy beg! I have got to know!")
          	  case 1:
/*<355>*/ 		printf("\x0E\x01\x09\x04\x15\x1B05\x0E\x01\x08\x02\x1CDGORO!")
/*<357>*/ 		printf("\x0E\x01\x09\x04\x13\x1909What was THAT?!\n\n\n\n\x0E\x01\x09\x04\x17\x1B08The statue just reacted to you! \nWhat did you do? Come on, do not \nmake a big guy beg! I have got to know!")
/*<359>*/ 		scene_flags[10 'Sealed Grounds'][6 /* 0x1 40 */] = true;
          	}
          }

          void entrypoint_500_45() {
/*< 89>*/ 	start()
/*< 88>*/ 	printf("\x0E\x01\x09\x04\x00&Look at that. Seems like our ugly\nfriend grew itself a pair of hands.\nGreat timing!\n\nI hope it knows how to catch, because\nmy machine has a mean right arm!\n\n\n\x0E\x01\x09\x04B\x4000When she's all loaded up, I'll let you\nknow. Until then, do what you need to\ndo to stop it!")
          }

          void entrypoint_500_28() {
/*<160>*/ 	start()
/*<553>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<554>*/ 		printf("\x0E\x01\x12\x04\x00\x0BMaster, the beast freed itself again.\nYou must stay here and stand\nagainst it.")
          	  case 1:
/*<161>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<162>*/ 			printf("\x0E\x01\x12\x04\x00\x0BMaster, you must not leave this area\nuntil you have restored the seal that\nrestrains this beast.")
          		  case 1:
/*<163>*/ 			printf("\x0E\x01\x12\x04\x00\x0BMaster, the beast freed itself again.\nYou must stay here and stand\nagainst it.")
          		}
          	}
          }

          void entrypoint_500_62() {
/*<221>*/ 	start()
/*<234>*/ 	printf("")
/*<303>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 307, 'param3': 40}
/*<307>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 305, 'param3': 6}
/*<305>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 349, 'param3': 32}
/*<349>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 306, 'param3': 16}
/*<306>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 304, 'param3': 17}
/*<304>*/ 	set_camera(31, 0)
/*<308>*/ 	{'type': 'type3', 'subType': 2, 'param1': 20, 'param2': 356, 'next': 238, 'param3': 15}
/*<238>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 350, 'param3': 6}
/*<350>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 235, 'param3': 13}
/*<235>*/ 	printf("\x0E\x01\x09\x04\x2800\x4000Feels like that seal is going to give way\nany second.\x0E\x01\x05\x04\x1E\x00")
/*<241>*/ 	set_camera(32, 0)
/*<351>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 236, 'param3': 13}
/*<236>*/ 	printf("\x0E\x01\x09\x04\x283E\x400FUh...but no need to panic!\n\n\n\n\x0E\x01\x09\x04\x2841\x00You know what the <r<Groosenator>> can\ndo, am I right?")
/*<237>*/ 	printf("\x0E\x01\x09\x04\x2800\x00As long as I'm at the controls of this\nbombshell beauty, I don't even know\nthe meaning of the word \x201Cdefeat\"!\n\n\x0E\x01\x09\x04\x2800\x200Flinging bombs on this monster's face,\ndefending the land... It's my purpose,\nI think. It's why I'm here.")
/*<352>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 242, 'param3': 13}
/*<242>*/ 	printf("\x0E\x01\x09\x04\x2800\x200Anyway, Link, I've got\nwork to do. Try not to get in the way of\nmy shots, OK?")
/*<309>*/ 	set_camera(45, 0)
/*<239>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_11() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf("")
          }

          void entrypoint_500_29() {
/*< 72>*/ 	start()
/*<538>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 2, 'next': 100, 'param3': 46}
/*<100>*/ 	switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          	  case 0:
/*<528>*/ 		switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          		  case 0:
/*<530>*/ 			switch (scene_flags[43 /* 0x4 08 */]) {
          			  case 0:
/*<534>*/ 				printf("\x0E\x01\x09\x04\x00\x4026\x0E\x03\x01\x00Link, we're in trouble! I\ncan't get to my stash of bombs!\n\n\n\x0E\x01\x09\x04 \x4000All right...<pause19> \x0E\x03\x01\x00Link! We've\ngot no choice! You've got to get up onto\nthat ugly thing's head! Quick now!")
          			  case 1:
/*<532>*/ 				switch (zone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<533>*/ 					printf("\x0E\x01\x09\x04\x00&The <r<Groosenator>> is ready for action!\n\n\n\nJust press (^) to set up the shot!\x0E\x01\x11\x02\x8CD\n\n\n\nAdjust the machine's position with \x0E\x02\x04\x02\xECD,\nand aim at your target with the\n<r<Wii Remote>>. Once your shot's set, let\nthat scaly creep have it!")
          				  case 1:
/*<531>*/ 					printf("\x0E\x01\x09\x04\x00\x4226Guess it's time for the <r<Groosenator>>\nto work its magic again!\n\n\nJust like before, you'll see me appear\nabove (^) when the machine's ready\nfor action.\x0E\x01\x11\x02\x8CD\n\n\x0E\x01\x09\x04B\x4000You and me are going to\ntag team this freak!\nLet's do it, Link!")
          				}
          			}
          		  case 1:
/*<529>*/ 			switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          			  case 0:
/*<536>*/ 				switch (zone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<537>*/ 					printf("\x0E\x01\x09\x04\x00&The <r<Groosenator>> is ready for action!\n\n\n\nJust press (^) to set up the shot!\x0E\x01\x11\x02\x8CD\n\n\n\nAdjust the machine's position with \x0E\x02\x04\x02\xECD,\nand aim at your target with the\n<r<Wii Remote>>. Once your shot's set, let\nthat scaly creep have it!")
          				  case 1:
/*<535>*/ 					printf("\x0E\x01\x09\x04\x04\x4100So today's the day I finally get to\nbust out the <r<Groosenator>>!\n\n\n\x0E\x01\x09\x04\x00\x300Soon as I'm ready to fire, you'll see my\nsignal appear above (^). \x0E\x01\x09\x04\x00\x4000Till then, it's\nup to you and that sword of yours to\nkeep that thing away!\x0E\x01\x11\x02\x8CD")
          				}
          			  case 1:
/*< 78>*/ 				switch (scene_flags[71 /* 0x9 80 */]) {
          				  case 0:
/*<193>*/ 					switch (story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */]) {
          					  case 0:
/*<261>*/ 						scene_flags[10 'Sealed Grounds'][97 /* 0xD 02 */] = true;
/*<561>*/ 						switch (story_flags[490 /* us: 805A9B13 0x01, jp: 805ACD93 0x01 */]) {
          						  case 0:
/*<564>*/ 							switch (story_flags[799 /* us: 805A9B2F 0x80, jp: 805ACDAF 0x80 */]) {
          							  case 0:
          								flw_194:
/*<194>*/ 								printf("\x0E\x01\x09\x04\x00&So, where you flying to today?\n[1]The sky![2]The surface.[3-]Never mind!")
/*<195>*/ 								switch (choice(3)) {
          								  case 0:
/*<586>*/ 									switch (story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */]) {
          									  case 0:
/*<196>*/ 										printf("Somewhere fun in the sky, huh?\nWhat kind of fun are you looking for?\n[1]Skydiving.[2]Bug hunting.[3]Something else...")
/*<571>*/ 										switch (choice(3)) {
          										  case 0:
          											flw_209:
/*<209>*/ 											zone_temp_flags[1 /* 0x1 02 */] = true;
          											flw_204:
/*<204>*/ 											{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 199, 'param3': 42}
/*<199>*/ 											printf("\x0E\x01\x09\x04B\x342OK, here we go! Hold on to your little\nhat!")
          										  case 1:
          											flw_202:
/*<202>*/ 											zone_temp_flags[2 /* 0x1 04 */] = true;
          											goto flw_204
          										  case 2:
/*<197>*/ 											printf("What kind of fun are you looking for?\nAnything in particular?\n[1]Cutting![2]Shooting![3-]Never mind.")
/*<572>*/ 											switch (choice(3)) {
          											  case 0:
          												flw_203:
/*<203>*/ 												zone_temp_flags[3 /* 0x1 08 */] = true;
          												goto flw_204
          											  case 1:
/*<205>*/ 												zone_temp_flags[4 /* 0x1 10 */] = true;
          												goto flw_204
          											  case 2:
          												flw_200:
/*<200>*/ 												printf("If you ever want to travel to fun places\nin style, just come see me!")
          											}
          										}
          									  case 1:
/*<585>*/ 										printf("Somewhere fun in the sky, eh?\nWhere should I launch you?\n[1]Skydiving.[2]Bug hunting.[3]Cutting.[4-]Never mind.")
/*<587>*/ 										switch (choice(4)) {
          										  case 0:
          											goto flw_209
          										  case 1:
          											goto flw_202
          										  case 2:
          											goto flw_203
          										  case 3:
          											goto flw_200
          										}
          									}
          								  case 1:
/*<198>*/ 									printf("Somewhere fun down here, eh?\nWhat kind of fun are you\nlooking for?\n[1]Lightning Round![2]Thrill Digger![3]Rickety Coaster![4-]Never mind.")
/*<201>*/ 									switch (choice(4)) {
          									  case 0:
/*<206>*/ 										zone_temp_flags[5 /* 0x1 20 */] = true;
          										goto flw_204
          									  case 1:
/*<207>*/ 										zone_temp_flags[6 /* 0x1 40 */] = true;
          										goto flw_204
          									  case 2:
/*<208>*/ 										zone_temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_204
          									  case 3:
          										goto flw_200
          									}
          								  case 2:
          									goto flw_200
          								}
          							  case 1:
/*<563>*/ 								printf("\x0E\x01\x09\x04\x00\x04Yo, Link!\n\n\n\nI decided the best thing for me to do\nis hang back here on the surface\nwith you. Hey, someone's got to do it!")
/*<562>*/ 								story_flags[799 /* us: 805A9B2F 0x80, jp: 805ACDAF 0x80 */] = true;
/*<577>*/ 								switch (story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */]) {
          								  case 0:
          									goto flw_194
          								  case 1:
/*<578>*/ 									printf("This machine of mine can sling you all\nover the land if you're interested\nin flying without a Loftwing.")
          									flw_575:
/*<575>*/ 									printf("With a man of my skill at the controls,\nI can guarantee that I won't chuck you\nanywhere boring!\n\nIf you land somewhere you don't know,\nwell, maybe it's a great time to look\naround and explore the place!")
/*<576>*/ 									story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */] = true;
          									goto flw_194
          								}
          							}
          						  case 1:
/*<573>*/ 							switch (story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */]) {
          							  case 0:
          								goto flw_194
          							  case 1:
/*<574>*/ 								printf("\x0E\x01\x09\x04\x00\x04Yo, Link! This machine of\nmine can sling you all over the land if\nyou're interested in a little birdless\nflight.")
          								goto flw_575
          							}
          						}
          					  case 1:
/*< 79>*/ 						printf("\x0E\x01\x09\x04\x00\x03Want to head to Faron Woods, do you?\n\n\n\nNo sweat. Just hop on into the\n<r<Groosenator>>, and I'll fling you over!\n[1]OK![2-]No way.")
/*< 93>*/ 						switch (choice(2)) {
          						  case 0:
/*< 95>*/ 							printf("\x0E\x01\x09\x04\x00BAll right! Hop in, and I'll take care of\nthe flingin'. You just worry about\nthe landing...")
/*< 92>*/ 							zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 96>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*< 94>*/ 							printf("OK. Let me know if you decide you\nwant a \x201Clift\" to the forest!")
          						}
          					}
          				  case 1:
/*<188>*/ 					switch (story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */]) {
          					  case 0:
/*<187>*/ 						switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          						  case 0:
          							flw_190:
/*<190>*/ 							printf("\x0E\x01\x09\x04\x00&And the day is saved again thanks to\nthe big man. Now get down there, and\nfix that seal before it comes back!")
          						  case 1:
/*<192>*/ 							switch (scene_flags[19 /* 0x3 08 */]) {
          							  case 0:
          								goto flw_190
          							  case 1:
/*<320>*/ 								switch (scene_flags[43 /* 0x4 08 */]) {
          								  case 0:
/*<324>*/ 									printf("\x0E\x01\x09\x04\x00\x4026\x0E\x03\x01\x00Link, we're in trouble! I\ncan't get to my stash of bombs!\n\n\n\x0E\x01\x09\x04 \x4000All right...<pause19> \x0E\x03\x01\x00Link! We've\ngot no choice! You've got to get up onto\nthat ugly thing's head! Quick now!")
          								  case 1:
/*<322>*/ 									switch (zone_temp_flags[11 /* 0x0 08 */]) {
          									  case 0:
/*<323>*/ 										printf("\x0E\x01\x09\x04\x00&The <r<Groosenator>> is ready for action!\n\n\n\nJust press (^) to set up the shot!\x0E\x01\x11\x02\x8CD\n\n\n\nAdjust the machine's position with \x0E\x02\x04\x02\xECD,\nand aim at your target with the\n<r<Wii Remote>>. Once your shot's set, let\nthat scaly creep have it!")
          									  case 1:
/*<321>*/ 										printf("\x0E\x01\x09\x04\x00\x4226Guess it's time for the <r<Groosenator>>\nto work its magic again!\n\n\nJust like before, you'll see me appear\nabove (^) when the machine's ready\nfor action.\x0E\x01\x11\x02\x8CD\n\n\x0E\x01\x09\x04B\x4000You and me are going to\ntag team this freak!\nLet's do it, Link!")
          									}
          								}
          							}
          						}
          					  case 1:
/*<186>*/ 						switch (story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */]) {
          						  case 0:
          							flw_189:
/*<189>*/ 							printf("\x0E\x01\x09\x04\x00&I think I showed that monster who the\nreal boss is, eh? \x0E\x03\x01\x00Link, get\ndown there and seal it away again!\n\nJust zap the spike down there with a\nblast from your sword like last time.")
          						  case 1:
/*<191>*/ 							switch (scene_flags[18 /* 0x3 04 */]) {
          							  case 0:
          								goto flw_189
          							  case 1:
/*<318>*/ 								switch (zone_temp_flags[11 /* 0x0 08 */]) {
          								  case 0:
/*<319>*/ 									printf("\x0E\x01\x09\x04\x00&The <r<Groosenator>> is ready for action!\n\n\n\nJust press (^) to set up the shot!\x0E\x01\x11\x02\x8CD\n\n\n\nAdjust the machine's position with \x0E\x02\x04\x02\xECD,\nand aim at your target with the\n<r<Wii Remote>>. Once your shot's set, let\nthat scaly creep have it!")
          								  case 1:
/*< 73>*/ 									printf("\x0E\x01\x09\x04\x04\x4100So today's the day I finally get to\nbust out the <r<Groosenator>>!\n\n\n\x0E\x01\x09\x04\x00\x300Soon as I'm ready to fire, you'll see my\nsignal appear above (^). \x0E\x01\x09\x04\x00\x4000Till then, it's\nup to you and that sword of yours to\nkeep that thing away!\x0E\x01\x11\x02\x8CD")
          								}
          							}
          						}
          					}
          				}
          			}
          		}
          	  case 1:
/*<101>*/ 		printf("\x0E\x01\x09\x04\x00&Grannie says that crazy monster we\nsaw could break free again at any time,\nbut we're not going down easy.\n\n\x0E\x01\x09\x04\x00\x4200There's nothing I hate more than being\ncaught unprepared, so I'm brewing up\na secret weapon to take on big ugly!\n\n\x0E\x01\x09\x04\x00\x0FIt's not ready yet, but you can bet it'll\ngo down in history as a Groose original.")
          	}
          }

          void entrypoint_500_46() {
/*< 90>*/ 	start()
/*< 91>*/ 	printf("\x0E\x01\x09\x04\x00&Well, look who's finally back. Good\nthing too, 'cause I was getting tired of\nwaiting to put a hurting on his ugly\nmug!\n\x0E\x01\x09\x04\x04\x4000\x0E\x03\x01\x00Link! Our game plan is\nthe same as last time.\nYou know what to do!")
          }

          void entrypoint_500_63() {
/*<377>*/ 	start()
/*<406>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 392, 'param3': 32}
/*<392>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 260, 'next': 382, 'param3': 15}
/*<382>*/ 	set_camera(54, 0)
/*<408>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 394, 'param3': 17}
/*<394>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1042, 'param2': 4352, 'next': 393, 'param3': 13}
/*<393>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 4, 'next': 395, 'param3': 14}
/*<395>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 524, 'param3': 16}
/*<524>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<380>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<381>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1086, 'param2': 16447, 'next': 379, 'param3': 13}
/*<379>*/ 	printf("\x0E\x03\x01\x00Link, bad news!\nThat beast looks like it's about to break\nfree again!")
/*<383>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1089, 'param2': 16384, 'next': 385, 'param3': 13}
/*<385>*/ 	printf("Gotta get into position! Hang tight!")
/*<384>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 772, 'next': 422, 'param3': 14}
/*<422>*/ 	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
/*<415>*/ 	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
/*<416>*/ 	changeScene(16, 0) // 
          }

          void entrypoint_500_47() {
/*<154>*/ 	start()
/*<539>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<541>*/ 		{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 540, 'param3': 13}
/*<540>*/ 		printf("\x0E\x03\x01\x00Link, look at the beast's\nforehead! Do you see the <r<sealing spike>>\nembedded there?\n\n\x0E\x01\x09\x04\xE00\x13Drive the spike back into its head, and\nput a stop to its rampage!")
          	  case 1:
/*<156>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<157>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<159>*/ 				printf("\x0E\x01\x09\x04\x10\x160DNow, Link!<pause1E>\n\n\n\nStrike the sealing spike with a <r<Skyward>>\n<r<Strike>>, and restore the seal! \x0E\x01\x09\x04\x11\x1700Quickly!")
          			  case 1:
/*<374>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 158, 'param3': 13}
/*<158>*/ 				printf("\x0E\x03\x01\x00Link, look at the beast's\nforehead! Do you see the <r<sealing spike>>\nembedded there?\n\n\x0E\x01\x09\x04\xE00\x13Drive the spike back into its head, and\nput a stop to its rampage!")
          			}
          		  case 1:
/*<155>*/ 			printf("\x0E\x01\x09\x04\x08\x170F\x0E\x03\x01\x00Link, go quickly! Check\non the <r<sealing spike >>at the bottom of\nthe pit.\n\n\x0E\x01\x09\x04\x14\xB00There is nothing natural about these\ntremors. That monster could free itself\nat any moment. Approach the pit with\ncaution!")
          		}
          	}
          }

          void entrypoint_500_64() {
/*<265>*/ 	start()
/*<276>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
/*<282>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 281, 'param3': 40}
/*<281>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 273, 'param3': 6}
/*<273>*/ 	set_camera(40, 0)
/*<289>*/ 	{'type': 'type3', 'subType': 2, 'param1': 18, 'param2': 356, 'next': 270, 'param3': 15}
/*<270>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 500, 'param3': 32}
/*<500>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 268, 'param3': 17}
/*<268>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 260, 'next': 271, 'param3': 15}
/*<271>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 269, 'param3': 32}
/*<269>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 270, 'next': 504, 'param3': 15}
/*<504>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 288, 'param3': 17}
/*<288>*/ 	set_camera(41, 0)
/*<275>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3585, 'param2': 256, 'next': 272, 'param3': 13}
/*<272>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1077, 'param2': 13824, 'next': 290, 'param3': 13}
/*<290>*/ 	set_camera(42, 0)
/*<274>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<286>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1082, 'param2': 15360, 'next': 267, 'param3': 13}
/*<267>*/ 	printf("\x0E\x01\x09\x04\x4000Whoa! Wh-what's with all the shaking?")
/*<291>*/ 	set_camera(24, 0)
/*<287>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1079, 'param2': 14592, 'next': 283, 'param3': 13}
/*<283>*/ 	printf("\x0E\x01\x09\x04\x4001The whole ground is heaving...\nI thought it was supposed to be solid\ndown here!")
/*<279>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*<278>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
/*<277>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<280>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 353, 'param3': 13}
/*<353>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3584, 'param2': 5632, 'next': 499, 'param3': 13}
/*<499>*/ 	set_camera(43, 0)
/*<266>*/ 	printf("\x0E\x01\x09\x04\xE00\x10Go quickly, Link!\nCheck on the <r<sealing spike>> at the center\nof the pit.")
/*<284>*/ 	printf("\x0E\x01\x09\x04\xE00\x1653There is nothing natural about these\ntremors. That monster could free itself\nat any moment. Approach the pit with\ncaution!")
/*<292>*/ 	set_camera(44, 0)
/*<505>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 270, 'next': 285, 'param3': 15}
/*<285>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_30() {
/*< 82>*/ 	start()
/*< 83>*/ 	printf("\x0E\x01\x09\x04\x00\x0FI knew it. The seal has given way.\n\n\n\nI'll explain later, but now is the time\nfor action. We must keep that beast\nfrom escaping that pit!\n\nIt must not reach the temple!")
          }

          void entrypoint_500_48() {
/*<164>*/ 	start()
/*<552>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<551>*/ 		printf("\x0E\x01\x09\x04\x10\x180FLink, you must seal away\nthe beast as soon as possible!\n\n\nIt has grown stronger since you faced it\nlast. Do not let your guard down.")
          	  case 1:
/*<165>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<167>*/ 			printf("\x0E\x01\x09\x04\x10\x180DYou do remember how to seal the beast\naway, yes?\n\n\nHit the sealing spike with a Skyward\nStrike!<pause1E> Focus your mind. You have the\npower to do this.")
          		  case 1:
/*<166>*/ 			printf("\x0E\x01\x09\x04\x10\x180FLink, you must seal away\nthe beast as soon as possible!\n\n\nIt has grown stronger since you faced it\nlast. Do not let your guard down.")
          		}
          	}
          }

          void entrypoint_500_65() {
/*<328>*/ 	start()
/*<330>*/ 	printf("\x0E\x01\x09\x04C\x4553\x0E\x01\x08\x02\x1CDWHOA!<pause0A> Since when did it learn\nhow to fly?!\n\n\n\x0E\x01\x09\x04B\x4026It's headed straight for the temple,\nbut there's no way I'm letting it\nget there!<pause08> Big ugly's going down\nburning!")
          }

          void entrypoint_500_13() {
/*<476>*/ 	start()
/*<491>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaster Link, I'm sensing\na change in the area that was triggered\nby your Skyward Strike.")
/*<495>*/ 	printf("I have also detected an aura that\ncorrelates closely to your Sailcloth.\nI surmise this aura belongs to Zelda.\n\nI can lead you in the direction of this\naura through a process known as\n<pling><r<dowsing>>.\n\nWould you like me to explain this\nprocess to you?\n[1]Please![2-]Nah...")
/*<569>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<492>*/ 	switch (choice(2)) {
          	  case 0:
/*<493>*/ 		printf("\x0E\x01\x12\x04\x00\x05As you wish, Master.\n\n\n\nDowsing is when I detect the presence \nof the aura of something you wish to\nsearch for using the tip of the sword.\n\nThe nearer you are to an object\nemitting the aura in question, the\n<r<stronger the response will be>>.\n\nThis response manifests itself through\nvibration and sound. The direction of\nthe object emitting the aura is\nindicated by the purple <r<pointer >>you see.")
          		flw_570:
/*<570>*/ 		open_dowsing_wheel(0)
/*<496>*/ 		printf("Hold down (C) and select Zelda as your\ndowsing target, then point in the\ndirection you wish to search.\x0E\x01\x11\x02\x6CD")
/*<565>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          	  case 1:
/*<494>*/ 		printf("Understood, \x0E\x01\x12\x04\x00\x0BMaster.")
          		goto flw_570
          	}
          }

          void entrypoint_500_31() {
/*<143>*/ 	start()
/*<544>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<546>*/ 		{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 545, 'param3': 13}
/*<545>*/ 		printf("\x0E\x03\x01\x00Link, look at the beast's\nforehead! Do you see the <r<sealing spike>>\nembedded there?\n\n\x0E\x01\x09\x04\xE00\x13Drive the spike back into its head, and\nput a stop to its rampage!")
          	  case 1:
/*<145>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<146>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<148>*/ 				printf("\x0E\x01\x09\x04\x10\x160DNow, Link!<pause1E>\n\n\n\nStrike the sealing spike with a <r<Skyward>>\n<r<Strike>>, and restore the seal! \x0E\x01\x09\x04\x11\x1700Quickly!")
          			  case 1:
/*<373>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 147, 'param3': 13}
/*<147>*/ 				printf("\x0E\x03\x01\x00Link, look at the beast's\nforehead! Do you see the <r<sealing spike>>\nembedded there?\n\n\x0E\x01\x09\x04\xE00\x13Drive the spike back into its head, and\nput a stop to its rampage!")
          			}
          		  case 1:
/*<144>*/ 			printf("\x0E\x01\x09\x04\x08\x170F\x0E\x03\x01\x00Link, go quickly! Check\non the <r<sealing spike >>at the bottom of\nthe pit.\n\n\x0E\x01\x09\x04\x14\xB00There is nothing natural about these\ntremors. That monster could free itself\nat any moment. Approach the pit with\ncaution!")
          		}
          	}
          }

          void entrypoint_500_49() {
/*<168>*/ 	start()
/*<549>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<550>*/ 		printf("\x0E\x01\x09\x04\x10\x180FLink, you must seal away\nthe beast as soon as possible!\n\n\nIt has grown stronger since you faced it\nlast. Do not let your guard down.")
          	  case 1:
/*<169>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<171>*/ 			printf("\x0E\x01\x09\x04\x10\x180DYou do remember how to seal the beast\naway, yes?\n\n\nHit the sealing spike with a Skyward\nStrike!<pause1E> Focus your mind. You have the\npower to do this.")
          		  case 1:
/*<170>*/ 			printf("\x0E\x01\x09\x04\x10\x180FLink, you must seal away\nthe beast as soon as possible!\n\n\nIt has grown stronger since you faced it\nlast. Do not let your guard down.")
          		}
          	}
          }

          void entrypoint_500_66() {
/*<329>*/ 	start()
/*<331>*/ 	printf("\x0E\x01\x09\x04A\x4043Is that it? Man, I thought it was going\nto put up more of a fight. Somebody\nshould really thank the genius who\nmade this machine!\nOK, Link, time for you to\ngo show big ugly who's boss!")
          }

          void entrypoint_500_14() {
/*<440>*/ 	start()
/*<441>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaster, I have information for you.\n\n\n\nI have the ability to offer information\non items and creatures you <g<target\n>>with (Z).\x0E\x01\x11\x02\x7CD\n\n<r<While targeting>> something with (Z),\npress (v) and I will brief you with all\nthe information I know on the subject.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          }

          void entrypoint_500_32() {
/*< 25>*/ 	start()
/*<542>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<543>*/ 		printf("\x0E\x01\x09\x04\x001Aaaaah!")
          	  case 1:
/*<149>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<150>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<151>*/ 				printf("\x0E\x01\x09\x04\x000...What are you doing standing there?\nGet your tail down there, and patch up\nthat seal like Grannie told you!\n\nAll you gotta do is whack that spike\nwith a blast from your sword, right?")
          			  case 1:
/*<153>*/ 				printf("\x0E\x01\x09\x04\x001Aaaaah!")
          			}
          		  case 1:
/*<152>*/ 			printf("\x0E\x01\x09\x04\x00\x15Whoa! Wh-what's with all the shaking?\n\n\n\nThe whole ground is heaving...\nI thought it was supposed to be solid\ndown here!")
          		}
          	}
          }

          void entrypoint_500_67() {
/*<332>*/ 	start()
/*<333>*/ 	printf("\x0E\x01\x09\x04\x00&Hey, Link! The machine's\nloaded and ready to bring the boom!\n\n\nWhen you want me to back you up with\na big blast, just send me the signal\nwith (^)!\x0E\x01\x11\x02\x8CD")
          }

          void entrypoint_500_33() {
/*< 47>*/ 	start()
/*<313>*/ 	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
          	  case 0:
/*<325>*/ 		switch (scene_flags[106 /* 0xC 04 */]) {
          		  case 0:
/*<314>*/ 			printf("\x0E\x01\x09\x04\x04\x202I'll help Zelda in my own way.<pause1E>\nYou'll see, Link.")
          		  case 1:
/*<326>*/ 			printf("\x0E\x01\x09\x04\x00\x02Hey. How goes it, Link?\nYou know, I've been doing some hard\nthinking lately.\n\nGrannie keeps telling me I got my own\npart to play in this whole thing,\nyou know?\n\nI'm not cut out for slashing and\nskewering monsters with a sword\nlike you, but maybe I don't gotta be.\n\n\x0E\x01\x09\x04@\x4200I think I got another way to help Zelda.\nI'm gonna do it the \x201CGroose way.\"\n\n\nI'm not giving you any details right\nnow, but just wait and see. I got\nan idea brewing that'll knock your\ngreen beanie off!")
/*<327>*/ 			scene_flags[10 'Sealed Grounds'][106 /* 0xC 04 */] = true;
          		}
          	  case 1:
/*<315>*/ 		switch (scene_flags[105 /* 0xC 02 */]) {
          		  case 0:
/*<316>*/ 			printf("\x0E\x01\x09\x04\x00-Sniff...<pause1E> I'm just deadweight.\nWhat kinda use is that to anyone<pause1E>.<pause1E>.<pause1E>.")
          		  case 1:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x00=\x0E\x01\x08\x02\x1CDAwwww, c'mon!\n\n\n\n\x0E\x01\x09\x04\x00\x3A00\x0E\x01\x08\x02\x1CD\x0E\x01\x08\x02\x1CDI couldn't do a thing!\n\n\n\n\x0E\x01\x09\x04\x00\x4000\x0E\x01\x08\x02\x1CD\x0E\x01\x08\x02\x2CDI'm totally useless!")
/*<317>*/ 			scene_flags[10 'Sealed Grounds'][105 /* 0xC 02 */] = true;
          		}
          	}
          }

          void entrypoint_500_50() {
/*<172>*/ 	start()
/*<559>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<560>*/ 		printf("\x0E\x01\x12\x04\x00\x01Master, it is your destiny to seal away\nthis beast. You must not run from it.")
          	  case 1:
/*<173>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<174>*/ 			printf("\x0E\x01\x12\x04\x00\x0BMaster, you must not leave this area\nuntil you have restored the seal that\nrestrains this beast.")
          		  case 1:
/*<175>*/ 			printf("\x0E\x01\x12\x04\x00\x01Master, it is your destiny to seal away\nthis beast. You must not run from it.")
          		}
          	}
          }

          void entrypoint_500_68() {
/*<378>*/ 	start()
/*<488>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 489, 'param3': 6}
/*<489>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 407, 'param3': 47}
/*<407>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 400, 'param3': 32}
/*<400>*/ 	set_camera(55, 0)
/*<487>*/ 	{'type': 'type3', 'subType': 2, 'param1': 29, 'param2': 356, 'next': 396, 'param3': 15}
/*<396>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 260, 'next': 486, 'param3': 15}
/*<486>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 490, 'param3': 17}
/*<490>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 398, 'param3': 48}
/*<398>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1042, 'param2': 4352, 'next': 397, 'param3': 13}
/*<397>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 4, 'next': 399, 'param3': 14}
/*<399>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 523, 'param3': 16}
/*<523>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<387>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<388>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1086, 'param2': 16447, 'next': 386, 'param3': 13}
/*<386>*/ 	printf("\x0E\x03\x01\x00Link, bad news!\nThat beast looks like it's about to break\nfree again!")
/*<389>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1089, 'param2': 16384, 'next': 391, 'param3': 13}
/*<391>*/ 	printf("Gotta get into position! Hang tight!")
/*<390>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 772, 'next': 421, 'param3': 14}
/*<421>*/ 	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
/*<414>*/ 	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
/*<417>*/ 	changeScene(16, 0) // 
          }

          void entrypoint_500_34() {
/*< 97>*/ 	start()
/*< 98>*/ 	printf("\x0E\x01\x09\x04\x00&With my machine, the woods are just\na fling away!\x0E\x01\x05\x04\n\x00")
/*< 99>*/ 	printf("You stay safe out there!\x0E\x01\x05\x04\x1E\x00")
          }

          void entrypoint_500_51() {
/*<176>*/ 	start()
/*<557>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<558>*/ 		printf("\x0E\x03\x01\x00\x0E\x01\x09\x04\x10\x180FLink, you must restore\nthe seal that imprisons that \nmonstrosity!\n\nIt has grown stronger since you faced it\nlast. You must always stay on guard.")
          	  case 1:
/*<177>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<179>*/ 			printf("\x0E\x01\x09\x04\x10\x180DTo break the seal for a third time...\nTruly this is a fearsome beast.\n\n\nBut now you must send it back to\nits prison once more. Restore the\nseal! I know you hold the power.")
          		  case 1:
/*<178>*/ 			printf("\x0E\x03\x01\x00\x0E\x01\x09\x04\x10\x180FLink, you must restore\nthe seal that imprisons that \nmonstrosity!\n\nIt has grown stronger since you faced it\nlast. You must always stay on guard.")
          		}
          	}
          }

          void entrypoint_500_69() {
/*<409>*/ 	start()
/*<410>*/ 	printf("Awwright! It's time for Groose to\nexplode into action!")
/*<411>*/ 	printf("Adjust the machine's position with \x0E\x02\x04\x02\xECD,\nand aim at your target with the\n<r<Wii Remote>>.\n\nOnce you finish aiming, press (A) to\nlaunch a bomb. If it hits, you'll stun\nthe scaly sucker!")
/*<412>*/ 	printf("If you forget the controls, press (2)\nanytime you're in control of the\n<b<Groosenator >>to review the basics!\x0E\x01\x11\x02\x5CD")
          }

          void entrypoint_500_17() {
/*<473>*/ 	start()
/*< 19>*/ 	set_camera(16, 0)
/*<102>*/ 	{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3330, 'next': 17, 'param3': 13}
/*< 17>*/ 	printf("So lemme see if I've got this right.\n\n\n\nThe old lady living in the <r<temple >>down\nthe road from here knows where\n<b<Zelda >>is?")
/*< 20>*/ 	set_camera(17, 0)
/*<104>*/ 	printf("I see... Right, Link,\nthanks for getting me here.\nYou've done a good job.\nYou can head on home.\n\x0E\x01\x09\x04\x0D\xB41Big <b<Groose >>will handle the search for\n<b<Zelda>> from here.")
/*<103>*/ 	{'type': 'type3', 'subType': 4, 'param1': 24, 'param2': 5632, 'next': 18, 'param3': 13}
/*< 18>*/ 	printf("Yup. I'll track her down, save her, and\nthen give her a lift back to Skyloft...<pause1E>")
/*<106>*/ 	set_camera(18, 0)
/*<107>*/ 	printf("\x0E\x01\x09\x04\x00\x0CThen when we get back, I'll ask her if\nshe wants to make our whole going-out\nthing official, and then the two of us\nwill get some quality time together.")
/*<108>*/ 	set_camera(19, 0)
/*<112>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 512, 'next': 113, 'param3': 13}
/*<113>*/ 	printf("\x0E\x01\x09\x04\x00\x0DAnyway, the point is your work here is\ndone. I got it covered from here!")
/*<109>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 105, 'param3': 6}
/*<105>*/ 	printf("Now, it's off to find that old lady you\nwere talking about.")
/*< 21>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 1024, 'next': 22, 'param3': 14}
/*< 22>*/ 	printf("Catch you later, Link!")
/*<110>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 256, 'next': 111, 'param3': 15}
/*<111>*/ 	set_camera(20, 0)
/*<114>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_35() {
/*< 54>*/ 	start()
/*<360>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 53, 'param3': 13}
/*< 53>*/ 	printf("\x0E\x01\x09\x04\xE00T\x0E\x01\x06\x02\x1CDIt's too late!\n<r<\x0E\x01\x06\x02ÍAll...<pause0A>\x0E\x01\x06\x02\xFECD All is lost.>>\x0E\x01\x05\x04(\x00")
          }

          void entrypoint_500_52() {
/*<180>*/ 	start()
/*<555>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<556>*/ 		printf("\x0E\x03\x01\x00\x0E\x01\x09\x04\x10\x180FLink, you must restore\nthe seal that imprisons that \nmonstrosity!\n\nIt has grown stronger since you faced it\nlast. You must always stay on guard.")
          	  case 1:
/*<181>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<183>*/ 			printf("\x0E\x01\x09\x04\x10\x180DTo break the seal for a third time...\nTruly this is a fearsome beast.\n\n\nBut now you must send it back to\nits prison once more. Restore the\nseal! I know you hold the power.")
          		  case 1:
/*<182>*/ 			printf("\x0E\x03\x01\x00\x0E\x01\x09\x04\x10\x180FLink, you must restore\nthe seal that imprisons that \nmonstrosity!\n\nIt has grown stronger since you faced it\nlast. You must always stay on guard.")
          		}
          	}
          }

          void entrypoint_500_18() {
/*<519>*/ 	start()
/*< 66>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 116, 'param3': 40}
/*<116>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 44, 'param3': 6}
/*< 44>*/ 	set_camera(21, 0)
/*<467>*/ 	{'type': 'type3', 'subType': 2, 'param1': 28, 'param2': 356, 'next': 30, 'param3': 15}
/*< 30>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 28, 'param3': 32}
/*< 28>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 260, 'next': 31, 'param3': 15}
/*< 31>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 29, 'param3': 32}
/*< 29>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 270, 'next': 120, 'param3': 15}
/*<120>*/ 	set_camera(25, 0)
/*< 33>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 34, 'param3': 17}
/*< 34>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1077, 'param2': 13824, 'next': 32, 'param3': 13}
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 470, 'param3': 17}
/*<470>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 469, 'param3': 6}
/*<469>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<518>*/ 	set_camera(26, 0)
/*<129>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1082, 'param2': 15381, 'next': 472, 'param3': 13}
/*<472>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 471, 'param3': 6}
/*<471>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3605, 'param2': 2319, 'next': 24, 'param3': 13}
/*< 24>*/ 	printf("\x0E\x01\x09\x04\x4000Whoa! Wh-what's with all the shaking?")
/*<121>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 130, 'param3': 6}
/*<130>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1079, 'param2': 14592, 'next': 468, 'param3': 13}
/*<468>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 119, 'param3': 6}
/*<119>*/ 	set_camera(24, 0)
/*<118>*/ 	printf("\x0E\x01\x09\x04\x4001The whole ground is heaving...\nI thought it was supposed to be solid\ndown here!")
/*< 45>*/ 	set_camera(27, 0)
/*< 71>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*< 68>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
/*< 67>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<115>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 125, 'param3': 13}
/*<125>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 14, 'next': 128, 'param3': 17}
/*<128>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 23, 'param3': 13}
/*< 23>*/ 	printf("\x0E\x01\x09\x04\xE00\x10Go quickly, Link!\nCheck on the <r<sealing spike>> at the center\nof the pit.")
/*<123>*/ 	{'type': 'type3', 'subType': 2, 'param1': 28, 'param2': 356, 'next': 122, 'param3': 15}
/*<122>*/ 	printf("\x0E\x01\x09\x04\xE00\x1653There is nothing natural about these\ntremors. That monster could free itself\nat any moment. Approach the pit with\ncaution!")
/*<126>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 124, 'param3': 6}
/*<124>*/ 	set_camera(28, 0)
/*<264>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 270, 'next': 366, 'param3': 15}
/*<366>*/ 	scene_flags[10 'Sealed Grounds'][107 /* 0xC 08 */] = true;
/*<127>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_01() {
          	start()
/*<  1>*/ 	printf("\x0E\x01\x09\x04B\x4300Hah! She packs a mean punch, doesn't\nshe! I tell you, I was in love the first\ntime I pulled this lever!\n\n\x0E\x01\x09\x04>\x4000I'll start loading her back up with\nanother bomb, so keep beating on big\nugly till I give you the signal!")
          }

          void entrypoint_500_36() {
/*< 63>*/ 	start()
/*< 64>*/ 	printf("The creature we passed who was under\nassault may have information.\nI suggest we fight off his assailants.")
          }

          void entrypoint_500_53() {
/*<184>*/ 	start()
/*<185>*/ 	printf("\x0E\x01\x09\x04\x00&Hey, Link, the machine's\nall loaded and ready to smash!\n\n\nIf that flabby sack of teeth tries to\nclimb the wall, I can blast it off from\nhere with a bomb!\n\nWhen you want some backup from\nme, just send me the signal with (^)!\x0E\x01\x11\x02\x8CD")
          }

          void entrypoint_500_70() {
/*<431>*/ 	start()
/*<432>*/ 	printf("\x0E\x01\x12\x04\x00\x01Master, please make sure to use your\nSailcloth when descending from high\nelevations. Failing to do so has a high\nprobability of resulting in injury.\nI took the liberty of deploying the\nSailcloth for you this time, but in the\nfuture you can manually engage it by\npressing (B) before landing.\x0E\x01\x11\x02\x1CD")
          }

