          void entrypoint_117_40() {
/*< 38>*/ 	start()
/*<348>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<350>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<351>*/ 			printf("\x0E\x01\x09\x04\x11\x1153Ooooooh! Jetzt reicht's! Jetzt hast du den\nBogen eindeutig überspannt!")
          		  case 1:
          			flw_493:
/*<493>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<614>*/ 				switch (scene_flags[69 /* 0x9 20 */]) {
          				  case 0:
/*<613>*/ 					switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          					  case 0:
/*<616>*/ 						printf("\x0E\x01\x09\x04\x00\x01Deine Arbeit hat diesen Kronleuchter erst\nmöglich gemacht...\n\n\n\x0E\x01\x09\x04\x00\x300Sag mal, willst du auf diese Weise etwa\nKabocha beeindrucken?")
          					  case 1:
          						flw_617:
/*<617>*/ 						switch (scene_flags[5 /* 0x1 20 */]) {
          						  case 0:
/*<494>*/ 							printf("\x0E\x01\x09\x04\x00\x01Dieses ganze Geschwätz über Monster\nund Dämonen war also nichts weiter\nals heiße Luft!\n\n\n\x0E\x01\x09\x04\x00\x300Der Kerl wollte sich tatsächlich nur\ninteressant machen!")
          						  case 1:
          							flw_41:
/*< 41>*/ 							printf("\x0E\x01\x09\x04\x00\x01He, hör mal kurz zu!\n\n\n\nDer alte Knabe dort drüben behauptet, einen\nDämon gesehen zu haben!\n\n\n\x0E\x01\x09\x04\n\x300Na, mit solchen Prahlereien wird er Kabocha\njedenfalls nicht für sich gewinnen können!")
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
/*<176>*/ 	printf("\x0E\x01\x09\x04\x07\x803Ich bin ja so froh, dass du mir diesen netten\nMaulwurf vorgestellt hast! Er ist ein\nechtes Goldstück!\n\nIch werde ihn in Zukunft ganz sicher wieder\num Hilfe bitten. \x0E\x01\x09\x04\x13\x800Hab <pause05>vielen, <pause05>vielen <pause05>Dank<pause05>!")
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
/*<324>*/ 				printf("\x0E\x01\x09\x04\x0E\x1000Prima! Dann kannst du zusammen mit Kabocha\nbei meinen Gästen für etwas Stimmung sorgen!")
/*<325>*/ 				entrypoint_117_32();
          			  case 1:
/*<543>*/ 				printf("\x0E\x01\x09\x04\x0C\x700Tut mir leid, aber Kabocha tritt nur\nabends auf. Schau wieder vorbei,\nwenn es dunkel geworden ist.")
          			}
          		  case 1:
/*<315>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 316, 'param3': 12}
/*<316>*/ 			printf("\x0E\x01\x09\x04\x08\x1004Na, das ist mal eine Überraschung! Wer hätte\ngedacht, dass ein Knirps wie du auf meine\nSuppe steht?\n\nMöchtest du eine Portion mitnehmen?\nNur <r<10 Rubine>>, die Flasche.\n[1]Gerne![2-]Nein.")
/*<317>*/ 			switch (choice(2)) {
          			  case 0:
/*<318>*/ 				switch (has_rupees(10)) {
          				  case 0:
/*<320>*/ 					switch (adventure_pouch_has(1 0x0001)) {
          					  case 0:
/*<535>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 322, 'param3': 42}
/*<322>*/ 						give_item(195 0xC3);
/*<550>*/ 						rupees += -10;
/*<552>*/ 						printf("Die Suppe schmeckt am besten, wenn du sie\nheiß genießt! Nach 5 Minuten kühlt sie\njedoch ab.")
          					  case 1:
/*<321>*/ 						printf("\x0E\x01\x09\x04\x00\x700Du besitzt keine leere <y<Flasche>>?\n\n\n\nWenn du Suppe möchtest, brauchst du auch\neine leere Flasche! Ohne Flasche keine Suppe!\nBring mir eine, dann bekommst du auch\neine Portion!")
          					}
          				  case 1:
/*<319>*/ 					printf("\x0E\x01\x09\x04\x0C\x700Du scheinst knapp bei Kasse zu sein.\nKomm später wieder.")
          				}
          			  case 1:
/*<323>*/ 				printf("\x0E\x01\x09\x04\x0D\xA00Komm schon! Entscheide dich!")
          			}
          		  case 2:
/*<313>*/ 			printf("\x0E\x01\x09\x04\x08\x1000Wie du willst. Dann nimm dir einen Stuhl\nund ruh dich aus.\n\n\n\x0E\x01\x09\x04\x00\x700Oh. Und vergiss nicht, Kabocha kurz Hallo\nzu sagen!")
          		}
          	  case 1:
/*<309>*/ 		printf("\x0E\x01\x09\x04\x00\x01Hallo, Link!\nWas hältst du von meinem neuen\nKronleuchter?\n\n\x0E\x01\x09\x04\x0B\x1100Ich muss zugeben, dass ich mich für ihn\nziemlich in Unkosten gestürzt habe...")
/*<326>*/ 		scene_flags[21 'The Sky'][22 /* 0x3 40 */] = true;
/*<310>*/ 		printf("\x0E\x01\x09\x04\x0D\x1006...\nDu findest also, dass ich zu viel für ihn\nausgegeben habe?\n\n\x0E\x01\x09\x04\x08\x09Sei kein Miesmacher! Und außerdem\nhätte ich mir ohne deine Hilfe niemals\neinen solchen Leuchter leisten können!\n\n\x0E\x01\x09\x04\x0C\x900He! Wag es ja nicht, den Kronleuchter\nerneut kaputtzumachen!")
/*<311>*/ 		printf("\x0E\x01\x09\x04\x08\x700Wie dem auch sei, was kann ich für\ndich tun? Möchtest du vielleicht erneut\nfür mich arbeiten?\n\n\x0E\x01\x09\x04\x0E\x700Dieses Mal bezahle ich dich sogar in bar dafür!\nDu könntest wieder Musik machen!\nOder möchtest du Suppe?\n[1]Musik![2]Suppe, bitte![3-]Keine Zeit...")
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
/*<124>*/ 	printf("\x0E\x01\x09\x04\x1B07\x705Hahaha! Wenn du mich rufst, dann bin ich\neben sofort zur Stelle.\n\n\nGanz gleich, ob ein Kürbisfeld geerntet oder\nein brennendes Haus gelöscht werden muss!")
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 27, 'next': 179, 'param3': 16}
/*<179>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 2048, 'next': 125, 'param3': 13}
/*<125>*/ 	printf("\x0E\x01\x09\x04\x1A00\x09Oooh! Wenn das so ist, dann freue ich mich\nnatürlich über dein Angebot!")
/*<180>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 143, 'param3': 13}
/*<143>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 144, 'param3': 16}
/*<144>*/ 	printf("Ihr seid alle so lieb zu mir!\x0E\x01\x09\x04\x07\x703")
          }

          void entrypoint_117_08() {
/*<283>*/ 	start()
/*<165>*/ 	printf("\x0E\x01\x09\x04\x00\x09Wunderbar!\nDu hast jemanden gefunden!")
/*<167>*/ 	printf("\x0E\x01\x09\x04\x01\x705Aber...\nDas ist ja gar kein Mensch!\n\n\n\x0E\x01\x09\x04\x07\x700Ach, jetzt verstehe ich! Dieser Maulwurf wird\nalso den Acker für mich pflügen?")
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
/*<201>*/ 				printf("\x0E\x01\x09\x04\x07\x703Du versuchst es erneut? Ich wusste, dass ich auf\ndich zählen kann. Viel Erfolg!\n[1]Los geht's![2-]Lieber nicht.")
/*<202>*/ 				switch (choice(2)) {
          				  case 0:
/*<515>*/ 					printf("\x0E\x01\x09\x04\x13\x809Fantastisch! Ich wusste, dass du mich nicht\nenttäuschen würdest!\x0E\x01\x05\x04\x1E\x00")
          					flw_87:
/*< 87>*/ 					printf("\x0E\x01\x09\x04\x07\x700Wichtig ist, dass du nicht zu hektisch wirst!\nVersuche, möglichst <r<langsam zu laufen>>.\n\n\nSollten die Kürbisse nach rechts zu fallen\ndrohen, gehe nach rechts. Drohen sie nach links\nzu fallen, bewege dich nach links. Die Balance\nzu halten ist hierbei das A und O!\n\x0E\x01\x09\x04\x01\x700Gerate nicht in Panik und fang bloß nicht an\nzu rennen, sonst fallen die Kürbisse auf den\nBoden! <pause14>Ich drücke dir die Daumen!")
/*<  2>*/ 					make_actor_do_something(0, 0)
          				  case 1:
          					flw_397:
/*<397>*/ 					switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          					  case 0:
/*<513>*/ 						switch (random(2)) {
          						  case 0:
/*<395>*/ 							printf("\x0E\x01\x09\x04\x01\x1606Wirklich?\nIch dachte, es würde dich freuen, uns bei der\nErnte zu helfen!")
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
/*<500>*/ 					printf("\x0E\x01\x09\x04\x07\x808Ich hoffe doch, ich kann wieder auf deine Hilfe\nzählen! \x0E\x01\x06\x02\xFBCDMein hübscher \x0E\x01\x06\x02ÍRitter!")
          				  case 1:
/*<508>*/ 					switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          					  case 0:
/*<509>*/ 						printf("\x0E\x01\x09\x04\x01\x700Du kommst mir gerade recht! Wie sieht's aus,\nmöchtest du dir ein paar Rubine verdienen?\n\n\n\x0E\x01\x09\x04\x07\x700Ich benötige wieder einmal deine Muskelkraft.\nKürbisse müssen ins Lager getragen werden.\n[1]Los geht's![2-]Nein, danke.")
          						flw_3:
/*<  3>*/ 						switch (choice(2)) {
          						  case 0:
/*<  4>*/ 							printf("\x0E\x01\x09\x04\x07\x703Dann lass uns Nägel mit Köpfen machen!\nIch zeige dir, wohin die Kürbisse gebracht\nwerden müssen!")
/*< 88>*/ 							set_camera(1, 0)
/*< 86>*/ 							printf("Gib dein Bestes und trage die Kürbisse in\ndas Lager!")
/*< 89>*/ 							set_camera(-1, 0)
          							goto flw_87
          						  case 1:
          							goto flw_397
          						}
          					  case 1:
/*<398>*/ 						switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          						  case 0:
/*<469>*/ 							printf("\x0E\x01\x09\x04\x00\x0FNun, da die Ernte vorbei ist, wird es Zeit, neue\nKürbisse zu pflanzen. Doch zuerst muss das\nFeld neu gepflügt werden!\n\nHm... Wo finde ich jemanden, der diese\nPlackerei freiwillig auf sich nimmt?")
/*<396>*/ 							printf("\x0E\x01\x09\x04\x01\x700Oh, noch etwas. Kannst du mir einen Gefallen\ntun? Ich habe kaum noch Kraft in den Armen...\n\n\n\x0E\x01\x09\x04\x07\x700Würdest du für mich die Kürbisse in das Lager\ntragen? Ich belohne dich auch dafür!\n[1]Los geht's![2-]Lieber nicht.")
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
/*<  1>*/ 			printf("\x0E\x01\x09\x04\x01\x701Dann ist es beschlossene Sache!\nDu <r<hilfst uns also bei der Kürbisernte>>.\n\n\n\x0E\x01\x09\x04\x07\x700Du glaubst gar nicht, wie erleichtert ich bin.\nHast du eine Ahnung, wie schwer diese\nKürbisse sind?\n\n\x0E\x01\x09\x04\x01\x1600Ach. Du glaubst also, die Arbeit hier wird das\nreinste Zuckerschlecken?\n\n\n\x0E\x01\x09\x04\x01\x700Hihihi... Dann lass uns das Ganze doch etwas\nspannender gestalten. Versuch, <r<5 Kürbisse\ngleichzeitig zu tragen>>!\n\n\x0E\x01\x09\x04\x07\x1600Aber Vorsicht! Lass dir Zeit, sonst fallen sie\ndir auf den Boden! Also, bist du bereit?\n[1]Los geht's![2-]Lass mal...")
          			goto flw_3
          		}
          	  case 1:
/*<389>*/ 		switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          		  case 0:
/*<391>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 390, 'param3': 12}
/*<390>*/ 			printf("\x0E\x01\x09\x04\x13\x809Ich wusste, du würdest es schaffen! Du hast\ntatsächlich alle Kürbisse ins Lager gebracht!\n\n\nAuf dich kann man sich wirklich verlassen!\n\x0E\x01\x09\x04\x07\x800Hier ist dein Lohn. Stolze 50 Rubine!")
/*<392>*/ 			rupees += 50;
/*<497>*/ 			printf("\x0E\x01\x09\x04\x07\x800Hab <pause0F>vielen, <pause0F>vielen <pause0F>Dank!\nKomm wieder, wenn du möchtest!")
/*<393>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 498, 'param3': 12}
          			flw_498:
/*<498>*/ 			temp_flags[16 /* 0x3 01 */] = true;
/*<512>*/ 			zone_temp_flags[2 /* 0x1 04 */] = false;
          		  case 1:
/*< 35>*/ 			printf("\x0E\x01\x09\x04\x13\x809Ich wusste, du würdest es schaffen! Du hast\ntatsächlich alle Kürbisse ins Lager gebracht!\n\n\n\x0E\x01\x09\x04\x01\x700Das bedeutet dann wohl, dass es hier nichts\nmehr für dich zu tun gibt! \x0E\x01\x09\x04\x19\x800Hab <pause0F>vielen,\n<pause0F>vielen <pause0F>Dank<pause0F>!")
/*< 83>*/ 			story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */] = true;
          			goto flw_498
          		}
          	  case 2:
/*< 36>*/ 		printf("\x0E\x01\x09\x04\x01\x1611Oh nein! Du hast sie fallen lassen! Du bist\naber auch ein Schussel...\n\n\n\x0E\x01\x09\x04\x07\x700Nun, du kannst gerne noch einen Versuch\nwagen, falls du dich der Aufgabe\ngewachsen fühlst!")
/*<199>*/ 		zone_temp_flags[2 /* 0x1 04 */] = true;
          	}
          }

          void entrypoint_117_43() {
/*<131>*/ 	start()
/*<132>*/ 	printf("\x0E\x01\x09\x04\x00\x06Hohoho...\nEs geht doch nichts über einen gut\nausgefüllten Arbeitstag!\n\n\x0E\x01\x09\x04\x0C\xD00Und die junge Dame strahlen zu sehen,\nist genug Lohn für all die Plackerei!\n\n\n\x0E\x01\x09\x04\x01\x900Momentchen mal<pause0A>.<pause0A>.<pause0A>.<pause0A>\nIst dir aufgefallen, wie mich die\nKleine ansieht?\n\n\n\x0E\x01\x09\x04\x0C\xD00Ich denke, sie hat sich in mich verliebt!\n\x0E\x01\x09\x04\x09\xD0BHa! Ab sofort werde ich doppelt so hart\narbeiten!")
          }

          void entrypoint_117_09() {
/*<284>*/ 	start()
/*<168>*/ 	printf("\x0E\x01\x09\x04\x00\nDu willst mir doch nicht erzählen, dass ich hier\nden ganzen Tag lang das Feld bestellen soll?\n\n\nWar dies wirklich der einzige Grund, weshalb\ndu mich hier hoch in die Luft gebracht hast?")
          }

          void entrypoint_117_26() {
/*<431>*/ 	start()
          	flw_73:
/*< 73>*/ 	switch (choice(2)) {
          	  case 0:
/*<314>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 74, 'param3': 12}
/*< 74>*/ 		printf("\x0E\x01\x09\x04\x08\x1004Na, das ist mal eine Überraschung! Wer hätte\ngedacht, dass ein Knirps wie du auf meine\nSuppe steht?\n\nMöchtest du eine Portion mitnehmen?\nNur <r<10 Rubine>>, die Flasche.\n[1]Gerne![2-]Nein.")
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
/*<551>*/ 					printf("Die Suppe schmeckt am besten, wenn du sie\nheiß genießt! Nach 5 Minuten kühlt sie\njedoch ab.")
          				  case 1:
/*<116>*/ 					printf("\x0E\x01\x09\x04\x00\x700Du besitzt keine leere <y<Flasche>>?\n\n\n\nWenn du Suppe möchtest, brauchst du auch\neine leere Flasche! Ohne Flasche keine Suppe!\nBring mir eine, dann bekommst du auch\neine Portion!")
          				}
          			  case 1:
/*<114>*/ 				printf("\x0E\x01\x09\x04\x0C\x700Du scheinst knapp bei Kasse zu sein.\nKomm später wieder.")
          			}
          		  case 1:
          			flw_434:
/*<434>*/ 			switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          			  case 0:
          				flw_437:
/*<437>*/ 				printf("\x0E\x01\x09\x04\x10\x705Wohl wahr, wohl wahr. Dieser Ort ist nicht\nnur dazu da, um Suppe zu schlürfen!\nHier trifft man auch eine Menge\nillustrer Persönlichkeiten.\nAlso gönn dir ruhig eine Auszeit. Aber eins sag\nich dir: Wehe, du stellst hier etwas an oder\nmachst etwas kaputt!\n\n\x0E\x01\x09\x04\x08\x700Ganz recht, ich spreche von meinem\nhandgefertigten und sündhaft\nteuren Kronleuchter!\n\n\x0E\x01\x09\x04\x00\x900Lass bloß die Finger davon! Hast du\nmich verstanden?")
          			  case 1:
/*<435>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<439>*/ 					printf("\x0E\x01\x09\x04\x10\x905Ich verstehe schon. Dann musst du eben deine\nSchulden bei mir abarbeiten.\n\n\n\x0E\x01\x09\x04\x00\x700Komm später wieder und frag nach, ob ich\nArbeit für dich habe!")
          				  case 1:
/*<436>*/ 					switch (scene_flags[25 /* 0x2 02 */]) {
          					  case 0:
/*<438>*/ 						printf("\x0E\x01\x09\x04\x10\x905Ich verstehe schon. Dann musst du eben deine\nSchulden bei mir abarbeiten.\n\n\n\x0E\x01\x09\x04\x00\x700Komm später wieder und frag nach, ob ich\nArbeit für dich habe!")
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
/*<141>*/ 				printf("\x0E\x01\x09\x04\x01\x70FIch hoffe, du kennst tatsächlich jemanden und\nsagst das nicht nur, damit ich mich besser fühle.\n\n\n\x0E\x01\x09\x04\x07\x700Nun, ich darf die Hoffnung nicht aufgeben.\nIch warte hier, bis dieser Jemand auftaucht!")
          			  case 1:
/*<139>*/ 				printf("\x0E\x01\x09\x04\x00\x0FNun, da die Ernte vorbei ist, wird es Zeit, neue\nKürbisse zu pflanzen. Doch zuerst muss das\nFeld neu gepflügt werden!\n\nHm... Wo finde ich jemanden, der diese\nPlackerei freiwillig auf sich nimmt?")
          			}
          		  case 1:
/*<135>*/ 			printf("\x0E\x01\x09\x04\x01\x701Bist du hergekommen, um uns bei der\nKürbisernte zu helfen?\n\n\n\x0E\x01\x09\x04\x07\x700Findest du nicht auch, dass es etwas zu\nspät dafür ist? Man sieht ja kaum noch\nwas! Komm wieder, wenn es draußen\nhell ist. Die Kürbisse rennen nicht weg!")
          		}
          	  case 1:
/*<423>*/ 		switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          		  case 0:
/*<137>*/ 			printf("\x0E\x01\x09\x04\x00\x01Ach, da ist ja der Ritter, der für unseren\nkaputten Kronleuchter Wiedergutmachung\nleisten möchte.\n\n\x0E\x01\x09\x04\x01\x700Hm, warte mal...<pause1E> Vater meinte, er hätte wieder\nArbeit für dich.\n\n\n\x0E\x01\x09\x04\x07\x700Am besten, du gehst gleich zu ihm und fragst\nihn selbst.")
          		  case 1:
/*<424>*/ 			printf("\x0E\x01\x09\x04\x00\x01Ach, da ist ja der Ritter, der für unseren\nkaputten Kronleuchter Wiedergutmachung\nleisten möchte.")
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
/*<449>*/ 		printf("\x0E\x01\x09\x04\x1A00\x01Willkommen in der <r<Kürbisbar>>!\nHier serviert man die leckerste Suppe\nweit und breit!\n\n\x0E\x01\x09\x04\x1A1A\x800An diesem Ort kannst du entspannen\nund dir eine Auszeit gönnen!")
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
/*< 18>*/ 					printf("\x0E\x01\x09\x04\x00\x0EDu hast nun endlich deine Schulden für den\nkaputten Kronleuchter beglichen! Gut gemacht!\n\n\nIch hatte nicht damit gerechnet, dass du die\nSache durchziehst.\n\n\n\x0E\x01\x09\x04\x00\x1000Und bei deinem nächsten Besuch begrüße ich\ndich wieder als ganz normalen Gast!")
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
/*<262>*/ 										printf("\x0E\x01\x09\x04\x0B\xB00Das Bübchen hier wird dich begleiten während\ndu singst! Na los, erfreue deinen Vater mit\ndeiner zauberhaften Stimme!")
/*<303>*/ 										set_camera(12, 0)
/*<296>*/ 										{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 100, 'next': 263, 'param3': 16}
/*<263>*/ 										printf("Sehr gerne! Lass uns beginnen!")
/*<246>*/ 										make_actor_do_something(0, 0)
          									  case 1:
/*<545>*/ 										printf("\x0E\x01\x09\x04\x00\x0ENun gut. Ich erklär's dir noch einmal...")
          										flw_265:
/*<265>*/ 										printf("\x0E\x01\x09\x04\x00\x700Sobald Kabocha singt, werden sich unsere Gäste\nvom Takt mitreißen lassen. Achte darauf, deine\nLyra im richtigen Rhythmus zu spielen!\n\n\x0E\x01\x09\x04\x0F\x700Beobachte, in welchem Takt die Gäste nach\nlinks und rechts schunkeln und richte dein\nLyraspiel danach.\n\nDie Richtung ist hierbei nicht wirklich wichtig.\nAusschlaggebend ist nur, dass du nicht zu\nschnell oder gar zu langsam spielst.\n\n\x0E\x01\x09\x04\x08\x700Sobald die Gäste aufhören, sich zu bewegen,\nkannst du so spielen, wie du möchtest.\n\n\nHauptsache, der Rhythmus stimmt.\nVerstehst du?[1]Alles klar![2-]Bitte noch\nmal.")
/*<260>*/ 										switch (choice(2)) {
          										  case 0:
          											goto flw_383
          										  case 1:
/*<264>*/ 											printf("Hast du mir nicht zugehört?\nSperr gefälligst die Lauscher auf!")
          											goto flw_265
          										}
          									  case 2:
/*<269>*/ 										printf("\x0E\x01\x09\x04\x00\x04Kein Problem! Bereite dich vor dem nächsten\nAuftritt noch etwas vor.")
          									}
          								  case 1:
/*<519>*/ 									printf("\x0E\x01\x09\x04\x00\x01Du bist es wieder!\n<pause1E>Du siehst aus, als ob du uns etwas auf deiner\nLyra vorspielen möchtest!\n\nTut mir leid, aber tagsüber führen wir keine\nVorstellungen auf. Komm heute Nacht wieder!")
          								}
          							  case 1:
/*<604>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 517, 'param3': 31}
/*<517>*/ 								switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          								  case 0:
/*<197>*/ 									{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4096, 'next': 19, 'param3': 13}
/*< 19>*/ 									printf("\x0E\x01\x09\x04\x00\x01Da bist du ja wieder! Nun... Was kannst\ndu als Nächstes für mich tun?\n\n\n\x0E\x01\x09\x04\x0D\x700Oh! Was ist das denn für ein seltsames\nInstrument, das du bei dir trägst?\n\n\n\x0E\x01\x09\x04\x00\x1100Soso! Nun, man mag es ihr vielleicht nicht\nansehen, aber meine kleine Kabocha ist\neine tolle Sängerin!\n\n\x0E\x01\x09\x04\x00\x700Vor nicht allzu langer Zeit hat sie sogar für\nunsere Gäste gesungen!\n\n\n\x0E\x01\x09\x04\x08\x00Doch leider musste sie aufhören, da ihre\nmusikalische Begleitung nicht mehr für uns\nspielen wollte!\n\nHättest du nicht Lust, ein bisschen auf deinem\nInstrument zu spielen, während Kabocha singt?\n[1]Klar doch![2-]Nein...")
/*< 53>*/ 									switch (choice(2)) {
          									  case 0:
/*< 54>*/ 										printf("\x0E\x01\x09\x04\x00\x100EAusgezeichnet! Ich wusste, dass du Musik\nim Blut hast!\n\n\n\x0E\x01\x09\x04\x0D\xA00Aber streng dich an und spiel bloß nicht\nwie ein dahergelaufener Straßenmusikant!")
          										goto flw_265
          									  case 1:
/*<198>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 55, 'param3': 13}
/*< 55>*/ 										printf("\x0E\x01\x09\x04\x00\x11Du bist echt ein Vogel!\nHast du denn gar kein schlechtes Gewissen,\nwenn du Mist baust?")
          									}
          								  case 1:
/*<518>*/ 									printf("\x0E\x01\x09\x04\x00\x01Da bist du ja wieder! Nun... Was kannst du\nals Nächstes für mich tun?\n\n\n\x0E\x01\x09\x04\x00\x700Oh! Was ist das denn für ein seltsames\nInstrument, das du bei dir trägst?\n\n\n\x0E\x01\x09\x04\x0B\x1000Das ist es! Ich habe die perfekte Aufgabe\nfür dich!\n\n\n\x0E\x01\x09\x04\x00\x700Aber diese Aufgabe kannst du nur nachts für\nmich erledigen.\n\n\nWürde es dir etwas ausmachen, nach Einbruch\nder Dunkelheit noch mal bei mir\nvorbeizuschauen?")
          								}
          							}
          						  case 1:
/*<433>*/ 							switch (scene_flags[26 /* 0x2 04 */]) {
          							  case 0:
/*< 81>*/ 								printf("\x0E\x01\x09\x04\x00\x06Mir ist noch keine neue Aufgabe für dich\neingefallen. Komm später wieder.\n\n\nOder möchtest du etwa Kürbissuppe kaufen\nund dadurch meine Kürbisbar\nfinanziell unterstützen?\n[1]Gute Idee![2-]Nein, danke.")
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
/*< 50>*/ 								printf("Hey! Mach gefälligst, was Kabocha dir\nsagt, und hilf ihr dabei, die Kürbisse ins\nLager zu tragen!")
/*<196>*/ 								{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1792, 'next': 195, 'param3': 13}
/*<195>*/ 								printf("Aber vergiss nicht, auf meinem Kürbisfeld wird\nnur tagsüber gearbeitet!\n\n\nWer kann schon sagen, was passiert, wenn man\nKürbisse nachts erntet?")
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
/*< 51>*/ 											printf("\x0E\x01\x09\x04\x08\x704Das dürfte dir leichtfallen! Du hast doch\nbestimmt das Kürbisfeld draußen gesehen?\n\n\nIch möchte, dass du die Kürbisse in das Lager\nträgst. Weitere Einzelheiten erklärt\ndir <b<Kabocha>>.")
/*<133>*/ 											printf("Aber vergiss nicht, auf meinem Kürbisfeld wird\nnur tagsüber gearbeitet!\n\n\nWer kann schon sagen, was passiert, wenn man\nKürbisse nachts erntet?")
/*< 52>*/ 											story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */] = true;
          										  case 1:
/*<193>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 48, 'param3': 13}
/*< 48>*/ 											printf("\x0E\x01\x09\x04\x00\x11Du bist echt ein Vogel!\nHast du denn gar kein schlechtes Gewissen,\nwenn du Mist baust?")
          										}
          									  case 1:
/*< 20>*/ 										printf("Ausgezeichnet! Du hast die Suppe also\nabgeliefert. Und heiß war sie auch noch!\n\n\n\x0E\x01\x09\x04\x0C\x700Nun, dann lass mich das kurz mit deinen\nSchulden für den kaputten Kronleuchter\nverrechnen...\n\n\x0E\x01\x09\x04\x0F\x900Hui! Das reicht noch lange nicht aus, um für\nden zerstörten Kronleuchter aufzukommen!\n\n\nAls Nächstes wirst du uns bei der <r<Kürbisernte\nhelfen>>. Und ich will keine Beschwerden hören!\n[1]Na gut...[2-]Vergiss es!")
          										goto flw_47
          									}
          								  case 1:
/*<428>*/ 									switch (scene_flags[25 /* 0x2 02 */]) {
          									  case 0:
/*<430>*/ 										printf("\x0E\x01\x09\x04\x00\x06Was ist denn nun schon wieder?\nIch suche immer noch nach einer\npassenden Aufgabe für dich!\n\nIrgendwie musst du mich ja für diesen\ntragischen Verlust entschädigen, nicht\nwahr, mein Freund?\n\nWie wäre es, wenn du etwas von meiner\nKürbissuppe kaufst und so der Bar zu\netwas Gewinn verhilfst?\n[1]Gute Idee![2-]Nein, danke...")
/*<432>*/ 										entrypoint_117_26();
          									  case 1:
/*< 79>*/ 										printf("\x0E\x01\x09\x04\x0B\x100EAusgezeichnet! Du hast dem Schwertmeister\ndie Suppe gebracht!\n\n\nNun, dann lass mich das kurz mit deinen\nSchulden für den kaputten Kronleuchter\nverrechnen...\n\n\x0E\x01\x09\x04\x08\x700Aber schuldenfrei bist du immer noch nicht!\nIch finde schon noch eine neue Aufgabe\nfür dich!\n\nSchau später wieder bei mir vorbei, vielleicht ist\nmir ja bis dahin etwas eingefallen.")
/*<429>*/ 										scene_flags[21 'The Sky'][25 /* 0x2 02 */] = true;
          									}
          								}
          							}
          						  case 1:
/*< 27>*/ 							switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
          							  case 0:
/*< 24>*/ 								switch (adventure_pouch_has(2 0x0002)) {
          								  case 0:
/*< 25>*/ 									printf("\x0E\x01\x09\x04\x00\x01Die Suppe bleibt nur <r<5 Minuten >>lang heiß!\nBeeil dich und bring sie zum Schwertmeister!")
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
/*<556>*/ 											printf("\x0E\x01\x09\x04\x00\x07Was soll das heißen? Du hast keine <y<heiße\nKürbissuppe >>mehr?\n\n\n\x0E\x01\x09\x04\x0D\xA00Erzähl mir nicht, dass du sie selbst gegessen\nhast! Pah! Dann bringst du ihm gefälligst\nnoch eine!")
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
/*<593>*/ 										printf("\x0E\x01\x09\x04\x00\x01Oh, du hast eine leere Flasche mitgebracht!")
          										flw_189:
/*<189>*/ 										{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4100, 'next': 22, 'param3': 13}
/*< 22>*/ 										printf("Sehr schön. Hier hast du etwas\n<y<heiße Kürbissuppe>>!\n\n\n\x0E\x01\x09\x04\x00\x700Bring sie dem Schwertmeister, aber hurtig!\nNa, worauf wartest du noch?")
/*<533>*/ 										{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 30, 'param3': 42}
/*< 30>*/ 										give_item(195 0xC3);
/*< 77>*/ 										printf("\x0E\x01\x09\x04\x01\x700Ach, eine Sache noch, Kleiner...\nDer Schwertmeister kann kalte Suppe\nnicht ausstehen!\n\nDu solltest dich also mit deiner Lieferung\netwas beeilen.\n\n\nLos, bring ihm die Suppe <r<innerhalb der\nnächsten 5 Minuten>>, sonst ist sie kalt!")
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
/*<154>*/ 										printf("Bist du bereit, für den kaputten Kronleuchter\naufzukommen?\n[1]Gib mir Arbeit![2-]Ich weiß\nnicht...")
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
/*<275>*/ 												printf("\x0E\x01\x09\x04\x0D\xA0DEin Mann, ein Wort!\nIch möchte, dass du diese Suppe hier dem\nSchwertmeister bringst, ist das klar?\n[1]Verstanden![2-]Jetzt nicht.")
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
/*<557>*/ 				printf("\x0E\x01\x09\x04\x00\x01Hereinspaziert! Möchtest du dich mit einer\nPortion <r<Kürbissuppe >>stärken?\n[1]Sehr gerne![2-]Nein, danke.")
          				flw_558:
/*<558>*/ 				zone_temp_flags[4 /* 0x1 10 */] = true;
          				goto flw_73
          			  case 1:
/*< 13>*/ 				printf("\x0E\x01\x09\x04\x00\x01Willkommen in der Kürbisbar, der gemütlichen\nRaststätte für alle Vogelreiter!\n\n\nDu wirst nirgendwo eine bessere Suppe als\nmeine hausgemachte <r<Kürbissuppe >>finden!\nWie wär's mit einer Portion?\n[1]Sehr gerne![2-]Nein, danke.")
          				goto flw_558
          			}
          		}
          	}
          }

          void entrypoint_117_45() {
/*<145>*/ 	start()
/*<147>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 26, 'next': 151, 'param3': 32}
/*<151>*/ 	printf("\x0E\x01\x09\x04\x00\x01Wieso fragt Kabocha nicht einfach mich, ob ich\nihr bei der Kürbisernte helfe?")
/*<148>*/ 	{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 0, 'next': 425, 'param3': 16}
/*<425>*/ 	printf("\x0E\x01\x09\x04\x1A00\x03Das wäre aber nicht nett! Wir lassen\ndoch unsere Gäste nicht auf dem\nKürbisfeld schuften!")
/*<181>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6657, 'param2': -256, 'next': 149, 'param3': 13}
/*<149>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 26, 'next': 426, 'param3': 16}
/*<426>*/ 	printf("\x0E\x01\x09\x04\x00\x02Aber mir macht das nichts aus! Ehrlich! Ich\nwerde auch mindestens doppelt so hart wie\ndieser schlüpfrige Maulwurf arbeiten!")
/*<150>*/ 	{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 0, 'next': 182, 'param3': 16}
/*<182>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6675, 'param2': 2048, 'next': 146, 'param3': 13}
/*<146>*/ 	printf("\x0E\x01\x09\x04\x1A00\x09Oooh! Wenn das so ist, dann freue ich mich\nnatürlich über dein Angebot!")
/*<183>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6657, 'param2': -256, 'next': 152, 'param3': 13}
/*<152>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 427, 'param3': 16}
/*<427>*/ 	printf("\x0E\x01\x09\x04\x09\x705Ich könnte tagelang durcharbeiten,\nsolange mich Kabocha mit ihrem\nsüßen Lächeln erfreut! Hahaha!")
          }

          void entrypoint_117_28() {
/*<457>*/ 	start()
/*<560>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<561>*/ 		printf("\x0E\x01\x09\x04\x00\x03Wirklich gute Arbeit! Du hast uns sehr\ngeholfen!\n\n\nEs würde mich sehr freuen, dich in Zukunft\nwieder als Gast bei uns begrüßen zu dürfen!\n\n\nUnd falls du dir ein paar Rubine verdienen\nmöchtest, finde ich bestimmt etwas Arbeit\nfür dich!")
          	  case 1:
/*<474>*/ 		switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          		  case 0:
/*<475>*/ 			printf("\x0E\x01\x09\x04\x00\x03Ist dies wirklich der richtige Zeitpunkt, um sich\neine Pause zu gönnen? Hast du nicht noch was\nzu erledigen?")
          		  case 1:
/*<458>*/ 			printf("\x0E\x01\x09\x04\x00\x03Denkst du wirklich, dass jetzt der richtige\nMoment ist, um sich einfach hier hinzusetzen?\n\n\n\x0E\x01\x09\x04\x0D\x700Obwohl... Selbst du brauchst wohl manchmal\neine kleine Auszeit, nicht wahr?\n\n\n\x0E\x01\x09\x04\x00\x1000Nur zu! Dann lass die Seele eben ein\nwenig baumeln!")
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
/*<212>*/ 			printf("\x0E\x01\x09\x04\x00\x04Normalerweise biete ich <b<Narisha >>meine Suppe\nauf einer kleinen Insel innerhalb der\nSturmwolke dar.<pling>\n\n\x0E\x01\x09\x04\x00\x700Du kannst sie gar nicht übersehen! Über ihr\nschwebt ein <r<Regenbogen>>! Viel Glück!")
          		  case 1:
/*<209>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 459, 'param3': 31}
/*<459>*/ 			switch (story_flags[367 /* us: 805A9B03 0x20, jp: 805ACD83 0x20 */]) {
          			  case 0:
/*<460>*/ 				printf("\x0E\x01\x09\x04\x0F\x90DHey! Was soll denn das?\nIch hab mir so viel Mühe gegeben, und du\nlieferst die Suppe nicht ab?\n\n\x0E\x01\x09\x04\n\x00Dieser Roboter hat mir die Terrine mit der\nSuppe gerade eben vor die Tür gestellt!\n[1]Tut mir leid.[2]Ich versuch's\nnoch mal.")
/*<461>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_462:
/*<462>*/ 					printf("\x0E\x01\x09\x04\x0D\x900Nun ja. Da es für <b<Narisha >>ist, macht es mir\nnichts aus, dir noch eine große Portion\nzu kochen!")
/*<463>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 23, 'next': 464, 'param3': 32}
/*<464>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 471, 'param3': 32}
          					flw_471:
/*<471>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1013, 'next': 470, 'param3': 24}
/*<470>*/ 					printf("\x0E\x01\x09\x04\x00\x900Warte hier! Ich werde mich beeilen und in\nWindeseile etwas Leckeres zusammenbrauen!")
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
/*<217>*/ 					printf("\x0E\x01\x09\x04\x0B\x1009Hier ist sie!\n\n\n\n\x0E\x01\x09\x04\x0F\x1100Ich koche nun schon seit Jahrzehnten, aber dies\nhier ist wohl die leckerste <y<Kürbissuppe>>, die mir\nje gelungen ist!")
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
/*<221>*/ 					printf("\x0E\x01\x12\x04\x00dEine wirklich schwere Ladung dieses Mal!\nAber das geht in Ordnung, ich schaffe das!\n\n\nIch warte draußen auf dich. Gib mir einfach\nnur Bescheid, dann folge ich dir überall hin!")
/*<226>*/ 					make_actor_do_something(2, 23)
/*<343>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 231, 'param3': 36}
/*<231>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 342, 'param3': 16}
/*<342>*/ 					set_camera(5, 0)
/*<222>*/ 					printf("\x0E\x01\x09\x04\x00\x04Normalerweise biete ich <b<Narisha >>meine Suppe\nauf einer kleinen Insel innerhalb der\nSturmwolke dar.<pling>\n\n\x0E\x01\x09\x04\x00\x700Du kannst sie gar nicht übersehen! Über ihr\nschwebt ein <r<Regenbogen>>! Viel Glück!")
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
/*<203>*/ 					printf("\x0E\x01\x09\x04\x00\x01Was ist los? Du siehst so aus, als ob dich etwas\nbedrücken würde.\n[1]Nun...[2-]Wirklich?")
          					flw_204:
/*<204>*/ 					switch (choice(2)) {
          					  case 0:
/*<206>*/ 						printf("\x0E\x01\x09\x04\x0D\xD04<b<Narisha>>\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í?\n\n\n\n\x0E\x01\x09\x04\x00\x700Ich kenne Narisha recht gut...\n\n\n\n\x0E\x01\x09\x04\x08\x700Ich bringe ihm jedes Jahr eine große Portion\nmeiner <r<Kürbissuppe>>! Doch vor einiger Zeit\ntauchte plötzlich diese gigantische\nSturmwolke auf...\nDeshalb konnte ich Narisha dieses Jahr leider\nkeine Suppe bringen. Ich bin untröstlich...")
/*<227>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 23, 'next': 339, 'param3': 32}
/*<339>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 207, 'param3': 32}
/*<207>*/ 						printf("\x0E\x01\x09\x04\x0D\xD08Wirklich? Du wirst <b<Narisha >>etwas von meiner\nSuppe bringen?\n\n\n\x0E\x01\x09\x04\x00\x700\x0E\x01\x06\x02\xFDCD...\x0E\x01\x06\x02ÍEs ist mir zwar schleierhaft, wie du mit\ndeinem Vogel durch diese riesige Sturmwolke\nfliegen willst...\n\n\x0E\x01\x09\x04\x0B\x1000Aber da er schon lange keine Suppe mehr\nhatte, werde ich sie dieses Mal besonders\nlecker würzen!")
          						goto flw_471
          					  case 1:
/*<564>*/ 						switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          						  case 0:
          							flw_205:
/*<205>*/ 							printf("\x0E\x01\x09\x04\x00\x05Hm, dann habe ich mich getäuscht.\nNun, wenn alles in Ordnung ist, nimm Platz und\nentspann dich!")
          						  case 1:
/*<346>*/ 							switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          							  case 0:
/*<347>*/ 								printf("\x0E\x01\x09\x04\x00\x04Nun, wenn du sagst, dass alles in Ordnung ist,\nglaube ich dir.\n\n\nWie wäre es dann, wenn du weiter daran\narbeitest, deine Schulden bei mir zu tilgen?")
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
/*<420>*/ 			printf("Dieser <b<Gelan>> ist wirklich ein begabter\nHandwerker.\n\n\nIch bin mir ganz sicher, dass er das Zeug\ndazu hat, die Windmühle im Wolkenhort\nzu reparieren.")
          		  case 1:
/*<412>*/ 			switch (story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */]) {
          			  case 0:
/*<419>*/ 				printf("Ich habe <b<Amadin >>schon lange nicht mehr\nim <b<Basar >>gesehen...\n\n\nWirklich schade. Er war solch ein guter\nWahrsager...")
          			  case 1:
/*<413>*/ 				switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          				  case 0:
/*<418>*/ 					printf("<b<Kabocha >>hat alle Hände voll zu tun.\n\n\n\nKennst du vielleicht jemanden, der ihr beim\nLöcher graben unter die Arme greifen kann?")
          				  case 1:
/*<414>*/ 					switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
          					  case 0:
/*<417>*/ 						printf("Hast du schon Meister <b<Otus'>>\nPflanzensammlung gesehen?\n\n\nIch frage mich, ob er in letzter Zeit\nüber neue Pflanzenarten gestolpert ist.")
          					  case 1:
/*<415>*/ 						switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          						  case 0:
/*<400>*/ 							printf("Du weißt nicht zufällig, was <b<Dodo\n>>zurzeit treibt?\n\n\nWollte er nicht einen Ort schaffen, an dem\nman tagein, tagaus Sturzroulette spielen kann?")
          						  case 1:
/*<416>*/ 							printf("Ich wusste nicht, dass es Leute gibt, die sogar\nüber der Kürbisbar ihren Paraschal ausbreiten...\n\n\nÜbrigens... Es soll ein schillerndes Tier geben,\ndas nur dann auftaucht, wenn man von seinem\nWolkenvogel abspringt.\n\nAngeblich widerfährt jedem, der diesem Tier\nbegegnet, etwas Gutes...")
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
/*<479>*/ 		printf("\x0E\x01\x09\x04\x1A00\x01Willkommen in der <r<Kürbisbar>>!\nHier serviert man die leckerste Suppe\nweit und breit!\n\n\x0E\x01\x09\x04\x1A1A\x800An diesem Ort kannst du entspannen\nund dir eine Auszeit gönnen!")
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
/*<354>*/ 			printf("\x0E\x01\x09\x04\x0B\x704Erschreck mich doch nicht so! Oder soll ich\netwa auf der Stelle tot umfallen?\n\n\n\x0E\x01\x09\x04\n\x700Also, was willst du von mir?")
          			flw_56:
/*< 56>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*< 62>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*<610>*/ 					switch (scene_flags[70 /* 0x9 40 */]) {
          					  case 0:
/*<609>*/ 						switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          						  case 0:
/*<612>*/ 							printf("\x0E\x01\x09\x04\x00\x04Ein so großer Kronleuchter macht wirklich\nwas her... Aber ein bisschen zu hell ist er schon.")
          						  case 1:
          							flw_70:
/*< 70>*/ 							printf("\x0E\x01\x09\x04\x0B\xC04Du hast den Grabstein bewegt?\n\n\n\n\x0E\x01\x09\x04\n\xF00Und? Konntest du einen Blick auf die elende\nBestie werfen? Schaurig, nicht wahr?\n\n\nDu brauchst mir nichts vorzumachen! Ich weiß,\ndass du vor lauter Angst die Hosen voll hattest!")
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
/*<587>*/ 							printf("\x0E\x01\x09\x04\x0B\x704Möchtest du mal <r<nachts >>durch den Wolkenhort\nlaufen, <g<leg dich in ein Bett>> und warte, bis es\ndunkel ist.\n\nNachts ist der Wolkenhort nicht mehr das, was\ner tagsüber ist...\n\n\n\x0E\x01\x09\x04\n\xF00Ich würde dir ja fast raten, es lieber nicht selbst\nauszuprobieren... Mir gruselt es heute noch!")
          						  case 1:
/*< 67>*/ 							printf("\x0E\x01\x09\x04\x0B\x704Ich war auf dem Friedhof und habe <r<auf den\nGrabstein in der Nähe des Baumes >>geschlagen...\n\n\nUnd weißt du was? Plötzlich leuchtete er\ngleißend hell auf!\n\n\nAls ich dann <r<dem Grabstein einen Schubs\ngegeben>> habe, ging die Tür zum Schuppen auf!\n\n\nMir ist beinahe das Herz in die Hose gerutscht!\nDort stand ein Monster! Mitten im Schuppen!\n\n\n\x0E\x01\x09\x04\n\xF00Überzeug dich selbst, wenn du den Mut dazu\nhast! Aber komm dann bloß nicht angerannt\nund behaupte, ich hätte dich nicht gewarnt!")
          						}
          					  case 1:
/*<606>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 42, 'param3': 31}
/*< 42>*/ 						printf("\x0E\x01\x09\x04\x0B\x704Das Wolkenhort-Monster!\nDu glaubst mir doch, oder?\n\n\nEigentlich ist es gar kein Monster, sondern ein\nDämon! Und niemand überlebt die Begegnung\nmit ihm!\n\n\x0E\x01\x09\x04\x0B\x700Was? Du willst wissen, ob ich ihn schon mal\ngesehen habe?\n[1]Ja![2-]Ist mir egal...")
/*< 63>*/ 						switch (choice(2)) {
          						  case 0:
/*< 64>*/ 							printf("\x0E\x01\x09\x04\n\xF00I-i-ich hab ihn gesehen! Und ich kann auch nur\ndavon berichten, weil ich die Beine in die Hand\ngenommen habe und geflitzt bin!\n\n\x0E\x01\x09\x04\x0B\x700Jemand mit weniger Glück hätte mit Sicherheit\nins Gras gebissen!")
          							flw_66:
/*< 66>*/ 							printf("\x0E\x01\x09\x04\x0B\x700Wie dem auch sei, ich habe dieses Biest mit\neigenen Augen gesehen und lasse mir nichts\nanderes erzählen!\n\nIch lief also gerade in der Nähe des großen\nBaumes auf dem Friedhof, mitten\n<r<in der Nacht>>...\n\nDer Dämon <r<schlug auf den Grabstein beim\ngroßen Baum>>, welcher sofort hell aufleuchtete!\n\n\nDann <r<schob er den Grabstein >>zur Seite und\nplötzlich öffnete sich die Tür zum Schuppen!\n\n\nDer Dämon ging hinein und schloss mit einer\nfür eine Bestie sehr unüblichen Eleganz die\nTür hinter sich.\n\n\x0E\x01\x09\x04\x0B\x700Ich werde diesen Anblick mein Lebtag nicht\nvergessen! Halte dich <r<nachts vom\nFriedhof >>fern!")
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
/*< 59>*/ 					printf("\x0E\x01\x09\x04\x0B\x703Ich sage dir, im Wolkenhort lebt ein\nfürchterlicher Dämon!\n\n\nUm ein Haar hätte mich das Biest\nlebendig verspeist!\n\n\n\x0E\x01\x09\x04\x0B\x700Du magst vielleicht ein Ritter sein, aber\ndieser Dämon wird selbst dich zum\nFrühstück verputzen!")
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
/*<422>*/ 		printf("\x0E\x01\x09\x04\x00\x01Schon gehört?\n\n\n\n<b<Kabocha>> hat manchmal für die Gäste der\nKürbisbar Lieder zum Besten gegeben!\n\n\n\x0E\x01\x09\x04\x09\x700Ach, hätte sie doch nur musikalische\nBegleitung, dann könnte sie wieder auftreten!")
          	}
          }

          void entrypoint_117_31() {
/*< 37>*/ 	start()
/*<503>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<504>*/ 		printf("\x0E\x01\x09\x04\x00\x04Ich wusste es! Kabochas Gesang ist das\nSchönste, das ich jemals gehört habe!\n\n\nWenn ich dagegen an die schrille Stimme\nmeiner Frau denke...")
          	  case 1:
/*<401>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<402>*/ 			printf("\x0E\x01\x09\x04\x0B\x704Erschreck mich doch nicht so! Oder soll ich\netwa auf der Stelle tot umfallen?\n\n\n\x0E\x01\x09\x04\n\x700Also, was willst du von mir?")
          		  case 1:
/*<495>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<496>*/ 				printf("\x0E\x01\x09\x04\x00\x04Kabochas Gesangsstimme ist einfach\nein Traum!\n\n\n<pause0A>.<pause0A>.<pause0A>.aber der Kerl, der für sie gespielt\nhat, hat sein Instrument genommen\nund ist abgehauen.\n\nAch, könnte ich doch wieder ihre\nliebliche Stimme hören! Ich werde\nihren glockenhellen Klang wohl nie\nvergessen!")
          			  case 1:
/*< 40>*/ 				printf("\x0E\x01\x09\x04\x00\x04Du solltest dich nachts von den Straßen des\nWolkenhorts fernhalten! Wer weiß, auf welch\ngruselige Wesen du in tiefer Finsternis triffst!\n\nWenn du mit mir sprechen möchtest, komm\nbitte tagsüber vorbei!")
          			}
          		}
          	}
          }

          void entrypoint_117_14() {
/*<286>*/ 	start()
/*<174>*/ 	printf("\x0E\x01\x09\x04\x00\x05Aber... Na ja... Ich meine... Naaa gut. Ich kann\nes ja mal versuchen!")
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
/*<111>*/ 	printf("\x0E\x01\x09\x04\x00\x12\x0E\x01\x08\x02\x2CDWas glaubst du eigentlich,\nwas du da oben treibst?\n\n\n\x0E\x01\x08\x02ÍMach sofort, dass du runterkommst!")
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
/*<272>*/ 	printf("Hey!\n\n\n\nDu glaubst doch wohl nicht, dass ich dich nach\ndieser Aktion so einfach gehen lasse, oder?")
/*<278>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_17() {
/*<289>*/ 	start()
/*<171>*/ 	printf("\x0E\x01\x09\x04\x00\x06Hohoho... Findest du wirklich?\nDas war doch nicht der Rede wert!\n\n\nDas Talent, die Erde umzugraben, wurde uns\nMogma praktisch in die Wiege gelegt!")
          }

          void entrypoint_117_52() {
/*<273>*/ 	start()
/*<280>*/ 	set_camera(4, 0)
/*<281>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 279, 'param3': 13}
/*<279>*/ 	printf("Hey!\n\n\n\nDu glaubst doch wohl nicht, dass ich dich nach\ndieser Aktion so einfach gehen lasse, oder?")
/*<282>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_18() {
/*<290>*/ 	start()
/*<172>*/ 	printf("\x0E\x01\x09\x04\x00\nMeinst du, du schaffst das noch einmal?\nBitte! Bitte, bitte, bitte!")
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
/*<507>*/ 									printf("\x0E\x01\x09\x04\x13\x808Seitdem uns der Maulwurf hilft, läuft die\nArbeit auf dem Feld wie geschmiert!\n\n\nNun können wir noch viel mehr Kürbisse\nanbauen und ernten!")
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
/*<234>*/ 								printf("\x0E\x01\x09\x04\x0B\xE0FIch hoffe, du findest bald jemanden, der mir\nbeim Pflügen des Feldes zur Hand geht...")
/*<233>*/ 								switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          								  case 0:
          								  case 1:
/*<235>*/ 									{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 236, 'param3': 51}
/*<236>*/ 									printf("Deine <pling><r<Aurasuche>> ist zurzeit nicht auf die Person\neingestellt, die das Mädchen sucht.\n\n\nMöchtest du, dass ich die von diesem Mädchen\ngesuchte <r<Person, die das Kürbisfeld pflügen kann>>,\nals Ziel für die <pling><r<Aurasuche>> festlege?\n[1]Ja, bitte.[2-]Jetzt nicht.")
/*<237>*/ 									switch (choice(2)) {
          									  case 0:
/*<239>*/ 										story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = true;
/*<240>*/ 										story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<241>*/ 										story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<242>*/ 										story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<243>*/ 										story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<244>*/ 										story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<575>*/ 										open_dowsing_wheel(15)
/*<576>*/ 										printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter.\n\n\n\nDie Person, nach der das Mädchen sucht, wurde als\nZiel für die <pling><r<Aurasuche >>festgelegt.")
          										flw_245:
/*<245>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          									  case 1:
/*<238>*/ 										printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter. Ich werde keine Änderung an der\naktuellen Einstellung der <pling>Aurasuche vornehmen.")
          										goto flw_245
          									}
          								}
          							}
          						}
          					  case 1:
/*< 97>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 99, 'param3': 31}
/*< 99>*/ 						printf("\x0E\x01\x09\x04\x00\x01Hallo! Noch mal vielen Dank, dass du mir\nbeim Tragen der Kürbisse geholfen hast! Jetzt\nkönnen wir uns ganz dem Pflanzen neuer\nKürbisse widmen!\n\x0E\x01\x09\x04\x01\x100<pause1E>Leider ist das Pflügen des Feldes für mich \x0E\x01\x09\x04\x0B\xE00viel\nzu anstrengend.\n\n\n\x0E\x01\x09\x04\x07\x700Doch wo finde ich jemanden, der stark genug\nist, mir die Arbeit abzunehmen?\n[1]Ich kenne da\njemanden![2-]Hm, keine\nAhnung...")
/*<101>*/ 						switch (choice(2)) {
          						  case 0:
/*<103>*/ 							printf("\x0E\x01\x09\x04\x07\x809Wirklich? Dann sollte ich diese Person\nvielleicht um Hilfe bitten!\n\n\n\x0E\x01\x09\x04\x01\x700Falls du ihr begegnest, bitte sei so lieb und\nbringe sie zu mir. Tust du mir den Gefallen?")
/*<120>*/ 							{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 119, 'param3': 51}
/*<119>*/ 							printf("Die Wahrscheinlichkeit, dass du für deine Hilfe\n<y<Juwelen der Güte >>erhältst, liegt bei 90 %.\n\n\nIch werde also eine Person, die dem Mädchen\nbeim Pflügen helfen kann, als Ziel für die\n<pling><r<Aurasuche>> festlegen.\n\nFalls du dich allerdings momentan auf der Suche\nnach einem anderen Objekt befindest, müsste ich\ndieses Objekt aus der Aurasuche entfernen.\n\nSoll ich diese Änderung vornehmen und die\nAurasuche so einstellen, dass du nach einer\n<r<Person, die das Kürbisfeld bestellen kann>>,\nsuchen kannst?\n[1]Ja[2-]Nein")
/*<594>*/ 							switch (choice(2)) {
          							  case 0:
/*<595>*/ 								printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter. Die Aurasuche wurde\ndementsprechend eingestellt. Du kannst nun\nnach <r<jemandem, der das Feld bestellt>>, suchen.")
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
/*<573>*/ 								printf("\x0E\x01\x09\x04\x01\x70FIch hoffe, du kennst tatsächlich jemanden und\nsagst das nicht nur, damit ich mich besser fühle.\n\n\n\x0E\x01\x09\x04\x07\x700Nun, ich darf die Hoffnung nicht aufgeben.\nIch warte hier, bis dieser Jemand auftaucht!")
          							  case 1:
/*<596>*/ 								printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter. Wenn du die Einstellung der\nAurasuche ändern möchtest, sprich erneut mit\ndieser Person.")
          								goto flw_572
          							}
          						  case 1:
/*<102>*/ 							printf("\x0E\x01\x09\x04\x01\x1611Ist das dein Ernst? Du willst also einfach dabei\nzusehen, wie sich ein süßes Mädchen wie\nich abrackert?\n\nUnd ich dachte, du seist ein ehrenwerter Ritter!")
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
/*< 85>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ach, da ist ja der Ritter, der für unseren\nkaputten Kronleuchter Wiedergutmachung\nleisten möchte.\n\n\x0E\x01\x09\x04\x01\x700Hm, warte mal...<pause1E> Vater meinte, er hätte wieder\nArbeit für dich.\n\n\n\x0E\x01\x09\x04\x07\x700Am besten, du gehst gleich zu ihm und fragst\nihn selbst.")
          			  case 1:
/*<541>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ach, da ist ja der Ritter, der für unseren\nkaputten Kronleuchter Wiedergutmachung\nleisten möchte.\n\n\x0E\x01\x09\x04\x01\x700Wusstest du eigentlich, dass die Kürbisernte\nkurz bevorsteht?<pause1E>\n\n\n\x0E\x01\x09\x04\x07\x700Ich muss zugeben, dass es mir recht schwerfällt,\ndiese wuchtigen Dinger zu tragen...")
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
/*<  9>*/ 		printf("\x0E\x01\x09\x04\x13\x809Ich wusste, du würdest es schaffen! Du hast\ntatsächlich alle Kürbisse ins Lager gebracht!\n\n\n\x0E\x01\x09\x04\x01\x700Das bedeutet dann wohl, dass es hier nichts\nmehr für dich zu tun gibt! \x0E\x01\x09\x04\x19\x800Hab <pause0F>vielen,\n<pause0F>vielen <pause0F>Dank<pause0F>!")
          	  case 1:
/*< 33>*/ 		printf("\x0E\x01\x09\x04\x01\x1611Oh nein! Du hast sie fallen lassen! Du bist\naber auch ein Schussel...\n\n\n\x0E\x01\x09\x04\x07\x700Nun, du kannst gerne noch einen Versuch\nwagen, falls du dich der Aufgabe\ngewachsen fühlst!")
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
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x01\x1611Oh nein! Du hast sie fallen lassen! Du bist\naber auch ein Schussel...\n\n\n\x0E\x01\x09\x04\x07\x700Nun, du kannst gerne noch einen Versuch\nwagen, falls du dich der Aufgabe\ngewachsen fühlst!")
          }

          void entrypoint_117_20() {
/*< 11>*/ 	start()
/*<104>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<409>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<106>*/ 			printf("\x0E\x01\x09\x04\x10\x1604Sieh nur, was du angerichtet hast! Ich hätte\ndie Rubine nicht erwähnen sollen! Dabei wollte\nich dich warnen!\n\n\x0E\x01\x09\x04\x1A\x1600Gib bloß nicht mir die Schuld, wenn Vater dir\nnun eine Standpauke hält!")
          		  case 1:
/*<537>*/ 			switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
          			  case 0:
/*<410>*/ 				printf("\x0E\x01\x09\x04\x00\x01Hallo du! Mein Vater hat mir erzählt, dass\ndu deine Schulden für unseren kaputten\nKronleuchter abarbeiten möchtest.\n\n\x0E\x01\x09\x04\x1A\x800Das wird sicher nicht leicht, aber ich glaube\nan dich!")
          				flw_491:
/*<491>*/ 				switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          				  case 0:
          				  case 1:
/*<490>*/ 					switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          					  case 0:
/*<492>*/ 						printf("\x0E\x01\x09\x04\x1A\x1000Was? Du willst etwas über Narisha wissen?\n\n\n\nJetzt, da du ihn erwähnst...\nIch glaube, Vater hat ihm hin und wieder\netwas Kürbissuppe gebracht.\n\nVielleicht kann er dir ja mehr über\nNarisha erzählen!")
          					  case 1:
          					}
          				}
          			  case 1:
/*<538>*/ 				printf("\x0E\x01\x09\x04\x10\x1604Sieh nur, was du angerichtet hast! Ich hätte\ndie Rubine nicht erwähnen sollen! Dabei wollte\nich dich warnen!\n\n\x0E\x01\x09\x04\x1A\x1600Gib bloß nicht mir die Schuld, wenn Vater dir\nnun eine Standpauke hält!")
          				goto flw_491
          			}
          		}
          	  case 1:
/*<489>*/ 		switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          		  case 0:
          			flw_105:
/*<105>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hallo du! Du siehst wie ein Ritter aus dem\nWolkenhort aus! Hab ich recht? \x0E\x01\x09\x04\x1A\x800Nimm doch\nPlatz und entspann dich ein wenig!\n\n\x0E\x01\x09\x04\x0D\x700Oh! Dir sind die Rubine an unserem\nKronleuchter aufgefallen? \x0E\x01\x09\x04\x10\x00Versuch bloß nicht,\ndie Rubine von dort oben herunterzubekommen.\n\nManche Leute behaupten, man könne den\nKronleuchter zum Schwingen bringen, indem\nman etwas anrempelt, und die Rubine\nwürden fallen...\n\x0E\x01\x09\x04\x1A\x1600Aber wie dem auch sei... Denk \x0E\x01\x06\x02\xFCCDnicht mal \x0E\x01\x06\x02Ídran!")
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
/*<161>*/ 	printf("Ich habe diesen alten Mogma mitgebracht!")
          }

          void entrypoint_117_21() {
/*<247>*/ 	start()
/*<248>*/ 	switch (context_related4(1)) {
          	  case 0:
/*<249>*/ 		printf("\x0E\x01\x09\x04\x17\x1411Hm... Ich dachte eigentlich, dass du einem\nsolch schönen Instrument lieblichere Töne\nentlocken könntest...\n\n\x0E\x01\x09\x04\x01\x1600Meine Gäste sahen jedenfalls nicht so aus, als\nob sie sich über die diese... Musikuntermalung\ngefreut hätten.")
          		flw_252:
/*<252>*/ 		scene_flags[21 'The Sky'][21 /* 0x3 20 */] = true;
/*<384>*/ 		story_flags[675 /* us: 805A9B20 0x10, jp: 805ACDA0 0x10 */] = false;
          	  case 1:
/*<599>*/ 		printf("\x0E\x01\x09\x04\x17\x1411Das war ja ganz brauchbar.\n\n\n\n\x0E\x01\x09\x04\x01\x1600Aber mal ehrlich, ein bisschen mehr hatte ich\nschon erwartet...")
          		goto flw_252
          	  case 2:
/*<250>*/ 		printf("\x0E\x01\x09\x04\x16\x1309Hui! Du bist ein besserer Musiker, als ich\ngedacht habe! Da habe ich dich wohl\ngehörig unterschätzt!\n\n\x0E\x01\x09\x04\x07\x700Es wäre schön, wenn du bald wieder für\nmeine Gäste spielen würdest!")
          		goto flw_252
          	  case 3:
/*<251>*/ 		printf("\x0E\x01\x09\x04\x15\xD0ADu warst einfach unglaublich! Dein Lyraspiel\nund meine Stimme haben perfekt harmoniert!\n\n\n\x0E\x01\x09\x04\x07\x800Du hast eine neue Bewunderin! Ich kann es\nkaum erwarten, dich wieder spielen zu hören!")
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
/*<162>*/ 	printf("Richte der verehrten Phai Grüße von mir aus!")
          }

          void entrypoint_117_22() {
/*<253>*/ 	start()
/*<329>*/ 	switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          	  case 0:
/*<330>*/ 		switch (context_related4(0)) {
          		  case 0:
/*<331>*/ 			printf("\x0E\x01\x09\x04\n\x90DWas war denn DAS? Dein Lyraspiel hat\nKabochas Stimme total grausig klingen lassen!\n\n\n\x0E\x01\x09\x04\x0D\x00Hör mal, Freundchen! Für solch eine Leistung\nwerd ich dir auf keinen Fall etwas zahlen!")
          		  case 1:
/*<600>*/ 			printf("\x0E\x01\x09\x04\x00\x10Hmmm... Ganz ehrlich, sogar das Gejaule der\nLemurin ist schöner als dein Lyraspiel. Für\ndiesen Auftritt kann ich dir kein Geld geben.")
          		  case 2:
/*<333>*/ 			printf("\x0E\x01\x09\x04\x00\x0EDas war gar nicht so schlecht. Mit ein\nbisschen mehr Übung könntest du Kabocha\nbestimmt beeindrucken!\n\n\x0E\x01\x09\x04\x0E\x700Für diese gelungene Darbietung zahle ich dir\n<r<20 Rubine>>!")
/*<334>*/ 			rupees += 20;
          		  case 3:
/*<332>*/ 			printf("\x0E\x01\x09\x04\x0B\x100CEine Spitzenleistung, Link!\nDas war einfach fantastisch!\n\n\n\x0E\x01\x09\x04\x0C\x700Für diesen Auftritt zahle ich dir <r<50 Rubine>>!")
/*<335>*/ 			rupees += 50;
          		}
          	  case 1:
/*<255>*/ 		switch (context_related4(0)) {
          		  case 0:
/*<254>*/ 			printf("\x0E\x01\x09\x04\x0F\xA0DWas soll DAS denn?\nNennst du DAS etwa Musik?\n\n\n\x0E\x01\x09\x04\n\x900Glaub nur nicht, dass damit deine Schulden\nbeglichen sind! Reiß dich zusammen und spiel\nnoch mal!")
          		  case 1:
/*<601>*/ 			printf("\x0E\x01\x09\x04\x00\x10Na ja, das war zwar nicht der beste Auftritt,\nden ich je gesehen habe, aber immerhin war\nes ja dein erstes Mal. Also gut, die Aufgabe\nist bestanden!")
          			flw_258:
/*<258>*/ 			printf("\x0E\x01\x09\x04\x0B\x700Nun, das bedeutet dann wohl, dass du nicht\nlänger für mich arbeiten musst. Gut gemacht!\n\n\n\x0E\x01\x09\x04\x0E\x1100Und ich habe beschlossen, dass ich mir schon\nbald einen neuen Kronleuchter zulegen werde!\n\n\n\x0E\x01\x09\x04\x0D\x700Da ich mit deiner Leistung überaus zufrieden\nwar, gibt es auch noch eine Belohnung von mir.\nLos, nimm schon!")
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
/*<466>*/ 		printf("\x0E\x01\x09\x04\x03\x80COh nein! Schau nur, was du für ein Chaos\nveranstaltet hast!\n\n\n\x0E\x01\x09\x04\x00\x100Schätze, dafür gibt es einen Satz heiße Ohren...")
          	  case 1:
/*<579>*/ 		switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          		  case 0:
/*<584>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hey, Link!\nWenn du viele Insekten hast und nichts\ndamit anzufangen weißt, verkauf sie\nmir doch einfach!\n\x0E\x01\x09\x04\x12\x00Aber hier ist nicht der geeignete Ort\ndafür. Komm doch nachts in mein\nZimmer in der Schule...")
          		  case 1:
/*<578>*/ 			switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          			  case 0:
/*<581>*/ 				switch (zone_temp_flags[5 /* 0x1 20 */]) {
          				  case 0:
/*<583>*/ 					printf("\x0E\x01\x09\x04\x12\x01Wenn du es schaffst, durch die Felsen mit\nden Löchern zu fliegen, wird die Reise\nim Wolkenmeer viel angenehmer!\n\n\x0E\x01\x09\x04\x03\x104Stößt du jedoch mit einem der Felsen\nzusammen, könnte sich aber auch alles\nins Gegenteil verkehren, hehehe!")
          				  case 1:
/*<580>*/ 					printf("\x0E\x01\x09\x04\x00\x01Hallo, Link!\nIch habe etwas Neues für dich!\n\n\nHast du im Wolkenmeer schon einmal diese\n<r<Felsen>> gesehen, <r<in deren Mitte ein Loch ist>>?\n\n\nWenn du dort durchfliegst, wird dein\nWolkenvogel auf mysteriöse Weise <r<eine\nZeit lang >>schneller!\n\n\x0E\x01\x09\x04\x12\x00Geübte Vogelreiter nutzen diese Felsen, um sich\nnoch flinker im Wolkenmeer fortzubewegen!")
/*<582>*/ 					zone_temp_flags[5 /* 0x1 20 */] = true;
          				}
          			  case 1:
/*<444>*/ 				printf("\x0E\x01\x09\x04\x00\x01Hey, Link!\n\n\n\n\x0E\x01\x09\x04\x12\x00Hätte nicht gedacht, dich hier zu treffen.\nDu fragst dich sicher, was ich hier treibe...\n[1]Stimmt![2]Nicht wirklich...")
/*<445>*/ 				switch (choice(2)) {
          				  case 0:
/*<446>*/ 					printf("\x0E\x01\x09\x04\x03\x104Bestimmt habe ich es schon einmal erwähnt...\nIch liiiebe Insekten!\n\n\nUnd genau deshalb bin ich hier:\nUm Insekten für meine Sammlung zu fangen!\n\n\n\x0E\x01\x09\x04\x04\x100Wenn du bereits ein Schmetterlingsnetz hast,\nkannst du gleich loslegen.\n\n\nUnd falls du noch keines besitzt, kannst du dir\neines in Terris Laden kaufen.\n\n\n\x0E\x01\x09\x04\x12\x100Wahrscheinlich dreht er gerade wieder seine\nRunden über dem Wolkenhort.")
          				  case 1:
/*<447>*/ 					printf("\x0E\x01\x09\x04\x04\x805Wie, nicht wirklich?\n\n\n\n\x0E\x01\x09\x04\x04\x100Ich dachte mir schon, dass du mit Insekten\nnichts anfangen kannst!")
          				}
          			}
          		}
          	}
          }

