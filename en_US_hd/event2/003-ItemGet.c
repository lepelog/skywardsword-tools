          void entrypoint_003_062() {
/*< 11>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 0, unk: 5, line: 85 */ "")
/*<  7>*/ 	give_item(62 0x3E);
          }

          void entrypoint_003_028() {
/*<118>*/ 	start()
/*<148>*/ 	check_item_flag(505, 2)
/*<149>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 6}) {
          	  case 0:
/*< 27>*/ 		check_item_flag(505, 3)
/*< 28>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 4}) {
          		  case 0:
/*< 24>*/ 			check_item_flag(505, 4)
/*< 25>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 2}) {
          			  case 0:
/*< 21>*/ 				check_item_flag(505, 5)
/*< 22>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 0}) {
          				  case 0:
/*<151>*/ 					printf(/* textboxtype: 1, unk: 0, line: 38 */ "You got the last <color yellow<<item 28>>coloroff>!\nNow you can open the temple door.\n\n\nHurry back to the summit and open the\ndoor to the temple so you can continue\nyour search for Zelda, who has been\ntaken into the depths of the temple!")
/*<588>*/ 					story_flags[120 /* us: 805A9AEA 0x20, jp: 805ACD6A 0x20 */] = true;
/*<677>*/ 					story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*<589>*/ 					story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
          				  case 1:
/*< 23>*/ 					printf(/* textboxtype: 0, unk: 5, line: 37 */ "You got the fourth <color yellow<<item 28>>coloroff>!\nCollect all five pieces to complete the key\nthat opens the temple door. Find that\n<color red<last piece>coloroff>!")
          				}
          			  case 1:
/*< 26>*/ 				printf(/* textboxtype: 5, unk: 1, line: 36 */ "You got the third <color yellow<<item 28>>coloroff>!\nCollect all five pieces to complete the key\nthat opens the temple door. Now go find\nthe other <color red<two pieces>coloroff>!")
          			}
          		  case 1:
/*< 29>*/ 			printf(/* textboxtype: 1, unk: 0, line: 35 */ "You got the second <color yellow<<item 28>>coloroff>!\nCollect all five pieces to complete the key\nthat opens the temple door. Now you\nhave to find the other <color red<three pieces>coloroff>!")
          		}
          	  case 1:
/*<150>*/ 		printf(/* textboxtype: 0, unk: 5, line: 34 */ "You got the first <color yellow<<item 28>>coloroff>! \nFind all five pieces to complete the key\nthat opens the door leading into the\ntemple. Find the other <color red<four pieces>coloroff>!")
          	}
          }

          void entrypoint_003_010() {
/*<136>*/ 	start()
/*< 77>*/ 	printf(/* textboxtype: 0, unk: 5, line: 13 */ "You got a <color yellow<<item 10>>coloroff>! Students\nat the Knight Academy practice with these.\nIt looks like it has a fairly sharp blade!\n\nPress (+) at any time to look at the items\nyou're carrying.<0x10011:0x03cd>")
/*<383>*/ 	story_flags[28 /* us: 805A9ADA 0x10, jp: 805ACD5A 0x10 */] = true;
/*<569>*/ 	story_flags[571 /* us: 805A9B18 0x04, jp: 805ACD98 0x04 */] = true;
          }

          void entrypoint_003_097() {
/*<223>*/ 	start()
/*<578>*/ 	story_flags[730 /* us: 805A9B27 0x04, jp: 805ACDA7 0x04 */] = true;
/*<221>*/ 	check_item_flag(95, 1)
/*<222>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 24}) {
          	  case 0:
/*<224>*/ 		check_item_flag(96, 1)
/*<225>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 26}) {
          		  case 0:
/*<582>*/ 			printf(/* textboxtype: 0, unk: 5, line: 130 */ "You got the <color yellow white<<item 97>>coloroff>! Created\nby the old gods, the Triforce possesses\n<color red<ultimate power>coloroff> and is said to grant the\nwishes of whoever possesses it!")
/*<527>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_539:
/*<539>*/ 			printf(/* textboxtype: 0, unk: 5, line: 130 */ "You got the <color yellow white<<item 97>>coloroff>! Created\nby the old gods, the Triforce possesses\n<color red<ultimate power>coloroff> and is said to grant the\nwishes of whoever possesses it!")
/*<537>*/ 			printf(/* textboxtype: 1, unk: 0, line: 128 */ "Just <color red<one>coloroff> more piece to go!")
/*<574>*/ 			changeScene(1, 1) // 
          		}
          	  case 1:
/*<549>*/ 		check_item_flag(96, 1)
/*<550>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 68}) {
          		  case 0:
          			goto flw_539
          		  case 1:
/*<226>*/ 			printf(/* textboxtype: 0, unk: 5, line: 130 */ "You got the <color yellow white<<item 97>>coloroff>! Created\nby the old gods, the Triforce possesses\n<color red<ultimate power>coloroff> and is said to grant the\nwishes of whoever possesses it!")
/*<536>*/ 			printf(/* textboxtype: 0, unk: 5, line: 127 */ "Just <color red<two>coloroff> more pieces to go!")
/*<575>*/ 			changeScene(1, 1) // 
          		}
          	}
          }

          void entrypoint_003_104() {
/*<242>*/ 	start()
/*<238>*/ 	printf(/* textboxtype: 5, unk: 1, line: 138 */ "You got the <color yellow<<item 104>>coloroff>! With\nthis, Rupees and treasure will appear more\noften...but it also carries a curse that\nprevents your pouch from opening! Eeek!")
          }

          void entrypoint_003_121() {
/*<272>*/ 	start()
/*<559>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<563>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "Your shield has been repaired.\nIt looks good as new!")
          	  case 1:
/*<268>*/ 		printf(/* textboxtype: 0, unk: 5, line: 157 */ "You upgraded to a <color yellow<<item 121>>coloroff>!\nSuperstrong metal makes this the toughest\n<item 119> around.")
          	}
          }

          void entrypoint_003_139() {
/*<314>*/ 	start()
/*<310>*/ 	printf(/* textboxtype: 5, unk: 1, line: 177 */ "")
          }

          void entrypoint_003_173() {
/*<360>*/ 	start()
/*<358>*/ 	printf(/* textboxtype: 0, unk: 5, line: 223 */ "You got an <color yellow<<item 173>>coloroff>! \nThis solid chunk of pure, crystallized\nmonster malice is extremely rare!")
/*<640>*/ 	open_collection_screen();
          }

          void entrypoint_003_156() {
/*<373>*/ 	start()
/*<371>*/ 	printf(/* textboxtype: 1, unk: 0, line: 206 */ "")
          }

          void entrypoint_003_045() {
/*<448>*/ 	start()
/*<450>*/ 	check_item_flag(500, 14)
/*<449>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 52}) {
          	  case 0:
/*<451>*/ 		printf(/* textboxtype: 0, unk: 5, line: 58 */ "You collected every last <color yellow<<item 45>>coloroff>.\n<0x30001:0x><heroname>'s spirit has grown! \n\n\nThe trial will continue until you exit the\nSilent Realm. Proceed with caution on\nyour way back to the entrance so that you\ncan claim proof of your spiritual growth.")
          	  case 1:
/*<447>*/ 		printf(/* textboxtype: 5, unk: 1, line: 57 */ "You got a <color yellow<<item 45>>coloroff>!\nThis object's power halts the movements of\nthe Guardians for just <color red<90 seconds>coloroff>.\nCollect all <color red<15>coloroff> to pass the trial!")
          	}
          }

          void entrypoint_003_190() {
/*<474>*/ 	start()
/*<472>*/ 	printf(/* textboxtype: 5, unk: 1, line: 240 */ "")
          }

          void entrypoint_003_063() {
/*< 13>*/ 	start()
/*<  4>*/ 	printf(/* textboxtype: 1, unk: 0, line: 86 */ "")
/*<  5>*/ 	give_item(63 0x3F);
          }

          void entrypoint_003_029() {
/*<117>*/ 	start()
/*< 59>*/ 	printf(/* textboxtype: 5, unk: 1, line: 39 */ "You got the <color yellow<<item 29>>coloroff>!\nThis strangely shaped gold sculpture is\ncovered in mysterious patterns.")
          }

          void entrypoint_003_011() {
/*<135>*/ 	start()
/*<608>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<609>*/ 		printf(/* textboxtype: 5, unk: 1, line: 15 */ "You got the <color yellow<<item 11>>coloroff>!\nThis mysterious sword is bathed in\ndivine light.\n\nThe memories of violent battles surge\nwithin this sword when you raise it to\nthe sky. <sound 4>Your <color red<Skyward Strike is now\nat maximum strength>coloroff>!")
          		flw_462:
/*<462>*/ 		story_flags[3 /* us: 805A9AD9 0x10, jp: 805ACD59 0x10 */] = true;
/*<524>*/ 		changeScene(7, 0) // 
          	  case 1:
/*< 76>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "You got the <color yellow<<item 11>>coloroff>!\nThis mysterious sword is bathed in\ndivine light.")
          		goto flw_462
          	}
          }

          void entrypoint_003_080() {
/*<192>*/ 	start()
/*<173>*/ 	printf(/* textboxtype: 0, unk: 5, line: 106 */ "")
          }

          void entrypoint_003_098() {
/*<227>*/ 	start()
/*<528>*/ 	printf(/* textboxtype: 1, unk: 0, line: 131 */ "You got the <color yellow<<item 98>>coloroff>!\nThis old map details the area as it was\nlong ago, before the sea succumbed to the\ndesert sand.")
/*<530>*/ 	story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */] = true;
          }

          void entrypoint_003_105() {
/*<241>*/ 	start()
/*<237>*/ 	printf(/* textboxtype: 0, unk: 5, line: 139 */ "You upgraded to the mighty <color yellow<<item 105>>coloroff>!\nYour shots will now pepper a wide range.\nHold <icon 41> to increase your shot power.<0x10011:0x0fcd>")
          }

          void entrypoint_003_122() {
/*<271>*/ 	start()
/*<562>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<564>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "Your shield has been repaired.\nIt looks good as new!")
          	  case 1:
/*<671>*/ 		switch (story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */]) {
          		  case 0:
/*<672>*/ 			printf(/* textboxtype: 5, unk: 1, line: 159 */ "You got a <color yellow<<item 122>>coloroff>! The mystical\npower within this shield allows it to repair\nitself over time. It protects against fire,\nelectric, and curse attacks!")
          		  case 1:
/*<673>*/ 			printf(/* textboxtype: 1, unk: 0, line: 158 */ "You got a <color yellow<<item 122>>coloroff>! The mystical\npower within this shield allows it to <color red<repair\nitself>coloroff> over time. \n\nThis shield's low durability means it breaks\neasily, but it deflects fire, electric, and\ncurse attacks!")
/*<674>*/ 			story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */] = true;
/*<518>*/ 			story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          		}
          	}
          }

          void entrypoint_003_174() {
/*<359>*/ 	start()
/*<357>*/ 	printf(/* textboxtype: 1, unk: 0, line: 224 */ "You got a <color yellow<<item 174>>coloroff>!\nVery few small birds possess this sky-blue\nplumage, making these feathers\nextremely rare!")
/*<641>*/ 	open_collection_screen();
          }

          void entrypoint_003_157() {
/*<376>*/ 	start()
/*<375>*/ 	printf(/* textboxtype: 5, unk: 1, line: 207 */ "")
          }

          void entrypoint_003_046() {
/*<443>*/ 	start()
/*<445>*/ 	check_item_flag(500, 14)
/*<444>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 50}) {
          	  case 0:
/*<446>*/ 		printf(/* textboxtype: 5, unk: 1, line: 60 */ "You collected every last <color yellow<<item 46>>coloroff>.\n<0x30001:0x><heroname>'s spirit has grown! \n\n\nThe trial will continue until you exit the\nSilent Realm. Proceed with caution on\nyour way back to the entrance so that you\ncan claim proof of your personal growth.")
          	  case 1:
/*<442>*/ 		printf(/* textboxtype: 1, unk: 0, line: 59 */ "You got a <color yellow<<item 46>>coloroff>!\nThis object's power halts the movements of\nthe Guardians for just <color red<90 seconds>coloroff>.\nCollect all <color red<15>coloroff> to pass the trial!")
          	}
          }

          void entrypoint_003_191() {
/*<473>*/ 	start()
/*<471>*/ 	printf(/* textboxtype: 0, unk: 5, line: 241 */ "")
          }

          void entrypoint_003_064() {
/*< 14>*/ 	start()
/*<  2>*/ 	printf(/* textboxtype: 5, unk: 1, line: 87 */ "")
/*<  3>*/ 	give_item(64 0x40);
          }

          void entrypoint_003_047() {
/*<102>*/ 	start()
/*< 44>*/ 	printf(/* textboxtype: 0, unk: 5, line: 61 */ "You got a <color yellow<<item 47>>coloroff>!\nThis mysterious fruit enables you to\nsee beacons over the positions of\nSacred Tears for <color red<30 seconds>coloroff>!")
          }

          void entrypoint_003_012() {
/*<134>*/ 	start()
/*< 75>*/ 	printf(/* textboxtype: 0, unk: 5, line: 16 */ "")
/*<541>*/ 	story_flags[582 /* us: 805A9B1B 0x20, jp: 805ACD9B 0x20 */] = true;
          }

          void entrypoint_003_081() {
/*<191>*/ 	start()
/*<172>*/ 	printf(/* textboxtype: 1, unk: 0, line: 107 */ "You got a <color yellow<<item 81>>coloroff>! This powerful\nelixir not only <color red<restores all of your hearts\n>coloroff>but also contains <color red<two >coloroff>servings in every\nbottle!")
          }

          void entrypoint_003_099() {
/*<235>*/ 	start()
/*<592>*/ 	switch (story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */]) {
          	  case 0:
/*<593>*/ 		printf(/* textboxtype: 0, unk: 5, line: 76 */ "You got your <color yellow<<item 99> >coloroff>back!\nUse them to plan an escape that even\na Mogma would be proud of.")
/*<594>*/ 		story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */] = false;
          	  case 1:
/*<231>*/ 		printf(/* textboxtype: 5, unk: 1, line: 132 */ "You got the <color yellow<<item 99>>coloroff>! Even the\nMogma don't see <item 56> this fancy\nvery often!\n\nThey don't just dig holes; <color green<they also let you\nburrow your way under the ground>coloroff>. Try to\nfind holes that you can dig down into!")
          	}
          }

          void entrypoint_003_106() {
/*<240>*/ 	start()
/*<236>*/ 	printf(/* textboxtype: 1, unk: 0, line: 140 */ "")
          }

          void entrypoint_003_123() {
/*<282>*/ 	start()
/*<565>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<567>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "Your shield has been repaired.\nIt looks good as new!")
          	  case 1:
/*<278>*/ 		printf(/* textboxtype: 0, unk: 5, line: 160 */ "You upgraded to a <color yellow<<item 123>>coloroff>!\nThis mystical shield can repair itself over\ntime. It's also more durable.")
          	}
          }

          void entrypoint_003_140() {
/*<313>*/ 	start()
/*<309>*/ 	printf(/* textboxtype: 0, unk: 5, line: 178 */ "You upgraded to the <color yellow<<item 140>>coloroff>!\nIt's now double its original size, making it\neasier to catch even the most nimble bugs!")
          }

          void entrypoint_003_175() {
/*<368>*/ 	start()
/*<366>*/ 	printf(/* textboxtype: 5, unk: 1, line: 225 */ "You got a <color yellow<<item 175>>coloroff>!\nA real rarity among skull ornaments,\nit shines with an eerie, golden color.")
/*<642>*/ 	open_collection_screen();
          }

          void entrypoint_003_158() {
/*<378>*/ 	start()
/*<377>*/ 	printf(/* textboxtype: 0, unk: 5, line: 208 */ "You received <color yellow<<item 158>>coloroff>!\nCan you believe this letter might actually\ncontain heartfelt words from Cawlin?\n\nTake extra care that you don't end\nup using it as scrap paper!")
          }

          void entrypoint_003_192() {
/*<476>*/ 	start()
/*<475>*/ 	printf(/* textboxtype: 1, unk: 0, line: 242 */ "")
          }

          void entrypoint_003_065() {
/*< 15>*/ 	start()
/*<  1>*/ 	printf(/* textboxtype: 0, unk: 5, line: 88 */ "You got a <color yellow<<item 65>>coloroff>! This\nmysterious potion halves any damage\nyou receive! The effect lasts for <color red<three\nminutes>coloroff>.")
          }

          void entrypoint_003_048() {
/*<101>*/ 	start()
/*< 43>*/ 	printf(/* textboxtype: 1, unk: 0, line: 62 */ "You got <color red<one>coloroff> <color yellow<<item 48>>coloroff>! These\nform when a person is so completely\noverwhelmed with feelings of thankfulness\nthat crystallized gratitude is created.\nCollect these and show them to<color blue< Batreaux>coloroff>!")
/*<645>*/ 	open_collection_screen();
          }

          void entrypoint_003_030() {
/*<116>*/ 	start()
/*< 58>*/ 	printf(/* textboxtype: 0, unk: 5, line: 40 */ "You got the <color yellow<<item 30>>coloroff>!\nIt is a carving of a coiled dragon made\nout of dazzling gold.")
          }

          void entrypoint_003_013() {
/*<133>*/ 	start()
/*<404>*/ 	switch (story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */]) {
          	  case 0:
/*<436>*/ 		story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */] = false;
/*<504>*/ 		printf(/* textboxtype: 5, unk: 1, line: 18 */ "You got the <color yellow<<item 14>>coloroff> back!\nNow you can cut right through your\ntroubles like before! You can also talk to\n<sound 4><color blue<Fi>coloroff> again.")
/*<587>*/ 		scene_flags[5 'Eldin Volcano Summit'][44 /* 0x4 10 */] = true;
          	  case 1:
/*< 74>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "")
          	}
          }

          void entrypoint_003_082() {
/*<190>*/ 	start()
/*<171>*/ 	printf(/* textboxtype: 5, unk: 1, line: 108 */ "")
          }

          void entrypoint_003_107() {
/*<251>*/ 	start()
/*<247>*/ 	printf(/* textboxtype: 5, unk: 1, line: 141 */ "")
          }

          void entrypoint_003_124() {
/*<281>*/ 	start()
/*<566>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<568>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "Your shield has been repaired.\nIt looks good as new!")
          	  case 1:
/*<277>*/ 		printf(/* textboxtype: 1, unk: 0, line: 161 */ "You upgraded to a <color yellow<<item 124>>coloroff>!\nThis shield repairs itself with sacred\npower, and it's even more durable than\nother versions of the shield.")
          	}
          }

          void entrypoint_003_141() {
/*<312>*/ 	start()
/*<647>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<648>*/ 		printf(/* textboxtype: 5, unk: 1, line: 180 */ "You got <numeric arg0 0> <color yellow<<0x30004:0x03cd>>coloroff>!\nIt's said that these bugs reproduce in\nmassive numbers once every 10 years,\neating every plant in sight.")
          		flw_616:
/*<616>*/ 		open_collection_screen();
          	  case 1:
/*<308>*/ 		printf(/* textboxtype: 0, unk: 0, line: 179 */ "You caught <numeric arg0 0> <color yellow<<0x30004:0x03cd>>coloroff>!\nIt's said that these bugs reproduce in\nmassive numbers once every 10 years,\neating every plant in sight.")
          		goto flw_616
          	}
          }

          void entrypoint_003_176() {
/*<367>*/ 	start()
/*<365>*/ 	printf(/* textboxtype: 0, unk: 5, line: 226 */ "You got a <color yellow<<item 176>>coloroff>!\nRumors say this item was dropped by\nthe goddess in a long-forgotten era. It's a\nlegendary treasure few will ever behold!")
/*<643>*/ 	open_collection_screen();
          }

          void entrypoint_003_159() {
/*<382>*/ 	start()
/*<380>*/ 	printf(/* textboxtype: 1, unk: 0, line: 209 */ "You got <color yellow<<item 159>>coloroff>!\nIt contains Beedle's beloved insect pal.\nHurry back to Beedle with it!")
          }

          void entrypoint_003_193() {
/*<478>*/ 	start()
/*<477>*/ 	printf(/* textboxtype: 5, unk: 1, line: 243 */ "")
          }

          void entrypoint_003_200() {
/*<498>*/ 	start()
/*<496>*/ 	printf(/* textboxtype: 1, unk: 0, line: 251 */ "")
          }

          void entrypoint_003_066() {
/*< 10>*/ 	start()
          	printf(/* textboxtype: 1, unk: 0, line: 89 */ "You got a <color yellow<<item 66>>coloroff>!\nThis mighty potion prevents you from\nsustaining any damage for <color red<three minutes>coloroff>!")
          }

          void entrypoint_003_049() {
/*<100>*/ 	start()
/*<405>*/ 	switch (story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */]) {
          	  case 0:
/*<406>*/ 		printf(/* textboxtype: 0, unk: 5, line: 64 */ "You got your <color yellow<<item 49>>coloroff> back!\nThe power to blast a powerful gust of\nair at anything you choose is yours\nonce again!")
/*<427>*/ 		open_item_wheel(4)
/*<428>*/ 		story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */] = false;
          	  case 1:
/*< 42>*/ 		printf(/* textboxtype: 5, unk: 1, line: 63 */ "You got the <color yellow<<item 49>>coloroff>!\nIt is an ancient and mystical device capable\nof blowing an endless gust of wind.")
/*<407>*/ 		open_item_wheel(4)
          	}
          }

          void entrypoint_003_031() {
/*<115>*/ 	start()
/*< 57>*/ 	printf(/* textboxtype: 1, unk: 0, line: 41 */ "You got the <color yellow<<item 31>>coloroff>!\nIt is made of shining gold. It also looks like\nit may be a part from...something.\nThe surface is inlaid with circuitry.")
          }

          void entrypoint_003_014() {
/*<132>*/ 	start()
/*< 73>*/ 	printf(/* textboxtype: 0, unk: 5, line: 19 */ "")
          }

          void entrypoint_003_083() {
/*<189>*/ 	start()
/*<170>*/ 	printf(/* textboxtype: 0, unk: 5, line: 109 */ "")
          }

          void entrypoint_003_108() {
/*<250>*/ 	start()
/*<246>*/ 	printf(/* textboxtype: 0, unk: 5, line: 142 */ "You got the <color yellow<<item 108>>coloroff>! The hefty\ncapacity of this wallet allows you to store\nup to <color red<500 Rupees >coloroff>in it!")
          }

          void entrypoint_003_125() {
/*<280>*/ 	start()
/*<276>*/ 	printf(/* textboxtype: 5, unk: 1, line: 162 */ "You got the <color yellow<<item 125>>coloroff>!\nThis legendary shield is imbued with\nheroic power, making it completely\nindestructible!")
/*<519>*/ 	story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          }

          void entrypoint_003_142() {
/*<311>*/ 	start()
/*<649>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<650>*/ 		printf(/* textboxtype: 1, unk: 0, line: 182 */ "You got <numeric arg0 0> <color yellow<<0x30004:0x04cd>>coloroff>!\nCollectors often polish the hard carapaces\nof these beetles to make them tougher.\nIt's the strongest of all the insects.")
          		flw_617:
/*<617>*/ 		open_collection_screen();
          	  case 1:
/*<307>*/ 		printf(/* textboxtype: 0, unk: 5, line: 181 */ "You caught <numeric arg0 0> <color yellow<<0x30004:0x04cd>>coloroff>!\nCollectors often polish the hard carapaces\nof these beetles to make them tougher.\nIt's the strongest of all the insects.")
          		goto flw_617
          	}
          }

          void entrypoint_003_177() {
/*<387>*/ 	start()
/*<385>*/ 	printf(/* textboxtype: 1, unk: 0, line: 227 */ "")
          }

          void entrypoint_003_194() {
/*<489>*/ 	start()
/*<487>*/ 	printf(/* textboxtype: 0, unk: 5, line: 244 */ "You got a <color yellow<<item 194>>coloroff>! This\npotion will <color red<automatically >coloroff>restore your\nshield when it breaks and replenishes\n<color red<eight>coloroff> hearts. Plus, you can use it twice!")
          }

          void entrypoint_003_067() {
/*< 90>*/ 	start()
/*< 33>*/ 	printf(/* textboxtype: 5, unk: 1, line: 90 */ "")
          }

          void entrypoint_003_032() {
/*<114>*/ 	start()
/*< 56>*/ 	printf(/* textboxtype: 5, unk: 1, line: 42 */ "You got a <color silver<<item 32>>coloroff>! It's worth a\nwhopping <color red<100 Rupees>coloroff>! You must feel\nlike a celebrity.")
          }

          void entrypoint_003_015() {
/*<131>*/ 	start()
/*< 72>*/ 	printf(/* textboxtype: 1, unk: 0, line: 20 */ "")
          }

          void entrypoint_003_084() {
/*<188>*/ 	start()
/*<169>*/ 	printf(/* textboxtype: 1, unk: 0, line: 110 */ "You got a <color yellow<<item 84>>coloroff>!\nDrink it to make your stamina gauge\ndeplete at a slower rate! One bottle is\neffective for <color red<three minutes>coloroff>.")
          }

          void entrypoint_003_109() {
/*<249>*/ 	start()
/*<245>*/ 	printf(/* textboxtype: 1, unk: 0, line: 143 */ "You got a <color yellow<<item 109>>coloroff>! You can carry up to\n<color red<1,000 Rupees>coloroff> in this massive wallet.")
          }

          void entrypoint_003_126() {
/*<279>*/ 	start()
/*<275>*/ 	printf(/* textboxtype: 0, unk: 5, line: 163 */ "You got some <color yellow<<item 126>>coloroff>! \nThis potion <color red<fully replenishes>coloroff> your shield \ngauge and also restores <color red<four>coloroff> hearts! ")
          }

          void entrypoint_003_143() {
/*<318>*/ 	start()
/*<651>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<652>*/ 		printf(/* textboxtype: 0, unk: 5, line: 184 */ "You got <numeric arg0 0> <color yellow<<0x30004:0x05cd>>coloroff>! The venom\nof these insects can be heated to infuse a\npotent medicine. Just be careful not to get\nattacked by an angry swarm!")
          		flw_618:
/*<618>*/ 		open_collection_screen();
          	  case 1:
/*<316>*/ 		printf(/* textboxtype: 5, unk: 1, line: 183 */ "You caught <numeric arg0 0> <color yellow<<0x30004:0x05cd>>coloroff>! The venom\nof these insects can be heated to infuse a\npotent medicine. Just be careful not to get\nattacked by an angry swarm!")
          		goto flw_618
          	}
          }

          void entrypoint_003_160() {
/*<381>*/ 	start()
/*<379>*/ 	printf(/* textboxtype: 5, unk: 1, line: 210 */ "You got a <color yellow<<item 160>>coloroff>!\nIt's a baby's toy. Perhaps somebody\ndropped it?")
          }

          void entrypoint_003_178() {
/*<386>*/ 	start()
/*<384>*/ 	printf(/* textboxtype: 5, unk: 1, line: 228 */ "")
          }

          void entrypoint_003_195() {
/*<488>*/ 	start()
/*<486>*/ 	printf(/* textboxtype: 1, unk: 0, line: 245 */ "You got some <color yellow<<item 195>>coloroff>!\nThis homemade soup is Pumm's specialty,\nbut watch it! It'll get cold in<color red< five minutes>coloroff>!")
          }

          void entrypoint_003_068() {
/*< 89>*/ 	start()
/*< 32>*/ 	printf(/* textboxtype: 0, unk: 5, line: 91 */ "You got the <color yellow<<item 68>>coloroff>! \nThis sacred gift left by the goddess grants\nyou the power to explore underwater and\neven execute a spin maneuver!")
/*<500>*/ 	story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */] = true;
          }

          void entrypoint_003_050() {
/*< 99>*/ 	start()
/*< 41>*/ 	printf(/* textboxtype: 1, unk: 0, line: 65 */ "You got the <color yellow<<item 50>>coloroff>!\nIt shows the layout of the area and reveals\nunexplored rooms.")
/*<509>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1, 'next': 508, 'param3': 30}
/*<508>*/ 	switch (story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */]) {
          	  case 0:
/*<613>*/ 		story_flags[850 /* us: 805A9B34 0x01, jp: 805ACDB4 0x01 */] = true;
/*<510>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': -1, 'param3': 34}
          	  case 1:
/*<513>*/ 		printf(/* textboxtype: 5, unk: 1, line: 66 */ "It also reveals the locations of treasure\nchests, so be sure to take a look!")
/*<512>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 511, 'param3': 34}
/*<511>*/ 		story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */] = true;
          	}
          }

          void entrypoint_003_033() {
/*<113>*/ 	start()
/*< 55>*/ 	printf(/* textboxtype: 0, unk: 5, line: 43 */ "You got a <color gold<<item 33>>coloroff>! It's worth a\nstaggering <color red<300 Rupees>coloroff>! Shhh...\nDon't tell anyone!")
          }

          void entrypoint_003_016() {
/*<130>*/ 	start()
/*< 71>*/ 	printf(/* textboxtype: 5, unk: 1, line: 21 */ "")
          }

          void entrypoint_003_085() {
/*<187>*/ 	start()
/*<168>*/ 	printf(/* textboxtype: 5, unk: 1, line: 111 */ "You got a <color yellow<<item 85>>coloroff>!\nThis miraculous brew prevents your \nstamina gauge from depleting at all\nfor <color red<three minutes>coloroff>!")
          }

          void entrypoint_003_127() {
/*<290>*/ 	start()
/*<286>*/ 	printf(/* textboxtype: 1, unk: 0, line: 164 */ "You got some <color yellow<<item 127>>coloroff>!\nThis powerful elixir <color red<automatically>coloroff>\nrestores your shield when it breaks\nand also replenishes <color red<eight>coloroff> hearts!")
          }

          void entrypoint_003_144() {
/*<317>*/ 	start()
/*<653>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<654>*/ 		printf(/* textboxtype: 5, unk: 1, line: 186 */ "You got <numeric arg0 0> <color yellow<<0x30004:0x06cd>>coloroff>!\nThese bugs catch prey with their sharp\njaws. They are often seen up above the\nclouds.")
          		flw_619:
/*<619>*/ 		open_collection_screen();
          	  case 1:
/*<315>*/ 		printf(/* textboxtype: 1, unk: 0, line: 185 */ "You caught <numeric arg0 0> <color yellow<<0x30004:0x06cd>>coloroff>!\nThese bugs catch prey with their sharp\njaws. They are often seen up above the\nclouds.")
          		goto flw_619
          	}
          }

          void entrypoint_003_161() {
/*<340>*/ 	start()
/*<338>*/ 	printf(/* textboxtype: 0, unk: 5, line: 211 */ "You got <color yellow<<item 161>>coloroff>! They're a precious\nsource of protein that comes from a Deku\nHornet's hive. This material might be good\nfor making something.")
/*<628>*/ 	open_collection_screen();
          }

          void entrypoint_003_179() {
/*<391>*/ 	start()
/*<389>*/ 	printf(/* textboxtype: 0, unk: 5, line: 229 */ "")
          }

          void entrypoint_003_196() {
/*<493>*/ 	start()
/*<491>*/ 	printf(/* textboxtype: 5, unk: 1, line: 246 */ "")
          }

          void entrypoint_003_069() {
/*< 88>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0, line: 92 */ "")
          }

          void entrypoint_003_051() {
/*< 98>*/ 	start()
/*< 40>*/ 	printf(/* textboxtype: 0, unk: 5, line: 67 */ "")
          }

          void entrypoint_003_034() {
/*<112>*/ 	start()
/*< 54>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ "You picked up a <color black<<item 34>>coloroff>!\nThat means you've lost <color red<10 Rupees>coloroff>.\nAnd that's a little bit sad.")
          }

          void entrypoint_003_017() {
/*<129>*/ 	start()
/*< 70>*/ 	printf(/* textboxtype: 0, unk: 5, line: 22 */ "You got the <color yellow<<item 17>>coloroff>!\nThis mysterious plant represents your\nspirit, <heroname>.")
          }

          void entrypoint_003_086() {
/*<186>*/ 	start()
/*<167>*/ 	printf(/* textboxtype: 0, unk: 5, line: 112 */ "You got an <color yellow<<item 86>>coloroff>! Drink\nthis to make your oxygen gauge deplete at\na slower rate. One bottle is effective for\n<color red<three minutes>coloroff>.")
          }

          void entrypoint_003_110() {
/*<248>*/ 	start()
/*<244>*/ 	printf(/* textboxtype: 5, unk: 1, line: 144 */ "You got the <color yellow<<item 110>>coloroff>!\nThe voluminous capacity of this wallet\nallows you to store a whopping\n<color red<5,000 Rupees >coloroff>in it!")
          }

          void entrypoint_003_128() {
/*<289>*/ 	start()
/*<285>*/ 	printf(/* textboxtype: 5, unk: 1, line: 165 */ "You got a <color yellow<<item 128>>coloroff>!\nWith this, you can carry 10 extra\n<item 57>. Keep it with you\nwhen you use your <item 52>!")
          }

          void entrypoint_003_145() {
/*<322>*/ 	start()
/*<655>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<656>*/ 		printf(/* textboxtype: 1, unk: 0, line: 188 */ "You got <numeric arg0 0> <color yellow<<0x30004:0x07cd>>coloroff>! They\nsay these bugs get their deep-red hue from\nthe ore they eat. They are slow moving\nand tend to stay in one place.")
          		flw_620:
/*<620>*/ 		open_collection_screen();
          	  case 1:
/*<320>*/ 		printf(/* textboxtype: 0, unk: 5, line: 187 */ "You caught <numeric arg0 0> <color yellow<<0x30004:0x07cd>>coloroff>! They\nsay these bugs get their deep-red hue from\nthe ore they eat. They are slow moving\nand tend to stay in one place.")
          		goto flw_620
          	}
          }

          void entrypoint_003_162() {
/*<339>*/ 	start()
/*<337>*/ 	printf(/* textboxtype: 1, unk: 0, line: 212 */ "You got <numeric arg0 0> <color yellow<<0x30004:0x0fcd>>coloroff>! These highly\nprized feathers come from birds foreign to\nSkyloft and can serve as a useful material.")
/*<629>*/ 	open_collection_screen();
          }

          void entrypoint_003_197() {
/*<492>*/ 	start()
/*<585>*/ 	switch (story_flags[750 /* us: 805A9B29 0x40, jp: 805ACDA9 0x40 */]) {
          	  case 0:
/*<586>*/ 		printf(/* textboxtype: 1, unk: 0, line: 248 */ "You took back the <color yellow<<item 197>>coloroff>!\nIt would take too long to grow if\nyou planted it here. Maybe you\nshould find another place for it...")
          	  case 1:
/*<490>*/ 		printf(/* textboxtype: 0, unk: 5, line: 247 */ "You got the <color yellow<<item 197>>coloroff>!\nIt is a very young form of a legendary tree\nwhose fruit is said to cure any illness.")
/*<529>*/ 		story_flags[750 /* us: 805A9B29 0x40, jp: 805ACDA9 0x40 */] = true;
          	}
          }

          void entrypoint_003_052() {
/*< 97>*/ 	start()
/*<415>*/ 	switch (story_flags[164 /* us: 805A9AE3 0x08, jp: 805ACD63 0x08 */]) {
          	  case 0:
/*<597>*/ 		check_item_flag(105, 1)
/*<598>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 96}) {
          		  case 0:
/*<599>*/ 			printf(/* textboxtype: 0, unk: 5, line: 70 */ "You got your <color yellow<<item 105> >coloroff>back!\nUse it to stun enemies on patrol.")
          			flw_433:
/*<433>*/ 			open_item_wheel(0)
/*<417>*/ 			story_flags[164 /* us: 805A9AE3 0x08, jp: 805ACD63 0x08 */] = false;
          		  case 1:
/*<416>*/ 			printf(/* textboxtype: 5, unk: 1, line: 69 */ "You got your <color yellow<<item 52> >coloroff>back!\nUse it to stun enemies on patrol.")
          			goto flw_433
          		}
          	  case 1:
/*< 39>*/ 		printf(/* textboxtype: 1, unk: 0, line: 68 */ "You got the <color yellow<<item 52>>coloroff>! Use this projectile-\nshooting weapon to fling <item 57> at\nyour foes! The hard seeds will stun your\nenemies.")
/*<153>*/ 		add_to_counter(493, 20)
/*<521>*/ 		open_item_wheel(0)
/*<520>*/ 		story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */] = true;
/*<522>*/ 		story_flags[569 /* us: 805A9B18 0x01, jp: 805ACD98 0x01 */] = true;
          	}
          }

          void entrypoint_003_035() {
/*<111>*/ 	start()
/*< 53>*/ 	printf(/* textboxtype: 5, unk: 1, line: 45 */ "You got <color red<five>coloroff> <color yellow<<item 48>>coloroff><color yellow<s>coloroff>!\nThese crystals are feelings of gratitude\nin crystallized form.\n\nIt must have taken a lot of gratitude to\nproduce this bunch of <color red<five crystals>coloroff>!\nHelping people feels good!")
/*<646>*/ 	open_collection_screen();
          }

          void entrypoint_003_018() {
/*<128>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 1, unk: 0, line: 23 */ "")
          }

          void entrypoint_003_000() {
/*<146>*/ 	start()
/*<595>*/ 	switch (story_flags[817 /* us: 805A9B30 0x02, jp: 805ACDB0 0x02 */]) {
          	  case 0:
/*< 87>*/ 		printf(/* textboxtype: 5, unk: 1, line: 0 */ "There's nothing useful in here!")
          	  case 1:
/*<596>*/ 		printf(/* textboxtype: 0, unk: 5, line: 1 */ "You really shouldn't open other people's\ncupboards without permission...")
          	}
          }

          void entrypoint_003_087() {
/*<185>*/ 	start()
/*<166>*/ 	printf(/* textboxtype: 1, unk: 0, line: 113 */ "You got an <color yellow<<item 87>>coloroff>!\nThis wonder potion keeps the oxygen gauge\nfrom depleting at all for three<color red< minutes>coloroff>!")
          }

          void entrypoint_003_111() {
/*<259>*/ 	start()
/*<255>*/ 	printf(/* textboxtype: 0, unk: 5, line: 145 */ "You got the <color yellow<<item 111>>coloroff>!\nNo wallet can match the cavernous\ncapacity and luxurious quality of this one!\nIt can store a jaw-dropping <color red<9,000 Rupees>coloroff>!")
          }

          void entrypoint_003_129() {
/*<288>*/ 	start()
/*<284>*/ 	printf(/* textboxtype: 0, unk: 5, line: 166 */ "You upgraded to a <color yellow<<item 129>>coloroff>!\nNow it carries up to <color red<20>coloroff> additional\n<item 57>! Keep it with you\nwhen you use your <item 52>!")
          }

          void entrypoint_003_146() {
/*<321>*/ 	start()
/*<657>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<658>*/ 		printf(/* textboxtype: 0, unk: 5, line: 190 */ "You got <numeric arg0 0> <color yellow<<0x30004:0x08cd>>coloroff>! These\ninsects are commonly found in every\nprovince. In rare cases, you can find\nthem flying in strange locations.")
          		flw_621:
/*<621>*/ 		open_collection_screen();
          	  case 1:
/*<319>*/ 		printf(/* textboxtype: 5, unk: 1, line: 189 */ "You caught <numeric arg0 0> <color yellow<<0x30004:0x08cd>>coloroff>! These\ninsects are commonly found in every\nprovince. In rare cases, you can find\nthem flying in strange locations.")
          		goto flw_621
          	}
          }

          void entrypoint_003_163() {
/*<344>*/ 	start()
/*<342>*/ 	printf(/* textboxtype: 5, unk: 1, line: 213 */ "You got a <color yellow<<item 163>>coloroff>!\nThis dried mass of plant material could\ncome in handy. Might as well take it\nwith you.")
/*<630>*/ 	open_collection_screen();
          }

          void entrypoint_003_180() {
/*<390>*/ 	start()
/*<388>*/ 	printf(/* textboxtype: 1, unk: 0, line: 230 */ "You got the <color yellow<<item 180>>coloroff>!\nThis engraved object was created to lead\nthe chosen hero to the hidden location\nof the Triforce!")
/*<523>*/ 	story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */] = true;
          }

          void entrypoint_003_198() {
/*<495>*/ 	start()
/*<494>*/ 	printf(/* textboxtype: 5, unk: 1, line: 249 */ "You got the <color yellow<<item 198>>coloroff>! Eating this\nsucculent fruit of legend cures any illness.\nTake it to the Thunder Dragon!")
          }

          void entrypoint_003_999() {
/*<611>*/ 	start()
/*<610>*/ 	printf(/* textboxtype: 1, unk: 0, line: 101 */ "")
          }

          void entrypoint_003_053() {
/*< 96>*/ 	start()
/*< 38>*/ 	printf(/* textboxtype: 1, unk: 0, line: 71 */ "You got the <color yellow<<item 53>>coloroff>! The unexplained power\ncontained within this insect-shaped item\nallows you to control it as it flies through\nthe air!\nPoint the cursor where you want it to go,\nand press <icon 41> to send it soaring!<0x10011:0x0fcd>")
/*<422>*/ 	open_item_wheel(1)
          }

          void entrypoint_003_036() {
/*<110>*/ 	start()
/*< 52>*/ 	printf(/* textboxtype: 0, unk: 5, line: 46 */ "You got some <color yellow<<item 36>>coloroff>!\nThis is a powder that is released by\nglowing mushrooms.")
          }

          void entrypoint_003_019() {
/*<127>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 5, unk: 1, line: 24 */ "You got the <color yellow<<item 19>>coloroff>! Now you can hit targets\nat a very long range. Arrows also do a lot\nmore damage than Deku Seeds.")
/*<679>*/ 	story_flags[1114 /* us: 805A9B57 0x01, jp: 805ACDD7 0x01 */] = true;
/*<152>*/ 	add_to_counter(498, 20)
/*<421>*/ 	open_item_wheel(7)
          }

          void entrypoint_003_001() {
/*<145>*/ 	start()
/*< 86>*/ 	printf(/* textboxtype: 1, unk: 0, line: 2 */ "You got a <color yellow<<item 1>>coloroff>! \nThis key will open a locked door. You can\nonly use it in this area.")
          }

          void entrypoint_003_070() {
/*<147>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 5, unk: 1, line: 93 */ "You got a <color yellow<<item 70>>coloroff>!\nAreas with insects will now be marked with\n(O) on your map! You can open your map \nto see where the bugs like to hang out.")
          }

          void entrypoint_003_088() {
/*<184>*/ 	start()
/*<165>*/ 	printf(/* textboxtype: 5, unk: 1, line: 114 */ "You caught a <color yellow<<item 72>>coloroff>! This playful sprite\nreplenishes <color red<six>coloroff> of your hearts!\n\n\nIf you put it in a bottle and keep it with\nyou, it will come to your aid <color red<automatically\n>coloroff>if you <color red<run out of hearts>coloroff>.")
          }

          void entrypoint_003_112() {
/*<258>*/ 	start()
/*<418>*/ 	switch (story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */]) {
          	  case 0:
/*<419>*/ 		printf(/* textboxtype: 5, unk: 1, line: 147 */ "You got your <color yellow<<item 112> >coloroff>back!\nAnd look! The rest of your items are\nhere too!")
/*<435>*/ 		open_item_wheel(8)
/*<420>*/ 		story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */] = false;
          	  case 1:
/*<254>*/ 		printf(/* textboxtype: 1, unk: 0, line: 146 */ "You got the <color yellow<<item 112>>coloroff>!\nYou can store all kinds of useful items in\nthis handy piece of gear.")
/*<603>*/ 		open_adventure_pouch(0)
          	}
          }

          void entrypoint_003_147() {
/*<326>*/ 	start()
/*<659>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<660>*/ 		printf(/* textboxtype: 5, unk: 1, line: 192 */ "You got <numeric arg0 0> <color yellow<<0x30004:0x09cd>>coloroff>! It's said\nthese ants store water deep in their nests,\nallowing them to thrive even in the intense\nheat of the open desert.")
          		flw_622:
/*<622>*/ 		open_collection_screen();
          	  case 1:
/*<324>*/ 		printf(/* textboxtype: 1, unk: 0, line: 191 */ "You caught <numeric arg0 0> <color yellow<<0x30004:0x09cd>>coloroff>! It's said\nthese ants store water deep in their nests,\nallowing them to thrive even in the intense\nheat of the open desert.")
          		goto flw_622
          	}
          }

          void entrypoint_003_164() {
/*<343>*/ 	start()
/*<341>*/ 	printf(/* textboxtype: 0, unk: 5, line: 214 */ "You got a <color yellow<<item 164>>coloroff>! It's the tail of a\nlarge lizard with a spiked ball on the end.\nSure, it's a little gross, but you never know\nwhen you might need one.")
/*<631>*/ 	open_collection_screen();
          }

          void entrypoint_003_181() {
/*<395>*/ 	start()
/*<393>*/ 	printf(/* textboxtype: 5, unk: 1, line: 231 */ "")
          }

          void entrypoint_003_199() {
/*<499>*/ 	start()
/*<497>*/ 	printf(/* textboxtype: 0, unk: 5, line: 250 */ "You got the <color yellow<<item 199>>coloroff>! Your wallet can\nnow hold an additional <color red<300 Rupees>coloroff>!")
/*<644>*/ 	open_collection_screen();
          }

          void entrypoint_003_071() {
/*< 20>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 0, unk: 5, line: 94 */ "You got the <color yellow<<item 71>>coloroff>!\nUse it to catch bugs and other small things.\nWhen you're hunting bugs, remember to\napproach quietly and strike quickly!")
/*<423>*/ 	open_item_wheel(2)
/*<612>*/ 	story_flags[849 /* us: 805A9B35 0x80, jp: 805ACDB5 0x80 */] = true;
          }

          void entrypoint_003_054() {
/*< 95>*/ 	start()
/*< 37>*/ 	printf(/* textboxtype: 5, unk: 1, line: 72 */ "You got some <color yellow<<item 54>>coloroff>! It's just normal\nwater, but it might come in handy\nsometime.")
          }

          void entrypoint_003_037() {
/*<109>*/ 	start()
/*< 51>*/ 	printf(/* textboxtype: 1, unk: 0, line: 47 */ "")
          }

          void entrypoint_003_002() {
/*<144>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 5, unk: 1, line: 3 */ "You got a <color green rupee<<item 2>>coloroff>! It's worth just\n<color red<1 Rupee>coloroff>, so collect lots of them!")
          }

          void entrypoint_003_089() {
/*<183>*/ 	start()
/*<164>*/ 	printf(/* textboxtype: 0, unk: 5, line: 115 */ "")
          }

          void entrypoint_003_113() {
/*<257>*/ 	start()
/*<253>*/ 	printf(/* textboxtype: 0, unk: 5, line: 148 */ "You made your <color yellow<<item 112>\n>coloroff>bigger! You can now fit an additional\nitem inside.")
/*<604>*/ 	open_adventure_pouch(1)
          }

          void entrypoint_003_130() {
/*<287>*/ 	start()
/*<283>*/ 	printf(/* textboxtype: 1, unk: 0, line: 167 */ "You upgraded to a <color yellow<<item 130>>coloroff>!\nNow it carries up to <color red<30>coloroff> additional\n<item 57>! Keep it with you\nwhen you use your <item 52>!")
          }

          void entrypoint_003_148() {
/*<325>*/ 	start()
/*<661>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<662>*/ 		printf(/* textboxtype: 1, unk: 0, line: 194 */ "You got <numeric arg0 0> <color yellow<<0x30004:0x0acd>>coloroff>! The larvae of\nthese bugs stay underground for 10 years\nor longer. No bug is harder to catch!")
          		flw_623:
/*<623>*/ 		open_collection_screen();
          	  case 1:
/*<323>*/ 		printf(/* textboxtype: 0, unk: 5, line: 193 */ "You caught <numeric arg0 0> <color yellow<<0x30004:0x0acd>>coloroff>! The larvae of\nthese bugs stay underground for 10 years\nor longer. No bug is harder to catch!")
          		goto flw_623
          	}
          }

          void entrypoint_003_165() {
/*<348>*/ 	start()
/*<346>*/ 	printf(/* textboxtype: 1, unk: 0, line: 215 */ "You got some <color yellow<<item 165>>coloroff>!\nThis hard concretion sparkles brightly. \nIt also has lots of different uses.")
/*<632>*/ 	open_collection_screen();
          }

          void entrypoint_003_182() {
/*<394>*/ 	start()
/*<392>*/ 	printf(/* textboxtype: 0, unk: 5, line: 232 */ "")
          }

          void entrypoint_003_072() {
/*< 19>*/ 	start()
/*<506>*/ 	switch (has_empty_bottle()) {
          	  case 0:
/*<507>*/ 		printf(/* textboxtype: 5, unk: 1, line: 96 */ "You found a <color yellow<<item 72>>coloroff>!\nThis playful sprite replenishes\n<color red<six>coloroff> of your hearts!\n\nYou don't have an <color yellow<<item 153>>coloroff>,\nhowever, so you'll have to let this one\nfly off.")
          	  case 1:
/*<505>*/ 		printf(/* textboxtype: 1, unk: 0, line: 95 */ "You found a <color yellow<<item 72>>coloroff>!\nThis playful sprite replenishes\n<color red<six>coloroff> of your hearts!")
          	}
          }

          void entrypoint_003_055() {
/*< 94>*/ 	start()
/*<614>*/ 	switch (story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */]) {
          	  case 0:
/*<615>*/ 		printf(/* textboxtype: 1, unk: 0, line: 74 */ "You got some <color yellow<<item 55>>coloroff>! These\nspores from a giant mushroom are said to\nwork wonders on injured birds.")
          	  case 1:
/*< 36>*/ 		printf(/* textboxtype: 0, unk: 5, line: 73 */ "You got some <color yellow<<item 55>>coloroff>!\nThese spores are from a giant mushroom.")
          	}
          }

          void entrypoint_003_038() {
/*<108>*/ 	start()
/*< 50>*/ 	printf(/* textboxtype: 5, unk: 1, line: 48 */ "")
          }

          void entrypoint_003_020() {
/*<126>*/ 	start()
/*<408>*/ 	switch (story_flags[162 /* us: 805A9AE3 0x02, jp: 805ACD63 0x02 */]) {
          	  case 0:
/*<409>*/ 		printf(/* textboxtype: 1, unk: 0, line: 26 */ "You got your <color yellow<<item 20>>coloroff> back!\nNow you can reach faraway spots again.")
/*<429>*/ 		open_item_wheel(6)
/*<430>*/ 		story_flags[162 /* us: 805A9AE3 0x02, jp: 805ACD63 0x02 */] = false;
          	  case 1:
/*< 67>*/ 		printf(/* textboxtype: 0, unk: 5, line: 25 */ "You got the <color yellow<<item 20>>coloroff>! With this sacred\ngift, you will be able to explore areas\nthat were previously unreachable!\n\nAim for special <color red<targets>coloroff> and <color red<vines>coloroff>, then fire\na claw on a chain that pulls you to the\nplace you have targeted!")
/*<501>*/ 		story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */] = true;
/*<410>*/ 		open_item_wheel(6)
          	}
          }

          void entrypoint_003_003() {
/*<143>*/ 	start()
/*<591>*/ 	switch (story_flags[817 /* us: 805A9B30 0x02, jp: 805ACDB0 0x02 */]) {
          	  case 0:
/*<590>*/ 		printf(/* textboxtype: 1, unk: 0, line: 5 */ "You found a <color blue rupee<<item 3>>coloroff>! It's worth\n<color red<5 Rupees>coloroff>. Better drop it in your wallet\nfor now.")
          	  case 1:
/*< 84>*/ 		printf(/* textboxtype: 0, unk: 5, line: 4 */ "You got a <color blue rupee<<item 3>>coloroff>! It's worth <color red<5 >coloroff><color red<Rupees>coloroff>.\nLucky find!")
          	}
          }

          void entrypoint_003_114() {
/*<256>*/ 	start()
/*<252>*/ 	printf(/* textboxtype: 1, unk: 0, line: 149 */ "You got the <color yellow<<item 114>>coloroff>!\nYour maximum number of hearts is\nincreased by <color red<one >coloroff>as long as you carry\nthis with you.\nYou can always keep it with you at times\nwhen you think you'll need it most.")
          }

          void entrypoint_003_131() {
/*<298>*/ 	start()
/*<294>*/ 	printf(/* textboxtype: 5, unk: 1, line: 168 */ "You got the <color yellow<<item 131>>coloroff>!\nNow you can carry <color red<5>coloroff> extra arrows. Carry it\nwith you when you're using the bow.")
          }

          void entrypoint_003_149() {
/*<330>*/ 	start()
/*<663>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<664>*/ 		printf(/* textboxtype: 0, unk: 5, line: 196 */ "You got <numeric arg0 0> <color yellow<<0x30004:0x0bcd>>coloroff>!\nThese stunning insects have compound eyes\nmore beautiful than Rupees and wings as\ntransparent as glass!")
          		flw_624:
/*<624>*/ 		open_collection_screen();
          	  case 1:
/*<328>*/ 		printf(/* textboxtype: 5, unk: 1, line: 195 */ "You caught <numeric arg0 0> <color yellow<<0x30004:0x0bcd>>coloroff>!\nThese stunning insects have compound eyes\nmore beautiful than Rupees and wings as\ntransparent as glass!")
          		goto flw_624
          	}
          }

          void entrypoint_003_166() {
/*<347>*/ 	start()
/*<345>*/ 	printf(/* textboxtype: 5, unk: 1, line: 216 */ "You got an <color yellow<<item 166>>coloroff>!\nLegends say this beautiful flower\nflourished in the ancient past.\nSupposedly it glows in the dark...")
/*<633>*/ 	open_collection_screen();
          }

          void entrypoint_003_183() {
/*<482>*/ 	start()
/*<480>*/ 	printf(/* textboxtype: 1, unk: 0, line: 233 */ "")
          }

          void entrypoint_003_056() {
/*< 93>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 5, unk: 1, line: 75 */ "You got the <color yellow<<item 56>>coloroff>! Use these sharp\nclaws to dig through patches of soft earth.\n\n\nBe sure to try digging with (A) anywhere\nyou see signs that something has been\nburied in soft ground.")
          }

          void entrypoint_003_039() {
/*<107>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 0, unk: 5, line: 49 */ "")
          }

          void entrypoint_003_021() {
/*<125>*/ 	start()
/*< 66>*/ 	printf(/* textboxtype: 5, unk: 1, line: 27 */ "You got the <color yellow<<item 21>>coloroff>!\nIt proves your victory today.\nWait till Zelda sees this!")
/*<584>*/ 	changeScene(3, 0) // 
          }

          void entrypoint_003_004() {
/*<142>*/ 	start()
/*< 83>*/ 	printf(/* textboxtype: 5, unk: 1, line: 6 */ "You got a <color red rupee<<item 4>>coloroff>! It's worth <color red<20 Rupees>coloroff>.\nDon't spend it all in one place!")
          }

          void entrypoint_003_073() {
/*<154>*/ 	start()
/*< 17>*/ 	printf(/* textboxtype: 0, unk: 5, line: 97 */ "")
          }

          void entrypoint_003_090() {
/*<182>*/ 	start()
/*<163>*/ 	printf(/* textboxtype: 1, unk: 0, line: 116 */ "You upgraded to the <color yellow<<item 90>>coloroff>!\nCrafted for the expert bowman, this bow\nhas enhanced attack power and can launch\narrows even farther!")
          }

          void entrypoint_003_115() {
/*<267>*/ 	start()
/*<263>*/ 	printf(/* textboxtype: 5, unk: 1, line: 150 */ "")
          }

          void entrypoint_003_132() {
/*<297>*/ 	start()
/*<293>*/ 	printf(/* textboxtype: 0, unk: 5, line: 169 */ "You upgraded to the <color yellow<<item 132>>coloroff>!\nWith this, you can carry <color red<10>coloroff> extra arrows.\nCarry it with you when you're using\nthe bow.")
          }

          void entrypoint_003_167() {
/*<362>*/ 	start()
/*<361>*/ 	printf(/* textboxtype: 0, unk: 5, line: 217 */ "You got an <color yellow<<item 167>>coloroff>! These amber-\ncolored chunks of precious stone are\nfound everywhere. No one knows where\ntheir strange shape comes from.")
/*<634>*/ 	open_collection_screen();
          }

          void entrypoint_003_184() {
/*<481>*/ 	start()
/*<479>*/ 	printf(/* textboxtype: 5, unk: 1, line: 234 */ "")
          }

          void entrypoint_003_057() {
/*< 92>*/ 	start()
/*<396>*/ 	check_item_flag(52, 1)
/*<397>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 28}) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0, line: 77 */ "You got <color yellow<5 >coloroff><color yellow<<item 57>>coloroff>! These small seeds\nserve as ammunition for your <item 52>.\nMake sure you've always got a few handy!")
          	  case 1:
/*<398>*/ 		printf(/* textboxtype: 5, unk: 1, line: 78 */ "")
/*<503>*/ 		add_to_counter(493, -5)
          	}
          }

          void entrypoint_003_022() {
/*<124>*/ 	start()
/*< 65>*/ 	printf(/* textboxtype: 0, unk: 5, line: 28 */ "")
          }

          void entrypoint_003_005() {
/*<141>*/ 	start()
/*< 82>*/ 	printf(/* textboxtype: 0, unk: 5, line: 7 */ "The <color yellow white<<item 5> >coloroff>is complete! With its power,\nyou have the ability to make Zelda's wish of\n<color red<vanquishing >coloroff><color blue<Demise>coloroff> a reality.")
/*<540>*/ 	story_flags[645 /* us: 805A9B1D 0x40, jp: 805ACD9D 0x40 */] = true;
/*<583>*/ 	story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */] = true;
          }

          void entrypoint_003_074() {
/*<155>*/ 	start()
/*<675>*/ 	scene_flags[11 'Faron: Skyview Temple'][119 /* 0xF 80 */] = true;
/*<600>*/ 	zone_temp_flags[1 /* 0x1 02 */] = true;
/*<676>*/ 	switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          	  case 0:
          		flw_156:
/*<156>*/ 		printf(/* textboxtype: 5, unk: 1, line: 99 */ "You got <color yellow<<item 74>>coloroff>! It may\nlook like ordinary water, but this pure\nwater contains a powerful energy.")
          	  case 1:
/*<514>*/ 		switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          		  case 0:
/*<515>*/ 			printf(/* textboxtype: 1, unk: 0, line: 98 */ "You got some <color yellow<<item 74>>coloroff>!\nThis pure water can heal the wounds of the\nWater Dragon. It has mystical properties\nthat cannot be found in ordinary water.")
/*<601>*/ 			scene_flags[11 'Faron: Skyview Temple'][98 /* 0xD 04 */] = false;
/*<602>*/ 			scene_flags[11 'Faron: Skyview Temple'][97 /* 0xD 02 */] = false;
          		  case 1:
          			goto flw_156
          		}
          	}
          }

          void entrypoint_003_091() {
/*<181>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 5, unk: 1, line: 117 */ "You have upgraded to the <color yellow<<item 91>>coloroff>!\nIt uses a sacred power of the goddess to\nrain a terrible force upon your enemies.")
          }

          void entrypoint_003_116() {
/*<266>*/ 	start()
/*<551>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<552>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "Your shield has been repaired.\nIt looks good as new!")
          	  case 1:
/*<262>*/ 		printf(/* textboxtype: 0, unk: 5, line: 151 */ "You got a <color yellow<<item 116>>coloroff>!\nThis light wooden shield breaks easily and\ncan burn, so be careful how you use it.")
/*<516>*/ 		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          	}
          }

          void entrypoint_003_133() {
/*<296>*/ 	start()
/*<292>*/ 	printf(/* textboxtype: 1, unk: 0, line: 170 */ "You've upgraded to the <color yellow<<item 133>>coloroff>!\nIt holds <color red<15>coloroff> extra arrows. Carry it with \nyou when you're using the bow.")
          }

          void entrypoint_003_150() {
/*<329>*/ 	start()
/*<665>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<666>*/ 		printf(/* textboxtype: 5, unk: 1, line: 198 */ "You got <numeric arg0 0> <color yellow<<0x30004:0x0ccd>>coloroff>! These small-\nbodied bugs roll a big ball of...something.\nThe way they busily roll stuff back to their\nnest is quite adorable.")
          		flw_625:
/*<625>*/ 		open_collection_screen();
          	  case 1:
/*<327>*/ 		printf(/* textboxtype: 1, unk: 0, line: 197 */ "You caught <numeric arg0 0> <color yellow<<0x30004:0x0ccd>>coloroff>! These small-\nbodied bugs roll a big ball of...something.\nThe way they busily roll stuff back to their\nnest is quite adorable.")
          		goto flw_625
          	}
          }

          void entrypoint_003_168() {
/*<364>*/ 	start()
/*<363>*/ 	printf(/* textboxtype: 1, unk: 0, line: 218 */ "You got a <color yellow<<item 168>>coloroff>! This item is similar\nin appearance to an <item 167>, yet very\ndifferent. It can only be found in certain\nplaces.")
/*<635>*/ 	open_collection_screen();
          }

          void entrypoint_003_185() {
/*<484>*/ 	start()
/*<483>*/ 	printf(/* textboxtype: 0, unk: 5, line: 235 */ "")
          }

          void entrypoint_003_040() {
/*<106>*/ 	start()
/*< 48>*/ 	printf(/* textboxtype: 1, unk: 0, line: 50 */ "You got <color yellow<<item 40>>coloroff>!\nThrow them or roll them to blow up even\nhard objects. Try to pick up and store\nthem whenever you come across any.")
          }

          void entrypoint_003_023() {
/*<123>*/ 	start()
/*< 64>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "")
          }

          void entrypoint_003_006() {
/*<140>*/ 	start()
/*< 81>*/ 	printf(/* textboxtype: 1, unk: 0, line: 8 */ "You got a <color yellow<<item 6>>coloroff>! This item's life-giving\nenergy restores one heart of life.")
          }

          void entrypoint_003_092() {
/*<180>*/ 	start()
/*<402>*/ 	switch (story_flags[165 /* us: 805A9AE3 0x10, jp: 805ACD63 0x10 */]) {
          	  case 0:
/*<403>*/ 		printf(/* textboxtype: 5, unk: 1, line: 120 */ "You got your <color yellow<<item 92> >coloroff>back!\nTime to make something explode.")
/*<426>*/ 		open_item_wheel(3)
/*<434>*/ 		story_flags[165 /* us: 805A9AE3 0x10, jp: 805ACD63 0x10 */] = false;
          	  case 1:
/*<424>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*<425>*/ 			printf(/* textboxtype: 1, unk: 0, line: 119 */ "You got a <color yellow<<item 92>>coloroff>! <color blue<Ledd>coloroff> was kind enough\nto give it to you, so make sure you take\ngood care of it.")
/*<678>*/ 			story_flags[1115 /* us: 805A9B57 0x02, jp: 805ACDD7 0x02 */] = true;
          		  case 1:
/*<161>*/ 			printf(/* textboxtype: 0, unk: 5, line: 118 */ "You found a <color yellow<<item 92>>coloroff>!\nYou can store bombs in this bag and carry\nthem with you to use later.\n\nNow that you can carry bombs with you,\nthere's a good chance you can get to\nplaces you haven't explored yet.\nSee if <color blue<Ledd >coloroff>will lend it to you!")
/*<414>*/ 			open_item_wheel(3)
          		}
          	}
          }

          void entrypoint_003_075() {
/*<197>*/ 	start()
/*<178>*/ 	printf(/* textboxtype: 0, unk: 5, line: 100 */ "You got the <color yellow<<item 75>>coloroff>!\nThe big pincers enable you to pick up and\ncarry things with it!\n\nYou can also press (Z) while carrying an\nobject to look down and drop your cargo.\nBombs away!<0x10011:0x07cd>")
          }

          void entrypoint_003_117() {
/*<265>*/ 	start()
/*<553>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<555>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "Your shield has been repaired.\nIt looks good as new!")
          	  case 1:
/*<261>*/ 		printf(/* textboxtype: 5, unk: 1, line: 153 */ "You upgraded to a <color yellow<<item 117>>coloroff>!\nThis shield is much more durable than\nthe standard <item 116>.")
          	}
          }

          void entrypoint_003_134() {
/*<295>*/ 	start()
/*<291>*/ 	printf(/* textboxtype: 5, unk: 1, line: 171 */ "You got the <color yellow<<item 134>>coloroff>! It can hold\n<color red<5>coloroff> extra bombs, so carry it with you when\nyou need extra firepower.")
          }

          void entrypoint_003_151() {
/*<334>*/ 	start()
/*<667>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<668>*/ 		printf(/* textboxtype: 1, unk: 0, line: 200 */ "You got <numeric arg0 0> <color yellow<<0x30004:0x0dcd>>coloroff>!\nThese bugs are really popular with the\nchildren of Skyloft. Their pincers pack a\nlot of crunch, so watch your fingers!")
          		flw_626:
/*<626>*/ 		open_collection_screen();
          	  case 1:
/*<332>*/ 		printf(/* textboxtype: 0, unk: 5, line: 199 */ "You caught <numeric arg0 0> <color yellow<<0x30004:0x0dcd>>coloroff>!\nThese bugs are really popular with the\nchildren of Skyloft. Their pincers pack a\nlot of crunch, so watch your fingers!")
          		goto flw_626
          	}
          }

          void entrypoint_003_169() {
/*<352>*/ 	start()
/*<350>*/ 	printf(/* textboxtype: 5, unk: 1, line: 219 */ "You got a <color yellow<<item 169>>coloroff>!\nIt may look like a boring wad of gunk,\nbut it's used to make all sorts of things!")
/*<636>*/ 	open_collection_screen();
          }

          void entrypoint_003_058() {
/*<453>*/ 	start()
/*<454>*/ 	check_item_flag(491, 199)
/*<455>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 54}) {
          	  case 0:
/*<452>*/ 		printf(/* textboxtype: 1, unk: 0, line: 80 */ "")
          	  case 1:
/*<456>*/ 		printf(/* textboxtype: 0, unk: 5, line: 79 */ "")
          	}
          }

          void entrypoint_003_186() {
/*<466>*/ 	start()
/*<464>*/ 	printf(/* textboxtype: 1, unk: 0, line: 236 */ "You learned the <color yellow<<item 186>>coloroff>!\nIt's a mysterious melody that has been\npassed down from ancient times.")
/*<579>*/ 	changeScene(2, 0) // 
          }

          void entrypoint_003_041() {
/*<105>*/ 	start()
/*< 47>*/ 	printf(/* textboxtype: 5, unk: 1, line: 51 */ "You got <color yellow<<item 41>>coloroff>! Throw them or roll\nthem to blow things up. Into your Bomb\nBag they go!")
          }

          void entrypoint_003_024() {
/*<122>*/ 	start()
/*< 63>*/ 	printf(/* textboxtype: 5, unk: 1, line: 30 */ "")
          }

          void entrypoint_003_007() {
/*<139>*/ 	start()
/*<157>*/ 	check_item_flag(19, 1)
/*<158>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          	  case 0:
/*< 80>*/ 		printf(/* textboxtype: 5, unk: 1, line: 9 */ "You got an <color yellow<<item 7>>coloroff>! You can reuse it\nwith your own bow, so there's no reason to\nlet it go to waste.")
          	  case 1:
/*<159>*/ 		printf(/* textboxtype: 0, unk: 5, line: 10 */ "")
          	}
          }

          void entrypoint_003_093() {
/*<179>*/ 	start()
/*<160>*/ 	printf(/* textboxtype: 0, unk: 5, line: 121 */ "You got a <color yellow<<item 93>>coloroff>!\nYour life has increased by <color red<one >coloroff>and\nis also now fully replenished!")
          }

          void entrypoint_003_076() {
/*<196>*/ 	start()
/*<177>*/ 	printf(/* textboxtype: 5, unk: 1, line: 102 */ "You've upgraded to the <color yellow<<item 76>>coloroff>!\nIt flies faster than the <item 53>.\nWatch where you're flying, speedy!")
          }

          void entrypoint_003_100() {
/*<234>*/ 	start()
/*<605>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<606>*/ 		printf(/* textboxtype: 1, unk: 0, line: 134 */ "You got the <color yellow<<item 100>>coloroff>! While you are\ncarrying this medal, hearts will appear\neven when playing in <color red<Hero Mode>coloroff>.\n\nIt will also cause heart flowers to bloom. \nIf you're someone who worries about\nhearts during an adventure, keep this\nwith you!")
/*<607>*/ 		story_flags[841 /* us: 805A9B35 0x01, jp: 805ACDB5 0x01 */] = true;
          	  case 1:
/*<230>*/ 		printf(/* textboxtype: 0, unk: 5, line: 133 */ "You got the <color yellow<<item 100>>coloroff>!\nHearts will appear more often as long as\nyou're carrying this.\n\nIf you're worried about running out of\nhearts while you're out adventuring,\nkeep this with you!")
          	}
          }

          void entrypoint_003_118() {
/*<264>*/ 	start()
/*<554>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<556>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "Your shield has been repaired.\nIt looks good as new!")
          	  case 1:
/*<260>*/ 		printf(/* textboxtype: 0, unk: 5, line: 154 */ "You upgraded to a <color yellow<<item 118>>coloroff>!\nThis very sturdy shield is much tougher\nthan the standard <item 116>.")
          	}
          }

          void entrypoint_003_135() {
/*<306>*/ 	start()
/*<302>*/ 	printf(/* textboxtype: 0, unk: 5, line: 172 */ "You've upgraded to the <color yellow<<item 135>>coloroff>!\nIt can hold <color red<10>coloroff> extra bombs. Carry it with\nyou when you need extra firepower.")
          }

          void entrypoint_003_152() {
/*<333>*/ 	start()
/*<669>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<670>*/ 		printf(/* textboxtype: 0, unk: 5, line: 202 */ "You got <numeric arg0 0> <color yellow<<0x30004:0x0ecd>>coloroff>! These\ninsects are among the rarest in the skies\nand can only be found in dark places.")
          		flw_627:
/*<627>*/ 		open_collection_screen();
          	  case 1:
/*<331>*/ 		printf(/* textboxtype: 5, unk: 1, line: 201 */ "You caught <numeric arg0 0> <color yellow<<0x30004:0x0ecd>>coloroff>! These\ninsects are among the rarest in the skies\nand can only be found in dark places.")
          		goto flw_627
          	}
          }

          void entrypoint_003_059() {
/*<458>*/ 	start()
/*<459>*/ 	check_item_flag(492, 19999)
/*<460>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 56}) {
          	  case 0:
/*<457>*/ 		printf(/* textboxtype: 1, unk: 0, line: 80 */ "")
          	  case 1:
/*<461>*/ 		printf(/* textboxtype: 0, unk: 5, line: 79 */ "")
          	}
          }

          void entrypoint_003_187() {
/*<465>*/ 	start()
/*<463>*/ 	printf(/* textboxtype: 5, unk: 1, line: 237 */ "")
/*<485>*/ 	story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */] = true;
          }

          void entrypoint_003_042() {
/*<104>*/ 	start()
/*< 46>*/ 	printf(/* textboxtype: 0, unk: 5, line: 52 */ "You got a <color yellow<<item 42>>coloroff>!\nThis peculiar fruit replenishes your\nstamina gauge!")
          }

          void entrypoint_003_025() {
/*<121>*/ 	start()
/*< 62>*/ 	printf(/* textboxtype: 0, unk: 5, line: 31 */ "You got the <color yellow<<item 25>>coloroff>!\nThis carved wooden statue looks like it's\nsupposed to inspire gratitude. It also looks\nlike the stone statue on the upper floor.")
          }

          void entrypoint_003_008() {
/*<138>*/ 	start()
/*< 79>*/ 	printf(/* textboxtype: 1, unk: 0, line: 11 */ "You got <color yellow<<item 8>>coloroff>! You can shoot these\nwith your bow. You have a limited supply,\nso shoot carefully.")
          }

          void entrypoint_003_077() {
/*<195>*/ 	start()
/*<176>*/ 	printf(/* textboxtype: 0, unk: 5, line: 103 */ "You've upgraded to the <color yellow<<item 77>>coloroff>!\nYour <item 53> can now fly farther than ever\nbefore!")
          }

          void entrypoint_003_094() {
/*<204>*/ 	start()
/*<205>*/ 	check_item_flag(489, 1)
/*<206>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 14}) {
          	  case 0:
/*<201>*/ 		check_item_flag(489, 2)
/*<202>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 12}) {
          		  case 0:
/*<198>*/ 			check_item_flag(489, 3)
/*<199>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 10}) {
          			  case 0:
/*<208>*/ 				printf(/* textboxtype: 0, unk: 5, line: 124 */ "You got a <color yellow<<item 94>>coloroff>!\nCollect four to increase your heart\ncapacity by one. Just <color red<one >coloroff>more!")
          			  case 1:
/*<200>*/ 				printf(/* textboxtype: 5, unk: 1, line: 123 */ "You got a <color yellow<<item 94>>coloroff>!\nCollect four to increase your heart\ncapacity by one. <color red<Two >coloroff>to go!")
          			}
          		  case 1:
/*<203>*/ 			printf(/* textboxtype: 1, unk: 0, line: 122 */ "You got a <color yellow<<item 94>>coloroff>!\nCollect four to increase your heart\ncapacity by one. <color red<Three >coloroff>to go!")
          		}
          	  case 1:
/*<207>*/ 		printf(/* textboxtype: 1, unk: 0, line: 125 */ "You got a <color yellow<<item 94>>coloroff>!\nThis completes the <item 93>.\nYour heart capacity will increase by one!")
          	}
          }

          void entrypoint_003_101() {
/*<233>*/ 	start()
/*<229>*/ 	printf(/* textboxtype: 5, unk: 1, line: 135 */ "You got the <color yellow<<item 101>>coloroff>!\nWhile you're carrying this, Rupees will\nmysteriously appear more often. Keep it\nwith you when your wallet feels empty!")
          }

          void entrypoint_003_119() {
/*<274>*/ 	start()
/*<557>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<560>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "Your shield has been repaired.\nIt looks good as new!")
          	  case 1:
/*<270>*/ 		printf(/* textboxtype: 1, unk: 0, line: 155 */ "You got an <color yellow<<item 119>>coloroff>!\nThis sturdy metal shield is unaffected by\nfire, but watch out for electrical attacks!")
/*<517>*/ 		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          	}
          }

          void entrypoint_003_136() {
/*<305>*/ 	start()
/*<301>*/ 	printf(/* textboxtype: 1, unk: 0, line: 173 */ "You've upgraded to the <color yellow<<item 136>>coloroff>!\nIt can hold <color red<15 >coloroff>extra bombs. Carry it with\nyou when you need extra firepower.")
          }

          void entrypoint_003_153() {
/*<336>*/ 	start()
/*<335>*/ 	printf(/* textboxtype: 1, unk: 0, line: 203 */ "You got an <color yellow<<item 153>>coloroff>! You can fill it\nwith all sorts of useful things.")
          }

          void entrypoint_003_170() {
/*<351>*/ 	start()
/*<349>*/ 	printf(/* textboxtype: 0, unk: 5, line: 220 */ "You got a <color yellow<<item 170>>coloroff>! \nThis extremely sharp claw looks painful to\neven touch!")
/*<637>*/ 	open_collection_screen();
          }

          void entrypoint_003_188() {
/*<470>*/ 	start()
/*<468>*/ 	printf(/* textboxtype: 0, unk: 5, line: 238 */ "")
/*<543>*/ 	story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */] = true;
          }

          void entrypoint_003_060() {
/*< 91>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 0, line: 83 */ "You got <color yellow<10 >coloroff><color yellow<<item 57>>coloroff>! These small seeds\nserve as ammunition for your <item 52>.\nMake sure you've always got a few handy!")
          }

          void entrypoint_003_043() {
/*<103>*/ 	start()
/*<400>*/ 	check_item_flag(500, 14)
/*<399>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 30}) {
          	  case 0:
/*<401>*/ 		printf(/* textboxtype: 5, unk: 1, line: 54 */ "You collected every last <color yellow<<item 43>>coloroff>.\n<0x30001:0x><heroname>'s spirit has grown! \n\n\nThe trial will continue until you exit the\nSilent Realm. Proceed with caution on\nyour way back to the entrance so that you\ncan claim proof of your spiritual growth.")
          	  case 1:
/*< 45>*/ 		printf(/* textboxtype: 1, unk: 0, line: 53 */ "You got a <color yellow<<item 43>>coloroff>!\nThis object's power halts the movements of\nthe Guardians for just <color red<90 seconds>coloroff>.\nCollect all <color red<15>coloroff> to pass the trial!")
          	}
          }

          void entrypoint_003_026() {
/*<120>*/ 	start()
/*< 61>*/ 	printf(/* textboxtype: 1, unk: 0, line: 32 */ "You got the <color yellow<<item 26>>coloroff>!\nThis mass is made up of faintly glowing\nsquare crystals. Several are missing.")
          }

          void entrypoint_003_009() {
/*<137>*/ 	start()
/*< 78>*/ 	printf(/* textboxtype: 5, unk: 1, line: 12 */ "")
/*<542>*/ 	story_flags[583 /* us: 805A9B1B 0x40, jp: 805ACD9B 0x40 */] = true;
          }

          void entrypoint_003_078() {
/*<194>*/ 	start()
/*<175>*/ 	printf(/* textboxtype: 1, unk: 0, line: 104 */ "You got a <color yellow<<item 78>>coloroff>!\nWhen placed in your pouch, you can use\nthis item to restore <color red<eight hearts>coloroff>.")
          }

          void entrypoint_003_095() {
/*<211>*/ 	start()
/*<576>*/ 	story_flags[729 /* us: 805A9B27 0x02, jp: 805ACDA7 0x02 */] = true;
/*<209>*/ 	check_item_flag(96, 1)
/*<210>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 16}) {
          	  case 0:
/*<212>*/ 		check_item_flag(97, 1)
/*<213>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 18}) {
          		  case 0:
/*<580>*/ 			printf(/* textboxtype: 5, unk: 1, line: 126 */ "You got the <color yellow white<<item 95>>coloroff>! Created\nby the old gods, the Triforce possesses\n<color red<ultimate power>coloroff> and is said to grant the\nwishes of whoever possesses it!")
/*<525>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_533:
/*<533>*/ 			printf(/* textboxtype: 5, unk: 1, line: 126 */ "You got the <color yellow white<<item 95>>coloroff>! Created\nby the old gods, the Triforce possesses\n<color red<ultimate power>coloroff> and is said to grant the\nwishes of whoever possesses it!")
/*<532>*/ 			printf(/* textboxtype: 1, unk: 0, line: 128 */ "Just <color red<one>coloroff> more piece to go!")
/*<570>*/ 			changeScene(3, 1) // 
          		}
          	  case 1:
/*<545>*/ 		check_item_flag(97, 1)
/*<546>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 64}) {
          		  case 0:
          			goto flw_533
          		  case 1:
/*<214>*/ 			printf(/* textboxtype: 5, unk: 1, line: 126 */ "You got the <color yellow white<<item 95>>coloroff>! Created\nby the old gods, the Triforce possesses\n<color red<ultimate power>coloroff> and is said to grant the\nwishes of whoever possesses it!")
/*<531>*/ 			printf(/* textboxtype: 0, unk: 5, line: 127 */ "Just <color red<two>coloroff> more pieces to go!")
/*<571>*/ 			changeScene(3, 1) // 
          		}
          	}
          }

          void entrypoint_003_102() {
/*<232>*/ 	start()
/*<228>*/ 	printf(/* textboxtype: 0, unk: 5, line: 136 */ "You got the <color yellow<<item 102>>coloroff>!\nIf you carry this with you, treasure will\nappear more often. It's the perfect thing\nto take along on a treasure hunt!")
          }

          void entrypoint_003_137() {
/*<304>*/ 	start()
/*<411>*/ 	switch (story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */]) {
          	  case 0:
/*<412>*/ 		printf(/* textboxtype: 0, unk: 5, line: 175 */ "You got your <color yellow<<item 137>>coloroff> back!\nLook around to see if there's something\nin the area you can grab with it.")
/*<431>*/ 		open_item_wheel(5)
/*<413>*/ 		story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */] = false;
          	  case 1:
/*<300>*/ 		printf(/* textboxtype: 5, unk: 1, line: 174 */ "You got the <color yellow<<item 137>>coloroff>! Attached to the end of\nthe whip is a strange, glowing sphere of\nlight that can latch on to various things.\n\nIf you see something you can't reach,\ntarget it with (Z), and snag it with your\nwhip! SNAP!<0x10011:0x07cd>")
/*<432>*/ 		open_item_wheel(5)
          	}
          }

          void entrypoint_003_171() {
/*<356>*/ 	start()
/*<354>*/ 	printf(/* textboxtype: 1, unk: 0, line: 221 */ "You got a <color yellow<<item 171>>coloroff>!\nThis well-crafted horn is made of sturdy\nanimal bone. You might find a use for this\nas a material.")
/*<638>*/ 	open_collection_screen();
          }

          void entrypoint_003_154() {
/*<370>*/ 	start()
/*<369>*/ 	printf(/* textboxtype: 5, unk: 1, line: 204 */ "")
          }

          void entrypoint_003_189() {
/*<469>*/ 	start()
/*<467>*/ 	printf(/* textboxtype: 1, unk: 0, line: 239 */ "")
/*<544>*/ 	story_flags[73 /* us: 805A9AE9 0x40, jp: 805ACD69 0x40 */] = true;
          }

          void entrypoint_003_061() {
/*< 12>*/ 	start()
/*<  8>*/ 	printf(/* textboxtype: 5, unk: 1, line: 84 */ "")
/*<  9>*/ 	give_item(61 0x3D);
          }

          void entrypoint_003_027() {
/*<119>*/ 	start()
/*< 60>*/ 	printf(/* textboxtype: 5, unk: 1, line: 33 */ "You got the <color yellow<<item 27>>coloroff>!\nIt's a squid-shaped statue studded with\nintriguing suction cups.")
          }

          void entrypoint_003_079() {
/*<193>*/ 	start()
/*<174>*/ 	printf(/* textboxtype: 5, unk: 1, line: 105 */ "You got a <color yellow<<item 79>>coloroff>!\nThe <item 78> has been powered up\nand now <color red<restores all of your hearts>coloroff>.")
          }

          void entrypoint_003_096() {
/*<217>*/ 	start()
/*<577>*/ 	story_flags[728 /* us: 805A9B27 0x01, jp: 805ACDA7 0x01 */] = true;
/*<215>*/ 	check_item_flag(95, 1)
/*<216>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 20}) {
          	  case 0:
/*<218>*/ 		check_item_flag(97, 1)
/*<219>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 22}) {
          		  case 0:
/*<581>*/ 			printf(/* textboxtype: 5, unk: 1, line: 129 */ "You got the <color yellow white<<item 96>>coloroff>! Created\nby the old gods, the Triforce possesses\n<color red<ultimate power>coloroff> and is said to grant the\nwishes of whoever possesses it!")
/*<526>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_538:
/*<538>*/ 			printf(/* textboxtype: 5, unk: 1, line: 129 */ "You got the <color yellow white<<item 96>>coloroff>! Created\nby the old gods, the Triforce possesses\n<color red<ultimate power>coloroff> and is said to grant the\nwishes of whoever possesses it!")
/*<535>*/ 			printf(/* textboxtype: 1, unk: 0, line: 128 */ "Just <color red<one>coloroff> more piece to go!")
/*<572>*/ 			changeScene(2, 1) // 
          		}
          	  case 1:
/*<547>*/ 		check_item_flag(97, 1)
/*<548>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 66}) {
          		  case 0:
          			goto flw_538
          		  case 1:
/*<220>*/ 			printf(/* textboxtype: 5, unk: 1, line: 129 */ "You got the <color yellow white<<item 96>>coloroff>! Created\nby the old gods, the Triforce possesses\n<color red<ultimate power>coloroff> and is said to grant the\nwishes of whoever possesses it!")
/*<534>*/ 			printf(/* textboxtype: 0, unk: 5, line: 127 */ "Just <color red<two>coloroff> more pieces to go!")
/*<573>*/ 			changeScene(2, 1) // 
          		}
          	}
          }

          void entrypoint_003_103() {
/*<243>*/ 	start()
/*<239>*/ 	printf(/* textboxtype: 1, unk: 0, line: 137 */ "You got the <color yellow<<item 103>>coloroff>!\nCarry this with you to prolong the effects\nof a potion. If you've got this, remember\nto pack lots of potions!")
          }

          void entrypoint_003_120() {
/*<273>*/ 	start()
/*<558>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<561>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "Your shield has been repaired.\nIt looks good as new!")
          	  case 1:
/*<269>*/ 		printf(/* textboxtype: 5, unk: 1, line: 156 */ "You upgraded to a <color yellow<<item 120>>coloroff>!\nThis heavy shield is even tougher than the\nstandard <item 119>.")
          	}
          }

          void entrypoint_003_138() {
/*<303>*/ 	start()
/*<299>*/ 	printf(/* textboxtype: 1, unk: 0, line: 176 */ "You got the <color yellow<<item 138>>coloroff>!\nWith these, you can stand any heat without\na sweat. This is one of the three sacred\ngifts left by the goddess.")
/*<502>*/ 	story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */] = true;
          }

          void entrypoint_003_172() {
/*<355>*/ 	start()
/*<353>*/ 	printf(/* textboxtype: 5, unk: 1, line: 222 */ "You got an <color yellow<<item 172>>coloroff>!\nThis simple, slightly macabre fashion\nstatement bears the Bokoblin symbol.")
/*<639>*/ 	open_collection_screen();
          }

          void entrypoint_003_155() {
/*<374>*/ 	start()
/*<372>*/ 	printf(/* textboxtype: 0, unk: 5, line: 205 */ "")
          }

          void entrypoint_003_044() {
/*<438>*/ 	start()
/*<440>*/ 	check_item_flag(500, 14)
/*<439>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 48}) {
          	  case 0:
/*<441>*/ 		printf(/* textboxtype: 1, unk: 0, line: 56 */ "You collected every last <color yellow<<item 44>>coloroff>.\n<0x30001:0x><heroname>'s spirit has grown! \n\n\nThe trial will continue until you exit the\nSilent Realm. Proceed with caution on\nyour way back to the entrance so that you\ncan claim proof of your spiritual growth.")
          	  case 1:
/*<437>*/ 		printf(/* textboxtype: 0, unk: 5, line: 55 */ "You got a <color yellow<<item 44>>coloroff>!\nThis object's power halts the movements of\nthe Guardians for just <color red<90 seconds>coloroff>.\nCollect all <color red<15>coloroff> to pass the trial!")
          	}
          }

