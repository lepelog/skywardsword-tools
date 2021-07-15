          void entrypoint_121_02() {
/*<102>*/ 	start()
/*<103>*/ 	printf("\x0E\x01\x09\x04\x15\xC09Achtung! Du solltest diese Truhe dort\nbesser nicht öffnen. Darin befindet...\nsich etwas sehr Gefährliches.\n[1]Was denn?[2]Ich will aber!")
/*<104>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_106:
/*<106>*/ 		printf("\x0E\x01\x09\x04\x13\x800Nun... Darin befindet sich die wohl\nfurchterregendste Medaille, die es\ngibt. Die <y<Dämonen-Medaille>>.\n\nTrägst du sie bei dir, wirst du auf\ndeinen Reisen viel mehr Rubine\nfinden als zuvor.\n\n\x0E\x01\x09\x04\x15\xC00Auch Schätze werden dann leichter zu\nfinden sein! \x0E\x01\x09\x04\x14\xA00Doch im Gegenzug... Oh...\n[1]Wie schön![2]Und weiter?")
/*<108>*/ 		switch (choice(2)) {
          		  case 0:
/*<109>*/ 			printf("\x0E\x01\x09\x04\x13\x800Nun, wenn du es dir nur bis hierhin\nanhörst, verstehe ich schon, dass es\nsehr verlockend klingt...")
          			flw_107:
/*<107>*/ 			printf("\x0E\x01\x09\x04\x15\xC00Das Schreckliche daran kommt\nerst noch!\n\n\n\x0E\x01\x09\x04\x14\xA00Wenn du diese Medaille bei dir trägst,\nkannst du deine <r<Tasche nicht mehr\nöffnen>>!\n\nUnd das bedeutet, du kannst auch keine\nHerztränke mehr zu dir nehmen und\ndeinen Schild nicht mehr einsetzen!\n\n\x0E\x01\x09\x04\x15\xC00Verstehst du nun, was ich vorhin mit\n\x201Efurchterregend\x201C meinte? Ich bitte\ndich, öffne diese Truhe nicht!")
/*<110>*/ 			scene_flags[0 'Skyloft'][84 /* 0xB 10 */] = true;
          		  case 1:
          			goto flw_107
          		}
          	  case 1:
/*<105>*/ 		printf("\x0E\x01\x09\x04\x13\x800Ich sagte doch, öffne sie besser nicht!")
          		goto flw_106
          	}
          }

          void entrypoint_121_20() {
/*<  1>*/ 	start()
/*<  3>*/ 	printf("\x0E\x01\x09\x04\x00\x03Oh! Hilfe! Nicht schlagen! Bitte,\nverschone mich!\n\n\nIch mag furchteinflößend aussehen,\naber ich bin kein Unhold!")
/*< 66>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2560, 'next': 114, 'param3': 13}
/*<114>*/ 	make_actor_do_something(2, 0)
/*<  4>*/ 	printf("\x0E\x01\x09\x04\x00\x05Lass mich dir zuerst etwas erklären...\n\n\n\nMein Name ist <b<Morsego>>, und wie du ja\nsehen kannst, bin ich ein Dämon. Ich\nwohne hier im Wolkenhort.\n\nAber ich tue keiner Seele etwas zuleide,\nund Kindesentführung liegt mir fern!\n\n\nIm Gegenteil, dieses kleine Mädchen\nist die einzige, die keine Angst vor mir\nhat...\n\nDie Tatsache, dass sie mit mir Zeit\nverbringt, ist wie ein Geschenk für\nmich.\n\nIch wäre ja so gerne mit den Menschen\nhier im Dorf befreundet, doch leider\nfürchten sich alle aufgrund meines\ndämonischen Aussehens vor mir...")
/*< 75>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 2048, 'next': 72, 'param3': 13}
/*< 72>*/ 	printf("Dabei würde ich mich wirklich gerne\nmit den Menschen anfreunden.\n\n\nAber ich fürchte, dass mein Aussehen\nsie immer wieder in die Flucht treiben\nwird... Es ist eine Tragödie!\n\nHm, obwohl... Es gibt da allerdings\neine Legende, die man sich unter\nDämonen erzählt...")
/*< 76>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3077, 'next': 73, 'param3': 13}
/*< 73>*/ 	printf("In ihr ist von den <y<Juwelen der Güte\n>>die Rede, die man erhält, wenn man\nden Menschen eine Freude bereitet.")
/*< 77>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2572, 'next': 74, 'param3': 13}
/*< 74>*/ 	printf("Mit einer großen Anzahl dieser\n<y<Juwelen der Güte>> soll es möglich\nsein, sich von einem Dämon in\neinen Menschen zu verwandeln!")
/*< 78>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 115, 'param3': 13}
/*<115>*/ 	make_actor_do_something(3, 0)
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x00\x07Ich habe einen Entschluss gefasst!\nIch möchte ein Mensch werden!\n\n\nJunger Edelmann, ich habe das Gefühl,\ndass du ein Mann reinen Herzens und\nvoller Güte bist.")
/*< 79>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 2048, 'next': 116, 'param3': 13}
/*<116>*/ 	make_actor_do_something(4, 0)
/*< 80>*/ 	printf("Aus diesem Grund würde ich dich gerne\nbitten, für mich die <y<Juwelen der Güte\n>>zu sammeln. Würdest du das für mich\ntun?\n[1]Sehr gern![2-]Eher nicht.")
/*<  5>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_82:
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3086, 'next': 117, 'param3': 13}
/*<117>*/ 		make_actor_do_something(5, 0)
/*<  8>*/ 		printf("Tatsächlich?!?")
/*<118>*/ 		make_actor_do_something(6, 0)
/*<113>*/ 		printf("Ich habe gehört, wenn man Menschen\nhilft, ihre Probleme zu lösen, erhält\nman die<y< Juwelen der Güte>>!")
/*< 84>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 2572, 'next': 83, 'param3': 13}
/*< 83>*/ 		printf("Manchmal erscheinen sie auch an\nOrten, an denen sich viele Menschen\nversammeln, überall im Wolkenmeer.\n\nAuch der Wolkenhort ist solch ein Ort.\nOh, das reimt sich!\n\n\nIch habe dich, der du ein reines Herz\nhast, verzaubert, sodass du von nun an\ndie <y<Juwelen der Güte>> <g<sehen kannst>>.\n\nDer Zauber wirkt jedoch nur <r<nachts>>.\nSuche die im Wolkenmeer verteilten\nJuwelen der Güte also stets in der\n<r<Nacht>>.")
/*< 86>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3079, 'next': 85, 'param3': 13}
/*< 85>*/ 		printf("Ich werde dich selbstverständlich reich\ndafür belohnen, das steht außer Frage!")
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
/*<  6>*/ 		printf("Bitte... Ich flehe dich an...\n[1]Also gut...[2-]Nein bleibt\nNein!")
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
/*<159>*/ 		printf("\x0E\x01\x09\x04\x00\xA07Ich habe allen Menschen hier Kummer\nund Sorgen bereitet... Ich muss sagen,\ndas nagt immer noch ein wenig an mir.\n\nDoch jetzt bin ich ein anerkannter\nBürger des Wolkenhorts und führe ein\nneues Leben! Ich kann dir gar nicht\nsagen, wie dankbar ich bin!")
          	  case 1:
/*<153>*/ 		printf("\x0E\x01\x09\x04\x00\x05Hallo, Link.\nIch bin ja nicht so häufig draußen\nunterwegs, aber mir scheint, als\nwären alle Monster verschwunden.\nOb dies wohl damit zusammenhängt,\ndass ich zum Menschen wurde?\n[1]Vielleicht.[2]Das denke\nich nicht.")
/*<154>*/ 		switch (choice(2)) {
          		  case 0:
/*<155>*/ 			printf("\x0E\x01\x09\x04\x00\x856Oh, du denkst also auch so...")
          			flw_157:
/*<157>*/ 			printf("\x0E\x01\x09\x04\x08\x800Als ich ein Dämon war, ging von mir\neine bösartige Energie aus...\n\n\nUnd diese Energie verschwand, als\nich zum Menschen wurde.\n\n\n\x0E\x01\x09\x04\x15\xA07Jetzt ist es hier im Wolkenhort sicher\nund ruhig. Und all das habe ich nur dir\nzu verdanken!")
/*<160>*/ 			story_flags[1091 /* us: 805A9B52 0x02, jp: 805ACDD2 0x02 */] = true;
          		  case 1:
/*<156>*/ 			printf("\x0E\x01\x09\x04\x00\x814Ach, du kannst ruhig ehrlich sein...")
          			goto flw_157
          		}
          	}
          }

          void entrypoint_121_30() {
/*<  9>*/ 	start()
/*<111>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*<112>*/ 		printf("\x0E\x01\x09\x04\x13\x808Oh, du hast die Truhe also doch\ngeöffnet!\n\n\nDie Gier der Menschen ist eine sehr\ngefährliche Macht... Aber genau das\nmacht die Menschen so interessant!\n\nSolltest du deine Tasche doch wieder\nöffnen wollen, bringe die Medaille\ndoch einfach ins <b<Item-Lager>>.")
          	  case 1:
/*<120>*/ 		switch (story_flags[583 /* us: 805A9B1B 0x40, jp: 805ACD9B 0x40 */]) {
          		  case 0:
/*<121>*/ 			story_flags[734 /* us: 805A9B27 0x40, jp: 805ACDA7 0x40 */] = true;
          			flw_13:
/*< 13>*/ 			switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          			  case 0:
/*<125>*/ 				switch (scene_flags[79 /* 0x8 80 */]) {
          				  case 0:
/*<126>*/ 					printf("\x0E\x01\x09\x04\n\xC05Ich danke dir von Herzen! Nun kann\nich endlich ohne Sorgen durch den\nWolkenhort stolzieren!")
          				  case 1:
/*< 95>*/ 					{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 3072, 'next': 17, 'param3': 13}
/*< 17>*/ 					printf("\x0E\x01\x09\x04\x00\x05Was sagst du? Du hast wohl für einen\nMoment gar nicht gewusst, wer ich bin!")
/*< 96>*/ 					{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 97, 'param3': 13}
/*< 97>*/ 					printf("Ich habe auch das Gefühl, dass ich gar\nnicht mehr ich selbst bin!")
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
/*< 36>*/ 											printf("Du hast die gesamte <y<Güte>> der Leute\nhier gesammelt und mir dargebracht.\n\n\n\x0E\x01\x09\x04\x07\x807Ich danke dir von ganzem Herzen!\nIch bin dir auf ewig verpflichtet!\n\n\nDies ist mein letztes Geschenk an dich.\nIch bitte dich, weise es nicht zurück!")
          											flw_166:
/*<166>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 37, 'param3': 12}
/*< 37>*/ 											give_item(111 0x6F);
/*< 20>*/ 											printf("Es ist nichts Besonderes, aber ich\nhoffe, es wird dir auf deinem weiteren\nWeg nützlich sein...")
/*< 87>*/ 											{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 3072, 'next': 15, 'param3': 13}
/*< 15>*/ 											printf("Oh! Diese Menge <y<Juwelen der Güte\n>>sollte ausreichen, um ein Mensch zu\nwerden!\n\n\x0E\x01\x09\x04\x07\x809Ich bin so aufgeregt! Ob es wohl\nwirklich funktioniert...")
/*<148>*/ 											scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          										  case 1:
/*< 62>*/ 											printf("\x0E\x01\x09\x04\x00\x05Ach, ich würde so gerne ein Mensch\nsein...\n\n\nBitte, sammle noch mehr <y<Juwelen der\nGüte>> für mich! Komm wieder zu mir,\nwenn du<r< 80 Stück>> gefunden hast!")
          										}
          									  case 1:
/*< 34>*/ 										switch (context_related2(5)) {
          										  case 0:
/*< 59>*/ 											printf("\x0E\x01\x09\x04\x09\xD0BOooh! Du hast wirklich viele <y<Juwelen\nder Güte >>für mich gesammelt!\n\n\n\x0E\x01\x09\x04\x07\x807Ich bin sehr glücklich. Nimm dies als\nZeichen meiner Dankbarkeit.")
          											flw_127:
/*<127>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 161, 'param3': 12}
/*<161>*/ 											give_item(33 0x21);
/*<162>*/ 											printf("\x0E\x01\x09\x04\x09\xD0BDamit allein kann ich dir meine\nDankbarkeit jedoch nicht in vollem\nMaße ausdrücken...\n\n\x0E\x01\x09\x04\x07\x807Ich schenke dir noch etwas!")
/*<163>*/ 											give_item(33 0x21);
/*< 60>*/ 											printf("Ich benötige nur noch eine ganz kleine\nMenge mehr <y<Juwelen der Güte>>, um ein\nMensch zu werden. Bitte, lass mich\njetzt nicht im Stich...")
/*< 61>*/ 											scene_flags[0 'Skyloft'][75 /* 0x8 08 */] = true;
/*<143>*/ 											switch (context_related2(6)) {
          											  case 0:
/*<144>*/ 												printf("\x0E\x01\x09\x04\x09\xD0BOooh! Und ich spüre immer noch die\nwärmende Kraft der <y<Juwelen der Güte>>!\n\n\n<r<80>> Stück... Hast du tatsächlich so viele\n<y<Juwelen der Güte>> für mich gesammelt?\n\n\n\x0E\x01\x09\x04\x07\x807Vielen Dank! Oh, ich danke dir so sehr!\n\n\n\nNimm dies als letztes Geschenk für\ndeine großartige Hilfe.")
          												goto flw_166
          											  case 1:
/*<147>*/ 												scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          											}
          										  case 1:
/*< 57>*/ 											printf("\x0E\x01\x09\x04\x00\x05Ach, ich würde so gerne ein Mensch\nsein...\n\n\nBitte, sammle noch mehr <y<Juwelen der\nGüte>> für mich! Komm wieder zu mir,\nwenn du<r< 70 Stück>> gefunden hast!")
          										}
          									}
          								  case 1:
/*< 33>*/ 									switch (context_related2(4)) {
          									  case 0:
/*< 28>*/ 										printf("\x0E\x01\x09\x04\x09\xD0BOooh! Du hast wirklich viele <y<Juwelen\nder Güte >>für mich gesammelt!\n\n\n\x0E\x01\x09\x04\x07\x807Ich bin sehr glücklich. Nimm dies als\nZeichen meiner Dankbarkeit.")
          										flw_165:
/*<165>*/ 										{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 12}
/*< 27>*/ 										give_item(110 0x6E);
/*< 29>*/ 										printf("Ich benötige nur noch eine ganz kleine\nMenge mehr <y<Juwelen der Güte>>, um ein\nMensch zu werden. Bitte, lass mich\njetzt nicht im Stich...")
/*< 56>*/ 										scene_flags[0 'Skyloft'][74 /* 0x8 04 */] = true;
/*<141>*/ 										switch (context_related2(5)) {
          										  case 0:
/*<142>*/ 											printf("\x0E\x01\x09\x04\x09\xD0BOooh! Ich spüre die Wärme, die von\nden <y<Juwelen der Güte>> ausgeht.\n\n\n\x0E\x01\x09\x04\x07\x807Nimm dies als Zeichen meines Dankes\nfür all die Mühen, die du auf dich\ngenommen hast.")
          											goto flw_127
          										  case 1:
/*<146>*/ 											scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          										}
          									  case 1:
/*< 54>*/ 										printf("\x0E\x01\x09\x04\x00\x05Ach, ich würde so gerne ein Mensch\nsein...\n\n\nBitte, sammle noch mehr <y<Juwelen der\nGüte>> für mich! Komm wieder zu mir,\nwenn du<r< 50 Stück>> gefunden hast!")
          									}
          								}
          							  case 1:
/*< 32>*/ 								switch (context_related2(3)) {
          								  case 0:
/*< 50>*/ 									printf("\x0E\x01\x09\x04\x09\xD0BOooh! Du hast wirklich viele <y<Juwelen\nder Güte >>für mich gesammelt!\n\n\n\x0E\x01\x09\x04\x07\x807Ich bin sehr glücklich. Nimm dies als\nZeichen meiner Dankbarkeit.")
          									flw_164:
/*<164>*/ 									{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 49, 'param3': 12}
/*< 49>*/ 									give_item(33 0x21);
/*< 51>*/ 									printf("Das ist eine ganze Menge <y<Juwelen der\nGüte>>, die du da gesammelt hast.\n\n\nNur noch ein wenig mehr, und ich kann\nendlich ein Mensch werden...")
/*< 53>*/ 									scene_flags[0 'Skyloft'][73 /* 0x8 02 */] = true;
/*<139>*/ 									switch (context_related2(4)) {
          									  case 0:
/*<140>*/ 										printf("\x0E\x01\x09\x04\x09\xD0BOooh! Ich spüre die Wärme, die von\nden <y<Juwelen der Güte>> ausgeht.\n\n\n\x0E\x01\x09\x04\x07\x807Nimm dies als Zeichen meines Dankes\nfür all die Mühen, die du auf dich\ngenommen hast.")
          										goto flw_165
          									  case 1:
/*<145>*/ 										scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          									}
          								  case 1:
/*< 48>*/ 									printf("\x0E\x01\x09\x04\x00\x05Ach, ich würde so gerne ein Mensch\nsein...\n\n\nBitte, sammle noch mehr <y<Juwelen der\nGüte>> für mich! Komm wieder zu mir,\nwenn du <r<40 Stück>> gefunden hast!")
          								}
          							}
          						  case 1:
/*< 31>*/ 							switch (context_related2(2)) {
          							  case 0:
/*< 25>*/ 								printf("\x0E\x01\x09\x04\x09\xD0BOooh! Du hast wirklich viele <y<Juwelen\nder Güte >>für mich gesammelt!\n\n\n\x0E\x01\x09\x04\x07\x807Ich bin sehr glücklich. Nimm dies als\nZeichen meiner Dankbarkeit.")
          								flw_24:
/*< 24>*/ 								give_item(109 0x6D);
/*< 26>*/ 								printf("Das ist eine ganze Menge <y<Juwelen der\nGüte>>, die du da gesammelt hast.\n\n\nNur noch ein wenig mehr, und ich kann\nendlich ein Mensch werden...")
/*< 47>*/ 								scene_flags[0 'Skyloft'][72 /* 0x8 01 */] = true;
/*<137>*/ 								switch (context_related2(3)) {
          								  case 0:
/*<138>*/ 									printf("\x0E\x01\x09\x04\x09\xD0BOooh! Ich spüre die Wärme, die von\nden <y<Juwelen der Güte>> ausgeht.\n\n\n\x0E\x01\x09\x04\x07\x807Nimm dies als Zeichen meines Dankes\nfür all die Mühen, die du auf dich\ngenommen hast.")
          									goto flw_164
          								  case 1:
/*< 99>*/ 									scene_flags[0 'Skyloft'][83 /* 0xB 08 */] = true;
          								}
          							  case 1:
/*< 64>*/ 								printf("\x0E\x01\x09\x04\x00\x05Ach, ich würde so gerne ein Mensch\nsein...\n\n\nBitte, sammle noch mehr <y<Juwelen der\nGüte>> für mich! Komm wieder zu mir,\nwenn du <r<30 Stück>> gefunden hast!")
          							}
          						}
          					  case 1:
/*< 30>*/ 						switch (context_related2(1)) {
          						  case 0:
/*< 43>*/ 							printf("\x0E\x01\x09\x04\x09\xD0BOooh! Du hast wirklich viele <y<Juwelen\nder Güte >>für mich gesammelt!\n\n\n\x0E\x01\x09\x04\x07\x807Ich bin sehr glücklich. Nimm dies als\nZeichen meiner Dankbarkeit.")
          							flw_42:
/*< 42>*/ 							give_item(94 0x5E);
/*< 44>*/ 							printf("Ich brauche leider noch mehr <y<Juwelen\nder Güte>>, um endlich ein Mensch\nwerden zu können.\n\nBitte, sei so gnädig und hilf mir noch\nein wenig mehr...")
/*< 45>*/ 							scene_flags[0 'Skyloft'][71 /* 0x9 80 */] = true;
/*<135>*/ 							switch (context_related2(2)) {
          							  case 0:
/*<136>*/ 								printf("\x0E\x01\x09\x04\x09\xD0BOooh! Ich spüre die Wärme, die von\nden <y<Juwelen der Güte>> ausgeht.\n\n\n\x0E\x01\x09\x04\x07\x807Nimm dies als Zeichen meines Dankes\nfür all die Mühen, die du auf dich\ngenommen hast.")
          								goto flw_24
          							  case 1:
          							}
          						  case 1:
/*< 40>*/ 							printf("\x0E\x01\x09\x04\x00\x05Ach, ich würde so gerne ein Mensch\nsein...\n\n\nBitte, sammle noch mehr <y<Juwelen der\nGüte>> für mich! Komm wieder zu mir,\nwenn du <r<zehn Stück>> gefunden hast!")
          						}
          					}
          				  case 1:
/*< 63>*/ 					switch (context_related2(0)) {
          					  case 0:
/*< 22>*/ 						printf("\x0E\x01\x09\x04\x09\xD0BOooh! Du hast wirklich viele <y<Juwelen\nder Güte >>für mich gesammelt!\n\n\n\x0E\x01\x09\x04\x07\x807Ich bin sehr glücklich. Nimm dies als\nZeichen meiner Dankbarkeit.")
/*< 21>*/ 						give_item(108 0x6C);
/*< 23>*/ 						printf("Ich brauche leider noch mehr <y<Juwelen\nder Güte>>, um endlich ein Mensch\nwerden zu können.\n\nBitte, sei so gnädig und hilf mir noch\nein wenig mehr...")
/*< 38>*/ 						scene_flags[0 'Skyloft'][70 /* 0x9 40 */] = true;
/*<133>*/ 						switch (context_related2(1)) {
          						  case 0:
/*<134>*/ 							printf("\x0E\x01\x09\x04\x09\xD0BOooh! Ich spüre die Wärme, die von\nden <y<Juwelen der Güte>> ausgeht.\n\n\n\x0E\x01\x09\x04\x07\x807Nimm dies als Zeichen meines Dankes\nfür all die Mühen, die du auf dich\ngenommen hast.")
          							goto flw_42
          						  case 1:
          						}
          					  case 1:
/*<132>*/ 						switch (zone_temp_flags[1 /* 0x1 02 */]) {
          						  case 0:
          							flw_122:
/*<122>*/ 							switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          							  case 0:
/*< 14>*/ 								printf("\x0E\x01\x09\x04\x00\x05Aaah, ich möchte so gerne ein Mensch\nwerden... Bitte, sammle für mich die\n<y<Juwelen der Güte>>.\n\nFür den Anfang reichen <r<fünf Stück>>.\nHilf jemandem, und du wirst sie schnell\nbeisammenhaben.")
          							  case 1:
/*<123>*/ 								printf("\x0E\x01\x09\x04\x00\x05Ich werde veranlassen, dass dieses\nMädchen schon morgen früh zu\nseiner Familie zurückkehrt.\n\nBitte richte den Eltern meine liebsten\nGrüße aus, und vergiss nicht, die\n<y<Juwelen der Güte >>zu sammeln...\n\nFür den Anfang reichen wohl <r<fünf\nStück>>. Hilf jemandem, und du wirst sie\nschnell zusammenhaben.")
          							}
          						  case 1:
/*<129>*/ 							check_item_flag(48, 1)
/*<128>*/ 							switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 46}) {
          							  case 0:
/*<130>*/ 								printf("\x0E\x01\x09\x04\x00\x05Oh! Genau danach suche ich! Das ist ja\nein <y<Juwel der Güte>>!<pause14> Ich wusste, dass\ndu schnell welche finden würdest.\n\nFür den Anfang wäre es nett, wenn du\nmir <r<fünf Stück >>bringen könntest.\n\n\nWenn du nett zu den Menschen bist und\nihnen hilfst, wirst du ganz sicher viele\ndavon erhalten.")
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
/*< 18>*/ 	printf("\x0E\x01\x09\x04\x00\x0BWas... Uaaah!\x0E\x01\x05\x04<\x00")
/*< 67>*/ 	make_actor_do_something(0, 0)
/*<119>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 68, 'param3': 6}
/*< 68>*/ 	printf("\x0E\x01\x09\x04\x00\x04\x0E\x01\x08\x02\x2CDGrrraaaaaaaaa!\x0E\x01\x05\x04\x1E\x00")
/*< 69>*/ 	make_actor_do_something(1, 0)
/*< 71>*/ 	{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': -1, 'next': 88, 'param3': 16}
/*< 88>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8969, 'param2': 3072, 'next': 89, 'param3': 13}
/*< 89>*/ 	printf("\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í \x0E\x01\x09\x04\x00\x07Nun, Link?\nWie... sehe ich aus?")
/*< 90>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8968, 'param2': 2560, 'next': 91, 'param3': 13}
/*< 91>*/ 	printf("Du musst nichts sagen! Ich kann es an\ndeinem Gesicht ablesen.")
/*< 92>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8970, 'param2': 3072, 'next': 93, 'param3': 13}
/*< 93>*/ 	printf("Ich habe mich so sehr verändert, dass\ndir die Worte fehlen, nicht wahr?")
/*< 94>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8969, 'param2': 3072, 'next': 19, 'param3': 13}
/*< 19>*/ 	printf("Ich bin dir so dankbar, dass du so viel\nfür mich getan hast.\n\n\nVon nun an werde ich versuchen, als\nMensch glücklich mit den anderen\nzusammenzuleben.")
/*< 16>*/ 	story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */] = true;
          }

          void entrypoint_121_01() {
/*<100>*/ 	start()
/*<149>*/ 	switch (temp_flags[12 /* 0x0 10 */]) {
          	  case 0:
/*<151>*/ 		printf("\x0E\x01\x09\x04\x08\xA0COh, hier ist es schön hell. Die Luft ist\nerfüllt von Frische und Leben. All das\nmacht mich unheimlich glücklich.")
          	  case 1:
/*<101>*/ 		printf("\x0E\x01\x09\x04\x00\x05Oh, ich bin dir so dankbar, dass du mir\ngeholfen hast, Link.\n\n\nIch wollte schon immer diesen Basar\nbesuchen und hier einkaufen!\n\n\n\x0E\x01\x09\x04\x15\xC00Sieh dir das an! Niemand fürchtet sich\nvor mir! Ach, wie froh ich doch bin!")
/*<150>*/ 		temp_flags[12 /* 0x0 10 */] = true;
          	}
          }

