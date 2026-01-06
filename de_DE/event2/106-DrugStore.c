          void entrypoint_106_34() {
/*< 22>*/ 	start()
/*< 51>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 21, 'param3': 12}
/*< 21>*/ 	check_item_flag(153, 1)
/*< 20>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 12}) {
          	  case 0:
/*< 26>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000001>Das hier ist ein <color yellow<Wundertrank>coloroff>!\nSo etwas Großartiges bekommst du\nsonst nirgendwo!\n\nSchmiere ihn auf deinen Schild, um ihn\nzu reparieren und die Schildanzeige\nwiederherzustellen!\n\nUnd nicht nur das! Dabei werden auch\nnoch <color red<4>coloroff> deiner Herzen aufgefüllt! Na,\ndas ist doch einen Kauf wert, oder?\n\nEine Flasche davon kostet gerade mal\n<color red<30 Rubine>coloroff>. Was sagst du dazu?\n[1-]Sehr gern![2]Äh... Nein.")
          		flw_11:
/*< 11>*/ 		switch (choice(2)) {
          		  case 0:
/*< 13>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 26}
          		  case 1:
/*< 12>*/ 			entrypoint_106_08();
          		}
          	  case 1:
/*< 29>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00090702>Hallo, mein Schöner!\n\n\n\n<0x10009:0x000c0b00>Oh... Du hast ja gar keine leere Flasche\ndabei? Ohne leere Flasche gibt es\nkeinen Trank, das weißt du doch!\n\n<0x10009:0x000d0700>Wenn du willst, erkläre ich dir das\nnoch einmal genauer.")
          	}
          }

          void entrypoint_106_51() {
/*< 65>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00070704>Sehr wohl! Dann werde ich den Trank\njetzt verfeinern. Ist das in Ordnung?\n[1-]Sicher![2]Lieber nicht.")
/*< 70>*/ 	switch (choice(2)) {
          	  case 0:
/*<110>*/ 		make_actor_do_something(3, 0)
/*< 68>*/ 		printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x00070700>So soll es sein! Es dauert nur einen\nkurzen Augenblick...")
/*< 99>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 71, 'param3': 12}
/*< 71>*/ 		make_actor_do_something(1, 0)
/*< 72>*/ 		printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00070708>Und fertig! Hier, bitte sehr!")
/*< 89>*/ 		zone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 73>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000a0a06>Ich... verstehe. Nun, kann ich sonst\nnoch etwas für dich tun?")
/*<100>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 78, 'param3': 12}
/*< 78>*/ 		make_actor_do_something(0, 0)
          	}
          }

          void entrypoint_106_35() {
/*< 55>*/ 	start()
/*< 56>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 54, 'param3': 12}
/*< 54>*/ 	check_item_flag(153, 1)
/*< 53>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 18}) {
          	  case 0:
/*< 57>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x0000000b>Oh! Das hier ist ein <color yellow<Rüstungstrank>coloroff>!\nEr vermindert den Schaden, den du\nerleidest, für eine bestimmte Zeit!\n\nSolltest du dich im Kampf noch nicht\nso sicher fühlen, lege ich dir diesen\nTrank ans Herz! Leider ist er etwas\nteuer...\nEine Flasche davon kostet dich ganze\n<color red<200 Rubine>coloroff>. Willst du ihn trotzdem?\n[1-]Aber sicher![2]Nein...")
          		goto flw_11
          	  case 1:
/*< 58>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00090702>Hallo, mein Schöner!\n\n\n\n<0x10009:0x000c0b00>Oh... Du hast ja gar keine leere Flasche\ndabei? Ohne leere Flasche gibt es\nkeinen Trank, das weißt du doch!\n\n<0x10009:0x000d0700>Wenn du willst, erkläre ich dir das\nnoch einmal genauer.")
          	}
          }

          void entrypoint_106_52() {
/*< 74>*/ 	start()
/*< 90>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 91>*/ 		printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00090908>Vielen Dank! Ich hoffe, du hast viel\nFreude mit deinem Trank. Bis zum\nnächsten Mal!")
          	  case 1:
/*< 75>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x000a0a06>Oh, also gut. Komm jederzeit wieder\nvorbei, wenn ich einen deiner Tränke\nverfeinern soll.")
          	}
          }

          void entrypoint_106_01() {
          	start()
/*< 40>*/ 	switch (story_flags[35 /* us: 805A9ADD 0x08, jp: 805ACD5D 0x08 */]) {
          	  case 0:
/*<126>*/ 		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          		  case 0:
/*<127>*/ 			switch (story_flags[1075 /* us: 805A9B50 0x02, jp: 805ACDD0 0x02 */]) {
          			  case 0:
          				flw_105:
/*<105>*/ 				switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          				  case 0:
/*<109>*/ 					switch (scene_flags[85 /* 0xB 20 */]) {
          					  case 0:
          						flw_6:
/*<  6>*/ 						switch (zone_temp_flags[2 /* 0x1 04 */]) {
          						  case 0:
/*<  5>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x0000000b>Kann ich helfen, mein Guter?\n[1-]Erzähl mir was.[2]Nein, danke.")
          							flw_2:
/*<  2>*/ 							switch (choice(2)) {
          							  case 0:
/*<  4>*/ 								printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000004>Siehst du die vielen Tränke hier vor\nmir? Stell dich vor eine Schüssel und\ndrücke (A), wenn du einen davon\nkaufen möchtest!\nKeine Angst, ich erkläre dir vorher\nnatürlich, welche Wirkung er hat.\n\n\n<0x10009:0x000d0700>Und wenn du einen gekauften Trank\ndurch Alchemie ein wenig verfeinern\nlassen möchtest, frag doch einfach\nmeinen Mann hier drüben!\n<0x10009:0x000c0000>Der Gute mag zwar wie ein Hänfling\naussehen, aber beim Windelwechseln\nund Tränkebrauen macht ihm niemand\netwas vor!")
          								flw_7:
/*<  7>*/ 								zone_temp_flags[2 /* 0x1 04 */] = true;
          							  case 1:
/*<  3>*/ 								printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x000c0b0e>Das trifft sich gut! Ich habe nämlich \nsowieso schon genug zu tun. Aber für\nso einen Prachtkerl wie dich würde ich\nmir immer Zeit nehmen!\n<0x10009:0x000d0000>Ach, übrigens! Wenn du einen Trank\ndurch Alchemie verfeinern lassen\nwillst, frag doch einfach meinen Mann\ndort drüben, ja?")
          								goto flw_7
          							}
          						  case 1:
/*<  1>*/ 							printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Oho! Willkommen, hübscher Junge!\nDas hier ist mein Trankladen!\n\n\nMeine Tränke wirken wahre Wunder,\nwenn du in Schwierigkeiten geraten\nsolltest! Soll ich dir noch etwas mehr\ndarüber erzählen?\n[1-]Klar![2]Nein...")
          							goto flw_2
          						}
          					  case 1:
/*<107>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 106, 'param3': 31}
/*<106>*/ 						printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00000001>Hör gut zu, mein Lieber! Ich habe ein\nneues Rezept fertiggestellt!\n\n\nIch nenne dieses Wundergebräu den\n<color yellow<Ausdauertrank>coloroff>! Na, klingt das nicht\neinfach großartig?\n\nWenn du diesen Trank zu dir nimmst,\nverringert sich deine <color blue<Ausdaueranzeige\n>coloroff>für eine gewisse Zeit langsamer.\n\nZugegeben, dieser Trank ist ein wenig\nteuer, aber dafür einfach unglaublich\npraktisch, das musst du zugeben!\n\nStelle dich wie immer einfach davor\nund sprich mich an, wenn du eine\nFlasche davon kaufen willst.")
/*<108>*/ 						scene_flags[0 'Skyloft'][85 /* 0xB 20 */] = true;
/*<131>*/ 						zone_temp_flags[2 /* 0x1 04 */] = true;
          					}
          				  case 1:
          					goto flw_6
          				}
          			  case 1:
/*<128>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 31}
/*<129>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000001>Ich habe einen neuen Trank im\nAngebot, mein Lieber!\n\n\nIch nenne ihn <color yellow<Lufttrank>coloroff>!\n\n\n\nDieser Trank sorgt dafür, dass sich\nunter Wasser deine <color blue<Luftanzeige>coloroff> ein\nwenig langsamer leert. Das ist doch\nwirklich praktisch, oder?\nWähle ihn aus, wenn du ihn kaufen\nwillst. Du weißt ja schon, wie das geht.")
/*<130>*/ 				story_flags[1075 /* us: 805A9B50 0x02, jp: 805ACDD0 0x02 */] = true;
/*<132>*/ 				zone_temp_flags[2 /* 0x1 04 */] = true;
          			}
          		  case 1:
          			goto flw_105
          		}
          	  case 1:
/*< 52>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 39, 'param3': 31}
/*< 39>*/ 		printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00000002>Willkommen im Trankladen,\nmein Hübscher!\n\n\nWenn du verletzt wirst, wirkt mein\nHerztrank wahre Wunder! Kaum\ngetrunken, füllen sich deine Herzen\nwieder auf! Na, was sagst du?\n<0x10009:0x000d0700>Du gehörst doch zu den Rittern, nicht\nwahr? Einer wie du sollte auf jeden\nFall immer einen dieser Tränke bei\nsich tragen! ")
/*< 42>*/ 		printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x000c0b06>Du<0x10006:0xfccd>...<0x10006:0x00cd> hast ja gar keine leere Flasche!\n\n\n\nIch kann dir leider nur einen Trank\nverkaufen, wenn du eine Flasche hast,\nin die du ihn füllen kannst.\n\n<0x10009:0x0009090b>Aber weil du es bist, schenke ich dir\neine, mein Hübscher!\n\n\n<0x10009:0x00070700>Neben unseren Tränken kannst du auch\nallerhand andere Dinge in die Flasche\nfüllen, also pass mir ja gut darauf auf!")
/*< 45>*/ 		check_item_flag(112, 1)
/*< 46>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 16}) {
          		  case 0:
/*< 59>*/ 			switch (is_adventure_pouch_full()) {
          			  case 0:
/*< 60>*/ 				printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x000c0b08>Mein Schatz, du hast ja gar keinen\nPlatz in deiner Tasche! Was trägst\ndu denn da alles mit dir herum?\n\n<0x10009:0x000a0a00>Bring doch was davon ins Item-Lager,\num ein wenig Platz zu schaffen!")
          			  case 1:
/*< 44>*/ 				give_item(153 0x99);
/*< 41>*/ 				story_flags[35 /* us: 805A9ADD 0x08, jp: 805ACD5D 0x08 */] = true;
/*< 96>*/ 				switch (scene_flags[89 /* 0xA 02 */]) {
          				  case 0:
/*< 43>*/ 					printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x000d070b>Ich gebe die Flasche gleich in deine\nAbenteurertasche. Drücke (-), um\neinen Blick darauf zu werfen.<0x10011:0x02cd>")
/*<114>*/ 					printf(/* textboxtype: 1, unk: 0, line: 8 */ "Wenn deine Tasche so voll ist, dass du\nnichts mehr tragen kannst, kannst du\ndeine Items im Item-Lager abgeben\nund aufbewahren lassen!\n<0x10009:0x000c070b>Aber genug der Erklärungen. Willst\ndu nicht etwas kaufen?")
          					goto flw_7
          				  case 1:
/*< 97>*/ 					printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x000d070b>Ich gebe die Flasche gleich in deine\nAbenteurertasche. Drücke (-), um\neinen Blick darauf zu werfen.<0x10011:0x02cd>\n\nHalte (-) gedrückt und <color green<bewege >coloroff>deine\nWii-Fernbedienung <color green<im Kreis>coloroff>, um ein\nItem zu markieren.<0x10011:0x02cd>\n\n<color green<Lasse>coloroff> (-) <color green<los>coloroff>, wenn sich der Zeiger auf\ndem gewünschten Item befindet, um es\nauszuwählen.<0x10011:0x02cd>")
/*<115>*/ 					printf(/* textboxtype: 1, unk: 0, line: 8 */ "Wenn deine Tasche so voll ist, dass du\nnichts mehr tragen kannst, kannst du\ndeine Items im Item-Lager abgeben\nund aufbewahren lassen!\n<0x10009:0x000c070b>Aber genug der Erklärungen. Willst\ndu nicht etwas kaufen?")
/*< 98>*/ 					story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
/*<111>*/ 					scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
          				}
          			}
          		  case 1:
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "")
          		}
          	}
          }

          void entrypoint_106_53() {
/*< 79>*/ 	start()
/*<112>*/ 	switch (context_related2(0)) {
          	  case 0:
/*< 81>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "Wenn ich noch einen deiner Tränke\nverfeinern soll, sag mir bitte Bescheid.")
/*< 80>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<113>*/ 		printf(/* textboxtype: 1, unk: 0, line: 40 */ "Oh, du hast keine Tränke mehr, die ich\nverfeinern könnte. Wende dich einfach\nan meine Frau <color blue<Xia>coloroff>, wenn du neue\nTränke kaufen möchtest.")
          	}
          }

          void entrypoint_106_70() {
/*<133>*/ 	start()
/*<136>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 134, 'param3': 12}
/*<134>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x0000000a>Es tut mir sehr leid, aber damit ich\ndiesen Trank verfeinern kann, brauche\nich noch mehr <color yellow<Phiro-Hüpfer>coloroff>.\n\nLaut unseren Legenden leben sie in\neinem Land voll saftigem Grün...")
          	flw_137:
/*<137>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00070000>Wie... wäre es denn mit einem\nanderen Trank?")
/*<135>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_54() {
/*< 82>*/ 	start()
/*<101>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 84, 'param3': 12}
/*< 84>*/ 	printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x0000000a>Oh, ich sehe gerade, dass du nicht die\nbenötigten Zutaten für das Verfeinern\ndieses Trankes hast... Es tut mir leid.\n\nSoll ich vielleicht einen anderen Trank\nfür dich verfeinern?")
/*< 87>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_71() {
/*<138>*/ 	start()
/*<140>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 139, 'param3': 12}
/*<139>*/ 	printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x0000000a>Es tut mir sehr leid, aber damit ich\ndiesen Trank verfeinern kann, brauche\nich noch mehr <color yellow<Phiro-Riesenkäfer>coloroff>.\n\nLaut unseren Legenden leben sie in\neinem grünen Land voller Bäume...")
          	goto flw_137
          }

          void entrypoint_106_55() {
/*< 83>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x0000000a>Huch! Du hast ja gar nicht genug\nRubine, um diesen Trank verfeinern\nzu lassen. Das ist aber schade...")
/*<102>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 86, 'param3': 12}
/*< 86>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_72() {
/*<141>*/ 	start()
/*<143>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 12}
/*<142>*/ 	printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x0000000a>Es tut mir sehr leid, aber damit ich\ndiesen Trank verfeinern kann, brauche\nich noch mehr <color yellow<Deku-Bienen>coloroff>.\n\nLaut unseren Legenden leben sie in\neinem grünen Land voller Bäume und\nbauen dort ihre Nester...")
          	goto flw_137
          }

          void entrypoint_106_56() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x0000000a>Oh, du kannst leider keinen Trank\nverfeinern lassen, weil du... Na ja,\nweil du gar keinen Trank besitzt!\nÄhem...\n<0x10009:0x00090900>Schau doch mal bei meiner lieben Frau\n<color blue<Xia>coloroff> vorbei, wenn du Tränke kaufen\nwillst, ja?")
          }

          void entrypoint_106_73() {
/*<144>*/ 	start()
/*<146>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 145, 'param3': 12}
/*<145>*/ 	printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x0000000a>Es tut mir sehr leid, aber damit ich\ndiesen Trank verfeinern kann, brauche\nich noch mehr <color yellow<Himmelsanbeterinnen>coloroff>.\n\nMan findet sie sehr zahlreich hier im\nWolkenhort.")
          	goto flw_137
          }

          void entrypoint_106_05() {
/*< 30>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x000a0a08>Du hast ja gar keine leere <color red<Flasche>coloroff>, in\ndie ich den Trank einfüllen könnte,\nmein Lieber...\n\nKomm wieder, wenn du eine leere\nFlasche hast, ja?")
          }

          void entrypoint_106_74() {
/*<147>*/ 	start()
/*<150>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 148, 'param3': 12}
/*<148>*/ 	printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x0000000a>Es tut mir sehr leid, aber damit ich\ndiesen Trank verfeinern kann, brauche\nich noch mehr <color yellow<Magmarienkäfer>coloroff>.\n\nLaut unseren Legenden leben sie auf\neinem in Flammen gehüllten Berg...")
          	flw_151:
/*<151>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00070000>Wie... wäre es denn mit einem\nanderen Trank?")
/*<149>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_06() {
/*< 31>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x000c0b08>Du hast ja gar nicht genügend Rubine,\num diesen Trank zu kaufen, mein Herz!\n\n\nSo schnuckelig ich dich auch finde,\naber als Geschäftsfrau kann ich da\nleider keine Ausnahme machen.\n\n<0x10009:0x000a0a00>Komm wieder, wenn du ein paar\nRubine mehr in deiner Geldbörse\nhast, ja?")
          }

          void entrypoint_106_75() {
/*<152>*/ 	start()
/*<154>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 153, 'param3': 12}
/*<153>*/ 	printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x0000000a>Es tut mir sehr leid, aber damit ich\ndiesen Trank verfeinern kann, brauche\nich noch mehr <color yellow<Himmelsfalter>coloroff>.\n\nMan findet sie für gewöhnlich hier im\nWolkenhort. Sie schwirren überall hier\nim Dorf herum.")
          	goto flw_151
          }

          void entrypoint_106_07() {
/*< 32>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x0009090a>Vielen Dank! Und vergiss nicht, wenn\ndu diesen Trank verfeinern möchtest,\nwende dich an meinen Mann!")
          }

          void entrypoint_106_76() {
/*<155>*/ 	start()
/*<157>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 156, 'param3': 12}
/*<156>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x0000000a>Es tut mir sehr leid, aber damit ich\ndiesen Trank verfeinern kann, brauche\nich noch mehr <color yellow<Ranelle-Ameisen>coloroff>.\n\nLaut unseren Legenden leben sie in\nGruppen in einem Land voll Sand...")
          	goto flw_151
          }

          void entrypoint_106_08() {
/*< 33>*/ 	start()
/*< 77>*/ 	switch (random(2)) {
          	  case 0:
/*< 76>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x000a0a0e>Was soll denn das? Treib es ja nicht zu\nweit, junger Freund!")
          	  case 1:
/*< 37>*/ 		printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x000c0b10>Du hast es dir anders überlegt? Oh...\nManche meiner Tränke mögen ja\nein wenig seltsam riechen, aber ihre\ngute Wirkung ist unbestritten!")
          	}
          }

          void entrypoint_106_77() {
/*<158>*/ 	start()
/*<160>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 159, 'param3': 12}
/*<159>*/ 	printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x0000000a>Es tut mir sehr leid, aber damit ich\ndiesen Trank verfeinern kann, brauche\nich noch mehr <color yellow<Sandzikaden>coloroff>.\n\nLaut unseren Legenden leben sie in\neinem Land voll Sand...")
          	goto flw_151
          }

          void entrypoint_106_78() {
/*<161>*/ 	start()
/*<164>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 162, 'param3': 12}
/*<162>*/ 	printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x0000000a>Es tut mir sehr leid, aber damit ich\ndiesen Trank verfeinern kann, brauche\nich noch mehr <color yellow<Gerudo-Libellen>coloroff>.\n\nLaut unseren Legenden leben sie in\neinem sandigen Land und verstecken\nsich im Gras... oder so ähnlich.")
          	flw_165:
/*<165>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00070000>Wie... wäre es denn mit einem\nanderen Trank?")
/*<163>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_79() {
/*<166>*/ 	start()
/*<168>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 167, 'param3': 12}
/*<167>*/ 	printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x0000000a>Es tut mir sehr leid, aber damit ich\ndiesen Trank verfeinern kann, brauche\nich noch mehr <color yellow<Eldin-Skarabäen>coloroff>.\n\nLaut unseren Legenden leben sie auf\neinem in Flammen gehüllten Berg...")
          	goto flw_165
          }

          void entrypoint_106_80() {
/*<169>*/ 	start()
/*<171>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 170, 'param3': 12}
/*<170>*/ 	printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x0000000a>Es tut mir sehr leid, aber damit ich\ndiesen Trank verfeinern kann, brauche\nich noch mehr <color yellow<Wolken-Hirschkäfer>coloroff>.\n\nMan findet sie für gewöhnlich hier im\nWolkenhort.")
          	goto flw_165
          }

          void entrypoint_106_81() {
/*<172>*/ 	start()
/*<174>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 173, 'param3': 12}
/*<173>*/ 	printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x0000000a>Es tut mir sehr leid, aber damit ich\ndiesen Trank verfeinern kann, brauche\nich noch mehr <color yellow<Wolken-Glühwürmchen>coloroff>.\n\nMan findet sie für gewöhnlich nachts\nim Wolkenhort, aber es ist nicht so\neinfach, sie zu erwischen.")
          	goto flw_165
          }

          void entrypoint_106_31() {
/*< 10>*/ 	start()
/*< 48>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 9, 'param3': 12}
/*<  9>*/ 	check_item_flag(153, 1)
/*<  8>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 4}) {
          	  case 0:
/*< 38>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000001>Das hier ist ein <color yellow<Herztrank>coloroff>! Er füllt\nsage und schreibe ganze 8 Herzen auf!\n\n\nOhne solch einen Trank würde ich\nmich nicht ins Abenteuer stürzen.\nEine Flasche davon kostet nur\n<color red<20 Rubine>coloroff>. Was sagst du dazu?\n[1-]Her damit![2]Nein, danke.")
          		goto flw_11
          	  case 1:
/*< 23>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00090702>Hallo, mein Schöner!\n\n\n\n<0x10009:0x000c0b00>Oh... Du hast ja gar keine leere Flasche\ndabei? Ohne leere Flasche gibt es\nkeinen Trank, das weißt du doch!\n\n<0x10009:0x000d0700>Wenn du willst, erkläre ich dir das\nnoch einmal genauer.")
          	}
          }

          void entrypoint_106_32() {
/*< 16>*/ 	start()
/*< 15>*/ 	check_item_flag(153, 1)
/*< 14>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          	  case 0:
/*<124>*/ 		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          		  case 0:
/*< 49>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 24, 'param3': 12}
/*< 24>*/ 			printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00000004>Das hier ist ein <color yellow<Lufttrank>coloroff>! Wenn du so\neinen trinkst, nimmt deine <color blue<Luftanzeige\n>coloroff>unter Wasser eine gewisse Zeit deutlich\nlangsamer ab!\nEine Flasche davon kostet läppische\n<color red<20 Rubine>coloroff>. Was sagst du dazu?\n[1-]Sehr gern![2]Kein Bedarf.")
          			goto flw_11
          		  case 1:
/*<125>*/ 			printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x000c0b04>An dem Rezept für diesen Trank\narbeite ich noch, mein Guter. Warte\ndoch, bis es fertig ist, ja?\n\n<0x10009:0x00090700>Oh, und sieh dir bei Gelegenheit meine\nanderen Tränke an!")
          		}
          	  case 1:
/*< 27>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00090702>Hallo, mein Schöner!\n\n\n\n<0x10009:0x000c0b00>Oh... Du hast ja gar keine leere Flasche\ndabei? Ohne leere Flasche gibt es\nkeinen Trank, das weißt du doch!\n\n<0x10009:0x000d0700>Wenn du willst, erkläre ich dir das\nnoch einmal genauer.")
          	}
          }

          void entrypoint_106_33() {
/*< 19>*/ 	start()
/*< 18>*/ 	check_item_flag(153, 1)
/*< 17>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 10}) {
          	  case 0:
/*<103>*/ 		switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          		  case 0:
/*< 50>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 25, 'param3': 12}
/*< 25>*/ 			printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x0000000b>Das hier ist mein <color yellow<Ausdauertrank>coloroff>!\nWenn du ihn trinkst, nimmt deine\n<color blue<Ausdaueranzeige>coloroff> eine gewisse Zeit\nlangsamer ab!\nEr ist etwas teurer, aber dafür umso\nnützlicher! Eine Flasche davon kostet\n<color red<50 Rubine>coloroff>. Was sagst du dazu?\n[1-]Den nehme ich![2]Nein, danke.")
          			goto flw_11
          		  case 1:
/*<104>*/ 			printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x000c0b04>Dieser Trank hier bewirkt, dass deine\n<color blue<Ausdaueranzeige >coloroff>nicht mehr abnimmt.\n\n\nLeider ist das Rezept noch nicht ganz\nausgereift. Komm doch ein klein wenig\nspäter wieder!\n\n<0x10009:0x00090700>Oh, und schau dir in der Zwischenzeit\ndoch meine anderen Tränke an, ja?")
          		}
          	  case 1:
/*< 28>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00090702>Hallo, mein Schöner!\n\n\n\n<0x10009:0x000c0b00>Oh... Du hast ja gar keine leere Flasche\ndabei? Ohne leere Flasche gibt es\nkeinen Trank, das weißt du doch!\n\n<0x10009:0x000d0700>Wenn du willst, erkläre ich dir das\nnoch einmal genauer.")
          	}
          }

          void entrypoint_106_50() {
/*< 61>*/ 	start()
/*< 88>*/ 	zone_temp_flags[4 /* 0x1 10 */] = false;
/*<181>*/ 	switch (zone_temp_flags[7 /* 0x1 80 */]) {
          	  case 0:
          		flw_116:
/*<116>*/ 		switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          		  case 0:
/*<118>*/ 			check_item_flag(71, 1)
/*<119>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 44}) {
          			  case 0:
          				flw_62:
/*< 62>*/ 				printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00000001>Willkommen im Trankladen.\n\n\n\nWenn du bei uns einen Trank gekauft\nhast, kann ich ihn hier verfeinern und\nseine Wirkung verbessern.\n\n<0x10009:0x00070700>Ähm... Gibt es einen Trank, den du\nverfeinert haben möchtest?\n[1-]Ja, hier![2]Im Moment\nnicht.")
/*< 63>*/ 				switch (choice(2)) {
          				  case 0:
/*< 94>*/ 					switch (context_related2(0)) {
          					  case 0:
/*< 66>*/ 						printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000003>Ich zeige dir, welche deiner Tränke ich\nverfeinern kann...")
/*< 64>*/ 						make_actor_do_something(0, 0)
          					  case 1:
/*< 95>*/ 						printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x0000000a>Oh, du kannst leider keinen Trank\nverfeinern lassen, weil du... Na ja,\nweil du gar keinen Trank besitzt!\nÄhem...\n<0x10009:0x00090900>Schau doch mal bei meiner lieben Frau\n<color blue<Xia>coloroff> vorbei, wenn du Tränke kaufen\nwillst, ja?")
          					}
          				  case 1:
/*< 67>*/ 					printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x000a0a06>Ich verstehe. Komm jederzeit wieder,\nwenn du meine Dienste in Anspruch\nnehmen möchtest...")
          				}
          			  case 1:
/*<121>*/ 				switch (zone_temp_flags[6 /* 0x1 40 */]) {
          				  case 0:
/*<123>*/ 					printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000001>Besuche <color red<Terris Laden>coloroff>, falls du ein\n<color yellow<Schmetterlingsnetz>coloroff> zum Einfangen\nvon Insekten erwerben möchtest.\n\nTerris Laden fliegt meist hier über\ndem Basar.\n\n\n<color green<Sieh dich >coloroff>einfach am Himmel <color green<um>coloroff>, dann\nwirst du ihn bestimmt schnell finden!")
          				  case 1:
/*<117>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 120, 'param3': 31}
/*<120>*/ 					printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00000001>Oh... Ähem, hallo! Willkommen im\nwunderbaren Trankladen.\n\n\nIch bin dafür zuständig, deine Tränke\nzu verfeinern.\n\n\n<0x10009:0x00000007>Ich benötige jedoch Insekten zum\nVerfeinern der Tränke.\n\n\nBesuche <color red<Terris Laden>coloroff>, falls du ein\n<color yellow<Schmetterlingsnetz>coloroff> zum Einfangen\nvon Insekten erwerben möchtest.\n\n<0x10009:0x00070708>Terris Laden fliegt meist hier über dem\nBasar. <color green<Sieh dich >coloroff>einfach ein wenig am\nHimmel <color green<um>coloroff>, dann wirst du ihn ganz\nbestimmt schnell entdecken...")
/*<122>*/ 					zone_temp_flags[6 /* 0x1 40 */] = true;
          				}
          			}
          		  case 1:
          			goto flw_62
          		}
          	  case 1:
/*<176>*/ 		switch (story_flags[386 /* us: 805A9B0D 0x10, jp: 805ACD8D 0x10 */]) {
          		  case 0:
/*<175>*/ 			switch (story_flags[387 /* us: 805A9B0D 0x20, jp: 805ACD8D 0x20 */]) {
          			  case 0:
          				goto flw_116
          			  case 1:
/*<177>*/ 				check_item_flag(160, 1)
/*<178>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 58}) {
          				  case 0:
/*<182>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 179, 'param3': 31}
/*<179>*/ 					printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00000001>W-w-willkommen!\nWas? Du willst mir etwas zeigen?\n\n\nTut mir wirklich sehr leid, aber ich\narbeite gerade. Komm doch mal <color red<nachts>coloroff>\nbei mir zuhause vorbei, wenn es dir\nnichts ausmacht.\nBis dann!")
/*<180>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				  case 1:
          					goto flw_116
          				}
          			}
          		  case 1:
/*<183>*/ 			switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          			  case 0:
/*<186>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 184, 'param3': 31}
/*<184>*/ 				printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00000001>W-w-willkommen!\n<0x10006:0xfbcd>...<0x10006:0x00cd><0x10009:0x000a0a06>Ach...\n\n\n<0x10009:0x00ffff00>Es tut mir leid, dass ich hier so vor\nmich hin seufze... Ich bekomme nur\n<color red<nachts>coloroff> keinen Schlaf mehr.\n\nNein, ich sollte mich vor den Kunden\nnicht beschweren, tut mir leid.\n\n\nWeiter geht's...")
/*<185>*/ 				zone_temp_flags[7 /* 0x1 80 */] = true;
          				goto flw_116
          			  case 1:
          				goto flw_116
          			}
          		}
          	}
          }

