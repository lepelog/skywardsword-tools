          void entrypoint_107_04() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 6, unk: 0, line: 3 */ "<icon 20> Statue der Göttin")
          }

          void entrypoint_107_21() {
/*< 41>*/ 	start()
/*< 42>*/ 	printf(/* textboxtype: 22, unk: 0, line: 21 */ "Badezimmer")
          }

          void entrypoint_107_56() {
/*< 63>*/ 	start()
/*<158>*/ 	story_flags[104 /* us: 805A9ADE 0x20, jp: 805ACD5E 0x20 */] = true;
/*<153>*/ 	check_item_flag(502, 80)
/*<152>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 26}) {
          	  case 0:
/*<112>*/ 		printf(/* textboxtype: 2, unk: 0, line: 72 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas\nzu berichten.\n\n\nDein Schwert hat an Macht gewonnen,\nweshalb du nun die <color red<Aurasuche>coloroff><color green< >coloroff>nutzen\nkannst, um nach den <color yellow<Juwelen der Güte>coloroff>\nzu suchen.\nDie <color yellow<Juwelen der Güte >coloroff>wurden der\n<color red<Aurasuche>coloroff> als neues Ziel hinzugefügt.<sound 4>")
/*<159>*/ 		open_dowsing_wheel(19)
/*<160>*/ 		printf(/* textboxtype: 2, unk: 0, line: 73 */ "Wie ich sehe, hast du bereits alle\nJuwelen der Güte gesammelt.\nDu bist sehr umsichtig, <0x10012:0x00000002>Gebieter.")
          	  case 1:
/*< 64>*/ 		printf(/* textboxtype: 2, unk: 0, line: 71 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas\nzu berichten.\n\n\nDein Schwert hat an Macht gewonnen,\nweshalb du nun die <color red<Aurasuche>coloroff><color green< >coloroff>nutzen\nkannst, um nach den <color yellow<Juwelen der Güte>coloroff>\nzu suchen.\nDie <color yellow<Juwelen der Güte >coloroff>wurden der\n<color red<Aurasuche>coloroff> als neues Ziel hinzugefügt.<sound 4>\nMache von dieser Option Gebrauch,\nwie es dir beliebt.")
/*< 65>*/ 		open_dowsing_wheel(19)
          	}
          }

          void entrypoint_107_39() {
/*<137>*/ 	start()
/*<145>*/ 	printf(/* textboxtype: 8, unk: 0, line: 40 */ "Genieße die Kürbissuppe,\nsolange sie noch heiß ist!")
          }

          void entrypoint_107_05() {
/*<  8>*/ 	start()
/*<  9>*/ 	printf(/* textboxtype: 6, unk: 0, line: 4 */ "<icon 20> Zum Dorfplatz")
          }

          void entrypoint_107_22() {
/*< 45>*/ 	start()
/*< 46>*/ 	printf(/* textboxtype: 22, unk: 0, line: 22 */ "Übungshalle")
          }

          void entrypoint_107_57() {
/*< 78>*/ 	start()
/*< 80>*/ 	printf(/* textboxtype: 2, unk: 0, line: 74 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas\nzu berichten.\n\n\nDein Wolkenvogel ruht sich nachts aus.\nTue es ihm gleich und gönne dir etwas\nSchlaf.")
          }

          void entrypoint_107_06() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 6, unk: 0, line: 5 */ "<icon 20> Ritterschule")
          }

          void entrypoint_107_58() {
/*< 79>*/ 	start()
/*< 81>*/ 	printf(/* textboxtype: 2, unk: 0, line: 75 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas\nzu berichten.\n\n\nAuf einer der Inseln im Wolkenmeer\nfindest du den <color red<Eingang zur Sairen>coloroff>,\nder sich mit dem Heldenlied öffnen\nlässt. Finde ihn mit der <color red<Aurasuche>coloroff>.")
/*<161>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 162, 'param3': 58}
/*<162>*/ 	open_dowsing_wheel(6)
/*<163>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_107_23() {
/*< 82>*/ 	start()
/*< 84>*/ 	switch (story_flags[712 /* us: 805A9B25 0x04, jp: 805ACDA5 0x04 */]) {
          	  case 0:
/*< 83>*/ 		printf(/* textboxtype: 22, unk: 0, line: 23 */ "<0x10008:0xffcd>Lageristin\n<0x10008:0x00cd>Picas Haus")
          	  case 1:
          	}
          }

          void entrypoint_107_40() {
/*<138>*/ 	start()
/*<146>*/ 	printf(/* textboxtype: 8, unk: 0, line: 41 */ "Suche fleißigen Helfer zum\nBestellen der Kürbisfelder.")
          }

          void entrypoint_107_07() {
/*< 51>*/ 	start()
/*< 52>*/ 	printf(/* textboxtype: 8, unk: 0, line: 6 */ "Das Rennen im Flur ist\nstrengstens untersagt!")
          }

          void entrypoint_107_24() {
/*< 85>*/ 	start()
/*< 86>*/ 	switch (story_flags[713 /* us: 805A9B25 0x08, jp: 805ACDA5 0x08 */]) {
          	  case 0:
/*< 87>*/ 		printf(/* textboxtype: 22, unk: 0, line: 24 */ "Rissas Haus")
          	  case 1:
          	}
          }

          void entrypoint_107_59() {
/*<117>*/ 	start()
/*<118>*/ 	printf(/* textboxtype: 2, unk: 0, line: 76 */ "<0x10012:0x00000001>Hervorragend, Gebieter.\n\n\n\nDu hast alle Prüfungen bestanden.")
/*<121>*/ 	set_camera(6, 0)
/*<119>*/ 	printf(/* textboxtype: 2, unk: 0, line: 77 */ "Es gibt noch ein weiteres <color red<Insigne der\nReife >coloroff>außer dem, das du besitzt.\n\n\nIch stelle fest,<0x10012:0x00000002> dass sich auf dieser Insel\nein Objekt befindet, das dem gleicht,\nwelches du bei dir trägst.\n\nFindest du es und fügst du beide\nzusammen, öffnet sich dir der\nWeg zum <color yellow white<Triforce>coloroff>.\n\n<0x1000A:0xffff00cd>Ich empfehle dir, nach diesem\nObjekt zu suchen.")
/*<120>*/ 	story_flags[769 /* us: 805A9B2A 0x02, jp: 805ACDAA 0x02 */] = true;
          }

          void entrypoint_107_41() {
/*<139>*/ 	start()
/*<147>*/ 	printf(/* textboxtype: 8, unk: 0, line: 42 */ "Der Wolkenhort liegt keine\nzehn Flügelschläge von hier\nentfernt im Nordwesten!")
          }

          void entrypoint_107_25() {
/*< 88>*/ 	start()
/*< 89>*/ 	switch (story_flags[714 /* us: 805A9B25 0x10, jp: 805ACDA5 0x10 */]) {
          	  case 0:
/*< 90>*/ 		printf(/* textboxtype: 22, unk: 0, line: 25 */ "Kukis Haus")
          	  case 1:
          	}
          }

          void entrypoint_107_08() {
/*<113>*/ 	start()
/*<114>*/ 	printf(/* textboxtype: 8, unk: 0, line: 8 */ "Springe an einem Steg ab,\num den Wolkenhort per\nWolkenvogel zu verlassen!")
          }

          void entrypoint_107_42() {
/*<140>*/ 	start()
/*<148>*/ 	printf(/* textboxtype: 8, unk: 0, line: 43 */ "Giruna / Ra...")
          }

          void entrypoint_107_26() {
/*< 91>*/ 	start()
/*< 92>*/ 	switch (story_flags[715 /* us: 805A9B25 0x20, jp: 805ACDA5 0x20 */]) {
          	  case 0:
/*< 93>*/ 		printf(/* textboxtype: 22, unk: 0, line: 26 */ "Hirus und Galeas Haus")
          	  case 1:
          	}
          }

          void entrypoint_107_09() {
/*<115>*/ 	start()
/*<116>*/ 	printf(/* textboxtype: 8, unk: 0, line: 7 */ "Jeder Schüler hat sich selbst\num Ordnung und Sauberkeit\nseines Zimmers zu kümmern!")
          }

          void entrypoint_107_60() {
/*<124>*/ 	start()
/*<126>*/ 	set_camera(10, 0)
/*<129>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 356, 'next': 127, 'param3': 15}
/*<127>*/ 	set_camera(11, 0)
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 128, 'param3': 51}
/*<128>*/ 	set_camera(12, 0)
/*<125>*/ 	printf(/* textboxtype: 2, unk: 0, line: 78 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu\nberichten. Diese Insel ist mir bekannt.\n\n\nMan nennt sie die <color blue<Stätte der Lieder>coloroff>.\n<0x10012:0x00000002>Die Göttin selbst hat diesen Ort\nfür dich geschaffen, Gebieter.\n\nMir ist jedoch nicht bekannt, wie das\nErreichen des Turms möglich ist. Ich\nempfehle dir, die Umgebung nach\neiner Möglichkeit zu untersuchen.")
/*<131>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 132, 'param3': 36}
/*<132>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_107_43() {
/*<170>*/ 	start()
/*<171>*/ 	printf(/* textboxtype: 7, unk: 0, line: 44 */ "Drehe das zentrale Podest.\nVervollständige die Brücke und\nbetritt die Stätte der Lieder.")
          }

          void entrypoint_107_27() {
/*< 94>*/ 	start()
/*< 95>*/ 	switch (story_flags[716 /* us: 805A9B25 0x40, jp: 805ACDA5 0x40 */]) {
          	  case 0:
/*< 96>*/ 		printf(/* textboxtype: 22, unk: 0, line: 27 */ "<0x10008:0xffcd>Händler\n<0x10008:0x00cd>Kulkans Haus")
          	  case 1:
          	}
          }

          void entrypoint_107_61() {
/*<154>*/ 	start()
/*<156>*/ 	printf(/* textboxtype: 2, unk: 0, line: 79 */ "<0x10012:0x0000000b>Gebieter, ich stelle fest, dass sich in\nnordöstlicher Richtung ein weiteres\nLoch in den Wolken aufgetan hat.\n\nEs führt dich an einen neuen Ort. Ich\nempfehle dir, diesen Ort aufzusuchen,\nsobald du dich auf die Reise vorbereitet\nhast.")
          }

          void entrypoint_107_44() {
/*<180>*/ 	start()
/*<181>*/ 	printf(/* textboxtype: 6, unk: 0, line: 45 */ "~ Geschlossen ~\nBitte besuchen Sie uns\nmorgen wieder!\n\nIn Notfällen, besuchen Sie\nuns bitte in meinem Haus.\nDie Basarverwaltung")
          }

          void entrypoint_107_10() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 22, unk: 0, line: 9 */ "Zimmer von <heroname>")
          }

          void entrypoint_107_28() {
/*< 97>*/ 	start()
/*< 98>*/ 	switch (story_flags[717 /* us: 805A9B25 0x80, jp: 805ACDA5 0x80 */]) {
          	  case 0:
/*< 99>*/ 		printf(/* textboxtype: 22, unk: 0, line: 28 */ "Cucos Haus")
          	  case 1:
          	}
          }

          void entrypoint_107_62() {
/*<155>*/ 	start()
/*<157>*/ 	printf(/* textboxtype: 2, unk: 0, line: 80 */ "<0x10012:0x0000000b>Gebieter, ich stelle fest, dass sich in\nsüdwestlicher Richtung ein weiteres\nLoch in den Wolken aufgetan hat.\n\nEs führt dich an einen neuen Ort. Ich\nempfehle dir, diesen Ort aufzusuchen,\nsobald du dich auf die Reise vorbereitet\nhast.")
          }

          void entrypoint_107_45() {
/*<182>*/ 	start()
/*<183>*/ 	printf(/* textboxtype: 9, unk: 0, line: 46 */ "Brave Kinder waschen sich\nstets die Hände!")
          }

          void entrypoint_107_11() {
/*< 21>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 22, unk: 0, line: 10 */ "Bados Reich")
          }

          void entrypoint_107_29() {
/*<100>*/ 	start()
/*<101>*/ 	switch (story_flags[718 /* us: 805A9B24 0x01, jp: 805ACDA4 0x01 */]) {
          	  case 0:
/*<102>*/ 		printf(/* textboxtype: 22, unk: 0, line: 29 */ "<0x10008:0xffcd>Wahrsager\n<0x10008:0x00cd>Amadins Haus")
          	  case 1:
          	}
          }

          void entrypoint_107_63() {
/*<165>*/ 	start()
/*<166>*/ 	printf(/* textboxtype: 2, unk: 0, line: 81 */ "<0x10012:0x0000000b>Gebieter <heroname>.\n\n\n\nUm Narisha helfen zu können, musst du\nden Tornadostoß meistern.\n\n\nMeister Otus wartet bereits im\nNordosten auf dich, <color red<in der Nähe\nder Statue eines Vogels>coloroff>.\n\nIch empfehle dir, zu ihm zu eilen.")
          }

          void entrypoint_107_46() {
/*<184>*/ 	start()
/*<185>*/ 	printf(/* textboxtype: 9, unk: 0, line: 47 */ "Gründliches Putzen ist\nwichtig!")
          }

          void entrypoint_107_12() {
/*< 22>*/ 	start()
/*< 29>*/ 	printf(/* textboxtype: 22, unk: 0, line: 11 */ "Rax' und Strus Zimmer")
          }

          void entrypoint_107_64() {
/*<172>*/ 	start()
/*<174>*/ 	switch (story_flags[649 /* us: 805A9B1C 0x04, jp: 805ACD9C 0x04 */]) {
          	  case 0:
/*<176>*/ 		printf(/* textboxtype: 2, unk: 0, line: 82 */ "<0x10012:0x0000000b>Gebieter <heroname>...\n\n\n\n<0x1000A:0x000d00cd>Diese Schatztruhe hat die Göttin einst\nfür den auserwählten Helden hier\nhinterlassen.")
/*<178>*/ 		set_camera(-1, 0)
/*<177>*/ 		printf(/* textboxtype: 2, unk: 0, line: 84 */ "Ich vermute, dass die Energie der\n<color red<Artefakte der Göttin>coloroff> die Schatztruhen\nöffnen kann.\n\nSende die Artefakte der Göttin aus\ndem Erdland zum Himmel und ihre\nEnergie wird die Truhen öffnen.\nSo kannst du an ihren Inhalt gelangen.")
          	  case 1:
/*<173>*/ 		printf(/* textboxtype: 2, unk: 0, line: 82 */ "<0x10012:0x0000000b>Gebieter <heroname>...\n\n\n\n<0x1000A:0x000d00cd>Diese Schatztruhe hat die Göttin einst\nfür den auserwählten Helden hier\nhinterlassen.")
/*<179>*/ 		set_camera(-1, 0)
/*<175>*/ 		printf(/* textboxtype: 2, unk: 0, line: 83 */ "Leider habe ich keine Daten darüber,\nwie man sie öffnen kann.")
          	}
          }

          void entrypoint_107_47() {
/*<186>*/ 	start()
/*<187>*/ 	printf(/* textboxtype: 6, unk: 0, line: 48 */ "Ich bin geschäftlich unterwegs\nund komme abends zurück.\n<0x10006:0x05cd>Terri")
          }

          void entrypoint_107_13() {
/*< 23>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 22, unk: 0, line: 12 */ "Grus' Zimmer")
          }

          void entrypoint_107_30() {
/*< 47>*/ 	start()
/*< 48>*/ 	printf(/* textboxtype: 7, unk: 0, line: 30 */ "Mit Licht soll dem Helden,\nder im hellen Schein die\nHymne der Göttin spielt,\nder Weg gewiesen werden.")
          }

          void entrypoint_107_14() {
/*< 24>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 22, unk: 0, line: 13 */ "Direktor Geporas Zimmer")
          }

          void entrypoint_107_31() {
/*<103>*/ 	start()
/*<104>*/ 	switch (story_flags[719 /* us: 805A9B24 0x02, jp: 805ACDA4 0x02 */]) {
          	  case 0:
/*<105>*/ 		printf(/* textboxtype: 22, unk: 0, line: 31 */ "<0x10008:0xffcd>Tüftler\n<0x10008:0x00cd>Dorucos Haus")
          	  case 1:
          	}
          }

          void entrypoint_107_15() {
/*< 25>*/ 	start()
/*< 32>*/ 	printf(/* textboxtype: 22, unk: 0, line: 14 */ "Meister Otus' Zimmer")
          }

          void entrypoint_107_32() {
/*<106>*/ 	start()
/*<107>*/ 	switch (story_flags[720 /* us: 805A9B24 0x04, jp: 805ACDA4 0x04 */]) {
          	  case 0:
/*<108>*/ 		printf(/* textboxtype: 22, unk: 0, line: 32 */ "<0x10008:0xffcd>Trankbrauer\n<0x10008:0x00cd>Diomeds Haus")
          	  case 1:
          	}
          }

          void entrypoint_107_50() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf(/* textboxtype: 2, unk: 0, line: 50 */ "<0x10012:0x00000004>Gebieter, siehst du den <color red<grünen\nLichtstrahl >coloroff>vor dir? Dies ist eine\nso genannte <color blue<Lichtsäule>coloroff>, über die du\nzum Erdland gelangen kannst. ")
/*< 70>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 72, 'param3': 30}
/*< 72>*/ 	printf(/* textboxtype: 2, unk: 2, line: 51 */ "Du kannst ihren Standort auch auf\ndeiner Karte einsehen. Überprüfe,\nwie du vom Wolkenhort dorthin\ngelangen kannst.")
/*< 71>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 73, 'param3': 34}
/*< 73>*/ 	printf(/* textboxtype: 2, unk: 0, line: 52 */ "Am Fuß der Säule befindet sich ein\nLoch in den Wolken. Es verbindet das\nWolkenmeer mit dem Erdland.")
/*< 14>*/ 	story_flags[198 /* us: 805A9AEF 0x01, jp: 805ACD6F 0x01 */] = true;
          }

          void entrypoint_107_16() {
/*< 26>*/ 	start()
/*< 33>*/ 	printf(/* textboxtype: 22, unk: 0, line: 15 */ "Meister Tytors Zimmer")
          }

          void entrypoint_107_33() {
/*<109>*/ 	start()
/*<110>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<111>*/ 		printf(/* textboxtype: 22, unk: 0, line: 33 */ "Morsegos Hütte")
          	  case 1:
          	}
          }

          void entrypoint_107_51() {
/*< 15>*/ 	start()
/*< 17>*/ 	printf(/* textboxtype: 2, unk: 0, line: 53 */ "<0x10012:0x00000001>Gebieter, die Steintafel, die du gestern\nNacht eingesetzt hast, steht in direkter\nVerbindung zur Passage ins Erdland.\n\nDie Lichtsäule ist von hier aus gesehen\nin südlicher Richtung erschienen. An\nihrem Fuß befindet sich ein Loch in\nden Wolken, das nach unten führt.")
/*< 66>*/ 	printf(/* textboxtype: 2, unk: 0, line: 54 */ "Ich muss dich darauf hinweisen, dass\ndeine Überlebenschancen im Erdland\ngering sind, solltest du bloß mit einem\nSchwert bewaffnet sein.\nIch empfehle dir, im örtlichen Basar\neinen <color red<Schild >coloroff>oder einen <color red<Herztrank >coloroff>zu\nerwerben.")
/*<164>*/ 	printf(/* textboxtype: 2, unk: 0, line: 55 */ "Ich habe noch eine weitere\nInformation für dich, <0x10012:0x00000001>Gebieter.\n\n\nSolltest du das Gefühl haben,\ndie Steuerung gut zu beherrschen,\nkannst du die <color red<Hilfsanzeige>coloroff> der\nSteuerung verändern, <0x10012:0x00000001>Gebieter.\nÖffne dein <color blue<Inventar >coloroff>und wähle\n<color red<Hilfsanzeige>coloroff>, um die Einstellung\nzu wählen, die für dich am\nangenehmsten ist.")
/*< 53>*/ 	story_flags[198 /* us: 805A9AEF 0x01, jp: 805ACD6F 0x01 */] = true;
/*< 67>*/ 	story_flags[679 /* us: 805A9B22 0x02, jp: 805ACDA2 0x02 */] = true;
/*<167>*/ 	story_flags[358 /* us: 805A9B00 0x10, jp: 805ACD80 0x10 */] = true;
/*<168>*/ 	story_flags[570 /* us: 805A9B18 0x02, jp: 805ACD98 0x02 */] = true;
/*<169>*/ 	story_flags[571 /* us: 805A9B18 0x04, jp: 805ACD98 0x04 */] = true;
          }

          void entrypoint_107_17() {
/*< 27>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 22, unk: 0, line: 16 */ "Girunas Zimmer")
          }

          void entrypoint_107_34() {
/*<122>*/ 	start()
/*<123>*/ 	printf(/* textboxtype: 8, unk: 0, line: 34 */ "Norden: Statue der Göttin\nOsten: Wohnviertel\nSüden: Dorfplatz\nWesten: Ritterschule")
          }

          void entrypoint_107_52() {
/*< 18>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 2, unk: 0, line: 56 */ "<0x10012:0x00000001>Gebieter, von hier aus kannst\ndu die Lichtsäule erblicken.")
/*< 75>*/ 	set_camera(2, 0)
/*< 74>*/ 	printf(/* textboxtype: 2, unk: 0, line: 57 */ "Springe nun in diese Richtung ab\nund rufe deinen Wolkenvogel.")
/*< 77>*/ 	set_camera(-1, 0)
/*< 76>*/ 	printf(/* textboxtype: 2, unk: 0, line: 58 */ "Bitte mache dich nun auf die Suche\nnach Zelda. Drücke (v), um deinen\nWolkenvogel zu rufen, nachdem du\nabgesprungen bist.<0x10011:0x09cd>")
          }

          void entrypoint_107_18() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 22, unk: 0, line: 17 */ "Zeldas Zimmer")
          }

          void entrypoint_107_35() {
/*<133>*/ 	start()
/*<141>*/ 	printf(/* textboxtype: 8, unk: 0, line: 35 */ "Kürbissuppe lässt die Kräfte\nquellen und erfüllt dich mit\nLebensfreude! Ein Teller nur\n10 Rubine!")
          }

          void entrypoint_107_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 6, unk: 0, line: 0 */ "Hier beginnt die Höhle hinter\ndem Wasserfall. Vorsicht vor\nblutsaugendem Getier! Zutritt\nfür Kinder streng verboten!")
          }

          void entrypoint_107_19() {
/*< 37>*/ 	start()
/*< 49>*/ 	switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          	  case 0:
/*< 50>*/ 		printf(/* textboxtype: 8, unk: 0, line: 19 */ "Der Sieg von <heroname>\nwurde von einem tragischen\nEreignis überschattet...")
          	  case 1:
/*< 38>*/ 		printf(/* textboxtype: 8, unk: 0, line: 18 */ "~ Vogelreiter-Zeremonie ~\nEs treten an: Bado, Rax, Stru\nund <heroname>.")
          	}
          }

          void entrypoint_107_53() {
/*< 43>*/ 	start()
/*<188>*/ 	switch (scene_flags[25 /* 0x2 02 */]) {
          	  case 0:
/*<189>*/ 		printf(/* textboxtype: 2, unk: 0, line: 61 */ "<0x10012:0x00000004>Gebieter, setze die <color red<Steintafel>coloroff>, die ich\ndir gab, in das Podest ein.")
          	  case 1:
/*< 68>*/ 		switch (story_flags[38 /* us: 805A9AE5 0x10, jp: 805ACD65 0x10 */]) {
          		  case 0:
/*< 44>*/ 			printf(/* textboxtype: 2, unk: 0, line: 59 */ "<0x10012:0x00000004>Gebieter, triff das Symbol mit dem\n<color red<Himmelsstrahl >coloroff>und setze die Steintafel\nein, die ich dir vorhin gab.\n\n<color green<Hebe dein Schwert gen Himmel,>coloroff> um es\nmit heiliger Energie aufzuladen und\nfeuere dann den <color red<Himmelsstrahl >coloroff>ab. ")
          		  case 1:
/*< 69>*/ 			printf(/* textboxtype: 2, unk: 0, line: 60 */ "Mein Name ist <color blue<Phai>coloroff>...\nStelle dich vor das Podest und\nziehe das Schwert heraus.")
          		}
          	}
          }

          void entrypoint_107_36() {
/*<134>*/ 	start()
/*<149>*/ 	switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          	  case 0:
/*<150>*/ 		printf(/* textboxtype: 8, unk: 0, line: 37 */ "~ Kabochas Bühne ~\nUnregelmäßiger Betrieb\n(nur nachts)")
          	  case 1:
/*<142>*/ 		printf(/* textboxtype: 8, unk: 0, line: 36 */ "~ Kabochas Bühne ~\nAus Mangel an Musikern\nvorübergehend geschlossen.\nMusiker werden gesucht.")
          	}
          }

          void entrypoint_107_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 6, unk: 0, line: 1 */ "<icon 22> Ritterschule\nWohnviertel <icon 23>")
          }

          void entrypoint_107_54() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf(/* textboxtype: 2, unk: 0, line: 62 */ "Wenn du die in der Welt verstreuten\n<color red<Artefakte der Göttin >coloroff>mit deinem\n<color red<Himmelsstrahl >coloroff>triffst, wird Energie\nfreigesetzt, <0x10012:0x00000004>Gebieter.\nDiese Energie führt zu einer\nVeränderung im Wolkenmeer.")
/*< 58>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 7, 'next': 151, 'param3': 30}
/*<151>*/ 	wait_frames(60)
/*< 56>*/ 	printf(/* textboxtype: 2, unk: 0, line: 64 */ "Die auf der Karte markierten Orte\nzeigen dir jene Stellen, an denen\neine Veränderung eingetreten ist.")
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 57, 'param3': 34}
/*< 57>*/ 	printf(/* textboxtype: 2, unk: 0, line: 65 */ "Ich empfehle dir, diese Orte\ngenauer zu untersuchen.")
/*< 62>*/ 	scene_flags[21 'The Sky'][13 /* 0x0 20 */] = true;
          }

          void entrypoint_107_37() {
/*<135>*/ 	start()
/*<143>*/ 	printf(/* textboxtype: 8, unk: 0, line: 38 */ "Der großartige Kronleuchter\nbefindet sich im Obergeschoß.")
          }

          void entrypoint_107_03() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 6, unk: 0, line: 2 */ "<icon 20> Zum Basar")
          }

          void entrypoint_107_20() {
/*< 39>*/ 	start()
/*< 40>*/ 	printf(/* textboxtype: 22, unk: 0, line: 20 */ "Toilette")
          }

          void entrypoint_107_55() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf(/* textboxtype: 2, unk: 0, line: 70 */ "Es würde tausende Jahre dauern,\nbis an dieser Stelle etwas wächst.\nIch halte dies nicht für den richtigen\nOrt, um diese Saat zu pflanzen.")
          }

          void entrypoint_107_38() {
/*<136>*/ 	start()
/*<144>*/ 	printf(/* textboxtype: 8, unk: 0, line: 39 */ "Achtung: Kronleuchter\nAn dieser Stelle bitte\nruhig verhalten!")
          }

