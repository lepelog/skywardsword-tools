          void entrypoint_121_02() {
/*<102>*/ 	start()
/*<103>*/ 	printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x00150c09>Achtung! Du solltest diese Truhe dort\nbesser nicht öffnen. Darin befindet...\nsich etwas sehr Gefährliches.\n[1-]Was denn?[2-]Ich will aber!")
/*<104>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_106:
/*<106>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00130800>Nun... Darin befindet sich die wohl\nfurchterregendste Medaille, die es\ngibt. Die <color yellow<Dämonen-Medaille>coloroff>.\n\nTrägst du sie bei dir, wirst du auf\ndeinen Reisen viel mehr Rubine\nfinden als zuvor.\n\n<0x10009:0x00150c00>Auch Schätze werden dann leichter zu\nfinden sein! <0x10009:0x00140a00>Doch im Gegenzug... Oh...\n[1-]Wie schön![2-]Und weiter?")
/*<108>*/ 		switch (choice(2)) {
          		  case 0:
/*<109>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00130800>Nun, wenn du es dir nur bis hierhin\nanhörst, verstehe ich schon, dass es\nsehr verlockend klingt...")
          			flw_107:
/*<107>*/ 			printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x00150c00>Das Schreckliche daran kommt\nerst noch!\n\n\n<0x10009:0x00140a00>Wenn du diese Medaille bei dir trägst,\nkannst du deine <color red<Tasche nicht mehr\nöffnen>coloroff>!\n\nUnd das bedeutet, du kannst auch keine\nHerztränke mehr zu dir nehmen und\ndeinen Schild nicht mehr einsetzen!\n\n<0x10009:0x00150c00>Verstehst du nun, was ich vorhin mit\n„furchterregend“ meinte? Ich bitte\ndich, öffne diese Truhe nicht!")
/*<110>*/ 			scene_flags[0 'Skyloft'][84 /* 0xB 10 */] = true;
          		  case 1:
          			goto flw_107
          		}
          	  case 1:
/*<105>*/ 		printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x00130800>Ich sagte doch, öffne sie besser nicht!")
          		goto flw_106
          	}
          }

          void entrypoint_121_20() {
/*<  1>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000003>Oh! Hilfe! Nicht schlagen! Bitte,\nverschone mich!\n\n\nIch mag furchteinflößend aussehen,\naber ich bin kein Unhold!")
/*< 66>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2560, 'next': 114, 'param3': 13}
/*<114>*/ 	make_actor_do_something(2, 0)
/*<  4>*/ 	printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00000005>Lass mich dir zuerst etwas erklären...\n\n\n\nMein Name ist <color blue<Morsego>coloroff>, und wie du ja\nsehen kannst, bin ich ein Dämon. Ich\nwohne hier im Wolkenhort.\n\nAber ich tue keiner Seele etwas zuleide,\nund Kindesentführung liegt mir fern!\n\n\nIm Gegenteil, dieses kleine Mädchen\nist die einzige, die keine Angst vor mir\nhat...\n\nDie Tatsache, dass sie mit mir Zeit\nverbringt, ist wie ein Geschenk für\nmich.\n\nIch wäre ja so gerne mit den Menschen\nhier im Dorf befreundet, doch leider\nfürchten sich alle aufgrund meines\ndämonischen Aussehens vor mir...")
/*< 75>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 2048, 'next': 72, 'param3': 13}
/*< 72>*/ 	printf(/* textboxtype: 1, unk: 0, line: 2 */ "Dabei würde ich mich wirklich gerne\nmit den Menschen anfreunden.\n\n\nAber ich fürchte, dass mein Aussehen\nsie immer wieder in die Flucht treiben\nwird... Es ist eine Tragödie!\n\nHm, obwohl... Es gibt da allerdings\neine Legende, die man sich unter\nDämonen erzählt...")
/*< 76>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3077, 'next': 73, 'param3': 13}
/*< 73>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "In ihr ist von den <color yellow<Juwelen der Güte\n>coloroff>die Rede, die man erhält, wenn man\nden Menschen eine Freude bereitet.")
/*< 77>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2572, 'next': 74, 'param3': 13}
/*< 74>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ "Mit einer großen Anzahl dieser\n<color yellow<Juwelen der Güte>coloroff> soll es möglich\nsein, sich von einem Dämon in\neinen Menschen zu verwandeln!")
/*< 78>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 115, 'param3': 13}
/*<115>*/ 	make_actor_do_something(3, 0)
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00000007>Ich habe einen Entschluss gefasst!\nIch möchte ein Mensch werden!\n\n\nJunger Edelmann, ich habe das Gefühl,\ndass du ein Mann reinen Herzens und\nvoller Güte bist.")
/*< 79>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 2048, 'next': 116, 'param3': 13}
/*<116>*/ 	make_actor_do_something(4, 0)
/*< 80>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "Aus diesem Grund würde ich dich gerne\nbitten, für mich die <color yellow<Juwelen der Güte\n>coloroff>zu sammeln. Würdest du das für mich\ntun?\n[1-]Sehr gern![2]Eher nicht.")
/*<  5>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_82:
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3086, 'next': 117, 'param3': 13}
/*<117>*/ 		make_actor_do_something(5, 0)
/*<  8>*/ 		printf(/* textboxtype: 1, unk: 0, line: 8 */ "Tatsächlich?!?")
/*<118>*/ 		make_actor_do_something(6, 0)
/*<113>*/ 		printf(/* textboxtype: 1, unk: 0, line: 9 */ "Ich habe gehört, wenn man Menschen\nhilft, ihre Probleme zu lösen, erhält\nman die<color yellow< Juwelen der Güte>coloroff>!")
/*< 84>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2572, 'next': 83, 'param3': 13}
/*< 83>*/ 		printf(/* textboxtype: 1, unk: 0, line: 10 */ "Manchmal erscheinen sie auch an\nOrten, an denen sich viele Menschen\nversammeln, überall im Wolkenmeer.\n\nAuch der Wolkenhort ist solch ein Ort.\nOh, das reimt sich!\n\n\nIch habe dich, der du ein reines Herz\nhast, verzaubert, sodass du von nun an\ndie <color yellow<Juwelen der Güte>coloroff> <color green<sehen kannst>coloroff>.\n\nDer Zauber wirkt jedoch nur <color red<nachts>coloroff>.\nSuche die im Wolkenmeer verteilten\nJuwelen der Güte also stets in der\n<color red<Nacht>coloroff>.")
/*< 86>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3079, 'next': 85, 'param3': 13}
/*< 85>*/ 		printf(/* textboxtype: 1, unk: 0, line: 11 */ "Ich werde dich selbstverständlich reich\ndafür belohnen, das steht außer Frage!")
/*<  2>*/ 		story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */] = true;
/*< 65>*/ 		scene_flags[0 'Skyloft'][78 /* 0x8 40 */] = true;
/*< 11>*/ 		switch (story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */]) {
          		  case 0:
/*< 12>*/ 			story_flags[370 /* us: 805A9B02 0x01, jp: 805ACD82 0x01 */] = true;
          			flw_167:
/*<167>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
          			goto flw_167
          		}
          	  case 1:
          		flw_81:
/*< 81>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2572, 'next': 6, 'param3': 13}
/*<  6>*/ 		printf(/* textboxtype: 1, unk: 0, line: 7 */ "Bitte... Ich flehe dich an...\n[1-]Also gut...[2]Nein bleibt\nNein!")
/*<  7>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_82
          		  case 1:
          			goto flw_81
          		}
          	}
          }

          void entrypoint_121_03() {
/*<152>*/ 	start()
/*<158>*/ 	switch (story_flags[1091 /* us: 805A9B52 0x02, jp: 805ACDD2 0x02 */]) {
          	  case 0:
/*<159>*/ 		printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00000a07>Ich habe allen Menschen hier Kummer\nund Sorgen bereitet... Ich muss sagen,\ndas nagt immer noch ein wenig an mir.\n\nDoch jetzt bin ich ein anerkannter\nBürger des Wolkenhorts und führe ein\nneues Leben! Ich kann dir gar nicht\nsagen, wie dankbar ich bin!")
          	  case 1:
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00000005>Hallo, <heroname>.\nIch bin ja nicht so häufig draußen\nunterwegs, aber mir scheint, als\nwären alle Monster verschwunden.\nOb dies wohl damit zusammenhängt,\ndass ich zum Menschen wurde?\n[1-]Vielleicht.[2-]Das denke\nich nicht.")
/*<154>*/ 		switch (choice(2)) {
          		  case 0:
/*<155>*/ 			printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00000856>Oh, du denkst also auch so...")
          			flw_157:
/*<157>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00080800>Als ich ein Dämon war, ging von mir\neine bösartige Energie aus...\n\n\nUnd diese Energie verschwand, als\nich zum Menschen wurde.\n\n\n<0x10009:0x00150a07>Jetzt ist es hier im Wolkenhort sicher\nund ruhig. Und all das habe ich nur dir\nzu verdanken!")
/*<160>*/ 			story_flags[1091 /* us: 805A9B52 0x02, jp: 805ACDD2 0x02 */] = true;
          		  case 1:
/*<156>*/ 			printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00000814>Ach, du kannst ruhig ehrlich sein...")
          			goto flw_157
          		}
          	}
          }

          void entrypoint_121_30() {
/*<  9>*/ 	start()
/*<111>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*<112>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x00130808>Oh, du hast die Truhe also doch\ngeöffnet!\n\n\nDie Gier der Menschen ist eine sehr\ngefährliche Macht... Aber genau das\nmacht die Menschen so interessant!\n\nSolltest du deine Tasche doch wieder\nöffnen wollen, bringe die Medaille\ndoch einfach ins <color blue<Item-Lager>coloroff>.")
          	  case 1:
/*<120>*/ 		switch (story_flags[583 /* us: 805A9B1B 0x40, jp: 805ACD9B 0x40 */]) {
          		  case 0:
/*<121>*/ 			story_flags[734 /* us: 805A9B27 0x40, jp: 805ACDA7 0x40 */] = true;
          			flw_13:
/*< 13>*/ 			switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          			  case 0:
/*<125>*/ 				switch (scene_flags[79 /* 0x8 80 */]) {
          				  case 0:
/*<126>*/ 					printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x000a0c05>Ich danke dir von Herzen! Nun kann\nich endlich ohne Sorgen durch den\nWolkenhort stolzieren!")
          				  case 1:
/*< 95>*/ 					{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 3072, 'next': 17, 'param3': 13}
/*< 17>*/ 					printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00000005>Was sagst du? Du hast wohl für einen\nMoment gar nicht gewusst, wer ich bin!")
/*< 96>*/ 					{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 97, 'param3': 13}
/*< 97>*/ 					printf(/* textboxtype: 1, unk: 0, line: 38 */ "Ich habe auch das Gefühl, dass ich gar\nnicht mehr ich selbst bin!")
/*<124>*/ 					scene_flags[0 'Skyloft'][79 /* 0x8 80 */] = true;
          				}
          			  case 1:
/*< 39>*/ 				switch (scene_flags[70 /* 0x9 40 */]) {
          				  case 0:
/*< 41>*/ 					switch (scene_flags[71 /* 0x9 80 */]) {
          					  case 0:
/*< 46>*/ 						switch (scene_flags[72 /* 0x8 01 */]) {
          						  case 0:
/*< 52>*/ 							switch (scene_flags[73 /* 0x8 02 */]) {
          							  case 0:
/*< 55>*/ 								switch (scene_flags[74 /* 0x8 04 */]) {
          								  case 0:
/*< 58>*/ 									switch (scene_flags[75 /* 0x8 08 */]) {
          									  case 0:
/*< 35>*/ 										switch (context_related2(6)) {
          										  case 0:
/*< 98>*/ 											{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3083, 'next': 36, 'param3': 13}
/*< 36>*/ 											printf(/* textboxtype: 1, unk: 0, line: 40 */ "Du hast die gesamte <color yellow<Güte>coloroff> der Leute\nhier gesammelt und mir dargebracht.\n\n\n<0x10009:0x00070807>Ich danke dir von ganzem Herzen!\nIch bin dir auf ewig verpflichtet!\n\n\nDies ist mein letztes Geschenk an dich.\nIch bitte dich, weise es nicht zurück!")
          											flw_166:
/*<166>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 37, 'param3': 12}
/*< 37>*/ 											give_item(111 0x6F);
/*< 20>*/ 											printf(/* textboxtype: 1, unk: 0, line: 36 */ "Es ist nichts Besonderes, aber ich\nhoffe, es wird dir auf deinem weiteren\nWeg nützlich sein...")
/*< 87>*/ 											{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 15, 'param3': 13}
/*< 15>*/ 											printf(/* textboxtype: 1, unk: 0, line: 29 */ "Oh! Diese Menge <color yellow<Juwelen der Güte\n>coloroff>sollte ausreichen, um ein Mensch zu\nwerden!\n\n<0x10009:0x00070809>Ich bin so aufgeregt! Ob es wohl\nwirklich funktioniert...")
/*<148>*/ 											scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          										  case 1:
/*< 62>*/ 											printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00000005>Ach, ich würde so gerne ein Mensch\nsein...\n\n\nBitte, sammle noch mehr <color yellow<Juwelen der\nGüte>coloroff> für mich! Komm wieder zu mir,\nwenn du<color red< 80 Stück>coloroff> gefunden hast!")
          										}
          									  case 1:
/*< 34>*/ 										switch (context_related2(5)) {
          										  case 0:
/*< 59>*/ 											printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00090d0b>Oooh! Du hast wirklich viele <color yellow<Juwelen\nder Güte >coloroff>für mich gesammelt!\n\n\n<0x10009:0x00070807>Ich bin sehr glücklich. Nimm dies als\nZeichen meiner Dankbarkeit.")
          											flw_127:
/*<127>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 161, 'param3': 12}
/*<161>*/ 											give_item(33 0x21);
/*<162>*/ 											printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00090d0b>Damit allein kann ich dir meine\nDankbarkeit jedoch nicht in vollem\nMaße ausdrücken...\n\n<0x10009:0x00070807>Ich schenke dir noch etwas!")
/*<163>*/ 											give_item(33 0x21);
/*< 60>*/ 											printf(/* textboxtype: 1, unk: 0, line: 24 */ "Ich benötige nur noch eine ganz kleine\nMenge mehr <color yellow<Juwelen der Güte>coloroff>, um ein\nMensch zu werden. Bitte, lass mich\njetzt nicht im Stich...")
/*< 61>*/ 											scene_flags[0 'Skyloft'][75 /* 0x8 08 */] = true;
/*<143>*/ 											switch (context_related2(6)) {
          											  case 0:
/*<144>*/ 												printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00090d0b>Oooh! Und ich spüre immer noch die\nwärmende Kraft der <color yellow<Juwelen der Güte>coloroff>!\n\n\n<color red<80>coloroff> Stück... Hast du tatsächlich so viele\n<color yellow<Juwelen der Güte>coloroff> für mich gesammelt?\n\n\n<0x10009:0x00070807>Vielen Dank! Oh, ich danke dir so sehr!\n\n\n\nNimm dies als letztes Geschenk für\ndeine großartige Hilfe.")
          												goto flw_166
          											  case 1:
/*<147>*/ 												scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          											}
          										  case 1:
/*< 57>*/ 											printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00000005>Ach, ich würde so gerne ein Mensch\nsein...\n\n\nBitte, sammle noch mehr <color yellow<Juwelen der\nGüte>coloroff> für mich! Komm wieder zu mir,\nwenn du<color red< 70 Stück>coloroff> gefunden hast!")
          										}
          									}
          								  case 1:
/*< 33>*/ 									switch (context_related2(4)) {
          									  case 0:
/*< 28>*/ 										printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00090d0b>Oooh! Du hast wirklich viele <color yellow<Juwelen\nder Güte >coloroff>für mich gesammelt!\n\n\n<0x10009:0x00070807>Ich bin sehr glücklich. Nimm dies als\nZeichen meiner Dankbarkeit.")
          										flw_165:
/*<165>*/ 										{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 12}
/*< 27>*/ 										give_item(110 0x6E);
/*< 29>*/ 										printf(/* textboxtype: 1, unk: 0, line: 24 */ "Ich benötige nur noch eine ganz kleine\nMenge mehr <color yellow<Juwelen der Güte>coloroff>, um ein\nMensch zu werden. Bitte, lass mich\njetzt nicht im Stich...")
/*< 56>*/ 										scene_flags[0 'Skyloft'][74 /* 0x8 04 */] = true;
/*<141>*/ 										switch (context_related2(5)) {
          										  case 0:
/*<142>*/ 											printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00090d0b>Oooh! Ich spüre die Wärme, die von\nden <color yellow<Juwelen der Güte>coloroff> ausgeht.\n\n\n<0x10009:0x00070807>Nimm dies als Zeichen meines Dankes\nfür all die Mühen, die du auf dich\ngenommen hast.")
          											goto flw_127
          										  case 1:
/*<146>*/ 											scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          										}
          									  case 1:
/*< 54>*/ 										printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000005>Ach, ich würde so gerne ein Mensch\nsein...\n\n\nBitte, sammle noch mehr <color yellow<Juwelen der\nGüte>coloroff> für mich! Komm wieder zu mir,\nwenn du<color red< 50 Stück>coloroff> gefunden hast!")
          									}
          								}
          							  case 1:
/*< 32>*/ 								switch (context_related2(3)) {
          								  case 0:
/*< 50>*/ 									printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00090d0b>Oooh! Du hast wirklich viele <color yellow<Juwelen\nder Güte >coloroff>für mich gesammelt!\n\n\n<0x10009:0x00070807>Ich bin sehr glücklich. Nimm dies als\nZeichen meiner Dankbarkeit.")
          									flw_164:
/*<164>*/ 									{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 49, 'param3': 12}
/*< 49>*/ 									give_item(33 0x21);
/*< 51>*/ 									printf(/* textboxtype: 1, unk: 0, line: 23 */ "Das ist eine ganze Menge <color yellow<Juwelen der\nGüte>coloroff>, die du da gesammelt hast.\n\n\nNur noch ein wenig mehr, und ich kann\nendlich ein Mensch werden...")
/*< 53>*/ 									scene_flags[0 'Skyloft'][73 /* 0x8 02 */] = true;
/*<139>*/ 									switch (context_related2(4)) {
          									  case 0:
/*<140>*/ 										printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00090d0b>Oooh! Ich spüre die Wärme, die von\nden <color yellow<Juwelen der Güte>coloroff> ausgeht.\n\n\n<0x10009:0x00070807>Nimm dies als Zeichen meines Dankes\nfür all die Mühen, die du auf dich\ngenommen hast.")
          										goto flw_165
          									  case 1:
/*<145>*/ 										scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          									}
          								  case 1:
/*< 48>*/ 									printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00000005>Ach, ich würde so gerne ein Mensch\nsein...\n\n\nBitte, sammle noch mehr <color yellow<Juwelen der\nGüte>coloroff> für mich! Komm wieder zu mir,\nwenn du <color red<40 Stück>coloroff> gefunden hast!")
          								}
          							}
          						  case 1:
/*< 31>*/ 							switch (context_related2(2)) {
          							  case 0:
/*< 25>*/ 								printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00090d0b>Oooh! Du hast wirklich viele <color yellow<Juwelen\nder Güte >coloroff>für mich gesammelt!\n\n\n<0x10009:0x00070807>Ich bin sehr glücklich. Nimm dies als\nZeichen meiner Dankbarkeit.")
          								flw_24:
/*< 24>*/ 								give_item(109 0x6D);
/*< 26>*/ 								printf(/* textboxtype: 1, unk: 0, line: 23 */ "Das ist eine ganze Menge <color yellow<Juwelen der\nGüte>coloroff>, die du da gesammelt hast.\n\n\nNur noch ein wenig mehr, und ich kann\nendlich ein Mensch werden...")
/*< 47>*/ 								scene_flags[0 'Skyloft'][72 /* 0x8 01 */] = true;
/*<137>*/ 								switch (context_related2(3)) {
          								  case 0:
/*<138>*/ 									printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00090d0b>Oooh! Ich spüre die Wärme, die von\nden <color yellow<Juwelen der Güte>coloroff> ausgeht.\n\n\n<0x10009:0x00070807>Nimm dies als Zeichen meines Dankes\nfür all die Mühen, die du auf dich\ngenommen hast.")
          									goto flw_164
          								  case 1:
/*< 99>*/ 									scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          								}
          							  case 1:
/*< 64>*/ 								printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000005>Ach, ich würde so gerne ein Mensch\nsein...\n\n\nBitte, sammle noch mehr <color yellow<Juwelen der\nGüte>coloroff> für mich! Komm wieder zu mir,\nwenn du <color red<30 Stück>coloroff> gefunden hast!")
          							}
          						}
          					  case 1:
/*< 30>*/ 						switch (context_related2(1)) {
          						  case 0:
/*< 43>*/ 							printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00090d0b>Oooh! Du hast wirklich viele <color yellow<Juwelen\nder Güte >coloroff>für mich gesammelt!\n\n\n<0x10009:0x00070807>Ich bin sehr glücklich. Nimm dies als\nZeichen meiner Dankbarkeit.")
          							flw_42:
/*< 42>*/ 							give_item(94 0x5E);
/*< 44>*/ 							printf(/* textboxtype: 1, unk: 0, line: 22 */ "Ich brauche leider noch mehr <color yellow<Juwelen\nder Güte>coloroff>, um endlich ein Mensch\nwerden zu können.\n\nBitte, sei so gnädig und hilf mir noch\nein wenig mehr...")
/*< 45>*/ 							scene_flags[0 'Skyloft'][71 /* 0x9 80 */] = true;
/*<135>*/ 							switch (context_related2(2)) {
          							  case 0:
/*<136>*/ 								printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00090d0b>Oooh! Ich spüre die Wärme, die von\nden <color yellow<Juwelen der Güte>coloroff> ausgeht.\n\n\n<0x10009:0x00070807>Nimm dies als Zeichen meines Dankes\nfür all die Mühen, die du auf dich\ngenommen hast.")
          								goto flw_24
          							  case 1:
          							}
          						  case 1:
/*< 40>*/ 							printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000005>Ach, ich würde so gerne ein Mensch\nsein...\n\n\nBitte, sammle noch mehr <color yellow<Juwelen der\nGüte>coloroff> für mich! Komm wieder zu mir,\nwenn du <color red<zehn Stück>coloroff> gefunden hast!")
          						}
          					}
          				  case 1:
/*< 63>*/ 					switch (context_related2(0)) {
          					  case 0:
/*< 22>*/ 						printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00090d0b>Oooh! Du hast wirklich viele <color yellow<Juwelen\nder Güte >coloroff>für mich gesammelt!\n\n\n<0x10009:0x00070807>Ich bin sehr glücklich. Nimm dies als\nZeichen meiner Dankbarkeit.")
/*< 21>*/ 						give_item(108 0x6C);
/*< 23>*/ 						printf(/* textboxtype: 1, unk: 0, line: 22 */ "Ich brauche leider noch mehr <color yellow<Juwelen\nder Güte>coloroff>, um endlich ein Mensch\nwerden zu können.\n\nBitte, sei so gnädig und hilf mir noch\nein wenig mehr...")
/*< 38>*/ 						scene_flags[0 'Skyloft'][70 /* 0x9 40 */] = true;
/*<133>*/ 						switch (context_related2(1)) {
          						  case 0:
/*<134>*/ 							printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00090d0b>Oooh! Ich spüre die Wärme, die von\nden <color yellow<Juwelen der Güte>coloroff> ausgeht.\n\n\n<0x10009:0x00070807>Nimm dies als Zeichen meines Dankes\nfür all die Mühen, die du auf dich\ngenommen hast.")
          							goto flw_42
          						  case 1:
          						}
          					  case 1:
/*<132>*/ 						switch (zone_temp_flags[1 /* 0x1 02 */]) {
          						  case 0:
          							flw_122:
/*<122>*/ 							switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          							  case 0:
/*< 14>*/ 								printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000005>Aaah, ich möchte so gerne ein Mensch\nwerden... Bitte, sammle für mich die\n<color yellow<Juwelen der Güte>coloroff>.\n\nFür den Anfang reichen <color red<fünf Stück>coloroff>.\nHilf jemandem, und du wirst sie schnell\nbeisammenhaben.")
          							  case 1:
/*<123>*/ 								printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00000005>Ich werde veranlassen, dass dieses\nMädchen schon morgen früh zu\nseiner Familie zurückkehrt.\n\nBitte richte den Eltern meine liebsten\nGrüße aus, und vergiss nicht, die\n<color yellow<Juwelen der Güte >coloroff>zu sammeln...\n\nFür den Anfang reichen wohl <color red<fünf\nStück>coloroff>. Hilf jemandem, und du wirst sie\nschnell zusammenhaben.")
          							}
          						  case 1:
/*<129>*/ 							check_item_flag(48, 1)
/*<128>*/ 							switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 46}) {
          							  case 0:
/*<130>*/ 								printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00000005>Oh! Genau danach suche ich! Das ist ja\nein <color yellow<Juwel der Güte>coloroff>!<pause 20> Ich wusste, dass\ndu schnell welche finden würdest.\n\nFür den Anfang wäre es nett, wenn du\nmir <color red<fünf Stück >coloroff>bringen könntest.\n\n\nWenn du nett zu den Menschen bist und\nihnen hilfst, wirst du ganz sicher viele\ndavon erhalten.")
/*<131>*/ 								zone_temp_flags[1 /* 0x1 02 */] = true;
          							  case 1:
          								goto flw_122
          							}
          						}
          					}
          				}
          			}
          		  case 1:
          			goto flw_13
          		}
          	}
          }

          void entrypoint_121_00() {
          	start()
/*< 70>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 35, 'next': 18, 'param3': 32}
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 1, line: 30 */ "<0x10009:0x0000000b>Was... Uaaah!<0x10005:0x003c0000>")
/*< 67>*/ 	make_actor_do_something(0, 0)
/*<119>*/ 	wait_frames(40)
/*< 68>*/ 	printf(/* textboxtype: 1, unk: 1, line: 31 */ "<0x10009:0x00000004><0x10008:0x02cd>Grrraaaaaaaaa!<0x10005:0x001e0000>")
/*< 69>*/ 	make_actor_do_something(1, 0)
/*< 71>*/ 	{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': -1, 'next': 88, 'param3': 16}
/*< 88>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8969, 'param2': 3072, 'next': 89, 'param3': 13}
/*< 89>*/ 	printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10006:0xfccd>...<0x10006:0x00cd> <0x10009:0x00000007>Nun, <heroname>?\nWie... sehe ich aus?")
/*< 90>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8968, 'param2': 2560, 'next': 91, 'param3': 13}
/*< 91>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "Du musst nichts sagen! Ich kann es an\ndeinem Gesicht ablesen.")
/*< 92>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8970, 'param2': 3072, 'next': 93, 'param3': 13}
/*< 93>*/ 	printf(/* textboxtype: 1, unk: 0, line: 34 */ "Ich habe mich so sehr verändert, dass\ndir die Worte fehlen, nicht wahr?")
/*< 94>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8969, 'param2': 3072, 'next': 19, 'param3': 13}
/*< 19>*/ 	printf(/* textboxtype: 1, unk: 0, line: 35 */ "Ich bin dir so dankbar, dass du so viel\nfür mich getan hast.\n\n\nVon nun an werde ich versuchen, als\nMensch glücklich mit den anderen\nzusammenzuleben.")
/*< 16>*/ 	story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */] = true;
          }

          void entrypoint_121_01() {
/*<100>*/ 	start()
/*<149>*/ 	switch (temp_flags[12 /* 0x0 10 */]) {
          	  case 0:
/*<151>*/ 		printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00080a0c>Oh, hier ist es schön hell. Die Luft ist\nerfüllt von Frische und Leben. All das\nmacht mich unheimlich glücklich.")
          	  case 1:
/*<101>*/ 		printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x00000005>Oh, ich bin dir so dankbar, dass du mir\ngeholfen hast, <heroname>.\n\n\nIch wollte schon immer diesen Basar\nbesuchen und hier einkaufen!\n\n\n<0x10009:0x00150c00>Sieh dir das an! Niemand fürchtet sich\nvor mir! Ach, wie froh ich doch bin!")
/*<150>*/ 		temp_flags[12 /* 0x0 10 */] = true;
          	}
          }

