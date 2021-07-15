          void entrypoint_119_10() {
/*<113>*/ 	start()
/*<120>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*<112>*/ 		printf("\x0E\x01\x09\x04\x17\x209\x0E\x01\x08\x02\x2CDHervorragend!")
/*<124>*/ 		set_camera(3, 0)
/*<125>*/ 		printf("\x0E\x01\x09\x04\x17\x1A08Ja, so muss das aussehen!\n\n\n\n\x0E\x01\x09\x04\x09\x200Also gut. Willst du zum Abschluss noch\nden <g<Fangstoß >>ausprobieren?\n[1]Aber sicher![2-]Keine Lust.")
          	  case 1:
/*<121>*/ 		printf("\x0E\x01\x09\x04\x09\x1D04Was ist denn los, Link?\nDu stellst dich doch sonst nicht so\ntollpatschig an!")
/*<122>*/ 		set_camera(3, 0)
/*<123>*/ 		printf("\x0E\x01\x09\x04\x08\x1D01Du musst nur im Zentrum der Stämme\nstehen und Wii-Fernbedienung und\nNunchuk dann <r<gleichzeitig ruckartig\n>><r<seitlich bewegen>>!\n\x0E\x01\x09\x04\x09\x200Willst du es erneut versuchen?\n[1]Ja, bitte![2-]Nein, danke.")
          	}
          }

          void entrypoint_119_11() {
/*<115>*/ 	start()
/*<111>*/ 	printf("\x0E\x01\x09\x04\x08\x200Diese Antwort wollte ich hören!\nUm dich herum werden nun mehrere\nStämme erscheinen.\n\nBleib auf der Stelle stehen und führe\ndie Wirbelattacke aus. Bewege hierfür\nWii-Fernbedienung und Nunchuk\n<r<gleichzeitig >><g<ruckartig zur Seite>>.\n\x0E\x01\x09\x04\x09\x200Zeig mir, was du kannst!")
          }

          void entrypoint_119_12() {
/*<126>*/ 	start()
/*<127>*/ 	printf("\x0E\x01\x09\x04\x08\x1D03Ha ha, sehr gut! Der <g<Fangstoß >>ist nur\ndann möglich, wenn dein Gegner am\nBoden liegt.\n\nDrücke (Z), um ihn <r<anzuvisieren>> und\n<r<bewege >>die Wii-Fernbedienung und\ndas Nunchuk <r<gleichzeitig ruckartig>>!\x0E\x01\x11\x02\x7CD\n\n\x0E\x01\x09\x04\x09\x1D00Schlage diesen Stamm zu Boden und\nversuche dann, den Fangstoß darauf\nanzuwenden!")
          }

          void entrypoint_119_13() {
/*<128>*/ 	start()
/*<129>*/ 	printf("\x0E\x01\x09\x04\x17\x1A09\x0E\x01\x08\x02\x1CDWunderbar!")
/*<130>*/ 	set_camera(3, 0)
/*<131>*/ 	printf("\x0E\x01\x09\x04\x19\x200Du kannst den <g<Fangstoß >>auch dann\neinsetzen, wenn du den Gegner mit\ndem <r<Schild>> oder einer <r<Wirbelattacke>>\nzu Boden geworfen hast.\n\x0E\x01\x09\x04\x1C\x200Der Feind bleibt aber nicht für immer\nam Boden liegen, also lass dir nicht zu\nviel Zeit!\n\nVergiss nicht, die Wii-Fernbedienung\nund das Nunchuk stets gleichzeitig\nruckartig zu bewegen!")
          }

          void entrypoint_119_01() {
          	start()
/*< 68>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*< 70>*/ 		printf("\x0E\x01\x09\x04\x09\x1901Richte dem Besitzer der Kürbisbar\nmeine besten Grüße aus!")
          	  case 1:
/*< 53>*/ 		switch (story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */]) {
          		  case 0:
/*< 54>*/ 			switch (adventure_pouch_has(2 0x0002)) {
          			  case 0:
/*< 67>*/ 				switch (zone_temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
          					flw_57:
/*< 57>*/ 					entrypoint_119_03();
          				  case 1:
/*< 58>*/ 					printf("\x0E\x01\x09\x04\x00\x03Oh! Du hast ja... noch mehr heiße\nKürbissuppe bei dir! Die sieht ja\nunheimlich lecker aus... Oooh...\n[1]Hier, bitte...[2]...")
/*< 59>*/ 					switch (choice(2)) {
          					  case 0:
/*< 61>*/ 						printf("\x0E\x01\x09\x04\x17\x1909Du gibst sie mir wirklich? Oh... Das ist\nsehr nett! Du hattest sicherlich viel\nMühe, sie mir zu bringen. Also dann,\nguten Appetit!")
/*<138>*/ 						{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 108, 'param3': 47}
/*<108>*/ 						make_actor_do_something(0, 0)
/*< 62>*/ 						make_actor_do_something(1, 0)
/*<119>*/ 						{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 99, 'param3': 15}
/*< 99>*/ 						set_camera(10, 0)
/*<100>*/ 						{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 139, 'param3': 13}
/*<139>*/ 						{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 102, 'param3': 48}
/*<102>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 96, 'next': 101, 'param3': 6}
/*<101>*/ 						{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5651, 'next': 103, 'param3': 13}
/*<103>*/ 						printf("Mmmmmmh!\x0E\x01\x05\x04\x1E\x00")
/*<104>*/ 						set_camera(11, 0)
/*< 63>*/ 						printf("Oh! Wie lecker! Hervorragend!\n\n\n\n\x0E\x01\x09\x04\x17\x1900Diese Suppe ist einfach das Köstlichste,\nwas es gibt, ganz egal, wie oft man sie\nisst!")
/*<154>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 144, 'param3': 47}
/*<144>*/ 						set_camera(12, 0)
/*<143>*/ 						make_actor_do_something(2, 0)
/*<155>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 142, 'param3': 48}
/*<142>*/ 						printf("\x0E\x01\x09\x04\x08\x200Danke, Link! Das hier ist\ndeine Belohnung.")
/*<105>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 64, 'param3': 42}
/*< 64>*/ 						give_item(4 0x04);
/*< 71>*/ 						zone_temp_flags[1 /* 0x1 02 */] = true;
          					  case 1:
/*< 60>*/ 						printf("\x0E\x01\x06\x02\xFCCD... ...\x0E\x01\x06\x02Í\n\n\n\n\x0E\x01\x09\x04\x08\x1900Ahahaha! Das war doch nur ein Scherz!")
/*< 65>*/ 						zone_temp_flags[2 /* 0x1 04 */] = true;
          					}
          				}
          			  case 1:
          				goto flw_57
          			}
          		  case 1:
/*< 33>*/ 			switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
          			  case 0:
/*< 34>*/ 				switch (adventure_pouch_has(2 0x0002)) {
          				  case 0:
/*< 37>*/ 					printf("\x0E\x01\x09\x04\x08\x1901Hallo, Link! Übst du auch\nfleißig mit dem Schwert?\n\n\n\x0E\x01\x09\x04\x00\x200Hm?!?\n\n\n\n\x0E\x01\x09\x04\x00\x1909Das... Das ist doch nicht etwa meine\nheißgeliebte <r<Kürbissuppe>>?!?\n\n\n\x0E\x01\x09\x04\x00\x200Der Besitzer der Kürbisbar hat dich\ngebeten, mir etwas davon zu bringen?\nUnd du hast einfach so eingewilligt?\n[1]So ist es![2-]Nein.")
/*< 41>*/ 					switch (choice(2)) {
          					  case 0:
/*< 42>*/ 						printf("\x0E\x01\x09\x04\x17\x1909Na, dann her damit, aber hurtig!\n[1]Bitte sehr![2-]Niemals!")
/*< 44>*/ 						switch (choice(2)) {
          						  case 0:
/*<135>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 107, 'param3': 47}
/*<107>*/ 							make_actor_do_something(0, 0)
/*< 48>*/ 							make_actor_do_something(1, 0)
/*<118>*/ 							{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 95, 'param3': 15}
/*< 95>*/ 							set_camera(10, 0)
/*< 91>*/ 							{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 136, 'param3': 13}
/*<136>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 93, 'param3': 48}
/*< 93>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 96, 'next': 92, 'param3': 6}
/*< 92>*/ 							{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5655, 'next': 94, 'param3': 13}
/*< 94>*/ 							printf("Mmmmmmh!\x0E\x01\x05\x04\x1E\x00")
/*< 96>*/ 							set_camera(11, 0)
/*< 52>*/ 							printf("\x0E\x01\x09\x04\x00\x13Mmmh, einfach lecker!\n\n\n\n\x0E\x01\x09\x04\x17\x1900Kürbissuppe schmeckt eben nur, wenn\nsie so richtig heiß ist!")
/*<151>*/ 							{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 141, 'param3': 47}
/*<141>*/ 							make_actor_do_something(2, 0)
/*<145>*/ 							set_camera(12, 0)
/*<152>*/ 							{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 140, 'param3': 48}
/*<140>*/ 							printf("\x0E\x01\x09\x04\x08\x1900Gut gemacht! Bitte richte dem Besitzer\nder Kürbisbar meinen besten Dank aus!")
/*< 51>*/ 							story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */] = true;
/*< 66>*/ 							zone_temp_flags[1 /* 0x1 02 */] = true;
/*<153>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*< 47>*/ 							printf("\x0E\x01\x09\x04\x00\x1D00Was bist du denn für ein Scherzbold?\nWurdest du nicht gebeten, mir diese\nSuppe zu bringen? Was soll denn das?\n\n\x0E\x01\x09\x04\x08\x1D00Wenn du sie selbst essen möchtest, dann\nbring mir gefälligst eine neue!\n\n\nAber wehe, wenn sie nicht heiß ist, oh...\nDann raste ich aus!")
          						}
          					  case 1:
/*< 40>*/ 						printf("\x0E\x01\x09\x04\x0E\x1D00Oh... Ich verstehe... Dabei habe ich ihn\nextra darum gebeten, mir jeden Tag\nmeine Suppe zu bringen!\n\n\x0E\x01\x09\x04\x08\x1D00Wenn ich nur einen Tag ohne diese\nKürbissuppe leben muss, werde ich\nzum wilden Affen!")
          					}
          				  case 1:
/*< 35>*/ 					switch (adventure_pouch_has(3 0x0003)) {
          					  case 0:
/*< 36>*/ 						printf("\x0E\x01\x09\x04\x08\x1901Hallo, Link! Übst du auch\nfleißig mit dem Schwert?\n\n\n\x0E\x01\x09\x04\x00\x200Hm?!?\n\n\n\n\x0E\x01\x09\x04\x00\x1909Das... Das ist doch nicht etwa meine\nheißgeliebte <r<Kürbissuppe>>?!?\n\n\n\x0E\x01\x09\x04\x00\x200Der Besitzer der Kürbisbar hat dich\ngebeten, mir etwas davon zu bringen?\nUnd du hast einfach so eingewilligt?\n[1]So ist es![2-]Nein.")
/*< 39>*/ 						switch (choice(2)) {
          						  case 0:
/*< 43>*/ 							printf("\x0E\x01\x09\x04\x17\x1909Na, dann her damit, aber hurtig!\n[1]Bitte sehr![2-]Niemals!")
/*< 45>*/ 							switch (choice(2)) {
          							  case 0:
/*<132>*/ 								{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 106, 'param3': 47}
/*<106>*/ 								make_actor_do_something(0, 0)
/*< 49>*/ 								make_actor_do_something(1, 0)
/*<117>*/ 								{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 97, 'param3': 15}
/*< 97>*/ 								set_camera(10, 0)
/*< 88>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 133, 'param3': 13}
/*<133>*/ 								{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 90, 'param3': 48}
/*< 90>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 96, 'next': 89, 'param3': 6}
/*< 89>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4118, 'next': 147, 'param3': 13}
/*<147>*/ 								set_camera(11, 0)
/*<146>*/ 								printf("Was ist denn das für eine kalte Brühe?\n<pause14>Diese Suppe schmeckt ja ekelhaft!")
/*<148>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 149, 'param3': 47}
/*<149>*/ 								{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 7424, 'next': 134, 'param3': 13}
/*<134>*/ 								make_actor_do_something(2, 0)
/*< 98>*/ 								set_camera(12, 0)
/*<150>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 50, 'param3': 48}
/*< 50>*/ 								printf("Kalte Suppen mag ich genauso wenig\nwie kaltherzige Frauen! Bitte bring mir\nschnell eine richtig heiße... Suppe!")
/*<137>*/ 								{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          							  case 1:
/*< 46>*/ 								printf("\x0E\x01\x09\x04\x00\x1D00Was bist du denn für ein Scherzbold?\nWurdest du nicht gebeten, mir diese\nSuppe zu bringen? Was soll denn das?\n\n\x0E\x01\x09\x04\x08\x1D00Wenn du sie selbst essen möchtest, dann\nbring mir gefälligst eine neue!\n\n\nAber wehe, wenn sie nicht heiß ist, oh...\nDann raste ich aus!")
          							}
          						  case 1:
/*< 38>*/ 							printf("\x0E\x01\x09\x04\x0E\x1D00Oh... Ich verstehe... Dabei habe ich ihn\nextra darum gebeten, mir jeden Tag\nmeine Suppe zu bringen!\n\n\x0E\x01\x09\x04\x08\x1D00Wenn ich nur einen Tag ohne diese\nKürbissuppe leben muss, werde ich\nzum wilden Affen!")
          						}
          					  case 1:
/*< 56>*/ 						entrypoint_119_03();
          					}
          				}
          			  case 1:
/*< 69>*/ 				entrypoint_119_03();
          			}
          		}
          	}
          }

          void entrypoint_119_02() {
/*< 24>*/ 	start()
/*< 30>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 11, 'next': 25, 'param3': 32}
/*< 25>*/ 	printf("\x0E\x01\x09\x04\xB0D\x02Was soll das werden, \x0E\x01\x0D\x02\x1900Link?")
/*< 31>*/ 	{'type': 'type3', 'subType': 1, 'param1': 11, 'param2': 0, 'next': 72, 'param3': 16}
/*< 72>*/ 	set_camera(1, 0)
/*< 28>*/ 	printf("\x0E\x01\x09\x04\x08\x1D00Das Übungsschwert bleibt gefälligst\nhier, mein Freund!\n\n\nDachtest du etwa, du könntest einfach\nmit dem Schwert davonschleichen?")
/*< 73>*/ 	set_camera(2, 0)
/*< 29>*/ 	make_actor_do_something(3, 11)
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 11, 'next': 26, 'param3': 17}
/*< 26>*/ 	printf("\x0E\x01\x09\x04\x00\x05Wie? <pause28>Du sagst, dein Wolkenvogel sei\nverschwunden? <pause28>Und du willst ihn nun\nsuchen? Hmmm... Ich verstehe.\n\n\x0E\x01\x09\x04\x09\xE00Eigentlich dürfen hier im Wolkenhort\nnur Ritter ein Schwert tragen, aber ich\nmache dieses Mal eine Ausnahme.\n\nAber wehe, du stiftest damit Unruhe im\nDorf! Wenn du noch üben willst, komm\nhierher und übe hier drin, verstanden?")
/*< 74>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 27, 'param3': 42}
/*< 27>*/ 	story_flags[199 /* us: 805A9AEF 0x02, jp: 805ACD6F 0x02 */] = true;
/*< 75>*/ 	scene_flags[0 'Skyloft'][56 /* 0x6 01 */] = true;
          }

          void entrypoint_119_03() {
/*< 55>*/ 	start()
/*< 13>*/ 	switch (adventure_pouch_has(9 0x0009)) {
          	  case 0:
/*<156>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*< 17>*/ 			printf("\x0E\x01\x09\x04\x00\x05Wie? Du möchtest noch mehr über die\n<r<Kunst der Abwehr >>wissen?\n[1]Tipps[2]Grundlagen[3-]Nichts")
/*< 19>*/ 			switch (choice(3)) {
          			  case 0:
/*< 20>*/ 				printf("Du möchtest also Tipps zur <r<praktischen\nAnwendung>>? Nichts leichter als das!\n\n\n\x0E\x01\x09\x04\x19\x1D00Nutze deinen Schild und halte ihn dem\nFeind entgegen, wenn er dich angreift,\num ihn <g<zurückzuschlagen>>.\n\n\x0E\x01\x09\x04\x1C\x1D00Mit der <r<Schildattacke>> kannst du ihn\nfür eine Zeit lang außer Gefecht setzen\nund dir einen Vorteil verschaffen!\n\n\x0E\x01\x09\x04\x0D\x200Gegner, die dich mit Wurfgeschossen\nangreifen oder Gegner ohne eine klar\nersichtliche Schwachstelle kannst du\nso leichter besiegen!")
          				flw_21:
/*< 21>*/ 				printf("\x0E\x01\x09\x04\x0E\x200Das richtige Timing ist das A und O im \nUmgang mit dem Schild.\n\n\n\x0E\x01\x09\x04\x08\x200Du kannst den <r<Schildstamm >>nutzen, um\ndas Timing so lange zu üben, bis du es\nperfekt beherrschst.")
          			  case 1:
/*< 18>*/ 				printf("\x0E\x01\x09\x04\x1C\x200Du kannst deinen <r<Schild >>zücken, indem\ndu das <g<Nunchuk ruckartig bewegst>>.\nDas ist die Grundlage!\n\n\x0E\x01\x09\x04\x0E\x200Um ihn zu senken, <g<ziehe entweder\ndein Schwert>>, indem du ganz einfach\ndie <g<Wii-Fernbedienung ruckartig\nbewegst>>, oder drücke (A).\n\x0E\x01\x09\x04\x08\x200Das bedeutet, wenn du dein <g<Schwert\nschwingst>>, <r<gibst du deine Verteidigung\nauf>>. Sei also vorsichtig!")
          				goto flw_21
          			  case 2:
/*<160>*/ 				printf("\x0E\x01\x09\x04\x09\x200Ach so... Ich verstehe. Du möchtest\nbestimmt an den Stämmen trainieren,\nanstatt dir die Theorie anzuhören.")
          			}
          		  case 1:
/*< 22>*/ 			switch (scene_flags[59 /* 0x6 08 */]) {
          			  case 0:
/*< 14>*/ 				printf("\x0E\x01\x09\x04\x00\x09Oh, Link! Einen sehr guten\nSchild hast du da bei dir.\n\n\n\x0E\x01\x09\x04\x19\x200Dann lass uns doch mal die <r<Kunst der\nAbwehr>> üben! Fangen wir mit dem\n<r<Grundlagentraining>> an!")
          				flw_15:
/*< 15>*/ 				printf("\x0E\x01\x09\x04\x1C\x200Du kannst deinen <r<Schild >>zücken, indem\ndu das <g<Nunchuk ruckartig bewegst>>.\nDas ist die Grundlage!\n\n\x0E\x01\x09\x04\x0E\x200Um ihn zu senken, <g<ziehe entweder\ndein Schwert>>, indem du ganz einfach\ndie <g<Wii-Fernbedienung ruckartig\nbewegst>>, oder drücke (A).\n\x0E\x01\x09\x04\x08\x200Das bedeutet, wenn du dein <g<Schwert\nschwingst>>, <r<gibst du deine Verteidigung\nauf>>. Sei also vorsichtig!")
/*< 16>*/ 				printf("\x0E\x01\x09\x04\x09\x1D00Versuch dies als Erstes!")
/*< 23>*/ 				scene_flags[0 'Skyloft'][60 /* 0x6 10 */] = true;
          			  case 1:
/*<157>*/ 				printf("\x0E\x01\x09\x04\x08\x1D04Link... \nDer Direktor hat mir erzählt, was\npassiert ist. Ich mache mir Sorgen\num Zelda...\nIch weiß selbst nicht sehr viel darüber,\naber dein Schwert hier stammt nicht\naus dem Wolkenhort.\n\nMan sagt, es sei ein <r<uraltes Artefakt>>,\nwelches nur vom auserwählten Helden\ngeführt werden kann...\n\nDa du das Schwert trägst, kann ich mir\nschon denken, was das zu bedeuten hat.")
/*<159>*/ 				printf("\x0E\x01\x09\x04\x00\x1D04Hey, Link! Ich kann nicht\nviel für dich tun, aber es gibt da noch\neine Sache, die ich dir zeigen kann.\n\n\x0E\x01\x09\x04\x19\x1D00Und zwar die <r<Kunst der Abwehr>>! Na,\ndas ist Neuland für dich, nicht wahr?\n\n\n\x0E\x01\x09\x04\x00\x200Beginnen wir mit den <r<Grundlagen>>.")
          				goto flw_15
          			}
          		}
          	  case 1:
/*< 11>*/ 		switch (scene_flags[59 /* 0x6 08 */]) {
          		  case 0:
/*< 12>*/ 			printf("\x0E\x01\x09\x04\x19\x1D01Die Kunst des Schildes ist die Kunst der\nAbwehr. Nur die Balance aus Angriff\nund Abwehr führt zum Sieg!\n\n\x0E\x01\x09\x04\x08\xE00Du kannst hier im <r<Basar >>einen <r<Schild>> \nerwerben. Komm her, wenn du einen\nhast, und übe den Umgang damit ein\nwenig.\n\x0E\x01\x09\x04\x09\x1D00Es wäre klug von dir, auf mich zu\nhören...")
          		  case 1:
/*<  8>*/ 			switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
          			  case 0:
/*<  9>*/ 				printf("\x0E\x01\x09\x04\x08\x1D04Link... \nDer Direktor hat mir erzählt, was\npassiert ist. Ich mache mir Sorgen\num Zelda...\nIch weiß selbst nicht sehr viel darüber,\naber dein Schwert hier stammt nicht\naus dem Wolkenhort.\n\nMan sagt, es sei ein <r<uraltes Artefakt>>,\nwelches nur vom auserwählten Helden\ngeführt werden kann...\n\nDa du das Schwert trägst, kann ich mir\nschon denken, was das zu bedeuten hat.")
/*<158>*/ 				printf("\x0E\x01\x09\x04\x00\x1D00Ich würde dir gerne noch etwas\nbeibringen, Link!\nAber dazu musst du dir erst\neinen <r<Schild >>zulegen.\n\x0E\x01\x09\x04\x19\x1D00Dann unterrichte ich dich in der <r<Kunst\nder Abwehr>>! Dadurch bist du dann\nperfekt für den Kampf vorbereitet.")
/*< 10>*/ 				scene_flags[0 'Skyloft'][59 /* 0x6 08 */] = true;
          			  case 1:
/*<  5>*/ 				switch (scene_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*<  6>*/ 					printf("\x0E\x01\x09\x04\x00\x05Was sagst du? Du möchtest, dass ich dir\nden Umgang mit dem Schwert erkläre?\n[1]Unbedingt![2-]Eigentlich\nnicht.")
/*<  4>*/ 					switch (choice(2)) {
          					  case 0:
/*<  3>*/ 						printf("\x0E\x01\x09\x04\x09\x203Um das Schwert zu schwingen, musst du\nnur <r<die Wii-Fernbedienung schwingen>>!\nDas ist auch schon alles!\n\nSchwingst du sie horizontal, führst du\nden <g<Horizontalschlag >>aus, während ein\nvertikaler Schwung den <g<Vertikalschlag>>\nbewirkt.\nStößt du sie nach vorne, führst du die\n<g<Stichattacke >>aus.\n\n\n\x0E\x01\x09\x04\x17\x200Bewegst du das Nunchuk und die\nWii-Fernbedienung gleichzeitig\nruckartig zur Seite, führst du die\n<g<Wirbelattacke>> aus.\n\x0E\x01\x09\x04\x18\x1D00Wenn du diese Grundlagen beherrschst,\nbist du für den Kampf bereits gerüstet.\nVergiss sie bloß nicht!\n\n\x0E\x01\x09\x04\x00\x1D04Die erste Regel beim Kampf ist jedoch\ndas <r<Anvisieren >>des Gegners durch das\nDrücken von (Z).\n\nWenn du dem Gegner gegenüberstehst,\nvisiere ihn stets mit (Z) an, ja? Das ist\nüberlebenswichtig!\x0E\x01\x11\x02\x7CD")
          						flw_7:
/*<  7>*/ 						printf("\x0E\x01\x09\x04\x1C\x1D03Du kannst diese <r<Stämme>> nutzen, um\nzu üben!\n\n\n\x0E\x01\x09\x04\x09\x200Um sie zu zerlegen, führe einfach ein\npaar <g<Übungsschläge>> in <r<Richtung der\nMarkierungen>> aus.\n\n\x0E\x01\x09\x04\x08\x200Hast du alle Pfeiler zerlegt, darfst du\ndich an einer <r<Spezialtechnik >>versuchen.")
          					  case 1:
/*<  2>*/ 						printf("\x0E\x01\x09\x04\x0E\x1A08Nun, du weißt wohl bereits bestens mit\ndem Schwert umzugehen, nicht wahr?\n\n\n\x0E\x01\x09\x04\x08\x200Trotz allem kann ein wenig Übung nie\nschaden!\n\n\n\x0E\x01\x09\x04\x19\x1D00Vergiss niemals, stets (Z) zu drücken,\num <r<den Gegner>> <r<anzuvisieren>>! Das ist\ndie Grundlage des Schwertkampfes!\x0E\x01\x11\x02\x7CD")
          						goto flw_7
          					}
          				  case 1:
/*<  1>*/ 					printf("\x0E\x01\x09\x04\x00\x03Oh, Link!\n\n\n\n\x0E\x01\x09\x04\x09\x200Du kommst, um zu üben, obwohl heute\nder Tag der Vogelreiter-Zeremonie ist.\nDas nenne ich mal Eifer!\n\nDie Übungsschwerter sind hier im\nHinterzimmer, also hole dir einfach\neines und komm danach zurück.\n\nIch bin immer hier, wenn du Fragen\nzum Umgang mit dem Schwert hast.")
          				}
          			}
          		}
          	}
          }

          void entrypoint_119_04() {
/*< 76>*/ 	start()
/*< 84>*/ 	printf("\x0E\x01\x09\x04\x01\x201An diesem Stamm hier kannst du den\n<r<Vertikalschlag>> üben. Schwinge die\nWii-Fernbedienung von oben nach\nunten!")
          }

          void entrypoint_119_05() {
/*< 80>*/ 	start()
/*< 85>*/ 	printf("\x0E\x01\x09\x04\x19\x203An diesem Stamm hier kannst du den\n<r<Horizontalschlag>> üben.\n\n\nSchwinge die Wii-Fernbedienung\ngerade von links nach rechts oder\nvon rechts nach links!")
          }

          void entrypoint_119_06() {
/*< 81>*/ 	start()
/*< 86>*/ 	printf("\x0E\x01\x09\x04\x1D\x202An diesem Stamm hier kannst du den\n<r<Diagonalschlag>> üben.\n\n\nSchwinge die Wii-Fernbedienung\ndiagonal von oben nach unten und\nversuche, die Richtung des Schnittes\nim Pfahl nachzuziehen.")
          }

          void entrypoint_119_07() {
/*< 82>*/ 	start()
/*< 87>*/ 	printf("\x0E\x01\x09\x04\x08\x203An diesem Stamm hier kannst du die\n<r<Stichattacke>> üben.\n\n\nVisiere die Schnittstelle an und stoße\ndie Wii-Fernbedienung mit Schwung\nnach vorne!")
          }

          void entrypoint_119_08() {
/*< 83>*/ 	start()
/*<161>*/ 	switch (adventure_pouch_has(0 0x0000)) {
          	  case 0:
/*< 79>*/ 		printf("\x0E\x01\x09\x04\x19\x202An diesem Stamm hier kannst du das\n<r<Abwehren>> üben.\n\n\n\x0E\x01\x09\x04\x1C\x1D00Schlage den Stamm mit dem Schwert\nund <g<bewege das Nunchuk ruckartig>>,\num danach schnell eine <r<Schildattacke>>\nauszuführen.")
          	  case 1:
/*< 77>*/ 		switch (adventure_pouch_has(9 0x0009)) {
          		  case 0:
/*<162>*/ 			printf("\x0E\x01\x09\x04\x19\x1D02An diesem Stamm kannst du das\n<r<Abwehren>> üben. Halte deinen <r<Schild>>\nbereit, denn wenn dich der Stamm\nerwischt, wirft er dich um!")
          		  case 1:
/*< 78>*/ 			printf("\x0E\x01\x09\x04\x19\x1D02An diesem Stamm hier kannst du das\n<r<Abwehren>> üben...\n\n\nOhne einen <r<Schild>> kannst du hier aber\nleider nichts machen.")
          		}
          	}
          }

          void entrypoint_119_09() {
/*<109>*/ 	start()
/*<114>*/ 	printf("\x0E\x01\x09\x04\n\x213Sehr gut, Link!")
/*<116>*/ 	set_camera(3, 0)
/*<110>*/ 	printf("\x0E\x01\x09\x04\x08\x1908Du weißt mit dem Schwert umzugehen,\ndas freut mich! Ich bin wirklich stolz\nauf dich.\n\n\x0E\x01\x09\x04\x09\x200Wenn du möchtest, kannst du jetzt die\n<g<Wirbelattacke>> üben.\n[1]Unbedingt![2-]Keine Lust.")
          }

