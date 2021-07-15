          void entrypoint_003_062() {
/*< 11>*/ 	start()
/*<  6>*/ 	printf("")
/*<  7>*/ 	give_item(62 0x3E);
          }

          void entrypoint_003_028() {
/*<118>*/ 	start()
/*<148>*/ 	check_item_flag(505, 2)
/*<149>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 6}) {
          	  case 0:
/*< 27>*/ 		check_item_flag(505, 3)
/*< 28>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 4}) {
          		  case 0:
/*< 24>*/ 			check_item_flag(505, 4)
/*< 25>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 2}) {
          			  case 0:
/*< 21>*/ 				check_item_flag(505, 5)
/*< 22>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 0}) {
          				  case 0:
/*<151>*/ 					printf("Du hast das letzte <y<Schlüsselfragment>>\nerhalten. Nun kannst du das Tor zum\nTempel öffnen.\n\nBegib dich zurück zum Gipfel und mache\ndich im Tempel auf die Suche nach Zelda.")
/*<588>*/ 					story_flags[120 /* us: 805A9AEA 0x20, jp: 805ACD6A 0x20 */] = true;
/*<677>*/ 					story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*<589>*/ 					story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
          				  case 1:
/*< 23>*/ 					printf("Du hast ein <y<Schlüsselfragment >>erhalten!\nEs ist Teil des Schlüssels, der das\nverschlossene Tor zum Tempel öffnet.\nEs fehlt dir nur noch<r< 1 Fragment>>!")
          				}
          			  case 1:
/*< 26>*/ 				printf("Du hast ein <y<Schlüsselfragment >>erhalten!\nEs ist Teil des Schlüssels, der das\nverschlossene Tor zum Tempel öffnet.\nEs fehlen dir nur noch<r< 2 Fragmente>>!")
          			}
          		  case 1:
/*< 29>*/ 			printf("Du hast ein <y<Schlüsselfragment >>erhalten!\nEs ist Teil des Schlüssels, der das\nverschlossene Tor zum Tempel öffnet.\nEs fehlen dir nur noch<r< 3 Fragmente>>!")
          		}
          	  case 1:
/*<150>*/ 		printf("Du hast ein <y<Schlüsselfragment >>erhalten!\nEs ist Teil des Schlüssels, der das\nverschlossene Tor zum Tempel öffnet.\n\nSammle alle 5 Fragmente, um ihn zu\nvervollständigen. Es fehlen dir nur\nnoch <r<4 Fragmente>>!")
          	}
          }

          void entrypoint_003_010() {
/*<136>*/ 	start()
/*< 77>*/ 	printf("Du hast das <y<Übungsschwert >>erhalten!\nDieses ziemlich scharfe Schwert wird\nvon den Schülern der Ritterschule bei\nÜbungskämpfen verwendet.\nDrücke \x0E\x02\x04\x02\x3CD, um dir anzusehen, welche\nGegenstände du besitzt.\x0E\x01\x11\x02\x3CD")
/*<383>*/ 	story_flags[28 /* us: 805A9ADA 0x10, jp: 805ACD5A 0x10 */] = true;
/*<569>*/ 	story_flags[571 /* us: 805A9B18 0x04, jp: 805ACD98 0x04 */] = true;
          }

          void entrypoint_003_097() {
/*<223>*/ 	start()
/*<578>*/ 	story_flags[730 /* us: 805A9B27 0x04, jp: 805ACDA7 0x04 */] = true;
/*<221>*/ 	check_item_flag(95, 1)
/*<222>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 24}) {
          	  case 0:
/*<224>*/ 		check_item_flag(96, 1)
/*<225>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 26}) {
          		  case 0:
/*<582>*/ 			printf("Du hast das <y+<Triforce der Weisheit\n>>erhalten! Diese Macht wurde einst den\nMenschen von den Göttern geschenkt.\n\nSammle die drei Artefakte, und dir wird\ndie <r<unendliche Kraft>> geschenkt, die dir\njeden noch so großen Wunsch gewährt.")
/*<527>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_539:
/*<539>*/ 			printf("Du hast das <y+<Triforce der Weisheit\n>>erhalten! Diese Macht wurde einst den\nMenschen von den Göttern geschenkt.\n\nSammle die drei Artefakte, und dir wird\ndie <r<unendliche Kraft>> geschenkt, die dir\njeden noch so großen Wunsch gewährt.")
/*<537>*/ 			printf("Sammle <r<ein>> weiteres Artefakt, um das\nTriforce zu vervollständigen.")
/*<574>*/ 			changeScene(1, 1) // 
          		}
          	  case 1:
/*<549>*/ 		check_item_flag(96, 1)
/*<550>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 68}) {
          		  case 0:
          			goto flw_539
          		  case 1:
/*<226>*/ 			printf("Du hast das <y+<Triforce der Weisheit\n>>erhalten! Diese Macht wurde einst den\nMenschen von den Göttern geschenkt.\n\nSammle die drei Artefakte, und dir wird\ndie <r<unendliche Kraft>> geschenkt, die dir\njeden noch so großen Wunsch gewährt.")
/*<536>*/ 			printf("Sammle <r<zwei>> weitere Artefakte, um das\nTriforce zu vervollständigen.")
/*<575>*/ 			changeScene(1, 1) // 
          		}
          	}
          }

          void entrypoint_003_104() {
/*<242>*/ 	start()
/*<238>*/ 	printf("Du hast die <y<Dämonen-Medaille>> erhalten!\nTrägst du sie bei dir, wirst du häufiger\nals sonst auf Rubine und Schätze stoßen.\n\nDoch Vorsicht! Ein Fluch lastet auf ihr,\nder dich am Öffnen deiner Tasche hindert!")
          }

          void entrypoint_003_121() {
/*<272>*/ 	start()
/*<559>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<563>*/ 		printf("Dein Schild wurde repariert!\nEr sieht aus wie neu!")
          	  case 1:
/*<268>*/ 		printf("Du hast den <y<starken Eisenschild>> erhalten!\nDieser äußerst robuste Schild gilt als der\nwiderstandsfähigste aller Eisenschilde.")
          	}
          }

          void entrypoint_003_139() {
/*<314>*/ 	start()
/*<310>*/ 	printf("")
          }

          void entrypoint_003_173() {
/*<360>*/ 	start()
/*<358>*/ 	printf("Du hast einen <y<Schattenkristall >>erhalten!\nDieser äußerst seltene Kristall beinhaltet\ndie konzentrierte Boshaftigkeit eines\nMonsters in kristallisierter Form.")
/*<640>*/ 	open_collection_screen();
          }

          void entrypoint_003_156() {
/*<373>*/ 	start()
/*<371>*/ 	printf("")
          }

          void entrypoint_003_045() {
/*<448>*/ 	start()
/*<450>*/ 	check_item_flag(500, 14)
/*<449>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 52}) {
          	  case 0:
/*<451>*/ 		printf("Du hast <y<Nayrus Tränen >>gefunden.\nDies hat deine Seele reifen lassen,\nLink!\n\nDoch noch ist die Prüfung nicht vorbei...\nBegib dich vorsichtig zum Ausgang, um ein\nZeichen deiner Reife zu erhalten.")
          	  case 1:
/*<447>*/ 		printf("Du hast eine von <y<Nayrus Tränen >>erhalten!\nIhre heilige Macht hindert die Hüter für\n<r<90 Sekunden >>daran, sich zu bewegen.\n\nSammle alle <r<15>>, um diese Prüfung zu\nbestehen!")
          	}
          }

          void entrypoint_003_190() {
/*<474>*/ 	start()
/*<472>*/ 	printf("")
          }

          void entrypoint_003_063() {
/*< 13>*/ 	start()
/*<  4>*/ 	printf("")
/*<  5>*/ 	give_item(63 0x3F);
          }

          void entrypoint_003_029() {
/*<117>*/ 	start()
/*< 59>*/ 	printf("Du hast den <y<goldenen Schlüssel>> erhalten!\nEr ist seltsam geformt und mit dekorativen\nMustern überzogen.")
          }

          void entrypoint_003_011() {
/*<135>*/ 	start()
/*<608>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<609>*/ 		printf("Du hast das <y<Schwert der Göttin>> erhalten!\nDieses legendäre Schwert ist erfüllt vom\nheiligen Licht der Göttin.\n\nDie Erinnerungen an deine zahlreichen\nKämpfe durchströmen es, wenn du es gen\nHimmel hältst.\n\n<r<<pling>Der Himmelsstrahl fügt nun maximalen\nSchaden zu>>!")
          		flw_462:
/*<462>*/ 		story_flags[3 /* us: 805A9AD9 0x10, jp: 805ACD59 0x10 */] = true;
/*<524>*/ 		changeScene(7, 0) // 
          	  case 1:
/*< 76>*/ 		printf("Du hast das <y<Schwert der Göttin>> erhalten!\nDieses legendäre Schwert ist erfüllt vom\nheiligen Licht der Göttin.")
          		goto flw_462
          	}
          }

          void entrypoint_003_080() {
/*<192>*/ 	start()
/*<173>*/ 	printf("")
          }

          void entrypoint_003_098() {
/*<227>*/ 	start()
/*<528>*/ 	printf("Du hast die <y<antike Seekarte>> erhalten!\nDiese Karte stammt aus einer Zeit, in der\ndiese Wüste noch ein Meer war.")
/*<530>*/ 	story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */] = true;
          }

          void entrypoint_003_105() {
/*<241>*/ 	start()
/*<237>*/ 	printf("Du hast die <y<Streu-Schleuder>> erhalten!\nHalte \x0E\x02\x04\x02\x29CD gedrückt, um mit einem Schuss\neinen großen Bereich abzudecken.\x0E\x01\x11\x02\xFCD")
          }

          void entrypoint_003_122() {
/*<271>*/ 	start()
/*<562>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<564>*/ 		printf("Dein Schild wurde repariert!\nEr sieht aus wie neu!")
          	  case 1:
/*<671>*/ 		switch (story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */]) {
          		  case 0:
/*<672>*/ 			printf("Du hast den <y<heiligen Schild>> erhalten!\nDank der Kraft, die ihn durchströmt,\nrepariert er sich selbst. Er kann Feuer,\nElektrizität und Flüche abwehren.")
          		  case 1:
/*<673>*/ 			printf("Du hast den <y<heiligen Schild>> erhalten!\nDank der Kraft, die ihn durchströmt,\n<r<repariert er sich selbst>>.\n\nEr ist nicht sehr haltbar und zerbricht\nleicht, wehrt dafür aber Feuer,\nElektrizität und Flüche ab.")
/*<674>*/ 			story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */] = true;
/*<518>*/ 			story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          		}
          	}
          }

          void entrypoint_003_174() {
/*<359>*/ 	start()
/*<357>*/ 	printf("Du hast eine <y<blaue Vogelfeder>> erhalten!\nDiese kostbare Feder kann man nur bei\nextrem seltenen blauen Vögeln finden.")
/*<641>*/ 	open_collection_screen();
          }

          void entrypoint_003_157() {
/*<376>*/ 	start()
/*<375>*/ 	printf("")
          }

          void entrypoint_003_046() {
/*<443>*/ 	start()
/*<445>*/ 	check_item_flag(500, 14)
/*<444>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 50}) {
          	  case 0:
/*<446>*/ 		printf("Du hast alle <y<heiligen Tränen >>gefunden.\nDies hat deine Seele reifen lassen,\nLink!\n\nDoch noch ist die Prüfung nicht vorbei...\nBegib dich vorsichtig zum Ausgang, um ein\nZeichen deiner Reife zu erhalten.")
          	  case 1:
/*<442>*/ 		printf("Du hast eine <y<heilige Träne>> erhalten!\nIhre heilige Macht hindert die Hüter für\n<r<90 Sekunden >>daran, sich zu bewegen.\n\nSammle alle <r<15>>, um diese Prüfung zu\nbestehen!")
          	}
          }

          void entrypoint_003_191() {
/*<473>*/ 	start()
/*<471>*/ 	printf("")
          }

          void entrypoint_003_064() {
/*< 14>*/ 	start()
/*<  2>*/ 	printf("")
/*<  3>*/ 	give_item(64 0x40);
          }

          void entrypoint_003_047() {
/*<102>*/ 	start()
/*< 44>*/ 	printf("Du hast eine <y<Lichtfrucht >>erhalten! Diese\nmysteriöse Frucht lässt <r<30 Sekunden>> lang\nSignallichter erscheinen, die dir den Weg\nzu den übrigen Tränen weisen.")
          }

          void entrypoint_003_012() {
/*<134>*/ 	start()
/*< 75>*/ 	printf("")
/*<541>*/ 	story_flags[582 /* us: 805A9B1B 0x20, jp: 805ACD9B 0x20 */] = true;
          }

          void entrypoint_003_081() {
/*<191>*/ 	start()
/*<172>*/ 	printf("Du hast einen <y<Herztrank SV>> erhalten!\nDiesen stark verfeinerten Herztrank\nkannst du <r<2-mal>> genießen. Er füllt <r<all\ndeine Herzen >>wieder auf.")
          }

          void entrypoint_003_099() {
/*<235>*/ 	start()
/*<592>*/ 	switch (story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */]) {
          	  case 0:
/*<593>*/ 		printf("Du hast die <y<Mogma-Klauen >>wieder!\nNutze sie, um dich durch Mogma-Löcher\nzu graben.")
/*<594>*/ 		story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */] = false;
          	  case 1:
/*<231>*/ 		printf("Du hast die <y<Mogma-Klauen>> erhalten!\nSolche Grabklauen bekommen selbst\nMogma nur selten zu sehen!\n\nMit ihnen kannst du dich sogar <g<unter der\nErde vorwärts bewegen>>. Halte Ausschau\nnach geeigneten Löchern!")
          	}
          }

          void entrypoint_003_106() {
/*<240>*/ 	start()
/*<236>*/ 	printf("")
          }

          void entrypoint_003_123() {
/*<282>*/ 	start()
/*<565>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<567>*/ 		printf("Dein Schild wurde repariert!\nEr sieht aus wie neu!")
          	  case 1:
/*<278>*/ 		printf("Du hast den <y<hochheiligen Schild>> erhalten!\nDieser mysteriöse Schild repariert sich\nselbst und ist um einiges robuster als sein\nVorgänger.")
          	}
          }

          void entrypoint_003_140() {
/*<313>*/ 	start()
/*<309>*/ 	printf("Du hast das <y<Meisterfänger-Netz>> erhalten!\nDein Netz ist nun doppelt so groß wie\nzuvor. Damit solltest du selbst die\nschnellsten Insekten erwischen.")
          }

          void entrypoint_003_175() {
/*<368>*/ 	start()
/*<366>*/ 	printf("Du hast einen <y<goldenen Schmuckschädel\n>>erhalten! Ein wirklich sehr seltenes\nSchmuckstück. Sein goldener Glanz wirkt\nseltsam.")
/*<642>*/ 	open_collection_screen();
          }

          void entrypoint_003_158() {
/*<378>*/ 	start()
/*<377>*/ 	printf("Du hast <y<Rax' Brief>> in Verwahrung\ngenommen! Darin stehen viele\npersönliche Dinge. Pass auf, dass er\nnicht irgendwo als Schmierpapier endet!")
          }

          void entrypoint_003_192() {
/*<476>*/ 	start()
/*<475>*/ 	printf("")
          }

          void entrypoint_003_065() {
/*< 15>*/ 	start()
/*<  1>*/ 	printf("Du hast einen <y<Rüstungstrank >>erhalten!\nDieser Trank halbiert jeglichen Schaden,\nden du erleidest! Die Wirkung einer\nFlasche hält <r<3 Minuten >>an.")
          }

          void entrypoint_003_048() {
/*<101>*/ 	start()
/*< 43>*/ 	printf("Du hast <r<ein>> <y<Juwel der Güte>> erhalten!\nDieses Juwel ist aus der Dankbarkeit einer\ndir unbekannten Person entstanden.\n\nSammle für <b<Morsego >>noch mehr\nDankbarkeit in kristallisierter Form.")
/*<645>*/ 	open_collection_screen();
          }

          void entrypoint_003_030() {
/*<116>*/ 	start()
/*< 58>*/ 	printf("Du hast den <y<Drachenschlüssel >>erhalten!\nDieser in sich verschlungene Drache\nwurde aus strahlendem Gold gefertigt.")
          }

          void entrypoint_003_013() {
/*<133>*/ 	start()
/*<404>*/ 	switch (story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */]) {
          	  case 0:
/*<436>*/ 		story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */] = false;
/*<504>*/ 		printf("Du hast das <y<wahre Master-Schwert>> wieder!\nNun kannst du die Bokblins endlich zurechtstutzen\nund wieder mit <pling><b<Phai >>sprechen.")
/*<587>*/ 		scene_flags[5 'Eldin Volcano Summit'][44 /* 0x4 10 */] = true;
          	  case 1:
/*< 74>*/ 		printf("")
          	}
          }

          void entrypoint_003_082() {
/*<190>*/ 	start()
/*<171>*/ 	printf("")
          }

          void entrypoint_003_107() {
/*<251>*/ 	start()
/*<247>*/ 	printf("")
          }

          void entrypoint_003_124() {
/*<281>*/ 	start()
/*<566>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<568>*/ 		printf("Dein Schild wurde repariert!\nEr sieht aus wie neu!")
          	  case 1:
/*<277>*/ 		printf("Du hast den <y<göttlichen Schild>> erhalten!\nDieser mysteriöse Schild repariert sich\nselbst und ist um ein Vielfaches robuster\nals sein Vorgänger.")
          	}
          }

          void entrypoint_003_141() {
/*<312>*/ 	start()
/*<647>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<648>*/ 		printf("Du hast <numeric arg0> <y<\x0E\x03\x04\x02\x3CD>> erhalten!\nSchwärme dieser Insekten fallen alle zehn\nJahre über das Land her und vernichten\ndie komplette Vegetation.")
          		flw_616:
/*<616>*/ 		open_collection_screen();
          	  case 1:
/*<308>*/ 		printf("Du hast <numeric arg0> <y<\x0E\x03\x04\x02\x3CD>> gefangen!\nSchwärme dieser Insekten fallen alle zehn\nJahre über das Land her und vernichten\ndie komplette Vegetation.")
          		goto flw_616
          	}
          }

          void entrypoint_003_176() {
/*<367>*/ 	start()
/*<365>*/ 	printf("Du hast das <y<Geschenk der Göttin>> erhalten!\nEs heißt, dieser legendäre, sehr seltene\nSchatz habe einst der Göttin selbst gehört.")
/*<643>*/ 	open_collection_screen();
          }

          void entrypoint_003_159() {
/*<382>*/ 	start()
/*<380>*/ 	printf("Du hast <y<Terris Insektenkäfig>> erhalten!\nDarin befindet sich Terris Lieblingsinsekt.\nBringe ihm den Käfig schnell zurück!")
          }

          void entrypoint_003_193() {
/*<478>*/ 	start()
/*<477>*/ 	printf("")
          }

          void entrypoint_003_200() {
/*<498>*/ 	start()
/*<496>*/ 	printf("")
          }

          void entrypoint_003_066() {
/*< 10>*/ 	start()
          	printf("Du hast einen <y<Rüstungstrank V>> erhalten!\nDieser verfeinerte Trank schützt dich für\n<r<3 Minuten>> vor jeglichem Schaden.")
          }

          void entrypoint_003_049() {
/*<100>*/ 	start()
/*<405>*/ 	switch (story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */]) {
          	  case 0:
/*<406>*/ 		printf("Du hast den <y<magischen Krug >>wieder!\nEndlich kannst du wieder Dinge durch die\nGegend pusten.")
/*<427>*/ 		open_item_wheel(4)
/*<428>*/ 		story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */] = false;
          	  case 1:
/*< 42>*/ 		printf("Du hast den <y<magischen Krug >>erhalten!\nDiesem uralten und mysteriösen Artefakt\nentströmt starker Wind.")
/*<407>*/ 		open_item_wheel(4)
          	}
          }

          void entrypoint_003_031() {
/*<115>*/ 	start()
/*< 57>*/ 	printf("Du hast das <y<uralte Gebilde>> erhalten!\nEs ist aus Gold gefertigt und sieht aus wie\nein Bestandteil von etwas Größerem. Seine\nOberfläche ist mit Schaltkreisen versehen.")
          }

          void entrypoint_003_014() {
/*<132>*/ 	start()
/*< 73>*/ 	printf("")
          }

          void entrypoint_003_083() {
/*<189>*/ 	start()
/*<170>*/ 	printf("")
          }

          void entrypoint_003_108() {
/*<250>*/ 	start()
/*<246>*/ 	printf("Du hast die <y<mittlere Geldbörse>> erhalten!\nSie bietet etwas mehr Platz als deine\nalte Geldbörse. In ihr kannst du bis zu\n<r<500 Rubine >>aufbewahren!")
          }

          void entrypoint_003_125() {
/*<280>*/ 	start()
/*<276>*/ 	printf("Du hast den <y<Hylia-Schild>> erhalten!\nEr enthält die Macht des Helden.\nNichts und niemand kann ihn zerstören!")
/*<519>*/ 	story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          }

          void entrypoint_003_142() {
/*<311>*/ 	start()
/*<649>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<650>*/ 		printf("Du hast <numeric arg0> <y<\x0E\x03\x04\x02\x4CD>> erhalten!\nWird der Panzer dieses Insekts poliert,\ngewinnt es an Stärke. Es zählt zu den\nkräftigsten aller Insekten.")
          		flw_617:
/*<617>*/ 		open_collection_screen();
          	  case 1:
/*<307>*/ 		printf("Du hast <numeric arg0> <y<\x0E\x03\x04\x02\x4CD>> gefangen!\nWird der Panzer dieses Insekts poliert,\ngewinnt es an Stärke. Es zählt zu den\nkräftigsten aller Insekten.")
          		goto flw_617
          	}
          }

          void entrypoint_003_177() {
/*<387>*/ 	start()
/*<385>*/ 	printf("")
          }

          void entrypoint_003_194() {
/*<489>*/ 	start()
/*<487>*/ 	printf("Du hast den <y<Wundertrank SV>> erhalten!\nDieser stark verfeinerte Trank repariert\ndeinen Schild <r<automatisch>>, stellt <r<8 >>Herzen\nwieder her und ist <r<2-mal>> einsetzbar.")
          }

          void entrypoint_003_067() {
/*< 90>*/ 	start()
/*< 33>*/ 	printf("")
          }

          void entrypoint_003_032() {
/*<114>*/ 	start()
/*< 56>*/ 	printf("Du hast einen <s<silbernen Rubin >>erhalten!\nEr ist sagenhafte <r<100 Rubine>> wert!\nFühlt sich gut an, nicht wahr?")
          }

          void entrypoint_003_015() {
/*<131>*/ 	start()
/*< 72>*/ 	printf("")
          }

          void entrypoint_003_084() {
/*<188>*/ 	start()
/*<169>*/ 	printf("Du hast einen <y<Ausdauertrank>> erhalten!\nTrinke ihn, und deine Ausdaueranzeige\nleert sich langsamer. Die Wirkung einer\nFlasche hält <r<3 Minuten >>an.")
          }

          void entrypoint_003_109() {
/*<249>*/ 	start()
/*<245>*/ 	printf("Du hast die <y<große Geldbörse>> erhalten!\nSie bietet viel mehr Platz als deine\nalte Geldbörse. In ihr kannst du bis\nzu <r<1000 Rubine >>aufbewahren!")
          }

          void entrypoint_003_126() {
/*<279>*/ 	start()
/*<275>*/ 	printf("Du hast den <y<Wundertrank>> erhalten!\nDieser mysteriöse Trank stellt deine\nSchildanzeige <r<komplett>> wieder her und\nfüllt außerdem <r<4>> Herzen auf.")
          }

          void entrypoint_003_143() {
/*<318>*/ 	start()
/*<651>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<652>*/ 		printf("Du hast <numeric arg0> <y<\x0E\x03\x04\x02\x5CD>> erhalten!\nErhitzt man ihr Gift, erhält man eine\nwirksame Medizin. Halte dich von\ngroßen Schwärmen fern!")
          		flw_618:
/*<618>*/ 		open_collection_screen();
          	  case 1:
/*<316>*/ 		printf("Du hast <numeric arg0> <y<\x0E\x03\x04\x02\x5CD>> gefangen!\nErhitzt man ihr Gift, erhält man eine\nwirksame Medizin. Halte dich von\ngroßen Schwärmen fern!")
          		goto flw_618
          	}
          }

          void entrypoint_003_160() {
/*<381>*/ 	start()
/*<379>*/ 	printf("Du hast eine <y<Rassel>> erhalten!\nVon vielen Babys heiß geliebt. Wer mag\ndiese Rassel wohl verloren haben?")
          }

          void entrypoint_003_178() {
/*<386>*/ 	start()
/*<384>*/ 	printf("")
          }

          void entrypoint_003_195() {
/*<488>*/ 	start()
/*<486>*/ 	printf("Du hast <y<heiße Kürbissuppe>> erhalten!\nDiese hausgemachte Kürbissuppe kühlt\ninnerhalb von <r<5 Minuten>> ab!")
          }

          void entrypoint_003_068() {
/*< 89>*/ 	start()
/*< 32>*/ 	printf("Du hast die <y<Wasserdrachenschuppe >>erhalten!\nEiner der drei Schätze der Göttin.\nEr ermöglicht dir zu tauchen und die\nWasserschraube auszuführen.")
/*<500>*/ 	story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */] = true;
          }

          void entrypoint_003_050() {
/*< 99>*/ 	start()
/*< 41>*/ 	printf("Du hast die <y<Dungeon-Karte>> erhalten!\nSie zeigt dir eine Übersicht deiner Umgebung\nund welche Räume du noch aufsuchen musst.")
/*<509>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1, 'next': 508, 'param3': 30}
/*<508>*/ 	switch (story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */]) {
          	  case 0:
/*<613>*/ 		story_flags[850 /* us: 805A9B34 0x01, jp: 805ACDB4 0x01 */] = true;
/*<510>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': -1, 'param3': 34}
          	  case 1:
/*<513>*/ 		printf("Sie weist dich außerdem auf Schatztruhen\nhin! Behalte sie deshalb gut im Auge.")
/*<512>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 511, 'param3': 34}
/*<511>*/ 		story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */] = true;
          	}
          }

          void entrypoint_003_033() {
/*<113>*/ 	start()
/*< 55>*/ 	printf("Du hast einen <y+<goldenen Rubin >>erhalten!\nEr ist unglaubliche <r<300 Rubine>> wert!\nAber behalte das lieber für dich...")
          }

          void entrypoint_003_016() {
/*<130>*/ 	start()
/*< 71>*/ 	printf("")
          }

          void entrypoint_003_085() {
/*<187>*/ 	start()
/*<168>*/ 	printf("Du hast einen <y<Ausdauertrank V>> erhalten!\nDieser verfeinerte Trank verhindert, dass\nsich deine Ausdaueranzeige leert. Die\nWirkung einer Flasche hält <r<3 Minuten >>an.")
          }

          void entrypoint_003_127() {
/*<290>*/ 	start()
/*<286>*/ 	printf("Du hast den <y<Wundertrank V>> erhalten!\nDieser verfeinerte Trank stellt deine\nSchildanzeige <r<automatisch>> wieder her und\nfüllt außerdem <r<8>> Herzen auf.")
          }

          void entrypoint_003_144() {
/*<317>*/ 	start()
/*<653>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<654>*/ 		printf("Du hast <numeric arg0> <y<\x0E\x03\x04\x02\x6CD\n>>erhalten! Mit seinen starken Greifarmen\nmacht dieses Insekt Jagd auf seine Beute.\nEs lebt gerne in luftigen Höhen.")
          		flw_619:
/*<619>*/ 		open_collection_screen();
          	  case 1:
/*<315>*/ 		printf("Du hast <numeric arg0> <y<\x0E\x03\x04\x02\x6CD\n>>gefangen! Mit seinen starken Greifarmen\nmacht dieses Insekt Jagd auf seine Beute.\nEs lebt gerne in luftigen Höhen.")
          		goto flw_619
          	}
          }

          void entrypoint_003_161() {
/*<340>*/ 	start()
/*<338>*/ 	printf("Du hast <y<Bienenlarven>> erhalten!\nGelten als sehr nahrhaft, können aber auch\nfür Handwerksarbeiten genutzt werden.")
/*<628>*/ 	open_collection_screen();
          }

          void entrypoint_003_179() {
/*<391>*/ 	start()
/*<389>*/ 	printf("")
          }

          void entrypoint_003_196() {
/*<493>*/ 	start()
/*<491>*/ 	printf("")
          }

          void entrypoint_003_069() {
/*< 88>*/ 	start()
/*< 31>*/ 	printf("")
          }

          void entrypoint_003_051() {
/*< 98>*/ 	start()
/*< 40>*/ 	printf("")
          }

          void entrypoint_003_034() {
/*<112>*/ 	start()
/*< 54>*/ 	printf("Du hast eine <black<Rubin-Falle>> erhalten!\nDir wurden <r<10 Rubine >>abgezogen.\nWie gemein...")
          }

          void entrypoint_003_017() {
/*<129>*/ 	start()
/*< 70>*/ 	printf("Du hast das <y<Seelengefäß >>erhalten!\nDiese geheimnisvolle Pflanze spiegelt\ndeine Seele wider, Link.")
          }

          void entrypoint_003_086() {
/*<186>*/ 	start()
/*<167>*/ 	printf("Du hast einen <y<Lufttrank>> erhalten!\nTrinke ihn, und deine Luftanzeige leert\nsich langsamer. Die Wirkung einer Flasche\nhält <r<3 Minuten >>an.")
          }

          void entrypoint_003_110() {
/*<248>*/ 	start()
/*<244>*/ 	printf("Du hast die <y<riesige Geldbörse>> erhalten!\nSie bietet noch viel mehr Platz als deine\nalte Geldbörse. In ihr kannst du bis zu\n<r<5000 Rubine >>aufbewahren!")
          }

          void entrypoint_003_128() {
/*<289>*/ 	start()
/*<285>*/ 	printf("Du hast die <y<kleine Deku-Tasche >>erhalten!\nMit ihr kannst du <r<10 >>weitere Deku-Kerne\nbei dir tragen. Sehr nützlich, wenn du gern\ndie Schleuder einsetzt.")
          }

          void entrypoint_003_145() {
/*<322>*/ 	start()
/*<655>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<656>*/ 		printf("Du hast <numeric arg0> <y<\x0E\x03\x04\x02\x7CD>> erhalten!\nAngeblich färbt sich dieses Insekt rot,\nwenn man es mit Erz füttert. Ist sehr\nruhig und bewegt sich kaum.")
          		flw_620:
/*<620>*/ 		open_collection_screen();
          	  case 1:
/*<320>*/ 		printf("Du hast <numeric arg0> <y<\x0E\x03\x04\x02\x7CD>> gefangen!\nAngeblich färbt sich dieses Insekt rot,\nwenn man es mit Erz füttert. Ist sehr\nruhig und bewegt sich kaum.")
          		goto flw_620
          	}
          }

          void entrypoint_003_162() {
/*<339>*/ 	start()
/*<337>*/ 	printf("Du hast <numeric arg0> <y<\x0E\x03\x04\x02\xFCD>> erhalten!\nDiese Federn werden im Wolkenhort wegen\nihrer Seltenheit und Nützlichkeit hoch\ngeschätzt.")
/*<629>*/ 	open_collection_screen();
          }

          void entrypoint_003_197() {
/*<492>*/ 	start()
/*<585>*/ 	switch (story_flags[750 /* us: 805A9B29 0x40, jp: 805ACDA9 0x40 */]) {
          	  case 0:
/*<586>*/ 		printf("Du hast den <y<Lebensbaumkeimling\n>>ausgegraben! Hier würde es zu lang\ndauern, bis er herangewachsen ist. Pflanze\nihn an einem anderen Ort ein.")
          	  case 1:
/*<490>*/ 		printf("Du hast den <y<Lebensbaumkeimling\n>>erhalten! Ein Keimling des legendären\nBaumes, dessen Früchte jede noch so\nschwere Krankheit heilen sollen.")
/*<529>*/ 		story_flags[750 /* us: 805A9B29 0x40, jp: 805ACDA9 0x40 */] = true;
          	}
          }

          void entrypoint_003_052() {
/*< 97>*/ 	start()
/*<415>*/ 	switch (story_flags[164 /* us: 805A9AE3 0x08, jp: 805ACD63 0x08 */]) {
          	  case 0:
/*<597>*/ 		check_item_flag(105, 1)
/*<598>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 96}) {
          		  case 0:
/*<599>*/ 			printf("Du hast die <y<Streu-Schleuder >>wieder!\nJetzt kannst du endlich die Gegner auf\nPatrouille betäuben.")
          			flw_433:
/*<433>*/ 			open_item_wheel(0)
/*<417>*/ 			story_flags[164 /* us: 805A9AE3 0x08, jp: 805ACD63 0x08 */] = false;
          		  case 1:
/*<416>*/ 			printf("Du hast die <y<Schleuder >>wieder!\nJetzt kannst du endlich die Gegner auf\nPatrouille betäuben.")
          			goto flw_433
          		}
          	  case 1:
/*< 39>*/ 		printf("Du hast die <y<Schleuder >>erhalten!\nVerschieße mit ihr Deku-Kerne, um deine\nGegner zu betäuben.")
/*<153>*/ 		add_to_counter(493, 20)
/*<521>*/ 		open_item_wheel(0)
/*<520>*/ 		story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */] = true;
/*<522>*/ 		story_flags[569 /* us: 805A9B18 0x01, jp: 805ACD98 0x01 */] = true;
          	}
          }

          void entrypoint_003_035() {
/*<111>*/ 	start()
/*< 53>*/ 	printf("Du hast<r< 5 >><y<Juwelen der Güte >>erhalten.\nEin Juwel der Güte beinhaltet menschliche\nDankbarkeit in kristallisierter Form.\n\nHilfst du einem Menschen, so erhältst du\nstets <r<5 Einheiten>> davon.")
/*<646>*/ 	open_collection_screen();
          }

          void entrypoint_003_018() {
/*<128>*/ 	start()
/*< 69>*/ 	printf("")
          }

          void entrypoint_003_000() {
/*<146>*/ 	start()
/*<595>*/ 	switch (story_flags[817 /* us: 805A9B30 0x02, jp: 805ACDB0 0x02 */]) {
          	  case 0:
/*< 87>*/ 		printf("Hier ist nichts Brauchbares.")
          	  case 1:
/*<596>*/ 		printf("Du solltest besser nicht in anderer Leute\nSchränke stöbern!")
          	}
          }

          void entrypoint_003_087() {
/*<185>*/ 	start()
/*<166>*/ 	printf("Du hast einen <y<Lufttrank V>> erhalten!\nDieser verfeinerte Trank verhindert, dass\nsich deine Luftanzeige leert. Die Wirkung\neiner Flasche hält <r<3 Minuten >>an.")
          }

          void entrypoint_003_111() {
/*<259>*/ 	start()
/*<255>*/ 	printf("Du hast die <y<Luxus-Geldbörse>> erhalten!\nDiese enorme Geldbörse lässt selbst den\nreichsten Händler erblassen. In ihr kannst\ndu bis zu <r<9000 Rubine >>aufbewahren!")
          }

          void entrypoint_003_129() {
/*<288>*/ 	start()
/*<284>*/ 	printf("Du hast die <y<mittlere Deku-Tasche>>\nerhalten! Mit ihr kannst du <r<20 >>weitere\nDeku-Kerne bei dir tragen. Sehr nützlich,\nwenn du gern die Schleuder einsetzt.")
          }

          void entrypoint_003_146() {
/*<321>*/ 	start()
/*<657>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<658>*/ 		printf("Du hast <numeric arg0> <y<\x0E\x03\x04\x02\x8CD>> erhalten!\nEin weitverbreitetes Insekt. Manchmal hält\nes sich auch an seltsamen Orten auf.")
          		flw_621:
/*<621>*/ 		open_collection_screen();
          	  case 1:
/*<319>*/ 		printf("Du hast <numeric arg0> <y<\x0E\x03\x04\x02\x8CD>> gefangen!\nEin weitverbreitetes Insekt. Manchmal hält\nes sich auch an seltsamen Orten auf.")
          		goto flw_621
          	}
          }

          void entrypoint_003_163() {
/*<344>*/ 	start()
/*<342>*/ 	printf("Du hast <y<Wüstengras>> erhalten! Dieses Gras\nlässt sich vielleicht für etwas Nützliches\nverwenden, wenn man es trocknet.")
/*<630>*/ 	open_collection_screen();
          }

          void entrypoint_003_180() {
/*<390>*/ 	start()
/*<388>*/ 	printf("Du hast das <y<Insigne der Reife>> erhalten!\nDieses gravierte Artefakt soll dem Helden\ndas Versteck des Triforce enthüllen.")
/*<523>*/ 	story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */] = true;
          }

          void entrypoint_003_198() {
/*<495>*/ 	start()
/*<494>*/ 	printf("Du hast die <y<Lebensbaumfrucht >>erhalten!\nSie soll angeblich jede Krankheit heilen\nkönnen. Gib sie dem Donnerdrachen.")
          }

          void entrypoint_003_999() {
/*<611>*/ 	start()
/*<610>*/ 	printf("")
          }

          void entrypoint_003_053() {
/*< 96>*/ 	start()
/*< 38>*/ 	printf("Du hast den <y<Käfer >>erhalten!\nDieses käferartige Artefakt fliegt auf\nmagische Weise durch die Luft!\n\nBewege das Fadenkreuz an die gewünschte\nStelle und drücke \x0E\x02\x04\x02\x29CD, um den Käfer dort\nhinfliegen zu lassen!\x0E\x01\x11\x02\xFCD")
/*<422>*/ 	open_item_wheel(1)
          }

          void entrypoint_003_036() {
/*<110>*/ 	start()
/*< 52>*/ 	printf("Du hast <y<Glitzersporen >>erhalten!\nDieser feine Puder wird von Glitzerpilzen\nfreigesetzt.")
          }

          void entrypoint_003_019() {
/*<127>*/ 	start()
/*< 68>*/ 	printf("Du hast den <y<Holzbogen >>erhalten!\nDamit kannst du von Weitem mit hoher\nAngriffskraft Pfeile auf ein Ziel feuern.")
/*<679>*/ 	story_flags[1114 /* us: 805A9B57 0x01, jp: 805ACDD7 0x01 */] = true;
/*<152>*/ 	add_to_counter(498, 20)
/*<421>*/ 	open_item_wheel(7)
          }

          void entrypoint_003_001() {
/*<145>*/ 	start()
/*< 86>*/ 	printf("Du hast einen <y<kleinen Schlüssel >>erhalten!\nDamit lassen sich verschlossene Türen in\ndiesem Gebiet öffnen. Du kannst ihn aber\nnur ein einziges Mal verwenden.")
          }

          void entrypoint_003_070() {
/*<147>*/ 	start()
/*< 30>*/ 	printf("Du hast die <y<Insekten-Medaille >>erhalten!\nDamit findest du Insekten leichter.\nSuche auf der Karte nach \x0E\x02\x04\x02\x1ACD!")
          }

          void entrypoint_003_088() {
/*<184>*/ 	start()
/*<165>*/ 	printf("Du hast eine <y<Fee >>gefangen!\nDiese gütigen Wesen füllen <r<6 >>deiner Herzen auf.\n\n\nIn einer Flasche mitgenommen spendet sie dir\nihre heilende Energie <r<automatisch, wenn deine\nKräfte schwinden>>.")
          }

          void entrypoint_003_112() {
/*<258>*/ 	start()
/*<418>*/ 	switch (story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */]) {
          	  case 0:
/*<419>*/ 		printf("Du hast die <y<Abenteurertasche>> wieder!\nUnd sieh nur! Deine restlichen vermissten\nItems sind auch dabei!")
/*<435>*/ 		open_item_wheel(8)
/*<420>*/ 		story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */] = false;
          	  case 1:
/*<254>*/ 		printf("Du hast die <y<Abenteurertasche>> erhalten!\nSie bietet Platz für Items, die du während\ndeines Abenteuers finden wirst.")
/*<603>*/ 		open_adventure_pouch(0)
          	}
          }

          void entrypoint_003_147() {
/*<326>*/ 	start()
/*<659>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<660>*/ 		printf("Du hast <numeric arg0> <y<\x0E\x03\x04\x02\x9CD>> erhalten!\nMan sagt, in dem Bau des Insekts würde\nsich eine Wasserquelle befinden. So kann\nes in der Wüste überleben.")
          		flw_622:
/*<622>*/ 		open_collection_screen();
          	  case 1:
/*<324>*/ 		printf("Du hast <numeric arg0> <y<\x0E\x03\x04\x02\x9CD>> gefangen!\nMan sagt, in dem Bau des Insekts würde\nsich eine Wasserquelle befinden. So kann\nes in der Wüste überleben.")
          		goto flw_622
          	}
          }

          void entrypoint_003_164() {
/*<343>*/ 	start()
/*<341>*/ 	printf("Du hast einen <y<Eidechsenschwanz>> erhalten!\nDieser Eidechsenschwanz mit stacheliger\nKugel am Ende lässt sich vielleicht sinnvoll\nverarbeiten.")
/*<631>*/ 	open_collection_screen();
          }

          void entrypoint_003_181() {
/*<395>*/ 	start()
/*<393>*/ 	printf("")
          }

          void entrypoint_003_199() {
/*<499>*/ 	start()
/*<497>*/ 	printf("Du hast die <y<Zusatz-Geldbörse>> erhalten!\nIst deine normale Geldbörse voll, bietet\nsie Platz für weitere <r<300 Rubine>>.")
/*<644>*/ 	open_collection_screen();
          }

          void entrypoint_003_071() {
/*< 20>*/ 	start()
/*< 18>*/ 	printf("Du hast das <y<Schmetterlingsnetz >>erhalten!\nFange damit flink und leise Insekten und\nandere Dinge.")
/*<423>*/ 	open_item_wheel(2)
/*<612>*/ 	story_flags[849 /* us: 805A9B35 0x80, jp: 805ACDB5 0x80 */] = true;
          }

          void entrypoint_003_054() {
/*< 95>*/ 	start()
/*< 37>*/ 	printf("Du hast <y<Wasser >>erhalten!\nFarbloses, klares, reines Wasser. Es könnte\nsich vielleicht noch als nützlich erweisen.")
          }

          void entrypoint_003_037() {
/*<109>*/ 	start()
/*< 51>*/ 	printf("")
          }

          void entrypoint_003_002() {
/*<144>*/ 	start()
/*< 85>*/ 	printf("Du hast einen <g+<grünen Rubin>><g+< >>erhalten!\nEr ist <r<1 Rubin >>wert. Sammle so viele davon,\nwie du nur kannst!")
          }

          void entrypoint_003_089() {
/*<183>*/ 	start()
/*<164>*/ 	printf("")
          }

          void entrypoint_003_113() {
/*<257>*/ 	start()
/*<253>*/ 	printf("Du hast deine <y<Abenteurertasche >>vergrößert!\nNun kannst du <r<ein weiteres Item>> mit dir führen.")
/*<604>*/ 	open_adventure_pouch(1)
          }

          void entrypoint_003_130() {
/*<287>*/ 	start()
/*<283>*/ 	printf("Du hast die <y<große Deku-Tasche>> erhalten!\nMit ihr kannst du <r<30>> weitere Deku-Kerne\nbei dir tragen. Sehr nützlich, wenn du gern\ndie Schleuder einsetzt.")
          }

          void entrypoint_003_148() {
/*<325>*/ 	start()
/*<661>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<662>*/ 		printf("Du hast <numeric arg0> <y<\x0E\x03\x04\x02\xACD>> erhalten!\nDieses Insekt verbringt zehn Jahre seines\nLebens als Larve unter der Erde und lässt\nsich nur schwer fangen!")
          		flw_623:
/*<623>*/ 		open_collection_screen();
          	  case 1:
/*<323>*/ 		printf("Du hast <numeric arg0> <y<\x0E\x03\x04\x02\xACD>> gefangen!\nDieses Insekt verbringt zehn Jahre seines\nLebens als Larve unter der Erde und lässt\nsich nur schwer fangen!")
          		goto flw_623
          	}
          }

          void entrypoint_003_165() {
/*<348>*/ 	start()
/*<346>*/ 	printf("Du hast <y<Eldin-Erz>> erhalten!\nEin äußerst hartes und robustes Erz,\ndas glitzert. Lässt sich gut weiterverarbeiten.")
/*<632>*/ 	open_collection_screen();
          }

          void entrypoint_003_182() {
/*<394>*/ 	start()
/*<392>*/ 	printf("")
          }

          void entrypoint_003_072() {
/*< 19>*/ 	start()
/*<506>*/ 	switch (has_empty_bottle()) {
          	  case 0:
/*<507>*/ 		printf("Du hast eine <y<Fee >>gefunden!\nDiese gütigen Wesen füllen <r<6 >>deiner Herzen auf.\n\n\nDu besitzt jedoch keine leere <y<Flasche>>, also lass sie\nwieder frei.")
          	  case 1:
/*<505>*/ 		printf("Du hast eine <y<Fee >>gefunden!\nDiese gütigen Wesen füllen <r<6 >>deiner Herzen auf.")
          	}
          }

          void entrypoint_003_055() {
/*< 94>*/ 	start()
/*<614>*/ 	switch (story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */]) {
          	  case 0:
/*<615>*/ 		printf("Du hast <y<Pilzsporen >>erhalten!\nSie stammen von einem gigantischen Pilz.\nMit ihnen kannst du die Verletzungen des\nVogels heilen!")
          	  case 1:
/*< 36>*/ 		printf("Du hast <y<Pilzsporen >>erhalten!\nSie stammen von einem gigantischen Pilz.\nEs kann nicht schaden, sie mitzunehmen.")
          	}
          }

          void entrypoint_003_038() {
/*<108>*/ 	start()
/*< 50>*/ 	printf("")
          }

          void entrypoint_003_020() {
/*<126>*/ 	start()
/*<408>*/ 	switch (story_flags[162 /* us: 805A9AE3 0x02, jp: 805ACD63 0x02 */]) {
          	  case 0:
/*<409>*/ 		printf("Du hast den <y<Greifhaken>> wieder!\nEndlich kannst du dich wieder an weit\nentfernte Orte hangeln.")
/*<429>*/ 		open_item_wheel(6)
/*<430>*/ 		story_flags[162 /* us: 805A9AE3 0x02, jp: 805ACD63 0x02 */] = false;
          	  case 1:
/*< 67>*/ 		printf("Du hast den <y<Greifhaken >>erhalten!\n\n\n\nEiner der drei Schätze der Göttin.\nNutze die Klaue an der Kette, um dich\nan ein <r<Greifhaken-Ziel>> oder an <r<Efeu>>\nziehen zu lassen.")
/*<501>*/ 		story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */] = true;
/*<410>*/ 		open_item_wheel(6)
          	}
          }

          void entrypoint_003_003() {
/*<143>*/ 	start()
/*<591>*/ 	switch (story_flags[817 /* us: 805A9B30 0x02, jp: 805ACDB0 0x02 */]) {
          	  case 0:
/*<590>*/ 		printf("Du hast einen <b+<blauen Rubin>> gefunden!\nEr ist <r<5 Rubine >>wert. Steck ihn in deinen\nBeutel und nimm ihn mit!")
          	  case 1:
/*< 84>*/ 		printf("Du hast einen <b+<blauen Rubin>> erhalten!\nEr ist <r<5 Rubine >>wert. Das nennt man einen\nglücklichen Fund!")
          	}
          }

          void entrypoint_003_114() {
/*<256>*/ 	start()
/*<252>*/ 	printf("Du hast eine <y<Lebenskraft-Medaille>>\nerhalten! Trägst du sie bei dir, erhältst du\n<r<ein weiteres Herz>>. Entscheide selbst, wann\nes lohnt, diese Medaille mit dir zu führen.")
          }

          void entrypoint_003_131() {
/*<298>*/ 	start()
/*<294>*/ 	printf("Du hast den <y<kleinen Köcher>> erhalten!\nMit ihm kannst du <r<5>> weitere Pfeile bei dir\ntragen. Nutze ihn, wenn du häufig deinen\nBogen einsetzen möchtest.")
          }

          void entrypoint_003_149() {
/*<330>*/ 	start()
/*<663>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<664>*/ 		printf("Du hast <numeric arg0> <y<\x0E\x03\x04\x02\xBCD>> erhalten!\nDie Facettenaugen dieses Insekts glitzern\nwie Rubine. Seine langen Flügel sind\ndurchsichtig wie Glas.")
          		flw_624:
/*<624>*/ 		open_collection_screen();
          	  case 1:
/*<328>*/ 		printf("Du hast <numeric arg0> <y<\x0E\x03\x04\x02\xBCD>> gefangen!\nDie Facettenaugen dieses Insekts glitzern\nwie Rubine. Seine langen Flügel sind\ndurchsichtig wie Glas.")
          		goto flw_624
          	}
          }

          void entrypoint_003_166() {
/*<347>*/ 	start()
/*<345>*/ 	printf("Du hast eine <y<Äonenblume>> erhalten!\nBlühte bereits in vergangenen Zeiten\nwunderschön und soll im Dunkeln hell\nleuchten.")
/*<633>*/ 	open_collection_screen();
          }

          void entrypoint_003_183() {
/*<482>*/ 	start()
/*<480>*/ 	printf("")
          }

          void entrypoint_003_056() {
/*< 93>*/ 	start()
/*< 35>*/ 	printf("Du hast die <y<Grabklauen >>erhalten!\nDrücke (A), um mit ihnen in auffällig\naussehendem Erdreich zu graben.")
          }

          void entrypoint_003_039() {
/*<107>*/ 	start()
/*< 49>*/ 	printf("")
          }

          void entrypoint_003_021() {
/*<125>*/ 	start()
/*< 66>*/ 	printf("Du hast die <y<Vogelfigur >>erhalten!\nDiese Figur weist dich als Sieger des\nheutigen zeremoniellen Wettfluges aus.\nZelda wird sich freuen!")
/*<584>*/ 	changeScene(3, 0) // 
          }

          void entrypoint_003_004() {
/*<142>*/ 	start()
/*< 83>*/ 	printf("Du hast einen <r+<roten Rubin>> erhalten!\nEr ist <r<20 Rubine >>wert. Was für ein Glück!")
          }

          void entrypoint_003_073() {
/*<154>*/ 	start()
/*< 17>*/ 	printf("")
          }

          void entrypoint_003_090() {
/*<182>*/ 	start()
/*<163>*/ 	printf("Du hast den <y<Eisenbogen>> erhalten!\nDieser Bogen wurde für äußerst erfahrene\nSchützen gefertigt. Seine Kraft übersteigt\ndie deines alten Bogens.")
          }

          void entrypoint_003_115() {
/*<267>*/ 	start()
/*<263>*/ 	printf("")
          }

          void entrypoint_003_132() {
/*<297>*/ 	start()
/*<293>*/ 	printf("Du hast den <y<mittleren Köcher>> erhalten!\nMit ihm kannst du <r<10>> weitere Pfeile bei dir\ntragen. Nutze ihn, wenn du häufig deinen\nBogen einsetzen möchtest.")
          }

          void entrypoint_003_167() {
/*<362>*/ 	start()
/*<361>*/ 	printf("Du hast einen <y<Bernsteinhalbmond\n>>erhalten! Niemand weiß, wie dieses\nbernsteinfarbene Kleinod seine endgültige\nForm erhielt.")
/*<634>*/ 	open_collection_screen();
          }

          void entrypoint_003_184() {
/*<481>*/ 	start()
/*<479>*/ 	printf("")
          }

          void entrypoint_003_057() {
/*< 92>*/ 	start()
/*<396>*/ 	check_item_flag(52, 1)
/*<397>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 28}) {
          	  case 0:
/*< 16>*/ 		printf("Du hast <y<5 Deku-Kerne>> erhalten!\nDiese kleinen Kerne kannst du mit der\nSchleuder verschießen. Achte dabei immer\nauf deinen Munitionsvorrat.")
          	  case 1:
/*<398>*/ 		printf("")
/*<503>*/ 		add_to_counter(493, -5)
          	}
          }

          void entrypoint_003_022() {
/*<124>*/ 	start()
/*< 65>*/ 	printf("")
          }

          void entrypoint_003_005() {
/*<141>*/ 	start()
/*< 82>*/ 	printf("Das <y+<Triforce >>ist vollständig! Mit seiner Macht\nkannst du Zeldas Bitte nachkommen und den\n<b<Todbringer>> <r<vernichten>>.")
/*<540>*/ 	story_flags[645 /* us: 805A9B1D 0x40, jp: 805ACD9D 0x40 */] = true;
/*<583>*/ 	story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */] = true;
          }

          void entrypoint_003_074() {
/*<155>*/ 	start()
/*<675>*/ 	scene_flags[11 'Faron: Skyview Temple'][119 /* 0xF 80 */] = true;
/*<600>*/ 	zone_temp_flags[1 /* 0x1 02 */] = true;
/*<676>*/ 	switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          	  case 0:
          		flw_156:
/*<156>*/ 		printf("Du hast <y<heiliges Wasser>> erhalten!\nEs sieht wie gewöhnliches Wasser aus,\nstrahlt jedoch spürbar Energie aus.")
          	  case 1:
/*<514>*/ 		switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          		  case 0:
/*<515>*/ 			printf("Du hast <y<heiliges Wasser >>erhalten!\nDieses reine Wasser hat die Kraft, den\nWasserdrachen zu heilen. Diese Kraft ist\nin keinem normalen Wasser zu finden.")
/*<601>*/ 			scene_flags[11 'Faron: Skyview Temple'][98 /* 0xD 04 */] = false;
/*<602>*/ 			scene_flags[11 'Faron: Skyview Temple'][97 /* 0xD 02 */] = false;
          		  case 1:
          			goto flw_156
          		}
          	}
          }

          void entrypoint_003_091() {
/*<181>*/ 	start()
/*<162>*/ 	printf("Du hast den <y<heiligen Bogen>> erhalten!\nDie heilige Macht der Göttin verleiht ihm\nKraft und bringt Verderben über all deine\nFeinde!")
          }

          void entrypoint_003_116() {
/*<266>*/ 	start()
/*<551>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<552>*/ 		printf("Dein Schild wurde repariert!\nEr sieht aus wie neu!")
          	  case 1:
/*<262>*/ 		printf("Du hast den <y<Holzschild>> erhalten!\nEr ist leicht zu handhaben, hält aber\nnicht viel aus und brennt leicht.")
/*<516>*/ 		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          	}
          }

          void entrypoint_003_133() {
/*<296>*/ 	start()
/*<292>*/ 	printf("Du hast den <y<großen Köcher>> erhalten!\nMit ihm kannst du <r<15>> weitere Pfeile bei dir\ntragen. Nutze ihn, wenn du häufig deinen\nBogen einsetzen möchtest.")
          }

          void entrypoint_003_150() {
/*<329>*/ 	start()
/*<665>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<666>*/ 		printf("Du hast <numeric arg0> <y<\x0E\x03\x04\x02\xCCD>> erhalten!\nDieses Insekt liebt alles, was stinkt, und\nrollt es in sein Nest. Sieht dabei ziemlich\nniedlich aus.")
          		flw_625:
/*<625>*/ 		open_collection_screen();
          	  case 1:
/*<327>*/ 		printf("Du hast <numeric arg0> <y<\x0E\x03\x04\x02\xCCD>> gefangen!\nDieses Insekt liebt alles, was stinkt, und\nrollt es in sein Nest. Sieht dabei ziemlich\nniedlich aus.")
          		goto flw_625
          	}
          }

          void entrypoint_003_168() {
/*<364>*/ 	start()
/*<363>*/ 	printf("Du hast einen <y<Finsterhalbmond >>erhalten!\nEr ähnelt dem Bernsteinhalbmond, hat\njedoch eine andere Beschaffenheit und ist\nnur an bestimmten Orten zu finden.")
/*<635>*/ 	open_collection_screen();
          }

          void entrypoint_003_185() {
/*<484>*/ 	start()
/*<483>*/ 	printf("")
          }

          void entrypoint_003_040() {
/*<106>*/ 	start()
/*< 48>*/ 	printf("Du hast <y<5 Bomben >>erhalten!\nWirf oder rolle sie, um Objekte in die Luft\nzu sprengen. Nimm Bomben, die du\nunterwegs findest, für später mit.")
          }

          void entrypoint_003_023() {
/*<123>*/ 	start()
/*< 64>*/ 	printf("")
          }

          void entrypoint_003_006() {
/*<140>*/ 	start()
/*< 81>*/ 	printf("Du hast ein <y<Herz >>gefunden!\nEs ist mit heilender Energie erfüllt und\nstellt <r<ein Herz>> wieder her.")
          }

          void entrypoint_003_092() {
/*<180>*/ 	start()
/*<402>*/ 	switch (story_flags[165 /* us: 805A9AE3 0x10, jp: 805ACD63 0x10 */]) {
          	  case 0:
/*<403>*/ 		printf("Du hast die <y<Bombentasche >>wieder!\nKrach-Bumm! Endlich kannst du wieder\nSachen in die Luft sprengen!")
/*<426>*/ 		open_item_wheel(3)
/*<434>*/ 		story_flags[165 /* us: 805A9AE3 0x10, jp: 805ACD63 0x10 */] = false;
          	  case 1:
/*<424>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*<425>*/ 			printf("Du hast eine <y<Bombentasche>> erhalten!\n<b<Ferri >>hat sie dir netterweise überlassen.\nBeseitige mit ihr Hindernisse.")
/*<678>*/ 			story_flags[1115 /* us: 805A9B57 0x02, jp: 805ACDD7 0x02 */] = true;
          		  case 1:
/*<161>*/ 			printf("Du hast eine <y<Bombentasche>> gefunden!\nIn dieser nützlichen Tasche kannst du\nDonnerblumen mit dir herumtragen.\n\nSie ermöglicht dir das Vordringen an Orte,\ndie dir sonst verwehrt bleiben. Frage <b<Ferri>>,\nob er sie dir leiht!")
/*<414>*/ 			open_item_wheel(3)
          		}
          	}
          }

          void entrypoint_003_075() {
/*<197>*/ 	start()
/*<178>*/ 	printf("Du hast den <y<Greifkäfer>> erhalten!\nMit seinen größeren Zangen kann er\nItems aufheben und tragen!\n\nDrücke (Z), um nach unten zu blicken\nund ein getragenes Item abzuwerfen.\x0E\x01\x11\x02\x7CD")
          }

          void entrypoint_003_117() {
/*<265>*/ 	start()
/*<553>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<555>*/ 		printf("Dein Schild wurde repariert!\nEr sieht aus wie neu!")
          	  case 1:
/*<261>*/ 		printf("Du hast den <y<harten Holzschild>> erhalten!\nEr ist immer noch leicht zu handhaben,\nhält aber mehr aus als sein Vorgänger.")
          	}
          }

          void entrypoint_003_134() {
/*<295>*/ 	start()
/*<291>*/ 	printf("Du hast die <y<kleine Bombentasche >>erhalten!\nMit ihr kannst du <r<5>> weitere Bomben bei dir\ntragen. Praktisch, wenn du häufig Bomben\neinsetzen möchtest.")
          }

          void entrypoint_003_151() {
/*<334>*/ 	start()
/*<667>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<668>*/ 		printf("Du hast <numeric arg0> <y<\x0E\x03\x04\x02\xDCD>> erhalten!\nSehr beliebt bei den Kindern im\nWolkenhort. Achtung! Kneift gerne\nmit den Zangen!")
          		flw_626:
/*<626>*/ 		open_collection_screen();
          	  case 1:
/*<332>*/ 		printf("Du hast <numeric arg0> <y<\x0E\x03\x04\x02\xDCD>> gefangen!\nSehr beliebt bei den Kindern im\nWolkenhort. Achtung! Kneift gerne\nmit den Zangen!")
          		goto flw_626
          	}
          }

          void entrypoint_003_169() {
/*<352>*/ 	start()
/*<350>*/ 	printf("Du hast <y<Glibber>> erhalten!\nNicht besonders hübsch, aber für eine\nVielzahl von Dingen verwendbar.")
/*<636>*/ 	open_collection_screen();
          }

          void entrypoint_003_058() {
/*<453>*/ 	start()
/*<454>*/ 	check_item_flag(491, 199)
/*<455>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 54}) {
          	  case 0:
/*<452>*/ 		printf("")
          	  case 1:
/*<456>*/ 		printf("")
          	}
          }

          void entrypoint_003_186() {
/*<466>*/ 	start()
/*<464>*/ 	printf("Du hast die <y<Hymne der Göttin>> erlernt!\nDiese mysteriöse Melodie stammt aus\nuralten Zeiten.")
/*<579>*/ 	changeScene(2, 0) // 
          }

          void entrypoint_003_041() {
/*<105>*/ 	start()
/*< 47>*/ 	printf("Du hast <y<10 Bomben >>erhalten!\nWirf oder rolle sie, um Objekte in die Luft\nzu sprengen. Bis du sie brauchst, kannst\ndu sie in deiner Bombentasche sammeln.")
          }

          void entrypoint_003_024() {
/*<122>*/ 	start()
/*< 63>*/ 	printf("")
          }

          void entrypoint_003_007() {
/*<139>*/ 	start()
/*<157>*/ 	check_item_flag(19, 1)
/*<158>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          	  case 0:
/*< 80>*/ 		printf("Du hast einen<y< verschossenen Pfeil\n>>gefunden! Er ist noch ganz und kann\nerneut verwendet werden. Praktisch!")
          	  case 1:
/*<159>*/ 		printf("")
          	}
          }

          void entrypoint_003_093() {
/*<179>*/ 	start()
/*<160>*/ 	printf("Du hast einen <y<Herzcontainer>> erhalten!\nDeine Lebensenergie wurde um <r<ein Herz\n>>erhöht und wieder vollständig aufgefüllt!")
          }

          void entrypoint_003_076() {
/*<196>*/ 	start()
/*<177>*/ 	printf("Du hast den <y<Flinkkäfer>> erhalten!\nEr ist um einiges schneller als dein alter\nKäfer. Aber pass auf, dass du damit die\nKurve kriegst!")
          }

          void entrypoint_003_100() {
/*<234>*/ 	start()
/*<605>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<606>*/ 		printf("Du hast eine <y<Herz-Medaille>> erhalten!\nHast du sie bei dir, so kannst du auch\nim <r<Helden-Modus >>Herzen finden.\n\nSie bewirkt außerdem, dass Herz-Blumen\nerblühen. Nimm sie mit, falls dir deine\nGesundheit am Herzen liegt.")
/*<607>*/ 		story_flags[841 /* us: 805A9B35 0x01, jp: 805ACDB5 0x01 */] = true;
          	  case 1:
/*<230>*/ 		printf("Du hast eine <y<Herz-Medaille>> erhalten!\nTrägst du sie bei dir, wirst du häufiger\nauf Herzen stoßen. Nimm sie mit, falls dir\ndeine Gesundheit am Herzen liegt.")
          	}
          }

          void entrypoint_003_118() {
/*<264>*/ 	start()
/*<554>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<556>*/ 		printf("Dein Schild wurde repariert!\nEr sieht aus wie neu!")
          	  case 1:
/*<260>*/ 		printf("Du hast den <y<starken Holzschild>> erhalten!\nDieser leicht zu handhabende Schild ist der\nrobusteste aller Holzschilde.")
          	}
          }

          void entrypoint_003_135() {
/*<306>*/ 	start()
/*<302>*/ 	printf("Du hast die <y<mittlere Bombentasche\n>>erhalten! Mit ihr kannst du <r<10>> weitere\nBomben bei dir tragen. Praktisch, wenn du\nhäufig Bomben einsetzen möchtest.")
          }

          void entrypoint_003_152() {
/*<333>*/ 	start()
/*<669>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<670>*/ 		printf("Du hast <numeric arg0> <y<\x0E\x03\x04\x02\xECD >>erhalten!\nGilt als das seltenste Insekt überhaupt\nund kann ausschließlich an dunklen\nOrten gefunden werden.")
          		flw_627:
/*<627>*/ 		open_collection_screen();
          	  case 1:
/*<331>*/ 		printf("Du hast <numeric arg0> <y<\x0E\x03\x04\x02\xECD >>gefangen!\nGilt als das seltenste Insekt überhaupt\nund kann ausschließlich an dunklen\nOrten gefunden werden.")
          		goto flw_627
          	}
          }

          void entrypoint_003_059() {
/*<458>*/ 	start()
/*<459>*/ 	check_item_flag(492, 19999)
/*<460>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 56}) {
          	  case 0:
/*<457>*/ 		printf("")
          	  case 1:
/*<461>*/ 		printf("")
          	}
          }

          void entrypoint_003_187() {
/*<465>*/ 	start()
/*<463>*/ 	printf("")
/*<485>*/ 	story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */] = true;
          }

          void entrypoint_003_042() {
/*<104>*/ 	start()
/*< 46>*/ 	printf("Du hast eine <y<Ausdauerfrucht >>erhalten!\nDiese geheimnisvolle Frucht stellt deine\nAusdauer wieder komplett her.")
          }

          void entrypoint_003_025() {
/*<121>*/ 	start()
/*< 62>*/ 	printf("Du hast den <y<gesegneten Schlüssel>> erhalten!\nDiese Holzschnitzerei strahlt Güte aus. Sie\nähnelt der Statue im oberen Stockwerk.")
          }

          void entrypoint_003_008() {
/*<138>*/ 	start()
/*< 79>*/ 	printf("Du hast <y<10 Pfeile>> erhalten!\nDu kannst sie mit deinem Bogen abfeuern.\nIhre Anzahl ist begrenzt, also setze sie mit\nBedacht ein!")
          }

          void entrypoint_003_077() {
/*<195>*/ 	start()
/*<176>*/ 	printf("Du hast den <y<Kraftkäfer>> erhalten!\nEr kann viel länger fliegen als dein alter\nKäfer. Nun kannst du auch Orte, die weiter\nentfernt sind, erforschen!")
          }

          void entrypoint_003_094() {
/*<204>*/ 	start()
/*<205>*/ 	check_item_flag(489, 1)
/*<206>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 14}) {
          	  case 0:
/*<201>*/ 		check_item_flag(489, 2)
/*<202>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 12}) {
          		  case 0:
/*<198>*/ 			check_item_flag(489, 3)
/*<199>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 10}) {
          			  case 0:
/*<208>*/ 				printf("Du hast ein <y<Herzteil>> erhalten!\nSammle vier, um deine Lebensenergie\num ein Herz zu erhöhen.\nDir fehlt nur noch <r<ein >>weiteres!")
          			  case 1:
/*<200>*/ 				printf("Du hast ein <y<Herzteil>> erhalten!\nSammle vier, um deine Lebensenergie\num ein Herz zu erhöhen.\nDir fehlen nur noch <r<zwei >>weitere!")
          			}
          		  case 1:
/*<203>*/ 			printf("Du hast ein <y<Herzteil>> erhalten!\nSammle vier, um deine Lebensenergie\num ein Herz zu erhöhen.\nDir fehlen nur noch <r<drei >>weitere!")
          		}
          	  case 1:
/*<207>*/ 		printf("Du hast ein <y<Herzteil>> erhalten!\nDamit hast du nun einen vollständigen\nHerzcontainer. Deine Lebensenergie wird\num ein Herz erhöht.")
          	}
          }

          void entrypoint_003_101() {
/*<233>*/ 	start()
/*<229>*/ 	printf("Du hast eine <y<Rubin-Medaille>> erhalten!\nTrägst du sie bei dir, wirst du häufiger\nals sonst auf Rubine stoßen. Nimm sie mit,\num schnell zu Reichtum zu kommen.")
          }

          void entrypoint_003_119() {
/*<274>*/ 	start()
/*<557>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<560>*/ 		printf("Dein Schild wurde repariert!\nEr sieht aus wie neu!")
          	  case 1:
/*<270>*/ 		printf("Du hast den <y<Eisenschild>> erhalten!\nDieser robuste Schild zerbricht nicht so leicht\nund brennt auch nicht. Allerdings solltest du\ndich vor Elektrizität hüten!")
/*<517>*/ 		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          	}
          }

          void entrypoint_003_136() {
/*<305>*/ 	start()
/*<301>*/ 	printf("Du hast die <y<große Bombentasche\n>>erhalten! Mit ihr kannst du <r<15>> weitere\nBomben bei dir tragen. Praktisch, wenn du\nhäufig Bomben einsetzen möchtest.")
          }

          void entrypoint_003_153() {
/*<336>*/ 	start()
/*<335>*/ 	printf("Du hast eine <y<Flasche>> erhalten!\nBewahre verschiedene Dinge darin auf.")
          }

          void entrypoint_003_170() {
/*<351>*/ 	start()
/*<349>*/ 	printf("Du hast eine <y<Monsterklaue >>erhalten!\nDiese Klaue stammt von einem Monster\nund sieht äußerst gefährlich aus.")
/*<637>*/ 	open_collection_screen();
          }

          void entrypoint_003_188() {
/*<470>*/ 	start()
/*<468>*/ 	printf("")
/*<543>*/ 	story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */] = true;
          }

          void entrypoint_003_060() {
/*< 91>*/ 	start()
/*< 34>*/ 	printf("Du hast <y<10 Deku-Kerne >>erhalten!\nDiese kleinen Kerne kannst du mit der\nSchleuder verschießen. Achte dabei immer\nauf deinen Munitionsvorrat.")
          }

          void entrypoint_003_043() {
/*<103>*/ 	start()
/*<400>*/ 	check_item_flag(500, 14)
/*<399>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 30}) {
          	  case 0:
/*<401>*/ 		printf("Du hast <y<Farores Tränen >>gefunden.\nDies hat deine Seele reifen lassen,\nLink!\n\nDoch noch ist die Prüfung nicht vorbei...\nBegib dich vorsichtig zum Ausgang, um ein\nZeichen deiner Reife zu erhalten.")
          	  case 1:
/*< 45>*/ 		printf("Du hast eine von <y<Farores Tränen >>erhalten!\nIhre heilige Macht hindert die Hüter für\n<r<90 Sekunden >>daran, sich zu bewegen.\n\nSammle alle <r<15>>, um diese Prüfung zu\nbestehen!")
          	}
          }

          void entrypoint_003_026() {
/*<120>*/ 	start()
/*< 61>*/ 	printf("Du hast den <y<Mysterienkristall >>erhalten!\nEinige der schwach leuchtenden\nKristallquadrate scheinen zu fehlen.")
          }

          void entrypoint_003_009() {
/*<137>*/ 	start()
/*< 78>*/ 	printf("")
/*<542>*/ 	story_flags[583 /* us: 805A9B1B 0x40, jp: 805ACD9B 0x40 */] = true;
          }

          void entrypoint_003_078() {
/*<194>*/ 	start()
/*<175>*/ 	printf("Du hast einen <y<Herztrank>> erhalten!\nSetze ihn als Taschen-Item ein, um\n<r<8 Herzen >>wiederaufzufüllen.")
          }

          void entrypoint_003_095() {
/*<211>*/ 	start()
/*<576>*/ 	story_flags[729 /* us: 805A9B27 0x02, jp: 805ACDA7 0x02 */] = true;
/*<209>*/ 	check_item_flag(96, 1)
/*<210>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 16}) {
          	  case 0:
/*<212>*/ 		check_item_flag(97, 1)
/*<213>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 18}) {
          		  case 0:
/*<580>*/ 			printf("Du hast das <y+<Triforce des Mutes >>erhalten!\nDiese Macht wurde einst den Menschen\nvon den Göttern geschenkt.\n\nSammle die drei Artefakte, und dir wird\ndie <r<unendliche Kraft>> geschenkt, die dir\njeden noch so großen Wunsch gewährt.")
/*<525>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_533:
/*<533>*/ 			printf("Du hast das <y+<Triforce des Mutes >>erhalten!\nDiese Macht wurde einst den Menschen\nvon den Göttern geschenkt.\n\nSammle die drei Artefakte, und dir wird\ndie <r<unendliche Kraft>> geschenkt, die dir\njeden noch so großen Wunsch gewährt.")
/*<532>*/ 			printf("Sammle <r<ein>> weiteres Artefakt, um das\nTriforce zu vervollständigen.")
/*<570>*/ 			changeScene(3, 1) // 
          		}
          	  case 1:
/*<545>*/ 		check_item_flag(97, 1)
/*<546>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 64}) {
          		  case 0:
          			goto flw_533
          		  case 1:
/*<214>*/ 			printf("Du hast das <y+<Triforce des Mutes >>erhalten!\nDiese Macht wurde einst den Menschen\nvon den Göttern geschenkt.\n\nSammle die drei Artefakte, und dir wird\ndie <r<unendliche Kraft>> geschenkt, die dir\njeden noch so großen Wunsch gewährt.")
/*<531>*/ 			printf("Sammle <r<zwei>> weitere Artefakte, um das\nTriforce zu vervollständigen.")
/*<571>*/ 			changeScene(3, 1) // 
          		}
          	}
          }

          void entrypoint_003_102() {
/*<232>*/ 	start()
/*<228>*/ 	printf("Du hast die <y<Schatz-Medaille>> erhalten!\nTrägst du sie bei dir, wirst du häufiger\nals sonst auf Schätze stoßen. Nimm sie mit,\nwenn du auf Schatzsuche gehst.")
          }

          void entrypoint_003_137() {
/*<304>*/ 	start()
/*<411>*/ 	switch (story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */]) {
          	  case 0:
/*<412>*/ 		printf("Du hast die <y<Peitsche>> wieder!\nSieh dich um, vielleicht gibt es etwas, das\ndu jetzt erreichen kannst!")
/*<431>*/ 		open_item_wheel(5)
/*<413>*/ 		story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */] = false;
          	  case 1:
/*<300>*/ 		printf("Du hast die <y<Peitsche>> erhalten!\nAn ihrer Spitze befindet sich eine magische\nLichtkugel, die an den unterschiedlichsten\nDingen haften kann.\nDrücke (Z), um ein Ziel anzuvisieren und\nwickle mit Schwung deine Peitsche darum!\x0E\x01\x11\x02\x7CD")
/*<432>*/ 		open_item_wheel(5)
          	}
          }

          void entrypoint_003_171() {
/*<356>*/ 	start()
/*<354>*/ 	printf("Du hast ein <y<Monsterhorn>> erhalten!\nDieses beeindruckende Signalhorn ist ziemlich\nhart und kann als Werkstoff verwendet werden.")
/*<638>*/ 	open_collection_screen();
          }

          void entrypoint_003_154() {
/*<370>*/ 	start()
/*<369>*/ 	printf("")
          }

          void entrypoint_003_189() {
/*<469>*/ 	start()
/*<467>*/ 	printf("")
/*<544>*/ 	story_flags[73 /* us: 805A9AE9 0x40, jp: 805ACD69 0x40 */] = true;
          }

          void entrypoint_003_061() {
/*< 12>*/ 	start()
/*<  8>*/ 	printf("")
/*<  9>*/ 	give_item(61 0x3D);
          }

          void entrypoint_003_027() {
/*<119>*/ 	start()
/*< 60>*/ 	printf("Du hast den <y<Tentakelschlüssel >>erhalten!\nDiese Schnitzerei sieht aus wie ein\nTintenfisch mit unzähligen Saugnäpfen.")
          }

          void entrypoint_003_079() {
/*<193>*/ 	start()
/*<174>*/ 	printf("Du hast einen <y<Herztrank V>> erhalten!\nDieser verfeinerte Herztrank füllt <r<all\ndeine Herzen >>wieder auf.")
          }

          void entrypoint_003_096() {
/*<217>*/ 	start()
/*<577>*/ 	story_flags[728 /* us: 805A9B27 0x01, jp: 805ACDA7 0x01 */] = true;
/*<215>*/ 	check_item_flag(95, 1)
/*<216>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 20}) {
          	  case 0:
/*<218>*/ 		check_item_flag(97, 1)
/*<219>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 22}) {
          		  case 0:
/*<581>*/ 			printf("Du hast das <y+<Triforce der Kraft >>erhalten!\nDiese Macht wurde einst den Menschen\nvon den Göttern geschenkt.\n\nSammle die drei Artefakte, und dir wird\ndie <r<unendliche Kraft>> geschenkt, die dir\njeden noch so großen Wunsch gewährt.")
/*<526>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_538:
/*<538>*/ 			printf("Du hast das <y+<Triforce der Kraft >>erhalten!\nDiese Macht wurde einst den Menschen\nvon den Göttern geschenkt.\n\nSammle die drei Artefakte, und dir wird\ndie <r<unendliche Kraft>> geschenkt, die dir\njeden noch so großen Wunsch gewährt.")
/*<535>*/ 			printf("Sammle <r<ein>> weiteres Artefakt, um das\nTriforce zu vervollständigen.")
/*<572>*/ 			changeScene(2, 1) // 
          		}
          	  case 1:
/*<547>*/ 		check_item_flag(97, 1)
/*<548>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 66}) {
          		  case 0:
          			goto flw_538
          		  case 1:
/*<220>*/ 			printf("Du hast das <y+<Triforce der Kraft >>erhalten!\nDiese Macht wurde einst den Menschen\nvon den Göttern geschenkt.\n\nSammle die drei Artefakte, und dir wird\ndie <r<unendliche Kraft>> geschenkt, die dir\njeden noch so großen Wunsch gewährt.")
/*<534>*/ 			printf("Sammle <r<zwei>> weitere Artefakte, um das\nTriforce zu vervollständigen.")
/*<573>*/ 			changeScene(2, 1) // 
          		}
          	}
          }

          void entrypoint_003_103() {
/*<243>*/ 	start()
/*<239>*/ 	printf("Du hast die <y<Trank-Medaille>> erhalten!\nTrägst du sie bei dir, kannst du Effekte\ndeiner Tränke verlängern. Nimm sie mit,\nwenn du Tränke im Gepäck hast.")
          }

          void entrypoint_003_120() {
/*<273>*/ 	start()
/*<558>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<561>*/ 		printf("Dein Schild wurde repariert!\nEr sieht aus wie neu!")
          	  case 1:
/*<269>*/ 		printf("Du hast den <y<harten Eisenschild>> erhalten!\nDieser robuste Schild hält mehr aus als\nsein Vorgänger.")
          	}
          }

          void entrypoint_003_138() {
/*<303>*/ 	start()
/*<299>*/ 	printf("Du hast die <y<Feuerohrringe>> erhalten!\nEiner der drei Schätze der Göttin.\nMit ihrer Hilfe kannst du selbst der\ngrößten Hitze trotzen.")
/*<502>*/ 	story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */] = true;
          }

          void entrypoint_003_172() {
/*<355>*/ 	start()
/*<353>*/ 	printf("Du hast einen <y<Schmuckschädel >>erhalten!\nDiese Nachbildung eines Schädels ist das\nSymbol der Bokblins.")
/*<639>*/ 	open_collection_screen();
          }

          void entrypoint_003_155() {
/*<374>*/ 	start()
/*<372>*/ 	printf("")
          }

          void entrypoint_003_044() {
/*<438>*/ 	start()
/*<440>*/ 	check_item_flag(500, 14)
/*<439>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 48}) {
          	  case 0:
/*<441>*/ 		printf("Du hast <y<Dins Tränen >>gefunden.\nDies hat deine Seele reifen lassen,\nLink!\n\nDoch noch ist die Prüfung nicht vorbei...\nBegib dich vorsichtig zum Ausgang, um ein\nZeichen deiner Reife zu erhalten.")
          	  case 1:
/*<437>*/ 		printf("Du hast eine von<y< Dins Tränen >>erhalten!\nIhre heilige Macht hindert die Hüter für\n<r<90 Sekunden >>daran, sich zu bewegen.\n\nSammle alle <r<15>>, um diese Prüfung zu\nbestehen!")
          	}
          }

