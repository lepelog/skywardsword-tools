          void entrypoint_003_062() {
/*< 11>*/ 	start()
/*<  6>*/ 	printf("")
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
/*<151>*/ 					printf("You got the last <y<<item1C>>>!\nNow you can open the temple door.\n\n\nHurry back to the summit and open the\ndoor to the temple so you can continue\nyour search for Zelda, who has been\ntaken into the depths of the temple!")
/*<588>*/ 					story_flags[120 /* us: 805A9AEA 0x20, jp: 805ACD6A 0x20 */] = true;
/*<677>*/ 					story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*<589>*/ 					story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
          				  case 1:
/*< 23>*/ 					printf("You got the fourth <y<<item1C>>>!\nCollect all five pieces to complete the key\nthat opens the temple door. Find that\n<r<last piece>>!")
          				}
          			  case 1:
/*< 26>*/ 				printf("You got the third <y<<item1C>>>!\nCollect all five pieces to complete the key\nthat opens the temple door. Now go find\nthe other <r<two pieces>>!")
          			}
          		  case 1:
/*< 29>*/ 			printf("You got the second <y<<item1C>>>!\nCollect all five pieces to complete the key\nthat opens the temple door. Now you\nhave to find the other <r<three pieces>>!")
          		}
          	  case 1:
/*<150>*/ 		printf("You got the first <y<<item1C>>>! \nFind all five pieces to complete the key\nthat opens the door leading into the\ntemple. Find the other <r<four pieces>>!")
          	}
          }

          void entrypoint_003_010() {
/*<136>*/ 	start()
/*< 77>*/ 	printf("You got a <y<<item0A>>>! Students\nat the Knight Academy practice with these.\nIt looks like it has a fairly sharp blade!\n\nPress (1) at any time to look at the items\nyou're carrying.\x0E\x01\x11\x02\x4CD")
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
/*<582>*/ 			printf("You got the <y+<<item61>>>! Created\nby the old gods, the Triforce possesses\n<r<ultimate power>> and is said to grant the\nwishes of whoever possesses it!")
/*<527>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_539:
/*<539>*/ 			printf("You got the <y+<<item61>>>! Created\nby the old gods, the Triforce possesses\n<r<ultimate power>> and is said to grant the\nwishes of whoever possesses it!")
/*<537>*/ 			printf("Just <r<one>> more piece to go!")
/*<574>*/ 			changeScene(1, 1) // 
          		}
          	  case 1:
/*<549>*/ 		check_item_flag(96, 1)
/*<550>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 68}) {
          		  case 0:
          			goto flw_539
          		  case 1:
/*<226>*/ 			printf("You got the <y+<<item61>>>! Created\nby the old gods, the Triforce possesses\n<r<ultimate power>> and is said to grant the\nwishes of whoever possesses it!")
/*<536>*/ 			printf("Just <r<two>> more pieces to go!")
/*<575>*/ 			changeScene(1, 1) // 
          		}
          	}
          }

          void entrypoint_003_104() {
/*<242>*/ 	start()
/*<238>*/ 	printf("You got the <y<<item68>>>! With\nthis, Rupees and treasure will appear more\noften...but it also carries a curse that\nprevents your pouch from opening! Eeek!")
          }

          void entrypoint_003_121() {
/*<272>*/ 	start()
/*<559>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<563>*/ 		printf("Your shield has been repaired.\nIt looks good as new!")
          	  case 1:
/*<268>*/ 		printf("You upgraded to a <y<<item79>>>!\nSuperstrong metal makes this the toughest\n<item77> around.")
          	}
          }

          void entrypoint_003_139() {
/*<314>*/ 	start()
/*<310>*/ 	printf("")
          }

          void entrypoint_003_173() {
/*<360>*/ 	start()
/*<358>*/ 	printf("You got an <y<<itemAD>>>! \nThis solid chunk of pure, crystallized\nmonster malice is extremely rare!")
/*<640>*/ 	open_collection_screen();
          }

          void entrypoint_003_156() {
/*<373>*/ 	start()
/*<371>*/ 	printf("")
          }

          void entrypoint_003_045() {
/*<448>*/ 	start()
/*<450>*/ 	check_item_flag(500, 14)
/*<449>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 52}) {
          	  case 0:
/*<451>*/ 		printf("You collected every last <y<<item2D>>>.\n\x0E\x03\x01\x00Link's spirit has grown! \n\n\nThe trial will continue until you exit the\nSilent Realm. Proceed with caution on\nyour way back to the entrance so that you\ncan claim proof of your spiritual growth.")
          	  case 1:
/*<447>*/ 		printf("You got a <y<<item2D>>>!\nThis object's power halts the movements of\nthe Guardians for just <r<90 seconds>>.\nCollect all <r<15>> to pass the trial!")
          	}
          }

          void entrypoint_003_190() {
/*<474>*/ 	start()
/*<472>*/ 	printf("")
          }

          void entrypoint_003_063() {
/*< 13>*/ 	start()
/*<  4>*/ 	printf("")
/*<  5>*/ 	give_item(63 0x3F);
          }

          void entrypoint_003_029() {
/*<117>*/ 	start()
/*< 59>*/ 	printf("You got the <y<<item1D>>>!\nThis strangely shaped gold sculpture is\ncovered in mysterious patterns.")
          }

          void entrypoint_003_011() {
/*<135>*/ 	start()
/*<608>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<609>*/ 		printf("You got the <y<<item0B>>>!\nThis mysterious sword is bathed in\ndivine light.\n\nThe memories of violent battles surge\nwithin this sword when you raise it to\nthe sky. <pling>Your <r<Skyward Strike is now\nat maximum strength>>!")
          		flw_462:
/*<462>*/ 		story_flags[3 /* us: 805A9AD9 0x10, jp: 805ACD59 0x10 */] = true;
/*<524>*/ 		changeScene(7, 0) // 
          	  case 1:
/*< 76>*/ 		printf("You got the <y<<item0B>>>!\nThis mysterious sword is bathed in\ndivine light.")
          		goto flw_462
          	}
          }

          void entrypoint_003_080() {
/*<192>*/ 	start()
/*<173>*/ 	printf("")
          }

          void entrypoint_003_098() {
/*<227>*/ 	start()
/*<528>*/ 	printf("You got the <y<<item62>>>!\nThis old map details the area as it was\nlong ago, before the sea succumbed to the\ndesert sand.")
/*<530>*/ 	story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */] = true;
          }

          void entrypoint_003_105() {
/*<241>*/ 	start()
/*<237>*/ 	printf("You upgraded to the mighty <y<<item69>>>!\nYour shots will now pepper a wide range. \nHold (A) to increase your shot power.")
          }

          void entrypoint_003_122() {
/*<271>*/ 	start()
/*<562>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<564>*/ 		printf("Your shield has been repaired.\nIt looks good as new!")
          	  case 1:
/*<671>*/ 		switch (story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */]) {
          		  case 0:
/*<672>*/ 			printf("You got a <y<<item7A>>>! The mystical\npower within this shield allows it to repair\nitself over time. It protects against fire,\nelectric and curse attacks!")
          		  case 1:
/*<673>*/ 			printf("You got a <y<<item7A>>>! The mystical\npower within this shield allows it to <r<repair\nitself>> over time. \n\nThis shield's low durability means it breaks\neasily, but it deflects fire, electric and\ncurse attacks!")
/*<674>*/ 			story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */] = true;
/*<518>*/ 			story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          		}
          	}
          }

          void entrypoint_003_174() {
/*<359>*/ 	start()
/*<357>*/ 	printf("You got a <y<<itemAE>>>!\nVery few small birds possess this sky-blue\nplumage, making these feathers\nextremely rare!")
/*<641>*/ 	open_collection_screen();
          }

          void entrypoint_003_157() {
/*<376>*/ 	start()
/*<375>*/ 	printf("")
          }

          void entrypoint_003_046() {
/*<443>*/ 	start()
/*<445>*/ 	check_item_flag(500, 14)
/*<444>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 50}) {
          	  case 0:
/*<446>*/ 		printf("You collected every last <y<<item2E>>>.\n\x0E\x03\x01\x00Link's spirit has grown! \n\n\nThe trial will continue until you exit the\nSilent Realm. Proceed with caution on\nyour way back to the entrance so that you\ncan claim proof of your personal growth.")
          	  case 1:
/*<442>*/ 		printf("You got a <y<<item2E>>>!\nThis object's power halts the movements of\nthe Guardians for just <r<90 seconds>>.\nCollect all <r<15>> to pass the trial!")
          	}
          }

          void entrypoint_003_191() {
/*<473>*/ 	start()
/*<471>*/ 	printf("")
          }

          void entrypoint_003_064() {
/*< 14>*/ 	start()
/*<  2>*/ 	printf("")
/*<  3>*/ 	give_item(64 0x40);
          }

          void entrypoint_003_047() {
/*<102>*/ 	start()
/*< 44>*/ 	printf("You got a <y<<item2F>>>!\nThis mysterious fruit enables you to\nsee beacons over the positions of\nSacred Tears for <r<30 seconds>>!")
          }

          void entrypoint_003_012() {
/*<134>*/ 	start()
/*< 75>*/ 	printf("")
/*<541>*/ 	story_flags[582 /* us: 805A9B1B 0x20, jp: 805ACD9B 0x20 */] = true;
          }

          void entrypoint_003_081() {
/*<191>*/ 	start()
/*<172>*/ 	printf("You got a <y<<item51>>>! This powerful\nelixir not only <r<restores all of your hearts\n>>but also contains <r<two >>servings in every\nbottle!")
          }

          void entrypoint_003_099() {
/*<235>*/ 	start()
/*<592>*/ 	switch (story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */]) {
          	  case 0:
/*<593>*/ 		printf("You got your <y<<item63> >>back!\nUse them to plan an escape that even\na Mogma would be proud of.")
/*<594>*/ 		story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */] = false;
          	  case 1:
/*<231>*/ 		printf("You got the <y<<item63>>>! Even the\nMogma don't see <item38> this fancy\nvery often!\n\nThey don't just dig holes; <g<they also let you\nburrow your way under the ground>>. Try to\nfind holes that you can dig down into!")
          	}
          }

          void entrypoint_003_106() {
/*<240>*/ 	start()
/*<236>*/ 	printf("")
          }

          void entrypoint_003_123() {
/*<282>*/ 	start()
/*<565>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<567>*/ 		printf("Your shield has been repaired.\nIt looks good as new!")
          	  case 1:
/*<278>*/ 		printf("You upgraded to a <y<<item7B>>>!\nThis mystical shield can repair itself over\ntime. It's also more durable.")
          	}
          }

          void entrypoint_003_140() {
/*<313>*/ 	start()
/*<309>*/ 	printf("You upgraded to the <y<<item8C>>>!\nIt's now double its original size, making it\neasier to catch even the most nimble bugs!")
          }

          void entrypoint_003_175() {
/*<368>*/ 	start()
/*<366>*/ 	printf("You got a <y<<itemAF>>>!\nA real rarity among skull ornaments,\nit shines with an eerie, golden color.")
/*<642>*/ 	open_collection_screen();
          }

          void entrypoint_003_158() {
/*<378>*/ 	start()
/*<377>*/ 	printf("You received <y<<item9E>>>!\nCan you believe this letter might actually\ncontain heartfelt words from Cawlin?\n\nTake extra care that you don't end\nup using it as scrap paper!")
          }

          void entrypoint_003_192() {
/*<476>*/ 	start()
/*<475>*/ 	printf("")
          }

          void entrypoint_003_065() {
/*< 15>*/ 	start()
/*<  1>*/ 	printf("You got a <y<<item41>>>! This\nmysterious potion halves any damage\nyou receive! The effect lasts for <r<three\nminutes>>.")
          }

          void entrypoint_003_048() {
/*<101>*/ 	start()
/*< 43>*/ 	printf("You got <r<one>> <y<<item30>>>! These\nform when a person is so completely\noverwhelmed with feelings of thankfulness\nthat crystallized gratitude is created.\nCollect these and show them to<b< Batreaux>>!")
/*<645>*/ 	open_collection_screen();
          }

          void entrypoint_003_030() {
/*<116>*/ 	start()
/*< 58>*/ 	printf("You got the <y<<item1E>>>!\nIt is a carving of a coiled dragon made\nout of dazzling gold.")
          }

          void entrypoint_003_013() {
/*<133>*/ 	start()
/*<404>*/ 	switch (story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */]) {
          	  case 0:
/*<436>*/ 		story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */] = false;
/*<504>*/ 		printf("You got the <y<<item0E>>> back!\nNow you can cut right through your\ntroubles like before! You can also talk to\n<pling><b<Fi>> again.")
/*<587>*/ 		scene_flags[5 'Eldin Volcano Summit'][44 /* 0x4 10 */] = true;
          	  case 1:
/*< 74>*/ 		printf("")
          	}
          }

          void entrypoint_003_082() {
/*<190>*/ 	start()
/*<171>*/ 	printf("")
          }

          void entrypoint_003_107() {
/*<251>*/ 	start()
/*<247>*/ 	printf("")
          }

          void entrypoint_003_124() {
/*<281>*/ 	start()
/*<566>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<568>*/ 		printf("Your shield has been repaired.\nIt looks good as new!")
          	  case 1:
/*<277>*/ 		printf("You upgraded to a <y<<item7C>>>!\nThis shield repairs itself with sacred\npower, and it's even more durable than\nother versions of the shield.")
          	}
          }

          void entrypoint_003_141() {
/*<312>*/ 	start()
/*<647>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<648>*/ 		printf("You got <numeric arg0> <y<\x0E\x03\x04\x02\x3CD>>!\nIt's said that these bugs reproduce in\nmassive numbers once every 10 years,\neating every plant in sight.")
          		flw_616:
/*<616>*/ 		open_collection_screen();
          	  case 1:
/*<308>*/ 		printf("You caught <numeric arg0> <y<\x0E\x03\x04\x02\x3CD>>!\nIt's said that these bugs reproduce in\nmassive numbers once every 10 years,\neating every plant in sight.")
          		goto flw_616
          	}
          }

          void entrypoint_003_176() {
/*<367>*/ 	start()
/*<365>*/ 	printf("You got a <y<<itemB0>>>!\nRumors say this item was dropped by\nthe goddess in a long-forgotten era. It's a\nlegendary treasure few will ever behold!")
/*<643>*/ 	open_collection_screen();
          }

          void entrypoint_003_159() {
/*<382>*/ 	start()
/*<380>*/ 	printf("You got <y<<item9F>>>!\nIt contains Beedle's beloved insect pal.\nHurry back to Beedle with it!")
          }

          void entrypoint_003_193() {
/*<478>*/ 	start()
/*<477>*/ 	printf("")
          }

          void entrypoint_003_200() {
/*<498>*/ 	start()
/*<496>*/ 	printf("")
          }

          void entrypoint_003_066() {
/*< 10>*/ 	start()
          	printf("You got a <y<<item42>>>!\nThis mighty potion prevents you from\nsustaining any damage for <r<three minutes>>!")
          }

          void entrypoint_003_049() {
/*<100>*/ 	start()
/*<405>*/ 	switch (story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */]) {
          	  case 0:
/*<406>*/ 		printf("You got your <y<<item31>>> back!\nThe power to blast a powerful gust of\nair at anything you choose is yours\nonce again!")
/*<427>*/ 		open_item_wheel(4)
/*<428>*/ 		story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */] = false;
          	  case 1:
/*< 42>*/ 		printf("You got the <y<<item31>>>!\nIt is an ancient and mystical device capable\nof blowing an endless gust of wind.\n\nIf you feel the controls are <r<out of\nalignment >>when you are using this item,\npress (v) to center them again.\x0E\x01\x11\x02\x9CD")
/*<407>*/ 		open_item_wheel(4)
          	}
          }

          void entrypoint_003_031() {
/*<115>*/ 	start()
/*< 57>*/ 	printf("You got the <y<<item1F>>>!\nIt is made of shining gold. It also looks like\nit may be a part from...something.\nThe surface is inlaid with circuitry.")
          }

          void entrypoint_003_014() {
/*<132>*/ 	start()
/*< 73>*/ 	printf("")
          }

          void entrypoint_003_083() {
/*<189>*/ 	start()
/*<170>*/ 	printf("")
          }

          void entrypoint_003_108() {
/*<250>*/ 	start()
/*<246>*/ 	printf("You got the <y<<item6C>>>! The hefty\ncapacity of this wallet allows you to store\nup to <r<500 Rupees >>in it!")
          }

          void entrypoint_003_125() {
/*<280>*/ 	start()
/*<276>*/ 	printf("You got the <y<<item7D>>>!\nThis legendary shield is imbued with\nheroic power, making it completely\nindestructible!")
/*<519>*/ 	story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          }

          void entrypoint_003_142() {
/*<311>*/ 	start()
/*<649>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<650>*/ 		printf("You got <numeric arg0> <y<\x0E\x03\x04\x02\x4CD>>!\nCollectors often polish the hard carapaces\nof these beetles to make them tougher.\nIt's the strongest of all the insects.")
          		flw_617:
/*<617>*/ 		open_collection_screen();
          	  case 1:
/*<307>*/ 		printf("You caught <numeric arg0> <y<\x0E\x03\x04\x02\x4CD>>!\nCollectors often polish the hard carapaces\nof these beetles to make them tougher.\nIt's the strongest of all the insects.")
          		goto flw_617
          	}
          }

          void entrypoint_003_177() {
/*<387>*/ 	start()
/*<385>*/ 	printf("")
          }

          void entrypoint_003_194() {
/*<489>*/ 	start()
/*<487>*/ 	printf("You got a <y<<itemC2>>>! This\npotion will <r<automatically >>restore your\nshield when it breaks and replenishes\n<r<eight>> hearts. Plus, you can use it twice!")
          }

          void entrypoint_003_067() {
/*< 90>*/ 	start()
/*< 33>*/ 	printf("")
          }

          void entrypoint_003_032() {
/*<114>*/ 	start()
/*< 56>*/ 	printf("You got a <s<<item20>>>! It's worth a\nwhopping <r<100 Rupees>>! You must feel\nlike a celebrity.")
          }

          void entrypoint_003_015() {
/*<131>*/ 	start()
/*< 72>*/ 	printf("")
          }

          void entrypoint_003_084() {
/*<188>*/ 	start()
/*<169>*/ 	printf("You got a <y<<item54>>>!\nDrink it to make your stamina gauge\ndeplete at a slower rate! One bottle is\neffective for <r<three minutes>>.")
          }

          void entrypoint_003_109() {
/*<249>*/ 	start()
/*<245>*/ 	printf("You got a <y<<item6D>>>! You can carry up to\n<r<1,000 Rupees>> in this massive wallet.")
          }

          void entrypoint_003_126() {
/*<279>*/ 	start()
/*<275>*/ 	printf("You got some <y<<item7E>>>! \nThis potion <r<fully replenishes>> your shield \ngauge and also restores <r<four>> hearts! ")
          }

          void entrypoint_003_143() {
/*<318>*/ 	start()
/*<651>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<652>*/ 		printf("You got <numeric arg0> <y<\x0E\x03\x04\x02\x5CD>>! The venom\nof these insects can be heated to infuse a\npotent medicine. Just be careful not to get\nattacked by an angry swarm!")
          		flw_618:
/*<618>*/ 		open_collection_screen();
          	  case 1:
/*<316>*/ 		printf("You caught <numeric arg0> <y<\x0E\x03\x04\x02\x5CD>>! The venom\nof these insects can be heated to infuse a\npotent medicine. Just be careful not to get\nattacked by an angry swarm!")
          		goto flw_618
          	}
          }

          void entrypoint_003_160() {
/*<381>*/ 	start()
/*<379>*/ 	printf("You got a <y<<itemA0>>>!\nIt's a baby's toy. Perhaps somebody\ndropped it?")
          }

          void entrypoint_003_178() {
/*<386>*/ 	start()
/*<384>*/ 	printf("")
          }

          void entrypoint_003_195() {
/*<488>*/ 	start()
/*<486>*/ 	printf("You got some <y<<itemC3>>>!\nThis homemade soup is Pumm's specialty,\nbut watch out! It'll get cold in<r< five minutes>>!")
          }

          void entrypoint_003_068() {
/*< 89>*/ 	start()
/*< 32>*/ 	printf("You got the <y<<item44>>>! \nThis sacred gift left by the goddess grants\nyou the power to explore underwater and\neven execute a spin maneuver!")
/*<500>*/ 	story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */] = true;
          }

          void entrypoint_003_050() {
/*< 99>*/ 	start()
/*< 41>*/ 	printf("You got the <y<<item32>>>!\nIt shows the layout of the area and reveals\nunexplored rooms.")
/*<509>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1, 'next': 508, 'param3': 30}
/*<508>*/ 	switch (story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */]) {
          	  case 0:
/*<613>*/ 		story_flags[850 /* us: 805A9B34 0x01, jp: 805ACDB4 0x01 */] = true;
/*<510>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': -1, 'param3': 34}
          	  case 1:
/*<513>*/ 		printf("It also reveals the locations of treasure\nchests, so be sure to take a look!")
/*<512>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 511, 'param3': 34}
/*<511>*/ 		story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */] = true;
          	}
          }

          void entrypoint_003_033() {
/*<113>*/ 	start()
/*< 55>*/ 	printf("You got a <y+<<item21>>>! It's worth a\nstaggering <r<300 Rupees>>! Shhh...\nDon't tell anyone!")
          }

          void entrypoint_003_016() {
/*<130>*/ 	start()
/*< 71>*/ 	printf("")
          }

          void entrypoint_003_085() {
/*<187>*/ 	start()
/*<168>*/ 	printf("You got a <y<<item55>>>!\nThis miraculous brew prevents your \nstamina gauge from depleting at all\nfor <r<three minutes>>!")
          }

          void entrypoint_003_127() {
/*<290>*/ 	start()
/*<286>*/ 	printf("You got some <y<<item7F>>>!\nThis powerful elixir <r<automatically>>\nrestores your shield when it breaks\nand also replenishes <r<eight>> hearts!")
          }

          void entrypoint_003_144() {
/*<317>*/ 	start()
/*<653>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<654>*/ 		printf("You got <numeric arg0> <y<\x0E\x03\x04\x02\x6CD>>!\nThese bugs catch prey with their sharp\njaws. They are often seen up above the\nclouds.")
          		flw_619:
/*<619>*/ 		open_collection_screen();
          	  case 1:
/*<315>*/ 		printf("You caught <numeric arg0> <y<\x0E\x03\x04\x02\x6CD>>!\nThese bugs catch prey with their sharp\njaws. They are often seen up above the\nclouds.")
          		goto flw_619
          	}
          }

          void entrypoint_003_161() {
/*<340>*/ 	start()
/*<338>*/ 	printf("You got <y<<itemA1>>>! They're a precious\nsource of protein that comes from a Deku\nHornet's hive. This material might be good\nfor making something.")
/*<628>*/ 	open_collection_screen();
          }

          void entrypoint_003_179() {
/*<391>*/ 	start()
/*<389>*/ 	printf("")
          }

          void entrypoint_003_196() {
/*<493>*/ 	start()
/*<491>*/ 	printf("")
          }

          void entrypoint_003_069() {
/*< 88>*/ 	start()
/*< 31>*/ 	printf("")
          }

          void entrypoint_003_051() {
/*< 98>*/ 	start()
/*< 40>*/ 	printf("")
          }

          void entrypoint_003_034() {
/*<112>*/ 	start()
/*< 54>*/ 	printf("You picked up a <black<<item22>>>!\nThat means you've lost <r<10 Rupees>>.\nAnd that's a little bit sad.")
          }

          void entrypoint_003_017() {
/*<129>*/ 	start()
/*< 70>*/ 	printf("You got the <y<<item11>>>!\nThis mysterious plant represents your\nspirit, Link.")
          }

          void entrypoint_003_086() {
/*<186>*/ 	start()
/*<167>*/ 	printf("You got an <y<<item56>>>! Drink\nthis to make your oxygen gauge deplete at\na slower rate. One bottle is effective for\n<r<three minutes>>.")
          }

          void entrypoint_003_110() {
/*<248>*/ 	start()
/*<244>*/ 	printf("You got the <y<<item6E>>>!\nThe voluminous capacity of this wallet\nallows you to store a whopping\n<r<5,000 Rupees >>in it!")
          }

          void entrypoint_003_128() {
/*<289>*/ 	start()
/*<285>*/ 	printf("You got a <y<<item80>>>!\nWith this, you can carry 10 extra\n<item39>. Keep it with you\nwhen you use your <item34>!")
          }

          void entrypoint_003_145() {
/*<322>*/ 	start()
/*<655>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<656>*/ 		printf("You got <numeric arg0> <y<\x0E\x03\x04\x02\x7CD>>! They\nsay these bugs get their deep-red hue from\nthe ore they eat. They are slow moving\nand tend to stay in one place.")
          		flw_620:
/*<620>*/ 		open_collection_screen();
          	  case 1:
/*<320>*/ 		printf("You caught <numeric arg0> <y<\x0E\x03\x04\x02\x7CD>>! They\nsay these bugs get their deep-red hue from\nthe ore they eat. They are slow moving\nand tend to stay in one place.")
          		goto flw_620
          	}
          }

          void entrypoint_003_162() {
/*<339>*/ 	start()
/*<337>*/ 	printf("You got <numeric arg0> <y<\x0E\x03\x04\x02\xFCD>>! These highly\nprized feathers come from birds foreign to\nSkyloft and can serve as a useful material.")
/*<629>*/ 	open_collection_screen();
          }

          void entrypoint_003_197() {
/*<492>*/ 	start()
/*<585>*/ 	switch (story_flags[750 /* us: 805A9B29 0x40, jp: 805ACDA9 0x40 */]) {
          	  case 0:
/*<586>*/ 		printf("You took back the <y<<itemC5>>>!\nIt would take too long to grow if\nyou planted it here. Maybe you\nshould find another place for it...")
          	  case 1:
/*<490>*/ 		printf("You got the <y<<itemC5>>>!\nIt is a very young form of a legendary tree\nwhose fruit is said to cure any illness.")
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
/*<599>*/ 			printf("You got your <y<<item69>>><y< >>back!\nUse it to stun enemies on patrol.")
          			flw_433:
/*<433>*/ 			open_item_wheel(0)
/*<417>*/ 			story_flags[164 /* us: 805A9AE3 0x08, jp: 805ACD63 0x08 */] = false;
          		  case 1:
/*<416>*/ 			printf("You got your <y<<item34> >>back!\nUse it to stun enemies on patrol.")
          			goto flw_433
          		}
          	  case 1:
/*< 39>*/ 		printf("You got the <y<<item34>>>! Use this projectile-\nshooting weapon to fling <item39> at\nyour foes! The hard seeds will stun your\nenemies.\nYou can press (v) anytime you want to\n<r<center the cursor>>.\x0E\x01\x11\x02\x9CD")
/*<153>*/ 		add_to_counter(493, 20)
/*<521>*/ 		open_item_wheel(0)
/*<520>*/ 		story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */] = true;
/*<522>*/ 		story_flags[569 /* us: 805A9B18 0x01, jp: 805ACD98 0x01 */] = true;
          	}
          }

          void entrypoint_003_035() {
/*<111>*/ 	start()
/*< 53>*/ 	printf("You got <r<five>> <y<<item30>>><y<s>>!\nThese crystals are feelings of gratitude\nin crystallized form.\n\nIt must have taken a lot of gratitude to\nproduce this bunch of <r<five crystals>>!\nHelping people feels good!")
/*<646>*/ 	open_collection_screen();
          }

          void entrypoint_003_018() {
/*<128>*/ 	start()
/*< 69>*/ 	printf("")
          }

          void entrypoint_003_000() {
/*<146>*/ 	start()
/*<595>*/ 	switch (story_flags[817 /* us: 805A9B30 0x02, jp: 805ACDB0 0x02 */]) {
          	  case 0:
/*< 87>*/ 		printf("There's nothing useful in here!")
          	  case 1:
/*<596>*/ 		printf("You really shouldn't open other people's\ncupboards without permission...")
          	}
          }

          void entrypoint_003_087() {
/*<185>*/ 	start()
/*<166>*/ 	printf("You got an <y<<item57>>>!\nThis wonder potion keeps the oxygen gauge\nfrom depleting at all for three<r< minutes>>!")
          }

          void entrypoint_003_111() {
/*<259>*/ 	start()
/*<255>*/ 	printf("You got the <y<<item6F>>>!\nNo wallet can match the cavernous\ncapacity and luxurious quality of this one!\nIt can store a jaw-dropping <r<9,000 Rupees>>!")
          }

          void entrypoint_003_129() {
/*<288>*/ 	start()
/*<284>*/ 	printf("You upgraded to a <y<<item81>>>!\nNow it carries up to <r<20>> additional\n<item39>! Keep it with you\nwhen you use your <item34>!")
          }

          void entrypoint_003_146() {
/*<321>*/ 	start()
/*<657>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<658>*/ 		printf("You got <numeric arg0> <y<\x0E\x03\x04\x02\x8CD>>! These\ninsects are commonly found in every\nprovince. In rare cases, you can find\nthem flying in strange locations.")
          		flw_621:
/*<621>*/ 		open_collection_screen();
          	  case 1:
/*<319>*/ 		printf("You caught <numeric arg0> <y<\x0E\x03\x04\x02\x8CD>>! These\ninsects are commonly found in every\nprovince. In rare cases, you can find\nthem flying in strange locations.")
          		goto flw_621
          	}
          }

          void entrypoint_003_163() {
/*<344>*/ 	start()
/*<342>*/ 	printf("You got a <y<<itemA3>>>!\nThis dried mass of plant material could\ncome in handy. Might as well take it\nwith you.")
/*<630>*/ 	open_collection_screen();
          }

          void entrypoint_003_180() {
/*<390>*/ 	start()
/*<388>*/ 	printf("You got the <y<<itemB4>>>!\nThis engraved object was created to lead\nthe chosen hero to the hidden location\nof the Triforce!")
/*<523>*/ 	story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */] = true;
          }

          void entrypoint_003_198() {
/*<495>*/ 	start()
/*<494>*/ 	printf("You got the <y<<itemC6>>>! Eating this\nsucculent fruit of legend cures any illness.\nTake it to the Thunder Dragon!")
          }

          void entrypoint_003_999() {
/*<611>*/ 	start()
/*<610>*/ 	printf("You got the <y<<item4B>>>!\nThe big pincers enable you to pick up and\ncarry things with it!\n\nYou can also press (Z) while carrying an\nobject to look down and drop your cargo.\nBombs away!\x0E\x01\x11\x02\x7CD")
          }

          void entrypoint_003_053() {
/*< 96>*/ 	start()
/*< 38>*/ 	printf("You got the <y<<item35>>>! The unexplained power\ncontained within this insect-shaped item\nallows you to control it as it flies through\nthe air!\nPoint the Wii Remote <r<at the screen >>and\npress (A) to launch it into the air!\n\n\nIf the controls feel <r<out of alignment>>,\npress (v) while pointing the Wii Remote\nat the center of the screen.\x0E\x01\x11\x02\x9CD")
/*<422>*/ 	open_item_wheel(1)
          }

          void entrypoint_003_036() {
/*<110>*/ 	start()
/*< 52>*/ 	printf("You got some <y<<item24>>>!\nThis is a powder that is released by\nglowing mushrooms.")
          }

          void entrypoint_003_019() {
/*<127>*/ 	start()
/*< 68>*/ 	printf("You got the <y<<item13>>>! Now you can hit targets\nat a very long range. Arrows also do a lot\nmore damage than Deku Seeds.\n\nPress (v) to center your aim anytime you\nfeel the aiming controls are <r<out of\nalignment>>.\x0E\x01\x11\x02\x9CD")
/*<679>*/ 	story_flags[1114 /* us: 805A9B57 0x01, jp: 805ACDD7 0x01 */] = true;
/*<152>*/ 	add_to_counter(498, 20)
/*<421>*/ 	open_item_wheel(7)
          }

          void entrypoint_003_001() {
/*<145>*/ 	start()
/*< 86>*/ 	printf("You got a <y<<item01>>>! \nThis key will open a locked door. You can\nonly use it in this area.")
          }

          void entrypoint_003_070() {
/*<147>*/ 	start()
/*< 30>*/ 	printf("You got a <y<<item46>>>!\nAreas with insects will now be marked with\n\x0E\x02\x04\x02\x1ACD on your map! You can open your map \nto see where the bugs like to hang out.")
          }

          void entrypoint_003_088() {
/*<184>*/ 	start()
/*<165>*/ 	printf("You caught a <y<<item48>>>! This playful sprite\nreplenishes <r<six>> of your hearts!\n\n\nIf you put it in a bottle and keep it with\nyou, it will come to your aid <r<automatically\n>>if you <r<run out of hearts>>.")
          }

          void entrypoint_003_112() {
/*<258>*/ 	start()
/*<418>*/ 	switch (story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */]) {
          	  case 0:
/*<419>*/ 		printf("You got your <y<<item70> >>back!\nAnd look! The rest of your items are\nhere too!")
/*<435>*/ 		open_item_wheel(8)
/*<420>*/ 		story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */] = false;
          	  case 1:
/*<254>*/ 		printf("You got the <y<<item70>>>!\nYou can store all kinds of useful items in\nthis handy piece of gear.")
/*<603>*/ 		open_adventure_pouch(0)
          	}
          }

          void entrypoint_003_147() {
/*<326>*/ 	start()
/*<659>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<660>*/ 		printf("You got <numeric arg0> <y<\x0E\x03\x04\x02\x9CD>>! It's said\nthese ants store water deep in their nests,\nallowing them to thrive even in the intense\nheat of the open desert.")
          		flw_622:
/*<622>*/ 		open_collection_screen();
          	  case 1:
/*<324>*/ 		printf("You caught <numeric arg0> <y<\x0E\x03\x04\x02\x9CD>>! It's said\nthese ants store water deep in their nests,\nallowing them to thrive even in the intense\nheat of the open desert.")
          		goto flw_622
          	}
          }

          void entrypoint_003_164() {
/*<343>*/ 	start()
/*<341>*/ 	printf("You got a <y<<itemA4>>>! It's the tail of a\nlarge lizard with a spiked ball on the end.\nSure, it's a little gross, but you never know\nwhen you might need one.")
/*<631>*/ 	open_collection_screen();
          }

          void entrypoint_003_181() {
/*<395>*/ 	start()
/*<393>*/ 	printf("")
          }

          void entrypoint_003_199() {
/*<499>*/ 	start()
/*<497>*/ 	printf("You got the <y<<itemC7>>>! Your wallet can\nnow hold an additional 300 Rupees!")
/*<644>*/ 	open_collection_screen();
          }

          void entrypoint_003_071() {
/*< 20>*/ 	start()
/*< 18>*/ 	printf("You got the <y<<item47>>>!\nUse it to catch bugs and other small things.\nWhen you're hunting bugs, remember to\napproach quietly and strike quickly!")
/*<423>*/ 	open_item_wheel(2)
/*<612>*/ 	story_flags[849 /* us: 805A9B35 0x80, jp: 805ACDB5 0x80 */] = true;
          }

          void entrypoint_003_054() {
/*< 95>*/ 	start()
/*< 37>*/ 	printf("You got some <y<<item36>>>! It's just normal\nwater, but it might come in handy\nsometime.")
          }

          void entrypoint_003_037() {
/*<109>*/ 	start()
/*< 51>*/ 	printf("")
          }

          void entrypoint_003_002() {
/*<144>*/ 	start()
/*< 85>*/ 	printf("You got a <g+<<item02>>>! It's worth just\n<r<1 Rupee>>, so collect lots of them!")
          }

          void entrypoint_003_089() {
/*<183>*/ 	start()
/*<164>*/ 	printf("")
          }

          void entrypoint_003_113() {
/*<257>*/ 	start()
/*<253>*/ 	printf("You made your <y<<item70>\n>>bigger! You can now fit an additional\nitem inside.")
/*<604>*/ 	open_adventure_pouch(1)
          }

          void entrypoint_003_130() {
/*<287>*/ 	start()
/*<283>*/ 	printf("You upgraded to a <y<<item82>>>!\nNow it carries up to <r<30>> additional\n<item39>! Keep it with you\nwhen you use your <item34>!")
          }

          void entrypoint_003_148() {
/*<325>*/ 	start()
/*<661>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<662>*/ 		printf("You got <numeric arg0> <y<\x0E\x03\x04\x02\xACD>>! The larvae of\nthese bugs stay underground for 10 years\nor longer. No bug is harder to catch!")
          		flw_623:
/*<623>*/ 		open_collection_screen();
          	  case 1:
/*<323>*/ 		printf("You caught <numeric arg0> <y<\x0E\x03\x04\x02\xACD>>! The larvae of\nthese bugs stay underground for 10 years\nor longer. No bug is harder to catch!")
          		goto flw_623
          	}
          }

          void entrypoint_003_165() {
/*<348>*/ 	start()
/*<346>*/ 	printf("You got some <y<<itemA5>>>!\nThis hard concretion sparkles brightly. \nIt also has lots of different uses.")
/*<632>*/ 	open_collection_screen();
          }

          void entrypoint_003_182() {
/*<394>*/ 	start()
/*<392>*/ 	printf("")
          }

          void entrypoint_003_072() {
/*< 19>*/ 	start()
/*<506>*/ 	switch (has_empty_bottle()) {
          	  case 0:
/*<507>*/ 		printf("You found a <y<<item48>>>!\nThis playful sprite replenishes\n<r<six>> of your hearts!\n\nYou don't have an <y<<item99>>>,\nhowever, so you'll have to let this one\nfly off.")
          	  case 1:
/*<505>*/ 		printf("You found a <y<<item48>>>!\nThis playful sprite replenishes\n<r<six>> of your hearts!")
          	}
          }

          void entrypoint_003_055() {
/*< 94>*/ 	start()
/*<614>*/ 	switch (story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */]) {
          	  case 0:
/*<615>*/ 		printf("You got some <y<<item37>>>! These\nspores from a giant mushroom are said to\nwork wonders on injured birds.")
          	  case 1:
/*< 36>*/ 		printf("You got some <y<<item37>>>!\nThese spores are from a giant mushroom.")
          	}
          }

          void entrypoint_003_038() {
/*<108>*/ 	start()
/*< 50>*/ 	printf("")
          }

          void entrypoint_003_020() {
/*<126>*/ 	start()
/*<408>*/ 	switch (story_flags[162 /* us: 805A9AE3 0x02, jp: 805ACD63 0x02 */]) {
          	  case 0:
/*<409>*/ 		printf("You got your <y<<item14>>> back!\nNow you can reach faraway spots again.")
/*<429>*/ 		open_item_wheel(6)
/*<430>*/ 		story_flags[162 /* us: 805A9AE3 0x02, jp: 805ACD63 0x02 */] = false;
          	  case 1:
/*< 67>*/ 		printf("You got the <y<<item14>>>! With this sacred\ngift, you will be able to explore areas\nthat were previously unreachable!\n\nAim for special <r<targets>> and <r<vines>>, then fire\na claw on a chain that pulls you to the\nplace you have targeted!\n\nPress (v) to center your aim anytime you\nfeel the aiming controls are <r<out of\nalignment>>.\x0E\x01\x11\x02\x9CD")
/*<501>*/ 		story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */] = true;
/*<410>*/ 		open_item_wheel(6)
          	}
          }

          void entrypoint_003_003() {
/*<143>*/ 	start()
/*<591>*/ 	switch (story_flags[817 /* us: 805A9B30 0x02, jp: 805ACDB0 0x02 */]) {
          	  case 0:
/*<590>*/ 		printf("You got a <b+<<item03>>>! It's worth <r<5 Rupees>>.\nBetter drop it in your wallet for now.")
          	  case 1:
/*< 84>*/ 		printf("You got a <b+<<item03>>>! It's worth <r<5 >><r<Rupees>>.\nLucky find!")
          	}
          }

          void entrypoint_003_114() {
/*<256>*/ 	start()
/*<252>*/ 	printf("You got the <y<<item72>>>!\nYour maximum number of hearts is\nincreased by <r<one >>as long as you carry\nthis with you.\nYou can always keep it with you at times\nwhen you think you'll need it most.")
          }

          void entrypoint_003_131() {
/*<298>*/ 	start()
/*<294>*/ 	printf("You got the <y<<item83>>>!\nNow you can carry <r<5>> extra arrows. Carry it\nwith you when you're using the bow.")
          }

          void entrypoint_003_149() {
/*<330>*/ 	start()
/*<663>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<664>*/ 		printf("You got <numeric arg0> <y<\x0E\x03\x04\x02\xBCD>>!\nThese stunning insects have compound eyes\nmore beautiful than Rupees and wings as\ntransparent as glass!")
          		flw_624:
/*<624>*/ 		open_collection_screen();
          	  case 1:
/*<328>*/ 		printf("You caught <numeric arg0> <y<\x0E\x03\x04\x02\xBCD>>!\nThese stunning insects have compound eyes\nmore beautiful than Rupees and wings as\ntransparent as glass!")
          		goto flw_624
          	}
          }

          void entrypoint_003_166() {
/*<347>*/ 	start()
/*<345>*/ 	printf("You got an <y<<itemA6>>>!\nLegends say this beautiful flower\nflourished in the ancient past.\nSupposedly it glows in the dark...")
/*<633>*/ 	open_collection_screen();
          }

          void entrypoint_003_183() {
/*<482>*/ 	start()
/*<480>*/ 	printf("")
          }

          void entrypoint_003_056() {
/*< 93>*/ 	start()
/*< 35>*/ 	printf("You got the <y<<item38>>>! Use these sharp\nclaws to dig through patches of soft earth.\n\n\nBe sure to try digging with (A) anywhere\nyou see signs that something has been\nburied in soft ground.")
          }

          void entrypoint_003_039() {
/*<107>*/ 	start()
/*< 49>*/ 	printf("")
          }

          void entrypoint_003_021() {
/*<125>*/ 	start()
/*< 66>*/ 	printf("You got the <y<<item15>>>!\nIt proves your victory today.\nWait till Zelda sees this!")
/*<584>*/ 	changeScene(3, 0) // 
          }

          void entrypoint_003_004() {
/*<142>*/ 	start()
/*< 83>*/ 	printf("You got a <r+<<item04>>>! It's worth <r<20 Rupees>>.\nDon't spend it all in one place!")
          }

          void entrypoint_003_073() {
/*<154>*/ 	start()
/*< 17>*/ 	printf("")
          }

          void entrypoint_003_090() {
/*<182>*/ 	start()
/*<163>*/ 	printf("You upgraded to the <y<<item5A>>>!\nCrafted for the expert bowman, this bow\nhas enhanced attack power and can launch\narrows even farther!")
          }

          void entrypoint_003_115() {
/*<267>*/ 	start()
/*<263>*/ 	printf("")
          }

          void entrypoint_003_132() {
/*<297>*/ 	start()
/*<293>*/ 	printf("You upgraded to the <y<<item84>>>!\nWith this, you can carry <r<10>> extra arrows.\nCarry it with you when you're using\nthe bow.")
          }

          void entrypoint_003_167() {
/*<362>*/ 	start()
/*<361>*/ 	printf("You got an <y<<itemA7>>>! These amber-\ncolored chunks of precious stone are\nfound everywhere. No one knows where\ntheir strange shape comes from.")
/*<634>*/ 	open_collection_screen();
          }

          void entrypoint_003_184() {
/*<481>*/ 	start()
/*<479>*/ 	printf("")
          }

          void entrypoint_003_057() {
/*< 92>*/ 	start()
/*<396>*/ 	check_item_flag(52, 1)
/*<397>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 28}) {
          	  case 0:
/*< 16>*/ 		printf("You got <y<5 >><y<<item39>>>! These small seeds\nserve as ammunition for your <item34>.\nMake sure you've always got a few handy!")
          	  case 1:
/*<398>*/ 		printf("")
/*<503>*/ 		add_to_counter(493, -5)
          	}
          }

          void entrypoint_003_022() {
/*<124>*/ 	start()
/*< 65>*/ 	printf("")
          }

          void entrypoint_003_005() {
/*<141>*/ 	start()
/*< 82>*/ 	printf("The <y+<<item05> >>is complete! With its power,\nyou have the ability to make Zelda's wish of\n<r<vanquishing >><b<Demise>> a reality.")
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
/*<156>*/ 		printf("You got <y<<item4A>>>! It may\nlook like ordinary water, but this pure\nwater contains a powerful energy.")
          	  case 1:
/*<514>*/ 		switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          		  case 0:
/*<515>*/ 			printf("You got some <y<<item4A>>>!\nThis pure water can heal the wounds of the\nWater Dragon. It has mystical properties\nthat cannot be found in ordinary water.")
/*<601>*/ 			scene_flags[11 'Faron: Skyview Temple'][98 /* 0xD 04 */] = false;
/*<602>*/ 			scene_flags[11 'Faron: Skyview Temple'][97 /* 0xD 02 */] = false;
          		  case 1:
          			goto flw_156
          		}
          	}
          }

          void entrypoint_003_091() {
/*<181>*/ 	start()
/*<162>*/ 	printf("You have upgraded to the <y<<item5B>>>!\nIt uses a sacred power of the goddess to\nrain a terrible force upon your enemies.")
          }

          void entrypoint_003_116() {
/*<266>*/ 	start()
/*<551>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<552>*/ 		printf("Your shield has been repaired.\nIt looks good as new!")
          	  case 1:
/*<262>*/ 		printf("You got a <y<<item74>>>!\nThis light wooden shield breaks easily and\ncan burn, so be careful how you use it.")
/*<516>*/ 		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          	}
          }

          void entrypoint_003_133() {
/*<296>*/ 	start()
/*<292>*/ 	printf("You've upgraded to the <y<<item85>>>!\nIt holds <r<15>> extra arrows. Carry it with \nyou when you're using the bow.")
          }

          void entrypoint_003_150() {
/*<329>*/ 	start()
/*<665>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<666>*/ 		printf("You got <numeric arg0> <y<\x0E\x03\x04\x02\xCCD>>! These small-\nbodied bugs roll a big ball of...something.\nThe way they busily roll stuff back to their\nnest is quite adorable.")
          		flw_625:
/*<625>*/ 		open_collection_screen();
          	  case 1:
/*<327>*/ 		printf("You caught <numeric arg0> <y<\x0E\x03\x04\x02\xCCD>>! These small-\nbodied bugs roll a big ball of...something.\nThe way they busily roll stuff back to their\nnest is quite adorable.")
          		goto flw_625
          	}
          }

          void entrypoint_003_168() {
/*<364>*/ 	start()
/*<363>*/ 	printf("You got a <y<<itemA8>>>! This item is similar\nin appearance to an <itemA7>, yet very\ndifferent. It can only be found in certain\nplaces.")
/*<635>*/ 	open_collection_screen();
          }

          void entrypoint_003_185() {
/*<484>*/ 	start()
/*<483>*/ 	printf("")
          }

          void entrypoint_003_040() {
/*<106>*/ 	start()
/*< 48>*/ 	printf("You got <y<<item28>>>!\nThrow them or roll them to blow up even\nhard objects. Try to pick up and store\nthem whenever you come across any.")
          }

          void entrypoint_003_023() {
/*<123>*/ 	start()
/*< 64>*/ 	printf("")
          }

          void entrypoint_003_006() {
/*<140>*/ 	start()
/*< 81>*/ 	printf("You got a <y<<item06>>>! This item's life-giving\nenergy restores one heart of life.")
          }

          void entrypoint_003_092() {
/*<180>*/ 	start()
/*<402>*/ 	switch (story_flags[165 /* us: 805A9AE3 0x10, jp: 805ACD63 0x10 */]) {
          	  case 0:
/*<403>*/ 		printf("You got your <y<<item5C> >>back!\nTime to make something explode.")
/*<426>*/ 		open_item_wheel(3)
/*<434>*/ 		story_flags[165 /* us: 805A9AE3 0x10, jp: 805ACD63 0x10 */] = false;
          	  case 1:
/*<424>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*<425>*/ 			printf("You got a <y<<item5C>>>! <b<Ledd>> was kind enough\nto give it to you, so make sure you take\ngood care of it.")
/*<678>*/ 			story_flags[1115 /* us: 805A9B57 0x02, jp: 805ACDD7 0x02 */] = true;
          		  case 1:
/*<161>*/ 			printf("You found a <y<<item5C>>>!\nYou can store bombs in this bag and carry\nthem with you to use later.\n\nNow that you can carry bombs with you,\nthere's a good chance you can get to\nplaces you haven't explored yet.\nSee if <b<Ledd >>will lend it to you!")
/*<414>*/ 			open_item_wheel(3)
          		}
          	}
          }

          void entrypoint_003_075() {
/*<197>*/ 	start()
/*<178>*/ 	printf("You got the <y<<item4B>>>!\nThe big pincers enable you to pick up and\ncarry things with it!\n\nYou can also press (Z) while carrying an\nobject to look down and drop your cargo.\nBombs away!\x0E\x01\x11\x02\x7CD")
          }

          void entrypoint_003_117() {
/*<265>*/ 	start()
/*<553>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<555>*/ 		printf("Your shield has been repaired.\nIt looks good as new!")
          	  case 1:
/*<261>*/ 		printf("You upgraded to a <y<<item75>>>!\nThis shield is much more durable than\nthe standard <item74>.")
          	}
          }

          void entrypoint_003_134() {
/*<295>*/ 	start()
/*<291>*/ 	printf("You got the <y<<item86>>>! It can hold\n<r<5>> extra bombs, so carry it with you when\nyou need extra firepower.")
          }

          void entrypoint_003_151() {
/*<334>*/ 	start()
/*<667>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<668>*/ 		printf("You got <numeric arg0> <y<\x0E\x03\x04\x02\xDCD>>!\nThese bugs are really popular with the\nchildren of Skyloft. Their pincers pack a\nlot of crunch, so watch your fingers!")
          		flw_626:
/*<626>*/ 		open_collection_screen();
          	  case 1:
/*<332>*/ 		printf("You caught <numeric arg0> <y<\x0E\x03\x04\x02\xDCD>>!\nThese bugs are really popular with the\nchildren of Skyloft. Their pincers pack a\nlot of crunch, so watch your fingers!")
          		goto flw_626
          	}
          }

          void entrypoint_003_169() {
/*<352>*/ 	start()
/*<350>*/ 	printf("You got a <y<<itemA9>>>!\nIt may look like a boring wad of gunk,\nbut it's used to make all sorts of things!")
/*<636>*/ 	open_collection_screen();
          }

          void entrypoint_003_058() {
/*<453>*/ 	start()
/*<454>*/ 	check_item_flag(491, 199)
/*<455>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 54}) {
          	  case 0:
/*<452>*/ 		printf("")
          	  case 1:
/*<456>*/ 		printf("")
          	}
          }

          void entrypoint_003_186() {
/*<466>*/ 	start()
/*<464>*/ 	printf("You learned the <y<<itemBA>>>!\nIt's a mysterious melody that has been\npassed down from ancient times.")
/*<579>*/ 	changeScene(2, 0) // 
          }

          void entrypoint_003_041() {
/*<105>*/ 	start()
/*< 47>*/ 	printf("You got <y<<item29>>>! Throw them or roll\nthem to blow things up. Into your Bomb\nBag they go!")
          }

          void entrypoint_003_024() {
/*<122>*/ 	start()
/*< 63>*/ 	printf("")
          }

          void entrypoint_003_007() {
/*<139>*/ 	start()
/*<157>*/ 	check_item_flag(19, 1)
/*<158>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          	  case 0:
/*< 80>*/ 		printf("You got an <y<<item07>>>! You can reuse it\nwith your own bow, so there's no reason to\nlet it go to waste.")
          	  case 1:
/*<159>*/ 		printf("")
          	}
          }

          void entrypoint_003_093() {
/*<179>*/ 	start()
/*<160>*/ 	printf("You got a <y<<item5D>>>!\nYour life has increased by <r<one >>and\nis also now fully replenished!")
          }

          void entrypoint_003_076() {
/*<196>*/ 	start()
/*<177>*/ 	printf("You've upgraded to the <y<<item4C>>>!\nIt flies faster than the <item35>.\nWatch where you're flying, speedy!")
          }

          void entrypoint_003_100() {
/*<234>*/ 	start()
/*<605>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<606>*/ 		printf("You got the <y<<item64>>>! While you are\ncarrying this medal, hearts will appear\neven when playing in <r<Hero Mode>>.\n\nIt will also cause heart flowers to bloom. \nIf you're someone who worries about\nhearts during an adventure, keep this\nwith you!")
/*<607>*/ 		story_flags[841 /* us: 805A9B35 0x01, jp: 805ACDB5 0x01 */] = true;
          	  case 1:
/*<230>*/ 		printf("You got the <y<<item64>>>!\nHearts will appear more often as long as\nyou're carrying this.\n\nIf you're worried about running out of\nhearts while you're out adventuring,\nkeep this with you!")
          	}
          }

          void entrypoint_003_118() {
/*<264>*/ 	start()
/*<554>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<556>*/ 		printf("Your shield has been repaired.\nIt looks good as new!")
          	  case 1:
/*<260>*/ 		printf("You upgraded to a <y<<item76>>>!\nThis very sturdy shield is much tougher\nthan the standard <item74>.")
          	}
          }

          void entrypoint_003_135() {
/*<306>*/ 	start()
/*<302>*/ 	printf("You've upgraded to the <y<<item87>>>!\nIt can hold <r<10>> extra bombs. Carry it with\nyou when you need extra firepower.")
          }

          void entrypoint_003_152() {
/*<333>*/ 	start()
/*<669>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<670>*/ 		printf("You got <numeric arg0> <y<\x0E\x03\x04\x02\xECD>>! These\ninsects are among the rarest in the skies\nand can only be found in dark places.")
          		flw_627:
/*<627>*/ 		open_collection_screen();
          	  case 1:
/*<331>*/ 		printf("You caught <numeric arg0> <y<\x0E\x03\x04\x02\xECD>>! These\ninsects are among the rarest in the skies\nand can only be found in dark places.")
          		goto flw_627
          	}
          }

          void entrypoint_003_059() {
/*<458>*/ 	start()
/*<459>*/ 	check_item_flag(492, 19999)
/*<460>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 56}) {
          	  case 0:
/*<457>*/ 		printf("")
          	  case 1:
/*<461>*/ 		printf("")
          	}
          }

          void entrypoint_003_187() {
/*<465>*/ 	start()
/*<463>*/ 	printf("")
/*<485>*/ 	story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */] = true;
          }

          void entrypoint_003_042() {
/*<104>*/ 	start()
/*< 46>*/ 	printf("You got a <y<<item2A>>>!\nThis peculiar fruit replenishes your\nstamina gauge!")
          }

          void entrypoint_003_025() {
/*<121>*/ 	start()
/*< 62>*/ 	printf("You got the <y<<item19>>>!\nThis carved wooden statue looks like it's\nsupposed to inspire gratitude. It also looks\nlike the stone statue on the upper floor.")
          }

          void entrypoint_003_008() {
/*<138>*/ 	start()
/*< 79>*/ 	printf("You got <y<<item08>>>! You can shoot these\nwith your bow. You have a limited supply,\nso shoot carefully.")
          }

          void entrypoint_003_077() {
/*<195>*/ 	start()
/*<176>*/ 	printf("You've upgraded to the <y<<item4D>>>!\nYour <item35> can now fly farther than ever\nbefore!")
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
/*<208>*/ 				printf("You got a <y<<item5E>>>!\nCollect four to increase your heart\ncapacity by one. Just <r<one >>more!")
          			  case 1:
/*<200>*/ 				printf("You got a <y<<item5E>>>!\nCollect four to increase your heart\ncapacity by one. <r<Two >>to go!")
          			}
          		  case 1:
/*<203>*/ 			printf("You got a <y<<item5E>>>!\nCollect four to increase your heart\ncapacity by one. <r<Three >>to go!")
          		}
          	  case 1:
/*<207>*/ 		printf("You got a <y<<item5E>>>!\nThis completes the <item5D>.\nYour heart capacity will increase by one!")
          	}
          }

          void entrypoint_003_101() {
/*<233>*/ 	start()
/*<229>*/ 	printf("You got the <y<<item65>>>!\nWhile you're carrying this, Rupees will\nmysteriously appear more often. Keep it\nwith you when your wallet feels empty!")
          }

          void entrypoint_003_119() {
/*<274>*/ 	start()
/*<557>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<560>*/ 		printf("Your shield has been repaired.\nIt looks good as new!")
          	  case 1:
/*<270>*/ 		printf("You got an <y<<item77>>>!\nThis sturdy metal shield is unaffected by\nfire, but watch out for electrical attacks!")
/*<517>*/ 		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          	}
          }

          void entrypoint_003_136() {
/*<305>*/ 	start()
/*<301>*/ 	printf("You've upgraded to the <y<<item88>>>!\nIt can hold <r<15 >>extra bombs. Carry it with\nyou when you need extra firepower.")
          }

          void entrypoint_003_153() {
/*<336>*/ 	start()
/*<335>*/ 	printf("You got an <y<<item99>>>! You can fill it\nwith all sorts of useful things.")
          }

          void entrypoint_003_170() {
/*<351>*/ 	start()
/*<349>*/ 	printf("You got a <y<<itemAA>>>! \nThis extremely sharp claw looks painful to\neven touch!")
/*<637>*/ 	open_collection_screen();
          }

          void entrypoint_003_188() {
/*<470>*/ 	start()
/*<468>*/ 	printf("")
/*<543>*/ 	story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */] = true;
          }

          void entrypoint_003_060() {
/*< 91>*/ 	start()
/*< 34>*/ 	printf("You got <y<10 >><y<<item39>>>! These small seeds\nserve as ammunition for your <item34>.\nMake sure you've always got a few handy!")
          }

          void entrypoint_003_043() {
/*<103>*/ 	start()
/*<400>*/ 	check_item_flag(500, 14)
/*<399>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 30}) {
          	  case 0:
/*<401>*/ 		printf("You collected every last <y<<item2B>>>.\n\x0E\x03\x01\x00Link's spirit has grown! \n\n\nThe trial will continue until you exit the\nSilent Realm. Proceed with caution on\nyour way back to the entrance so that you\ncan claim proof of your spiritual growth.")
          	  case 1:
/*< 45>*/ 		printf("You got a <y<<item2B>>>!\nThis object's power halts the movements of\nthe Guardians for just <r<90 seconds>>.\nCollect all <r<15>> to pass the trial!")
          	}
          }

          void entrypoint_003_026() {
/*<120>*/ 	start()
/*< 61>*/ 	printf("You got the <y<<item1A>>>!\nThis mass is made up of faintly glowing\nsquare crystals. Several are missing.")
          }

          void entrypoint_003_009() {
/*<137>*/ 	start()
/*< 78>*/ 	printf("")
/*<542>*/ 	story_flags[583 /* us: 805A9B1B 0x40, jp: 805ACD9B 0x40 */] = true;
          }

          void entrypoint_003_078() {
/*<194>*/ 	start()
/*<175>*/ 	printf("You got a <y<<item4E>>>!\nWhen placed in your pouch, you can use\nthis item to restore <r<eight hearts>>.")
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
/*<580>*/ 			printf("You got the <y+<<item5F>>>! Created\nby the old gods, the Triforce possesses\n<r<ultimate power>> and is said to grant the\nwishes of whoever possesses it!")
/*<525>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_533:
/*<533>*/ 			printf("You got the <y+<<item5F>>>! Created\nby the old gods, the Triforce possesses\n<r<ultimate power>> and is said to grant the\nwishes of whoever possesses it!")
/*<532>*/ 			printf("Just <r<one>> more piece to go!")
/*<570>*/ 			changeScene(3, 1) // 
          		}
          	  case 1:
/*<545>*/ 		check_item_flag(97, 1)
/*<546>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 64}) {
          		  case 0:
          			goto flw_533
          		  case 1:
/*<214>*/ 			printf("You got the <y+<<item5F>>>! Created\nby the old gods, the Triforce possesses\n<r<ultimate power>> and is said to grant the\nwishes of whoever possesses it!")
/*<531>*/ 			printf("Just <r<two>> more pieces to go!")
/*<571>*/ 			changeScene(3, 1) // 
          		}
          	}
          }

          void entrypoint_003_102() {
/*<232>*/ 	start()
/*<228>*/ 	printf("You got the <y<<item66>>>!\nIf you carry this with you, treasure will\nappear more often. It's the perfect thing\nto take along on a treasure hunt!")
          }

          void entrypoint_003_137() {
/*<304>*/ 	start()
/*<411>*/ 	switch (story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */]) {
          	  case 0:
/*<412>*/ 		printf("You got your <y<<item89>>> back!\nLook around to see if there's something\nin the area you can grab with it.")
/*<431>*/ 		open_item_wheel(5)
/*<413>*/ 		story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */] = false;
          	  case 1:
/*<300>*/ 		printf("You got the <y<<item89>>>! Attached to the end of\nthe whip is a strange, glowing sphere of\nlight that can latch on to various things.\n\nIf you see something you can't reach,\ntarget it with (Z) and wave the Wii Remote\nto snag it with your whip! SNAP!\x0E\x01\x11\x02\x7CD")
/*<432>*/ 		open_item_wheel(5)
          	}
          }

          void entrypoint_003_171() {
/*<356>*/ 	start()
/*<354>*/ 	printf("You got a <y<<itemAB>>>!\nThis well-crafted horn is made of sturdy\nanimal bone. You might find a use for this\nas a material.")
/*<638>*/ 	open_collection_screen();
          }

          void entrypoint_003_154() {
/*<370>*/ 	start()
/*<369>*/ 	printf("")
          }

          void entrypoint_003_189() {
/*<469>*/ 	start()
/*<467>*/ 	printf("")
/*<544>*/ 	story_flags[73 /* us: 805A9AE9 0x40, jp: 805ACD69 0x40 */] = true;
          }

          void entrypoint_003_061() {
/*< 12>*/ 	start()
/*<  8>*/ 	printf("")
/*<  9>*/ 	give_item(61 0x3D);
          }

          void entrypoint_003_027() {
/*<119>*/ 	start()
/*< 60>*/ 	printf("You got the <y<<item1B>>>!\nIt's a squid-shaped statue studded with\nintriguing suction cups.")
          }

          void entrypoint_003_079() {
/*<193>*/ 	start()
/*<174>*/ 	printf("You got a <y<<item4F>>>!\nThe <item4E> has been powered up\nand now <r<restores all of your hearts>>.")
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
/*<581>*/ 			printf("You got the <y+<<item60>>>! Created\nby the old gods, the Triforce possesses\n<r<ultimate power>> and is said to grant the\nwishes of whoever possesses it!")
/*<526>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_538:
/*<538>*/ 			printf("You got the <y+<<item60>>>! Created\nby the old gods, the Triforce possesses\n<r<ultimate power>> and is said to grant the\nwishes of whoever possesses it!")
/*<535>*/ 			printf("Just <r<one>> more piece to go!")
/*<572>*/ 			changeScene(2, 1) // 
          		}
          	  case 1:
/*<547>*/ 		check_item_flag(97, 1)
/*<548>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 66}) {
          		  case 0:
          			goto flw_538
          		  case 1:
/*<220>*/ 			printf("You got the <y+<<item60>>>! Created\nby the old gods, the Triforce possesses\n<r<ultimate power>> and is said to grant the\nwishes of whoever possesses it!")
/*<534>*/ 			printf("Just <r<two>> more pieces to go!")
/*<573>*/ 			changeScene(2, 1) // 
          		}
          	}
          }

          void entrypoint_003_103() {
/*<243>*/ 	start()
/*<239>*/ 	printf("You got the <y<<item67>>>!\nCarry this with you to prolong the effects\nof a potion. If you've got this, remember\nto pack lots of potions!")
          }

          void entrypoint_003_120() {
/*<273>*/ 	start()
/*<558>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<561>*/ 		printf("Your shield has been repaired.\nIt looks good as new!")
          	  case 1:
/*<269>*/ 		printf("You upgraded to a <y<<item78>>>!\nThis heavy shield is even tougher than the\nstandard <item77>.")
          	}
          }

          void entrypoint_003_138() {
/*<303>*/ 	start()
/*<299>*/ 	printf("You got the <y<<item8A>>>!\nWith these, you can stand any heat without\na sweat. This is one of the three sacred\ngifts left by the goddess.")
/*<502>*/ 	story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */] = true;
          }

          void entrypoint_003_172() {
/*<355>*/ 	start()
/*<353>*/ 	printf("You got an <y<<itemAC>>>!\nThis simple, slightly macabre fashion\nstatement bears the Bokoblin symbol.")
/*<639>*/ 	open_collection_screen();
          }

          void entrypoint_003_155() {
/*<374>*/ 	start()
/*<372>*/ 	printf("")
          }

          void entrypoint_003_044() {
/*<438>*/ 	start()
/*<440>*/ 	check_item_flag(500, 14)
/*<439>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 48}) {
          	  case 0:
/*<441>*/ 		printf("You collected every last <y<<item2C>>>.\n\x0E\x03\x01\x00Link's spirit has grown! \n\n\nThe trial will continue until you exit the\nSilent Realm. Proceed with caution on\nyour way back to the entrance so that you\ncan claim proof of your spiritual growth.")
          	  case 1:
/*<437>*/ 		printf("You got a <y<<item2C>>>!\nThis object's power halts the movements of\nthe Guardians for just <r<90 seconds>>.\nCollect all <r<15>> to pass the trial!")
          	}
          }

