          void entrypoint_304_14() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (scene_flags[107 /* 0xC 08 */]) {
          	  case 0:
/*< 63>*/ 		printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x000c0e09>Dies ist die Legende der Ruine,\ndie man sich unter uns Mogma\nerzählt...\n\n„Am Eingang zum Schatz des Königs\n<color red<betrachten sich zwei Statuen>coloroff>...“\n\n\n„<color red<Spring in den Mund der schlafenden\nStatue>coloroff>, beweise deinen Mut, und der\nWeg wird sich öffnen.“\n\n<0x10009:0x00090908>Ich weiß nicht, ob man dieser alten\nLegende trauen kann, aber ich werde\ndas prüfen!")
          	  case 1:
/*< 98>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 99, 'param3': 49}
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0, line: 53 */ "<sound 1012><0x10009:0x00ffff02>Uhuhu...\nEndlich draußen!")
/*<100>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 59, 'param3': 17}
/*< 59>*/ 		printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10008:0x02cd><0x10009:0x000a5304>Was zum...\n\n\n\n<0x10008:0x00cd><0x10009:0x000909ff>Was... Was fällt dir ein, mich derart zu\nerschrecken?!? Ich habe dich gerade\nfür ein Monster gehalten!\n\nDas sind ja<0x10009:0x000b0c07>...\n\n\n\nSind das <color yellow<Grabklauen>coloroff>, die du da trägst?\n\n\n\n<0x10009:0x00ffff0a>Wer bist du?\nUnd was treibst du hier?\n[1-]Ich suche etwas.[2-]Eigentlich...")
/*< 60>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_62:
/*< 62>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x000c0d05>Ach ja, natürlich...\n\n\n\n<0x10009:0x000c0d07>Was? Ich?\n\n\n\n<0x10009:0x0009090a>Ich bin <color blue<Goldo>coloroff> vom Stamme der Mogma.\n\n\n\nDie Mogma-Klauen, die du da mit dir\nherumträgst, sind meine Erfindung!\n\n\n<0x10009:0x0009090b>Wua hahaha!")
/*< 61>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "...<0x10009:0x000c0409>Aber du siehst mir ein bisschen\nahnungslos aus, nichts für ungut.\n\n\n<0x10009:0x00090e08>Weißt du, was es mit diesem Ort hier\nauf sich hat?\n\n\nIn dieser Ruine schlummert ein\nsagenhafter Schatz...\n\n\nAber kein Einziger, der ihn suchte,\nhat diesen Ort lebend verlassen!\n\n\nUnzählige Schatzsucher haben für\ndiesen Traum ihr Leben geopfert...\n\n\n<0x10009:0x000c0409>Ich sage das nur so zur Info...\n\n\n\n<0x10009:0x00ffff08>Na, willst du immer noch gehen?\n[1-]Klar![2-]...")
/*< 80>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_76:
/*< 76>*/ 				printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00090905>Nun denn... Lass mich dir von der\nLegende des Schatzes erzählen, die\njeder Mogma kennt.\n\n<0x10009:0x00ffff0b>Es gibt da einen Satz in ihr, den jeder\nMogma zitieren kann!\n\n\n<0x10009:0x000c0d0a>Bist du bereit?\n\n\n\n„Am Eingang zum Schatz des Königs\n<color red<betrachten sich zwei Statuen>coloroff>...“\n\n\n„<color red<Spring in den Mund der schlafenden\nStatue>coloroff>, beweise deinen Mut, und der\nWeg wird sich öffnen.“\n\n<0x10009:0x00ff0509>Diese Weisheit solltest du dir merken!\n[1-]Danke![2-]Wie war das?")
          				flw_78:
/*< 78>*/ 				switch (choice(2)) {
          				  case 0:
/*< 79>*/ 					printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00090905>Ehrlich gesagt, meine Männer suchen\nauch gerade nach dem Schatz...\n\n\nWenn du einem von ihnen begegnest,\nkannst du ihn ruhig fragen, hehe...")
/*< 64>*/ 					scene_flags[15 'Eldin: Fire Sanctuary'][107 /* 0xC 08 */] = true;
          				  case 1:
/*< 77>*/ 					printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00ff0007>Hohoho...\nJetzt aber!\n\n\nHörst du?\n\n\n\n<0x10009:0x000c0d0a>„Am Eingang zum Schatz des Königs\n<color red<betrachten sich zwei Statuen>coloroff>...“\n\n\n„<color red<Spring in den Mund der schlafenden\nStatue>coloroff>, beweise deinen Mut, und der\nWeg wird sich öffnen.“\n\n<0x10009:0x00090109>Hast du dir das gemerkt?\n[1-]Ja[2-]Nein")
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
/*< 66>*/ 	printf(/* textboxtype: 7, unk: 0, line: 63 */ "Führe das Licht, dem Weg der\nFlügel folgend. Leuchten alle\nStatuen, so wirst du den Schatz\ndes Königs erblicken.")
          }

          void entrypoint_304_16() {
/*< 67>*/ 	start()
/*< 82>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 85>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x001b0a02>Die Klauen, die ich dir gegeben\nhabe, waren ein echtes Glanzstück in\nmeiner Sammlung!")
          	  case 1:
/*< 83>*/ 		printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x001b0a01>Hey, Kleiner!\nWie findest du die Klauen, die \nich dir gegeben habe?\n\nWenn du unter der Erde bist, kannst du\n(Z) drücken, um die Oberfläche zu\nsehen.<0x10011:0x07cd>\n\nÜber der Erde ist es nämlich\nauch ganz interessant!")
/*< 84>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_304_17() {
/*< 68>*/ 	start()
/*<170>*/ 	switch (story_flags[84 /* us: 805A9AE8 0x01, jp: 805ACD68 0x01 */]) {
          	  case 0:
/*<171>*/ 		printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x001b0a0d>Ah, so ein Schlamassel!\nSo was passiert mir jedes Mal aufs\nNeue!")
          	  case 1:
/*< 87>*/ 		switch (zone_temp_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x001b0a0e>Hat dir die Karte etwa gezeigt,\nwo sich die Schätze befinden?")
          		  case 1:
/*< 88>*/ 			printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x001b0b12>Was?!?\nDa habe ich dir doch tatsächlich meine\nSchatzkarte gegeben!\n\n<0x10009:0x001b0a0d>Ah, wie unaufmerksam von mir!")
/*< 89>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		}
          	}
          }

          void entrypoint_304_18() {
/*< 69>*/ 	start()
/*< 92>*/ 	switch (zone_temp_flags[2 /* 0x1 04 */]) {
          	  case 0:
/*< 90>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x000f0f09>Ich werde mich hier zurückziehen,\nbis all die Ungeheuer weg sind!")
          	  case 1:
/*< 91>*/ 		printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x000f0f0b>Ach, du bist's!\nAlles in Ordnung?\n\n\nAn dem Ort, den ich vorhin abgesucht\nhabe, gab es eine Menge Ungeheuer.\n\n\n<0x10009:0x000e0e0a>Irgendwas scheinen die da\ngesucht zu haben...")
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
/*<103>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x3311120f>Hey, Kleiner!\n\n\n\nDu hast die Lava zum Abfließen\ngebracht? Respekt!\n\n\n<0x10009:0x33111213>Und jetzt könntest du dich mal um\nmich kümmern...")
          			  case 1:
/*<138>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 51, 'next': 139, 'param3': 32}
/*<139>*/ 				{'type': 'type3', 'subType': 1, 'param1': 51, 'param2': 100, 'next': 137, 'param3': 16}
/*<137>*/ 				set_camera(6, 0)
/*<102>*/ 				printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x33111208>Hey!\n\n\n\nIch habe gesehen, wie du die \nUngeheuer eben fertiggemacht hast.\nDas war wirklich erste Sahne, Kleiner!\n\n<0x10009:0x33111213>Jetzt solltest du noch was Tolles tun\nund mich hier runterholen!")
/*<104>*/ 				scene_flags[15 'Eldin: Fire Sanctuary'][108 /* 0xC 10 */] = true;
/*<176>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		  case 1:
/*<114>*/ 			{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 1536, 'next': 12, 'param3': 13}
/*< 12>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00131317>Ah! Ah!\n\n\n\nHey! Du sollst mir nicht zuschauen!\nGeh weg, mach schon!")
          		}
          	  case 1:
/*<115>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 51, 'next': 113, 'param3': 32}
/*<113>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13311, 'param2': 1536, 'next': 111, 'param3': 13}
/*<111>*/ 		set_camera(3, 0)
/*< 11>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x33131917>Awawawah!\nDas ist gut für meine verspannten\nSchultern...")
/*<112>*/ 		set_camera(4, 0)
/*<117>*/ 		{'type': 'type3', 'subType': 1, 'param1': 51, 'param2': 100, 'next': 116, 'param3': 16}
/*<116>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x33161614>Waaas?!?\nWas schaust du mich so an?\n\n\nHey!\n\n\n\nNicht hinschauen! Ich kann das\nwirklich überhaupt nicht haben!\n\n\n<0x10009:0x33131913>Mach schon, weg mit dir!")
/*<118>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 13, 'param3': 42}
/*< 13>*/ 		scene_flags[15 'Eldin: Fire Sanctuary'][100 /* 0xD 10 */] = true;
          	}
          }

          void entrypoint_304_19() {
/*< 70>*/ 	start()
/*< 71>*/ 	printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10006:0xfdcd>Du kleiner Narr...\nIch bin Ghirahim, der Dunkelfürst!")
          }

          void entrypoint_304_02() {
/*< 30>*/ 	start()
/*< 31>*/ 	switch (scene_flags[101 /* 0xD 20 */]) {
          	  case 0:
/*< 32>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x331b0a05>So, da wären wir!\n\n\n\nKeine Sorge, die sind nicht schmutzig!\nWaren ja auch die ganze Zeit in einer\nTruhe...\n\nDie sind was ganz Besonderes, pass also\ngut auf sie auf!")
/*< 81>*/ 		printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x331b0502>Zeit zu gehen... Man sieht sich!")
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x330b0208>Juchhu! Endlich in Freiheit!\n\n\n\n<0x10009:0x00080aff>Ich weiß nicht, wer du bist, aber ich\ndanke dir!\n\n\nUnd jetzt sag bloß, du bist ebenfalls\nein Schatzsucher...\n[1-]Klar![2-]Schätze?")
/*< 16>*/ 		switch (choice(2)) {
          		  case 0:
/*<119>*/ 			printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x00080509>Wusste ich's doch! Was solltest du\nauch sonst hier?")
          			flw_17:
/*< 17>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "Die Legende der <color red<schlafenden Statuen>coloroff>...\n\n\n\nAber... Was trägst du denn da für alte\nund unansehnliche <color yellow<Klauen>coloroff>?\n\n\nWarte mal...\n\n\n\n<0x10009:0x3308090b>Gut! Als Zeichen meiner Dankbarkeit\nwerde ich für dich einen Griff in meine\ntolle Sammlung tun!\n\nWarte mal kurz!")
/*< 29>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][101 /* 0xD 20 */] = true;
          		  case 1:
/*<120>*/ 			printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00080509>Du musst dich nicht rausreden!\nEs gibt nur einen Grund, hierher zu\nkommen...")
          			goto flw_17
          		}
          	}
          }

          void entrypoint_304_20() {
/*< 72>*/ 	start()
/*< 73>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "Auch mit deinem ach so legendären\nSchwert bleibst du bloß ein Kind...<pause 20>\nUnd dennoch wagst du es!")
          }

          void entrypoint_304_03() {
/*<153>*/ 	start()
/*<157>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 51, 'next': 158, 'param3': 32}
/*<158>*/ 	{'type': 'type3', 'subType': 1, 'param1': 51, 'param2': 100, 'next': 156, 'param3': 16}
/*<156>*/ 	set_camera(4, 0)
/*<154>*/ 	printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x33111208>Hey!\n\n\n\nIch habe gesehen, wie du die \nUngeheuer eben fertiggemacht hast.\nDas war wirklich erste Sahne, Kleiner!\n\n<0x10009:0x33111213>Jetzt solltest du noch was Tolles tun\nund mich hier runterholen!")
/*<155>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][108 /* 0xC 10 */] = true;
/*<175>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_304_21() {
/*< 74>*/ 	start()
/*< 75>*/ 	printf(/* textboxtype: 1, unk: 0, line: 58 */ "Unwürdiger Bengel! Mein Zorn ist\nunendlich und unvergänglich.\nWie lange es auch dauert, du sollst\nbrennen und leiden!")
/*< 97>*/ 	story_flags[84 /* us: 805A9AE8 0x01, jp: 805ACD68 0x01 */] = true;
/*<166>*/ 	story_flags[172 /* us: 805A9AE2 0x08, jp: 805ACD62 0x08 */] = false;
/*<169>*/ 	story_flags[820 /* us: 805A9B30 0x10, jp: 805ACDB0 0x10 */] = true;
/*<167>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][22 /* 0x3 40 */] = true;
/*<168>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][20 /* 0x3 10 */] = true;
          }

          void entrypoint_304_05() {
/*<  2>*/ 	start()
/*<  8>*/ 	printf(/* textboxtype: 1, unk: 0, line: 55 */ "")
          }

          void entrypoint_304_22() {
/*< 95>*/ 	start()
/*< 96>*/ 	printf(/* textboxtype: 1, unk: 0, line: 28 */ "Hey, Kleiner!\n\n\n\nWie findest du die Klauen, die ich dir\ngegeben habe?\n\n\nWenn du die <color red<Oberfläche sehen >coloroff>willst,\nmusst du (Z) drücken!<0x10011:0x07cd>\n\n\nVerstanden? (Z) drücken, um die\n<color red<Oberfläche zu sehen>coloroff>! Vergiss das nicht!<0x10011:0x07cd>")
/*<124>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_304_06() {
/*<  7>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 60 */ "")
          }

          void entrypoint_304_23() {
/*<127>*/ 	start()
/*<141>*/ 	switch (scene_flags[97 /* 0xD 02 */]) {
          	  case 0:
/*<140>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x001b0a01>Ich werde mich in diesem Raum hier\nnoch etwas umsehen...\n\n\nAußerdem muss ich unserem Boss ja\nnoch Bericht erstatten...")
          	  case 1:
/*<132>*/ 		switch (scene_flags[119 /* 0xF 80 */]) {
          		  case 0:
/*<133>*/ 			printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x001b1a15>Einfach so die Wand eingerissen...\nDu machst wirklich keine halben\nSachen!")
          		  case 1:
/*<128>*/ 			switch (scene_flags[77 /* 0x8 20 */]) {
          			  case 0:
/*<130>*/ 				printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x001b0a02>In diesem Raum gibt es eine <color red<falsche\nWand>coloroff>.\n\n\nHinter dieser Wand befindet sich ein\nweiterer Raum.\n\n\n<0x10009:0x001b1e0a>Dort wimmelt es von Ungeheuern\nim Untergrund, deshalb halten wir uns\nfern von dort.\n\n<sound 4>Es könnte dort auch einen <color red<Geheimgang>coloroff>\ngeben...")
          			  case 1:
/*<134>*/ 				switch (scene_flags[78 /* 0x8 40 */]) {
          				  case 0:
/*<136>*/ 					printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x001b0a09>Die hast du von meinem Kumpel\nbekommen. Ich will sie dir nicht\nwegnehmen...\n\n<0x10009:0x001b0a02>Ich glaube, dass dir die Information in\nder Truhe von Nutzen sein kann.")
          				  case 1:
/*<126>*/ 					printf(/* textboxtype: 1, unk: 0, line: 31 */ "...")
/*<129>*/ 					printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x001b0a09>Hey, so sieht man sich wieder!\n\n\n\nHehehe... Tut mir leid, aber ich habe\neure Unterhaltung ganz zufällig mit\nangehört.\n\nMein Kumpel kann manchmal ein\nwenig anstrengend sein...\n\n\n<0x10009:0x001b0c02>Aber was er da sagt, stimmt alles!\n\n\n\nVon irgendwo aus diesem Raum dringt\nein leichter Windstoß...\n\n\n<0x10009:0x331b0a0b>Ich bin mir sicher, dass dir die\nInformation in dieser Truhe von\nNutzen sein wird.")
/*<135>*/ 					scene_flags[15 'Eldin: Fire Sanctuary'][78 /* 0x8 40 */] = true;
          				}
          			}
          		}
          	}
          }

          void entrypoint_304_07() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 1, unk: 0, line: 61 */ "")
/*< 94>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][121 /* 0xE 02 */] = true;
/*<  6>*/ 	changeScene(1, 0) // 
          }

          void entrypoint_304_24() {
/*<106>*/ 	start()
/*<107>*/ 	printf(/* textboxtype: 7, unk: 0, line: 64 */ "Brücke der Entscheidung\nGlaube an dich, sei mutig\nund schreite voran!")
          }

          void entrypoint_304_08() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 20, unk: 0, line: 62 */ "Altes\nGroßheiligtum")
          }

          void entrypoint_304_25() {
/*<160>*/ 	start()
/*<159>*/ 	printf(/* textboxtype: 2, unk: 0, line: 4 */ "Es besteht eine Wahrscheinlichkeit von\n80 %, dass dieses Geschöpf nützliche\nInformationen besitzt, Gebieter.\nIch empfehle dir sehr, ihm zu helfen.")
/*<164>*/ 	set_camera(7, 0)
/*<163>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 161, 'param3': 42}
/*<161>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][98 /* 0xD 04 */] = false;
          }

          void entrypoint_304_09() {
/*< 37>*/ 	start()
/*< 39>*/ 	switch (scene_flags[105 /* 0xC 02 */]) {
          	  case 0:
/*<151>*/ 		set_camera(2, 0)
/*<149>*/ 		printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00111213>Hey! Hilf mir, Kleiner!\nIch will hier runter!\n\n\n<0x10009:0x00161614>Ich kann dir weiterhelfen, wenn du\nmich nur hier runterlässt!")
/*<152>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*<110>*/ 		{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 1536, 'next': 108, 'param3': 13}
/*<108>*/ 		set_camera(1, 0)
/*<109>*/ 		set_camera(2, 0)
/*< 41>*/ 		printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00111213>Hey! Du kommst mir gerade recht,\nmein Freund!\n\n\n<0x10009:0x00161614>Ich weiß zwar nicht, was du hier suchst,\naber könntest du meine Fesseln lösen?\n[1-]Schon dabei![2-]...")
/*< 42>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_43:
/*< 43>*/ 			printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x0011130f>Für dich ist auch was drin!\nWenn du mich runterholst, erzähle ich\ndir ein <color red<tolles Geheimnis>coloroff>!\nDu interessierst dich doch für Schätze?")
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
/*< 53>*/ 		printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x331b2203>Hier! Nimm das hier!\n\n\n\nDort findest du eine supergeheime\nInformation, die ich mit viel Hinterlist\nerschlichen habe...\n\nDa habe ich mich mal wieder selbst\nübertroffen!\n\n\nHörst du mir zu?\nIn diesem Raum hier befindet sich ein\n<0x10009:0x331a2008><0x10008:0x02cd><color red<Geheimzimmer>coloroff>!\n\n...\n\n\n\n<0x10009:0x331b050a>Und sag niemandem, aus welcher\nLage du mich gerade befreit hast...\n[1-]Versprochen![2-]...")
/*<142>*/ 		switch (scene_flags[119 /* 0xF 80 */]) {
          		  case 0:
/*<144>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][37 /* 0x5 20 */] = true;
/*<145>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][79 /* 0x8 80 */] = true;
/*<174>*/ 			story_flags[822 /* us: 805A9B30 0x40, jp: 805ACDB0 0x40 */] = true;
/*<143>*/ 			switch (choice(2)) {
          			  case 0:
/*<147>*/ 				printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x331b2200>Gut! Vergiss meine Worte nicht,\nwenn du das hier öffnest!\n")
          				flw_123:
/*<123>*/ 				story_flags[820 /* us: 805A9B30 0x10, jp: 805ACDB0 0x10 */] = true;
/*<165>*/ 				scene_flags[15 'Eldin: Fire Sanctuary'][98 /* 0xD 04 */] = true;
/*<173>*/ 				scene_flags[15 'Eldin: Fire Sanctuary'][99 /* 0xD 08 */] = true;
          			  case 1:
/*<148>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x3300100d>Unmensch, du!")
          				goto flw_123
          			}
          		  case 1:
/*<146>*/ 			story_flags[819 /* us: 805A9B30 0x08, jp: 805ACDB0 0x08 */] = true;
/*< 54>*/ 			switch (choice(2)) {
          			  case 0:
/*< 55>*/ 				printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x331b2200>In Ordnung! Vergiss das nicht, wenn du\ndie Truhe öffnest!\n\n\nAlso, bis dann...")
          				flw_131:
/*<131>*/ 				printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10008:0x02cd>Ah...")
          				goto flw_123
          			  case 1:
/*< 56>*/ 				printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x3300100d>Du Unmensch!\nWillst du etwa, dass ich dich anflehe?")
          				goto flw_131
          			}
          		}
          	  case 1:
/*< 47>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x330b0a08>Juchhu! Endlich frei!\n\n\n\n<0x10009:0x33080a09>Hehehe... Jetzt habe ich endlich\neinen Gutgläubigen gefunden!\n\n\nAls ob ich dir etwas über die geheimen\nSchätze...\n\n\n<0x10009:0x33251a06><0x10008:0x02cd>Was ist das?!?\n\n\n\n<0x10009:0x00080a00>Das sind doch die Klauen aus der\nSammlung meines Kumpels! Sag bloß,\ndu kennst ihn!\n\n[1-]Klar![2-]Hab ihn gerettet.")
/*< 48>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_51:
/*< 51>*/ 			printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x33251a00>Moment mal!\nIch möchte dir etwas geben...\n\n\n<0x10009:0x00000500>Warte mal kurz, bin gleich wieder da.")
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
/*< 46>*/ 		printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00111312>Hey! Nicht weglaufen!\n\n\n\nHilf mir hier runter, dann verrate ich\ndir ein Geheimnis!")
          		flw_44:
/*< 44>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
/*<162>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*< 40>*/ 		printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00111312>Hey! Wo willst du denn jetzt hin?\n\n\n\nDu kannst mich doch nicht einfach so\nhier hängen lassen!\n\n\nLass mich runter, dann verrate ich dir\nein Geheimnis!")
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
/*< 21>*/ 			printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x33080802>Hä... Hä?\nSchon wieder du?\n\n\n<0x10009:0x330b0901>Wie oft willst du denn noch\nhier herkommen?")
          		  case 1:
/*< 20>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "Waaah!\nEin grünes Ungeheuer!\n\n\n<0x10009:0x332a09ff>(Uaaah! Wie konnte es mir nur bis\nhierhin folgen?)\n\n\n(Jetzt muss ich mir was einfallen\nlassen...)\n\n\n<0x10009:0x330b0901>He... Hey!\nWas willst du hier unten bei uns\nMogma?\n\nWas auch immer du versuchst, wenn\ndu mir nicht <color red<den Weg versperrst>coloroff>,\nentkomme ich dir!")
/*< 24>*/ 			zone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	  case 1:
/*< 19>*/ 		printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x331a1a0b>Uff, was für ein Tag!\nWenn man nichts findet, ist die\nSchatzsuche nur halb so lustig!")
          		scene_flags[15 'Eldin: Fire Sanctuary'][103 /* 0xD 80 */] = true;
          	}
          }

          void entrypoint_304_13() {
/*< 33>*/ 	start()
/*< 26>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 36>*/ 		printf(/* textboxtype: 1, unk: 0, line: 43 */ "So, da wären wir wieder!\n\n\n\n<0x10009:0x330e0eff>Übrigens, an der Klippe da vorne\nschienen die Monster vorhin etwas zu\nsuchen...\n\nDa gehst du doch sicher auch noch\nhin? Pass bloß auf!\n\n\n<0x10009:0x330f0f0b>Nun, ich mach mich dann mal auf,\nzurück zum Boss.\n\n\nUnd als kleine Dreingabe öffne ich dir\ndie Tür. Bis dann!")
/*<121>*/ 		scene_flags[15 'Eldin: Fire Sanctuary'][33 /* 0x5 02 */] = true;
/*<122>*/ 		story_flags[821 /* us: 805A9B30 0x20, jp: 805ACDB0 0x20 */] = true;
/*<172>*/ 		story_flags[822 /* us: 805A9B30 0x40, jp: 805ACDB0 0x40 */] = true;
/*<125>*/ 		scene_flags[15 'Eldin: Fire Sanctuary'][82 /* 0xB 04 */] = true;
          	  case 1:
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x33211601>Oh, Mist!\nJetzt bin ich geliefert! Du kannst\nmit mir machen, was du willst!\n\n...\n\n\n\n<0x10009:0x331c1d05>Was zum...\nDiese Klauen...\n\n\nSind die nicht aus der Sammlung\nmeines Kumpels?\n[1-]Ein Geschenk![2-]Stimmt!")
/*< 25>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_34:
/*< 34>*/ 			printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x331d000b>Was?\nDu kennst meinen Kumpel?!?\n\n\nSo grün, wie du bist, hätte ich schwören\nkönnen, dass du eines der Monster bist!\n\n\n...\n\n\n\n<0x10009:0x33242109>Hey, nicht wütend werden!\nTut mir ja selbst leid...\n\n\nAber dafür gebe ich dir jetzt was\nSchönes! Warte mal kurz...")
/*< 35>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][104 /* 0xC 01 */] = true;
          		  case 1:
          			goto flw_34
          		}
          	}
          }

