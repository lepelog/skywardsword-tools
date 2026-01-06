          void entrypoint_105_35() {
/*< 40>*/ 	start()
/*< 47>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 73, 'param3': 12}
/*< 73>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 84, 'param3': 13}
/*< 84>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_41:
/*< 41>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "That's a <color yellow<Life Medal>coloroff>! It bestows a bunch\nof mysterious and mystical effects on\nwhoever carries it!\n\nWhat kind of effects<pause 10>.<pause 10>.<pause 10>.<pause 10>? Don't ask me--\nI don't actually know! You should find\nout for yourself.\n\nI'm pretty sure it's a real bargain at\n<color red<800 Rupees>coloroff>, though! How about it?\n[1-]I'll buy it![2]No, thanks.")
          		flw_13:
/*< 13>*/ 		switch (choice(2)) {
          		  case 0:
/*< 15>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 26}
          		  case 1:
/*< 14>*/ 			entrypoint_105_08();
          		}
          	  case 1:
/*< 83>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 0, line: 28 */ "That's a <color yellow<Life Medal>coloroff>! It bestows a bunch\nof mysterious and mystical effects on\nwhoever carries it!\n\nWhat kind of effects<pause 10>.<pause 10>.<pause 10>.<pause 10>? Don't ask me--\nI don't actually know! You should find\nout for yourself.\n\nToday, I'm slashing the price and\noffering it half off! Usually <color red<800\nRupees>coloroff>, now just <color red<400 Rupees>coloroff>! Want it?\n[1-]OK![2]No, thanks.")
          			goto flw_13
          		  case 1:
          			goto flw_41
          		}
          	}
          }

          void entrypoint_105_01() {
          	start()
/*< 64>*/ 	switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          	  case 0:
/*< 66>*/ 		switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          		  case 0:
/*<168>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 67, 'param3': 13}
/*< 67>*/ 			printf(/* textboxtype: 1, unk: 0, line: 5 */ "Oh, hello! I'm so glad to see you back\nat Beedle's Airshop! Let me know\nif you're interested in any of my items.")
          		  case 1:
/*<167>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 65, 'param3': 13}
/*< 65>*/ 			printf(/* textboxtype: 1, unk: 0, line: 4 */ "Oh! You are the wonderful boy who\nfound my <color blue<Horned Colossus Beetle>coloroff>!\n\n\nTo thank you, you can choose any single\nitem here and I will sell it to you at half\nprice.")
          		}
          	  case 1:
/*<161>*/ 		switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          		  case 0:
/*<202>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 164, 'param3': 31}
/*<164>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 162, 'param3': 13}
/*<162>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "Ah! Welcome!\n\n\n\nWhat?! You found something?!\nIf I try to talk about it now, we\nmight crash...\n\nWhy don't we talk later this evening?\nYou can rest on that bed over there\nuntil it's night.")
          		  case 1:
/*<163>*/ 			switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          			  case 0:
/*<166>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 165, 'param3': 13}
/*<165>*/ 				printf(/* textboxtype: 1, unk: 0, line: 7 */ "Oh! Welcome, customer...\n\n\n\nPlease, help me! My <color blue<Horned Colossus\nBeetle >coloroff>is missing!\n\n\nIt may look like it takes everything\nI've got to keep this place afloat, but I\ncan't get the thought of my poor lost\nbeetle out of my head!")
          			  case 1:
/*<193>*/ 				switch (scene_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<195>*/ 					switch (zone_temp_flags[13 /* 0x0 20 */]) {
          					  case 0:
          						flw_1:
/*<  1>*/ 						printf(/* textboxtype: 1, unk: 0, line: 0 */ "Want to know why I'm on a bicycle?\n[1-]Yeah, why?[2]Not really.")
/*< 25>*/ 						switch (choice(2)) {
          						  case 0:
/*< 26>*/ 							printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10007:0x00000015>Aren't you a curious one!\n\n\n\nI pedal this bike to generate enough\nelectricity to keep this place in the air!\nPlus, all this pedaling has got me in\nfantastic shape!\nYep, I'd say my lifestyle is pretty\n<color blue<ecofriendly>coloroff>! But, uh...with you on\nboard, there's plenty of extra weight,\nso I have to pedal as hard as I can...")
          							flw_27:
/*< 27>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "Oh, sorry! <0x10006:0xfecd>...<0x10006:0x00cd>I don't mean to be rude!\nPlease have a look around. I've got\nall kinds of great stuff!")
/*<192>*/ 							scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
/*<194>*/ 							zone_temp_flags[13 /* 0x0 20 */] = true;
          						  case 1:
/*< 87>*/ 							{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1558, 'next': 28, 'param3': 13}
/*< 28>*/ 							printf(/* textboxtype: 1, unk: 0, line: 2 */ "Fine, then. Just don't break my\nconcentration!\n\n\nWith you on board, I have to pedal as\nhard as I can because of all the\nEXTRA WEIGHT...")
/*< 88>*/ 							{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -256, 'next': 27, 'param3': 13}
          							goto flw_27
          						}
          					  case 1:
/*<185>*/ 						switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          						  case 0:
/*<184>*/ 							switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          							  case 0:
/*<191>*/ 								{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2838, 'next': 188, 'param3': 13}
/*<188>*/ 								switch (zone_temp_flags[12 /* 0x0 10 */]) {
          								  case 0:
/*<190>*/ 									printf(/* textboxtype: 1, unk: 0, line: 9 */ "Oh! If you want, you can take a nap\non the bed over there. We can talk\ntonight when I can stop pedaling!")
          								  case 1:
/*<186>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 187, 'param3': 31}
/*<187>*/ 									printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00000b00>Oh<pause 10>.<pause 10>.<pause 10>.<pause 10> Valued customer...<pause 20> You're back<pause 10>.<pause 10>.<pause 10>.<pause 10>\n\n\n\nWhat?<pause 20> I don't seem like my usual self?\n\n\n\nI can't hide anything from you, can I?\n\n\n\nWell, I can't talk about it right now\nbecause I'm busy pedaling.\nWhy don't you lie down on the bed over\nthere and rest? We can talk tonight.")
/*<189>*/ 									zone_temp_flags[12 /* 0x0 10 */] = true;
          								}
          							  case 1:
          								goto flw_1
          							}
          						  case 1:
          							goto flw_1
          						}
          					}
          				  case 1:
          					goto flw_1
          				}
          			}
          		}
          	}
          }

          void entrypoint_105_36() {
/*<135>*/ 	start()
/*<137>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 138, 'param3': 12}
/*<138>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 149, 'param3': 13}
/*<149>*/ 	zone_temp_flags[11 /* 0x0 08 */] = true;
/*<140>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_145:
/*<145>*/ 		printf(/* textboxtype: 1, unk: 0, line: 29 */ "That thing right there will allow you\nto carry one additional item in your\n<color yellow<Adventure Pouch>coloroff>!\n\nFor an adventurer like yourself, it\nhas to be the most amazing item ever\nimagined. And it costs just <color red<600>coloroff><color red< Rupees>coloroff>.\n\nWhat? Me, raise prices? Never!\nYou're obviously hallucinating! So\nhow about it? Only <color red<600>coloroff><color red< Rupees>coloroff>.\n[1-]OK![2]No, thanks.")
          		goto flw_13
          	  case 1:
/*<139>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<146>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "That thing right there will allow you\nto carry one additional item in your\n<color yellow<Adventure Pouch>coloroff>!\n\nFor an adventurer like yourself, it\nhas to be the most amazing item ever\nimagined. And it costs just <color red<300>coloroff><color red< Rupees>coloroff>.\n\nIt's usually <color red<600 Rupees>coloroff>, so you'd\nbe getting an incredible deal.\nSo, want to buy it? Only <color red<300>coloroff><color red< Rupees>coloroff>.\n[1-]OK.[2]No, thanks.")
          			goto flw_13
          		  case 1:
          			goto flw_145
          		}
          	}
          }

          void entrypoint_105_02() {
/*< 23>*/ 	start()
/*< 24>*/ 	printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10007:0x00000015>Oh! You've come all this way?\nIt's so rare to have a customer here!\n\n\nBeedle's Airshop has everything you\ncould ever want. Please, take a look\naround!\n\nAnd if you actually buy something,\nthat would be even better!")
          }

          void entrypoint_105_37() {
/*<136>*/ 	start()
/*<141>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 142, 'param3': 12}
/*<142>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 144, 'param3': 13}
/*<144>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_147:
/*<147>*/ 		printf(/* textboxtype: 1, unk: 0, line: 31 */ "This thing will open up another space\nin your <color yellow<Adventure Pouch>coloroff>. It's my last\none, so it's, uh...a little expensive!\n\nThe price is <color red<1,200 Rupees>coloroff>. If I were\nyou, I'd think hard about whether I\nreally need it or not...\n[1-]I need it![2]No, thanks.")
          		goto flw_13
          	  case 1:
/*<143>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<148>*/ 			printf(/* textboxtype: 1, unk: 0, line: 32 */ "This will open up another space in\nyour <color yellow<Adventure Pouch>coloroff>. It's my last one,\nso it's pretty expensive, I'm afraid!\n\nI usually sell it for <color red<1,200 Rupees>coloroff>.\nBut just for you, I'll sell it right now\nfor <color red<600 Rupees>coloroff>.\n\nStill, that's a lot of Rupees. If I were\nyou, I'd think carefully about whether\nI really need it...\n[1-]I need it![2]No, thanks.")
          			goto flw_13
          		  case 1:
          			goto flw_147
          		}
          	}
          }

          void entrypoint_105_38() {
/*<177>*/ 	start()
/*<178>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 179, 'param3': 12}
/*<179>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 181, 'param3': 13}
/*<181>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_182:
/*<182>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "That right there is a <color yellow<Bug Medal>coloroff>.\nAs long as you're carrying that, you'll\nbe able to see on your map where\nbugs can be found.\nQuite expensive, but if you like\ncatching bugs, it's indispensable! I'll\nsell it for <color red<1,000 Rupees>coloroff>. Wanna buy it?\n[1-]OK![2]No, thanks.")
          		goto flw_13
          	  case 1:
/*<180>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<183>*/ 			printf(/* textboxtype: 1, unk: 0, line: 34 */ "That right there is a <color yellow<Bug Medal>coloroff>.\nAs long as you're carrying that, you'll\nbe able to see on your map where\nbugs can be found.\nQuite expensive, but if you like to\ncatch bugs, it's indispensable!\n\n\nI usually sell this for <color red<1,000 Rupees>coloroff>, but\ntoday I can offer it to you for just\n<color red<500 Rupees>coloroff>. How about it?\n[1-]OK![2]No, thanks.")
          			goto flw_13
          		  case 1:
          			goto flw_182
          		}
          	}
          }

          void entrypoint_105_05() {
/*<  2>*/ 	start()
/*< 48>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 4, 'param3': 13}
/*<  4>*/ 	printf(/* textboxtype: 1, unk: 0, line: 11 */ "Oh! Your <color red<pouch>coloroff> is full! You can't\ncarry any more stuff!\n\n\nYour space at the Item Check is\ncompletely full as well?\n\n\nWell, hurry up and free up some space\nin your <color red<pouch>coloroff> or at the <color red<Item Check>coloroff>,\nand then come back!")
          }

          void entrypoint_105_06() {
/*<  3>*/ 	start()
/*< 89>*/ 	{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1558, 'next': 35, 'param3': 13}
/*< 35>*/ 	switch (story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */]) {
          	  case 0:
          		flw_5:
/*<  5>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "Oh no! You don't have enough Rupees!\nLook at my face. If that's your idea of\na joke, I'm not laughing!")
/*<151>*/ 		zone_temp_flags[10 /* 0x0 04 */] = false;
/*<152>*/ 		zone_temp_flags[11 /* 0x0 08 */] = false;
          	  case 1:
/*<169>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
          			goto flw_5
          		  case 1:
/*< 32>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          			goto flw_5
          		}
          	}
          }

          void entrypoint_105_07() {
/*<  6>*/ 	start()
/*< 90>*/ 	{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 1304, 'next': 7, 'param3': 13}
/*<  7>*/ 	switch (random(2)) {
          	  case 0:
/*<  8>*/ 		printf(/* textboxtype: 1, unk: 0, line: 13 */ "Oh! Thank you ever so much! You've\ngiven me the strength to keep pedaling!")
          		flw_33:
/*< 33>*/ 		zone_temp_flags[1 /* 0x1 02 */] = false;
/*< 34>*/ 		story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */] = true;
/*<200>*/ 		scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
/*<156>*/ 		entrypoint_105_11();
          	  case 1:
/*<  9>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "Oh! It really suits you!")
          		goto flw_33
          	}
          }

          void entrypoint_105_08() {
/*< 10>*/ 	start()
/*< 95>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 37, 'param3': 13}
/*< 37>*/ 	switch (story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */]) {
          	  case 0:
          		flw_11:
/*< 11>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "Oh! Please take a look at the other\nthings I have for sale.")
/*<153>*/ 		zone_temp_flags[10 /* 0x0 04 */] = false;
/*<154>*/ 		zone_temp_flags[11 /* 0x0 08 */] = false;
          	  case 1:
/*<170>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
          			goto flw_11
          		  case 1:
/*< 36>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          			goto flw_11
          		}
          	}
          }

          void entrypoint_105_09() {
/*< 29>*/ 	start()
/*< 91>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 30, 'param3': 13}
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0, line: 16 */ "Oh! Please wait a moment!")
          }

          void entrypoint_105_10() {
/*< 38>*/ 	start()
/*< 92>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 28, 'next': 31, 'param3': 13}
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 2, line: 17 */ "Do you know how heavy you are?!\nI have to pedal extra hard with you\nup here!\n\nThen you have the gall to leave without\nbuying anything? Off with you!")
/*<201>*/ 	scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
          }

          void entrypoint_105_11() {
/*<155>*/ 	start()
/*< 93>*/ 	switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          	  case 0:
/*< 94>*/ 		story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */] = true;
          		flw_157:
/*<157>*/ 		switch (zone_temp_flags[10 /* 0x0 04 */]) {
          		  case 0:
/*<158>*/ 			story_flags[746 /* us: 805A9B29 0x04, jp: 805ACDA9 0x04 */] = true;
          			flw_159:
/*<159>*/ 			switch (zone_temp_flags[11 /* 0x0 08 */]) {
          			  case 0:
/*<160>*/ 				story_flags[747 /* us: 805A9B29 0x08, jp: 805ACDA9 0x08 */] = true;
          			  case 1:
          			}
          		  case 1:
          			goto flw_159
          		}
          	  case 1:
          		goto flw_157
          	}
          }

          void entrypoint_105_30() {
/*< 12>*/ 	start()
/*<171>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 31, 'next': 18, 'param3': 13}
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "Oh! Unfortunately, that sign means the\nitem is sold out.\n\n\nThanks to you, I've done a lot more\nbusiness than usual, so I'm having\ntrouble keeping the store stocked.")
          }

          void entrypoint_105_31() {
/*< 16>*/ 	start()
/*< 43>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 49, 'param3': 12}
/*< 49>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 150, 'param3': 13}
/*<150>*/ 	zone_temp_flags[10 /* 0x0 04 */] = true;
/*< 69>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_19:
/*< 19>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "That'll increase the number of items\nyou can carry in your <color red<<color yellow<Adventure\nPouch<color red< >coloroff>by one!\n\nIt has to be the most useful thing\nimaginable for an adventure! And yet\nit costs a mere <color red<300 Rupees>coloroff>.\n[1-]I'll take it![2]No, thanks.")
          		goto flw_13
          	  case 1:
/*< 68>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 74>*/ 			printf(/* textboxtype: 1, unk: 0, line: 20 */ "That will let you carry one additional\nitem in your <color yellow<Adventure Pouch>coloroff>!\n\n\nIf you're on an adventure, this has to\nbe the most useful thing you can\nimagine. And it's half price just this\nonce! It's yours for <color red<150 Rupees>coloroff>.\n[1-]I'll take it![2]No, thanks.")
          			goto flw_13
          		  case 1:
          			goto flw_19
          		}
          	}
          }

          void entrypoint_105_32() {
/*< 17>*/ 	start()
/*< 44>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 70, 'param3': 12}
/*< 70>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 76, 'param3': 13}
/*< 76>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_20:
/*< 20>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "Oh! You have great taste in things...\nIsn't it shiny? I found it someplace\nnearby.\n\nTo be honest, I have no idea what it's\nfor, but I'll sell it to you for\njust <color red<1,600 Rupees>coloroff>!\n[1-]OK![2]No, thanks.")
          		goto flw_13
          	  case 1:
/*< 75>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 77>*/ 			printf(/* textboxtype: 1, unk: 0, line: 22 */ "Oh! You have great taste in things...\nIsn't it shiny? I found it someplace\nnearby.\n\nTo be honest, I have no idea what it's\nfor, but I'm pricing it at <color red<1,600 Rupees>coloroff>!\n\n\nHowever, you can have it at half price\ntoday for only <color red<800 Rupees>coloroff>. Is it a deal?\n[1-]OK![2]No, thanks.")
          			goto flw_13
          		  case 1:
          			goto flw_20
          		}
          	}
          }

          void entrypoint_105_33() {
/*< 21>*/ 	start()
/*< 45>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 71, 'param3': 12}
/*< 71>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 79, 'param3': 13}
/*< 79>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_22:
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 0, line: 23 */ "That's an <color yellow<Extra Wallet>coloroff>. It's amazingly\nuseful!\n\n\nWith this, you can carry an extra\n300 Rupees in your wallet!\n\n\nSay good-bye to all those times you\ncouldn't pick up another Rupee because\nyour wallet was stuffed full!\nLeave no Rupee behind!\nEven you must be able to see just how\nuseful this item is, and all for only\n<color red<100 Rupees>coloroff>. Want to buy it?\n[1-]OK![2]No, thanks.")
          		goto flw_13
          	  case 1:
/*< 78>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "That's an <color yellow<Extra Wallet>coloroff>. It's amazingly\nuseful!\n\n\nWith this, you can carry an extra\n300 Rupees in your wallet!\n\n\nSay good-bye to all those times you\ncouldn't pick up another Rupee because\nyour wallet was stuffed full!\nLeave no Rupee behind!\nIt's usually <color red<100 Rupees>coloroff>, but I'll sell it to\nyou now for <color red<50>coloroff><color red<<color red< <color red<Rupees>coloroff>. How about it?\n[1-]I'll take it![2]No, thanks.")
          			goto flw_13
          		  case 1:
          			goto flw_22
          		}
          	}
          }

          void entrypoint_105_50() {
/*< 50>*/ 	start()
/*<175>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
/*<176>*/ 		printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00000018>Oh! Thank you so much. I will always\nbe grateful for this!\n\n\nMy beloved <color blue<Horned Colossus Beetle>coloroff>...\nI just never get tired of looking at it.")
          	  case 1:
/*<105>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<106>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00000018>Oh! Thank you so much! I owe you a\nlifetime of gratitude for this!\n\n\nTo say thank you, I'll sell you one\nitem from my shop at half off, so\nplease stop by again!")
          		  case 1:
/*<107>*/ 			switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          			  case 0:
/*<199>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 31}
/*<129>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 130, 'param3': 47}
/*<130>*/ 				{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 356, 'next': 132, 'param3': 15}
/*<132>*/ 				set_camera(3, 0)
/*<131>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 117, 'param3': 48}
/*<117>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 538, 'next': 108, 'param3': 13}
/*<108>*/ 				printf(/* textboxtype: 1, unk: 0, line: 43 */ "Yes, can I help you? Ah... Pray,\nyou have something to show me?")
/*<128>*/ 				set_camera(2, 0)
/*<118>*/ 				printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x001a0815>Ohh! You really did find my precious\n<color blue<Horned Colossus Beetle>coloroff>?!")
/*<120>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 127, 'param3': 47}
/*<127>*/ 				story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */] = true;
/*<122>*/ 				{'type': 'type3', 'subType': 4, 'param1': 31, 'param2': 3328, 'next': 123, 'param3': 13}
/*<123>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 134, 'param3': 48}
/*<134>*/ 				wait_frames(50)
/*<121>*/ 				set_camera(1, 0)
/*<119>*/ 				printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00000f00>You found him! My dear bug, I thank\nyou from the bottom of my heart!\n\n\nNext time you enter my shop, I demand \nyou take any one of my items for half\noff the listed price!\n\n<0x10009:0x00000018>It's just my way of saying thank you!")
/*<133>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 115, 'param3': 42}
/*<115>*/ 				give_gratitude_crystals();
          			  case 1:
/*< 99>*/ 				switch (scene_flags[14 /* 0x0 40 */]) {
          				  case 0:
/*<111>*/ 					switch (zone_temp_flags[4 /* 0x1 10 */]) {
          					  case 0:
/*<113>*/ 						switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          						  case 0:
/*<198>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 114, 'param3': 31}
/*<114>*/ 							printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x0000001e>Please find my precious <color blue<Horned\nColossus Beetle>coloroff>!")
          						  case 1:
/*<203>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 112, 'param3': 31}
/*<112>*/ 							printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x0000001e>Ah, I don't suppose you'd be willing\nto go look for my precious <color blue<Horned\nColossus Beetle>coloroff>? I'd be grateful if\nyou did!\n[1-]Of course![2]Let it go.")
          							flw_57:
/*< 57>*/ 							switch (choice(2)) {
          							  case 0:
/*< 60>*/ 								printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x00110220>Ah! Truly? I must thank you! \nI shan't forget this!")
/*< 61>*/ 								printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x001d0200>My precious <color blue<Horned Colossus Beetle>coloroff>...\n...Please go and find him with all\nhaste. He abides out there, \nsomewhere, all alone in the wild.\n<0x10009:0x00110b00>I beg of you!")
/*< 62>*/ 								story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */] = true;
/*<110>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 59>*/ 								printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00010021>Simple for you to say, I'm sure, but I\ncan't just forget about him so easily.")
/*<109>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							}
          						}
          					  case 1:
/*<100>*/ 						switch (zone_temp_flags[3 /* 0x1 08 */]) {
          						  case 0:
/*<126>*/ 							switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          							  case 0:
/*<125>*/ 								printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x0000001e>If you wish to go back to Skyloft,\nsimply sleep in the bed until morning.")
          								flw_98:
/*< 98>*/ 								zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 55>*/ 								switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          								  case 0:
/*< 54>*/ 									switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          									  case 0:
/*< 58>*/ 										switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          										  case 0:
/*<196>*/ 											{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 63, 'param3': 31}
/*< 63>*/ 											printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00010b00>By the way...\n\n\n\n<0x10009:0x001d0b00>About my precious <color blue<Horned Colossus\nBeetle>coloroff>... Have you found him yet?")
          										  case 1:
/*<197>*/ 											{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 56, 'param3': 31}
/*< 56>*/ 											printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00010600>But I would be remiss if I didn't let\nyou know of the weight on my heart...\n\n\n<0x10009:0x00000b00>My precious <color blue<Horned Colossus Beetle\n>coloroff>has gone missing, along with his cage...\n\n\n<0x10009:0x001d0b00>It's a tragedy that shatters a man to the\ncore... 'Twas such a rare insect and so\nvery...friendly to boot.\n[1-]I'll find it![2]Don't worry.")
          											goto flw_57
          										}
          									  case 1:
/*<124>*/ 										printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00000c00>Hmm<0x10006:0xfbcd>...")
          									}
          								  case 1:
          								}
          							  case 1:
/*<101>*/ 								printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x0000001e>Ahh, your face cries out in earnest\nwonder, and that cry is \"What's this?!\"\n\n\n<0x10009:0x001c0a00>This, my dear bug, is a very rare insect\ncalled a <color blue<Horned Colossus Beetle>coloroff>.\n\n\n<0x10009:0x001b0500>He is my most precious possession.\n\n\n\nI could gaze at him all night...")
          								goto flw_98
          							}
          						  case 1:
/*<102>*/ 							printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x0000001e>Ah! You mounted my bed and rode the\nsleep sheep through the fields of night\nonce more. You were out like a log!\n\n<0x10009:0x00000b00>I daresay you weigh as much as a\nlog as well, and a rather large one at\nthat. Pedaling around with you on \nboard has quite enervated me.\n<0x10009:0x00000c00><pause 5>.<pause 5>.<pause 5>.<pause 5><0x10009:0x00000200>It's quite all right, though, old bug!\nI'm actually getting rather used to it.\nYou're getting me into cracking shape.")
          							goto flw_98
          						}
          					}
          				  case 1:
/*<173>*/ 					switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          					  case 0:
/*<172>*/ 						switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          						  case 0:
/*<174>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 116, 'param3': 31}
          							flw_116:
/*<116>*/ 							story_flags[283 /* us: 805A9AFB 0x20, jp: 805ACD7B 0x20 */] = true;
/*< 53>*/ 							printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x0000021e>Ah! Wakey for the young slugabed,\nhmmmm? You appeared to be relishing\nthat snooze, so I declined to wake you.\n\n<0x10009:0x00000500>But I must say, old bug, you did make\nthe shop a mite heavier... Heh heh!\n[1-]Your accent![2-]Where am I?")
/*< 51>*/ 							switch (choice(2)) {
          							  case 0:
/*< 52>*/ 								printf(/* textboxtype: 1, unk: 0, line: 36 */ "Hmmm? The mellifluous timbre of\nmy voice sounds different to you?\n\n\n<0x10009:0x00001000><0x10006:0xfbcd>...<0x10006:0x00cd><0x10009:0x00000200>Perhaps a touch, I suppose...\n<pause 30>But pray, what does it matter, hmm?")
/*<103>*/ 								printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00000200>This is my humble home, of sorts.\nWhen night draws her tenebrous \ncurtain across the sky, I come here.\n\n<0x10009:0x00000200>A bit lacking in creature comforts,\nto be sure, but I can relax in peace.\n\n\nYou're aware that Loftwings don't fly\nat night, I'm sure...so I suppose I shall\nhave to take you back to town with me\non the morrow, hmm?\nWhen you wish to go back to Skyloft,\njust chase your dreams on the bed\nonce more, and on the morrow you\nshall be there. ")
          								flw_97:
/*< 97>*/ 								scene_flags[21 'The Sky'][14 /* 0x0 40 */] = true;
          								goto flw_98
          							  case 1:
/*< 96>*/ 								printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00000200>This is my humble home, of sorts.\nWhen night draws her tenebrous \ncurtain across the sky, I come here.\n\n<0x10009:0x00000200>A bit lacking in creature comforts,\nto be sure, but I can relax in peace.\n\n\nYou're aware that Loftwings don't fly\nat night, I'm sure...so I suppose I shall\nhave to take you back to town with me\non the morrow, hmm?\nWhen you wish to go back to Skyloft,\njust chase your dreams on the bed\nonce more, and on the morrow you\nshall be there. ")
/*<104>*/ 								printf(/* textboxtype: 1, unk: 0, line: 36 */ "Hmmm? The mellifluous timbre of\nmy voice sounds different to you?\n\n\n<0x10009:0x00001000><0x10006:0xfbcd>...<0x10006:0x00cd><0x10009:0x00000200>Perhaps a touch, I suppose...\n<pause 30>But pray, what does it matter, hmm?")
          								goto flw_97
          							}
          						  case 1:
          							goto flw_116
          						}
          					  case 1:
          						goto flw_116
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_105_34() {
/*< 39>*/ 	start()
/*< 46>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 72, 'param3': 12}
/*< 72>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 82, 'param3': 13}
/*< 82>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_42:
/*< 42>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "That's a <color yellow<Bug Net>coloroff>. You know, for\ncatching bugs! Insects too.\n\n\nOK, so there aren't so many bugs here,\nbut you'll be able to catch tons with\nthis when there are some!\n\nAnd at only <color red<50 Rupees>coloroff>, I'm sure\nyou'll make a “net profit\"!\nWant to buy it?\n[1-]OK![2]No, thanks.")
          		goto flw_13
          	  case 1:
/*< 81>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 85>*/ 			printf(/* textboxtype: 1, unk: 0, line: 26 */ "")
          			goto flw_13
          		  case 1:
          			goto flw_42
          		}
          	}
          }

