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
/*<  4>*/ 						printf("\x0E\x01\x09\x04\x00\x01Also... Bist du bereit, ein paar hübsche Insekten\nzu fangen? Zeig mal, was du draufhast!\n\n\nAnfänger zahlen <r<20 Rubine>>. Experten kostet\nder Spaß <r<50 Rubine>>. Was darf's denn nun sein?\n[1]Anfänger[2]Experte[3-]Beenden")
          						flw_1:
/*<  1>*/ 						switch (choice(3)) {
          						  case 0:
/*<102>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 96>*/ 								switch (has_rupees(20)) {
          								  case 0:
/*< 98>*/ 									rupees += -20;
/*< 91>*/ 									printf("\x0E\x01\x09\x04\x03\x100Ich werde deine Zeit nehmen. Wenn du dich\nals flinker Fänger erweist, gibt es einen Preis!\n\n\n\x0E\x01\x09\x04\x00\x100Als Anfänger musst du je ein Insekt aus\ninsgesamt fünf verschiedenen Arten fangen.\nBist du bereit?")
/*< 75>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = false;
/*<  2>*/ 									make_actor_do_something(0, 0)
          								  case 1:
/*< 97>*/ 									printf("\x0E\x01\x09\x04\x12\x315Du hast nicht genug Rubine! Auch wenn du\nzur Ritterschule gehörst, umsonst gibt es\nhier nichts!")
          								}
          							  case 1:
          								flw_104:
/*<104>*/ 								printf("\x0E\x01\x09\x04\x12\x813Du scheinst die Sache nicht ernst zu nehmen,\nwenn du mit so wenig <r<Herzen >>Insekten\nfangen willst.\n\n\x0E\x01\x09\x04\x00\x100Fülle erst deine Herzen auf, bevor du zu\nmir zurückkehrst.")
          							}
          						  case 1:
/*<103>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 93>*/ 								switch (has_rupees(50)) {
          								  case 0:
/*< 95>*/ 									rupees += -50;
/*< 92>*/ 									printf("\x0E\x01\x09\x04\x03\x100Ich werde deine Zeit nehmen. Wenn du dich\nals flinker Fänger erweist, gibt es einen Preis!\n\n\n\x0E\x01\x09\x04\x00\x100Als Experte musst du zehn Insekten aus\ninsgesamt acht verschiedenen Arten fangen.\nBist du bereit?")
/*< 76>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = true;
/*< 12>*/ 									make_actor_do_something(1, 0)
          								  case 1:
/*< 94>*/ 									printf("\x0E\x01\x09\x04\x12\x315Du hast nicht genug Rubine! Auch wenn du\nzur Ritterschule gehörst, umsonst gibt es\nhier nichts!")
          								}
          							  case 1:
          								goto flw_104
          							}
          						  case 2:
/*<  3>*/ 							printf("\x0E\x01\x09\x04\x12\x513Hm, das bedeutet wohl, dass du im Gegensatz zu\nmir mit Insekten nicht viel anfangen kannst.")
          						}
          					  case 1:
/*<116>*/ 						printf("\x0E\x01\x09\x04\x13\x80AWie bitte? Du besitzt noch kein\n<y<Schmetterlingsnetz>>? Du machst\nwohl Witze!\n\n\x0E\x01\x09\x04\x00\x500Hast du denn nicht mitbekommen, dass\ndas Fangen von Insekten derzeit total\nhip und angesagt ist?\n\nDu arme Socke tust mir ja schon ein\nbisschen leid...\n\n\n\x0E\x01\x09\x04\x03\x100Falls du dir ein Schmetterlingsnetz\nkaufen möchtest, schau einfach in\n<r<Terris Laden >>vorbei.")
          					}
          				  case 1:
/*< 56>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 7, 'param3': 12}
/*<  7>*/ 					story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */] = true;
/*< 49>*/ 					story_flags[286 /* us: 805A9AFA 0x01, jp: 805ACD7A 0x01 */] = true;
/*<  6>*/ 					printf("\x0E\x01\x09\x04\x00\x01Hey, Link!\nWas für ein Zufall, dich hier zu treffen!\n\n\n\x0E\x01\x09\x04\x12\x600Ich bin in diesen dichten Nebel geraten und\nfand mich urplötzlich auf dieser Insel wieder.\n\n\n\x0E\x01\x09\x04\x00\x100Wusstest du, dass diese Insel der perfekte\nLebensraum für vielerlei Insekten ist?\n\n\n\x0E\x01\x09\x04\x03\x104Ich glaube, ich werde hier Insekten züchten\nund versuchen, alle nur möglichen Exemplare\nzu fangen!\n\n\x0E\x01\x09\x04\x00\x100Hey! Möchtest du dich vielleicht auch in der\nInsektenjagd versuchen? Ich habe ein paar\nfür dich freigelassen!")
/*<112>*/ 					check_item_flag(71, 1)
/*<111>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 62}) {
          					  case 0:
/*<110>*/ 						printf("\x0E\x01\x09\x04\x00\x100Um es interessanter zu gestalten, gibt es\nzwei Stufen: eine für <r<Anfänger >>und eine\nfür <r<Experten>>.\n\n\x0E\x01\x09\x04\x03\x100Ich kann dich allerdings nicht umsonst\nteilnehmen lassen. Anfänger zahlen\n<r<20 Rubine>>, Experten <r<50 Rubine>>.\n[1]Anfänger[2]Experte[3-]Beenden")
          						goto flw_1
          					  case 1:
/*<113>*/ 						printf("\x0E\x01\x09\x04\x13\x80AWie bitte? Du besitzt noch kein\n<y<Schmetterlingsnetz>>? Du machst\nwohl Witze!\n\n\x0E\x01\x09\x04\x00\x500Hast du denn nicht mitbekommen, dass\ndas Fangen von Insekten derzeit total\nhip und angesagt ist?\n\nDu arme Socke tust mir ja schon ein\nbisschen leid...\n\n\n\x0E\x01\x09\x04\x03\x100Falls du dir ein Schmetterlingsnetz\nkaufen möchtest, schau einfach in\n<r<Terris Laden >>vorbei.")
          					}
          				}
          			  case 1:
/*< 26>*/ 				switch (story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */]) {
          				  case 0:
/*< 42>*/ 					printf("\x0E\x01\x09\x04\x00\x04Hehehe...\nBist du zurückgekehrt, um dir den\n<b<Dämonenkäfer >>zu holen?\n[1]Klar![2-]Nein.")
          					flw_50:
/*< 50>*/ 					switch (choice(2)) {
          					  case 0:
/*< 58>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 36, 'param3': 12}
/*< 36>*/ 						printf("Und da ich Geschäftsmann bin, muss ich dir\n<r<10 Rubine >>dafür berechnen.\n[1]Natürlich![2-]Du spinnst!")
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
/*< 41>*/ 										printf("\x0E\x01\x09\x04\x04\x100Hier die Regeln: Sammle insgesamt\nzehn Insekten eines von mir vorher\nfestgelegten Insektentyps.\n\n\x0E\x01\x09\x04\x03\x100Wichtig ist, dass du die zehn Insekten\n<r<innerhalb von 3 Minuten >>fängst. Klar?\n\n\n\x0E\x01\x09\x04\x00\x100Schaffst du das, dann händige ich dir\nden <b<Dämonenkäfer >>aus.\n\n\nNun gut. Bist du so weit? Dann kann's\nja losgehen!")
/*< 37>*/ 										make_actor_do_something(1, 0)
          									  case 1:
/*<119>*/ 										printf("\x0E\x01\x09\x04\x13\x807Moooment mal! Du hast doch noch immer kein\n<y<Schmetterlingsnetz>>! Ohne Netz keine Jagd!\n\x0E\x01\x09\x04\x04\x100Kauf dir erst mal eines, dann sehen wir weiter!")
          									}
          								  case 1:
/*<106>*/ 									printf("\x0E\x01\x09\x04\x12\x813Du scheinst die Sache nicht ernst zu nehmen,\nwenn du mit so wenig <r<Herzen >>Insekten\nfangen willst.\n\n\x0E\x01\x09\x04\x00\x100Fülle erst deine Herzen auf, bevor du zu\nmir zurückkehrst.")
          								}
          							  case 1:
/*< 39>*/ 								printf("\x0E\x01\x09\x04\x12\x315Du hast nicht genug Rubine! Auch wenn du\nzur Ritterschule gehörst, umsonst gibt es\nhier nichts!")
          							}
          						  case 1:
          							flw_52:
/*< 52>*/ 							printf("\x0E\x01\x09\x04\x12\x305Sag mal, möchtest DU vielleicht ein Teil meiner\nSammlung werden?\n\n\n\x0E\x01\x09\x04\x00\x100Wobei, lahme Schnecken passen nicht wirklich\nin meine Sammlung! Hehe!\x0E\x01\x09\x04\x00\x04")
          						}
          					  case 1:
          						goto flw_52
          					}
          				  case 1:
/*< 31>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 28, 'param3': 31}
/*< 28>*/ 					printf("\x0E\x01\x09\x04\x00\x04Hehehe.\nHey, Link!\nAlles klar?\n\n\x0E\x01\x09\x04\x00\x100Was sagst du? Ich grinse von einem Ohr zum\nanderen? Hehehe.\n\n\nSchätze, du hast recht! Kein Wunder, denn ich\nhabe einen ziemlich seltenen Käfer gefangen!\n[1]Erzähl mehr![2]Kein Interesse...")
/*< 29>*/ 					switch (choice(2)) {
          					  case 0:
/*< 27>*/ 						story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */] = true;
/*< 32>*/ 						printf("\x0E\x01\x09\x04\x03\x100Neugierig, hm? Dann hör gut zu!\n\n\n\nNun...<pause1E>\x0E\x01\x09\x04\x13\x100 Ob du's glaubst oder nicht, ich habe\ntatsächlich den legendären <b<Dämonenkäfer\n>>erwischt! Wahnsinn!\n\n\x0E\x01\x09\x04\x03\x100Die Chance, einen solchen Käfer zu fangen,\nist so gering, es grenzt an ein Wunder! Und\ndas ist auch der Grund, weshalb ich wie\nverrückt strahle!")
/*< 54>*/ 						printf("\x0E\x01\x09\x04\x01\x800Was sagst du da? Der Käfer gehört Terri?\nTerri, der mit seinem Laden durch die\nLuft fliegt?\n[1]Gib ihn zurück![2]Denk an Terri!")
/*< 33>*/ 						switch (choice(2)) {
          						  case 0:
/*< 35>*/ 							printf("\x0E\x01\x09\x04\x10\x800Glaubst du wirklich, dass du mich mit dieser\nrührseligen Geschichte täuschen kannst?\nSchäm dich!\n\n\x0E\x01\x09\x04\x13\x100Ich habe diesen Käfer gefunden, also gehört\ner mir! Mir ganz allein!")
          							flw_51:
/*< 51>*/ 							printf("\x0E\x01\x06\x02\xFDCD...\x0E\x01\x06\x02Í\nAndererseits, was einem nicht gehört, soll man\nauch nicht behalten.\n\n\x0E\x01\x09\x04\x12\x100Aber ich bring's einfach nicht übers Herz, dir\nden Käfer so ohne Weiteres auszuhändigen...\n\n\n\x0E\x01\x09\x04\x00\x500Wie wäre es mit folgendem Vorschlag...\n\n\n\n\x0E\x01\x09\x04\x00\x100Erreiche bei der Insektenjagd eine bessere Zeit\nals ich, dann werde ich dir den kleinen\nKerl anvertrauen!\n\n\x0E\x01\x09\x04\x03\x100Einverstanden? Nimmst du diese\nHerausforderung an?\n[1]Ich versuch's.[2-]Jetzt nicht.")
          							goto flw_50
          						  case 1:
/*< 34>*/ 							printf("\x0E\x01\x09\x04\x12\x500Hast du eine Ahnung, wie wertvoll dieses\nInsekt ist?\n\n\n\x0E\x01\x09\x04\x00\x100Allein der Besitz dieses Insekts lässt all meine\nInsekten fangenden Freunde zu mir aufblicken!")
          							goto flw_51
          						}
          					  case 1:
/*< 30>*/ 						printf("\x0E\x01\x09\x04\x12\x515Ich verstehe schon...\nDu bist ganz schön hinterlistig!")
          					}
          				}
          			}
          		  case 1:
          			goto flw_5
          		}
          	  case 1:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\x05Möchtest du wirklich damit aufhören,\nInsekten zu fangen?\n[1]Ja, es nervt.[2-]Nein, ich\nmache weiter!")
/*< 17>*/ 		switch (choice(2)) {
          		  case 0:
/*< 14>*/ 			printf("\x0E\x01\x09\x04\x12\x500Du hast es wirklich ernst gemeint...\nVielleicht fehlt dir ganz einfach die\nBegeisterung, die ich an den Tag lege.")
/*< 18>*/ 			make_actor_do_something(3, 0)
          		  case 1:
/*< 16>*/ 			printf("Siehst du! Wenn Kerle wie wir Insekten\nfangen, verfliegt die Zeit im Nu!")
          		}
          	  case 2:
/*< 19>*/ 		printf("\x0E\x01\x09\x04\x12\x500Hm...\nDas hat leider etwas zu lange gedauert.\n\n\n\x0E\x01\x09\x04\x00\x100Für einen Sieg hat es dieses Mal leider\nnicht gereicht!")
/*< 23>*/ 		make_actor_do_something(4, 0)
          	  case 3:
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x13\x1000Hey! Mach mal halblang! Niemand verlangt,\ndass du für die Insekten dein Leben riskierst!\n\n\n\x0E\x01\x09\x04\x03\x100Vergiss nicht, dass sich manche Insekten\nauch zur Wehr setzen.\n\n\nDu hast kurz vor dem Kollaps gestanden,\ndeshalb habe ich das Spiel abgebrochen.")
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
/*< 10>*/ 				printf("\x0E\x01\x09\x04\x12\x107Fertig! Das waren alle! Du weißt aber schon,\ndass das nicht gerade eine Glanzleistung war?\n\n\n\x0E\x01\x09\x04\x00\x100Versuche das nächste Mal <r<unter 5 Minuten\n>>zu bleiben.\n\n\n\x0E\x01\x09\x04\x03\x100Übrigens... Nachts kaufe ich Insekten. Schau\ndoch mal bei mir vorbei, wenn die Sonne\nuntergegangen ist!")
/*< 45>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 21>*/ 				printf("\x0E\x01\x09\x04\x12\x500Es ist traurig, dass du der Grazie und\nAnmut meiner gepanzerten Freunde\nnichts abgewinnen kannst.\n\n\x0E\x01\x09\x04\x00\x100Aber du bist hier trotzdem jederzeit\nwillkommen!")
          			  case 2:
/*< 22>*/ 				printf("\x0E\x01\x09\x04\x03\x100Tut mir wirklich leid, aber so etwas wie\nRückzahlungen gibt es hier nicht.\n\n\n\x0E\x01\x09\x04\x00\x100Versuch dein Glück doch ein anderes\nMal! Hehehe...")
          			  case 3:
/*<101>*/ 				printf("\x0E\x01\x09\x04\x00\x04Hehehe... Du warst so in die Jagd vertieft,\ndass du deine Gesundheit völlig vergessen hast!\n\n\n\x0E\x01\x09\x04\x00\x500Deine Rubine bekommst du trotzdem nicht\nzurück. Fülle deine Herzen auf und versuch's\neinfach noch einmal.")
          			}
          		  case 1:
/*< 79>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 77, 'param3': 44}
/*< 77>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 78>*/ 				printf("\x0E\x01\x09\x04\x12\x104Fertig! Das waren alle!\nNicht schlecht, das muss ich zugeben.\n\n\n\x0E\x01\x09\x04\x00\x100Merk dir gut, wo Insekten nisten, dann bist\ndu beim nächsten Mal noch etwas schneller.\n\n\nWie wär's, wenn du beim nächsten Mal\nversuchst, <r<unter 3 Minuten >>zu bleiben?")
/*< 59>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 120, 'param3': 12}
/*<120>*/ 				printf("\x0E\x01\x09\x04\x03\x100Dies sind meine gesamten Ersparnisse.\nHier, nimm diese <r<80 Rubine>>.")
/*< 81>*/ 				rupees += 80;
/*< 80>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 11>*/ 				printf("\x0E\x01\x09\x04\x00\x04Fertig! Das waren alle!\nIch habe schon damit gerechnet, dass du\nso lange brauchst.\n\n\x0E\x01\x09\x04\x00\x100Du solltest eine bestimmte Insektenart\nnicht nur an einer Stelle suchen. Es ist\nnie verkehrt, auch an anderen Orten\ndie Augen offenzuhalten!")
/*<122>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 121, 'param3': 12}
/*<121>*/ 				printf("\x0E\x01\x09\x04\x03\x100Versuch beim nächsten Mal <r<unter 3 Minuten\n>>zu bleiben. Hier hast du <r<30 Rubine>>.")
/*< 55>*/ 				rupees += 30;
/*< 46>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 2:
/*< 88>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 87, 'param3': 44}
/*< 87>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 83>*/ 				printf("\x0E\x01\x09\x04\x00\x811Fertig! Das waren alle!\nHui! Ein echter Rekord!\n\n\n\x0E\x01\x09\x04\x00\x100Du darfst dich nun zu Recht als zweitbester\nInsektenfänger gleich nach mir bezeichnen!\n\n\nVersuch beim nächsten Mal, <r<unter 2 Minuten\n>>zu bleiben!\n\n\nNun, dann lass mich dir deinen Gewinn\nüberreichen. Etwas, das du lieben wirst...\n<r<5 Insekten>>!")
/*< 82>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 45}
/*<129>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<108>*/ 				give_item(23 0x17);
/*<130>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<125>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00Und sei immer schön lieb zu Insekten,\nversprich mir das...")
          			  case 1:
/*< 60>*/ 				printf("\x0E\x01\x09\x04\x00\x11Fertig! Das waren alle!\nHui! Das scheint dir wirklich Spaß zu machen!\nDu bist ein Naturtalent!\n\n\x0E\x01\x09\x04\x12\x500Aber... Um meine Lieblingsinsekten zu\ngewinnen, bist du noch nicht gut genug.\nAlso übe fleißig weiter.")
/*<124>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 123, 'param3': 12}
/*<123>*/ 				printf("Versuche dich weiter zu verbessern. Schaffst du\nes auch <r<unter 2 Minuten>>? Diesmal bekommst\ndu <r<50 Rubine>>!")
/*< 86>*/ 				rupees += 50;
/*< 47>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 3:
/*< 90>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 89, 'param3': 44}
/*< 89>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 84>*/ 				printf("\x0E\x01\x09\x04\x13\x811Fertig! Das waren alle!\nA-a-aber das... das ist unglaublich!\n\n\n\x0E\x01\x09\x04\x00\x100Mir bleibt nichts anderes übrig, als zuzugeben,\ndass du der beste aller Insektenfänger bist!\n\n\n\x0E\x01\x09\x04\x04\x100Und als Belohnung dafür gibt es von mir\n<r<5 Insekten>>. Und zwar ganz besonders\nseltene Exemplare!")
/*< 85>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 131, 'param3': 45}
/*<131>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<109>*/ 				give_item(24 0x18);
/*<133>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<126>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00Und sei immer schön lieb zu Insekten,\nversprich mir das...")
          			  case 1:
/*< 43>*/ 				printf("\x0E\x01\x09\x04\x03\x811Fertig! Das waren alle!\nUn-glaub-lich!\n\n\n\x0E\x01\x09\x04\x12\x100Aber vergiss eines nicht:\nDies war nur die Anfängerstufe!\n\n\n\x0E\x01\x09\x04\x00\x100Versuche dich beim nächsten Mal ruhig an\nder Expertenstufe.\n\n\nUnd wenn du darin wirklich gut bist, kannst du\nvielleicht schon bald <r<5 Insekten>> aus meiner\nSammlung dein Eigen nennen!")
/*< 48>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 132, 'param3': 45}
/*<132>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<107>*/ 				give_item(22 0x16);
/*<134>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<127>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00Und sei immer schön lieb zu Insekten,\nversprich mir das...")
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
/*< 64>*/ 					printf("\x0E\x01\x09\x04\x00\x13Puuuh...\n\n\n\n\x0E\x01\x09\x04\x12\x500Tut mir leid, aber ich werde den <b<Dämonenkäfer\n>>wohl noch ein Weilchen behalten!\n\n\n\x0E\x01\x09\x04\x00\x100Du musst die Aufgabe <r<innerhalb von 3 Minuten\n>>erledigen. Komm schon! Überrasch mich!")
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
/*< 71>*/ 				printf("Fertig! \x0E\x01\x09\x04\x00\x04Hehehe... Dass jemand meinen Rekord\nso leicht brechen würde, hätte ich nicht für\nmöglich gehalten...")
/*< 67>*/ 				printf("\x0E\x01\x09\x04\x12\x500Hier, wie versprochen. Ich gebe dir\nden <b<Dämonenkäfer>>.\n\n\n\x0E\x01\x09\x04\x00\x100Ich muss leider meine Niederlage\neingestehen.\n\n\n\x0E\x01\x09\x04\x03\x100Du hast dich als ganz schön flotter\nKäfer entpuppt! Hehehe...")
/*< 68>*/ 				story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */] = true;
/*< 69>*/ 				give_item(159 0x9F);
/*< 74>*/ 				printf("\x0E\x01\x09\x04\x04\x500Bitte sag Terri, dass es mir leidtut, falls ich\nihm Kummer bereitet haben sollte...")
/*< 70>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 3:
          				goto flw_72
          			}
          		  case 1:
          			goto flw_9
          		}
          	}
          }

