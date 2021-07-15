          void entrypoint_106_34() {
/*< 22>*/ 	start()
/*< 51>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 21, 'param3': 12}
/*< 21>*/ 	check_item_flag(153, 1)
/*< 20>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 12}) {
          	  case 0:
/*< 26>*/ 		printf("\x0E\x01\x09\x04\x00\x01This mysterious elixir is known as\n<y<<item7E>>>!\n\n\nSimply pour it on a broken shield, and\nin moments the shield will be as good as\nnew! It's amazing!\n\nNot only that, but this multipurpose\nmixture will even restore <r<four>> hearts!\n\n\nHow about some to take on your\ntravels? It's only <r<30 Rupees>>!\n[1]OK![2-]No, thanks.")
          		flw_11:
/*< 11>*/ 		switch (choice(2)) {
          		  case 0:
/*< 13>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 26}
          		  case 1:
/*< 12>*/ 			entrypoint_106_08();
          		}
          	  case 1:
/*< 29>*/ 		printf("\x0E\x01\x09\x04\x09\x702Hello there!\n\n\n\n\x0E\x01\x09\x04\x0C\xB00Oh...I'm sorry. You don't have an\nEmpty Bottle. I can't sell you anything\nif you don't have an Empty Bottle.\n\n\x0E\x01\x09\x04\x0D\x700If you want to know more about how\nthings work around here, just ask!")
          	}
          }

          void entrypoint_106_51() {
/*< 65>*/ 	start()
/*< 69>*/ 	printf("\x0E\x01\x09\x04\x07\x704Ahh, OK... I can improve this potion.\nYou're sure this is what you want?\n[1]Yep.[2-]Maybe not...")
/*< 70>*/ 	switch (choice(2)) {
          	  case 0:
/*<110>*/ 		make_actor_do_something(3, 0)
/*< 68>*/ 		printf("\x0E\x01\x09\x04\x07\x700Ah, wonderful... Just a moment...\nSorry to make you wait like this...")
/*< 99>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 71, 'param3': 12}
/*< 71>*/ 		make_actor_do_something(1, 0)
/*< 72>*/ 		printf("\x0E\x01\x09\x04\x07\x708All done... Here you are. I hope I didn't\nset your expectations too high...")
/*< 89>*/ 		zone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 73>*/ 		printf("\x0E\x01\x09\x04\n\xA06I understand... Is there anything else\nI can infuse for you?")
/*<100>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 78, 'param3': 12}
/*< 78>*/ 		make_actor_do_something(0, 0)
          	}
          }

          void entrypoint_106_35() {
/*< 55>*/ 	start()
/*< 56>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 54, 'param3': 12}
/*< 54>*/ 	check_item_flag(153, 1)
/*< 53>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 18}) {
          	  case 0:
/*< 57>*/ 		printf("\x0E\x01\x09\x04\x00\x0BThat is a <y<<item41>>>.\nThis stuff will make you feel invincible!\nIt's a potion that reduces the damage\nyou take for a little bit of time.\nIf you find yourself facing an opponent\nwho's a little out of your league, this is\nthe potion for you!\n\nThis kind of potion doesn't come cheap\nthough. It's <r<200 Rupees>>. How about it?\n[1]Sure![2-]No, thanks.")
          		goto flw_11
          	  case 1:
/*< 58>*/ 		printf("\x0E\x01\x09\x04\x09\x702Hello there!\n\n\n\n\x0E\x01\x09\x04\x0C\xB00Oh...I'm sorry. You don't have an\nEmpty Bottle. I can't sell you anything\nif you don't have an Empty Bottle.\n\n\x0E\x01\x09\x04\x0D\x700If you want to know more about how\nthings work around here, just ask!")
          	}
          }

          void entrypoint_106_52() {
/*< 74>*/ 	start()
/*< 90>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 91>*/ 		printf("\x0E\x01\x09\x04\x09\x908Thank you very much! Yes, thank you!\nPlease, please come again!")
          	  case 1:
/*< 75>*/ 		printf("\x0E\x01\x09\x04\n\xA06Oh... So you're not interested?\nWell, I hope to see you again.")
          	}
          }

          void entrypoint_106_01() {
          	start()
/*< 40>*/ 	switch (story_flags[35 /* us: 805A9ADD 0x08, jp: 805ACD5D 0x08 */]) {
          	  case 0:
/*<126>*/ 		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          		  case 0:
/*<127>*/ 			switch (story_flags[1075 /* us: 805A9B50 0x02, jp: 805ACDD0 0x02 */]) {
          			  case 0:
          				flw_105:
/*<105>*/ 				switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          				  case 0:
/*<109>*/ 					switch (scene_flags[85 /* 0xB 20 */]) {
          					  case 0:
          						flw_6:
/*<  6>*/ 						switch (zone_temp_flags[2 /* 0x1 04 */]) {
          						  case 0:
/*<  5>*/ 							printf("\x0E\x01\x09\x04\x00\x0BHmm? Something I can do for you?\n[1]Teach me![2-]Not really.")
          							flw_2:
/*<  2>*/ 							switch (choice(2)) {
          							  case 0:
/*<  4>*/ 								printf("\x0E\x01\x09\x04\x00\x04Such a smart boy you are! Just stand\nin front of the potion you want to hear\nabout, and press (A).\n\nI'll talk you through everything that\npotion will do for you. The potions I\ncarry are pretty basic.\n\nHowever, if you want something\nwith a bit more kick to it...\n\n\n\x0E\x01\x09\x04\x0D\x700You can buy one of my potions and\nwalk it a few steps down to my husband\nthere. He'll be able to help you out.\n\n\x0E\x01\x09\x04\x0C\x00He might not look like much, but he\nmixes a mean potion, and he's used to\ndealing with kids like you.")
          								flw_7:
/*<  7>*/ 								zone_temp_flags[2 /* 0x1 04 */] = true;
          							  case 1:
/*<  3>*/ 								printf("\x0E\x01\x09\x04\x0C\xB0ENo need to be rude. I'm busy too,\nyou know! But you look like such a\nnice boy, so I'll forgive you.\n\n\x0E\x01\x09\x04\x0D\x00If you want some more potent potions,\ngo and talk to my husband. He can mix\nup ingredients to infuse and improve\nthe regular potions I sell here.")
          								goto flw_7
          							}
          						  case 1:
/*<  1>*/ 							printf("\x0E\x01\x09\x04\x00\x01Welcome, young man!\n\n\n\nThis is the Potion Shop! I sell potions\nthat you'll find handy in sticky\nsituations. Want to hear more?\n[1]Sure![2-]Nah.")
          							goto flw_2
          						}
          					  case 1:
/*<107>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 106, 'param3': 31}
/*<106>*/ 						printf("\x0E\x01\x09\x04\x00\x01Here's something that'll put some fire\nin your belly, young man! The new\npotion I've been concocting is finally\nready!\nI call it a <y<Stamina Potion>>!\n\n\n\nIf you drink this up, your stamina\ngauge won't drop as fast as usual!\n\n\nI'll admit it's a bit on the pricey side,\nbut I bet you'll find yourself in a\nsituation where a boost of stamina\nwill make it worthwhile!\nIf you want to buy some, just walk on\nover to the display and take a look!")
/*<108>*/ 						scene_flags[0 'Skyloft'][85 /* 0xB 20 */] = true;
/*<131>*/ 						zone_temp_flags[2 /* 0x1 04 */] = true;
          					}
          				  case 1:
          					goto flw_6
          				}
          			  case 1:
/*<128>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 31}
/*<129>*/ 				printf("\x0E\x01\x09\x04\x00\x01Boy, have I got the new potion for you!\nI call it...the Air Potion!\n\n\nOne delicious gulp of this elixir and\nyou'll find that while you are\nunderwater, your <b<oxygen gauge>> will\ndrop much more slowly!\nYou'll be like a little fish, young man!\nAnd the price is more than generous,\nif I do say so myself.\n\nIf you're interested in a bottle, young\nman, just examine the blue cauldron,\nand I'll come running!")
/*<130>*/ 				story_flags[1075 /* us: 805A9B50 0x02, jp: 805ACDD0 0x02 */] = true;
/*<132>*/ 				zone_temp_flags[2 /* 0x1 04 */] = true;
          			}
          		  case 1:
          			goto flw_105
          		}
          	  case 1:
/*< 52>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 39, 'param3': 31}
/*< 39>*/ 		printf("\x0E\x01\x09\x04\x00\x02Hey! You there! Yes, you! The adorable\nboy with the golden hair!\n\n\nWelcome to the Potion Shop! \nYou can drink our potions when you're\ninjured to fill up your hearts.\n\n\x0E\x01\x09\x04\x0D\x700Hey, you're one of those knights,\naren't you? Or one in training,\nat least, hmmm?\n\nLet me tell you, one look at you and\nI can tell you'll need my potions by\nthe cauldron full! So don't try to slink\naway without stocking up.")
/*< 42>*/ 		printf("\x0E\x01\x09\x04\x0C\xB06Oh dear\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í\n\n\n\nDo you have an Empty Bottle on you?\n\n\n\nI can't sell you a potion if you don't\nhave an Empty Bottle to pour it into!\n\n\n\x0E\x01\x09\x04\x09\x90BFor some reason, I like you, though, so\nI'll give you a spare Empty Bottle I've\nbeen keeping here in the stall!\nOh, it's nothing. It's my little gift.\n\x0E\x01\x09\x04\x07\x700You won't hear me say this often, but\nyou can put other things besides\npotions in an Empty Bottle, so it's a\nuseful thing to carry around!")
/*< 45>*/ 		check_item_flag(112, 1)
/*< 46>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 16}) {
          		  case 0:
/*< 59>*/ 			switch (is_adventure_pouch_full()) {
          			  case 0:
/*< 60>*/ 				printf("\x0E\x01\x09\x04\x0C\xB08Dear, your pouch is full! You're quite\nthe little shopper, aren't you?\n\n\n\x0E\x01\x09\x04\n\xA00Why don't you leave some of your\nthings with that nice Item Check girl?\nThen you won't have to carry all that\njunk around with you!")
          			  case 1:
/*< 44>*/ 				give_item(153 0x99);
/*< 41>*/ 				story_flags[35 /* us: 805A9ADD 0x08, jp: 805ACD5D 0x08 */] = true;
/*< 96>*/ 				switch (scene_flags[89 /* 0xA 02 */]) {
          				  case 0:
/*< 43>*/ 					printf("\x0E\x01\x09\x04\x0D\x70BEmpty Bottles fit in your Adventure\nPouch. Press \x0E\x02\x04\x02\x2CD to take a look.\x0E\x01\x11\x02\x2CD")
/*<114>*/ 					printf("If you ever get to the point where you\ncan't fit any more stuff in your pouch\nbecause it's full, you can always drop\nitems off at the Item Check.\n\x0E\x01\x09\x04\x0C\x70BSo what would you like to buy?")
          					goto flw_7
          				  case 1:
/*< 97>*/ 					printf("\x0E\x01\x09\x04\x0D\x70BEmpty Bottles fit in your Adventure\nPouch. Press <g<\x0E\x02\x04\x02\x2CD >>to take a look. \x0E\x01\x11\x02\x2CD\n\n\nHold \x0E\x02\x04\x02\x2CD and tilt the Wii Remote to\nchoose the item you want to use.\x0E\x01\x11\x02\x2CD\n\n\nRelease \x0E\x02\x04\x02\x2CD to select that item.\nEasy, right?\x0E\x01\x11\x02\x2CD")
/*<115>*/ 					printf("If you ever get to the point where you\ncan't fit any more stuff in your pouch\nbecause it's full, you can always drop\nitems off at the Item Check.\n\x0E\x01\x09\x04\x0C\x70BSo what would you like to buy?")
/*< 98>*/ 					story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
/*<111>*/ 					scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
          				}
          			}
          		  case 1:
/*< 47>*/ 			printf("")
          		}
          	}
          }

          void entrypoint_106_53() {
/*< 79>*/ 	start()
/*<112>*/ 	switch (context_related2(0)) {
          	  case 0:
/*< 81>*/ 		printf("If you have any other potions that\nyou want to infuse, you can bring\nthem to me. I'll be happy to help!")
/*< 80>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<113>*/ 		printf("Ah... I'm afraid this potion can't be\nimproved on. If you'd like to buy some\npotions, please speak with my wife...")
          	}
          }

          void entrypoint_106_70() {
/*<133>*/ 	start()
/*<136>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 134, 'param3': 12}
/*<134>*/ 	printf("\x0E\x01\x09\x04\x00\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs just a whiff\nof <y<<item8D>>>.\nAccording to my secret infuser's\nhandbook, these<y< >>can be found within\nheavily wooded areas.")
          	flw_137:
/*<137>*/ 	printf("\x0E\x01\x09\x04\x07\x00Sorry to disappoint... How about\nanother potion?")
/*<135>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_54() {
/*< 82>*/ 	start()
/*<101>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 84, 'param3': 12}
/*< 84>*/ 	printf("\x0E\x01\x09\x04\x00\nOh, but...you don't have enough\nmaterials to enhance this potion...\n\n\nI'm really sorry, but...maybe you\ncould choose something else?")
/*< 87>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_71() {
/*<138>*/ 	start()
/*<140>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 139, 'param3': 12}
/*<139>*/ 	printf("\x0E\x01\x09\x04\x00\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. The brew still needs a light\ndusting of <y<<item8E>>>.\nAccording to my secret infuser's\nhandbook, these<y< >>can be found within\nheavily wooded areas.")
          	goto flw_137
          }

          void entrypoint_106_55() {
/*< 83>*/ 	start()
/*< 85>*/ 	printf("\x0E\x01\x09\x04\x00\nOh...dear. This is so uncomfortable\nto say, but...you don't seem to\nhave enough Rupees. I'd love to help\nyou, but...you see...")
/*<102>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 86, 'param3': 12}
/*< 86>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_72() {
/*<141>*/ 	start()
/*<143>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 12}
/*<142>*/ 	printf("\x0E\x01\x09\x04\x00\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. The brew still needs a smidge\nof <y<<item8F>>>.\nAccording to my secret infuser's\nhandbook, these<y< >>can be found within\nheavily wooded areas.")
          	goto flw_137
          }

          void entrypoint_106_56() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf("\x0E\x01\x09\x04\x00\nOh no... You don't have any potions to\ninfuse.\n\n\n\x0E\x01\x09\x04\x09\x900My wife down there sells potions,\nif you want to speak with her...")
          }

          void entrypoint_106_73() {
/*<144>*/ 	start()
/*<146>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 145, 'param3': 12}
/*<145>*/ 	printf("\x0E\x01\x09\x04\x00\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs a smidge of\n<y<<item90>>>.\nAs I recall, there's quite a few of these\naround Skyloft...")
          	goto flw_137
          }

          void entrypoint_106_05() {
/*< 30>*/ 	start()
/*< 34>*/ 	printf("\x0E\x01\x09\x04\n\xA08You don't have an <y<Empty Bottle>>.\nCome back when you've got one,\nyoung man.")
          }

          void entrypoint_106_74() {
/*<147>*/ 	start()
/*<150>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 148, 'param3': 12}
/*<148>*/ 	printf("\x0E\x01\x09\x04\x00\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs a dusting of\n<y<<item91>>>.\nAccording to my secret infuser's\nhandbook, they make their home on\na mountain of fire in the world below.")
          	flw_151:
/*<151>*/ 	printf("\x0E\x01\x09\x04\x07\x00Sorry to disappoint... How about\nanother potion?")
/*<149>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_06() {
/*< 31>*/ 	start()
/*< 35>*/ 	printf("\x0E\x01\x09\x04\x0C\xB08My dear, you don't have enough\nmoney! You're such a sweet boy, but I\nhave to think of my husband and\nchildren!\n\x0E\x01\x09\x04\n\xA00Come back and see me when you've\ngot some more pocket money.")
          }

          void entrypoint_106_75() {
/*<152>*/ 	start()
/*<154>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 153, 'param3': 12}
/*<153>*/ 	printf("\x0E\x01\x09\x04\x00\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs a pinch of\n<y<<item92>>>.\nAs I recall, there's quite a few of these\naround Skyloft...")
          	goto flw_151
          }

          void entrypoint_106_07() {
/*< 32>*/ 	start()
/*< 36>*/ 	printf("\x0E\x01\x09\x04\x09\x90AThank you, sweetie! If you want a\npotion powered up, go see my husband\nat the end of the counter. He can mix\nsomething up for you.")
          }

          void entrypoint_106_76() {
/*<155>*/ 	start()
/*<157>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 156, 'param3': 12}
/*<156>*/ 	printf("\x0E\x01\x09\x04\x00\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs just a whiff\nof <y<<item93>>>.\nAccording to my secret infuser's\nhandbook, these bugs live in large\ngroups and dwell somewhere sandy\nbelow the clouds. ")
          	goto flw_151
          }

          void entrypoint_106_08() {
/*< 33>*/ 	start()
/*< 77>*/ 	switch (random(2)) {
          	  case 0:
/*< 76>*/ 		printf("\x0E\x01\x09\x04\n\xA0EHmph! I don't need window-shoppers\nhere, dear.")
          	  case 1:
/*< 37>*/ 		printf("\x0E\x01\x09\x04\x0C\xB10You don't want it, dear? I know some\nof my potions might taste a bit strange,\nbut there's no denying that they do\nwhat's advertised!")
          	}
          }

          void entrypoint_106_77() {
/*<158>*/ 	start()
/*<160>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 159, 'param3': 12}
/*<159>*/ 	printf("\x0E\x01\x09\x04\x00\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs a sprinkling\nof <y<<item94>>>.\nAccording to my secret infuser's\nhandbook, these bugs live in large\ngroups and dwell somewhere sandy\nbelow the clouds. ")
          	goto flw_151
          }

          void entrypoint_106_78() {
/*<161>*/ 	start()
/*<164>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 162, 'param3': 12}
/*<162>*/ 	printf("\x0E\x01\x09\x04\x00\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs a pinch or\ntwo of <y<<item95>>>.\nAccording to my secret infuser's\nhandbook, these bugs live in large\ngroups and dwell somewhere sandy\nbelow the clouds. ")
          	flw_165:
/*<165>*/ 	printf("\x0E\x01\x09\x04\x07\x00Sorry to disappoint... How about\nanother potion?")
/*<163>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_79() {
/*<166>*/ 	start()
/*<168>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 167, 'param3': 12}
/*<167>*/ 	printf("\x0E\x01\x09\x04\x00\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs a savory\nhint of <y<<item96>>>.\nAccording to my secret infuser's\nhandbook, they make their home on\na mountain of fire in the world below.")
          	goto flw_165
          }

          void entrypoint_106_80() {
/*<169>*/ 	start()
/*<171>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 170, 'param3': 12}
/*<170>*/ 	printf("\x0E\x01\x09\x04\x00\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs a smidge of\n<y<<item97>>>.\nSkyloft is quite famous for these lovely\nbugs, isn't it?")
          	goto flw_165
          }

          void entrypoint_106_81() {
/*<172>*/ 	start()
/*<174>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 173, 'param3': 12}
/*<173>*/ 	printf("\x0E\x01\x09\x04\x00\nOh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs just a whiff\nof <y<<item98>>>.\nAs I recall, you can only find these at\nnight in Skyloft, though they are quite\nrare.")
          	goto flw_165
          }

          void entrypoint_106_31() {
/*< 10>*/ 	start()
/*< 48>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 9, 'param3': 12}
/*<  9>*/ 	check_item_flag(153, 1)
/*<  8>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 4}) {
          	  case 0:
/*< 38>*/ 		printf("\x0E\x01\x09\x04\x00\x01That's a vat of <y<<item4E>>>!\nDrink this, dear, and it will replenish\neight hearts.\n\nWhy don't you pick some up for your\nadventure? It's only <r+<20 Rupees>>.\nHow about it?\n[1]Yes, please.[2-]No, thanks.")
          		goto flw_11
          	  case 1:
/*< 23>*/ 		printf("\x0E\x01\x09\x04\x09\x702Hello there!\n\n\n\n\x0E\x01\x09\x04\x0C\xB00Oh...I'm sorry. You don't have an\nEmpty Bottle. I can't sell you anything\nif you don't have an Empty Bottle.\n\n\x0E\x01\x09\x04\x0D\x700If you want to know more about how\nthings work around here, just ask!")
          	}
          }

          void entrypoint_106_32() {
/*< 16>*/ 	start()
/*< 15>*/ 	check_item_flag(153, 1)
/*< 14>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          	  case 0:
/*<124>*/ 		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          		  case 0:
/*< 49>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 24, 'param3': 12}
/*< 24>*/ 			printf("\x0E\x01\x09\x04\x00\x04That's <y<<item56>>>! If you drink that,\nyour <b<oxygen gauge >>will reduce less\nquickly when you're underwater\nfor a short time.\nAre you interested, dear? It's only\n<r+<20 Rupees>>.\n[1]Sure![2-]No, thanks.")
          			goto flw_11
          		  case 1:
/*<125>*/ 			printf("\x0E\x01\x09\x04\x0C\xB04Slow down, dear. That potion is not\nquite ready for public consumption yet,\nbut I promise I'll have it out soon!\n\n\x0E\x01\x09\x04\x09\x700In the meantime, I've got plenty of\nother great potions for you to try out.\nWhy not have a look?")
          		}
          	  case 1:
/*< 27>*/ 		printf("\x0E\x01\x09\x04\x09\x702Hello there!\n\n\n\n\x0E\x01\x09\x04\x0C\xB00Oh...I'm sorry. You don't have an\nEmpty Bottle. I can't sell you anything\nif you don't have an Empty Bottle.\n\n\x0E\x01\x09\x04\x0D\x700If you want to know more about how\nthings work around here, just ask!")
          	}
          }

          void entrypoint_106_33() {
/*< 19>*/ 	start()
/*< 18>*/ 	check_item_flag(153, 1)
/*< 17>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 10}) {
          	  case 0:
/*<103>*/ 		switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          		  case 0:
/*< 50>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 25, 'param3': 12}
/*< 25>*/ 			printf("\x0E\x01\x09\x04\x00\x0BNow that amazing concoction is called\n<y<<item54>>>.\n\n\nDrinking it will make your <b<stamina\ngauge >>decrease more slowly for a\nshort time.\n\nIt's a little pricey but well worth it.\nI'll sell it to you for <r<50 Rupees>>!\n[1]OK![2-]No, thanks.")
          			goto flw_11
          		  case 1:
/*<104>*/ 			printf("\x0E\x01\x09\x04\x0C\xB04This wonderful potion completely stops\nyour <b<stamina gauge >>from being\ndepleted for a little while.\n\nHowever, I haven't quite perfected\nthe formula, so you'll have to wait until\nit's ready.\n\n\x0E\x01\x09\x04\x09\x700Please feel free to take a look at my\nother potions, though.")
          		}
          	  case 1:
/*< 28>*/ 		printf("\x0E\x01\x09\x04\x09\x702Hello there!\n\n\n\n\x0E\x01\x09\x04\x0C\xB00Oh...I'm sorry. You don't have an\nEmpty Bottle. I can't sell you anything\nif you don't have an Empty Bottle.\n\n\x0E\x01\x09\x04\x0D\x700If you want to know more about how\nthings work around here, just ask!")
          	}
          }

          void entrypoint_106_50() {
/*< 61>*/ 	start()
/*< 88>*/ 	zone_temp_flags[4 /* 0x1 10 */] = false;
/*<181>*/ 	switch (zone_temp_flags[7 /* 0x1 80 */]) {
          	  case 0:
          		flw_116:
/*<116>*/ 		switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          		  case 0:
/*<118>*/ 			check_item_flag(71, 1)
/*<119>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 44}) {
          			  case 0:
          				flw_62:
/*< 62>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ah...hello... Welcome to my humble\nlittle side business over here.\n\n\nI, uh...infuse the potions my wife sells\nwith new ingredients to increase their\npower. It's nothing, really...just\nsomething I like to do.\n\x0E\x01\x09\x04\x07\x700Well...ah, do you have any potions\nyou would like me to infuse?\n[1]Sure.[2-]Nah.")
/*< 63>*/ 				switch (choice(2)) {
          				  case 0:
/*< 94>*/ 					switch (context_related2(0)) {
          					  case 0:
/*< 66>*/ 						printf("\x0E\x01\x09\x04\x00\x03These are the potions you are currently\ncarrying that I can infuse...")
/*< 64>*/ 						make_actor_do_something(0, 0)
          					  case 1:
/*< 95>*/ 						printf("\x0E\x01\x09\x04\x00\nOh no... You don't have any potions to\ninfuse.\n\n\n\x0E\x01\x09\x04\x09\x900My wife down there sells potions,\nif you want to speak with her...")
          					}
          				  case 1:
/*< 67>*/ 					printf("\x0E\x01\x09\x04\n\xA06I see... No bother to me... Hope to see\nyou again...someday...")
          				}
          			  case 1:
/*<121>*/ 				switch (zone_temp_flags[6 /* 0x1 40 */]) {
          				  case 0:
/*<123>*/ 					printf("\x0E\x01\x09\x04\x00\x01You can buy a <y<Bug Net >>from <r<Beedle's\nAirshop>> if you don't have one...\n\n\nBeedle is usually flying his shop outside\naround the Bazaar... Yes... If you <g<look\naround>>, you should see him up there...")
          				  case 1:
/*<117>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 120, 'param3': 31}
/*<120>*/ 					printf("\x0E\x01\x09\x04\x00\x01Oh, welcome! Our shop is in the potion-\nbrewing-and-infusing business, as\nI'm sure you know...\n\nAnyway, I can improve potions you buy\nover there from my wife.\n\n\n\x0E\x01\x09\x04\x00\x07But of course... Sir, you'll need to\nbring me some insects if you want me\nto improve potions for you. Or bugs...\nYou can call them bugs if you like...\nYou can buy a <y<Bug Net >>from <r<Beedle's\nAirshop>> if you don't have one...\n\n\n\x0E\x01\x09\x04\x07\x708Beedle is usually flying his shop outside\naround the Bazaar... Yes... If you <g<look\naround>>, you should see him up there...")
/*<122>*/ 					zone_temp_flags[6 /* 0x1 40 */] = true;
          				}
          			}
          		  case 1:
          			goto flw_62
          		}
          	  case 1:
/*<176>*/ 		switch (story_flags[386 /* us: 805A9B0D 0x10, jp: 805ACD8D 0x10 */]) {
          		  case 0:
/*<175>*/ 			switch (story_flags[387 /* us: 805A9B0D 0x20, jp: 805ACD8D 0x20 */]) {
          			  case 0:
          				goto flw_116
          			  case 1:
/*<177>*/ 				check_item_flag(160, 1)
/*<178>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 58}) {
          				  case 0:
/*<182>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 179, 'param3': 31}
/*<179>*/ 					printf("\x0E\x01\x09\x04\x00\x01Oh, welcome... Sorry, did you just say\nyou have something to give me?\n\n\nYou'll have to forgive me. I'm a little\ntoo busy right now. Do you think...you\ncould come by my house later?\nI'll be there <r<tonight>>.\nSorry for the inconvenience... Hope\nto see you later.")
/*<180>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				  case 1:
          					goto flw_116
          				}
          			}
          		  case 1:
/*<183>*/ 			switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          			  case 0:
/*<186>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 184, 'param3': 31}
/*<184>*/ 				printf("\x0E\x01\x09\x04\x00\x01...Welcome!\n\x0E\x01\x06\x02\xFBCD......\x0E\x01\x06\x02Í\x0E\x01\x09\x04\n\xA06Sigh...\n\n\n\x0E\x01\x09\x04ÿ\xFF00Sorry--I shouldn't be sighing in front\nof a customer... You see, recently\nI haven't been able to sleep <r<at night>>...\n\nAhhh... Sorry, I also shouldn't be\ncomplaining in front of a customer...\nAgain...")
/*<185>*/ 				zone_temp_flags[7 /* 0x1 80 */] = true;
          				goto flw_116
          			  case 1:
          				goto flw_116
          			}
          		}
          	}
          }

