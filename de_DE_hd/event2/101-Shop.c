          void entrypoint_101_30() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf("")
          }

          void entrypoint_101_31() {
/*< 26>*/ 	start()
/*< 64>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 24, 'param3': 12}
/*< 24>*/ 	check_item_flag(19, 1)
/*< 25>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 6}) {
          	  case 0:
/*< 28>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ihr interessiert Euch also für diese\n<y<10 Pfeile>>? Eine hervorragende Wahl!\n\n\nDiese Pfeile fliegen schneller als der\nWind! Achtet jedoch darauf, keine\nMenschen damit zu treffen.\n\nDas macht dann <r<20 Rubine>>, mein Herr.\n[1]Gekauft![2-]Lieber nicht.")
/*< 21>*/ 		switch (choice(2)) {
          		  case 0:
/*< 23>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 26}
          		  case 1:
/*< 22>*/ 			entrypoint_101_08();
          		}
          	  case 1:
/*< 27>*/ 		printf("Oh, ich bin untröstlich! Ihr besitzt\nkeinen Bogen, deshalb kann ich Euch\ndieses Item leider nicht verkaufen.\nDas versteht Ihr doch?")
          	}
          }

          void entrypoint_101_32() {
/*< 36>*/ 	start()
/*< 65>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 32, 'param3': 12}
/*< 32>*/ 	check_item_flag(92, 1)
/*< 31>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          	  case 0:
/*< 37>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ihr interessiert Euch also für diese\n<y<10 Bomben>>?\n\n\nMit diesen Bomben könnt Ihr es richtig\nkrachen lassen! Sogar kleine Mauern\nkönnt Ihr damit ruckzuck in Staub\nverwandeln.\nDas macht dann <r<20 Rubine>>, mein Herr.\n[1]Gekauft![2-]Lieber nicht.")
          		flw_33:
/*< 33>*/ 		switch (choice(2)) {
          		  case 0:
/*< 35>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 26}
          		  case 1:
/*< 34>*/ 			entrypoint_101_08();
          		}
          	  case 1:
/*< 38>*/ 		printf("Ah, welch Unglück! Ihr besitzt keine\nBombentasche, deshalb kann ich Euch\ndieses Item leider nicht verkaufen...")
          	}
          }

          void entrypoint_101_33() {
/*< 46>*/ 	start()
/*< 66>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 47, 'param3': 12}
/*< 47>*/ 	printf("\x0E\x01\x09\x04\x00\x02Ihr interessiert Euch also für einen\n<y<Holzschild>>? Ausgezeichnete Wahl!\nDamit könnt Ihr gegnerische Angriffe\nhervorragend abwehren.\nVergesst dabei jedoch nicht, dass Euer\nSchild nach einer gewissen Zahl von\nTreffern <r<kaputtgeht>>.\n\nZudem ist ein <y<Holzschild>> durch Feuer\nsehr leicht zu zerstören, also seid damit\nsehr vorsichtig.\n\nDas macht dann <r<50 Rubine>>, mein Herr.\n[1]Her damit![2-]Nein, danke.")
/*<125>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
          	goto flw_33
          }

          void entrypoint_101_34() {
/*< 48>*/ 	start()
/*< 67>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 50, 'param3': 12}
/*< 50>*/ 	printf("\x0E\x01\x09\x04\x00\x02Ihr interessiert Euch also für einen\n<y<Eisenschild>>? Dieser Schild ist noch\nrobuster als die Variante aus Holz.\n\nSelbst loderndes Feuer kann diesem\nPrachtexemplar hier nichts anhaben!\nEinzig vor Elektro-Angriffen solltet\nIhr Euch in Acht nehmen.\nDas macht <r<100 Rubine>>, mein Herr.\n[1]Her damit![2-]Nein, danke.")
/*<126>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
          	goto flw_33
          }

          void entrypoint_101_35() {
/*< 49>*/ 	start()
/*< 68>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 51, 'param3': 12}
/*< 51>*/ 	printf("\x0E\x01\x09\x04\x00\x02Ihr interessiert Euch also für einen\n<y<heiligen Schild>>? Nun, dieser Schild\nwird seinem Namen wahrlich gerecht.\n\nEr repariert sich von selbst und\nwidersteht sowohl Feuer- als auch\nElektro-Angriffen! Ein Wunderding!\n\nNur\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í geht er zu meinem Bedauern\nsehr schnell kaputt. Aber das könnt\nIhr mit Eurer Technik ganz bestimmt\nwieder wettmachen!\nDas macht <r<500 Rubine>>, mein Herr.\n[1]Her damit![2-]Äh... Nein!")
/*<127>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
          	goto flw_33
          }

          void entrypoint_101_01() {
          	start()
/*< 40>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
          		flw_41:
/*< 41>*/ 		printf("\x0E\x01\x09\x04\x00\x01Aaah, werter Herr! Kann ich Euch\nmeine Hilfe anbieten?\n[1]Ja![2-]Nein.")
          		flw_1:
/*<  1>*/ 		switch (choice(2)) {
          		  case 0:
/*<  4>*/ 			printf("Es ist mir ein Vergnügen, Euch alles\ngenauestens zu erklären, werter Herr!\n\n\nStellt Euch vor einen Gegenstand und\ndrückt (A), um ihn aus der Nähe zu\nbetrachten und eine kurze Erklärung\ndazu zu erhalten.\nSollte Euch der Gegenstand gefallen,\nkönnt Ihr ihn danach sofort erwerben!")
/*<139>*/ 			switch (story_flags[809 /* us: 805A9B31 0x02, jp: 805ACDB1 0x02 */]) {
          			  case 0:
/*<138>*/ 				printf("Einige der Items aus meinem Laden\nkönnt Ihr sogar in der Werkstatt\nverbessern lassen!\n\nVerstärkt zum Beispiel Euren Schild,\num zu verhindern, dass er schnell\nkaputtgeht.")
/*<140>*/ 				zone_temp_flags[1 /* 0x1 02 */] = true;
          			  case 1:
          			}
          		  case 1:
/*<  3>*/ 			printf("\x0E\x01\x09\x04\x00\x07Ah, wie überaus anmaßend von mir!\nEntschuldigt, werter Herr. Jemand,\nder so weise ist wie Ihr, benötigt\nselbstverständlich keine Erklärung.\nNun denn, wollt Ihr nun einen Blick\nauf meine Waren werfen?")
/*< 39>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		}
          	  case 1:
/*< 97>*/ 		switch (story_flags[1114 /* us: 805A9B57 0x01, jp: 805ACDD7 0x01 */]) {
          		  case 0:
/*<102>*/ 			switch (scene_flags[123 /* 0xE 08 */]) {
          			  case 0:
          				goto flw_41
          			  case 1:
/*<109>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 110, 'param3': 31}
/*<110>*/ 				printf("\x0E\x01\x09\x04\x00\x01Aaah, Ihr kommt gerade richtig,\nwerter Herr. Ich habe ein <r<neues Item\n>>in meinem Sortiment!\n\nIhr könnt nun einen <y<kleinen Köcher>>\nerwerben! Werft ruhig einen Blick\ndarauf, wenn Ihr möchtet!")
/*<111>*/ 				zone_temp_flags[1 /* 0x1 02 */] = true;
/*<115>*/ 				scene_flags[0 'Skyloft'][123 /* 0xE 08 */] = true;
          			}
          		  case 1:
/*< 98>*/ 			switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          			  case 0:
/*<101>*/ 				switch (scene_flags[122 /* 0xE 04 */]) {
          				  case 0:
          					goto flw_41
          				  case 1:
/*<106>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 107, 'param3': 31}
/*<107>*/ 					printf("\x0E\x01\x09\x04\x00\x01Aaah, Ihr kommt gerade richtig,\nwerter Herr. Ich habe ein <r<neues Item\n>>in meinem Sortiment!\n\nIhr könnt nun den <y<heiligen Schild>>\nerwerben! Werft ruhig einen Blick\ndarauf, wenn Ihr möchtet!")
/*<108>*/ 					zone_temp_flags[1 /* 0x1 02 */] = true;
/*<114>*/ 					scene_flags[0 'Skyloft'][122 /* 0xE 04 */] = true;
          				}
          			  case 1:
/*< 96>*/ 				switch (story_flags[1115 /* us: 805A9B57 0x02, jp: 805ACDD7 0x02 */]) {
          				  case 0:
/*<100>*/ 					switch (scene_flags[121 /* 0xE 02 */]) {
          					  case 0:
          						goto flw_41
          					  case 1:
/*<103>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 104, 'param3': 31}
/*<104>*/ 						printf("\x0E\x01\x09\x04\x00\x01Aaah, Ihr kommt gerade richtig,\nwerter Herr. Ich habe ein <r<neues Item\n>>in meinem Sortiment!\n\nIhr könnt nun eine <y<kleine Bombentasche\n>>erwerben! Werft ruhig einen Blick\ndarauf, wenn Ihr möchtet!")
/*<105>*/ 						zone_temp_flags[1 /* 0x1 02 */] = true;
/*<113>*/ 						scene_flags[0 'Skyloft'][121 /* 0xE 02 */] = true;
          					}
          				  case 1:
/*< 92>*/ 					switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          					  case 0:
/*< 99>*/ 						switch (scene_flags[120 /* 0xE 01 */]) {
          						  case 0:
          							goto flw_41
          						  case 1:
/*< 93>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 123, 'param3': 31}
/*<123>*/ 							switch (scene_flags[124 /* 0xE 10 */]) {
          							  case 0:
/*< 94>*/ 								printf("\x0E\x01\x09\x04\x00\x01Aaah, Ihr kommt gerade richtig,\nwerter Herr. Ich habe ein <r<neues Item\n>>in meinem Sortiment!\n\nIhr könnt nun einen <y<Eisenschild>>\nerwerben! Werft ruhig einen Blick\ndarauf, wenn Ihr möchtet!")
          								flw_95:
/*< 95>*/ 								zone_temp_flags[1 /* 0x1 02 */] = true;
/*<112>*/ 								scene_flags[0 'Skyloft'][120 /* 0xE 01 */] = true;
          							  case 1:
/*<124>*/ 								printf("\x0E\x01\x09\x04\x00\x01Aaah, Ihr kommt gerade richtig,\nwerter Herr. Ich habe <r<neue Items >>in\nmeinem Sortiment!\n\nIhr könnt nun einen <y<Eisenschild>> und\neine <y<kleine Deku-Tasche>> erwerben!\nWerft ruhig einen Blick darauf, wenn\nIhr möchtet!")
          								goto flw_95
          							}
          						}
          					  case 1:
/*<117>*/ 						switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          						  case 0:
/*<118>*/ 							switch (scene_flags[124 /* 0xE 10 */]) {
          							  case 0:
          								goto flw_41
          							  case 1:
/*<119>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 122, 'param3': 31}
/*<122>*/ 								printf("\x0E\x01\x09\x04\x00\x01Aaah, Ihr kommt gerade richtig,\nwerter Herr. Ich habe ein <r<neues Item\n>>in meinem Sortiment!\n\nIhr könnt nun eine <y<kleine Deku-Tasche>>\nerwerben! Werft ruhig einen Blick\ndarauf, wenn Ihr möchtet!")
/*<120>*/ 								zone_temp_flags[1 /* 0x1 02 */] = true;
/*<121>*/ 								scene_flags[0 'Skyloft'][124 /* 0xE 10 */] = true;
          							}
          						  case 1:
/*<  2>*/ 							printf("\x0E\x01\x09\x04\x00\x01Aaah, ein Kunde! Welch freudige\nÜberraschung! Kommt, tretet näher!\n\n\nIn diesem Item-Laden findet Ihr\nalles, was das Abenteurerherz begehrt,\nwerter Herr!\n\nWerft einen Blick auf mein sagenhaftes\nund umfangreiches Angebot!\n\n\nWenn Ihr noch Fragen bezüglich des\nEinkaufens habt, stehe ich jederzeit\nzu Eurer Verfügung.\n[1]Wie kauft\nman ein?[2-]Kein\nBedarf.\x0E\x01\x07\x04\x00\x00")
          							goto flw_1
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_101_36() {
/*< 54>*/ 	start()
/*< 69>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 53, 'param3': 12}
/*< 53>*/ 	check_item_flag(52, 1)
/*< 52>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 16}) {
          	  case 0:
/*< 55>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ihr interessiert Euch also für diese\n<y<10 Deku-Kerne>>?\n\n\nSie eignen sich gar hervorragend als\nMunition für Eure Schleuder. Jeder\nAbenteurer sollte damit ausgerüstet\nsein, keine Frage!\nDas macht dann <r<20 Rubine>>, mein Herr.\n[1]Sehr gern![2-]Kein Bedarf.")
          		goto flw_33
          	  case 1:
/*< 56>*/ 		printf("Ah, es tut mir leid, mein Herr, aber Ihr\nbesitzt keine Schleuder, also kann ich\nEuch diese Kerne nicht verkaufen...\n\nAber seht Euch ruhig die anderen\nWaren in meinem Sortiment an!")
          	}
          }

          void entrypoint_101_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf("")
          }

          void entrypoint_101_37() {
/*< 71>*/ 	start()
/*< 72>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 141, 'param3': 12}
/*<141>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
/*< 81>*/ 	check_item_flag(52, 1)
/*< 80>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 20}) {
          	  case 0:
/*< 73>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ihr interessiert Euch also für eine\n<y<kleine Deku-Tasche>>?\n\n\nWenn Ihr dieses Item in Eurer Tasche\nhabt, könnt Ihr zehn Deku-Kerne mehr\ntragen! Aaah, wie überaus praktisch!\nDas macht <r<100 Rubine>>, mein Herr.\n[1]Gekauft![2-]Kein\nInteresse.")
          		goto flw_33
          	  case 1:
/*< 82>*/ 		printf("Ah, es tut mir leid, mein Herr, aber Ihr\nbesitzt keine Schleuder, also kann ich\nEuch diese Kerne nicht verkaufen...\n\nAber seht Euch ruhig die anderen\nWaren in meinem Sortiment an!")
          	}
          }

          void entrypoint_101_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	switch (random(2)) {
          	  case 0:
/*<  9>*/ 		printf("")
          	  case 1:
/*< 10>*/ 		printf("")
          	}
          }

          void entrypoint_101_38() {
/*< 74>*/ 	start()
/*< 75>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 142, 'param3': 12}
/*<142>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
/*< 83>*/ 	check_item_flag(19, 1)
/*< 84>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 22}) {
          	  case 0:
/*< 76>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ihr interessiert Euch also für einen\n<y<kleinen Köcher>>? Ausgezeichnet!\n\n\nWenn Ihr dieses Item in Eurer Tasche\nhabt, könnt Ihr ganze fünf Pfeile mehr\ntragen! Aaah, wie überaus vorteilhaft!\n\nDas macht <r<150 Rubine>>, mein Herr.\n[1]Rück rüber![2-]Nein, danke.")
          		goto flw_33
          	  case 1:
/*< 85>*/ 		printf("Oh, ich bin untröstlich! Ihr besitzt\nkeinen Bogen, deshalb kann ich Euch\ndieses Item leider nicht verkaufen.\nDas versteht Ihr doch?")
          	}
          }

          void entrypoint_101_04() {
/*< 13>*/ 	start()
/*< 62>*/ 	check_item_flag(112, 1)
/*< 63>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 18}) {
          	  case 0:
/*< 14>*/ 		printf("Ich bitte vielmals um Entschuldigung,\nwerter Herr...\n\n\nEure Tasche ist bereits voll und Ihr\nkönnt kein weiteres Item mehr tragen.\nWie wäre es, wenn Ihr ein paar Eurer\nItems ins Item-Lager brächtet?")
/*<128>*/ 		zone_temp_flags[5 /* 0x1 20 */] = false;
          	  case 1:
          	}
          }

          void entrypoint_101_39() {
/*< 77>*/ 	start()
/*< 78>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 143, 'param3': 12}
/*<143>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
/*< 87>*/ 	check_item_flag(92, 1)
/*< 86>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 24}) {
          	  case 0:
/*< 79>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ihr interessiert Euch also für eine\n<y<kleine Bombentasche>>? Wie schön!\n\n\nWenn Ihr dieses Item in Eurer Tasche\nhabt, könnt Ihr fünf Bomben mehr\ntragen! Aaah, wie überaus nützlich!\n\nDas macht <r<150 Rubine>>, mein Herr.\n[1]Au ja![2-]Brauche\nich nicht.")
          		goto flw_33
          	  case 1:
/*< 88>*/ 		printf("Ah, welch Unglück! Ihr besitzt keine\nBombentasche, deshalb kann ich Euch\ndieses Item leider nicht verkaufen...")
          	}
          }

          void entrypoint_101_05() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf("Ich bitte vielmals um Entschuldigung,\nwerter Herr...\n\n\nVon diesem Item könnt Ihr leider\nnicht mehr bei Euch tragen. Wie\nwäre es, wenn Ihr stattdessen ein\nanderes Item erwerben würdet?")
/*<129>*/ 	zone_temp_flags[5 /* 0x1 20 */] = false;
          }

          void entrypoint_101_06() {
/*< 17>*/ 	start()
/*< 59>*/ 	make_actor_do_something(1, 0)
/*< 18>*/ 	printf("\x0E\x01\x09\x04\x00\x08Aber...\x0E\x01\x05\x04\n\x00")
/*< 60>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 512, 'next': 61, 'param3': 22}
/*< 61>*/ 	printf("Werter Herr, Ihr... Ähm... Ihr habt\nnicht genügend Rubine, um dieses Item\nzu bezahlen...")
/*<130>*/ 	zone_temp_flags[5 /* 0x1 20 */] = false;
          }

          void entrypoint_101_07() {
/*< 19>*/ 	start()
/*< 57>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 512, 'next': 43, 'param3': 22}
/*< 43>*/ 	switch (random(2)) {
          	  case 0:
/*< 20>*/ 		printf("\x0E\x01\x09\x04\x00\x07Aaah, vielen Dank, werter Herr!\nEs ist mir eine Freude, mit Euch\nGeschäfte machen zu dürfen!")
          		flw_144:
/*<144>*/ 		switch (zone_temp_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*< 90>*/ 			switch (scene_flags[89 /* 0xA 02 */]) {
          			  case 0:
/*<132>*/ 				switch (story_flags[809 /* us: 805A9B31 0x02, jp: 805ACDB1 0x02 */]) {
          				  case 0:
          					flw_70:
/*< 70>*/ 					printf("Ich verstaue das Item in Eurer Tasche,\nwerter Herr.\n\n\nEinige Items müsst Ihr erst <r<ausrüsten>>.\nDrückt hierfür <g<\x0E\x02\x04\x02\x28CD>>, um Eure Tasche zu\nöffnen, und wählt anschließend das\ngewünschte Item aus.\x0E\x01\x11\x02\xECD")
          					flw_137:
/*<137>*/ 					zone_temp_flags[5 /* 0x1 20 */] = false;
          				  case 1:
/*<134>*/ 					switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
          					  case 0:
/*<135>*/ 						printf("Werter Herr, sollte Eure <r<Schildanzeige\n>>zu schnell sinken, bringt Euren Schild\nin die <r<Werkstatt>>.\n\nMit gefundenen Schätzen könnt Ihr\nEuren Schild oder andere Items\nverstärken und um ein Vielfaches\nwirksamer machen!")
/*<133>*/ 						story_flags[809 /* us: 805A9B31 0x02, jp: 805ACDB1 0x02 */] = true;
          						goto flw_137
          					  case 1:
          						goto flw_70
          					}
          				}
          			  case 1:
/*< 89>*/ 				printf("Ich habe das Item in Eurer Tasche\nverstaut. Drückt und haltet \x0E\x02\x04\x02\x28CD,\num Eure Tasche zu öffnen.\x0E\x01\x11\x02\xECD\n\nWählt dann mit dem Zeiger das\ngewünschte Item aus und <g<lasst>> \x0E\x02\x04\x02\x28CD <g<los>>.\x0E\x01\x11\x02\xECD\n\n\nAuf diese Weise rüstet Ihr zum\nBeispiel einen Schild aus, den\nIhr erworben habt!")
/*< 91>*/ 				story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
/*<116>*/ 				scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
/*<136>*/ 				zone_temp_flags[5 /* 0x1 20 */] = false;
          			}
          		  case 1:
          		}
          	  case 1:
/*< 42>*/ 		printf("\x0E\x01\x09\x04\x00\x07Aaah, Ihr seid einfach wundervoll,\nwerter Herr! Mein bester Kunde!")
          		goto flw_144
          	}
          }

          void entrypoint_101_08() {
/*< 29>*/ 	start()
/*< 44>*/ 	make_actor_do_something(1, 0)
/*< 58>*/ 	printf("\x0E\x01\x09\x04\x00\x08...\x0E\x01\x05\x04\x0F\x00")
/*< 45>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 512, 'next': 30, 'param3': 22}
/*< 30>*/ 	printf("Aber das macht doch nichts, werter Herr!\nSchaut Euch doch einfach einen anderen\nArtikel aus meinem Sortiment an, ja?")
/*<131>*/ 	zone_temp_flags[5 /* 0x1 20 */] = false;
          }

