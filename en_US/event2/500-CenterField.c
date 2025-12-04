          void entrypoint_500_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00434500>Whoops, missed! All this muscle's not\nworth much if I don't hit my target!\n\n\n<0x10009:0x00414000>I'll start loading my machine back up\nwith another bomb, so keep clobbering\nstanky toes till I give you the signal!")
          }

          void entrypoint_500_37() {
/*< 49>*/ 	start()
/*< 61>*/ 	switch (scene_flags[14 /* 0x0 40 */]) {
          	  case 0:
/*<435>*/ 		switch (scene_flags[109 /* 0xC 20 */]) {
          		  case 0:
/*<436>*/ 			printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x00000001>I have to examine this statue further,\nbud. Who knows what I might find out!")
          		  case 1:
/*<427>*/ 			printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x00080b07>According to some of the ancient texts\nI have read, there is a place way up in\nthe sky called the <color red<Isle of the Goddess>coloroff>.\n\nOld statues like the one behind me\nwere placed here to provide travelers\nwith a way back up to the island.\n\nMy research seems to suggest this\nparticular statue is special in that\nit alone holds the power to <color red<activate>coloroff>\nall the other statues.\n<0x10009:0x00161900>Hey, I will be the first one to admit it\nsounds like something out of a fairy\ntale, but I am starting to believe it!\n\n<0x10009:0x00000b04>I mean, if that is not true, then what\nare all these statues doing all over\nthis land?")
          			flw_62:
/*< 62>*/ 			printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x00181700>It is a real head-scratcher, bud. Makes\nyou want to know more, does it not?\n[1-]Yeah![2]Not really...")
/*<423>*/ 			switch (choice(2)) {
          			  case 0:
/*<424>*/ 				printf(/* textboxtype: 1, unk: 0, line: 61 */ "<0x10009:0x00151902>Ah, sounds like I have a fellow\nconnoisseur of ancient cultures here!\n\n\n<0x10009:0x00160b00>All right, bud, you had better brace\nyourself, because I am about to blow\nyour mind.\n\nSo get this: people actually live on this\nsky island, and they get around by\nflying on the backs of huge birds that\nare way bigger than birds down here!\n<0x10009:0x00001e00>Up there everyone reveres the goddess,\nand the residents of all the islands\nin the sky live in a perfect society,\ntotally free of conflict or unhappiness!\n<0x10009:0x00000b00>Not only that, but from what I can tell,\ntheir civilization is way, way more\nadvanced than ours down here.")
/*<426>*/ 				printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x00080b00>But it does not even stop there, bud!\nThis Isle of the Goddess has even more\nstuff to marvel at!\n\n<0x10009:0x001f1e00>The place was crafted by the goddess\nherself, so it figures that it is filled \nwith wonders we do not have here.\n\n<0x10009:0x00001908>The buildings are all made of gold!\nAn endless spring of mystical water\nfeeds a river through the place. One\nsip of that stuff, and you live forever!\n<0x10009:0x00000b00>The trees are heavy with plump fruit\nthat cures all disease! The fields are \ncrowded with pumpkins that never rot!\nMagic wildflowers bloom everywhere!\n<0x10009:0x00171900>And the weather. Oh, the weather, bud!\nNot too hot, not too cold. No chance of\nsweaty heat in this garden paradise!\nThat is the Isle of the Goddess...\n<0x10009:0x00000b05><0x10008:0x01cd>Amazing, right?<pause 20> WRONG!\nIT IS BEYOND AMAZING!\n\n\n<0x10009:0x00211806><0x10008:0x02cd>You want to hear more \nabout it, don't you, bud?\n[1-]Sure![2]Nah...")
/*<434>*/ 				scene_flags[10 'Sealed Grounds'][109 /* 0xC 20 */] = true;
/*<430>*/ 				switch (choice(2)) {
          				  case 0:
/*<428>*/ 					printf(/* textboxtype: 1, unk: 0, line: 65 */ "<0x10009:0x00271956>Good to hear, bud! I am completely\nobsessed with this place. I cannot get\nenough of it!\n\n<0x10009:0x00161e00>I wish I had more to tell you now,\nbut I will need to research these statues\nto learn more.\n\n<0x10009:0x00000b00>Next time I bump into you, I will give\nyou the latest info!")
          					flw_433:
/*<433>*/ 					switch (scene_flags[14 /* 0x0 40 */]) {
          					  case 0:
          					  case 1:
/*< 60>*/ 						scene_flags[10 'Sealed Grounds'][14 /* 0x0 40 */] = true;
/*<579>*/ 						scene_flags[10 'Sealed Grounds'][35 /* 0x5 08 */] = true;
/*<343>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					}
          				  case 1:
/*<429>*/ 					printf(/* textboxtype: 1, unk: 0, line: 64 */ "<0x10009:0x00161e56>Ah, that so, bud? I was hoping to tell\nyou more, but I guess it can wait.")
          					goto flw_433
          				}
          			  case 1:
/*<425>*/ 				printf(/* textboxtype: 1, unk: 0, line: 64 */ "<0x10009:0x00161e56>Ah, that so, bud? I was hoping to tell\nyou more, but I guess it can wait.")
          				goto flw_433
          			}
          		}
          	  case 1:
/*< 55>*/ 		switch (scene_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<341>*/ 			printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x00000008>Whew! Thanks for jumping in there to\nrescue me, bud!")
/*<334>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 340, 'param3': 47}
/*<340>*/ 			set_camera(49, 0)
/*<338>*/ 			{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 256, 'next': 339, 'param3': 15}
/*<339>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 335, 'param3': 15}
/*<335>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 58, 'param3': 48}
/*< 58>*/ 			printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00080b0a>Just who were those red pests?\nI did not expect to run into a pack of\nthem in this peaceful forest.\n\n<0x10009:0x00161e00>Same goes for you. This is the second\ntime I've bumped into one of your kind\ntoday. I tell you, all sorts of weird\nthings are going on lately.\n<0x10009:0x00000b00>I owe you big for taking care of those\nguys, so let me tell you something\nfascinating.")
/*< 57>*/ 			set_camera(13, 0)
/*<437>*/ 			{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 356, 'next': 65, 'param3': 15}
/*< 65>*/ 			{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 256, 'next': 56, 'param3': 15}
/*< 56>*/ 			{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 0, 'next': 260, 'param3': 14}
/*<260>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 342, 'param3': 17}
/*<342>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 365, 'param3': 17}
/*<365>*/ 			{'type': 'type3', 'subType': 2, 'param1': 16, 'param2': 256, 'next': 59, 'param3': 15}
/*< 59>*/ 			printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x00080b01>Hey, bud! I am Gorko the Goron. I am\nresearching the ancient history of\nthese woods here.\n\n<0x10009:0x00001700>According to the ancient texts, there is\nsome kind of place up above called the\n<color red<Isle of the Goddess>coloroff>. Far up in the sky!\n\n<0x10009:0x00000b00>Apparently, these old statues serve \nas landmarks to those <color red<traveling up to\nthe sky>coloroff> or down from this Isle of the\nGoddess place.\n<color red<<sound 4>>coloroff><color red<If you find one, be sure to examine it >coloroff>to\nkeep tabs on the number of landmarks.\nThey are rumored to be quite useful.\n\nSupposedly this statue is special, as it is\nsaid to have the ability to activate all\nthe other statues.\n\n<0x10009:0x00161907>The whole thing sounds a little\ncrazy, I know, but I for one believe\nit to be true!\n\nOtherwise, why would all these statues\nbe here all over the place?")
          			goto flw_62
          		  case 1:
/*<336>*/ 			switch (scene_flags[94 /* 0xA 40 */]) {
          			  case 0:
/*<337>*/ 				printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00000b52>G-get them!")
          			  case 1:
/*<258>*/ 				set_camera(37, 0)
/*<465>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 50, 'param3': 32}
/*< 50>*/ 				printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x18000b52>Out of the way! Scram!")
/*<259>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		}
          	}
          }

          void entrypoint_500_54() {
/*<215>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 2, unk: 0, line: 11 */ "<0x10005:0x00320000><0x10012:0x00000004>Master <heroname>, we've\narrived.")
          }

          void entrypoint_500_71() {
/*<438>*/ 	start()
/*<439>*/ 	printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00151b09><0x10008:0x01cd>WHOA!")
          }

          void entrypoint_500_03() {
/*<  4>*/ 	start()
/*<568>*/ 	{'type': 'type3', 'subType': 4, 'param1': 62, 'param2': 16384, 'next': 5, 'param3': 13}
/*<  5>*/ 	printf(/* textboxtype: 1, unk: 0, line: 5 */ "This time, you're the payload! Haha!\nI'll give you a boost, but there's no\nguaranteeing this is gonna work.")
          }

          void entrypoint_500_55() {
/*<210>*/ 	start()
/*<211>*/ 	printf(/* textboxtype: 2, unk: 0, line: 12 */ "<0x10005:0x004b0000>This is the fabled <color blue<surface>coloroff> that has\nlong been part of Skyloft legend.")
          }

          void entrypoint_500_72() {
/*<442>*/ 	start()
/*<443>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 445, 'param3': 32}
/*<445>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 453, 'param3': 40}
/*<453>*/ 	wait_frames(30)
/*<444>*/ 	printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x28000004><0x10008:0x01cd>Hey! <0x30001:0x><0x30001:0x><heroname>!")
/*<454>*/ 	set_camera(51, 0)
/*<458>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 446, 'param3': 16}
/*<446>*/ 	printf(/* textboxtype: 1, unk: 1, line: 109 */ "<0x10007:0x2800000f>Duh huh huh! Try not to drool on your\nshirt as you stare at this amazing\nsuperweapon I've been working on!")
/*<455>*/ 	set_camera(56, 0)
/*<459>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16909, 'next': 447, 'param3': 13}
/*<447>*/ 	printf(/* textboxtype: 1, unk: 1, line: 110 */ "I call it...the <color red<Groosenator>coloroff>!")
/*<460>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 448, 'param3': 13}
/*<448>*/ 	printf(/* textboxtype: 1, unk: 1, line: 111 */ "<0x10009:0x28000018>Leaves you speechless, doesn't it?\nThat's only natural. You wouldn't\nbelieve how much time I put into\nbuilding this beauty.")
/*<462>*/ 	printf(/* textboxtype: 1, unk: 1, line: 112 */ "Here--check it out!")
/*<456>*/ 	set_camera(48, 0)
/*<463>*/ 	printf(/* textboxtype: 1, unk: 1, line: 113 */ "<0x10009:0x28404300>First, I got all the fences cluttering the\narea out of the way. Then I laid down\nrails for her to run on. All by myself,\nof course.\nI don't know what came over me!<pause 30> I had\nno clue I had the talent to make\nsomething like this, you know?\n\n<0x10009:0x28414000>Anyhow, you just tell me where you\nwant me to place my shots, and I'll\nput a hurting on that ugly monster!")
/*<464>*/ 	set_camera(32, 0)
/*<449>*/ 	printf(/* textboxtype: 1, unk: 1, line: 114 */ "<0x10009:0x28044000>I don't care how beefy you are--you're\nbound to stumble for a few moments\nafter taking one of my big bombs to\nthe body!")
/*<461>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 450, 'param3': 13}
/*<450>*/ 	printf(/* textboxtype: 1, unk: 1, line: 115 */ "Hang on, though... That monster\nshowed up a smidge sooner than I\nwas expecting.")
/*<451>*/ 	printf(/* textboxtype: 1, unk: 1, line: 116 */ "<0x10009:0x28414000>There are a few final adjustments I\ngotta make before she can move on\nthe rails I've put down.\n\nI'll call out to you when she's ready for\naction. Till then, do whatever you can\nto hold off that beast!")
/*<457>*/ 	set_camera(57, 0)
/*<452>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_04() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "")
          }

          void entrypoint_500_56() {
/*<214>*/ 	start()
/*<212>*/ 	printf(/* textboxtype: 2, unk: 0, line: 13 */ "<0x10005:0x004b0000>By my calculations, you are currently\npositioned in a location known as\nthe <color blue<Sealed Grounds>coloroff>.")
          }

          void entrypoint_500_73() {
/*<479>*/ 	start()
/*<477>*/ 	printf(/* textboxtype: 1, unk: 2, line: 17 */ "...<0x10006:0xfdcd>Young one...\n\n\n\n<0x10006:0xfdcd>Child of destiny descended from\nthe sky...")
          }

          void entrypoint_500_05() {
/*<  8>*/ 	start()
/*<  9>*/ 	printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x0000000f>I knew it. The seal has given way.\n\n\n\nI'll explain later, but now is the time\nfor action. We must keep that beast\nfrom escaping that pit!\n\nIt must not reach the temple!")
          }

          void entrypoint_500_22() {
/*< 26>*/ 	start()
/*< 81>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 80, 'param3': 32}
/*< 80>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 27, 'param3': 16}
/*< 27>*/ 	printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0010160d>Now, <heroname>!<pause 30>\n\n\n\nStrike the sealing spike with a <color red<Skyward>coloroff>\n<color red<Strike>coloroff>, and restore the seal! <0x10009:0x00111700>Quickly!")
          }

          void entrypoint_500_57() {
/*<413>*/ 	start()
/*<370>*/ 	{'type': 'type3', 'subType': 2, 'param1': 23, 'param2': 356, 'next': 310, 'param3': 15}
/*<310>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 311, 'param3': 32}
/*<311>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 484, 'param3': 17}
/*<484>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 40, 'next': 509, 'param3': 17}
/*<509>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<510>*/ 	wait_frames(30)
/*<511>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*<515>*/ 	wait_frames(10)
/*<512>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
/*<513>*/ 	wait_frames(60)
/*<375>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<514>*/ 	wait_frames(10)
/*<517>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10302, 'param2': 17664, 'next': 485, 'param3': 13}
/*<485>*/ 	set_camera(52, 0)
/*<376>*/ 	printf(/* textboxtype: 1, unk: 1, line: 119 */ "<0x10009:0x28000053>Whoa!<0x10005:0x001e0000>")
/*<254>*/ 	printf(/* textboxtype: 1, unk: 1, line: 118 */ "<0x10009:0x28004000>Feels like that seal is going to give way\nany second.<0x10005:0x001e0000>")
/*<255>*/ 	printf(/* textboxtype: 1, unk: 1, line: 120 */ "<0x10009:0x283e400f>Uh...but no need to panic!\n\n\n\n<0x10009:0x28410000>You know what the <color red<Groosenator>coloroff> can\ndo, am I right?")
/*<256>*/ 	printf(/* textboxtype: 1, unk: 1, line: 121 */ "<0x10009:0x28000000>As long as I'm at the controls of this\nbombshell beauty, I don't even know\nthe meaning of the word “defeat\"!\n\n<0x10009:0x28000200>Flinging bombs on this monster's face,\ndefending the land... It's my purpose,\nI think. It's why I'm here.")
/*<257>*/ 	printf(/* textboxtype: 1, unk: 1, line: 122 */ "<0x10009:0x28000200>Anyway, <heroname>, I've got\nwork to do. Try not to get in the way of\nmy shots, OK?")
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
/*<478>*/ 	printf(/* textboxtype: 1, unk: 2, line: 18 */ "<0x10006:0xfdcd>Raise the sword of the goddess\nskyward... <pause 15><0x10006:0xfdcd>Take aim at the evil aura\nand unleash its power...")
          }

          void entrypoint_500_40() {
/*< 51>*/ 	start()
/*< 85>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 84, 'param3': 32}
/*< 84>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3592, 'param2': 2829, 'next': 86, 'param3': 13}
/*< 86>*/ 	set_camera(15, 0)
/*< 52>*/ 	printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x30001:0x><heroname>, look at the beast's\nforehead! Do you see the <color red<sealing spike>coloroff>\nembedded there?\n\n<0x10009:0x0e000013>Drive the spike back into its head, and\nput a stop to its rampage!")
/*< 87>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_58() {
/*<216>*/ 	start()
/*<213>*/ 	printf(/* textboxtype: 2, unk: 0, line: 14 */ "<0x10005:0x004b0000>Please proceed with caution, <0x10012:0x0000000b>Master.")
          }

          void entrypoint_500_23() {
/*<475>*/ 	start()
/*<481>*/ 	printf(/* textboxtype: 2, unk: 0, line: 8 */ "Master, I have information to report.")
/*<482>*/ 	printf(/* textboxtype: 2, unk: 0, line: 9 */ "While these doors appear to have been\nopened recently, they are now sealed\nshut by a powerful unidentified force.")
          }

          void entrypoint_500_75() {
/*<497>*/ 	start()
/*<498>*/ 	story_flags[790 /* us: 805A9B2C 0x40, jp: 805ACDAC 0x40 */] = true;
/*<520>*/ 	scene_flags[10 'Sealed Grounds'][54 /* 0x7 40 */] = true;
          }

          void entrypoint_500_41() {
/*< 76>*/ 	start()
/*< 74>*/ 	printf(/* textboxtype: 1, unk: 0, line: 86 */ "<0x10009:0x00000026>Nice work there, <heroname>!\nCourse, you couldn't've done it without\nme, but no need to thank Groose. \nI know I saved your tail.\nNow let's get that Gate of Time thing\nup and running. I'll go on ahead!")
          }

          void entrypoint_500_24() {
/*<137>*/ 	start()
/*<547>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<548>*/ 		printf(/* textboxtype: 2, unk: 0, line: 41 */ "<0x10012:0x0000000b>Master, I have important information\nfor you. The beast you face has a \n<color red<sealing spike>coloroff> lodged in its forehead.\n\nYou must not leave this place until you\nhave successfully restored the seal\nthat restrains this beast.")
          	  case 1:
/*<139>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<140>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<141>*/ 				printf(/* textboxtype: 2, unk: 0, line: 42 */ "<0x10012:0x0000000b>Master, you must not leave this area\nuntil you have restored the seal that\nrestrains this beast.")
          			  case 1:
/*<142>*/ 				printf(/* textboxtype: 2, unk: 0, line: 41 */ "<0x10012:0x0000000b>Master, I have important information\nfor you. The beast you face has a \n<color red<sealing spike>coloroff> lodged in its forehead.\n\nYou must not leave this place until you\nhave successfully restored the seal\nthat restrains this beast.")
          			}
          		  case 1:
/*<138>*/ 			printf(/* textboxtype: 2, unk: 0, line: 40 */ "")
          		}
          	}
          }

          void entrypoint_500_59() {
/*<217>*/ 	start()
/*<218>*/ 	printf(/* textboxtype: 1, unk: 2, line: 72 */ "<0x10009:0x003e4515><0x10008:0x01cd>Oh NO!\n\n\n\n<0x10009:0x00004000>Not good! The road crumbled, and I\ncan't get to the rest of my bomb stash!\nWhat do I do?!")
          }

          void entrypoint_500_76() {
/*<506>*/ 	start()
/*<466>*/ 	printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x00131907>What in the world just happened?\nDid you use some kind of magic?\n\n\n<0x10009:0x00171b08>The statue reacted the moment you\ngot near it, bud. How crazy is that?")
          }

          void entrypoint_500_08() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00444300>We got it, but that shot hit kinda late!\n\n\n\n<0x10009:0x00004000>I'll start loading 'er back up, so keep\nbeating on big ugly till I give you the\nsignal!\n")
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
/*< 75>*/ 	printf(/* textboxtype: 1, unk: 0, line: 88 */ "<0x10009:0x00203010>Whew... I gotta say, <heroname>,\nI thought we were goners this time.\nSorta glad I was wrong about that.\n\n<0x10009:0x00420200>I'm gonna run ahead to the temple.\nYou should get back there too!")
          }

          void entrypoint_500_77() {
/*<507>*/ 	start()
/*<508>*/ 	printf(/* textboxtype: 1, unk: 2, line: 73 */ "<0x10009:0x003e4026><0x30001:0x><heroname>! Come up to the\ntemple, and <color red<make your way over\nhere>coloroff>. Hustle up!")
          }

          void entrypoint_500_09() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf(/* textboxtype: 1, unk: 2, line: 4 */ "<0x10009:0x0020403c>Nice! You're locked and loaded!\nWe'll aim it to send you straight for\nthe spike on its head!")
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
/*<132>*/ 	printf(/* textboxtype: 1, unk: 1, line: 95 */ "<0x30001:0x><heroname>, bad news!\nThat beast looks like it's about to break\nfree again!")
/*<263>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1089, 'param2': 16384, 'next': 136, 'param3': 13}
/*<136>*/ 	printf(/* textboxtype: 1, unk: 1, line: 96 */ "Gotta get into position! Hang tight!")
/*<135>*/ 	{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 772, 'next': 420, 'param3': 14}
/*<420>*/ 	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
/*<134>*/ 	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
/*<418>*/ 	changeScene(16, 0) // 
          }

          void entrypoint_500_60() {
/*<219>*/ 	start()
/*<372>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 222, 'param3': 32}
/*<222>*/ 	printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x28000004><0x10008:0x01cd>Hey! <0x30001:0x><0x30001:0x><heroname>!")
/*<293>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 294, 'param3': 40}
/*<294>*/ 	wait_frames(45)
/*<229>*/ 	set_camera(31, 0)
/*<231>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 295, 'param3': 16}
/*<295>*/ 	{'type': 'type3', 'subType': 2, 'param1': 20, 'param2': 356, 'next': 223, 'param3': 15}
/*<223>*/ 	printf(/* textboxtype: 1, unk: 1, line: 109 */ "<0x10007:0x2800000f>Duh huh huh! Try not to drool on your\nshirt as you stare at this amazing\nsuperweapon I've been working on!")
/*<230>*/ 	set_camera(32, 0)
/*<344>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 224, 'param3': 13}
/*<224>*/ 	printf(/* textboxtype: 1, unk: 1, line: 110 */ "I call it...the <color red<Groosenator>coloroff>!")
/*<345>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10302, 'param2': 512, 'next': 225, 'param3': 13}
/*<225>*/ 	printf(/* textboxtype: 1, unk: 1, line: 111 */ "<0x10009:0x28000018>Leaves you speechless, doesn't it?\nThat's only natural. You wouldn't\nbelieve how much time I put into\nbuilding this beauty.")
/*<361>*/ 	printf(/* textboxtype: 1, unk: 1, line: 112 */ "Here--check it out!")
/*<232>*/ 	set_camera(33, 0)
/*<362>*/ 	printf(/* textboxtype: 1, unk: 1, line: 113 */ "<0x10009:0x28404300>First, I got all the fences cluttering the\narea out of the way. Then I laid down\nrails for her to run on. All by myself,\nof course.\nI don't know what came over me!<pause 30> I had\nno clue I had the talent to make\nsomething like this, you know?\n\n<0x10009:0x28414000>Anyhow, you just tell me where you\nwant me to place my shots, and I'll\nput a hurting on that ugly monster!")
/*<233>*/ 	set_camera(32, 0)
/*<226>*/ 	printf(/* textboxtype: 1, unk: 1, line: 114 */ "<0x10009:0x28044000>I don't care how beefy you are--you're\nbound to stumble for a few moments\nafter taking one of my big bombs to\nthe body!")
/*<368>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 227, 'param3': 13}
/*<227>*/ 	printf(/* textboxtype: 1, unk: 1, line: 115 */ "Hang on, though... That monster\nshowed up a smidge sooner than I\nwas expecting.")
/*<228>*/ 	printf(/* textboxtype: 1, unk: 1, line: 116 */ "<0x10009:0x28414000>There are a few final adjustments I\ngotta make before she can move on\nthe rails I've put down.\n\nI'll call out to you when she's ready for\naction. Till then, do whatever you can\nto hold off that beast!")
/*<296>*/ 	set_camera(45, 0)
/*<240>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_78() {
/*<580>*/ 	start()
/*<581>*/ 	printf(/* textboxtype: 2, unk: 0, line: 128 */ "<0x10012:0x0000000b>Master, you must seal away the beast\nthat has broken free. Attempting to\nflee from your current situation will\nnot help you accomplish this task.")
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
/*<245>*/ 	printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x28000004><0x10008:0x01cd>Hey! <0x30001:0x><0x30001:0x><heroname>!")
/*<246>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 297, 'param3': 40}
/*<297>*/ 	wait_frames(30)
/*<501>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 298, 'param3': 47}
/*<298>*/ 	set_camera(36, 0)
/*<503>*/ 	{'type': 'type3', 'subType': 2, 'param1': 30, 'param2': 356, 'next': 502, 'param3': 15}
/*<502>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 247, 'param3': 48}
/*<247>*/ 	printf(/* textboxtype: 1, unk: 1, line: 109 */ "<0x10007:0x2800000f>Duh huh huh! Try not to drool on your\nshirt as you stare at this amazing\nsuperweapon I've been working on!")
/*<299>*/ 	set_camera(46, 0)
/*<300>*/ 	wait_frames(15)
/*<346>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16909, 'next': 248, 'param3': 13}
/*<248>*/ 	printf(/* textboxtype: 1, unk: 1, line: 110 */ "I call it...the <color red<Groosenator>coloroff>!")
/*<474>*/ 	{'type': 'type3', 'subType': 2, 'param1': 29, 'param2': 356, 'next': 347, 'param3': 15}
/*<347>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 249, 'param3': 13}
/*<249>*/ 	printf(/* textboxtype: 1, unk: 1, line: 111 */ "<0x10009:0x28000018>Leaves you speechless, doesn't it?\nThat's only natural. You wouldn't\nbelieve how much time I put into\nbuilding this beauty.")
/*<363>*/ 	printf(/* textboxtype: 1, unk: 1, line: 112 */ "Here--check it out!")
/*<301>*/ 	set_camera(47, 0)
/*<364>*/ 	printf(/* textboxtype: 1, unk: 1, line: 113 */ "<0x10009:0x28404300>First, I got all the fences cluttering the\narea out of the way. Then I laid down\nrails for her to run on. All by myself,\nof course.\nI don't know what came over me!<pause 30> I had\nno clue I had the talent to make\nsomething like this, you know?\n\n<0x10009:0x28414000>Anyhow, you just tell me where you\nwant me to place my shots, and I'll\nput a hurting on that ugly monster!")
/*<367>*/ 	set_camera(32, 0)
/*<250>*/ 	printf(/* textboxtype: 1, unk: 1, line: 114 */ "<0x10009:0x28044000>I don't care how beefy you are--you're\nbound to stumble for a few moments\nafter taking one of my big bombs to\nthe body!")
/*<348>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 251, 'param3': 13}
/*<251>*/ 	printf(/* textboxtype: 1, unk: 1, line: 115 */ "Hang on, though... That monster\nshowed up a smidge sooner than I\nwas expecting.")
/*<252>*/ 	printf(/* textboxtype: 1, unk: 1, line: 116 */ "<0x10009:0x28414000>There are a few final adjustments I\ngotta make before she can move on\nthe rails I've put down.\n\nI'll call out to you when she's ready for\naction. Till then, do whatever you can\nto hold off that beast!")
/*<302>*/ 	set_camera(50, 0)
/*<253>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_44() {
/*<354>*/ 	start()
/*<356>*/ 	switch (scene_flags[6 /* 0x1 40 */]) {
          	  case 0:
/*<358>*/ 		printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x00171b08>The statue just reacted to you! \nWhat did you do? Come on, do not \nmake a big guy beg! I have got to know!")
          	  case 1:
/*<355>*/ 		printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x00151b05><0x10008:0x01cd>GORO!")
/*<357>*/ 		printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00131909>What was THAT?!\n\n\n\n<0x10009:0x00171b08>The statue just reacted to you! \nWhat did you do? Come on, do not \nmake a big guy beg! I have got to know!")
/*<359>*/ 		scene_flags[10 'Sealed Grounds'][6 /* 0x1 40 */] = true;
          	}
          }

          void entrypoint_500_45() {
/*< 89>*/ 	start()
/*< 88>*/ 	printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000026>Look at that. Seems like our ugly\nfriend grew itself a pair of hands.\nGreat timing!\n\nI hope it knows how to catch, because\nmy machine has a mean right arm!\n\n\n<0x10009:0x00424000>When she's all loaded up, I'll let you\nknow. Until then, do what you need to\ndo to stop it!")
          }

          void entrypoint_500_28() {
/*<160>*/ 	start()
/*<553>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<554>*/ 		printf(/* textboxtype: 2, unk: 0, line: 43 */ "<0x10012:0x0000000b>Master, the beast freed itself again.\nYou must stay here and stand\nagainst it.")
          	  case 1:
/*<161>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<162>*/ 			printf(/* textboxtype: 2, unk: 0, line: 44 */ "<0x10012:0x0000000b>Master, you must not leave this area\nuntil you have restored the seal that\nrestrains this beast.")
          		  case 1:
/*<163>*/ 			printf(/* textboxtype: 2, unk: 0, line: 43 */ "<0x10012:0x0000000b>Master, the beast freed itself again.\nYou must stay here and stand\nagainst it.")
          		}
          	}
          }

          void entrypoint_500_62() {
/*<221>*/ 	start()
/*<234>*/ 	printf(/* textboxtype: 1, unk: 0, line: 117 */ "")
/*<303>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 307, 'param3': 40}
/*<307>*/ 	wait_frames(45)
/*<305>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 349, 'param3': 32}
/*<349>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 306, 'param3': 16}
/*<306>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 304, 'param3': 17}
/*<304>*/ 	set_camera(31, 0)
/*<308>*/ 	{'type': 'type3', 'subType': 2, 'param1': 20, 'param2': 356, 'next': 238, 'param3': 15}
/*<238>*/ 	wait_frames(30)
/*<350>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 235, 'param3': 13}
/*<235>*/ 	printf(/* textboxtype: 1, unk: 1, line: 118 */ "<0x10009:0x28004000>Feels like that seal is going to give way\nany second.<0x10005:0x001e0000>")
/*<241>*/ 	set_camera(32, 0)
/*<351>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 236, 'param3': 13}
/*<236>*/ 	printf(/* textboxtype: 1, unk: 1, line: 120 */ "<0x10009:0x283e400f>Uh...but no need to panic!\n\n\n\n<0x10009:0x28410000>You know what the <color red<Groosenator>coloroff> can\ndo, am I right?")
/*<237>*/ 	printf(/* textboxtype: 1, unk: 1, line: 121 */ "<0x10009:0x28000000>As long as I'm at the controls of this\nbombshell beauty, I don't even know\nthe meaning of the word “defeat\"!\n\n<0x10009:0x28000200>Flinging bombs on this monster's face,\ndefending the land... It's my purpose,\nI think. It's why I'm here.")
/*<352>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 242, 'param3': 13}
/*<242>*/ 	printf(/* textboxtype: 1, unk: 1, line: 122 */ "<0x10009:0x28000200>Anyway, <heroname>, I've got\nwork to do. Try not to get in the way of\nmy shots, OK?")
/*<309>*/ 	set_camera(45, 0)
/*<239>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_11() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 2, unk: 0, line: 15 */ "")
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
/*<534>*/ 				printf(/* textboxtype: 1, unk: 0, line: 85 */ "<0x10009:0x00004026><0x30001:0x><heroname>, we're in trouble! I\ncan't get to my stash of bombs!\n\n\n<0x10009:0x00204000>All right...<pause 25> <0x30001:0x><heroname>! We've\ngot no choice! You've got to get up onto\nthat ugly thing's head! Quick now!")
          			  case 1:
/*<532>*/ 				switch (zone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<533>*/ 					printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00000026>The <color red<Groosenator>coloroff> is ready for action!\n\n\n\nJust press (^) to set up the shot!<0x10011:0x08cd>\n\n\n\nAdjust the machine's position with (ControlStick),\nand aim at your target with the\n<color red<Wii Remote>coloroff>. Once your shot's set, let\nthat scaly creep have it!")
          				  case 1:
/*<531>*/ 					printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00004226>Guess it's time for the <color red<Groosenator>coloroff>\nto work its magic again!\n\n\nJust like before, you'll see me appear\nabove (^) when the machine's ready\nfor action.<0x10011:0x08cd>\n\n<0x10009:0x00424000>You and me are going to\ntag team this freak!\nLet's do it, <heroname>!")
          				}
          			}
          		  case 1:
/*<529>*/ 			switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          			  case 0:
/*<536>*/ 				switch (zone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<537>*/ 					printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00000026>The <color red<Groosenator>coloroff> is ready for action!\n\n\n\nJust press (^) to set up the shot!<0x10011:0x08cd>\n\n\n\nAdjust the machine's position with (ControlStick),\nand aim at your target with the\n<color red<Wii Remote>coloroff>. Once your shot's set, let\nthat scaly creep have it!")
          				  case 1:
/*<535>*/ 					printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x00044100>So today's the day I finally get to\nbust out the <color red<Groosenator>coloroff>!\n\n\n<0x10009:0x00000300>Soon as I'm ready to fire, you'll see my\nsignal appear above (^). <0x10009:0x00004000>Till then, it's\nup to you and that sword of yours to\nkeep that thing away!<0x10011:0x08cd>")
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
/*<194>*/ 								printf(/* textboxtype: 1, unk: 1, line: 100 */ "<0x10009:0x00000026>So, where you flying to today?\n[1-]The sky![2-]The surface.[3]Never mind!")
/*<195>*/ 								switch (choice(3)) {
          								  case 0:
/*<586>*/ 									switch (story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */]) {
          									  case 0:
/*<196>*/ 										printf(/* textboxtype: 1, unk: 1, line: 101 */ "Somewhere fun in the sky, huh?\nWhat kind of fun are you looking for?\n[1-]Skydiving.[2-]Bug hunting.[3-]Something else...")
/*<571>*/ 										switch (choice(3)) {
          										  case 0:
          											flw_209:
/*<209>*/ 											zone_temp_flags[1 /* 0x1 02 */] = true;
          											flw_204:
/*<204>*/ 											{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 199, 'param3': 42}
/*<199>*/ 											printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x00420342>OK, here we go! Hold on to your little\nhat!")
          										  case 1:
          											flw_202:
/*<202>*/ 											zone_temp_flags[2 /* 0x1 04 */] = true;
          											goto flw_204
          										  case 2:
/*<197>*/ 											printf(/* textboxtype: 1, unk: 1, line: 102 */ "What kind of fun are you looking for?\nAnything in particular?\n[1-]Cutting![2-]Shooting![3]Never mind.")
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
/*<200>*/ 												printf(/* textboxtype: 1, unk: 0, line: 106 */ "If you ever want to travel to fun places\nin style, just come see me!")
          											}
          										}
          									  case 1:
/*<585>*/ 										printf(/* textboxtype: 1, unk: 1, line: 103 */ "Somewhere fun in the sky, eh?\nWhere should I launch you?\n[1-]Skydiving.[2-]Bug hunting.[3-]Cutting.[4]Never mind.")
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
/*<198>*/ 									printf(/* textboxtype: 1, unk: 1, line: 104 */ "Somewhere fun down here, eh?\nWhat kind of fun are you\nlooking for?\n[1-]Lightning Round![2-]Thrill Digger![3-]Rickety Coaster![4]Never mind.")
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
/*<563>*/ 								printf(/* textboxtype: 1, unk: 0, line: 107 */ "<0x10009:0x00000004>Yo, <heroname>!\n\n\n\nI decided the best thing for me to do\nis hang back here on the surface\nwith you. Hey, someone's got to do it!")
/*<562>*/ 								story_flags[799 /* us: 805A9B2F 0x80, jp: 805ACDAF 0x80 */] = true;
/*<577>*/ 								switch (story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */]) {
          								  case 0:
          									goto flw_194
          								  case 1:
/*<578>*/ 									printf(/* textboxtype: 1, unk: 0, line: 98 */ "This machine of mine can sling you all\nover the land if you're interested\nin flying without a Loftwing.")
          									flw_575:
/*<575>*/ 									printf(/* textboxtype: 1, unk: 0, line: 99 */ "With a man of my skill at the controls,\nI can guarantee that I won't chuck you\nanywhere boring!\n\nIf you land somewhere you don't know,\nwell, maybe it's a great time to look\naround and explore the place!")
/*<576>*/ 									story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */] = true;
          									goto flw_194
          								}
          							}
          						  case 1:
/*<573>*/ 							switch (story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */]) {
          							  case 0:
          								goto flw_194
          							  case 1:
/*<574>*/ 								printf(/* textboxtype: 1, unk: 0, line: 97 */ "<0x10009:0x00000004>Yo, <heroname>! \nThis machine of mine can sling you all\nover the land if you're interested in a\nlittle birdless flight.")
          								goto flw_575
          							}
          						}
          					  case 1:
/*< 79>*/ 						printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x00000003>Want to head to Faron Woods, do you?\n\n\n\nNo sweat. Just hop on into the\n<color red<Groosenator>coloroff>, and I'll fling you over!\n[1-]OK![2]No way.")
/*< 93>*/ 						switch (choice(2)) {
          						  case 0:
/*< 95>*/ 							printf(/* textboxtype: 1, unk: 0, line: 92 */ "<0x10009:0x00000042>All right! Hop in, and I'll take care of\nthe flingin'. You just worry about\nthe landing...")
/*< 92>*/ 							zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 96>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*< 94>*/ 							printf(/* textboxtype: 1, unk: 0, line: 91 */ "OK. Let me know if you decide you\nwant a “lift\" to the forest!")
          						}
          					}
          				  case 1:
/*<188>*/ 					switch (story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */]) {
          					  case 0:
/*<187>*/ 						switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          						  case 0:
          							flw_190:
/*<190>*/ 							printf(/* textboxtype: 1, unk: 0, line: 89 */ "<0x10009:0x00000026>And the day is saved again thanks to\nthe big man. Now get down there, and\nfix that seal before it comes back!")
          						  case 1:
/*<192>*/ 							switch (scene_flags[19 /* 0x3 08 */]) {
          							  case 0:
          								goto flw_190
          							  case 1:
/*<320>*/ 								switch (scene_flags[43 /* 0x4 08 */]) {
          								  case 0:
/*<324>*/ 									printf(/* textboxtype: 1, unk: 0, line: 85 */ "<0x10009:0x00004026><0x30001:0x><heroname>, we're in trouble! I\ncan't get to my stash of bombs!\n\n\n<0x10009:0x00204000>All right...<pause 25> <0x30001:0x><heroname>! We've\ngot no choice! You've got to get up onto\nthat ugly thing's head! Quick now!")
          								  case 1:
/*<322>*/ 									switch (zone_temp_flags[11 /* 0x0 08 */]) {
          									  case 0:
/*<323>*/ 										printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00000026>The <color red<Groosenator>coloroff> is ready for action!\n\n\n\nJust press (^) to set up the shot!<0x10011:0x08cd>\n\n\n\nAdjust the machine's position with (ControlStick),\nand aim at your target with the\n<color red<Wii Remote>coloroff>. Once your shot's set, let\nthat scaly creep have it!")
          									  case 1:
/*<321>*/ 										printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00004226>Guess it's time for the <color red<Groosenator>coloroff>\nto work its magic again!\n\n\nJust like before, you'll see me appear\nabove (^) when the machine's ready\nfor action.<0x10011:0x08cd>\n\n<0x10009:0x00424000>You and me are going to\ntag team this freak!\nLet's do it, <heroname>!")
          									}
          								}
          							}
          						}
          					  case 1:
/*<186>*/ 						switch (story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */]) {
          						  case 0:
          							flw_189:
/*<189>*/ 							printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00000026>I think I showed that monster who the\nreal boss is, eh? <0x30001:0x><heroname>, get\ndown there and seal it away again!\n\nJust zap the spike down there with a\nblast from your sword like last time.")
          						  case 1:
/*<191>*/ 							switch (scene_flags[18 /* 0x3 04 */]) {
          							  case 0:
          								goto flw_189
          							  case 1:
/*<318>*/ 								switch (zone_temp_flags[11 /* 0x0 08 */]) {
          								  case 0:
/*<319>*/ 									printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00000026>The <color red<Groosenator>coloroff> is ready for action!\n\n\n\nJust press (^) to set up the shot!<0x10011:0x08cd>\n\n\n\nAdjust the machine's position with (ControlStick),\nand aim at your target with the\n<color red<Wii Remote>coloroff>. Once your shot's set, let\nthat scaly creep have it!")
          								  case 1:
/*< 73>*/ 									printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x00044100>So today's the day I finally get to\nbust out the <color red<Groosenator>coloroff>!\n\n\n<0x10009:0x00000300>Soon as I'm ready to fire, you'll see my\nsignal appear above (^). <0x10009:0x00004000>Till then, it's\nup to you and that sword of yours to\nkeep that thing away!<0x10011:0x08cd>")
          								}
          							}
          						}
          					}
          				}
          			}
          		}
          	  case 1:
/*<101>*/ 		printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x00000026>Grannie says that crazy monster we\nsaw could break free again at any time,\nbut we're not going down easy.\n\n<0x10009:0x00004200>There's nothing I hate more than being\ncaught unprepared, so I'm brewing up\na secret weapon to take on big ugly!\n\n<0x10009:0x0000000f>It's not ready yet, but you can bet it'll\ngo down in history as a Groose original.")
          	}
          }

          void entrypoint_500_46() {
/*< 90>*/ 	start()
/*< 91>*/ 	printf(/* textboxtype: 1, unk: 0, line: 79 */ "<0x10009:0x00000026>Well, look who's finally back. Good\nthing too, 'cause I was getting tired of\nwaiting to put a hurting on his ugly\nmug!\n<0x10009:0x00044000><0x30001:0x><heroname>! Let's do this!\nOur game plan is the same as last time.\nYou know what to do!")
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
/*<379>*/ 	printf(/* textboxtype: 1, unk: 1, line: 95 */ "<0x30001:0x><heroname>, bad news!\nThat beast looks like it's about to break\nfree again!")
/*<383>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1089, 'param2': 16384, 'next': 385, 'param3': 13}
/*<385>*/ 	printf(/* textboxtype: 1, unk: 1, line: 96 */ "Gotta get into position! Hang tight!")
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
/*<540>*/ 		printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x30001:0x><heroname>, look at the beast's\nforehead! Do you see the <color red<sealing spike>coloroff>\nembedded there?\n\n<0x10009:0x0e000013>Drive the spike back into its head, and\nput a stop to its rampage!")
          	  case 1:
/*<156>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<157>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<159>*/ 				printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0010160d>Now, <heroname>!<pause 30>\n\n\n\nStrike the sealing spike with a <color red<Skyward>coloroff>\n<color red<Strike>coloroff>, and restore the seal! <0x10009:0x00111700>Quickly!")
          			  case 1:
/*<374>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 158, 'param3': 13}
/*<158>*/ 				printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x30001:0x><heroname>, look at the beast's\nforehead! Do you see the <color red<sealing spike>coloroff>\nembedded there?\n\n<0x10009:0x0e000013>Drive the spike back into its head, and\nput a stop to its rampage!")
          			}
          		  case 1:
/*<155>*/ 			printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x0008170f><0x30001:0x><heroname>, go quickly! \nCheck on the <color red<sealing spike >coloroff>at the \nbottom of the pit.\n\n<0x10009:0x00140b00>There is nothing natural about these\ntremors. That monster could free itself\nat any moment. Approach the pit with\ncaution!")
          		}
          	}
          }

          void entrypoint_500_64() {
/*<265>*/ 	start()
/*<276>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
/*<282>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 281, 'param3': 40}
/*<281>*/ 	wait_frames(60)
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
/*<267>*/ 	printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x04000030>Whoa! Wh-what's with all the shaking?")
/*<291>*/ 	set_camera(24, 0)
/*<287>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1079, 'param2': 14592, 'next': 283, 'param3': 13}
/*<283>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x04000031>The whole ground is heaving...\nI thought it was supposed to be solid\ndown here!")
/*<279>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*<278>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
/*<277>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<280>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 353, 'param3': 13}
/*<353>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3584, 'param2': 5632, 'next': 499, 'param3': 13}
/*<499>*/ 	set_camera(43, 0)
/*<266>*/ 	printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x0e000010>Go quickly, <heroname>!\nCheck on the <color red<sealing spike>coloroff> at the center\nof the pit.")
/*<284>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x0e001653>There is nothing natural about these\ntremors. That monster could free itself\nat any moment. Approach the pit with\ncaution!")
/*<292>*/ 	set_camera(44, 0)
/*<505>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 270, 'next': 285, 'param3': 15}
/*<285>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_30() {
/*< 82>*/ 	start()
/*< 83>*/ 	printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x0000000f>I knew it. The seal has given way.\n\n\n\nI'll explain later, but now is the time\nfor action. We must keep that beast\nfrom escaping that pit!\n\nIt must not reach the temple!")
          }

          void entrypoint_500_48() {
/*<164>*/ 	start()
/*<552>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<551>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0010180f><heroname>, you must seal away\nthe beast as soon as possible!\n\n\nIt has grown stronger since you faced it\nlast. Do not let your guard down.")
          	  case 1:
/*<165>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<167>*/ 			printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x0010180d>You do remember how to seal the beast\naway, yes?\n\n\nHit the sealing spike with a Skyward\nStrike!<pause 30> Focus your mind. You have the\npower to do this.")
          		  case 1:
/*<166>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0010180f><heroname>, you must seal away\nthe beast as soon as possible!\n\n\nIt has grown stronger since you faced it\nlast. Do not let your guard down.")
          		}
          	}
          }

          void entrypoint_500_65() {
/*<328>*/ 	start()
/*<330>*/ 	printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x00434553><0x10008:0x01cd>WHOA!<pause 10> Since when did it learn\nhow to fly?!\n\n\n<0x10009:0x00424026>It's headed straight for the temple,\nbut there's no way I'm letting it\nget there!<pause 8> Big ugly's going down\nburning!")
          }

          void entrypoint_500_13() {
/*<476>*/ 	start()
/*<491>*/ 	printf(/* textboxtype: 2, unk: 1, line: 123 */ "<0x10012:0x0000000b>Master <heroname>, I'm sensing\na change in the area that was triggered\nby your Skyward Strike.")
/*<495>*/ 	printf(/* textboxtype: 2, unk: 1, line: 124 */ "I have also detected an aura that\ncorrelates closely to your Sailcloth.\nI surmise this aura belongs to Zelda.\n\nI can lead you in the direction of this\naura through a process known as\n<sound 4><color red<dowsing>coloroff>.\n\nWould you like me to explain this\nprocess to you?\n[1-]Please![2]Nah...")
/*<569>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<492>*/ 	switch (choice(2)) {
          	  case 0:
/*<493>*/ 		printf(/* textboxtype: 2, unk: 1, line: 125 */ "<0x10012:0x00000005>As you wish, Master.\n\n\n\nDowsing is when I detect the presence \nof the aura of something you wish to\nsearch for using the tip of the sword.\n\nThe nearer you are to an object\nemitting the aura in question, the\n<color red<stronger the response will be>coloroff>.\n\nThis response manifests itself through\nvibration and sound. The direction of\nthe object emitting the aura is\nindicated by the purple <color red<pointer >coloroff>you see.")
          		flw_570:
/*<570>*/ 		open_dowsing_wheel(0)
/*<496>*/ 		printf(/* textboxtype: 2, unk: 1, line: 126 */ "Hold down (C) and select Zelda as your\ndowsing target, then point in the\ndirection you wish to search.<0x10011:0x06cd>")
/*<565>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          	  case 1:
/*<494>*/ 		printf(/* textboxtype: 2, unk: 1, line: 127 */ "Understood, <0x10012:0x0000000b>Master.")
          		goto flw_570
          	}
          }

          void entrypoint_500_31() {
/*<143>*/ 	start()
/*<544>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<546>*/ 		{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 545, 'param3': 13}
/*<545>*/ 		printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x30001:0x><heroname>, look at the beast's\nforehead! Do you see the <color red<sealing spike>coloroff>\nembedded there?\n\n<0x10009:0x0e000013>Drive the spike back into its head, and\nput a stop to its rampage!")
          	  case 1:
/*<145>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<146>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<148>*/ 				printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0010160d>Now, <heroname>!<pause 30>\n\n\n\nStrike the sealing spike with a <color red<Skyward>coloroff>\n<color red<Strike>coloroff>, and restore the seal! <0x10009:0x00111700>Quickly!")
          			  case 1:
/*<373>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 147, 'param3': 13}
/*<147>*/ 				printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x30001:0x><heroname>, look at the beast's\nforehead! Do you see the <color red<sealing spike>coloroff>\nembedded there?\n\n<0x10009:0x0e000013>Drive the spike back into its head, and\nput a stop to its rampage!")
          			}
          		  case 1:
/*<144>*/ 			printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x0008170f><0x30001:0x><heroname>, go quickly! \nCheck on the <color red<sealing spike >coloroff>at the \nbottom of the pit.\n\n<0x10009:0x00140b00>There is nothing natural about these\ntremors. That monster could free itself\nat any moment. Approach the pit with\ncaution!")
          		}
          	}
          }

          void entrypoint_500_49() {
/*<168>*/ 	start()
/*<549>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<550>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0010180f><heroname>, you must seal away\nthe beast as soon as possible!\n\n\nIt has grown stronger since you faced it\nlast. Do not let your guard down.")
          	  case 1:
/*<169>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<171>*/ 			printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x0010180d>You do remember how to seal the beast\naway, yes?\n\n\nHit the sealing spike with a Skyward\nStrike!<pause 30> Focus your mind. You have the\npower to do this.")
          		  case 1:
/*<170>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0010180f><heroname>, you must seal away\nthe beast as soon as possible!\n\n\nIt has grown stronger since you faced it\nlast. Do not let your guard down.")
          		}
          	}
          }

          void entrypoint_500_66() {
/*<329>*/ 	start()
/*<331>*/ 	printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00414043>Is that it? Man, I thought it was going\nto put up more of a fight. Somebody\nshould really thank the genius who\nmade this machine!\nOK, <heroname>, time for you to\ngo show big ugly who's boss!")
          }

          void entrypoint_500_14() {
/*<440>*/ 	start()
/*<441>*/ 	printf(/* textboxtype: 2, unk: 0, line: 19 */ "<0x10012:0x0000000b>Master, I have information for you.\n\n\n\nI have the ability to offer information\non items and creatures you <color green<target\n>coloroff>with (Z).<0x10011:0x07cd>\n\n<color red<While targeting>coloroff> something with (Z),\npress (v) and I will brief you with all\nthe information I know on the subject.<0x10011:0x07cd><0x10011:0x09cd>")
          }

          void entrypoint_500_32() {
/*< 25>*/ 	start()
/*<542>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<543>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00000031>Aaaaah!")
          	  case 1:
/*<149>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<150>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<151>*/ 				printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00000030>...What are you doing standing there?\nGet your tail down there, and patch up\nthat seal like Grannie told you!\n\nAll you gotta do is whack that spike\nwith a blast from your sword, right?")
          			  case 1:
/*<153>*/ 				printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00000031>Aaaaah!")
          			}
          		  case 1:
/*<152>*/ 			printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x00000015>Whoa! Wh-what's with all the shaking?\n\n\n\nThe whole ground is heaving...\nI thought it was supposed to be solid\ndown here!")
          		}
          	}
          }

          void entrypoint_500_67() {
/*<332>*/ 	start()
/*<333>*/ 	printf(/* textboxtype: 1, unk: 2, line: 71 */ "<0x10009:0x00000026>Hey, <heroname>! The machine's\nloaded and ready to bring the boom!\n\n\nWhen you want me to back you up with\na big blast, just send me the signal\nwith (^)!<0x10011:0x08cd>")
          }

          void entrypoint_500_33() {
/*< 47>*/ 	start()
/*<313>*/ 	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
          	  case 0:
/*<325>*/ 		switch (scene_flags[106 /* 0xC 04 */]) {
          		  case 0:
/*<314>*/ 			printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00040202>I'll help Zelda in my own way.<pause 30>\nYou'll see, <heroname>.")
          		  case 1:
/*<326>*/ 			printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00000002>Hey. How goes it, <heroname>?\nYou know, I've been doing some hard\nthinking lately.\n\nGrannie keeps telling me I got my own\npart to play in this whole thing,\nyou know?\n\nI'm not cut out for slashing and\nskewering monsters with a sword\nlike you, but maybe I don't gotta be.\n\n<0x10009:0x00404200>I think I got another way to help Zelda.\nI'm gonna do it the “Groose way.\"\n\n\nI'm not giving you any details right\nnow, but just wait and see. I got\nan idea brewing that'll knock your\ngreen beanie off!")
/*<327>*/ 			scene_flags[10 'Sealed Grounds'][106 /* 0xC 04 */] = true;
          		}
          	  case 1:
/*<315>*/ 		switch (scene_flags[105 /* 0xC 02 */]) {
          		  case 0:
/*<316>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x0000002d>Sniff...<pause 30> I'm just deadweight.\nWhat kinda use is that to anyone<pause 30>.<pause 30>.<pause 30>.")
          		  case 1:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x0000003d><0x10008:0x01cd>Awwww, c'mon!\n\n\n\n<0x10009:0x00003a00><0x10008:0x01cd><0x10008:0x01cd>I couldn't do a thing!\n\n\n\n<0x10009:0x00004000><0x10008:0x01cd><0x10008:0x02cd>I'm totally useless!")
/*<317>*/ 			scene_flags[10 'Sealed Grounds'][105 /* 0xC 02 */] = true;
          		}
          	}
          }

          void entrypoint_500_50() {
/*<172>*/ 	start()
/*<559>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<560>*/ 		printf(/* textboxtype: 2, unk: 0, line: 45 */ "<0x10012:0x00000001>Master, it is your destiny to seal away\nthis beast. You must not run from it.")
          	  case 1:
/*<173>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<174>*/ 			printf(/* textboxtype: 2, unk: 0, line: 46 */ "<0x10012:0x0000000b>Master, you must not leave this area\nuntil you have restored the seal that\nrestrains this beast.")
          		  case 1:
/*<175>*/ 			printf(/* textboxtype: 2, unk: 0, line: 45 */ "<0x10012:0x00000001>Master, it is your destiny to seal away\nthis beast. You must not run from it.")
          		}
          	}
          }

          void entrypoint_500_68() {
/*<378>*/ 	start()
/*<488>*/ 	wait_frames(30)
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
/*<386>*/ 	printf(/* textboxtype: 1, unk: 1, line: 95 */ "<0x30001:0x><heroname>, bad news!\nThat beast looks like it's about to break\nfree again!")
/*<389>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1089, 'param2': 16384, 'next': 391, 'param3': 13}
/*<391>*/ 	printf(/* textboxtype: 1, unk: 1, line: 96 */ "Gotta get into position! Hang tight!")
/*<390>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 772, 'next': 421, 'param3': 14}
/*<421>*/ 	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
/*<414>*/ 	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
/*<417>*/ 	changeScene(16, 0) // 
          }

          void entrypoint_500_34() {
/*< 97>*/ 	start()
/*< 98>*/ 	printf(/* textboxtype: 1, unk: 2, line: 93 */ "<0x10009:0x00000026>With my machine, the woods are just\na fling away!<0x10005:0x000a0000>")
/*< 99>*/ 	printf(/* textboxtype: 1, unk: 2, line: 94 */ "You stay safe out there!<0x10005:0x001e0000>")
          }

          void entrypoint_500_51() {
/*<176>*/ 	start()
/*<557>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<558>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x30001:0x><0x10009:0x0010180f><heroname>, you must restore\nthe seal that imprisons that \nmonstrosity!\n\nIt has grown stronger since you faced it\nlast. You must always stay on guard.")
          	  case 1:
/*<177>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<179>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x0010180d>To break the seal for a third time...\nTruly this is a fearsome beast.\n\n\nBut now you must send it back to\nits prison once more. Restore the\nseal! I know you hold the power.")
          		  case 1:
/*<178>*/ 			printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x30001:0x><0x10009:0x0010180f><heroname>, you must restore\nthe seal that imprisons that \nmonstrosity!\n\nIt has grown stronger since you faced it\nlast. You must always stay on guard.")
          		}
          	}
          }

          void entrypoint_500_69() {
/*<409>*/ 	start()
/*<410>*/ 	printf(/* textboxtype: 1, unk: 2, line: 74 */ "Awwright! It's time for Groose to\nexplode into action!")
/*<411>*/ 	printf(/* textboxtype: 1, unk: 2, line: 75 */ "Adjust the machine's position with (ControlStick),\nand aim at your target with the\n<color red<Wii Remote>coloroff>.\n\nOnce you finish aiming, press (A) to\nlaunch a bomb. If it hits, you'll stun\nthe scaly sucker!")
/*<412>*/ 	printf(/* textboxtype: 1, unk: 2, line: 76 */ "If you forget the controls, press (2)\nanytime you're in control of the\n<color blue<Groosenator >coloroff>to review the basics!<0x10011:0x05cd>")
          }

          void entrypoint_500_17() {
/*<473>*/ 	start()
/*< 19>*/ 	set_camera(16, 0)
/*<102>*/ 	{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3330, 'next': 17, 'param3': 13}
/*< 17>*/ 	printf(/* textboxtype: 1, unk: 0, line: 20 */ "So lemme see if I've got this right.\n\n\n\nThe old lady living in the <color red<temple >coloroff>down\nthe road from here knows where\n<color blue<Zelda >coloroff>is?")
/*< 20>*/ 	set_camera(17, 0)
/*<104>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "I see... Right, <heroname>.\nThanks for getting me here. You've \ndone a good job. You can head home.\n\n<0x10009:0x000d0b41>Big <color blue<Groose >coloroff>will handle the search for\n<color blue<Zelda>coloroff> from here.")
/*<103>*/ 	{'type': 'type3', 'subType': 4, 'param1': 24, 'param2': 5632, 'next': 18, 'param3': 13}
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "Yup. I'll track her down, save her, and\nthen give her a lift back to Skyloft...<pause 30>")
/*<106>*/ 	set_camera(18, 0)
/*<107>*/ 	printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x0000000c>Then when we get back, I'll ask her if\nshe wants to make our whole going-out\nthing official, and then the two of us\nwill get some quality time together.")
/*<108>*/ 	set_camera(19, 0)
/*<112>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 512, 'next': 113, 'param3': 13}
/*<113>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x0000000d>Anyway, the point is your work here is\ndone. I got it covered from here!")
/*<109>*/ 	wait_frames(30)
/*<105>*/ 	printf(/* textboxtype: 1, unk: 0, line: 25 */ "Now, it's off to find that old lady you\nwere talking about.")
/*< 21>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 1024, 'next': 22, 'param3': 14}
/*< 22>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "Catch you later, <heroname>!")
/*<110>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 256, 'next': 111, 'param3': 15}
/*<111>*/ 	set_camera(20, 0)
/*<114>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_35() {
/*< 54>*/ 	start()
/*<360>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 53, 'param3': 13}
/*< 53>*/ 	printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x0e000054><0x10006:0x01cd>It's too late!\n<color red<<0x10006:0x00cd>All...<pause 10><0x10006:0xfecd> All is lost.>coloroff><0x10005:0x00280000>")
          }

          void entrypoint_500_52() {
/*<180>*/ 	start()
/*<555>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<556>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x30001:0x><0x10009:0x0010180f><heroname>, you must restore\nthe seal that imprisons that \nmonstrosity!\n\nIt has grown stronger since you faced it\nlast. You must always stay on guard.")
          	  case 1:
/*<181>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<183>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x0010180d>To break the seal for a third time...\nTruly this is a fearsome beast.\n\n\nBut now you must send it back to\nits prison once more. Restore the\nseal! I know you hold the power.")
          		  case 1:
/*<182>*/ 			printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x30001:0x><0x10009:0x0010180f><heroname>, you must restore\nthe seal that imprisons that \nmonstrosity!\n\nIt has grown stronger since you faced it\nlast. You must always stay on guard.")
          		}
          	}
          }

          void entrypoint_500_18() {
/*<519>*/ 	start()
/*< 66>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 116, 'param3': 40}
/*<116>*/ 	wait_frames(60)
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
/*<470>*/ 	wait_frames(30)
/*<469>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<518>*/ 	set_camera(26, 0)
/*<129>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1082, 'param2': 15381, 'next': 472, 'param3': 13}
/*<472>*/ 	wait_frames(15)
/*<471>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3605, 'param2': 2319, 'next': 24, 'param3': 13}
/*< 24>*/ 	printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x04000030>Whoa! Wh-what's with all the shaking?")
/*<121>*/ 	wait_frames(30)
/*<130>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1079, 'param2': 14592, 'next': 468, 'param3': 13}
/*<468>*/ 	wait_frames(15)
/*<119>*/ 	set_camera(24, 0)
/*<118>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x04000031>The whole ground is heaving...\nI thought it was supposed to be solid\ndown here!")
/*< 45>*/ 	set_camera(27, 0)
/*< 71>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*< 68>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
/*< 67>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<115>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 125, 'param3': 13}
/*<125>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 14, 'next': 128, 'param3': 17}
/*<128>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 23, 'param3': 13}
/*< 23>*/ 	printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x0e000010>Go quickly, <heroname>!\nCheck on the <color red<sealing spike>coloroff> at the center\nof the pit.")
/*<123>*/ 	{'type': 'type3', 'subType': 2, 'param1': 28, 'param2': 356, 'next': 122, 'param3': 15}
/*<122>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x0e001653>There is nothing natural about these\ntremors. That monster could free itself\nat any moment. Approach the pit with\ncaution!")
/*<126>*/ 	wait_frames(15)
/*<124>*/ 	set_camera(28, 0)
/*<264>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 270, 'next': 366, 'param3': 15}
/*<366>*/ 	scene_flags[10 'Sealed Grounds'][107 /* 0xC 08 */] = true;
/*<127>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00424300>Hah! She packs a mean punch, doesn't\nshe! I tell you, I was in love the first\ntime I pulled this lever!\n\n<0x10009:0x003e4000>I'll start loading her back up with\nanother bomb, so keep beating on big\nugly till I give you the signal!")
          }

          void entrypoint_500_36() {
/*< 63>*/ 	start()
/*< 64>*/ 	printf(/* textboxtype: 2, unk: 0, line: 10 */ "The creature we passed who was under\nassault may have information.\nI suggest we fight off his assailants.")
          }

          void entrypoint_500_53() {
/*<184>*/ 	start()
/*<185>*/ 	printf(/* textboxtype: 1, unk: 2, line: 70 */ "<0x10009:0x00000026>Hey, <heroname>, the machine's\nall loaded and ready to smash!\n\n\nIf that flabby sack of teeth tries to\nclimb the wall, I can blast it off from\nhere with a bomb!\n\nWhen you want some backup from\nme, just send me the signal with (^)!<0x10011:0x08cd>")
          }

          void entrypoint_500_70() {
/*<431>*/ 	start()
/*<432>*/ 	printf(/* textboxtype: 2, unk: 0, line: 16 */ "<0x10012:0x00000001>Master, please make sure to use your\nSailcloth when descending from high\nelevations. Failing to do so has a high\nprobability of resulting in injury.\nI took the liberty of deploying the\nSailcloth for you this time, but in the\nfuture you can manually engage it by\npressing (B) before landing.<0x10011:0x01cd>")
          }

