          void entrypoint_402_17() {
/*< 38>*/ 	start()
/*< 39>*/ 	printf("Ich habe Angst<pause05>.<pause05>.<pause05>.\n\n\n\n\x0E\x01\x09\x04\x07\x00Aber wenn man es genau nimmt,\nleben wir ja alle bereits nicht mehr.\n\n\n\x0E\x01\x09\x04\x07\x00Auch ich bin nur wegen des Steins\nder Zeit in meinem Boot an diesen\nOrt gelangt...\n\x0E\x01\x09\x04\x07\x00Irgendwie beruhigt mich das...\nAlso, Link!\nSchau mal, ob du mein Schiff findest!\n\x0E\x01\x09\x04\x07\x00Ich warte hier...")
/*< 51>*/ 	story_flags[280 /* us: 805A9AFB 0x04, jp: 805ACD7B 0x04 */] = true;
/*< 85>*/ 	scene_flags[8 'Lanayru Sand Sea'][47 /* 0x4 80 */] = true;
          }

          void entrypoint_402_51() {
/*<116>*/ 	start()
/*<121>*/ 	printf("Zur Werft")
          }

          void entrypoint_402_18() {
/*< 74>*/ 	start()
/*<147>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas\nzu berichten.")
/*<167>*/ 	set_camera(3, 0)
/*<148>*/ 	printf("Es besteht eine Wahrscheinlichkeit von\n60 %, dass dieser Mast und dieses Segel\nTeile des Schiffs waren, in dem <r<Nayrus\nFlamme >>ruht.")
/*<168>*/ 	set_camera(-1, 0)
/*< 75>*/ 	printf("Von jetzt an kannst du das Schiff, in\ndem <r<<pling>Nayrus Flamme>> ruht, mit der\n<r<Aurasuche >>aufspüren.")
/*< 76>*/ 	story_flags[275 /* us: 805A9AF8 0x20, jp: 805ACD78 0x20 */] = true;
/*< 80>*/ 	story_flags[271 /* us: 805A9AF8 0x02, jp: 805ACD78 0x02 */] = true;
/*<279>*/ 	open_dowsing_wheel(7)
/*<278>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<149>*/ 	scene_flags[8 'Lanayru Sand Sea'][112 /* 0xF 01 */] = true;
/*<201>*/ 	story_flags[647 /* us: 805A9B1C 0x01, jp: 805ACD9C 0x01 */] = true;
          }

          void entrypoint_402_52() {
/*<117>*/ 	start()
/*<123>*/ 	printf("Tritt an die Lore heran\nund drücke (A),\num hineinzusteigen.")
          }

          void entrypoint_402_01() {
/*<  1>*/ 	start()
          	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_402_19() {
/*< 77>*/ 	start()
/*<272>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, es scheint, als sei dieser Ort\nin den Jahren zu einem Hort des Bösen\nverkommen...\n\nDie Wahrscheinlichkeit, hier einen\nAnhaltspunkt zum Schiff zu finden,\nscheint mir gering.")
/*< 79>*/ 	story_flags[270 /* us: 805A9AF8 0x01, jp: 805ACD78 0x01 */] = true;
/*<239>*/ 	story_flags[741 /* us: 805A9B26 0x20, jp: 805ACDA6 0x20 */] = true;
          }

          void entrypoint_402_53() {
/*<118>*/ 	start()
/*<122>*/ 	printf("Neige die Lore in der Kurve\nmit der Wii-Fernbedienung.")
          }

          void entrypoint_402_70() {
/*<245>*/ 	start()
/*<250>*/ 	printf("An den Kapitän:\nVielen Dank für alles!\nDeine Mannschaft")
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
/*<223>*/ 					printf("Auf geht's!\nDu willst doch schließlich deine\nFreundin finden, oder?\n\nWo soll die Reise denn hingehen?\n[1]Zum Meer[2]Zur Sandgaleone[3-]Nicht\nablegen")
          					flw_263:
/*<263>*/ 					switch (choice(3)) {
          					  case 0:
/*<264>*/ 						printf("\x0E\x01\x09\x04\x07\x00Auf geht's, bzzz!")
/*<267>*/ 						changeScene(2, 0) // 
          					  case 1:
/*<265>*/ 						printf("\x0E\x01\x09\x04\x07\x00Gut, ich bringe dich zu meinem Schiff!")
/*<266>*/ 						changeScene(4, 0) // 
          					  case 2:
/*<268>*/ 						printf("\x0E\x01\x09\x04\x07\x00Komm doch wieder mal vorbei,\nwenn du Zeit hast!")
          					}
          				  case 1:
/*<281>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*<280>*/ 						switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          						  case 0:
          							flw_222:
/*<222>*/ 							printf("Da bist du ja!\nHast du deine Freundin nicht\ngefunden?\n\nWo soll die Reise denn hingehen?\n[1]Zum Meer[2]Zur Sandgaleone[3-]Nicht\nablegen")
          							goto flw_263
          						  case 1:
/*<292>*/ 							switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          							  case 0:
          								flw_282:
/*<282>*/ 								printf("Du suchst einen Drachen?\n\n\n\n<b<\x0E\x01\x09\x04\x07\x00>>Der <b<Donnerdrache>> lebt südlich der\n<b<Ranelle-Höhle>>. Über einen anderen\nDrachen kann ich dir nichts sagen...\n\n\x0E\x01\x09\x04\x07\x00Willst du mit dem Boot zu einem\nbestimmten Ort fahren?\n[1]Aufs Meer![2]Zur Sandgaleone.[3-]Ich bleibe\nhier!")
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
/*< 27>*/ 					printf("\x0E\x01\x09\x04\x07\x00Sollen wir ablegen?\n[1]Zum Meer[2]Zur Sandgaleone[3-]Nicht\nablegen")
/*< 28>*/ 					switch (choice(3)) {
          					  case 0:
/*< 29>*/ 						printf("\x0E\x01\x09\x04\x07\x00Auf geht's, bzzz!")
/*< 33>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 31>*/ 						printf("\x0E\x01\x09\x04\x07\x00Gut, ich bringe dich zu meinem Schiff!")
/*< 32>*/ 						changeScene(0, 0) // 
          					  case 2:
/*< 30>*/ 						printf("\x0E\x01\x09\x04\x07\x00Dann beeil dich bitte!")
          					}
          				  case 1:
/*<155>*/ 					printf("\x0E\x01\x09\x04\x07\x00Sollen wir ablegen?\n[1]Leinen los![2-]Noch nicht!")
/*<154>*/ 					switch (choice(2)) {
          					  case 0:
/*<151>*/ 						printf("\x0E\x01\x09\x04\x07\x00Auf geht's, bzzz!")
/*<153>*/ 						changeScene(2, 0) // 
          					  case 1:
/*<152>*/ 						printf("\x0E\x01\x09\x04\x07\x00Dann beeil dich bitte!")
          					}
          				}
          			}
          		  case 1:
/*<135>*/ 			printf("Wie? Hast du es dir anders überlegt?\n\n\n\nHilfst du mir, mein Schiff wieder\nzurückzuholen?\n[1]Ja[2-]Nein")
          			flw_134:
/*<134>*/ 			switch (choice(2)) {
          			  case 0:
/*< 26>*/ 				printf("\x0E\x01\x09\x04\x07\x00Wirklich?\nNun, in diesem Fall...")
/*< 25>*/ 				printf("<pause0A>.<pause0A>.<pause0A>.\nDie Landkarte, die du hast, ist nicht\nbesonders brauchbar.\n\n\x0E\x01\x09\x04\x07\x00Um zur See zu fahren, benötigst\ndu eine richtige <y<Seekarte>>!\n\n\nEine richtige <y<Seekarte>> findest du in\n<b<meinem Haus>>. Lass uns deswegen\nzuerst da hin fahren!")
/*< 24>*/ 				story_flags[273 /* us: 805A9AF8 0x08, jp: 805ACD78 0x08 */] = true;
          				goto flw_150
          			  case 1:
/*<133>*/ 				printf("\x0E\x01\x09\x04\x07\x00Na, dann eben nicht!\n\n\n\nAber ohne Boot kommst du hier\nganz sicher nicht weiter...")
          			}
          		}
          	  case 1:
/*< 23>*/ 		story_flags[264 /* us: 805A9AF9 0x04, jp: 805ACD79 0x04 */] = true;
/*<  3>*/ 		printf("<pause0A>.<pause0A>.<pause0A>.\nWas bist du denn für einer, bzzz?\nBist du ein Mensch?\n\nWer ich bin? Also<pause05>.<pause05>.<pause05>.\n\n\n\n\x0E\x01\x09\x04\x07\x00<pling>Ich bin <b<Boka>>, Kapitän des berühmt-\nberüchtigten Schiffes, das <r<Nayrus\nFlamme >>beschützt!\n[1]Nayrus Flamme?[2]Ein Schiff?")
/*<208>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_212:
/*<212>*/ 			set_camera(13, 0)
/*<210>*/ 			printf("<pause0A>.<pause0A>.<pause0A>.\n\n\n\nAn jenem stürmischen Tag<pause05>.<pause05>.<pause05>.\nIch und meine Mannschaft waren auf\nunserem normalen Kurs.\nUnd dann<pause05>.<pause05>.<pause05>.\nPlötzlich tauchten diese Piraten auf\nund griffen uns an!\nSie trachteten nach <r<Nayrus Flamme>>!\n\nMeine Männer wurden gefangen\ngenommen, ich über Bord geworfen...")
/*<213>*/ 			set_camera(14, 0)
/*<211>*/ 			printf("\x0E\x01\x09\x04\x07\x00Hier fand ich mich dann wieder<pause05>.<pause05>.<pause05>.")
/*<269>*/ 			set_camera(17, 0)
/*<270>*/ 			printf("\x0E\x01\x09\x04\x07\x00Danach bin ich unzählige Male\nmit diesem Kahn hinausgefahren und\nhabe nach meinem Schiff gesucht.")
/*<218>*/ 			set_camera(-1, 0)
/*<217>*/ 			printf("\x0E\x01\x09\x04\x07\x00Aber mein Schiff war verschwunden.<pause05>.<pause05>.\n\n\n\nIch bin mir sicher, dass es mit seiner\nSpezialfunktion verschwunden ist!\n[1]Unsichtbar?[2]Verschwunden?")
/*<216>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_209:
/*<209>*/ 				printf("\x0E\x01\x09\x04\x07\x00Um <r<Nayrus Flamme >>zu beschützen,\nist mein Schiff mit einem\nTarnmechanismus ausgerüstet<pause05>.<pause05>.<pause05>.\n\nWas sagst du da? Du bist auf der Suche\nnach <r<Nayrus Flamme>>?\n\n\nDu brauchst sie, um jemanden zu\nfinden, der dir sehr wichtig ist<pause05>.<pause05>.<pause05>.\n\n\n\x0E\x01\x09\x04\x07\x00Dann solltest du mir helfen, mein\nSchiff und meine Mannschaft zu\nfinden.")
/*<214>*/ 				set_camera(15, 0)
/*<207>*/ 				printf("Wenn du mir helfen willst, lasse ich\ndich auf mein Boot. Wie sieht's aus?\n[1]Klar![2-]Nee.")
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
/*< 82>*/ 	printf("")
          }

          void entrypoint_402_54() {
/*<119>*/ 	start()
/*<124>*/ 	printf("Bremse, wenn du zu schnell\nwirst, indem du (B) drückst.")
          }

          void entrypoint_402_71() {
/*<246>*/ 	start()
/*<251>*/ 	printf("Lieber Papa,\nalles Gute auf der Arbeit!")
          }

          void entrypoint_402_03() {
/*< 12>*/ 	start()
/*< 14>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_402_55() {
/*<145>*/ 	start()
/*<146>*/ 	printf("Um zu springen, bewege die\nWii-Fernbedienung ruckartig\nnach oben.")
          }

          void entrypoint_402_72() {
/*<254>*/ 	start()
/*<255>*/ 	printf("Zum Pier")
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
/*< 44>*/ 					printf("Dieses Haus ist gefüllt mit\nErinnerungen an meine Familie.\n\n\nOb ich wohl eines Tages dorthin\nzurückkehren kann? Ich würde sie\nwirklich gerne wiedersehen.<pause05>.<pause05>.")
          					flw_46:
/*< 46>*/ 					printf("\x0E\x01\x09\x04\x07\x00Sollen wir ablegen?\n[1]Auf geht's![2-]Moment!")
          					flw_47:
/*< 47>*/ 					switch (choice(2)) {
          					  case 0:
/*< 49>*/ 						printf("\x0E\x01\x09\x04\x07\x00Brechen wir auf, bzzz!")
/*< 50>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 48>*/ 						printf("\x0E\x01\x09\x04\x07\x00Ach so...")
          					}
          				  case 1:
/*<295>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_285:
/*<285>*/ 						printf("Du suchst einen Drachen?\n\n\n\n<b<\x0E\x01\x09\x04\x07\x00>>Der <b<Donnerdrache>> lebt südlich der\n<b<Ranelle-Höhle>>. Über einen anderen\nDrachen kann ich dir nichts sagen...")
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
/*< 43>*/ 			printf("Du hast die <y<Seekarte>> gefunden?\nGut gemacht! Jetzt macht die\nSeefahrt erst richtig Spaß!\nLass uns mein Schiff suchen, ja?")
/*< 45>*/ 			story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */] = true;
          			goto flw_46
          		}
          	  case 1:
/*< 15>*/ 		printf("Was ist denn?\nHol schnell die <y<Seekarte>> aus meinem\nHaus, bzzz!\n\nOder willst du aufs Meer zurück?\n[1]Zum Meer[2-]Hier bleiben")
          		goto flw_47
          	}
          }

          void entrypoint_402_21() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf("\x0E\x01\x12\x04\x00dHast du das gesehen?\nDas war mein Schiff!\n\n\nLos, verfolgen wir es! Und immer fest\ndraufhalten mit der Kanone!")
          }

          void entrypoint_402_56() {
/*<143>*/ 	start()
/*<144>*/ 	printf("Endstation: Werft")
          }

          void entrypoint_402_05() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf("Vielen Dank für deine Hilfe!\n\n\n\n\x0E\x01\x09\x04\x07\x00Allerdings sieht mein Schiff ganz schön\nmitgenommen aus... Da steht uns viel\nArbeit bevor!\n\n\x0E\x01\x09\x04\x07\x00Ich hoffe, dass auch du deine Freundin\nbald finden wirst...\n\n\n\x0E\x01\x09\x04\x07\x00Du kannst jederzeit wiederkommen,\nwenn du willst. Ich freue mich auf\ndich! Bzzz!")
/*<137>*/ 	story_flags[815 /* us: 805A9B31 0x80, jp: 805ACDB1 0x80 */] = true;
/*<219>*/ 	zone_temp_flags[1 /* 0x1 02 */] = true;
          }

          void entrypoint_402_22() {
/*< 94>*/ 	start()
/*< 97>*/ 	printf("Öffne jetzt mal die <y<Seekarte>>, die du\nmitgebracht hast!")
/*<105>*/ 	{'type': 'type3', 'subType': 4, 'param1': 768, 'param2': 6, 'next': 192, 'param3': 30}
/*<192>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 102, 'param3': 6}
/*<102>*/ 	story_flags[519 /* us: 805A9B15 0x01, jp: 805ACD95 0x01 */] = true;
/*<100>*/ 	printf("Die Lage der <pling><b<Werft>> ist mit \x0E\x02\x04\x02\x19CD\nmarkiert.")
/*<107>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 34}
/*<142>*/ 	printf("\x0E\x01\x09\x04\x07\x00Alle unsere Schiffe kommen aus der\nWerft. Auch meines wurde dort gebaut.\n\n\n\x0E\x01\x09\x04\x07\x00Ich bin mir sicher, dass du dort einen\nHinweis auf den Aufenthaltsort meines\nSchiffes finden kannst!")
/*<110>*/ 	printf("\x0E\x01\x09\x04\x07\x00Auf geht's!")
/*<112>*/ 	scene_flags[8 'Lanayru Sand Sea'][30 /* 0x2 40 */] = false;
/*<113>*/ 	scene_flags[8 'Lanayru Sand Sea'][31 /* 0x2 80 */] = true;
/*<259>*/ 	story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */] = true;
          }

          void entrypoint_402_57() {
/*<242>*/ 	start()
/*<247>*/ 	printf("Vorsicht, vermehrt Angriffe\nvon Piraten verzeichnet!")
          }

          void entrypoint_402_23() {
/*< 95>*/ 	start()
/*<256>*/ 	switch (story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */]) {
          	  case 0:
/*< 98>*/ 		printf("Ich habe Angst<pause05>.<pause05>.<pause05>.\n\n\n\nDer Boss der Piraten ist furchtbar\nstark und hat eine Menge Piraten an\nseiner Seite...\n\n\x0E\x01\x09\x04\x07\x00Ich würde viel darum geben, ihn nie\nwieder sehen zu müssen<pause05>.<pause05>.<pause05>.\n\n\n\x0E\x01\x09\x04\x07\x00Aber ich mache es, um mein Schiff\nzurückzuerlangen!")
          		flw_106:
/*<106>*/ 		{'type': 'type3', 'subType': 4, 'param1': 512, 'param2': 0, 'next': 101, 'param3': 30}
/*<101>*/ 		printf("Das <pling><b<Piratenversteck>> ist auf der Karte\nmit \x0E\x02\x04\x02\x19CD markiert.")
/*<108>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 109, 'param3': 34}
/*<109>*/ 		printf("\x0E\x01\x09\x04\x07\x00Also los, brechen wir auf!")
/*<103>*/ 		story_flags[520 /* us: 805A9B15 0x02, jp: 805ACD95 0x02 */] = true;
/*<114>*/ 		scene_flags[8 'Lanayru Sand Sea'][31 /* 0x2 80 */] = false;
          	  case 1:
/*<258>*/ 		printf("\x0E\x01\x09\x04\x07\x00Hm, in der Werft ist kein Schiff.\nIn diesem Fall<pause05>.<pause05>.<pause05>.\n\n\n\x0E\x01\x09\x04\x07\x00Das ist zwar etwas gefährlich...\nAber wir sollten direkt zum\nPiratenversteck fahren!\n\n\x0E\x01\x09\x04\x07\x00Der Boss der Piraten ist furchtbar\nstark und hat eine Menge Piraten an\nseiner Seite...\n\n\x0E\x01\x09\x04\x07\x00Ich würde viel darum geben, ihn nie\nwieder sehen zu müssen<pause05>.<pause05>.<pause05>.\n\n\n\x0E\x01\x09\x04\x07\x00Aber ich mache es, um mein Schiff\nzurückzuerlangen!")
/*<257>*/ 		story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */] = true;
          		goto flw_106
          	}
          }

          void entrypoint_402_40() {
/*<169>*/ 	start()
/*<170>*/ 	printf("\x0E\x01\x12\x04\x00\x01Sieh nur, Gebieter.")
/*<178>*/ 	set_camera(8, 0)
/*<171>*/ 	printf("Dieses Objekt hier ist eine <y<<pling>Kugel der\nZeit>>.\n\n\nAnders als Steine der Zeit kann man\nsie an verschiedene Orte bringen.")
/*<179>*/ 	set_camera(-1, 0)
          }

          void entrypoint_402_58() {
/*<243>*/ 	start()
/*<248>*/ 	printf("Am Monatsende ist die\nLorenbahn wegen Inspektion\nden ganzen Tag geschlossen.")
          }

          void entrypoint_402_24() {
/*< 96>*/ 	start()
/*<261>*/ 	switch (story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */]) {
          	  case 0:
          		flw_99:
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x07\x00Wollen wir wirklich dieses riesige Meer\nabsuchen?\n\n\n\x0E\x01\x09\x04\x07\x00Mir bleibt nicht viel mehr übrig, als dir\nzu vertrauen...\n\n\n\x0E\x01\x09\x04\x07\x00Vermutlich hat sich das Schiff getarnt.\nWenn wir es aber mit der Kanone<pling>\n<g<treffen>>, wird es sichtbar werden!")
/*<104>*/ 		story_flags[521 /* us: 805A9B15 0x04, jp: 805ACD95 0x04 */] = true;
/*<260>*/ 		story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */] = true;
          	  case 1:
/*<262>*/ 		printf("Auch im Piratenversteck haben wir\nmein Schiff nicht gefunden<pause05>.<pause05>.<pause05>.\n\n\nHmmm...\nHast du irgendeinen Anhaltspunkt\nentdecken können?\n\n\x0E\x01\x09\x04\x07\x00Du weißt, wo wir hin müssen?\nDank der <r<Aurasuche>>? Das ist ja\nstark!")
          		goto flw_99
          	}
          }

          void entrypoint_402_41() {
/*<172>*/ 	start()
/*<173>*/ 	printf("\x0E\x01\x12\x04\x00\x01Gebieter, dies ist die <y<Seekarte des\nKapitäns>>. Ich schlage vor, sie zurück\nzum Kapitän zu bringen.\n\nSieh nur, \x0E\x01\x12\x04\x00\x01Gebieter.")
/*<176>*/ 	set_camera(9, 0)
/*<174>*/ 	printf("Auf diesem Schiff ist Nayrus Flamme\nversteckt. Die Wahrscheinlichkeit, dass\ndie Mannschaft ebenfalls aus Robotern\nbesteht, beträgt 90 %.")
/*<177>*/ 	set_camera(-1, 0)
/*<175>*/ 	printf("Ich schätze, dass der Kapitän\ninmitten seiner Mannschaft ein\nglückliches Leben gelebt hat.")
/*<237>*/ 	story_flags[738 /* us: 805A9B26 0x04, jp: 805ACDA6 0x04 */] = true;
/*<238>*/ 	story_flags[739 /* us: 805A9B26 0x08, jp: 805ACDA6 0x08 */] = true;
          }

          void entrypoint_402_59() {
/*<244>*/ 	start()
/*<249>*/ 	printf("Wann ich den Plan für mein\nSchiff wohl fertig bekomme?")
          }

          void entrypoint_402_42() {
/*<180>*/ 	start()
/*<181>*/ 	printf("Sieh nur, \x0E\x01\x12\x04\x00\x01Gebieter.")
/*<190>*/ 	set_camera(10, 0)
/*<186>*/ 	printf("In dieser Vorrichtung befindet sich\nkein <r<Stein der Zeit>>...\n\n\nJedoch besteht eine Wahrscheinlichkeit\nvon 95 %, dass es ein ähnlicher\nMechanismus wie der in der <b<Wüste\nRanelle >>ist.")
/*<191>*/ 	set_camera(-1, 0)
/*<187>*/ 	printf("Ich schätze, dass auch diese\nVorrichtung von einem <pling><r<Stein der Zeit>>\nangetrieben wird. ")
          }

          void entrypoint_402_25() {
/*<252>*/ 	start()
/*<253>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_402_09() {
/*<  4>*/ 	start()
/*<  6>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_402_60() {
/*<125>*/ 	start()
/*<128>*/ 	printf("\x0E\x01\x05\x04\x0F\x00\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas\nzu berichten.\n\n\n\x0E\x01\x05\x04<\x00Dies ist das <b<Ranelle-Sandmeer>>.\nFrüher war hier ein riesiger Ozean.")
          }

          void entrypoint_402_43() {
/*<182>*/ 	start()
/*<183>*/ 	printf("\x0E\x01\x12\x04\x00\x01Gebieter, wir sind im Inneren der\nWerft angekommen.")
/*<188>*/ 	set_camera(11, 0)
/*<184>*/ 	printf("Nach all der Zeit ist auch hier alles\nvon Sand bedeckt.")
/*<189>*/ 	set_camera(-1, 0)
/*<185>*/ 	printf("Ich empfehle dir, im Sand nach\nAnhaltspunkten zum Schiff zu suchen.")
          }

          void entrypoint_402_61() {
/*<126>*/ 	start()
/*<129>*/ 	printf("\x0E\x01\x05\x04Z\x00Heute aber ist alles ausgetrocknet\nund mit Sand bedeckt.")
          }

          void entrypoint_402_44() {
/*<224>*/ 	start()
/*<230>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 232, 'param3': 51}
/*<232>*/ 	set_camera(-1, 0)
/*<229>*/ 	printf("\x0E\x01\x12\x04\x00\x01Gebieter, ich muss dich ermahnen.\n\n\n\nAusruhen kannst du dich später.\nJetzt solltest du zuerst nach der\nSeekarte suchen.")
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
/*<275>*/ 					printf("Ich weiß noch genau, wie mein Schiff\nhier fertiggestellt wurde.\nDas waren Zeiten.<pause05>.<pause05>.")
          					flw_67:
/*< 67>*/ 					printf("\x0E\x01\x09\x04\x07\x00Sollen wir ablegen?\n[1]Auf geht's![2-]Moment!")
          					flw_68:
/*< 68>*/ 					switch (choice(2)) {
          					  case 0:
/*< 70>*/ 						printf("\x0E\x01\x09\x04\x07\x00Brechen wir auf, bzzz!")
/*< 71>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 69>*/ 						printf("\x0E\x01\x09\x04\x07\x00Ach so...")
          					}
          				  case 1:
/*<301>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_288:
/*<288>*/ 						printf("Du suchst einen Drachen?\n\n\n\n<b<\x0E\x01\x09\x04\x07\x00>>Der <b<Donnerdrache>> lebt südlich der\n<b<Ranelle-Höhle>>. Über einen anderen\nDrachen kann ich dir nichts sagen...")
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
/*< 73>*/ 				printf("Abgemacht!\nAuf zum <b<Piratenversteck>>!")
          				goto flw_67
          			  case 1:
/*< 66>*/ 				story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */] = true;
/*< 72>*/ 				printf("\x0E\x01\x09\x04\x07\x00Hm, hier ist kein Schiff? In diesem\nFall<pause05>.<pause05>.<pause05>.\n\n\n\x0E\x01\x09\x04\x07\x00Das ist zwar etwas gefährlich...\nAber wir sollten direkt zum\nPiratenversteck fahren!\n\n\x0E\x01\x09\x04\x07\x00Also, auf geht's!\n[1]Los![2-]Warte!")
          				goto flw_68
          			}
          		}
          	  case 1:
/*< 11>*/ 		printf("Was hast du denn?\nDu wolltest doch die <b<Werft\n>>durchsuchen!\n\n\x0E\x01\x09\x04\x07\x00Oder willst du aufs Meer?\n[1]Zum Meer[2-]Hier bleiben")
          		goto flw_68
          	}
          }

          void entrypoint_402_62() {
/*<127>*/ 	start()
/*<130>*/ 	printf("\x0E\x01\x05\x04Z\x00An diesem Ort befand sich früher ein\nHafen.")
          }

          void entrypoint_402_45() {
/*<225>*/ 	start()
/*<231>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 226, 'param3': 51}
/*<226>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas\nzu berichten.")
/*<228>*/ 	set_camera(16, 0)
/*<227>*/ 	printf("Ich spüre die Präsenz von Insekten\nim oberen Stockwerk des Gebäudes.")
/*<234>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 236, 'param3': 36}
/*<236>*/ 	story_flags[740 /* us: 805A9B26 0x10, jp: 805ACDA6 0x10 */] = true;
          }

          void entrypoint_402_11() {
/*<  7>*/ 	start()
/*< 91>*/ 	switch (story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */]) {
          	  case 0:
/*< 90>*/ 		printf("\x0E\x01\x12\x04\x00dNein, da will ich nicht hin! Das ist\nviel zu gefährlich!\n\n\nLass uns jetzt zur <b<Werft>> fahren, ja?")
          	  case 1:
/*<  8>*/ 		printf("\x0E\x01\x12\x04\x00dDa wollen wir nicht hin!\nWir müssen jetzt zu <b<meinem Haus\n>>fahren!")
          	}
          }

          void entrypoint_402_63() {
/*<131>*/ 	start()
/*<132>*/ 	printf("\x0E\x01\x05\x04<\x00Es besteht eine Wahrscheinlichkeit von\n90 %, dass wir die <r<heilige Flamme >>hier\nirgendwo finden werden.\n\n\x0E\x01\x05\x04\x1E\x00Ich empfehle, deine Suche in diesem\nSandmeer fortzuführen.")
          }

          void entrypoint_402_46() {
/*<240>*/ 	start()
/*<241>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas\nzu berichten.\n\n\nDurch die Kraft der Kugel der Zeit hat\nsich hier etwas verändert. \nIch empfehle, einmal nachzusehen.")
          }

          void entrypoint_402_12() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("Endlich wieder auf See!\nWie navigiert man da gleich? Ach so!\n\n\n\x0E\x01\x09\x04\x07\x00Mithilfe von \x0E\x02\x04\x02\x8CD bewegst du dich voran.\nHältst du (A) gedrückt, während du\nfährst, erhöhst du die Geschwindigkeit.\n\nDrücke (B), um die Bordkanone\nvorzubereiten, und dann (A), um sie\nabzufeuern!\x0E\x01\x11\x02\x1CD")
/*< 87>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 136, 'param3': 30}
/*<136>*/ 	printf("Die Insel, auf der mein Haus steht, ist\nmit \x0E\x02\x04\x02\x19CD markiert.\n\n\nDort gibt es einen <r<Pier>>, von dem aus\ndu an Land gehen kannst!")
/*< 89>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 88, 'param3': 34}
/*< 88>*/ 	printf("\x0E\x01\x09\x04\x07\x00Los geht's!")
/*< 83>*/ 	story_flags[499 /* us: 805A9B12 0x02, jp: 805ACD92 0x02 */] = true;
/*<111>*/ 	scene_flags[8 'Lanayru Sand Sea'][30 /* 0x2 40 */] = true;
          }

          void entrypoint_402_13() {
/*< 16>*/ 	start()
/*< 18>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_402_30() {
/*<271>*/ 	start()
/*< 78>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas\nzu berichten.\n\n\nDie Wahrscheinlichkeit, dass du das\nSchiff hier findest, liegt selbst bei\numfangreicher Suche stets bei 0 %.\n\nIch empfehle dir, dem Kapitän\nBescheid zu geben und diese Insel\nzu verlassen.")
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
/*<277>*/ 					printf("Bis heute habe ich Alpträume wegen\ndes Überfalls.<pause05>.<pause05>.")
          					flw_56:
/*< 56>*/ 					printf("\x0E\x01\x09\x04\x07\x00Sollen wir ablegen?\n[1]Auf geht's![2-]Moment!")
          					flw_57:
/*< 57>*/ 					switch (choice(2)) {
          					  case 0:
/*< 59>*/ 						printf("\x0E\x01\x09\x04\x07\x00Brechen wir auf, bzzz!")
/*< 60>*/ 						changeScene(0, 0) // 
          					  case 1:
/*< 58>*/ 						printf("\x0E\x01\x09\x04\x07\x00Ach so...")
          					}
          				  case 1:
/*<298>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_291:
/*<291>*/ 						printf("Du suchst einen Drachen?\n\n\n\n<b<\x0E\x01\x09\x04\x07\x00>>Der <b<Donnerdrache>> lebt südlich der\n<b<Ranelle-Höhle>>. Über einen anderen\nDrachen kann ich dir nichts sagen...")
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
/*< 63>*/ 				printf("Lass uns mein Schiff endlich suchen\ngehen!")
          				goto flw_56
          			  case 1:
/*< 62>*/ 				printf("Hier ist mein Schiff also auch nicht<pause05>.<pause05>.<pause05>.\n\n\n\nHmmm...\nHast du irgendeinen Anhaltspunkt\nentdecken können?\n\n\x0E\x01\x09\x04\x07\x00Du weißt, wo wir hin müssen?\nDank der <r<Aurasuche>>? Das ist ja\nstark!\n\n\x0E\x01\x09\x04\x07\x00Dann bin ich zuversichtlich, dass wir\ndieses Mal wirklich mein Schiff finden!\n\n\n\x0E\x01\x09\x04\x07\x00Wollen wir ablegen?\n[1]Ja[2-]Nein")
/*< 55>*/ 				story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */] = true;
          				goto flw_57
          			}
          		}
          	  case 1:
/*<193>*/ 		switch (scene_flags[76 /* 0x8 10 */]) {
          		  case 0:
/*<198>*/ 			switch (scene_flags[88 /* 0xA 01 */]) {
          			  case 0:
/*<197>*/ 				printf("<pling>Neben der Brücke dort drinnen\nist irgendetwas!\n\n\nVielleicht finden wir dort einen\nHinweis auf den Verbleib meines\nSchiffes. Sieh doch mal nach!")
/*<202>*/ 				scene_flags[-1 'Skyloft: Silent Realm'][88 /* 0xA 01 */] = true;
          				flw_194:
/*<194>*/ 				printf("\x0E\x01\x09\x04\x07\x00Oder willst du aufs Meer?\n[1]Zum Meer[2-]Hier bleiben")
          				goto flw_57
          			  case 1:
/*<196>*/ 				printf("Link!\nKlasse!\n\n\nSieh mal, die Öffnung!\nWie hast du das nur gemacht?")
/*<205>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 199, 'param3': 54}
/*<199>*/ 				set_camera(12, 0)
/*<195>*/ 				printf("<pling>Neben der Brücke dort drinnen\nist irgendetwas!\n\n\nVielleicht finden wir dort einen\nHinweis auf den Verbleib meines\nSchiffes. Sieh doch mal nach!")
/*<206>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 200, 'param3': 54}
/*<200>*/ 				set_camera(-1, 0)
          				goto flw_194
          			}
          		  case 1:
/*< 61>*/ 			printf("Was ist denn, bzzz?\nHast du etwa Angst vor den Piraten?\nDie sind doch alle schon tot...\n\nOder willst du aufs Meer zurück?\n[1]Zum Meer[2-]Hier bleiben")
          			goto flw_57
          		}
          	}
          }

          void entrypoint_402_15() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf("Wir sind da!")
/*<158>*/ 	set_camera(1, 0)
/*<156>*/ 	printf("Mein Haus steht auf dem Gipfel!")
/*<159>*/ 	set_camera(2, 0)
/*<157>*/ 	printf("\x0E\x01\x09\x04\x07\x00Bitte hole die <pling><y<Seekarte>>, die sich in\nmeinem Haus befindet.\n\n\nUnd pass auf die Monster auf! Da sind\nein paar richtig fiese Biester dabei...\n\n\n\x0E\x01\x09\x04\x07\x00Ich kann das Boot nicht alleine lassen,\ndeshalb bleibe ich hier und warte auf\ndich!")
/*< 40>*/ 	story_flags[278 /* us: 805A9AFB 0x01, jp: 805ACD7B 0x01 */] = true;
/*< 84>*/ 	scene_flags[8 'Lanayru Sand Sea'][45 /* 0x4 20 */] = true;
          }

          void entrypoint_402_16() {
/*< 36>*/ 	start()
/*< 37>*/ 	printf("Wir sind da!\n\n\n\nAuf dieser Insel wurden früher Schiffe\ngebaut. Hier befinden sich sowohl die\nWerft als auch die Behausungen der\nWerftarbeiter.")
/*<160>*/ 	set_camera(4, 0)
/*<165>*/ 	printf("Dieses Gebäude ist die Werft!")
/*<166>*/ 	set_camera(5, 0)
/*<138>*/ 	printf("Aber der Eingang ist verschlossen. Wir\nkommen da wohl nicht rein...")
/*<162>*/ 	set_camera(6, 0)
/*<139>*/ 	printf("\x0E\x01\x09\x04\x07\x00Die einzelnen Gebäude dieser\nInsel sind mit Loren untereinander\nverbunden!")
/*<164>*/ 	printf("\x0E\x01\x09\x04\x07\x00Wenn du in die Lore steigst, kannst\ndu die Werft vielleicht über den\nHintereingang betreten.")
/*<203>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 161, 'param3': 54}
/*<161>*/ 	set_camera(7, 0)
/*<140>*/ 	printf("Dort ist der Lorenbahnhof!")
/*<204>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 163, 'param3': 54}
/*<163>*/ 	set_camera(6, 0)
/*<141>*/ 	printf("\x0E\x01\x09\x04\x07\x00Geh dort einmal hin und sieh dich\num! Ich warte hier auf dich.")
/*< 52>*/ 	story_flags[279 /* us: 805A9AFB 0x02, jp: 805ACD7B 0x02 */] = true;
/*< 86>*/ 	scene_flags[8 'Lanayru Sand Sea'][46 /* 0x4 40 */] = true;
          }

          void entrypoint_402_50() {
/*<115>*/ 	start()
/*<120>*/ 	printf("Zum Zentrum")
          }

