          void entrypoint_119_10() {
/*<113>*/ 	start()
/*<120>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*<112>*/ 		printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00170209><0x10008:0x02cd>Hervorragend!")
/*<124>*/ 		set_camera(3, 0)
/*<125>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00171a08>Ja, so muss das aussehen!\n\n\n\n<0x10009:0x00090200>Also gut. Willst du zum Abschluss noch\nden <color green<Fangstoß >coloroff>ausprobieren?\n[1-]Aber sicher![2]Keine Lust.")
          	  case 1:
/*<121>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00091d04>Was ist denn los, <heroname>?\nDu stellst dich doch sonst nicht so\ntollpatschig an!")
/*<122>*/ 		set_camera(3, 0)
/*<123>*/ 		printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00081d01>Du musst nur im Zentrum der Stämme\nstehen und Wii-Fernbedienung und\nNunchuk dann <color red<gleichzeitig ruckartig\n>coloroff><color red<seitlich bewegen>coloroff>!\n<0x10009:0x00090200>Willst du es erneut versuchen?\n[1-]Ja, bitte![2]Nein, danke.")
          	}
          }

          void entrypoint_119_11() {
/*<115>*/ 	start()
/*<111>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00080200>Diese Antwort wollte ich hören!\nUm dich herum werden nun mehrere\nStämme erscheinen.\n\nBleib auf der Stelle stehen und führe\ndie Wirbelattacke aus. Bewege hierfür\nWii-Fernbedienung und Nunchuk\n<color red<gleichzeitig >coloroff><color green<ruckartig zur Seite>coloroff>.\n<0x10009:0x00090200>Zeig mir, was du kannst!")
          }

          void entrypoint_119_12() {
/*<126>*/ 	start()
/*<127>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00081d03>Ha ha, sehr gut! Der <color green<Fangstoß >coloroff>ist nur\ndann möglich, wenn dein Gegner am\nBoden liegt.\n\nDrücke (Z), um ihn <color red<anzuvisieren>coloroff> und\n<color red<bewege >coloroff>die Wii-Fernbedienung und\ndas Nunchuk <color red<gleichzeitig ruckartig>coloroff>!<0x10011:0x07cd>\n\n<0x10009:0x00091d00>Schlage diesen Stamm zu Boden und\nversuche dann, den Fangstoß darauf\nanzuwenden!")
          }

          void entrypoint_119_13() {
/*<128>*/ 	start()
/*<129>*/ 	printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x00171a09><0x10008:0x01cd>Wunderbar!")
/*<130>*/ 	set_camera(3, 0)
/*<131>*/ 	printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00190200>Du kannst den <color green<Fangstoß >coloroff>auch dann\neinsetzen, wenn du den Gegner mit\ndem <color red<Schild>coloroff> oder einer <color red<Wirbelattacke>coloroff>\nzu Boden geworfen hast.\n<0x10009:0x001c0200>Der Feind bleibt aber nicht für immer\nam Boden liegen, also lass dir nicht zu\nviel Zeit!\n\nVergiss nicht, die Wii-Fernbedienung\nund das Nunchuk stets gleichzeitig\nruckartig zu bewegen!")
          }

          void entrypoint_119_01() {
          	start()
/*< 68>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*< 70>*/ 		printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00091901>Richte dem Besitzer der Kürbisbar\nmeine besten Grüße aus!")
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
/*< 58>*/ 					printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00000003>Oh! Du hast ja... noch mehr heiße\nKürbissuppe bei dir! Die sieht ja\nunheimlich lecker aus... Oooh...\n[1-]Hier, bitte...[2-]...")
/*< 59>*/ 					switch (choice(2)) {
          					  case 0:
/*< 61>*/ 						printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00171909>Du gibst sie mir wirklich? Oh... Das ist\nsehr nett! Du hattest sicherlich viel\nMühe, sie mir zu bringen. Also dann,\nguten Appetit!")
/*<138>*/ 						{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 108, 'param3': 47}
/*<108>*/ 						make_actor_do_something(0, 0)
/*< 62>*/ 						make_actor_do_something(1, 0)
/*<119>*/ 						{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 99, 'param3': 15}
/*< 99>*/ 						set_camera(10, 0)
/*<100>*/ 						{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 139, 'param3': 13}
/*<139>*/ 						{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 102, 'param3': 48}
/*<102>*/ 						wait_frames(96)
/*<101>*/ 						{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5651, 'next': 103, 'param3': 13}
/*<103>*/ 						printf(/* textboxtype: 1, unk: 0, line: 44 */ "Mmmmmmh!<0x10005:0x001e0000>")
/*<104>*/ 						set_camera(11, 0)
/*< 63>*/ 						printf(/* textboxtype: 1, unk: 0, line: 48 */ "Oh! Wie lecker! Hervorragend!\n\n\n\n<0x10009:0x00171900>Diese Suppe ist einfach das Köstlichste,\nwas es gibt, ganz egal, wie oft man sie\nisst!")
/*<154>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 144, 'param3': 47}
/*<144>*/ 						set_camera(12, 0)
/*<143>*/ 						make_actor_do_something(2, 0)
/*<155>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 142, 'param3': 48}
/*<142>*/ 						printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00080200>Danke, <heroname>! Das hier ist\ndeine Belohnung.")
/*<105>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 64, 'param3': 42}
/*< 64>*/ 						give_item(4 0x04);
/*< 71>*/ 						zone_temp_flags[1 /* 0x1 02 */] = true;
          					  case 1:
/*< 60>*/ 						printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10006:0xfccd>... ...<0x10006:0x00cd>\n\n\n\n<0x10009:0x00081900>Ahahaha! Das war doch nur ein Scherz!")
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
/*< 37>*/ 					printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00081901>Hallo, <heroname>! Übst du auch\nfleißig mit dem Schwert?\n\n\n<0x10009:0x00000200>Hm?!?\n\n\n\n<0x10009:0x00001909>Das... Das ist doch nicht etwa meine\nheißgeliebte <color red<Kürbissuppe>coloroff>?!?\n\n\n<0x10009:0x00000200>Der Besitzer der Kürbisbar hat dich\ngebeten, mir etwas davon zu bringen?\nUnd du hast einfach so eingewilligt?\n[1-]So ist es![2]Nein.")
/*< 41>*/ 					switch (choice(2)) {
          					  case 0:
/*< 42>*/ 						printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00171909>Na, dann her damit, aber hurtig!\n[1-]Bitte sehr![2]Niemals!")
/*< 44>*/ 						switch (choice(2)) {
          						  case 0:
/*<135>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 107, 'param3': 47}
/*<107>*/ 							make_actor_do_something(0, 0)
/*< 48>*/ 							make_actor_do_something(1, 0)
/*<118>*/ 							{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 95, 'param3': 15}
/*< 95>*/ 							set_camera(10, 0)
/*< 91>*/ 							{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 136, 'param3': 13}
/*<136>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 93, 'param3': 48}
/*< 93>*/ 							wait_frames(96)
/*< 92>*/ 							{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5655, 'next': 94, 'param3': 13}
/*< 94>*/ 							printf(/* textboxtype: 1, unk: 0, line: 44 */ "Mmmmmmh!<0x10005:0x001e0000>")
/*< 96>*/ 							set_camera(11, 0)
/*< 52>*/ 							printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00000013>Mmmh, einfach lecker!\n\n\n\n<0x10009:0x00171900>Kürbissuppe schmeckt eben nur, wenn\nsie so richtig heiß ist!")
/*<151>*/ 							{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 141, 'param3': 47}
/*<141>*/ 							make_actor_do_something(2, 0)
/*<145>*/ 							set_camera(12, 0)
/*<152>*/ 							{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 140, 'param3': 48}
/*<140>*/ 							printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x00081900>Gut gemacht! Bitte richte dem Besitzer\nder Kürbisbar meinen besten Dank aus!")
/*< 51>*/ 							story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */] = true;
/*< 66>*/ 							zone_temp_flags[1 /* 0x1 02 */] = true;
/*<153>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*< 47>*/ 							printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00001d00>Was bist du denn für ein Scherzbold?\nWurdest du nicht gebeten, mir diese\nSuppe zu bringen? Was soll denn das?\n\n<0x10009:0x00081d00>Wenn du sie selbst essen möchtest, dann\nbring mir gefälligst eine neue!\n\n\nAber wehe, wenn sie nicht heiß ist, oh...\nDann raste ich aus!")
          						}
          					  case 1:
/*< 40>*/ 						printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x000e1d00>Oh... Ich verstehe... Dabei habe ich ihn\nextra darum gebeten, mir jeden Tag\nmeine Suppe zu bringen!\n\n<0x10009:0x00081d00>Wenn ich nur einen Tag ohne diese\nKürbissuppe leben muss, werde ich\nzum wilden Affen!")
          					}
          				  case 1:
/*< 35>*/ 					switch (adventure_pouch_has(3 0x0003)) {
          					  case 0:
/*< 36>*/ 						printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00081901>Hallo, <heroname>! Übst du auch\nfleißig mit dem Schwert?\n\n\n<0x10009:0x00000200>Hm?!?\n\n\n\n<0x10009:0x00001909>Das... Das ist doch nicht etwa meine\nheißgeliebte <color red<Kürbissuppe>coloroff>?!?\n\n\n<0x10009:0x00000200>Der Besitzer der Kürbisbar hat dich\ngebeten, mir etwas davon zu bringen?\nUnd du hast einfach so eingewilligt?\n[1-]So ist es![2]Nein.")
/*< 39>*/ 						switch (choice(2)) {
          						  case 0:
/*< 43>*/ 							printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00171909>Na, dann her damit, aber hurtig!\n[1-]Bitte sehr![2]Niemals!")
/*< 45>*/ 							switch (choice(2)) {
          							  case 0:
/*<132>*/ 								{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 106, 'param3': 47}
/*<106>*/ 								make_actor_do_something(0, 0)
/*< 49>*/ 								make_actor_do_something(1, 0)
/*<117>*/ 								{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 97, 'param3': 15}
/*< 97>*/ 								set_camera(10, 0)
/*< 88>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 133, 'param3': 13}
/*<133>*/ 								{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 90, 'param3': 48}
/*< 90>*/ 								wait_frames(96)
/*< 89>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4118, 'next': 147, 'param3': 13}
/*<147>*/ 								set_camera(11, 0)
/*<146>*/ 								printf(/* textboxtype: 1, unk: 0, line: 40 */ "Was ist denn das für eine kalte Brühe?\n<pause 20>Diese Suppe schmeckt ja ekelhaft!")
/*<148>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 149, 'param3': 47}
/*<149>*/ 								{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 7424, 'next': 134, 'param3': 13}
/*<134>*/ 								make_actor_do_something(2, 0)
/*< 98>*/ 								set_camera(12, 0)
/*<150>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 50, 'param3': 48}
/*< 50>*/ 								printf(/* textboxtype: 1, unk: 0, line: 41 */ "Kalte Suppen mag ich genauso wenig\nwie kaltherzige Frauen! Bitte bring mir\nschnell eine richtig heiße... Suppe!")
/*<137>*/ 								{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          							  case 1:
/*< 46>*/ 								printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00001d00>Was bist du denn für ein Scherzbold?\nWurdest du nicht gebeten, mir diese\nSuppe zu bringen? Was soll denn das?\n\n<0x10009:0x00081d00>Wenn du sie selbst essen möchtest, dann\nbring mir gefälligst eine neue!\n\n\nAber wehe, wenn sie nicht heiß ist, oh...\nDann raste ich aus!")
          							}
          						  case 1:
/*< 38>*/ 							printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x000e1d00>Oh... Ich verstehe... Dabei habe ich ihn\nextra darum gebeten, mir jeden Tag\nmeine Suppe zu bringen!\n\n<0x10009:0x00081d00>Wenn ich nur einen Tag ohne diese\nKürbissuppe leben muss, werde ich\nzum wilden Affen!")
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
/*< 25>*/ 	printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x0b0d0002>Was soll das werden, <0x1000D:0x1900><heroname>?")
/*< 31>*/ 	{'type': 'type3', 'subType': 1, 'param1': 11, 'param2': 0, 'next': 72, 'param3': 16}
/*< 72>*/ 	set_camera(1, 0)
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00081d00>Das Übungsschwert bleibt gefälligst\nhier, mein Freund!\n\n\nDachtest du etwa, du könntest einfach\nmit dem Schwert davonschleichen?")
/*< 73>*/ 	set_camera(2, 0)
/*< 29>*/ 	make_actor_do_something(3, 11)
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 11, 'next': 26, 'param3': 17}
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00000005>Wie? <pause 40>Du sagst, dein Wolkenvogel sei\nverschwunden? <pause 40>Und du willst ihn nun\nsuchen? Hmmm... Ich verstehe.\n\n<0x10009:0x00090e00>Eigentlich dürfen hier im Wolkenhort\nnur Ritter ein Schwert tragen, aber ich\nmache dieses Mal eine Ausnahme.\n\nAber wehe, du stiftest damit Unruhe im\nDorf! Wenn du noch üben willst, komm\nhierher und übe hier drin, verstanden?")
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
/*< 17>*/ 			printf(/* textboxtype: 1, unk: 1, line: 13 */ "<0x10009:0x00000005>Wie? Du möchtest noch mehr über die\n<color red<Kunst der Abwehr >coloroff>wissen?\n[1-]Tipps[2-]Grundlagen[3]Nichts")
/*< 19>*/ 			switch (choice(3)) {
          			  case 0:
/*< 20>*/ 				printf(/* textboxtype: 1, unk: 0, line: 14 */ "Du möchtest also Tipps zur <color red<praktischen\nAnwendung>coloroff>? Nichts leichter als das!\n\n\n<0x10009:0x00191d00>Nutze deinen Schild und halte ihn dem\nFeind entgegen, wenn er dich angreift,\num ihn <color green<zurückzuschlagen>coloroff>.\n\n<0x10009:0x001c1d00>Mit der <color red<Schildattacke>coloroff> kannst du ihn\nfür eine Zeit lang außer Gefecht setzen\nund dir einen Vorteil verschaffen!\n\n<0x10009:0x000d0200>Gegner, die dich mit Wurfgeschossen\nangreifen oder Gegner ohne eine klar\nersichtliche Schwachstelle kannst du\nso leichter besiegen!")
          				flw_21:
/*< 21>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x000e0200>Das richtige Timing ist das A und O im \nUmgang mit dem Schild.\n\n\n<0x10009:0x00080200>Du kannst den <color red<Schildstamm >coloroff>nutzen, um\ndas Timing so lange zu üben, bis du es\nperfekt beherrschst.")
          			  case 1:
/*< 18>*/ 				printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x001c0200>Du kannst deinen <color red<Schild >coloroff>zücken, indem\ndu das <color green<Nunchuk ruckartig bewegst>coloroff>.\nDas ist die Grundlage!\n\n<0x10009:0x000e0200>Um ihn zu senken, <color green<ziehe entweder\ndein Schwert>coloroff>, indem du ganz einfach\ndie <color green<Wii-Fernbedienung ruckartig\nbewegst>coloroff>, oder drücke (A).\n<0x10009:0x00080200>Das bedeutet, wenn du dein <color green<Schwert\nschwingst>coloroff>, <color red<gibst du deine Verteidigung\nauf>coloroff>. Sei also vorsichtig!")
          				goto flw_21
          			  case 2:
/*<160>*/ 				printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00090200>Ach so... Ich verstehe. Du möchtest\nbestimmt an den Stämmen trainieren,\nanstatt dir die Theorie anzuhören.")
          			}
          		  case 1:
/*< 22>*/ 			switch (scene_flags[59 /* 0x6 08 */]) {
          			  case 0:
/*< 14>*/ 				printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00000009>Oh, <heroname>! Einen sehr guten\nSchild hast du da bei dir.\n\n\n<0x10009:0x00190200>Dann lass uns doch mal die <color red<Kunst der\nAbwehr>coloroff> üben! Fangen wir mit dem\n<color red<Grundlagentraining>coloroff> an!")
          				flw_15:
/*< 15>*/ 				printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x001c0200>Du kannst deinen <color red<Schild >coloroff>zücken, indem\ndu das <color green<Nunchuk ruckartig bewegst>coloroff>.\nDas ist die Grundlage!\n\n<0x10009:0x000e0200>Um ihn zu senken, <color green<ziehe entweder\ndein Schwert>coloroff>, indem du ganz einfach\ndie <color green<Wii-Fernbedienung ruckartig\nbewegst>coloroff>, oder drücke (A).\n<0x10009:0x00080200>Das bedeutet, wenn du dein <color green<Schwert\nschwingst>coloroff>, <color red<gibst du deine Verteidigung\nauf>coloroff>. Sei also vorsichtig!")
/*< 16>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00091d00>Versuch dies als Erstes!")
/*< 23>*/ 				scene_flags[0 'Skyloft'][60 /* 0x6 10 */] = true;
          			  case 1:
/*<157>*/ 				printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00081d04><heroname>... \nDer Direktor hat mir erzählt, was\npassiert ist. Ich mache mir Sorgen\num Zelda...\nIch weiß selbst nicht sehr viel darüber,\naber dein Schwert hier stammt nicht\naus dem Wolkenhort.\n\nMan sagt, es sei ein <color red<uraltes Artefakt>coloroff>,\nwelches nur vom auserwählten Helden\ngeführt werden kann...\n\nDa du das Schwert trägst, kann ich mir\nschon denken, was das zu bedeuten hat.")
/*<159>*/ 				printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00001d04>Hey, <heroname>! Ich kann nicht\nviel für dich tun, aber es gibt da noch\neine Sache, die ich dir zeigen kann.\n\n<0x10009:0x00191d00>Und zwar die <color red<Kunst der Abwehr>coloroff>! Na,\ndas ist Neuland für dich, nicht wahr?\n\n\n<0x10009:0x00000200>Beginnen wir mit den <color red<Grundlagen>coloroff>.")
          				goto flw_15
          			}
          		}
          	  case 1:
/*< 11>*/ 		switch (scene_flags[59 /* 0x6 08 */]) {
          		  case 0:
/*< 12>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00191d01>Die Kunst des Schildes ist die Kunst der\nAbwehr. Nur die Balance aus Angriff\nund Abwehr führt zum Sieg!\n\n<0x10009:0x00080e00>Du kannst hier im <color red<Basar >coloroff>einen <color red<Schild>coloroff> \nerwerben. Komm her, wenn du einen\nhast, und übe den Umgang damit ein\nwenig.\n<0x10009:0x00091d00>Es wäre klug von dir, auf mich zu\nhören...")
          		  case 1:
/*<  8>*/ 			switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
          			  case 0:
/*<  9>*/ 				printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00081d04><heroname>... \nDer Direktor hat mir erzählt, was\npassiert ist. Ich mache mir Sorgen\num Zelda...\nIch weiß selbst nicht sehr viel darüber,\naber dein Schwert hier stammt nicht\naus dem Wolkenhort.\n\nMan sagt, es sei ein <color red<uraltes Artefakt>coloroff>,\nwelches nur vom auserwählten Helden\ngeführt werden kann...\n\nDa du das Schwert trägst, kann ich mir\nschon denken, was das zu bedeuten hat.")
/*<158>*/ 				printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00001d00>Ich würde dir gerne noch etwas\nbeibringen, <heroname>!\nAber dazu musst du dir erst\neinen <color red<Schild >coloroff>zulegen.\n<0x10009:0x00191d00>Dann unterrichte ich dich in der <color red<Kunst\nder Abwehr>coloroff>! Dadurch bist du dann\nperfekt für den Kampf vorbereitet.")
/*< 10>*/ 				scene_flags[0 'Skyloft'][59 /* 0x6 08 */] = true;
          			  case 1:
/*<  5>*/ 				switch (scene_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*<  6>*/ 					printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00000005>Was sagst du? Du möchtest, dass ich dir\nden Umgang mit dem Schwert erkläre?\n[1-]Unbedingt![2]Eigentlich\nnicht.")
/*<  4>*/ 					switch (choice(2)) {
          					  case 0:
/*<  3>*/ 						printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00090203>Um das Schwert zu schwingen, musst du\nnur <color red<die Wii-Fernbedienung schwingen>coloroff>!\nDas ist auch schon alles!\n\nSchwingst du sie horizontal, führst du\nden <color green<Horizontalschlag >coloroff>aus, während ein\nvertikaler Schwung den <color green<Vertikalschlag>coloroff>\nbewirkt.\nStößt du sie nach vorne, führst du die\n<color green<Stichattacke >coloroff>aus.\n\n\n<0x10009:0x00170200>Bewegst du das Nunchuk und die\nWii-Fernbedienung gleichzeitig\nruckartig zur Seite, führst du die\n<color green<Wirbelattacke>coloroff> aus.\n<0x10009:0x00181d00>Wenn du diese Grundlagen beherrschst,\nbist du für den Kampf bereits gerüstet.\nVergiss sie bloß nicht!\n\n<0x10009:0x00001d04>Die erste Regel beim Kampf ist jedoch\ndas <color red<Anvisieren >coloroff>des Gegners durch das\nDrücken von (Z).\n\nWenn du dem Gegner gegenüberstehst,\nvisiere ihn stets mit (Z) an, ja? Das ist\nüberlebenswichtig!<0x10011:0x07cd>")
          						flw_7:
/*<  7>*/ 						printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x001c1d03>Du kannst diese <color red<Stämme>coloroff> nutzen, um\nzu üben!\n\n\n<0x10009:0x00090200>Um sie zu zerlegen, führe einfach ein\npaar <color green<Übungsschläge>coloroff> in <color red<Richtung der\nMarkierungen>coloroff> aus.\n\n<0x10009:0x00080200>Hast du alle Pfeiler zerlegt, darfst du\ndich an einer <color red<Spezialtechnik >coloroff>versuchen.")
          					  case 1:
/*<  2>*/ 						printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x000e1a08>Nun, du weißt wohl bereits bestens mit\ndem Schwert umzugehen, nicht wahr?\n\n\n<0x10009:0x00080200>Trotz allem kann ein wenig Übung nie\nschaden!\n\n\n<0x10009:0x00191d00>Vergiss niemals, stets (Z) zu drücken,\num <color red<den Gegner>coloroff> <color red<anzuvisieren>coloroff>! Das ist\ndie Grundlage des Schwertkampfes!<0x10011:0x07cd>")
          						goto flw_7
          					}
          				  case 1:
/*<  1>*/ 					printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000003>Oh, <heroname>!\n\n\n\n<0x10009:0x00090200>Du kommst, um zu üben, obwohl heute\nder Tag der Vogelreiter-Zeremonie ist.\nDas nenne ich mal Eifer!\n\nDie Übungsschwerter sind hier im\nHinterzimmer, also hole dir einfach\neines und komm danach zurück.\n\nIch bin immer hier, wenn du Fragen\nzum Umgang mit dem Schwert hast.")
          				}
          			}
          		}
          	}
          }

          void entrypoint_119_04() {
/*< 76>*/ 	start()
/*< 84>*/ 	printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00010201>An diesem Stamm hier kannst du den\n<color red<Vertikalschlag>coloroff> üben. Schwinge die\nWii-Fernbedienung von oben nach\nunten!")
          }

          void entrypoint_119_05() {
/*< 80>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00190203>An diesem Stamm hier kannst du den\n<color red<Horizontalschlag>coloroff> üben.\n\n\nSchwinge die Wii-Fernbedienung\ngerade von links nach rechts oder\nvon rechts nach links!")
          }

          void entrypoint_119_06() {
/*< 81>*/ 	start()
/*< 86>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x001d0202>An diesem Stamm hier kannst du den\n<color red<Diagonalschlag>coloroff> üben.\n\n\nSchwinge die Wii-Fernbedienung\ndiagonal von oben nach unten und\nversuche, die Richtung des Schnittes\nim Pfahl nachzuziehen.")
          }

          void entrypoint_119_07() {
/*< 82>*/ 	start()
/*< 87>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00080203>An diesem Stamm hier kannst du die\n<color red<Stichattacke>coloroff> üben.\n\n\nVisiere die Schnittstelle an und stoße\ndie Wii-Fernbedienung mit Schwung\nnach vorne!")
          }

          void entrypoint_119_08() {
/*< 83>*/ 	start()
/*<161>*/ 	switch (adventure_pouch_has(0 0x0000)) {
          	  case 0:
/*< 79>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00190202>An diesem Stamm hier kannst du das\n<color red<Abwehren>coloroff> üben.\n\n\n<0x10009:0x001c1d00>Schlage den Stamm mit dem Schwert\nund <color green<bewege das Nunchuk ruckartig>coloroff>,\num danach schnell eine <color red<Schildattacke>coloroff>\nauszuführen.")
          	  case 1:
/*< 77>*/ 		switch (adventure_pouch_has(9 0x0009)) {
          		  case 0:
/*<162>*/ 			printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x00191d02>An diesem Stamm kannst du das\n<color red<Abwehren>coloroff> üben. Halte deinen <color red<Schild>coloroff>\nbereit, denn wenn dich der Stamm\nerwischt, wirft er dich um!")
          		  case 1:
/*< 78>*/ 			printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00191d02>An diesem Stamm hier kannst du das\n<color red<Abwehren>coloroff> üben...\n\n\nOhne einen <color red<Schild>coloroff> kannst du hier aber\nleider nichts machen.")
          		}
          	}
          }

          void entrypoint_119_09() {
/*<109>*/ 	start()
/*<114>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x000a0213>Sehr gut, <heroname>!")
/*<116>*/ 	set_camera(3, 0)
/*<110>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00081908>Du weißt mit dem Schwert umzugehen,\ndas freut mich! Ich bin wirklich stolz\nauf dich.\n\n<0x10009:0x00090200>Wenn du möchtest, kannst du jetzt die\n<color green<Wirbelattacke>coloroff> üben.\n[1-]Unbedingt![2]Keine Lust.")
          }

