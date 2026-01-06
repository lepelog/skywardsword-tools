          void entrypoint_115_02() {
/*<444>*/ 	start()
/*<443>*/ 	switch (story_flags[297 /* us: 805A9AFD 0x08, jp: 805ACD7D 0x08 */]) {
          	  case 0:
/*<433>*/ 		printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x0000000a>Hast du Schätze, die du loswerden\nmöchtest?")
          		flw_495:
/*<495>*/ 		make_actor_do_something(8, 0)
/*<432>*/ 		printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00120600>Die folgenden Schätze kaufe ich heute.\n\n\n\n<color yellow<<string arg2>>coloroff>\n<color yellow<<string arg3>\n>coloroff><color yellow<<string arg0>>coloroff>\n<color yellow<<string arg1>>coloroff>\n<0x10009:0x00100600>Willst du davon etwas verkaufen?\n[1-]Ja[2]Nein")
/*<415>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_414:
/*<414>*/ 			printf(/* textboxtype: 1, unk: 1, line: 9 */ "Was möchtest du denn verkaufen?\n\n\n\nSchatz 1: <color yellow<<string arg2>>coloroff>\nSchatz 2: <color yellow<<string arg3>>coloroff>\nSchatz 3: <color yellow<<string arg0>>coloroff>\nSchatz 4: <color yellow<<string arg1>>coloroff>[1-]Schatz 3[2-]Schatz 4[3-]Schatz 1[4-]Schatz 2")
/*<413>*/ 			switch (choice(4)) {
          			  case 0:
/*<488>*/ 				make_actor_do_something(0, 0)
/*<481>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<489>*/ 					printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00120600><color yellow<<string arg0>>coloroff>?\nFür diesen Schatz gebe ich dir pro\nStück <numeric arg0 0> <0x30004:0x01cd>.")
          					flw_656:
/*<656>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 412, 'param3': 12}
/*<412>*/ 					printf(/* textboxtype: 1, unk: 1, line: 14 */ "<0x10009:0x00100600>Davon hast du <numeric arg4 0> Stück.\nWie viel willst du verkaufen?\n[1-]1[2-]5[3-]Alles[4]Nichts")
/*<411>*/ 					switch (choice(4)) {
          					  case 0:
/*<500>*/ 						make_actor_do_something(4, 0)
          						flw_497:
/*<497>*/ 						switch (context_related2(0)) {
          						  case 0:
/*<409>*/ 							printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00120900><color yellow<<string arg0>>coloroff> also...\n<numeric arg0 0> Stück... Das macht <numeric arg1 0> <0x30004:0x01cd>!\n[1-]Verkauft![2]Doch nicht.")
/*<408>*/ 							switch (choice(2)) {
          							  case 0:
/*<430>*/ 								printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x0010080a>Abgemacht! Hier sind deine Rubine!\n")
/*<496>*/ 								make_actor_do_something(7, 0)
/*<572>*/ 								set_camera(6, 0)
/*<571>*/ 								{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 2048, 'next': 573, 'param3': 13}
/*<573>*/ 								wait_frames(45)
/*<429>*/ 								printf(/* textboxtype: 1, unk: 0, line: 19 */ "Danke! Schau mal wieder rein!")
/*<574>*/ 								{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          							  case 1:
          								flw_410:
/*<410>*/ 								printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x000f000c>Na gut. Komm wieder, wenn du es dir\nanders überlegt hast.")
          							}
          						  case 1:
/*<431>*/ 							printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x000f0409>So viele hast du gar nicht!\nLass bitte solche Scherze, ja?")
          							goto flw_656
          						}
          					  case 1:
/*<499>*/ 						make_actor_do_something(5, 0)
          						goto flw_497
          					  case 2:
/*<498>*/ 						make_actor_do_something(6, 0)
          						goto flw_497
          					  case 3:
          						goto flw_410
          					}
          				  case 1:
          					flw_494:
/*<494>*/ 					printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x000f0409>Was soll das denn...\n\n\n\nDu hast nicht einen einzigen Schatz\ndieser Art. Hast du mir etwas anderes\nanzubieten?\n[1-]Ja[2]Nein")
/*<480>*/ 					switch (choice(2)) {
          					  case 0:
          						goto flw_414
          					  case 1:
          						goto flw_410
          					}
          				}
          			  case 1:
/*<487>*/ 				make_actor_do_something(1, 0)
/*<482>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<490>*/ 					printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00120600><color yellow<<string arg1>>coloroff>?\nFür diesen Schatz gebe ich dir pro\nStück <numeric arg1 0> <0x30004:0x01cd>.")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			  case 2:
/*<486>*/ 				make_actor_do_something(2, 0)
/*<483>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<491>*/ 					printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00120600><color yellow<<string arg2>>coloroff>?\nFür diesen Schatz gebe ich dir pro\nStück <numeric arg2 0> <0x30004:0x01cd>.")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			  case 3:
/*<485>*/ 				make_actor_do_something(3, 0)
/*<484>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<492>*/ 					printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00120600><color yellow<<string arg3>>coloroff>?\nFür diesen Schatz gebe ich dir pro\nStück <numeric arg3 0> <0x30004:0x01cd>.")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			}
          		  case 1:
          			goto flw_410
          		}
          	  case 1:
/*<493>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 442, 'param3': 31}
/*<442>*/ 		printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x0000000a>Ah, du bist es... Was willst du?\n[1-]Einkaufen![2-]Äh...")
/*<441>*/ 		switch (choice(2)) {
          		  case 0:
/*<440>*/ 			printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x000f0409>So, du möchtest also einkaufen.\nWürde es dir etwas ausmachen, dazu\nmorgen in meinen Laden zu kommen?")
          		  case 1:
/*<439>*/ 			printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00130609>„Äh“ bedeutet, dass du eigentlich gar \nkeinen Grund hast, hier zu sein, oder?")
/*<438>*/ 			printf(/* textboxtype: 1, unk: 0, line: 3 */ "Ach? Du findest mich unfreundlich?\nGanz anders als tagsüber?\n\n\n<0x10009:0x0010060b>Es ist sehr ermüdend, den ganzen Tag\ndieses Verkäuferlächeln zu tragen,\nweißt du?\n\nBitte glaube nicht, dass das mein\nwahres Ich ist.\n\n\nAber genug davon...\n\n\n\nBist du wegen meines <color red<Nachtladens\n>coloroff>hier?\n[1-]Nachtladen?[2-]Genau!")
/*<437>*/ 			switch (choice(2)) {
          			  case 0:
/*<436>*/ 				printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00000009>Ah, du bist das erste Mal hier! Hm...")
          				flw_434:
/*<434>*/ 				printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00120600>Ich <color red<kaufe>coloroff> hier ganz spezielle Dinge...\nUnd zwar <color red<Schätze>coloroff>.\n\n\nAber nicht einfach irgendwelche\nbeliebigen Schätze. Nein, nur die, <color red<die\nich bestimme>coloroff>.\n\n<0x10009:0x00100600>So, dann kommen wir doch fix zum\ngeschäftlichen Teil.")
/*<428>*/ 				story_flags[297 /* us: 805A9AFD 0x08, jp: 805ACD7D 0x08 */] = true;
          				goto flw_495
          			  case 1:
/*<435>*/ 				printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x000f0409>Das hättest du ja auch gleich am\nAnfang sagen können.")
          				goto flw_434
          			}
          		}
          	}
          }

          void entrypoint_115_20() {
/*< 56>*/ 	start()
/*<535>*/ 	switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          	  case 0:
/*<173>*/ 		{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6656, 'next': 57, 'param3': 13}
/*< 57>*/ 		printf(/* textboxtype: 1, unk: 0, line: 194 */ "<0x10009:0x00000054>Uh...\nNnn... Nnn...\nHi... Hilfe...")
/*<528>*/ 		switch (zone_temp_flags[17 /* 0x3 02 */]) {
          		  case 0:
          		  case 1:
/*<724>*/ 			zone_temp_flags[17 /* 0x3 02 */] = true;
/*<529>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<174>*/ 		{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6656, 'next': 536, 'param3': 13}
/*<536>*/ 		printf(/* textboxtype: 1, unk: 0, line: 195 */ "<0x10009:0x00000017>Uuuh... <color blue<Cuco>coloroff>...\nIch hasse dich... Verflucht...")
          	}
          }

          void entrypoint_115_03() {
/*<426>*/ 	start()
/*<425>*/ 	switch (story_flags[298 /* us: 805A9AFD 0x10, jp: 805ACD7D 0x10 */]) {
          	  case 0:
/*<717>*/ 		switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          		  case 0:
/*<718>*/ 			switch (story_flags[810 /* us: 805A9B31 0x04, jp: 805ACDB1 0x04 */]) {
          			  case 0:
          				flw_479:
/*<479>*/ 				switch (random(2)) {
          				  case 0:
/*<478>*/ 					printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00030001>Ah, <heroname>!\nDachte mir schon, dass du heute\nkommst. Hast du was Neues für mich?")
          					flw_476:
/*<476>*/ 					make_actor_do_something(8, 0)
/*<475>*/ 					printf(/* textboxtype: 1, unk: 0, line: 34 */ "Heute kaufe ich folgende Insekten:\nInsekt 1: <color yellow<<string arg2>>coloroff>\nInsekt 2: <color yellow<<string arg0>>coloroff>\nInsekt 3: <color yellow<<string arg1>>coloroff>\nUnd, wie sieht's aus?\n[1-]Verkaufen[2]Nicht\nverkaufen")
/*<474>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_472:
/*<472>*/ 						printf(/* textboxtype: 1, unk: 1, line: 36 */ "Insekt 1: <color yellow<<string arg2>>coloroff>\nInsekt 2: <color yellow<<string arg0>>coloroff>\nInsekt 3: <color yellow<<string arg1>>coloroff>\n[1-]Insekt 2[2-]Insekt 3[3-]Insekt 1")
/*<471>*/ 						switch (choice(3)) {
          						  case 0:
/*<466>*/ 							make_actor_do_something(0, 0)
/*<461>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<467>*/ 								printf(/* textboxtype: 1, unk: 0, line: 37 */ "<color yellow<<string arg0>>coloroff>... Ich gebe dir\n<numeric arg0 0> <0x30004:0x01cd> pro Exemplar.")
          								flw_657:
/*<657>*/ 								{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 458, 'param3': 12}
/*<458>*/ 								printf(/* textboxtype: 1, unk: 1, line: 42 */ "Du hast <numeric arg4 0> Exemplare gefangen...\nWie viele möchtest du verkaufen?\n[1-]1[2-]5[3-]Alle[4]Abbrechen")
/*<457>*/ 								switch (choice(4)) {
          								  case 0:
/*<455>*/ 									make_actor_do_something(4, 0)
          									flw_452:
/*<452>*/ 									switch (context_related2(0)) {
          									  case 0:
/*<456>*/ 										printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x00030014><numeric arg0 0>-mal <color yellow<<string arg0>>coloroff>, dafür\ngebe ich dir insgesamt <numeric arg1 0> <0x30004:0x01cd>.\n[1-]Verkaufen[2]Nicht\nverkaufen")
/*<449>*/ 										switch (choice(2)) {
          										  case 0:
/*<451>*/ 											printf(/* textboxtype: 1, unk: 0, line: 45 */ "Hier, bitte sehr.")
/*<445>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 448, 'param3': 12}
/*<448>*/ 											make_actor_do_something(7, 0)
/*<450>*/ 											printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x0003ff04>Ich freue mich ja so! Es kribbelt, als\nhätte ich Ameisen in der Hose!\n\n\nDanke, <heroname>!\nBitte weiter so!")
          										  case 1:
          											flw_473:
/*<473>*/ 											printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x0001ff13>Schade...\n<0x10009:0x00000500>Ich war schon in Insekten-Stimmung...")
          										}
          									  case 1:
/*<459>*/ 										printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x00120100>So viele hast du gar nicht.\nAlso von vorn...")
          										goto flw_657
          									}
          								  case 1:
/*<454>*/ 									make_actor_do_something(5, 0)
          									goto flw_452
          								  case 2:
/*<453>*/ 									make_actor_do_something(6, 0)
          									goto flw_452
          								  case 3:
          									goto flw_473
          								}
          							  case 1:
          								flw_470:
/*<470>*/ 								printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x0010ff0c>Du siehst aus, als könntest du keiner\nFliege was zuleide tun, aber versuchst,\nmich übers Ohr zu hauen!\n\nFang zuerst Insekten, bevor\ndu versuchst, sie zu verkaufen!\n\n\n<0x10009:0x0001ff00>Willst du mir andere Insekten\nverkaufen?\n[1-]Ja[2]Nein")
/*<460>*/ 								switch (choice(2)) {
          								  case 0:
          									goto flw_472
          								  case 1:
          									goto flw_473
          								}
          							}
          						  case 1:
/*<465>*/ 							make_actor_do_something(1, 0)
/*<462>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<468>*/ 								printf(/* textboxtype: 1, unk: 0, line: 38 */ "<color yellow<<string arg1>>coloroff>... Ich gebe dir\n<numeric arg1 0> <0x30004:0x01cd> pro Exemplar.")
          								goto flw_657
          							  case 1:
          								goto flw_470
          							}
          						  case 2:
/*<464>*/ 							make_actor_do_something(2, 0)
/*<463>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<469>*/ 								printf(/* textboxtype: 1, unk: 0, line: 39 */ "<color yellow<<string arg2>>coloroff>... Ich gebe dir\n<numeric arg2 0> <0x30004:0x01cd> pro Exemplar.")
          								goto flw_657
          							  case 1:
          								goto flw_470
          							}
          						}
          					  case 1:
          						goto flw_473
          					}
          				  case 1:
/*<477>*/ 					printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00030001>Oh, du bist es, <heroname>.\nIrgendwie habe ich heute\nSchmetterlinge im Bauch... Haha!")
          					goto flw_476
          				}
          			  case 1:
/*<721>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 719, 'param3': 31}
/*<719>*/ 				printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00030001><heroname>...\nVielleicht weißt du das ja schon...\nGeh mal nachts in die Höhle am\nWasserfall.\nDort versammeln sich <color red<Himmelsfalter\n>coloroff>an einer Stelle, obwohl dort\nanscheinend nichts Besonderes ist.\n\nMich würde ja interessieren, warum sie\nsich gerade dort zusammenfinden...\n\n\nWenn du das auch interessant findest,\nsolltest du mal nachts in die Höhle\ngehen.")
/*<722>*/ 				printf(/* textboxtype: 1, unk: 0, line: 33 */ "Und, welche Insekten möchtest du mir\ndenn heute verkaufen?")
/*<720>*/ 				story_flags[810 /* us: 805A9B31 0x04, jp: 805ACDB1 0x04 */] = true;
          				goto flw_476
          			}
          		  case 1:
          			goto flw_479
          		}
          	  case 1:
/*<446>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 666, 'param3': 31}
/*<666>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 427, 'param3': 13}
/*<427>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x0000ff01>Was willst du von mir,\n<heroname>?")
/*<578>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 416, 'param3': 13}
/*<416>*/ 		printf(/* textboxtype: 1, unk: 0, line: 22 */ "<color red<<0x10009:0x00000300>>coloroff>Hä? Was ich mache?\n\n\n\n<0x10009:0x00ff0114>Ich sehe mir <color red<Insekten>coloroff> an...")
/*<575>*/ 		set_camera(22, 0)
/*<577>*/ 		wait_frames(30)
/*<418>*/ 		printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x0001ff00>Käfer sind wunderbar...\nWie Bado...\nNein, noch wunderbarer.\n\nÖh...<pause 30> Das soll nicht heißen, dass Bado\nweniger wert ist als ein Insekt, ähem.")
/*<576>*/ 		set_camera(-1, 0)
/*<417>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "Jedenfalls <color red<mag ich Insekten>coloroff>.\nIch hätte gern eine Sammlung\nverschiedenster Insekten.\n\nNein, besser noch, ich hätte gern\neine ganze Insel voller Insekten...")
/*<424>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x00ffff01>Ah! Das ist überhaupt die Idee!\n\n\n\n<heroname>, <color red<wenn du Insekten\nfindest, verkauf sie mir doch!>coloroff>\n<color red<\n>coloroff>\nIch zahle auch gut!\n[1-]Einverstanden![2-]Ähm...")
/*<423>*/ 		switch (choice(2)) {
          		  case 0:
/*<422>*/ 			printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x0003ff04>Gnihihihi...\nBald wird meine Insekten-Sammlung\nvollständig sein!")
          			flw_420:
/*<420>*/ 			printf(/* textboxtype: 1, unk: 0, line: 28 */ "Wenn du Insekten verkaufen willst,\ndann komm zu mir. Ich bin abends\nnormalerweise hier.\n\n<0x10009:0x00120100>Ich kaufe aber nicht einfach wahllos\njedes Insekt... Was ich kaufe,\n<color red<entscheide ich jeden Tag neu>coloroff>.\n\nUnd Bado darf nichts davon wissen!\n\n\n\nAch ja, außerdem <color red<kaufe ich nur nachts>coloroff>.\nIch muss ja auf meinen Ruf achten.\n\n\n<0x10009:0x0003ff14>Alles klar, <heroname>?\nIch vertraue dir, von Insektenfreund\nzu Insektenfreund.")
/*<447>*/ 			printf(/* textboxtype: 1, unk: 0, line: 29 */ "Dann zeig mal, was du für mich hast.")
/*<419>*/ 			story_flags[298 /* us: 805A9AFD 0x10, jp: 805ACD7D 0x10 */] = true;
          			goto flw_476
          		  case 1:
/*<421>*/ 			printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x0001ff05>Was? Das sage ich Bado!")
          			goto flw_420
          		}
          	}
          }

          void entrypoint_115_04() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x00000000>Chrrrrrrrrrrrr...\nPüüüüüüüüh...")
          }

          void entrypoint_115_21() {
/*< 67>*/ 	start()
/*< 68>*/ 	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          	  case 0:
/*< 85>*/ 		switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          		  case 0:
/*<798>*/ 			entrypoint_115_28();
          		  case 1:
/*< 84>*/ 			switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          			  case 0:
/*<115>*/ 				switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          				  case 0:
/*<799>*/ 					switch (zone_temp_flags[20 /* 0x3 10 */]) {
          					  case 0:
/*<116>*/ 						printf(/* textboxtype: 1, unk: 0, line: 222 */ "<0x10009:0x00080909>Danke, <heroname>! Hihihi!\nDank dir habe ich nun einen\nwundervollen Freund.\n\nAber <color blue<Rax>coloroff> gegenüber war das Ganze\nwohl nicht sehr nett...")
          					  case 1:
/*<800>*/ 						entrypoint_115_28();
          					}
          				  case 1:
/*< 87>*/ 					printf(/* textboxtype: 1, unk: 0, line: 221 */ "<0x10009:0x00000001>Danke, dass du mir den Brief\ngebracht hast, <heroname>!\n\n\n<0x10009:0x00010d14>Was würde wohl <color blue<Cuco>coloroff> denken, wenn er\ndavon wüsste...")
          				}
          			  case 1:
/*<130>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 133, 'param3': 31}
/*<133>*/ 				make_actor_do_something(2, 0)
/*<587>*/ 				{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1024, 'next': 73, 'param3': 13}
/*< 73>*/ 				printf(/* textboxtype: 1, unk: 0, line: 211 */ "<0x10009:0x00000014>Ach...\nWie mache ich <color blue<Cuco>coloroff> nur auf mich\naufmerksam...")
/*<134>*/ 				make_actor_do_something(3, 0)
/*< 74>*/ 				printf(/* textboxtype: 1, unk: 0, line: 212 */ "<0x10009:0x00080404>Hallo, <heroname>!\n\n\n\nWas... Was willst du?\n<0x10008:0xfecd>Hast du mich etwa gerade gehört?<0x10008:0x00cd>\n\n\n[1-]Brief geben[2-]Brief nicht geben")
/*< 75>*/ 				switch (choice(2)) {
          				  case 0:
/*< 77>*/ 					printf(/* textboxtype: 1, unk: 0, line: 214 */ "<0x10009:0x00080906>Ein Brief?\nFür mich<pause 10>.<pause 10>.<pause 10>.<pause 10>?\nVielleicht von... <color blue<Cuco>coloroff>?\n[1-]Bitte sehr![2-]Doch nicht...")
/*< 78>*/ 					switch (choice(2)) {
          					  case 0:
/*< 80>*/ 						printf(/* textboxtype: 1, unk: 0, line: 216 */ "<0x10009:0x000e090a>Da... Danke!")
/*<592>*/ 						{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3072, 'next': 593, 'param3': 13}
/*<593>*/ 						wait_frames(5)
/*<598>*/ 						set_camera(23, 0)
/*<599>*/ 						wait_frames(10)
/*<611>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 591, 'param3': 49}
/*<591>*/ 						printf(/* textboxtype: 1, unk: 0, line: 217 */ "<0x10009:0x00100400>Von... Von wem ist er?")
/*<594>*/ 						wait_frames(30)
/*< 81>*/ 						printf(/* textboxtype: 1, unk: 0, line: 218 */ "<0x10009:0x00100d00>Also...<pause 20>\n<0x10006:0xfecd>Die Handschrift ist sehr krakelig...<0x10006:0x00cd>\n\n\n<0x10009:0x00100400>Aber egal, mal sehen, was da steht...")
/*<596>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': -256, 'next': 665, 'param3': 13}
/*<665>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 104, 'next': 597, 'param3': 24}
/*<597>*/ 						wait_frames(15)
/*<600>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4608, 'next': 595, 'param3': 13}
/*<595>*/ 						printf(/* textboxtype: 1, unk: 0, line: 219 */ "„...Meine Liebe für dich ist weiter als\nder Himmel und so stark wie ein\nSturm...“\n\n<0x10009:0x00131200>„Ich möchte, dass du meine Freundin\nwirst.\nDein Ritter, <color blue<Rax>coloroff>“\n\n<0x10009:0x00000500>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.\n\n\n\n<0x10009:0x00010d00>Hmmmmmm...\n<color blue<Rax>coloroff>... Treibt der sich nicht immer mit\n<color blue<Bado>coloroff> herum?\n\n<0x10009:0x000c0400>Und dieser Liebesbrief...\nEr ist von eben diesem <color blue<Rax>coloroff>...\n\n\n<0x10009:0x000b0712>Ach du liebe Güte...")
/*<588>*/ 						set_camera(-1, 0)
/*<589>*/ 						{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1792, 'next': 590, 'param3': 13}
/*<590>*/ 						wait_frames(15)
/*<612>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 82, 'param3': 16}
/*< 82>*/ 						printf(/* textboxtype: 1, unk: 0, line: 220 */ "<0x10009:0x00000009>Aber der Brief ist so schön, so voller\nGefühl...\n\n\nVielleicht sollte ich mich wirklich mit\n<color blue<Rax>coloroff> verabreden.\n\n\n<0x10009:0x00080900>Was rede ich da?\n\n\n\n<0x10009:0x00010d14>Was würde wohl <color blue<Cuco>coloroff> denken, wenn er\ndavon wüsste...")
/*< 83>*/ 						story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */] = true;
          					  case 1:
/*< 79>*/ 						printf(/* textboxtype: 1, unk: 0, line: 215 */ "<0x10009:0x00080912>Was soll das?\nDas ist nicht lustig!")
          					}
          				  case 1:
/*< 76>*/ 					printf(/* textboxtype: 1, unk: 0, line: 213 */ "<0x10009:0x00010406>Hm?\nDu bist seltsam, <heroname>...")
          				}
          			}
          		}
          	  case 1:
/*<667>*/ 		switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          		  case 0:
/*< 69>*/ 			printf(/* textboxtype: 1, unk: 0, line: 206 */ "<0x10009:0x00000001>Du, sag mal <heroname>...\nWas hältst du so von <color blue<Cuco>coloroff>?\n[1-]Netter Kerl.[2-]Ich?")
/*< 70>*/ 			switch (choice(2)) {
          			  case 0:
/*< 71>*/ 				printf(/* textboxtype: 1, unk: 0, line: 207 */ "<0x10009:0x000b070a>Ja, genau!\nEr ist freundlich und hilfsbereit!\nUnd männlich! Und sieht gut aus! \n\n<0x10009:0x000c0416>Huch, was ist nur mit mir los...\n\n\n\n<0x10009:0x00080400>Tut mir leid, dass ich dich so etwas\nKomisches gefragt habe...")
          			  case 1:
/*< 72>*/ 				printf(/* textboxtype: 1, unk: 0, line: 208 */ "<0x10009:0x00010406>Oh!\nAlso, äh, ich meine...\n\n\n<0x10009:0x00080416>Nichts, ähem, schönes Wetter heute,\noder?")
          			}
          		  case 1:
/*<669>*/ 			switch (zone_temp_flags[15 /* 0x0 80 */]) {
          			  case 0:
/*<671>*/ 				printf(/* textboxtype: 1, unk: 0, line: 210 */ "<0x10009:0x00001001>Diese Kleidung steht dir gut!\n\n\n\n<0x10009:0x0000040a>Allerdings nicht so gut wie Cuco...")
          			  case 1:
/*<668>*/ 				printf(/* textboxtype: 1, unk: 0, line: 209 */ "<0x10009:0x00010404><pause 20>Glückwunsch, <heroname>!\nDu bist in die Oberstufe aufgestiegen!\n\n\n<0x10009:0x00080400>Dieses Jahr ist die Uniform also grün.\n<pause 20>Sehr elegant!\n\n\n<0x10009:0x000a1000>Zelda würde sich sicher freuen, dich so\nzu sehen...\n\n\n<0x10009:0x00000406>Mach dir keine Sorgen! Wo auch immer\nsie sein mag, ihr geht es sicher gut und\nsie ist bald wieder hier!")
/*<670>*/ 				zone_temp_flags[15 /* 0x0 80 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_115_05() {
/*<  7>*/ 	start()
/*<830>*/ 	switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          	  case 0:
/*<  8>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 17>*/ 			switch (story_flags[386 /* us: 805A9B0D 0x10, jp: 805ACD8D 0x10 */]) {
          			  case 0:
/*< 22>*/ 				switch (story_flags[387 /* us: 805A9B0D 0x20, jp: 805ACD8D 0x20 */]) {
          				  case 0:
/*<104>*/ 					switch (zone_temp_flags[0 /* 0x1 01 */]) {
          					  case 0:
/*<579>*/ 						{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 3584, 'next': 105, 'param3': 13}
/*<105>*/ 						printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x00000e08>Jetzt kann ich endlich wieder schlafen!\nVielen, vielen Dank!")
          					  case 1:
/*<580>*/ 						{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 3584, 'next': 23, 'param3': 13}
/*< 23>*/ 						printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x00000008>Danke, danke! Ich danke dir!")
          					}
          				  case 1:
/*<123>*/ 					check_item_flag(160, 1)
/*<124>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 60}) {
          					  case 0:
/*<126>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 19, 'param3': 31}
/*< 19>*/ 						printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00000e0d>D-d-das ist ja... Die <color yellow<Rassel>coloroff>!\nDu hast sie gefunden!")
/*<584>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 586, 'param3': 47}
/*<586>*/ 						story_flags[387 /* us: 805A9B0D 0x20, jp: 805ACD8D 0x20 */] = true;
/*<712>*/ 						{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 713, 'param3': 15}
/*<713>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 714, 'param3': 17}
/*<714>*/ 						wait_frames(10)
/*<556>*/ 						set_camera(10, 0)
/*<555>*/ 						{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3328, 'next': 585, 'param3': 13}
/*<585>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 557, 'param3': 48}
/*<557>*/ 						wait_frames(60)
/*< 20>*/ 						printf(/* textboxtype: 1, unk: 0, line: 60 */ "Gut, gut!\nUnd jetzt ins Bettchen...<0x10005:0x00780000>")
/*<558>*/ 						{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3584, 'next': 559, 'param3': 13}
/*<559>*/ 						set_camera(29, 0)
/*< 21>*/ 						printf(/* textboxtype: 1, unk: 0, line: 61 */ "<0x10009:0x00000e08>Sieh dir das an...\nDas Baby scheint sich beruhigt zu\nhaben und schläft sicher bald ein.\n\nEndlich!\nEndlich kann ich wieder schlafen!\n\n\n<0x10009:0x00100e00>Vielen Dank!\nDas werde ich dir nie vergessen!")
/*<103>*/ 						zone_temp_flags[0 /* 0x1 01 */] = true;
/*<715>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 125, 'param3': 42}
/*<125>*/ 						give_gratitude_crystals();
/*<716>*/ 						set_camera(30, 0)
          					  case 1:
/*<743>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 18, 'param3': 31}
/*< 18>*/ 						printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x000d0f09>Ach...\nWenn doch nur jemand diese <color yellow<Rassel\n>coloroff>finden würde...\n\n<0x10009:0x00100000>Ein <color red<Vogel>coloroff> hat sie sich geschnappt und\nist <color red<weggeflogen>coloroff>, aber sie muss noch\n<color red<hier im Dorf>coloroff> sein.\n\n<0x10009:0x000d0000>Ich werde wohl heute wieder nicht\nschlafen können...")
          					}
          				}
          			  case 1:
/*< 10>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 561, 'param3': 31}
/*<561>*/ 				set_camera(10, 0)
/*<560>*/ 				{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 3072, 'next': 562, 'param3': 13}
/*<562>*/ 				wait_frames(75)
/*< 11>*/ 				printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10006:0xfccd>...<pause 45><0x10006:0x00cd><0x10009:0x000d0000>Ach...<0x10005:0x00410000>")
/*<563>*/ 				set_camera(-1, 0)
/*<565>*/ 				{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 564, 'param3': 13}
/*<564>*/ 				printf(/* textboxtype: 1, unk: 0, line: 51 */ "Sieht aus, als bekäme ich heute wieder\nkeinen Schlaf...\n[1-]Warum?[2-]Erschöpft?")
/*< 12>*/ 				switch (choice(2)) {
          				  case 0:
/*< 24>*/ 					printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00100f06>Es ist nett, dass du dir Sorgen machst...")
          					flw_26:
/*< 26>*/ 					printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x000d0f00>Das Weinen meines Kindes hält mich\nNacht für Nacht vom Schlafen ab...\n\n\nNormalerweise schläft mein kleiner\nWonneproppen tief und fest, aber ohne\nSIE...\n[1-]SIE?[2-]Ach, die...?")
/*< 27>*/ 					switch (choice(2)) {
          					  case 0:
/*< 13>*/ 						printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x00100f01>Die <color yellow<Rassel>coloroff>.")
          						flw_15:
/*< 15>*/ 						printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x00000f00>Mit ihr schläft das Baby sofort ein.\nAber wir haben sie neulich verloren.\n\n\nEin <color red<Vogel>coloroff> hat sie sich geschnappt\nund ist damit <color red<weggeflogen>coloroff>. Er dachte\nwohl, sie wäre etwas Essbares.\n\n<0x10009:0x000e0f00>Natürlich konnte er sie nicht fressen,\nalso denke ich, dass sie noch <color red<hier im\nDorf sein muss>coloroff>.\nAber ich konnte sie nicht finden...\n<0x10009:0x00000009>Vielleicht findet sie ja jemand anderes\nfür mich...")
/*< 16>*/ 						story_flags[386 /* us: 805A9B0D 0x10, jp: 805ACD8D 0x10 */] = true;
          					  case 1:
/*< 14>*/ 						printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x00100f04>Ah, du weißt Bescheid. Genau, die\n<color yellow<Rassel>coloroff>.")
          						goto flw_15
          					}
          				  case 1:
/*< 25>*/ 					printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x00100f07>Das hört man doch, oder?")
          					goto flw_26
          				}
          			}
          		  case 1:
          			flw_9:
/*<  9>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00000003>Uhuhuhu, dieses Kind will\neinfach nicht schlafen...\nWas mache ich nur...\n[1-]Schlimm...[2-]Und die Mama?")
/*<127>*/ 			switch (choice(2)) {
          			  case 0:
/*<128>*/ 				printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00000004>Das kann man wohl sagen!\nAber ist dieses Baby trotzdem nicht\neinfach unglaublich süß?\n\nWenn du selbst mal Kinder hast, wirst\ndu das verstehen! ")
          			  case 1:
/*<129>*/ 				printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00000007>Ach, meine Frau<pause 10>.<pause 10>.<pause 10>.\nSie arbeitet den ganzen Tag im Laden\nund braucht ihren Schlaf.\n\n<0x10009:0x000d0f06>Wenn sie nicht ihren Schlaf bekommt...\nÄhm...")
          			}
          		}
          	  case 1:
          		goto flw_9
          	}
          }

          void entrypoint_115_22() {
/*< 88>*/ 	start()
/*< 89>*/ 	switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          	  case 0:
/*< 91>*/ 		switch (story_flags[556 /* us: 805A9B16 0x20, jp: 805ACD96 0x20 */]) {
          		  case 0:
/*< 98>*/ 			switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          			  case 0:
/*<794>*/ 				switch (zone_temp_flags[20 /* 0x3 10 */]) {
          				  case 0:
/*< 99>*/ 					printf(/* textboxtype: 1, unk: 0, line: 243 */ "<0x10009:0x000c0401>Danke, <heroname>!\nDank dir habe ich nun eine wundervolle\nFreundin!")
          				  case 1:
/*<796>*/ 					entrypoint_115_27();
          				}
          			  case 1:
/*<547>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 3072, 'next': 548, 'param3': 13}
/*<548>*/ 				printf(/* textboxtype: 1, unk: 0, line: 242 */ "<0x10009:0x00000018>Äh... Also...\n\n\n\n<0x10009:0x000f1100>Angenommen, du hättest ein Interesse\ndaran, zu wissen, wie sich das Ganze\nentwickelt, dann würdest du sie einfach\nfragen, oder?\n\n<0x10009:0x00110e00>Quatsch, mich interessiert das nicht,\nich interessiere mich nur für das\nPhänomen Liebe an sich...")
          			}
          		  case 1:
/*<132>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 546, 'param3': 31}
/*<546>*/ 			{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 1024, 'next': 92, 'param3': 13}
/*< 92>*/ 			printf(/* textboxtype: 1, unk: 0, line: 234 */ "<0x10009:0x00000001>Na, was gibt's Neues, <heroname>?")
/*<545>*/ 			printf(/* textboxtype: 1, unk: 0, line: 235 */ "<0x10009:0x00010c09>Was sagst du da?\n<color blue<Giruna>coloroff> hat einen Liebesbrief\nbekommen?\n\n<0x10009:0x000f1100>Das...\nAlso...\nWie schön für sie...\n\n<0x10009:0x000c0c54>Und...\nWeißt du zufällig, was sie vor hat?\n[1-]Sich verabreden...[2-]Äh...")
/*< 93>*/ 			switch (choice(2)) {
          			  case 0:
/*< 94>*/ 				printf(/* textboxtype: 1, unk: 0, line: 236 */ "<0x10009:0x00110e53>Was?!?\nDas ist nicht gut!")
          				flw_96:
/*< 96>*/ 				printf(/* textboxtype: 1, unk: 0, line: 238 */ "<0x10009:0x00110e09>Was soll's!\n<color blue<Giruna>coloroff> und ich sind sowieso nur\nFreunde, mehr nicht...\n\nSie kann sich verabreden, mit wem sie\nwill, ich halte mich da raus.\n\n\n<0x10009:0x000c0c00>Aber was ist denn mit Moral und\nAnstand an der Ritterschule?\n\n\n<0x10009:0x00080c00>Ist es andererseits nicht die ideale\nLiebe, zu lieben, wen man will? Ist eine\nLiebe, die diese Bedingung nicht\nerfüllt, überhaupt Liebe?\n<0x10009:0x000b0c00>Es ist meine Pflicht, ihr Recht darauf\nzu lieben, wen sie will, zu beschützen!\n\n\n<0x10009:0x00110e00>Aber auch ich habe ein Recht darauf,\nzu lieben, wen ich möchte! \n\n\n<0x10009:0x000c0c1b>Oder doch nicht? <heroname>?!?\n[1-]Weiß nicht...[2-]Liebst du sie?")
/*<119>*/ 				switch (choice(2)) {
          				  case 0:
/*<121>*/ 					printf(/* textboxtype: 1, unk: 0, line: 240 */ "<0x10009:0x000f1152>Ja, vielleicht ist es ein bisschen mit mir\ndurchgegangen...")
          					flw_122:
/*<122>*/ 					printf(/* textboxtype: 1, unk: 0, line: 241 */ "<0x10009:0x00101117>Na ja...\n\n\n\n<0x10009:0x000f0c00>Könntest du sie vielleicht fragen, was\nsie tun wird?")
/*< 97>*/ 					story_flags[556 /* us: 805A9B16 0x20, jp: 805ACD96 0x20 */] = true;
/*<114>*/ 					story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
          				  case 1:
/*<120>*/ 					printf(/* textboxtype: 1, unk: 0, line: 239 */ "<0x10009:0x00110e53>Was redest du für einen Unsinn,\n<heroname>!\n\n\n<0x10009:0x00120c00>Es will mir nicht in den Sinn, wie du auf\nsolch abwegige Gedanken kommst!")
          					goto flw_122
          				}
          			  case 1:
/*< 95>*/ 				printf(/* textboxtype: 1, unk: 0, line: 237 */ "<0x10009:0x000f1118>Du weißt es nicht...\nAber... Aber ich muss es wissen...")
          				goto flw_96
          			}
          		}
          	  case 1:
/*<814>*/ 		entrypoint_115_27();
          	}
          }

          void entrypoint_115_06() {
/*<253>*/ 	start()
/*<252>*/ 	switch (story_flags[388 /* us: 805A9B0D 0x40, jp: 805ACD8D 0x40 */]) {
          	  case 0:
/*<744>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 256, 'param3': 31}
/*<256>*/ 		switch (story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */]) {
          		  case 0:
/*<257>*/ 			printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00071602>Ich werde alles geben, um stärker zu\nwerden! Komm bald mal wieder und\nsieh dir an, was ich erreicht habe!")
          		  case 1:
/*<258>*/ 			switch (adventure_pouch_has(4 0x0004)) {
          			  case 0:
/*<278>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 277, 'param3': 32}
/*<277>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 260, 'param3': 13}
/*<260>*/ 				printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00000011>Uff... uff...\nIst das da etwa ein <color yellow<Ausdauertrank>coloroff>,\n<heroname>?\n\nWürdest du mir den eventuell geben?\n[1-]Ja[2]Nein")
          				flw_261:
/*<261>*/ 				switch (choice(2)) {
          				  case 0:
/*<263>*/ 					printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x0000000b>Wirklich?!? Danke!\nDu hast etwas gut bei mir!")
/*<266>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3092, 'param2': 7936, 'next': 271, 'param3': 13}
/*<271>*/ 					wait_frames(4)
/*<270>*/ 					set_camera(5, 0)
/*<267>*/ 					wait_frames(135)
/*<265>*/ 					make_actor_do_something(0, 0)
/*<279>*/ 					set_camera(-1, 0)
/*<280>*/ 					wait_frames(20)
/*<264>*/ 					printf(/* textboxtype: 1, unk: 0, line: 79 */ "<0x10009:0x00000010>Ah! Ja!\nDie Müdigkeit verschwindet!")
/*<268>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 269, 'param3': 13}
/*<269>*/ 					printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x00000012>Aber...\nAber schaffe ich es so, jemals stark zu\nwerden?\n[1-]Liegt an dir.[2-]Klar!")
/*<281>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 291, 'param3': 13}
/*<291>*/ 					switch (choice(2)) {
          					  case 0:
/*<292>*/ 						printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000009>Ja! Genau so ist es!\nIch muss mich nur mächtig anstrengen!\nIch sollte nicht nur jammern, sondern\ndie Sache einfach angehen!")
          						flw_294:
/*<294>*/ 						printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00001800>Danke, <heroname>!\nIch werde alles geben, um stärker zu\nwerden!\n\n<0x10009:0x00151800>Ich trainiere weiter!\nKomm bald mal wieder und sieh dir an,\nwas ich erreicht habe!")
/*<295>*/ 						story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */] = true;
/*<213>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<293>*/ 						printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x00001609>Ja... Also...\nWenn du so fest daran glaubst, dann\nkönnte ich es ja vielleicht schaffen...")
          						goto flw_294
          					}
          				  case 1:
/*<262>*/ 					printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x00000011>Oh... Ich hätte nicht fragen sollen...")
/*<288>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': 3072, 'next': 287, 'param3': 13}
/*<287>*/ 					printf(/* textboxtype: 1, unk: 0, line: 73 */ "<0x10009:0x00000003>M-m-mach dir keine Sorgen! Ich\ntrainiere weiter!")
          				}
          			  case 1:
/*<275>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 274, 'param3': 32}
/*<274>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 276, 'param3': 13}
/*<276>*/ 				printf(/* textboxtype: 1, unk: 0, line: 74 */ "<0x10009:0x00000011>Puh... puh...\nEs geht einfach nicht mehr...\n\n\nHätte ich einen <color red<Trank, der mir\nAusdauer verleiht>coloroff>, dann könnte ich\nnoch weitertrainieren...")
/*<290>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 289, 'param3': 13}
/*<289>*/ 				printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00000003>Nein!\nIch darf nicht aufgeben!\n\n\nIch werde allein versuchen, es zu\nschaffen!")
          			}
          		}
          	  case 1:
/*<259>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 273, 'param3': 31}
/*<273>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 272, 'param3': 32}
/*<272>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': 6912, 'next': 254, 'param3': 13}
/*<254>*/ 		printf(/* textboxtype: 1, unk: 0, line: 70 */ "<0x10009:0x00000010>Uff... Huh... Gnrf...\n\n\n\n<0x10009:0x00101600>Oh, <heroname>!\nGuten Abend!\n\n\nWas ich hier mache? Ich trainiere, wie\ndu sehen kannst.\n\n\nIch kann nicht einmal ein einziges Fass\ntragen. Das will ich ändern, denn ich\nwäre gern ein bisschen stärker.\n\nAber das Ganze ist mir peinlich,\nverstehst du? Deswegen trainiere ich\nnachts, wenn mich keiner sieht.\n\n<0x10009:0x00001711>Aber es nützt alles nichts...\nIch bin zu erschöpft, ich glaube, ich\ngebe auf...")
/*<255>*/ 		story_flags[388 /* us: 805A9B0D 0x40, jp: 805ACD8D 0x40 */] = true;
/*<282>*/ 		switch (adventure_pouch_has(4 0x0004)) {
          		  case 0:
/*<284>*/ 			printf(/* textboxtype: 1, unk: 0, line: 76 */ "<0x10009:0x0000000b>Oh! Ist das etwa ein <color yellow<Ausdauertrank>coloroff>,\n<heroname>?\n\n\nWürdest du mir den... geben?\n[1-]Ja[2]Nein")
          			goto flw_261
          		  case 1:
/*<283>*/ 			printf(/* textboxtype: 1, unk: 0, line: 71 */ "Ach, hätte ich nur einen <color red<Trank, der mir\nAusdauer verleiht>coloroff>...\nDann könnte ich weitermachen...")
/*<286>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 285, 'param3': 13}
/*<285>*/ 			printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00000003>Nein!\nIch darf nicht aufgeben!\n\n\nIch werde allein versuchen, es zu\nschaffen!")
          		}
          	}
          }

          void entrypoint_115_23() {
/*<530>*/ 	start()
/*<531>*/ 	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          	  case 0:
/*<680>*/ 		switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          		  case 0:
/*<681>*/ 			switch (story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */]) {
          			  case 0:
          				flw_534:
/*<534>*/ 				entrypoint_115_24();
          			  case 1:
/*<682>*/ 				printf(/* textboxtype: 1, unk: 0, line: 190 */ "<0x10009:0x00000008>Was willst du, <heroname>?!?\nNachts kann ich nur an Giruna denken!\n\n\nWenn du mir was zu sagen hast, komm\ntagsüber!")
          			}
          		  case 1:
          			goto flw_534
          		}
          	  case 1:
/*<532>*/ 		printf(/* textboxtype: 1, unk: 0, line: 193 */ "<0x10009:0x00000010>Hehehe...\nIch habe keine Angst vor <color blue<Bado>coloroff>...\nDieses Zimmer gehört jetzt mir!")
          	}
          }

          void entrypoint_115_07() {
/*<298>*/ 	start()
/*<299>*/ 	switch (story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */]) {
          	  case 0:
/*<745>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 302, 'param3': 31}
/*<302>*/ 		switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
          		  case 0:
/*<304>*/ 			printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x00000002><heroname>!\nIch werde so stark sein, dass du deinen\nAugen nicht trauen wirst!\n\nKomm bald wieder und sieh selbst!")
          		  case 1:
/*<300>*/ 			switch (adventure_pouch_has(4 0x0004)) {
          			  case 0:
/*<332>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 331, 'param3': 32}
/*<331>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 305, 'param3': 13}
/*<305>*/ 				printf(/* textboxtype: 1, unk: 0, line: 89 */ "<0x10009:0x00000010>Huh... Nnngh...\n\n\n\nAh, <heroname>!\nGibst du mir etwas von deinem\n<color yellow<Ausdauertrank>coloroff>?\n[1-]Ja[2]Nein")
          				flw_306:
/*<306>*/ 				switch (choice(2)) {
          				  case 0:
/*<308>*/ 					printf(/* textboxtype: 1, unk: 0, line: 92 */ "<0x10009:0x0000000b>Ja? Danke!\nIch bin dann mal so frei...")
/*<333>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3092, 'param2': 7936, 'next': 312, 'param3': 13}
/*<312>*/ 					wait_frames(4)
/*<311>*/ 					set_camera(5, 0)
/*<310>*/ 					wait_frames(135)
/*<309>*/ 					make_actor_do_something(0, 0)
/*<334>*/ 					set_camera(-1, 0)
/*<335>*/ 					wait_frames(20)
/*<345>*/ 					printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x00000010>Oh ja, ich fühle mich wie neu geboren!\nMeine Müdigkeit ist verflogen!")
/*<347>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 346, 'param3': 13}
/*<346>*/ 					printf(/* textboxtype: 1, unk: 0, line: 94 */ "<0x10009:0x00000012>...Manchmal mache ich mir Sorgen.\nWird das ewig so weitergehen?\n\n\nWie lange muss ich so weitermachen,\nbis ich stark werde? Was denkst du,\n<heroname>?\n\nWie viele Liegestütze muss ich wohl\nnoch machen?\n[1-]Tausend![2-]Unwichtig!")
/*<348>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3073, 'param2': 2048, 'next': 349, 'param3': 13}
/*<349>*/ 					switch (choice(2)) {
          					  case 0:
/*<350>*/ 						printf(/* textboxtype: 1, unk: 0, line: 95 */ "<0x10009:0x00000053>S-s-so... So viele?\n\n\n\n<0x10009:0x00100e00>Der Weg zu Stärke scheint mir steil und\nsteinig zu sein...")
          						flw_352:
/*<352>*/ 						printf(/* textboxtype: 1, unk: 0, line: 97 */ "<0x10009:0x00011600>Es ist alles klar!\nIch werde stark sein!\n\n\n<0x10009:0x00001800>Komm bald wieder und sieh dir an, was\nich erreicht habe!")
/*<353>*/ 						story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */] = true;
/*<354>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<351>*/ 						printf(/* textboxtype: 1, unk: 0, line: 96 */ "<0x10009:0x00000007>Unwichtig?\nAber natürlich! Das ist es! Genial!\n\n\n<0x10009:0x00070800>Ich muss so viele Liegestütze machen,\ndass ich vergesse, wie viele es waren!\nDie Masse macht's!")
          						goto flw_352
          					}
          				  case 1:
/*<307>*/ 					printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x00000011>Oh...\nTut mir leid, das war sehr aufdringlich\nvon mir.")
/*<344>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 343, 'param3': 13}
/*<343>*/ 					printf(/* textboxtype: 1, unk: 0, line: 91 */ "Kein Problem!\nIch schaffe das allein!")
          				}
          			  case 1:
/*<330>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 329, 'param3': 32}
/*<329>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 303, 'param3': 13}
/*<303>*/ 				printf(/* textboxtype: 1, unk: 0, line: 74 */ "<0x10009:0x00000011>Puh... puh...\nEs geht einfach nicht mehr...\n\n\nHätte ich einen <color red<Trank, der mir\nAusdauer verleiht>coloroff>, dann könnte ich\nnoch weitertrainieren...")
/*<342>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 341, 'param3': 13}
/*<341>*/ 				printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00000003>Nein, nein!\nIch darf mich nicht immer nur auf\nandere verlassen!\n\nIch werde es allein schaffen!")
          			}
          		}
          	  case 1:
/*<301>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 328, 'param3': 31}
/*<328>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 327, 'param3': 32}
/*<327>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': 6912, 'next': 296, 'param3': 13}
/*<296>*/ 		printf(/* textboxtype: 1, unk: 0, line: 85 */ "<0x10009:0x00000010>Puh... pfff...\nGuten Abend, <heroname>!\n\n\n<0x10009:0x0c10ff00>Ich habe weiter trainiert, aber ich\nkomme irgendwie nicht voran...\n\n\nVielleicht bin ich einfach wieder zu\nschlapp...")
/*<297>*/ 		story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */] = true;
/*<336>*/ 		switch (adventure_pouch_has(4 0x0004)) {
          		  case 0:
/*<338>*/ 			printf(/* textboxtype: 1, unk: 0, line: 88 */ "<0x10009:0x0000000b>Ah!\nIst das da etwa ein <color yellow<Ausdauertrank,\n>coloroff><heroname>?\n\nWürdest du mir davon etwas abgeben?\n[1-]Ja[2]Nein")
          			goto flw_306
          		  case 1:
/*<337>*/ 			printf(/* textboxtype: 1, unk: 0, line: 86 */ "Sag mal, <heroname>...\nHast du vielleicht noch so einen\n<color yellow<Ausdauertrank>coloroff>?")
/*<340>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 339, 'param3': 13}
/*<339>*/ 			printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00000003>Nein, nein!\nIch darf mich nicht immer nur auf\nandere verlassen!\n\nIch werde es allein schaffen!")
          		}
          	}
          }

          void entrypoint_115_24() {
/*<533>*/ 	start()
          	flw_58:
/*< 58>*/ 	switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          	  case 0:
/*< 61>*/ 		switch (story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */]) {
          		  case 0:
/*< 66>*/ 			printf(/* textboxtype: 1, unk: 0, line: 201 */ "")
          		  case 1:
/*<679>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 686, 'param3': 31}
/*<686>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 687, 'param3': 47}
/*<687>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 689, 'param3': 15}
/*<689>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 690, 'param3': 16}
/*<690>*/ 			set_camera(27, 0)
/*<829>*/ 			make_actor_do_something(4, 0)
/*<688>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 568, 'param3': 48}
/*<568>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3072, 'next': 59, 'param3': 13}
/*< 59>*/ 			printf(/* textboxtype: 1, unk: 0, line: 196 */ "<0x10009:0x00000002><heroname>!\nHast du ihr meinen Brief gegeben...\n[1-]Ja, also...[2-]Na ja...")
/*< 60>*/ 			switch (choice(2)) {
          			  case 0:
/*< 62>*/ 				printf(/* textboxtype: 1, unk: 0, line: 197 */ "<0x10009:0x00111f1d>Nein... Nein...\nDu hast ihn dem Verrückten... auf dem\nKlo...")
          				flw_64:
/*< 64>*/ 				printf(/* textboxtype: 1, unk: 0, line: 199 */ "<0x10009:0x00011f00>Ich habe dir gesagt, dass du das nicht\ntun darfst! So oft habe ich es gesagt!\n\n\n<0x10009:0x001a1f17>Leute wie dich, die der Liebe anderer\nim Weg stehen, sollten von einem Vogel\ngetreten werden!\n\nIch bin ab jetzt nicht mehr dein\nFreund! Oh, wie ich dich hasse,\n<heroname>!")
/*<692>*/ 				{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 7936, 'next': 683, 'param3': 13}
/*<683>*/ 				{'type': 'type3', 'subType': 2, 'param1': 14, 'param2': 0, 'next': 691, 'param3': 14}
/*<691>*/ 				printf(/* textboxtype: 1, unk: 0, line: 200 */ "<0x10009:0x00001f18>Wäääääääääääääääääääh!!!")
/*<697>*/ 				{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 256, 'next': 698, 'param3': 15}
/*<698>*/ 				wait_frames(1)
/*<696>*/ 				set_camera(28, 0)
/*<695>*/ 				{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 1024, 'next': 693, 'param3': 13}
/*<693>*/ 				{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 0, 'next': 65, 'param3': 14}
/*< 65>*/ 				story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */] = true;
/*<707>*/ 				story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
/*<708>*/ 				story_flags[771 /* us: 805A9B2A 0x08, jp: 805ACDAA 0x08 */] = true;
/*<694>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*< 63>*/ 				printf(/* textboxtype: 1, unk: 0, line: 198 */ "<0x10009:0x00151f12>D-d-du...\nDu machst Witze...\nEs muss ein Witz sein...\nEs kann nur ein Witz sein...\n<0x10009:0x00111b00>Du hast ihn wirklich... dem Verrückten\nauf dem Klo gegeben?")
          				goto flw_64
          			}
          		}
          	  case 1:
/*<821>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 113, 'param3': 31}
/*<113>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<541>*/ 			switch (story_flags[664 /* us: 805A9B1F 0x40, jp: 805ACD9F 0x40 */]) {
          			  case 0:
/*<570>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 6912, 'next': 544, 'param3': 13}
/*<544>*/ 				printf(/* textboxtype: 1, unk: 0, line: 192 */ "<0x10009:0x0000000f>Jetzt weiß <color blue<Giruna>coloroff>, wie ich für sie\nempfinde...\n\n\n<0x10008:0xffcd><0x10009:0x00011f00>Ich bin so aufgeregt...")
          			  case 1:
/*<567>*/ 				{'type': 'type3', 'subType': 4, 'param1': 24, 'param2': 6912, 'next': 542, 'param3': 13}
/*<542>*/ 				printf(/* textboxtype: 1, unk: 0, line: 191 */ "<0x10009:0x00000013>Was?!?\nDu hast <color blue<Giruna>coloroff> meinen Brief also\ngegeben?\n\n<0x10009:0x00012500>Und was jetzt?\nWas mach ich jetzt?\nIch muss sie wohl um eine Antwort\nbitten...\n<0x10008:0xffcd><0x10009:0x00011f00>Aber... Das ist... so peinlich...")
/*<543>*/ 				story_flags[664 /* us: 805A9B1F 0x40, jp: 805ACD9F 0x40 */] = true;
          			}
          		  case 1:
/*<566>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 40, 'param3': 13}
/*< 40>*/ 			printf(/* textboxtype: 1, unk: 0, line: 189 */ "<0x10009:0x00000002>Also, <heroname>, du gibst den\nBrief dem Mädchen mit der <color red<runden\nMütze>coloroff>.\n\n<0x10009:0x00011b00>Und auf gar keinen Fall gibst du diesen\nBrief diesem <color red<Verrückten da auf dem\nKlo>coloroff>! Schwöre es!")
          		}
          	}
          }

          void entrypoint_115_25() {
/*<239>*/ 	start()
/*<243>*/ 	switch (story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */]) {
          	  case 0:
/*<248>*/ 		switch (story_flags[393 /* us: 805A9B0C 0x08, jp: 805ACD8C 0x08 */]) {
          		  case 0:
/*<250>*/ 			switch (temp_flags[53 /* 0x7 20 */]) {
          			  case 0:
/*<251>*/ 				printf(/* textboxtype: 1, unk: 0, line: 69 */ "Uoooooooooooh...")
          			  case 1:
/*<249>*/ 				printf(/* textboxtype: 1, unk: 0, line: 68 */ "3985... 3986... 3987... 3988...")
/*<844>*/ 				temp_flags[53 /* 0x7 20 */] = true;
          			}
          		  case 1:
/*<245>*/ 			switch (temp_flags[53 /* 0x7 20 */]) {
          			  case 0:
/*<247>*/ 				printf(/* textboxtype: 1, unk: 0, line: 67 */ "Nuoooh... Gnuoooh...")
          			  case 1:
/*<244>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10006:0xfecd>55... 56... 57...")
/*<843>*/ 				temp_flags[53 /* 0x7 20 */] = true;
          			}
          		}
          	  case 1:
/*<242>*/ 		switch (temp_flags[53 /* 0x7 20 */]) {
          		  case 0:
/*<246>*/ 			printf(/* textboxtype: 1, unk: 0, line: 65 */ "Nuh... oh... oh...")
          		  case 1:
/*<240>*/ 			printf(/* textboxtype: 1, unk: 0, line: 64 */ "<0x10006:0xfccd>5... 6... 7...")
/*<241>*/ 			temp_flags[53 /* 0x7 20 */] = true;
          		}
          	}
          }

          void entrypoint_115_08() {
/*<313>*/ 	start()
/*<314>*/ 	switch (story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */]) {
          	  case 0:
/*<326>*/ 		switch (zone_temp_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*<321>*/ 			printf(/* textboxtype: 1, unk: 0, line: 103 */ "<0x10009:0x0015180a>Ich trainiere weiter!\nAls Nächstes will ich ein Fass mit nur\neinem Finger hochheben!")
          		  case 1:
/*<322>*/ 			printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x0015180a>Hmpf...\nIch könnte immer so weitermachen!")
          		}
          	  case 1:
/*<323>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 315, 'param3': 31}
/*<315>*/ 		printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x0015190a>Hmpf...\nIch könnte noch ewig so weitermachen!\n\n\n<0x10009:0x00011600>Hey, <heroname>!\nGut, dass du hier bist. Ich wollte dich\netwas fragen.\n\n<0x10009:0x00071800>Also, ich habe jetzt mal wieder\nversucht, ein Fass hochzuheben...\nUnd es ging mit nur einer Hand!\n\n<0x10009:0x00001600>Das heißt doch, dass ich stärker\ngeworden bin, oder?\n\n\n<heroname>, bin ich jetzt stärker?\n[1-]Zu stark...[2-]Ja!")
/*<317>*/ 		switch (choice(2)) {
          		  case 0:
/*<319>*/ 			printf(/* textboxtype: 1, unk: 0, line: 101 */ "<0x10009:0x00071809>Na, jetzt übertreibst du.\nAber ich bin trotzdem glücklich.")
          			flw_320:
/*<320>*/ 			printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x00001600>Ich habe es nur dank dir so weit\ngeschafft, <heroname>.\n\n\n<0x10009:0x00011900>Ohne dich hätte ich einfach\naufgegeben.\n\n\n<0x10009:0x0007180b>Ich danke dir von ganzem Herzen,\n<heroname>!")
/*<324>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
/*<316>*/ 			story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */] = true;
/*<325>*/ 			give_gratitude_crystals();
          		  case 1:
/*<318>*/ 			printf(/* textboxtype: 1, unk: 0, line: 100 */ "<0x10009:0x0000180b>Wirklich? Danke!\nIch bin so glücklich...")
          			goto flw_320
          		}
          	}
          }

          void entrypoint_115_09() {
/*<175>*/ 	start()
/*<212>*/ 	switch (story_flags[383 /* us: 805A9B0D 0x02, jp: 805ACD8D 0x02 */]) {
          	  case 0:
/*<215>*/ 		switch (story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */]) {
          		  case 0:
/*<788>*/ 			switch (temp_flags[11 /* 0x0 08 */]) {
          			  case 0:
/*<789>*/ 				printf(/* textboxtype: 1, unk: 0, line: 125 */ "<0x10009:0x000b0e09>Danke, <heroname>!\nDanke, dass du dich um mein\nSchwesterchen gekümmert hast! Das\nwerde ich nie vergessen!")
          			  case 1:
/*<772>*/ 				entrypoint_115_26();
          			}
          		  case 1:
/*<742>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 731, 'param3': 31}
/*<731>*/ 			switch (story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */]) {
          			  case 0:
/*<214>*/ 				printf(/* textboxtype: 1, unk: 0, line: 121 */ "<0x10009:0x000b0e09><heroname>! Mein Schwesterchen\nist wieder da!\n\n\n<0x10009:0x000a0400>Ich hatte mir schon das Schlimmste\nausgemalt! Ich bin so erleichtert!\n\n\n<0x10009:0x000b0400>Danke, <heroname>!")
/*<216>*/ 				story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */] = true;
/*<787>*/ 				temp_flags[11 /* 0x0 08 */] = true;
/*<732>*/ 				give_gratitude_crystals();
          			  case 1:
/*<734>*/ 				printf(/* textboxtype: 1, unk: 0, line: 122 */ "<0x10009:0x000b0e09><heroname>!\nMein Schwesterchen ist wieder da!\n\n\n<0x10009:0x000a0400>Ich hatte mir schon das Schlimmste\nausgemalt! Ich bin so erleichtert!\n\n\nWas sagst du? Du hast ihr die\nVogelmedizin gebracht?<pause 20><0x10009:0x000b0400> Vielen Dank!\n\n\nBitte nimm das hier als kleines Zeichen\nmeines Dankes!")
/*<738>*/ 				switch (is_adventure_pouch_full()) {
          				  case 0:
/*<739>*/ 					switch (is_item_check_full()) {
          					  case 0:
/*<740>*/ 						printf(/* textboxtype: 1, unk: 0, line: 123 */ "<0x10009:0x000b0a05>Eigentlich wollte ich dir eine <color yellow<leere\nFlasche>coloroff> geben, aber deine Tasche und\ndas Item-Lager sind schon voll.\n\nKomm noch mal zu mir, wenn du\nwieder Platz in deiner Tasche oder im\nItem-Lager hast.")
          					  case 1:
          						flw_735:
/*<735>*/ 						story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */] = true;
/*<736>*/ 						story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */] = true;
/*<733>*/ 						give_item(153 0x99);
/*<786>*/ 						temp_flags[11 /* 0x0 08 */] = true;
/*<812>*/ 						printf(/* textboxtype: 1, unk: 0, line: 124 */ "<0x10009:0x000b0400>Ich bin sicher, dass du irgendwie\nVerwendung dafür finden wirst.\nNoch mal vielen Dank!")
/*<813>*/ 						give_gratitude_crystals();
          					}
          				  case 1:
          					goto flw_735
          				}
          			}
          		}
          	  case 1:
/*<176>*/ 		switch (story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */]) {
          		  case 0:
/*<741>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 183, 'param3': 31}
/*<183>*/ 			switch (story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */]) {
          			  case 0:
/*<200>*/ 				switch (story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */]) {
          				  case 0:
/*<204>*/ 					switch (adventure_pouch_has(5 0x0005)) {
          					  case 0:
/*<205>*/ 						printf(/* textboxtype: 1, unk: 0, line: 120 */ "<0x10009:0x000b0409>Worauf wartest du, <heroname>?\nBring diese <color yellow<Pilzsporen>coloroff><color yellow< >coloroff>schnell zu\nmeinem Schwesterchen!\n\n<0x10009:0x000a0400>Ich verlass mich auf dich!")
          					  case 1:
/*<201>*/ 						printf(/* textboxtype: 1, unk: 0, line: 118 */ "<0x10009:0x000b0406>Was? Was hast du denn mit den\n<color yellow<Pilzsporen>coloroff> gemacht? Hast du sie noch\nnicht zu meinem Schwesterchen\ngebracht?\n<0x10009:0x000a0400>Wenn du die <color yellow<Pilzsporen >coloroff>verloren hast,\n<color red<findest du bei Pilzen neue>coloroff>.\n\n\nIch verlass mich auf dich,\n<heroname>!")
          					}
          				  case 1:
/*<220>*/ 					switch (story_flags[395 /* us: 805A9B0C 0x80, jp: 805ACD8C 0x80 */]) {
          					  case 0:
/*<221>*/ 						printf(/* textboxtype: 1, unk: 0, line: 119 */ "<0x10009:0x000b0409>Wenn du Platz in deiner Tasche hast,\ndann kannst du ihr das hier bringen!\n\n\n<0x10009:0x000a0400>Diese <color yellow<Pilzsporen >coloroff>sollten ihrem Vogel\nhelfen.")
          						flw_231:
/*<231>*/ 						switch (is_adventure_pouch_full()) {
          						  case 0:
/*<228>*/ 							printf(/* textboxtype: 1, unk: 0, line: 116 */ "<0x10009:0x0000050d>Du trägst zu viel mit dir herum!\n<0x10009:0x00000400>Schaff ein bisschen Platz in deiner\nTasche und komm dann wieder!")
/*<229>*/ 							story_flags[395 /* us: 805A9B0C 0x80, jp: 805ACD8C 0x80 */] = true;
          						  case 1:
/*<746>*/ 							story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */] = true;
/*<230>*/ 							give_item(55 0x37);
/*<747>*/ 							story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */] = false;
/*<232>*/ 							printf(/* textboxtype: 1, unk: 0, line: 117 */ "<0x10009:0x000b0404>Damit geht es ihrem Vogel bald besser\nund er kann aus eigener Kraft nach\nHause fliegen. <0x10009:0x00000c00>Bring den Trank zu\nmeinem Schwesterchen!\n<0x10009:0x00000400>Die <color red<leere Flasche >coloroff>kannst du dann\nbehalten!\n\n\nIch verlass mich auf dich,\n<heroname>!")
/*<227>*/ 							story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */] = true;
          						}
          					  case 1:
          						flw_199:
/*<199>*/ 						printf(/* textboxtype: 1, unk: 0, line: 115 */ "<0x10009:0x000b050d>Was?!?\nDu hast mein Schwesterchen gesehen?\nIhr Vogel ist verletzt und kann nicht \nfliegen?\n<0x10009:0x000a0c00>Oh nein!\nBring ihr schnell das hier!\n\n\n<0x10009:0x00000400>Diese <color yellow<Pilzsporen>coloroff> sollten ihrem Vogel\nhelfen!")
          						goto flw_231
          					}
          				}
          			  case 1:
/*<184>*/ 				printf(/* textboxtype: 1, unk: 0, line: 112 */ "<0x10009:0x000a0c12>Oh oh oh...\nIch mach mir solche Sorgen!\n\n\nSie hat sonst immer eine <color red<Flasche>coloroff> mit\nMedizin dabei, falls ihr Vogel sich\nverletzt...\n\nUnd heute hat sie sie vergessen...")
/*<835>*/ 				make_actor_do_something(0, 0)
/*<836>*/ 				printf(/* textboxtype: 1, unk: 0, line: 113 */ "<0x10009:0x000d0400>Mein Schwesterchen wollte sich diese\n<color blue<bunte, runde Insel>coloroff> ansehen. Das heißt,\nsie müsste irgendwo im <color red<Südwesten>coloroff> sein.")
/*<837>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 838, 'param3': 17}
/*<838>*/ 				printf(/* textboxtype: 1, unk: 0, line: 114 */ "<0x10009:0x00010400>Bitte such mein Schwesterchen für\nmich, <heroname>!")
          			}
          		  case 1:
/*<202>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 177, 'param3': 31}
/*<177>*/ 			printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x000a0c12>Oh oh oh oh oh...\nWas mach ich nur? Was mach ich nur?\n[1-]Was ist los?[2-]Beruhig dich...")
/*<178>*/ 			switch (choice(2)) {
          			  case 0:
/*<179>*/ 				printf(/* textboxtype: 1, unk: 0, line: 106 */ "<0x10009:0x00000411>Ach, <heroname>.\nHast du kurz Zeit, mir zuzuhören?\nDanke.")
          				flw_181:
/*<181>*/ 				printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x00000400>Es ist so...\nMein <color red<Schwesterchen>coloroff> hat einen Ausflug\ngemacht und ist noch nicht wieder\nzurückgekehrt.\nSie ist schon zu lang weg, also habe ich\nsie gesucht, aber keine Spur von ihr...\n\n\n<0x10009:0x000b0500>Wenn ihr nun etwas passiert ist!\nIch mache mir solche Sorgen!")
/*<198>*/ 				switch (story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */]) {
          				  case 0:
/*<219>*/ 					story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */] = true;
          					goto flw_199
          				  case 1:
/*<197>*/ 					printf(/* textboxtype: 1, unk: 0, line: 109 */ "<0x10009:0x00000411><heroname>, kannst du vielleicht\nnach ihr suchen?")
/*<831>*/ 					make_actor_do_something(0, 0)
/*<832>*/ 					printf(/* textboxtype: 1, unk: 0, line: 110 */ "<0x10009:0x000d0400>Sie hat gesagt, dass diese <color blue<bunte runde\nInsel >coloroff>sie interessiert, also ist sie wohl\nnach <color red<Südwesten >coloroff>geflogen.\n")
/*<833>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 834, 'param3': 17}
/*<834>*/ 					printf(/* textboxtype: 1, unk: 0, line: 111 */ "<0x10009:0x00010400>Ich verlasse mich auf dich,\n<heroname>!")
/*<182>*/ 					story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */] = true;
          				}
          			  case 1:
/*<180>*/ 				printf(/* textboxtype: 1, unk: 0, line: 107 */ "<0x10009:0x000b0500>Ich soll mich beruhigen?!?\n...Entschuldigung.\nDich anzuschreien hilft ja nichts.")
          				goto flw_181
          			}
          		}
          	}
          }

          void entrypoint_115_26() {
/*<762>*/ 	start()
/*<765>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<766>*/ 		printf(/* textboxtype: 1, unk: 0, line: 135 */ "<0x10009:0x000b0409>Es heißt, die Insel der Göttin sei\nverschwunden! Wie entsetzlich!\n\n\n<0x10009:0x000a0400>Das bedeutet nichts Gutes!")
          		flw_790:
/*<790>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
          		  case 1:
/*<791>*/ 			switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          			  case 0:
/*<792>*/ 				printf(/* textboxtype: 1, unk: 0, line: 138 */ "<0x10009:0x00010400><color blue<Stru>coloroff> hat ein <color red<seltenes Insekt>coloroff> gefunden\nund ist überglücklich zur Sturmwolke\naufgebrochen.\n\nEr wird noch durch seine Prüfungen\nfallen...")
          			  case 1:
/*<767>*/ 				switch (story_flags[811 /* us: 805A9B31 0x08, jp: 805ACDB1 0x08 */]) {
          				  case 0:
/*<771>*/ 					printf(/* textboxtype: 1, unk: 0, line: 137 */ "<0x10009:0x00010400><color blue<Stru>coloroff> meinte, er würde auf einer Insel <color red<in\nder Sturmwolke >coloroff>Insekten versammeln\nund so sein Insektenparadies\nvergrößern!")
          				  case 1:
/*<770>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 768, 'param3': 31}
/*<768>*/ 					printf(/* textboxtype: 1, unk: 0, line: 136 */ "<0x10009:0x000a0a00>Du hast doch einen Klassenkameraden\nnamens <color blue<Stru>coloroff>, oder?\n\n\nEr sagte, er hätte <color red<in der >coloroff><color red<Sturmwolke\n>coloroff>ein wahres Insektenparadies entdeckt.\nEr mag diese Tierchen sehr, was?\n\n<0x10009:0x000b0400>Was will er denn mit einem\nInsektenparadies?")
/*<769>*/ 					story_flags[811 /* us: 805A9B31 0x08, jp: 805ACDB1 0x08 */] = true;
          				}
          			}
          		}
          	  case 1:
/*<810>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<811>*/ 			printf(/* textboxtype: 1, unk: 0, line: 134 */ "<0x10009:0x00000001>Es hat sich angehört, als hätte sich die\nErde bewegt... Was das nur war?")
          			goto flw_790
          		  case 1:
/*<774>*/ 			switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          			  case 0:
/*<775>*/ 				printf(/* textboxtype: 1, unk: 0, line: 133 */ "<0x10009:0x00000001>Was hast du auf dem Marktplatz\ngemacht? Es ist plötzlich so dunkel\ngeworden.")
          				goto flw_790
          			  case 1:
/*<773>*/ 				switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          				  case 0:
/*<764>*/ 					printf(/* textboxtype: 1, unk: 0, line: 132 */ "<0x10009:0x000a0405>Ich frage mich, warum sich diese\nSchmetterlinge auf dem Marktplatz\nversammeln, obwohl da gar nichts ist...")
          					goto flw_790
          				  case 1:
/*<841>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*<842>*/ 						printf(/* textboxtype: 1, unk: 0, line: 131 */ "<0x10009:0x00000001>Hallo, <heroname>!\nDu bist auch ständig unterwegs, was?")
          						goto flw_790
          					  case 1:
/*<779>*/ 						switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          						  case 0:
/*<784>*/ 							switch (story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */]) {
          							  case 0:
/*<783>*/ 								printf(/* textboxtype: 1, unk: 0, line: 129 */ "<0x10009:0x00000001>Hallo, <heroname>!\nIn letzter Zeit habe ich unsere drei\nRabauken gar nicht mehr gesehen.\n\nHaben sie vielleicht angefangen, für\ndie Schule zu lernen, nachdem sie\ndie Prüfung für die Oberstufe nicht\ngeschafft haben?")
          							  case 1:
/*<785>*/ 								printf(/* textboxtype: 1, unk: 0, line: 130 */ "<0x10009:0x00000001>Hallo, <heroname>!\nIch habe diese Roulette-Insel jetzt\nauch gesehen, die mein Schwesterchen\nso fasziniert hat.\nDem Besitzer der Insel ist seine\n<color red<Roulettescheibe >coloroff>anscheinend unter die\nWolken gefallen.\n\nTja, wenn sie tatsächlich unter die\nWolken gefallen ist, dann braucht er\neigentlich gar nicht erst danach zu\nsuchen...")
          							}
          						  case 1:
/*<776>*/ 							switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          							  case 0:
/*<782>*/ 								printf(/* textboxtype: 1, unk: 0, line: 128 */ "<0x10009:0x000a0405>Siehst du das?!?\nVom Turm des Lichts geht ein\nLichtstrahl in Richtung Sturmwolke...\n\nDas schreit ja geradezu danach, sich\ndie Sturmwolke einmal genauer\nanzusehen.")
          							  case 1:
/*<840>*/ 								switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          								  case 0:
          									flw_780:
/*<780>*/ 									printf(/* textboxtype: 1, unk: 0, line: 126 */ "<0x10009:0x00000001>Sag mal, <heroname>...\nIn letzter Zeit habe ich Zelda gar\nnicht mehr gesehen, ist etwas passiert?")
          								  case 1:
/*<778>*/ 									switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          									  case 0:
/*<781>*/ 										printf(/* textboxtype: 1, unk: 0, line: 127 */ "<0x10009:0x00000001>Hallo, <heroname>!\n\n\n\n<0x10009:0x000a0400>Was? <color red<Zwei Flügel>coloroff>?<pause 30>\nIch hab's nicht so mit Rätseln, frag\ndoch mal den <color red<Wahrsager>coloroff>.")
          									  case 1:
/*<777>*/ 										switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          										  case 0:
          											goto flw_780
          										  case 1:
/*<763>*/ 											printf(/* textboxtype: 1, unk: 0, line: 125 */ "<0x10009:0x000b0e09>Danke, <heroname>!\nDanke, dass du dich um mein\nSchwesterchen gekümmert hast! Das\nwerde ich nie vergessen!")
          										}
          									}
          								}
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_115_27() {
/*<795>*/ 	start()
/*<816>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<818>*/ 		printf(/* textboxtype: 1, unk: 0, line: 232 */ "<0x10009:0x000c0401>Ich habe gehört, dass die Insel der\nGöttin verschwunden ist! <pause 30>Das macht\nmich irgendwie traurig...\n\n<0x10009:0x00110e00>Aber ich glaube, die Göttin wollte uns\ndamit sagen, dass wir uns nicht nur auf\nsie verlassen sollen. Wir müssen auch\nstark sein, wenn sie nicht bei uns ist.")
/*<819>*/ 		switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          		  case 0:
/*<820>*/ 			printf(/* textboxtype: 1, unk: 0, line: 233 */ "<0x10009:0x000c040b><0x10008:0xfecd>Und wenn ich ehrlich bin, gibt es noch eine zweite\nGöttin in meinem Leben, hihihi...")
          		  case 1:
          		}
          	  case 1:
/*<815>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<817>*/ 			printf(/* textboxtype: 1, unk: 0, line: 231 */ "<0x10009:0x00001101>Hallo, <heroname>! Das, was ich\ndir jetzt sage, bleibt unter uns, ja?\n\n\n<0x10009:0x000c0400>Ich habe bei meinem Spaziergang\nneulich bemerkt, dass unter der Statue\nder Göttin ein seltsames Gebäude\nherausragt.\n<0x10009:0x00110e00>Was passiert denn hier in unserem\nschönen Wolkenhort?")
          		  case 1:
/*<702>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<703>*/ 				printf(/* textboxtype: 1, unk: 0, line: 229 */ "<0x10009:0x00000005>Na, du wirkst ja schon viel fröhlicher,\n<heroname>!\n\n\n<0x10009:0x0000040b>Das ist die richtige Einstellung!<pause 20>\nZelda wird nach Hause kommen,\ndu musst nur fest daran glauben!")
          			  case 1:
/*<700>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<701>*/ 					printf(/* textboxtype: 1, unk: 0, line: 230 */ "<0x10009:0x00000001>Wie geht's dir, <heroname>?\n\n\n\n<0x10009:0x000c1400>Hä? Die Göttin hat das Triforce\nversteckt?\n\n\n<0x10009:0x00101100>Äh, also, davon weiß ich nichts...\n\n\n\n<0x10009:0x00081400>Vielleicht solltest du besser einen der\nLehrer fragen?")
          				  case 1:
/*<663>*/ 					switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          					  case 0:
/*<662>*/ 						printf(/* textboxtype: 1, unk: 0, line: 229 */ "<0x10009:0x00000005>Na, du wirkst ja schon viel fröhlicher,\n<heroname>!\n\n\n<0x10009:0x0000040b>Das ist die richtige Einstellung!<pause 20>\nZelda wird nach Hause kommen,\ndu musst nur fest daran glauben!")
          					  case 1:
/*<661>*/ 						switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          						  case 0:
/*<660>*/ 							printf(/* textboxtype: 1, unk: 0, line: 228 */ "<0x10009:0x00000001>Geht's dir ein bisschen besser,\n<heroname>?\n\n\n<0x10009:0x00091400>Ich habe auch so meine Probleme, aber\nich versuche, mir vor anderen Leuten\nnichts anmerken zu lassen.\n\n<0x10009:0x00110400>Dann verschwindet die Traurigkeit\neinfach! Glaub daran und lebe danach!")
          						  case 1:
/*< 90>*/ 							printf(/* textboxtype: 1, unk: 0, line: 227 */ "<0x10009:0x00000001><heroname>!\nEndlich bist du in der Oberstufe!\nSiehst gut aus in der Uniform!\n\n<0x10009:0x00101100>Aber es ist unpassend, so zu reden,\nnachdem Zelda verschwunden ist...\n\n\n<0x10009:0x000c1400>Ihr beide wart schon als kleine Kinder\nbefreundet... Ich kann mir gut\nvorstellen, wie du dich fühlen musst.\n\n<0x10009:0x00081400>Aber ihr geht es sicher gut! Du musst\nnur fest daran glauben, und sie wird\nnach Hause kommen!")
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_115_10() {
/*<185>*/ 	start()
/*<186>*/ 	switch (story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */]) {
          	  case 0:
/*<206>*/ 		switch (adventure_pouch_has(5 0x0005)) {
          		  case 0:
/*<845>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 195, 'param3': 31}
/*<195>*/ 			switch (story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */]) {
          			  case 0:
/*<207>*/ 				printf(/* textboxtype: 1, unk: 0, line: 149 */ "<0x10009:0x0000000b>Ah, <color yellow<Pilzsporen>coloroff>! So ein Glück!\nDu hast die Medizin mitgebracht!\n[1-]Geben[2]Nicht\ngeben")
          				flw_208:
/*<208>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_210:
/*<210>*/ 					printf(/* textboxtype: 1, unk: 0, line: 151 */ "<0x10009:0x000b0409>Danke! Damit kann ich meinen Vogel\nversorgen!")
/*<607>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 610, 'param3': 47}
/*<610>*/ 					{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 224, 'param3': 15}
/*<224>*/ 					make_actor_do_something(0, 0)
/*<647>*/ 					wait_frames(1)
/*<646>*/ 					{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 256, 'next': 234, 'param3': 15}
/*<234>*/ 					set_camera(7, 0)
/*<235>*/ 					{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': -256, 'next': 608, 'param3': 13}
/*<608>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 236, 'param3': 48}
/*<236>*/ 					wait_frames(45)
/*<233>*/ 					printf(/* textboxtype: 1, unk: 0, line: 152 */ "<0x10009:0x00000004>Es wird ihm gleich besser gehen!")
/*<237>*/ 					wait_frames(30)
/*<581>*/ 					make_actor_do_something(1, 0)
/*<609>*/ 					set_camera(24, 0)
/*<238>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 1280, 'next': 222, 'param3': 13}
/*<222>*/ 					printf(/* textboxtype: 1, unk: 0, line: 153 */ "<0x10009:0x00000009>Ich dachte schon, es wäre aus! Du hast\nuns wirklich aus der Patsche geholfen!\n\n\nDu hast meinem Vogel und mir das\nLeben gerettet! Tausend Dank!")
/*<225>*/ 					give_gratitude_crystals();
/*<223>*/ 					printf(/* textboxtype: 1, unk: 0, line: 154 */ "<0x10009:0x00000004>Wir machen uns dann mal auf den\nRückweg! Man sieht sich im Dorf!")
/*<615>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 582, 'param3': 47}
/*<582>*/ 					make_actor_do_something(2, 0)
/*<613>*/ 					set_camera(25, 0)
/*<617>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 583, 'param3': 17}
/*<583>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 40, 'next': 616, 'param3': 48}
/*<616>*/ 					make_actor_do_something(3, 0)
/*<211>*/ 					story_flags[383 /* us: 805A9B0D 0x02, jp: 805ACD8D 0x02 */] = true;
/*<823>*/ 					story_flags[838 /* us: 805A9B32 0x40, jp: 805ACDB2 0x40 */] = true;
/*<614>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				  case 1:
/*<209>*/ 					printf(/* textboxtype: 1, unk: 0, line: 150 */ "<0x10009:0x00001113>Du Ungeheuer!")
          				}
          			  case 1:
/*<730>*/ 				printf(/* textboxtype: 1, unk: 0, line: 144 */ "<0x10009:0x0000050b>Gibst du mir die Pilzsporen?\nDie würden meinen Vogel im Nu wieder\ngesund machen.\n[1-]Ja[2]Nein")
          				goto flw_208
          			}
          		  case 1:
/*<226>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 196, 'param3': 31}
/*<196>*/ 			printf(/* textboxtype: 1, unk: 0, line: 148 */ "<0x10009:0x00000001><color red<Mein Bruder >coloroff>hat <color red<Vogelmedizin>coloroff>.\nBitte geh zu ihm!\n\n\nMein Vogel und ich warten hier. Wir\nverlassen uns auf dich!")
          		}
          	  case 1:
/*<203>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 188, 'param3': 31}
/*<188>*/ 		printf(/* textboxtype: 1, unk: 0, line: 139 */ "<0x10009:0x0000050b>Wenn das nicht <heroname> ist...\nGut, dass du hier bist!\n\n\n<0x10009:0x00120200>Mein Vogel hat sich bei unserem\nAusflug verletzt und kann nicht mehr\nfliegen.\n\n<0x10009:0x00011500>Irgendwie konnten wir hier zwar\nnotlanden, aber jetzt kommen wir\nnicht mehr nach Hause.\n\n<0x10009:0x00121500>Ich kann allerdings sowieso nicht weg\nhier, bevor ich seine Verletzung\nversorgt habe. Und dafür brauche ich\n<color red<Medizin>coloroff>.\nUnd zwar keine für Menschen, sondern\n<color red<spezielle Vogelmedizin>coloroff>.\n\n\n<0x10009:0x00150200>Kannst du mir bitte Vogelmedizin\nbringen, <heroname>?\n[1-]Na klar![2-]Tut mir leid...")
/*<189>*/ 		switch (choice(2)) {
          		  case 0:
/*<190>*/ 			printf(/* textboxtype: 1, unk: 0, line: 140 */ "<0x10009:0x000b0409>Danke!\nDu bist ein Lebensretter!")
          			flw_192:
/*<192>*/ 			printf(/* textboxtype: 1, unk: 0, line: 142 */ "<color red<Vogelmedizin>coloroff> bekommst du von\n<color red<meinem Bruder>coloroff>. Geh zu ihm.\n\n\nBestimmt macht er sich schon Sorgen\nund wartet am <color red<Dorfplatz des\nWolkenhorts>coloroff> auf mich.")
/*<727>*/ 			story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */] = true;
/*<725>*/ 			switch (adventure_pouch_has(5 0x0005)) {
          			  case 0:
/*<726>*/ 				printf(/* textboxtype: 1, unk: 0, line: 143 */ "<0x10009:0x00090509>Sieh an, du hast ja schon Medizin\ndabei! Diese <color yellow<Pilzsporen>coloroff> sind genau das,\nwas ich brauche!\n\nDie würden meinen Vogel im Nu wieder\ngesund machen. Gibst du sie mir bitte?\n[1-]Ja[2]Nein")
/*<728>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_210
          				  case 1:
/*<737>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 4352, 'next': 729, 'param3': 13}
/*<729>*/ 					printf(/* textboxtype: 1, unk: 0, line: 145 */ "Schade. Aber kannst du vielleicht\nmeinem Bruder sagen, was passiert\nist?")
          				}
          			  case 1:
/*<187>*/ 				switch (story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */]) {
          				  case 0:
/*<193>*/ 					printf(/* textboxtype: 1, unk: 0, line: 146 */ "Oh, du hast schon mit ihm gesprochen?\nDas macht die Sache einfacher.")
          					flw_194:
/*<194>*/ 					printf(/* textboxtype: 1, unk: 0, line: 147 */ "Mein Vogel und ich warten hier.\nWir verlassen uns auf dich! Danke!")
          				  case 1:
          					goto flw_194
          				}
          			}
          		  case 1:
/*<191>*/ 			printf(/* textboxtype: 1, unk: 0, line: 141 */ "<0x10009:0x000c1513>Du Ungeheuer!\n\n\n\n<0x10009:0x000b0409>Jetzt ist nicht die Zeit für solche\nScherze!")
          			goto flw_192
          		}
          	}
          }

          void entrypoint_115_28() {
/*<797>*/ 	start()
/*<805>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<806>*/ 		printf(/* textboxtype: 1, unk: 0, line: 226 */ "<0x10009:0x000c0456>Von draußen war ein Riesenlärm zu\nhören, da muss wohl irgendwas\npassiert sein...")
          	  case 1:
/*<807>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
          			flw_86:
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 0, line: 223 */ "<0x10009:0x00000001>Hallo, <heroname>.\nIrgendwie wirst du in letzter Zeit\nimmer attraktiver.\n\nDiese Uniform steht dir. Man hat das\nGefühl, sich auf dich verlassen zu\nkönnen.")
          		  case 1:
/*<802>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<804>*/ 				printf(/* textboxtype: 1, unk: 0, line: 225 */ "<0x10009:0x00080e06>Was? Du kannst mit deinem Vogel den\nTornadostoß einsetzen?!?\n\n\n<0x10009:0x00080909>Alle Achtung!<pause 30> <0x10009:0x000c0400>Aber<pause 20> Cuco kann das\nbestimmt auch!")
          			  case 1:
/*<801>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<803>*/ 					printf(/* textboxtype: 1, unk: 0, line: 224 */ "<0x10009:0x00000006>Wie? Triforce?<pause 30>\nWas soll das sein?")
          				  case 1:
          					goto flw_86
          				}
          			}
          		}
          	}
          }

          void entrypoint_115_11() {
/*<217>*/ 	start()
/*<759>*/ 	switch (story_flags[1082 /* us: 805A9B53 0x01, jp: 805ACDD3 0x01 */]) {
          	  case 0:
/*<704>*/ 		switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          		  case 0:
/*<705>*/ 			printf(/* textboxtype: 1, unk: 0, line: 162 */ "<0x10009:0x00000001><heroname>!\nDie Insel der Göttin ist verschwunden!\n\n\n<0x10009:0x00001513>Die Insel war immer ein guter Platz\nzum Ausruhen für die Vögel...")
          		  case 1:
/*<808>*/ 			switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          			  case 0:
/*<809>*/ 				printf(/* textboxtype: 1, unk: 0, line: 161 */ "<0x10009:0x00000013>Das hat ja ganz schön gewackelt. Ist\nirgendetwas passiert?")
          			  case 1:
/*<753>*/ 				switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          				  case 0:
/*<758>*/ 					printf(/* textboxtype: 1, unk: 0, line: 160 */ "<0x10009:0x00000001>Hallo, <heroname>!\n\n\n\n<0x10009:0x000c0200>Du hast tatsächlich den Tornadostoß\nerlernt und kannst ihn einsetzen?<pause 30>\n<0x10009:0x000c050b>Du bist ja ein toller Hecht!")
          				  case 1:
/*<752>*/ 					switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          					  case 0:
/*<757>*/ 						printf(/* textboxtype: 1, unk: 0, line: 159 */ "<0x10009:0x00000057>Was sagst du da? Triforce? Hmmm...<pause 20>\nWas soll das denn sein? Von so etwas\nhabe ich noch nie gehört...\n\nHast du schon deine Lehrer gefragt?")
          					  case 1:
/*<751>*/ 						switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          						  case 0:
          							flw_754:
/*<754>*/ 							printf(/* textboxtype: 1, unk: 0, line: 156 */ "<0x10009:0x00000001>Hallo, <heroname>! \nDieses Mädchen von der Ritterschule<pause 5>.<pause 5>.<pause 5>.<pause 5>\nZelda, so hieß sie doch?\n\nIch habe euch in letzter Zeit gar nicht\nmehr zusammen gesehen, habt ihr euch\ngestritten?")
          						  case 1:
/*<748>*/ 							switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          							  case 0:
/*<756>*/ 								printf(/* textboxtype: 1, unk: 0, line: 158 */ "<0x10009:0x00000013>Was war denn da eben los? Der ganze\nHimmel wurde einen Augenblick lang\nkomplett in Dunkelheit gehüllt...")
          							  case 1:
/*<839>*/ 								switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          								  case 0:
          									goto flw_754
          								  case 1:
/*<750>*/ 									switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          									  case 0:
/*<755>*/ 										printf(/* textboxtype: 1, unk: 0, line: 157 */ "<0x10009:0x00000001>Hallo, <heroname>!\n\n\n\n<0x10009:0x00110057>Wie? <color red<Zwei große Flügel>coloroff>?\n\n\n\n<0x10009:0x00010000>Hm, das erinnert mich an unsere\n<color red<Windräder>coloroff>. Die sehen doch so aus,\nals ob sie Flügel hätten...")
          									  case 1:
/*<749>*/ 										switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          										  case 0:
          											goto flw_754
          										  case 1:
/*<218>*/ 											printf(/* textboxtype: 1, unk: 0, line: 155 */ "<0x10009:0x0000000b>Vielen Dank noch mal für deine Hilfe,\n<heroname>.\n\n\n<0x10009:0x00000400>Mein Vogel ist dank dir wieder gesund.")
          										}
          									}
          								}
          							}
          						}
          					}
          				}
          			}
          		}
          	  case 1:
/*<760>*/ 		printf(/* textboxtype: 1, unk: 0, line: 155 */ "<0x10009:0x0000000b>Vielen Dank noch mal für deine Hilfe,\n<heroname>.\n\n\n<0x10009:0x00000400>Mein Vogel ist dank dir wieder gesund.")
/*<761>*/ 		story_flags[1082 /* us: 805A9B53 0x01, jp: 805ACDD3 0x01 */] = true;
          	}
          }

          void entrypoint_115_12() {
/*< 28>*/ 	start()
/*<654>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 673, 'param3': 32}
/*<673>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 29, 'param3': 24}
/*< 29>*/ 	printf(/* textboxtype: 1, unk: 0, line: 163 */ "Uuuuuuuuuuuuuuuuh...")
/*<106>*/ 	set_camera(3, 0)
/*<653>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 674, 'param3': 17}
/*<674>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 106, 'next': 107, 'param3': 24}
/*<107>*/ 	printf(/* textboxtype: 1, unk: 0, line: 164 */ "Uuuuuuuuuh...\nBitte...\nHört mich jemand...")
/*< 30>*/ 	story_flags[545 /* us: 805A9B17 0x04, jp: 805ACD97 0x04 */] = true;
/*< 54>*/ 	scene_flags[0 'Skyloft'][65 /* 0x9 02 */] = true;
/*<652>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_115_13() {
/*<501>*/ 	start()
/*<504>*/ 	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          	  case 0:
/*<510>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<676>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 106, 'next': 506, 'param3': 24}
/*<506>*/ 			printf(/* textboxtype: 1, unk: 0, line: 167 */ "<0x10009:0x00000001>Bitte vergiss das mit dem Papier...\nLebwohl...")
/*<509>*/ 			story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          			flw_507:
/*<507>*/ 			scene_flags[0 'Skyloft'][65 /* 0x9 02 */] = false;
          		  case 1:
/*<677>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 505, 'param3': 24}
/*<505>*/ 			printf(/* textboxtype: 1, unk: 0, line: 166 */ "Ah... <color red<Papier>coloroff>...\nDu hast mir <color red<Papier>coloroff> gebracht!\n\n\nIch mache jetzt die Tür auf...\nBitte komm herein...")
/*<508>*/ 			story_flags[548 /* us: 805A9B17 0x20, jp: 805ACD97 0x20 */] = true;
/*<709>*/ 			story_flags[549 /* us: 805A9B17 0x40, jp: 805ACD97 0x40 */] = true;
          			goto flw_507
          		}
          	  case 1:
/*<675>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 502, 'param3': 24}
/*<502>*/ 		printf(/* textboxtype: 1, unk: 0, line: 165 */ "Uuuuuuuuuuuh...\n<color red<Papier>coloroff>...\n\n\nBitte.. Irgendjemand... <color red<Papier>coloroff>...\n<color red<Bitte, Papier>coloroff>...\n\n\n<color red<Welches Papier ist egal>coloroff>...\nUuuuuh...")
/*<503>*/ 		story_flags[546 /* us: 805A9B17 0x08, jp: 805ACD97 0x08 */] = true;
          	}
          }

          void entrypoint_115_14() {
/*< 31>*/ 	start()
/*< 33>*/ 	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          	  case 0:
          		goto flw_58
          	  case 1:
/*<141>*/ 		switch (zone_temp_flags[11 /* 0x0 08 */]) {
          		  case 0:
/*<163>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 142, 'param3': 13}
/*<142>*/ 			printf(/* textboxtype: 1, unk: 0, line: 185 */ "<0x10009:0x00001b1b>Was quatschst du da?!?\nDas ist nicht einfach Papier!\nDas ist ein <color red<Brief>coloroff>!\n\n<0x10009:0x00172500>In jedem einzelnen Buchstaben steckt\nmein Herzblut!\n\n\n<0x10009:0x00171800>Denk nicht mal im Traum daran, ihn\nals Klopapier zu benutzen!")
/*<169>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 172, 'param3': 13}
/*<172>*/ 			wait_frames(30)
/*<167>*/ 			printf(/* textboxtype: 1, unk: 0, line: 186 */ "Gib diesen Brief einer Schülerin aus\nder Oberstufe... Sie heißt <color blue<Giruna>coloroff>.\n\n\n<0x10009:0x00010c11>Du weißt doch, wen ich meine?\nSie trägt diese <color red<runde Mütze>coloroff>. Sie ist ja\nsooo hübsch... Und sooo süß...\n\n<0x10009:0x00171800>Und auf gar keinen Fall gibst du diesen\nBrief diesem <color red<Verrückten da auf dem\nKlo>coloroff>! Schwöre es!")
/*<170>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 549, 'param3': 13}
/*<549>*/ 			wait_frames(45)
/*<168>*/ 			printf(/* textboxtype: 1, unk: 0, line: 187 */ "Ich vertraue dir meinen Brief an. Und\nwehe, du liest auch nur ein Wort!")
/*<710>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 109, 'next': 165, 'param3': 24}
/*<165>*/ 			story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */] = true;
/*<166>*/ 			give_item(158 0x9E);
/*<164>*/ 			printf(/* textboxtype: 1, unk: 0, line: 188 */ "Na dann, <heroname>!\nWenn du deine Sache gut machst,\ndarfst du mein Handlanger werden!\nUnd jetzt ab mit dir!")
/*<550>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<139>*/ 			switch (zone_temp_flags[10 /* 0x0 04 */]) {
          			  case 0:
/*<160>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 3072, 'next': 108, 'param3': 13}
/*<108>*/ 				printf(/* textboxtype: 1, unk: 0, line: 183 */ "<0x10009:0x00000008>...?\nWarum schaust du zum Klo?")
/*<162>*/ 				{'type': 'type3', 'subType': 4, 'param1': 23, 'param2': 6144, 'next': 161, 'param3': 13}
/*<161>*/ 				printf(/* textboxtype: 1, unk: 0, line: 184 */ "Was?\nDa ist nachts jemand, der Papier will?")
/*<143>*/ 				zone_temp_flags[11 /* 0x0 08 */] = true;
          			  case 1:
/*< 32>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 135, 'param3': 31}
/*<135>*/ 				make_actor_do_something(1, 0)
/*<155>*/ 				{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4608, 'next': 34, 'param3': 13}
/*< 34>*/ 				printf(/* textboxtype: 1, unk: 0, line: 177 */ "Ach...\nGeb ich ihn ihr...\nGeb ich ihn ihr nicht...")
/*<136>*/ 				make_actor_do_something(2, 0)
/*<672>*/ 				{'type': 'type3', 'subType': 4, 'param1': 20, 'param2': 4889, 'next': 35, 'param3': 13}
/*< 35>*/ 				printf(/* textboxtype: 1, unk: 0, line: 178 */ "Wa...?\n<heroname>!\nSchleich dich gefälligst nicht so an!\n\n<0x10009:0x00171800>...Ich muss über etwas sehr Wichtiges\nnachdenken, also schwirr ab!\n[1-]Nachdenken?[2-]Ich helfe dir!")
/*<156>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 3072, 'next': 37, 'param3': 13}
/*< 37>*/ 				switch (choice(2)) {
          				  case 0:
/*< 36>*/ 					printf(/* textboxtype: 1, unk: 0, line: 179 */ "Wie? Du willst mir zuhören?\n\n\n\n<0x10009:0x0000001c>Hmpf!\nAusgerechnet du...\nAber...")
          					flw_157:
/*<157>*/ 					{'type': 'type3', 'subType': 4, 'param1': 23, 'param2': 6144, 'next': 39, 'param3': 13}
/*< 39>*/ 					printf(/* textboxtype: 1, unk: 0, line: 181 */ "Vielleicht bist du genau der Richtige!\nDu scheinst zu wissen, wie man mit\nFrauen redet... So sehr ich es hasse,\ndas zuzugeben.\nGut, so machen wir's, <heroname>.\nIch habe einen Auftrag für dich!\nDu darfst dich geehrt fühlen!")
/*<159>*/ 					{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 171, 'param3': 13}
/*<171>*/ 					wait_frames(45)
/*<158>*/ 					printf(/* textboxtype: 1, unk: 0, line: 182 */ "Bring dieses <color red<Papier>coloroff> zu ihr!\nDieses <color red<Papier>coloroff> ist wichtig!\nDu musst es ihr unbedingt geben!")
/*<140>*/ 					zone_temp_flags[10 /* 0x0 04 */] = true;
          				  case 1:
/*< 38>*/ 					printf(/* textboxtype: 1, unk: 0, line: 180 */ "Wirklich?\n\n\n\n<0x10009:0x0000001c>Pah!\nIch brauche deine Hilfe nicht!\nAber...")
          					goto flw_157
          				}
          			}
          		}
          	}
          }

          void entrypoint_115_15() {
/*< 41>*/ 	start()
/*<118>*/ 	switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          	  case 0:
/*<110>*/ 		set_camera(4, 0)
/*<678>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 106, 'next': 42, 'param3': 24}
/*< 42>*/ 		printf(/* textboxtype: 1, unk: 0, line: 167 */ "<0x10009:0x00000001>Bitte vergiss das mit dem Papier...\nLebwohl...")
/*< 55>*/ 		story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          		flw_53:
/*< 53>*/ 		story_flags[550 /* us: 805A9B17 0x80, jp: 805ACD97 0x80 */] = true;
          	  case 1:
/*<109>*/ 		set_camera(4, 0)
/*<137>*/ 		make_actor_do_something(0, 0)
/*<112>*/ 		wait_frames(45)
/*<111>*/ 		wait_frames(45)
          		goto flw_53
          	}
          }

          void entrypoint_115_16() {
/*< 43>*/ 	start()
/*<117>*/ 	switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          	  case 0:
/*< 44>*/ 		printf(/* textboxtype: 1, unk: 0, line: 167 */ "<0x10009:0x00000001>Bitte vergiss das mit dem Papier...\nLebwohl...")
/*<138>*/ 		make_actor_do_something(1, 0)
/*< 45>*/ 		story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          	  case 1:
/*<131>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 31}
/*<144>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4, 'param2': 1, 'next': 154, 'param3': 13}
/*<154>*/ 		wait_frames(45)
/*< 46>*/ 		printf(/* textboxtype: 1, unk: 0, line: 168 */ "Uuuuuuuuh... <color red<Papier>coloroff>...\nIch brauche <color red<Papier>coloroff>...\n\n\nIch will niemandem etwas tun, <color red<ich will\nnur Papier>coloroff>...\n[1-]Brief geben.[2]Nichts tun.")
/*< 47>*/ 		switch (choice(2)) {
          		  case 0:
/*< 49>*/ 			printf(/* textboxtype: 1, unk: 0, line: 170 */ "<0x10009:0x000b0004>Oh...\nPapier? Für mich?\nIch bin so glücklich...")
/*<146>*/ 			{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 0, 'next': 511, 'param3': 13}
/*<511>*/ 			wait_frames(45)
/*<145>*/ 			printf(/* textboxtype: 1, unk: 0, line: 171 */ "Aber...\nDas sieht aus wie ein Brief...\nWillst du mir das wirklich überlassen?\n[1-]Natürlich![2]Lieber nicht.")
/*< 50>*/ 			switch (choice(2)) {
          			  case 0:
/*<147>*/ 				{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 0, 'next': 711, 'param3': 13}
/*<711>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 109, 'next': 706, 'param3': 24}
/*<706>*/ 				make_actor_do_something(3, 0)
/*<517>*/ 				set_camera(8, 0)
/*<516>*/ 				wait_frames(30)
/*<153>*/ 				printf(/* textboxtype: 1, unk: 0, line: 172 */ "<0x10009:0x00000002>Danke...\nIch werde es ganz behutsam\nverwenden.\n\nAber ich bin eine Dame, also frag nicht,\nwofür...\n\n\nWir sehen uns wieder...\nMein edler Retter...")
/*<514>*/ 				make_actor_do_something(1, 0)
/*<513>*/ 				story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
/*<512>*/ 				story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */] = true;
/*<554>*/ 				story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */] = true;
/*<515>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
          				flw_48:
/*< 48>*/ 				printf(/* textboxtype: 1, unk: 0, line: 169 */ "<0x10009:0x00050003>Uuuuuuuuuh...\nIrgendjemand... Papier...")
          			}
          		  case 1:
          			goto flw_48
          		}
          	}
          }

          void entrypoint_115_17() {
/*< 51>*/ 	start()
/*< 52>*/ 	switch (story_flags[553 /* us: 805A9B16 0x04, jp: 805ACD96 0x04 */]) {
          	  case 0:
/*<518>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 148, 'param3': 32}
/*<148>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 0, 'next': 149, 'param3': 13}
/*<149>*/ 		printf(/* textboxtype: 1, unk: 0, line: 176 */ "<0x10009:0x00000002>Ach... Geliebter...\nIch bleibe für immer bei dir...\nTihihi...")
          	  case 1:
/*<824>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 527, 'param3': 31}
/*<527>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 152, 'param3': 32}
/*<152>*/ 		{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 526, 'param3': 13}
/*<526>*/ 		wait_frames(15)
/*<151>*/ 		printf(/* textboxtype: 1, unk: 0, line: 173 */ "<0x10009:0x00000004>Ah...\nDu bist der galante junge Mann von\nneulich...")
/*<524>*/ 		set_camera(9, 0)
/*<525>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 150, 'param3': 15}
/*<150>*/ 		printf(/* textboxtype: 1, unk: 0, line: 174 */ "<0x10009:0x00060002>Schön, dich wiederzusehen.\nDank dir habe ich meine große Liebe\ngefunden...\n\nIhn hier...\n\n\n\n<0x10009:0x000c0000>Weil du mir diesen Brief von ihm\ngebracht hast...\n\n\n<0x10009:0x00060000>Durch diesen wunderschönen\nLiebesbrief habe ich mich im\nHandumdrehen verliebt...")
/*<521>*/ 		printf(/* textboxtype: 1, unk: 0, line: 175 */ "<0x10009:0x00000002>Er füllt mein Herz aus...\nLässt es höher schlagen und im selben\nMoment stillstehen...\nIch fühle mich so lebendig...")
/*<723>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 522, 'param3': 42}
/*<522>*/ 		give_gratitude_crystals();
/*<523>*/ 		set_camera(-1, 0)
/*<658>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 0, 'next': 519, 'param3': 13}
/*<519>*/ 		printf(/* textboxtype: 1, unk: 0, line: 176 */ "<0x10009:0x00000002>Ach... Geliebter...\nIch bleibe für immer bei dir...\nTihihi...")
/*<520>*/ 		story_flags[553 /* us: 805A9B16 0x04, jp: 805ACD96 0x04 */] = true;
/*<655>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_115_18() {
/*<357>*/ 	start()
/*<664>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1005, 'next': 358, 'param3': 24}
/*<358>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 359, 'param3': 32}
/*<359>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 18, 'next': 360, 'param3': 32}
/*<360>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 826, 'param3': 32}
/*<826>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 30, 'next': 822, 'param3': 47}
/*<822>*/ 	make_actor_do_something(3, 5)
/*<621>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5121, 'param2': -256, 'next': 361, 'param3': 13}
/*<361>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 5, 'next': 828, 'param3': 16}
/*<828>*/ 	set_camera(31, 0)
/*<827>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 30, 'next': 362, 'param3': 48}
/*<362>*/ 	set_camera(11, 0)
/*<365>*/ 	{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 356, 'next': 363, 'param3': 15}
/*<363>*/ 	printf(/* textboxtype: 1, unk: 0, line: 244 */ "Du hast mir diesen Brief geschrieben,\noder?")
/*<366>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 364, 'param3': 16}
/*<364>*/ 	printf(/* textboxtype: 1, unk: 0, line: 245 */ "J-j-ja...")
/*<622>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': -256, 'next': 367, 'param3': 13}
/*<367>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 5, 'next': 368, 'param3': 16}
/*<368>*/ 	printf(/* textboxtype: 1, unk: 0, line: 246 */ "<0x10009:0x14000009>Hihihi.\nEs war ein sehr schöner Brief.\nVielen Dank.")
/*<370>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 369, 'param3': 16}
/*<369>*/ 	printf(/* textboxtype: 1, unk: 0, line: 247 */ "<0x10009:0x05000011>Ach was... So toll... war er gar nicht...")
/*<371>*/ 	set_camera(12, 0)
/*<375>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1301, 'param2': 3072, 'next': 373, 'param3': 13}
/*<373>*/ 	printf(/* textboxtype: 1, unk: 0, line: 248 */ "Und... Öh... Was sagst du?")
/*<376>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 5, 'next': 374, 'param3': 16}
/*<374>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5131, 'param2': -256, 'next': 372, 'param3': 13}
/*<372>*/ 	printf(/* textboxtype: 1, unk: 0, line: 249 */ "<0x10009:0x14000012>Also...\nIch...")
/*<377>*/ 	set_camera(13, 0)
/*<623>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5121, 'param2': 256, 'next': 380, 'param3': 13}
/*<380>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 274, 'next': 601, 'param3': 15}
/*<601>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 381, 'param3': 16}
/*<381>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1288, 'param2': 3328, 'next': 378, 'param3': 13}
/*<378>*/ 	printf(/* textboxtype: 1, unk: 0, line: 250 */ "<0x10009:0x05002519>Bitte!\nBitte sei meine Freundin!\nSag ja!")
/*<382>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': 256, 'next': 602, 'param3': 13}
/*<602>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 551, 'param3': 50}
/*<551>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4609, 'param2': 3074, 'next': 379, 'param3': 13}
/*<379>*/ 	printf(/* textboxtype: 1, unk: 2, line: 251 */ "Warte!")
/*<383>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 18, 'next': 384, 'param3': 17}
/*<384>*/ 	set_camera(14, 0)
/*<385>*/ 	wait_frames(45)
/*<386>*/ 	set_camera(19, 0)
/*<388>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4625, 'param2': 3072, 'next': 387, 'param3': 13}
/*<387>*/ 	printf(/* textboxtype: 1, unk: 0, line: 252 */ "Bitte nimm mich!\nWerde meine Freundin!")
/*<391>*/ 	set_camera(15, 0)
/*<648>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4609, 'param2': 256, 'next': 624, 'param3': 13}
/*<624>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': -256, 'next': 603, 'param3': 13}
/*<603>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 99, 'next': 389, 'param3': 50}
/*<389>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1306, 'param2': 6912, 'next': 390, 'param3': 13}
/*<390>*/ 	printf(/* textboxtype: 1, unk: 0, line: 253 */ "<0x10009:0x05001b09>Was zum...\nWas redest du da?!?")
/*<604>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 99, 'next': 392, 'param3': 50}
/*<392>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5140, 'param2': 2304, 'next': 393, 'param3': 13}
/*<393>*/ 	printf(/* textboxtype: 1, unk: 0, line: 254 */ "Äh...<0x10009:0x14000900> Wenn das so ist... Dann...\nDann wähle ich Cuco...")
/*<649>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 99, 'next': 650, 'param3': 50}
/*<650>*/ 	printf(/* textboxtype: 1, unk: 0, line: 255 */ "<0x10009:0x05150c10>Aha! Wusste ich es doch!\nSie hat nur Augen für mich...")
/*<394>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 629, 'param3': 17}
/*<629>*/ 	printf(/* textboxtype: 1, unk: 0, line: 256 */ "<0x10009:0x05111d1d>Wie? Was? Ich fasse es nicht!")
/*<630>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': 0, 'next': 620, 'param3': 13}
/*<620>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 274, 'next': 395, 'param3': 15}
/*<395>*/ 	set_camera(14, 0)
/*<628>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 397, 'param3': 17}
/*<397>*/ 	{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 18, 'next': 396, 'param3': 14}
/*<396>*/ 	wait_frames(10)
/*<605>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 99, 'next': 398, 'param3': 50}
/*<398>*/ 	printf(/* textboxtype: 1, unk: 0, line: 257 */ "<0x10009:0x1201ff00>Wirklich?\nBin ich wirklich gut genug für dich?")
/*<606>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 399, 'param3': 50}
/*<399>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5140, 'param2': 2323, 'next': 400, 'param3': 13}
/*<400>*/ 	printf(/* textboxtype: 1, unk: 0, line: 258 */ "Oh ja!\n<0x10009:0x14000900>Ich bin so glücklich!\nDanke!")
/*<632>*/ 	set_camera(16, 0)
/*<636>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5121, 'param2': 256, 'next': 635, 'param3': 13}
/*<635>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1306, 'param2': 7936, 'next': 631, 'param3': 13}
/*<631>*/ 	printf(/* textboxtype: 1, unk: 0, line: 259 */ "<0x10009:0x05001d17>Das kann doch nicht...")
/*<634>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1293, 'param2': 7936, 'next': 633, 'param3': 13}
/*<633>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 5, 'next': 639, 'param3': 14}
/*<639>*/ 	wait_frames(1)
/*<638>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 261, 'next': 637, 'param3': 15}
/*<637>*/ 	printf(/* textboxtype: 1, unk: 0, line: 260 */ "<0x10009:0x05000018>Wäääääääääääääääääääh!!!")
/*<626>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 99, 'next': 625, 'param3': 50}
/*<625>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 5, 'next': 407, 'param3': 17}
/*<407>*/ 	set_camera(17, 0)
/*<619>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1293, 'param2': 1024, 'next': 618, 'param3': 13}
/*<618>*/ 	{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 5, 'next': 552, 'param3': 14}
/*<552>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4625, 'param2': 1024, 'next': 401, 'param3': 13}
/*<401>*/ 	printf(/* textboxtype: 1, unk: 0, line: 261 */ "<0x10009:0x12000001><heroname>!")
/*<402>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 100, 'next': 403, 'param3': 16}
/*<403>*/ 	set_camera(18, 0)
/*<643>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4616, 'param2': 1024, 'next': 640, 'param3': 13}
/*<640>*/ 	printf(/* textboxtype: 1, unk: 0, line: 262 */ "Als du mir von dem Brief erzählt hast,\nhabe ich endlich verstanden...\n\n\nIch habe endlich erkannt, dass ich sie\nliebe.\n\n\n<0x10009:0x12090c00>Ich wollte nicht, dass ein anderer sie\nmir wegnimmt.\n\n\n<0x10009:0x12010400>Hättest du mir nicht von diesem Brief\nerzählt, hätte ich das vielleicht nie\nbemerkt.\n\n<0x10009:0x1208000b>Ich kann dir gar nicht genug danken!")
/*<651>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 641, 'param3': 42}
/*<641>*/ 	give_gratitude_crystals();
/*<642>*/ 	set_camera(20, 0)
/*<404>*/ 	story_flags[561 /* us: 805A9B19 0x04, jp: 805ACD99 0x04 */] = true;
/*<405>*/ 	story_flags[558 /* us: 805A9B16 0x80, jp: 805ACD96 0x80 */] = true;
/*<659>*/ 	story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
/*<355>*/ 	story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */] = true;
/*<356>*/ 	story_flags[560 /* us: 805A9B19 0x02, jp: 805ACD99 0x02 */] = true;
/*<553>*/ 	story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */] = true;
/*<699>*/ 	story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */] = true;
/*<627>*/ 	zone_temp_flags[21 /* 0x3 20 */] = false;
/*<406>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 793, 'param3': 42}
/*<793>*/ 	zone_temp_flags[20 /* 0x3 10 */] = true;
          }

          void entrypoint_115_01() {
          	start()
/*<  4>*/ 	set_camera(2, 0)
/*<  3>*/ 	{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 100, 'next': 1, 'param3': 15}
/*<  1>*/ 	set_camera(1, 0)
/*<  2>*/ 	story_flags[203 /* us: 805A9AEF 0x20, jp: 805ACD6F 0x20 */] = true;
/*<644>*/ 	scene_flags[0 'Skyloft'][0 /* 0x1 01 */] = false;
/*<645>*/ 	scene_flags[0 'Skyloft'][21 /* 0x3 20 */] = false;
          }

          void entrypoint_115_19() {
/*<100>*/ 	start()
/*<684>*/ 	switch (story_flags[558 /* us: 805A9B16 0x80, jp: 805ACD96 0x80 */]) {
          	  case 0:
/*<101>*/ 		switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          		  case 0:
/*<537>*/ 			switch (zone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*<540>*/ 				printf(/* textboxtype: 1, unk: 0, line: 204 */ "<0x10009:0x001b1f1b>Seit der Sache mit dem Brief schlafe\nich schlecht und habe ständig\nAlpträume.\n\nIst dieses Bett verflucht?\nIst das etwa <color blue<Bados>coloroff> Fluch?\nHilf mir, <heroname>!")
          			  case 1:
/*<538>*/ 				printf(/* textboxtype: 1, unk: 0, line: 203 */ "<0x10009:0x001b1f17>Ich werde nicht vergessen, was du mir\nangetan hast, <heroname>.\n\n\nSeit der Sache mit dem Brief schlafe\nich schlecht und habe ständig\nAlpträume.\n\nWas geschieht hier?\nIst dieses Bett verflucht?\nIst das etwa <color blue<Bados>coloroff> Fluch?\n\n<0x10009:0x001c1a18>Du musst mir helfen, <heroname>!")
/*<539>*/ 				zone_temp_flags[0 /* 0x1 01 */] = true;
          			}
          		  case 1:
/*<569>*/ 			{'type': 'type3', 'subType': 4, 'param1': 27, 'param2': 7936, 'next': 102, 'param3': 13}
/*<102>*/ 			printf(/* textboxtype: 1, unk: 0, line: 205 */ "<0x10009:0x00000017>Es ist aus... Alles ist aus...\n\n\n\n<0x10009:0x001c1f00>Was ist, <heroname>?\nWillst du dich über mein Leid lustig\nmachen? Lass mich in Ruhe!")
          		}
          	  case 1:
/*<825>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 685, 'param3': 31}
/*<685>*/ 		printf(/* textboxtype: 1, unk: 0, line: 202 */ "<0x10009:0x001b1f17>Was willst du noch, <heroname>?\nDu hast mich tief verletzt...\n\n\n<0x10009:0x001c1f00>Ich kenne diesen Verrückten vom Klo\nnicht, aber dass du ihm den Brief\ngegeben hast, war einfach ein Schock.\n\nWie konntest du nur?!?")
          	}
          }

