          void entrypoint_107_04() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf("\x0E\x02\x04\x02\x14CD Statue der Göttin")
          }

          void entrypoint_107_21() {
/*< 41>*/ 	start()
/*< 42>*/ 	printf("Badezimmer")
          }

          void entrypoint_107_56() {
/*< 63>*/ 	start()
/*<158>*/ 	story_flags[104 /* us: 805A9ADE 0x20, jp: 805ACD5E 0x20 */] = true;
/*<153>*/ 	check_item_flag(502, 80)
/*<152>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 26}) {
          	  case 0:
/*<112>*/ 		printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu berichten.\n\n\n\nDein Schwert hat an Macht gewonnen, weshalb du\nnun die <r<Aurasuche>><g< >>nutzen kannst, um nach den\n<y<Juwelen der Güte >>zu suchen.\n\nDie <y<Juwelen der Güte >>wurden der <r<Aurasuche>> als\nneues Ziel hinzugefügt.<pling>")
/*<159>*/ 		open_dowsing_wheel(19)
/*<160>*/ 		printf("Wie ich sehe, hast du bereits alle Juwelen der Güte\ngesammelt. Du bist sehr umsichtig, \x0E\x01\x12\x04\x00\x02Gebieter.")
          	  case 1:
/*< 64>*/ 		printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu berichten.\n\n\n\nDein Schwert hat an Macht gewonnen, weshalb du\nnun die <r<Aurasuche>><g< >>nutzen kannst, um nach den\n<y<Juwelen der Güte >>zu suchen.\n\nDie <y<Juwelen der Güte >>wurden der <r<Aurasuche>> als\nneues Ziel hinzugefügt.<pling> Mache von dieser Option\nGebrauch, wie es dir beliebt.")
/*< 65>*/ 		open_dowsing_wheel(19)
          	}
          }

          void entrypoint_107_39() {
/*<137>*/ 	start()
/*<145>*/ 	printf("Genieße die Kürbissuppe,\nsolange sie noch heiß ist!")
          }

          void entrypoint_107_05() {
/*<  8>*/ 	start()
/*<  9>*/ 	printf("\x0E\x02\x04\x02\x14CD Zum Dorfplatz")
          }

          void entrypoint_107_22() {
/*< 45>*/ 	start()
/*< 46>*/ 	printf("Übungshalle")
          }

          void entrypoint_107_57() {
/*< 78>*/ 	start()
/*< 80>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu berichten.\n\n\n\nDein Wolkenvogel ruht sich nachts aus.\nTue es ihm gleich und gönne dir etwas Schlaf.")
          }

          void entrypoint_107_06() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf("\x0E\x02\x04\x02\x14CD Ritterschule")
          }

          void entrypoint_107_58() {
/*< 79>*/ 	start()
/*< 81>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu berichten.\n\n\n\nAuf einer der Inseln im Wolkenmeer findest du den\n<r<Eingang zur Sairen>>, der sich mit dem Heldenlied\nöffnen lässt. Finde ihn mit der <r<Aurasuche>>.")
/*<161>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 162, 'param3': 58}
/*<162>*/ 	open_dowsing_wheel(6)
/*<163>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_107_23() {
/*< 82>*/ 	start()
/*< 84>*/ 	switch (story_flags[712 /* us: 805A9B25 0x04, jp: 805ACDA5 0x04 */]) {
          	  case 0:
/*< 83>*/ 		printf("\x0E\x01\x08\x02\xFFCDLageristin\n\x0E\x01\x08\x02ÍPicas Haus")
          	  case 1:
          	}
          }

          void entrypoint_107_40() {
/*<138>*/ 	start()
/*<146>*/ 	printf("Suche fleißigen Helfer zum\nBestellen der Kürbisfelder.")
          }

          void entrypoint_107_07() {
/*< 51>*/ 	start()
/*< 52>*/ 	printf("Das Rennen im Flur ist\nstrengstens untersagt!")
          }

          void entrypoint_107_24() {
/*< 85>*/ 	start()
/*< 86>*/ 	switch (story_flags[713 /* us: 805A9B25 0x08, jp: 805ACDA5 0x08 */]) {
          	  case 0:
/*< 87>*/ 		printf("Rissas Haus")
          	  case 1:
          	}
          }

          void entrypoint_107_59() {
/*<117>*/ 	start()
/*<118>*/ 	printf("\x0E\x01\x12\x04\x00\x01Hervorragend, Gebieter.\n\n\n\nDu hast alle Prüfungen bestanden.")
/*<121>*/ 	set_camera(6, 0)
/*<119>*/ 	printf("Es gibt noch ein weiteres <r<Insigne der Reife\n>>außer dem, das du besitzt.\n\n\nIch stelle fest,\x0E\x01\x12\x04\x00\x02 dass sich auf dieser Insel ein Objekt\nbefindet, das dem gleicht, welches du bei dir trägst.\n\n\nFindest du es und fügst du beide zusammen,\nöffnet sich dir der Weg zum <y+<Triforce>>.\n\n\n\x0E\x01\n\x04\xFFFFÍIch empfehle dir, nach diesem Objekt zu suchen.")
/*<120>*/ 	story_flags[769 /* us: 805A9B2A 0x02, jp: 805ACDAA 0x02 */] = true;
          }

          void entrypoint_107_41() {
/*<139>*/ 	start()
/*<147>*/ 	printf("Der Wolkenhort liegt keine\nzehn Flügelschläge von hier\nentfernt im Nordwesten!")
          }

          void entrypoint_107_25() {
/*< 88>*/ 	start()
/*< 89>*/ 	switch (story_flags[714 /* us: 805A9B25 0x10, jp: 805ACDA5 0x10 */]) {
          	  case 0:
/*< 90>*/ 		printf("Kukis Haus")
          	  case 1:
          	}
          }

          void entrypoint_107_08() {
/*<113>*/ 	start()
/*<114>*/ 	printf("Springe an einem Steg ab,\num den Wolkenhort per\nWolkenvogel zu verlassen!")
          }

          void entrypoint_107_42() {
/*<140>*/ 	start()
/*<148>*/ 	printf("Giruna + Ra...")
          }

          void entrypoint_107_26() {
/*< 91>*/ 	start()
/*< 92>*/ 	switch (story_flags[715 /* us: 805A9B25 0x20, jp: 805ACDA5 0x20 */]) {
          	  case 0:
/*< 93>*/ 		printf("Hirus und Galeas Haus")
          	  case 1:
          	}
          }

          void entrypoint_107_09() {
/*<115>*/ 	start()
/*<116>*/ 	printf("Jeder Schüler hat sich selbst\num Ordnung und Sauberkeit\nseines Zimmers zu kümmern!")
          }

          void entrypoint_107_60() {
/*<124>*/ 	start()
/*<126>*/ 	set_camera(10, 0)
/*<129>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 356, 'next': 127, 'param3': 15}
/*<127>*/ 	set_camera(11, 0)
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 128, 'param3': 51}
/*<128>*/ 	set_camera(12, 0)
/*<125>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu berichten.\nDiese Insel ist mir bekannt.\n\n\nMan nennt sie die <b<Stätte der Lieder>>. \x0E\x01\x12\x04\x00\x02Die Göttin selbst\nhat diesen Ort für dich geschaffen, Gebieter.\n\n\nMir ist jedoch nicht bekannt, wie das Erreichen des\nTurms möglich ist. Ich empfehle dir, die Umgebung\nnach einer Möglichkeit zu untersuchen.")
/*<131>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 132, 'param3': 36}
/*<132>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_107_43() {
/*<168>*/ 	start()
/*<169>*/ 	printf("Drehe das zentrale Podest.\nVervollständige die Brücke und\nbetritt die Stätte der Lieder.")
          }

          void entrypoint_107_27() {
/*< 94>*/ 	start()
/*< 95>*/ 	switch (story_flags[716 /* us: 805A9B25 0x40, jp: 805ACDA5 0x40 */]) {
          	  case 0:
/*< 96>*/ 		printf("\x0E\x01\x08\x02\xFFCDHändler\n\x0E\x01\x08\x02ÍKulkans Haus")
          	  case 1:
          	}
          }

          void entrypoint_107_61() {
/*<154>*/ 	start()
/*<156>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich stelle fest, dass sich in nordöstlicher\nRichtung ein weiteres Loch in den Wolken\naufgetan hat.\n\nEs führt dich an einen neuen Ort. Ich empfehle dir,\ndiesen Ort aufzusuchen, sobald du dich auf die Reise\nvorbereitet hast.")
          }

          void entrypoint_107_44() {
/*<178>*/ 	start()
/*<179>*/ 	printf("~ Geschlossen ~\nBitte besuchen Sie uns\nmorgen wieder!\n\nIn Notfällen besuchen Sie\nbitte die jeweiligen Händler\nin ihren Häusern.\nDie Basarverwaltung")
          }

          void entrypoint_107_10() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf("Zimmer von Link")
          }

          void entrypoint_107_28() {
/*< 97>*/ 	start()
/*< 98>*/ 	switch (story_flags[717 /* us: 805A9B25 0x80, jp: 805ACDA5 0x80 */]) {
          	  case 0:
/*< 99>*/ 		printf("Cucos Haus")
          	  case 1:
          	}
          }

          void entrypoint_107_62() {
/*<155>*/ 	start()
/*<157>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich stelle fest, dass sich in südwestlicher\nRichtung ein weiteres Loch in den Wolken\naufgetan hat.\n\nEs führt dich an einen neuen Ort. Ich empfehle dir,\ndiesen Ort aufzusuchen, sobald du dich auf die Reise\nvorbereitet hast.")
          }

          void entrypoint_107_45() {
/*<180>*/ 	start()
/*<181>*/ 	printf("Brave Kinder waschen\nsich stets die Hände!")
          }

          void entrypoint_107_11() {
/*< 21>*/ 	start()
/*< 28>*/ 	printf("Bados Reich")
          }

          void entrypoint_107_29() {
/*<100>*/ 	start()
/*<101>*/ 	switch (story_flags[718 /* us: 805A9B24 0x01, jp: 805ACDA4 0x01 */]) {
          	  case 0:
/*<102>*/ 		printf("\x0E\x01\x08\x02\xFFCDWahrsager\n\x0E\x01\x08\x02ÍAmadins Haus")
          	  case 1:
          	}
          }

          void entrypoint_107_63() {
/*<165>*/ 	start()
/*<166>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter Link.\n\n\n\nUm Narisha helfen zu können, musst du den\nTornadostoß meistern.\n\n\nMeister Otus wartet bereits im Nordosten auf dich,\n<r<in der Nähe der Statue eines Vogels>>.\n\n\nIch empfehle dir, zu ihm zu eilen.")
          }

          void entrypoint_107_46() {
/*<182>*/ 	start()
/*<183>*/ 	printf("Gründliches Putzen\nist wichtig!")
          }

          void entrypoint_107_12() {
/*< 22>*/ 	start()
/*< 29>*/ 	printf("Rax' und Strus Zimmer")
          }

          void entrypoint_107_64() {
/*<170>*/ 	start()
/*<172>*/ 	switch (story_flags[649 /* us: 805A9B1C 0x04, jp: 805ACD9C 0x04 */]) {
          	  case 0:
/*<174>*/ 		printf("\x0E\x01\x12\x04\x00\x0BGebieter Link...\n\n\n\n\x0E\x01\n\x04\x0DÍDiese Schatztruhe hat die Göttin einst für den\nauserwählten Helden hier hinterlassen.")
/*<176>*/ 		set_camera(-1, 0)
/*<175>*/ 		printf("Ich vermute, dass die Energie der <r<Artefakte der\nGöttin>> die Schatztruhen öffnen kann.\n\n\nSende die Artefakte der Göttin aus dem Erdland zum\nHimmel und ihre Energie wird die Truhen öffnen.\nSo kannst du an ihren Inhalt gelangen.")
          	  case 1:
/*<171>*/ 		printf("\x0E\x01\x12\x04\x00\x0BGebieter Link...\n\n\n\n\x0E\x01\n\x04\x0DÍDiese Schatztruhe hat die Göttin einst für den\nauserwählten Helden hier hinterlassen.")
/*<177>*/ 		set_camera(-1, 0)
/*<173>*/ 		printf("Leider habe ich keine Daten darüber, wie man sie\nöffnen kann.")
          	}
          }

          void entrypoint_107_47() {
/*<184>*/ 	start()
/*<185>*/ 	printf("Ich bin geschäftlich unterwegs\nund komme abends zurück.\n\x0E\x01\x06\x02\x5CDTerri")
          }

          void entrypoint_107_13() {
/*< 23>*/ 	start()
/*< 30>*/ 	printf("Grus' Zimmer")
          }

          void entrypoint_107_30() {
/*< 47>*/ 	start()
/*< 48>*/ 	printf("Mit Licht soll dem Helden, der im\nhellen Schein die Hymne der Göttin\nspielt, der Weg gewiesen werden.")
          }

          void entrypoint_107_14() {
/*< 24>*/ 	start()
/*< 31>*/ 	printf("Direktor Geporas Zimmer")
          }

          void entrypoint_107_31() {
/*<103>*/ 	start()
/*<104>*/ 	switch (story_flags[719 /* us: 805A9B24 0x02, jp: 805ACDA4 0x02 */]) {
          	  case 0:
/*<105>*/ 		printf("\x0E\x01\x08\x02\xFFCDTüftler\n\x0E\x01\x08\x02ÍDorucos Haus")
          	  case 1:
          	}
          }

          void entrypoint_107_15() {
/*< 25>*/ 	start()
/*< 32>*/ 	printf("Meister Otus' Zimmer")
          }

          void entrypoint_107_32() {
/*<106>*/ 	start()
/*<107>*/ 	switch (story_flags[720 /* us: 805A9B24 0x04, jp: 805ACDA4 0x04 */]) {
          	  case 0:
/*<108>*/ 		printf("\x0E\x01\x08\x02\xFFCDTrankbrauer\n\x0E\x01\x08\x02ÍDiomeds Haus")
          	  case 1:
          	}
          }

          void entrypoint_107_50() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf("\x0E\x01\x12\x04\x00\x04Gebieter, siehst du den <r<grünen Lichtstrahl >>vor dir?\nDies ist eine sogenannte <b<Lichtsäule>>, über die du zum\nErdland gelangen kannst.")
/*< 70>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 72, 'param3': 30}
/*< 72>*/ 	printf("Du kannst ihren Standort auch auf deiner Karte\neinsehen. Überprüfe, wie du vom Wolkenhort dorthin\ngelangen kannst.")
/*< 71>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 73, 'param3': 34}
/*< 73>*/ 	printf("Am Fuß der Säule befindet sich ein Loch in\nden Wolken. Es verbindet das Wolkenmeer\nmit dem Erdland.")
/*< 14>*/ 	story_flags[198 /* us: 805A9AEF 0x01, jp: 805ACD6F 0x01 */] = true;
          }

          void entrypoint_107_16() {
/*< 26>*/ 	start()
/*< 33>*/ 	printf("Meister Tytors Zimmer")
          }

          void entrypoint_107_33() {
/*<109>*/ 	start()
/*<110>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<111>*/ 		printf("Morsegos Hütte")
          	  case 1:
          	}
          }

          void entrypoint_107_51() {
/*< 15>*/ 	start()
/*< 17>*/ 	printf("\x0E\x01\x12\x04\x00\x01Gebieter, die Steintafel, die du gestern Nacht\neingesetzt hast, steht in direkter Verbindung\nzur Passage ins Erdland.\n\nDie Lichtsäule ist von hier aus gesehen in südlicher\nRichtung erschienen. An ihrem Fuß befindet sich\nein Loch in den Wolken, das nach unten führt.")
/*< 66>*/ 	printf("Ich muss dich darauf hinweisen, dass deine\nÜberlebenschancen im Erdland gering sind,\nsolltest du bloß mit einem Schwert bewaffnet sein.\n\nIch empfehle dir, im örtlichen Basar einen <r<Schild\n>>oder einen <r<Herztrank >>zu erwerben.")
/*< 53>*/ 	story_flags[198 /* us: 805A9AEF 0x01, jp: 805ACD6F 0x01 */] = true;
/*< 67>*/ 	story_flags[679 /* us: 805A9B22 0x02, jp: 805ACDA2 0x02 */] = true;
/*<167>*/ 	story_flags[358 /* us: 805A9B00 0x10, jp: 805ACD80 0x10 */] = true;
          }

          void entrypoint_107_17() {
/*< 27>*/ 	start()
/*< 34>*/ 	printf("Girunas Zimmer")
          }

          void entrypoint_107_34() {
/*<122>*/ 	start()
/*<123>*/ 	printf("Norden: Statue der Göttin\nOsten: Wohnviertel\nSüden: Dorfplatz\nWesten: Ritterschule")
          }

          void entrypoint_107_52() {
/*< 18>*/ 	start()
/*< 16>*/ 	printf("\x0E\x01\x12\x04\x00\x01Gebieter, von hier aus kannst du die\nLichtsäule erblicken.")
/*< 75>*/ 	set_camera(2, 0)
/*< 74>*/ 	printf("Springe nun in diese Richtung ab und rufe\ndeinen Wolkenvogel.")
/*< 77>*/ 	set_camera(-1, 0)
/*< 76>*/ 	printf("Bitte mache dich nun auf die Suche nach Zelda.\nDrücke (v), um deinen Wolkenvogel zu rufen,\nnachdem du abgesprungen bist.\x0E\x01\x11\x02\x9CD")
          }

          void entrypoint_107_18() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf("Zeldas Zimmer")
          }

          void entrypoint_107_35() {
/*<133>*/ 	start()
/*<141>*/ 	printf("Kürbissuppe lässt die Kräfte\nquellen und erfüllt dich mit\nLebensfreude! Ein Teller nur\n10 Rubine!")
          }

          void entrypoint_107_01() {
          	start()
/*<  1>*/ 	printf("Hier beginnt die Höhle hinter\ndem Wasserfall. Vorsicht vor\nblutsaugendem Getier! Zutritt\nfür Kinder streng verboten!")
          }

          void entrypoint_107_19() {
/*< 37>*/ 	start()
/*< 49>*/ 	switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          	  case 0:
/*< 50>*/ 		printf("Der Sieg von Link\nwurde von einem tragischen\nEreignis überschattet...")
          	  case 1:
/*< 38>*/ 		printf("~ Vogelreiter-Zeremonie ~\nEs treten an: Bado, Rax, Stru\nund Link.")
          	}
          }

          void entrypoint_107_53() {
/*< 43>*/ 	start()
/*<186>*/ 	switch (scene_flags[25 /* 0x2 02 */]) {
          	  case 0:
/*<187>*/ 		printf("\x0E\x01\x12\x04\x00\x04Gebieter, setze die <r<Steintafel>>, die ich dir gab,\nin das Podest ein.")
          	  case 1:
/*< 68>*/ 		switch (story_flags[38 /* us: 805A9AE5 0x10, jp: 805ACD65 0x10 */]) {
          		  case 0:
/*< 44>*/ 			printf("\x0E\x01\x12\x04\x00\x04Gebieter, triff das Symbol mit dem <r<Himmelsstrahl\n>>und setze die Steintafel ein, die ich dir vorhin gab.\n\n\n<g<Hebe dein Schwert gen Himmel>>, um es mit\nheiliger Energie aufzuladen, und feuere dann\nden <r<Himmelsstrahl >>ab.")
          		  case 1:
/*< 69>*/ 			printf("Mein Name ist <b<Phai>>... Stelle dich vor das Podest und\nziehe das Schwert heraus.")
          		}
          	}
          }

          void entrypoint_107_36() {
/*<134>*/ 	start()
/*<149>*/ 	switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          	  case 0:
/*<150>*/ 		printf("~ Kabochas Bühne ~\nUnregelmäßiger Betrieb\n(nur nachts)")
          	  case 1:
/*<142>*/ 		printf("~ Kabochas Bühne ~\nAus Mangel an Musikern\nvorübergehend geschlossen.\nMusiker werden gesucht.")
          	}
          }

          void entrypoint_107_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf("\x0E\x02\x04\x02\x16CD Ritterschule\nWohnviertel \x0E\x02\x04\x02\x17CD")
          }

          void entrypoint_107_54() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf("Wenn du die in der Welt verstreuten <r<Artefakte\nder Göttin >>mit deinem <r<Himmelsstrahl >>triffst,\nwird Energie freigesetzt, \x0E\x01\x12\x04\x00\x04Gebieter.\n\nDiese Energie führt zu einer Veränderung\nim Wolkenmeer.")
/*< 58>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 7, 'next': 151, 'param3': 30}
/*<151>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 56, 'param3': 6}
/*< 56>*/ 	printf("Die auf der Karte markierten Orte zeigen dir jene\nStellen, an denen eine Veränderung eingetreten ist.")
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 57, 'param3': 34}
/*< 57>*/ 	printf("Ich empfehle dir, diese Orte genauer zu untersuchen.")
/*< 62>*/ 	scene_flags[21 'The Sky'][13 /* 0x0 20 */] = true;
          }

          void entrypoint_107_37() {
/*<135>*/ 	start()
/*<143>*/ 	printf("Der großartige Kronleuchter\nbefindet sich im Obergeschoß.")
          }

          void entrypoint_107_03() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf("\x0E\x02\x04\x02\x14CD Zum Basar")
          }

          void entrypoint_107_20() {
/*< 39>*/ 	start()
/*< 40>*/ 	printf("Toilette")
          }

          void entrypoint_107_55() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf("Es würde Tausende Jahre dauern, bis an dieser Stelle\netwas wächst. Ich halte dies nicht für den richtigen\nOrt, um diese Saat zu pflanzen.")
          }

          void entrypoint_107_38() {
/*<136>*/ 	start()
/*<144>*/ 	printf("Achtung: Kronleuchter\nAn dieser Stelle bitte\nruhig verhalten!")
          }

