          void entrypoint_004_106() {
/*< 29>*/ 	start()
/*< 28>*/ 	printf("Wenn du alle Rubine in Cippolinos\n<b<Risiko-Rubinjagd>><b< >>ausgräbst, erhältst\ndu einen seltenen Schatz.")
          }

          void entrypoint_004_107() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 56>*/ 		printf("Tief unterhalb dieses Vulkans leben\ndie Schätze hortenden <b<Mogma>>.\n\n\nWie ich hörte, sollen sie heutzutage\nin ihren unterirdischen Höhlen eine\nruhige Kugel schieben.")
          	  case 1:
          		flw_59:
/*< 59>*/ 		printf("Angeblich lebt auf dem <r<Gipfel >>dieses\nVulkans ein <r<Drache>>.\n\n\nNein, das hier ist ganz bestimmt nicht\nder Gipfel...")
/*< 60>*/ 		printf("Soll ich das noch mal wiederholen?\n[1]Ja[2-]Nein")
/*< 62>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_59
          		  case 1:
/*< 61>*/ 			printf("Hab schon verstanden...<pause0F>\nDu möchtest mir also nicht zuhören?")
          		}
          	}
          }

          void entrypoint_004_014() {
/*<  9>*/ 	start()
/*< 12>*/ 	switch (is_adventure_pouch_full()) {
          	  case 0:
/*< 13>*/ 		switch (is_item_check_full()) {
          		  case 0:
/*< 11>*/ 			printf("Deine Tasche ist voll! Das <r<Item-Lager\n>>leider auch...\n\n\nDas Item wurde in die Schatztruhe\nzurückgelegt.")
          		  case 1:
/*< 10>*/ 			printf("Deine Tasche ist voll! Das Item wurde im\n<r<Item-Lager >>deponiert.")
          		}
          	  case 1:
          	}
          }

          void entrypoint_004_108() {
/*< 31>*/ 	start()
/*< 51>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 30>*/ 		printf("Der <r<Drache>>, der auf dem Gipfel des\nVulkans lebt, ist ziemlich gesprächig.\n\n\nPass bloß auf, dass er dir mit seinem\nGeschwätz kein Ohr abkaut.")
          	  case 1:
          		flw_52:
/*< 52>*/ 		printf("Auf dem Gipfel dieses Vulkans soll\nein <r<Drache>> leben, dessen Körper in\nFlammen gehüllt ist.\n\nEr lebt an einem <r<sengend heißen Ort>>,\nden die meisten Leute nicht betreten\nkönnen.")
/*< 53>*/ 		printf("Soll ich das noch mal wiederholen?\n[1]Ja[2-]Nein")
/*< 55>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_52
          		  case 1:
/*< 54>*/ 			printf("Hab schon verstanden...<pause0F>\nDu möchtest mir also nicht zuhören?")
          		}
          	}
          }

          void entrypoint_004_015() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf("Hey! Link!\nDu hast doch nicht etwa\nvor abzuhauen? Pah!\n\nEin Mann sollte zu Ende\nbringen, was er anfängt!")
          }

          void entrypoint_004_109() {
/*< 33>*/ 	start()
/*< 32>*/ 	printf("Schneidest du beim <b<lustigen Loren-\nLenken>> gut ab, kannst du ein <y<Herzteil\n>>erhalten.")
          }

          void entrypoint_004_016() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf("\x0E\x01\x0F\x00Bis wann möchtest du schlafen?\x0F\x01\x0F\n[1]Bis morgens[2]Bis nachts[3-]Gar nicht")
/*< 50>*/ 	switch (choice(3)) {
          	  case 0:
          	  case 1:
          	  case 2:
          	}
          }

          void entrypoint_004_110() {
/*< 35>*/ 	start()
/*< 34>*/ 	printf("Mir kam zu Ohren, dass hier in der\nWüste ein <r<Drache>> lebt, der gerne\nLeute unterrichtet.\n\nAngeblich schenkt er dem, der alle\nseine Aufgaben meistert, einen\n<r<unzerstörbaren Schild>>.")
          }

          void entrypoint_004_017() {
/*< 65>*/ 	start()
/*< 66>*/ 	printf("Zu dieser Vogelstatue reisen?\n[1]Ja[2-]Nein")
/*< 67>*/ 	switch (choice(2)) {
          	  case 0:
          	  case 1:
          	}
          }

          void entrypoint_004_111() {
/*< 37>*/ 	start()
/*< 36>*/ 	printf("Wie man seltene Insekten fängt?\nNähere dich ihnen vorsichtig mit\neinem <y<Meisterfänger-Netz>>.")
          }

          void entrypoint_004_018() {
/*< 68>*/ 	start()
/*< 69>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas\nzu berichten.\n\n\nIm Wald von Phirone hat anscheinend\neine <r<Veränderung >>stattgefunden. Ein\nAbsprung dorthin ist momentan nicht\nmöglich.")
          }

          void entrypoint_004_001() {
          	start()
/*<  2>*/ 	printf("\x0E\x01\x0F\x00Die Tür lässt sich ohne\n<y<Schlüssel >>nicht öffnen.\x0F\x01\x0F")
          }

          void entrypoint_004_112() {
/*< 39>*/ 	start()
/*< 24>*/ 	printf("Schießt das Licht eines <b<Artefakts der\nGöttin>> in den Himmel, findest du dort\nin einer Schatztruhe vielleicht sogar\nein <y<Herzteil>>.")
          }

          void entrypoint_004_019() {
/*< 70>*/ 	start()
/*< 71>*/ 	switch (story_flags[843 /* us: 805A9B35 0x04, jp: 805ACDB5 0x04 */]) {
          	  case 0:
/*< 72>*/ 		printf("Bewege \x0E\x02\x04\x02\x18CD zu der Vogelstatue, zu der\nich dich bringen soll, und drücke (A).")
          	  case 1:
/*< 73>*/ 		printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas\nzu berichten.\n\n\nIch habe alle <b<Statuen>> aus meinem\nSpeicher auf deiner Karte markiert.\n<pling>Du kannst zu jeder von ihnen reisen.\n\nFühre \x0E\x02\x04\x02\x18CD zu der Statue, zu der ich dich\nbringen soll, und drücke (A).")
/*< 74>*/ 		story_flags[843 /* us: 805A9B35 0x04, jp: 805ACDB5 0x04 */] = true;
          	}
          }

          void entrypoint_004_002() {
/*<  1>*/ 	start()
/*<  3>*/ 	printf("\x0E\x01\x0F\x00Das Schild ist kaputt.\nEs ist unmöglich zu lesen.\x0F\x01\x0F")
          }

          void entrypoint_004_113() {
/*< 41>*/ 	start()
/*< 40>*/ 	printf("Zeichnest du Rubine an eine der\nmysteriösen Wände, kannst du dir\neine goldene Nase verdienen.")
          }

          void entrypoint_004_003() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf("\x0E\x01\x0F\x00Von hier aus kannst du das\nSchild nicht lesen.\x0F\x01\x0F")
          }

          void entrypoint_004_114() {
/*< 43>*/ 	start()
/*< 26>*/ 	printf("<y<Glitzersporen >>können aus Glitzerpilzen\ngewonnen werden und haben, streut\nman sie auf Insekten und Monster, eine\nganz besondere Wirkung.")
          }

          void entrypoint_004_115() {
/*< 45>*/ 	start()
/*< 44>*/ 	printf("Zeichnest du einen Kreis an eine der\nmysteriösen Wände, wird ein ähnlich\ngeformtes Item erscheinen.")
          }

          void entrypoint_004_004() {
/*< 46>*/ 	start()
/*< 47>*/ 	printf("\x0E\x01\x0F\x00Die Tür ist versiegelt und lässt\nsich nicht öffnen.\x0F\x01\x0F")
          }

          void entrypoint_004_116() {
/*< 63>*/ 	start()
/*< 64>*/ 	printf("Zeichnest du drei Dreiecke an eine\nder mysteriösen Wände, werden dir\nvielleicht <y<Feen>> erscheinen.")
          }

          void entrypoint_004_117() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf("In der Nähe scheint sich irgendwo ein\n<y<Herzteil>> zu befinden.")
/*< 77>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 78>*/ 		printf("Oh... Du hast es ja bereits gefunden.\nUnd warum sagst du das nicht gleich?")
          	  case 1:
/*< 79>*/ 		printf("Um es zu finden, musst du dich jedoch\nwie ein <b<Mogma>> durch die Erde graben\nkönnen.")
          	}
          }

          void entrypoint_004_100() {
/*< 17>*/ 	start()
/*< 16>*/ 	printf("Boing-oing!")
          }

          void entrypoint_004_008() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf("Möchtest du diese Sairen verlassen?\n[1]Verlassen[2-]Bleiben")
/*<  8>*/ 	switch (choice(2)) {
          	  case 0:
          	  case 1:
          	}
          }

          void entrypoint_004_101() {
/*< 19>*/ 	start()
/*< 18>*/ 	printf("Schneidest du beim <b<superschnellen\nBambusfäller >>den Bambus <r<mehr als\n28-mal>>, erhältst du einen wertvollen\nSchatz.\nDer Betreiber, ein ehemaliges Model,\nhält laut eigenen Angaben den Rekord\nvon 43 Schnitten...")
          }

          void entrypoint_004_102() {
/*< 21>*/ 	start()
/*< 20>*/ 	printf("Erweist du dich im <b<Insektenparadies >>in\nweniger als <r<2 Minuten >>als Experte,\nerhältst du vielleicht seltene Insekten.")
          }

          void entrypoint_004_103() {
/*< 23>*/ 	start()
/*< 22>*/ 	printf("Wir <b<Mythen-Steine>> ziehen\nSchmetterlinge magisch an.\n\n\nErtönt dort, wo <r<Schmetterlinge\n>>fliegen, eine <r<wundervolle Melodie>>,\ndann... Boing-oing!")
          }

          void entrypoint_004_104() {
/*< 25>*/ 	start()
/*< 38>*/ 	printf("Zeichnest du einen Pfeil an eine der\nmysteriösen Wände, wird ein ähnlich\ngeformtes Item erscheinen.")
          }

          void entrypoint_004_105() {
/*< 27>*/ 	start()
/*< 42>*/ 	printf("Zeichnest du ein Symbol der Liebe an\neine der mysteriösen Wände, wird es\ndir bestimmt besser gehen.")
          }

