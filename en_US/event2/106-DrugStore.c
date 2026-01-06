          void entrypoint_106_34() {
/*< 22>*/ 	start()
/*< 51>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 21, 'param3': 12}
/*< 21>*/ 	check_item_flag(153, 1)
/*< 20>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 12}) {
          	  case 0:
/*< 26>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000001>This mysterious elixir is known as\n<color yellow<<item 126>>coloroff>!\n\n\nSimply pour it on a broken shield, and\nin moments the shield will be as good as\nnew! It's amazing!\n\nNot only that, but this multipurpose\nmixture will even restore <color red<four>coloroff> hearts!\n\n\nHow about some to take on your\ntravels? It's only <color red<30 Rupees>coloroff>!\n[1-]OK![2]No, thanks.")
          		flw_11:
/*< 11>*/ 		switch (choice(2)) {
          		  case 0:
/*< 13>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 26}
          		  case 1:
/*< 12>*/ 			entrypoint_106_08();
          		}
          	  case 1:
/*< 29>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00090702>Hello there!\n\n\n\n<0x10009:0x000c0b00>Oh...but before I get into my spiel,\nI should warn you that you need an\nEmpty Bottle to buy anything here. \nUnderstand, dear?\n<0x10009:0x000d0700>If you want to know more about how\nthings work around here, just ask!")
          	}
          }

          void entrypoint_106_51() {
/*< 65>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00070704>Ahh, OK... I can improve this potion.\nYou're sure this is what you want?\n[1-]Yep.[2]Maybe not...")
/*< 70>*/ 	switch (choice(2)) {
          	  case 0:
/*<110>*/ 		make_actor_do_something(3, 0)
/*< 68>*/ 		printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x00070700>Ah, wonderful... Just a moment...\nSorry to make you wait like this...")
/*< 99>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 71, 'param3': 12}
/*< 71>*/ 		make_actor_do_something(1, 0)
/*< 72>*/ 		printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00070708>All done... Here you are. I hope I didn't\nset your expectations too high...")
/*< 89>*/ 		zone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 73>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000a0a06>I understand... Is there anything else\nI can infuse for you?")
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
/*< 57>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x0000000b>That is a <color yellow<<item 65>>coloroff>.\nThis stuff makes you feel invincible!\nIt's a potion that reduces the damage\nyou take for a little bit of time.\nIf you find yourself facing an opponent\nwho's a little out of your league, this is\nthe potion for you!\n\nThis kind of potion doesn't come cheap\nthough. It's <color red<200 Rupees>coloroff>. How about it?\n[1-]Sure![2]No, thanks.")
          		goto flw_11
          	  case 1:
/*< 58>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00090702>Hello there!\n\n\n\n<0x10009:0x000c0b00>Oh...but before I get into my spiel,\nI should warn you that you need an\nEmpty Bottle to buy anything here. \nUnderstand, dear?\n<0x10009:0x000d0700>If you want to know more about how\nthings work around here, just ask!")
          	}
          }

          void entrypoint_106_52() {
/*< 74>*/ 	start()
/*< 90>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 91>*/ 		printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00090908>Thank you very much! Yes, thank you!\nPlease, please come again!")
          	  case 1:
/*< 75>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x000a0a06>Oh... So you're not interested?\nWell, I hope to see you again.")
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
/*<  5>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x0000000b>Hmm? Something I can do for you?\n[1-]Teach me![2]Not really.")
          							flw_2:
/*<  2>*/ 							switch (choice(2)) {
          							  case 0:
/*<  4>*/ 								printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000004>Such a smart boy you are! Just stand\nin front of the potion you want to hear\nabout, and press (A).\n\nI'll talk you through everything that\npotion will do for you. The potions I\ncarry are pretty basic.\n\nHowever, if you want something\nwith a bit more kick to it...\n\n\n<0x10009:0x000d0700>You can buy one of my potions and\nwalk it a few steps down to my husband\nthere. He'll be able to help you out.\n\n<0x10009:0x000c0000>He might not look like much, but he\nmixes a mean potion, and he's used to\ndealing with kids like you.")
          								flw_7:
/*<  7>*/ 								zone_temp_flags[2 /* 0x1 04 */] = true;
          							  case 1:
/*<  3>*/ 								printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x000c0b0e>No need to be rude. I'm busy too,\nyou know! But you look like such a\nnice boy, so I'll forgive you.\n\n<0x10009:0x000d0000>If you want some more potent potions,\ngo and talk to my husband. He can mix\nup ingredients to infuse and improve\nthe regular potions I sell here.")
          								goto flw_7
          							}
          						  case 1:
/*<  1>*/ 							printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Welcome, young man!\n\n\n\nThis is the Potion Shop! I sell potions\nthat you'll find handy in sticky\nsituations. Want to hear more?\n[1-]Sure![2]Nah.")
          							goto flw_2
          						}
          					  case 1:
/*<107>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 106, 'param3': 31}
/*<106>*/ 						printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00000001>Here's something that'll put some fire\nin your belly, young man! The new\npotion I've been concocting is finally\nready!\nI call it a <color yellow<Stamina Potion>coloroff>!\n\n\n\nIf you drink this up, your stamina\ngauge won't drop as fast as usual!\n\n\nI'll admit it's a bit on the pricey side,\nbut I bet you'll find yourself in a\nsituation where a boost of stamina\nwill make it worthwhile!\nIf you want to buy some, just walk on\nover to the display and take a look!")
/*<108>*/ 						scene_flags[0 'Skyloft'][85 /* 0xB 20 */] = true;
/*<131>*/ 						zone_temp_flags[2 /* 0x1 04 */] = true;
          					}
          				  case 1:
          					goto flw_6
          				}
          			  case 1:
/*<128>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 31}
/*<129>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000001>Boy, have I got the new potion for you!\nI call it...the Air Potion!\n\n\nOne delicious gulp of this elixir and\nyou'll find that while you are\nunderwater, your <color blue<oxygen gauge>coloroff> will\ndrop much more slowly!\nYou'll be like a little fish, young man!\nAnd the price is more than generous,\nif I do say so myself.\n\nIf you're interested in a bottle, young\nman, just examine the blue cauldron,\nand I'll come running!")
/*<130>*/ 				story_flags[1075 /* us: 805A9B50 0x02, jp: 805ACDD0 0x02 */] = true;
/*<132>*/ 				zone_temp_flags[2 /* 0x1 04 */] = true;
          			}
          		  case 1:
          			goto flw_105
          		}
          	  case 1:
/*< 52>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 39, 'param3': 31}
/*< 39>*/ 		printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00000002>Hey! You there! Yes, you! The adorable\nboy with the golden hair!\n\n\nWelcome to the Potion Shop! \nYou can drink our potions when you're\ninjured to fill up your hearts.\n\n<0x10009:0x000d0700>Hey, you're one of those knights,\naren't you? Or one in training,\nat least, hmmm?\n\nLet me tell you, one look at you and\nI can tell you'll need my potions by\nthe cauldron full! So don't try to slink\naway without stocking up.")
/*< 42>*/ 		printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x000c0b06>Oh dear<0x10006:0xfccd>...<0x10006:0x00cd>\n\n\n\nI forgot to ask if you have an Empty\nBottle on you...\n\n\nJust so you know, I can't sell you a \npotion if you don't have an Empty \nBottle to pour it into!\n\n<0x10009:0x0009090b>For some reason, I like you, though, so\nI'll give you a spare Empty Bottle I've\nbeen keeping here in the stall!\nOh, it's nothing. It's my little gift.\n<0x10009:0x00070700>You won't hear me say this often, but\nyou can put other things besides\npotions in an Empty Bottle, so it's a\nuseful thing to carry around!")
/*< 45>*/ 		check_item_flag(112, 1)
/*< 46>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 16}) {
          		  case 0:
/*< 59>*/ 			switch (is_adventure_pouch_full()) {
          			  case 0:
/*< 60>*/ 				printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x000c0b08>Dear, your pouch is full! You're quite\nthe little shopper, aren't you?\n\n\n<0x10009:0x000a0a00>Why don't you leave some of your\nthings with that nice Item Check girl?\nThen you won't have to carry all that\njunk around with you!")
          			  case 1:
/*< 44>*/ 				give_item(153 0x99);
/*< 41>*/ 				story_flags[35 /* us: 805A9ADD 0x08, jp: 805ACD5D 0x08 */] = true;
/*< 96>*/ 				switch (scene_flags[89 /* 0xA 02 */]) {
          				  case 0:
/*< 43>*/ 					printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x000d070b>Empty Bottles fit in your Adventure\nPouch. Press (-) to take a look.<0x10011:0x02cd>")
/*<114>*/ 					printf(/* textboxtype: 1, unk: 0, line: 8 */ "If you ever get to the point where you\ncan't fit any more stuff in your pouch\nbecause it's full, you can always drop\nitems off at the Item Check.\n<0x10009:0x000c070b>So what would you like to buy?")
          					goto flw_7
          				  case 1:
/*< 97>*/ 					printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x000d070b>Empty Bottles fit in your Adventure\nPouch. Press <color green<(-) >coloroff>to take a look. <0x10011:0x02cd>\n\n\nHold (-) and tilt the Wii Remote to\nchoose the item you want to use.<0x10011:0x02cd>\n\n\nRelease (-) to select that item.\nEasy, right?<0x10011:0x02cd>")
/*<115>*/ 					printf(/* textboxtype: 1, unk: 0, line: 8 */ "If you ever get to the point where you\ncan't fit any more stuff in your pouch\nbecause it's full, you can always drop\nitems off at the Item Check.\n<0x10009:0x000c070b>So what would you like to buy?")
/*< 98>*/ 					story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
/*<111>*/ 					scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
          				}
          			}
          		  case 1:
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "")
          		}
          	}
          }

          void entrypoint_106_53() {
/*< 79>*/ 	start()
/*<112>*/ 	switch (context_related2(0)) {
          	  case 0:
/*< 81>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "If you have any other potions that\nyou want to infuse, you can bring\nthem to me. I'll be happy to help!")
/*< 80>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<113>*/ 		printf(/* textboxtype: 1, unk: 0, line: 40 */ "Ah... I'm afraid this potion can't be\nimproved on. If you'd like to buy some\npotions, please speak with my wife...")
          	}
          }

          void entrypoint_106_70() {
/*<133>*/ 	start()
/*<136>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 134, 'param3': 12}
/*<134>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x0000000a>Oh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs just a whiff\nof <color yellow<<item 141>>coloroff>.\nAccording to my secret infuser's\nhandbook, these<color yellow< >coloroff>can be found within\nheavily wooded areas.")
          	flw_137:
/*<137>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00070000>Sorry to disappoint... How about\nanother potion?")
/*<135>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_54() {
/*< 82>*/ 	start()
/*<101>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 84, 'param3': 12}
/*< 84>*/ 	printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x0000000a>Oh, but...you don't have enough\nmaterials to enhance this potion...\n\n\nI'm really sorry, but...maybe you\ncould choose something else?")
/*< 87>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_71() {
/*<138>*/ 	start()
/*<140>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 139, 'param3': 12}
/*<139>*/ 	printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x0000000a>Oh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. The brew still needs a light\ndusting of <color yellow<<item 142>>coloroff>.\nAccording to my secret infuser's\nhandbook, these<color yellow< >coloroff>can be found within\nheavily wooded areas.")
          	goto flw_137
          }

          void entrypoint_106_55() {
/*< 83>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x0000000a>Oh...dear. This is so uncomfortable\nto say, but...you don't seem to\nhave enough Rupees. I'd love to help\nyou, but...you see...")
/*<102>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 86, 'param3': 12}
/*< 86>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_72() {
/*<141>*/ 	start()
/*<143>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 12}
/*<142>*/ 	printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x0000000a>Oh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. The brew still needs a smidge\nof <color yellow<<item 143>>coloroff>.\nAccording to my secret infuser's\nhandbook, these<color yellow< >coloroff>can be found within\nheavily wooded areas.")
          	goto flw_137
          }

          void entrypoint_106_56() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x0000000a>Oh no... You don't have any potions to\ninfuse.\n\n\n<0x10009:0x00090900>My wife down there sells potions,\nif you want to speak with her...")
          }

          void entrypoint_106_73() {
/*<144>*/ 	start()
/*<146>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 145, 'param3': 12}
/*<145>*/ 	printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x0000000a>Oh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs a smidge of\n<color yellow<<item 144>>coloroff>.\nAs I recall, there's quite a few of these\naround Skyloft...")
          	goto flw_137
          }

          void entrypoint_106_05() {
/*< 30>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x000a0a08>You don't have an <color yellow<Empty Bottle>coloroff>.\nCome back when you've got one,\nyoung man.")
          }

          void entrypoint_106_74() {
/*<147>*/ 	start()
/*<150>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 148, 'param3': 12}
/*<148>*/ 	printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x0000000a>Oh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs a dusting of\n<color yellow<<item 145>>coloroff>.\nAccording to my secret infuser's\nhandbook, they make their home on\na mountain of fire in the world below.")
          	flw_151:
/*<151>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00070000>Sorry to disappoint... How about\nanother potion?")
/*<149>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_06() {
/*< 31>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x000c0b08>My dear, you don't have enough\nmoney! You're such a sweet boy, but I\nhave to think of my husband and\nchildren!\n<0x10009:0x000a0a00>Come back and see me when you've\ngot some more pocket money.")
          }

          void entrypoint_106_75() {
/*<152>*/ 	start()
/*<154>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 153, 'param3': 12}
/*<153>*/ 	printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x0000000a>Oh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs a pinch of\n<color yellow<<item 146>>coloroff>.\nAs I recall, there's quite a few of these\naround Skyloft...")
          	goto flw_151
          }

          void entrypoint_106_07() {
/*< 32>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x0009090a>Thank you, sweetie! If you want a\npotion powered up, go see my husband\nat the end of the counter. He can mix\nsomething up for you.")
          }

          void entrypoint_106_76() {
/*<155>*/ 	start()
/*<157>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 156, 'param3': 12}
/*<156>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x0000000a>Oh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs just a whiff\nof <color yellow<<item 147>>coloroff>.\nAccording to my secret infuser's\nhandbook, these bugs live in large\ngroups and dwell somewhere sandy\nbelow the clouds. ")
          	goto flw_151
          }

          void entrypoint_106_08() {
/*< 33>*/ 	start()
/*< 77>*/ 	switch (random(2)) {
          	  case 0:
/*< 76>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x000a0a0e>Hmph! I don't need window-shoppers\nhere, dear.")
          	  case 1:
/*< 37>*/ 		printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x000c0b10>You don't want it, dear? I know some\nof my potions might taste a bit strange,\nbut there's no denying that they do\nwhat's advertised!")
          	}
          }

          void entrypoint_106_77() {
/*<158>*/ 	start()
/*<160>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 159, 'param3': 12}
/*<159>*/ 	printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x0000000a>Oh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs a sprinkling\nof <color yellow<<item 148>>coloroff>.\nAccording to my secret infuser's\nhandbook, these bugs live in large\ngroups and dwell somewhere sandy\nbelow the clouds. ")
          	goto flw_151
          }

          void entrypoint_106_78() {
/*<161>*/ 	start()
/*<164>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 162, 'param3': 12}
/*<162>*/ 	printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x0000000a>Oh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs a pinch or\ntwo of <color yellow<<item 149>>coloroff>.\nAccording to my secret infuser's\nhandbook, these bugs live in large\ngroups and dwell somewhere sandy\nbelow the clouds. ")
          	flw_165:
/*<165>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00070000>Sorry to disappoint... How about\nanother potion?")
/*<163>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_79() {
/*<166>*/ 	start()
/*<168>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 167, 'param3': 12}
/*<167>*/ 	printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x0000000a>Oh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs a savory\nhint of <color yellow<<item 150>>coloroff>.\nAccording to my secret infuser's\nhandbook, they make their home on\na mountain of fire in the world below.")
          	goto flw_165
          }

          void entrypoint_106_80() {
/*<169>*/ 	start()
/*<171>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 170, 'param3': 12}
/*<170>*/ 	printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x0000000a>Oh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs a smidge of\n<color yellow<<item 151>>coloroff>.\nSkyloft is quite famous for these lovely\nbugs, isn't it?")
          	goto flw_165
          }

          void entrypoint_106_81() {
/*<172>*/ 	start()
/*<174>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 173, 'param3': 12}
/*<173>*/ 	printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x0000000a>Oh...if you want to infuse that potion,\nI'm afraid you're still one ingredient\nshort. This brew still needs just a whiff\nof <color yellow<<item 152>>coloroff>.\nAs I recall, you can only find these at\nnight in Skyloft and a few other areas\naround the sky. And they're quite rare.")
          	goto flw_165
          }

          void entrypoint_106_31() {
/*< 10>*/ 	start()
/*< 48>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 9, 'param3': 12}
/*<  9>*/ 	check_item_flag(153, 1)
/*<  8>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 4}) {
          	  case 0:
/*< 38>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000001>That's a vat of <color yellow<<item 78>>coloroff>!\nDrink this, dear, and it will replenish\neight hearts.\n\nWhy don't you pick some up for your\nadventure? It's only <color red rupee<20 Rupees>coloroff>.\nHow about it?\n[1-]Yes, please.[2]No, thanks.")
          		goto flw_11
          	  case 1:
/*< 23>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00090702>Hello there!\n\n\n\n<0x10009:0x000c0b00>Oh...but before I get into my spiel,\nI should warn you that you need an\nEmpty Bottle to buy anything here. \nUnderstand, dear?\n<0x10009:0x000d0700>If you want to know more about how\nthings work around here, just ask!")
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
/*< 24>*/ 			printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00000004>That's <color yellow<<item 86>>coloroff>! If you drink that,\nyour <color blue<oxygen gauge >coloroff>will reduce less\nquickly when you're underwater\nfor a short time.\nAre you interested, dear? It's only\n<color red rupee<20 Rupees>coloroff>.\n[1-]Sure![2]No, thanks.")
          			goto flw_11
          		  case 1:
/*<125>*/ 			printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x000c0b04>Slow down, dear. That potion is not\nquite ready for public consumption yet,\nbut I promise I'll have it out soon!\n\n<0x10009:0x00090700>In the meantime, I've got plenty of\nother great potions for you to try out.\nWhy not have a look?")
          		}
          	  case 1:
/*< 27>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00090702>Hello there!\n\n\n\n<0x10009:0x000c0b00>Oh...but before I get into my spiel,\nI should warn you that you need an\nEmpty Bottle to buy anything here. \nUnderstand, dear?\n<0x10009:0x000d0700>If you want to know more about how\nthings work around here, just ask!")
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
/*< 25>*/ 			printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x0000000b>Now that amazing concoction is called\n<color yellow<<item 84>>coloroff>.\n\n\nDrinking it will make your <color blue<stamina\ngauge >coloroff>decrease more slowly for a\nshort time.\n\nIt's a little pricey but well worth it.\nI'll sell it to you for <color red<50 Rupees>coloroff>!\n[1-]OK![2]No, thanks.")
          			goto flw_11
          		  case 1:
/*<104>*/ 			printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x000c0b04>This wonderful potion completely stops\nyour <color blue<stamina gauge >coloroff>from being\ndepleted for a little while.\n\nHowever, I haven't quite perfected\nthe formula, so you'll have to wait until\nit's ready.\n\n<0x10009:0x00090700>Please feel free to take a look at my\nother potions, though.")
          		}
          	  case 1:
/*< 28>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00090702>Hello there!\n\n\n\n<0x10009:0x000c0b00>Oh...but before I get into my spiel,\nI should warn you that you need an\nEmpty Bottle to buy anything here. \nUnderstand, dear?\n<0x10009:0x000d0700>If you want to know more about how\nthings work around here, just ask!")
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
/*< 62>*/ 				printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00000001>Ah...hello... Welcome to my humble\nlittle side business over here.\n\n\nI, uh...infuse the potions my wife sells\nwith new ingredients to increase their\npower. It's nothing, really...just\nsomething I like to do.\n<0x10009:0x00070700>Well...ah, do you have any potions\nyou would like me to infuse?\n[1-]Sure.[2]Nah.")
/*< 63>*/ 				switch (choice(2)) {
          				  case 0:
/*< 94>*/ 					switch (context_related2(0)) {
          					  case 0:
/*< 66>*/ 						printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000003>These are the potions you are currently\ncarrying that I can infuse...")
/*< 64>*/ 						make_actor_do_something(0, 0)
          					  case 1:
/*< 95>*/ 						printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x0000000a>Oh no... You don't have any potions to\ninfuse.\n\n\n<0x10009:0x00090900>My wife down there sells potions,\nif you want to speak with her...")
          					}
          				  case 1:
/*< 67>*/ 					printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x000a0a06>I see... No bother to me... Hope to see\nyou again...someday...")
          				}
          			  case 1:
/*<121>*/ 				switch (zone_temp_flags[6 /* 0x1 40 */]) {
          				  case 0:
/*<123>*/ 					printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000001>You can buy a <color yellow<Bug Net >coloroff>from <color red<Beedle's\nAirshop>coloroff> if you don't have one...\n\n\nBeedle is usually flying his shop outside\naround the Bazaar... Yes... If you <color green<look\naround>coloroff>, you should see him up there...")
          				  case 1:
/*<117>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 120, 'param3': 31}
/*<120>*/ 					printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00000001>Oh, welcome! Our shop is in the potion-\nbrewing-and-infusing business, as\nI'm sure you know...\n\nAnyway, I can improve potions you buy\nover there from my wife.\n\n\n<0x10009:0x00000007>But of course... Sir, you'll need to\nbring me some insects if you want me\nto improve potions for you. Or bugs...\nYou can call them bugs if you like...\nYou can buy a <color yellow<Bug Net >coloroff>from <color red<Beedle's\nAirshop>coloroff> if you don't have one...\n\n\n<0x10009:0x00070708>Beedle is usually flying his shop outside\naround the Bazaar... Yes... If you <color green<look\naround>coloroff>, you should see him up there...")
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
/*<179>*/ 					printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00000001>Oh, welcome... Sorry, did you just say\nyou have something to give me?\n\n\nYou'll have to forgive me. I'm a little\ntoo busy right now. Do you think...you\ncould come by my house later?\nI'll be there <color red<tonight>coloroff>.\nSorry for the inconvenience... Hope\nto see you later.")
/*<180>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				  case 1:
          					goto flw_116
          				}
          			}
          		  case 1:
/*<183>*/ 			switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          			  case 0:
/*<186>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 184, 'param3': 31}
/*<184>*/ 				printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00000001>...Welcome!\n<0x10006:0xfbcd>......<0x10006:0x00cd><0x10009:0x000a0a06>Sigh...\n\n\n<0x10009:0x00ffff00>Sorry--I shouldn't be sighing in front\nof a customer... You see, recently\nI haven't been able to sleep <color red<at night>coloroff>...\n\nAhhh... Sorry, I also shouldn't be\ncomplaining in front of a customer...\nAgain...")
/*<185>*/ 				zone_temp_flags[7 /* 0x1 80 */] = true;
          				goto flw_116
          			  case 1:
          				goto flw_116
          			}
          		}
          	}
          }

