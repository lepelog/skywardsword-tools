          void entrypoint_004_106() {
/*< 29>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 0, unk: 1, line: 16 */ "Wenn du alle Rubine in Cippolinos\n<color blue<Risiko-Rubinjagd>coloroff><color blue< >coloroff>ausgräbst, erhältst\ndu einen seltenen Schatz.")
          }

          void entrypoint_004_107() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 56>*/ 		printf(/* textboxtype: 0, unk: 0, line: 17 */ "Tief unterhalb dieses Vulkans leben\ndie Schätze hortenden <color blue<Mogma>coloroff>.\n\n\nWie ich hörte, sollen sie heutzutage\nin ihren unterirdischen Höhlen eine\nruhige Kugel schieben.")
          	  case 1:
          		flw_59:
/*< 59>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "Angeblich lebt auf dem <color red<Gipfel >coloroff>dieses\nVulkans ein <color red<Drache>coloroff>.\n\n\nNein, das hier ist ganz bestimmt nicht\nder Gipfel...")
/*< 60>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "Soll ich das noch mal wiederholen?\n[1-]Ja[2]Nein")
/*< 62>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_59
          		  case 1:
/*< 61>*/ 			printf(/* textboxtype: 0, unk: 0, line: 20 */ "Hab schon verstanden...<pause 15>\nDu möchtest mir also nicht zuhören?")
          		}
          	}
          }

          void entrypoint_004_014() {
/*<  9>*/ 	start()
/*< 12>*/ 	switch (is_adventure_pouch_full()) {
          	  case 0:
/*< 13>*/ 		switch (is_item_check_full()) {
          		  case 0:
/*< 11>*/ 			printf(/* textboxtype: 9, unk: 2, line: 9 */ "Deine Tasche ist voll! Das <color red<Item-Lager\n>coloroff>leider auch...\n\n\nDas Item wurde in die Schatztruhe\nzurückgelegt.")
          		  case 1:
/*< 10>*/ 			printf(/* textboxtype: 2, unk: 0, line: 8 */ "Deine Tasche ist voll! Das Item wurde im\n<color red<Item-Lager >coloroff>deponiert.")
          		}
          	  case 1:
          	}
          }

          void entrypoint_004_108() {
/*< 31>*/ 	start()
/*< 51>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 30>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "Der <color red<Drache>coloroff>, der auf dem Gipfel des\nVulkans lebt, ist ziemlich gesprächig.\n\n\nPass bloß auf, dass er dir mit seinem\nGeschwätz kein Ohr abkaut.")
          	  case 1:
          		flw_52:
/*< 52>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "Auf dem Gipfel dieses Vulkans soll\nein <color red<Drache>coloroff> leben, dessen Körper in\nFlammen gehüllt ist.\n\nEr lebt an einem <color red<sengend heißen Ort>coloroff>,\nden die meisten Leute nicht betreten\nkönnen.")
/*< 53>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "Soll ich das noch mal wiederholen?\n[1-]Ja[2]Nein")
/*< 55>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_52
          		  case 1:
/*< 54>*/ 			printf(/* textboxtype: 0, unk: 0, line: 20 */ "Hab schon verstanden...<pause 15>\nDu möchtest mir also nicht zuhören?")
          		}
          	}
          }

          void entrypoint_004_015() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "Hey! <0x30001:0x><heroname>!\nDu hast doch nicht etwa vor abzuhauen? Pah!\n\n\nEin Mann sollte zu Ende bringen,\nwas er anfängt!")
          }

          void entrypoint_004_109() {
/*< 33>*/ 	start()
/*< 32>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "Schneidest du beim <color blue<lustigen Loren-\nLenken>coloroff> gut ab, kannst du ein <color yellow<Herzteil\n>coloroff>erhalten.")
          }

          void entrypoint_004_016() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x1000F:0x>Bis wann möchtest du schlafen?\n[1-]Bis morgens[2-]Bis nachts[3]Gar nicht")
/*< 50>*/ 	switch (choice(3)) {
          	  case 0:
          	  case 1:
          	  case 2:
          	}
          }

          void entrypoint_004_110() {
/*< 35>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "Mir kam zu Ohren, dass hier in der\nWüste ein <color red<Drache>coloroff> lebt, der gerne\nLeute unterrichtet.\n\nAngeblich schenkt er dem, der alle\nseine Aufgaben meistert, einen\n<color red<unzerstörbaren Schild>coloroff>.")
          }

          void entrypoint_004_017() {
/*< 65>*/ 	start()
/*< 66>*/ 	printf(/* textboxtype: 0, unk: 0, line: 35 */ "Zu dieser Vogelstatue reisen?\n[1-]Ja[2]Nein")
/*< 67>*/ 	switch (choice(2)) {
          	  case 0:
          	  case 1:
          	}
          }

          void entrypoint_004_111() {
/*< 37>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "Wie man seltene Insekten fängt?\nNähere dich ihnen vorsichtig mit\neinem <color yellow<Meisterfänger-Netz>coloroff>.")
          }

          void entrypoint_004_018() {
/*< 68>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu berichten.\n\n\n\nIm Wald von Phirone hat anscheinend\neine <color red<Veränderung >coloroff>stattgefunden. Ein\nAbsprung dorthin ist momentan nicht\nmöglich.")
          }

          void entrypoint_004_001() {
          	start()
/*<  2>*/ 	printf(/* textboxtype: 9, unk: 0, line: 0 */ "<0x1000F:0x>Die Tür lässt sich ohne\n<color yellow<Schlüssel >coloroff>nicht öffnen.")
          }

          void entrypoint_004_112() {
/*< 39>*/ 	start()
/*< 24>*/ 	printf(/* textboxtype: 1, unk: 0, line: 14 */ "Schießt das Licht eines <color blue<Artefakts der\nGöttin>coloroff> in den Himmel, findest du dort\nin einer Schatztruhe vielleicht sogar\nein <color yellow<Herzteil>coloroff>.")
          }

          void entrypoint_004_019() {
/*< 70>*/ 	start()
/*< 71>*/ 	switch (story_flags[843 /* us: 805A9B35 0x04, jp: 805ACDB5 0x04 */]) {
          	  case 0:
/*< 72>*/ 		printf(/* textboxtype: 0, unk: 0, line: 38 */ "Bewege (Hand) zu der Vogelstatue, zu der ich dich\nbringen soll, und drücke (A).")
          	  case 1:
/*< 73>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu berichten.\n\n\n\nIch habe alle <color blue<Statuen>coloroff> aus meinem\nSpeicher auf deiner Karte markiert.\n<sound 4>Du kannst zu jeder von ihnen reisen.\n\nFühre (Hand) zu der Statue, zu der ich dich\nbringen soll, und drücke (A).")
/*< 74>*/ 		story_flags[843 /* us: 805A9B35 0x04, jp: 805ACDB5 0x04 */] = true;
          	}
          }

          void entrypoint_004_002() {
/*<  1>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x1000F:0x>Das Schild ist kaputt.\nEs ist unmöglich zu lesen.")
          }

          void entrypoint_004_113() {
/*< 41>*/ 	start()
/*< 40>*/ 	printf(/* textboxtype: 1, unk: 1, line: 27 */ "Zeichnest du Rubine an eine der\nmysteriösen Wände, kannst du dir\neine goldene Nase verdienen.")
          }

          void entrypoint_004_003() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 9, unk: 0, line: 3 */ "<0x1000F:0x>Von hier aus kannst du das\nSchild nicht lesen.")
          }

          void entrypoint_004_114() {
/*< 43>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "<color yellow<Glitzersporen >coloroff>können aus Glitzerpilzen\ngewonnen werden und haben, streut\nman sie auf Insekten und Monster, eine\nganz besondere Wirkung.")
          }

          void entrypoint_004_115() {
/*< 45>*/ 	start()
/*< 44>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "Zeichnest du einen Kreis an eine der\nmysteriösen Wände, wird ein ähnlich\ngeformtes Item erscheinen.")
          }

          void entrypoint_004_004() {
/*< 46>*/ 	start()
/*< 47>*/ 	printf(/* textboxtype: 0, unk: 9, line: 1 */ "<0x1000F:0x>Die Tür ist versiegelt und lässt\nsich nicht öffnen.")
          }

          void entrypoint_004_116() {
/*< 63>*/ 	start()
/*< 64>*/ 	printf(/* textboxtype: 1, unk: 1, line: 30 */ "Zeichnest du drei Dreiecke an eine\nder mysteriösen Wände, werden dir\nvielleicht <color yellow<Feen>coloroff> erscheinen.")
          }

          void entrypoint_004_117() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf(/* textboxtype: 0, unk: 1, line: 31 */ "In der Nähe scheint sich irgendwo ein\n<color yellow<Herzteil>coloroff> zu befinden.")
/*< 77>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 78>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "Oh... Du hast es ja bereits gefunden.\nUnd warum sagst du das nicht gleich?")
          	  case 1:
/*< 79>*/ 		printf(/* textboxtype: 0, unk: 0, line: 32 */ "Um es zu finden, musst du dich jedoch\nwie ein <color blue<Mogma>coloroff> durch die Erde graben\nkönnen.")
          	}
          }

          void entrypoint_004_100() {
/*< 17>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 0, unk: 9, line: 10 */ "Boing-oing!")
          }

          void entrypoint_004_008() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 0, unk: 9, line: 4 */ "Möchtest du diese Sairen verlassen?\n[1-]Verlassen[2]Bleiben")
/*<  8>*/ 	switch (choice(2)) {
          	  case 0:
          	  case 1:
          	}
          }

          void entrypoint_004_101() {
/*< 19>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 2, unk: 0, line: 11 */ "Schneidest du beim <color blue<superschnellen\nBambusfäller >coloroff>den Bambus <color red<mehr als\n28-mal>coloroff>, erhältst du einen wertvollen\nSchatz.\nDer Betreiber, ein ehemaliges Model,\nhält laut eigenen Angaben den Rekord\nvon 43 Schnitten...")
          }

          void entrypoint_004_102() {
/*< 21>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 5, unk: 1, line: 12 */ "Erweist du dich im <color blue<Insektenparadies >coloroff>in\nweniger als <color red<2 Minuten >coloroff>als Experte,\nerhältst du vielleicht seltene Insekten.")
          }

          void entrypoint_004_103() {
/*< 23>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 0, unk: 5, line: 13 */ "Wir <color blue<Mythensteine>coloroff> ziehen Schmetterlinge\nmagisch an.\n\n\nErtönt dort, wo <color red<Schmetterlinge >coloroff>fliegen,\neine <color red<wundervolle Melodie>coloroff>, dann... Boing-oing!")
          }

          void entrypoint_004_104() {
/*< 25>*/ 	start()
/*< 38>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "Zeichnest du einen Pfeil an eine der\nmysteriösen Wände, wird ein ähnlich\ngeformtes Item erscheinen.")
          }

          void entrypoint_004_105() {
/*< 27>*/ 	start()
/*< 42>*/ 	printf(/* textboxtype: 0, unk: 1, line: 28 */ "Zeichnest du ein Symbol der Liebe an\neine der mysteriösen Wände, wird es\ndir bestimmt besser gehen.")
          }

