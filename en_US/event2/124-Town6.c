          void entrypoint_124_00() {
          	start()
/*< 42>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 43>*/ 		printf("Hopefully your purchase lives up to\nyour expectations, fella! If you get the\nitch to buy some more treasure, you\nknow the stone to talk to.")
          	  case 1:
/*< 48>*/ 		switch (zone_temp_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*< 49>*/ 			printf("So you're looking to buy then, eh?\n[1]Please![2-]Nah...")
          			flw_3:
/*<  3>*/ 			switch (choice(2)) {
          			  case 0:
/*< 74>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 4, 'param3': 12}
/*<  4>*/ 				printf("Excellent! So, tell me, what kind of\ntreasure are you in the market for?\n[1]<itemAE>[2]<itemAF>[3]<itemB0>[4-]Other.")
/*<  6>*/ 				switch (choice(4)) {
          				  case 0:
/*<  7>*/ 					printf("OK, one <itemAE> it is!\nFor <r<200 Rupees>>, it's all yours!\n[1]Sounds good![2-]Too much.")
/*<  9>*/ 					switch (choice(2)) {
          					  case 0:
/*< 11>*/ 						switch (has_rupees(200)) {
          						  case 0:
/*< 10>*/ 							printf("And we have a deal! Here's your\nnot-at-all-shady treasure!")
/*< 13>*/ 							zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 34>*/ 							rupees += -200;
/*< 38>*/ 							zone_temp_flags[4 /* 0x1 10 */] = true;
          						  case 1:
/*< 12>*/ 							printf("Hmm. Looking a little short on funds\nthere, friend. Oh well. When you\nscrape together the Rupees, you know\nI'll be here.")
          						}
          					  case 1:
/*<  8>*/ 						printf("Puh-leeeze, I've heard that one before.\nYou say it costs too much. I say you\nprobably didn't want it that much in\nthe first place or you'd cough it up!")
          					}
          				  case 1:
/*< 14>*/ 					printf("OK, one <itemAF> it is! This baby's\nall yours for just <r<200 Rupees>>.\n[1]Sounds good![2-]Too much.")
/*< 16>*/ 					switch (choice(2)) {
          					  case 0:
/*< 18>*/ 						switch (has_rupees(200)) {
          						  case 0:
/*< 17>*/ 							printf("And we have a deal! Here's your\nnot-at-all-shady treasure!")
/*< 20>*/ 							zone_temp_flags[1 /* 0x1 02 */] = true;
/*< 35>*/ 							rupees += -200;
/*< 39>*/ 							zone_temp_flags[4 /* 0x1 10 */] = true;
          						  case 1:
/*< 19>*/ 							printf("Hmm. Looking a little short on funds\nthere, friend. Oh well. When you\nscrape together the Rupees, you know\nI'll be here.")
          						}
          					  case 1:
/*< 15>*/ 						printf("Puh-leeeze, I've heard that one before.\nYou say it costs too much. I say you\nprobably didn't want it that much in\nthe first place or you'd cough it up!")
          					}
          				  case 2:
/*< 21>*/ 					printf("OK, one <itemB0> coming right\nup! That'll be just <r<200 Rupees>>, friend.\n[1]Sounds good![2-]Too much.")
/*< 24>*/ 					switch (choice(2)) {
          					  case 0:
/*< 26>*/ 						switch (has_rupees(200)) {
          						  case 0:
/*< 25>*/ 							printf("And we have a deal! Here's your\nnot-at-all-shady treasure!")
/*< 28>*/ 							zone_temp_flags[2 /* 0x1 04 */] = true;
/*< 36>*/ 							rupees += -200;
/*< 40>*/ 							zone_temp_flags[4 /* 0x1 10 */] = true;
          						  case 1:
/*< 27>*/ 							printf("Hmm. Looking a little short on funds\nthere, friend. Oh well. When you\nscrape together the Rupees, you know\nI'll be here.")
          						}
          					  case 1:
/*< 23>*/ 						printf("Puh-leeeze, I've heard that one before.\nYou say it costs too much. I say you\nprobably didn't want it that much in\nthe first place or you'd cough it up!")
          					}
          				  case 3:
/*< 53>*/ 					printf("Something else, huh? Well do any of\nthese pique your interest?\n[1]<itemA8>[2]<itemAD>[3]<itemAB>[4-]Other.")
/*< 54>*/ 					switch (choice(4)) {
          					  case 0:
/*< 22>*/ 						printf("OK, one <itemA8> it is! It's a steal at\njust <r<100 Rupees>>.\n[1]Sounds good![2-]Too much.")
/*< 30>*/ 						switch (choice(2)) {
          						  case 0:
/*< 52>*/ 							switch (has_rupees(100)) {
          							  case 0:
/*< 31>*/ 								printf("And we have a deal! Here's your\nnot-at-all-shady treasure!")
/*< 33>*/ 								zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 37>*/ 								rupees += -100;
/*< 41>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 32>*/ 								printf("Hmm. Looking a little short on funds\nthere, friend. Oh well. When you\nscrape together the Rupees, you know\nI'll be here.")
          							}
          						  case 1:
/*< 29>*/ 							printf("Puh-leeeze, I've heard that one before.\nYou say it costs too much. I say you\nprobably didn't want it that much in\nthe first place or you'd cough it up!")
          						}
          					  case 1:
/*< 55>*/ 						printf("OK, one <itemAD> it is!\nFor <r<100 Rupees>> it's all yours!\n[1]Sounds good![2-]Too much.")
/*< 57>*/ 						switch (choice(2)) {
          						  case 0:
/*< 63>*/ 							switch (has_rupees(100)) {
          							  case 0:
/*< 58>*/ 								printf("And we have a deal! Here's your\nnot-at-all-shady treasure!")
/*< 60>*/ 								zone_temp_flags[6 /* 0x1 40 */] = true;
/*< 61>*/ 								rupees += -100;
/*< 62>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 59>*/ 								printf("Hmm. Looking a little short on funds\nthere, friend. Oh well. When you\nscrape together the Rupees, you know\nI'll be here.")
          							}
          						  case 1:
/*< 56>*/ 							printf("Puh-leeeze, I've heard that one before.\nYou say it costs too much. I say you\nprobably didn't want it that much in\nthe first place or you'd cough it up!")
          						}
          					  case 2:
/*< 64>*/ 						printf("OK, one <itemAB> it is!\nFor <r<100 Rupees>> it's all yours!\n[1]Sounds good![2-]Too much.")
/*< 66>*/ 						switch (choice(2)) {
          						  case 0:
/*< 72>*/ 							switch (has_rupees(100)) {
          							  case 0:
/*< 67>*/ 								printf("And we have a deal! Here's your\nnot-at-all-shady treasure!")
/*< 69>*/ 								zone_temp_flags[7 /* 0x1 80 */] = true;
/*< 70>*/ 								rupees += -100;
/*< 71>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 68>*/ 								printf("Hmm. Looking a little short on funds\nthere, friend. Oh well. When you\nscrape together the Rupees, you know\nI'll be here.")
          							}
          						  case 1:
/*< 65>*/ 							printf("Puh-leeeze, I've heard that one before.\nYou say it costs too much. I say you\nprobably didn't want it that much in\nthe first place or you'd cough it up!")
          						}
          					  case 3:
/*< 73>*/ 						printf("Sorry, friend, that's all I've got to sell\nright now. If none of those did the trick\nfor you, you'll just have to find what\nyou're after on your own!")
          					}
          				}
          			  case 1:
/*<  5>*/ 				printf("Fine then. Folks who walk the straight\nand narrow are better off not getting\nmixed up with a shady character like\nmyself anyhow. Know what I'm saying?")
          			}
          		  case 1:
/*< 44>*/ 			switch (scene_flags[80 /* 0xB 01 */]) {
          			  case 0:
/*< 45>*/ 				printf("Hey there, friend! What luck you have!\nYou've just stumbled upon one of th--<pause14>\nOh. You again. You looking to buy\nsome treasure or what?\n[1]Yep![2-]Nah...")
          				goto flw_3
          			  case 1:
/*<  1>*/ 				printf("Hey there, friend! What luck you have!\nYou've just stumbled upon me, the\ninfamous <b<Moonlight Merchant>>!\n\nDon't ask how I get my wares, 'cause\nI'm not telling!\n\n\nIf there's a rare bauble or two you're\ndying to get your hands on, I might\nknow a stone who knows a stone who\ncan get them for you...for a price!")
/*<  2>*/ 				printf("But...but! Before you go whipping out\nyour Rupees, you should know my\nwares carry a hefty price tag.\n\nPeople who come to me usually don't\nlike collecting treasure on their own,\nor simply can't manage to collect what\nthey need. You sure this is for you?\n[1]Sure![2-]No way.")
/*< 46>*/ 				scene_flags[0 'Skyloft'][80 /* 0xB 01 */] = true;
/*< 47>*/ 				zone_temp_flags[5 /* 0x1 20 */] = true;
          				goto flw_3
          			}
          		}
          	}
          }

          void entrypoint_124_01() {
/*< 50>*/ 	start()
/*< 51>*/ 	printf("You're a weird one, climbing all the\nway up here.\n\n\nHey, if you tried to <g<dive>> off the ledge\nhere, I bet you could land in the\nnest on top of the tower down there.\nBut what do I know? I'm a stone.")
          }

