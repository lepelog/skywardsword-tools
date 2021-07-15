          void entrypoint_304_14() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (scene_flags[107 /* 0xC 08 */]) {
          	  case 0:
/*< 63>*/ 		printf("\x0E\x01\x09\x04\x0C\xE09Dies ist die Legende der Ruine,\ndie man sich unter uns Mogma\nerzählt...\n\n\x201EAm Eingang zum Schatz des Königs\n<r<betrachten sich zwei Statuen>>...\x201C\n\n\n\x201E<r<Spring in den Mund der schlafenden\nStatue>>, beweise deinen Mut, und der\nWeg wird sich öffnen.\x201C\n\n\x0E\x01\x09\x04\x09\x908Ich weiß nicht, ob man dieser alten\nLegende trauen kann, aber ich werde\ndas prüfen!")
          	  case 1:
/*< 98>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 99, 'param3': 49}
/*< 99>*/ 		printf("\x0E\x01\x0B\x04\x00\x3F4\x0E\x01\x09\x04ÿ\xFF02Uhuhu...\nEndlich draußen!")
/*<100>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 59, 'param3': 17}
/*< 59>*/ 		printf("\x0E\x01\x08\x02\x2CD\x0E\x01\x09\x04\n\x5304Was zum...\n\n\n\n\x0E\x01\x08\x02Í\x0E\x01\x09\x04\x09\x9FFWas... Was fällt dir ein, mich derart zu\nerschrecken?!? Ich habe dich gerade\nfür ein Monster gehalten!\n\nDas sind ja\x0E\x01\x09\x04\x0B\xC07...\n\n\n\nSind das <y<Grabklauen>>, die du da trägst?\n\n\n\n\x0E\x01\x09\x04ÿ\xFF0AWer bist du?\nUnd was treibst du hier?\n[1]Ich suche etwas.[2]Eigentlich...")
/*< 60>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_62:
/*< 62>*/ 			printf("\x0E\x01\x09\x04\x0C\xD05Ach ja, natürlich...\n\n\n\n\x0E\x01\x09\x04\x0C\xD07Was? Ich?\n\n\n\n\x0E\x01\x09\x04\x09\x90AIch bin <b<Goldo>> vom Stamme der Mogma.\n\n\n\nDie Mogma-Klauen, die du da mit dir\nherumträgst, sind meine Erfindung!\n\n\n\x0E\x01\x09\x04\x09\x90BWua hahaha!")
/*< 61>*/ 			printf("...\x0E\x01\x09\x04\x0C\x409Aber du siehst mir ein bisschen\nahnungslos aus, nichts für ungut.\n\n\n\x0E\x01\x09\x04\x09\xE08Weißt du, was es mit diesem Ort hier\nauf sich hat?\n\n\nIn dieser Ruine schlummert ein\nsagenhafter Schatz...\n\n\nAber kein Einziger, der ihn suchte,\nhat diesen Ort lebend verlassen!\n\n\nUnzählige Schatzsucher haben für\ndiesen Traum ihr Leben geopfert...\n\n\n\x0E\x01\x09\x04\x0C\x409Ich sage das nur so zur Info...\n\n\n\n\x0E\x01\x09\x04ÿ\xFF08Na, willst du immer noch gehen?\n[1]Klar![2]...")
/*< 80>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_76:
/*< 76>*/ 				printf("\x0E\x01\x09\x04\x09\x905Nun denn... Lass mich dir von der\nLegende des Schatzes erzählen, die\njeder Mogma kennt.\n\n\x0E\x01\x09\x04ÿ\xFF0BEs gibt da einen Satz in ihr, den jeder\nMogma zitieren kann!\n\n\n\x0E\x01\x09\x04\x0C\xD0ABist du bereit?\n\n\n\n\x201EAm Eingang zum Schatz des Königs\n<r<betrachten sich zwei Statuen>>...\x201C\n\n\n\x201E<r<Spring in den Mund der schlafenden\nStatue>>, beweise deinen Mut, und der\nWeg wird sich öffnen.\x201C\n\n\x0E\x01\x09\x04ÿ\x509Diese Weisheit solltest du dir merken!\n[1]Danke![2]Wie war das?")
          				flw_78:
/*< 78>*/ 				switch (choice(2)) {
          				  case 0:
/*< 79>*/ 					printf("\x0E\x01\x09\x04\x09\x905Ehrlich gesagt, meine Männer suchen\nauch gerade nach dem Schatz...\n\n\nWenn du einem von ihnen begegnest,\nkannst du ihn ruhig fragen, hehe...")
/*< 64>*/ 					scene_flags[15 'Eldin: Fire Sanctuary'][107 /* 0xC 08 */] = true;
          				  case 1:
/*< 77>*/ 					printf("\x0E\x01\x09\x04ÿ\x07Hohoho...\nJetzt aber!\n\n\nHörst du?\n\n\n\n\x0E\x01\x09\x04\x0C\xD0A\x201EAm Eingang zum Schatz des Königs\n<r<betrachten sich zwei Statuen>>...\x201C\n\n\n\x201E<r<Spring in den Mund der schlafenden\nStatue>>, beweise deinen Mut, und der\nWeg wird sich öffnen.\x201C\n\n\x0E\x01\x09\x04\x09\x109Hast du dir das gemerkt?\n[1]Ja[2]Nein")
          					goto flw_78
          				}
          			  case 1:
          				goto flw_76
          			}
          		  case 1:
          			goto flw_62
          		}
          	}
          }

          void entrypoint_304_15() {
/*< 65>*/ 	start()
/*< 66>*/ 	printf("Führe das Licht, dem Weg der\nFlügel folgend. Leuchten alle\nStatuen, so wirst du den Schatz\ndes Königs erblicken.")
          }

          void entrypoint_304_16() {
/*< 67>*/ 	start()
/*< 82>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 85>*/ 		printf("\x0E\x01\x09\x04\x1B\xA02Die Klauen, die ich dir gegeben\nhabe, waren ein echtes Glanzstück in\nmeiner Sammlung!")
          	  case 1:
/*< 83>*/ 		printf("\x0E\x01\x09\x04\x1B\xA01Hey, Kleiner!\nWie findest du die Klauen, die \nich dir gegeben habe?\n\nWenn du unter der Erde bist, kannst du\n(Z) drücken, um die Oberfläche zu\nsehen.\x0E\x01\x11\x02\x7CD\n\nÜber der Erde ist es nämlich\nauch ganz interessant!")
/*< 84>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_304_17() {
/*< 68>*/ 	start()
/*<170>*/ 	switch (story_flags[84 /* us: 805A9AE8 0x01, jp: 805ACD68 0x01 */]) {
          	  case 0:
/*<171>*/ 		printf("\x0E\x01\x09\x04\x1B\xA0DAh, so ein Schlamassel!\nSo was passiert mir jedes Mal aufs\nNeue!")
          	  case 1:
/*< 87>*/ 		switch (zone_temp_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*< 86>*/ 			printf("\x0E\x01\x09\x04\x1B\xA0EHat dir die Karte etwa gezeigt,\nwo sich die Schätze befinden?")
          		  case 1:
/*< 88>*/ 			printf("\x0E\x01\x09\x04\x1B\xB12Was?!?\nDa habe ich dir doch tatsächlich meine\nSchatzkarte gegeben!\n\n\x0E\x01\x09\x04\x1B\xA0DAh, wie unaufmerksam von mir!")
/*< 89>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		}
          	}
          }

          void entrypoint_304_18() {
/*< 69>*/ 	start()
/*< 92>*/ 	switch (zone_temp_flags[2 /* 0x1 04 */]) {
          	  case 0:
/*< 90>*/ 		printf("\x0E\x01\x09\x04\x0F\xF09Ich werde mich hier zurückziehen,\nbis all die Ungeheuer weg sind!")
          	  case 1:
/*< 91>*/ 		printf("\x0E\x01\x09\x04\x0F\xF0BAch, du bist's!\nAlles in Ordnung?\n\n\nAn dem Ort, den ich vorhin abgesucht\nhabe, gab es eine Menge Ungeheuer.\n\n\n\x0E\x01\x09\x04\x0E\xE0AIrgendwas scheinen die da\ngesucht zu haben...")
/*< 93>*/ 		zone_temp_flags[2 /* 0x1 04 */] = true;
          	}
          }

          void entrypoint_304_01() {
/*< 14>*/ 	start()
/*< 10>*/ 	switch (scene_flags[100 /* 0xD 10 */]) {
          	  case 0:
/*<101>*/ 		switch (scene_flags[50 /* 0x7 04 */]) {
          		  case 0:
/*<105>*/ 			switch (scene_flags[108 /* 0xC 10 */]) {
          			  case 0:
/*<103>*/ 				printf("\x0E\x01\x09\x04\x3311\x120FHey, Kleiner!\n\n\n\nDu hast die Lava zum Abfließen\ngebracht? Respekt!\n\n\n\x0E\x01\x09\x04\x3311\x1213Und jetzt könntest du dich mal um\nmich kümmern...")
          			  case 1:
/*<138>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 51, 'next': 139, 'param3': 32}
/*<139>*/ 				{'type': 'type3', 'subType': 1, 'param1': 51, 'param2': 100, 'next': 137, 'param3': 16}
/*<137>*/ 				set_camera(6, 0)
/*<102>*/ 				printf("\x0E\x01\x09\x04\x3311\x1208Hey!\n\n\n\nIch habe gesehen, wie du die \nUngeheuer eben fertiggemacht hast.\nDas war wirklich erste Sahne, Kleiner!\n\n\x0E\x01\x09\x04\x3311\x1213Jetzt solltest du noch was Tolles tun\nund mich hier runterholen!")
/*<104>*/ 				scene_flags[15 'Eldin: Fire Sanctuary'][108 /* 0xC 10 */] = true;
/*<176>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		  case 1:
/*<114>*/ 			{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 1536, 'next': 12, 'param3': 13}
/*< 12>*/ 			printf("\x0E\x01\x09\x04\x13\x1317Ah! Ah!\n\n\n\nHey! Du sollst mir nicht zuschauen!\nGeh weg, mach schon!")
          		}
          	  case 1:
/*<115>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 51, 'next': 113, 'param3': 32}
/*<113>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13311, 'param2': 1536, 'next': 111, 'param3': 13}
/*<111>*/ 		set_camera(3, 0)
/*< 11>*/ 		printf("\x0E\x01\x09\x04\x3313\x1917Awawawah!\nDas ist gut für meine verspannten\nSchultern...")
/*<112>*/ 		set_camera(4, 0)
/*<117>*/ 		{'type': 'type3', 'subType': 1, 'param1': 51, 'param2': 100, 'next': 116, 'param3': 16}
/*<116>*/ 		printf("\x0E\x01\x09\x04\x3316\x1614Waaas?!?\nWas schaust du mich so an?\n\n\nHey!\n\n\n\nNicht hinschauen! Ich kann das\nwirklich überhaupt nicht haben!\n\n\n\x0E\x01\x09\x04\x3313\x1913Mach schon, weg mit dir!")
/*<118>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 13, 'param3': 42}
/*< 13>*/ 		scene_flags[15 'Eldin: Fire Sanctuary'][100 /* 0xD 10 */] = true;
          	}
          }

          void entrypoint_304_19() {
/*< 70>*/ 	start()
/*< 71>*/ 	printf("\x0E\x01\x06\x02\xFDCDDu kleiner Narr...\nIch bin Ghirahim, der Dunkelfürst!")
          }

          void entrypoint_304_02() {
/*< 30>*/ 	start()
/*< 31>*/ 	switch (scene_flags[101 /* 0xD 20 */]) {
          	  case 0:
/*< 32>*/ 		printf("\x0E\x01\x09\x04\x331B\xA05So, da wären wir!\n\n\n\nKeine Sorge, die sind nicht schmutzig!\nWaren ja auch die ganze Zeit in einer\nTruhe...\n\nDie sind was ganz Besonderes, pass also\ngut auf sie auf!")
/*< 81>*/ 		printf("\x0E\x01\x09\x04\x331B\x502Zeit zu gehen... Man sieht sich!")
          	  case 1:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x330B\x208Juchhu! Endlich in Freiheit!\n\n\n\n\x0E\x01\x09\x04\x08\xAFFIch weiß nicht, wer du bist, aber ich\ndanke dir!\n\n\nUnd jetzt sag bloß, du bist ebenfalls\nein Schatzsucher...\n[1]Klar![2]Schätze?")
/*< 16>*/ 		switch (choice(2)) {
          		  case 0:
/*<119>*/ 			printf("\x0E\x01\x09\x04\x08\x509Wusste ich's doch! Was solltest du\nauch sonst hier?")
          			flw_17:
/*< 17>*/ 			printf("Die Legende der <r<schlafenden Statuen>>...\n\n\n\nAber... Was trägst du denn da für alte\nund unansehnliche <y<Klauen>>?\n\n\nWarte mal...\n\n\n\n\x0E\x01\x09\x04\x3308\x90BGut! Als Zeichen meiner Dankbarkeit\nwerde ich für dich einen Griff in meine\ntolle Sammlung tun!\n\nWarte mal kurz!")
/*< 29>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][101 /* 0xD 20 */] = true;
          		  case 1:
/*<120>*/ 			printf("\x0E\x01\x09\x04\x08\x509Du musst dich nicht rausreden!\nEs gibt nur einen Grund, hierher zu\nkommen...")
          			goto flw_17
          		}
          	}
          }

          void entrypoint_304_20() {
/*< 72>*/ 	start()
/*< 73>*/ 	printf("Auch mit deinem ach so legendären\nSchwert bleibst du bloß ein Kind...<pause14>\nUnd dennoch wagst du es!")
          }

          void entrypoint_304_03() {
/*<153>*/ 	start()
/*<157>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 51, 'next': 158, 'param3': 32}
/*<158>*/ 	{'type': 'type3', 'subType': 1, 'param1': 51, 'param2': 100, 'next': 156, 'param3': 16}
/*<156>*/ 	set_camera(4, 0)
/*<154>*/ 	printf("\x0E\x01\x09\x04\x3311\x1208Hey!\n\n\n\nIch habe gesehen, wie du die \nUngeheuer eben fertiggemacht hast.\nDas war wirklich erste Sahne, Kleiner!\n\n\x0E\x01\x09\x04\x3311\x1213Jetzt solltest du noch was Tolles tun\nund mich hier runterholen!")
/*<155>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][108 /* 0xC 10 */] = true;
/*<175>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_304_21() {
/*< 74>*/ 	start()
/*< 75>*/ 	printf("Unwürdiger Bengel! Mein Zorn ist\nunendlich und unvergänglich.\nWie lange es auch dauert, du sollst\nbrennen und leiden!")
/*< 97>*/ 	story_flags[84 /* us: 805A9AE8 0x01, jp: 805ACD68 0x01 */] = true;
/*<166>*/ 	story_flags[172 /* us: 805A9AE2 0x08, jp: 805ACD62 0x08 */] = false;
/*<169>*/ 	story_flags[820 /* us: 805A9B30 0x10, jp: 805ACDB0 0x10 */] = true;
/*<167>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][22 /* 0x3 40 */] = true;
/*<168>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][20 /* 0x3 10 */] = true;
          }

          void entrypoint_304_05() {
/*<  2>*/ 	start()
/*<  8>*/ 	printf("")
          }

          void entrypoint_304_22() {
/*< 95>*/ 	start()
/*< 96>*/ 	printf("Hey, Kleiner!\n\n\n\nWie findest du die Klauen, die ich dir\ngegeben habe?\n\n\nWenn du die <r<Oberfläche sehen >>willst,\nmusst du (Z) drücken!\x0E\x01\x11\x02\x7CD\n\n\nVerstanden? (Z) drücken, um die\n<r<Oberfläche zu sehen>>! Vergiss das nicht!\x0E\x01\x11\x02\x7CD")
/*<124>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_304_06() {
/*<  7>*/ 	start()
/*<  3>*/ 	printf("")
          }

          void entrypoint_304_23() {
/*<127>*/ 	start()
/*<141>*/ 	switch (scene_flags[97 /* 0xD 02 */]) {
          	  case 0:
/*<140>*/ 		printf("\x0E\x01\x09\x04\x1B\xA01Ich werde mich in diesem Raum hier\nnoch etwas umsehen...\n\n\nAußerdem muss ich unserem Boss ja\nnoch Bericht erstatten...")
          	  case 1:
/*<132>*/ 		switch (scene_flags[119 /* 0xF 80 */]) {
          		  case 0:
/*<133>*/ 			printf("\x0E\x01\x09\x04\x1B\x1A15Einfach so die Wand eingerissen...\nDu machst wirklich keine halben\nSachen!")
          		  case 1:
/*<128>*/ 			switch (scene_flags[77 /* 0x8 20 */]) {
          			  case 0:
/*<130>*/ 				printf("\x0E\x01\x09\x04\x1B\xA02In diesem Raum gibt es eine <r<falsche\nWand>>.\n\n\nHinter dieser Wand befindet sich ein\nweiterer Raum.\n\n\n\x0E\x01\x09\x04\x1B\x1E0ADort wimmelt es von Ungeheuern\nim Untergrund, deshalb halten wir uns\nfern von dort.\n\n<pling>Es könnte dort auch einen <r<Geheimgang>>\ngeben...")
          			  case 1:
/*<134>*/ 				switch (scene_flags[78 /* 0x8 40 */]) {
          				  case 0:
/*<136>*/ 					printf("\x0E\x01\x09\x04\x1B\xA09Die hast du von meinem Kumpel\nbekommen. Ich will sie dir nicht\nwegnehmen...\n\n\x0E\x01\x09\x04\x1B\xA02Ich glaube, dass dir die Information in\nder Truhe von Nutzen sein kann.")
          				  case 1:
/*<126>*/ 					printf("...")
/*<129>*/ 					printf("\x0E\x01\x09\x04\x1B\xA09Hey, so sieht man sich wieder!\n\n\n\nHehehe... Tut mir leid, aber ich habe\neure Unterhaltung ganz zufällig mit\nangehört.\n\nMein Kumpel kann manchmal ein\nwenig anstrengend sein...\n\n\n\x0E\x01\x09\x04\x1B\xC02Aber was er da sagt, stimmt alles!\n\n\n\nVon irgendwo aus diesem Raum dringt\nein leichter Windstoß...\n\n\n\x0E\x01\x09\x04\x331B\xA0BIch bin mir sicher, dass dir die\nInformation in dieser Truhe von\nNutzen sein wird.")
/*<135>*/ 					scene_flags[15 'Eldin: Fire Sanctuary'][78 /* 0x8 40 */] = true;
          				}
          			}
          		}
          	}
          }

          void entrypoint_304_07() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf("")
/*< 94>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][121 /* 0xE 02 */] = true;
/*<  6>*/ 	changeScene(1, 0) // 
          }

          void entrypoint_304_24() {
/*<106>*/ 	start()
/*<107>*/ 	printf("Brücke der Entscheidung\nGlaube an dich, sei mutig\nund schreite voran!")
          }

          void entrypoint_304_08() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf("Altes\nGroßheiligtum")
          }

          void entrypoint_304_25() {
/*<160>*/ 	start()
/*<159>*/ 	printf("Es besteht eine Wahrscheinlichkeit von\n80 %, dass dieses Geschöpf nützliche\nInformationen besitzt, Gebieter.\nIch empfehle dir sehr, ihm zu helfen.")
/*<164>*/ 	set_camera(7, 0)
/*<163>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 161, 'param3': 42}
/*<161>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][98 /* 0xD 04 */] = false;
          }

          void entrypoint_304_09() {
/*< 37>*/ 	start()
/*< 39>*/ 	switch (scene_flags[105 /* 0xC 02 */]) {
          	  case 0:
/*<151>*/ 		set_camera(2, 0)
/*<149>*/ 		printf("\x0E\x01\x09\x04\x11\x1213Hey! Hilf mir, Kleiner!\nIch will hier runter!\n\n\n\x0E\x01\x09\x04\x16\x1614Ich kann dir weiterhelfen, wenn du\nmich nur hier runterlässt!")
/*<152>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*<110>*/ 		{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 1536, 'next': 108, 'param3': 13}
/*<108>*/ 		set_camera(1, 0)
/*<109>*/ 		set_camera(2, 0)
/*< 41>*/ 		printf("\x0E\x01\x09\x04\x11\x1213Hey! Du kommst mir gerade recht,\nmein Freund!\n\n\n\x0E\x01\x09\x04\x16\x1614Ich weiß zwar nicht, was du hier suchst,\naber könntest du meine Fesseln lösen?\n[1]Schon dabei![2]...")
/*< 42>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_43:
/*< 43>*/ 			printf("\x0E\x01\x09\x04\x11\x130FFür dich ist auch was drin!\nWenn du mich runterholst, erzähle ich\ndir ein <r<tolles Geheimnis>>!\nDu interessierst dich doch für Schätze?")
/*< 38>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][105 /* 0xC 02 */] = true;
          		  case 1:
          			goto flw_43
          		}
          	}
          }

          void entrypoint_304_10() {
/*< 50>*/ 	start()
/*< 49>*/ 	switch (scene_flags[106 /* 0xC 04 */]) {
          	  case 0:
/*< 53>*/ 		printf("\x0E\x01\x09\x04\x331B\x2203Hier! Nimm das hier!\n\n\n\nDort findest du eine supergeheime\nInformation, die ich mit viel Hinterlist\nerschlichen habe...\n\nDa habe ich mich mal wieder selbst\nübertroffen!\n\n\nHörst du mir zu?\nIn diesem Raum hier befindet sich ein\n\x0E\x01\x09\x04\x331A\x2008\x0E\x01\x08\x02\x2CD<r<Geheimzimmer>>!\n\n...\n\n\n\n\x0E\x01\x09\x04\x331B\x50AUnd sag niemandem, aus welcher\nLage du mich gerade befreit hast...\n[1]Versprochen![2]...")
/*<142>*/ 		switch (scene_flags[119 /* 0xF 80 */]) {
          		  case 0:
/*<144>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][37 /* 0x5 20 */] = true;
/*<145>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][79 /* 0x8 80 */] = true;
/*<174>*/ 			story_flags[822 /* us: 805A9B30 0x40, jp: 805ACDB0 0x40 */] = true;
/*<143>*/ 			switch (choice(2)) {
          			  case 0:
/*<147>*/ 				printf("\x0E\x01\x09\x04\x331B\x2200Gut! Vergiss meine Worte nicht,\nwenn du das hier öffnest!\n")
          				flw_123:
/*<123>*/ 				story_flags[820 /* us: 805A9B30 0x10, jp: 805ACDB0 0x10 */] = true;
/*<165>*/ 				scene_flags[15 'Eldin: Fire Sanctuary'][98 /* 0xD 04 */] = true;
/*<173>*/ 				scene_flags[15 'Eldin: Fire Sanctuary'][99 /* 0xD 08 */] = true;
          			  case 1:
/*<148>*/ 				printf("\x0E\x01\x09\x04\x3300\x100DUnmensch, du!")
          				goto flw_123
          			}
          		  case 1:
/*<146>*/ 			story_flags[819 /* us: 805A9B30 0x08, jp: 805ACDB0 0x08 */] = true;
/*< 54>*/ 			switch (choice(2)) {
          			  case 0:
/*< 55>*/ 				printf("\x0E\x01\x09\x04\x331B\x2200In Ordnung! Vergiss das nicht, wenn du\ndie Truhe öffnest!\n\n\nAlso, bis dann...")
          				flw_131:
/*<131>*/ 				printf("\x0E\x01\x08\x02\x2CDAh...")
          				goto flw_123
          			  case 1:
/*< 56>*/ 				printf("\x0E\x01\x09\x04\x3300\x100DDu Unmensch!\nWillst du etwa, dass ich dich anflehe?")
          				goto flw_131
          			}
          		}
          	  case 1:
/*< 47>*/ 		printf("\x0E\x01\x09\x04\x330B\xA08Juchhu! Endlich frei!\n\n\n\n\x0E\x01\x09\x04\x3308\xA09Hehehe... Jetzt habe ich endlich\neinen Gutgläubigen gefunden!\n\n\nAls ob ich dir etwas über die geheimen\nSchätze...\n\n\n\x0E\x01\x09\x04\x3325\x1A06\x0E\x01\x08\x02\x2CDWas ist das?!?\n\n\n\n\x0E\x01\x09\x04\x08\xA00Das sind doch die Klauen aus der\nSammlung meines Kumpels! Sag bloß,\ndu kennst ihn!\n\n[1]Klar![2]Hab ihn gerettet.")
/*< 48>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_51:
/*< 51>*/ 			printf("\x0E\x01\x09\x04\x3325\x1A00Moment mal!\nIch möchte dir etwas geben...\n\n\n\x0E\x01\x09\x04\x00\x500Warte mal kurz, bin gleich wieder da.")
/*< 52>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][106 /* 0xC 04 */] = true;
          		  case 1:
          			goto flw_51
          		}
          	}
          }

          void entrypoint_304_11() {
/*<150>*/ 	start()
/*< 45>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 46>*/ 		printf("\x0E\x01\x09\x04\x11\x1312Hey! Nicht weglaufen!\n\n\n\nHilf mir hier runter, dann verrate ich\ndir ein Geheimnis!")
          		flw_44:
/*< 44>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
/*<162>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*< 40>*/ 		printf("\x0E\x01\x09\x04\x11\x1312Hey! Wo willst du denn jetzt hin?\n\n\n\nDu kannst mich doch nicht einfach so\nhier hängen lassen!\n\n\nLass mich runter, dann verrate ich dir\nein Geheimnis!")
          		goto flw_44
          	}
          }

          void entrypoint_304_12() {
/*<  9>*/ 	start()
/*< 18>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 1, 'param3': 31}
/*<  1>*/ 	switch (scene_flags[103 /* 0xD 80 */]) {
          	  case 0:
/*< 23>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 21>*/ 			printf("\x0E\x01\x09\x04\x3308\x802Hä... Hä?\nSchon wieder du?\n\n\n\x0E\x01\x09\x04\x330B\x901Wie oft willst du denn noch\nhier herkommen?")
          		  case 1:
/*< 20>*/ 			printf("Waaah!\nEin grünes Ungeheuer!\n\n\n\x0E\x01\x09\x04\x332A\x9FF(Uaaah! Wie konnte es mir nur bis\nhierhin folgen?)\n\n\n(Jetzt muss ich mir was einfallen\nlassen...)\n\n\n\x0E\x01\x09\x04\x330B\x901He... Hey!\nWas willst du hier unten bei uns\nMogma?\n\nWas auch immer du versuchst, wenn\ndu mir nicht <r<den Weg versperrst>>,\nentkomme ich dir!")
/*< 24>*/ 			zone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	  case 1:
/*< 19>*/ 		printf("\x0E\x01\x09\x04\x331A\x1A0BUff, was für ein Tag!\nWenn man nichts findet, ist die\nSchatzsuche nur halb so lustig!")
          		scene_flags[15 'Eldin: Fire Sanctuary'][103 /* 0xD 80 */] = true;
          	}
          }

          void entrypoint_304_13() {
/*< 33>*/ 	start()
/*< 26>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 36>*/ 		printf("So, da wären wir wieder!\n\n\n\n\x0E\x01\x09\x04\x330E\xEFFÜbrigens, an der Klippe da vorne\nschienen die Monster vorhin etwas zu\nsuchen...\n\nDa gehst du doch sicher auch noch\nhin? Pass bloß auf!\n\n\n\x0E\x01\x09\x04\x330F\xF0BNun, ich mach mich dann mal auf,\nzurück zum Boss.\n\n\nUnd als kleine Dreingabe öffne ich dir\ndie Tür. Bis dann!")
/*<121>*/ 		scene_flags[15 'Eldin: Fire Sanctuary'][33 /* 0x5 02 */] = true;
/*<122>*/ 		story_flags[821 /* us: 805A9B30 0x20, jp: 805ACDB0 0x20 */] = true;
/*<172>*/ 		story_flags[822 /* us: 805A9B30 0x40, jp: 805ACDB0 0x40 */] = true;
/*<125>*/ 		scene_flags[15 'Eldin: Fire Sanctuary'][82 /* 0xB 04 */] = true;
          	  case 1:
/*< 22>*/ 		printf("\x0E\x01\x09\x04\x3321\x1601Oh, Mist!\nJetzt bin ich geliefert! Du kannst\nmit mir machen, was du willst!\n\n...\n\n\n\n\x0E\x01\x09\x04\x331C\x1D05Was zum...\nDiese Klauen...\n\n\nSind die nicht aus der Sammlung\nmeines Kumpels?\n[1]Ein Geschenk![2]Stimmt!")
/*< 25>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_34:
/*< 34>*/ 			printf("\x0E\x01\x09\x04\x331D\x0BWas?\nDu kennst meinen Kumpel?!?\n\n\nSo grün, wie du bist, hätte ich schwören\nkönnen, dass du eines der Monster bist!\n\n\n...\n\n\n\n\x0E\x01\x09\x04\x3324\x2109Hey, nicht wütend werden!\nTut mir ja selbst leid...\n\n\nAber dafür gebe ich dir jetzt was\nSchönes! Warte mal kurz...")
/*< 35>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][104 /* 0xC 01 */] = true;
          		  case 1:
          			goto flw_34
          		}
          	}
          }

