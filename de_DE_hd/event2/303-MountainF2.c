          void entrypoint_303_27() {
/*< 91>*/ 	start()
/*< 92>*/ 	printf(/* textboxtype: 0, unk: 73, line: 26 */ "Verehrte Phai!\nHabt Ihr das gesehen?")
          }

          void entrypoint_303_44() {
/*<203>*/ 	start()
/*<204>*/ 	printf(/* textboxtype: 73, unk: 1, line: 1 */ "Oh, du gehst aber ran! Aber das lässt\nmich ganz kalt. Ich bin schließlich das\nneueste Modell!")
          }

          void entrypoint_303_10() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf(/* textboxtype: 73, unk: 1, line: 4 */ "<sound 114>Wo willst du denn hin?\nDa gehe ich nicht rein! Ich warte hier\ndraußen auf dich...")
          }

          void entrypoint_303_28() {
/*< 93>*/ 	start()
/*< 94>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "Bitte ruft mich wieder, wenn ich\nEuch behilflich sein kann!")
          }

          void entrypoint_303_45() {
/*<205>*/ 	start()
/*<206>*/ 	printf(/* textboxtype: 0, unk: 73, line: 2 */ "Sag mal, was soll ich denn hier?\nIch habe nicht ewig Zeit!")
          }

          void entrypoint_303_11() {
/*< 56>*/ 	start()
/*< 57>*/ 	printf(/* textboxtype: 0, unk: 73, line: 5 */ "<sound 114>Ah, heiliges Kugellager!\nHilf mir!")
          }

          void entrypoint_303_29() {
/*< 95>*/ 	start()
/*< 96>*/ 	printf(/* textboxtype: 0, unk: 0, line: 104 */ "Ich stelle fest, dass die Flammen, die\nden Weg versperrten, erloschen sind.\nIch empfehle, weiterzugehen.")
/*<200>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<291>*/ 	story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = false;
          }

          void entrypoint_303_46() {
/*<207>*/ 	start()
/*<208>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "Wie, jetzt schon?\nAuf geht's, bzzz!")
          }

          void entrypoint_303_12() {
/*< 58>*/ 	start()
/*< 59>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "<sound 114>Aaah, ich werde getroffen!\nTu doch was, bzzz!")
          }

          void entrypoint_303_47() {
/*<219>*/ 	start()
/*<220>*/ 	printf(/* textboxtype: 0, unk: 1, line: 121 */ "Willkommen zurück, <0x10012:0x00000004>Gebieter.\n\n\n\nIch schätze, dass dir die <color yellow<Feuerohrringe >coloroff>erlauben,\nin den heißen Bereich einzudringen.\n\n\nIch empfehle, dort nach der <color red<heiligen Flamme\n>coloroff>zu suchen.")
          }

          void entrypoint_303_13() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf(/* textboxtype: 73, unk: 1, line: 7 */ "<0x10005:0x003c0000><0x10008:0x02cd>Uargh!")
          }

          void entrypoint_303_30() {
/*< 97>*/ 	start()
/*< 98>*/ 	printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10005:0x004b0000><0x10012:0x0000000b>Gebieter, ich habe dir etwas zu berichten.\n\n\n\nWir befinden uns nahe des Kraters am\nGipfel des <color blue<Vulkans Eldin>coloroff>.")
          }

          void entrypoint_303_48() {
/*<221>*/ 	start()
/*<223>*/ 	switch (scene_flags[108 /* 0xC 10 */]) {
          	  case 0:
/*<252>*/ 		switch (scene_flags[112 /* 0xF 01 */]) {
          		  case 0:
/*<254>*/ 			switch (scene_flags[113 /* 0xF 02 */]) {
          			  case 0:
/*<270>*/ 				switch (scene_flags[114 /* 0xF 04 */]) {
          				  case 0:
/*<271>*/ 					printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x00110801>Hey, mein Freund!\nHast du den starken <color red<Kerl mit dem\ngroßen Schild >coloroff>schon besiegt?\n\n<0x10009:0x00ffff00>Den hölzernen Schild zerschneiden!\nDen Speerangriff zurückschlagen!\nDen Schild wie eine Wand behandeln!\n\nWenn du dich an diese drei Ratschläge hältst,\nsollte alles glattgehen!")
/*<272>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				  case 1:
/*<263>*/ 					printf(/* textboxtype: 0, unk: 1, line: 97 */ "Macht dir der starke Kerl mit dem <color red<riesigen\nSchild>coloroff> denn noch immer zu schaffen?\nIst ja unglaublich!\n\n<0x10009:0x0015080b>Wenn du willst, kann ich dir <color red<eine letzte\nGeheiminformation>coloroff> zu ihm verraten.\nMit der wirst du ihn problemlos\nbesiegen können!")
/*<264>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 256, 'param3': 12}
/*<256>*/ 					printf(/* textboxtype: 0, unk: 0, line: 98 */ "<0x10009:0x00ffff09>Selbst-<pause 10>ver-<pause 10>ständ-<pause 10>lich<pause 10> ist diese\nInformation nicht umsonst.\n<color red<50 Rubine>coloroff>. Was meinst du? [1-]Ja[2]Nein")
          					flw_245:
/*<245>*/ 					switch (choice(2)) {
          					  case 0:
/*<247>*/ 						check_item_flag(501, 50)
/*<248>*/ 						switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 84}) {
          						  case 0:
/*<269>*/ 							rupees += -50;
/*<250>*/ 							printf(/* textboxtype: 0, unk: 1, line: 91 */ "<0x10009:0x0011080b>Du bist wirklich ein klasse Kerl!\nSo großherzig und unbesorgt, dass es\nschon fast wieder bedenklich ist, hehe!\n\n<0x10009:0x00141200>Pass nur auf, dass du dich von keinem\nBetrüger hereinlegen lässt...")
/*<251>*/ 							scene_flags[4 'Eldin Volcano'][114 /* 0xF 04 */] = true;
/*<265>*/ 							printf(/* textboxtype: 2, unk: 0, line: 92 */ "<0x10009:0x00ffff00>Also, hier ist mein Tipp. Der Schild dieses Kerls\nist fast so hoch wie eine Mauer, oder?\n\n\n<0x10009:0x00110800>Und wenn du auf eine Mauer mit voller Kraft\nzurennst, dann...\n\n\n<0x10009:0x00ffff09>Hehe, probier es mal aus! Du wirst schon sehen,\nwas dann passiert...\n\n\n<0x10009:0x00110800>Na, dann wünsche ich dir mal viel Glück!\nUnd nochmals danke für die schönen Rubine!")
/*<266>*/ 							scene_flags[4 'Eldin Volcano'][114 /* 0xF 04 */] = true;
/*<275>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						  case 1:
/*<249>*/ 							printf(/* textboxtype: 1, unk: 0, line: 101 */ "<0x10009:0x00141215>Deine Rubine reichen nicht?\nPech gehabt, sage ich da!\n\n\n<0x10009:0x00ffff00>Komm einfach wieder, wenn du die\n<color red<50 Rubine>coloroff> beisammenhast!")
/*<274>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					  case 1:
/*<246>*/ 						printf(/* textboxtype: 0, unk: 1, line: 100 */ "<0x10009:0x00141215>Was stellst du dich denn so an?\nSind doch nur <color red<50 olle Rubine>coloroff>...\n\n\n<0x10009:0x00ffff00>Aber wie du willst: Komm einfach wieder,\nwenn du deine Meinung geändert hast!")
/*<273>*/ 						zone_temp_flags[7 /* 0x1 80 */] = true;
          					}
          				}
          			  case 1:
/*<261>*/ 				printf(/* textboxtype: 0, unk: 0, line: 95 */ "Macht dir der starke Kerl mit dem <color red<riesigen\nSchild>coloroff> etwa noch immer zu schaffen?\n\n\n<0x10009:0x0015080b>Wenn du willst, kann ich dir <color red<noch eine\nGeheiminformation>coloroff> zu ihm verraten.\nWenn du die kennst, ist er kein Problem\nmehr für dich!")
/*<262>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 255, 'param3': 12}
/*<255>*/ 				printf(/* textboxtype: 1, unk: 0, line: 96 */ "<0x10009:0x00ffff09>Selbst-<pause 10>ver-<pause 10>ständ-<pause 10>lich<pause 10> ist diese Information\nnicht umsonst zu bekommen.\n<color red<30 Rubine>coloroff>. Was meinst du? [1-]Ja[2]Nein")
          				flw_234:
/*<234>*/ 				switch (choice(2)) {
          				  case 0:
/*<236>*/ 					check_item_flag(501, 30)
/*<237>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 78}) {
          					  case 0:
/*<268>*/ 						rupees += -30;
/*<239>*/ 						printf(/* textboxtype: 0, unk: 1, line: 88 */ "<0x10009:0x00110808>Du bist ganz nach meinem Geschmack, Freund!\nAlso, hör gut hin...\n\n\n<0x10009:0x00ffff00>Mit seinem Speer kann dir der Kerl ganz schön\ngefährlich werden... Aber du kannst seinen\nAngriff auch <color red<zurückschlagen>coloroff>!<pause 15>\n\n<0x10009:0x00110800>Den Rest weißt du, oder?<pause 15>\n[1-]Das wusste\nich nicht![2-]Das wusste ich!")
/*<241>*/ 						scene_flags[4 'Eldin Volcano'][113 /* 0xF 02 */] = true;
/*<242>*/ 						switch (choice(2)) {
          						  case 0:
/*<244>*/ 							printf(/* textboxtype: 0, unk: 0, line: 89 */ "<0x10009:0x0011080b>Natürlich nicht! Ich habe mich auch\nsehr angestrengt, um diese wichtige\nInformation zu erhalten!\n\n<0x10009:0x00ffff00>Aber ich weiß noch mehr!<pause 20>\n<color red<50 Rubine>coloroff>, abgemacht?\n[1-]Gut![2]Vergiss es!")
          							goto flw_245
          						  case 1:
/*<243>*/ 							printf(/* textboxtype: 1, unk: 2, line: 90 */ "<0x10009:0x00120e04>Was?!? Du bist ganz schön ausgekocht,\ndas muss ich dir sagen!\n\n\n<0x10009:0x00ffff00>Aber meine nächste Info kennst du ganz\nsicher noch nicht. Nur <color red<50 Rubine>coloroff>!\n[1-]Lass hören![2]Vergiss es!")
          							goto flw_245
          						}
          					  case 1:
/*<238>*/ 						printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00141215>Deine Rubine reichen nicht aus?\nPech gehabt, mein Freund!\n\n\n<0x10009:0x00ffff00>Komm einfach wieder vorbei, wenn du\ndie <color red<30 Rubine>coloroff> beisammenhast!")
/*<276>*/ 						zone_temp_flags[7 /* 0x1 80 */] = true;
          					}
          				  case 1:
/*<235>*/ 					printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00141215>Was, du willst meinen Rat nicht annehmen?\nMachst hier wegen <color red<30 Rubinen >coloroff>rum? Pah!\n\n\n<0x10009:0x00ffff00>Nun gut, dann komm eben wieder,\nwenn du es dir anders überlegt hast.")
/*<277>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				}
          			}
          		  case 1:
/*<259>*/ 			printf(/* textboxtype: 1, unk: 0, line: 93 */ "Macht dir der starke Kerl mit dem\n<color red<riesigen Schild >coloroff>noch immer zu schaffen?\n\n\n<0x10009:0x0015080b>Wenn du willst, kann ich dir eine\n<color red<Geheiminformation>coloroff> zu ihm verraten.\nWenn du die kennst, ist er kein Problem mehr!")
/*<260>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 253, 'param3': 12}
/*<253>*/ 			printf(/* textboxtype: 0, unk: 1, line: 94 */ "<0x10009:0x00ffff09>Selbst-<pause 10>ver-<pause 10>ständ-<pause 10>lich<pause 10> ist diese Information\nnicht kostenlos.\n<color red<30 Rubine>coloroff>. Was meinst du? [1-]Ja[2]Nein")
          			flw_225:
/*<225>*/ 			switch (choice(2)) {
          			  case 0:
/*<227>*/ 				check_item_flag(501, 30)
/*<228>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 72}) {
          				  case 0:
/*<267>*/ 					rupees += -30;
/*<230>*/ 					printf(/* textboxtype: 0, unk: 1, line: 85 */ "<0x10009:0x00110809>Das Haus dankt, hehe! Aber denk dran,\ndas ist ein Geheimnis! Erzähl es bloß\nnicht weiter, ja?\n\n<0x10009:0x00ffff00>Also...<pause 20> Du kannst den Schild des Kerls\nmit deinem Schwert durchschneiden!\nAbgefahren, oder?\n\nAber pass auf, denn weiter drinnen gibt\nes auch Gegner mit Eisenschilden...\n[1-]Klingt gut![2-]Das ist alles?")
/*<240>*/ 					scene_flags[4 'Eldin Volcano'][112 /* 0xF 01 */] = true;
/*<231>*/ 					switch (choice(2)) {
          					  case 0:
/*<233>*/ 						printf(/* textboxtype: 0, unk: 0, line: 86 */ "<0x10009:0x0015090b>Aber ich weiß noch viel mehr, hehe!\n<0x10009:0x00ffff00>Willst du es hören?<pause 20> Für <color red<30 Rubine>coloroff>?\n[1-]Ja[2]Nein")
          						goto flw_234
          					  case 1:
/*<232>*/ 						printf(/* textboxtype: 1, unk: 0, line: 87 */ "Wie, das genügt dir nicht? Du trägst deine\nNase ganz schön hoch!\n\n\n<0x10009:0x00150809>Aber sei's drum, ich weiß noch mehr als das!\nHast du noch einmal <color red<30 Rubine>coloroff>?\n[1-]Ja[2]Nein")
          						goto flw_234
          					}
          				  case 1:
/*<229>*/ 					printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00141215>Deine Rubine reichen nicht aus?\nPech gehabt, mein Freund!\n\n\n<0x10009:0x00ffff00>Komm einfach wieder vorbei, wenn du\ndie <color red<30 Rubine>coloroff> beisammenhast!")
/*<278>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				}
          			  case 1:
/*<226>*/ 				printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00141215>Was, du willst meinen Rat nicht annehmen?\nMachst hier wegen <color red<30 Rubinen >coloroff>rum? Pah!\n\n\n<0x10009:0x00ffff00>Nun gut, dann komm eben wieder,\nwenn du es dir anders überlegt hast.")
/*<279>*/ 				zone_temp_flags[7 /* 0x1 80 */] = true;
          			}
          		}
          	  case 1:
/*<222>*/ 		printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000001>Hey, Freund!\nBist wohl müde von all dem vielen\nMonsterschlagen, was?\n\n<0x10009:0x00110900>Da vorne wartet ein besonders\nstarker Kerl mit einem <color red<riesigen Schild>coloroff>!\n\n\n<0x10009:0x0015080b>Wenn du willst, kann ich dir eine\n<color red<Geheiminformation>coloroff> zu ihm verraten.\nWenn du die kennst, ist er kein Problem mehr!")
/*<258>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 257, 'param3': 12}
/*<257>*/ 		printf(/* textboxtype: 0, unk: 1, line: 82 */ "<0x10009:0x00ffff09>Selbst-<pause 10>ver-<pause 10>ständ-<pause 10>lich<pause 10> gibt es diese\nInformation nicht gratis.\n<color red<30 Rubine>coloroff>. Was meinst du? [1-]Ja[2]Nein")
/*<224>*/ 		scene_flags[4 'Eldin Volcano'][108 /* 0xC 10 */] = true;
          		goto flw_225
          	}
          }

          void entrypoint_303_14() {
/*< 62>*/ 	start()
/*< 63>*/ 	printf(/* textboxtype: 0, unk: 73, line: 8 */ "<0x10005:0x005a0000>Aaah... Bin... kaputt!\nIch... funktioniere... nicht mehr...")
          }

          void entrypoint_303_31() {
/*< 99>*/ 	start()
/*<100>*/ 	printf(/* textboxtype: 0, unk: 1, line: 106 */ "<0x10005:0x005a0000>In dieser Gegend herrscht eine <color red<extreme Hitze>coloroff>.\nMit den <color yellow<Feuerohrringen >coloroff>kannst du dich länger\nhier aufhalten.")
          }

          void entrypoint_303_49() {
/*<280>*/ 	start()
/*<281>*/ 	printf(/* textboxtype: 0, unk: 0, line: 122 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu berichten.\nAn diesem Ort kann ich kein <color red<Wasser >coloroff>erspüren.\n\n\nUm diesen Mechanismus zu bedienen,\nwirst du viel <color red<Wasser>coloroff> benötigen.\nIch empfehle dir, danach<sound 4> zu suchen.")
/*<282>*/ 	scene_flags[5 'Eldin Volcano Summit'][115 /* 0xF 08 */] = true;
          }

          void entrypoint_303_15() {
/*< 64>*/ 	start()
/*< 65>*/ 	printf(/* textboxtype: 73, unk: 1, line: 10 */ "<0x10012:0x00000064>Hey! Was soll denn das?!?\nIch kann dir dahin nicht folgen!\nLass uns laufen, ja?")
          }

          void entrypoint_303_32() {
/*<101>*/ 	start()
/*<102>*/ 	printf(/* textboxtype: 0, unk: 0, line: 107 */ "<0x10005:0x005a0000>Es besteht eine Wahrscheinlichkeit von 90 %, dass sich\ndie letzte <color red<heilige Flamme >coloroff>hier befindet. Ich empfehle,\nsie zu suchen.")
          }

          void entrypoint_303_16() {
/*< 66>*/ 	start()
/*< 67>*/ 	printf(/* textboxtype: 0, unk: 73, line: 11 */ "<sound 114>Hey, du kannst mich hier doch nicht\nalleine lassen!")
          }

          void entrypoint_303_33() {
/*<103>*/ 	start()
/*<104>*/ 	printf(/* textboxtype: 1, unk: 0, line: 108 */ "Der Roboter ist beschädigt.\nIch empfehle, ihn reparieren zu lassen\nund dann hierhin zurückzukehren.")
          }

          void entrypoint_303_50() {
/*<293>*/ 	start()
/*<294>*/ 	printf(/* textboxtype: 1, unk: 0, line: 123 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu berichten.\nDer Roboter wartet am Fuß des Vulkans auf dich.\n\n\nIch empfehle, auf dem Luftweg zu ihm\nzurückzukehren und ihn hierher zu begleiten.")
/*<295>*/ 	temp_flags[29 /* 0x2 20 */] = true;
          }

          void entrypoint_303_17() {
/*< 68>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 1, unk: 0, line: 12 */ "<sound 114>Jetzt hast du mich verloren!\nSchau auf der <color red<Karte>coloroff> hier (-) nach\nmeiner Position und komm zu mir!")
          }

          void entrypoint_303_34() {
/*<105>*/ 	start()
/*<106>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "Und dieses Mal passt du gefälligst\nbesser auf, ja?")
/*<199>*/ 	story_flags[723 /* us: 805A9B24 0x08, jp: 805ACDA4 0x08 */] = false;
          }

          void entrypoint_303_00() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "Auf geht's, grüner Wicht!\nIch folge dir unauffällig.")
          }

          void entrypoint_303_18() {
/*< 70>*/ 	start()
/*<196>*/ 	switch (random(3)) {
          	  case 0:
/*< 71>*/ 		printf(/* textboxtype: 73, unk: 1, line: 13 */ "<sound 114>Aaah! Was sind denn das für fiese Gestalten?\nMach etwas, schnell!")
          	  case 1:
/*<197>*/ 		printf(/* textboxtype: 0, unk: 73, line: 14 */ "<sound 114>Hey, die kommen immer näher!\nMach doch was, schnell!")
          	  case 2:
/*<198>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "<sound 114>Siehst du diese Monster da?\nDie wollen mir an die Schrauben!\nTu doch was, schnell!")
          	}
          }

          void entrypoint_303_35() {
/*<107>*/ 	start()
/*<108>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "Bitte ruft mich wieder, wenn ich\nEuch behilflich sein kann!")
          }

          void entrypoint_303_01() {
/*<  2>*/ 	start()
/*<  6>*/ 	switch (story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */]) {
          	  case 0:
/*<  8>*/ 		printf(/* textboxtype: 0, unk: 73, line: 35 */ "Auf diesem Berg scheint es noch <color yellow<Artefakte der\nGöttin>coloroff> zu geben... Willst du sie nicht suchen?")
          	  case 1:
/*<  3>*/ 		printf(/* textboxtype: 4, unk: 1, line: 34 */ "<0x10009:0x00151b09>So sieht man sich wieder!\nAlles in Ordnung bei dir?\n\n\nIch habe gehört, dass sich hier einige\n<color yellow<Artefakte der Göttin>coloroff> befinden sollen...\n\n\nVielleicht hast du ja schon welche\ngefunden, aber es scheint noch mehr\ndavon zu geben...\n\n<0x10009:0x001817ff>Willst du sie nicht suchen?")
/*<  9>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_303_19() {
/*< 72>*/ 	start()
/*< 74>*/ 	switch (random(3)) {
          	  case 0:
/*< 73>*/ 		printf(/* textboxtype: 73, unk: 1, line: 16 */ "<sound 114>Hey, wo bleibst du denn?\nWenn du nicht weißt, wo ich bin,\nschau doch auf der <color red<Karte>coloroff> hier (-) nach!")
          	  case 1:
/*< 75>*/ 		printf(/* textboxtype: 0, unk: 73, line: 17 */ "<sound 114>Jetzt komm endlich her!\nWenn du nicht weißt, wo ich bin,\nschau doch auf der <color red<Karte>coloroff> hier (-) nach!")
          	  case 2:
/*< 76>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<sound 114>Komm schon, beeil dich!\nWenn du nicht weißt, wo ich bin,\nschau doch auf der <color red<Karte>coloroff> hier (-) nach!")
          	}
          }

          void entrypoint_303_36() {
/*<109>*/ 	start()
/*<213>*/ 	switch (story_flags[744 /* us: 805A9B29 0x01, jp: 805ACDA9 0x01 */]) {
          	  case 0:
/*<215>*/ 		set_camera(2, 0)
/*<216>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 49, 'next': 217, 'param3': 32}
/*<217>*/ 		make_actor_do_something(0, 49)
/*<214>*/ 		printf(/* textboxtype: 2, unk: 0, line: 33 */ "")
/*<218>*/ 		story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = true;
          	  case 1:
/*<116>*/ 		set_camera(2, 0)
/*<209>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 49, 'next': 210, 'param3': 32}
/*<210>*/ 		make_actor_do_something(0, 49)
/*<110>*/ 		printf(/* textboxtype: 73, unk: 1, line: 28 */ "<0x10012:0x00000064>Wie?\nHier ist es gut, ja? Ich hatte schon fast\nkeine Kraft mehr...\n\n<pause 10>Was?!? Auf den Gipfel?!?<pause 15>\nSag das doch gleich! Jetzt muss ich mit dem\nschweren Ding noch einmal losfliegen!<pause 15>")
/*<114>*/ 		set_camera(1, 0)
/*<111>*/ 		printf(/* textboxtype: 0, unk: 73, line: 29 */ "<0x10012:0x00000064>Hier ist alles voller Monster...")
/*<115>*/ 		set_camera(3, 0)
/*<112>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10012:0x00000064>Nicht, dass ich etwa vor Monstern Angst hätte...\nAber im Augenblick trage ich ja noch diesen\nschweren Behälter...")
/*<113>*/ 		printf(/* textboxtype: 73, unk: 1, line: 31 */ "<0x10012:0x00000064>Auf geht's, grüner Wicht!\nJetzt zeige ich dir mal, was ein\nechter Transportroboter ist!\n\nPass auf mich auf, ja?\nIch folge dir unauffällig...")
/*<187>*/ 		printf(/* textboxtype: 0, unk: 73, line: 32 */ "<0x10012:0x00000064>Und pass bloß auf, dass mir keines\ndieser Ungeheuer zu nah kommt!")
/*<211>*/ 		story_flags[744 /* us: 805A9B29 0x01, jp: 805ACDA9 0x01 */] = true;
/*<212>*/ 		story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = true;
          	}
          }

          void entrypoint_303_02() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 0, unk: 1, line: 103 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu berichten.\n\n\n\nDie Kraft des Schwertes ist gewachsen.\nNun kannst du die <color yellow<Artefakte der Göttin\n>coloroff>mit der <color red<Aurasuche>coloroff> aufspüren.\n\n<color yellow<Artefakte der Göttin>coloroff> wurden als Ziel\nfür die <color red<Aurasuche>coloroff> hinzugefügt.\n<sound 4>Bitte nutze diese Funktion.")
/*<  7>*/ 	story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */] = true;
/*<290>*/ 	open_dowsing_wheel(21)
          }

          void entrypoint_303_37() {
/*<117>*/ 	start()
/*<124>*/ 	switch (story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */]) {
          	  case 0:
/*<125>*/ 		printf(/* textboxtype: 0, unk: 0, line: 59 */ "Jetzt bist du den ganzen Weg gelatscht\nund kommst nicht weiter, wie? Das ist\nziemlich mies.\n\n<0x10009:0x00150dff>Hm...<pause 20> Ich fühle mich, als hätte ich was\nWichtiges vergessen...\n\n\nHabe ich dir das nicht vorhin bereits gesagt...<pause 20>\n<0x10009:0x00000004>Was war das doch gleich?\n\n\n<0x10009:0x000908ff>Na ja, wie dem auch sei... Wenn du viel Wasser\nbrauchst, solltest du zum <color red<Floria-See>coloroff> gehen...")
          		flw_141:
/*<141>*/ 		switch (story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */]) {
          		  case 0:
          		  case 1:
/*<138>*/ 			zone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	  case 1:
/*<118>*/ 		printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x00110801>Ach, du hier?\nSuchst du immer noch nach deiner Freundin?\n\n\n<0x10009:0x000908ff>Was ich hier mache? Ich suche natürlich nach\neinem Schatz, ist doch klar!\n\n\n<0x10009:0x00150dff>Bis jetzt habe ich aber noch nichts gefunden.\nHast du vielleicht 'ne Idee?\n[1-]Willst du\nes wissen?[2-]Ich sage nichts!")
/*<119>*/ 		switch (choice(2)) {
          		  case 0:
/*<120>*/ 			printf(/* textboxtype: 0, unk: 0, line: 56 */ "<0x10009:0x00110900>Wie, du weißt was?!?\nDu und ich, wir sind doch gute Freunde...\nLos jetzt, erzähl schon!")
          			flw_122:
/*<122>*/ 			printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x0009080e>Was, die Flammen versperren dir den\nWeg? Dann kipp doch Wasser drauf!\n\n\n<0x10009:0x00150800>Du brauchst ganz viel Wasser dafür?\nSo ist das also...<pause 20> Dann reicht das hier\nwohl nicht, verstehe...\n\n<0x10009:0x000908ff>Das Wasser hier stammt aus dem <color red<Floria-See>coloroff><sound 4>.\nDer ist ziemlich weit weg.\n\n\n<0x10009:0x001108ff>Ein Kumpel von mir war im <color blue<Wald von Phirone\n>coloroff>auf Schatzsuche und ist von dort über den\nWasserweg hierher zurückgekehrt.\nSagt er zumindest.\n<0x10009:0x000908ff>Mit dem Wasser aus dem See lässt sich dein\nProblem ja vielleicht lösen.")
/*<123>*/ 			story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */] = true;
          			goto flw_141
          		  case 1:
/*<121>*/ 			printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x0014120a>Was sagst du da?\nIch dachte, wir wären Freunde...\nKomm schon, sag's mir!")
          			goto flw_122
          		}
          	}
          }

          void entrypoint_303_03() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 1, unk: 0, line: 102 */ "Lindere meinen Durst, und ich\ngebe den Weg frei...")
          }

          void entrypoint_303_20() {
/*< 77>*/ 	start()
/*< 78>*/ 	printf(/* textboxtype: 73, unk: 1, line: 19 */ "<sound 114>Endlich! Das wurde aber auch\nallerhöchste Zeit!")
          }

          void entrypoint_303_38() {
/*<126>*/ 	start()
/*<135>*/ 	switch (scene_flags[114 /* 0xF 04 */]) {
          	  case 0:
/*<136>*/ 		printf(/* textboxtype: 1, unk: 0, line: 117 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu berichten.\n\n\n\nDie Flamme, die den Zugang blockiert,\nist noch immer nicht gelöscht.\n\n\nSoll ich das Gefäß, in dem sich der\n<color blue<Wasserdrache>coloroff> aufhielt, als Ziel für\ndie <color green<Aurasuche >coloroff>festlegen?\n[1-]Ja[2]Nein")
          		flw_139:
/*<139>*/ 		switch (choice(2)) {
          		  case 0:
/*<128>*/ 			story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = true;
/*<129>*/ 			story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<130>*/ 			story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<131>*/ 			story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<132>*/ 			story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<133>*/ 			story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<289>*/ 			printf(/* textboxtype: 0, unk: 1, line: 118 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Das Gefäß, in dem sich der\n<color blue<Wasserdrache >coloroff>aufhielt, wurde als Ziel für die\n<color green<Aurasuche >coloroff>festgelegt.<sound 4>")
/*<288>*/ 			open_dowsing_wheel(13)
          			flw_134:
/*<134>*/ 			scene_flags[5 'Eldin Volcano Summit'][114 /* 0xF 04 */] = true;
/*<137>*/ 			zone_temp_flags[0 /* 0x1 01 */] = false;
          		  case 1:
/*<140>*/ 			printf(/* textboxtype: 0, unk: 0, line: 119 */ "<0x10012:0x00000005>Gebieter, ich folge deinem Wunsch und\nwerde damit noch warten.")
          			goto flw_134
          		}
          	  case 1:
/*<127>*/ 		printf(/* textboxtype: 0, unk: 1, line: 109 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu berichten.\nIch empfehle, den Worten des <color blue<Mogma>coloroff> zu\nfolgen und zum <color red<Floria-See>coloroff> zu gehen.\n\nWas den Transport des Wassers angeht...<pause 15>\nVielleicht solltest du dich an den\n<color red<Wasserdrachen>coloroff> wenden?<sound 4>\n\nMit dem <color red<Wasserbehälter>coloroff>, in dem er\nsich von seiner Verletzung erholt hat,\nsollte es möglich sein, das Wasser\nzu transportieren.")
/*<296>*/ 		printf(/* textboxtype: 1, unk: 0, line: 116 */ "Soll ich die frühere Information verarbeiten und\ndas Gefäß als Ziel für die <color red<Aurasuche>coloroff> festlegen?\n[1-]Ja[2]Nein")
          		goto flw_139
          	}
          }

          void entrypoint_303_04() {
/*< 12>*/ 	start()
/*< 14>*/ 	switch (story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */]) {
          	  case 0:
/*< 15>*/ 		printf(/* textboxtype: 73, unk: 1, line: 37 */ "<0x10009:0x00151b09>Sag bloß, du suchst ebenfalls\nnach dem <color yellow<Artefakt der Göttin>coloroff>?\nIst das hier nicht etwas heiß für dich?\n\n<0x10009:0x00ffff00>Mir macht die Hitze ja an sich wenig aus,\naber diese Flammen da sind selbst mir zu heiß!")
          		flw_17:
/*< 17>*/ 		printf(/* textboxtype: 0, unk: 73, line: 38 */ "<0x10009:0x001817ff>Irgendwie müsste man diese Flammen\nja doch überwinden können, oder?")
          	  case 1:
/*< 13>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00151b09>Hallo, mein Freund!\nGeht es dir gut?\n\n\n<0x10009:0x00160bff>Ich habe gehört, dass sich hier noch\n<color yellow<Artefakte der Göttin>coloroff> verbergen sollen.\n\n\n<0x10009:0x00000b00>Ich glaube, dass sich hier hinten\neines verbirgt, aber diese Flammen\nversperren mir den Weg...")
/*< 16>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_17
          	}
          }

          void entrypoint_303_21() {
/*< 79>*/ 	start()
/*< 80>*/ 	printf(/* textboxtype: 0, unk: 73, line: 20 */ "<sound 114>Hey! Was soll das?")
          }

          void entrypoint_303_39() {
/*<148>*/ 	start()
/*<150>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*<151>*/ 		printf(/* textboxtype: 0, unk: 1, line: 61 */ "<0x10009:0x000c0405>Ich habe immer von einem hoch gelegenen Ort\nals Altersdomizil geträumt...\n\n\n<0x10009:0x000c0dff>Wenn man sein ganzes Leben in stinkenden\nKellern verbracht hat, sehnt man sich nach\nSonne und frischer Luft...\n\n<0x10009:0x00090906>Ach, ich würde mir sogar wünschen, in meinem\nnächsten Leben als Vogel wiedergeboren\nzu werden!")
          	  case 1:
/*<149>*/ 		printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x000b0c07>Hey, wo kommst du denn her?\n\n\n\n<0x10009:0x000b0506>Hehehehe...\nWie gefallen dir diese tollen Klauen?\nDie habe ich entworfen!\n\nWas ich so treibe? Nun...\n\n\n\n<0x10009:0x000c0405>Ich war auf der Suche nach neuen Schätzen,\naber irgendwie finde ich im Augenblick\nnichts Rechtes...\n\nIn dieser Hitze hier unten macht die\nSchatzsucherei sowieso keinen so rechten Spaß...\n\n\n<0x10009:0x00090908>Ich denke manchmal, dass ich so langsam in\nRente gehen und das Leben genießen sollte...")
/*<152>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          	}
          }

          void entrypoint_303_05() {
/*< 23>*/ 	start()
/*< 21>*/ 	switch (scene_flags[106 /* 0xC 04 */]) {
          	  case 0:
/*< 22>*/ 		printf(/* textboxtype: 73, unk: 1, line: 40 */ "<0x10009:0x00181700>Wenn du hier rausgehst und am Ende\nrechts abbiegst, findest du eine <color red<Quelle>coloroff>!\nVielleicht hilft dir das ja weiter...")
          	  case 1:
/*< 20>*/ 		switch (scene_flags[105 /* 0xC 02 */]) {
          		  case 0:
/*< 18>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "„Lindere meinen Durst...“?\nDa fällt mir ein, wenn du hier rausgehst\nund am Ende dann rechts...\n\nDann kommst du nach draußen, und\ndort ist eine <color red<Quelle>coloroff>...<sound 4>\nIhr Wasser ist wirklich lecker!\n\n<0x10009:0x00181705>Aber wie willst du das Wasser\nhierherbringen? Den Frosch selbst\nkönnen wir ja schlecht zur Quelle\nbringen...<pause 15> Wie machen wir das?")
/*< 19>*/ 			scene_flags[5 'Eldin Volcano Summit'][106 /* 0xC 04 */] = true;
          		  case 1:
/*< 24>*/ 			printf(/* textboxtype: 0, unk: 73, line: 38 */ "<0x10009:0x001817ff>Irgendwie müsste man diese Flammen\nja doch überwinden können, oder?")
          		}
          	}
          }

          void entrypoint_303_22() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<sound 114>Schluss jetzt! Wenn du so weitermachst,\nbreche ich noch auseinander!")
          }

          void entrypoint_303_06() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 0, unk: 73, line: 41 */ "<0x10009:0x00171908>Sieh mal, die Flammen sind erloschen!\nJetzt können wir diesen Abschnitt\nendlich erkunden.")
/*<153>*/ 	{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6911, 'next': 28, 'param3': 13}
/*< 28>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 0, 'next': 27, 'param3': 14}
/*< 27>*/ 	story_flags[468 /* us: 805A9B0F 0x40, jp: 805ACD8F 0x40 */] = true;
/*<142>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_303_23() {
/*< 83>*/ 	start()
/*< 84>*/ 	printf(/* textboxtype: 73, unk: 1, line: 22 */ "<0x10012:0x0000000b>Gebieter, der Roboter wartet am Vulkan auf dich.\nIch empfehle dir, schnell zu ihm zu gehen.")
          }

          void entrypoint_303_40() {
/*<155>*/ 	start()
/*<157>*/ 	switch (story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */]) {
          	  case 0:
          		flw_165:
/*<165>*/ 		switch (scene_flags[81 /* 0xB 02 */]) {
          		  case 0:
/*<166>*/ 			printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10009:0x001a030d>Boss!\nIch hoffe, es geht dir gut... Ich werde ein\nwürdiger Nachfolger sein, versprochen!")
          		  case 1:
/*<158>*/ 			printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x001c180f>Was?!?\nUnser Boss ist in die Höhe geschossen worden?\nWohin denn?\n[1-]Ins Wolkenmeer[2-]Ins Paradies")
/*<161>*/ 			switch (choice(2)) {
          			  case 0:
/*<162>*/ 				printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x10009:0x001a2011>Was, ins Wolkenmeer?\n\n\n\n<0x10009:0x001b0407>Abgefahren!<pause 20> ...Aber er wollte ja schon\nmal dahin!\n\n\nIch bin mir sicher, dass er auch da oben die\nFinger nicht von der Schatzsuche lassen kann...")
          				flw_164:
/*<164>*/ 				scene_flags[4 'Eldin Volcano'][81 /* 0xB 02 */] = true;
          			  case 1:
/*<163>*/ 				printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x001a2011>Ins Paradies?\n\n\n\n<0x10009:0x001b2207>Hm<pause 20>...\nDann war es wohl Zeit...\n\n\nOb es da wohl Schätze gibt? Das würde\nmich interessieren...")
          				goto flw_164
          			}
          		}
          	  case 1:
/*<186>*/ 		switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          		  case 0:
          			goto flw_165
          		  case 1:
/*<160>*/ 			switch (scene_flags[81 /* 0xB 02 */]) {
          			  case 0:
/*<176>*/ 				switch (zone_temp_flags[4 /* 0x1 10 */]) {
          				  case 0:
/*<177>*/ 					printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x001b2207>Ein toller Hecht, unser Boss! Immer unterwegs\nzwischen den Wolken und Kellergewölben!")
          				  case 1:
/*<174>*/ 					printf(/* textboxtype: 0, unk: 0, line: 71 */ "<0x10009:0x001a2011>Wa... Was?!?\nEr ist schon wieder zurück?\n\n\n<0x10009:0x001b2207>Ein toller Hecht, unser Boss! Immer unterwegs\nzwischen den Wolken und Kellergewölben!")
/*<175>*/ 					zone_temp_flags[4 /* 0x1 10 */] = true;
          				}
          			  case 1:
/*<167>*/ 				switch (zone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<172>*/ 					switch (zone_temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*<173>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000015>Das Leben genießen...\nNun, wenn der Boss das will, solltest du\nihm dabei helfen!")
          					  case 1:
/*<286>*/ 						switch (story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */]) {
          						  case 0:
/*<170>*/ 							printf(/* textboxtype: 0, unk: 1, line: 64 */ "<0x10009:0x001a2001>Und, warst du beim Boss?\nWie geht es ihm?\n\n\n...\n\n\n\n<0x10008:0x01cd><0x10009:0x001a2011>Was sagst du da? Das Leben genießen?\nWie abgefahren!\n\n\n...<0x10009:0x000000ff>Aber was ist mit den Schätzen?\nWill er die etwa uns überlassen?\n\n\n<0x10009:0x001b1e15>Unser Boss ist schon ein komischer Kauz...\n\n\n\nAber er ist immer noch der Boss!\nDu solltest ihm seinen Wunsch erfüllen,\nwenn du kannst...")
          							flw_171:
/*<171>*/ 							zone_temp_flags[3 /* 0x1 08 */] = true;
          						  case 1:
/*<287>*/ 							printf(/* textboxtype: 0, unk: 0, line: 65 */ "<0x10009:0x001b2201>Hey, was machst du denn hier?\nAlles klar bei dir?\n\n\nWas, wie es mir geht? Natürlich prächtig,\nist doch klar!\n\n\n<0x10009:0x00000002>Aber unser Boss ist irgendwie komisch drauf,\nseit er in dieser Ruine war...\n\n\n<0x10009:0x001b22ff>Wie, du warst beim Boss? Wie geht es\nihm denn?\n\n\n<0x10008:0x01cd><0x10009:0x001a2011>Was sagst du da? Das Leben genießen?\nWie abgefahren!\n\n\n<0x10009:0x000000ff>Aber was ist mit den Schätzen?\nWill er die etwa uns überlassen?\n\n\n<0x10009:0x001b1e15>Unser Boss ist schon ein komischer Kauz...\n\n\n\nAber er ist immer noch der Boss!\nDu solltest ihm seinen Wunsch erfüllen,\nwenn du kannst...")
/*<292>*/ 							story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */] = true;
          							goto flw_171
          						}
          					}
          				  case 1:
/*<168>*/ 					switch (story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */]) {
          					  case 0:
/*<169>*/ 						printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x001b050a>Schau mal bei unserem <color blue<Boss>coloroff> vorbei,\ner muss hier in der Nähe sein...\n\n\nVielleicht baut es ihn auf, dich zu sehen...")
          					  case 1:
/*<156>*/ 						printf(/* textboxtype: 0, unk: 0, line: 62 */ "<0x10009:0x001b2201>Hey, Kumpel! Da bist du ja wieder!\nWie geht's?\n\n\nWas, wie es mir geht? Natürlich prächtig,\nist doch klar!\n\n\n<0x10009:0x00000002>Aber unser <color blue<Boss>coloroff> ist irgendwie komisch drauf,\nseit er in dieser Ruine war...\n\n\n<0x10009:0x001b230a>Du solltest mal zu ihm gehen und ihm Hallo\nsagen! Er muss hier in der Nähe sein...")
/*<159>*/ 						story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */] = true;
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_303_07() {
/*< 29>*/ 	start()
/*< 31>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
          		flw_32:
/*< 32>*/ 		printf(/* textboxtype: 73, unk: 1, line: 43 */ "Bitte, versuch es noch einmal!\nTu es für die Wissenschaft!")
          	  case 1:
/*< 30>*/ 		printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00161e56>Nicht schon wieder...\nIrgendwas müssen wir doch tun können!")
/*< 33>*/ 		temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_32
          	}
          }

          void entrypoint_303_24() {
/*< 85>*/ 	start()
/*< 86>*/ 	printf(/* textboxtype: 0, unk: 73, line: 23 */ "<0x10012:0x00000064>Da bist du ja endlich! Los geht's,\nbring mich zum Gipfel!")
          }

          void entrypoint_303_41() {
/*<178>*/ 	start()
/*<180>*/ 	switch (zone_temp_flags[5 /* 0x1 20 */]) {
          	  case 0:
/*<181>*/ 		printf(/* textboxtype: 0, unk: 1, line: 76 */ "<0x10009:0x001b2215>Das Einzige, was <color blue<Platio>coloroff> interessiert,\nsind die Schätze...")
          	  case 1:
/*<179>*/ 		printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x001a200f>Aber das ist ja... Wir kennen uns doch?!?<pause 15>\n\n\n\n<0x10009:0x001b2209>Na ja, ist ja auch egal...\n\n\n\nMein Bruder hat rausbekommen, was mir da\nin der Ruine für ein kleines... Missgeschick\npassiert ist!\n\n<0x10009:0x001b1eff>Aber ihn hat es wohl auf die gleiche\nArt erwischt... Ich sage es ja immer,\nkeiner ist besser als der andere!\n\n<0x10009:0x001a0a12>Aber sag mal, hast du <color blue<Platio >coloroff>irgendwo gesehen?\n[1-]Ja[2-]Nein")
/*<183>*/ 		switch (choice(2)) {
          		  case 0:
/*<184>*/ 			printf(/* textboxtype: 0, unk: 0, line: 74 */ "<0x10009:0x001b0a12>Ach, wirklich?\nDann ist's ja gut!\n\n\nIch habe ihn in letzter Zeit so gut wie\nnicht gesehen...\n\n\n<0x10009:0x001b160f>Ich bin mir sicher, dass er wieder allerhand\nUnfug im Schilde führt!\n\n\n<0x10009:0x001b16ff>Dem muss man wirklich keine Ratschläge\ngeben, der hört eh nicht auf einen...")
          			flw_182:
/*<182>*/ 			zone_temp_flags[5 /* 0x1 20 */] = true;
          		  case 1:
/*<185>*/ 			printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x001b2207>Dieser Kerl...<pause 20>\nDer ist bestimmt mal wieder alleine zur\nSchatzsuche aufgebrochen...\n\nDas ist gefährlich, aber er will ja einfach\nnicht auf meine Ratschläge hören...\n\n\n<0x10009:0x001b0009>Na ja, ist ja auch egal! Ein echter\n<color blue<Schatzsucher>coloroff> trotzt jeder Gefahr...\n\n\nSolltest du <color blue<Platio>coloroff> begegnen, dann grüße\nihn von mir, ja?")
          			goto flw_182
          		}
          	}
          }

          void entrypoint_303_08() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 0, unk: 73, line: 44 */ "<0x10009:0x00171908>Oh, klasse!\nDann lass uns mal nachsehen...")
/*<154>*/ 	{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6911, 'next': 37, 'param3': 13}
/*< 37>*/ 	{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 0, 'next': 36, 'param3': 14}
/*< 36>*/ 	story_flags[469 /* us: 805A9B0E 0x02, jp: 805ACD8E 0x02 */] = true;
/*<143>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_303_25() {
/*< 87>*/ 	start()
/*< 88>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10012:0x00000064>Hey, vergiss mich nicht!\nHier auf der <color red<Karte>coloroff> (-) kannst du\nnachsehen, wo ich mich gerade befinde.<0x10011:0x02cd>")
          }

          void entrypoint_303_42() {
/*<188>*/ 	start()
/*<190>*/ 	switch (scene_flags[82 /* 0xB 04 */]) {
          	  case 0:
/*<191>*/ 		printf(/* textboxtype: 0, unk: 0, line: 80 */ "<0x10009:0x000d0509>Ich begebe mich dann mal wieder\nauf die Schatzsuche...")
          	  case 1:
/*<189>*/ 		printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10008:0x01cd><0x10009:0x000e1008>Hey, du! Geht es dir gut?\n\n\n\n<0x10009:0x0011110b>Oh, du hast dir also all deine Sachen\nzurückgeholt... Ich wusste, dass du\ndas kannst!\n\nAber sag mal...<pause 20> Wie war's?\nHast du Schätze gefunden?\n[1-]Klar![2-]Fehlanzeige...")
/*<192>*/ 		switch (choice(2)) {
          		  case 0:
/*<193>*/ 			printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x000e0505>Wirklich? Abgefahren!\n\n\n\n<0x10009:0x000e1f0a>Aber ich sage dir, die Welt ist groß!\nSchätze schlummern überall, und du\nhast längst noch nicht alle gefunden!\n\nIch schaue nicht zurück... Und beim\nnächsten Mal bin ich es, der den\nHauptgewinn abräumt!")
          			flw_195:
/*<195>*/ 			scene_flags[4 'Eldin Volcano'][82 /* 0xB 04 */] = true;
          		  case 1:
/*<194>*/ 			printf(/* textboxtype: 0, unk: 1, line: 79 */ "<0x10009:0x000e040a>Wie, du hast gar nichts gefunden?\nDann war dein Trip ja völlig umsonst!\n\n\n<0x10009:0x000f0508>Aber mach dir nichts draus!\nDie Welt ist groß und voller Schätze!\nBeim nächsten Mal...")
          			goto flw_195
          		}
          	}
          }

          void entrypoint_303_09() {
/*< 38>*/ 	start()
/*< 45>*/ 	switch (story_flags[173 /* us: 805A9AE2 0x10, jp: 805ACD62 0x10 */]) {
          	  case 0:
/*< 52>*/ 		switch (scene_flags[111 /* 0xC 80 */]) {
          		  case 0:
/*< 53>*/ 			printf(/* textboxtype: 1, unk: 0, line: 54 */ "Ich werde mich noch woanders umsehen...\nBis dann!")
          		  case 1:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00181702>Und, was hast du da drinnen gefunden?\n[1-]Viele Fallen[2-]Viele Monster")
/*< 47>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_49:
/*< 49>*/ 				switch (story_flags[248 /* us: 805A9AF7 0x04, jp: 805ACD77 0x04 */]) {
          				  case 0:
/*< 50>*/ 					printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x00161e56>Ach, wirklich?\nHm, dann solltest du diesen Bereich\nwohl besser alleine erkunden...\n\n<0x10009:0x00080bff>Ich werde mir derweilen eine andere\nGegend vornehmen. So vieles will noch\nerforscht werden... Bis bald!")
          					flw_51:
/*< 51>*/ 					scene_flags[5 'Eldin Volcano Summit'][111 /* 0xC 80 */] = true;
          				  case 1:
/*< 48>*/ 					printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x00161e56>Ach, wirklich?\nHm, dann solltest du diesen Bereich\nwohl besser alleine erkunden...\n\n<0x10009:0x00080bff>Übrigens, ich glaube wirklich, dass sich dort\nauch ein <color yellow<Artefakt der Göttin>coloroff> versteckt...\n\n\nIch täusche mich selten, deswegen\nhalte besser die Augen offen, ja?")
          					goto flw_51
          				}
          			  case 1:
          				goto flw_49
          			}
          		}
          	  case 1:
/*< 43>*/ 		switch (story_flags[187 /* us: 805A9AE9 0x04, jp: 805ACD69 0x04 */]) {
          		  case 0:
/*< 44>*/ 			printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x00171908>Hey, du bist klasse!\nDir ist wirklich nichts zu schwer, was?\n\n\n<0x10009:0x00080bff>Dafür lasse ich dir auch den Vortritt!\nNa los, geh rein und sieh dich um!")
          		  case 1:
/*< 40>*/ 			switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
          			  case 0:
/*<284>*/ 				switch (temp_flags[15 /* 0x0 80 */]) {
          				  case 0:
/*<285>*/ 					printf(/* textboxtype: 73, unk: 1, line: 49 */ "<0x10009:0x00181707>Wir bräuchten eine Menge <color red<Wasser>coloroff>\nund dazu noch einen <color red<großen Behälter>coloroff>...\nFällt dir da nichts ein?")
          				  case 1:
/*< 41>*/ 					printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00181707>Wie kommen wir hier nur vorbei?\nWir bräuchten eine Menge <color red<Wasser>coloroff>\nund dazu noch einen <color red<großen Behälter>coloroff>...\n\n<0x10009:0x00161eff>Du hast doch bereits so manches\nAbenteuer bestanden... Fällt dir\nnichts ein?")
/*<283>*/ 					temp_flags[15 /* 0x0 80 */] = true;
          				}
          			  case 1:
/*< 39>*/ 				printf(/* textboxtype: 1, unk: 0, line: 45 */ "Oh, schau dir das nur an!\nUnheimlich...\n\n\n<0x10009:0x00171908>Das ist bestimmt nicht für das <color yellow<Artefakt\nder Göttin>coloroff> gedacht! Dahinter muss sich\netwas <color red<Größeres>coloroff> befinden.")
/*<144>*/ 				set_camera(4, 0)
/*<146>*/ 				printf(/* textboxtype: 73, unk: 1, line: 46 */ "<0x10009:0x00161eff>Und dieses Mal sind die Flammen noch\nviel größer! Mit einer <color yellow<Flasche>coloroff> wirst\ndu da nicht weiterkommen...")
/*<145>*/ 				set_camera(-1, 0)
/*<147>*/ 				printf(/* textboxtype: 0, unk: 73, line: 47 */ "<0x10009:0x00000007>Hm...<pause 15> <0x10009:0x00181700>Irgendwie müssten wir da\ngenügend Wasser draufspritzen.\nHast du keinen <color red<großen Behälter>coloroff><sound 4>?\n\n<0x10009:0x00161eff>Und dann bräuchten wir natürlich\nauch noch eine ganze Menge <color red<Wasser>coloroff>...\nWie machen wir das nur?")
/*< 42>*/ 				story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_303_26() {
/*< 89>*/ 	start()
/*< 90>*/ 	printf(/* textboxtype: 73, unk: 1, line: 25 */ "Da soll ich Wasser draufspritzen?\nNa, dann sieh zu und lerne!")
          }

          void entrypoint_303_43() {
/*<201>*/ 	start()
/*<202>*/ 	printf(/* textboxtype: 1, unk: 0, line: 120 */ "Wir sind am Vulkan Eldin angelangt.\n\n\n\nSuche mit der <color red<Aurasuche>coloroff> nach dem Eingang zur\nPrüfung, die du bestehen musst, um die heilige\nFlamme zu erhalten.")
          }

