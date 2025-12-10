          void entrypoint_116_01() {
          	start()
/*< 13>*/ 	switch (context_related4(1)) {
          	  case 0:
/*< 24>*/ 		switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          		  case 0:
/*< 25>*/ 			switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          			  case 0:
          				flw_5:
/*<  5>*/ 				switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          				  case 0:
/*< 57>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 115, 'param3': 12}
/*<115>*/ 					check_item_flag(71, 1)
/*<114>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 64}) {
          					  case 0:
/*<  4>*/ 						printf(/* textboxtype: 1, unk: 1, line: 4 */ "<0x10009:0x00000001>Also... Bist du bereit, ein paar hübsche\nInsekten zu fangen? Zeig mal, was du\ndrauf hast!\n\nAnfänger zahlen <color red<20 Rubine>coloroff>. Experten\nkostet der Spaß <color red<50 Rubine>coloroff>. Was darf's\ndenn nun sein?\n[1-]Anfänger[2-]Experte[3]Beenden")
          						flw_1:
/*<  1>*/ 						switch (choice(3)) {
          						  case 0:
/*<102>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 96>*/ 								switch (has_rupees(20)) {
          								  case 0:
/*< 98>*/ 									rupees += -20;
/*< 91>*/ 									printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00030100>Ich werde deine Zeit nehmen. Wenn du\ndich als flinker Fänger erweist, gibt es\neinen Preis!\n\n<0x10009:0x00000100>Als Anfänger musst du je ein Insekt\naus insgesamt fünf verschiedenen\nArten fangen. Bist du bereit?")
/*< 75>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = false;
/*<  2>*/ 									make_actor_do_something(0, 0)
          								  case 1:
/*< 97>*/ 									printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00120315>Du hast nicht genug Rubine! Auch\nwenn du zur Ritterschule gehörst,\numsonst gibt es hier nichts!")
          								}
          							  case 1:
          								flw_104:
/*<104>*/ 								printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00120813>Du scheinst die Sache nicht ernst zu\nnehmen, wenn du mit so wenig <color red<Herzen\n>coloroff>Insekten fangen willst.\n\n<0x10009:0x00000100>Fülle erst deine Herzen auf, bevor du\nzu mir zurückkehrst.")
          							}
          						  case 1:
/*<103>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 93>*/ 								switch (has_rupees(50)) {
          								  case 0:
/*< 95>*/ 									rupees += -50;
/*< 92>*/ 									printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00030100>Ich werde deine Zeit nehmen. Wenn du\ndich als flinker Fänger erweist, gibt es\neinen Preis!\n\n<0x10009:0x00000100>Als Experte musst du zehn Insekten\naus insgesamt acht verschiedenen\nArten fangen. Bist du bereit?")
/*< 76>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = true;
/*< 12>*/ 									make_actor_do_something(1, 0)
          								  case 1:
/*< 94>*/ 									printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00120315>Du hast nicht genug Rubine! Auch\nwenn du zur Ritterschule gehörst,\numsonst gibt es hier nichts!")
          								}
          							  case 1:
          								goto flw_104
          							}
          						  case 2:
/*<  3>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00120513>Hm, das bedeutet wohl, dass du im\nGegensatz zu mir mit Insekten nicht\nviel anfangen kannst.")
          						}
          					  case 1:
/*<116>*/ 						printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x0013080a>Wie bitte? Du besitzt noch kein\n<color yellow<Schmetterlingsnetz>coloroff>? Du machst\nwohl Witze!\n\n<0x10009:0x00000500>Hast du denn nicht mitbekommen, dass\ndas Fangen von Insekten derzeit total\nhip und angesagt ist?\n\nDu arme Socke tust mir ja schon ein\nbisschen leid...\n\n\n<0x10009:0x00030100>Falls du dir ein Schmetterlingsnetz\nkaufen möchtest, schau einfach in\n<color red<Terris Laden >coloroff>vorbei.")
          					}
          				  case 1:
/*< 56>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 7, 'param3': 12}
/*<  7>*/ 					story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */] = true;
/*< 49>*/ 					story_flags[286 /* us: 805A9AFA 0x01, jp: 805ACD7A 0x01 */] = true;
/*<  6>*/ 					printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Hey, <heroname>!\nWas für ein Zufall, dich hier zu\ntreffen!\n\n<0x10009:0x00120600>Ich bin in diesen dichten Nebel geraten\nund fand mich urplötzlich auf dieser\nInsel wieder.\n\n<0x10009:0x00000100>Wusstest du, dass diese Insel der\nperfekte Lebensraum für vielerlei\nInsekten ist?\n\n<0x10009:0x00030104>Ich glaube, ich werde hier Insekten\nzüchten und versuchen, alle nur\nmöglichen Exemplare zu fangen!\n\n<0x10009:0x00000100>Hey! Möchtest du dich vielleicht auch\nin der Insektenjagd versuchen?\nIch habe ein paar für dich freigelassen!")
/*<112>*/ 					check_item_flag(71, 1)
/*<111>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 62}) {
          					  case 0:
/*<110>*/ 						printf(/* textboxtype: 1, unk: 1, line: 1 */ "<0x10009:0x00000100>Um es interessanter zu gestalten, gibt\nes zwei Stufen: eine für <color red<Anfänger >coloroff>und\neine für <color red<Experten>coloroff>.\n\n<0x10009:0x00030100>Ich kann dich allerdings nicht umsonst\nteilnehmen lassen. Anfänger zahlen\n<color red<20 Rubine>coloroff>, Experten <color red<50 Rubine>coloroff>.\n[1-]Anfänger[2-]Experte[3]Beenden")
          						goto flw_1
          					  case 1:
/*<113>*/ 						printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x0013080a>Wie bitte? Du besitzt noch kein\n<color yellow<Schmetterlingsnetz>coloroff>? Du machst\nwohl Witze!\n\n<0x10009:0x00000500>Hast du denn nicht mitbekommen, dass\ndas Fangen von Insekten derzeit total\nhip und angesagt ist?\n\nDu arme Socke tust mir ja schon ein\nbisschen leid...\n\n\n<0x10009:0x00030100>Falls du dir ein Schmetterlingsnetz\nkaufen möchtest, schau einfach in\n<color red<Terris Laden >coloroff>vorbei.")
          					}
          				}
          			  case 1:
/*< 26>*/ 				switch (story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */]) {
          				  case 0:
/*< 42>*/ 					printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00000004>Hehehe...\nBist du zurückgekehrt, um dir den\n<color blue<Dämonenkäfer >coloroff>zu holen?\n[1-]Klar![2]Nein.")
          					flw_50:
/*< 50>*/ 					switch (choice(2)) {
          					  case 0:
/*< 58>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 36, 'param3': 12}
/*< 36>*/ 						printf(/* textboxtype: 1, unk: 0, line: 36 */ "Und da ich Geschäftsmann bin, muss\nich dir <color red<10 Rubine >coloroff>dafür berechnen.\n[1-]Natürlich![2]Du spinnst!")
/*< 53>*/ 						switch (choice(2)) {
          						  case 0:
/*< 38>*/ 							switch (has_rupees(10)) {
          							  case 0:
/*<105>*/ 								switch (context_related2(0)) {
          								  case 0:
/*<118>*/ 									check_item_flag(71, 1)
/*<117>*/ 									switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 66}) {
          									  case 0:
/*< 40>*/ 										rupees += -10;
/*< 41>*/ 										printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00040100>Hier die Regeln: Sammle insgesamt \nzehn Insekten eines von mir vorher\nfestgelegten Insektentyps.\n\n<0x10009:0x00030100>Wichtig ist, dass du die zehn Insekten\n<color red<innerhalb von 3 Minuten >coloroff>fängst. Klar?\n\n\n<0x10009:0x00000100>Schaffst du das, dann händige ich dir\nden <color blue<Dämonenkäfer >coloroff>aus.\n\n\nNun gut. Bist du so weit? Dann kann's\nja losgehen!")
/*< 37>*/ 										make_actor_do_something(1, 0)
          									  case 1:
/*<119>*/ 										printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00130807>Moooment mal! Du hast doch noch\nimmer kein <color yellow<Schmetterlingsnetz>coloroff>!\nOhne Netz keine Jagd!\n\n<0x10009:0x00040100>Kauf dir erst mal eines, dann sehen\nwir weiter!")
          									}
          								  case 1:
/*<106>*/ 									printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00120813>Du scheinst die Sache nicht ernst zu\nnehmen, wenn du mit so wenig <color red<Herzen\n>coloroff>Insekten fangen willst.\n\n<0x10009:0x00000100>Fülle erst deine Herzen auf, bevor du\nzu mir zurückkehrst.")
          								}
          							  case 1:
/*< 39>*/ 								printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00120315>Du hast nicht genug Rubine! Auch\nwenn du zur Ritterschule gehörst,\numsonst gibt es hier nichts!")
          							}
          						  case 1:
          							flw_52:
/*< 52>*/ 							printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00120305>Sag mal, möchtest DU vielleicht ein\nTeil meiner Sammlung werden?\n\n\n<0x10009:0x00000100>Wobei, lahme Schnecken passen nicht\nwirklich in meine Sammlung! Hehe!<0x10009:0x00000004>")
          						}
          					  case 1:
          						goto flw_52
          					}
          				  case 1:
/*< 31>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 28, 'param3': 31}
/*< 28>*/ 					printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00000004>Hehehe.\nHey, <heroname>!\nAlles klar?\n\n<0x10009:0x00000100>Was sagst du? Ich grinse von einem\nOhr zum anderen? Hehehe.\n\n\nSchätze, du hast Recht! Kein Wunder,\ndenn ich habe einen ziemlich seltenen\nKäfer gefangen!\n[1-]Erzähl mehr![2-]Kein Interesse...")
/*< 29>*/ 					switch (choice(2)) {
          					  case 0:
/*< 27>*/ 						story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */] = true;
/*< 32>*/ 						printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00030100>Neugierig, hm? Dann hör gut zu!\n\n\n\nNun...<pause 30><0x10009:0x00130100> Ob du's glaubst oder nicht,\nich habe tatsächlich den legendären\n<color blue<Dämonenkäfer>coloroff> erwischt! Wahnsinn!\n\n<0x10009:0x00030100>Die Chance, einen solchen Käfer zu\nfangen, ist so gering, es grenzt an ein\nWunder! Und das ist auch der Grund,\nweshalb ich wie verrückt strahle!")
/*< 54>*/ 						printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00010800>Was sagst du da? Der Käfer gehört\nTerri? Terri, der mit seinem Laden\ndurch die Luft fliegt?\n[1-]Gib ihn zurück![2-]Denk an Terri!")
/*< 33>*/ 						switch (choice(2)) {
          						  case 0:
/*< 35>*/ 							printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00100800>Glaubst du wirklich, dass du mich mit\ndieser rührseligen Geschichte täuschen\nkannst? Schäm dich!\n\n<0x10009:0x00130100>Ich habe diesen Käfer gefunden, also\ngehört er mir! Mir ganz allein!")
          							flw_51:
/*< 51>*/ 							printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10006:0xfdcd>...<0x10006:0x00cd>\nAndererseits, was einem nicht gehört,\nsoll man auch nicht behalten.\n\n<0x10009:0x00120100>Aber ich bring's einfach nicht übers\nHerz, dir den Käfer so ohne weiteres\nauszuhändigen...\n\n<0x10009:0x00000500>Wie wäre es mit folgendem Vorschlag...\n\n\n\n<0x10009:0x00000100>Erreiche bei der Insektenjagd eine\nbessere Zeit als ich, dann werde ich\ndir den kleinen Kerl anvertrauen!\n\n<0x10009:0x00030100>Einverstanden? Nimmst du diese\nHerausforderung an?\n[1-]Ich versuch's.[2]Jetzt nicht.")
          							goto flw_50
          						  case 1:
/*< 34>*/ 							printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00120500>Hast du eine Ahnung, wie wertvoll\ndieses Insekt ist?\n\n\n<0x10009:0x00000100>Allein der Besitz dieses Insekts lässt all\nmeine Insekten fangenden Freunde zu\nmir aufblicken!")
          							goto flw_51
          						}
          					  case 1:
/*< 30>*/ 						printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00120515>Ich verstehe schon...\nDu bist ganz schön hinterlistig!")
          					}
          				}
          			}
          		  case 1:
          			goto flw_5
          		}
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000005>Möchtest du wirklich damit aufhören,\nInsekten zu fangen?\n[1-]Ja, es nervt.[2]Nein, ich\nmache weiter!")
/*< 17>*/ 		switch (choice(2)) {
          		  case 0:
/*< 14>*/ 			printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00120500>Du hast es wirklich ernst gemeint...\nVielleicht fehlt dir ganz einfach die\nBegeisterung, die ich an den Tag lege.")
/*< 18>*/ 			make_actor_do_something(3, 0)
          		  case 1:
/*< 16>*/ 			printf(/* textboxtype: 1, unk: 0, line: 11 */ "Siehst du! Wenn Kerle wie wir Insekten\nfangen, verfliegt die Zeit im Nu!")
          		}
          	  case 2:
/*< 19>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00120500>Hm...\nDas hat leider etwas zu lange gedauert.\n\n\n<0x10009:0x00000100>Für einen Sieg hat es dieses Mal leider\nnicht gereicht!")
/*< 23>*/ 		make_actor_do_something(4, 0)
          	  case 3:
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00131000>Hey! Mach mal halblang! Niemand\nverlangt, dass du für die Insekten\ndein Leben riskierst!\n\n<0x10009:0x00030100>Vergiss nicht, dass sich manche\nInsekten auch zur Wehr setzen.\n\n\nDu hast kurz vor dem Kollaps\ngestanden, deshalb habe ich\ndas Spiel abgebrochen.")
/*<100>*/ 		make_actor_do_something(4, 0)
          	}
          }

          void entrypoint_116_02() {
/*<  8>*/ 	start()
/*<128>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 61, 'param3': 42}
/*< 61>*/ 	switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          	  case 0:
          		flw_9:
/*<  9>*/ 		switch (context_related4(0)) {
          		  case 0:
/*< 20>*/ 			switch (context_related4(2)) {
          			  case 0:
/*< 44>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 10, 'param3': 44}
/*< 10>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00120107>Fertig! Das waren alle! Du weißt\naber schon, dass das nicht gerade\neine Glanzleistung war?\n\n<0x10009:0x00000100>Versuche das nächste Mal <color red<unter\n5 Minuten >coloroff>zu bleiben.\n\n\n<0x10009:0x00030100>Übrigens... Nachts kaufe ich Insekten.\nSchau doch mal bei mir vorbei, wenn\ndie Sonne untergegangen ist!")
/*< 45>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 21>*/ 				printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00120500>Es ist traurig, dass du der Grazie und\nAnmut meiner gepanzerten Freunde\nnichts abgewinnen kannst.\n\n<0x10009:0x00000100>Aber du bist hier trotzdem jederzeit\nwillkommen!")
          			  case 2:
/*< 22>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00030100>Tut mir wirklich leid, aber so etwas wie\nRückzahlungen gibt es hier nicht.\n\n\n<0x10009:0x00000100>Versuch dein Glück doch ein anderes\nMal! Hehehe...")
          			  case 3:
/*<101>*/ 				printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00000004>Hehehe... Du warst so in die Jagd\nvertieft, dass du deine Gesundheit\nvöllig vergessen hast!\n\n<0x10009:0x00000500>Deine Rubine bekommst du trotzdem\nnicht zurück. Fülle deine Herzen auf\nund versuch's einfach noch einmal.")
          			}
          		  case 1:
/*< 79>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 77, 'param3': 44}
/*< 77>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 78>*/ 				printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00120104>Fertig! Das waren alle!\nNicht schlecht, das muss ich zugeben.\n\n\n<0x10009:0x00000100>Merk dir gut, wo Insekten nisten,\ndann bist du beim nächsten Mal\nnoch etwas schneller.\n\nWie wär's, wenn du beim nächsten Mal\nversuchst, <color red<unter 3 Minuten >coloroff>zu bleiben?")
/*< 59>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 120, 'param3': 12}
/*<120>*/ 				printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00030100>Dies sind meine gesamten Ersparnisse.\nHier, nimm diese <color red<80 Rubine>coloroff>.")
/*< 81>*/ 				rupees += 80;
/*< 80>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 11>*/ 				printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00000004>Fertig! Das waren alle!\nIch habe schon damit gerechnet,\ndass du so lange brauchst.\n\n<0x10009:0x00000100>Du solltest eine bestimmte Insektenart\nnicht nur an einer Stelle suchen. Es ist\nnie verkehrt, auch an anderen Orten\ndie Augen offenzuhalten!")
/*<122>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 121, 'param3': 12}
/*<121>*/ 				printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00030100>Versuch beim nächsten Mal <color red<unter\n3 Minuten >coloroff>zu bleiben. Hier hast du\n<color red<30 Rubine>coloroff>.")
/*< 55>*/ 				rupees += 30;
/*< 46>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 2:
/*< 88>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 87, 'param3': 44}
/*< 87>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 83>*/ 				printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000811>Fertig! Das waren alle!\nHui! Ein echter Rekord!\n\n\n<0x10009:0x00000100>Du darfst dich nun zu Recht als\nzweitbester Insektenfänger gleich\nnach mir bezeichnen!\n\nVersuch beim nächsten Mal,\n<color red<unter 2 Minuten >coloroff>zu bleiben!\n\n\nNun, dann lass mich dir deinen\nGewinn überreichen. Etwas, das\ndu lieben wirst... <color red<5 Insekten>coloroff>!")
/*< 82>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 45}
/*<129>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<108>*/ 				give_item(23 0x17);
/*<130>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<125>*/ 				printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00ffff00>Und sei immer schön lieb zu\nInsekten, versprich mir das...")
          			  case 1:
/*< 60>*/ 				printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x00000011>Fertig! Das waren alle!\nHui! Das scheint dir wirklich Spaß\nzu machen! Du bist ein Naturtalent!\n\n<0x10009:0x00120500>Aber... Um meine Lieblingsinsekten\nzu gewinnen, bist du noch nicht gut\ngenug. Also übe fleißig weiter.")
/*<124>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 123, 'param3': 12}
/*<123>*/ 				printf(/* textboxtype: 1, unk: 0, line: 26 */ "Versuche dich weiter zu verbessern.\nSchaffst du es auch <color red<unter 2 Minuten>coloroff>?\nDiesmal bekommst du <color red<50 Rubine>coloroff>!")
/*< 86>*/ 				rupees += 50;
/*< 47>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 3:
/*< 90>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 89, 'param3': 44}
/*< 89>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 84>*/ 				printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00130811>Fertig! Das waren alle!\nA-a-aber das... das ist unglaublich!\n\n\n<0x10009:0x00000100>Mir bleibt nichts anderes übrig, als\nzuzugeben, dass du der beste aller\nInsektenfänger bist!\n\n<0x10009:0x00040100>Und als Belohnung dafür gibt es von\nmir <color red<fünf Insekten>coloroff>. Und zwar ganz\nbesonders seltene Exemplare!")
/*< 85>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 131, 'param3': 45}
/*<131>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<109>*/ 				give_item(24 0x18);
/*<133>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<126>*/ 				printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00ffff00>Und sei immer schön lieb zu\nInsekten, versprich mir das...")
          			  case 1:
/*< 43>*/ 				printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00030811>Fertig! Das waren alle!\nUn-glaub-lich!\n\n\n<0x10009:0x00120100>Aber vergiss eines nicht:\nDies war nur die Anfängerstufe!\n\n\n<0x10009:0x00000100>Versuche dich beim nächsten\nMal ruhig an der Expertenstufe.\n\n\nUnd wenn du darin wirklich gut bist,\nkannst du vielleicht schon bald\n<color red<5 Insekten>coloroff> aus meiner Sammlung\ndein Eigen nennen!")
/*< 48>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 132, 'param3': 45}
/*<132>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<107>*/ 				give_item(22 0x16);
/*<134>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<127>*/ 				printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00ffff00>Und sei immer schön lieb zu\nInsekten, versprich mir das...")
          			}
          		}
          	  case 1:
/*< 62>*/ 		switch (story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */]) {
          		  case 0:
/*< 63>*/ 			switch (context_related4(0)) {
          			  case 0:
/*< 73>*/ 				switch (context_related3(0)) {
          				  case 0:
          					flw_65:
/*< 65>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 64, 'param3': 44}
          					flw_64:
/*< 64>*/ 					printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x00000013>Puuuh...\n\n\n\n<0x10009:0x00120500>Tut mir leid, aber ich werde den\n<color blue<Dämonenkäfer >coloroff>wohl noch ein\nWeilchen behalten!\n\n<0x10009:0x00000100>Du musst die Aufgabe <color red<innerhalb von\n3 Minuten >coloroff>erledigen. Komm schon!\nÜberrasch mich!")
/*< 66>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          				  case 1:
          					goto flw_64
          				  case 2:
          					goto flw_64
          				}
          			  case 1:
          				goto flw_65
          			  case 2:
          				flw_72:
/*< 72>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 71, 'param3': 44}
/*< 71>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "Fertig! <0x10009:0x00000004>Hehehe... Dass jemand meinen\nRekord so leicht brechen würde, hätte\nich nicht für möglich gehalten... ")
/*< 67>*/ 				printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00120500>Hier, wie versprochen. Ich gebe dir\nden <color blue<Dämonenkäfer>coloroff>.\n\n\n<0x10009:0x00000100>Ich muss leider meine Niederlage\neingestehen.\n\n\n<0x10009:0x00030100>Du hast dich als ganz schön flotter\nKäfer entpuppt! Hehehe...")
/*< 68>*/ 				story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */] = true;
/*< 69>*/ 				give_item(159 0x9F);
/*< 74>*/ 				printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x00040500>Bitte sag Terri, dass es mir leid tut,\nfalls ich ihm Kummer bereitet haben\nsollte...")
/*< 70>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 3:
          				goto flw_72
          			}
          		  case 1:
          			goto flw_9
          		}
          	}
          }

