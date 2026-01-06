          void entrypoint_115_02() {
/*<444>*/ 	start()
/*<443>*/ 	switch (story_flags[297 /* us: 805A9AFD 0x08, jp: 805ACD7D 0x08 */]) {
          	  case 0:
/*<433>*/ 		printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x0000000a>Wil je wat schatten verkopen?")
          		flw_495:
/*<495>*/ 		make_actor_do_something(8, 0)
/*<432>*/ 		printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00120600>Vandaag ben ik in deze schatten\ngeïnteresseerd:\n\n\n<color yellow<<string arg0>\n<string arg1>>coloroff>\n<color yellow<<string arg2>>coloroff>\n<color yellow<<string arg3>>coloroff>\n<0x10009:0x00100600>Alleen deze vier dingen! Dus, heb je wat\nvoor me dat je wilt verkopen?\n[1-]Ja.[2]Nee.")
/*<415>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_414:
/*<414>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "Wat wil je me verkopen?\n<color yellow<[1-]<string arg0>>coloroff>.<color yellow<[2-]<string arg1>>coloroff>.<color yellow<[3-]<string arg2>>coloroff>.<color yellow<[4-]<string arg3>>coloroff>.")
/*<413>*/ 			switch (choice(4)) {
          			  case 0:
/*<488>*/ 				make_actor_do_something(0, 0)
/*<481>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<489>*/ 					printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00120600>Wat dacht je van <numeric arg0 0> rupees per stuk?")
          					flw_656:
/*<656>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 412, 'param3': 12}
/*<412>*/ 					printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00100600>Ik zie dat je er daarvan <numeric arg4 0> bij je hebt.\nHoeveel wil je er verkopen?\n[1-]1.[2-]5.[3-]Alles![4]Niets.")
/*<411>*/ 					switch (choice(4)) {
          					  case 0:
/*<500>*/ 						make_actor_do_something(4, 0)
          						flw_497:
/*<497>*/ 						switch (context_related2(0)) {
          						  case 0:
/*<409>*/ 							printf(/* textboxtype: 1, unk: 0, line: 15 */ "<color yellow<<0x10009:0x00120900>>coloroff>O, je wilt er daarvan <numeric arg0 0> verkopen? Daar\ngeef ik je <numeric arg1 0> rupees voor.\n[1-]Deal![2]Nee, laat maar.")
/*<408>*/ 							switch (choice(2)) {
          							  case 0:
/*<430>*/ 								printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x0010080a>Goed. Hier heb je je rupees!")
/*<496>*/ 								make_actor_do_something(7, 0)
/*<572>*/ 								set_camera(6, 0)
/*<571>*/ 								{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 2048, 'next': 573, 'param3': 13}
/*<573>*/ 								wait_frames(45)
/*<429>*/ 								printf(/* textboxtype: 0, unk: 1, line: 19 */ "Dank je wel en tot ziens.")
/*<574>*/ 								{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          							  case 1:
          								flw_410:
/*<410>*/ 								printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x000f000c>O, echt? Nou, hopelijk kom je later\nnog eens langs.")
          							}
          						  case 1:
/*<431>*/ 							printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x000f0409>Zoveel heb je er niet eens... Ga iemand\nanders zijn tijd verdoen!")
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
/*<494>*/ 					printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x000f0409>Luister, jochie... Ik ben helemaal klaar\nmet deze fratsen. Daarvan heb je er zelfs\nniet eentje bij je. Dus, ga je me nog wat\nverkopen, of hoe zit dat?[1-]Ja![2]Nee.")
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
/*<490>*/ 					printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00120600>Wat dacht je van <numeric arg1 0> rupees per stuk?")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			  case 2:
/*<486>*/ 				make_actor_do_something(2, 0)
/*<483>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<491>*/ 					printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00120600>Wat dacht je van <numeric arg2 0> rupees per stuk?")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			  case 3:
/*<485>*/ 				make_actor_do_something(3, 0)
/*<484>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<492>*/ 					printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00120600>Wat dacht je van <numeric arg3 0> rupees per stuk?")
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
/*<442>*/ 		printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x0000000a>O, jij bent het... Kan ik je helpen?\n[1-]Ik kom winkelen![2-]Hmm...")
/*<441>*/ 		switch (choice(2)) {
          		  case 0:
/*<440>*/ 			printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x000f0409>Als je iets wilt kopen, zul je morgen\nterug moeten komen.")
          		  case 1:
/*<439>*/ 			printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00130609>Dus, eh, bedoel je met \"hmm\" dat je\neigenlijk geen goede reden hebt om\nhier te zijn?")
/*<438>*/ 			printf(/* textboxtype: 1, unk: 0, line: 3 */ "Wat? Je vindt mij onbeleefd?\nEn ik lijk een totaal ander mens dan\noverdag?\n\n<0x10009:0x0010060b>Denk je soms dat het makkelijk is om\nheel de dag naar klanten te lachen?\nIk ben daar 's avonds zo moe van. Denk\nmaar niet dat je me echt kent.\nHoe dan ook... Ben je hier om wat te\ngeld te verdienen bij mijn <color red rupee<nachtwinkel>coloroff>?\n[1-]Nachtwinkel?[2-]Ja!")
/*<437>*/ 			switch (choice(2)) {
          			  case 0:
/*<436>*/ 				printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00000009>Ah, ben je hier voor het eerst? Hm...")
          				flw_434:
/*<434>*/ 				printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00120600>Zie je, 's nachts koop ik spullen in.\n<color red<Ik koop schatten>coloroff>, maar niet zomaar\nschatten. Alleen heel <color red<specifieke\nsoorten schatten>coloroff>.\n<0x10009:0x00100600>Goed. Dan is het nu tijd om zaken te\ndoen.")
/*<428>*/ 				story_flags[297 /* us: 805A9AFD 0x08, jp: 805ACD7D 0x08 */] = true;
          				goto flw_495
          			  case 1:
/*<435>*/ 				printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x000f0409>Had je dat niet meteen kunnen zeggen?")
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
/*< 57>*/ 		printf(/* textboxtype: 0, unk: 0, line: 194 */ "<0x10009:0x00000054>Uhh... Nngh...nngh... H-Help...")
/*<528>*/ 		switch (zone_temp_flags[17 /* 0x3 02 */]) {
          		  case 0:
          		  case 1:
/*<724>*/ 			zone_temp_flags[17 /* 0x3 02 */] = true;
/*<529>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<174>*/ 		{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6656, 'next': 536, 'param3': 13}
/*<536>*/ 		printf(/* textboxtype: 1, unk: 0, line: 195 */ "<0x10009:0x00000017>Waaahh... Verdraaide <color blue<Pimmus>coloroff>... Ik heb\nzo'n hekel aan hem... Vervloekt...")
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
/*<478>*/ 					printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00030001>O, jij bent het, <heroname>.\nIk vermoedde al dat je hierheen kwam.\nDat heeft een vliegje me ingefluisterd.")
          					flw_476:
/*<476>*/ 					make_actor_do_something(8, 0)
/*<475>*/ 					printf(/* textboxtype: 0, unk: 1, line: 34 */ "Vanavond wil ik alleen:\n<color yellow<<string arg0>>coloroff>\n<color yellow<<string arg1>>coloroff>\n<color yellow<<string arg2>>coloroff>\n[1-]Deal.[2]Laat maar.")
/*<474>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_472:
/*<472>*/ 						printf(/* textboxtype: 1, unk: 0, line: 36 */ "Welke soort wil je verkopen?\n<color yellow<[1-]<string arg0>>coloroff>.<color yellow<[2-]<string arg1>>coloroff>.<color yellow<[3-]<string arg2>>coloroff>.")
/*<471>*/ 						switch (choice(3)) {
          						  case 0:
/*<466>*/ 							make_actor_do_something(0, 0)
/*<461>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<467>*/ 								printf(/* textboxtype: 0, unk: 1, line: 37 */ "<color yellow<<string arg0>>coloroff>? Wat dacht je van\n<numeric arg0 0> rupees per stuk?")
          								flw_657:
/*<657>*/ 								{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 458, 'param3': 12}
/*<458>*/ 								printf(/* textboxtype: 1, unk: 0, line: 42 */ "Hoeveel heb je er daar, <numeric arg4 0>? Klopt dat?\nEn hoeveel wil je er daarvan verkopen?\n[1-]1.[2-]5.[3-]Alles![4]Niets.")
/*<457>*/ 								switch (choice(4)) {
          								  case 0:
/*<455>*/ 									make_actor_do_something(4, 0)
          									flw_452:
/*<452>*/ 									switch (context_related2(0)) {
          									  case 0:
/*<456>*/ 										printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x00030014>Hm, interessant. En je wilt me daar <numeric arg0 0> van\nverkopen? Daar heb ik best <numeric arg1 0> rupees voor\nover. Deal?\n[1-]Deal![2]Laat maar.")
/*<449>*/ 										switch (choice(2)) {
          										  case 0:
/*<451>*/ 											printf(/* textboxtype: 1, unk: 0, line: 45 */ "Dank je, hier heb je je rupees.")
/*<445>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 448, 'param3': 12}
/*<448>*/ 											make_actor_do_something(7, 0)
/*<450>*/ 											printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x0003ff04>Bedankt, sprinkhanenkop!\n\n\n\nO, dat bedoel ik niet kwaad! Ik hou\nenorm van sprinkhanen. Hehe. Nou, tot\nsnel, <heroname>, en vergeet niet om\ninsecten mee te nemen.")
          										  case 1:
          											flw_473:
/*<473>*/ 											printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x0001ff13>Hm, dat is een beetje jammer... <0x10009:0x00000500>Ik was al\nhelemaal in de juiste stemming voor wat\ninsecten...")
          										}
          									  case 1:
/*<459>*/ 										printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x00120100>Zoveel heb je er niet... Ik zal het nog\neens vragen...")
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
/*<470>*/ 								printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x0010ff0c>Je hebt dat insect helemaal niet bij je!\nJe ziet eruit alsof je geen vlieg kwaad\ndoet, maar je probeert me wel voor de\ngek te houden?\n<0x10009:0x0001ff00>Of wilde je me gewoon een ander insect\nverkopen?\n[1-]Ja.[2]Nee.")
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
/*<468>*/ 								printf(/* textboxtype: 0, unk: 0, line: 38 */ "<color yellow<<string arg1>>coloroff> dus? Ik geef je\n<numeric arg1 0> rupees per exemplaar.")
          								goto flw_657
          							  case 1:
          								goto flw_470
          							}
          						  case 2:
/*<464>*/ 							make_actor_do_something(2, 0)
/*<463>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<469>*/ 								printf(/* textboxtype: 1, unk: 0, line: 39 */ "<color yellow<<string arg2>>coloroff>? Wat dacht je van\n<numeric arg2 0> rupees per stuk?")
          								goto flw_657
          							  case 1:
          								goto flw_470
          							}
          						}
          					  case 1:
          						goto flw_473
          					}
          				  case 1:
/*<477>*/ 					printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00030001>Hé, <heroname>. Ik heb vandaag\necht vlinders in m'n buik. Eh, niet\nECHT echt, natuurlijk... Hehe.")
          					goto flw_476
          				}
          			  case 1:
/*<721>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 719, 'param3': 31}
/*<719>*/ 				printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00030001><0x30001:0x><heroname>... Dit moet je horen,\noké? Oké, dus wat vroeger op de avond\nben ik weer de watervalgrot ingegaan...\nEn wat denk je?\nIk zag daar wat <color red<godinnenpages >coloroff>op een\nopen plek. Ik vraag me af wat ze daar\ndeden... Ze vlogen maar rond op\ndezelfde lege plek. Superraar!\nAls je dat zelf ook een keer wilt zien,\ndan moet je 's nachts de grot in.")
/*<722>*/ 				printf(/* textboxtype: 1, unk: 0, line: 33 */ "O ja. Laat maar eens zien wat voor\ninsecten je vandaag voor me hebt.")
/*<720>*/ 				story_flags[810 /* us: 805A9B31 0x04, jp: 805ACDB1 0x04 */] = true;
          				goto flw_476
          			}
          		  case 1:
          			goto flw_479
          		}
          	  case 1:
/*<446>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 666, 'param3': 31}
/*<666>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 427, 'param3': 13}
/*<427>*/ 		printf(/* textboxtype: 1, unk: 1, line: 21 */ "<0x10009:0x0000ff01>O, <heroname>, jij bent het. Wat\nmoet je?")
/*<578>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 416, 'param3': 13}
/*<416>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "<color red<<0x10009:0x00000300>>coloroff>Huh? Waar ik mee bezig ben?\n\n\n\n<color red<<0x10009:0x00ff0114>Insecten>coloroff>... Ik kijk naar de insecten.")
/*<575>*/ 		set_camera(22, 0)
/*<577>*/ 		wait_frames(30)
/*<418>*/ 		printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x0001ff00>Insecten zijn geweldig. Zelfs nog\ngeweldiger dan Ganderd op meerdere\nmanieren.\n\nO...<pause 30> wacht. Ik bedoel niet dat Ganderd\nminder geweldig is dan een insect.")
/*<576>*/ 		set_camera(-1, 0)
/*<417>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "Kijk, <color red<ik hou gewoon HEEL erg van\ninsecten>coloroff>... Ik verzamel ze allemaal,\nongeacht grootte of soort.\n\nEn in mijn dromen woon ik samen met\nal die insecten op een eilandparadijs...")
/*<424>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00ffff01>O! Ik bedenk me ineens iets...\n\n\n\nIk heb een idee, <heroname>.\n<color red<Verkoop je insecten aan mij>coloroff>! Rupees\nzijn voor mij geen bezwaar, ik MOET\nmet mijn insecten samen zijn.[1-]Tuurlijk![2-]Eh...")
/*<423>*/ 		switch (choice(2)) {
          		  case 0:
/*<422>*/ 			printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x0003ff04>Hehehe! Eindelijk zullen mijn dromen\nvol insecten uitkomen!")
          			flw_420:
/*<420>*/ 			printf(/* textboxtype: 0, unk: 1, line: 28 */ "Dus als je ooit van je insecten af wilt,\nbreng ze dan naar mij. Ik hang hier\nmeestal rond als het donker is...\n\n<0x10009:0x00120100>Maar ik koop niet zomaar elk insect\nvan je. Ik koop alleen <color red<waar ik die dag\nnaar op zoek ben>coloroff>, niets anders.\n\nO, en nog iets... Dit handeltje doe ik\n<color red<alleen 's nachts>coloroff>! Ik moet ook aan m'n\nreputatie denken, snap je wel?\n\n<0x10009:0x0003ff14>Alles duidelijk, <heroname>? Ik\nhoop dat ik je snel zie ontpoppen tot\neen van m'n trouwste leveranciers. Hehe.")
/*<447>*/ 			printf(/* textboxtype: 0, unk: 0, line: 29 */ "Dus, tijd om zaken te doen. Heb je\nwat veelpotige vrienden voor mij?")
/*<419>*/ 			story_flags[298 /* us: 805A9AFD 0x10, jp: 805ACD7D 0x10 */] = true;
          			goto flw_476
          		  case 1:
/*<421>*/ 			printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x0001ff05>Wat? Dat lijkt je niets? Als je niet\nuitkijkt, vertel ik het aan Ganderd...")
          			goto flw_420
          		}
          	}
          }

          void entrypoint_115_04() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x00000000>Snnnrrrrkkk... Zzzz...")
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
/*<116>*/ 						printf(/* textboxtype: 1, unk: 0, line: 222 */ "<0x10009:0x00080909>Hihi! Dank je wel, <heroname>.\nDankzij jou heb ik nu een vriendje en\nhij is geweldig!\n\nMaar ik vind het wel een beetje zielig\nvoor <color blue<Kol>coloroff>, hoor...")
          					  case 1:
/*<800>*/ 						entrypoint_115_28();
          					}
          				  case 1:
/*< 87>*/ 					printf(/* textboxtype: 0, unk: 0, line: 221 */ "<0x10009:0x00000001>Bedankt dat je me de brief gegeven hebt,\n<heroname>.\n\n\n<0x10009:0x00010d14>Pfff... Ik vraag me af wat <color blue<Pimmus>coloroff> zou\ndoen als hij dit wist...")
          				}
          			  case 1:
/*<130>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 133, 'param3': 31}
/*<133>*/ 				make_actor_do_something(2, 0)
/*<587>*/ 				{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1024, 'next': 73, 'param3': 13}
/*< 73>*/ 				printf(/* textboxtype: 0, unk: 1, line: 211 */ "<0x10009:0x00000014>Zucht... O, <color blue<Pimmus>coloroff>... Hoe zorg ik dat ik\nje aandacht trek?")
/*<134>*/ 				make_actor_do_something(3, 0)
/*< 74>*/ 				printf(/* textboxtype: 0, unk: 0, line: 212 */ "<0x10009:0x00080404>O! Hoi, <heroname>!\n\n\n\nEh, er is niks aan de hand hoor. Kan ik je\nergens mee helpen? <0x10008:0xffcd>O nee, zou hij me net\ngehoord hebben?<0x10008:0x00cd>\n[1-]Brief geven.[2-]Niet geven.")
/*< 75>*/ 				switch (choice(2)) {
          				  case 0:
/*< 77>*/ 					printf(/* textboxtype: 0, unk: 1, line: 214 */ "<0x10009:0x00080906>Huh? Een brief? Voor mij<pause 10>.<pause 10>.<pause 10>.<pause 10> van <color blue<Pimmus>coloroff>\nmisschien?!\n[1-]Alsjeblieft![2-]Oeps, ik heb me vergist.")
/*< 78>*/ 					switch (choice(2)) {
          					  case 0:
/*< 80>*/ 						printf(/* textboxtype: 1, unk: 0, line: 216 */ "<0x10009:0x000e090a>O... Dank je.")
/*<592>*/ 						{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3072, 'next': 593, 'param3': 13}
/*<593>*/ 						wait_frames(5)
/*<598>*/ 						set_camera(23, 0)
/*<599>*/ 						wait_frames(10)
/*<611>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 591, 'param3': 49}
/*<591>*/ 						printf(/* textboxtype: 0, unk: 1, line: 217 */ "<0x10009:0x00100400>Wie zou hem gestuurd hebben?")
/*<594>*/ 						wait_frames(30)
/*< 81>*/ 						printf(/* textboxtype: 0, unk: 0, line: 218 */ "<0x10009:0x00100d00>Oef...<pause 20> <0x10006:0xfecd>Dat handschrift is verschrikkelijk\nslecht. Onleesbaar bijna...<0x10006:0x00cd>\n\n\n<0x10009:0x00100400>Maar goed, eens kijken wat er allemaal in\nde brief staat...")
/*<596>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': -256, 'next': 665, 'param3': 13}
/*<665>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 104, 'next': 597, 'param3': 24}
/*<597>*/ 						wait_frames(15)
/*<600>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4608, 'next': 595, 'param3': 13}
/*<595>*/ 						printf(/* textboxtype: 1, unk: 0, line: 219 */ "\"Mijn liefde voor jou reikt ver voorbij de\nhorizon en is dieper dan de wolken-\nbarrière.\"\n\n<0x10009:0x00131200>\"Ik zou het enorm waarderen als je met\nmij uit wilt gaan.\nJe dappere ridder, <color blue<Kol>coloroff>\"\n\n<0x10009:0x00000500>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.\n\n\n\n<0x10009:0x00010d00>Wauw... Die <color blue<Kol>coloroff>... Is hij niet een van\ndie klungels die om <color blue<Ganderd>coloroff> heen hangt?\n\n\n<0x10009:0x000c0400>Een liefdesbrief van <color blue<Kol>coloroff>...\n\n\n\n<0x10009:0x000b0712>Ooo jeetje...")
/*<588>*/ 						set_camera(-1, 0)
/*<589>*/ 						{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1792, 'next': 590, 'param3': 13}
/*<590>*/ 						wait_frames(15)
/*<612>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 82, 'param3': 16}
/*< 82>*/ 						printf(/* textboxtype: 0, unk: 1, line: 220 */ "<0x10009:0x00000009>Tja... Hij heeft wel echt zijn best gedaan\nen zijn gevoelens in de brief gestopt...\n\n\nIk weet het niet hoor... Moet ik misschien\ntoch een keer met <color blue<Kol >coloroff>afspreken?\n\n\n<0x10009:0x00080900>Ha! Geen schijn van kans!\n\n\n\n<0x10009:0x00010d14>Pfff... Ik vraag me af wat <color blue<Pimmus>coloroff> zou\ndoen als hij dit wist...")
/*< 83>*/ 						story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */] = true;
          					  case 1:
/*< 79>*/ 						printf(/* textboxtype: 0, unk: 0, line: 215 */ "<0x10009:0x00080912>Wat probeer je nu eigenlijk te zeggen?\nDat is niet grappig!")
          					}
          				  case 1:
/*< 76>*/ 					printf(/* textboxtype: 1, unk: 0, line: 213 */ "<0x10009:0x00010406>Hm? Jij bent een beetje een vreemde\njongen, <heroname>, weet je dat?")
          				}
          			}
          		}
          	  case 1:
/*<667>*/ 		switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          		  case 0:
/*< 69>*/ 			printf(/* textboxtype: 0, unk: 0, line: 206 */ "<0x10009:0x00000001>O, hé, <heroname>, wat vind jij\neigenlijk van <color blue<Pimmus>coloroff>?\n[1-]Hij is best aardig.[2-]Waarom?")
/*< 70>*/ 			switch (choice(2)) {
          			  case 0:
/*< 71>*/ 				printf(/* textboxtype: 1, unk: 0, line: 207 */ "<0x10009:0x000b070a>Ja! Ja, hij is aardig! Hij is vriendelijk en\nzorgzaam en knap en geweldig!\n\n\n<0x10009:0x000c0416>O, jeetje... Ik weet even niet waar ik het\nover had.\n\n\n<0x10009:0x00080400>Sorry, dat ik jou met zo'n rare vraag\nlastigval...")
          			  case 1:
/*< 72>*/ 				printf(/* textboxtype: 0, unk: 1, line: 208 */ "<0x10009:0x00010406>Huh? O... Nou ja, ik bedoel... Je weet\nwel...\n\n\n<0x10009:0x00080416>Eh, laat maar. Ik weet niet waarom ik je\nzo'n rare vraag stelde...")
          			}
          		  case 1:
/*<669>*/ 			switch (zone_temp_flags[15 /* 0x0 80 */]) {
          			  case 0:
/*<671>*/ 				printf(/* textboxtype: 1, unk: 0, line: 210 */ "<0x10009:0x00001001>Die outfit staat je goed!\n\n\n\n<0x10009:0x0000040a>Maar... niet zo goed als hij Pimmus zou\nstaan!")
          			  case 1:
/*<668>*/ 				printf(/* textboxtype: 0, unk: 0, line: 209 */ "<0x10009:0x00010404>Aaah! <pause 20><0x30001:0x><heroname>! Ik hoor dat je door\nbent naar de hogere klas, gefeliciteerd!\n\n\n<0x10009:0x00080400>Wauw... Dus het uniform van de ridders is\ndit jaar donkergroen? <pause 20>Ziet er goed uit!\n\n\n<0x10009:0x000a1000>Zelda zal wel heel blij zijn als ze je daarin\nrond ziet lopen...\n\n\n<0x10009:0x00000406>O, en maak je geen zorgen... Ik weet\nzeker dat ze in orde is, waar ze ook mag\nzijn! Ze komt vast snel weer thuis.")
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
/*<105>*/ 						printf(/* textboxtype: 0, unk: 0, line: 62 */ "<0x10009:0x00000e08>Eindelijk, rust! Dank je wel!")
          					  case 1:
/*<580>*/ 						{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 3584, 'next': 23, 'param3': 13}
/*< 23>*/ 						printf(/* textboxtype: 1, unk: 1, line: 63 */ "<0x10009:0x00000008>O, bedankt, bedankt! Wat had ik\nzonder jou gemoeten?")
          					}
          				  case 1:
/*<123>*/ 					check_item_flag(160, 1)
/*<124>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 60}) {
          					  case 0:
/*<126>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 19, 'param3': 31}
/*< 19>*/ 						printf(/* textboxtype: 0, unk: 0, line: 59 */ "<0x10009:0x00000e0d>Is dat hem? De <color yellow<rammelaar>coloroff> van onze\nbaby?! Je hebt hem gevonden!")
/*<584>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 586, 'param3': 47}
/*<586>*/ 						story_flags[387 /* us: 805A9B0D 0x20, jp: 805ACD8D 0x20 */] = true;
/*<712>*/ 						{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 713, 'param3': 15}
/*<713>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 714, 'param3': 17}
/*<714>*/ 						wait_frames(10)
/*<556>*/ 						set_camera(10, 0)
/*<555>*/ 						{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3328, 'next': 585, 'param3': 13}
/*<585>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 557, 'param3': 48}
/*<557>*/ 						wait_frames(60)
/*< 20>*/ 						printf(/* textboxtype: 1, unk: 0, line: 60 */ "Wie is er een slaperige baby? Tijd voor\noogjes-toe-tjie-koetjie.<0x10005:0x00780000>")
/*<558>*/ 						{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3584, 'next': 559, 'param3': 13}
/*<559>*/ 						set_camera(29, 0)
/*< 21>*/ 						printf(/* textboxtype: 0, unk: 1, line: 61 */ "<0x10009:0x00000e08>Wauw. Onze baby lijkt eindelijk wat\ngekalmeerd. Die slaapt vast als een\nroos vannacht! En ik dus ook weer!\n\n<0x10009:0x00100e00>O, ik ben je zo dankbaar! Ik sta bij je in\nhet krijt.")
/*<103>*/ 						zone_temp_flags[0 /* 0x1 01 */] = true;
/*<715>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 125, 'param3': 42}
/*<125>*/ 						give_gratitude_crystals();
/*<716>*/ 						set_camera(30, 0)
          					  case 1:
/*<743>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 18, 'param3': 31}
/*< 18>*/ 						printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x000d0f09>Ach... Vond iemand toch maar de\n<color yellow<rammelaar>coloroff> van de baby.\n\n\n<0x10009:0x00100000>Een <color red<vogel is ermee vandoor>coloroff>. Hij moet\nnog <color red<ergens in Skyloft>coloroff> zijn. <0x10009:0x000d0000>Pfff.\nHet lijkt erop dat ik vannacht ook niet\nrustig kan slapen...")
          					}
          				}
          			  case 1:
/*< 10>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 561, 'param3': 31}
/*<561>*/ 				set_camera(10, 0)
/*<560>*/ 				{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 3072, 'next': 562, 'param3': 13}
/*<562>*/ 				wait_frames(75)
/*< 11>*/ 				printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10006:0xfccd>Hm...<pause 45><0x10006:0x00cd><0x10009:0x000d0000> Ach...<0x10005:0x00410000>")
/*<563>*/ 				set_camera(-1, 0)
/*<565>*/ 				{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 564, 'param3': 13}
/*<564>*/ 				printf(/* textboxtype: 1, unk: 0, line: 51 */ "Aaiii... Het lijkt erop dat ik vannacht\nweer weinig slaap zal krijgen...\n[1-]Waarom?[2-]Ben je moe?")
/*< 12>*/ 				switch (choice(2)) {
          				  case 0:
/*< 24>*/ 					printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x00100f06>Geen zorgen, joh...")
          					flw_26:
/*< 26>*/ 					printf(/* textboxtype: 1, unk: 1, line: 54 */ "<0x10009:0x000d0f00>De baby blijft zo maar doorgaan, het\nhoudt niet op. Ik heb al... ik weet niet\nhoelang geen oog meer dichtgedaan!\n\nNormaal slaapt de baby, tja, als een baby.\nMaar dat was voor we dat ene ding, dat\nje-weet-wel, kwijt waren...\n[1-]Wat?[2-]O, dat ding?")
/*< 27>*/ 					switch (choice(2)) {
          					  case 0:
/*< 13>*/ 						printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x00100f01>De <color yellow<rammelaar>coloroff> van de baby.")
          						flw_15:
/*< 15>*/ 						printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x00000f00>Als we die je-weet-wel hadden, dan zou\ndat de baby kalmeren. Maar we zijn\ndie laatst kwijtgeraakt.\n\n<color red<Een vogel heeft hem opgepakt >coloroff>met zijn\nsnavel en <color red<is ermee vandoor gevlogen>coloroff>.\nMisschien dacht hij dat het eten was.\nGeen idee...\n<0x10009:0x000e0f00>Natuurlijk kan die vogel dat ding niet\nopgegeten hebben. Dus waarschijnlijk\nbevindt het zich nog <color red<ergens in Skyloft>coloroff>.\nMaar waar?\n<0x10009:0x00000009>Pfff... Kon iemand dat ding maar voor\nme terugvinden.")
/*< 16>*/ 						story_flags[386 /* us: 805A9B0D 0x10, jp: 805ACD8D 0x10 */] = true;
          					  case 1:
/*< 14>*/ 						printf(/* textboxtype: 0, unk: 0, line: 56 */ "<0x10009:0x00100f04>O, dus je weet ervan? Ja, ik bedoel de\n<color yellow<rammelaar>coloroff> van de baby.")
          						goto flw_15
          					}
          				  case 1:
/*< 25>*/ 					printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x00100f07>Tja, dit is hoe mijn nachten er meestal\naan toe gaan.")
          					goto flw_26
          				}
          			}
          		  case 1:
          			flw_9:
/*<  9>*/ 			printf(/* textboxtype: 0, unk: 0, line: 47 */ "<0x10009:0x00000003>Aaargh... Ons kindje weigert te slapen.\nWat kan ik doen? Wahhh...\n[1-]Wat erg![2-]Wat zegt je vrouw?")
/*<127>*/ 			switch (choice(2)) {
          			  case 0:
/*<128>*/ 				printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00000004>Ja, het is echt een ramp... Maar zelfs\nals ze huilen zijn baby's heel schattig...\nEh, als het je eigen baby's zijn.\n\nAls je op een dag zelf zo'n kleine hebt,\ndan begrijp je het wel!")
          			  case 1:
/*<129>*/ 				printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x00000007>O, de vrouw des huizes<pause 10>.<pause 10>.<pause 10>. Die is altijd\nmoe na een lange dag werken.\n\n\n<0x10009:0x000d0f06>Ik moet haar dan wel even wat rust\ngunnen, toch?")
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
/*< 99>*/ 					printf(/* textboxtype: 1, unk: 0, line: 243 */ "<0x10009:0x000c0401>Hé, <heroname>! Heb je al gehoord\ndat ik een vriendin heb? En dat allemaal\ndankzij jouw hulp. Dank je wel!")
          				  case 1:
/*<796>*/ 					entrypoint_115_27();
          				}
          			  case 1:
/*<547>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 3072, 'next': 548, 'param3': 13}
/*<548>*/ 				printf(/* textboxtype: 0, unk: 0, line: 242 */ "<0x10009:0x00000018>Ahum... Hmm...\n\n\n\n<0x10009:0x000f1100>Jij bent tenslotte ook een beetje\nverantwoordelijk voor wat er met die\nbrief gebeurd is. Wat denk je? Moet ik\nhaar vragen hoe het zit?\n<0x10009:0x00110e00>Ik bedoel... Ik heb er zelf natuurlijk geen\nbijzonder belang bij, hoor. Ik ben gewoon\nhee erg benieuwd, en geïnteresseerd in\nliefde... in het algemeen...")
          			}
          		  case 1:
/*<132>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 546, 'param3': 31}
/*<546>*/ 			{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 1024, 'next': 92, 'param3': 13}
/*< 92>*/ 			printf(/* textboxtype: 1, unk: 0, line: 234 */ "<0x10009:0x00000001>Hoe gaat het ermee, <heroname>?")
/*<545>*/ 			printf(/* textboxtype: 0, unk: 1, line: 235 */ "<0x10009:0x00010c09>Wat zeg je? <color blue<Karane>coloroff> heeft een liefdesbrief\ngekregen?\n\n\n<0x10009:0x000f1100>O-Oké... Dat is... interessant.\nWauw...\n\n\n<0x10009:0x000c0c54>Ehmm... W-Wat denk je dat ze gaat doen?\n[1-]Hem uitvragen.[2-]Geen idee.")
/*< 93>*/ 			switch (choice(2)) {
          			  case 0:
/*< 94>*/ 				printf(/* textboxtype: 0, unk: 0, line: 236 */ "<0x10009:0x00110e53>Wat?! D-Dat is een probleem, toch?\nOf niet?!")
          				flw_96:
/*< 96>*/ 				printf(/* textboxtype: 0, unk: 1, line: 238 */ "<0x10009:0x00110e09>O, wacht! Het is niet, eh, alsof er iets is\ntussen mij en <color blue<Karane>coloroff>, hoor! We zijn\ngewoon vrienden. Ze moet zelf weten met\nwie ze uit wil gaan, natuurlijk.\nIk hou me erbuiten als dat is wat ze echt\nwil...\n\n\n<0x10009:0x000c0c00>Maar, het is natuurlijk wel mijn taak\nervoor te zorgen dat alle studenten de\nidealen van onze ridderacademie\nhooghouden, nietwaar?\n<0x10009:0x00080c00>Liefde hoort tenslotte ongedwongen te\nzijn en vol passie. Anders is het geen\nliefde te noemen, snap je wel?\n\n<0x10009:0x000b0c00>Dus, eh, ik moet ervoor zorgen dat ze haar\nware liefde heeft gevonden. Want als\nridders van de academie moeten we\nopkomen voor de ware liefde, toch?\n<0x10009:0x00110e00>En wat dacht je van mij? Ik heb toch ook\nrecht op die ongedwongen ware liefde\nals ik vlinders in mijn buik krijg?\n\n<0x10009:0x000c0c1b>Jij begrijpt me wel, toch,\n<heroname>? Wat ik zeg, klopt toch?\n[1-]Nou...[2-]Vind je haar leuk?")
/*<119>*/ 				switch (choice(2)) {
          				  case 0:
/*<121>*/ 					printf(/* textboxtype: 1, unk: 0, line: 240 */ "<0x10009:0x000f1152>Tja... Waar ben ik mee bezig. Jij hebt veel\nbelangrijkere dingen om je op dit moment\ndruk over te maken...")
          					flw_122:
/*<122>*/ 					printf(/* textboxtype: 0, unk: 1, line: 241 */ "<0x10009:0x00101117>Hoe dan ook...\n\n\n\n<0x10009:0x000f0c00>Zou je mij een dienst willen bewijzen?\nZou je haar voor mij kunnen vragen wat\nhaar beslissing gaat zijn?")
/*< 97>*/ 					story_flags[556 /* us: 805A9B16 0x20, jp: 805ACD96 0x20 */] = true;
/*<114>*/ 					story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
          				  case 1:
/*<120>*/ 					printf(/* textboxtype: 0, unk: 0, line: 239 */ "<0x10009:0x00110e53>Huh?! Wat zeg jij nou weer,\n<heroname>!\n\n\n<0x10009:0x00120c00>Hoe kom je op zoiets?! Je kunt niet\nzomaar van alles aannemen over anderen.")
          					goto flw_122
          				}
          			  case 1:
/*< 95>*/ 				printf(/* textboxtype: 1, unk: 0, line: 237 */ "<0x10009:0x000f1118>Je hebt geen idee? Hm... Dan zal ik het\nzelf uit moeten zoeken...")
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
/*<257>*/ 			printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00071602>Ik zal m'n best doen! En op een dag zal ik\nsupersterk zijn. Kom snel weer terug om\nte kijken naar mijn nieuwe spiermassa,\noké?")
          		  case 1:
/*<258>*/ 			switch (adventure_pouch_has(4 0x0004)) {
          			  case 0:
/*<278>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 277, 'param3': 32}
/*<277>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 260, 'param3': 13}
/*<260>*/ 				printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00000011>Ik moet alleen... pfoe... even bijkomen.\n<0x30001:0x><heroname>, wat heb je daar?\nIs dat soms een... <color yellow<energiedrankje>coloroff>?\n\nEn dat wil je zeker niet toevallig aan\nmij geven, of wel?\n[1-]Hier, pak aan![2]Nee...")
          				flw_261:
/*<261>*/ 				switch (choice(2)) {
          				  case 0:
/*<263>*/ 					printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x0000000b>Echt?! O, dank je! Dank je, dank je,\ndank je!")
/*<266>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3092, 'param2': 7936, 'next': 271, 'param3': 13}
/*<271>*/ 					wait_frames(4)
/*<270>*/ 					set_camera(5, 0)
/*<267>*/ 					wait_frames(135)
/*<265>*/ 					make_actor_do_something(0, 0)
/*<279>*/ 					set_camera(-1, 0)
/*<280>*/ 					wait_frames(20)
/*<264>*/ 					printf(/* textboxtype: 0, unk: 1, line: 79 */ "<0x10009:0x00000010>Wauw! Ik voel de vermoeidheid uit m'n\nspieren trekken!")
/*<268>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 269, 'param3': 13}
/*<269>*/ 					printf(/* textboxtype: 0, unk: 0, line: 80 */ "<0x10009:0x00000012>Ik weet gewoon niet... of ik zo ooit sterk\nen gespierd kan worden.\n[1-]Doe je best![2-]Je kunt het!")
/*<281>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 291, 'param3': 13}
/*<291>*/ 					switch (choice(2)) {
          					  case 0:
/*<292>*/ 						printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000009>Ja! Dat is precies wat er moet gebeuren.\nIk moet ophouden met dat gejammer en\ner keihard voor gaan!")
          						flw_294:
/*<294>*/ 						printf(/* textboxtype: 0, unk: 0, line: 83 */ "<0x10009:0x00001800>Dank je, <heroname>. Ik zal je niet\nteleurstellen. wacht maar af! Voor je het\nweet, ben ik een spierbonk!\n\n<0x10009:0x00151800>Maar nu eerst trainen! En tot snel, hè.\nIk kan niet wachten je m'n spierballen te\nlaten zien!")
/*<295>*/ 						story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */] = true;
/*<213>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<293>*/ 						printf(/* textboxtype: 0, unk: 1, line: 82 */ "<0x10009:0x00001609>Wauw, echt? Gelukkig is er iemand die\nvertrouwen in me heeft. Weet je,\nmisschien kan ik dit echt...")
          						goto flw_294
          					}
          				  case 1:
/*<262>*/ 					printf(/* textboxtype: 0, unk: 0, line: 77 */ "<0x10009:0x00000011>O... Eh, natuurlijk... Het was niet mijn\nbedoeling om opdringerig over te komen.")
/*<288>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': 3072, 'next': 287, 'param3': 13}
/*<287>*/ 					printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x00000003>O... Maak je niet druk om mij...\nIk heb nog wel wat kracht over, in mijn\neh... lichaam... denk ik...")
          				}
          			  case 1:
/*<275>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 274, 'param3': 32}
/*<274>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 276, 'param3': 13}
/*<276>*/ 				printf(/* textboxtype: 0, unk: 0, line: 74 */ "<0x10009:0x00000011>Pfoe... Wauw... Het wil gewoon niet...\n\n\n\nHad ik maar <color red<een drankje voor extra\nuithoudingsvermogen>coloroff>, dan kon ik uit\nhet diepste van mezelf die 110% halen.")
/*<290>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 289, 'param3': 13}
/*<289>*/ 				printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00000003>Maar goed, dat zal wel niet, toch? Dus\nik zal door moeten bijten en eh... mijn\narmen uit mijn mouwen moeten zweten...\nToch?\nTja, ik blijf gewoon zo doorgaan\nzolang als ik het vol kan houden! In\nmijn eentje...")
          			}
          		}
          	  case 1:
/*<259>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 273, 'param3': 31}
/*<273>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 272, 'param3': 32}
/*<272>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': 6912, 'next': 254, 'param3': 13}
/*<254>*/ 		printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10009:0x00000010>Pfoe... Even op adem komen...\n\n\n\n<0x10009:0x00101600>O, hé, <heroname>! Waar ik mee\nbezig ben? Ik ben aan het trainen,\nnatuurlijk!\n\nIk kan niet eens één vol vat optillen...\nLachwekkend, ik weet het! Dus wil ik\nsterker worden.\n\nIk schaam me er wel een beetje voor,\neigenlijk, dus ik doe het 's nachts. Zo\nis er niemand om me uit te lachen...\n\n<0x10009:0x00001711>Maar het gaat nog niet zo goed, ik ben\nte moe. Ik was bijna op het punt de\nmoed op te geven...")
/*<255>*/ 		story_flags[388 /* us: 805A9B0D 0x40, jp: 805ACD8D 0x40 */] = true;
/*<282>*/ 		switch (adventure_pouch_has(4 0x0004)) {
          		  case 0:
/*<284>*/ 			printf(/* textboxtype: 0, unk: 1, line: 76 */ "<0x10009:0x0000000b>O! <0x30001:0x><heroname>, wat heb je daar bij\nje? Dat is zeker niet... Dat is geen\n<color yellow<energiedrankje>coloroff>, zeker?\n\nO, toe nou... Dat heb je voor mij\nmeegenomen, toch?\n[1-]Pak aan![2]Nee, sorry.")
          			goto flw_261
          		  case 1:
/*<283>*/ 			printf(/* textboxtype: 0, unk: 0, line: 71 */ "Was er maar een <color red<drankje dat me meer\nuithoudingsvermogen gaf>coloroff>, dan kon ik\ndat drinken en het laatste beetje van\nm'n training afmaken...")
/*<286>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 285, 'param3': 13}
/*<285>*/ 			printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00000003>Maar goed, dat zal wel niet, toch? Dus\nik zal door moeten bijten en eh... mijn\narmen uit mijn mouwen moeten zweten...\nToch?\nTja, ik blijf gewoon zo doorgaan\nzolang als ik het vol kan houden! In\nmijn eentje...")
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
/*<682>*/ 				printf(/* textboxtype: 0, unk: 1, line: 190 */ "<0x10009:0x00000008>Wat moet ik nu, <heroname>!? Ik\nword vanavond overspoeld met gedachten\naan Karane!\n\nAls je het ergens met me over wilt\nhebben, dan zal dat tot morgen moeten\nwachten. En nu opgezouten!")
          			}
          		  case 1:
          			goto flw_534
          		}
          	  case 1:
/*<532>*/ 		printf(/* textboxtype: 0, unk: 1, line: 193 */ "<0x10009:0x00000010>Hehehe... Ik ben niet bang voor <color blue<Ganderd>coloroff>!\nHet is nu mijn kamer!")
          	}
          }

          void entrypoint_115_07() {
/*<298>*/ 	start()
/*<299>*/ 	switch (story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */]) {
          	  case 0:
/*<745>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 302, 'param3': 31}
/*<302>*/ 		switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
          		  case 0:
/*<304>*/ 			printf(/* textboxtype: 0, unk: 0, line: 98 */ "<0x10009:0x00000002><0x30001:0x><heroname>! Je zult niet geloven hoe\nsterk ik ben na deze training! Kom snel\nweer eens kijken hoe het met me gaat,\noké?")
          		  case 1:
/*<300>*/ 			switch (adventure_pouch_has(4 0x0004)) {
          			  case 0:
/*<332>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 331, 'param3': 32}
/*<331>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 305, 'param3': 13}
/*<305>*/ 				printf(/* textboxtype: 0, unk: 0, line: 89 */ "<0x10009:0x00000010>Poeh-poeh... Ik kan niet meer. Ik ben\nhelemaal buiten adem...\n\n\nHé, <heroname>, kun je niet zo'n\n<color yellow<energiedrankje >coloroff>met me delen?\n[1-]Tuurlijk![2]Nee, sorry.")
          				flw_306:
/*<306>*/ 				switch (choice(2)) {
          				  case 0:
/*<308>*/ 					printf(/* textboxtype: 0, unk: 0, line: 92 */ "<0x10009:0x0000000b>Echt? Wauw, dank je! Daar zeg ik geen\nnee tegen, natuurlijk.")
/*<333>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3092, 'param2': 7936, 'next': 312, 'param3': 13}
/*<312>*/ 					wait_frames(4)
/*<311>*/ 					set_camera(5, 0)
/*<310>*/ 					wait_frames(135)
/*<309>*/ 					make_actor_do_something(0, 0)
/*<334>*/ 					set_camera(-1, 0)
/*<335>*/ 					wait_frames(20)
/*<345>*/ 					printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x00000010>Woe-jaaah! Dat was precies wat ik nodig\nhad! Alsof ik door een golf van energie\noverspoeld word!")
/*<347>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 346, 'param3': 13}
/*<346>*/ 					printf(/* textboxtype: 0, unk: 1, line: 94 */ "<0x10009:0x00000012>Soms vraag ik me wel af wat er mis is...\nIk train veel maar zonder resultaten!\nHoeveel moet ik nog trainen voordat ik\neindelijk wat sterker word?\nWat denk jij, <heroname>? Hoeveel\npush-ups moet ik doen om sterk te\nworden?\n[1-]Een stuk of 1000![2-]Maakt niet uit hoeveel.")
/*<348>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3073, 'param2': 2048, 'next': 349, 'param3': 13}
/*<349>*/ 					switch (choice(2)) {
          					  case 0:
/*<350>*/ 						printf(/* textboxtype: 0, unk: 0, line: 95 */ "<0x10009:0x00000053>Oef... Zoveel? Echt waar?\n\n\n\n<0x10009:0x00100e00>Oké dan, wie sterk wil zijn, moet pijn\nlijden, zeggen ze altijd. Zoveel pijn...")
          						flw_352:
/*<352>*/ 						printf(/* textboxtype: 0, unk: 1, line: 97 */ "<0x10009:0x00011600>Nu ik erover nadenk, dat klinkt logisch.\nHa! Met deze nieuwe kennis zal ik zeker\nsterk worden!\n\n<0x10009:0x00001800>Kom binnenkort maar weer eens kijken\nhoe het gaat!")
/*<353>*/ 						story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */] = true;
/*<354>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<351>*/ 						printf(/* textboxtype: 1, unk: 0, line: 96 */ "<0x10009:0x00000007>Het maakt niet uit hoeveel het er zijn?\nAch, natuurlijk!\n\n\n<0x10009:0x00070800>Je bedoelt dat ik net zolang door moet\ngaan tot ik vergeten ben hoeveel push-ups\nik al gedaan heb, toch?")
          						goto flw_352
          					}
          				  case 1:
/*<307>*/ 					printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x00000011>O, natuurlijk... Nee, ik snap het al.\nLaat maar.")
/*<344>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 343, 'param3': 13}
/*<343>*/ 					printf(/* textboxtype: 0, unk: 1, line: 91 */ "Het is al goed! Ik blijf mezelf gewoon\npushen om door te gaan.")
          				}
          			  case 1:
/*<330>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 329, 'param3': 32}
/*<329>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 303, 'param3': 13}
/*<303>*/ 				printf(/* textboxtype: 0, unk: 0, line: 74 */ "<0x10009:0x00000011>Pfoe... Wauw... Het wil gewoon niet...\n\n\n\nHad ik maar <color red<een drankje voor extra\nuithoudingsvermogen>coloroff>, dan kon ik uit\nhet diepste van mezelf die 110% halen.")
/*<342>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 341, 'param3': 13}
/*<341>*/ 				printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00000003>Nee, nee! Ik moet niet zo afhankelijk van\nanderen zijn! Weet je wat, ik blijf wel\ngewoon zelf hard mijn best doen.")
          			}
          		}
          	  case 1:
/*<301>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 328, 'param3': 31}
/*<328>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 327, 'param3': 32}
/*<327>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': 6912, 'next': 296, 'param3': 13}
/*<296>*/ 		printf(/* textboxtype: 0, unk: 1, line: 85 */ "<0x10009:0x00000010>Oef... Jeetje... Ik zweet me een ongeluk.\nGoedenavond, <heroname>!\n\n\n<0x10009:0x0c10ff00>Ik heb non-stop getraind sinds we elkaar\ngesproken hebben, maar ik voel me zo\nsloom nu. Misschien is m'n energie op.")
/*<297>*/ 		story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */] = true;
/*<336>*/ 		switch (adventure_pouch_has(4 0x0004)) {
          		  case 0:
/*<338>*/ 			printf(/* textboxtype: 0, unk: 1, line: 88 */ "<0x10009:0x0000000b>Huh! <0x30001:0x><heroname>, wat heb je daar?\nIs dat een <color red<energiedrankje>coloroff> in je zak?\n\n\nAh, toe? Geef mij er ook eentje, joh.\n[1-]Hier![2]Nee, sorry.")
          			goto flw_306
          		  case 1:
/*<337>*/ 			printf(/* textboxtype: 0, unk: 0, line: 86 */ "Hé, <heroname>. Zou je me nog zo'n\n<color red<energiedrankje>coloroff> kunnen geven?\nAlsjeblieeeft?")
/*<340>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 339, 'param3': 13}
/*<339>*/ 			printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00000003>Nee, nee! Ik moet niet zo afhankelijk van\nanderen zijn! Weet je wat, ik blijf wel\ngewoon zelf hard mijn best doen.")
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
/*< 59>*/ 			printf(/* textboxtype: 0, unk: 1, line: 196 */ "<0x10009:0x00000002>Hé, <heroname>! Heb je die brief\nbezorgd, zoals ik je gevraagd heb?\n[1-]Nou, eigenlijk...[2-]Huh?")
/*< 60>*/ 			switch (choice(2)) {
          			  case 0:
/*< 62>*/ 				printf(/* textboxtype: 0, unk: 0, line: 197 */ "<0x10009:0x00111f1d>W-Wat zei je?! Je hebt de brief aan die\nrare figuur op het toilet gegeven?!")
          				flw_64:
/*< 64>*/ 				printf(/* textboxtype: 0, unk: 1, line: 199 */ "<0x10009:0x00011f00>Heb ik je niet specifiek verteld dat je hem\nNIET aan die figuur op het toilet moest\ngeven?! Ik heb het echt minstens vijf\nkeer gezegd! Dat weet ik zeker!\n<0x10009:0x001a1f17>Malloot! Hoe kon je?! Iemand die de\nware liefde in de weg staat, verdient een\nharde trap van een vogel!\n\nIk haat je, <heroname>!")
/*<692>*/ 				{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 7936, 'next': 683, 'param3': 13}
/*<683>*/ 				{'type': 'type3', 'subType': 2, 'param1': 14, 'param2': 0, 'next': 691, 'param3': 14}
/*<691>*/ 				printf(/* textboxtype: 0, unk: 0, line: 200 */ "<0x10009:0x00001f18>Wèèèèèèèèèèèh!!!")
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
/*< 63>*/ 				printf(/* textboxtype: 1, unk: 0, line: 198 */ "<0x10009:0x00151f12>J... Je... Ben je niet goed snik ofzo?!\n\n\n\n<0x10009:0x00111b00>Serieus?! Je hebt hem aan die griezel op\nhet toilet gegeven? Echt waar?! Aan die\nrare toiletbewoner?!")
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
/*<544>*/ 				printf(/* textboxtype: 1, unk: 0, line: 192 */ "<0x10009:0x0000000f>O hemel... dus <color blue<Karane>coloroff> weet eindelijk af\nvan mijn gevoelens voor haar.\n\n\n<0x10008:0xffcd><0x10009:0x00011f00>O, wat moet ik nu toch doen? Mijn hart gaat\ntekeer...")
          			  case 1:
/*<567>*/ 				{'type': 'type3', 'subType': 4, 'param1': 24, 'param2': 6912, 'next': 542, 'param3': 13}
/*<542>*/ 				printf(/* textboxtype: 0, unk: 0, line: 191 */ "<0x10009:0x00000013>Wat?! Je hebt het echt gedaan?!\nJe hebt de brief aan <color blue<Karane>coloroff> gegeven?!\n\n\n<0x10009:0x00012500>O nee. O, NEE. Wat nu?! Wat moet ik\ndoen? Misschien moet ik eens gaan kijken\nwat ze van de brief vond...\n<0x10008:0xffcd><0x10009:0x00011f00>Arggh, ik ben zo nerveus...")
/*<543>*/ 				story_flags[664 /* us: 805A9B1F 0x40, jp: 805ACD9F 0x40 */] = true;
          			}
          		  case 1:
/*<566>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 40, 'param3': 13}
/*< 40>*/ 			printf(/* textboxtype: 1, unk: 0, line: 189 */ "<0x10009:0x00000002>Moet ik het nog een keer duidelijk maken,\n<heroname>? Geef de brief aan de\nlieve ouderejaars met de <color red<ronde hoed>coloroff>.\n\n<0x10009:0x00011b00>En peins er niet over om hem aan die\n<color red<figuur op het toilet>coloroff> te geven! Zelfs niet\nper ongeluk! Waag het NIET!")
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
/*<251>*/ 				printf(/* textboxtype: 1, unk: 0, line: 69 */ "Hrrrnnnnghhh...")
          			  case 1:
/*<249>*/ 				printf(/* textboxtype: 0, unk: 0, line: 68 */ "3985... 3986... 3987... 3988...")
/*<844>*/ 				temp_flags[53 /* 0x7 20 */] = true;
          			}
          		  case 1:
/*<245>*/ 			switch (temp_flags[53 /* 0x7 20 */]) {
          			  case 0:
/*<247>*/ 				printf(/* textboxtype: 0, unk: 1, line: 67 */ "Hfff... Hmpfff...")
          			  case 1:
/*<244>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10006:0xfecd>55... 56... 57...")
/*<843>*/ 				temp_flags[53 /* 0x7 20 */] = true;
          			}
          		}
          	  case 1:
/*<242>*/ 		switch (temp_flags[53 /* 0x7 20 */]) {
          		  case 0:
/*<246>*/ 			printf(/* textboxtype: 0, unk: 0, line: 65 */ "Nnghh... Hfff... Hmpfff...")
          		  case 1:
/*<240>*/ 			printf(/* textboxtype: 0, unk: 1, line: 64 */ "<0x10006:0xfccd>5... 6... 7...")
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
/*<321>*/ 			printf(/* textboxtype: 0, unk: 1, line: 103 */ "<0x10009:0x0015180a>Ik ga niet stoppen met trainen! Hierna ga\nik zo hard m'n best doen dat ik zo'n ton\nmet één VINGER op kan tillen.")
          		  case 1:
/*<322>*/ 			printf(/* textboxtype: 0, unk: 0, line: 104 */ "<0x10009:0x0015180a>Pfoe! Dat was een prima warming-up.")
          		}
          	  case 1:
/*<323>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 315, 'param3': 31}
/*<315>*/ 		printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x0015190a>Pfoe... Dat was een goede warming-up.\n\n\n\n<0x10009:0x00011600>Hé, <heroname>! Ik hoopte al dat je\nweer eens langs zou komen. Ik wilde je om\niets vragen.\n\n<0x10009:0x00071800>Ik probeerde laatst wat tonnen te tillen en\nik kon ze met één hand omhoog houden!\n\n\n<0x10009:0x00001600>Wat denk je? Betekent dat dat ik genoeg\nspieren heb nu? Nou, <heroname>?\nZie ik er sterk uit?\n[1-]Te sterk![2-]Zeker wel.")
/*<317>*/ 		switch (choice(2)) {
          		  case 0:
/*<319>*/ 			printf(/* textboxtype: 0, unk: 0, line: 101 */ "<0x10009:0x00071809>Huh? Kom op, je maakt een grapje, toch?\nEcht? Het is wel een heel vleiend grapje.")
          			flw_320:
/*<320>*/ 			printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x00001600>Zonder jou was het niet gelukt,\n<heroname>.\n\n\n<0x10009:0x00011900>Als je me niet telkens had aangemoedigd,\ndan was dit me nooit in mijn eentje\ngelukt. Dankzij jou had ik de motivatie!\n\n<0x10009:0x0007180b>Dank je wel, <heroname>!")
/*<324>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
/*<316>*/ 			story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */] = true;
/*<325>*/ 			give_gratitude_crystals();
          		  case 1:
/*<318>*/ 			printf(/* textboxtype: 0, unk: 1, line: 100 */ "<0x10009:0x0000180b>Echt? Wauw, dank je! O, ik ben zo blij!")
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
/*<789>*/ 				printf(/* textboxtype: 0, unk: 0, line: 125 */ "<0x10009:0x000b0e09>Hé, <heroname>, bedankt voor\nhet helpen van mijn zus. Ik sta bij je in\nhet krijt!")
          			  case 1:
/*<772>*/ 				entrypoint_115_26();
          			}
          		  case 1:
/*<742>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 731, 'param3': 31}
/*<731>*/ 			switch (story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */]) {
          			  case 0:
/*<214>*/ 				printf(/* textboxtype: 0, unk: 1, line: 121 */ "<0x10009:0x000b0e09><0x30001:0x><heroname>! Mijn zus is weer veilig\nthuisgekomen! <0x10009:0x000a0400>O! Ik maakte me zo enorm\nzorgen om haar.\n\n<0x10009:0x000b0400>Bedankt voor al je hulp, <heroname>!")
/*<216>*/ 				story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */] = true;
/*<787>*/ 				temp_flags[11 /* 0x0 08 */] = true;
/*<732>*/ 				give_gratitude_crystals();
          			  case 1:
/*<734>*/ 				printf(/* textboxtype: 0, unk: 0, line: 122 */ "<0x10009:0x000b0e09><0x30001:0x><heroname>! Mijn zus is veilig\nthuisgekomen!\n\n\n<0x10009:0x000a0400>Ik ben zo opgelucht! Ik maakte me elke\ndag meer zorgen. Ik stelde me voor wat er\nallemaal gebeurd kon zijn. Doodeng was\ndat.\nWat? Heb jij mijn zus een medicijn\ngegeven voor haar Loftwing?<pause 20>\n\n\n<0x10009:0x000b0400>Dank je wel! Uit dankbaarheid wil ik je\ngraag iets geven!")
/*<738>*/ 				switch (is_adventure_pouch_full()) {
          				  case 0:
/*<739>*/ 					switch (is_item_check_full()) {
          					  case 0:
/*<740>*/ 						printf(/* textboxtype: 1, unk: 0, line: 123 */ "<0x10009:0x000b0a05>Ik wilde je eigenlijk deze <color yellow<fles>coloroff> geven,\nmaar helaas is je buidel al vol. En zo te\nzien heb je ook geen ruimte meer bij de\nvoorwerpenbank...\nAls je wat ruimte maakt in je buidel, of\nbij de voorwerpenbank, dan kan ik je dit\nalsnog geven. Dus kom snel bij me terug\nals je dat gedaan hebt.")
          					  case 1:
          						flw_735:
/*<735>*/ 						story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */] = true;
/*<736>*/ 						story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */] = true;
/*<733>*/ 						give_item(153 0x99);
/*<786>*/ 						temp_flags[11 /* 0x0 08 */] = true;
/*<812>*/ 						printf(/* textboxtype: 0, unk: 1, line: 124 */ "<0x10009:0x000b0400>Je denkt misschien dat het niet veel\nvoorstelt, maar je kunt echt van alles met\neen goede lege fles als deze. Opnieuw, heel\nerg bedankt!")
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
/*<205>*/ 						printf(/* textboxtype: 1, unk: 0, line: 120 */ "<0x10009:0x000b0409>Waarom duurt het zo lang,\n<heroname>? Haast je alsjeblieft en\nbreng die <color yellow<paddenstoelsporen >coloroff>naar mijn\nzus!\n<0x10009:0x000a0400>Ik reken op je, oké?")
          					  case 1:
/*<201>*/ 						printf(/* textboxtype: 0, unk: 1, line: 118 */ "<0x10009:0x000b0406>Waar zijn alle <color yellow<paddenstoelsporen>coloroff>\ngebleven? Heb je die niet naar m'n zus\ngebracht?\n\n<0x10009:0x000a0400>Als je meer <color yellow<paddenstoelsporen>coloroff> nodig hebt,\ndan kun je er meer van halen <color red<bij\npaddenstoelen>coloroff>. Ik reken op je,\n<heroname>.")
          					}
          				  case 1:
/*<220>*/ 					switch (story_flags[395 /* us: 805A9B0C 0x80, jp: 805ACD8C 0x80 */]) {
          					  case 0:
/*<221>*/ 						printf(/* textboxtype: 0, unk: 0, line: 119 */ "<0x10009:0x000b0409>Te gek! Je hebt genoeg ruimte in je\nbuidel. Hier, pak aan!\n\n\n<color yellow<<0x10009:0x000a0400>>coloroff>Dat zijn<color yellow< paddenstoelsporen>coloroff>. Daarmee kan\nmijn zus haar Loftwing genezen.")
          						flw_231:
/*<231>*/ 						switch (is_adventure_pouch_full()) {
          						  case 0:
/*<228>*/ 							printf(/* textboxtype: 0, unk: 0, line: 116 */ "<0x10009:0x0000050d>Dit kan toch niet waar zijn?! Je hebt al te\nveel bij je! <0x10009:0x00000400>Zorg dat je genoeg ruimte\nhebt in je buidel en praat dan weer met\nme.")
/*<229>*/ 							story_flags[395 /* us: 805A9B0C 0x80, jp: 805ACD8C 0x80 */] = true;
          						  case 1:
/*<746>*/ 							story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */] = true;
/*<230>*/ 							give_item(55 0x37);
/*<747>*/ 							story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */] = false;
/*<232>*/ 							printf(/* textboxtype: 1, unk: 0, line: 117 */ "<0x10009:0x000b0404>Hiermee zal de wond van de vogel snel\ngenezen. Dan kunnen ze op eigen kracht\nzelf weer terugkomen. <0x10009:0x00000c00>Breng het snel\nnaar mijn zus!\n<0x10009:0x00000400>De <color red<fles >coloroff>mag je zelf houden als mijn\nzus klaar is met het medicijn.\n\n\nSnel nu! Ik reken op je, <heroname>!")
/*<227>*/ 							story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */] = true;
          						}
          					  case 1:
          						flw_199:
/*<199>*/ 						printf(/* textboxtype: 0, unk: 1, line: 115 */ "<0x10009:0x000b050d>Huh?! Je hebt m'n zus gevonden? En haar\nLoftwing is gewond?!\n\n\n<0x10009:0x000a0c00>Dat is verschrikkelijk! Hier, breng dit zo\nsnel als je kunt naar haar toe!\n\n\n<color yellow<<0x10009:0x00000400>>coloroff>Dit zijn <color yellow<paddenstoelensporen>coloroff>. Die zullen\nde wond van de vogel genezen.")
          						goto flw_231
          					}
          				}
          			  case 1:
/*<184>*/ 				printf(/* textboxtype: 0, unk: 1, line: 112 */ "<0x10009:0x000a0c12>O, ik ben zo bezorgd. Wat moet ik nu?\nWaar is ze toch in verzeild geraakt?\n\n\nNormaal maak ik altijd een <color red<fles >coloroff>met een\ndrankje voor haar klaar, maar dat was ik\ndeze keer vergeten...")
/*<835>*/ 				make_actor_do_something(0, 0)
/*<836>*/ 				printf(/* textboxtype: 0, unk: 0, line: 113 */ "<0x10009:0x000d0400>Mijn zusje was nieuwsgierig naar dat\n<color blue<kleurrijke eiland>coloroff> dat laatst uit het niets\nverschenen is, dus ik vermoed dat ze\nergens in het <color red<zuidwesten >coloroff>is.")
/*<837>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 838, 'param3': 17}
/*<838>*/ 				printf(/* textboxtype: 1, unk: 0, line: 114 */ "<0x10009:0x00010400>O, <heroname>, help alsjeblieft met\nzoeken?")
          			}
          		  case 1:
/*<202>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 177, 'param3': 31}
/*<177>*/ 			printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x000a0c12>Oei oei oei. Wat moet ik nu toch doen?\nIk maak me zo'n zorgen...\n[1-]Wat is er?[2-]Rustig maar.")
/*<178>*/ 			switch (choice(2)) {
          			  case 0:
/*<179>*/ 				printf(/* textboxtype: 0, unk: 1, line: 106 */ "<0x10009:0x00000411>Huh, <heroname>? Wil je echt weten\nwat er allemaal aan de hand is? Je bent\necht een topkerel, weet je dat?")
          				flw_181:
/*<181>*/ 				printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x00000400><color red<Mijn zus >coloroff>is met haar Loftwing gaan\nvliegen, maar ze is nog niet thuis-\ngekomen! Waar hangt ze toch uit?!\n\nNormaal is ze allang thuis voordat het\nlaat wordt. Ik heb overal naar haar\ngezocht, maar ik kan haar nergens\nvinden.\n\n<0x10009:0x000b0500>Ik moet er niet aan denken dat haar iets\nis overkomen. Ik maak me zo'n zorgen...")
/*<198>*/ 				switch (story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */]) {
          				  case 0:
/*<219>*/ 					story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */] = true;
          					goto flw_199
          				  case 1:
/*<197>*/ 					printf(/* textboxtype: 0, unk: 1, line: 109 */ "<0x10009:0x00000411>Hé, <heroname>, zou jij me willen\nhelpen om haar te vinden?")
/*<831>*/ 					make_actor_do_something(0, 0)
/*<832>*/ 					printf(/* textboxtype: 0, unk: 0, line: 110 */ "<0x10009:0x000d0400>Ze zei dat ze nieuwsgierig was naar dat\n<color blue<kleurrijke eiland>coloroff> dat laatst uit het niets\nverschenen is, dus ik vermoed dat ze\nergens in het <color red<zuidwesten >coloroff>is.")
/*<833>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 834, 'param3': 17}
/*<834>*/ 					printf(/* textboxtype: 1, unk: 0, line: 111 */ "<0x10009:0x00010400>Ik reken op je, <heroname>!")
/*<182>*/ 					story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */] = true;
          				}
          			  case 1:
/*<180>*/ 				printf(/* textboxtype: 0, unk: 0, line: 107 */ "<0x10009:0x000b0500>RUSTIG?! Hoe kan ik rustig blijven in\neen situatie als deze?! Eh... Sorry. Je\nprobeert natuurlijk alleen maar te helpen,\ndat snap ik wel.")
          				goto flw_181
          			}
          		}
          	}
          }

          void entrypoint_115_26() {
/*<762>*/ 	start()
/*<765>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<766>*/ 		printf(/* textboxtype: 1, unk: 0, line: 135 */ "<0x10009:0x000b0409>Huh?! Het eiland van de godin is\nverdwenen? Hoe kan zoiets nou\ngebeuren?\n\n<0x10009:0x000a0400>Dit kan niet veel goeds betekenen. Er gaat\nvast iets verschrikkelijks gebeuren. En\nhet verdwijnen van dat eiland is op zich\nal verschrikkelijk...")
          		flw_790:
/*<790>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
          		  case 1:
/*<791>*/ 			switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          			  case 0:
/*<792>*/ 				printf(/* textboxtype: 1, unk: 0, line: 138 */ "<0x10009:0x00010400><color blue<Struiz>coloroff> heeft me laatst verteld dat hij een\n<color red<zeldzaam insect>coloroff> heeft gevonden. Ik heb\nhem nog nooit zo blij gezien. Hij is\nermee naar de donderwolk gegaan.\nIk vermoed dat die jongen weer veel te\nveel wordt afgeleid van zijn opleiding...")
          			  case 1:
/*<767>*/ 				switch (story_flags[811 /* us: 805A9B31 0x08, jp: 805ACDB1 0x08 */]) {
          				  case 0:
/*<771>*/ 					printf(/* textboxtype: 0, unk: 0, line: 137 */ "<0x10009:0x00010400>Die <color blue<Struiz>coloroff> had het erover dat hij een\nhele zwerm insecten gaat verzamelen om\neen insectenparadijs te creëren <color red<in die\ndonderwolk>coloroff>!")
          				  case 1:
/*<770>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 768, 'param3': 31}
/*<768>*/ 					printf(/* textboxtype: 0, unk: 1, line: 136 */ "<0x10009:0x000a0a00>Hé, er zit toch een <color blue<Struiz>coloroff> bij jou op\nschool?\n\n\nHij had het erover dat hij een of ander\ninsectenparadijs ontdekt heeft <color red<in die\nenorme donderwolk>coloroff>. Die jongen houdt net\niets te veel van ongedierte, vind je niet?\n<0x10009:0x000b0400>Ik vraag me af wat hij met dat insecten-\nparadijs van plan is.")
/*<769>*/ 					story_flags[811 /* us: 805A9B31 0x08, jp: 805ACDB1 0x08 */] = true;
          				}
          			}
          		}
          	  case 1:
/*<810>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<811>*/ 			printf(/* textboxtype: 0, unk: 0, line: 134 */ "<0x10009:0x00000001>Hoorde jij dat kabaal ook? Het leek wel\nof het eiland op het punt stond zichzelf\naan stukken te schudden. Wat zou het\ngeweest zijn?")
          			goto flw_790
          		  case 1:
/*<774>*/ 			switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          			  case 0:
/*<775>*/ 				printf(/* textboxtype: 0, unk: 1, line: 133 */ "<0x10009:0x00000001>Was je iets aan het uitspoken op het\nplein? De lucht werd net opeens helemaal\ndonker.")
          				goto flw_790
          			  case 1:
/*<773>*/ 				switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          				  case 0:
/*<764>*/ 					printf(/* textboxtype: 1, unk: 0, line: 132 */ "<0x10009:0x000a0405>Vind je het ook niet vreemd dat er hier op\ndeze plek op het plein zoveel vlinders\nbijeenkomen? Er is hier voor zover ik kan\nzien helemaal niks voor ze...")
          					goto flw_790
          				  case 1:
/*<841>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*<842>*/ 						printf(/* textboxtype: 0, unk: 0, line: 131 */ "<0x10009:0x00000001>Hé, <heroname>! Je bent altijd druk\nonderweg, hè?")
          						goto flw_790
          					  case 1:
/*<779>*/ 						switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          						  case 0:
/*<784>*/ 							switch (story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */]) {
          							  case 0:
/*<783>*/ 								printf(/* textboxtype: 1, unk: 0, line: 129 */ "<0x10009:0x00000001>Hé, <heroname>! Heb je die drie\npestkoppen nog ergens gezien de laatste\ntijd? Ze zijn hier al een hele tijd niet\nmeer samen geweest.\nMisschien dat ze nu eindelijk wat harder\nhun best gaan doen op school, nu ze alle\ndrie niet tot de hogere klas toegelaten\nzijn.")
          							  case 1:
/*<785>*/ 								printf(/* textboxtype: 0, unk: 1, line: 130 */ "<0x10009:0x00000001>Hallo, <heroname>! Had ik al verteld\ndat ik op dat Preteiland ben geweest?\nDat eiland waar mijn zus het over had!\n\nDe man die ik daar tegenkwam, vertelde\nme dat hij zijn <color red<roulettewiel >coloroff>heeft laten\nvallen. Ik heb geen idee wat dat is, maar\nhij leek er erg aan gehecht te zijn.\nAls je het mij vraagt, kan hij dat roulette-\nwiel maar beter snel weer vergeten.\nDingen die door de wolkenbarrière vallen,\nzie je nooit meer terug!")
          							}
          						  case 1:
/*<776>*/ 							switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          							  case 0:
/*<782>*/ 								printf(/* textboxtype: 0, unk: 0, line: 128 */ "<0x10009:0x000a0405>Hé! Zag jij dat ook?! Er schoot een\nlichtstraal vanuit de lichttoren recht\ndie enorme donderwolk in.\n\nBijna alsof de lichttoren de weg\nprobeert te wijzen of zoiets. Recht die\ndonderwolk in... Erg vreemd.")
          							  case 1:
/*<840>*/ 								switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          								  case 0:
          									flw_780:
/*<780>*/ 									printf(/* textboxtype: 1, unk: 0, line: 126 */ "<0x10009:0x00000001>Hallo, <heroname>! Ik heb Zelda al\neen tijd niet meer gezien. Weet jij of er\niets met haar aan de hand is?")
          								  case 1:
/*<778>*/ 									switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          									  case 0:
/*<781>*/ 										printf(/* textboxtype: 0, unk: 1, line: 127 */ "<0x10009:0x00000001>Hé, <heroname>!\n\n\n\n<0x10009:0x000a0400>Wat zei je? Iets met <color red<twee wieken>coloroff>?<pause 30> Hm,\nnee sorry. Ik weet totaal geen raad met\nraadsels. Waarom ga je niet langs bij de\n<color red<waarzegger>coloroff>? Die kan je vast wel helpen.")
          									  case 1:
/*<777>*/ 										switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          										  case 0:
          											goto flw_780
          										  case 1:
/*<763>*/ 											printf(/* textboxtype: 0, unk: 0, line: 125 */ "<0x10009:0x000b0e09>Hé, <heroname>, bedankt voor\nhet helpen van mijn zus. Ik sta bij je in\nhet krijt!")
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
/*<818>*/ 		printf(/* textboxtype: 0, unk: 1, line: 232 */ "<0x10009:0x000c0401>Niet te geloven, toch? Het eiland van de\ngodin viel zo, PLOEP, uit de lucht!\n\n\n<pause 30>Ik zal dat deel van Skyloft echt enorm\nmissen...<0x10009:0x00110e00> Maar, weet je, misschien wil de\ngodin ons zo vertellen dat we er het beste\nvan moeten maken.")
/*<819>*/ 		switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          		  case 0:
/*<820>*/ 			printf(/* textboxtype: 0, unk: 0, line: 233 */ "<0x10009:0x000c040b><0x10008:0xffcd>En het is niet alsof de godin de enige belangrijke\nvrouw in mijn leven is...")
          		  case 1:
          		}
          	  case 1:
/*<815>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<817>*/ 			printf(/* textboxtype: 1, unk: 0, line: 231 */ "<0x10009:0x00001101>Hé, <heroname>. Moet je horen...\nIk heb een exclusieve tip voor je die ik\nmet nog niemand anders gedeeld heb.\n\n<0x10009:0x000c0400>Ik was net wat aan het vliegen met mijn\nLoftwing toen er plotseling een gebouw\ntevoorschijn kwam uit de onderste helft\nvan het eiland van de godin!\n<0x10009:0x00110e00>Kan iemand me uitleggen wat er aan de\nhand is met Skyloft?!")
          		  case 1:
/*<702>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<703>*/ 				printf(/* textboxtype: 0, unk: 1, line: 229 */ "<0x10009:0x00000005>Hé, <heroname>! Je loopt er de laatste\ntijd erg monter bij.\n\n\n<0x10009:0x0000040b>Hou dat vol! <pause 20>Voor je het weet is Zelda\nweer terug. Blijf daar maar aan denken\nterwijl je op haar wacht!")
          			  case 1:
/*<700>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<701>*/ 					printf(/* textboxtype: 0, unk: 0, line: 230 */ "<0x10009:0x00000001>Hé, <heroname>! Hoe is het?\n\n\n\n<0x10009:0x000c1400>Huh, wat bedoel je? Een Triforce?\nVerborgen door een godin?\n\n\n<0x10009:0x00101100>Ehhh, daar weet ik niet zoveel van af ben\nik bang...\n\n\n<0x10009:0x00081400>Als je meer over dat soort dingen wilt\nweten, dan kun je beter met een van onze\nleraren praten.")
          				  case 1:
/*<663>*/ 					switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          					  case 0:
/*<662>*/ 						printf(/* textboxtype: 0, unk: 1, line: 229 */ "<0x10009:0x00000005>Hé, <heroname>! Je loopt er de laatste\ntijd erg monter bij.\n\n\n<0x10009:0x0000040b>Hou dat vol! <pause 20>Voor je het weet is Zelda\nweer terug. Blijf daar maar aan denken\nterwijl je op haar wacht!")
          					  case 1:
/*<661>*/ 						switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          						  case 0:
/*<660>*/ 							printf(/* textboxtype: 1, unk: 0, line: 228 */ "<0x10009:0x00000001>Hé, <heroname>! Hoe gaat het?\nJe voelt je al iets beter, hoop ik?\n\n\n<0x10009:0x00091400>Ik zit zelf ook een beetje in de problemen.\nMaar, ik probeer dapper te blijven, zeker\nnaar andere mensen toe.\n\n<0x10009:0x00110400>Als je dat doet, glijden je zorgen van je\nkleren als het water langs de veren van\neen Loftwing. Dat geloof ik.")
          						  case 1:
/*< 90>*/ 							printf(/* textboxtype: 0, unk: 0, line: 227 */ "<0x10009:0x00000001>Hé, <heroname>! Het is je gelukt!\nWelkom in de hogere klas! Dat uniform\nstaat je goed, hoor.\n\n<0x10009:0x00101100>Maar misschien moeten we het feestje\neven overslaan? Ik kan nog steeds niet\ngeloven dat Zelda echt verdwenen is.\n\n<0x10009:0x000c1400>En jij en Zelda zijn zulke goede\nvrienden... Je maakt je vast zo druk!\n\n\n<0x10009:0x00081400>Maar... iets zegt me dat ze in orde is!\nDus hou vol, blijf hopen en wacht tot ze\nweer thuiskomt.")
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
/*<207>*/ 				printf(/* textboxtype: 0, unk: 0, line: 149 */ "<0x10009:0x0000000b>O, <color yellow<paddenstoelsporen>coloroff>! Ze zijn er! Wat een\ngeluk dat je het medicijn kon halen.\n[1-]Alsjeblieft![2]Sorry, nee.")
          				flw_208:
/*<208>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_210:
/*<210>*/ 					printf(/* textboxtype: 0, unk: 1, line: 151 */ "<0x10009:0x000b0409>Dank je wel! Nu kan ik snel mijn arme\nvogel van zijn verwonding genezen.")
/*<607>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 610, 'param3': 47}
/*<610>*/ 					{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 224, 'param3': 15}
/*<224>*/ 					make_actor_do_something(0, 0)
/*<647>*/ 					wait_frames(1)
/*<646>*/ 					{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 256, 'next': 234, 'param3': 15}
/*<234>*/ 					set_camera(7, 0)
/*<235>*/ 					{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': -256, 'next': 608, 'param3': 13}
/*<608>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 236, 'param3': 48}
/*<236>*/ 					wait_frames(45)
/*<233>*/ 					printf(/* textboxtype: 0, unk: 0, line: 152 */ "<0x10009:0x00000004>Zo is mijn Loftwing dankzij jou\nrazendsnel weer in orde!")
/*<237>*/ 					wait_frames(30)
/*<581>*/ 					make_actor_do_something(1, 0)
/*<609>*/ 					set_camera(24, 0)
/*<238>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 1280, 'next': 222, 'param3': 13}
/*<222>*/ 					printf(/* textboxtype: 1, unk: 0, line: 153 */ "<0x10009:0x00000009>Ik werd al bang dat er niemand meer zou\nkomen...\n\n\nJe hebt mijn leven gered en dat van mijn\npartner! Daar zijn we je allebei heel\ndankbaar voor!")
/*<225>*/ 					give_gratitude_crystals();
/*<223>*/ 					printf(/* textboxtype: 0, unk: 1, line: 154 */ "<0x10009:0x00000004>Hoppakee! Tot op Skyloft!")
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
/*<209>*/ 					printf(/* textboxtype: 1, unk: 0, line: 150 */ "<0x10009:0x00001113>W-Wat?! Hoe kun je zo gemeen zijn?!")
          				}
          			  case 1:
/*<730>*/ 				printf(/* textboxtype: 1, unk: 0, line: 144 */ "<0x10009:0x0000050b>Dus je komt me die paddenstoelsporen\nbrengen die je daar bij je hebt? Geef ze\nmaar aan mij, dan zorg ik dat mijn vogel\nweer razendsnel de oude is![1-]Alsjeblieft.[2]Nee.")
          				goto flw_208
          			}
          		  case 1:
/*<226>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 196, 'param3': 31}
/*<196>*/ 			printf(/* textboxtype: 0, unk: 1, line: 148 */ "<color red<<0x10009:0x00000001>Mijn broer heeft een speciaal\nvogelmedicijn>coloroff>. Ga alsjeblieft naar hem\ntoe!\n\nIk wacht hier op je met mijn Loftwing.")
          		}
          	  case 1:
/*<203>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 188, 'param3': 31}
/*<188>*/ 		printf(/* textboxtype: 0, unk: 1, line: 139 */ "<0x10009:0x0000050b>Hé, jij bent <heroname>! Wat een\ngeluk dat je hier bent. <0x10009:0x00120200>Mijn vogel is\ngewond geraakt en kan nu niet meer\nverder vliegen.\n<0x10009:0x00011500>Ik kon hier nog net op tijd landen, maar\nnu zitten we hier vast.\n\n\n<0x10009:0x00121500>Ik kan niet terug naar huis zolang mijn\nvogel niet in orde is. <color red<Ik heb medicijnen\nnodig>coloroff> om hem te helpen. Uiteraard moet\nhet een <color red<vogelmedicijn>coloroff> zijn.\nZeg, <heroname>, <0x10009:0x00150200> ik kan je hulp goed\ngebruiken. Kun je wat vogelmedicijn voor\nme halen?\n[1-]Natuurlijk![2-]Nee, sorry.")
/*<189>*/ 		switch (choice(2)) {
          		  case 0:
/*<190>*/ 			printf(/* textboxtype: 0, unk: 0, line: 140 */ "<0x10009:0x000b0409>Dank je! Je bent echt een held.")
          			flw_192:
/*<192>*/ 			printf(/* textboxtype: 0, unk: 1, line: 142 */ "<color red<Mijn broer heeft altijd wel wat\nvogelmedicijn.>coloroff> Als je naar hem toegaat,\ngeeft hij je precies wat ik nodig heb.\n\nHij loopt waarschijnlijk zenuwachtig\n<color red<rondjes op het grote plein van Skyloft>coloroff>.\nHij maakt zich vast vreselijke zorgen\nom mij...")
/*<727>*/ 			story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */] = true;
/*<725>*/ 			switch (adventure_pouch_has(5 0x0005)) {
          			  case 0:
/*<726>*/ 				printf(/* textboxtype: 0, unk: 0, line: 143 */ "<0x10009:0x00090509>Je hebt het medicijn toch al bij je!\nWaarom zei je dat niet meteen? Die\n<color yellow<paddenstoelsporen>coloroff> zijn precies wat ik\nnodig heb!\nGeef die maar snel aan mij, dan is mijn\nLoftwing zo weer de oude! Dat heb je wel\nvoor me over, toch?\n[1-]Alsjeblieft.[2]Nee.")
/*<728>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_210
          				  case 1:
/*<737>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 4352, 'next': 729, 'param3': 13}
/*<729>*/ 					printf(/* textboxtype: 0, unk: 1, line: 145 */ "Nee? Hm... Kun je dan op zijn minst mijn\nbroer zoeken en hem vertellen wat er hier\naan de hand is?")
          				}
          			  case 1:
/*<187>*/ 				switch (story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */]) {
          				  case 0:
/*<193>*/ 					printf(/* textboxtype: 0, unk: 0, line: 146 */ "Huh? O ja? Je hebt hem al gesproken?\nDat maakt het allemaal nog makkelijker\ndan.")
          					flw_194:
/*<194>*/ 					printf(/* textboxtype: 1, unk: 0, line: 147 */ "Ik wacht hier op je met mijn Loftwing.\nKom snel weer terug!")
          				  case 1:
          					goto flw_194
          				}
          			}
          		  case 1:
/*<191>*/ 			printf(/* textboxtype: 1, unk: 0, line: 141 */ "<0x10009:0x000c1513>Wat?! Jij... Jij monster!\n\n\n\n<0x10009:0x000b0409>Je maakt een grapje, toch?")
          			goto flw_192
          		}
          	}
          }

          void entrypoint_115_28() {
/*<797>*/ 	start()
/*<805>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<806>*/ 		printf(/* textboxtype: 0, unk: 1, line: 226 */ "<0x10009:0x000c0456>Hoorde jij ook al dat lawaai daarnet,\nergens buiten? Ik ben benieuwd wat\ndaar allemaal aan de hand was...")
          	  case 1:
/*<807>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
          			flw_86:
/*< 86>*/ 			printf(/* textboxtype: 0, unk: 1, line: 223 */ "<0x10009:0x00000001>Hé, <heroname>. Je ziet er met de dag\nknapper uit hoor, echt waar!\n\n\nJe ridderuniform staat je zo goed. En met\nje uniform zie je er uit als iemand bij wie\nje met al je problemen terecht kunt.")
          		  case 1:
/*<802>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<804>*/ 				printf(/* textboxtype: 1, unk: 0, line: 225 */ "<0x10009:0x00080e06>Wauw, je weet al hoe je de\nluchtbooraanval doet?!\n\n\n<0x10009:0x00080909>Dat is zó cool, <heroname>!\n<pause 30><0x10009:0x000c0400>Ik bedoel...<pause 20> eh, laat maar. Pimmus kan dat\nsowieso ook al!")
          			  case 1:
/*<801>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<803>*/ 					printf(/* textboxtype: 0, unk: 0, line: 224 */ "<0x10009:0x00000006>Huh, de Triforce?<pause 30> Wat is dat dan weer?")
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
/*<705>*/ 			printf(/* textboxtype: 1, unk: 0, line: 162 */ "<0x10009:0x00000001>Het eiland van de godin is verdwenen,\n<heroname>!\n\n\n<0x10009:0x00001513>En het was nog wel zo'n goede plek voor\nde vogels om uit te rusten...")
          		  case 1:
/*<808>*/ 			switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          			  case 0:
/*<809>*/ 				printf(/* textboxtype: 0, unk: 0, line: 161 */ "<0x10009:0x00000013>Wauw, ik heb het eiland nog nooit zo\nvoelen schudden. Wat zou er gebeurd\nzijn?")
          			  case 1:
/*<753>*/ 				switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          				  case 0:
/*<758>*/ 					printf(/* textboxtype: 0, unk: 1, line: 160 */ "<0x10009:0x00000001>Hé, <heroname>.\n\n\n\n<0x10009:0x000c0200>Ik had al gehoord dat je geleerd hebt hoe\nje met je Loftwing de legendarische\nluchtbooraanval kunt uitvoeren. Maar dat\nis dus echt zo?<pause 30> <0x10009:0x000c050b>Te gek!")
          				  case 1:
/*<752>*/ 					switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          					  case 0:
/*<757>*/ 						printf(/* textboxtype: 1, unk: 0, line: 159 */ "<0x10009:0x00000057>Wat?! De Triforce?! Ja, nee, nog nooit\nvan gehoord...\n\n\nHeb je de rector van de ridderacademie\ner al over verteld?")
          					  case 1:
/*<751>*/ 						switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          						  case 0:
          							flw_754:
/*<754>*/ 							printf(/* textboxtype: 1, unk: 0, line: 156 */ "<0x10009:0x00000001>O, hoi, <heroname>. Waar is je\nvriendin van de ridderacademie? Je weet\nwel, Zelda<pause 5>.<pause 5>.<pause 5>.<pause 5> Zo heet ze toch?\n\nIk heb jullie al zo lang niet meer samen\ngezien. Hebben jullie soms ruzie over\niets?")
          						  case 1:
/*<748>*/ 							switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          							  case 0:
/*<756>*/ 								printf(/* textboxtype: 0, unk: 0, line: 158 */ "<0x10009:0x00000013>Het leek zo net heel even of heel de lucht\nkort in duister gehuld werd. Ik vraag me\naf wat zoiets kan veroorzaken...")
          							  case 1:
/*<839>*/ 								switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          								  case 0:
          									goto flw_754
          								  case 1:
/*<750>*/ 									switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          									  case 0:
/*<755>*/ 										printf(/* textboxtype: 0, unk: 1, line: 157 */ "<0x10009:0x00000001>Hé, <heroname>.\n\n\n\n<0x10009:0x00110057>Je zoekt <color red<twee wervelende wieken>coloroff>?\n\n\n\n<0x10009:0x00010000>Dat moeten wel de wieken van de\n<color red<windmolens>coloroff> zijn, denk ik? Wat anders?")
          									  case 1:
/*<749>*/ 										switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          										  case 0:
          											goto flw_754
          										  case 1:
/*<218>*/ 											printf(/* textboxtype: 0, unk: 0, line: 155 */ "<0x10009:0x0000000b>O, <heroname>. Dank je voor alles dat\nje voor ons gedaan hebt!\n\n\n<0x10009:0x00000400>Mijn Loftwing is weer helemaal in orde.\nIk ben je enorm dankbaar.")
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
/*<760>*/ 		printf(/* textboxtype: 0, unk: 0, line: 155 */ "<0x10009:0x0000000b>O, <heroname>. Dank je voor alles dat\nje voor ons gedaan hebt!\n\n\n<0x10009:0x00000400>Mijn Loftwing is weer helemaal in orde.\nIk ben je enorm dankbaar.")
/*<761>*/ 		story_flags[1082 /* us: 805A9B53 0x01, jp: 805ACDD3 0x01 */] = true;
          	}
          }

          void entrypoint_115_12() {
/*< 28>*/ 	start()
/*<654>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 673, 'param3': 32}
/*<673>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 29, 'param3': 24}
/*< 29>*/ 	printf(/* textboxtype: 0, unk: 1, line: 163 */ "Woooooooeh...")
/*<106>*/ 	set_camera(3, 0)
/*<653>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 674, 'param3': 17}
/*<674>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 106, 'next': 107, 'param3': 24}
/*<107>*/ 	printf(/* textboxtype: 0, unk: 0, line: 164 */ "Woooooeh... Iemand... Alsjeblieft, kan\niemand me helpen?")
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
/*<506>*/ 			printf(/* textboxtype: 0, unk: 0, line: 167 */ "<0x10009:0x00000001>Vergeet dat papier alsjeblieft...\nDaaaag...")
/*<509>*/ 			story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          			flw_507:
/*<507>*/ 			scene_flags[0 'Skyloft'][65 /* 0x9 02 */] = false;
          		  case 1:
/*<677>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 505, 'param3': 24}
/*<505>*/ 			printf(/* textboxtype: 0, unk: 1, line: 166 */ "Waaah... <color red<Papier>coloroff>! Je hebt me wat <color red<papier\n>coloroff>gebracht!\n\n\nIk doe de deur open... Kom binnennn...")
/*<508>*/ 			story_flags[548 /* us: 805A9B17 0x20, jp: 805ACD97 0x20 */] = true;
/*<709>*/ 			story_flags[549 /* us: 805A9B17 0x40, jp: 805ACD97 0x40 */] = true;
          			goto flw_507
          		}
          	  case 1:
/*<675>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 502, 'param3': 24}
/*<502>*/ 		printf(/* textboxtype: 1, unk: 0, line: 165 */ "Woooeh... <color red<Papier>coloroff>...\n\n\n\nAlsjeblieft... Breng me <color red<papier>coloroff>, kan\niemand... <color red<papier brengen>coloroff>...\n\n\n<color red<Wat voor papier dan ook>coloroff>... Woooeh...")
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
/*<142>*/ 			printf(/* textboxtype: 0, unk: 0, line: 185 */ "<0x10009:0x00001b1b>Idioot! Wat dacht je wel niet? Dit is niet\nzomaar wat papier! Het is een <color red<brief>coloroff>! En\neen heel speciale brief bovendien!\n\n<0x10009:0x00172500>Ik heb mijn hart uitgestort over dat\nvel papier. Het is een beetje een soort...\nTja, je zou het een liefdesbrief kunnen\nnoemen, ja.\n<0x10009:0x00171800>En daarom ga jij niet, in geen enkel\ngeval, NOOIT deze brief als toiletpapier\nlaten gebruiken! Begrepen?!")
/*<169>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 172, 'param3': 13}
/*<172>*/ 			wait_frames(30)
/*<167>*/ 			printf(/* textboxtype: 1, unk: 0, line: 186 */ "Dus, luister goed! de persoon aan wie je\ndeze brief moet geven is een meisje... Een\nouderejaars. Ze heet <color blue<Karane>coloroff>.\n\n<0x10009:0x00010c11>Je weet wie ik bedoel, toch? Het meisje\nmet de <color red<ronde hoed>coloroff>. Ze is zo, ZO lief. Je\nweet wel.\n\n<0x10009:0x00171800>O, en denk er niet over om per ongeluk de\nbrief aan iemand anders te geven... Zoals\ndie <color red<rare figuur op het toilet>coloroff>! Beloof het!")
/*<170>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 549, 'param3': 13}
/*<549>*/ 			wait_frames(45)
/*<168>*/ 			printf(/* textboxtype: 0, unk: 1, line: 187 */ "Hier is de brief. Ik reken erop dat je er\ngoed mee omgaat. Niet stiekem lezen wat\nerin staat! Begrepen?!")
/*<710>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 109, 'next': 165, 'param3': 24}
/*<165>*/ 			story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */] = true;
/*<166>*/ 			give_item(158 0x9E);
/*<164>*/ 			printf(/* textboxtype: 0, unk: 0, line: 188 */ "Ik reken echt op je, <heroname>! Als\nje dit niet verpest, laat ik je misschien wel\nm'n hulpje worden! Dus snel nu, bezorg\ndie brief!")
/*<550>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<139>*/ 			switch (zone_temp_flags[10 /* 0x0 04 */]) {
          			  case 0:
/*<160>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 3072, 'next': 108, 'param3': 13}
/*<108>*/ 				printf(/* textboxtype: 1, unk: 0, line: 183 */ "<0x10009:0x00000008>Huh? Wat is er? Waarom keek je nu net\nnaar het toilet?")
/*<162>*/ 				{'type': 'type3', 'subType': 4, 'param1': 23, 'param2': 6144, 'next': 161, 'param3': 13}
/*<161>*/ 				printf(/* textboxtype: 0, unk: 1, line: 184 */ "Wat? Er is 's nachts iemand op het toilet\ndie om papier vraagt?")
/*<143>*/ 				zone_temp_flags[11 /* 0x0 08 */] = true;
          			  case 1:
/*< 32>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 135, 'param3': 31}
/*<135>*/ 				make_actor_do_something(1, 0)
/*<155>*/ 				{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4608, 'next': 34, 'param3': 13}
/*< 34>*/ 				printf(/* textboxtype: 1, unk: 0, line: 177 */ "Hmm... Zal ik hem aan haar geven?\nOf misschien toch maar niet?")
/*<136>*/ 				make_actor_do_something(2, 0)
/*<672>*/ 				{'type': 'type3', 'subType': 4, 'param1': 20, 'param2': 4889, 'next': 35, 'param3': 13}
/*< 35>*/ 				printf(/* textboxtype: 0, unk: 1, line: 178 */ "Waaah! <0x30001:0x><heroname>, wat doe jij hier?!\nLaat me niet zo schrikken!\n\n\n<0x10009:0x00171800>Ik zit hier met een serieus dilemma, hoor\nje? En je zorgt alleen maar voor\nafleiding!\n[1-]Een dilemma?[2-]Kan ik helpen?")
/*<156>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 3072, 'next': 37, 'param3': 13}
/*< 37>*/ 				switch (choice(2)) {
          				  case 0:
/*< 36>*/ 					printf(/* textboxtype: 0, unk: 0, line: 179 */ "Wat? Je wilt er meer over weten?\n\n\n\n<0x10009:0x0000001c>Hmpf! Normaal gesproken zou ik dit\nsoort dingen nooit met iemand als jij\nbespreken, maar in deze tijden van nood\nheb ik geen keus...")
          					flw_157:
/*<157>*/ 					{'type': 'type3', 'subType': 4, 'param1': 23, 'param2': 6144, 'next': 39, 'param3': 13}
/*< 39>*/ 					printf(/* textboxtype: 0, unk: 1, line: 181 */ "Hmmm, eigenlijk ben jij de ideale\npersoon om me hiermee te helpen.\nJe bent tenslotte al zo succesvol bij\nde dames...\nBah, jakkes. Hoe ga ik de vieze smaak\nvan dat compliment ooit uit m'n mond\nkrijgen? Maar goed, dat komt wel.\n<0x30001:0x><heroname>! Ik heb een taak voor je!")
/*<159>*/ 					{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 171, 'param3': 13}
/*<171>*/ 					wait_frames(45)
/*<158>*/ 					printf(/* textboxtype: 0, unk: 0, line: 182 */ "Luister goed... Je opdracht is om dit stuk\n<color red<papier >coloroff>naar een speciaal iemand te\nbrengen. Zorg dat je het bij de JUISTE\nPERSOON bezorgt.")
/*<140>*/ 					zone_temp_flags[10 /* 0x0 04 */] = true;
          				  case 1:
/*< 38>*/ 					printf(/* textboxtype: 1, unk: 0, line: 180 */ "Huh? Meen je dat?!\n\n\n\n<0x10009:0x0000001c>Grrrah... Ik zou iemand als jij normaal\nnooit om hulp vragen... Maar het lijkt\nerop dat ik geen keus heb...")
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
/*< 42>*/ 		printf(/* textboxtype: 0, unk: 0, line: 167 */ "<0x10009:0x00000001>Vergeet dat papier alsjeblieft...\nDaaaag...")
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
/*< 44>*/ 		printf(/* textboxtype: 0, unk: 0, line: 167 */ "<0x10009:0x00000001>Vergeet dat papier alsjeblieft...\nDaaaag...")
/*<138>*/ 		make_actor_do_something(1, 0)
/*< 45>*/ 		story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          	  case 1:
/*<131>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 31}
/*<144>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4, 'param2': 1, 'next': 154, 'param3': 13}
/*<154>*/ 		wait_frames(45)
/*< 46>*/ 		printf(/* textboxtype: 1, unk: 0, line: 168 */ "Woooeh...<color red< Papier>coloroff>... Ik heb <color red<papier>coloroff> nodig...\n\n\n\nIk ben echt niet boos of zooo... <color red<Ik heb\ngewoon papier nodig>coloroff>...\n[1-]Brief geven.[2]Niet geven.")
/*< 47>*/ 		switch (choice(2)) {
          		  case 0:
/*< 49>*/ 			printf(/* textboxtype: 0, unk: 0, line: 170 */ "<0x10009:0x000b0004>Huh? Je komt me papier brengen?\nO, ik ben zo blij...")
/*<146>*/ 			{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 0, 'next': 511, 'param3': 13}
/*<511>*/ 			wait_frames(45)
/*<145>*/ 			printf(/* textboxtype: 1, unk: 0, line: 171 */ "Maar... dit is iemands brief... Mag ik die\necht gebruiken?\n[1-]Ja.[2]Nee.")
/*< 50>*/ 			switch (choice(2)) {
          			  case 0:
/*<147>*/ 				{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 0, 'next': 711, 'param3': 13}
/*<711>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 109, 'next': 706, 'param3': 24}
/*<706>*/ 				make_actor_do_something(3, 0)
/*<517>*/ 				set_camera(8, 0)
/*<516>*/ 				wait_frames(30)
/*<153>*/ 				printf(/* textboxtype: 0, unk: 1, line: 172 */ "<0x10009:0x00000002>Dank je... Ik zal heel voorzichtig zijn...\n\n\n\nMaar ik ben heel verlegen... Dus vraag me\nniet waar ik het papier voor nodig heb...\n\n\nHopelijk tot snel... O, goede ziel...")
/*<514>*/ 				make_actor_do_something(1, 0)
/*<513>*/ 				story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
/*<512>*/ 				story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */] = true;
/*<554>*/ 				story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */] = true;
/*<515>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
          				flw_48:
/*< 48>*/ 				printf(/* textboxtype: 0, unk: 1, line: 169 */ "<0x10009:0x00050003>Woooeh... Help... Papier...")
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
/*<149>*/ 		printf(/* textboxtype: 0, unk: 0, line: 176 */ "<0x10009:0x00000002>Ahhh... Mijn lief... Ik zal altijd bij je\nblijven... Hihi-hihi-hi...")
          	  case 1:
/*<824>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 527, 'param3': 31}
/*<527>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 152, 'param3': 32}
/*<152>*/ 		{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 526, 'param3': 13}
/*<526>*/ 		wait_frames(15)
/*<151>*/ 		printf(/* textboxtype: 0, unk: 0, line: 173 */ "<0x10009:0x00000004>Ahhh... Jij bent het weer, van die andere\nkeer...")
/*<524>*/ 		set_camera(9, 0)
/*<525>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 150, 'param3': 15}
/*<150>*/ 		printf(/* textboxtype: 1, unk: 0, line: 174 */ "<0x10009:0x00060002>Ik ben blij dat je terug bennnt... Dankzij\njou heb ik de liefde van mijn leven\nontmoet...\n\nJa, ik heb het over hem...\n\n\n\n<0x10009:0x000c0000>Het begon allemaal met die brief die je\nme hebt gegeven...\n\n\n<0x10009:0x00060000>Die schitterende, zoete liefdesverklaring,\ndaardoor ben ik nu hopeloos verliefd...")
/*<521>*/ 		printf(/* textboxtype: 0, unk: 1, line: 175 */ "<0x10009:0x00000002>Ahhh, mijn hart loopt over van gevoelens\nvoor hem... Ik voel me zo blij, zo\nopgewekt, zo vol leven...")
/*<723>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 522, 'param3': 42}
/*<522>*/ 		give_gratitude_crystals();
/*<523>*/ 		set_camera(-1, 0)
/*<658>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 0, 'next': 519, 'param3': 13}
/*<519>*/ 		printf(/* textboxtype: 0, unk: 0, line: 176 */ "<0x10009:0x00000002>Ahhh... Mijn lief... Ik zal altijd bij je\nblijven... Hihi-hihi-hi...")
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
/*<363>*/ 	printf(/* textboxtype: 0, unk: 1, line: 244 */ "Jij hebt deze brief geschreven, toch?")
/*<366>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 364, 'param3': 16}
/*<364>*/ 	printf(/* textboxtype: 0, unk: 0, line: 245 */ "J-J-Ja...")
/*<622>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': -256, 'next': 367, 'param3': 13}
/*<367>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 5, 'next': 368, 'param3': 16}
/*<368>*/ 	printf(/* textboxtype: 1, unk: 0, line: 246 */ "<0x10009:0x14000009>Hihihi. Het was echt een heel mooie brief.\nDank je daarvoor!")
/*<370>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 369, 'param3': 16}
/*<369>*/ 	printf(/* textboxtype: 0, unk: 1, line: 247 */ "<0x10009:0x05000011>Z-Zo mooi was die brief nou ook weer\nniet...")
/*<371>*/ 	set_camera(12, 0)
/*<375>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1301, 'param2': 3072, 'next': 373, 'param3': 13}
/*<373>*/ 	printf(/* textboxtype: 0, unk: 0, line: 248 */ "En... W-Wat is je antwoord?")
/*<376>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 5, 'next': 374, 'param3': 16}
/*<374>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5131, 'param2': -256, 'next': 372, 'param3': 13}
/*<372>*/ 	printf(/* textboxtype: 1, unk: 0, line: 249 */ "<0x10009:0x14000012>Mijn antwoord? O, ja. Mijn antwoord...")
/*<377>*/ 	set_camera(13, 0)
/*<623>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5121, 'param2': 256, 'next': 380, 'param3': 13}
/*<380>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 274, 'next': 601, 'param3': 15}
/*<601>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 381, 'param3': 16}
/*<381>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1288, 'param2': 3328, 'next': 378, 'param3': 13}
/*<378>*/ 	printf(/* textboxtype: 0, unk: 1, line: 250 */ "<0x10009:0x05002519>Ach, toe! Zullen we samen iets afspreken?")
/*<382>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': 256, 'next': 602, 'param3': 13}
/*<602>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 551, 'param3': 50}
/*<551>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4609, 'param2': 3074, 'next': 379, 'param3': 13}
/*<379>*/ 	printf(/* textboxtype: 0, unk: 0, line: 251 */ "Stop!")
/*<383>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 18, 'next': 384, 'param3': 17}
/*<384>*/ 	set_camera(14, 0)
/*<385>*/ 	wait_frames(45)
/*<386>*/ 	set_camera(19, 0)
/*<388>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4625, 'param2': 3072, 'next': 387, 'param3': 13}
/*<387>*/ 	printf(/* textboxtype: 1, unk: 0, line: 252 */ "Je moet mij als vriend kiezen! Eh... Ik,\neh... Ik bedoel... Het lijkt me leuk om een\nkeer samen iets te gaan doen.")
/*<391>*/ 	set_camera(15, 0)
/*<648>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4609, 'param2': 256, 'next': 624, 'param3': 13}
/*<624>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': -256, 'next': 603, 'param3': 13}
/*<603>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 99, 'next': 389, 'param3': 50}
/*<389>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1306, 'param2': 6912, 'next': 390, 'param3': 13}
/*<390>*/ 	printf(/* textboxtype: 0, unk: 1, line: 253 */ "<0x10009:0x05001b09>Wat? Ho, eens even! Waar denk je dat\nje mee bezig bent?!")
/*<604>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 99, 'next': 392, 'param3': 50}
/*<392>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5140, 'param2': 2304, 'next': 393, 'param3': 13}
/*<393>*/ 	printf(/* textboxtype: 0, unk: 0, line: 254 */ "Nouuu...<0x10009:0x14000900> Ik wil graag... met Pimmus' wat\nafspreken.")
/*<649>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 99, 'next': 650, 'param3': 50}
/*<650>*/ 	printf(/* textboxtype: 1, unk: 0, line: 255 */ "<0x10009:0x05150c10>Ha! Hoor je dat?! Ik wist wel dat ze\nmij zou kiezen! Ze kijkt al weken lang\nnaar niemand anders dan mij! Eh,\nwacht eens...")
/*<394>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 629, 'param3': 17}
/*<629>*/ 	printf(/* textboxtype: 0, unk: 1, line: 256 */ "<0x10009:0x05111d1d>Huh? Wacht... Echt?!")
/*<630>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': 0, 'next': 620, 'param3': 13}
/*<620>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 274, 'next': 395, 'param3': 15}
/*<395>*/ 	set_camera(14, 0)
/*<628>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 397, 'param3': 17}
/*<397>*/ 	{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 18, 'next': 396, 'param3': 14}
/*<396>*/ 	wait_frames(10)
/*<605>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 99, 'next': 398, 'param3': 50}
/*<398>*/ 	printf(/* textboxtype: 0, unk: 0, line: 257 */ "<0x10009:0x1201ff00>Je kiest echt voor mij?")
/*<606>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 399, 'param3': 50}
/*<399>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5140, 'param2': 2323, 'next': 400, 'param3': 13}
/*<400>*/ 	printf(/* textboxtype: 1, unk: 0, line: 258 */ "Ja! <0x10009:0x14000900>Ik ben zo blij. Dank je, dank je wel...")
/*<632>*/ 	set_camera(16, 0)
/*<636>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5121, 'param2': 256, 'next': 635, 'param3': 13}
/*<635>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1306, 'param2': 7936, 'next': 631, 'param3': 13}
/*<631>*/ 	printf(/* textboxtype: 0, unk: 1, line: 259 */ "<0x10009:0x05001d17>Dit kan niet waar zijn...")
/*<634>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1293, 'param2': 7936, 'next': 633, 'param3': 13}
/*<633>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 5, 'next': 639, 'param3': 14}
/*<639>*/ 	wait_frames(1)
/*<638>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 261, 'next': 637, 'param3': 15}
/*<637>*/ 	printf(/* textboxtype: 0, unk: 0, line: 260 */ "<0x10009:0x05000018>Graaarghhhh!!!")
/*<626>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 99, 'next': 625, 'param3': 50}
/*<625>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 5, 'next': 407, 'param3': 17}
/*<407>*/ 	set_camera(17, 0)
/*<619>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1293, 'param2': 1024, 'next': 618, 'param3': 13}
/*<618>*/ 	{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 5, 'next': 552, 'param3': 14}
/*<552>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4625, 'param2': 1024, 'next': 401, 'param3': 13}
/*<401>*/ 	printf(/* textboxtype: 1, unk: 0, line: 261 */ "<0x10009:0x12000001><0x30001:0x><heroname>!")
/*<402>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 100, 'next': 403, 'param3': 16}
/*<403>*/ 	set_camera(18, 0)
/*<643>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4616, 'param2': 1024, 'next': 640, 'param3': 13}
/*<640>*/ 	printf(/* textboxtype: 0, unk: 1, line: 262 */ "Toen je me van die brief vertelde,\nbesefte ik me opeens dat ik op haar...\nverliefd ben.\n\n<0x10009:0x12090c00>Ik dacht bij mezelf: ik mag niemand\ntussen ons laten komen!\n\n\n<0x10009:0x12010400>Als je me niet over die brief verteld had,\ndan had ik zelf misschien wel nooit\ndoorgehad wat ik voor haar voel.\n\n<0x10009:0x1208000b>Ik ben je enorm dankbaar. Ik denk niet\ndat ik je hier ooit genoeg voor kan\nbedanken!")
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
/*<540>*/ 				printf(/* textboxtype: 1, unk: 0, line: 204 */ "<0x10009:0x001b1f1b>Sinds je het verpest hebt met die brief,\nheb ik vreselijke nachtmerries en kan ik\nniet meer slapen! Er is iets vreselijks met\nme aan de hand, of niet?!\nIs dat bed dan echt vervloekt? Misschien\nis het de wraak van <color blue<Ganderd>coloroff>?! Je moet\nme helpen, <heroname>!")
          			  case 1:
/*<538>*/ 				printf(/* textboxtype: 0, unk: 0, line: 203 */ "<0x10009:0x001b1f17>Wat wil je, <heroname>?! Denk maar\nniet dat ik het al vergeten ben!\n\n\nEn sinds je het verpest hebt met die brief,\nheb ik vreselijke nachtmerries en kan ik\nniet meer slapen! Mijn pech houdt ook\nmaar niet op!\nWat is er toch met me aan de hand?! Zou\ndat bed vervloekt zijn? Misschien is het\nde vloek van <color blue<Ganderd>coloroff>? <0x10009:0x001c1a18>Je moet me\nhelpen, <heroname>, alsjeblieft!")
/*<539>*/ 				zone_temp_flags[0 /* 0x1 01 */] = true;
          			}
          		  case 1:
/*<569>*/ 			{'type': 'type3', 'subType': 4, 'param1': 27, 'param2': 7936, 'next': 102, 'param3': 13}
/*<102>*/ 			printf(/* textboxtype: 0, unk: 1, line: 205 */ "<0x10009:0x00000017>Het is voorbij... Het is allemaal voorbij...\n\n\n\n<0x10009:0x001c1f00>Wat nu weer, <heroname>? Kom je me\nuitlachen nu ik er zo slecht aan toe ben?\nLaat me met rust!")
          		}
          	  case 1:
/*<825>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 685, 'param3': 31}
/*<685>*/ 		printf(/* textboxtype: 0, unk: 1, line: 202 */ "<0x10009:0x001b1f17>Wat moet je van me, <heroname>?!\nO, het doet zo'n pijn...\n\n\n<0x10009:0x001c1f00>Ik weet niet wie dat was op het toilet, aan\nwie je mijn brief gegeven hebt, maar ik\nvoel me zo slecht door het idee dat\niemand die brief gelezen heeft...\nIk kan het gewoon niet geloven! Aan wie\nheb je die brief eigenlijk gegeven?!")
          	}
          }

