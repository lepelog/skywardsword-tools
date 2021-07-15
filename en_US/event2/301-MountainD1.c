          void entrypoint_301_11() {
/*<107>*/ 	start()
/*<108>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaster, I am detecting new enemies\nahead. They appear to be creatures\nof very significant physical ability.\n\nPress (Z) to<g< target >>an enemy, then (v)\nto call me. I will then share any data\nI have on that enemy.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          }

          void entrypoint_301_01() {
          	start()
/*< 24>*/ 	{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2064, 'next': 1, 'param3': 13}
/*<  1>*/ 	printf("My partner's gone missing, and those\nred guys are everywhere!\nI never shoulda come here.")
/*< 31>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -255, 'next': 33, 'param3': 13}
/*< 33>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 32, 'param3': 17}
/*< 32>*/ 	printf("Oh, it's you again. Come all this way\nin search of your friend, eh?\n\n\nThat reminds me...<pause0F> Before I came in\nhere, I saw a<r< weird-looking blonde girl\n>>get dragged away.\n\nBut \x0E\x01\x09\x04\x14\x1215don't even dream about going to\nthe rescue. Those baddies are\neverywhere!\n\n\x0E\x01\x09\x04ÿ\xFF00If you wanna live to...live again one\nday, you should head for home, pal!")
/*< 23>*/ 	scene_flags[14 'Eldin: Earth Temple'][51 /* 0x7 08 */] = true;
          }

          void entrypoint_301_03() {
/*<  2>*/ 	start()
/*< 22>*/ 	printf("\x0E\x01\x12\x04\x00\x04Master Link. It appears\nZelda has cleansed herself in the\nwaters of this fountain.\n\nBased on the information from the\nmessage I just imparted, I project she\nis traveling to a region known as\n<b<Lanayru>>.\nIf you transport this tablet back to the\nstatue in Skyloft, a new column of\nlight will appear that will allow you to\ntravel to the <b<Lanayru region>>.\nI suggest you return at once to <b<Skyloft\n>>and then set out for the Lanayru\nregion.")
/*< 20>*/ 	story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */] = true;
/*< 21>*/ 	zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 60, 'param3': 36}
/*< 60>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 6}
          }

          void entrypoint_301_04() {
/*<  4>*/ 	start()
/*< 25>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 3, 'param3': 13}
/*<  3>*/ 	printf("Blast! I must have dropped it earlier...")
/*< 87>*/ 	make_actor_do_something(3, 0)
/*< 28>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 30, 'param3': 17}
/*< 30>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3346, 'next': 29, 'param3': 13}
/*< 29>*/ 	printf("Hey! Nice timing, pal. It's me, <b<Ledd>>!\n\n\n\n\x0E\x01\x09\x04ÿ\xFFFFYou showing up here must mean we're\nconnected somehow. You know, like\nfate or something. Anyways, do me a\nfavor and get my <y<Bomb Bag>>, OK?")
/*<102>*/ 	set_camera(16, 0)
/*<101>*/ 	printf("I was behind that rock looking for\ntreasure when those creeps showed up.<pause0F>\nI panicked and hit the road, but\x0E\x01\x09\x04\x13\x100D\nit looks like I dropped it.")
/*<104>*/ 	set_camera(-1, 0)
/*<103>*/ 	printf("\x0E\x01\x09\x04\x09\x8FFIt's a <r<bag for carrying around bomb\nflowers>>. I can't imagine not having one.\nOh, hey...I guess I don't have to\nimagine it, 'cause I lost mine!\nAnyway, it's back there... <pause0A>\x0E\x01\x09\x04\x11\xDFFDo me a \nfavor and get my <y<Bomb Bag >>back,\nwill you?")
          }

          void entrypoint_301_05() {
/*<  5>*/ 	start()
/*< 94>*/ 	set_camera(14, 0)
/*< 93>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 92, 'param3': 40}
/*< 92>*/ 	{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 100, 'next': 88, 'param3': 14}
/*< 88>*/ 	make_actor_do_something(3, 0)
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 95, 'param3': 17}
/*< 95>*/ 	set_camera(15, 0)
/*<  6>*/ 	printf("\x0E\x01\x09\x04\x11\xD08Heyyyyy! You found my <y<Bomb Bag>>!\n\n\n\n\x0E\x01\x09\x04ÿ\x8FFSorry to put you through that. I guess \nI owe you one now! So let me have it...<pause14>\n\n\n\x0E\x01\x09\x04\x11\xD0EWhat's this, now? You want to borrow\nit so you can go deeper into the\nvolcano?\n\n\x0E\x01\x09\x04ÿ\xFFFFOh, right. You're looking for your\nfriend. You sure have put yourself out\nthere, getting this far...\n\n\x0E\x01\x09\x04\x15\xD11That reminds me!<pause0F> How's MY pal?\n[1]Gone...[2]Worried![3]No idea.")
/*< 34>*/ 	switch (choice(3)) {
          	  case 0:
/*< 35>*/ 		printf("\x0E\x01\x09\x04\x13\x1007Seriously? Can't depend on anybody\nthese days...\n\n\n\x0E\x01\x09\x04ÿ\x8FFLet me take that back. Looks like your\nfriend can count on you, though, right?\nYou've risked life and limb to get here.\n\n\x0E\x01\x09\x04\x14\x1209I'm not letting you borrow my bag,\nthough. Nope. I'm GIVING it to you!\nJust don't blow yourself up...")
          		flw_105:
/*<105>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 19, 'param3': 42}
/*< 19>*/ 		give_item(92 0x5C);
/*< 26>*/ 		{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -245, 'next': 18, 'param3': 13}
/*< 18>*/ 		printf("Now you've got my <y<Bomb Bag>>.\nGo find your friend!")
/*<106>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 36>*/ 		printf("\x0E\x01\x09\x04\x00\x1004He's worried? About me?<pause0F> What kind\nof pal am I, putting him through that?\n\n\n\x0E\x01\x09\x04ÿ\x8FFYou must be worried too. Not knowing\nif your friend's dead or alive...\n\n\n\x0E\x01\x09\x04\x14\x1209I'm not letting you borrow my bag,\nthough. Nope. I'm GIVING it to you!\nJust don't blow yourself up...")
          		goto flw_105
          	  case 2:
/*< 37>*/ 		printf("\x0E\x01\x09\x04\x00\x804That so? Hmm... <pause0F>I hope he's OK.\nHey...you don't think those monsters\nhave...\n\n\x0E\x01\x09\x04\x00\x8FFYou must be worried yourself.\nNot knowing if your friend's dead or\nalive or some awful place in between...\n\n\x0E\x01\x09\x04\x14\x1209I'm not letting you borrow my bag,\nthough. Nope. I'm GIVING it to you!\nJust don't blow yourself up...")
          		goto flw_105
          	}
          }

          void entrypoint_301_06() {
/*< 11>*/ 	start()
/*< 89>*/ 	make_actor_do_something(3, 0)
/*< 27>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 10, 'param3': 17}
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x11\xD12Hold up! I forgot to tell you something!\n\n\n\n\x0E\x01\x09\x04\x09\x8FFKnowing me, that bag's probably\nempty, so let me give you a little\nsomething to get you started.")
/*< 16>*/ 	give_item(40 0x28);
/*< 17>*/ 	printf("If you run out of bombs, just find some\nmore and fill the bag back up.\n\n\n\x0E\x01\x09\x04\x11\x80BWhen you've got a bomb flower, press\n<g<(B) to put it in the bag>>. Don't forget!\x0E\x01\x11\x02\x1CD\n\n\n\x0E\x01\x09\x04\x09\x8FFThat bag can <r<hold up to 10 bombs>>.\nSo if you run across bomb flowers,\nbe sure to fill up the bag.")
          }

          void entrypoint_301_07() {
/*<  7>*/ 	start()
/*< 90>*/ 	make_actor_do_something(3, 0)
/*< 91>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 9, 'param3': 17}
/*<  9>*/ 	check_item_flag(92, 1)
/*<  8>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 0}) {
          	  case 0:
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x11\xD00Let me ask you something. You ever\nbeen set on fire when you're fighting\nbad guys?\n\n\x0E\x01\x09\x04\x09\x8FFDo yourself a favor and put the fire\nout quick! Oh, and never, EVER pull\nout a <y<bomb>> when you're covered in\nflames. Trust me on that.")
          	  case 1:
/*< 99>*/ 		switch (scene_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*<100>*/ 			printf("\x0E\x01\x09\x04\x15\x809Heh heh, nice work. Rolling <y<bomb\nflowers >>through there--that's the mark\nof a real professional adventurer!\n\n\x0E\x01\x09\x04\x11\x800Keep it up, and go grab my <y<Bomb Bag>>!")
          		  case 1:
/*< 96>*/ 			switch (temp_flags[57 /* 0x6 02 */]) {
          			  case 0:
/*< 13>*/ 				printf("I think you should be able to blow your\nway in there. Why don't you search the\narea for some <y<bomb flowers>>?")
          			  case 1:
/*< 97>*/ 				printf("Oh, right... <pause0F>You can't tunnel, so you\ncan't get back there. Hmm...\n\n\n\x0E\x01\x09\x04\x15\x120CYou should be able to blow your way\nin there with a <y<bomb flower>>. \n\n\n\x0E\x01\x09\x04\x09\xFF00Why don't you start by seeing if there\nare any <y<bomb flowers >>in the area?")
/*< 98>*/ 				temp_flags[57 /* 0x6 02 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_301_08() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf("Earth Temple")
          }

          void entrypoint_301_09() {
/*< 39>*/ 	start()
/*< 80>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1006, 'next': 54, 'param3': 24}
/*< 54>*/ 	story_flags[686 /* us: 805A9B21 0x08, jp: 805ACDA1 0x08 */] = true;
/*< 82>*/ 	story_flags[748 /* us: 805A9B29 0x10, jp: 805ACDA9 0x10 */] = true;
/*< 50>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 13, 'next': 49, 'param3': 32}
/*< 49>*/ 	{'type': 'type3', 'subType': 1, 'param1': 13, 'param2': 99, 'next': 56, 'param3': 16}
/*< 56>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 1, 'next': 52, 'param3': 40}
/*< 52>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1279, 'next': 70, 'param3': 13}
/*< 70>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 51, 'param3': 6}
/*< 51>*/ 	set_camera(2, 0)
/*< 40>*/ 	printf("\x0E\x01\x09\x04\xD08\x5FFOh, it's you.")
/*< 79>*/ 	set_camera(10, 0)
/*< 78>*/ 	printf("\x0E\x01\x09\x04\xD00\x5FFLet me see<pause01>.<pause01>.<pause01>.<pause01> <pause08>No, that's not it.<pause14> This is\nso very embarrassing, but I seem to be\nat a loss for your name.\n\n\x0E\x01\x09\x04\xD0A\x5FFNot that it matters, really. To tell you\nthe truth, I'm feeling a bit frustrated,\nand right now I just need someone to\nvent to.")
/*< 73>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3339, 'param2': 3327, 'next': 72, 'param3': 13}
/*< 72>*/ 	set_camera(6, 0)
/*< 58>*/ 	printf("\x0E\x01\x09\x04\xD00\x900I heard my underlings had finally\ncaptured the spirit maiden, so of\ncourse I rushed over here. What can I\nsay? I was excited. Flustered, even...\nBut what did I find when I arrived?\n\x0E\x01\x09\x04\xD00\xCFFThat agent of the goddess...")
/*< 74>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3340, 'param2': 3327, 'next': 65, 'param3': 13}
/*< 65>*/ 	printf("\x0E\x01\x08\x02\xFECD\x0E\x01\n\x04\x0CÍShe had once again...\n\n\n\n\x0E\x01\x09\x04\xD00\xCFF\x0E\x01\x08\x02\xFECD<pause0F>\x0E\x01\n\x04\x0DÍYou see, what I'm trying to say is...")
/*< 75>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3341, 'param2': 3583, 'next': 66, 'param3': 13}
/*< 66>*/ 	printf("\x0E\x01\x05\x04-\x00\x0E\x01\x08\x02\x2CDThat goddess-serving dog\n\x0E\x01\n\x04\x0BÍescaped with the girl!")
/*< 81>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3342, 'param2': 3583, 'next': 63, 'param3': 13}
/*< 63>*/ 	printf("\x0E\x01\x08\x02\x1CDI MUST have the spirit maiden\nin order to resurrect my master!\nI MUST HAVE HER!")
/*< 77>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1535, 'next': 76, 'param3': 13}
/*< 76>*/ 	set_camera(9, 0)
/*< 64>*/ 	printf("<pause05>.<pause05>.<pause05>.<pause05><pause0A>I got a little carried away there,\ndidn't I? I don\x2019t deal well with...\ncomplications to plans I\x2019ve laid out so\ncarefully. It\x2019s a character flaw of mine.\n\x0E\x01\x09\x04\xD08\x5FFAh, but something good can still come\nfrom this day! I've had all this bottled-\nup anger smoldering inside me, and\nnow I can release it.")
/*< 67>*/ 	set_camera(3, 0)
/*< 61>*/ 	printf("\x0E\x01\x09\x04\xD0A\x5FFThere's someone special I'd like you to\nmeet. Oh, don't be shy! I need to vent\nall this unhealthy anger, and your\nagony is such a great stress reliever.")
/*< 71>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1535, 'next': 68, 'param3': 13}
/*< 68>*/ 	set_camera(4, 0)
/*< 62>*/ 	printf("It won't take more than a few moments\nwith my friend before you're charred\nto a satisfying crisp. And let me tell\nyou, that will put a spring in my step!")
/*< 47>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3337, 'param2': 1791, 'next': 69, 'param3': 13}
/*< 69>*/ 	set_camera(5, 0)
/*< 53>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 65, 'next': 48, 'param3': 6}
/*< 48>*/ 	story_flags[189 /* us: 805A9AE9 0x10, jp: 805ACD69 0x10 */] = true;
/*< 83>*/ 	story_flags[748 /* us: 805A9B29 0x10, jp: 805ACDA9 0x10 */] = false;
/*< 55>*/ 	zone_temp_flags[1 /* 0x1 02 */] = true;
/*< 84>*/ 	switch (scene_flags[28 /* 0x2 10 */]) {
          	  case 0:
/*< 85>*/ 		zone_temp_flags[3 /* 0x1 08 */] = true;
          		flw_57:
/*< 57>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*< 86>*/ 		scene_flags[14 'Eldin: Earth Temple'][28 /* 0x2 10 */] = true;
          		goto flw_57
          	}
          }

          void entrypoint_301_10() {
/*< 41>*/ 	start()
/*< 42>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaster, I detect Zelda's aura in the\nsurrounding area.")
/*< 44>*/ 	set_camera(1, 0)
/*< 43>*/ 	printf("I detect an especially strong reaction\nfrom this chain. I calculate the\nprobability Zelda was bound by it\nrecently at 95%.")
/*< 45>*/ 	set_camera(-1, 0)
/*< 46>*/ 	printf("I surmise Zelda was somehow able to\nescape and proceed along this path.\nI suggest we continue with all possible\nspeed.")
          }

