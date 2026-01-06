          void entrypoint_402_17() {
/*< 38>*/ 	start()
/*< 39>*/ 	printf(/* textboxtype: 1, unk: 0, line: 63 */ "Ich habe Angst<pause 5>.<pause 5>.<pause 5>.\n\n\n\n<0x10009:0x00070000>Aber wenn man es genau nimmt,\nleben wir ja alle bereits nicht mehr.\n\n\n<0x10009:0x00070000>Auch ich bin nur wegen des Steins\nder Zeit in meinem Boot an diesen\nOrt gelangt...\n<0x10009:0x00070000>Irgendwie beruhigt mich das...\nAlso, <heroname>!\nSchau mal, ob du mein Schiff findest!\n<0x10009:0x00070000>Ich warte hier...")
/*< 51>*/ 	story_flags[280 /* us: 805A9AFB 0x04, jp: 805ACD7B 0x04 */] = true;
/*< 85>*/ 	scene_flags[8 'Lanayru Sand Sea'][47 /* 0x4 80 */] = true;
          }

          void entrypoint_402_51() {
/*<116>*/ 	start()
/*<121>*/ 	printf(/* textboxtype: 0, unk: 2, line: 97 */ "Zur Werft")
          }

          void entrypoint_402_18() {
/*< 74>*/ 	start()
/*<147>*/ 	printf(/* textboxtype: 0, unk: 0, line: 65 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu berichten.")
/*<167>*/ 	set_camera(3, 0)
/*<148>*/ 	printf(/* textboxtype: 1, unk: 2, line: 66 */ "Es besteht eine Wahrscheinlichkeit von\n60 %, dass dieser Mast und dieses Segel\nTeile des Schiffs waren, in dem <color red<Nayrus\nFlamme >coloroff>ruht.")
/*<168>*/ 	set_camera(-1, 0)
/*< 75>*/ 	printf(/* textboxtype: 0, unk: 1, line: 64 */ "Von jetzt an kannst du das Schiff, in dem <color red<<sound 4>Nayrus\nFlamme>coloroff> ruht, mit der <color red<Aurasuche >coloroff>aufspüren.")
/*< 76>*/ 	story_flags[275 /* us: 805A9AF8 0x20, jp: 805ACD78 0x20 */] = true;
/*< 80>*/ 	story_flags[271 /* us: 805A9AF8 0x02, jp: 805ACD78 0x02 */] = true;
/*<279>*/ 	open_dowsing_wheel(7)
/*<278>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<149>*/ 	scene_flags[8 'Lanayru Sand Sea'][112 /* 0xF 01 */] = true;
/*<201>*/ 	story_flags[647 /* us: 805A9B1C 0x01, jp: 805ACD9C 0x01 */] = true;
          }

          void entrypoint_402_52() {
/*<117>*/ 	start()
/*<123>*/ 	printf(/* textboxtype: 0, unk: 0, line: 98 */ "Tritt an die Lore heran und\ndrücke (A), um hineinzusteigen.")
          }

          void entrypoint_402_01() {
/*<  1>*/ 	start()
          	printf(/* textboxtype: 0, unk: 20, line: 4 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_402_19() {
/*< 77>*/ 	start()
/*<272>*/ 	printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x10012:0x0000000b>Gebieter, es scheint, als sei dieser Ort\nin den Jahren zu einem Hort des Bösen\nverkommen...\n\nDie Wahrscheinlichkeit, hier einen\nAnhaltspunkt zum Schiff zu finden,\nscheint mir gering.")
/*< 79>*/ 	story_flags[270 /* us: 805A9AF8 0x01, jp: 805ACD78 0x01 */] = true;
/*<239>*/ 	story_flags[741 /* us: 805A9B26 0x20, jp: 805ACDA6 0x20 */] = true;
          }

          void entrypoint_402_53() {
/*<118>*/ 	start()
/*<122>*/ 	printf(/* textboxtype: 2, unk: 0, line: 99 */ "Balanciere die Lore in Kurven aus,\nindem du deinen Körper beugst.")
          }

          void entrypoint_402_70() {
/*<245>*/ 	start()
/*<250>*/ 	printf(/* textboxtype: 0, unk: 0, line: 110 */ "An den Kapitän:\nVielen Dank für alles!\nDeine Mannschaft")
          }

          void entrypoint_402_02() {
/*<  2>*/ 	start()
/*< 21>*/ 	switch (story_flags[264 /* us: 805A9AF9 0x04, jp: 805ACD79 0x04 */]) {
          	  case 0:
/*< 22>*/ 		switch (story_flags[273 /* us: 805A9AF8 0x08, jp: 805ACD78 0x08 */]) {
          		  case 0:
/*<220>*/ 			switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          			  case 0:
/*<221>*/ 				switch (zone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<223>*/ 					printf(/* textboxtype: 0, unk: 0, line: 20 */ "Auf geht's!\nDu willst doch schließlich deine\nFreundin finden, oder?\n\nWo soll die Reise denn hingehen?\n[1-]Zum Meer[2-]Zur Sandgaleone[3]Nicht\nablegen")
          					flw_263:
/*<263>*/ 					switch (choice(3)) {
          					  case 0:
/*<264>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00070000>Auf geht's, bzzz!")
/*<267>*/ 						changeScene(2, 0) // 
          					  case 1:
/*<265>*/ 						printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00070000>Gut, ich bringe dich zu meinem Schiff!")
/*<266>*/ 						changeScene(4, 0) // 
          					  case 2:
/*<268>*/ 						printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x00070000>Komm doch wieder mal vorbei, wenn du\nZeit hast!")
          					}
          				  case 1:
/*<281>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*<280>*/ 						switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          						  case 0:
          							flw_222:
/*<222>*/ 							printf(/* textboxtype: 1, unk: 0, line: 21 */ "Da bist du ja!\nHast du deine Freundin nicht gefunden?\n\n\nWo soll die Reise denn hingehen?\n[1-]Zum Meer[2-]Zur Sandgaleone[3]Nicht\nablegen")
          							goto flw_263
          						  case 1:
/*<292>*/ 							switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          							  case 0:
          								flw_282:
/*<282>*/ 								printf(/* textboxtype: 0, unk: 1, line: 22 */ "Du suchst einen Drachen?\n\n\n\n<color blue<<0x10009:0x00070000>>coloroff>Der <color blue<Donnerdrache>coloroff> lebt südlich der\n<color blue<Ranelle-Höhle>coloroff>. Über einen anderen\nDrachen kann ich dir nichts sagen...\n\n<0x10009:0x00070000>Willst du mit dem Boot zu einem\nbestimmten Ort fahren?\n[1-]Aufs Meer![2-]Zur Sandgaleone.[3]Ich bleibe\nhier!")
          								goto flw_263
          							  case 1:
/*<293>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 294, 'param3': 31}
/*<294>*/ 								story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          								goto flw_282
          							}
          						}
          					  case 1:
          						goto flw_222
          					}
          				}
          			  case 1:
          				flw_150:
/*<150>*/ 				switch (story_flags[272 /* us: 805A9AF8 0x04, jp: 805ACD78 0x04 */]) {
          				  case 0:
/*< 27>*/ 					printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00070000>Sollen wir ablegen?\n[1-]Zum Meer[2-]Zur Sandgaleone[3]Nicht\nablegen")
/*< 28>*/ 					switch (choice(3)) {
          					  case 0:
/*< 29>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00070000>Auf geht's, bzzz!")
/*< 33>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 31>*/ 						printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00070000>Gut, ich bringe dich zu meinem Schiff!")
/*< 32>*/ 						changeScene(0, 0) // 
          					  case 2:
/*< 30>*/ 						printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00070000>Dann beeil dich bitte!")
          					}
          				  case 1:
/*<155>*/ 					printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00070000>Sollen wir ablegen?\n[1-]Leinen los![2]Noch nicht!")
/*<154>*/ 					switch (choice(2)) {
          					  case 0:
/*<151>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00070000>Auf geht's, bzzz!")
/*<153>*/ 						changeScene(2, 0) // 
          					  case 1:
/*<152>*/ 						printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00070000>Dann beeil dich bitte!")
          					}
          				}
          			}
          		  case 1:
/*<135>*/ 			printf(/* textboxtype: 0, unk: 1, line: 13 */ "Wie? Hast du es dir anders überlegt?\n\n\n\nHilfst du mir, mein Schiff wieder\nzurückzuholen?\n[1-]Ja[2]Nein")
          			flw_134:
/*<134>*/ 			switch (choice(2)) {
          			  case 0:
/*< 26>*/ 				printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00070000>Wirklich? Nun, in diesem Fall...")
/*< 25>*/ 				printf(/* textboxtype: 1, unk: 0, line: 6 */ "<pause 10>.<pause 10>.<pause 10>.\nDie Landkarte, die du hast, ist nicht\nbesonders brauchbar.\n\n<0x10009:0x00070000>Um zur See zu fahren, benötigst du\neine richtige <color yellow<Seekarte>coloroff>!\n\n\nEine richtige <color yellow<Seekarte>coloroff> findest du in <color blue<meinem\nHaus>coloroff>. Lass uns deswegen zuerst dahin fahren!")
/*< 24>*/ 				story_flags[273 /* us: 805A9AF8 0x08, jp: 805ACD78 0x08 */] = true;
          				goto flw_150
          			  case 1:
/*<133>*/ 				printf(/* textboxtype: 1, unk: 1, line: 12 */ "<0x10009:0x00070000>Na, dann eben nicht!\n\n\n\nAber ohne Boot kommst du hier ganz sicher\nnicht weiter...")
          			}
          		}
          	  case 1:
/*< 23>*/ 		story_flags[264 /* us: 805A9AF9 0x04, jp: 805ACD79 0x04 */] = true;
/*<  3>*/ 		printf(/* textboxtype: 0, unk: 0, line: 5 */ "<pause 10>.<pause 10>.<pause 10>.\nWas bist du denn für einer, bzzz?\nBist du ein Mensch?\n\nWer ich bin? Also<pause 5>.<pause 5>.<pause 5>.\n\n\n\n<0x10009:0x00070000><sound 4>Ich bin <color blue<Boka>coloroff>, Kapitän des berühmt-berüchtigten\nSchiffes, das <color red<Nayrus Flamme >coloroff>beschützt!\n[1-]Nayrus Flamme?[2-]Ein Schiff?")
/*<208>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_212:
/*<212>*/ 			set_camera(13, 0)
/*<210>*/ 			printf(/* textboxtype: 0, unk: 0, line: 17 */ "<pause 10>.<pause 10>.<pause 10>.\n\n\n\nAn jenem stürmischen Tag<pause 5>.<pause 5>.<pause 5>.\nIch und meine Mannschaft waren auf\nunserem normalen Kurs.\nUnd dann<pause 5>.<pause 5>.<pause 5>.\nPlötzlich tauchten diese Piraten auf\nund griffen uns an!\nSie trachteten nach <color red<Nayrus Flamme>coloroff>!\n\nMeine Männer wurden gefangen\ngenommen, ich über Bord geworfen...")
/*<213>*/ 			set_camera(14, 0)
/*<211>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00070000>Hier fand ich mich dann wieder<pause 5>.<pause 5>.<pause 5>.")
/*<269>*/ 			set_camera(17, 0)
/*<270>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00070000>Danach bin ich unzählige Male mit diesem\nKahn hinausgefahren und habe nach meinem\nSchiff gesucht.")
/*<218>*/ 			set_camera(-1, 0)
/*<217>*/ 			printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00070000>Aber mein Schiff war verschwunden.<pause 5>.<pause 5>.\n\n\n\nIch bin mir sicher, dass es mit seiner\nSpezialfunktion verschwunden ist!\n[1-]Unsichtbar?[2-]Verschwunden?")
/*<216>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_209:
/*<209>*/ 				printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00070000>Um <color red<Nayrus Flamme >coloroff>zu beschützen, ist mein\nSchiff mit einem Tarnmechanismus\nausgerüstet<pause 5>.<pause 5>.<pause 5>.\n\nWas sagst du da? Du bist auf der Suche nach\n<color red<Nayrus Flamme>coloroff>?\n\n\nDu brauchst sie, um jemanden zu finden,\nder dir sehr wichtig ist<pause 5>.<pause 5>.<pause 5>.\n\n\n<0x10009:0x00070000>Dann solltest du mir helfen, mein Schiff und\nmeine Mannschaft zu finden.")
/*<214>*/ 				set_camera(15, 0)
/*<207>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "Wenn du mir helfen willst, lasse ich\ndich auf mein Boot. Wie sieht's aus?\n[1-]Klar![2]Nee.")
/*<215>*/ 				set_camera(-1, 0)
          				goto flw_134
          			  case 1:
          				goto flw_209
          			}
          		  case 1:
          			goto flw_212
          		}
          	}
          }

          void entrypoint_401_20() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf(/* textboxtype: 1, unk: 0, line: 69 */ "")
          }

          void entrypoint_402_54() {
/*<119>*/ 	start()
/*<124>*/ 	printf(/* textboxtype: 0, unk: 2, line: 100 */ "Bremse, wenn du zu schnell wirst,\nindem du (B) drückst.")
          }

          void entrypoint_402_71() {
/*<246>*/ 	start()
/*<251>*/ 	printf(/* textboxtype: 1, unk: 0, line: 111 */ "Lieber Papa,\nalles Gute auf der Arbeit!")
          }

          void entrypoint_402_03() {
/*< 12>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 0, unk: 20, line: 4 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_402_55() {
/*<145>*/ 	start()
/*<146>*/ 	printf(/* textboxtype: 0, unk: 0, line: 101 */ "Springe nach oben, um Hindernisse\nzu überwinden.")
          }

          void entrypoint_402_72() {
/*<254>*/ 	start()
/*<255>*/ 	printf(/* textboxtype: 2, unk: 0, line: 96 */ "Zum Pier")
          }

          void entrypoint_402_04() {
/*< 13>*/ 	start()
/*< 41>*/ 	switch (story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */]) {
          	  case 0:
/*< 42>*/ 		switch (story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */]) {
          		  case 0:
/*<284>*/ 			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          			  case 0:
/*<283>*/ 				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          				  case 0:
          					flw_44:
/*< 44>*/ 					printf(/* textboxtype: 1, unk: 0, line: 27 */ "Dieses Haus ist gefüllt mit\nErinnerungen an meine Familie.\n\n\nOb ich wohl eines Tages dorthin\nzurückkehren kann? Ich würde sie\nwirklich gerne wiedersehen.<pause 5>.<pause 5>.")
          					flw_46:
/*< 46>*/ 					printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00070000>Sollen wir ablegen?\n[1-]Auf geht's![2]Moment!")
          					flw_47:
/*< 47>*/ 					switch (choice(2)) {
          					  case 0:
/*< 49>*/ 						printf(/* textboxtype: 1, unk: 1, line: 30 */ "<0x10009:0x00070000>Brechen wir auf, bzzz!")
/*< 50>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 48>*/ 						printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00070000>Ach so...")
          					}
          				  case 1:
/*<295>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_285:
/*<285>*/ 						printf(/* textboxtype: 0, unk: 1, line: 28 */ "Du suchst einen Drachen?\n\n\n\n<color blue<<0x10009:0x00070000>>coloroff>Der <color blue<Donnerdrache>coloroff> lebt südlich der\n<color blue<Ranelle-Höhle>coloroff>. Über einen anderen\nDrachen kann ich dir nichts sagen...")
          						goto flw_46
          					  case 1:
/*<296>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 297, 'param3': 31}
/*<297>*/ 						story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          						goto flw_285
          					}
          				}
          			  case 1:
          				goto flw_44
          			}
          		  case 1:
/*< 43>*/ 			printf(/* textboxtype: 0, unk: 0, line: 26 */ "Du hast die <color yellow<Seekarte>coloroff> gefunden? Gut gemacht!\nJetzt macht die Seefahrt erst richtig Spaß!\nLass uns mein Schiff suchen, ja?")
/*< 45>*/ 			story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */] = true;
          			goto flw_46
          		}
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "Was ist denn?\nHol schnell die <color yellow<Seekarte>coloroff> aus meinem\nHaus, bzzz!\n\nOder willst du aufs Meer zurück?\n[1-]Zum Meer[2]Hierbleiben")
          		goto flw_47
          	}
          }

          void entrypoint_402_21() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10012:0x00000064>Hast du das gesehen?\nDas war mein Schiff!\n\n\nLos, verfolgen wir es! Und immer fest\ndraufhalten mit der Kanone!")
          }

          void entrypoint_402_56() {
/*<143>*/ 	start()
/*<144>*/ 	printf(/* textboxtype: 2, unk: 0, line: 102 */ "Endstation: Werft")
          }

          void entrypoint_402_05() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 1, unk: 0, line: 32 */ "Vielen Dank für deine Hilfe!\n\n\n\n<0x10009:0x00070000>Allerdings sieht mein Schiff ganz schön\nmitgenommen aus... Da steht uns viel\nArbeit bevor!\n\n<0x10009:0x00070000>Ich hoffe, dass auch du deine Freundin bald\nfinden wirst...\n\n\n<0x10009:0x00070000>Du kannst jederzeit wiederkommen,\nwenn du willst. Ich freue mich auf dich!\nBzzz!")
/*<137>*/ 	story_flags[815 /* us: 805A9B31 0x80, jp: 805ACDB1 0x80 */] = true;
/*<219>*/ 	zone_temp_flags[1 /* 0x1 02 */] = true;
          }

          void entrypoint_402_22() {
/*< 94>*/ 	start()
/*< 97>*/ 	printf(/* textboxtype: 0, unk: 0, line: 71 */ "Öffne jetzt mal die <color yellow<Seekarte>coloroff>, die du\nmitgebracht hast!")
/*<105>*/ 	{'type': 'type3', 'subType': 4, 'param1': 768, 'param2': 6, 'next': 192, 'param3': 30}
/*<192>*/ 	wait_frames(105)
/*<102>*/ 	story_flags[519 /* us: 805A9B15 0x01, jp: 805ACD95 0x01 */] = true;
/*<100>*/ 	printf(/* textboxtype: 1, unk: 0, line: 72 */ "Die Lage der <sound 4><color blue<Werft>coloroff> ist mit (X) markiert.")
/*<107>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 34}
/*<142>*/ 	printf(/* textboxtype: 0, unk: 0, line: 74 */ "<0x10009:0x00070000>Alle unsere Schiffe kommen aus der Werft.\nAuch meines wurde dort gebaut.\n\n\n<0x10009:0x00070000>Ich bin mir sicher, dass du dort einen\nHinweis auf den Aufenthaltsort meines\nSchiffes finden kannst!")
/*<110>*/ 	printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x00070000>Auf geht's!")
/*<112>*/ 	scene_flags[8 'Lanayru Sand Sea'][30 /* 0x2 40 */] = false;
/*<113>*/ 	scene_flags[8 'Lanayru Sand Sea'][31 /* 0x2 80 */] = true;
/*<259>*/ 	story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */] = true;
          }

          void entrypoint_402_57() {
/*<242>*/ 	start()
/*<247>*/ 	printf(/* textboxtype: 0, unk: 1, line: 103 */ "Vorsicht, vermehrt Angriffe von\nPiraten verzeichnet!")
          }

          void entrypoint_402_23() {
/*< 95>*/ 	start()
/*<256>*/ 	switch (story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */]) {
          	  case 0:
/*< 98>*/ 		printf(/* textboxtype: 1, unk: 0, line: 75 */ "Ich habe Angst<pause 5>.<pause 5>.<pause 5>.\n\n\n\nDer Boss der Piraten ist furchtbar stark und\nhat eine Menge Piraten an seiner Seite...\n\n\n<0x10009:0x00070000>Ich würde viel darum geben, ihn nie wieder\nsehen zu müssen<pause 5>.<pause 5>.<pause 5>.\n\n\n<0x10009:0x00070000>Aber ich mache es, um mein Schiff\nzurückzuerlangen!")
          		flw_106:
/*<106>*/ 		{'type': 'type3', 'subType': 4, 'param1': 512, 'param2': 0, 'next': 101, 'param3': 30}
/*<101>*/ 		printf(/* textboxtype: 0, unk: 1, line: 76 */ "Das <sound 4><color blue<Piratenversteck>coloroff> ist auf der Karte\nmit (X) markiert.")
/*<108>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 109, 'param3': 34}
/*<109>*/ 		printf(/* textboxtype: 0, unk: 0, line: 77 */ "<0x10009:0x00070000>Also los, brechen wir auf!")
/*<103>*/ 		story_flags[520 /* us: 805A9B15 0x02, jp: 805ACD95 0x02 */] = true;
/*<114>*/ 		scene_flags[8 'Lanayru Sand Sea'][31 /* 0x2 80 */] = false;
          	  case 1:
/*<258>*/ 		printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00070000>Hm, in der Werft ist kein Schiff.\nIn diesem Fall<pause 5>.<pause 5>.<pause 5>.\n\n\n<0x10009:0x00070000>Das ist zwar etwas gefährlich...\nAber wir sollten direkt zum Piratenversteck\nfahren!\n\n<0x10009:0x00070000>Der Boss der Piraten ist furchtbar stark und\nhat eine Menge Piraten an seiner Seite...\n\n\n<0x10009:0x00070000>Ich würde viel darum geben, ihn nie wieder\nsehen zu müssen<pause 5>.<pause 5>.<pause 5>.\n\n\n<0x10009:0x00070000>Aber ich mache es, um mein Schiff\nzurückzuerlangen!")
/*<257>*/ 		story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */] = true;
          		goto flw_106
          	}
          }

          void entrypoint_402_40() {
/*<169>*/ 	start()
/*<170>*/ 	printf(/* textboxtype: 0, unk: 1, line: 79 */ "<0x10012:0x00000001>Sieh nur, Gebieter.")
/*<178>*/ 	set_camera(8, 0)
/*<171>*/ 	printf(/* textboxtype: 0, unk: 0, line: 80 */ "Dieses Objekt hier ist eine <color yellow<<sound 4>Kugel der Zeit>coloroff>.\n\n\n\nAnders als Steine der Zeit kann man sie an\nverschiedene Orte bringen.")
/*<179>*/ 	set_camera(-1, 0)
          }

          void entrypoint_402_58() {
/*<243>*/ 	start()
/*<248>*/ 	printf(/* textboxtype: 0, unk: 0, line: 104 */ "Am Monatsende ist die\nLorenbahn wegen Inspektion\nden ganzen Tag geschlossen.")
          }

          void entrypoint_402_24() {
/*< 96>*/ 	start()
/*<261>*/ 	switch (story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */]) {
          	  case 0:
          		flw_99:
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00070000>Wollen wir wirklich dieses riesige Meer\nabsuchen?\n\n\n<0x10009:0x00070000>Mir bleibt nicht viel mehr übrig, als dir\nzu vertrauen...\n\n\n<0x10009:0x00070000>Vermutlich hat sich das Schiff getarnt.\nWenn wir es aber mit der Kanone<sound 4>\n<color green<treffen>coloroff>, wird es sichtbar werden!")
/*<104>*/ 		story_flags[521 /* us: 805A9B15 0x04, jp: 805ACD95 0x04 */] = true;
/*<260>*/ 		story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */] = true;
          	  case 1:
/*<262>*/ 		printf(/* textboxtype: 1, unk: 0, line: 51 */ "Auch im Piratenversteck haben wir mein Schiff\nnicht gefunden<pause 5>.<pause 5>.<pause 5>.\n\n\nHmmm...\nHast du irgendeinen Anhaltspunkt\nentdecken können?\n\n<0x10009:0x00070000>Du weißt, wo wir hinmüssen?\nDank der <color red<Aurasuche>coloroff>? Das ist ja stark!")
          		goto flw_99
          	}
          }

          void entrypoint_402_41() {
/*<172>*/ 	start()
/*<173>*/ 	printf(/* textboxtype: 0, unk: 1, line: 82 */ "Sieh nur, <0x10012:0x00000001>Gebieter.")
/*<176>*/ 	set_camera(9, 0)
/*<174>*/ 	printf(/* textboxtype: 0, unk: 0, line: 83 */ "Auf diesem Schiff ist Nayrus Flamme versteckt.\nDie Wahrscheinlichkeit, dass die Mannschaft\nebenfalls aus Robotern besteht, beträgt 90 %.")
/*<177>*/ 	set_camera(-1, 0)
/*<175>*/ 	printf(/* textboxtype: 1, unk: 0, line: 84 */ "Ich schätze, dass der Kapitän inmitten seiner\nMannschaft ein glückliches Leben gelebt hat.")
/*<237>*/ 	story_flags[738 /* us: 805A9B26 0x04, jp: 805ACDA6 0x04 */] = true;
/*<238>*/ 	story_flags[739 /* us: 805A9B26 0x08, jp: 805ACDA6 0x08 */] = true;
          }

          void entrypoint_402_59() {
/*<244>*/ 	start()
/*<249>*/ 	printf(/* textboxtype: 1, unk: 2, line: 105 */ "Wann ich den Plan für mein\nSchiff wohl fertig bekomme?")
          }

          void entrypoint_402_42() {
/*<180>*/ 	start()
/*<181>*/ 	printf(/* textboxtype: 0, unk: 1, line: 85 */ "Sieh nur, <0x10012:0x00000001>Gebieter.")
/*<190>*/ 	set_camera(10, 0)
/*<186>*/ 	printf(/* textboxtype: 0, unk: 0, line: 86 */ "In dieser Vorrichtung befindet sich kein\n<color red<Stein der Zeit>coloroff>...\n\n\nJedoch besteht eine Wahrscheinlichkeit von 95 %,\ndass es ein ähnlicher Mechanismus wie der in der\n<color blue<Wüste Ranelle >coloroff>ist.")
/*<191>*/ 	set_camera(-1, 0)
/*<187>*/ 	printf(/* textboxtype: 1, unk: 0, line: 87 */ "Ich schätze, dass auch diese Vorrichtung von\neinem <sound 4><color red<Stein der Zeit >coloroff>angetrieben wird.")
          }

          void entrypoint_402_25() {
/*<252>*/ 	start()
/*<253>*/ 	printf(/* textboxtype: 0, unk: 20, line: 4 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_402_09() {
/*<  4>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 0, unk: 20, line: 4 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_402_60() {
/*<125>*/ 	start()
/*<128>*/ 	printf(/* textboxtype: 74, unk: 1, line: 106 */ "<0x10005:0x000f0000><0x10012:0x0000000b>Gebieter, ich habe dir etwas zu berichten.\n\n\n\n<0x10005:0x003c0000>Dies ist das <color blue<Ranelle-Sandmeer>coloroff>.\nFrüher war hier ein riesiger Ozean.")
          }

          void entrypoint_402_43() {
/*<182>*/ 	start()
/*<183>*/ 	printf(/* textboxtype: 0, unk: 1, line: 88 */ "<0x10012:0x00000001>Gebieter, wir sind im Inneren der Werft\nangekommen.")
/*<188>*/ 	set_camera(11, 0)
/*<184>*/ 	printf(/* textboxtype: 0, unk: 0, line: 89 */ "Nach all der Zeit ist auch hier alles von Sand bedeckt.")
/*<189>*/ 	set_camera(-1, 0)
/*<185>*/ 	printf(/* textboxtype: 1, unk: 0, line: 90 */ "Ich empfehle dir, im Sand nach Anhaltspunkten zum\nSchiff zu suchen.")
          }

          void entrypoint_402_61() {
/*<126>*/ 	start()
/*<129>*/ 	printf(/* textboxtype: 0, unk: 0, line: 107 */ "<0x10005:0x005a0000>Heute aber ist alles ausgetrocknet und mit\nSand bedeckt.")
          }

          void entrypoint_402_44() {
/*<224>*/ 	start()
/*<230>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 232, 'param3': 51}
/*<232>*/ 	set_camera(-1, 0)
/*<229>*/ 	printf(/* textboxtype: 0, unk: 1, line: 91 */ "<0x10012:0x00000001>Gebieter, ich muss dich ermahnen.\n\n\n\nAusruhen kannst du dich später. Jetzt solltest du\nzuerst nach der Seekarte suchen.")
/*<233>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 235, 'param3': 36}
/*<235>*/ 	story_flags[738 /* us: 805A9B26 0x04, jp: 805ACDA6 0x04 */] = true;
          }

          void entrypoint_402_10() {
/*<  5>*/ 	start()
/*< 64>*/ 	switch (story_flags[270 /* us: 805A9AF8 0x01, jp: 805ACD78 0x01 */]) {
          	  case 0:
/*<274>*/ 		switch (story_flags[275 /* us: 805A9AF8 0x20, jp: 805ACD78 0x20 */]) {
          		  case 0:
/*<287>*/ 			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          			  case 0:
/*<286>*/ 				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          				  case 0:
          					flw_275:
/*<275>*/ 					printf(/* textboxtype: 1, unk: 0, line: 39 */ "Ich weiß noch genau, wie mein Schiff hier\nfertiggestellt wurde. Das waren Zeiten.<pause 5>.<pause 5>.")
          					flw_67:
/*< 67>*/ 					printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00070000>Sollen wir ablegen?\n[1-]Auf geht's![2]Moment!")
          					flw_68:
/*< 68>*/ 					switch (choice(2)) {
          					  case 0:
/*< 70>*/ 						printf(/* textboxtype: 1, unk: 1, line: 30 */ "<0x10009:0x00070000>Brechen wir auf, bzzz!")
/*< 71>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 69>*/ 						printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00070000>Ach so...")
          					}
          				  case 1:
/*<301>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_288:
/*<288>*/ 						printf(/* textboxtype: 0, unk: 1, line: 28 */ "Du suchst einen Drachen?\n\n\n\n<color blue<<0x10009:0x00070000>>coloroff>Der <color blue<Donnerdrache>coloroff> lebt südlich der\n<color blue<Ranelle-Höhle>coloroff>. Über einen anderen\nDrachen kann ich dir nichts sagen...")
          						goto flw_67
          					  case 1:
/*<302>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 303, 'param3': 31}
/*<303>*/ 						story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          						goto flw_288
          					}
          				}
          			  case 1:
          				goto flw_275
          			}
          		  case 1:
/*< 65>*/ 			switch (story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */]) {
          			  case 0:
/*< 73>*/ 				printf(/* textboxtype: 0, unk: 1, line: 37 */ "Abgemacht!\nAuf zum <color blue<Piratenversteck>coloroff>!")
          				goto flw_67
          			  case 1:
/*< 66>*/ 				story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */] = true;
/*< 72>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00070000>Hm, hier ist kein Schiff? In diesem Fall<pause 5>.<pause 5>.<pause 5>.\n\n\n\n<0x10009:0x00070000>Das ist zwar etwas gefährlich...\nAber wir sollten direkt zum Piratenversteck\nfahren!\n\n<0x10009:0x00070000>Also, auf geht's!\n[1-]Los![2]Warte!")
          				goto flw_68
          			}
          		}
          	  case 1:
/*< 11>*/ 		printf(/* textboxtype: 0, unk: 0, line: 35 */ "Was hast du denn?\nDu wolltest doch die <color blue<Werft >coloroff>durchsuchen!\n\n\n<0x10009:0x00070000>Oder willst du aufs Meer?\n[1-]Zum Meer[2]Hierbleiben")
          		goto flw_68
          	}
          }

          void entrypoint_402_62() {
/*<127>*/ 	start()
/*<130>*/ 	printf(/* textboxtype: 1, unk: 2, line: 108 */ "<0x10005:0x005a0000>An diesem Ort befand sich früher ein Hafen.")
          }

          void entrypoint_402_45() {
/*<225>*/ 	start()
/*<231>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 226, 'param3': 51}
/*<226>*/ 	printf(/* textboxtype: 0, unk: 0, line: 92 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu berichten.")
/*<228>*/ 	set_camera(16, 0)
/*<227>*/ 	printf(/* textboxtype: 1, unk: 0, line: 93 */ "Ich spüre die Präsenz von Insekten im oberen\nStockwerk des Gebäudes.")
/*<234>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 236, 'param3': 36}
/*<236>*/ 	story_flags[740 /* us: 805A9B26 0x10, jp: 805ACDA6 0x10 */] = true;
          }

          void entrypoint_402_11() {
/*<  7>*/ 	start()
/*< 91>*/ 	switch (story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */]) {
          	  case 0:
/*< 90>*/ 		printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10012:0x00000064>Nein, da will ich nicht hin! Das ist viel\nzu gefährlich!\n\n\nLass uns jetzt zur <color blue<Werft>coloroff> fahren, ja?")
          	  case 1:
/*<  8>*/ 		printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10012:0x00000064>Da wollen wir nicht hin!\nWir müssen jetzt zu <color blue<meinem Haus >coloroff>fahren!")
          	}
          }

          void entrypoint_402_63() {
/*<131>*/ 	start()
/*<132>*/ 	printf(/* textboxtype: 0, unk: 1, line: 109 */ "<0x10005:0x003c0000>Es besteht eine Wahrscheinlichkeit von 90 %,\ndass wir die <color red<heilige Flamme >coloroff>hier irgendwo\nfinden werden.\n\n<0x10005:0x001e0000>Ich empfehle, deine Suche in diesem\nSandmeer fortzuführen.")
          }

          void entrypoint_402_46() {
/*<240>*/ 	start()
/*<241>*/ 	printf(/* textboxtype: 0, unk: 1, line: 94 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu berichten.\n\n\n\nDurch die Kraft der Kugel der Zeit hat sich hier\netwas verändert. Ich empfehle, einmal nachzusehen.")
          }

          void entrypoint_402_12() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "Endlich wieder auf See!\nWie navigiert man da gleich? Ach so!\n\n\n<0x10009:0x00070000>Mithilfe von (ControlStick2) bewegst du dich voran.\nHältst du (B) gedrückt, während du fährst,\nerhöhst du die Geschwindigkeit.<0x10011:0x01cd>\n\nDrücke <icon 41>, um die Bordkanone vorzubereiten,\nund dann erneut <icon 41>, um sie abzufeuern!<0x10011:0x0fcd>")
/*< 87>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 136, 'param3': 30}
/*<136>*/ 	printf(/* textboxtype: 0, unk: 0, line: 44 */ "Die Insel, auf der mein Haus steht, ist\nmit (X) markiert.\n\n\nDort gibt es einen <color red<Pier>coloroff>, von dem aus\ndu an Land gehen kannst!")
/*< 89>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 88, 'param3': 34}
/*< 88>*/ 	printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x00070000>Los geht's!")
/*< 83>*/ 	story_flags[499 /* us: 805A9B12 0x02, jp: 805ACD92 0x02 */] = true;
/*<111>*/ 	scene_flags[8 'Lanayru Sand Sea'][30 /* 0x2 40 */] = true;
          }

          void entrypoint_402_13() {
/*< 16>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 0, unk: 20, line: 4 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_402_30() {
/*<271>*/ 	start()
/*< 78>*/ 	printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu berichten.\n\n\n\nDie Wahrscheinlichkeit, dass du das\nSchiff hier findest, liegt selbst bei\numfangreicher Suche stets bei 0 %.\n\nIch empfehle dir, dem Kapitän Bescheid\nzu geben und diese Insel zu verlassen.")
/*<273>*/ 	scene_flags[8 'Lanayru Sand Sea'][89 /* 0xA 02 */] = true;
          }

          void entrypoint_402_14() {
/*< 17>*/ 	start()
/*< 53>*/ 	switch (story_flags[275 /* us: 805A9AF8 0x20, jp: 805ACD78 0x20 */]) {
          	  case 0:
/*<276>*/ 		switch (story_flags[272 /* us: 805A9AF8 0x04, jp: 805ACD78 0x04 */]) {
          		  case 0:
/*<290>*/ 			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          			  case 0:
/*<289>*/ 				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          				  case 0:
          					flw_277:
/*<277>*/ 					printf(/* textboxtype: 0, unk: 1, line: 52 */ "Bis heute habe ich Alpträume wegen\ndes Überfalls.<pause 5>.<pause 5>.")
          					flw_56:
/*< 56>*/ 					printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00070000>Sollen wir ablegen?\n[1-]Auf geht's![2]Moment!")
          					flw_57:
/*< 57>*/ 					switch (choice(2)) {
          					  case 0:
/*< 59>*/ 						printf(/* textboxtype: 1, unk: 1, line: 30 */ "<0x10009:0x00070000>Brechen wir auf, bzzz!")
/*< 60>*/ 						changeScene(0, 0) // 
          					  case 1:
/*< 58>*/ 						printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00070000>Ach so...")
          					}
          				  case 1:
/*<298>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_291:
/*<291>*/ 						printf(/* textboxtype: 0, unk: 1, line: 28 */ "Du suchst einen Drachen?\n\n\n\n<color blue<<0x10009:0x00070000>>coloroff>Der <color blue<Donnerdrache>coloroff> lebt südlich der\n<color blue<Ranelle-Höhle>coloroff>. Über einen anderen\nDrachen kann ich dir nichts sagen...")
          						goto flw_56
          					  case 1:
/*<299>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 300, 'param3': 31}
/*<300>*/ 						story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          						goto flw_291
          					}
          				}
          			  case 1:
          				goto flw_277
          			}
          		  case 1:
/*< 54>*/ 			switch (story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */]) {
          			  case 0:
/*< 63>*/ 				printf(/* textboxtype: 0, unk: 0, line: 47 */ "Lass uns mein Schiff endlich suchen gehen!")
          				goto flw_56
          			  case 1:
/*< 62>*/ 				printf(/* textboxtype: 0, unk: 1, line: 46 */ "Hier ist mein Schiff also auch nicht<pause 5>.<pause 5>.<pause 5>.\n\n\n\nHmmm...\nHast du irgendeinen Anhaltspunkt\nentdecken können?\n\n<0x10009:0x00070000>Du weißt, wo wir hinmüssen?\nDank der <color red<Aurasuche>coloroff>? Das ist ja stark!\n\n\n<0x10009:0x00070000>Dann bin ich zuversichtlich, dass wir\ndieses Mal wirklich mein Schiff finden!\n\n\n<0x10009:0x00070000>Wollen wir ablegen?\n[1-]Ja[2]Nein")
/*< 55>*/ 				story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */] = true;
          				goto flw_57
          			}
          		}
          	  case 1:
/*<193>*/ 		switch (scene_flags[76 /* 0x8 10 */]) {
          		  case 0:
/*<198>*/ 			switch (scene_flags[88 /* 0xA 01 */]) {
          			  case 0:
/*<197>*/ 				printf(/* textboxtype: 0, unk: 0, line: 50 */ "<sound 4>Neben der Brücke dort drinnen ist irgendetwas!\n\n\n\nVielleicht finden wir dort einen Hinweis\nauf den Verbleib meines Schiffes.\nSieh doch mal nach!")
/*<202>*/ 				scene_flags[-1 'Skyloft: Silent Realm'][88 /* 0xA 01 */] = true;
          				flw_194:
/*<194>*/ 				printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00070000>Oder willst du aufs Meer?\n[1-]Zum Meer[2]Hierbleiben")
          				goto flw_57
          			  case 1:
/*<196>*/ 				printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x30001:0x><heroname>!\nKlasse!\n\n\nSieh mal, die Öffnung!\nWie hast du das nur gemacht?")
/*<205>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 199, 'param3': 54}
/*<199>*/ 				set_camera(12, 0)
/*<195>*/ 				printf(/* textboxtype: 0, unk: 0, line: 50 */ "<sound 4>Neben der Brücke dort drinnen ist irgendetwas!\n\n\n\nVielleicht finden wir dort einen Hinweis\nauf den Verbleib meines Schiffes.\nSieh doch mal nach!")
/*<206>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 200, 'param3': 54}
/*<200>*/ 				set_camera(-1, 0)
          				goto flw_194
          			}
          		  case 1:
/*< 61>*/ 			printf(/* textboxtype: 1, unk: 0, line: 45 */ "Was ist denn, bzzz?\nHast du etwa Angst vor den Piraten?\nDie sind doch alle schon tot...\n\nOder willst du aufs Meer zurück?\n[1-]Zum Meer[2]Hierbleiben")
          			goto flw_57
          		}
          	}
          }

          void entrypoint_402_15() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 0, unk: 0, line: 53 */ "Wir sind da!")
/*<158>*/ 	set_camera(1, 0)
/*<156>*/ 	printf(/* textboxtype: 1, unk: 0, line: 54 */ "Mein Haus steht auf dem Gipfel!")
/*<159>*/ 	set_camera(2, 0)
/*<157>*/ 	printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x00070000>Bitte hole die <sound 4><color yellow<Seekarte>coloroff>, die sich in meinem\nHaus befindet.\n\n\nUnd pass auf die Monster auf! Da sind ein\npaar richtig fiese Biester dabei...\n\n\n<0x10009:0x00070000>Ich kann das Boot nicht alleine lassen,\ndeshalb bleibe ich hier und warte auf dich!")
/*< 40>*/ 	story_flags[278 /* us: 805A9AFB 0x01, jp: 805ACD7B 0x01 */] = true;
/*< 84>*/ 	scene_flags[8 'Lanayru Sand Sea'][45 /* 0x4 20 */] = true;
          }

          void entrypoint_402_16() {
/*< 36>*/ 	start()
/*< 37>*/ 	printf(/* textboxtype: 0, unk: 0, line: 56 */ "Wir sind da!\n\n\n\nAuf dieser Insel wurden früher Schiffe gebaut.\nHier befinden sich sowohl die Werft als auch\ndie Behausungen der Werftarbeiter.")
/*<160>*/ 	set_camera(4, 0)
/*<165>*/ 	printf(/* textboxtype: 0, unk: 74, line: 62 */ "Dieses Gebäude ist die Werft!")
/*<166>*/ 	set_camera(5, 0)
/*<138>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "Aber der Eingang ist verschlossen. Wir kommen\nda wohl nicht rein...")
/*<162>*/ 	set_camera(6, 0)
/*<139>*/ 	printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x00070000>Die einzelnen Gebäude dieser Insel sind mit\nLoren untereinander verbunden!")
/*<164>*/ 	printf(/* textboxtype: 74, unk: 1, line: 61 */ "<0x10009:0x00070000>Wenn du in die Lore steigst, kannst\ndu die Werft vielleicht über den\nHintereingang betreten.")
/*<203>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 161, 'param3': 54}
/*<161>*/ 	set_camera(7, 0)
/*<140>*/ 	printf(/* textboxtype: 0, unk: 0, line: 59 */ "Dort ist der Lorenbahnhof!")
/*<204>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 163, 'param3': 54}
/*<163>*/ 	set_camera(6, 0)
/*<141>*/ 	printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x00070000>Geh dort einmal hin und sieh dich um!\nIch warte hier auf dich.")
/*< 52>*/ 	story_flags[279 /* us: 805A9AFB 0x02, jp: 805ACD7B 0x02 */] = true;
/*< 86>*/ 	scene_flags[8 'Lanayru Sand Sea'][46 /* 0x4 40 */] = true;
          }

          void entrypoint_402_50() {
/*<115>*/ 	start()
/*<120>*/ 	printf(/* textboxtype: 0, unk: 0, line: 95 */ "Zum Zentrum")
          }

