          void entrypoint_301_11() {
/*<107>*/ 	start()
/*<108>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10012:0x0000000b>Master, I am detecting new enemies\nahead. They appear to be creatures\nof very significant physical ability.\n\nPress (Z) to<color green< target >coloroff>an enemy, then (v)\nto call me. I will then share any data\nI have on that enemy.<0x10011:0x07cd><0x10011:0x09cd>")
          }

          void entrypoint_301_01() {
          	start()
/*< 24>*/ 	{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2064, 'next': 1, 'param3': 13}
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "My partner's gone missing, and those\nred guys are everywhere!\nI never shoulda come here.")
/*< 31>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -255, 'next': 33, 'param3': 13}
/*< 33>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 32, 'param3': 17}
/*< 32>*/ 	printf(/* textboxtype: 0, unk: 1, line: 1 */ "Oh, it's you again. Come all this way\nin search of your friend, eh?\n\n\nThat reminds me...<pause 15> Before I came in\nhere, I saw a<color red< weird-looking blonde girl\n>coloroff>get dragged away.\n\nBut <0x10009:0x00141215>don't even dream about going to\nthe rescue. Those baddies are\neverywhere!\n\n<0x10009:0x00ffff00>If you wanna live to...live again one\nday, you should head for home, pal!")
/*< 23>*/ 	scene_flags[14 'Eldin: Earth Temple'][51 /* 0x7 08 */] = true;
          }

          void entrypoint_301_03() {
/*<  2>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10012:0x00000004>Master <heroname>. It appears\nZelda has cleansed herself in the\nwaters of this fountain.\n\nBased on the information from the\nmessage I just imparted, I project she\nis traveling to a region known as\n<color blue<Lanayru>coloroff>.\nIf you transport this tablet back to the\nstatue in Skyloft, a new column of\nlight will appear that will allow you to\ntravel to the <color blue<Lanayru region>coloroff>.\nI suggest you return at once to <color blue<Skyloft\n>coloroff>and then set out for the Lanayru\nregion.")
/*< 20>*/ 	story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */] = true;
/*< 21>*/ 	zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 60, 'param3': 36}
/*< 60>*/ 	wait_frames(15)
          }

          void entrypoint_301_04() {
/*<  4>*/ 	start()
/*< 25>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 3, 'param3': 13}
/*<  3>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "Blast! I must have dropped it earlier...")
/*< 87>*/ 	make_actor_do_something(3, 0)
/*< 28>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 30, 'param3': 17}
/*< 30>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3346, 'next': 29, 'param3': 13}
/*< 29>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "Hey! Nice timing, pal. It's me, <color blue<Ledd>coloroff>!\n\n\n\n<0x10009:0x00ffffff>You showing up here must mean we're\nconnected somehow. You know, like\nfate or something. Anyways, do me a\nfavor and get my <color yellow<Bomb Bag>coloroff>, OK?")
/*<102>*/ 	set_camera(16, 0)
/*<101>*/ 	printf(/* textboxtype: 0, unk: 1, line: 4 */ "I was behind that rock looking for\ntreasure when those creeps showed up.<pause 15>\nI panicked and hit the road, but<0x10009:0x0013100d>\nit looks like I dropped it.")
/*<104>*/ 	set_camera(-1, 0)
/*<103>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x000908ff>It's a <color red<bag for carrying around bomb\nflowers>coloroff>. I can't imagine not having one.\nOh, hey...I guess I don't have to\nimagine it, 'cause I lost mine!\nAnyway, it's back there... <pause 10><0x10009:0x00110dff>Do me a \nfavor and get my <color yellow<Bomb Bag >coloroff>back,\nwill you?")
          }

          void entrypoint_301_05() {
/*<  5>*/ 	start()
/*< 94>*/ 	set_camera(14, 0)
/*< 93>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 92, 'param3': 40}
/*< 92>*/ 	{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 100, 'next': 88, 'param3': 14}
/*< 88>*/ 	make_actor_do_something(3, 0)
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 95, 'param3': 17}
/*< 95>*/ 	set_camera(15, 0)
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00110d08>Heyyyyy! You found my <color yellow<Bomb Bag>coloroff>!\n\n\n\n<0x10009:0x00ff08ff>Sorry to put you through that. I guess \nI owe you one now! So let me have it...<pause 20>\n\n\n<0x10009:0x00110d0e>What's this, now? You want to borrow\nit so you can go deeper into the\nvolcano?\n\n<0x10009:0x00ffffff>Oh, right. You're looking for your\nfriend. You sure have put yourself out\nthere, getting this far...\n\n<0x10009:0x00150d11>That reminds me!<pause 15> How's MY pal?\n[1-]Gone...[2-]Worried![3-]No idea.")
/*< 34>*/ 	switch (choice(3)) {
          	  case 0:
/*< 35>*/ 		printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00131007>Seriously? Can't depend on anybody\nthese days...\n\n\n<0x10009:0x00ff08ff>Let me take that back. Looks like your\nfriend can count on you, though, right?\nYou've risked life and limb to get here.\n\n<0x10009:0x00141209>I'm not letting you borrow my bag,\nthough. Nope. I'm GIVING it to you!\nJust don't blow yourself up...")
          		flw_105:
/*<105>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 19, 'param3': 42}
/*< 19>*/ 		give_item(92 0x5C);
/*< 26>*/ 		{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -245, 'next': 18, 'param3': 13}
/*< 18>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "Now you've got my <color yellow<Bomb Bag>coloroff>.\nGo find your friend!")
/*<106>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 36>*/ 		printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00001004>He's worried? About me?<pause 15> What kind\nof pal am I, putting him through that?\n\n\n<0x10009:0x00ff08ff>You must be worried too. Not knowing\nif your friend's dead or alive...\n\n\n<0x10009:0x00141209>I'm not letting you borrow my bag,\nthough. Nope. I'm GIVING it to you!\nJust don't blow yourself up...")
          		goto flw_105
          	  case 2:
/*< 37>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000804>That so? Hmm... <pause 15>I hope he's OK.\nHey...you don't think those monsters\nhave...\n\n<0x10009:0x000008ff>You must be worried yourself.\nNot knowing if your friend's dead or\nalive or some awful place in between...\n\n<0x10009:0x00141209>I'm not letting you borrow my bag,\nthough. Nope. I'm GIVING it to you!\nJust don't blow yourself up...")
          		goto flw_105
          	}
          }

          void entrypoint_301_06() {
/*< 11>*/ 	start()
/*< 89>*/ 	make_actor_do_something(3, 0)
/*< 27>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 10, 'param3': 17}
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00110d12>Hold up! I forgot to tell you something!\n\n\n\n<0x10009:0x000908ff>Knowing me, that bag's probably\nempty, so let me give you a little\nsomething to get you started.")
/*< 16>*/ 	give_item(40 0x28);
/*< 17>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "If you run out of bombs, just find some\nmore and fill the bag back up.\n\n\n<0x10009:0x0011080b>When you've got a bomb flower, press\n<color green<(B) to put it in the bag>coloroff>. Don't forget!<0x10011:0x01cd>\n\n\n<0x10009:0x000908ff>That bag can <color red<hold up to 10 bombs>coloroff>.\nSo if you run across bomb flowers,\nbe sure to fill up the bag.")
          }

          void entrypoint_301_07() {
/*<  7>*/ 	start()
/*< 90>*/ 	make_actor_do_something(3, 0)
/*< 91>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 9, 'param3': 17}
/*<  9>*/ 	check_item_flag(92, 1)
/*<  8>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 0}) {
          	  case 0:
/*< 12>*/ 		printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00110d00>Let me ask you something. You ever\nbeen set on fire when you're fighting\nbad guys?\n\n<0x10009:0x000908ff>Do yourself a favor and put the fire\nout quick! Oh, and never, EVER pull\nout a <color yellow<bomb>coloroff> when you're covered in\nflames. Trust me on that.")
          	  case 1:
/*< 99>*/ 		switch (scene_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*<100>*/ 			printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00150809>Heh heh, nice work. Rolling <color yellow<bomb\nflowers >coloroff>through there—that's the mark\nof a real professional adventurer!\n\n<0x10009:0x00110800>Keep it up, and go grab my <color yellow<Bomb Bag>coloroff>!")
          		  case 1:
/*< 96>*/ 			switch (temp_flags[57 /* 0x6 02 */]) {
          			  case 0:
/*< 13>*/ 				printf(/* textboxtype: 0, unk: 1, line: 7 */ "I think you should be able to blow your\nway in there. Why don't you search the\narea for some <color yellow<bomb flowers>coloroff>?")
          			  case 1:
/*< 97>*/ 				printf(/* textboxtype: 1, unk: 1, line: 6 */ "Oh, right... <pause 15>You can't tunnel, so you\ncan't get back there. Hmm...\n\n\n<0x10009:0x0015120c>You should be able to blow your way\nin there with a <color yellow<bomb flower>coloroff>. \n\n\n<0x10009:0x0009ff00>Why don't you start by seeing if there\nare any <color yellow<bomb flowers >coloroff>in the area?")
/*< 98>*/ 				temp_flags[57 /* 0x6 02 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_301_08() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf(/* textboxtype: 0, unk: 2, line: 31 */ "Earth Temple")
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
/*< 70>*/ 	wait_frames(10)
/*< 51>*/ 	set_camera(2, 0)
/*< 40>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x0d0805ff>Oh, it's you.")
/*< 79>*/ 	set_camera(10, 0)
/*< 78>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x0d0005ff>Let me see<pause 1>.<pause 1>.<pause 1>.<pause 1> <pause 8>No, that's not it.<pause 20> This is\nso very embarrassing, but I seem to be\nat a loss for your name.\n\n<0x10009:0x0d0a05ff>Not that it matters, really. To tell you\nthe truth, I'm feeling a bit frustrated,\nand right now I just need someone to\nvent to.")
/*< 73>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3339, 'param2': 3327, 'next': 72, 'param3': 13}
/*< 72>*/ 	set_camera(6, 0)
/*< 58>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x0d000900>I heard my underlings had finally\ncaptured the spirit maiden, so of\ncourse I rushed over here. What can I\nsay? I was excited. Flustered, even...\nBut what did I find when I arrived?\n<0x10009:0x0d000cff>That agent of the goddess...")
/*< 74>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3340, 'param2': 3327, 'next': 65, 'param3': 13}
/*< 65>*/ 	printf(/* textboxtype: 0, unk: 2, line: 25 */ "<0x10008:0xfecd><0x1000A:0x000c00cd>She had once again...\n\n\n\n<0x10009:0x0d000cff><0x10008:0xfecd><pause 15><0x1000A:0x000d00cd>You see, what I'm trying to say is...")
/*< 75>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3341, 'param2': 3583, 'next': 66, 'param3': 13}
/*< 66>*/ 	printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10005:0x002d0000><0x10008:0x02cd>That goddess-serving dog\n<0x1000A:0x000b00cd>escaped with the girl!")
/*< 81>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3342, 'param2': 3583, 'next': 63, 'param3': 13}
/*< 63>*/ 	printf(/* textboxtype: 2, unk: 0, line: 27 */ "<0x10008:0x01cd>I MUST have the spirit maiden\nin order to resurrect my master!\nI MUST HAVE HER!")
/*< 77>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1535, 'next': 76, 'param3': 13}
/*< 76>*/ 	set_camera(9, 0)
/*< 64>*/ 	printf(/* textboxtype: 0, unk: 2, line: 28 */ "<pause 5>.<pause 5>.<pause 5>.<pause 5><pause 10>I got a little carried away there,\ndidn't I? I don’t deal well with...\ncomplications to plans I’ve laid out so\ncarefully. It’s a character flaw of mine.\n<0x10009:0x0d0805ff>Ah, but something good can still come\nfrom this day! I've had all this bottled-\nup anger smoldering inside me, and\nnow I can release it.")
/*< 67>*/ 	set_camera(3, 0)
/*< 61>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x0d0a05ff>There's someone special I'd like you to\nmeet. Oh, don't be shy! I need to vent\nall this unhealthy anger, and your\nagony is such a great stress reliever.")
/*< 71>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1535, 'next': 68, 'param3': 13}
/*< 68>*/ 	set_camera(4, 0)
/*< 62>*/ 	printf(/* textboxtype: 2, unk: 0, line: 30 */ "It won't take more than a few moments\nwith my friend before you're charred\nto a satisfying crisp. And let me tell\nyou, that will put a spring in my step!")
/*< 47>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3337, 'param2': 1791, 'next': 69, 'param3': 13}
/*< 69>*/ 	set_camera(5, 0)
/*< 53>*/ 	wait_frames(65)
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
/*< 42>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10012:0x0000000b>Master, I detect Zelda's aura in the\nsurrounding area.")
/*< 44>*/ 	set_camera(1, 0)
/*< 43>*/ 	printf(/* textboxtype: 0, unk: 1, line: 19 */ "I detect an especially strong reaction\nfrom this chain. I calculate the\nprobability Zelda was bound by it\nrecently at 95%.")
/*< 45>*/ 	set_camera(-1, 0)
/*< 46>*/ 	printf(/* textboxtype: 0, unk: 0, line: 20 */ "I surmise Zelda was somehow able to\nescape and proceed along this path.\nI suggest we continue with all possible\nspeed.")
          }

