          void entrypoint_117_40() {
/*< 38>*/ 	start()
/*<348>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<350>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<351>*/ 			printf("\x0E\x01\x09\x04\x11\x1153Ooooooh! Jetzt reicht's! Jetzt hast du\nden Bogen eindeutig überspannt!")
          		  case 1:
          			flw_493:
/*<493>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<614>*/ 				switch (scene_flags[69 /* 0x9 20 */]) {
          				  case 0:
/*<613>*/ 					switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          					  case 0:
/*<616>*/ 						printf("\x0E\x01\x09\x04\x00\x01Deine Arbeit hat diesen Kronleuchter\nerst möglich gemacht...\n\n\n\x0E\x01\x09\x04\x00\x300Sag mal, willst du auf diese Weise\netwa Kabocha beeindrucken?")
          					  case 1:
          						flw_617:
/*<617>*/ 						switch (scene_flags[5 /* 0x1 20 */]) {
          						  case 0:
/*<494>*/ 							printf("\x0E\x01\x09\x04\x00\x01Dieses ganze Geschwätz über Monster\nund Dämonen war also nichts weiter als\nheiße Luft!\n\n\x0E\x01\x09\x04\x00\x300Der Kerl wollte sich tatsächlich nur\ninteressant machen!")
          						  case 1:
          							flw_41:
/*< 41>*/ 							printf("\x0E\x01\x09\x04\x00\x01He, hör mal kurz zu!\n\n\n\nDer alte Knabe dort drüben behauptet,\neinen Dämon gesehen zu haben!\n\n\n\x0E\x01\x09\x04\n\x300Na, mit solchen Prahlereien wird er\nKabocha jedenfalls nicht für sich\ngewinnen können!")
          						}
          					}
          				  case 1:
/*<615>*/ 					scene_flags[21 'The Sky'][69 /* 0x9 20 */] = true;
          					goto flw_617
          				}
          			  case 1:
/*< 71>*/ 				switch (scene_flags[5 /* 0x1 20 */]) {
          				  case 0:
/*< 72>*/ 					printf("\x0E\x01\x09\x04\x11\x1104Du glaubst doch nicht an solch einen\nübernatürlichen Kram wie Dämonen,\noder etwa doch?\n\n\x0E\x01\x09\x04\n\x300Moment mal! Du hast doch nicht etwa\nauch ein Auge auf Kabocha geworfen?")
          				  case 1:
          					goto flw_41
          				}
          			}
          		}
          	  case 1:
          		goto flw_493
          	}
          }

          void entrypoint_117_23() {
/*<292>*/ 	start()
/*<176>*/ 	printf("\x0E\x01\x09\x04\x07\x803Ich bin ja so froh, dass du mir diesen\nnetten Maulwurf vorgestellt hast!\nEr ist ein echtes Goldstück!\n\nIch werde ihn in Zukunft ganz\nsicher wieder um Hilfe bitten.\n\x0E\x01\x09\x04\x13\x800Hab <pause05>vielen, <pause05>vielen <pause05>Dank<pause05>!")
/*<166>*/ 	story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */] = true;
/*<468>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<505>*/ 	temp_flags[17 /* 0x3 02 */] = true;
/*<386>*/ 	give_gratitude_crystals();
          }

          void entrypoint_117_41() {
/*<107>*/ 	start()
/*<108>*/ 	printf("\x0E\x01\x09\x04\x00\x08Zurücktreten bitte!\nIch zeige dir, wie das gemacht wird!")
          }

          void entrypoint_117_24() {
/*<307>*/ 	start()
/*<327>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*<328>*/ 		printf("\x0E\x01\x09\x04\x00\x04Also, was möchtest du tun?\n[1]Lyra spielen![2]Suppe kaufen![3-]Ach, nichts...")
          		flw_312:
/*<312>*/ 		switch (choice(3)) {
          		  case 0:
/*<542>*/ 			switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          			  case 0:
/*<324>*/ 				printf("\x0E\x01\x09\x04\x0E\x1000Prima! Dann kannst du zusammen mit\nKabocha bei meinen Gästen für etwas\nStimmung sorgen!")
/*<325>*/ 				entrypoint_117_32();
          			  case 1:
/*<543>*/ 				printf("\x0E\x01\x09\x04\x0C\x700Tut mir leid, aber Kabocha tritt nur\nabends auf. Schau wieder vorbei,\nwenn es dunkel geworden ist.")
          			}
          		  case 1:
/*<315>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 316, 'param3': 12}
/*<316>*/ 			printf("\x0E\x01\x09\x04\x08\x1004Na, das ist mal eine Überraschung!\nWer hätte gedacht, dass ein Knirps\nwie du auf meine Suppe steht?\n\nMöchtest du eine Portion mitnehmen?\nNur <r<10 Rubine>>, die Flasche.\n[1]Gerne![2-]Nein.")
/*<317>*/ 			switch (choice(2)) {
          			  case 0:
/*<318>*/ 				switch (has_rupees(10)) {
          				  case 0:
/*<320>*/ 					switch (adventure_pouch_has(1 0x0001)) {
          					  case 0:
/*<535>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 322, 'param3': 42}
/*<322>*/ 						give_item(195 0xC3);
/*<550>*/ 						rupees += -10;
/*<552>*/ 						printf("Die Suppe schmeckt am besten, wenn\ndu sie heiß genießt! Nach 5 Minuten\nkühlt sie jedoch ab.")
          					  case 1:
/*<321>*/ 						printf("\x0E\x01\x09\x04\x00\x700Du besitzt keine leere <y<Flasche>>?\n\n\n\nWenn du Suppe möchtest, brauchst du\nauch eine leere Flasche! Ohne Flasche\nkeine Suppe! Bring mir eine, dann \nbekommst du auch eine Portion!")
          					}
          				  case 1:
/*<319>*/ 					printf("\x0E\x01\x09\x04\x0C\x700Du scheinst knapp bei Kasse zu sein.\nKomm später wieder.")
          				}
          			  case 1:
/*<323>*/ 				printf("\x0E\x01\x09\x04\x0D\xA00Komm schon! Entscheide dich!")
          			}
          		  case 2:
/*<313>*/ 			printf("\x0E\x01\x09\x04\x08\x1000Wie du willst. Dann nimm dir einen\nStuhl und ruh dich aus.\n\n\n\x0E\x01\x09\x04\x00\x700Oh. Und vergiss nicht, Kabocha kurz\nHallo zu sagen!")
          		}
          	  case 1:
/*<309>*/ 		printf("\x0E\x01\x09\x04\x00\x01Hallo Link!\nWas hältst du von meinem neuen\nKronleuchter?\n\n\x0E\x01\x09\x04\x0B\x1100Ich muss zugeben, dass ich mich für ihn\nziemlich in Unkosten gestürzt habe...")
/*<326>*/ 		scene_flags[21 'The Sky'][22 /* 0x3 40 */] = true;
/*<310>*/ 		printf("\x0E\x01\x09\x04\x0D\x1006...\nDu findest also, dass ich zu viel für ihn\nausgegeben habe?\n\n\x0E\x01\x09\x04\x08\x09Sei kein Miesmacher! Und außerdem\nhätte ich mir ohne deine Hilfe niemals\neinen solchen Leuchter leisten können!\n\n\x0E\x01\x09\x04\x0C\x900He! Wag es ja nicht, den Kronleuchter\nerneut kaputt zu machen!")
/*<311>*/ 		printf("\x0E\x01\x09\x04\x08\x700Wie dem auch sei, was kann ich für dich\ntun? Möchtest du vielleicht erneut für\nmich arbeiten?\n\n\x0E\x01\x09\x04\x0E\x700Dieses Mal bezahle ich dich sogar in\nbar dafür! Du könntest wieder Musik\nmachen! Oder möchtest du Suppe?\n[1]Musik![2]Suppe, bitte![3-]Keine Zeit...")
          		goto flw_312
          	}
          }

          void entrypoint_117_42() {
/*<121>*/ 	start()
/*<126>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 142, 'param3': 32}
/*<142>*/ 	printf("\x0E\x01\x09\x04\x07\x701Hast du schon gehört?\nCirp möchte mir bei der Ernte helfen!")
/*<127>*/ 	{'type': 'type3', 'subType': 1, 'param1': 27, 'param2': 0, 'next': 122, 'param3': 16}
/*<122>*/ 	printf("\x0E\x01\x09\x04\x1B09\x702Hey, das versteht sich doch von selbst!\nIch könnte das Feld viel schneller als\ndieser Maulwurftyp pflügen!")
/*<128>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 27, 'next': 177, 'param3': 16}
/*<177>*/ 	{'type': 'type3', 'subType': 4, 'param1': 22, 'param2': 2048, 'next': 123, 'param3': 13}
/*<123>*/ 	printf("\x0E\x01\x09\x04\x00\x08Wiiirklich? Das wäre toll!")
/*<178>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 129, 'param3': 13}
/*<129>*/ 	{'type': 'type3', 'subType': 1, 'param1': 27, 'param2': 0, 'next': 124, 'param3': 16}
/*<124>*/ 	printf("\x0E\x01\x09\x04\x1B07\x705Hahaha! Wenn du mich rufst, dann bin\nich eben sofort zur Stelle.\n\n\nGanz gleich, ob ein Kürbisfeld geerntet\noder ein brennendes Haus gelöscht\nwerden muss!")
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 27, 'next': 179, 'param3': 16}
/*<179>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 2048, 'next': 125, 'param3': 13}
/*<125>*/ 	printf("\x0E\x01\x09\x04\x1A00\x09Oooh! Wenn das so ist, dann freue ich\nmich natürlich über dein Angebot!")
/*<180>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 143, 'param3': 13}
/*<143>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 144, 'param3': 16}
/*<144>*/ 	printf("Ihr seid alle so lieb zu mir!\x0E\x01\x09\x04\x07\x703")
          }

          void entrypoint_117_08() {
/*<283>*/ 	start()
/*<165>*/ 	printf("\x0E\x01\x09\x04\x00\x09Wunderbar!\nDu hast jemanden gefunden!")
/*<167>*/ 	printf("\x0E\x01\x09\x04\x01\x705Aber...\nDas ist ja gar kein Mensch!\n\n\n\x0E\x01\x09\x04\x07\x700Ach, jetzt verstehe ich! Dieser\nMaulwurf wird also den Acker\nfür mich pflügen?")
          }

          void entrypoint_117_25() {
/*<394>*/ 	start()
          	flw_34:
/*< 34>*/ 	switch (context_related3(0)) {
          	  case 0:
/*< 90>*/ 		switch (scene_flags[6 /* 0x1 40 */]) {
          		  case 0:
/*<200>*/ 			switch (zone_temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<201>*/ 				printf("\x0E\x01\x09\x04\x07\x703Du versuchst es erneut? Ich wusste,\ndass ich auf dich zählen kann.\nViel Erfolg!\n[1]Los geht's![2-]Lieber nicht.")
/*<202>*/ 				switch (choice(2)) {
          				  case 0:
/*<515>*/ 					printf("\x0E\x01\x09\x04\x13\x809Fantastisch! Ich wusste, dass du\nmich nicht enttäuschen würdest!\x0E\x01\x05\x04\x1E\x00")
          					flw_87:
/*< 87>*/ 					printf("\x0E\x01\x09\x04\x07\x700Wichtig ist, dass du nicht zu hektisch\nwirst! Versuche, möglichst <r<langsam\nzu laufen>>.\n\nSollten die Kürbisse nach rechts zu\nfallen drohen, gehe nach rechts.\nDrohen sie nach links zu fallen,\nbewege dich nach links.\nDie Balance zu halten ist hierbei\ndas A und O!\n\n\n\x0E\x01\x09\x04\x01\x700Gerate nicht in Panik und fang bloß\nnicht an zu rennen, sonst fallen die\nKürbisse auf den Boden! <pause14>Ich drücke\ndir die Daumen!")
/*<  2>*/ 					make_actor_do_something(0, 0)
          				  case 1:
          					flw_397:
/*<397>*/ 					switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          					  case 0:
/*<513>*/ 						switch (random(2)) {
          						  case 0:
/*<395>*/ 							printf("\x0E\x01\x09\x04\x01\x1606Wirklich?\nIch dachte, es würde dich freuen,\nuns bei der Ernte zu helfen!")
          						  case 1:
/*<514>*/ 							printf("\x0E\x01\x09\x04\x01\x1611Im Ernst?\nBist du eigentlich immer so langweilig?")
          						}
          					  case 1:
/*<  5>*/ 						printf("\x0E\x01\x09\x04\x01\x1606Wirklich?\nDas werde ich Vater erzählen!")
          					}
          				}
          			  case 1:
/*<499>*/ 				switch (temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<500>*/ 					printf("\x0E\x01\x09\x04\x07\x808Ich hoffe doch, ich kann wieder auf\ndeine Hilfe zählen! \x0E\x01\x06\x02\xFBCDMein hübscher\x0E\x01\x06\x02Í\nRitter!")
          				  case 1:
/*<508>*/ 					switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          					  case 0:
/*<509>*/ 						printf("\x0E\x01\x09\x04\x01\x700Du kommst mir gerade recht!\nWie sieht's aus, möchtest du dir\nein paar Rubine verdienen?\n\n\x0E\x01\x09\x04\x07\x700Ich benötige wieder einmal deine\nMuskelkraft. Kürbisse müssen ins\nLager getragen werden.\n[1]Los geht's![2-]Nein, danke.")
          						flw_3:
/*<  3>*/ 						switch (choice(2)) {
          						  case 0:
/*<  4>*/ 							printf("\x0E\x01\x09\x04\x07\x703Dann lass uns Nägel mit Köpfen\nmachen! Ich zeige dir, wohin die\nKürbisse gebracht werden müssen!")
/*< 88>*/ 							set_camera(1, 0)
/*< 86>*/ 							printf("Gib dein Bestes und trage die Kürbisse\nin das Lager!")
/*< 89>*/ 							set_camera(-1, 0)
          							goto flw_87
          						  case 1:
          							goto flw_397
          						}
          					  case 1:
/*<398>*/ 						switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          						  case 0:
/*<469>*/ 							printf("\x0E\x01\x09\x04\x00\x0FNun, da die Ernte vorbei ist, wird \nes Zeit, neue Kürbisse zu pflanzen.\nDoch zuerst muss das Feld neu gepflügt\nwerden!\nHm... Wo finde ich jemanden, der diese\nPlackerei freiwillig auf sich nimmt?")
/*<396>*/ 							printf("\x0E\x01\x09\x04\x01\x700Oh, noch etwas. Kannst du mir einen\nGefallen tun? Ich habe kaum noch\nKraft in den Armen...\n\n\x0E\x01\x09\x04\x07\x700Würdest du für mich die Kürbisse in\ndas Lager tragen? Ich belohne dich\nauch dafür!\n[1]Los geht's![2-]Lieber nicht.")
          							goto flw_3
          						  case 1:
/*< 92>*/ 							printf("\x0E\x01\x09\x04\x00\x01Willst du uns nun doch bei der\nKürbisernte helfen?\n[1]Na klar![2-]Nein, doch\nnicht.")
          							goto flw_3
          						}
          					}
          				}
          			}
          		  case 1:
/*<605>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 91, 'param3': 31}
/*< 91>*/ 			scene_flags[21 'The Sky'][6 /* 0x1 40 */] = true;
/*<  1>*/ 			printf("\x0E\x01\x09\x04\x01\x701Dann ist es beschlossene Sache!\nDu <r<hilfst uns also bei der Kürbisernte>>.\n\n\n\x0E\x01\x09\x04\x07\x700Du glaubst gar nicht, wie erleichtert\nich bin. Hast du eine Ahnung, wie\nschwer diese Kürbisse sind?\n\n\x0E\x01\x09\x04\x01\x1600Ach. Du glaubst also, die Arbeit hier\nwird das reinste Zuckerschlecken?\n\n\n\x0E\x01\x09\x04\x01\x700Hihihi... Dann lass uns das Ganze doch\netwas spannender gestalten. Versuch,\n<r<5 Kürbisse gleichzeitig zu tragen>>!\n\n\x0E\x01\x09\x04\x07\x1600Aber Vorsicht! Lass dir Zeit, sonst\nfallen sie dir auf den Boden! Also,\nbist du bereit?\n[1]Los geht's![2-]Lass mal...")
          			goto flw_3
          		}
          	  case 1:
/*<389>*/ 		switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          		  case 0:
/*<391>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 390, 'param3': 12}
/*<390>*/ 			printf("\x0E\x01\x09\x04\x13\x809Ich wusste, du würdest es schaffen!\nDu hast tatsächlich alle Kürbisse ins\nLager gebracht!\n\nAuf dich kann man sich wirklich\nverlassen! \x0E\x01\x09\x04\x07\x800Hier ist dein Lohn.\nStolze 50 Rubine!")
/*<392>*/ 			rupees += 50;
/*<497>*/ 			printf("\x0E\x01\x09\x04\x07\x800Hab <pause0F>vielen, <pause0F>vielen <pause0F>Dank!\nKomm wieder, wenn du möchtest!")
/*<393>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 498, 'param3': 12}
          			flw_498:
/*<498>*/ 			temp_flags[16 /* 0x3 01 */] = true;
/*<512>*/ 			zone_temp_flags[2 /* 0x1 04 */] = false;
          		  case 1:
/*< 35>*/ 			printf("\x0E\x01\x09\x04\x13\x809Ich wusste, du würdest es schaffen!\nDu hast tatsächlich alle Kürbisse ins\nLager gebracht!\n\n\x0E\x01\x09\x04\x01\x700Das bedeutet dann wohl, dass es hier\nnichts mehr für dich zu tun gibt!\n\x0E\x01\x09\x04\x19\x800Hab <pause0F>vielen, <pause0F>vielen <pause0F>Dank<pause0F>!")
/*< 83>*/ 			story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */] = true;
          			goto flw_498
          		}
          	  case 2:
/*< 36>*/ 		printf("\x0E\x01\x09\x04\x01\x1611Oh nein! Du hast sie fallen lassen!\nDu bist aber auch ein Schussel...\n\n\n\x0E\x01\x09\x04\x07\x700Nun, du kannst gerne noch einen\nVersuch wagen, falls du dich der\nAufgabe gewachsen fühlst!")
/*<199>*/ 		zone_temp_flags[2 /* 0x1 04 */] = true;
          	}
          }

          void entrypoint_117_43() {
/*<131>*/ 	start()
/*<132>*/ 	printf("\x0E\x01\x09\x04\x00\x06Hohoho...\nEs geht doch nichts über einen gut\nausgefüllten Arbeitstag!\n\n\x0E\x01\x09\x04\x0C\xD00Und die junge Dame strahlen zu sehen\nist genug Lohn für all die Plackerei!\n\n\n\x0E\x01\x09\x04\x01\x900Momentchen mal<pause0A>.<pause0A>.<pause0A>.<pause0A>\nIst dir aufgefallen, wie mich die\nKleine ansieht?\n\n\x0E\x01\x09\x04\x0C\xD00Ich denke, sie hat sich in mich verliebt!\n\x0E\x01\x09\x04\x09\xD0BHa! Ab sofort werde ich doppelt so hart\narbeiten!")
          }

          void entrypoint_117_09() {
/*<284>*/ 	start()
/*<168>*/ 	printf("\x0E\x01\x09\x04\x00\nDu willst mir doch nicht erzählen,\ndass ich hier den ganzen Tag lang\ndas Feld bestellen soll?\n\nWar dies wirklich der einzige Grund,\nweshalb du mich hier hoch in die Luft\ngebracht hast?")
          }

          void entrypoint_117_26() {
/*<431>*/ 	start()
          	flw_73:
/*< 73>*/ 	switch (choice(2)) {
          	  case 0:
/*<314>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 74, 'param3': 12}
/*< 74>*/ 		printf("\x0E\x01\x09\x04\x08\x1004Na, das ist mal eine Überraschung!\nWer hätte gedacht, dass ein Knirps\nwie du auf meine Suppe steht?\n\nMöchtest du eine Portion mitnehmen?\nNur <r<10 Rubine>>, die Flasche.\n[1]Gerne![2-]Nein.")
/*<112>*/ 		switch (choice(2)) {
          		  case 0:
/*<113>*/ 			switch (has_rupees(10)) {
          			  case 0:
/*<115>*/ 				switch (adventure_pouch_has(1 0x0001)) {
          				  case 0:
/*<531>*/ 					printf("Na endlich! Hier, bitte schön!")
/*<530>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 117, 'param3': 42}
/*<117>*/ 					give_item(195 0xC3);
/*<549>*/ 					rupees += -10;
/*<551>*/ 					printf("Die Suppe schmeckt am besten, wenn\ndu sie heiß genießt! Nach 5 Minuten\nkühlt sie jedoch ab.")
          				  case 1:
/*<116>*/ 					printf("\x0E\x01\x09\x04\x00\x700Du besitzt keine leere <y<Flasche>>?\n\n\n\nWenn du Suppe möchtest, brauchst du\nauch eine leere Flasche! Ohne Flasche\nkeine Suppe! Bring mir eine, dann \nbekommst du auch eine Portion!")
          				}
          			  case 1:
/*<114>*/ 				printf("\x0E\x01\x09\x04\x0C\x700Du scheinst knapp bei Kasse zu sein.\nKomm später wieder.")
          			}
          		  case 1:
          			flw_434:
/*<434>*/ 			switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          			  case 0:
          				flw_437:
/*<437>*/ 				printf("\x0E\x01\x09\x04\x10\x705Wohl wahr, wohl wahr. Dieser Ort\nist nicht nur dazu da, um Suppe zu\nschlürfen! Hier trifft man auch eine\nMenge illustrer Persönlichkeiten.\nAlso gönn dir ruhig eine Auszeit. Aber\neins sag ich dir: Wehe, du stellst hier\netwas an oder machst etwas kaputt!\n\n\x0E\x01\x09\x04\x08\x700Ganz recht, ich spreche von meinem\nhandgefertigten und sündhaft teuren\nKronleuchter!\n\n\x0E\x01\x09\x04\x00\x900Lass bloß die Finger davon!\nHast du mich verstanden?")
          			  case 1:
/*<435>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<439>*/ 					printf("\x0E\x01\x09\x04\x10\x905Ich verstehe schon. Dann musst\ndu eben deine Schulden bei mir\nabarbeiten.\n\n\x0E\x01\x09\x04\x00\x700Komm später wieder und frag nach,\nob ich Arbeit für dich habe!")
          				  case 1:
/*<436>*/ 					switch (scene_flags[25 /* 0x2 02 */]) {
          					  case 0:
/*<438>*/ 						printf("\x0E\x01\x09\x04\x10\x905Ich verstehe schon. Dann musst\ndu eben deine Schulden bei mir\nabarbeiten.\n\n\x0E\x01\x09\x04\x00\x700Komm später wieder und frag nach,\nob ich Arbeit für dich habe!")
          					  case 1:
          						goto flw_437
          					}
          				}
          			}
          		}
          	  case 1:
          		goto flw_434
          	}
          }

          void entrypoint_117_44() {
/*<134>*/ 	start()
/*<136>*/ 	switch (story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */]) {
          	  case 0:
/*<138>*/ 		switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          		  case 0:
/*<140>*/ 			switch (story_flags[470 /* us: 805A9B0E 0x04, jp: 805ACD8E 0x04 */]) {
          			  case 0:
/*<141>*/ 				printf("\x0E\x01\x09\x04\x01\x70FIch hoffe, du kennst tatsächlich\njemanden und sagst das nicht nur,\ndamit ich mich besser fühle.\n\n\x0E\x01\x09\x04\x07\x700Nun, ich darf die Hoffnung nicht\naufgeben. Ich warte hier, bis dieser\nJemand auftaucht!")
          			  case 1:
/*<139>*/ 				printf("\x0E\x01\x09\x04\x00\x0FNun, da die Ernte vorbei ist, wird \nes Zeit, neue Kürbisse zu pflanzen.\nDoch zuerst muss das Feld neu gepflügt\nwerden!\nHm... Wo finde ich jemanden, der diese\nPlackerei freiwillig auf sich nimmt?")
          			}
          		  case 1:
/*<135>*/ 			printf("\x0E\x01\x09\x04\x01\x701Bist du hergekommen, um uns bei der\nKürbisernte zu helfen?\n\n\n\x0E\x01\x09\x04\x07\x700Findest du nicht auch, dass es etwas zu\nspät dafür ist? Man sieht ja kaum noch\nwas! Komm wieder, wenn es draußen\nhell ist. Die Kürbisse rennen nicht weg!")
          		}
          	  case 1:
/*<423>*/ 		switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          		  case 0:
/*<137>*/ 			printf("\x0E\x01\x09\x04\x00\x01Ach, da ist ja der Ritter, der für\nunseren kaputten Kronleuchter\nWiedergutmachung leisten möchte.\n\n\x0E\x01\x09\x04\x01\x700Hm, warte mal...<pause1E> Vater meinte,\ner hätte wieder Arbeit für dich.\n\n\n\x0E\x01\x09\x04\x07\x700Am besten, du gehst gleich zu ihm\nund fragst ihn selbst.")
          		  case 1:
/*<424>*/ 			printf("\x0E\x01\x09\x04\x00\x01Ach, da ist ja der Ritter, der für\nunseren kaputten Kronleuchter\nWiedergutmachung leisten möchte.")
          		}
          	}
          }

          void entrypoint_117_27() {
/*<448>*/ 	start()
/*<456>*/ 	set_camera(30, 0)
/*<450>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 26, 'next': 452, 'param3': 32}
/*<452>*/ 	{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 282, 'next': 453, 'param3': 15}
/*<453>*/ 	{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 26, 'next': 451, 'param3': 14}
/*<451>*/ 	{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': -1, 'next': 473, 'param3': 16}
/*<473>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<472>*/ 		printf("\x0E\x01\x09\x04\x1A00\x01Besser, du gehst gleich zu Vater und\nbeichtest es ihm!\n\n\n\x0E\x01\x09\x04\x1A1A\x800Oje... Er wird bestimmt ganz schön\nwütend werden!")
          		flw_454:
/*<454>*/ 		{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 282, 'next': 539, 'param3': 14}
/*<539>*/ 		{'type': 'type3', 'subType': 1, 'param1': 7, 'param2': 0, 'next': 455, 'param3': 40}
/*<455>*/ 		{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 26, 'next': -1, 'param3': 15}
          	  case 1:
/*<449>*/ 		printf("\x0E\x01\x09\x04\x1A00\x01Willkommen in der <r<Kürbisbar>>!\nHier serviert man die leckerste\nSuppe weit und breit!\n\n\x0E\x01\x09\x04\x1A1A\x800An diesem Ort kannst du entspannen\nund dir eine Auszeit gönnen!")
          		goto flw_454
          	}
          }

          void entrypoint_117_10() {
/*<  6>*/ 	start()
/*<118>*/ 	switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          	  case 0:
/*<214>*/ 		entrypoint_117_11();
          	  case 1:
          		flw_520:
/*<520>*/ 		scene_flags[21 'The Sky'][33 /* 0x5 02 */] = true;
/*< 12>*/ 		switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          		  case 0:
/*<306>*/ 			switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          			  case 0:
/*<308>*/ 				entrypoint_117_24();
          			  case 1:
/*< 14>*/ 				switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          				  case 0:
/*< 18>*/ 					printf("\x0E\x01\x09\x04\x00\x0EDu hast nun endlich deine Schulden für\nden kaputten Kronleuchter beglichen!\nGut gemacht!\n\nIch hatte nicht damit gerechnet,\ndass du die Sache durchziehst.\n\n\n\x0E\x01\x09\x04\x00\x1000Und bei deinem nächsten Besuch\nbegrüße ich dich wieder als ganz\nnormalen Gast!")
          				  case 1:
/*< 15>*/ 					switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          					  case 0:
/*< 80>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<266>*/ 							switch (scene_flags[21 /* 0x3 20 */]) {
          							  case 0:
/*<516>*/ 								switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          								  case 0:
/*<267>*/ 									printf("\x0E\x01\x09\x04\x00\x01Du wirst also noch einmal für meine\nKabocha spielen?\n[1]Spielen[2]Erklärung[3-]Beenden")
/*<268>*/ 									switch (choice(3)) {
          									  case 0:
/*<270>*/ 										printf("\x0E\x01\x09\x04\x00\x0EAusgezeichnet!\nDann fangt ruhig an!")
          										flw_383:
/*<383>*/ 										story_flags[675 /* us: 805A9B20 0x10, jp: 805ACDA0 0x10 */] = true;
          										flw_546:
/*<546>*/ 										set_camera(9, 0)
/*<293>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 26, 'next': 294, 'param3': 32}
/*<294>*/ 										{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 26, 'next': 295, 'param3': 15}
/*<295>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 26, 'next': 261, 'param3': 16}
/*<261>*/ 										printf("\x0E\x01\x09\x04\x0D\x02Du schaffst das schon...\nKabocha!")
/*<300>*/ 										set_camera(10, 0)
/*<298>*/ 										{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 0, 'next': 297, 'param3': 16}
/*<297>*/ 										printf("\x0E\x01\x09\x04\x1A00\x08Ja, Vater! Was gibt es?")
/*<301>*/ 										set_camera(11, 0)
/*<302>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 26, 'next': 299, 'param3': 50}
/*<299>*/ 										{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 26, 'next': 262, 'param3': 17}
/*<262>*/ 										printf("\x0E\x01\x09\x04\x0B\xB00Das Bübchen hier wird dich begleiten\nwährend du singst! Na los, erfreue\ndeinen Vater mit deiner zauberhaften\nStimme!")
/*<303>*/ 										set_camera(12, 0)
/*<296>*/ 										{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 100, 'next': 263, 'param3': 16}
/*<263>*/ 										printf("Sehr gerne! Lass uns beginnen!")
/*<246>*/ 										make_actor_do_something(0, 0)
          									  case 1:
/*<545>*/ 										printf("\x0E\x01\x09\x04\x00\x0ENun gut. Ich erklär's dir noch einmal...")
          										flw_265:
/*<265>*/ 										printf("\x0E\x01\x09\x04\x00\x700Sobald Kabocha singt, werden sich\nunsere Gäste vom Takt mitreißen\nlassen. Achte darauf, deine Lyra\nim richtigen Rhythmus zu spielen!\n\x0E\x01\x09\x04\x0F\x700Beobachte, in welchem Takt die Gäste\nnach links und rechts schunkeln und\nrichte dein Lyraspiel danach.\n\nDie Richtung ist hierbei nicht wirklich\nwichtig. Ausschlaggebend ist nur,\ndass du nicht zu schnell oder gar zu\nlangsam spielst.\n\x0E\x01\x09\x04\x08\x700Sobald die Gäste aufhören, sich zu\nbewegen, kannst du so spielen, wie du\nmöchtest.\n\nHauptsache, der Rhythmus stimmt.\nVerstehst du?[1]Alles klar![2-]Bitte noch\nmal.")
/*<260>*/ 										switch (choice(2)) {
          										  case 0:
          											goto flw_383
          										  case 1:
/*<264>*/ 											printf("Hast du mir nicht zugehört?\nSperr gefälligst die Lauscher auf!")
          											goto flw_265
          										}
          									  case 2:
/*<269>*/ 										printf("\x0E\x01\x09\x04\x00\x04Kein Problem! Bereite dich vor dem\nnächsten Auftritt noch etwas vor.")
          									}
          								  case 1:
/*<519>*/ 									printf("\x0E\x01\x09\x04\x00\x01Du bist es wieder!\n<pause1E>Du siehst aus, als ob du uns etwas\nauf deiner Lyra vorspielen möchtest!\n\nTut mir leid, aber tagsüber führen wir\nkeine Vorstellungen auf. Komm heute\nNacht wieder!")
          								}
          							  case 1:
/*<604>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 517, 'param3': 31}
/*<517>*/ 								switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          								  case 0:
/*<197>*/ 									{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4096, 'next': 19, 'param3': 13}
/*< 19>*/ 									printf("\x0E\x01\x09\x04\x00\x01Da bist du ja wieder! Nun... Was kannst\ndu als Nächstes für mich tun?\n\n\n\x0E\x01\x09\x04\x0D\x700Oh! Was ist das denn für ein seltsames\nInstrument, das du bei dir trägst?\n\n\n\x0E\x01\x09\x04\x00\x1100So so! Nun, man mag es ihr vielleicht\nnicht ansehen, aber meine kleine\nKabocha ist eine tolle Sängerin!\n\n\x0E\x01\x09\x04\x00\x700Vor nicht allzu langer Zeit hat sie\nsogar für unsere Gäste gesungen!\n\n\n\x0E\x01\x09\x04\x08\x00Doch leider musste sie aufhören, da\nihre musikalische Begleitung nicht\nmehr für uns spielen wollte!\n\nHättest du nicht Lust, ein bisschen auf\ndeinem Instrument zu spielen, während\nKabocha singt?\n[1]Klar doch![2-]Nein...")
/*< 53>*/ 									switch (choice(2)) {
          									  case 0:
/*< 54>*/ 										printf("\x0E\x01\x09\x04\x00\x100EAusgezeichnet! Ich wusste, dass du\nMusik im Blut hast!\n\n\n\x0E\x01\x09\x04\x0D\xA00Aber streng dich an und spiel bloß\nnicht wie ein dahergelaufener\nStraßenmusikant!")
          										goto flw_265
          									  case 1:
/*<198>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 55, 'param3': 13}
/*< 55>*/ 										printf("\x0E\x01\x09\x04\x00\x11Du bist echt ein Vogel!\nHast du denn gar kein schlechtes\nGewissen, wenn du Mist baust?")
          									}
          								  case 1:
/*<518>*/ 									printf("\x0E\x01\x09\x04\x00\x01Da bist du ja wieder! Nun... Was kannst\ndu als Nächstes für mich tun?\n\n\n\x0E\x01\x09\x04\x00\x700Oh! Was ist das denn für ein seltsames\nInstrument, das du bei dir trägst?\n\n\n\x0E\x01\x09\x04\x0B\x1000Das ist es! Ich habe die perfekte\nAufgabe für dich!\n\n\n\x0E\x01\x09\x04\x00\x700Aber diese Aufgabe kannst du nur\nnachts für mich erledigen.\n\n\nWürde es dir etwas ausmachen, nach\nEinbruch der Dunkelheit noch mal bei\nmir vorbeizuschauen?")
          								}
          							}
          						  case 1:
/*<433>*/ 							switch (scene_flags[26 /* 0x2 04 */]) {
          							  case 0:
/*< 81>*/ 								printf("\x0E\x01\x09\x04\x00\x06Mir ist noch keine neue Aufgabe für\ndich eingefallen. Komm später wieder.\n\n\nOder möchtest du etwa Kürbissuppe\nkaufen und dadurch meine Kürbisbar\nfinanziell unterstützen?\n[1]Gute Idee![2-]Nein, danke.")
/*<442>*/ 								entrypoint_117_26();
          							  case 1:
/*<440>*/ 								printf("\x0E\x01\x09\x04\x0B\x100EErstklassige Arbeit! Wie es aussieht,\nhast du alle Kürbisse geerntet!\n\n\n\x0E\x01\x09\x04\x00\x700Trotzdem... Deine Schulden für den\nKronleuchter sind damit noch lange\nnicht beglichen.\n\n\x0E\x01\x09\x04\x08\x00Mir wird schon noch etwas einfallen,\nwobei du mir helfen kannst. Komm\nspäter wieder!")
/*<441>*/ 								scene_flags[21 'The Sky'][26 /* 0x2 04 */] = true;
          							}
          						}
          					  case 1:
/*< 16>*/ 						switch (story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */]) {
          						  case 0:
/*< 49>*/ 							switch (story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */]) {
          							  case 0:
/*<194>*/ 								{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 50, 'param3': 13}
/*< 50>*/ 								printf("Hey! Mach gefälligst, was Kabocha dir\nsagt und hilf ihr dabei, die Kürbisse ins\nLager zu tragen!")
/*<196>*/ 								{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1792, 'next': 195, 'param3': 13}
/*<195>*/ 								printf("Aber vergiss nicht, auf meinem\nKürbisfeld wird nur tagsüber\ngearbeitet!\n\nWer kann schon sagen, was passiert,\nwenn man Kürbisse nachts erntet?")
          							  case 1:
/*< 78>*/ 								switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          								  case 0:
/*<603>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 192, 'param3': 31}
/*<192>*/ 									{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4110, 'next': 563, 'param3': 13}
/*<563>*/ 									switch (scene_flags[25 /* 0x2 02 */]) {
          									  case 0:
/*<562>*/ 										printf("Du bist wieder da! Gerade rechtzeitig!\nIch habe eine neue Aufgabe für dich!\n\n\nAls Nächstes wirst du uns bei der\n<r<Kürbisernte helfen>>. Und ich will\nkeine Beschwerden hören!\n[1]Na gut...[2-]Vergiss es!")
          										flw_47:
/*< 47>*/ 										switch (choice(2)) {
          										  case 0:
/*< 51>*/ 											printf("\x0E\x01\x09\x04\x08\x704Das dürfte dir leichtfallen! Du hast\ndoch bestimmt das Kürbisfeld\ndraußen gesehen?\n\nIch möchte, dass du die Kürbisse in das\nLager trägst. Weitere Einzelheiten\nerklärt dir <b<Kabocha>>.")
/*<133>*/ 											printf("Aber vergiss nicht, auf meinem\nKürbisfeld wird nur tagsüber\ngearbeitet!\n\nWer kann schon sagen, was passiert,\nwenn man Kürbisse nachts erntet?")
/*< 52>*/ 											story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */] = true;
          										  case 1:
/*<193>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 48, 'param3': 13}
/*< 48>*/ 											printf("\x0E\x01\x09\x04\x00\x11Du bist echt ein Vogel!\nHast du denn gar kein schlechtes\nGewissen, wenn du Mist baust?")
          										}
          									  case 1:
/*< 20>*/ 										printf("Ausgezeichnet! Du hast die Suppe\nalso abgeliefert. Und heiß war sie\nauch noch!\n\n\x0E\x01\x09\x04\x0C\x700Nun, dann lass mich das kurz mit\ndeinen Schulden für den kaputten\nKronleuchter verrechnen...\n\n\x0E\x01\x09\x04\x0F\x900Hui! Das reicht noch lange nicht aus,\num für den zerstörten Kronleuchter\naufzukommen!\n\nAls Nächstes wirst du uns bei der\n<r<Kürbisernte helfen>>. Und ich will\nkeine Beschwerden hören!\n[1]Na gut...[2-]Vergiss es!")
          										goto flw_47
          									}
          								  case 1:
/*<428>*/ 									switch (scene_flags[25 /* 0x2 02 */]) {
          									  case 0:
/*<430>*/ 										printf("\x0E\x01\x09\x04\x00\x06Was ist denn nun schon wieder?\nIch suche immer noch nach einer\npassenden Aufgabe für dich!\n\nIrgendwie musst du mich ja für diesen\ntragischen Verlust entschädigen, nicht\nwahr, mein Freund?\n\nWie wäre es, wenn du etwas von meiner\nKürbissuppe kaufst und so der Bar zu\netwas Gewinn verhilfst?\n[1]Gute Idee![2-]Nein, danke...")
/*<432>*/ 										entrypoint_117_26();
          									  case 1:
/*< 79>*/ 										printf("\x0E\x01\x09\x04\x0B\x100EAusgezeichnet! Du hast dem\nSchwertmeister die Suppe gebracht!\n\n\nNun, dann lass mich das kurz mit\ndeinen Schulden für den kaputten\nKronleuchter verrechnen...\n\n\x0E\x01\x09\x04\x08\x700Aber schuldenfrei bist du immer noch\nnicht! Ich finde schon noch eine neue\nAufgabe für dich!\n\nSchau später wieder bei mir vorbei,\nvielleicht ist mir ja bis dahin etwas\neingefallen.")
/*<429>*/ 										scene_flags[21 'The Sky'][25 /* 0x2 02 */] = true;
          									}
          								}
          							}
          						  case 1:
/*< 27>*/ 							switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
          							  case 0:
/*< 24>*/ 								switch (adventure_pouch_has(2 0x0002)) {
          								  case 0:
/*< 25>*/ 									printf("\x0E\x01\x09\x04\x00\x01Die Suppe bleibt nur <r<5 Minuten >>lang\nheiß! Beeil dich und bring sie zum\nSchwertmeister!")
          								  case 1:
/*< 26>*/ 									switch (adventure_pouch_has(3 0x0003)) {
          									  case 0:
/*<160>*/ 										printf("\x0E\x01\x09\x04\x00\x08Was hab ich dir gesagt?!?\nLass die Suppe nicht kalt werden!\n\n\nWas für ein Desaster...\nHier hast du eine neue Portion.")
/*< 45>*/ 										switch (adventure_pouch_has(1 0x0001)) {
          										  case 0:
          											flw_532:
/*<532>*/ 											{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 29, 'param3': 42}
/*< 29>*/ 											give_item(195 0xC3);
/*<156>*/ 											printf("Aber für die Kosten musst du trotzdem\naufkommen! Das macht <r<10 Rubine>>!")
/*<157>*/ 											switch (has_rupees(10)) {
          											  case 0:
/*<159>*/ 												rupees += -10;
          											  case 1:
/*<190>*/ 												{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 158, 'param3': 13}
/*<158>*/ 												printf("\x0E\x01\x09\x04\x00\x0DWas? Rubine hast du auch keine?\nDu treibst mich noch in den Wahnsinn!\nNun gut. Hier, eine neue Portion, und\nzwar gratis. Aber nur ausnahmsweise!")
          											}
          										  case 1:
/*<191>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 46, 'param3': 13}
/*< 46>*/ 											printf("Du hast ja gar keine leere <y<Flasche>>!\n\n\n\nWenn du Suppe mitnehmen möchtest,\nbrauchst du eine!\n\n\nSieh zu, dass du erst wieder mit einer\nleeren Flasche hier antanzt!")
          										}
          									  case 1:
/*<553>*/ 										switch (adventure_pouch_has(1 0x0001)) {
          										  case 0:
/*< 28>*/ 											printf("\x0E\x01\x09\x04\x00\x07Was soll das heißen? Du hast keine\n<y<Kürbissuppe >>mehr?\n\n\n\x0E\x01\x09\x04\x0D\xA00Erzähl mir nicht, dass du sie selbst\ngegessen hast!\n\n\nDu bist mir vielleicht ein Spaßvogel!\nHier, nimm eine neue Portion!")
          											goto flw_532
          										  case 1:
/*<556>*/ 											printf("\x0E\x01\x09\x04\x00\x07Was soll das heißen? Du hast keine\n<y<heiße Kürbissuppe >>mehr?\n\n\n\x0E\x01\x09\x04\x0D\xA00Erzähl mir nicht, dass du sie selbst\ngegessen hast! Pah! Dann bringst du\nihm gefälligst noch eine!")
/*<555>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 554, 'param3': 13}
/*<554>*/ 											printf("Du hast ja gar keine leere <y<Flasche>>!\n\n\n\nWenn du Suppe mitnehmen möchtest,\nbrauchst du eine!\n\n\nSieh zu, dass du erst wieder mit einer\nleeren Flasche hier antanzt!")
          										}
          									}
          								}
          							  case 1:
/*<589>*/ 								switch (scene_flags[48 /* 0x7 01 */]) {
          								  case 0:
/*<590>*/ 									switch (adventure_pouch_has(1 0x0001)) {
          									  case 0:
/*<593>*/ 										printf("\x0E\x01\x09\x04\x00\x01Oh, du hast eine leere Flasche\nmitgebracht!")
          										flw_189:
/*<189>*/ 										{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4100, 'next': 22, 'param3': 13}
/*< 22>*/ 										printf("Sehr schön. Hier hast du etwas\n<y<heiße Kürbissuppe>>!\n\n\n\x0E\x01\x09\x04\x00\x700Bring sie dem Schwertmeister, aber\nhurtig! Na, worauf wartest du noch?")
/*<533>*/ 										{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 30, 'param3': 42}
/*< 30>*/ 										give_item(195 0xC3);
/*< 77>*/ 										printf("\x0E\x01\x09\x04\x01\x700Ach, eine Sache noch, Kleiner...\nDer Schwertmeister kann kalte Suppe\nnicht ausstehen!\n\nDu solltest dich also mit deiner\nLieferung etwas beeilen.\n\n\nLos, bring ihm die Suppe <r<innerhalb der\nnächsten 5 Minuten>>, sonst ist sie kalt!")
/*< 31>*/ 										story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */] = true;
          									  case 1:
/*<592>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2309, 'next': 591, 'param3': 13}
/*<591>*/ 										printf("Du hast ja gar keine leere <y<Flasche>>!\n\n\n\nWenn du Suppe mitnehmen möchtest,\nbrauchst du eine!\n\n\nSieh zu, dass du erst wieder mit einer\nleeren Flasche hier antanzt!")
          									}
          								  case 1:
/*<602>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 155, 'param3': 31}
/*<155>*/ 									switch (scene_flags[8 /* 0x0 01 */]) {
          									  case 0:
/*<185>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2317, 'next': 154, 'param3': 13}
/*<154>*/ 										printf("Bist du bereit, für den kaputten\nKronleuchter aufzukommen?\n[1]Gib mir Arbeit![2-]Ich weiß\nnicht...")
          										flw_75:
/*< 75>*/ 										switch (choice(2)) {
          										  case 0:
/*<187>*/ 											{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4110, 'next': 76, 'param3': 13}
/*< 76>*/ 											printf("Nun, ich werde dich an dieses\nVersprechen erinnern!\n\n\n\x0E\x01\x09\x04\x00\x700Also gut. Wie wäre es, wenn du als\nErstes dem <r<Schwertmeister im\nWolkenhort >>meine Suppe bringst?\n\n\x0E\x01\x09\x04\x08\x700Er gehört zu unseren Stammgästen,\nund meine Suppe gibt ihm Energie für\nden Unterricht. Also? Wirst du ihm die\nSuppe bringen?\n[1]Sicher![2-]Jetzt nicht.")
/*<274>*/ 											scene_flags[21 'The Sky'][20 /* 0x3 10 */] = true;
          											flw_17:
/*< 17>*/ 											switch (choice(2)) {
          											  case 0:
/*< 43>*/ 												switch (adventure_pouch_has(1 0x0001)) {
          												  case 0:
          													goto flw_189
          												  case 1:
/*<188>*/ 													{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2309, 'next': 44, 'param3': 13}
/*< 44>*/ 													printf("Du hast ja gar keine leere <y<Flasche>>!\n\n\n\nWenn du Suppe mitnehmen möchtest,\nbrauchst du eine!\n\n\nSieh zu, dass du erst wieder mit einer\nleeren Flasche hier antanzt!")
/*<588>*/ 													scene_flags[21 'The Sky'][48 /* 0x7 01 */] = true;
          												}
          											  case 1:
/*<275>*/ 												printf("\x0E\x01\x09\x04\x0D\xA0DEin Mann, ein Wort!\nIch möchte, dass du diese Suppe hier\ndem Schwertmeister bringst, ist das\nklar?\n[1]Verstanden![2-]Jetzt nicht.")
          												goto flw_17
          											}
          										  case 1:
/*<186>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 23, 'param3': 13}
/*< 23>*/ 											printf("Ich hör wohl schlecht! Du hast Nerven!\nZerstörst meinen Kronleuchter und\nglaubst dann auch noch, ungeschoren\ndavonzukommen?")
/*<153>*/ 											scene_flags[21 'The Sky'][8 /* 0x0 01 */] = true;
          										}
          									  case 1:
/*<184>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2317, 'next': 21, 'param3': 13}
/*< 21>*/ 										printf("Das darf doch nicht wahr sein!\nWas hast du getan?\n\n\nMein handgefertigter Kronleuchter\nist komplett ruiniert!\n\n\nDu wirst so lange für mich arbeiten,\nbis jeder einzelne Rubin, der in dem\nKronleuchter steckt, abbezahlt ist!\nNun? Bist du damit einverstanden?\n[1]Natürlich![2-]Nein.")
          										goto flw_75
          									}
          								}
          							}
          						}
          					}
          				}
          			}
          		  case 1:
/*<559>*/ 			switch (zone_temp_flags[4 /* 0x1 10 */]) {
          			  case 0:
/*<557>*/ 				printf("\x0E\x01\x09\x04\x00\x01Hereinspaziert! Möchtest du dich mit\neiner Portion <r<Kürbissuppe >>stärken?\n[1]Sehr gerne![2-]Nein, danke.")
          				flw_558:
/*<558>*/ 				zone_temp_flags[4 /* 0x1 10 */] = true;
          				goto flw_73
          			  case 1:
/*< 13>*/ 				printf("\x0E\x01\x09\x04\x00\x01Willkommen in der Kürbisbar,\nder gemütlichen Raststätte für\nalle Vogelreiter!\n\nDu wirst nirgendwo eine bessere Suppe\nals meine hausgemachte <r<Kürbissuppe\n>>finden! Wie wär's mit einer Portion?\n[1]Sehr gerne![2-]Nein, danke.")
          				goto flw_558
          			}
          		}
          	}
          }

          void entrypoint_117_45() {
/*<145>*/ 	start()
/*<147>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 26, 'next': 151, 'param3': 32}
/*<151>*/ 	printf("\x0E\x01\x09\x04\x00\x01Wieso fragt Kabocha nicht einfach\nmich, ob ich ihr bei der Kürbisernte\nhelfe?")
/*<148>*/ 	{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 0, 'next': 425, 'param3': 16}
/*<425>*/ 	printf("\x0E\x01\x09\x04\x1A00\x03Das wäre aber nicht nett! Wir lassen\ndoch unsere Gäste nicht auf dem\nKürbisfeld schuften!")
/*<181>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6657, 'param2': -256, 'next': 149, 'param3': 13}
/*<149>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 26, 'next': 426, 'param3': 16}
/*<426>*/ 	printf("\x0E\x01\x09\x04\x00\x02Aber mir macht das nichts aus! Ehrlich!\nIch werde auch mindestens doppelt so\nhart wie dieser schlüpfrige Maulwurf\narbeiten!")
/*<150>*/ 	{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 0, 'next': 182, 'param3': 16}
/*<182>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6675, 'param2': 2048, 'next': 146, 'param3': 13}
/*<146>*/ 	printf("\x0E\x01\x09\x04\x1A00\x09Oooh! Wenn das so ist, dann freue ich\nmich natürlich über dein Angebot!")
/*<183>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6657, 'param2': -256, 'next': 152, 'param3': 13}
/*<152>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 427, 'param3': 16}
/*<427>*/ 	printf("\x0E\x01\x09\x04\x09\x705Ich könnte tagelang durcharbeiten,\nsolange mich Kabocha mit ihrem\nsüßen Lächeln erfreut! Hahaha!")
          }

          void entrypoint_117_28() {
/*<457>*/ 	start()
/*<560>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<561>*/ 		printf("\x0E\x01\x09\x04\x00\x03Wirklich gute Arbeit! Du hast uns sehr\ngeholfen!\n\n\nEs würde mich sehr freuen, dich in \nZukunft wieder als Gast bei uns\nbegrüßen zu dürfen!\n\nUnd falls du dir ein paar Rubine\nverdienen möchtest, finde ich\nbestimmt etwas Arbeit für dich!")
          	  case 1:
/*<474>*/ 		switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          		  case 0:
/*<475>*/ 			printf("\x0E\x01\x09\x04\x00\x03Ist dies wirklich der richtige Zeitpunkt,\num sich eine Pause zu gönnen? Hast du\nnicht noch was zu erledigen?")
          		  case 1:
/*<458>*/ 			printf("\x0E\x01\x09\x04\x00\x03Denkst du wirklich, dass jetzt der\nrichtige Moment ist, um sich einfach\nhier hinzusetzen?\n\n\x0E\x01\x09\x04\x0D\x700Obwohl... Selbst du brauchst wohl\nmanchmal eine kleine Auszeit,\nnicht wahr?\n\n\x0E\x01\x09\x04\x00\x1000Nur zu! Dann lass die Seele eben ein\nwenig baumeln!")
          		}
          	}
          }

          void entrypoint_117_11() {
/*<213>*/ 	start()
/*<211>*/ 	switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          	  case 0:
/*<216>*/ 		entrypoint_117_12();
          	  case 1:
/*<208>*/ 		switch (story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */]) {
          		  case 0:
/*<212>*/ 			printf("\x0E\x01\x09\x04\x00\x04Normalerweise biete ich <b<Narisha >>meine\nSuppe auf einer kleinen Insel innerhalb\nder Sturmwolke dar.<pling>\n\n\x0E\x01\x09\x04\x00\x700Du kannst sie gar nicht übersehen!\nÜber ihr schwebt ein <r<Regenbogen>>!\nViel Glück!")
          		  case 1:
/*<209>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 459, 'param3': 31}
/*<459>*/ 			switch (story_flags[367 /* us: 805A9B03 0x20, jp: 805ACD83 0x20 */]) {
          			  case 0:
/*<460>*/ 				printf("\x0E\x01\x09\x04\x0F\x90DHey! Was soll denn das?\nIch hab mir so viel Mühe gegeben,\nund du lieferst die Suppe nicht ab?\n\n\x0E\x01\x09\x04\n\x00Dieser Roboter hat mir die Terrine\nmit der Suppe gerade eben vor die\nTür gestellt!\n[1]Tut mir leid.[2]Ich versuch's\nnoch mal.")
/*<461>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_462:
/*<462>*/ 					printf("\x0E\x01\x09\x04\x0D\x900Nun ja. Da es für <b<Narisha >>ist, macht\nes mir nichts aus, dir noch eine große\nPortion zu kochen!")
/*<463>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 23, 'next': 464, 'param3': 32}
/*<464>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 471, 'param3': 32}
          					flw_471:
/*<471>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1013, 'next': 470, 'param3': 24}
/*<470>*/ 					printf("\x0E\x01\x09\x04\x00\x900Warte hier! Ich werde mich beeilen\nund in Windeseile etwas Leckeres\nzusammenbrauen!")
/*<340>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 223, 'param3': 16}
/*<223>*/ 					{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 228, 'param3': 47}
/*<228>*/ 					{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 256, 'next': 229, 'param3': 15}
/*<229>*/ 					{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 356, 'next': 230, 'param3': 15}
/*<230>*/ 					set_camera(2, 0)
/*<338>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4096, 'next': 523, 'param3': 13}
/*<523>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 108, 'next': 524, 'param3': 24}
/*<524>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 224, 'param3': 6}
/*<224>*/ 					{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 547, 'param3': 48}
/*<547>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 548, 'param3': 6}
/*<548>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 217, 'param3': 24}
/*<217>*/ 					printf("\x0E\x01\x09\x04\x0B\x1009Hier ist sie!\n\n\n\n\x0E\x01\x09\x04\x0F\x1100Ich koche nun schon seit Jahrzehnten,\naber dies hier ist wohl die leckerste\n<y<Kürbissuppe>>, die mir je gelungen ist!")
/*<382>*/ 					make_actor_do_something(3, 23)
/*<218>*/ 					{'type': 'type3', 'subType': 1, 'param1': 315, 'param2': 0, 'next': 525, 'param3': 51}
/*<525>*/ 					{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 256, 'next': 219, 'param3': 13}
/*<219>*/ 					printf("\x0E\x01\x12\x04\x00\x01Gebieter...\nIch werde nach dem Roboter rufen.")
/*<336>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 23, 'next': 536, 'param3': 17}
/*<536>*/ 					make_actor_do_something(0, 3)
/*<344>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 337, 'param3': 6}
/*<337>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 23, 'next': 345, 'param3': 17}
/*<345>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 341, 'param3': 6}
/*<341>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 23, 'next': 220, 'param3': 17}
/*<220>*/ 					printf("\x0E\x01\x12\x04\x00dVerehrte Phai! Hier bin ich!")
/*<225>*/ 					make_actor_do_something(1, 23)
/*<221>*/ 					printf("\x0E\x01\x12\x04\x00dEine wirklich schwere Ladung dieses\nMal! Aber das geht in Ordnung, ich\nschaffe das!\n\nIch warte draußen auf dich. Gib mir\neinfach nur Bescheid, dann folge ich\ndir überall hin!")
/*<226>*/ 					make_actor_do_something(2, 23)
/*<343>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 231, 'param3': 36}
/*<231>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 342, 'param3': 16}
/*<342>*/ 					set_camera(5, 0)
/*<222>*/ 					printf("\x0E\x01\x09\x04\x00\x04Normalerweise biete ich <b<Narisha >>meine\nSuppe auf einer kleinen Insel innerhalb\nder Sturmwolke dar.<pling>\n\n\x0E\x01\x09\x04\x00\x700Du kannst sie gar nicht übersehen!\nÜber ihr schwebt ein <r<Regenbogen>>!\nViel Glück!")
/*<210>*/ 					story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = true;
/*<385>*/ 					story_flags[367 /* us: 805A9B03 0x20, jp: 805ACD83 0x20 */] = true;
/*<467>*/ 					story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
/*<232>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				  case 1:
          					goto flw_462
          				}
          			  case 1:
/*<521>*/ 				switch (scene_flags[33 /* 0x5 02 */]) {
          				  case 0:
/*<203>*/ 					printf("\x0E\x01\x09\x04\x00\x01Was ist los? Du siehst so aus, als ob\ndich etwas bedrücken würde.\n[1]Nun...[2-]Wirklich?")
          					flw_204:
/*<204>*/ 					switch (choice(2)) {
          					  case 0:
/*<206>*/ 						printf("\x0E\x01\x09\x04\x0D\xD04<b<Narisha>>\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í?\n\n\n\n\x0E\x01\x09\x04\x00\x700Ich kenne Narisha recht gut...\n\n\n\n\x0E\x01\x09\x04\x08\x700Ich bringe ihm jedes Jahr eine große\nPortion meiner <r<Kürbissuppe>>! Doch vor\neiniger Zeit tauchte plötzlich diese\ngigantische Sturmwolke auf...\nDeshalb konnte ich Narisha dieses\nJahr leider keine Suppe bringen.\nIch bin untröstlich...")
/*<227>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 23, 'next': 339, 'param3': 32}
/*<339>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 207, 'param3': 32}
/*<207>*/ 						printf("\x0E\x01\x09\x04\x0D\xD08Wirklich? Du wirst <b<Narisha >>etwas \nvon meiner Suppe bringen?\n\n\n\x0E\x01\x09\x04\x00\x700\x0E\x01\x06\x02\xFDCD...\x0E\x01\x06\x02ÍEs ist mir zwar schleierhaft, wie du\nmit deinem Vogel durch diese riesige\nSturmwolke fliegen willst...\n\n\x0E\x01\x09\x04\x0B\x1000Aber da er schon lange keine Suppe\nmehr hatte, werde ich sie dieses Mal\nbesonders lecker würzen!")
          						goto flw_471
          					  case 1:
/*<564>*/ 						switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          						  case 0:
          							flw_205:
/*<205>*/ 							printf("\x0E\x01\x09\x04\x00\x05Hm, dann habe ich mich getäuscht.\nNun, wenn alles in Ordnung ist, nimm\nPlatz und entspann dich!")
          						  case 1:
/*<346>*/ 							switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          							  case 0:
/*<347>*/ 								printf("\x0E\x01\x09\x04\x00\x04Nun, wenn du sagst, dass alles in\nOrdnung ist, glaube ich dir.\n\n\nWie wäre es dann, wenn du weiter\ndaran arbeitest, deine Schulden bei\nmir zu tilgen?")
          							  case 1:
          								goto flw_205
          							}
          						}
          					}
          				  case 1:
/*<522>*/ 					printf("\x0E\x01\x09\x04\x00\x01Willkommen in der Kürbisbar,\nder gemütlichen Raststätte für\nalle Vogelreiter!\n\nNur hier bekommst du meine leckere\nhausgemachte Suppe!\n\n\nAber du siehst so aus, als ob du etwas\nanderes als Suppe im Sinn hast...\n[1]Nun...[2-]Hab ich\ndas?")
          					goto flw_204
          				}
          			}
          		}
          	}
          }

          void entrypoint_117_46() {
/*<399>*/ 	start()
/*<403>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<404>*/ 		printf("Ojemine... Du hast es getan...\n\n\n\nWieso bist du nur so gierig?")
          	  case 1:
/*<411>*/ 		switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          		  case 0:
/*<420>*/ 			printf("Dieser <b<Gelan>> ist wirklich ein begabter\nHandwerker.\n\n\nIch bin mir ganz sicher, dass er das\nZeug dazu hat, die Windmühle im\nWolkenhort zu reparieren.")
          		  case 1:
/*<412>*/ 			switch (story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */]) {
          			  case 0:
/*<419>*/ 				printf("Ich habe <b<Amadin >>schon lange nicht\nmehr im <b<Basar >>gesehen...\n\n\nWirklich schade. Er war solch ein guter\nWahrsager...")
          			  case 1:
/*<413>*/ 				switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          				  case 0:
/*<418>*/ 					printf("<b<Kabocha >>hat alle Hände voll zu tun.\n\n\n\nKennst du vielleicht jemanden, der ihr\nbeim Löcher graben unter die Arme\ngreifen kann?")
          				  case 1:
/*<414>*/ 					switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
          					  case 0:
/*<417>*/ 						printf("Hast du schon Meister <b<Otus'>>\nPflanzensammlung gesehen?\n\n\nIch frage mich, ob er in letzter Zeit\nüber neue Pflanzenarten gestolpert ist.")
          					  case 1:
/*<415>*/ 						switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          						  case 0:
/*<400>*/ 							printf("Du weißt nicht zufällig, was <b<Dodo\n>>zurzeit treibt?\n\n\nWollte er nicht einen Ort schaffen, an\ndem man tagein, tagaus Sturzroulette\nspielen kann?")
          						  case 1:
/*<416>*/ 							printf("Ich wusste nicht, dass es Leute gibt,\ndie sogar über der Kürbisbar ihren\nParaschal ausbreiten...\n\nÜbrigens... Es soll ein schillerndes\nTier geben, das nur dann auftaucht,\nwenn man von seinem Wolkenvogel\nabspringt.\nAngeblich widerfährt jedem, der\ndiesem Tier begegnet, etwas Gutes...")
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_117_29() {
/*<476>*/ 	start()
/*<486>*/ 	set_camera(31, 0)
/*<477>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 26, 'next': 484, 'param3': 32}
/*<484>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 282, 'next': 485, 'param3': 15}
/*<485>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 26, 'next': 478, 'param3': 14}
/*<478>*/ 	{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': -1, 'next': 483, 'param3': 16}
/*<483>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<482>*/ 		printf("\x0E\x01\x09\x04\x1A00\x01Besser, du gehst gleich zu Vater und\nbeichtest es ihm!\n\n\n\x0E\x01\x09\x04\x1A1A\x800Oje... Er wird bestimmt ganz schön\nwütend werden!")
          		flw_480:
/*<480>*/ 		{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 282, 'next': 481, 'param3': 14}
/*<481>*/ 		{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 26, 'next': -1, 'param3': 15}
          	  case 1:
/*<479>*/ 		printf("\x0E\x01\x09\x04\x1A00\x01Willkommen in der <r<Kürbisbar>>!\nHier serviert man die leckerste\nSuppe weit und breit!\n\n\x0E\x01\x09\x04\x1A1A\x800An diesem Ort kannst du entspannen\nund dir eine Auszeit gönnen!")
          		goto flw_480
          	}
          }

          void entrypoint_117_12() {
/*<215>*/ 	start()
          	goto flw_520
          }

          void entrypoint_117_47() {
/*<405>*/ 	start()
/*<407>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<408>*/ 		printf("Was ist denn hier los?")
          	  case 1:
/*<406>*/ 		printf("Ich komme nachts immer hierher.")
          	}
          }

          void entrypoint_117_30() {
/*< 39>*/ 	start()
/*<352>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<353>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<354>*/ 			printf("\x0E\x01\x09\x04\x0B\x704Erschreck mich doch nicht so! Oder soll\nich etwa auf der Stelle tot umfallen?\n\n\n\x0E\x01\x09\x04\n\x700Also, was willst du von mir?")
          			flw_56:
/*< 56>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*< 62>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*<610>*/ 					switch (scene_flags[70 /* 0x9 40 */]) {
          					  case 0:
/*<609>*/ 						switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          						  case 0:
/*<612>*/ 							printf("\x0E\x01\x09\x04\x00\x04Ein so großer Kronleuchter macht\nwirklich was her... Aber ein bisschen zu\nhell ist er schon.")
          						  case 1:
          							flw_70:
/*< 70>*/ 							printf("\x0E\x01\x09\x04\x0B\xC04Du hast den Grabstein bewegt?\n\n\n\n\x0E\x01\x09\x04\n\xF00Und? Konntest du einen Blick auf die\nelende Bestie werfen? Schaurig, nicht\nwahr?\n\nDu brauchst mir nichts vorzumachen!\nIch weiß, dass du vor lauter Angst die\nHosen voll hattest!")
          						}
          					  case 1:
/*<611>*/ 						scene_flags[21 'The Sky'][70 /* 0x9 40 */] = true;
          						goto flw_70
          					}
          				  case 1:
/*< 69>*/ 					switch (scene_flags[5 /* 0x1 20 */]) {
          					  case 0:
/*<585>*/ 						printf("\x0E\x01\x09\x04\x00\x01Hast du irgendwas nicht verstanden?\n[1]Nachts?[2]Friedhof?")
/*<586>*/ 						switch (choice(2)) {
          						  case 0:
/*<587>*/ 							printf("\x0E\x01\x09\x04\x0B\x704Möchtest du mal <r<nachts >>durch den\nWolkenhort laufen, <g<leg dich in ein\nBett>> und warte, bis es dunkel ist.\n\nNachts ist der Wolkenhort nicht mehr\ndas, was er tagsüber ist...\n\n\n\x0E\x01\x09\x04\n\xF00Ich würde dir ja fast raten, es lieber\nnicht selbst auszuprobieren...\nMir gruselt es heute noch!")
          						  case 1:
/*< 67>*/ 							printf("\x0E\x01\x09\x04\x0B\x704Ich war auf dem Friedhof und habe\n<r<auf den Grabstein in der Nähe des\nBaumes >>geschlagen...\n\nUnd weißt du was? Plötzlich leuchtete\ner gleißend hell auf!\n\n\nAls ich dann <r<dem Grabstein einen\nSchubs gegeben>> habe, ging die Tür\nzum Schuppen auf!\n\nMir ist beinahe das Herz in die Hose\ngerutscht! Dort stand ein Monster!\nMitten im Schuppen!\n\n\x0E\x01\x09\x04\n\xF00Überzeug dich selbst, wenn du den Mut\ndazu hast! Aber komm dann bloß nicht\nangerannt und behaupte, ich hätte dich\nnicht gewarnt!")
          						}
          					  case 1:
/*<606>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 42, 'param3': 31}
/*< 42>*/ 						printf("\x0E\x01\x09\x04\x0B\x704Das Wolkenhort-Monster!\nDu glaubst mir doch, oder?\n\n\nEigentlich ist es gar kein Monster,\nsondern ein Dämon! Und niemand\nüberlebt die Begegnung mit ihm!\n\n\x0E\x01\x09\x04\x0B\x700Was? Du willst wissen, ob ich ihn schon\nmal gesehen habe?\n[1]Ja![2-]Ist mir egal...")
/*< 63>*/ 						switch (choice(2)) {
          						  case 0:
/*< 64>*/ 							printf("\x0E\x01\x09\x04\n\xF00I-i-ich hab ihn gesehen! Und ich kann\nauch nur davon berichten, weil ich die\nBeine in die Hand genommen habe und\ngeflitzt bin!\n\x0E\x01\x09\x04\x0B\x700Jemand mit weniger Glück hätte mit\nSicherheit ins Gras gebissen!")
          							flw_66:
/*< 66>*/ 							printf("\x0E\x01\x09\x04\x0B\x700Wie dem auch sei, ich habe dieses Biest\nmit eigenen Augen gesehen und lasse\nmir nichts anderes erzählen!\n\nIch lief also gerade in der Nähe des\ngroßen Baumes auf dem Friedhof,\nmitten <r<in der Nacht>>...\n\nDer Dämon <r<schlug auf den Grabstein\nbeim großen Baum>>, welcher sofort hell\naufleuchtete!\n\nDann <r<schob er den Grabstein >>zur Seite\nund plötzlich öffnete sich die Tür zum\nSchuppen!\n\nDer Dämon ging hinein und schloss mit\neiner für eine Bestie sehr unüblichen \nEleganz die Tür hinter sich.\n\n\x0E\x01\x09\x04\x0B\x700Ich werde diesen Anblick mein Lebtag\nnicht vergessen! Halte dich <r<nachts vom\nFriedhof >>fern!")
/*< 68>*/ 							scene_flags[21 'The Sky'][5 /* 0x1 20 */] = true;
/*<577>*/ 							story_flags[825 /* us: 805A9B33 0x02, jp: 805ACDB3 0x02 */] = true;
          						  case 1:
/*< 65>*/ 							printf("Heee! Unterbrich mich gefälligst nicht,\nwährend ich meine Geschichte erzähle!")
          							goto flw_66
          						}
          					}
          				}
          			  case 1:
/*< 57>*/ 				printf("\x0E\x01\x09\x04\x00\x01Du glaubst mir doch, oder?\n[1]Was glauben?[2]Ich glaube dir.[3-]Nie im\nLeben!")
/*< 58>*/ 				switch (choice(3)) {
          				  case 0:
/*< 59>*/ 					printf("\x0E\x01\x09\x04\x0B\x703Ich sage dir, im Wolkenhort lebt ein\nfürchterlicher Dämon!\n\n\nUm ein Haar hätte mich das Biest\nlebendig verspeist!\n\n\n\x0E\x01\x09\x04\x0B\x700Du magst vielleicht ein Ritter sein,\naber dieser Dämon wird selbst dich\nzum Frühstück verputzen!")
          				  case 1:
/*< 60>*/ 					printf("\x0E\x01\x09\x04\x0B\xE04Sieh an, sieh an...\nDu bist ein echt netter Bengel!")
          				  case 2:
/*< 61>*/ 					printf("\x0E\x01\x09\x04\n\xF03Hm.<pause14>.<pause14>.<pause14> Was ist bloß los mit der Jugend\nvon heute?")
          				}
          			}
          		  case 1:
          			goto flw_56
          		}
          	  case 1:
          		goto flw_56
          	}
          }

          void entrypoint_117_13() {
/*<285>*/ 	start()
/*<173>*/ 	printf("\x0E\x01\x09\x04\x00\x08In diesem Fall... Danke schön!\nDu <pause0A>netter, <pause0A>lieber <pause0A>Maulwurf!")
          }

          void entrypoint_117_48() {
/*<421>*/ 	start()
/*<501>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<502>*/ 		printf("\x0E\x01\x09\x04\x00\x01Ich kann kaum glauben, endlich mal\nwieder Kabochas liebliche Stimme\nvernommen zu haben!\n\nIch spüre meine alte Liebe zu ihr\nwieder aufflammen!")
          	  case 1:
/*<422>*/ 		printf("\x0E\x01\x09\x04\x00\x01Schon gehört?\n\n\n\n<b<Kabocha>> hat manchmal für die Gäste\nder Kürbisbar Lieder zum Besten\ngegeben!\n\n\x0E\x01\x09\x04\x09\x700Ach, hätte sie doch nur musikalische\nBegleitung, dann könnte sie wieder\nauftreten!")
          	}
          }

          void entrypoint_117_31() {
/*< 37>*/ 	start()
/*<503>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<504>*/ 		printf("\x0E\x01\x09\x04\x00\x04Ich wusste es! Kabochas Gesang ist das\nSchönste, das ich jemals gehört habe!\n\n\nWenn ich dagegen an die schrille \nStimme meiner Frau denke...")
          	  case 1:
/*<401>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<402>*/ 			printf("\x0E\x01\x09\x04\x0B\x704Erschreck mich doch nicht so! Oder soll\nich etwa auf der Stelle tot umfallen?\n\n\n\x0E\x01\x09\x04\n\x700Also, was willst du von mir?")
          		  case 1:
/*<495>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<496>*/ 				printf("\x0E\x01\x09\x04\x00\x04Kabochas Gesangsstimme ist einfach\nein Traum!\n\n\n<pause0A>.<pause0A>.<pause0A>.aber der Kerl, der für sie gespielt\nhat, hat sein Instrument genommen\nund ist abgehauen.\n\nAch, könnte ich doch wieder ihre\nliebliche Stimme hören! Ich werde\nihren glockenhellen Klang wohl nie\nvergessen!")
          			  case 1:
/*< 40>*/ 				printf("\x0E\x01\x09\x04\x00\x04Du solltest dich nachts von den Straßen\ndes Wolkenhorts fernhalten! Wer weiß,\nauf welch gruselige Wesen du in tiefer\nFinsternis triffst!\nWenn du mit mir sprechen möchtest,\nkomm bitte tagsüber vorbei!")
          			}
          		}
          	}
          }

          void entrypoint_117_14() {
/*<286>*/ 	start()
/*<174>*/ 	printf("\x0E\x01\x09\x04\x00\x05Aber... Na ja... Ich meine... Naaa gut.\nIch kann es ja mal versuchen!")
          }

          void entrypoint_117_15() {
/*<287>*/ 	start()
/*<169>*/ 	printf("\x0E\x01\x09\x04\x00\x09Wie gefällt dir das?")
          }

          void entrypoint_117_32() {
/*<544>*/ 	start()
          	goto flw_546
          }

          void entrypoint_117_50() {
/*<109>*/ 	start()
/*<111>*/ 	printf("\x0E\x01\x09\x04\x00\x12\x0E\x01\x08\x02\x2CDWas glaubst du eigentlich,\nwas du da oben treibst?\n\n\n\x0E\x01\x08\x02ÍMach sofort, dass du runter kommst!")
/*<110>*/ 	story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */] = true;
/*<349>*/ 	zone_temp_flags[3 /* 0x1 08 */] = true;
          }

          void entrypoint_117_16() {
/*<288>*/ 	start()
/*<170>*/ 	printf("\x0E\x01\x09\x04\x00\x09Oh! Hui! Sieh dir das an!\nUuunglaublich!")
          }

          void entrypoint_117_51() {
/*<271>*/ 	start()
/*<276>*/ 	set_camera(3, 0)
/*<277>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 272, 'param3': 13}
/*<272>*/ 	printf("Hey!\n\n\n\nDu glaubst doch wohl nicht, dass ich\ndich nach dieser Aktion so einfach\ngehen lasse, oder?")
/*<278>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_17() {
/*<289>*/ 	start()
/*<171>*/ 	printf("\x0E\x01\x09\x04\x00\x06Hohoho... Findest du wirklich?\nDas war doch nicht der Rede wert!\n\n\nDas Talent, die Erde umzugraben,\nwurde uns Mogma praktisch in die\nWiege gelegt!")
          }

          void entrypoint_117_52() {
/*<273>*/ 	start()
/*<280>*/ 	set_camera(4, 0)
/*<281>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 279, 'param3': 13}
/*<279>*/ 	printf("Hey!\n\n\n\nDu glaubst doch wohl nicht, dass ich\ndich nach dieser Aktion so einfach\ngehen lasse, oder?")
/*<282>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_18() {
/*<290>*/ 	start()
/*<172>*/ 	printf("\x0E\x01\x09\x04\x00\nMeinst du, du schaffst das noch\neinmal? Bitte! Bitte, bitte, bitte!")
          }

          void entrypoint_117_01() {
          	start()
/*< 82>*/ 	switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          	  case 0:
/*< 93>*/ 		switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          		  case 0:
/*< 94>*/ 			switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          			  case 0:
/*< 95>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*< 96>*/ 					switch (story_flags[470 /* us: 805A9B0E 0x04, jp: 805ACD8E 0x04 */]) {
          					  case 0:
/*< 98>*/ 						switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          						  case 0:
/*<506>*/ 							switch (temp_flags[17 /* 0x3 02 */]) {
          							  case 0:
/*<100>*/ 								printf("\x0E\x01\x09\x04\x13\x808Er ist emsiger als einhundert normale\nArbeitskräfte! Ich bin ihm so dankbar\nfür seine Hilfe!")
          							  case 1:
/*<510>*/ 								switch (zone_temp_flags[7 /* 0x1 80 */]) {
          								  case 0:
          									flw_388:
/*<388>*/ 									entrypoint_117_25();
          								  case 1:
/*<507>*/ 									printf("\x0E\x01\x09\x04\x13\x808Seitdem uns der Maulwurf hilft,\nläuft die Arbeit auf dem Feld wie\ngeschmiert!\n\nNun können wir noch viel mehr\nKürbisse anbauen und ernten!")
/*<511>*/ 									zone_temp_flags[7 /* 0x1 80 */] = true;
          									goto flw_388
          								}
          							}
          						  case 1:
/*<607>*/ 							switch (story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */]) {
          							  case 0:
/*<608>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 31}
          							  case 1:
/*<598>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 234, 'param3': 31}
/*<234>*/ 								printf("\x0E\x01\x09\x04\x0B\xE0FIch hoffe, du findest bald jemanden,\nder mir beim Pflügen des Feldes zur\nHand geht...")
/*<233>*/ 								switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          								  case 0:
          								  case 1:
/*<235>*/ 									{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 236, 'param3': 51}
/*<236>*/ 									printf("Deine <pling><r<Aurasuche>> ist zurzeit nicht\nauf die Person eingestellt, die das\nMädchen sucht.\n\nMöchtest du, dass ich die von diesem\nMädchen gesuchte <r<Person, die das\nKürbisfeld pflügen kann>>, als Ziel für\ndie <pling><r<Aurasuche>> festlege?\n[1]Ja, bitte.[2-]Jetzt nicht.")
/*<237>*/ 									switch (choice(2)) {
          									  case 0:
/*<239>*/ 										story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = true;
/*<240>*/ 										story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<241>*/ 										story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<242>*/ 										story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<243>*/ 										story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<244>*/ 										story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<575>*/ 										open_dowsing_wheel(15)
/*<576>*/ 										printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter.\n\n\n\nDie Person, nach der das Mädchen\nsucht, wurde als Ziel für die <pling><r<Aurasuche\n>>festgelegt.")
          										flw_245:
/*<245>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          									  case 1:
/*<238>*/ 										printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter. Ich werde keine\nÄnderung an der aktuellen Einstellung\nder <pling>Aurasuche vornehmen. ")
          										goto flw_245
          									}
          								}
          							}
          						}
          					  case 1:
/*< 97>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 99, 'param3': 31}
/*< 99>*/ 						printf("\x0E\x01\x09\x04\x00\x01Hallo! Noch mal vielen Dank, dass du\nmir beim Tragen der Kürbisse geholfen\nhast! Jetzt können wir uns ganz dem\nPflanzen neuer Kürbisse widmen!\n\x0E\x01\x09\x04\x01\x100<pause1E>Leider ist das Pflügen des Feldes für\nmich \x0E\x01\x09\x04\x0B\xE00viel zu anstrengend.\n\n\n\x0E\x01\x09\x04\x07\x700Doch wo finde ich jemanden, der stark\ngenug ist, mir die Arbeit abzunehmen?\n[1]Ich kenne da\njemanden![2-]Hm, keine\nAhnung...")
/*<101>*/ 						switch (choice(2)) {
          						  case 0:
/*<103>*/ 							printf("\x0E\x01\x09\x04\x07\x809Wirklich? Dann sollte ich diese Person\nvielleicht um Hilfe bitten!\n\n\n\x0E\x01\x09\x04\x01\x700Falls du ihr begegnest, bitte sei so lieb\nund bringe sie zu mir. Tust du mir den\nGefallen?")
/*<120>*/ 							{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 119, 'param3': 51}
/*<119>*/ 							printf("Die Wahrscheinlichkeit, dass du für\ndeine Hilfe <y<Juwelen der Güte >>erhältst,\nliegt bei 90 %.\n\nIch werde also eine Person, die dem\nMädchen beim Pflügen helfen kann,\nals Ziel für die <pling><r<Aurasuche>> festlegen.\n\nFalls du dich allerdings momentan auf\nder Suche nach einem anderen Objekt\nbefindest, müsste ich dieses Objekt\naus der Aurasuche entfernen.\nSoll ich diese Änderung vornehmen und\ndie Aurasuche so einstellen, dass du\nnach einer <r<Person, die das Kürbisfeld\nbestellen kann>>, suchen kannst?\n[1]Ja[2-]Nein")
/*<594>*/ 							switch (choice(2)) {
          							  case 0:
/*<595>*/ 								printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter. Die Aurasuche\nwurde dementsprechend eingestellt.\nDu kannst nun nach <r<jemandem, der\ndas Feld bestellt>>, suchen.")
/*<565>*/ 								story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = true;
/*<566>*/ 								story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<567>*/ 								story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<568>*/ 								story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<569>*/ 								story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<570>*/ 								story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<574>*/ 								open_dowsing_wheel(15)
          								flw_572:
/*<572>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 571, 'param3': 36}
/*<571>*/ 								story_flags[470 /* us: 805A9B0E 0x04, jp: 805ACD8E 0x04 */] = true;
/*<597>*/ 								{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 573, 'param3': 16}
/*<573>*/ 								printf("\x0E\x01\x09\x04\x01\x70FIch hoffe, du kennst tatsächlich\njemanden und sagst das nicht nur,\ndamit ich mich besser fühle.\n\n\x0E\x01\x09\x04\x07\x700Nun, ich darf die Hoffnung nicht\naufgeben. Ich warte hier, bis dieser\nJemand auftaucht!")
          							  case 1:
/*<596>*/ 								printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter. Wenn du die\nEinstellung der Aurasuche ändern\nmöchtest, sprich erneut mit dieser\nPerson.")
          								goto flw_572
          							}
          						  case 1:
/*<102>*/ 							printf("\x0E\x01\x09\x04\x01\x1611Ist das dein Ernst? Du willst also\neinfach dabei zusehen, wie sich ein\nsüßes Mädchen wie ich abrackert?\n\nUnd ich dachte, du seist ein\nehrenwerter Ritter!")
          						}
          					}
          				  case 1:
          					flw_387:
/*<387>*/ 					entrypoint_117_25();
          				}
          			  case 1:
          				goto flw_387
          			}
          		  case 1:
          			goto flw_387
          		}
          	  case 1:
/*< 84>*/ 		switch (story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */]) {
          		  case 0:
          			goto flw_34
          		  case 1:
/*<540>*/ 			switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          			  case 0:
/*< 85>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ach, da ist ja der Ritter, der für\nunseren kaputten Kronleuchter\nWiedergutmachung leisten möchte.\n\n\x0E\x01\x09\x04\x01\x700Hm, warte mal...<pause1E> Vater meinte,\ner hätte wieder Arbeit für dich.\n\n\n\x0E\x01\x09\x04\x07\x700Am besten, du gehst gleich zu ihm\nund fragst ihn selbst.")
          			  case 1:
/*<541>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ach, da ist ja der Ritter, der für\nunseren kaputten Kronleuchter\nWiedergutmachung leisten möchte.\n\n\x0E\x01\x09\x04\x01\x700Wusstest du eigentlich, dass die\nKürbisernte kurz bevorsteht?<pause1E>\n\n\n\x0E\x01\x09\x04\x07\x700Ich muss zugeben, dass es mir recht\nschwer fällt, diese wuchtigen Dinger\nzu tragen...")
          			}
          		}
          	}
          }

          void entrypoint_117_19() {
/*<291>*/ 	start()
/*<175>*/ 	printf("\x0E\x01\x09\x04\x00\x0COooh ja! Und weiter geht's!")
          }

          void entrypoint_117_53() {
/*<355>*/ 	start()
/*<356>*/ 	set_camera(13, 0)
/*<357>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 359, 'param3': 40}
/*<359>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 361, 'param3': 6}
/*<361>*/ 	set_camera(14, 0)
/*<360>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 358, 'param3': 40}
/*<358>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_02() {
/*<  8>*/ 	start()
/*< 32>*/ 	switch (context_related2(0)) {
          	  case 0:
/*<  9>*/ 		printf("\x0E\x01\x09\x04\x13\x809Ich wusste, du würdest es schaffen!\nDu hast tatsächlich alle Kürbisse ins\nLager gebracht!\n\n\x0E\x01\x09\x04\x01\x700Das bedeutet dann wohl, dass es hier\nnichts mehr für dich zu tun gibt!\n\x0E\x01\x09\x04\x19\x800Hab <pause0F>vielen, <pause0F>vielen <pause0F>Dank<pause0F>!")
          	  case 1:
/*< 33>*/ 		printf("\x0E\x01\x09\x04\x01\x1611Oh nein! Du hast sie fallen lassen!\nDu bist aber auch ein Schussel...\n\n\n\x0E\x01\x09\x04\x07\x700Nun, du kannst gerne noch einen\nVersuch wagen, falls du dich der\nAufgabe gewachsen fühlst!")
          	}
          }

          void entrypoint_117_54() {
/*<362>*/ 	start()
/*<526>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 527, 'param3': 32}
/*<527>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 363, 'param3': 17}
/*<363>*/ 	set_camera(15, 0)
/*<364>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 366, 'param3': 40}
/*<366>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 368, 'param3': 6}
/*<368>*/ 	set_camera(16, 0)
/*<367>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 365, 'param3': 40}
/*<365>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_03() {
/*<  7>*/ 	start()
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x01\x1611Oh nein! Du hast sie fallen lassen!\nDu bist aber auch ein Schussel...\n\n\n\x0E\x01\x09\x04\x07\x700Nun, du kannst gerne noch einen\nVersuch wagen, falls du dich der\nAufgabe gewachsen fühlst!")
          }

          void entrypoint_117_20() {
/*< 11>*/ 	start()
/*<104>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<409>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<106>*/ 			printf("\x0E\x01\x09\x04\x10\x1604Sieh nur, was du angerichtet hast!\nIch hätte die Rubine nicht erwähnen\nsollen! Dabei wollte ich dich warnen!\n\n\x0E\x01\x09\x04\x1A\x1600Gib bloß nicht mir die Schuld, wenn\nVater dir nun eine Standpauke hält!")
          		  case 1:
/*<537>*/ 			switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
          			  case 0:
/*<410>*/ 				printf("\x0E\x01\x09\x04\x00\x01Hallo du! Mein Vater hat mir erzählt,\ndass du deine Schulden für unseren\nkaputten Kronleuchter abarbeiten\nmöchtest.\n\x0E\x01\x09\x04\x1A\x800Das wird sicher nicht leicht, aber ich\nglaube an dich!")
          				flw_491:
/*<491>*/ 				switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          				  case 0:
          				  case 1:
/*<490>*/ 					switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          					  case 0:
/*<492>*/ 						printf("\x0E\x01\x09\x04\x1A\x1000Was? Du willst etwas über Narisha\nwissen?\n\n\nJetzt, da du ihn erwähnst...\nIch glaube, Vater hat ihm hin und\nwieder etwas Kürbissuppe gebracht.\n\nVielleicht kann er dir ja mehr über\nNarisha erzählen!")
          					  case 1:
          					}
          				}
          			  case 1:
/*<538>*/ 				printf("\x0E\x01\x09\x04\x10\x1604Sieh nur, was du angerichtet hast!\nIch hätte die Rubine nicht erwähnen\nsollen! Dabei wollte ich dich warnen!\n\n\x0E\x01\x09\x04\x1A\x1600Gib bloß nicht mir die Schuld, wenn\nVater dir nun eine Standpauke hält!")
          				goto flw_491
          			}
          		}
          	  case 1:
/*<489>*/ 		switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          		  case 0:
          			flw_105:
/*<105>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hallo du! Du siehst wie ein Ritter aus\ndem Wolkenhort aus! Hab ich Recht?\n\x0E\x01\x09\x04\x1A\x800Nimm doch Platz und entspann dich\nein wenig!\n\x0E\x01\x09\x04\x0D\x700Oh! Dir sind die Rubine an unserem\nKronleuchter aufgefallen?\n\x0E\x01\x09\x04\x10\x00Versuch bloß nicht, die Rubine von\ndort oben herunterzubekommen.\nManche Leute behaupten, man könne\nden Kronleuchter zum Schwingen\nbringen, indem man etwas anrempelt,\nund die Rubine würden fallen...\n\x0E\x01\x09\x04\x1A\x1600Aber wie dem auch sei...\nDenk \x0E\x01\x06\x02\xFCCDnicht mal \x0E\x01\x06\x02Ídran!")
          		  case 1:
/*<487>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<488>*/ 				printf("\x0E\x01\x09\x04\x00\x01Hallo du!\n\n\n\nWillkommen in der Kürbisbar!\nFühl dich ganz wie zu Hause!\n<pause1E>Geht es dir gut? Du wirkst nervös.")
          			  case 1:
          				goto flw_105
          			}
          		}
          	}
          }

          void entrypoint_117_55() {
/*<369>*/ 	start()
/*<370>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 372, 'param3': 40}
/*<372>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 374, 'param3': 6}
/*<374>*/ 	set_camera(17, 0)
/*<373>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 371, 'param3': 40}
/*<371>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_04() {
/*<163>*/ 	start()
/*<161>*/ 	printf("Ich habe diesen alten Mogma\nmitgebracht!")
          }

          void entrypoint_117_21() {
/*<247>*/ 	start()
/*<248>*/ 	switch (context_related4(1)) {
          	  case 0:
/*<249>*/ 		printf("\x0E\x01\x09\x04\x17\x1411Hm... Ich dachte eigentlich, dass du\neinem solch schönen Instrument\nlieblichere Töne entlocken könntest...\n\n\x0E\x01\x09\x04\x01\x1600Meine Gäste sahen jedenfalls nicht so\naus, als ob sie sich über die diese...\nMusikuntermalung gefreut hätten.")
          		flw_252:
/*<252>*/ 		scene_flags[21 'The Sky'][21 /* 0x3 20 */] = true;
/*<384>*/ 		story_flags[675 /* us: 805A9B20 0x10, jp: 805ACDA0 0x10 */] = false;
          	  case 1:
/*<599>*/ 		printf("\x0E\x01\x09\x04\x17\x1411Das war ja ganz brauchbar.\n\n\n\n\x0E\x01\x09\x04\x01\x1600Aber mal ehrlich, ein bisschen\nmehr hatte ich schon erwartet...")
          		goto flw_252
          	  case 2:
/*<250>*/ 		printf("\x0E\x01\x09\x04\x16\x1309Hui! Du bist ein besserer Musiker, als\nich gedacht habe! Da habe ich dich wohl\ngehörig unterschätzt!\n\n\x0E\x01\x09\x04\x07\x700Es wäre schön, wenn du bald wieder\nfür meine Gäste spielen würdest!")
          		goto flw_252
          	  case 3:
/*<251>*/ 		printf("\x0E\x01\x09\x04\x15\xD0ADu warst einfach unglaublich! Dein\nLyraspiel und meine Stimme haben\nperfekt harmoniert!\n\n\x0E\x01\x09\x04\x07\x800Du hast eine neue Bewunderin! Ich\nkann es kaum erwarten, dich wieder\nspielen zu hören!")
          		goto flw_252
          	}
          }

          void entrypoint_117_56() {
/*<375>*/ 	start()
/*<528>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 529, 'param3': 32}
/*<529>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 376, 'param3': 17}
/*<376>*/ 	set_camera(18, 0)
/*<377>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 379, 'param3': 40}
/*<379>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 381, 'param3': 6}
/*<381>*/ 	set_camera(19, 0)
/*<380>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 378, 'param3': 40}
/*<378>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_05() {
/*<164>*/ 	start()
/*<162>*/ 	printf("Richte der verehrten Phai Grüße\nvon mir aus!")
          }

          void entrypoint_117_22() {
/*<253>*/ 	start()
/*<329>*/ 	switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          	  case 0:
/*<330>*/ 		switch (context_related4(0)) {
          		  case 0:
/*<331>*/ 			printf("\x0E\x01\x09\x04\n\x90DWas war denn DAS? Dein Lyraspiel\nhat Kabochas Stimme total grausig\nklingen lassen!\n\n\x0E\x01\x09\x04\x0D\x00Hör mal, Freundchen! Für solch eine\nLeistung werd ich dir auf keinen Fall\netwas zahlen!")
          		  case 1:
/*<600>*/ 			printf("\x0E\x01\x09\x04\x00\x10Hmmm... Ganz ehrlich, sogar das\nGejaule der Lemurin ist schöner als\ndein Lyraspiel. Für diesen Auftritt\nkann ich dir kein Geld geben.")
          		  case 2:
/*<333>*/ 			printf("\x0E\x01\x09\x04\x00\x0EDas war gar nicht so schlecht.\nMit ein bisschen mehr Übung könntest\ndu Kabocha bestimmt beeindrucken!\n\n\x0E\x01\x09\x04\x0E\x700Für diese gelungene Darbietung zahle\nich dir <r<20 Rubine>>!")
/*<334>*/ 			rupees += 20;
          		  case 3:
/*<332>*/ 			printf("\x0E\x01\x09\x04\x0B\x100CEine Spitzenleistung, Link!\nDas war einfach fantastisch!\n\n\n\x0E\x01\x09\x04\x0C\x700Für diesen Auftritt zahle ich dir\n<r<50 Rubine>>!")
/*<335>*/ 			rupees += 50;
          		}
          	  case 1:
/*<255>*/ 		switch (context_related4(0)) {
          		  case 0:
/*<254>*/ 			printf("\x0E\x01\x09\x04\x0F\xA0DWas soll DAS denn?\nNennst du DAS etwa Musik?\n\n\n\x0E\x01\x09\x04\n\x900Glaub nur nicht, dass damit deine\nSchulden beglichen sind! Reiß dich\nzusammen und spiel noch mal!")
          		  case 1:
/*<601>*/ 			printf("\x0E\x01\x09\x04\x00\x10Na ja, das war zwar nicht der beste\nAuftritt, den ich je gesehen habe, aber\nimmerhin war es ja dein erstes Mal.\nAlso gut, die Aufgabe ist bestanden!")
          			flw_258:
/*<258>*/ 			printf("\x0E\x01\x09\x04\x0B\x700Nun, das bedeutet dann wohl, dass du\nnicht länger für mich arbeiten musst.\nGut gemacht!\n\n\x0E\x01\x09\x04\x0E\x1100Und ich habe beschlossen, dass ich mir\nschon bald einen neuen Kronleuchter\nzulegen werde!\n\n\x0E\x01\x09\x04\x0D\x700Da ich mit deiner Leistung überaus\nzufrieden war, gibt es auch noch eine\nBelohnung von mir. Los, nimm schon!")
/*<534>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 305, 'param3': 42}
/*<305>*/ 			give_item(94 0x5E);
/*<304>*/ 			printf("\x0E\x01\x09\x04\x01\x700Schau doch mal wieder vorbei!\nAber dann als Gast!")
/*<259>*/ 			story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */] = true;
          		  case 2:
/*<256>*/ 			printf("\x0E\x01\x09\x04\x00\x0ENicht schlecht, nicht schlecht.\nDu hast dich wacker geschlagen!")
          			goto flw_258
          		  case 3:
/*<257>*/ 			printf("\x0E\x01\x09\x04\x0B\x100CDas war... unglaublich...\nIch hätte beinahe weinen müssen!\nDu bist ja so talentiert!")
          			goto flw_258
          		}
          	}
          }

          void entrypoint_117_57() {
/*<443>*/ 	start()
/*<465>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<466>*/ 		printf("\x0E\x01\x09\x04\x03\x80COh nein! Schau nur, was du für ein\nChaos veranstaltet hast!\n\n\n\x0E\x01\x09\x04\x00\x100Schätze, dafür gibt es einen Satz\nheiße Ohren...")
          	  case 1:
/*<579>*/ 		switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          		  case 0:
/*<584>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hey, Link!\nWenn du viele Insekten hast und nichts\ndamit anzufangen weißt, verkauf sie\nmir doch einfach!\n\x0E\x01\x09\x04\x12\x00Aber hier ist nicht der geeignete Ort\ndafür. Komm doch nachts in mein\nZimmer in der Schule...")
          		  case 1:
/*<578>*/ 			switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          			  case 0:
/*<581>*/ 				switch (zone_temp_flags[5 /* 0x1 20 */]) {
          				  case 0:
/*<583>*/ 					printf("\x0E\x01\x09\x04\x12\x01Wenn du es schaffst, durch die Felsen\nmit den Löchern zu fliegen, wird die\nReise im Wolkenmeer viel angenehmer!\n\n\x0E\x01\x09\x04\x03\x104Stößt du jedoch mit einem der Felsen\nzusammen, könnte sich aber auch alles\nins Gegenteil verkehren, hehehe!")
          				  case 1:
/*<580>*/ 					printf("\x0E\x01\x09\x04\x00\x01Hallo, Link!\nIch habe etwas Neues für dich!\n\n\nHast du im Wolkenmeer schon einmal\ndiese <r<Felsen>> gesehen, <r<in deren Mitte\nein Loch ist>>?\n\nWenn du dort durchfliegst, wird dein\nWolkenvogel auf mysteriöse Weise <r<eine\nZeit lang >>schneller!\n\n\x0E\x01\x09\x04\x12\x00Geübte Vogelreiter nutzen diese\nFelsen, um sich noch flinker im\nWolkenmeer fortzubewegen!")
/*<582>*/ 					zone_temp_flags[5 /* 0x1 20 */] = true;
          				}
          			  case 1:
/*<444>*/ 				printf("\x0E\x01\x09\x04\x00\x01Hey, Link!\n\n\n\n\x0E\x01\x09\x04\x12\x00Hätte nicht gedacht, dich hier zu\ntreffen. Du fragst dich sicher,\nwas ich hier treibe...\n[1]Stimmt![2]Nicht wirklich...")
/*<445>*/ 				switch (choice(2)) {
          				  case 0:
/*<446>*/ 					printf("\x0E\x01\x09\x04\x03\x104Bestimmt habe ich es schon einmal\nerwähnt... Ich liiiebe Insekten!\n\n\nUnd genau deshalb bin ich hier:\nUm Insekten für meine Sammlung\nzu fangen!\n\n\x0E\x01\x09\x04\x04\x100Wenn du bereits ein Schmetterlingsnetz\nhast, kannst du gleich loslegen.\n\n\nUnd falls du noch keines besitzt, kannst\ndu dir eines in Terris Laden kaufen.\n\n\n\x0E\x01\x09\x04\x12\x100Wahrscheinlich dreht er gerade wieder\nseine Runden über dem Wolkenhort.")
          				  case 1:
/*<447>*/ 					printf("\x0E\x01\x09\x04\x04\x805Wie, nicht wirklich?\n\n\n\n\x0E\x01\x09\x04\x04\x100Ich dachte mir schon, dass du mit\nInsekten nichts anfangen kannst!")
          				}
          			}
          		}
          	}
          }

