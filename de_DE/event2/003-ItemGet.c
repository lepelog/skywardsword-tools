          void entrypoint_003_062() {
/*< 11>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 5, unk: 1, line: 85 */ "")
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
/*<151>*/ 					printf(/* textboxtype: 5, unk: 1, line: 38 */ "Du hast das letzte <color yellow<Schlüsselfragment>coloroff>\nerhalten. Nun kannst du das Tor zum\nTempel öffnen.\n\nBegib dich zurück zum Gipfel und mache\ndich im Tempel auf die Suche nach Zelda.")
/*<588>*/ 					story_flags[120 /* us: 805A9AEA 0x20, jp: 805ACD6A 0x20 */] = true;
/*<677>*/ 					story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*<589>*/ 					story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
          				  case 1:
/*< 23>*/ 					printf(/* textboxtype: 5, unk: 1, line: 37 */ "Du hast ein <color yellow<Schlüsselfragment >coloroff>erhalten!\nEs ist Teil des Schlüssels, der das\nverschlossene Tor zum Tempel öffnet.\nEs fehlt dir nur noch<color red< 1 Fragment>coloroff>!")
          				}
          			  case 1:
/*< 26>*/ 				printf(/* textboxtype: 5, unk: 1, line: 36 */ "Du hast ein <color yellow<Schlüsselfragment >coloroff>erhalten!\nEs ist Teil des Schlüssels, der das\nverschlossene Tor zum Tempel öffnet.\nEs fehlen dir nur noch<color red< 2 Fragmente>coloroff>!")
          			}
          		  case 1:
/*< 29>*/ 			printf(/* textboxtype: 5, unk: 1, line: 35 */ "Du hast ein <color yellow<Schlüsselfragment >coloroff>erhalten!\nEs ist Teil des Schlüssels, der das\nverschlossene Tor zum Tempel öffnet.\nEs fehlen dir nur noch<color red< 3 Fragmente>coloroff>!")
          		}
          	  case 1:
/*<150>*/ 		printf(/* textboxtype: 5, unk: 1, line: 34 */ "Du hast ein <color yellow<Schlüsselfragment >coloroff>erhalten!\nEs ist Teil des Schlüssels, der das\nverschlossene Tor zum Tempel öffnet.\n\nSammle alle 5 Fragmente, um ihn zu\nvervollständigen. Es fehlen dir nur\nnoch <color red<4 Fragmente>coloroff>!")
          	}
          }

          void entrypoint_003_010() {
/*<136>*/ 	start()
/*< 77>*/ 	printf(/* textboxtype: 5, unk: 1, line: 13 */ "Du hast das <color yellow<Übungsschwert >coloroff>erhalten!\nDieses äußerst scharfe Schwert wird\nvon den Schülern der Ritterschule bei\nÜbungskämpfen verwendet.\nDrücke (1), um dir anzusehen, welche\nGegenstände du besitzt.<0x10011:0x04cd>")
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
/*<582>*/ 			printf(/* textboxtype: 5, unk: 1, line: 130 */ "Du hast das <color yellow white<Triforce der Weisheit\n>coloroff>erhalten! Diese Macht wurde einst den\nMenschen von den Göttern geschenkt.\n\nSammle die drei Artefakte, und dir wird\ndie <color red<unendliche Kraft>coloroff> geschenkt, die dir\njeden noch so großen Wunsch gewährt.")
/*<527>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_539:
/*<539>*/ 			printf(/* textboxtype: 5, unk: 1, line: 130 */ "Du hast das <color yellow white<Triforce der Weisheit\n>coloroff>erhalten! Diese Macht wurde einst den\nMenschen von den Göttern geschenkt.\n\nSammle die drei Artefakte, und dir wird\ndie <color red<unendliche Kraft>coloroff> geschenkt, die dir\njeden noch so großen Wunsch gewährt.")
/*<537>*/ 			printf(/* textboxtype: 5, unk: 1, line: 128 */ "Sammle <color red<ein>coloroff> weiteres Artefakt, um das\nTriforce zu vervollständigen.")
/*<574>*/ 			changeScene(1, 1) // 
          		}
          	  case 1:
/*<549>*/ 		check_item_flag(96, 1)
/*<550>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 68}) {
          		  case 0:
          			goto flw_539
          		  case 1:
/*<226>*/ 			printf(/* textboxtype: 5, unk: 1, line: 130 */ "Du hast das <color yellow white<Triforce der Weisheit\n>coloroff>erhalten! Diese Macht wurde einst den\nMenschen von den Göttern geschenkt.\n\nSammle die drei Artefakte, und dir wird\ndie <color red<unendliche Kraft>coloroff> geschenkt, die dir\njeden noch so großen Wunsch gewährt.")
/*<536>*/ 			printf(/* textboxtype: 5, unk: 1, line: 127 */ "Sammle <color red<zwei>coloroff> weitere Artefakte, um das\nTriforce zu vervollständigen.")
/*<575>*/ 			changeScene(1, 1) // 
          		}
          	}
          }

          void entrypoint_003_104() {
/*<242>*/ 	start()
/*<238>*/ 	printf(/* textboxtype: 5, unk: 1, line: 138 */ "Du hast die <color yellow<Dämonen-Medaille>coloroff> erhalten!\nTrägst du sie bei dir, wirst du häufiger\nals sonst auf Rubine und Schätze stoßen.\n\nDoch Vorsicht! Ein Fluch lastet auf ihr,\nder dich am Öffnen deiner Tasche hindert!")
          }

          void entrypoint_003_121() {
/*<272>*/ 	start()
/*<559>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<563>*/ 		printf(/* textboxtype: 5, unk: 1, line: 152 */ "Dein Schild wurde repariert!\nEr sieht aus wie neu!")
          	  case 1:
/*<268>*/ 		printf(/* textboxtype: 5, unk: 1, line: 157 */ "Du hast den <color yellow<starken Eisenschild>coloroff> erhalten!\nDieser äußerst robuste Schild gilt als der\nwiderstandsfähigste aller Eisenschilde.")
          	}
          }

          void entrypoint_003_139() {
/*<314>*/ 	start()
/*<310>*/ 	printf(/* textboxtype: 5, unk: 1, line: 177 */ "")
          }

          void entrypoint_003_173() {
/*<360>*/ 	start()
/*<358>*/ 	printf(/* textboxtype: 5, unk: 1, line: 223 */ "Du hast einen <color yellow<Schattenkristall >coloroff>erhalten!\nDieser äußerst seltene Kristall beinhaltet\ndie konzentrierte Boshaftigkeit eines\nMonsters in kristallisierter Form.")
/*<640>*/ 	open_collection_screen();
          }

          void entrypoint_003_156() {
/*<373>*/ 	start()
/*<371>*/ 	printf(/* textboxtype: 5, unk: 1, line: 206 */ "")
          }

          void entrypoint_003_045() {
/*<448>*/ 	start()
/*<450>*/ 	check_item_flag(500, 14)
/*<449>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 52}) {
          	  case 0:
/*<451>*/ 		printf(/* textboxtype: 5, unk: 1, line: 58 */ "Du hast <color yellow<Nayrus Tränen >coloroff>gefunden.\nDies hat deine Seele reifen lassen,\n<heroname>!\n\nDoch noch ist die Prüfung nicht vorbei...\nBegib dich vorsichtig zum Ausgang, um ein\nZeichen deiner Reife zu erhalten.")
          	  case 1:
/*<447>*/ 		printf(/* textboxtype: 5, unk: 1, line: 57 */ "Du hast eine von <color yellow<Nayrus Tränen >coloroff>erhalten!\nIhre heilige Macht hindert die Hüter für\n<color red<90 Sekunden >coloroff>daran, sich zu bewegen.\n\nSammle alle <color red<15>coloroff>, um diese Prüfung zu\nbestehen!")
          	}
          }

          void entrypoint_003_190() {
/*<474>*/ 	start()
/*<472>*/ 	printf(/* textboxtype: 5, unk: 1, line: 240 */ "")
          }

          void entrypoint_003_063() {
/*< 13>*/ 	start()
/*<  4>*/ 	printf(/* textboxtype: 5, unk: 1, line: 86 */ "")
/*<  5>*/ 	give_item(63 0x3F);
          }

          void entrypoint_003_029() {
/*<117>*/ 	start()
/*< 59>*/ 	printf(/* textboxtype: 5, unk: 1, line: 39 */ "Du hast den <color yellow<goldenen Schlüssel>coloroff> erhalten!\nEr ist seltsam geformt und mit dekorativen\nMustern überzogen.")
          }

          void entrypoint_003_011() {
/*<135>*/ 	start()
/*<608>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<609>*/ 		printf(/* textboxtype: 5, unk: 1, line: 15 */ "Du hast das <color yellow<Schwert der Göttin>coloroff> erhalten!\nDieses legendäre Schwert ist erfüllt vom\nheiligen Licht der Göttin.\n\nDie Erinnerungen an deine zahlreichen\nKämpfe durchströmen es, wenn du es gen\nHimmel hältst.\n\n<color red<<sound 4>Der Himmelsstrahl fügt nun maximalen\nSchaden zu>coloroff>!")
          		flw_462:
/*<462>*/ 		story_flags[3 /* us: 805A9AD9 0x10, jp: 805ACD59 0x10 */] = true;
/*<524>*/ 		changeScene(7, 0) // 
          	  case 1:
/*< 76>*/ 		printf(/* textboxtype: 5, unk: 1, line: 14 */ "Du hast das <color yellow<Schwert der Göttin>coloroff> erhalten!\nDieses legendäre Schwert ist erfüllt vom\nheiligen Licht der Göttin.")
          		goto flw_462
          	}
          }

          void entrypoint_003_080() {
/*<192>*/ 	start()
/*<173>*/ 	printf(/* textboxtype: 5, unk: 1, line: 106 */ "")
          }

          void entrypoint_003_098() {
/*<227>*/ 	start()
/*<528>*/ 	printf(/* textboxtype: 5, unk: 1, line: 131 */ "Du hast die <color yellow<antike Seekarte>coloroff> erhalten!\nDiese Karte stammt aus einer Zeit, in der\ndiese Wüste noch ein Meer war.")
/*<530>*/ 	story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */] = true;
          }

          void entrypoint_003_105() {
/*<241>*/ 	start()
/*<237>*/ 	printf(/* textboxtype: 5, unk: 1, line: 139 */ "Du hast die <color yellow<Streu-Schleuder>coloroff> erhalten!\nHalte (A) gedrückt, um mit einem Schuss\neinen großen Bereich abzudecken.")
          }

          void entrypoint_003_122() {
/*<271>*/ 	start()
/*<562>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<564>*/ 		printf(/* textboxtype: 5, unk: 1, line: 152 */ "Dein Schild wurde repariert!\nEr sieht aus wie neu!")
          	  case 1:
/*<671>*/ 		switch (story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */]) {
          		  case 0:
/*<672>*/ 			printf(/* textboxtype: 5, unk: 1, line: 159 */ "Du hast den <color yellow<heiligen Schild>coloroff> erhalten!\nDank der Kraft, die ihn durchströmt,\nrepariert er sich selbst. Er kann Feuer,\nElektrizität und Flüche abwehren.")
          		  case 1:
/*<673>*/ 			printf(/* textboxtype: 5, unk: 1, line: 158 */ "Du hast den <color yellow<heiligen Schild>coloroff> erhalten!\nDank der Kraft, die ihn durchströmt,\n<color red<repariert er sich selbst>coloroff>.\n\nEr ist nicht sehr haltbar und zerbricht\nleicht, wehrt dafür aber Feuer,\nElektrizität und Flüche ab.")
/*<674>*/ 			story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */] = true;
/*<518>*/ 			story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          		}
          	}
          }

          void entrypoint_003_174() {
/*<359>*/ 	start()
/*<357>*/ 	printf(/* textboxtype: 5, unk: 1, line: 224 */ "Du hast eine <color yellow<blaue Vogelfeder>coloroff> erhalten!\nDiese kostbare Feder kann man nur bei\nextrem seltenen blauen Vögeln finden.")
/*<641>*/ 	open_collection_screen();
          }

          void entrypoint_003_157() {
/*<376>*/ 	start()
/*<375>*/ 	printf(/* textboxtype: 5, unk: 1, line: 207 */ "")
          }

          void entrypoint_003_046() {
/*<443>*/ 	start()
/*<445>*/ 	check_item_flag(500, 14)
/*<444>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 50}) {
          	  case 0:
/*<446>*/ 		printf(/* textboxtype: 5, unk: 1, line: 60 */ "Du hast alle <color yellow<heiligen Tränen >coloroff>gefunden.\nDies hat deine Seele reifen lassen,\n<heroname>!\n\nDoch noch ist die Prüfung nicht vorbei...\nBegib dich vorsichtig zum Ausgang, um ein\nZeichen deiner Reife zu erhalten.")
          	  case 1:
/*<442>*/ 		printf(/* textboxtype: 5, unk: 1, line: 59 */ "Du hast eine <color yellow<heilige Träne>coloroff> erhalten!\nIhre heilige Macht hindert die Hüter für\n<color red<90 Sekunden >coloroff>daran, sich zu bewegen.\n\nSammle alle <color red<15>coloroff>, um diese Prüfung zu\nbestehen!")
          	}
          }

          void entrypoint_003_191() {
/*<473>*/ 	start()
/*<471>*/ 	printf(/* textboxtype: 5, unk: 1, line: 241 */ "")
          }

          void entrypoint_003_064() {
/*< 14>*/ 	start()
/*<  2>*/ 	printf(/* textboxtype: 5, unk: 1, line: 87 */ "")
/*<  3>*/ 	give_item(64 0x40);
          }

          void entrypoint_003_047() {
/*<102>*/ 	start()
/*< 44>*/ 	printf(/* textboxtype: 5, unk: 1, line: 61 */ "Du hast eine <color yellow<Lichtfrucht >coloroff>erhalten! Diese\nmysteriöse Frucht lässt <color red<30 Sekunden>coloroff> lang\nSignallichter erscheinen, die dir den Weg\nzu den übrigen Tränen weisen.")
          }

          void entrypoint_003_012() {
/*<134>*/ 	start()
/*< 75>*/ 	printf(/* textboxtype: 5, unk: 1, line: 16 */ "")
/*<541>*/ 	story_flags[582 /* us: 805A9B1B 0x20, jp: 805ACD9B 0x20 */] = true;
          }

          void entrypoint_003_081() {
/*<191>*/ 	start()
/*<172>*/ 	printf(/* textboxtype: 5, unk: 1, line: 107 */ "Du hast einen <color yellow<Herztrank SV>coloroff> erhalten!\nDiesen stark verfeinerten Herztrank\nkannst du <color red<2-mal>coloroff> genießen. Er füllt <color red<all\ndeine Herzen >coloroff>wieder auf.")
          }

          void entrypoint_003_099() {
/*<235>*/ 	start()
/*<592>*/ 	switch (story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */]) {
          	  case 0:
/*<593>*/ 		printf(/* textboxtype: 5, unk: 1, line: 76 */ "Du hast die <color yellow<Mogma-Klauen >coloroff>wieder!\nNutze sie, um dich durch Mogma-Löcher\nzu graben.")
/*<594>*/ 		story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */] = false;
          	  case 1:
/*<231>*/ 		printf(/* textboxtype: 5, unk: 1, line: 132 */ "Du hast die <color yellow<Mogma-Klauen>coloroff> erhalten!\nSolche Grabklauen bekommen selbst\nMogma nur selten zu sehen!\n\nMit ihnen kannst du dich sogar <color green<unter der\nErde vorwärts bewegen>coloroff>. Halte Ausschau\nnach geeigneten Löchern!")
          	}
          }

          void entrypoint_003_106() {
/*<240>*/ 	start()
/*<236>*/ 	printf(/* textboxtype: 5, unk: 1, line: 140 */ "")
          }

          void entrypoint_003_123() {
/*<282>*/ 	start()
/*<565>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<567>*/ 		printf(/* textboxtype: 5, unk: 1, line: 152 */ "Dein Schild wurde repariert!\nEr sieht aus wie neu!")
          	  case 1:
/*<278>*/ 		printf(/* textboxtype: 5, unk: 1, line: 160 */ "Du hast den <color yellow<hochheiligen Schild>coloroff> erhalten!\nDieser mysteriöse Schild repariert sich\nselbst und ist um einiges robuster als sein\nVorgänger.")
          	}
          }

          void entrypoint_003_140() {
/*<313>*/ 	start()
/*<309>*/ 	printf(/* textboxtype: 5, unk: 1, line: 178 */ "Du hast das <color yellow<Meisterfänger-Netz>coloroff> erhalten!\nDein Netz ist nun doppelt so groß wie\nzuvor. Damit solltest du selbst die\nschnellsten Insekten erwischen.")
          }

          void entrypoint_003_175() {
/*<368>*/ 	start()
/*<366>*/ 	printf(/* textboxtype: 5, unk: 1, line: 225 */ "Du hast einen <color yellow<goldenen Schmuckschädel\n>coloroff>erhalten! Ein wirklich sehr seltenes\nSchmuckstück. Sein goldener Glanz wirkt\nseltsam.")
/*<642>*/ 	open_collection_screen();
          }

          void entrypoint_003_158() {
/*<378>*/ 	start()
/*<377>*/ 	printf(/* textboxtype: 5, unk: 1, line: 208 */ "Du hast <color yellow<Rax' Brief>coloroff> in Verwahrung\ngenommen! Darin stehen viele\npersönliche Dinge. Pass auf, dass er\nnicht irgendwo als Schmierpapier endet!")
          }

          void entrypoint_003_192() {
/*<476>*/ 	start()
/*<475>*/ 	printf(/* textboxtype: 5, unk: 1, line: 242 */ "")
          }

          void entrypoint_003_065() {
/*< 15>*/ 	start()
/*<  1>*/ 	printf(/* textboxtype: 5, unk: 1, line: 88 */ "Du hast einen <color yellow<Rüstungstrank >coloroff>erhalten!\nDieser Trank halbiert jeglichen Schaden,\nden du erleidest! Die Wirkung einer\nFlasche hält <color red<3 Minuten >coloroff>an.")
          }

          void entrypoint_003_048() {
/*<101>*/ 	start()
/*< 43>*/ 	printf(/* textboxtype: 5, unk: 1, line: 62 */ "Du hast <color red<ein>coloroff> <color yellow<Juwel der Güte>coloroff> erhalten!\nDieses Juwel ist aus der Dankbarkeit einer\ndir unbekannten Person entstanden.\n\nSammle für <color blue<Morsego >coloroff>noch mehr\nDankbarkeit in kristallisierter Form.")
/*<645>*/ 	open_collection_screen();
          }

          void entrypoint_003_030() {
/*<116>*/ 	start()
/*< 58>*/ 	printf(/* textboxtype: 5, unk: 1, line: 40 */ "Du hast den <color yellow<Drachenschlüssel >coloroff>erhalten!\nDieser in sich verschlungene Drache\nwurde aus strahlendem Gold gefertigt.")
          }

          void entrypoint_003_013() {
/*<133>*/ 	start()
/*<404>*/ 	switch (story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */]) {
          	  case 0:
/*<436>*/ 		story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */] = false;
/*<504>*/ 		printf(/* textboxtype: 5, unk: 1, line: 18 */ "Du hast das <color yellow<wahre Master-Schwert>coloroff> wieder!\nNun kannst du die Bokblins endlich \nzurechtstutzen und wieder mit <sound 4><color blue<Phai\n>coloroff>sprechen.")
/*<587>*/ 		scene_flags[5 'Eldin Volcano Summit'][44 /* 0x4 10 */] = true;
          	  case 1:
/*< 74>*/ 		printf(/* textboxtype: 5, unk: 1, line: 17 */ "")
          	}
          }

          void entrypoint_003_082() {
/*<190>*/ 	start()
/*<171>*/ 	printf(/* textboxtype: 5, unk: 1, line: 108 */ "")
          }

          void entrypoint_003_107() {
/*<251>*/ 	start()
/*<247>*/ 	printf(/* textboxtype: 5, unk: 1, line: 141 */ "")
          }

          void entrypoint_003_124() {
/*<281>*/ 	start()
/*<566>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<568>*/ 		printf(/* textboxtype: 5, unk: 1, line: 152 */ "Dein Schild wurde repariert!\nEr sieht aus wie neu!")
          	  case 1:
/*<277>*/ 		printf(/* textboxtype: 5, unk: 1, line: 161 */ "Du hast den <color yellow<göttlichen Schild>coloroff> erhalten!\nDieser mysteriöse Schild repariert sich\nselbst und ist um ein Vielfaches robuster\nals sein Vorgänger.")
          	}
          }

          void entrypoint_003_141() {
/*<312>*/ 	start()
/*<647>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<648>*/ 		printf(/* textboxtype: 5, unk: 1, line: 180 */ "Du hast <numeric arg0 0> <color yellow<<0x30004:0x03cd>>coloroff> erhalten!\nSchwärme dieser Insekten fallen alle zehn\nJahre über das Land her und vernichten\ndie komplette Vegetation.")
          		flw_616:
/*<616>*/ 		open_collection_screen();
          	  case 1:
/*<308>*/ 		printf(/* textboxtype: 5, unk: 1, line: 179 */ "Du hast <numeric arg0 0> <color yellow<<0x30004:0x03cd>>coloroff> gefangen!\nSchwärme dieser Insekten fallen alle zehn\nJahre über das Land her und vernichten\ndie komplette Vegetation.")
          		goto flw_616
          	}
          }

          void entrypoint_003_176() {
/*<367>*/ 	start()
/*<365>*/ 	printf(/* textboxtype: 5, unk: 1, line: 226 */ "Du hast das <color yellow<Geschenk der Göttin>coloroff> erhalten!\nEs heißt, dieser legendäre, sehr seltene\nSchatz habe einst der Göttin selbst gehört.")
/*<643>*/ 	open_collection_screen();
          }

          void entrypoint_003_159() {
/*<382>*/ 	start()
/*<380>*/ 	printf(/* textboxtype: 5, unk: 1, line: 209 */ "Du hast <color yellow<Terris Insektenkäfig>coloroff> erhalten!\nDarin befindet sich Terris Lieblingsinsekt.\nBringe ihm den Käfig schnell zurück!")
          }

          void entrypoint_003_193() {
/*<478>*/ 	start()
/*<477>*/ 	printf(/* textboxtype: 5, unk: 1, line: 243 */ "")
          }

          void entrypoint_003_200() {
/*<498>*/ 	start()
/*<496>*/ 	printf(/* textboxtype: 5, unk: 1, line: 251 */ "")
          }

          void entrypoint_003_066() {
/*< 10>*/ 	start()
          	printf(/* textboxtype: 5, unk: 1, line: 89 */ "Du hast einen <color yellow<Rüstungstrank V>coloroff> erhalten!\nDieser verfeinerte Trank schützt dich für\n<color red<3 Minuten>coloroff> vor jeglichem Schaden.")
          }

          void entrypoint_003_049() {
/*<100>*/ 	start()
/*<405>*/ 	switch (story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */]) {
          	  case 0:
/*<406>*/ 		printf(/* textboxtype: 5, unk: 1, line: 64 */ "Du hast den <color yellow<magischen Krug >coloroff>wieder!\nEndlich kannst du wieder Dinge durch die\nGegend pusten.")
/*<427>*/ 		open_item_wheel(4)
/*<428>*/ 		story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */] = false;
          	  case 1:
/*< 42>*/ 		printf(/* textboxtype: 5, unk: 1, line: 63 */ "Du hast den <color yellow<magischen Krug >coloroff>erhalten!\nDiesem uralten und mysteriösen Artefakt\nentströmt starker Wind.\n\n<color red<Verlierst >coloroff>du beim Zielen den <color red<Fokus>coloroff>,\ndrücke einfach (v), um deine Ansicht \nwieder zu zentrieren.<0x10011:0x09cd>")
/*<407>*/ 		open_item_wheel(4)
          	}
          }

          void entrypoint_003_031() {
/*<115>*/ 	start()
/*< 57>*/ 	printf(/* textboxtype: 5, unk: 1, line: 41 */ "Du hast das <color yellow<uralte Gebilde>coloroff> erhalten!\nEs ist aus Gold gefertigt und sieht aus wie\nein Bestandteil von etwas Größerem. Seine\nOberfläche ist mit Schaltkreisen versehen.")
          }

          void entrypoint_003_014() {
/*<132>*/ 	start()
/*< 73>*/ 	printf(/* textboxtype: 5, unk: 1, line: 19 */ "")
          }

          void entrypoint_003_083() {
/*<189>*/ 	start()
/*<170>*/ 	printf(/* textboxtype: 5, unk: 1, line: 109 */ "")
          }

          void entrypoint_003_108() {
/*<250>*/ 	start()
/*<246>*/ 	printf(/* textboxtype: 5, unk: 1, line: 142 */ "Du hast die <color yellow<mittlere Geldbörse>coloroff> erhalten!\nSie bietet etwas mehr Platz als deine\nalte Geldbörse. In ihr kannst du bis zu\n<color red<500 Rubine >coloroff>aufbewahren!")
          }

          void entrypoint_003_125() {
/*<280>*/ 	start()
/*<276>*/ 	printf(/* textboxtype: 5, unk: 1, line: 162 */ "Du hast den <color yellow<Hylia-Schild>coloroff> erhalten!\nEr enthält die Macht des Helden.\nNichts und niemand kann ihn zerstören!")
/*<519>*/ 	story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          }

          void entrypoint_003_142() {
/*<311>*/ 	start()
/*<649>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<650>*/ 		printf(/* textboxtype: 5, unk: 1, line: 182 */ "Du hast <numeric arg0 0> <color yellow<<0x30004:0x04cd>>coloroff> erhalten!\nWird der Panzer dieses Insekts poliert,\ngewinnt es an Stärke. Es zählt zu den\nkräftigsten aller Insekten.")
          		flw_617:
/*<617>*/ 		open_collection_screen();
          	  case 1:
/*<307>*/ 		printf(/* textboxtype: 5, unk: 1, line: 181 */ "Du hast <numeric arg0 0> <color yellow<<0x30004:0x04cd>>coloroff> gefangen!\nWird der Panzer dieses Insekts poliert,\ngewinnt es an Stärke. Es zählt zu den\nkräftigsten aller Insekten.")
          		goto flw_617
          	}
          }

          void entrypoint_003_177() {
/*<387>*/ 	start()
/*<385>*/ 	printf(/* textboxtype: 5, unk: 1, line: 227 */ "")
          }

          void entrypoint_003_194() {
/*<489>*/ 	start()
/*<487>*/ 	printf(/* textboxtype: 5, unk: 1, line: 244 */ "Du hast den <color yellow<Wundertrank SV>coloroff> erhalten!\nDieser stark verfeinerte Trank repariert\ndeinen Schild <color red<automatisch>coloroff>, stellt <color red<8 >coloroff>Herzen\nwieder her und ist <color red<2-mal>coloroff> einsetzbar.")
          }

          void entrypoint_003_067() {
/*< 90>*/ 	start()
/*< 33>*/ 	printf(/* textboxtype: 5, unk: 1, line: 90 */ "")
          }

          void entrypoint_003_032() {
/*<114>*/ 	start()
/*< 56>*/ 	printf(/* textboxtype: 5, unk: 1, line: 42 */ "Du hast einen <color silver<silbernen Rubin >coloroff>erhalten!\nEr ist sagenhafte <color red<100 Rubine>coloroff> wert!\nFühlt sich gut an, nicht wahr?")
          }

          void entrypoint_003_015() {
/*<131>*/ 	start()
/*< 72>*/ 	printf(/* textboxtype: 5, unk: 1, line: 20 */ "")
          }

          void entrypoint_003_084() {
/*<188>*/ 	start()
/*<169>*/ 	printf(/* textboxtype: 5, unk: 1, line: 110 */ "Du hast einen <color yellow<Ausdauertrank>coloroff> erhalten!\nTrinke ihn, und deine Ausdaueranzeige\nleert sich langsamer. Die Wirkung einer\nFlasche hält <color red<3 Minuten >coloroff>an.")
          }

          void entrypoint_003_109() {
/*<249>*/ 	start()
/*<245>*/ 	printf(/* textboxtype: 5, unk: 1, line: 143 */ "Du hast die <color yellow<große Geldbörse>coloroff> erhalten!\nSie bietet viel mehr Platz als deine\nalte Geldbörse. In ihr kannst du bis\nzu <color red<1000 Rubine >coloroff>aufbewahren!")
          }

          void entrypoint_003_126() {
/*<279>*/ 	start()
/*<275>*/ 	printf(/* textboxtype: 5, unk: 1, line: 163 */ "Du hast den <color yellow<Wundertrank>coloroff> erhalten!\nDieser mysteriöse Trank stellt deine\nSchildanzeige <color red<komplett>coloroff> wieder her und\nfüllt außerdem <color red<4>coloroff> Herzen auf.")
          }

          void entrypoint_003_143() {
/*<318>*/ 	start()
/*<651>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<652>*/ 		printf(/* textboxtype: 5, unk: 1, line: 184 */ "Du hast <numeric arg0 0> <color yellow<<0x30004:0x05cd>>coloroff> erhalten!\nErhitzt man ihr Gift, erhält man eine\nwirksame Medizin. Halte dich von\ngroßen Schwärmen fern!")
          		flw_618:
/*<618>*/ 		open_collection_screen();
          	  case 1:
/*<316>*/ 		printf(/* textboxtype: 5, unk: 1, line: 183 */ "Du hast <numeric arg0 0> <color yellow<<0x30004:0x05cd>>coloroff> gefangen!\nErhitzt man ihr Gift, erhält man eine\nwirksame Medizin. Halte dich von\ngroßen Schwärmen fern!")
          		goto flw_618
          	}
          }

          void entrypoint_003_160() {
/*<381>*/ 	start()
/*<379>*/ 	printf(/* textboxtype: 5, unk: 1, line: 210 */ "Du hast eine <color yellow<Rassel>coloroff> erhalten!\nVon vielen Babys heiß geliebt. Wer mag\ndiese Rassel wohl verloren haben?")
          }

          void entrypoint_003_178() {
/*<386>*/ 	start()
/*<384>*/ 	printf(/* textboxtype: 5, unk: 1, line: 228 */ "")
          }

          void entrypoint_003_195() {
/*<488>*/ 	start()
/*<486>*/ 	printf(/* textboxtype: 5, unk: 1, line: 245 */ "Du hast <color yellow<heiße Kürbissuppe>coloroff> erhalten!\nDiese hausgemachte Kürbissuppe kühlt\ninnerhalb von <color red<5 Minuten>coloroff> ab!")
          }

          void entrypoint_003_068() {
/*< 89>*/ 	start()
/*< 32>*/ 	printf(/* textboxtype: 5, unk: 1, line: 91 */ "Du hast die <color yellow<Wasserdrachenschuppe \n>coloroff>erhalten! Einer der drei Schätze der\nGöttin. Er ermöglicht dir zu tauchen und\ndie Wasserschraube auszuführen.")
/*<500>*/ 	story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */] = true;
          }

          void entrypoint_003_050() {
/*< 99>*/ 	start()
/*< 41>*/ 	printf(/* textboxtype: 5, unk: 1, line: 65 */ "Du hast die <color yellow<Dungeon-Karte>coloroff> erhalten!\nSie zeigt dir eine Übersicht deiner \nUmgebung und welche Räume du noch\naufsuchen musst.")
/*<509>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1, 'next': 508, 'param3': 30}
/*<508>*/ 	switch (story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */]) {
          	  case 0:
/*<613>*/ 		story_flags[850 /* us: 805A9B34 0x01, jp: 805ACDB4 0x01 */] = true;
/*<510>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': -1, 'param3': 34}
          	  case 1:
/*<513>*/ 		printf(/* textboxtype: 5, unk: 1, line: 66 */ "Sie weist dich außerdem auf Schatztruhen\nhin! Behalte sie deshalb gut im Auge.")
/*<512>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 511, 'param3': 34}
/*<511>*/ 		story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */] = true;
          	}
          }

          void entrypoint_003_033() {
/*<113>*/ 	start()
/*< 55>*/ 	printf(/* textboxtype: 5, unk: 1, line: 43 */ "Du hast einen <color gold<goldenen Rubin >coloroff>erhalten!\nEr ist unglaubliche <color red<300 Rubine>coloroff> wert!\nAber behalte das lieber für dich...")
          }

          void entrypoint_003_016() {
/*<130>*/ 	start()
/*< 71>*/ 	printf(/* textboxtype: 5, unk: 1, line: 21 */ "")
          }

          void entrypoint_003_085() {
/*<187>*/ 	start()
/*<168>*/ 	printf(/* textboxtype: 5, unk: 1, line: 111 */ "Du hast einen <color yellow<Ausdauertrank V>coloroff> erhalten!\nDieser verfeinerte Trank verhindert, dass\nsich deine Ausdaueranzeige leert. Die\nWirkung einer Flasche hält <color red<3 Minuten >coloroff>an.")
          }

          void entrypoint_003_127() {
/*<290>*/ 	start()
/*<286>*/ 	printf(/* textboxtype: 5, unk: 1, line: 164 */ "Du hast den <color yellow<Wundertrank V>coloroff> erhalten!\nDieser verfeinerte Trank stellt deine\nSchildanzeige <color red<automatisch>coloroff> wieder her und\nfüllt außerdem <color red<8>coloroff> Herzen auf.")
          }

          void entrypoint_003_144() {
/*<317>*/ 	start()
/*<653>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<654>*/ 		printf(/* textboxtype: 5, unk: 1, line: 186 */ "Du hast <numeric arg0 0> <color yellow<<0x30004:0x06cd>\n>coloroff>erhalten! Mit seinen starken Greifarmen\nmacht dieses Insekt Jagd auf seine Beute.\nEs lebt gerne in luftigen Höhen.")
          		flw_619:
/*<619>*/ 		open_collection_screen();
          	  case 1:
/*<315>*/ 		printf(/* textboxtype: 5, unk: 1, line: 185 */ "Du hast <numeric arg0 0> <color yellow<<0x30004:0x06cd>\n>coloroff>gefangen! Mit seinen starken Greifarmen\nmacht dieses Insekt Jagd auf seine Beute.\nEs lebt gerne in luftigen Höhen.")
          		goto flw_619
          	}
          }

          void entrypoint_003_161() {
/*<340>*/ 	start()
/*<338>*/ 	printf(/* textboxtype: 5, unk: 1, line: 211 */ "Du hast <color yellow<Bienenlarven>coloroff> erhalten!\nGelten als sehr nahrhaft, können aber auch\nfür Handwerksarbeiten genutzt werden.")
/*<628>*/ 	open_collection_screen();
          }

          void entrypoint_003_179() {
/*<391>*/ 	start()
/*<389>*/ 	printf(/* textboxtype: 5, unk: 1, line: 229 */ "")
          }

          void entrypoint_003_196() {
/*<493>*/ 	start()
/*<491>*/ 	printf(/* textboxtype: 5, unk: 1, line: 246 */ "")
          }

          void entrypoint_003_069() {
/*< 88>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 5, unk: 1, line: 92 */ "")
          }

          void entrypoint_003_051() {
/*< 98>*/ 	start()
/*< 40>*/ 	printf(/* textboxtype: 5, unk: 1, line: 67 */ "")
          }

          void entrypoint_003_034() {
/*<112>*/ 	start()
/*< 54>*/ 	printf(/* textboxtype: 5, unk: 1, line: 44 */ "Du hast eine <color black<Rubin-Falle>coloroff> erhalten!\nDir wurden <color red<10 Rubine >coloroff>abgezogen.\nWie gemein...")
          }

          void entrypoint_003_017() {
/*<129>*/ 	start()
/*< 70>*/ 	printf(/* textboxtype: 5, unk: 1, line: 22 */ "Du hast das <color yellow<Seelengefäß >coloroff>erhalten!\nDiese geheimnisvolle Pflanze spiegelt\ndeine Seele wider, <heroname>.")
          }

          void entrypoint_003_086() {
/*<186>*/ 	start()
/*<167>*/ 	printf(/* textboxtype: 5, unk: 1, line: 112 */ "Du hast einen <color yellow<Lufttrank>coloroff> erhalten!\nTrinke ihn, und deine Luftanzeige leert\nsich langsamer. Die Wirkung einer Flasche\nhält <color red<3 Minuten >coloroff>an.")
          }

          void entrypoint_003_110() {
/*<248>*/ 	start()
/*<244>*/ 	printf(/* textboxtype: 5, unk: 1, line: 144 */ "Du hast die <color yellow<riesige Geldbörse>coloroff> erhalten!\nSie bietet noch viel mehr Platz als deine\nalte Geldbörse. In ihr kannst du bis zu\n<color red<5000 Rubine >coloroff>aufbewahren!")
          }

          void entrypoint_003_128() {
/*<289>*/ 	start()
/*<285>*/ 	printf(/* textboxtype: 5, unk: 1, line: 165 */ "Du hast die <color yellow<kleine Deku-Tasche >coloroff>erhalten!\nMit ihr kannst du <color red<10 >coloroff>weitere Deku-Kerne\nbei dir tragen. Sehr nützlich, wenn du gern\ndie Schleuder einsetzt.")
          }

          void entrypoint_003_145() {
/*<322>*/ 	start()
/*<655>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<656>*/ 		printf(/* textboxtype: 5, unk: 1, line: 188 */ "Du hast <numeric arg0 0> <color yellow<<0x30004:0x07cd>>coloroff> erhalten!\nAngeblich färbt sich dieses Insekt rot,\nwenn man es mit Erz füttert. Ist sehr\nruhig und bewegt sich kaum.")
          		flw_620:
/*<620>*/ 		open_collection_screen();
          	  case 1:
/*<320>*/ 		printf(/* textboxtype: 5, unk: 1, line: 187 */ "Du hast <numeric arg0 0> <color yellow<<0x30004:0x07cd>>coloroff> gefangen!\nAngeblich färbt sich dieses Insekt rot,\nwenn man es mit Erz füttert. Ist sehr\nruhig und bewegt sich kaum.")
          		goto flw_620
          	}
          }

          void entrypoint_003_162() {
/*<339>*/ 	start()
/*<337>*/ 	printf(/* textboxtype: 5, unk: 1, line: 212 */ "Du hast <numeric arg0 0> <color yellow<<0x30004:0x0fcd>>coloroff> erhalten!\nDiese Federn werden im Wolkenhort wegen\nihrer Seltenheit und Nützlichkeit hoch\ngeschätzt.")
/*<629>*/ 	open_collection_screen();
          }

          void entrypoint_003_197() {
/*<492>*/ 	start()
/*<585>*/ 	switch (story_flags[750 /* us: 805A9B29 0x40, jp: 805ACDA9 0x40 */]) {
          	  case 0:
/*<586>*/ 		printf(/* textboxtype: 5, unk: 1, line: 248 */ "Du hast den <color yellow<Lebensbaumkeimling\n>coloroff>ausgegraben! Hier würde es zu lang\ndauern, bis er herangewachsen ist. Pflanze\nihn an einem anderen Ort ein.")
          	  case 1:
/*<490>*/ 		printf(/* textboxtype: 5, unk: 1, line: 247 */ "Du hast den <color yellow<Lebensbaumkeimling\n>coloroff>erhalten! Ein Keimling des legendären\nBaumes, dessen Früchte jede noch so\nschwere Krankheit heilen sollen.")
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
/*<599>*/ 			printf(/* textboxtype: 5, unk: 1, line: 70 */ "Du hast die <color yellow<Streu-Schleuder >coloroff>wieder!\nJetzt kannst du endlich die Gegner auf\nPatrouille betäuben.")
          			flw_433:
/*<433>*/ 			open_item_wheel(0)
/*<417>*/ 			story_flags[164 /* us: 805A9AE3 0x08, jp: 805ACD63 0x08 */] = false;
          		  case 1:
/*<416>*/ 			printf(/* textboxtype: 5, unk: 1, line: 69 */ "Du hast die <color yellow<Schleuder >coloroff>wieder!\nJetzt kannst du endlich die Gegner auf\nPatrouille betäuben.")
          			goto flw_433
          		}
          	  case 1:
/*< 39>*/ 		printf(/* textboxtype: 5, unk: 1, line: 68 */ "Du hast die <color yellow<Schleuder >coloroff>erhalten!\nVerschieße mit ihr Deku-Kerne, um deine\nGegner zu betäuben.\n\n<color red<Verlierst >coloroff>du beim Zielen den <color red<Fokus>coloroff>,\ndrücke einfach (v), um deine Ansicht \nwieder zu zentrieren.<0x10011:0x09cd>")
/*<153>*/ 		add_to_counter(493, 20)
/*<521>*/ 		open_item_wheel(0)
/*<520>*/ 		story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */] = true;
/*<522>*/ 		story_flags[569 /* us: 805A9B18 0x01, jp: 805ACD98 0x01 */] = true;
          	}
          }

          void entrypoint_003_035() {
/*<111>*/ 	start()
/*< 53>*/ 	printf(/* textboxtype: 5, unk: 1, line: 45 */ "Du hast<color red< 5 >coloroff><color yellow<Juwelen der Güte >coloroff>erhalten.\nEin Juwel der Güte beinhaltet menschliche\nDankbarkeit in kristallisierter Form.\n\nHilfst du einem Menschen, so erhältst du\nstets <color red<5 Einheiten>coloroff> davon.")
/*<646>*/ 	open_collection_screen();
          }

          void entrypoint_003_018() {
/*<128>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 5, unk: 1, line: 23 */ "")
          }

          void entrypoint_003_000() {
/*<146>*/ 	start()
/*<595>*/ 	switch (story_flags[817 /* us: 805A9B30 0x02, jp: 805ACDB0 0x02 */]) {
          	  case 0:
/*< 87>*/ 		printf(/* textboxtype: 5, unk: 1, line: 0 */ "Hier ist nichts Brauchbares.")
          	  case 1:
/*<596>*/ 		printf(/* textboxtype: 5, unk: 1, line: 1 */ "Du solltest besser nicht in anderer Leute\nSchränke stöbern!")
          	}
          }

          void entrypoint_003_087() {
/*<185>*/ 	start()
/*<166>*/ 	printf(/* textboxtype: 5, unk: 1, line: 113 */ "Du hast einen <color yellow<Lufttrank V>coloroff> erhalten!\nDieser verfeinerte Trank verhindert, dass\nsich deine Luftanzeige leert. Die Wirkung\neiner Flasche hält <color red<3 Minuten >coloroff>an.")
          }

          void entrypoint_003_111() {
/*<259>*/ 	start()
/*<255>*/ 	printf(/* textboxtype: 5, unk: 1, line: 145 */ "Du hast die <color yellow<Luxus-Geldbörse>coloroff> erhalten!\nDiese enorme Geldbörse lässt selbst den\nreichsten Händler erblassen. In ihr kannst\ndu bis zu <color red<9000 Rubine >coloroff>aufbewahren!")
          }

          void entrypoint_003_129() {
/*<288>*/ 	start()
/*<284>*/ 	printf(/* textboxtype: 5, unk: 1, line: 166 */ "Du hast die <color yellow<mittlere Deku-Tasche>coloroff>\nerhalten! Mit ihr kannst du <color red<20 >coloroff>weitere\nDeku-Kerne bei dir tragen. Sehr nützlich,\nwenn du gern die Schleuder einsetzt.")
          }

          void entrypoint_003_146() {
/*<321>*/ 	start()
/*<657>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<658>*/ 		printf(/* textboxtype: 5, unk: 1, line: 190 */ "Du hast <numeric arg0 0> <color yellow<<0x30004:0x08cd>>coloroff> erhalten!\nEin weit verbreitetes Insekt. Manchmal\nhält es sich auch an seltsamen Orten auf.")
          		flw_621:
/*<621>*/ 		open_collection_screen();
          	  case 1:
/*<319>*/ 		printf(/* textboxtype: 5, unk: 1, line: 189 */ "Du hast <numeric arg0 0> <color yellow<<0x30004:0x08cd>>coloroff> gefangen!\nEin weit verbreitetes Insekt. Manchmal\nhält es sich auch an seltsamen Orten auf.")
          		goto flw_621
          	}
          }

          void entrypoint_003_163() {
/*<344>*/ 	start()
/*<342>*/ 	printf(/* textboxtype: 5, unk: 1, line: 213 */ "Du hast <color yellow<Wüstengras>coloroff> erhalten! Dieses Gras\nlässt sich vielleicht für etwas Nützliches\nverwenden, wenn man es trocknet.")
/*<630>*/ 	open_collection_screen();
          }

          void entrypoint_003_180() {
/*<390>*/ 	start()
/*<388>*/ 	printf(/* textboxtype: 5, unk: 1, line: 230 */ "Du hast das <color yellow<Insigne der Reife>coloroff> erhalten!\nDieses gravierte Artefakt soll dem Helden\ndas Versteck des Triforce enthüllen.")
/*<523>*/ 	story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */] = true;
          }

          void entrypoint_003_198() {
/*<495>*/ 	start()
/*<494>*/ 	printf(/* textboxtype: 5, unk: 1, line: 249 */ "Du hast die <color yellow<Lebensbaumfrucht >coloroff>erhalten!\nSie soll angeblich jede Krankheit heilen\nkönnen. Gib sie dem Donnerdrachen.")
          }

          void entrypoint_003_999() {
/*<611>*/ 	start()
/*<610>*/ 	printf(/* textboxtype: 5, unk: 1, line: 101 */ "Du hast den <color yellow<Greifkäfer>coloroff> erhalten!\nMit seinen größeren Zangen kann er\nItems aufheben und tragen!\n\nDrücke (Z), um nach unten zu blicken\nund ein getragenes Item abzuwerfen.<0x10011:0x07cd>")
          }

          void entrypoint_003_053() {
/*< 96>*/ 	start()
/*< 38>*/ 	printf(/* textboxtype: 5, unk: 1, line: 71 */ "Du hast den <color yellow<Käfer >coloroff>erhalten!\nDieses käferartige Artefakt fliegt auf\nmagische Weise durch die Luft!\n\nZeige mit der Wii-Fernbedienung auf den\n<color red<Bildschirm >coloroff>und lass den Käfer durch\nDrücken von (A) fliegen!\n\n<color red<Verlierst >coloroff>du beim Zielen den <color red<Fokus>coloroff>,\ndrücke einfach (v), um deine Ansicht \nwieder zu zentrieren.<0x10011:0x09cd>")
/*<422>*/ 	open_item_wheel(1)
          }

          void entrypoint_003_036() {
/*<110>*/ 	start()
/*< 52>*/ 	printf(/* textboxtype: 5, unk: 1, line: 46 */ "Du hast <color yellow<Glitzersporen >coloroff>erhalten!\nDieser feine Puder wird von Glitzerpilzen\nfreigesetzt.")
          }

          void entrypoint_003_019() {
/*<127>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 5, unk: 1, line: 24 */ "Du hast den <color yellow<Holzbogen >coloroff>erhalten!\nDamit kannst du von weitem mit hoher\nAngriffskraft Pfeile auf ein Ziel feuern.\n\n<color red<Verlierst >coloroff>du beim Zielen den <color red<Fokus>coloroff>,\ndrücke einfach (v), um deine Ansicht \nwieder zu zentrieren.<0x10011:0x09cd>")
/*<679>*/ 	story_flags[1114 /* us: 805A9B57 0x01, jp: 805ACDD7 0x01 */] = true;
/*<152>*/ 	add_to_counter(498, 20)
/*<421>*/ 	open_item_wheel(7)
          }

          void entrypoint_003_001() {
/*<145>*/ 	start()
/*< 86>*/ 	printf(/* textboxtype: 5, unk: 1, line: 2 */ "Du hast einen <color yellow<kleinen Schlüssel >coloroff>erhalten!\nDamit lassen sich verschlossene Türen in\ndiesem Gebiet öffnen. Du kannst ihn aber\nnur ein einziges Mal verwenden.")
          }

          void entrypoint_003_070() {
/*<147>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 5, unk: 1, line: 93 */ "Du hast die <color yellow<Insekten-Medaille >coloroff>erhalten!\nDamit findest du Insekten leichter.\nSuche auf der Karte nach (O)!")
          }

          void entrypoint_003_088() {
/*<184>*/ 	start()
/*<165>*/ 	printf(/* textboxtype: 5, unk: 1, line: 114 */ "Du hast eine <color yellow<Fee >coloroff>gefangen!\nDiese gütigen Wesen füllen <color red<sechs >coloroff>deiner\nHerzen auf.\n\nIn einer Flasche mitgenommen spendet sie\ndir ihre heilende Energie <color red<automatisch,\nwenn deine Kräfte schwinden>coloroff>.")
          }

          void entrypoint_003_112() {
/*<258>*/ 	start()
/*<418>*/ 	switch (story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */]) {
          	  case 0:
/*<419>*/ 		printf(/* textboxtype: 5, unk: 1, line: 147 */ "Du hast die <color yellow<Abenteurertasche>coloroff> wieder!\nUnd sieh nur! Deine restlichen vermissten\nItems sind auch dabei!")
/*<435>*/ 		open_item_wheel(8)
/*<420>*/ 		story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */] = false;
          	  case 1:
/*<254>*/ 		printf(/* textboxtype: 5, unk: 1, line: 146 */ "Du hast die <color yellow<Abenteurertasche>coloroff> erhalten!\nSie bietet Platz für Items, die du während\ndeines Abenteuers finden wirst.")
/*<603>*/ 		open_adventure_pouch(0)
          	}
          }

          void entrypoint_003_147() {
/*<326>*/ 	start()
/*<659>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<660>*/ 		printf(/* textboxtype: 5, unk: 1, line: 192 */ "Du hast <numeric arg0 0> <color yellow<<0x30004:0x09cd>>coloroff> erhalten!\nMan sagt, in dem Bau des Insekts würde\nsich eine Wasserquelle befinden. So kann\nes in der Wüste überleben.")
          		flw_622:
/*<622>*/ 		open_collection_screen();
          	  case 1:
/*<324>*/ 		printf(/* textboxtype: 5, unk: 1, line: 191 */ "Du hast <numeric arg0 0> <color yellow<<0x30004:0x09cd>>coloroff> gefangen!\nMan sagt, in dem Bau des Insekts würde\nsich eine Wasserquelle befinden. So kann\nes in der Wüste überleben.")
          		goto flw_622
          	}
          }

          void entrypoint_003_164() {
/*<343>*/ 	start()
/*<341>*/ 	printf(/* textboxtype: 5, unk: 1, line: 214 */ "Du hast einen <color yellow<Eidechsenschwanz>coloroff> erhalten!\nDieser Eidechsenschwanz mit stacheliger\nKugel am Ende lässt sich vielleicht sinnvoll\nverarbeiten.")
/*<631>*/ 	open_collection_screen();
          }

          void entrypoint_003_181() {
/*<395>*/ 	start()
/*<393>*/ 	printf(/* textboxtype: 5, unk: 1, line: 231 */ "")
          }

          void entrypoint_003_199() {
/*<499>*/ 	start()
/*<497>*/ 	printf(/* textboxtype: 5, unk: 1, line: 250 */ "Du hast die <color yellow<Zusatz-Geldbörse>coloroff> erhalten!\nIst deine normale Geldbörse voll, bietet\nsie Platz für weitere <color red<300 Rubine>coloroff>.")
/*<644>*/ 	open_collection_screen();
          }

          void entrypoint_003_071() {
/*< 20>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 5, unk: 1, line: 94 */ "Du hast das <color yellow<Schmetterlingsnetz >coloroff>erhalten!\nFange damit flink und leise Insekten und\nandere Dinge.")
/*<423>*/ 	open_item_wheel(2)
/*<612>*/ 	story_flags[849 /* us: 805A9B35 0x80, jp: 805ACDB5 0x80 */] = true;
          }

          void entrypoint_003_054() {
/*< 95>*/ 	start()
/*< 37>*/ 	printf(/* textboxtype: 5, unk: 1, line: 72 */ "Du hast <color yellow<Wasser >coloroff>erhalten!\nFarbloses, klares, reines Wasser. Es könnte\nsich vielleicht noch als nützlich erweisen.")
          }

          void entrypoint_003_037() {
/*<109>*/ 	start()
/*< 51>*/ 	printf(/* textboxtype: 5, unk: 1, line: 47 */ "")
          }

          void entrypoint_003_002() {
/*<144>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 5, unk: 1, line: 3 */ "Du hast einen <color green rupee<grünen Rubin>coloroff><color green rupee< >coloroff>erhalten!\nEr ist <color red<1 Rubin >coloroff>wert. Sammle so viele davon,\nwie du nur kannst!")
          }

          void entrypoint_003_089() {
/*<183>*/ 	start()
/*<164>*/ 	printf(/* textboxtype: 5, unk: 1, line: 115 */ "")
          }

          void entrypoint_003_113() {
/*<257>*/ 	start()
/*<253>*/ 	printf(/* textboxtype: 5, unk: 1, line: 148 */ "Du hast deine <color yellow<Abenteurertasche\n>coloroff>vergrößert! Nun kannst du <color red<ein\nweiteres Item>coloroff> mit dir führen.")
/*<604>*/ 	open_adventure_pouch(1)
          }

          void entrypoint_003_130() {
/*<287>*/ 	start()
/*<283>*/ 	printf(/* textboxtype: 5, unk: 1, line: 167 */ "Du hast die <color yellow<große Deku-Tasche>coloroff> erhalten!\nMit ihr kannst du <color red<30>coloroff> weitere Deku-Kerne\nbei dir tragen. Sehr nützlich, wenn du gern\ndie Schleuder einsetzt.")
          }

          void entrypoint_003_148() {
/*<325>*/ 	start()
/*<661>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<662>*/ 		printf(/* textboxtype: 5, unk: 1, line: 194 */ "Du hast <numeric arg0 0> <color yellow<<0x30004:0x0acd>>coloroff> erhalten!\nDieses Insekt verbringt zehn Jahre seines\nLebens als Larve unter der Erde und lässt\nsich nur schwer fangen!")
          		flw_623:
/*<623>*/ 		open_collection_screen();
          	  case 1:
/*<323>*/ 		printf(/* textboxtype: 5, unk: 1, line: 193 */ "Du hast <numeric arg0 0> <color yellow<<0x30004:0x0acd>>coloroff> gefangen!\nDieses Insekt verbringt zehn Jahre seines\nLebens als Larve unter der Erde und lässt\nsich nur schwer fangen!")
          		goto flw_623
          	}
          }

          void entrypoint_003_165() {
/*<348>*/ 	start()
/*<346>*/ 	printf(/* textboxtype: 5, unk: 1, line: 215 */ "Du hast <color yellow<Eldin-Erz>coloroff> erhalten!\nEin äußerst hartes und robustes Erz, das\nglitzert. Lässt sich gut weiterverarbeiten. ")
/*<632>*/ 	open_collection_screen();
          }

          void entrypoint_003_182() {
/*<394>*/ 	start()
/*<392>*/ 	printf(/* textboxtype: 5, unk: 1, line: 232 */ "")
          }

          void entrypoint_003_072() {
/*< 19>*/ 	start()
/*<506>*/ 	switch (has_empty_bottle()) {
          	  case 0:
/*<507>*/ 		printf(/* textboxtype: 5, unk: 1, line: 96 */ "Du hast eine <color yellow<Fee >coloroff>gefunden!\nDiese gütigen Wesen füllen <color red<sechs >coloroff>deiner\nHerzen auf.\n\nDu besitzt jedoch keine leere <color yellow<Flasche>coloroff>,\nalso lass sie wieder frei.")
          	  case 1:
/*<505>*/ 		printf(/* textboxtype: 5, unk: 1, line: 95 */ "Du hast eine <color yellow<Fee >coloroff>gefunden!\nDiese gütigen Wesen füllen <color red<sechs >coloroff>deiner\nHerzen auf.")
          	}
          }

          void entrypoint_003_055() {
/*< 94>*/ 	start()
/*<614>*/ 	switch (story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */]) {
          	  case 0:
/*<615>*/ 		printf(/* textboxtype: 5, unk: 1, line: 74 */ "Du hast <color yellow<Pilzsporen >coloroff>erhalten!\nSie stammen von einem gigantischen Pilz.\nMit ihnen kannst du die Verletzungen des\nVogels heilen!")
          	  case 1:
/*< 36>*/ 		printf(/* textboxtype: 5, unk: 1, line: 73 */ "Du hast <color yellow<Pilzsporen >coloroff>erhalten!\nSie stammen von einem gigantischen Pilz.\nEs kann nicht schaden, sie mitzunehmen.")
          	}
          }

          void entrypoint_003_038() {
/*<108>*/ 	start()
/*< 50>*/ 	printf(/* textboxtype: 5, unk: 1, line: 48 */ "")
          }

          void entrypoint_003_020() {
/*<126>*/ 	start()
/*<408>*/ 	switch (story_flags[162 /* us: 805A9AE3 0x02, jp: 805ACD63 0x02 */]) {
          	  case 0:
/*<409>*/ 		printf(/* textboxtype: 5, unk: 1, line: 26 */ "Du hast den <color yellow<Greifhaken>coloroff> wieder!\nEndlich kannst du dich wieder an weit\nentfernte Orte hangeln.")
/*<429>*/ 		open_item_wheel(6)
/*<430>*/ 		story_flags[162 /* us: 805A9AE3 0x02, jp: 805ACD63 0x02 */] = false;
          	  case 1:
/*< 67>*/ 		printf(/* textboxtype: 5, unk: 1, line: 25 */ "Du hast den <color yellow<Greifhaken >coloroff>erhalten!\n\n\n\nEiner der drei Schätze der Göttin.\nNutze die Klaue an der Kette, um dich\nan ein <color red<Greifhaken-Ziel>coloroff> oder an <color red<Efeu>coloroff>\nziehen zu lassen.\n<color red<Verlierst >coloroff>du beim Zielen den <color red<Fokus>coloroff>,\ndrücke einfach (v), um deine Ansicht \nwieder zu zentrieren.<0x10011:0x09cd>")
/*<501>*/ 		story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */] = true;
/*<410>*/ 		open_item_wheel(6)
          	}
          }

          void entrypoint_003_003() {
/*<143>*/ 	start()
/*<591>*/ 	switch (story_flags[817 /* us: 805A9B30 0x02, jp: 805ACDB0 0x02 */]) {
          	  case 0:
/*<590>*/ 		printf(/* textboxtype: 5, unk: 1, line: 5 */ "Du hast einen <color blue rupee<blauen Rubin>coloroff> gefunden!\nEr ist <color red<5 Rubine >coloroff>wert. Steck ihn in deinen\nBeutel und nimm ihn mit!")
          	  case 1:
/*< 84>*/ 		printf(/* textboxtype: 5, unk: 1, line: 4 */ "Du hast einen <color blue rupee<blauen Rubin>coloroff> erhalten!\nEr ist <color red<5 Rubine >coloroff>wert. Das nennt man einen\nglücklichen Fund!")
          	}
          }

          void entrypoint_003_114() {
/*<256>*/ 	start()
/*<252>*/ 	printf(/* textboxtype: 5, unk: 1, line: 149 */ "Du hast eine <color yellow<Lebenskraft-Medaille>coloroff>\nerhalten! Trägst du sie bei dir, erhältst du\n<color red<ein weiteres Herz>coloroff>. Entscheide selbst, wann\nes lohnt, diese Medaille mit dir zu führen.")
          }

          void entrypoint_003_131() {
/*<298>*/ 	start()
/*<294>*/ 	printf(/* textboxtype: 5, unk: 1, line: 168 */ "Du hast den <color yellow<kleinen Köcher>coloroff> erhalten!\nMit ihm kannst du <color red<5>coloroff> weitere Pfeile bei dir\ntragen. Nutze ihn, wenn du häufig deinen\nBogen einsetzen möchtest.")
          }

          void entrypoint_003_149() {
/*<330>*/ 	start()
/*<663>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<664>*/ 		printf(/* textboxtype: 5, unk: 1, line: 196 */ "Du hast <numeric arg0 0> <color yellow<<0x30004:0x0bcd>>coloroff> erhalten!\nDie Facettenaugen dieses Insekts glitzern\nwie Rubine. Seine langen Flügel sind\ndurchsichtig wie Glas.")
          		flw_624:
/*<624>*/ 		open_collection_screen();
          	  case 1:
/*<328>*/ 		printf(/* textboxtype: 5, unk: 1, line: 195 */ "Du hast <numeric arg0 0> <color yellow<<0x30004:0x0bcd>>coloroff> gefangen!\nDie Facettenaugen dieses Insekts glitzern\nwie Rubine. Seine langen Flügel sind\ndurchsichtig wie Glas.")
          		goto flw_624
          	}
          }

          void entrypoint_003_166() {
/*<347>*/ 	start()
/*<345>*/ 	printf(/* textboxtype: 5, unk: 1, line: 216 */ "Du hast eine <color yellow<Äonenblume>coloroff> erhalten!\nBlühte bereits in vergangenen Zeiten\nwunderschön und soll im Dunkeln hell\nleuchten.")
/*<633>*/ 	open_collection_screen();
          }

          void entrypoint_003_183() {
/*<482>*/ 	start()
/*<480>*/ 	printf(/* textboxtype: 5, unk: 1, line: 233 */ "")
          }

          void entrypoint_003_056() {
/*< 93>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 5, unk: 1, line: 75 */ "Du hast die <color yellow<Grabklauen >coloroff>erhalten!\nDrücke (A), um mit ihnen in auffällig\naussehendem Erdreich zu graben.")
          }

          void entrypoint_003_039() {
/*<107>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 5, unk: 1, line: 49 */ "")
          }

          void entrypoint_003_021() {
/*<125>*/ 	start()
/*< 66>*/ 	printf(/* textboxtype: 5, unk: 1, line: 27 */ "Du hast die <color yellow<Vogelfigur >coloroff>erhalten!\nDiese Figur weist dich als Sieger des\nheutigen zeremoniellen Wettfluges aus.\nZelda wird sich freuen!")
/*<584>*/ 	changeScene(3, 0) // 
          }

          void entrypoint_003_004() {
/*<142>*/ 	start()
/*< 83>*/ 	printf(/* textboxtype: 5, unk: 1, line: 6 */ "Du hast einen <color red rupee<roten Rubin>coloroff> erhalten!\nEr ist <color red<20 Rubine >coloroff>wert. Was für ein Glück!")
          }

          void entrypoint_003_073() {
/*<154>*/ 	start()
/*< 17>*/ 	printf(/* textboxtype: 5, unk: 1, line: 97 */ "")
          }

          void entrypoint_003_090() {
/*<182>*/ 	start()
/*<163>*/ 	printf(/* textboxtype: 5, unk: 1, line: 116 */ "Du hast den <color yellow<Eisenbogen>coloroff> erhalten!\nDieser Bogen wurde für äußerst erfahrene\nSchützen gefertigt. Seine Kraft übersteigt\ndie deines alten Bogens.")
          }

          void entrypoint_003_115() {
/*<267>*/ 	start()
/*<263>*/ 	printf(/* textboxtype: 5, unk: 1, line: 150 */ "")
          }

          void entrypoint_003_132() {
/*<297>*/ 	start()
/*<293>*/ 	printf(/* textboxtype: 5, unk: 1, line: 169 */ "Du hast den <color yellow<mittleren Köcher>coloroff> erhalten!\nMit ihm kannst du <color red<10>coloroff> weitere Pfeile bei dir\ntragen. Nutze ihn, wenn du häufig deinen\nBogen einsetzen möchtest.")
          }

          void entrypoint_003_167() {
/*<362>*/ 	start()
/*<361>*/ 	printf(/* textboxtype: 5, unk: 1, line: 217 */ "Du hast einen <color yellow<Bernsteinhalbmond\n>coloroff>erhalten! Niemand weiß, wie dieses\nbernsteinfarbene Kleinod seine endgültige\nForm erhielt.")
/*<634>*/ 	open_collection_screen();
          }

          void entrypoint_003_184() {
/*<481>*/ 	start()
/*<479>*/ 	printf(/* textboxtype: 5, unk: 1, line: 234 */ "")
          }

          void entrypoint_003_057() {
/*< 92>*/ 	start()
/*<396>*/ 	check_item_flag(52, 1)
/*<397>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 28}) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 5, unk: 1, line: 77 */ "Du hast <color yellow<5 Deku-Kerne>coloroff> erhalten!\nDiese kleinen Kerne kannst du mit der\nSchleuder verschießen. Achte dabei immer\nauf deinen Munitionsvorrat.")
          	  case 1:
/*<398>*/ 		printf(/* textboxtype: 5, unk: 1, line: 78 */ "")
/*<503>*/ 		add_to_counter(493, -5)
          	}
          }

          void entrypoint_003_022() {
/*<124>*/ 	start()
/*< 65>*/ 	printf(/* textboxtype: 5, unk: 1, line: 28 */ "")
          }

          void entrypoint_003_005() {
/*<141>*/ 	start()
/*< 82>*/ 	printf(/* textboxtype: 5, unk: 1, line: 7 */ "Das <color yellow white<Triforce>coloroff><color yellow white< >coloroff>ist vollständig! Mit seiner\nMacht kannst du Zeldas Bitte nachkommen\nund den <color blue<Todbringer>coloroff> <color red<vernichten>coloroff>.")
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
/*<156>*/ 		printf(/* textboxtype: 5, unk: 1, line: 99 */ "Du hast <color yellow<heiliges Wasser>coloroff> erhalten!\nEs sieht wie gewöhnliches Wasser aus,\nstrahlt jedoch spürbar Energie aus.")
          	  case 1:
/*<514>*/ 		switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          		  case 0:
/*<515>*/ 			printf(/* textboxtype: 5, unk: 1, line: 98 */ "Du hast <color yellow<heiliges Wasser >coloroff>erhalten!\nDieses reine Wasser hat die Kraft, den\nWasserdrachen zu heilen. Diese Kraft ist\nin keinem normalen Wasser zu finden.")
/*<601>*/ 			scene_flags[11 'Faron: Skyview Temple'][98 /* 0xD 04 */] = false;
/*<602>*/ 			scene_flags[11 'Faron: Skyview Temple'][97 /* 0xD 02 */] = false;
          		  case 1:
          			goto flw_156
          		}
          	}
          }

          void entrypoint_003_091() {
/*<181>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 5, unk: 1, line: 117 */ "Du hast den <color yellow<heiligen Bogen>coloroff> erhalten!\nDie heilige Macht der Göttin verleiht ihm\nKraft und bringt Verderben über all deine\nFeinde!")
          }

          void entrypoint_003_116() {
/*<266>*/ 	start()
/*<551>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<552>*/ 		printf(/* textboxtype: 5, unk: 1, line: 152 */ "Dein Schild wurde repariert!\nEr sieht aus wie neu!")
          	  case 1:
/*<262>*/ 		printf(/* textboxtype: 5, unk: 1, line: 151 */ "Du hast den <color yellow<Holzschild>coloroff> erhalten!\nEr ist leicht zu handhaben, hält aber\nnicht viel aus und brennt leicht.")
/*<516>*/ 		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          	}
          }

          void entrypoint_003_133() {
/*<296>*/ 	start()
/*<292>*/ 	printf(/* textboxtype: 5, unk: 1, line: 170 */ "Du hast den <color yellow<großen Köcher>coloroff> erhalten!\nMit ihm kannst du <color red<15>coloroff> weitere Pfeile bei dir\ntragen. Nutze ihn, wenn du häufig deinen\nBogen einsetzen möchtest.")
          }

          void entrypoint_003_150() {
/*<329>*/ 	start()
/*<665>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<666>*/ 		printf(/* textboxtype: 5, unk: 1, line: 198 */ "Du hast <numeric arg0 0> <color yellow<<0x30004:0x0ccd>>coloroff> erhalten!\nDieses Insekt liebt alles, was stinkt und\nrollt es in sein Nest. Sieht dabei ziemlich\nniedlich aus.")
          		flw_625:
/*<625>*/ 		open_collection_screen();
          	  case 1:
/*<327>*/ 		printf(/* textboxtype: 5, unk: 1, line: 197 */ "Du hast <numeric arg0 0> <color yellow<<0x30004:0x0ccd>>coloroff> gefangen!\nDieses Insekt liebt alles, was stinkt und\nrollt es in sein Nest. Sieht dabei ziemlich\nniedlich aus.")
          		goto flw_625
          	}
          }

          void entrypoint_003_168() {
/*<364>*/ 	start()
/*<363>*/ 	printf(/* textboxtype: 5, unk: 1, line: 218 */ "Du hast einen <color yellow<Finsterhalbmond >coloroff>erhalten!\nEr ähnelt dem Bernsteinhalbmond, hat\njedoch eine andere Beschaffenheit und ist\nnur an bestimmten Orten zu finden.")
/*<635>*/ 	open_collection_screen();
          }

          void entrypoint_003_185() {
/*<484>*/ 	start()
/*<483>*/ 	printf(/* textboxtype: 5, unk: 1, line: 235 */ "")
          }

          void entrypoint_003_040() {
/*<106>*/ 	start()
/*< 48>*/ 	printf(/* textboxtype: 5, unk: 1, line: 50 */ "Du hast <color yellow<5 Bomben >coloroff>erhalten!\nWirf oder rolle sie, um Objekte in die Luft\nzu sprengen. Nimm Bomben, die du\nunterwegs findest, für später mit.")
          }

          void entrypoint_003_023() {
/*<123>*/ 	start()
/*< 64>*/ 	printf(/* textboxtype: 5, unk: 1, line: 29 */ "")
          }

          void entrypoint_003_006() {
/*<140>*/ 	start()
/*< 81>*/ 	printf(/* textboxtype: 5, unk: 1, line: 8 */ "Du hast ein <color yellow<Herz >coloroff>gefunden!\nEs ist mit heilender Energie erfüllt und\nstellt <color red<ein Herz>coloroff> wieder her.")
          }

          void entrypoint_003_092() {
/*<180>*/ 	start()
/*<402>*/ 	switch (story_flags[165 /* us: 805A9AE3 0x10, jp: 805ACD63 0x10 */]) {
          	  case 0:
/*<403>*/ 		printf(/* textboxtype: 5, unk: 1, line: 120 */ "Du hast die <color yellow<Bombentasche >coloroff>wieder!\nKrach-Bumm! Endlich kannst du wieder\nSachen in die Luft sprengen!")
/*<426>*/ 		open_item_wheel(3)
/*<434>*/ 		story_flags[165 /* us: 805A9AE3 0x10, jp: 805ACD63 0x10 */] = false;
          	  case 1:
/*<424>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*<425>*/ 			printf(/* textboxtype: 5, unk: 0, line: 119 */ "Du hast eine <color yellow<Bombentasche>coloroff> erhalten!\n<color blue<Ferri >coloroff>hat sie dir netterweise überlassen.\nBeseitige mit ihr Hindernisse.")
/*<678>*/ 			story_flags[1115 /* us: 805A9B57 0x02, jp: 805ACDD7 0x02 */] = true;
          		  case 1:
/*<161>*/ 			printf(/* textboxtype: 5, unk: 1, line: 118 */ "Du hast eine <color yellow<Bombentasche>coloroff> gefunden!\nIn dieser nützlichen Tasche kannst du\nDonnerblumen mit dir herumtragen.\n\nSie ermöglicht dir das Vordringen an Orte,\ndie dir sonst verwehrt bleiben. Frage <color blue<Ferri>coloroff>,\nob er sie dir leiht!")
/*<414>*/ 			open_item_wheel(3)
          		}
          	}
          }

          void entrypoint_003_075() {
/*<197>*/ 	start()
/*<178>*/ 	printf(/* textboxtype: 5, unk: 1, line: 100 */ "Du hast den <color yellow<Greifkäfer>coloroff> erhalten!\nMit seinen größeren Zangen kann er\nItems aufheben und tragen!\n\nDrücke (Z), um nach unten zu blicken\nund ein getragenes Item abzuwerfen.<0x10011:0x07cd>")
          }

          void entrypoint_003_117() {
/*<265>*/ 	start()
/*<553>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<555>*/ 		printf(/* textboxtype: 5, unk: 1, line: 152 */ "Dein Schild wurde repariert!\nEr sieht aus wie neu!")
          	  case 1:
/*<261>*/ 		printf(/* textboxtype: 5, unk: 1, line: 153 */ "Du hast den <color yellow<harten Holzschild>coloroff> erhalten!\nEr ist immer noch leicht zu handhaben,\nhält aber mehr aus als sein Vorgänger.")
          	}
          }

          void entrypoint_003_134() {
/*<295>*/ 	start()
/*<291>*/ 	printf(/* textboxtype: 5, unk: 1, line: 171 */ "Du hast die <color yellow<kleine Bombentasche >coloroff>erhalten! \nMit ihr kannst du <color red<5>coloroff> weitere Bomben bei dir\ntragen. Praktisch, wenn du häufig Bomben\neinsetzen möchtest.")
          }

          void entrypoint_003_151() {
/*<334>*/ 	start()
/*<667>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<668>*/ 		printf(/* textboxtype: 5, unk: 1, line: 200 */ "Du hast <numeric arg0 0> <color yellow<<0x30004:0x0dcd>>coloroff> erhalten!\nSehr beliebt bei den Kindern im\nWolkenhort. Achtung! Kneift gerne\nmit den Zangen!")
          		flw_626:
/*<626>*/ 		open_collection_screen();
          	  case 1:
/*<332>*/ 		printf(/* textboxtype: 5, unk: 1, line: 199 */ "Du hast <numeric arg0 0> <color yellow<<0x30004:0x0dcd>>coloroff> gefangen!\nSehr beliebt bei den Kindern im\nWolkenhort. Achtung! Kneift gerne\nmit den Zangen!")
          		goto flw_626
          	}
          }

          void entrypoint_003_169() {
/*<352>*/ 	start()
/*<350>*/ 	printf(/* textboxtype: 5, unk: 1, line: 219 */ "Du hast <color yellow<Glibber>coloroff> erhalten!\nNicht besonders hübsch, aber für eine\nVielzahl von Dingen verwendbar.")
/*<636>*/ 	open_collection_screen();
          }

          void entrypoint_003_058() {
/*<453>*/ 	start()
/*<454>*/ 	check_item_flag(491, 199)
/*<455>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 54}) {
          	  case 0:
/*<452>*/ 		printf(/* textboxtype: 5, unk: 1, line: 80 */ "")
          	  case 1:
/*<456>*/ 		printf(/* textboxtype: 5, unk: 1, line: 79 */ "")
          	}
          }

          void entrypoint_003_186() {
/*<466>*/ 	start()
/*<464>*/ 	printf(/* textboxtype: 5, unk: 1, line: 236 */ "Du hast die <color yellow<Hymne der Göttin>coloroff> erlernt!\nDiese mysteriöse Melodie stammt aus\nuralten Zeiten.")
/*<579>*/ 	changeScene(2, 0) // 
          }

          void entrypoint_003_041() {
/*<105>*/ 	start()
/*< 47>*/ 	printf(/* textboxtype: 5, unk: 1, line: 51 */ "Du hast <color yellow<10 Bomben >coloroff>erhalten!\nWirf oder rolle sie, um Objekte in die Luft\nzu sprengen. Bis du sie brauchst, kannst\ndu sie in deiner Bombentasche sammeln.")
          }

          void entrypoint_003_024() {
/*<122>*/ 	start()
/*< 63>*/ 	printf(/* textboxtype: 5, unk: 1, line: 30 */ "")
          }

          void entrypoint_003_007() {
/*<139>*/ 	start()
/*<157>*/ 	check_item_flag(19, 1)
/*<158>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          	  case 0:
/*< 80>*/ 		printf(/* textboxtype: 5, unk: 1, line: 9 */ "Du hast einen<color yellow< verschossenen Pfeil \n>coloroff>gefunden! Er ist noch ganz und kann\nerneut verwendet werden. Praktisch!")
          	  case 1:
/*<159>*/ 		printf(/* textboxtype: 5, unk: 1, line: 10 */ "")
          	}
          }

          void entrypoint_003_093() {
/*<179>*/ 	start()
/*<160>*/ 	printf(/* textboxtype: 5, unk: 1, line: 121 */ "Du hast einen <color yellow<Herzcontainer>coloroff> erhalten!\nDeine Lebensenergie wurde um <color red<ein Herz \n>coloroff>erhöht und wieder vollständig aufgefüllt!")
          }

          void entrypoint_003_076() {
/*<196>*/ 	start()
/*<177>*/ 	printf(/* textboxtype: 5, unk: 1, line: 102 */ "Du hast den <color yellow<Flinkkäfer>coloroff> erhalten!\nEr ist um einiges schneller als dein alter\nKäfer. Aber pass auf, dass du damit die\nKurve kriegst!")
          }

          void entrypoint_003_100() {
/*<234>*/ 	start()
/*<605>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<606>*/ 		printf(/* textboxtype: 5, unk: 1, line: 134 */ "Du hast eine <color yellow<Herz-Medaille>coloroff> erhalten!\nHast du sie bei dir, so kannst du auch\nim <color red<Helden-Modus >coloroff>Herzen finden.\n\nSie bewirkt außerdem, dass Herz-Blumen\nerblühen. Nimm sie mit, falls dir deine\nGesundheit am Herzen liegt.")
/*<607>*/ 		story_flags[841 /* us: 805A9B35 0x01, jp: 805ACDB5 0x01 */] = true;
          	  case 1:
/*<230>*/ 		printf(/* textboxtype: 5, unk: 1, line: 133 */ "Du hast eine <color yellow<Herz-Medaille>coloroff> erhalten!\nTrägst du sie bei dir, wirst du häufiger\nauf Herzen stoßen. Nimm sie mit, falls dir\ndeine Gesundheit am Herzen liegt.")
          	}
          }

          void entrypoint_003_118() {
/*<264>*/ 	start()
/*<554>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<556>*/ 		printf(/* textboxtype: 5, unk: 1, line: 152 */ "Dein Schild wurde repariert!\nEr sieht aus wie neu!")
          	  case 1:
/*<260>*/ 		printf(/* textboxtype: 5, unk: 1, line: 154 */ "Du hast den <color yellow<starken Holzschild>coloroff> erhalten!\nDieser leicht zu handhabende Schild ist der\nrobusteste aller Holzschilde.")
          	}
          }

          void entrypoint_003_135() {
/*<306>*/ 	start()
/*<302>*/ 	printf(/* textboxtype: 5, unk: 1, line: 172 */ "Du hast die <color yellow<mittlere Bombentasche\n>coloroff>erhalten! Mit ihr kannst du <color red<10>coloroff> weitere\nBomben bei dir tragen. Praktisch, wenn du\nhäufig Bomben einsetzen möchtest.")
          }

          void entrypoint_003_152() {
/*<333>*/ 	start()
/*<669>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<670>*/ 		printf(/* textboxtype: 5, unk: 1, line: 202 */ "Du hast <numeric arg0 0> <color yellow<<0x30004:0x0ecd>>coloroff>\nerhalten! Gilt als das seltenste Insekt\nüberhaupt und kann ausschließlich an\ndunklen Orten gefunden werden.")
          		flw_627:
/*<627>*/ 		open_collection_screen();
          	  case 1:
/*<331>*/ 		printf(/* textboxtype: 5, unk: 1, line: 201 */ "Du hast <numeric arg0 0> <color yellow<<0x30004:0x0ecd>>coloroff>\ngefangen! Gilt als das seltenste Insekt\nüberhaupt und kann ausschließlich an\ndunklen Orten gefunden werden.")
          		goto flw_627
          	}
          }

          void entrypoint_003_059() {
/*<458>*/ 	start()
/*<459>*/ 	check_item_flag(492, 19999)
/*<460>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 56}) {
          	  case 0:
/*<457>*/ 		printf(/* textboxtype: 5, unk: 1, line: 80 */ "")
          	  case 1:
/*<461>*/ 		printf(/* textboxtype: 5, unk: 1, line: 79 */ "")
          	}
          }

          void entrypoint_003_187() {
/*<465>*/ 	start()
/*<463>*/ 	printf(/* textboxtype: 5, unk: 1, line: 237 */ "")
/*<485>*/ 	story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */] = true;
          }

          void entrypoint_003_042() {
/*<104>*/ 	start()
/*< 46>*/ 	printf(/* textboxtype: 5, unk: 1, line: 52 */ "Du hast eine <color yellow<Ausdauerfrucht >coloroff>erhalten!\nDiese geheimnisvolle Frucht stellt deine\nAusdauer wieder komplett her.")
          }

          void entrypoint_003_025() {
/*<121>*/ 	start()
/*< 62>*/ 	printf(/* textboxtype: 5, unk: 1, line: 31 */ "Du hast den <color yellow<gesegneten Schlüssel>coloroff> erhalten!\nDiese Holzschnitzerei strahlt Güte aus. Sie\nähnelt der Statue im oberen Stockwerk.")
          }

          void entrypoint_003_008() {
/*<138>*/ 	start()
/*< 79>*/ 	printf(/* textboxtype: 5, unk: 1, line: 11 */ "Du hast <color yellow<10 Pfeile>coloroff> erhalten!\nDu kannst sie mit deinem Bogen abfeuern.\nIhre Anzahl ist begrenzt, also setze sie mit\nBedacht ein!")
          }

          void entrypoint_003_077() {
/*<195>*/ 	start()
/*<176>*/ 	printf(/* textboxtype: 5, unk: 1, line: 103 */ "Du hast den <color yellow<Kraftkäfer>coloroff> erhalten!\nEr kann viel länger fliegen als dein alter\nKäfer. Nun kannst du auch Orte, die weiter\nentfernt sind, erforschen!")
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
/*<208>*/ 				printf(/* textboxtype: 5, unk: 1, line: 124 */ "Du hast ein <color yellow<Herzteil>coloroff> erhalten!\nSammle vier, um deine Lebensenergie\num ein Herz zu erhöhen.\nDir fehlt nur noch <color red<ein >coloroff>weiteres!")
          			  case 1:
/*<200>*/ 				printf(/* textboxtype: 5, unk: 1, line: 123 */ "Du hast ein <color yellow<Herzteil>coloroff> erhalten!\nSammle vier, um deine Lebensenergie\num ein Herz zu erhöhen.\nDir fehlen nur noch <color red<zwei >coloroff>weitere!")
          			}
          		  case 1:
/*<203>*/ 			printf(/* textboxtype: 5, unk: 1, line: 122 */ "Du hast ein <color yellow<Herzteil>coloroff> erhalten!\nSammle vier, um deine Lebensenergie\num ein Herz zu erhöhen.\nDir fehlen nur noch <color red<drei >coloroff>weitere!")
          		}
          	  case 1:
/*<207>*/ 		printf(/* textboxtype: 5, unk: 1, line: 125 */ "Du hast ein <color yellow<Herzteil>coloroff> erhalten!\nDamit hast du nun einen vollständigen\nHerzcontainer. Deine Lebensenergie wird\num ein Herz erhöht.")
          	}
          }

          void entrypoint_003_101() {
/*<233>*/ 	start()
/*<229>*/ 	printf(/* textboxtype: 5, unk: 1, line: 135 */ "Du hast eine <color yellow<Rubin-Medaille>coloroff> erhalten!\nTrägst du sie bei dir, wirst du häufiger\nals sonst auf Rubine stoßen. Nimm sie mit,\num schnell zu Reichtum zu kommen.")
          }

          void entrypoint_003_119() {
/*<274>*/ 	start()
/*<557>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<560>*/ 		printf(/* textboxtype: 5, unk: 1, line: 152 */ "Dein Schild wurde repariert!\nEr sieht aus wie neu!")
          	  case 1:
/*<270>*/ 		printf(/* textboxtype: 5, unk: 1, line: 155 */ "Du hast den <color yellow<Eisenschild>coloroff> erhalten!\nDieser robuste Schild zerbricht nicht so\nleicht und brennt auch nicht. Allerdings \nsolltest du dich vor Elektrizität hüten!")
/*<517>*/ 		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          	}
          }

          void entrypoint_003_136() {
/*<305>*/ 	start()
/*<301>*/ 	printf(/* textboxtype: 5, unk: 1, line: 173 */ "Du hast die <color yellow<große Bombentasche\n>coloroff>erhalten! Mit ihr kannst du <color red<15>coloroff> weitere\nBomben bei dir tragen. Praktisch, wenn du\nhäufig Bomben einsetzen möchtest.")
          }

          void entrypoint_003_153() {
/*<336>*/ 	start()
/*<335>*/ 	printf(/* textboxtype: 5, unk: 1, line: 203 */ "Du hast eine <color yellow<Flasche>coloroff> erhalten!\nBewahre verschiedene Dinge darin auf.")
          }

          void entrypoint_003_170() {
/*<351>*/ 	start()
/*<349>*/ 	printf(/* textboxtype: 5, unk: 1, line: 220 */ "Du hast eine <color yellow<Monsterklaue >coloroff>erhalten!\nDiese Klaue stammt von einem Monster\nund sieht äußerst gefährlich aus.")
/*<637>*/ 	open_collection_screen();
          }

          void entrypoint_003_188() {
/*<470>*/ 	start()
/*<468>*/ 	printf(/* textboxtype: 5, unk: 1, line: 238 */ "")
/*<543>*/ 	story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */] = true;
          }

          void entrypoint_003_060() {
/*< 91>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 5, unk: 1, line: 83 */ "Du hast <color yellow<10 Deku-Kerne >coloroff>erhalten!\nDiese kleinen Kerne kannst du mit der\nSchleuder verschießen. Achte dabei immer\nauf deinen Munitionsvorrat.")
          }

          void entrypoint_003_043() {
/*<103>*/ 	start()
/*<400>*/ 	check_item_flag(500, 14)
/*<399>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 30}) {
          	  case 0:
/*<401>*/ 		printf(/* textboxtype: 5, unk: 1, line: 54 */ "Du hast <color yellow<Farores Tränen >coloroff>gefunden.\nDies hat deine Seele reifen lassen,\n<heroname>!\n\nDoch noch ist die Prüfung nicht vorbei...\nBegib dich vorsichtig zum Ausgang, um ein\nZeichen deiner Reife zu erhalten.")
          	  case 1:
/*< 45>*/ 		printf(/* textboxtype: 5, unk: 1, line: 53 */ "Du hast eine von <color yellow<Farores Tränen >coloroff>erhalten!\nIhre heilige Macht hindert die Hüter für\n<color red<90 Sekunden >coloroff>daran, sich zu bewegen.\n\nSammle alle <color red<15>coloroff>, um diese Prüfung zu\nbestehen!")
          	}
          }

          void entrypoint_003_026() {
/*<120>*/ 	start()
/*< 61>*/ 	printf(/* textboxtype: 5, unk: 1, line: 32 */ "Du hast den <color yellow<Mysterienkristall >coloroff>erhalten!\nEinige der schwach leuchtenden\nKristallquadrate scheinen zu fehlen.")
          }

          void entrypoint_003_009() {
/*<137>*/ 	start()
/*< 78>*/ 	printf(/* textboxtype: 5, unk: 1, line: 12 */ "")
/*<542>*/ 	story_flags[583 /* us: 805A9B1B 0x40, jp: 805ACD9B 0x40 */] = true;
          }

          void entrypoint_003_078() {
/*<194>*/ 	start()
/*<175>*/ 	printf(/* textboxtype: 5, unk: 1, line: 104 */ "Du hast einen <color yellow<Herztrank>coloroff> erhalten!\nSetze ihn als Taschen-Item ein, um\n<color red<8 Herzen >coloroff>wiederaufzufüllen.")
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
/*<580>*/ 			printf(/* textboxtype: 5, unk: 1, line: 126 */ "Du hast das <color yellow white<Triforce des Mutes >coloroff>erhalten!\nDiese Macht wurde einst den Menschen\nvon den Göttern geschenkt.\n\nSammle die drei Artefakte, und dir wird\ndie <color red<unendliche Kraft>coloroff> geschenkt, die dir\njeden noch so großen Wunsch gewährt.")
/*<525>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_533:
/*<533>*/ 			printf(/* textboxtype: 5, unk: 1, line: 126 */ "Du hast das <color yellow white<Triforce des Mutes >coloroff>erhalten!\nDiese Macht wurde einst den Menschen\nvon den Göttern geschenkt.\n\nSammle die drei Artefakte, und dir wird\ndie <color red<unendliche Kraft>coloroff> geschenkt, die dir\njeden noch so großen Wunsch gewährt.")
/*<532>*/ 			printf(/* textboxtype: 5, unk: 1, line: 128 */ "Sammle <color red<ein>coloroff> weiteres Artefakt, um das\nTriforce zu vervollständigen.")
/*<570>*/ 			changeScene(3, 1) // 
          		}
          	  case 1:
/*<545>*/ 		check_item_flag(97, 1)
/*<546>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 64}) {
          		  case 0:
          			goto flw_533
          		  case 1:
/*<214>*/ 			printf(/* textboxtype: 5, unk: 1, line: 126 */ "Du hast das <color yellow white<Triforce des Mutes >coloroff>erhalten!\nDiese Macht wurde einst den Menschen\nvon den Göttern geschenkt.\n\nSammle die drei Artefakte, und dir wird\ndie <color red<unendliche Kraft>coloroff> geschenkt, die dir\njeden noch so großen Wunsch gewährt.")
/*<531>*/ 			printf(/* textboxtype: 5, unk: 1, line: 127 */ "Sammle <color red<zwei>coloroff> weitere Artefakte, um das\nTriforce zu vervollständigen.")
/*<571>*/ 			changeScene(3, 1) // 
          		}
          	}
          }

          void entrypoint_003_102() {
/*<232>*/ 	start()
/*<228>*/ 	printf(/* textboxtype: 5, unk: 1, line: 136 */ "Du hast die <color yellow<Schatz-Medaille>coloroff> erhalten!\nTrägst du sie bei dir, wirst du häufiger\nals sonst auf Schätze stoßen. Nimm sie mit,\nwenn du auf Schatzsuche gehst.")
          }

          void entrypoint_003_137() {
/*<304>*/ 	start()
/*<411>*/ 	switch (story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */]) {
          	  case 0:
/*<412>*/ 		printf(/* textboxtype: 5, unk: 1, line: 175 */ "Du hast die <color yellow<Peitsche>coloroff> wieder!\nSieh dich um, vielleicht gibt es etwas, das\ndu jetzt erreichen kannst!")
/*<431>*/ 		open_item_wheel(5)
/*<413>*/ 		story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */] = false;
          	  case 1:
/*<300>*/ 		printf(/* textboxtype: 5, unk: 1, line: 174 */ "Du hast die <color yellow<Peitsche>coloroff> erhalten!\nAn ihrer Spitze befindet sich eine magische\nLichtkugel, die an den unterschiedlichsten\nDingen haften kann.\nDrücke (Z), um ein Ziel anzuvisieren und\nbewege die Wii-Fernbedienung ruckartig,\num deine Peitsche zu schwingen.<0x10011:0x07cd>")
/*<432>*/ 		open_item_wheel(5)
          	}
          }

          void entrypoint_003_171() {
/*<356>*/ 	start()
/*<354>*/ 	printf(/* textboxtype: 5, unk: 1, line: 221 */ "Du hast ein <color yellow<Monsterhorn>coloroff> erhalten!\nDieses beeindruckende Signalhorn ist \nziemlich hart und kann als Werkstoff\nverwendet werden.")
/*<638>*/ 	open_collection_screen();
          }

          void entrypoint_003_154() {
/*<370>*/ 	start()
/*<369>*/ 	printf(/* textboxtype: 5, unk: 1, line: 204 */ "")
          }

          void entrypoint_003_189() {
/*<469>*/ 	start()
/*<467>*/ 	printf(/* textboxtype: 5, unk: 1, line: 239 */ "")
/*<544>*/ 	story_flags[73 /* us: 805A9AE9 0x40, jp: 805ACD69 0x40 */] = true;
          }

          void entrypoint_003_061() {
/*< 12>*/ 	start()
/*<  8>*/ 	printf(/* textboxtype: 5, unk: 1, line: 84 */ "")
/*<  9>*/ 	give_item(61 0x3D);
          }

          void entrypoint_003_027() {
/*<119>*/ 	start()
/*< 60>*/ 	printf(/* textboxtype: 5, unk: 1, line: 33 */ "Du hast den <color yellow<Tentakelschlüssel >coloroff>erhalten!\nDiese Schnitzerei sieht aus wie ein\nTintenfisch mit unzähligen Saugnäpfen.")
          }

          void entrypoint_003_079() {
/*<193>*/ 	start()
/*<174>*/ 	printf(/* textboxtype: 5, unk: 1, line: 105 */ "Du hast einen <color yellow<Herztrank V>coloroff> erhalten!\nDieser verfeinerte Herztrank füllt <color red<all\ndeine Herzen >coloroff>wieder auf.")
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
/*<581>*/ 			printf(/* textboxtype: 5, unk: 1, line: 129 */ "Du hast das <color yellow white<Triforce der Kraft >coloroff>erhalten!\nDiese Macht wurde einst den Menschen\nvon den Göttern geschenkt.\n\nSammle die drei Artefakte, und dir wird\ndie <color red<unendliche Kraft>coloroff> geschenkt, die dir\njeden noch so großen Wunsch gewährt.")
/*<526>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_538:
/*<538>*/ 			printf(/* textboxtype: 5, unk: 1, line: 129 */ "Du hast das <color yellow white<Triforce der Kraft >coloroff>erhalten!\nDiese Macht wurde einst den Menschen\nvon den Göttern geschenkt.\n\nSammle die drei Artefakte, und dir wird\ndie <color red<unendliche Kraft>coloroff> geschenkt, die dir\njeden noch so großen Wunsch gewährt.")
/*<535>*/ 			printf(/* textboxtype: 5, unk: 1, line: 128 */ "Sammle <color red<ein>coloroff> weiteres Artefakt, um das\nTriforce zu vervollständigen.")
/*<572>*/ 			changeScene(2, 1) // 
          		}
          	  case 1:
/*<547>*/ 		check_item_flag(97, 1)
/*<548>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 66}) {
          		  case 0:
          			goto flw_538
          		  case 1:
/*<220>*/ 			printf(/* textboxtype: 5, unk: 1, line: 129 */ "Du hast das <color yellow white<Triforce der Kraft >coloroff>erhalten!\nDiese Macht wurde einst den Menschen\nvon den Göttern geschenkt.\n\nSammle die drei Artefakte, und dir wird\ndie <color red<unendliche Kraft>coloroff> geschenkt, die dir\njeden noch so großen Wunsch gewährt.")
/*<534>*/ 			printf(/* textboxtype: 5, unk: 1, line: 127 */ "Sammle <color red<zwei>coloroff> weitere Artefakte, um das\nTriforce zu vervollständigen.")
/*<573>*/ 			changeScene(2, 1) // 
          		}
          	}
          }

          void entrypoint_003_103() {
/*<243>*/ 	start()
/*<239>*/ 	printf(/* textboxtype: 5, unk: 1, line: 137 */ "Du hast die <color yellow<Medizin-Medaille>coloroff> erhalten!\nTrägst du sie bei dir, kannst du Effekte\ndeiner Tränke verlängern. Nimm sie mit,\nwenn du Tränke im Gepäck hast.")
          }

          void entrypoint_003_120() {
/*<273>*/ 	start()
/*<558>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<561>*/ 		printf(/* textboxtype: 5, unk: 1, line: 152 */ "Dein Schild wurde repariert!\nEr sieht aus wie neu!")
          	  case 1:
/*<269>*/ 		printf(/* textboxtype: 5, unk: 1, line: 156 */ "Du hast den <color yellow<harten Eisenschild>coloroff> erhalten!\nDieser robuste Schild hält mehr aus als\nsein Vorgänger.")
          	}
          }

          void entrypoint_003_138() {
/*<303>*/ 	start()
/*<299>*/ 	printf(/* textboxtype: 5, unk: 1, line: 176 */ "Du hast die <color yellow<Feuerohrringe>coloroff> erhalten!\nEiner der drei Schätze der Göttin.\nMit ihrer Hilfe kannst du selbst der\ngrößten Hitze trotzen. ")
/*<502>*/ 	story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */] = true;
          }

          void entrypoint_003_172() {
/*<355>*/ 	start()
/*<353>*/ 	printf(/* textboxtype: 5, unk: 1, line: 222 */ "Du hast einen <color yellow<Schmuckschädel >coloroff>erhalten!\nDiese Nachbildung eines Schädels ist das\nSymbol der Bokblins.")
/*<639>*/ 	open_collection_screen();
          }

          void entrypoint_003_155() {
/*<374>*/ 	start()
/*<372>*/ 	printf(/* textboxtype: 5, unk: 1, line: 205 */ "")
          }

          void entrypoint_003_044() {
/*<438>*/ 	start()
/*<440>*/ 	check_item_flag(500, 14)
/*<439>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 48}) {
          	  case 0:
/*<441>*/ 		printf(/* textboxtype: 5, unk: 1, line: 56 */ "Du hast <color yellow<Dins Tränen >coloroff>gefunden.\nDies hat deine Seele reifen lassen,\n<heroname>!\n\nDoch noch ist die Prüfung nicht vorbei...\nBegib dich vorsichtig zum Ausgang, um ein\nZeichen deiner Reife zu erhalten.")
          	  case 1:
/*<437>*/ 		printf(/* textboxtype: 5, unk: 1, line: 55 */ "Du hast eine von<color yellow< Dins Tränen >coloroff>erhalten!\nIhre heilige Macht hindert die Hüter für\n<color red<90 Sekunden >coloroff>daran, sich zu bewegen.\n\nSammle alle <color red<15>coloroff>, um diese Prüfung zu\nbestehen!")
          	}
          }

