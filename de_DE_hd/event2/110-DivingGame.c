          void entrypoint_110_01() {
          	start()
/*< 37>*/ 	switch (story_flags[398 /* us: 805A9B0E 0x01, jp: 805ACD8E 0x01 */]) {
          	  case 0:
/*< 29>*/ 		switch (zone_temp_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*<126>*/ 			printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00000001>Soll ich dir die Regeln noch einmal erklären?\n[1-]Wäre besser...[2]Nein, danke.")
/*<127>*/ 			switch (choice(2)) {
          			  case 0:
/*< 30>*/ 				printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x000d0602>Bitte erlaube mir, dir die Regeln erklären\nzu dürfen.\n\n\n<0x10009:0x00120600>Die Kanone hier in der Mitte wird dich in die\nLuft schießen. Das Ziel ist, auf dem rotierenden\nFeld zu landen.\n\nJe nach Farbe, die das Zielfeld hat, kannst du\nRubine eines bestimmten Wertes gewinnen.\n\n\n<0x10009:0x000d0600>Landest du jedoch auf einem <color red<grauen Feld>coloroff>,\ndann musst du mir Rubine zahlen!\n\n\n<0x10009:0x00121100>Sei nicht allzu gierig! Ein wenig <color red<Glück >coloroff>gehört\nbei diesem Spiel nämlich auch mit dazu!\n\n\nAlso nicht böse sein, wenn du auf einem <color red<grauen\nFeld >coloroff>landest und ich dich um ein paar Rubine\nerleichtere... Hi hi!")
/*<129>*/ 				printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00000600>Während du durch die Luft gleitest,\nwirst du auf <color red<Bonusringe >coloroff>sowie auf\n<color red<Dodo-Ballons >coloroff>stoßen.\n\n<0x10009:0x000d0600>Manövriere dich geschickt durch die\n<color red<Bonusringe >coloroff>und erhöhe dadurch deinen\nRubin-Multiplikator.\n\nJe mehr Ringe du durchfliegst, desto\nlangsamer wird sich auch das Roulette\ndrehen.\n\nSomit sollte es dir auch nicht allzu\nschwerfallen, eine bestimmte Farbe\nanzufliegen!\n\n<0x10009:0x00120c00>Aber pass bloß auf, dass du keinen\n<color red<Dodo-Ballon >coloroff>triffst, sonst wird dein\nMultiplikator zurückgesetzt!\n\n<0x10009:0x000d0600>Ach, und den Paraschal kannst du\nbei diesem Spiel <color red<nicht verwenden>coloroff>,\nalso bereite dich schon mal auf eine\nharte Landung vor!")
          			  case 1:
/*<128>*/ 				printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x000d0006>Hopp-hopp, rein in die Kanone und ab\nin die Lüfte!")
          			}
          		  case 1:
/*< 75>*/ 			switch (story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */]) {
          			  case 0:
          				flw_77:
/*< 77>*/ 				switch (story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */]) {
          				  case 0:
/*< 79>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 84, 'param3': 12}
/*< 84>*/ 					switch (zone_temp_flags[6 /* 0x1 40 */]) {
          					  case 0:
/*< 85>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000001>Du möchtest es wirklich noch einmal\nversuchen? Es scheint dir wohl sehr\ngefallen zu haben!\n\nDas macht dann <color red<20 Rubine>coloroff>.\nDirekt in meine Patschehändchen.\n[1-]Spielen[2-]Regeln[3]Beenden")
          						flw_33:
/*< 33>*/ 						switch (choice(3)) {
          						  case 0:
/*< 76>*/ 							switch (story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */]) {
          							  case 0:
/*<  6>*/ 								switch (has_rupees(20)) {
          								  case 0:
/*< 10>*/ 									rupees += -20;
          									flw_82:
/*< 82>*/ 									zone_temp_flags[5 /* 0x1 20 */] = true;
/*<  5>*/ 									printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00000002>Dann kann's ja losgehen!\nTritt einfach in die Mitte der Insel,\nwenn du bereit bist.\n\nKanone klarmachen zum Feuern!")
/*<144>*/ 									switch (zone_temp_flags[8 /* 0x0 01 */]) {
          									  case 0:
/*<145>*/ 										make_actor_do_something(2, 0)
          									  case 1:
/*<146>*/ 										zone_temp_flags[8 /* 0x0 01 */] = true;
/*< 80>*/ 										set_camera(1, 0)
/*<  3>*/ 										make_actor_do_something(0, 0)
/*< 81>*/ 										wait_frames(80)
          									}
          								  case 1:
/*<  7>*/ 									printf(/* textboxtype: 0, unk: 1, line: 7 */ "<pause 15><0x10009:0x00160c03>Ich fürchte, du besitzt leider nicht\ngenug Rubine.\n\n\n<0x10009:0x00000600>Sieh zu, dass du 20 Rubine sammelst,\nbevor du mich wieder aufsuchst.")
          								}
          							  case 1:
          								flw_74:
/*< 74>*/ 								story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */] = true;
          								goto flw_82
          							}
          						  case 1:
/*< 34>*/ 							printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x000d0602>Bitte erlaube mir, dir die Regeln erklären\nzu dürfen.\n\n\n<0x10009:0x00120600>Die Kanone hier in der Mitte wird dich in die\nLuft schießen. Das Ziel ist, auf dem rotierenden\nFeld zu landen.\n\nJe nach Farbe, die das Zielfeld hat, kannst du\nRubine eines bestimmten Wertes gewinnen.\n\n\n<0x10009:0x000d0600>Landest du jedoch auf einem <color red<grauen Feld>coloroff>,\ndann musst du mir Rubine zahlen!\n\n\n<0x10009:0x00121100>Sei nicht allzu gierig! Ein wenig <color red<Glück >coloroff>gehört\nbei diesem Spiel nämlich auch mit dazu!\n\n\nAlso nicht böse sein, wenn du auf einem <color red<grauen\nFeld >coloroff>landest und ich dich um ein paar Rubine\nerleichtere... Hi hi!")
/*< 35>*/ 							printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00000600>Während du durch die Luft gleitest,\nwirst du auf <color red<Bonusringe >coloroff>sowie auf\n<color red<Dodo-Ballons >coloroff>stoßen.\n\n<0x10009:0x000d0600>Manövriere dich geschickt durch die\n<color red<Bonusringe >coloroff>und erhöhe dadurch deinen\nRubin-Multiplikator.\n\nJe mehr Ringe du durchfliegst, desto\nlangsamer wird sich auch das Roulette\ndrehen.\n\nSomit sollte es dir auch nicht allzu\nschwerfallen, eine bestimmte Farbe\nanzufliegen!\n\n<0x10009:0x00120c00>Aber pass bloß auf, dass du keinen\n<color red<Dodo-Ballon >coloroff>triffst, sonst wird dein\nMultiplikator zurückgesetzt!\n\n<0x10009:0x000d0600>Ach, und den Paraschal kannst du\nbei diesem Spiel <color red<nicht verwenden>coloroff>,\nalso bereite dich schon mal auf eine\nharte Landung vor!")
          						  case 2:
/*< 36>*/ 							printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00160d05>Huch! Das kam unerwartet!\nNervös geworden, wie?")
          						}
          					  case 1:
/*<  9>*/ 						printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x000d0601>Uiuiuiuiuiui!\nMöchte sich der junge Herr etwa in die\nLüfte katapultieren lassen?\n\n<0x10009:0x00090600>Umsonst gibt's bei mir jedoch nichts.\nEin Spiel kostet dich <color red<20 Rubine>coloroff>.\n[1-]Spielen[2-]Regeln[3]Beenden")
/*< 83>*/ 						zone_temp_flags[6 /* 0x1 40 */] = true;
          						goto flw_33
          					}
          				  case 1:
/*< 78>*/ 					printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00000001>Uiuiuiuiuiui!\nKomm ruhig näher, junger Mann!\nMöchtest du durch die Luft segeln?\n\nWeil du meine Roulettescheibe gefunden\nhast, ist der erste Versuch gratis!\n[1-]Spielen[2-]Regeln[3]Beenden")
          					goto flw_33
          				}
          			  case 1:
/*< 11>*/ 				switch (story_flags[42 /* us: 805A9AE7 0x08, jp: 805ACD67 0x08 */]) {
          				  case 0:
          					goto flw_77
          				  case 1:
/*< 12>*/ 					printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00000601>Mein junger Herr, mir fehlen die Worte!\nVielen, vielen Dank, dass du meine\nRoulettescheibe gefunden hast!\n\nNun kann ich endlich wieder meine geliebte\n<color blue<Roulette-Insel >coloroff>in Betrieb nehmen!\n\n\nNormalerweise verlange ich pro Spiel\n20 Rubine, aber da du so nett zu mir warst...\nNun denn, die erste Runde geht aufs Haus!")
/*<  8>*/ 					printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x000d0602>Bitte erlaube mir, dir die Regeln erklären\nzu dürfen.\n\n\n<0x10009:0x00120600>Die Kanone hier in der Mitte wird dich in die\nLuft schießen. Das Ziel ist, auf dem rotierenden\nFeld zu landen.\n\nJe nach Farbe, die das Zielfeld hat, kannst du\nRubine eines bestimmten Wertes gewinnen.\n\n\n<0x10009:0x000d0600>Landest du jedoch auf einem <color red<grauen Feld>coloroff>,\ndann musst du mir Rubine zahlen!\n\n\n<0x10009:0x00121100>Sei nicht allzu gierig! Ein wenig <color red<Glück >coloroff>gehört\nbei diesem Spiel nämlich auch mit dazu!\n\n\nAlso nicht böse sein, wenn du auf einem <color red<grauen\nFeld >coloroff>landest und ich dich um ein paar Rubine\nerleichtere... Hi hi!")
/*< 22>*/ 					printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00000600>Während du durch die Luft gleitest,\nwirst du auf <color red<Bonusringe >coloroff>sowie auf\n<color red<Dodo-Ballons >coloroff>stoßen.\n\n<0x10009:0x000d0600>Manövriere dich geschickt durch die\n<color red<Bonusringe >coloroff>und erhöhe dadurch deinen\nRubin-Multiplikator.\n\nJe mehr Ringe du durchfliegst, desto\nlangsamer wird sich auch das Roulette\ndrehen.\n\nSomit sollte es dir auch nicht allzu\nschwerfallen, eine bestimmte Farbe\nanzufliegen!\n\n<0x10009:0x00120c00>Aber pass bloß auf, dass du keinen\n<color red<Dodo-Ballon >coloroff>triffst, sonst wird dein\nMultiplikator zurückgesetzt!\n\n<0x10009:0x000d0600>Ach, und den Paraschal kannst du\nbei diesem Spiel <color red<nicht verwenden>coloroff>,\nalso bereite dich schon mal auf eine\nharte Landung vor!")
/*< 13>*/ 					story_flags[42 /* us: 805A9AE7 0x08, jp: 805ACD67 0x08 */] = true;
/*<  1>*/ 					printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00120600>Genug der Erklärungen! Es wird Zeit, es\neinmal selbst auszuprobieren. Nun, wie wär's?\n[1-]Gerne![2]Vielleicht später!")
/*<  2>*/ 					switch (choice(2)) {
          					  case 0:
/*<130>*/ 						printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00000001>Soll ich dir die Regeln noch einmal erklären?\n[1-]Wäre besser...[2]Nein, danke.")
/*<131>*/ 						switch (choice(2)) {
          						  case 0:
/*<132>*/ 							printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x000d0602>Bitte erlaube mir, dir die Regeln erklären\nzu dürfen.\n\n\n<0x10009:0x00120600>Die Kanone hier in der Mitte wird dich in die\nLuft schießen. Das Ziel ist, auf dem rotierenden\nFeld zu landen.\n\nJe nach Farbe, die das Zielfeld hat, kannst du\nRubine eines bestimmten Wertes gewinnen.\n\n\n<0x10009:0x000d0600>Landest du jedoch auf einem <color red<grauen Feld>coloroff>,\ndann musst du mir Rubine zahlen!\n\n\n<0x10009:0x00121100>Sei nicht allzu gierig! Ein wenig <color red<Glück >coloroff>gehört\nbei diesem Spiel nämlich auch mit dazu!\n\n\nAlso nicht böse sein, wenn du auf einem <color red<grauen\nFeld >coloroff>landest und ich dich um ein paar Rubine\nerleichtere... Hi hi!")
/*<133>*/ 							printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00000600>Während du durch die Luft gleitest,\nwirst du auf <color red<Bonusringe >coloroff>sowie auf\n<color red<Dodo-Ballons >coloroff>stoßen.\n\n<0x10009:0x000d0600>Manövriere dich geschickt durch die\n<color red<Bonusringe >coloroff>und erhöhe dadurch deinen\nRubin-Multiplikator.\n\nJe mehr Ringe du durchfliegst, desto\nlangsamer wird sich auch das Roulette\ndrehen.\n\nSomit sollte es dir auch nicht allzu\nschwerfallen, eine bestimmte Farbe\nanzufliegen!\n\n<0x10009:0x00120c00>Aber pass bloß auf, dass du keinen\n<color red<Dodo-Ballon >coloroff>triffst, sonst wird dein\nMultiplikator zurückgesetzt!\n\n<0x10009:0x000d0600>Ach, und den Paraschal kannst du\nbei diesem Spiel <color red<nicht verwenden>coloroff>,\nalso bereite dich schon mal auf eine\nharte Landung vor!")
          							goto flw_74
          						  case 1:
          							goto flw_74
          						}
          					  case 1:
/*<  4>*/ 						printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00160d05>Huch! Das kam unerwartet!\nNervös geworden, wie?")
          					}
          				}
          			}
          		}
          	  case 1:
/*< 38>*/ 		switch (story_flags[92 /* us: 805A9AF1 0x02, jp: 805ACD71 0x02 */]) {
          		  case 0:
/*<152>*/ 			switch (story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */]) {
          			  case 0:
/*<153>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 31}
          			  case 1:
/*< 40>*/ 				switch (story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */]) {
          				  case 0:
/*<151>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 91, 'param3': 31}
/*< 91>*/ 					switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          					  case 0:
/*< 42>*/ 						printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x000a0c10>Es wäre ein kleines Wunder, wenn mir jemand\nmeine geliebte Roulettescheibe wiederbrächte.\n\n\nAber diesen Gedanken sollte ich mir wohl\nbesser aus dem Kopf schlagen.")
          					  case 1:
/*<105>*/ 						printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x0000000f>Hallihallo, mein junger Freund!\nHast du meine Roulettescheibe gefunden?\n\n\nNicht? Oh, na dann...")
/*<101>*/ 						{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 92, 'param3': 51}
/*< 92>*/ 						printf(/* textboxtype: 0, unk: 0, line: 44 */ "Die von dieser Person gesuchte <color red<Roulettescheibe>coloroff> ist\nnicht als Ziel für die <sound 4><color red<Aurasuche >coloroff>festgelegt.\n\n\nMöchtest du die <color red<Roulettescheibe>coloroff> als Ziel für die\n<sound 4><color red<Aurasuche >coloroff>festlegen?\n[1-]Ja![2]Nicht jetzt.")
/*< 93>*/ 						switch (choice(2)) {
          						  case 0:
/*< 94>*/ 							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = true;
/*< 99>*/ 							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*< 98>*/ 							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*< 95>*/ 							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*< 96>*/ 							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*< 97>*/ 							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<135>*/ 							open_dowsing_wheel(17)
/*<134>*/ 							printf(/* textboxtype: 1, unk: 0, line: 45 */ "Sehr wohl, <0x10012:0x00000005>Gebieter.\n\n\n\nDie <sound 4><color red<Aurasuche >coloroff>reagiert nun auf den von dieser Person\ngesuchten Gegenstand, die <color red<Roulettescheibe>coloroff>.")
/*<147>*/ 							printf(/* textboxtype: 1, unk: 0, line: 42 */ "Die Wahrscheinlichkeit, dass das gesuchte Objekt von\nhier aus in die <color blue<Wüste Ranelle>coloroff> gefallen ist, liegt meiner\nBerechnung nach bei 90 %.\n\nIch schlage vor, die Wüste nach dem Objekt\nabzusuchen.")
          							flw_102:
/*<102>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          						  case 1:
/*<100>*/ 							printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10012:0x00000005>Sehr wohl, Gebieter. Die Einstellungen der <sound 4>Aurasuche\nwerden nicht verändert.")
          							goto flw_102
          						}
          					}
          				  case 1:
/*< 44>*/ 					switch (story_flags[661 /* us: 805A9B1F 0x08, jp: 805ACD9F 0x08 */]) {
          					  case 0:
/*<103>*/ 						switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          						  case 0:
/*< 49>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 113, 'param3': 31}
/*<113>*/ 							switch (temp_flags[5 /* 0x1 20 */]) {
          							  case 0:
/*<114>*/ 								printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x0000000f>Ach, es ist nichts. Wirklich nicht! Du brauchst\ndir um mich keine Sorgen zu machen.\n\n\nEs geht nur um ein Schmuckstück, das ich auf\nmeinem Rücken getragen habe, meine\n<color blue<Roulettescheibe>coloroff>, <pause 10>aber...<pause 10>\n\nAber ich brauche sie, um diesen Ort hier\nzu schmücken!\n[1-]Ich suche sie![2]Tja, die ist wohl weg...")
          								flw_54:
/*< 54>*/ 								switch (choice(2)) {
          								  case 0:
/*< 55>*/ 									printf(/* textboxtype: 1, unk: 0, line: 30 */ "Und wie bitte schön soll ich etwas\nwiederfinden, das durch diese dichte\nWolkendecke gefallen ist?\n\nDas ist doch Mumpitz!\nTotaler Wahnwitz!\nAbsoluter Quatsch!")
/*< 56>*/ 									{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 57, 'param3': 51}
/*< 57>*/ 									printf(/* textboxtype: 0, unk: 1, line: 40 */ "Ich kann das Objekt, das diese Person sucht, als\ngegenwärtiges Ziel für die <sound 4><color red<Aurasuche>coloroff> festlegen.\n\n\nFalls du dich allerdings momentan auf der Suche\nnach einem anderen Objekt befindest, müsste ich\ndieses Objekt aus der Aurasuche entfernen.\n\nSoll ich diese Änderung vornehmen und die\n<color red<Aurasuche>coloroff> so einstellen, dass du nach der\n<color red<Roulettescheibe >coloroff>suchen kannst?[1-]Ja[2]Nein")
/*<109>*/ 									switch (choice(2)) {
          									  case 0:
/*<110>*/ 										printf(/* textboxtype: 0, unk: 0, line: 41 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Die <color red<Aurasuche >coloroff>wurde von mir\n<color red<nach deinen Wünschen >coloroff>eingestellt.")
/*<136>*/ 										story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = true;
/*<141>*/ 										story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<140>*/ 										story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<137>*/ 										story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<138>*/ 										story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<139>*/ 										story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<142>*/ 										open_dowsing_wheel(17)
/*<143>*/ 										printf(/* textboxtype: 1, unk: 0, line: 42 */ "Die Wahrscheinlichkeit, dass das gesuchte Objekt von\nhier aus in die <color blue<Wüste Ranelle>coloroff> gefallen ist, liegt meiner\nBerechnung nach bei 90 %.\n\nIch schlage vor, die Wüste nach dem Objekt\nabzusuchen.")
          										flw_58:
/*< 58>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 45, 'param3': 36}
/*< 45>*/ 										story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */] = true;
/*<104>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 59, 'param3': 50}
/*< 59>*/ 										printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x000a0c10>Es wäre ein kleines Wunder, wenn mir jemand\nmeine geliebte Roulettescheibe wiederbrächte.\n\n\nAber diesen Gedanken sollte ich mir wohl\nbesser aus dem Kopf schlagen.")
          									  case 1:
/*<111>*/ 										printf(/* textboxtype: 0, unk: 1, line: 43 */ "Um das Objekt erneut als Ziel für die Aurasuche\nfestzulegen, sprich bitte mit dieser Person,\nmein <0x10012:0x00000005>Gebieter.")
          										goto flw_58
          									}
          								  case 1:
          									flw_52:
/*< 52>*/ 									printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00000010>Wie sollen denn die Leute ohne mein Roulette\nSpaß haben?\n\n\n<0x10009:0x000a0c00>Was für ein Schlamassel!")
/*<112>*/ 									temp_flags[5 /* 0x1 20 */] = true;
          								}
          							  case 1:
/*< 50>*/ 								printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x0000000f>Hmpf...\nWas soll ich nur tun?\nEs ist zum Verzweifeln!\n[1-]Was ist los?[2]...")
/*< 51>*/ 								switch (choice(2)) {
          								  case 0:
/*< 53>*/ 									printf(/* textboxtype: 0, unk: 0, line: 29 */ "Meine Roulettescheibe hat sich von meinem\nRücken gelöst und ist nach unten gefallen.\n\n\nOhne ihre Hilfe kann ich diese Insel zu keinem\nvergnüglichen Ort machen! Unmöglich!\n\n\n<0x10009:0x000a0c00>Wie soll es jetzt weitergehen?\nWenn sie wirklich auf das Erdland gestürzt ist,\ndann war's das wohl.\n[1-]Such danach![2]Gib's auf.")
          									goto flw_54
          								  case 1:
          									goto flw_52
          								}
          							}
          						  case 1:
          							flw_41:
/*< 41>*/ 							printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x0000000f>Hmpf... Meine Roulettescheibe ist von hier\nhinuntergefallen... Ohne sie kann ich meinen\nTraum nicht verwirklichen!\n\nSie hat mir immer so viel Kraft und Antrieb\ngegeben. Doch nun... Fort!")
          						}
          					  case 1:
          						goto flw_41
          					}
          				}
          			}
          		  case 1:
/*<107>*/ 			switch (temp_flags[4 /* 0x1 10 */]) {
          			  case 0:
/*<108>*/ 				printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000001>Ach, meine schöne <color blue<Roulette-Insel>coloroff>! Ich stecke\nmitten in den Vorbereitungen, schau bitte\nspäter noch mal vorbei.")
          			  case 1:
/*< 39>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x000d0001>Uiuiuiuiuiui!\nKomme nur näher, junger Mann!\n\n\n<0x10009:0x00090600>Du fragst dich bestimmt, was ich hier so treibe.\n[1-]Mag sein...[2]Nö!")
/*< 46>*/ 				switch (choice(2)) {
          				  case 0:
/*< 48>*/ 					printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x000d0002>Genau das wollte ich hören!\n\n\n\n<0x10009:0x00080600>Ich möchte diese Insel zu einem Ort\nmachen, an dem die Leute Spaß haben\nkönnen.\n\nSoll ich dir ihren Namen verraten?<pause 30>\nIch nenne sie <color blue<Roulette-Insel>coloroff>!\n\n\n<0x10009:0x00120600>Doch bis dieser Ort so weit ist, gibt es\nnoch Einiges zu erledigen. Schau doch\nspäter noch mal vorbei!")
/*<106>*/ 					temp_flags[4 /* 0x1 10 */] = true;
          				  case 1:
/*< 47>*/ 					printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x000d0c03>Das war nun nicht gerade die Antwort, die ich\nerwartet hatte...\n\n\n<0x10009:0x00080600>Wie dem auch sei, ich liebe es, den Leuten bei\nder Verwirklichung ihrer Träume behilflich\nzu sein.")
          				}
          			}
          		}
          	}
          }

          void entrypoint_110_02() {
/*< 21>*/ 	start()
/*< 88>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 31, 'param3': 44}
/*< 31>*/ 	zone_temp_flags[5 /* 0x1 20 */] = false;
/*< 26>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 14, 'param3': 12}
/*< 14>*/ 	switch (context_related4(0)) {
          	  case 0:
/*<115>*/ 		{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 6912, 'next': 117, 'param3': 13}
/*<117>*/ 		wait_frames(50)
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 1, line: 12 */ "<0x10009:0x0000ff05>Was für ein Jammer! Du bist auf einem\ngrauen Feld gelandet! Du Pechvogel...\n\n\nTja, das bedeutet, du schuldest mir\n<color red<<numeric arg2 0> <0x30004:0x01cd>>coloroff>!")
/*< 25>*/ 		make_actor_do_something(1, 0)
          		flw_89:
/*< 89>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 125, 'param3': 45}
/*<125>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<116>*/ 		{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 6912, 'next': 118, 'param3': 13}
/*<118>*/ 		wait_frames(50)
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x0000ff05>Huch? Hoppla! <color red<0 Rubine>coloroff>?\nLass dich davon nicht entmutigen.\nVersuch's ruhig noch einmal!")
          		goto flw_89
          	  case 2:
/*<119>*/ 		{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5888, 'next': 121, 'param3': 13}
/*<121>*/ 		wait_frames(85)
/*< 17>*/ 		printf(/* textboxtype: 1, unk: 1, line: 15 */ "<0x10009:0x00ffff06>Hey! Du bist tatsächlich auf einem guten\nFeld gelandet!\n\n\n<0x10009:0x000d0600>Nun... Das Feld ist <numeric arg0 0> <0x30004:0x01cd> wert, und du hast\neinen Multiplikator von <numeric arg1 0> erwischt...\n\n\nDas bedeutet, du hast <color red<<numeric arg2 0> <0x30004:0x01cd>\n>coloroff>gewonnen! Herzlichen Glückwunsch!")
/*<123>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			flw_23:
/*< 23>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "Also, du bekommst <numeric arg2 0> <0x30004:0x01cd>!")
/*< 32>*/ 			make_actor_do_something(1, 0)
/*< 90>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 124, 'param3': 45}
/*<124>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*< 27>*/ 			printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00120600>Passierst du alle fünf Bonusringe,\nvermeidest die Dodo-Ballons und\nlandest auf dem 50-Rubine-Feld...\n\n<0x10009:0x00081000>Dann bekommst du von mir einen\ntotal tollen Sonderpreis!")
          			goto flw_23
          		}
          	  case 3:
/*<120>*/ 		{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 5120, 'next': 122, 'param3': 13}
/*<122>*/ 		wait_frames(130)
/*< 24>*/ 		printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00ffff06>Spektakulös! Fabulär! Du bist auf einem\nFeld im Wert von 50 Rubinen gelandet!\n\n\nDein Multiplikator liegt bei <numeric arg1 0>, und das\nbedeutet, du hast <color red<<numeric arg2 0> <0x30004:0x01cd>>coloroff>\ngewonnen!")
/*< 86>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			goto flw_23
          		  case 1:
/*< 18>*/ 			switch (context_related2(0)) {
          			  case 0:
/*< 20>*/ 				printf(/* textboxtype: 0, unk: 0, line: 17 */ "Du hast tatsächlich alle Ringe passiert und bist\ndann auf dem 50-Rubine-Feld gelandet! Dafür\nbekommst du von mir einen Sonderpreis!")
/*< 87>*/ 				scene_flags[21 'The Sky'][19 /* 0x3 08 */] = true;
/*<148>*/ 				check_item_flag(489, 3)
/*<149>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 65}) {
          				  case 0:
/*<150>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 19, 'param3': 12}
          					flw_19:
/*< 19>*/ 					give_item(94 0x5E);
          					goto flw_23
          				  case 1:
          					goto flw_19
          				}
          			  case 1:
/*< 28>*/ 				printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00120600>Passierst du alle fünf Bonusringe,\nvermeidest die Dodo-Ballons und\nlandest auf dem 50-Rubine-Feld...\n\n<0x10009:0x00081000>Dann bekommst du von mir einen\ntotal tollen Sonderpreis!")
          				goto flw_23
          			}
          		}
          	}
          }

          void entrypoint_110_04() {
/*< 61>*/ 	start()
/*< 73>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*< 66>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00000006>Vielen, vielen Dank! Nun kann ich endlich\nmeine <color blue<Roulette-Insel >coloroff>in Betrieb nehmen!\n\n\n<0x10009:0x00000a00>Ooooooh!\nSo glücklich war ich schon lange nicht mehr!")
/*< 67>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "Du darfst mein erster Kunde sein!\nAls kleines Dankeschön!")
/*< 43>*/ 		story_flags[398 /* us: 805A9B0E 0x01, jp: 805ACD8E 0x01 */] = true;
/*< 60>*/ 		give_gratitude_crystals();
          	  case 1:
/*< 63>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 65>*/ 			printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x00000007>Uiuiuiuiuiui!\nMeine geliebte Roulettescheibe!")
/*< 72>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		  case 1:
/*< 62>*/ 			printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x0000000b>Ist das etwa... Kann es sein...\n\n\n\nTatsächlich! Ich traue meinen Augen kaum!")
/*< 64>*/ 			zone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	}
          }

          void entrypoint_110_05() {
/*< 71>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10012:0x00000064>Ich habe dieses formschöne kreisrunde\nStück hergebracht.")
/*< 70>*/ 	make_actor_do_something(0, 0)
/*< 69>*/ 	printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10012:0x00000064>Falls du sonst noch etwas brauchst, lass es mich\nbitte wissen... Bzzz...")
          }

