          void entrypoint_101_30() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf("")
          }

          void entrypoint_101_31() {
/*< 26>*/ 	start()
/*< 64>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 24, 'param3': 12}
/*< 24>*/ 	check_item_flag(19, 1)
/*< 25>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 6}) {
          	  case 0:
/*< 28>*/ 		printf("\x0E\x01\x09\x04\x00\x02You've got quite an eye, friend. Those\n<y<<item08>>> do make a strong point!\n\n\nDo be careful not to accidentally shoot\npeople! That would be quite rude.\nThey cost a mere <r<20 Rupees>>.\n[1]OK! [2-]No, thanks.")
/*< 21>*/ 		switch (choice(2)) {
          		  case 0:
/*< 23>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 26}
          		  case 1:
/*< 22>*/ 			entrypoint_101_08();
          		}
          	  case 1:
/*< 27>*/ 		printf("I do apologize, but I can't sell you\nthis unless you have a bow. It's\nstore policy, you see.")
          	}
          }

          void entrypoint_101_32() {
/*< 36>*/ 	start()
/*< 65>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 32, 'param3': 12}
/*< 32>*/ 	check_item_flag(92, 1)
/*< 31>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          	  case 0:
/*< 37>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ahaa! I see you eyeing those\n<y<<item29>>>. So loud. So\nsatisfyingly smoky. And, oh yes,\nso very destructive!\nOne good blast, and even a sturdy\nwall can't hope to remain standing.\n\n\nKA-BOOM! All yours for <r<20 Rupees>>.\n[1]OK![2-]No, thanks.")
          		flw_33:
/*< 33>*/ 		switch (choice(2)) {
          		  case 0:
/*< 35>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 26}
          		  case 1:
/*< 34>*/ 			entrypoint_101_08();
          		}
          	  case 1:
/*< 38>*/ 		printf("Ahaa! Very sorry, but I can't sell you\nthose unless you have a Bomb Bag.\nAgain, my apologies.")
          	}
          }

          void entrypoint_101_33() {
/*< 46>*/ 	start()
/*< 66>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 47, 'param3': 12}
/*< 47>*/ 	printf("\x0E\x01\x09\x04\x00\x02Ahaa! That's a <y<<item74>>>.\nYou can use it to block and repel\nattacks!\n\nYou must be careful, though, as it will\n<r<break >>if it takes too much abuse.\n\n\nOh, and don't forget about fire. It will\nburn quite easily... It's an unfortunate\nproperty of wood. It could be yours for\n<r<50 Rupees>>.\nCare to buy it, friend?\n[1]OK! [2-]No, thanks.")
/*<125>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
          	goto flw_33
          }

          void entrypoint_101_34() {
/*< 48>*/ 	start()
/*< 67>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 50, 'param3': 12}
/*< 50>*/ 	printf("\x0E\x01\x09\x04\x00\x02Ahaa! That there is a very sturdy\n<y<<item77>>>.\n\n\nIt's much more durable than a\nwooden shield, and I'm happy to\nreport that it won't burst into flames!\n\nI suppose I should warn you that it\nwon't protect you from electricity,\nwhich could come as a nasty...shock.\n\nIt's yours for just <r<100 Rupees>>.\nCare to buy it, friend?\n[1]OK! [2-]No, thanks.")
/*<126>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
          	goto flw_33
          }

          void entrypoint_101_35() {
/*< 49>*/ 	start()
/*< 68>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 51, 'param3': 12}
/*< 51>*/ 	printf("\x0E\x01\x09\x04\x00\x02Ahaa! That's a <y<<item7A>>>!\nAs you might surmise from its name, it\ncan handle all variety of attacks!\n\nFire? Not a sweat! Electricity? No\npainful zaps! Plus, it will automatically\nrepair itself when it sustains damage!\n\nIt's a little fragile, but that shouldn't\nbe a problem for one as talented and\nagile as yourself! \n\nAt a cost of <r<500 Rupees>>, it's an\ninvestment...but an excellent one!\nCare to buy it?\n[1]OK! [2-]No, thanks.")
/*<127>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
          	goto flw_33
          }

          void entrypoint_101_01() {
          	start()
/*< 40>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
          		flw_41:
/*< 41>*/ 		printf("\x0E\x01\x09\x04\x00\x01Ahaa! How can I assist you, friend?\n[1]How do I shop?[2-]I'm fine.")
          		flw_1:
/*<  1>*/ 		switch (choice(2)) {
          		  case 0:
/*<  4>*/ 			printf("Oh, yes, yes! Allow me to explain!\n\n\n\nAll you need to do is stand in front of\nany of my wares and press (A) to\nexamine its beauty. Take your time\nand shop to your heart's delight!\nIt's always free to look, my friend, and\nthere's no pressure to buy!\nNo pressure at all...")
/*<139>*/ 			switch (story_flags[809 /* us: 805A9B31 0x02, jp: 805ACDB1 0x02 */]) {
          			  case 0:
/*<138>*/ 				printf("You may also wish to take certain\nitems you purchased here to the\nScrap Shop to have them upgraded!\n\nFor example, you can take one of my\nfinely crafted shields and even further\nenhance its durability.")
/*<140>*/ 				zone_temp_flags[1 /* 0x1 02 */] = true;
          			  case 1:
          			}
          		  case 1:
/*<  3>*/ 			printf("\x0E\x01\x09\x04\x00\x07Ahaa! Of course someone as bright and\nsavvy as yourself doesn't need to hear\nme ramble on! Straight to business.\n\nPlease, friend, feast your eyes on this\nlandscape of fantastical treasures I\nhave prepared for you today!")
/*< 39>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		}
          	  case 1:
/*< 97>*/ 		switch (story_flags[1114 /* us: 805A9B57 0x01, jp: 805ACDD7 0x01 */]) {
          		  case 0:
/*<102>*/ 			switch (scene_flags[123 /* 0xE 08 */]) {
          			  case 0:
          				goto flw_41
          			  case 1:
/*<109>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 110, 'param3': 31}
/*<110>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ahaa! My friend, I just got a <r<new item\n>>in today!\n\n\nMy latest treasure is a finely crafted\n<y<<item83>>>! For discerning\nbow owners, it's simply a must.\n\nTake a look for yourself!")
/*<111>*/ 				zone_temp_flags[1 /* 0x1 02 */] = true;
/*<115>*/ 				scene_flags[0 'Skyloft'][123 /* 0xE 08 */] = true;
          			}
          		  case 1:
/*< 98>*/ 			switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          			  case 0:
/*<101>*/ 				switch (scene_flags[122 /* 0xE 04 */]) {
          				  case 0:
          					goto flw_41
          				  case 1:
/*<106>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 107, 'param3': 31}
/*<107>*/ 					printf("\x0E\x01\x09\x04\x00\x01Ahaa! I've got something <r<new>> in stock\nfor you, friend.\n\n\nIt's a very mysterious shield called a\n<y<<item7A>>>. I suggest you\nlinger and give it a good look.")
/*<108>*/ 					zone_temp_flags[1 /* 0x1 02 */] = true;
/*<114>*/ 					scene_flags[0 'Skyloft'][122 /* 0xE 04 */] = true;
          				}
          			  case 1:
/*< 96>*/ 				switch (story_flags[1115 /* us: 805A9B57 0x02, jp: 805ACDD7 0x02 */]) {
          				  case 0:
/*<100>*/ 					switch (scene_flags[121 /* 0xE 02 */]) {
          					  case 0:
          						goto flw_41
          					  case 1:
/*<103>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 104, 'param3': 31}
/*<104>*/ 						printf("\x0E\x01\x09\x04\x00\x01Oh, yes, my friend! I've got something\n<r<new>> to show you!\n\n\nToday, I was able to procure a fine\n<y<<item86>>>! I do hope that it\ndelights you.")
/*<105>*/ 						zone_temp_flags[1 /* 0x1 02 */] = true;
/*<113>*/ 						scene_flags[0 'Skyloft'][121 /* 0xE 02 */] = true;
          					}
          				  case 1:
/*< 92>*/ 					switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          					  case 0:
/*< 99>*/ 						switch (scene_flags[120 /* 0xE 01 */]) {
          						  case 0:
          							goto flw_41
          						  case 1:
/*< 93>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 123, 'param3': 31}
/*<123>*/ 							switch (scene_flags[124 /* 0xE 10 */]) {
          							  case 0:
/*< 94>*/ 								printf("\x0E\x01\x09\x04\x00\x01Ahaa! You are quite lucky, as I have\na <r<new item >>just in today, friend.\n\n\nIt's a splendid <y<<item77>>>!\nLook at the expert craftsmanship.\nIt steals your breath away, doesn't it?")
          								flw_95:
/*< 95>*/ 								zone_temp_flags[1 /* 0x1 02 */] = true;
/*<112>*/ 								scene_flags[0 'Skyloft'][120 /* 0xE 01 */] = true;
          							  case 1:
/*<124>*/ 								printf("\x0E\x01\x09\x04\x00\x01Ahaa! I've got some <r<new>> gear in stock<r<\n>>to show you, friend.\n\n\nAvailable now, you can purchase an\n<y<<item77> >>and a <y<<item80>>>.\nI hope they meet with your approval!")
          								goto flw_95
          							}
          						}
          					  case 1:
/*<117>*/ 						switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          						  case 0:
/*<118>*/ 							switch (scene_flags[124 /* 0xE 10 */]) {
          							  case 0:
          								goto flw_41
          							  case 1:
/*<119>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 122, 'param3': 31}
/*<122>*/ 								printf("\x0E\x01\x09\x04\x00\x01Ahaa! You are in luck, because I'm\ncarrying a <r<new>> <r<item>>.\n\n\nToday's new addition is an expertly\nwoven <y<<item80>>>!\n\n\nTruly, any serious slingshot enthusiast\nwould be embarrassed not to own this,\ndon't you agree? Take a look, friend!")
/*<120>*/ 								zone_temp_flags[1 /* 0x1 02 */] = true;
/*<121>*/ 								scene_flags[0 'Skyloft'][124 /* 0xE 10 */] = true;
          							}
          						  case 1:
/*<  2>*/ 							printf("\x0E\x01\x09\x04\x00\x01Ahaa! A customer! Hello there, friend.\n\n\n\nMy shop carries the finest products\nyou'll find anywhere!\n\n\nPlease, take a moment for your senses\nto savor the wonderful treasures I have\nprepared just for you, friend!\n\nIf you have any questions, please don't\nhesitate to ask.\n[1]How do I buy?[2-]OK.\x0E\x01\x07\x04\x00\x00")
          							goto flw_1
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_101_36() {
/*< 54>*/ 	start()
/*< 69>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 53, 'param3': 12}
/*< 53>*/ 	check_item_flag(52, 1)
/*< 52>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 16}) {
          	  case 0:
/*< 55>*/ 		printf("\x0E\x01\x09\x04\x00\x02I see you have an interest in \n<y<10 >><y<<item39>>>! They\nare truly the perfectly matched\nprojectile for a slingshot.\nThey could be yours for <r<20 Rupees>>.\nCare to buy them today?\n[1]OK! [2-]No, thanks.")
          		goto flw_33
          	  case 1:
/*< 56>*/ 		printf("My friend...you don't appear to have\na slingshot.\n\n\nI simply couldn't sell you these in good\nconscience if you do not have a\nslingshot. Perhaps I can interest you\nin some of my other wares...")
          	}
          }

          void entrypoint_101_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf("")
          }

          void entrypoint_101_37() {
/*< 71>*/ 	start()
/*< 72>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 141, 'param3': 12}
/*<141>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
/*< 81>*/ 	check_item_flag(52, 1)
/*< 80>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 20}) {
          	  case 0:
/*< 73>*/ 		printf("\x0E\x01\x09\x04\x00\x02That's a <y<<item80>>>.\nWith this in your pouch, you can\ncarry 10 additional seeds.\n\nRecommended for slingshot\nenthusiasts! It costs <r<100 Rupees>>.\nDo we have a deal, friend?\n[1]OK![2-]No, thanks.")
          		goto flw_33
          	  case 1:
/*< 82>*/ 		printf("My friend...you don't appear to have\na slingshot.\n\n\nI simply couldn't sell you these in good\nconscience if you do not have a\nslingshot. Perhaps I can interest you\nin some of my other wares...")
          	}
          }

          void entrypoint_101_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	switch (random(2)) {
          	  case 0:
/*<  9>*/ 		printf("")
          	  case 1:
/*< 10>*/ 		printf("")
          	}
          }

          void entrypoint_101_38() {
/*< 74>*/ 	start()
/*< 75>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 142, 'param3': 12}
/*<142>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
/*< 83>*/ 	check_item_flag(19, 1)
/*< 84>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 22}) {
          	  case 0:
/*< 76>*/ 		printf("\x0E\x01\x09\x04\x00\x02That's a <y<<item83>>>. With\nthis in your pouch, you can carry five\nmore arrows!\n\nPerfect for anyone enamored with\narchery! It costs <r<150 Rupees>>.\nDo we have a deal, friend?\n[1]OK! [2-]No, thanks.")
          		goto flw_33
          	  case 1:
/*< 85>*/ 		printf("I do apologize, but I can't sell you\nthis unless you have a bow. It's\nstore policy, you see.")
          	}
          }

          void entrypoint_101_04() {
/*< 13>*/ 	start()
/*< 62>*/ 	check_item_flag(112, 1)
/*< 63>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 18}) {
          	  case 0:
/*< 14>*/ 		printf("It pains me to tell you, friend, but...\n\n\n\nIt appears your pouch is full. May I\nsuggest you stow some of your\nbelongings at the Item Check?")
/*<128>*/ 		zone_temp_flags[5 /* 0x1 20 */] = false;
          	  case 1:
          	}
          }

          void entrypoint_101_39() {
/*< 77>*/ 	start()
/*< 78>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 143, 'param3': 12}
/*<143>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
/*< 87>*/ 	check_item_flag(92, 1)
/*< 86>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 24}) {
          	  case 0:
/*< 79>*/ 		printf("\x0E\x01\x09\x04\x00\x02That's a <y<<item86>>>. Just \nslip this into your pouch, and you can\ncarry five additional bombs.\n\nIf you relish a good explosion, this is\nthe item for you! It costs a mere\n<r<150 Rupees>>. Care to buy it, friend?\n[1]OK! [2-]No, thanks.")
          		goto flw_33
          	  case 1:
/*< 88>*/ 		printf("Ahaa! Very sorry, but I can't sell you\nthose unless you have a Bomb Bag.\nAgain, my apologies.")
          	}
          }

          void entrypoint_101_05() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf("Ahhhh, it pains me to say this, but...\n\n\n\nI believe you are already carrying\nyour limit for this item. Perhaps you\ncould turn your attention to any of\nmy other magnificent wares...")
/*<129>*/ 	zone_temp_flags[5 /* 0x1 20 */] = false;
          }

          void entrypoint_101_06() {
/*< 17>*/ 	start()
/*< 59>*/ 	make_actor_do_something(1, 0)
/*< 18>*/ 	printf("\x0E\x01\x09\x04\x00\x08Oh my!\x0E\x01\x05\x04\n\x00\n")
/*< 60>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 512, 'next': 61, 'param3': 22}
/*< 61>*/ 	printf("My dear friend! You\x2014ahem\x2014you don't\nhave enough Rupees to pay for this\nitem. You mustn't tease me like that!")
/*<130>*/ 	zone_temp_flags[5 /* 0x1 20 */] = false;
          }

          void entrypoint_101_07() {
/*< 19>*/ 	start()
/*< 57>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 512, 'next': 43, 'param3': 22}
/*< 43>*/ 	switch (random(2)) {
          	  case 0:
/*< 20>*/ 		printf("\x0E\x01\x09\x04\x00\x07Ahaa! Thank you for your loyal and\ncontinued patronage, friend.")
          		flw_144:
/*<144>*/ 		switch (zone_temp_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*< 90>*/ 			switch (scene_flags[89 /* 0xA 02 */]) {
          			  case 0:
/*<132>*/ 				switch (story_flags[809 /* us: 805A9B31 0x02, jp: 805ACDB1 0x02 */]) {
          				  case 0:
          					flw_70:
/*< 70>*/ 					printf("I've taken the liberty of placing your\npurchases in your pouch. Press <g<\x0E\x02\x04\x02\x28CD\n>>to open it, then<r< equip >>what you need!\x0E\x01\x11\x02\xECD")
          					flw_137:
/*<137>*/ 					zone_temp_flags[5 /* 0x1 20 */] = false;
          				  case 1:
/*<134>*/ 					switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
          					  case 0:
/*<135>*/ 						printf("If you have any doubts about the\n<r<durability of your shield>>, I suggest you\nhave it examined at the <r<Scrap Shop>>.\n\nProvided you take good Gondo there\nthe necessary treasures and the like,\nhe will happily upgrade your items!")
/*<133>*/ 						story_flags[809 /* us: 805A9B31 0x02, jp: 805ACDB1 0x02 */] = true;
          						goto flw_137
          					  case 1:
          						goto flw_70
          					}
          				}
          			  case 1:
/*< 89>*/ 				printf("I've taken the liberty of placing the\nitem in your pouch. To open your\npouch, press and hold \x0E\x02\x04\x02\x28CD...\x0E\x01\x11\x02\xECD\n\nSelect the item you want to equip and\n<g<release >>\x0E\x02\x04\x02\x28CD. That's all there is to it.\x0E\x01\x11\x02\xECD For\nexample, to equip an item like a shield,\nit's as simple as selecting it in your pouch!")
/*< 91>*/ 				story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
/*<116>*/ 				scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
/*<136>*/ 				zone_temp_flags[5 /* 0x1 20 */] = false;
          			}
          		  case 1:
          		}
          	  case 1:
/*< 42>*/ 		printf("\x0E\x01\x09\x04\x00\x07Ahaa! The customer is always right!")
          		goto flw_144
          	}
          }

          void entrypoint_101_08() {
/*< 29>*/ 	start()
/*< 44>*/ 	make_actor_do_something(1, 0)
/*< 58>*/ 	printf("\x0E\x01\x09\x04\x00\x08...\x0E\x01\x05\x04\x0F\x00")
/*< 45>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 512, 'next': 30, 'param3': 22}
/*< 30>*/ 	printf("That's quite all right, friend! I've\nquite a few other fine items in stock,\nso do take your time and look around!")
/*<131>*/ 	zone_temp_flags[5 /* 0x1 20 */] = false;
          }
