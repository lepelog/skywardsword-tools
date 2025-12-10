          void entrypoint_117_40() {
/*< 38>*/ 	start()
/*<348>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<350>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<351>*/ 			printf(/* textboxtype: 1, unk: 0, line: 109 */ "<0x10009:0x00111153>Ooooooh! Jetzt reicht's! Jetzt hast du\nden Bogen eindeutig überspannt!")
          		  case 1:
          			flw_493:
/*<493>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<614>*/ 				switch (scene_flags[69 /* 0x9 20 */]) {
          				  case 0:
/*<613>*/ 					switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          					  case 0:
/*<616>*/ 						printf(/* textboxtype: 1, unk: 0, line: 113 */ "<0x10009:0x00000001>Deine Arbeit hat diesen Kronleuchter\nerst möglich gemacht...\n\n\n<0x10009:0x00000300>Sag mal, willst du auf diese Weise\netwa Kabocha beeindrucken?")
          					  case 1:
          						flw_617:
/*<617>*/ 						switch (scene_flags[5 /* 0x1 20 */]) {
          						  case 0:
/*<494>*/ 							printf(/* textboxtype: 1, unk: 0, line: 110 */ "<0x10009:0x00000001>Dieses ganze Geschwätz über Monster\nund Dämonen war also nichts weiter als\nheiße Luft!\n\n<0x10009:0x00000300>Der Kerl wollte sich tatsächlich nur\ninteressant machen!")
          						  case 1:
          							flw_41:
/*< 41>*/ 							printf(/* textboxtype: 1, unk: 0, line: 107 */ "<0x10009:0x00000001>He, hör mal kurz zu!\n\n\n\nDer alte Knabe dort drüben behauptet,\neinen Dämon gesehen zu haben!\n\n\n<0x10009:0x000a0300>Na, mit solchen Prahlereien wird er\nKabocha jedenfalls nicht für sich\ngewinnen können!")
          						}
          					}
          				  case 1:
/*<615>*/ 					scene_flags[21 'The Sky'][69 /* 0x9 20 */] = true;
          					goto flw_617
          				}
          			  case 1:
/*< 71>*/ 				switch (scene_flags[5 /* 0x1 20 */]) {
          				  case 0:
/*< 72>*/ 					printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x00111104>Du glaubst doch nicht an solch einen\nübernatürlichen Kram wie Dämonen,\noder etwa doch?\n\n<0x10009:0x000a0300>Moment mal! Du hast doch nicht etwa\nauch ein Auge auf Kabocha geworfen?")
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
/*<176>*/ 	printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00070803>Ich bin ja so froh, dass du mir diesen\nnetten Maulwurf vorgestellt hast!\nEr ist ein echtes Goldstück!\n\nIch werde ihn in Zukunft ganz\nsicher wieder um Hilfe bitten.\n<0x10009:0x00130800>Hab <pause 5>vielen, <pause 5>vielen <pause 5>Dank<pause 5>!")
/*<166>*/ 	story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */] = true;
/*<468>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<505>*/ 	temp_flags[17 /* 0x3 02 */] = true;
/*<386>*/ 	give_gratitude_crystals();
          }

          void entrypoint_117_41() {
/*<107>*/ 	start()
/*<108>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00000008>Zurücktreten bitte!\nIch zeige dir, wie das gemacht wird!")
          }

          void entrypoint_117_24() {
/*<307>*/ 	start()
/*<327>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*<328>*/ 		printf(/* textboxtype: 1, unk: 1, line: 179 */ "<0x10009:0x00000004>Also, was möchtest du tun?\n[1-]Lyra spielen![2-]Suppe kaufen![3]Ach, nichts...")
          		flw_312:
/*<312>*/ 		switch (choice(3)) {
          		  case 0:
/*<542>*/ 			switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          			  case 0:
/*<324>*/ 				printf(/* textboxtype: 1, unk: 0, line: 177 */ "<0x10009:0x000e1000>Prima! Dann kannst du zusammen mit\nKabocha bei meinen Gästen für etwas\nStimmung sorgen!")
/*<325>*/ 				entrypoint_117_32();
          			  case 1:
/*<543>*/ 				printf(/* textboxtype: 1, unk: 0, line: 178 */ "<0x10009:0x000c0700>Tut mir leid, aber Kabocha tritt nur\nabends auf. Schau wieder vorbei,\nwenn es dunkel geworden ist.")
          			}
          		  case 1:
/*<315>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 316, 'param3': 12}
/*<316>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00081004>Na, das ist mal eine Überraschung!\nWer hätte gedacht, dass ein Knirps\nwie du auf meine Suppe steht?\n\nMöchtest du eine Portion mitnehmen?\nNur <color red<10 Rubine>coloroff>, die Flasche.\n[1-]Gerne![2]Nein.")
/*<317>*/ 			switch (choice(2)) {
          			  case 0:
/*<318>*/ 				switch (has_rupees(10)) {
          				  case 0:
/*<320>*/ 					switch (adventure_pouch_has(1 0x0001)) {
          					  case 0:
/*<535>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 322, 'param3': 42}
/*<322>*/ 						give_item(195 0xC3);
/*<550>*/ 						rupees += -10;
/*<552>*/ 						printf(/* textboxtype: 1, unk: 0, line: 83 */ "Die Suppe schmeckt am besten, wenn\ndu sie heiß genießt! Nach 5 Minuten\nkühlt sie jedoch ab.")
          					  case 1:
/*<321>*/ 						printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000700>Du besitzt keine leere <color yellow<Flasche>coloroff>?\n\n\n\nWenn du Suppe möchtest, brauchst du\nauch eine leere Flasche! Ohne Flasche\nkeine Suppe! Bring mir eine, dann \nbekommst du auch eine Portion!")
          					}
          				  case 1:
/*<319>*/ 					printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x000c0700>Du scheinst knapp bei Kasse zu sein.\nKomm später wieder.")
          				}
          			  case 1:
/*<323>*/ 				printf(/* textboxtype: 1, unk: 0, line: 176 */ "<0x10009:0x000d0a00>Komm schon! Entscheide dich!")
          			}
          		  case 2:
/*<313>*/ 			printf(/* textboxtype: 1, unk: 0, line: 175 */ "<0x10009:0x00081000>Wie du willst. Dann nimm dir einen\nStuhl und ruh dich aus.\n\n\n<0x10009:0x00000700>Oh. Und vergiss nicht, Kabocha kurz\nHallo zu sagen!")
          		}
          	  case 1:
/*<309>*/ 		printf(/* textboxtype: 1, unk: 0, line: 172 */ "<0x10009:0x00000001>Hallo <heroname>!\nWas hältst du von meinem neuen\nKronleuchter?\n\n<0x10009:0x000b1100>Ich muss zugeben, dass ich mich für ihn\nziemlich in Unkosten gestürzt habe...")
/*<326>*/ 		scene_flags[21 'The Sky'][22 /* 0x3 40 */] = true;
/*<310>*/ 		printf(/* textboxtype: 1, unk: 0, line: 173 */ "<0x10009:0x000d1006>...\nDu findest also, dass ich zu viel für ihn\nausgegeben habe?\n\n<0x10009:0x00080009>Sei kein Miesmacher! Und außerdem\nhätte ich mir ohne deine Hilfe niemals\neinen solchen Leuchter leisten können!\n\n<0x10009:0x000c0900>He! Wag es ja nicht, den Kronleuchter\nerneut kaputt zu machen!")
/*<311>*/ 		printf(/* textboxtype: 1, unk: 1, line: 174 */ "<0x10009:0x00080700>Wie dem auch sei, was kann ich für dich\ntun? Möchtest du vielleicht erneut für\nmich arbeiten?\n\n<0x10009:0x000e0700>Dieses Mal bezahle ich dich sogar in\nbar dafür! Du könntest wieder Musik\nmachen! Oder möchtest du Suppe?\n[1-]Musik![2-]Suppe, bitte![3]Keine Zeit...")
          		goto flw_312
          	}
          }

          void entrypoint_117_42() {
/*<121>*/ 	start()
/*<126>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 142, 'param3': 32}
/*<142>*/ 	printf(/* textboxtype: 1, unk: 0, line: 131 */ "<0x10009:0x00070701>Hast du schon gehört?\nCirp möchte mir bei der Ernte helfen!")
/*<127>*/ 	{'type': 'type3', 'subType': 1, 'param1': 27, 'param2': 0, 'next': 122, 'param3': 16}
/*<122>*/ 	printf(/* textboxtype: 1, unk: 0, line: 133 */ "<0x10009:0x1b090702>Hey, das versteht sich doch von selbst!\nIch könnte das Feld viel schneller als\ndieser Maulwurftyp pflügen!")
/*<128>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 27, 'next': 177, 'param3': 16}
/*<177>*/ 	{'type': 'type3', 'subType': 4, 'param1': 22, 'param2': 2048, 'next': 123, 'param3': 13}
/*<123>*/ 	printf(/* textboxtype: 1, unk: 0, line: 134 */ "<0x10009:0x00000008>Wiiirklich? Das wäre toll!")
/*<178>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 129, 'param3': 13}
/*<129>*/ 	{'type': 'type3', 'subType': 1, 'param1': 27, 'param2': 0, 'next': 124, 'param3': 16}
/*<124>*/ 	printf(/* textboxtype: 1, unk: 0, line: 135 */ "<0x10009:0x1b070705>Hahaha! Wenn du mich rufst, dann bin\nich eben sofort zur Stelle.\n\n\nGanz gleich, ob ein Kürbisfeld geerntet\noder ein brennendes Haus gelöscht\nwerden muss!")
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 27, 'next': 179, 'param3': 16}
/*<179>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 2048, 'next': 125, 'param3': 13}
/*<125>*/ 	printf(/* textboxtype: 1, unk: 0, line: 136 */ "<0x10009:0x1a000009>Oooh! Wenn das so ist, dann freue ich\nmich natürlich über dein Angebot!")
/*<180>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 143, 'param3': 13}
/*<143>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 144, 'param3': 16}
/*<144>*/ 	printf(/* textboxtype: 1, unk: 0, line: 137 */ "Ihr seid alle so lieb zu mir!<0x10009:0x00070703>")
          }

          void entrypoint_117_08() {
/*<283>*/ 	start()
/*<165>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00000009>Wunderbar!\nDu hast jemanden gefunden!")
/*<167>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00010705>Aber...\nDas ist ja gar kein Mensch!\n\n\n<0x10009:0x00070700>Ach, jetzt verstehe ich! Dieser\nMaulwurf wird also den Acker\nfür mich pflügen?")
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
/*<201>*/ 				printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00070703>Du versuchst es erneut? Ich wusste,\ndass ich auf dich zählen kann.\nViel Erfolg!\n[1-]Los geht's![2]Lieber nicht.")
/*<202>*/ 				switch (choice(2)) {
          				  case 0:
/*<515>*/ 					printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00130809>Fantastisch! Ich wusste, dass du\nmich nicht enttäuschen würdest!<0x10005:0x001e0000>")
          					flw_87:
/*< 87>*/ 					printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00070700>Wichtig ist, dass du nicht zu hektisch\nwirst! Versuche, möglichst <color red<langsam\nzu laufen>coloroff>.\n\nSollten die Kürbisse nach rechts zu\nfallen drohen, gehe nach rechts.\nDrohen sie nach links zu fallen,\nbewege dich nach links.\nDie Balance zu halten ist hierbei\ndas A und O!\n\n\n<0x10009:0x00010700>Gerate nicht in Panik und fang bloß\nnicht an zu rennen, sonst fallen die\nKürbisse auf den Boden! <pause 20>Ich drücke\ndir die Daumen!")
/*<  2>*/ 					make_actor_do_something(0, 0)
          				  case 1:
          					flw_397:
/*<397>*/ 					switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          					  case 0:
/*<513>*/ 						switch (random(2)) {
          						  case 0:
/*<395>*/ 							printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00011606>Wirklich?\nIch dachte, es würde dich freuen,\nuns bei der Ernte zu helfen!")
          						  case 1:
/*<514>*/ 							printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00011611>Im Ernst?\nBist du eigentlich immer so langweilig?")
          						}
          					  case 1:
/*<  5>*/ 						printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00011606>Wirklich?\nDas werde ich Vater erzählen!")
          					}
          				}
          			  case 1:
/*<499>*/ 				switch (temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<500>*/ 					printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00070808>Ich hoffe doch, ich kann wieder auf\ndeine Hilfe zählen! <0x10006:0xfbcd>Mein hübscher<0x10006:0x00cd>\nRitter!")
          				  case 1:
/*<508>*/ 					switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          					  case 0:
/*<509>*/ 						printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00010700>Du kommst mir gerade recht!\nWie sieht's aus, möchtest du dir\nein paar Rubine verdienen?\n\n<0x10009:0x00070700>Ich benötige wieder einmal deine\nMuskelkraft. Kürbisse müssen ins\nLager getragen werden.\n[1-]Los geht's![2]Nein, danke.")
          						flw_3:
/*<  3>*/ 						switch (choice(2)) {
          						  case 0:
/*<  4>*/ 							printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00070703>Dann lass uns Nägel mit Köpfen\nmachen! Ich zeige dir, wohin die\nKürbisse gebracht werden müssen!")
/*< 88>*/ 							set_camera(1, 0)
/*< 86>*/ 							printf(/* textboxtype: 1, unk: 0, line: 8 */ "Gib dein Bestes und trage die Kürbisse\nin das Lager!")
/*< 89>*/ 							set_camera(-1, 0)
          							goto flw_87
          						  case 1:
          							goto flw_397
          						}
          					  case 1:
/*<398>*/ 						switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          						  case 0:
/*<469>*/ 							printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x0000000f>Nun, da die Ernte vorbei ist, wird \nes Zeit, neue Kürbisse zu pflanzen.\nDoch zuerst muss das Feld neu gepflügt\nwerden!\nHm... Wo finde ich jemanden, der diese\nPlackerei freiwillig auf sich nimmt?")
/*<396>*/ 							printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00010700>Oh, noch etwas. Kannst du mir einen\nGefallen tun? Ich habe kaum noch\nKraft in den Armen...\n\n<0x10009:0x00070700>Würdest du für mich die Kürbisse in\ndas Lager tragen? Ich belohne dich\nauch dafür!\n[1-]Los geht's![2]Lieber nicht.")
          							goto flw_3
          						  case 1:
/*< 92>*/ 							printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Willst du uns nun doch bei der\nKürbisernte helfen?\n[1-]Na klar![2]Nein, doch\nnicht.")
          							goto flw_3
          						}
          					}
          				}
          			}
          		  case 1:
/*<605>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 91, 'param3': 31}
/*< 91>*/ 			scene_flags[21 'The Sky'][6 /* 0x1 40 */] = true;
/*<  1>*/ 			printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00010701>Dann ist es beschlossene Sache!\nDu <color red<hilfst uns also bei der Kürbisernte>coloroff>.\n\n\n<0x10009:0x00070700>Du glaubst gar nicht, wie erleichtert\nich bin. Hast du eine Ahnung, wie\nschwer diese Kürbisse sind?\n\n<0x10009:0x00011600>Ach. Du glaubst also, die Arbeit hier\nwird das reinste Zuckerschlecken?\n\n\n<0x10009:0x00010700>Hihihi... Dann lass uns das Ganze doch\netwas spannender gestalten. Versuch,\n<color red<5 Kürbisse gleichzeitig zu tragen>coloroff>!\n\n<0x10009:0x00071600>Aber Vorsicht! Lass dir Zeit, sonst\nfallen sie dir auf den Boden! Also,\nbist du bereit?\n[1-]Los geht's![2]Lass mal...")
          			goto flw_3
          		}
          	  case 1:
/*<389>*/ 		switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          		  case 0:
/*<391>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 390, 'param3': 12}
/*<390>*/ 			printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00130809>Ich wusste, du würdest es schaffen!\nDu hast tatsächlich alle Kürbisse ins\nLager gebracht!\n\nAuf dich kann man sich wirklich\nverlassen! <0x10009:0x00070800>Hier ist dein Lohn.\nStolze 50 Rubine!")
/*<392>*/ 			rupees += 50;
/*<497>*/ 			printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00070800>Hab <pause 15>vielen, <pause 15>vielen <pause 15>Dank!\nKomm wieder, wenn du möchtest!")
/*<393>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 498, 'param3': 12}
          			flw_498:
/*<498>*/ 			temp_flags[16 /* 0x3 01 */] = true;
/*<512>*/ 			zone_temp_flags[2 /* 0x1 04 */] = false;
          		  case 1:
/*< 35>*/ 			printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00130809>Ich wusste, du würdest es schaffen!\nDu hast tatsächlich alle Kürbisse ins\nLager gebracht!\n\n<0x10009:0x00010700>Das bedeutet dann wohl, dass es hier\nnichts mehr für dich zu tun gibt!\n<0x10009:0x00190800>Hab <pause 15>vielen, <pause 15>vielen <pause 15>Dank<pause 15>!")
/*< 83>*/ 			story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */] = true;
          			goto flw_498
          		}
          	  case 2:
/*< 36>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00011611>Oh nein! Du hast sie fallen lassen!\nDu bist aber auch ein Schussel...\n\n\n<0x10009:0x00070700>Nun, du kannst gerne noch einen\nVersuch wagen, falls du dich der\nAufgabe gewachsen fühlst!")
/*<199>*/ 		zone_temp_flags[2 /* 0x1 04 */] = true;
          	}
          }

          void entrypoint_117_43() {
/*<131>*/ 	start()
/*<132>*/ 	printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x00000006>Hohoho...\nEs geht doch nichts über einen gut\nausgefüllten Arbeitstag!\n\n<0x10009:0x000c0d00>Und die junge Dame strahlen zu sehen\nist genug Lohn für all die Plackerei!\n\n\n<0x10009:0x00010900>Momentchen mal<pause 10>.<pause 10>.<pause 10>.<pause 10>\nIst dir aufgefallen, wie mich die\nKleine ansieht?\n\n<0x10009:0x000c0d00>Ich denke, sie hat sich in mich verliebt!\n<0x10009:0x00090d0b>Ha! Ab sofort werde ich doppelt so hart\narbeiten!")
          }

          void entrypoint_117_09() {
/*<284>*/ 	start()
/*<168>*/ 	printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x0000000a>Du willst mir doch nicht erzählen,\ndass ich hier den ganzen Tag lang\ndas Feld bestellen soll?\n\nWar dies wirklich der einzige Grund,\nweshalb du mich hier hoch in die Luft\ngebracht hast?")
          }

          void entrypoint_117_26() {
/*<431>*/ 	start()
          	flw_73:
/*< 73>*/ 	switch (choice(2)) {
          	  case 0:
/*<314>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 74, 'param3': 12}
/*< 74>*/ 		printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00081004>Na, das ist mal eine Überraschung!\nWer hätte gedacht, dass ein Knirps\nwie du auf meine Suppe steht?\n\nMöchtest du eine Portion mitnehmen?\nNur <color red<10 Rubine>coloroff>, die Flasche.\n[1-]Gerne![2]Nein.")
/*<112>*/ 		switch (choice(2)) {
          		  case 0:
/*<113>*/ 			switch (has_rupees(10)) {
          			  case 0:
/*<115>*/ 				switch (adventure_pouch_has(1 0x0001)) {
          				  case 0:
/*<531>*/ 					printf(/* textboxtype: 1, unk: 0, line: 82 */ "Na endlich! Hier, bitte schön!")
/*<530>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 117, 'param3': 42}
/*<117>*/ 					give_item(195 0xC3);
/*<549>*/ 					rupees += -10;
/*<551>*/ 					printf(/* textboxtype: 1, unk: 0, line: 83 */ "Die Suppe schmeckt am besten, wenn\ndu sie heiß genießt! Nach 5 Minuten\nkühlt sie jedoch ab.")
          				  case 1:
/*<116>*/ 					printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000700>Du besitzt keine leere <color yellow<Flasche>coloroff>?\n\n\n\nWenn du Suppe möchtest, brauchst du\nauch eine leere Flasche! Ohne Flasche\nkeine Suppe! Bring mir eine, dann \nbekommst du auch eine Portion!")
          				}
          			  case 1:
/*<114>*/ 				printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x000c0700>Du scheinst knapp bei Kasse zu sein.\nKomm später wieder.")
          			}
          		  case 1:
          			flw_434:
/*<434>*/ 			switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          			  case 0:
          				flw_437:
/*<437>*/ 				printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x00100705>Wohl wahr, wohl wahr. Dieser Ort\nist nicht nur dazu da, um Suppe zu\nschlürfen! Hier trifft man auch eine\nMenge illustrer Persönlichkeiten.\nAlso gönn dir ruhig eine Auszeit. Aber\neins sag ich dir: Wehe, du stellst hier\netwas an oder machst etwas kaputt!\n\n<0x10009:0x00080700>Ganz recht, ich spreche von meinem\nhandgefertigten und sündhaft teuren\nKronleuchter!\n\n<0x10009:0x00000900>Lass bloß die Finger davon!\nHast du mich verstanden?")
          			  case 1:
/*<435>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<439>*/ 					printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00100905>Ich verstehe schon. Dann musst\ndu eben deine Schulden bei mir\nabarbeiten.\n\n<0x10009:0x00000700>Komm später wieder und frag nach,\nob ich Arbeit für dich habe!")
          				  case 1:
/*<436>*/ 					switch (scene_flags[25 /* 0x2 02 */]) {
          					  case 0:
/*<438>*/ 						printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00100905>Ich verstehe schon. Dann musst\ndu eben deine Schulden bei mir\nabarbeiten.\n\n<0x10009:0x00000700>Komm später wieder und frag nach,\nob ich Arbeit für dich habe!")
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
/*<141>*/ 				printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x0001070f>Ich hoffe, du kennst tatsächlich\njemanden und sagst das nicht nur,\ndamit ich mich besser fühle.\n\n<0x10009:0x00070700>Nun, ich darf die Hoffnung nicht\naufgeben. Ich warte hier, bis dieser\nJemand auftaucht!")
          			  case 1:
/*<139>*/ 				printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x0000000f>Nun, da die Ernte vorbei ist, wird \nes Zeit, neue Kürbisse zu pflanzen.\nDoch zuerst muss das Feld neu gepflügt\nwerden!\nHm... Wo finde ich jemanden, der diese\nPlackerei freiwillig auf sich nimmt?")
          			}
          		  case 1:
/*<135>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00010701>Bist du hergekommen, um uns bei der\nKürbisernte zu helfen?\n\n\n<0x10009:0x00070700>Findest du nicht auch, dass es etwas zu\nspät dafür ist? Man sieht ja kaum noch\nwas! Komm wieder, wenn es draußen\nhell ist. Die Kürbisse rennen nicht weg!")
          		}
          	  case 1:
/*<423>*/ 		switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          		  case 0:
/*<137>*/ 			printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00000001>Ach, da ist ja der Ritter, der für\nunseren kaputten Kronleuchter\nWiedergutmachung leisten möchte.\n\n<0x10009:0x00010700>Hm, warte mal...<pause 30> Vater meinte,\ner hätte wieder Arbeit für dich.\n\n\n<0x10009:0x00070700>Am besten, du gehst gleich zu ihm\nund fragst ihn selbst.")
          		  case 1:
/*<424>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00000001>Ach, da ist ja der Ritter, der für\nunseren kaputten Kronleuchter\nWiedergutmachung leisten möchte.")
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
/*<472>*/ 		printf(/* textboxtype: 1, unk: 0, line: 197 */ "<0x10009:0x1a000001>Besser, du gehst gleich zu Vater und\nbeichtest es ihm!\n\n\n<0x10009:0x1a1a0800>Oje... Er wird bestimmt ganz schön\nwütend werden!")
          		flw_454:
/*<454>*/ 		{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 282, 'next': 539, 'param3': 14}
/*<539>*/ 		{'type': 'type3', 'subType': 1, 'param1': 7, 'param2': 0, 'next': 455, 'param3': 40}
/*<455>*/ 		{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 26, 'next': -1, 'param3': 15}
          	  case 1:
/*<449>*/ 		printf(/* textboxtype: 1, unk: 0, line: 196 */ "<0x10009:0x1a000001>Willkommen in der <color red<Kürbisbar>coloroff>!\nHier serviert man die leckerste\nSuppe weit und breit!\n\n<0x10009:0x1a1a0800>An diesem Ort kannst du entspannen\nund dir eine Auszeit gönnen!")
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
/*< 18>*/ 					printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x0000000e>Du hast nun endlich deine Schulden für\nden kaputten Kronleuchter beglichen!\nGut gemacht!\n\nIch hatte nicht damit gerechnet,\ndass du die Sache durchziehst.\n\n\n<0x10009:0x00001000>Und bei deinem nächsten Besuch\nbegrüße ich dich wieder als ganz\nnormalen Gast!")
          				  case 1:
/*< 15>*/ 					switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          					  case 0:
/*< 80>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<266>*/ 							switch (scene_flags[21 /* 0x3 20 */]) {
          							  case 0:
/*<516>*/ 								switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          								  case 0:
/*<267>*/ 									printf(/* textboxtype: 1, unk: 1, line: 97 */ "<0x10009:0x00000001>Du wirst also noch einmal für meine\nKabocha spielen?\n[1-]Spielen[2-]Erklärung[3]Beenden")
/*<268>*/ 									switch (choice(3)) {
          									  case 0:
/*<270>*/ 										printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x0000000e>Ausgezeichnet!\nDann fangt ruhig an!")
          										flw_383:
/*<383>*/ 										story_flags[675 /* us: 805A9B20 0x10, jp: 805ACDA0 0x10 */] = true;
          										flw_546:
/*<546>*/ 										set_camera(9, 0)
/*<293>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 26, 'next': 294, 'param3': 32}
/*<294>*/ 										{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 26, 'next': 295, 'param3': 15}
/*<295>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 26, 'next': 261, 'param3': 16}
/*<261>*/ 										printf(/* textboxtype: 1, unk: 0, line: 92 */ "<0x10009:0x000d0002>Du schaffst das schon...\nKabocha!")
/*<300>*/ 										set_camera(10, 0)
/*<298>*/ 										{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 0, 'next': 297, 'param3': 16}
/*<297>*/ 										printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x1a000008>Ja, Vater! Was gibt es?")
/*<301>*/ 										set_camera(11, 0)
/*<302>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 26, 'next': 299, 'param3': 50}
/*<299>*/ 										{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 26, 'next': 262, 'param3': 17}
/*<262>*/ 										printf(/* textboxtype: 1, unk: 0, line: 94 */ "<0x10009:0x000b0b00>Das Bübchen hier wird dich begleiten\nwährend du singst! Na los, erfreue\ndeinen Vater mit deiner zauberhaften\nStimme!")
/*<303>*/ 										set_camera(12, 0)
/*<296>*/ 										{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 100, 'next': 263, 'param3': 16}
/*<263>*/ 										printf(/* textboxtype: 1, unk: 0, line: 95 */ "Sehr gerne! Lass uns beginnen!")
/*<246>*/ 										make_actor_do_something(0, 0)
          									  case 1:
/*<545>*/ 										printf(/* textboxtype: 1, unk: 0, line: 89 */ "<0x10009:0x0000000e>Nun gut. Ich erklär's dir noch einmal...")
          										flw_265:
/*<265>*/ 										printf(/* textboxtype: 1, unk: 0, line: 91 */ "<0x10009:0x00000700>Sobald Kabocha singt, werden sich\nunsere Gäste vom Takt mitreißen\nlassen. Achte darauf, deine Lyra\nim richtigen Rhythmus zu spielen!\n<0x10009:0x000f0700>Beobachte, in welchem Takt die Gäste\nnach links und rechts schunkeln und\nrichte dein Lyraspiel danach.\n\nDie Richtung ist hierbei nicht wirklich\nwichtig. Ausschlaggebend ist nur,\ndass du nicht zu schnell oder gar zu\nlangsam spielst.\n<0x10009:0x00080700>Sobald die Gäste aufhören, sich zu\nbewegen, kannst du so spielen, wie du\nmöchtest.\n\nHauptsache, der Rhythmus stimmt.\nVerstehst du?[1-]Alles klar![2]Bitte noch\nmal.")
/*<260>*/ 										switch (choice(2)) {
          										  case 0:
          											goto flw_383
          										  case 1:
/*<264>*/ 											printf(/* textboxtype: 1, unk: 0, line: 96 */ "Hast du mir nicht zugehört?\nSperr gefälligst die Lauscher auf!")
          											goto flw_265
          										}
          									  case 2:
/*<269>*/ 										printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x00000004>Kein Problem! Bereite dich vor dem\nnächsten Auftritt noch etwas vor.")
          									}
          								  case 1:
/*<519>*/ 									printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x00000001>Du bist es wieder!\n<pause 30>Du siehst aus, als ob du uns etwas\nauf deiner Lyra vorspielen möchtest!\n\nTut mir leid, aber tagsüber führen wir\nkeine Vorstellungen auf. Komm heute\nNacht wieder!")
          								}
          							  case 1:
/*<604>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 517, 'param3': 31}
/*<517>*/ 								switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          								  case 0:
/*<197>*/ 									{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4096, 'next': 19, 'param3': 13}
/*< 19>*/ 									printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x00000001>Da bist du ja wieder! Nun... Was kannst\ndu als Nächstes für mich tun?\n\n\n<0x10009:0x000d0700>Oh! Was ist das denn für ein seltsames\nInstrument, das du bei dir trägst?\n\n\n<0x10009:0x00001100>So so! Nun, man mag es ihr vielleicht\nnicht ansehen, aber meine kleine\nKabocha ist eine tolle Sängerin!\n\n<0x10009:0x00000700>Vor nicht allzu langer Zeit hat sie\nsogar für unsere Gäste gesungen!\n\n\n<0x10009:0x00080000>Doch leider musste sie aufhören, da\nihre musikalische Begleitung nicht\nmehr für uns spielen wollte!\n\nHättest du nicht Lust, ein bisschen auf\ndeinem Instrument zu spielen, während\nKabocha singt?\n[1-]Klar doch![2]Nein...")
/*< 53>*/ 									switch (choice(2)) {
          									  case 0:
/*< 54>*/ 										printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x0000100e>Ausgezeichnet! Ich wusste, dass du\nMusik im Blut hast!\n\n\n<0x10009:0x000d0a00>Aber streng dich an und spiel bloß\nnicht wie ein dahergelaufener\nStraßenmusikant!")
          										goto flw_265
          									  case 1:
/*<198>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 55, 'param3': 13}
/*< 55>*/ 										printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000011>Du bist echt ein Vogel!\nHast du denn gar kein schlechtes\nGewissen, wenn du Mist baust?")
          									}
          								  case 1:
/*<518>*/ 									printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00000001>Da bist du ja wieder! Nun... Was kannst\ndu als Nächstes für mich tun?\n\n\n<0x10009:0x00000700>Oh! Was ist das denn für ein seltsames\nInstrument, das du bei dir trägst?\n\n\n<0x10009:0x000b1000>Das ist es! Ich habe die perfekte\nAufgabe für dich!\n\n\n<0x10009:0x00000700>Aber diese Aufgabe kannst du nur\nnachts für mich erledigen.\n\n\nWürde es dir etwas ausmachen, nach\nEinbruch der Dunkelheit noch mal bei\nmir vorbeizuschauen?")
          								}
          							}
          						  case 1:
/*<433>*/ 							switch (scene_flags[26 /* 0x2 04 */]) {
          							  case 0:
/*< 81>*/ 								printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x00000006>Mir ist noch keine neue Aufgabe für\ndich eingefallen. Komm später wieder.\n\n\nOder möchtest du etwa Kürbissuppe\nkaufen und dadurch meine Kürbisbar\nfinanziell unterstützen?\n[1-]Gute Idee![2]Nein, danke.")
/*<442>*/ 								entrypoint_117_26();
          							  case 1:
/*<440>*/ 								printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x000b100e>Erstklassige Arbeit! Wie es aussieht,\nhast du alle Kürbisse geerntet!\n\n\n<0x10009:0x00000700>Trotzdem... Deine Schulden für den\nKronleuchter sind damit noch lange\nnicht beglichen.\n\n<0x10009:0x00080000>Mir wird schon noch etwas einfallen,\nwobei du mir helfen kannst. Komm\nspäter wieder!")
/*<441>*/ 								scene_flags[21 'The Sky'][26 /* 0x2 04 */] = true;
          							}
          						}
          					  case 1:
/*< 16>*/ 						switch (story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */]) {
          						  case 0:
/*< 49>*/ 							switch (story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */]) {
          							  case 0:
/*<194>*/ 								{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 50, 'param3': 13}
/*< 50>*/ 								printf(/* textboxtype: 1, unk: 0, line: 85 */ "Hey! Mach gefälligst, was Kabocha dir\nsagt und hilf ihr dabei, die Kürbisse ins\nLager zu tragen!")
/*<196>*/ 								{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1792, 'next': 195, 'param3': 13}
/*<195>*/ 								printf(/* textboxtype: 1, unk: 0, line: 87 */ "Aber vergiss nicht, auf meinem\nKürbisfeld wird nur tagsüber\ngearbeitet!\n\nWer kann schon sagen, was passiert,\nwenn man Kürbisse nachts erntet?")
          							  case 1:
/*< 78>*/ 								switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          								  case 0:
/*<603>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 192, 'param3': 31}
/*<192>*/ 									{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4110, 'next': 563, 'param3': 13}
/*<563>*/ 									switch (scene_flags[25 /* 0x2 02 */]) {
          									  case 0:
/*<562>*/ 										printf(/* textboxtype: 1, unk: 0, line: 62 */ "Du bist wieder da! Gerade rechtzeitig!\nIch habe eine neue Aufgabe für dich!\n\n\nAls Nächstes wirst du uns bei der\n<color red<Kürbisernte helfen>coloroff>. Und ich will\nkeine Beschwerden hören!\n[1-]Na gut...[2]Vergiss es!")
          										flw_47:
/*< 47>*/ 										switch (choice(2)) {
          										  case 0:
/*< 51>*/ 											printf(/* textboxtype: 1, unk: 0, line: 86 */ "<0x10009:0x00080704>Das dürfte dir leichtfallen! Du hast\ndoch bestimmt das Kürbisfeld\ndraußen gesehen?\n\nIch möchte, dass du die Kürbisse in das\nLager trägst. Weitere Einzelheiten\nerklärt dir <color blue<Kabocha>coloroff>.")
/*<133>*/ 											printf(/* textboxtype: 1, unk: 0, line: 87 */ "Aber vergiss nicht, auf meinem\nKürbisfeld wird nur tagsüber\ngearbeitet!\n\nWer kann schon sagen, was passiert,\nwenn man Kürbisse nachts erntet?")
/*< 52>*/ 											story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */] = true;
          										  case 1:
/*<193>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 48, 'param3': 13}
/*< 48>*/ 											printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000011>Du bist echt ein Vogel!\nHast du denn gar kein schlechtes\nGewissen, wenn du Mist baust?")
          										}
          									  case 1:
/*< 20>*/ 										printf(/* textboxtype: 1, unk: 0, line: 61 */ "Ausgezeichnet! Du hast die Suppe\nalso abgeliefert. Und heiß war sie\nauch noch!\n\n<0x10009:0x000c0700>Nun, dann lass mich das kurz mit\ndeinen Schulden für den kaputten\nKronleuchter verrechnen...\n\n<0x10009:0x000f0900>Hui! Das reicht noch lange nicht aus,\num für den zerstörten Kronleuchter\naufzukommen!\n\nAls Nächstes wirst du uns bei der\n<color red<Kürbisernte helfen>coloroff>. Und ich will\nkeine Beschwerden hören!\n[1-]Na gut...[2]Vergiss es!")
          										goto flw_47
          									}
          								  case 1:
/*<428>*/ 									switch (scene_flags[25 /* 0x2 02 */]) {
          									  case 0:
/*<430>*/ 										printf(/* textboxtype: 1, unk: 0, line: 64 */ "<0x10009:0x00000006>Was ist denn nun schon wieder?\nIch suche immer noch nach einer\npassenden Aufgabe für dich!\n\nIrgendwie musst du mich ja für diesen\ntragischen Verlust entschädigen, nicht\nwahr, mein Freund?\n\nWie wäre es, wenn du etwas von meiner\nKürbissuppe kaufst und so der Bar zu\netwas Gewinn verhilfst?\n[1-]Gute Idee![2]Nein, danke...")
/*<432>*/ 										entrypoint_117_26();
          									  case 1:
/*< 79>*/ 										printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x000b100e>Ausgezeichnet! Du hast dem\nSchwertmeister die Suppe gebracht!\n\n\nNun, dann lass mich das kurz mit\ndeinen Schulden für den kaputten\nKronleuchter verrechnen...\n\n<0x10009:0x00080700>Aber schuldenfrei bist du immer noch\nnicht! Ich finde schon noch eine neue\nAufgabe für dich!\n\nSchau später wieder bei mir vorbei,\nvielleicht ist mir ja bis dahin etwas\neingefallen.")
/*<429>*/ 										scene_flags[21 'The Sky'][25 /* 0x2 02 */] = true;
          									}
          								}
          							}
          						  case 1:
/*< 27>*/ 							switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
          							  case 0:
/*< 24>*/ 								switch (adventure_pouch_has(2 0x0002)) {
          								  case 0:
/*< 25>*/ 									printf(/* textboxtype: 1, unk: 0, line: 73 */ "<0x10009:0x00000001>Die Suppe bleibt nur <color red<5 Minuten >coloroff>lang\nheiß! Beeil dich und bring sie zum\nSchwertmeister!")
          								  case 1:
/*< 26>*/ 									switch (adventure_pouch_has(3 0x0003)) {
          									  case 0:
/*<160>*/ 										printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x00000008>Was hab ich dir gesagt?!?\nLass die Suppe nicht kalt werden!\n\n\nWas für ein Desaster...\nHier hast du eine neue Portion.")
/*< 45>*/ 										switch (adventure_pouch_has(1 0x0001)) {
          										  case 0:
          											flw_532:
/*<532>*/ 											{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 29, 'param3': 42}
/*< 29>*/ 											give_item(195 0xC3);
/*<156>*/ 											printf(/* textboxtype: 1, unk: 0, line: 76 */ "Aber für die Kosten musst du trotzdem\naufkommen! Das macht <color red<10 Rubine>coloroff>!")
/*<157>*/ 											switch (has_rupees(10)) {
          											  case 0:
/*<159>*/ 												rupees += -10;
          											  case 1:
/*<190>*/ 												{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 158, 'param3': 13}
/*<158>*/ 												printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x0000000d>Was? Rubine hast du auch keine?\nDu treibst mich noch in den Wahnsinn!\nNun gut. Hier, eine neue Portion, und\nzwar gratis. Aber nur ausnahmsweise!")
          											}
          										  case 1:
/*<191>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 46, 'param3': 13}
/*< 46>*/ 											printf(/* textboxtype: 1, unk: 0, line: 78 */ "Du hast ja gar keine leere <color yellow<Flasche>coloroff>!\n\n\n\nWenn du Suppe mitnehmen möchtest,\nbrauchst du eine!\n\n\nSieh zu, dass du erst wieder mit einer\nleeren Flasche hier antanzt!")
          										}
          									  case 1:
/*<553>*/ 										switch (adventure_pouch_has(1 0x0001)) {
          										  case 0:
/*< 28>*/ 											printf(/* textboxtype: 1, unk: 0, line: 74 */ "<0x10009:0x00000007>Was soll das heißen? Du hast keine\n<color yellow<Kürbissuppe >coloroff>mehr?\n\n\n<0x10009:0x000d0a00>Erzähl mir nicht, dass du sie selbst\ngegessen hast!\n\n\nDu bist mir vielleicht ein Spaßvogel!\nHier, nimm eine neue Portion!")
          											goto flw_532
          										  case 1:
/*<556>*/ 											printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00000007>Was soll das heißen? Du hast keine\n<color yellow<heiße Kürbissuppe >coloroff>mehr?\n\n\n<0x10009:0x000d0a00>Erzähl mir nicht, dass du sie selbst\ngegessen hast! Pah! Dann bringst du\nihm gefälligst noch eine!")
/*<555>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 554, 'param3': 13}
/*<554>*/ 											printf(/* textboxtype: 1, unk: 0, line: 78 */ "Du hast ja gar keine leere <color yellow<Flasche>coloroff>!\n\n\n\nWenn du Suppe mitnehmen möchtest,\nbrauchst du eine!\n\n\nSieh zu, dass du erst wieder mit einer\nleeren Flasche hier antanzt!")
          										}
          									}
          								}
          							  case 1:
/*<589>*/ 								switch (scene_flags[48 /* 0x7 01 */]) {
          								  case 0:
/*<590>*/ 									switch (adventure_pouch_has(1 0x0001)) {
          									  case 0:
/*<593>*/ 										printf(/* textboxtype: 1, unk: 0, line: 79 */ "<0x10009:0x00000001>Oh, du hast eine leere Flasche\nmitgebracht!")
          										flw_189:
/*<189>*/ 										{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4100, 'next': 22, 'param3': 13}
/*< 22>*/ 										printf(/* textboxtype: 1, unk: 0, line: 69 */ "Sehr schön. Hier hast du etwas\n<color yellow<heiße Kürbissuppe>coloroff>!\n\n\n<0x10009:0x00000700>Bring sie dem Schwertmeister, aber\nhurtig! Na, worauf wartest du noch?")
/*<533>*/ 										{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 30, 'param3': 42}
/*< 30>*/ 										give_item(195 0xC3);
/*< 77>*/ 										printf(/* textboxtype: 1, unk: 0, line: 70 */ "<0x10009:0x00010700>Ach, eine Sache noch, Kleiner...\nDer Schwertmeister kann kalte Suppe\nnicht ausstehen!\n\nDu solltest dich also mit deiner\nLieferung etwas beeilen.\n\n\nLos, bring ihm die Suppe <color red<innerhalb der\nnächsten 5 Minuten>coloroff>, sonst ist sie kalt!")
/*< 31>*/ 										story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */] = true;
          									  case 1:
/*<592>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2309, 'next': 591, 'param3': 13}
/*<591>*/ 										printf(/* textboxtype: 1, unk: 0, line: 78 */ "Du hast ja gar keine leere <color yellow<Flasche>coloroff>!\n\n\n\nWenn du Suppe mitnehmen möchtest,\nbrauchst du eine!\n\n\nSieh zu, dass du erst wieder mit einer\nleeren Flasche hier antanzt!")
          									}
          								  case 1:
/*<602>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 155, 'param3': 31}
/*<155>*/ 									switch (scene_flags[8 /* 0x0 01 */]) {
          									  case 0:
/*<185>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2317, 'next': 154, 'param3': 13}
/*<154>*/ 										printf(/* textboxtype: 1, unk: 0, line: 67 */ "Bist du bereit, für den kaputten\nKronleuchter aufzukommen?\n[1-]Gib mir Arbeit![2]Ich weiß\nnicht...")
          										flw_75:
/*< 75>*/ 										switch (choice(2)) {
          										  case 0:
/*<187>*/ 											{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4110, 'next': 76, 'param3': 13}
/*< 76>*/ 											printf(/* textboxtype: 1, unk: 0, line: 66 */ "Nun, ich werde dich an dieses\nVersprechen erinnern!\n\n\n<0x10009:0x00000700>Also gut. Wie wäre es, wenn du als\nErstes dem <color red<Schwertmeister im\nWolkenhort >coloroff>meine Suppe bringst?\n\n<0x10009:0x00080700>Er gehört zu unseren Stammgästen,\nund meine Suppe gibt ihm Energie für\nden Unterricht. Also? Wirst du ihm die\nSuppe bringen?\n[1-]Sicher![2]Jetzt nicht.")
/*<274>*/ 											scene_flags[21 'The Sky'][20 /* 0x3 10 */] = true;
          											flw_17:
/*< 17>*/ 											switch (choice(2)) {
          											  case 0:
/*< 43>*/ 												switch (adventure_pouch_has(1 0x0001)) {
          												  case 0:
          													goto flw_189
          												  case 1:
/*<188>*/ 													{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2309, 'next': 44, 'param3': 13}
/*< 44>*/ 													printf(/* textboxtype: 1, unk: 0, line: 78 */ "Du hast ja gar keine leere <color yellow<Flasche>coloroff>!\n\n\n\nWenn du Suppe mitnehmen möchtest,\nbrauchst du eine!\n\n\nSieh zu, dass du erst wieder mit einer\nleeren Flasche hier antanzt!")
/*<588>*/ 													scene_flags[21 'The Sky'][48 /* 0x7 01 */] = true;
          												}
          											  case 1:
/*<275>*/ 												printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x000d0a0d>Ein Mann, ein Wort!\nIch möchte, dass du diese Suppe hier\ndem Schwertmeister bringst, ist das\nklar?\n[1-]Verstanden![2]Jetzt nicht.")
          												goto flw_17
          											}
          										  case 1:
/*<186>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 23, 'param3': 13}
/*< 23>*/ 											printf(/* textboxtype: 1, unk: 0, line: 71 */ "Ich hör wohl schlecht! Du hast Nerven!\nZerstörst meinen Kronleuchter und\nglaubst dann auch noch, ungeschoren\ndavonzukommen?")
/*<153>*/ 											scene_flags[21 'The Sky'][8 /* 0x0 01 */] = true;
          										}
          									  case 1:
/*<184>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2317, 'next': 21, 'param3': 13}
/*< 21>*/ 										printf(/* textboxtype: 1, unk: 0, line: 65 */ "Das darf doch nicht wahr sein!\nWas hast du getan?\n\n\nMein handgefertigter Kronleuchter\nist komplett ruiniert!\n\n\nDu wirst so lange für mich arbeiten,\nbis jeder einzelne Rubin, der in dem\nKronleuchter steckt, abbezahlt ist!\nNun? Bist du damit einverstanden?\n[1-]Natürlich![2]Nein.")
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
/*<557>*/ 				printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00000001>Hereinspaziert! Möchtest du dich mit\neiner Portion <color red<Kürbissuppe >coloroff>stärken?\n[1-]Sehr gerne![2]Nein, danke.")
          				flw_558:
/*<558>*/ 				zone_temp_flags[4 /* 0x1 10 */] = true;
          				goto flw_73
          			  case 1:
/*< 13>*/ 				printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00000001>Willkommen in der Kürbisbar,\nder gemütlichen Raststätte für\nalle Vogelreiter!\n\nDu wirst nirgendwo eine bessere Suppe\nals meine hausgemachte <color red<Kürbissuppe\n>coloroff>finden! Wie wär's mit einer Portion?\n[1-]Sehr gerne![2]Nein, danke.")
          				goto flw_558
          			}
          		}
          	}
          }

          void entrypoint_117_45() {
/*<145>*/ 	start()
/*<147>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 26, 'next': 151, 'param3': 32}
/*<151>*/ 	printf(/* textboxtype: 1, unk: 0, line: 132 */ "<0x10009:0x00000001>Wieso fragt Kabocha nicht einfach\nmich, ob ich ihr bei der Kürbisernte\nhelfe?")
/*<148>*/ 	{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 0, 'next': 425, 'param3': 16}
/*<425>*/ 	printf(/* textboxtype: 1, unk: 0, line: 138 */ "<0x10009:0x1a000003>Das wäre aber nicht nett! Wir lassen\ndoch unsere Gäste nicht auf dem\nKürbisfeld schuften!")
/*<181>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6657, 'param2': -256, 'next': 149, 'param3': 13}
/*<149>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 26, 'next': 426, 'param3': 16}
/*<426>*/ 	printf(/* textboxtype: 1, unk: 0, line: 139 */ "<0x10009:0x00000002>Aber mir macht das nichts aus! Ehrlich!\nIch werde auch mindestens doppelt so\nhart wie dieser schlüpfrige Maulwurf\narbeiten!")
/*<150>*/ 	{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 0, 'next': 182, 'param3': 16}
/*<182>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6675, 'param2': 2048, 'next': 146, 'param3': 13}
/*<146>*/ 	printf(/* textboxtype: 1, unk: 0, line: 136 */ "<0x10009:0x1a000009>Oooh! Wenn das so ist, dann freue ich\nmich natürlich über dein Angebot!")
/*<183>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6657, 'param2': -256, 'next': 152, 'param3': 13}
/*<152>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 427, 'param3': 16}
/*<427>*/ 	printf(/* textboxtype: 1, unk: 0, line: 140 */ "<0x10009:0x00090705>Ich könnte tagelang durcharbeiten,\nsolange mich Kabocha mit ihrem\nsüßen Lächeln erfreut! Hahaha!")
          }

          void entrypoint_117_28() {
/*<457>*/ 	start()
/*<560>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<561>*/ 		printf(/* textboxtype: 1, unk: 0, line: 200 */ "<0x10009:0x00000003>Wirklich gute Arbeit! Du hast uns sehr\ngeholfen!\n\n\nEs würde mich sehr freuen, dich in \nZukunft wieder als Gast bei uns\nbegrüßen zu dürfen!\n\nUnd falls du dir ein paar Rubine\nverdienen möchtest, finde ich\nbestimmt etwas Arbeit für dich!")
          	  case 1:
/*<474>*/ 		switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          		  case 0:
/*<475>*/ 			printf(/* textboxtype: 1, unk: 0, line: 199 */ "<0x10009:0x00000003>Ist dies wirklich der richtige Zeitpunkt,\num sich eine Pause zu gönnen? Hast du\nnicht noch was zu erledigen?")
          		  case 1:
/*<458>*/ 			printf(/* textboxtype: 1, unk: 0, line: 198 */ "<0x10009:0x00000003>Denkst du wirklich, dass jetzt der\nrichtige Moment ist, um sich einfach\nhier hinzusetzen?\n\n<0x10009:0x000d0700>Obwohl... Selbst du brauchst wohl\nmanchmal eine kleine Auszeit,\nnicht wahr?\n\n<0x10009:0x00001000>Nur zu! Dann lass die Seele eben ein\nwenig baumeln!")
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
/*<212>*/ 			printf(/* textboxtype: 1, unk: 0, line: 154 */ "<0x10009:0x00000004>Normalerweise biete ich <color blue<Narisha >coloroff>meine\nSuppe auf einer kleinen Insel innerhalb\nder Sturmwolke dar.<sound 4>\n\n<0x10009:0x00000700>Du kannst sie gar nicht übersehen!\nÜber ihr schwebt ein <color red<Regenbogen>coloroff>!\nViel Glück!")
          		  case 1:
/*<209>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 459, 'param3': 31}
/*<459>*/ 			switch (story_flags[367 /* us: 805A9B03 0x20, jp: 805ACD83 0x20 */]) {
          			  case 0:
/*<460>*/ 				printf(/* textboxtype: 1, unk: 0, line: 156 */ "<0x10009:0x000f090d>Hey! Was soll denn das?\nIch hab mir so viel Mühe gegeben,\nund du lieferst die Suppe nicht ab?\n\n<0x10009:0x000a0000>Dieser Roboter hat mir die Terrine\nmit der Suppe gerade eben vor die\nTür gestellt!\n[1-]Tut mir leid.[2-]Ich versuch's\nnoch mal.")
/*<461>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_462:
/*<462>*/ 					printf(/* textboxtype: 1, unk: 0, line: 157 */ "<0x10009:0x000d0900>Nun ja. Da es für <color blue<Narisha >coloroff>ist, macht\nes mir nichts aus, dir noch eine große\nPortion zu kochen!")
/*<463>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 23, 'next': 464, 'param3': 32}
/*<464>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 471, 'param3': 32}
          					flw_471:
/*<471>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1013, 'next': 470, 'param3': 24}
/*<470>*/ 					printf(/* textboxtype: 1, unk: 0, line: 149 */ "<0x10009:0x00000900>Warte hier! Ich werde mich beeilen\nund in Windeseile etwas Leckeres\nzusammenbrauen!")
/*<340>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 223, 'param3': 16}
/*<223>*/ 					{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 228, 'param3': 47}
/*<228>*/ 					{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 256, 'next': 229, 'param3': 15}
/*<229>*/ 					{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 356, 'next': 230, 'param3': 15}
/*<230>*/ 					set_camera(2, 0)
/*<338>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4096, 'next': 523, 'param3': 13}
/*<523>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 108, 'next': 524, 'param3': 24}
/*<524>*/ 					wait_frames(45)
/*<224>*/ 					{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 547, 'param3': 48}
/*<547>*/ 					wait_frames(10)
/*<548>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 217, 'param3': 24}
/*<217>*/ 					printf(/* textboxtype: 1, unk: 0, line: 150 */ "<0x10009:0x000b1009>Hier ist sie!\n\n\n\n<0x10009:0x000f1100>Ich koche nun schon seit Jahrzehnten,\naber dies hier ist wohl die leckerste\n<color yellow<Kürbissuppe>coloroff>, die mir je gelungen ist!")
/*<382>*/ 					make_actor_do_something(3, 23)
/*<218>*/ 					{'type': 'type3', 'subType': 1, 'param1': 315, 'param2': 0, 'next': 525, 'param3': 51}
/*<525>*/ 					{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 256, 'next': 219, 'param3': 13}
/*<219>*/ 					printf(/* textboxtype: 2, unk: 0, line: 151 */ "<0x10012:0x00000001>Gebieter...\nIch werde nach dem Roboter rufen.")
/*<336>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 23, 'next': 536, 'param3': 17}
/*<536>*/ 					make_actor_do_something(0, 3)
/*<344>*/ 					wait_frames(10)
/*<337>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 23, 'next': 345, 'param3': 17}
/*<345>*/ 					wait_frames(15)
/*<341>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 23, 'next': 220, 'param3': 17}
/*<220>*/ 					printf(/* textboxtype: 1, unk: 0, line: 152 */ "<0x10012:0x00000064>Verehrte Phai! Hier bin ich!")
/*<225>*/ 					make_actor_do_something(1, 23)
/*<221>*/ 					printf(/* textboxtype: 1, unk: 0, line: 153 */ "<0x10012:0x00000064>Eine wirklich schwere Ladung dieses\nMal! Aber das geht in Ordnung, ich\nschaffe das!\n\nIch warte draußen auf dich. Gib mir\neinfach nur Bescheid, dann folge ich\ndir überall hin!")
/*<226>*/ 					make_actor_do_something(2, 23)
/*<343>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 231, 'param3': 36}
/*<231>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 342, 'param3': 16}
/*<342>*/ 					set_camera(5, 0)
/*<222>*/ 					printf(/* textboxtype: 1, unk: 0, line: 154 */ "<0x10009:0x00000004>Normalerweise biete ich <color blue<Narisha >coloroff>meine\nSuppe auf einer kleinen Insel innerhalb\nder Sturmwolke dar.<sound 4>\n\n<0x10009:0x00000700>Du kannst sie gar nicht übersehen!\nÜber ihr schwebt ein <color red<Regenbogen>coloroff>!\nViel Glück!")
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
/*<203>*/ 					printf(/* textboxtype: 1, unk: 0, line: 143 */ "<0x10009:0x00000001>Was ist los? Du siehst so aus, als ob\ndich etwas bedrücken würde.\n[1-]Nun...[2]Wirklich?")
          					flw_204:
/*<204>*/ 					switch (choice(2)) {
          					  case 0:
/*<206>*/ 						printf(/* textboxtype: 1, unk: 0, line: 147 */ "<0x10009:0x000d0d04><color blue<Narisha>coloroff><0x10006:0xfbcd>...<0x10006:0x00cd>?\n\n\n\n<0x10009:0x00000700>Ich kenne Narisha recht gut...\n\n\n\n<0x10009:0x00080700>Ich bringe ihm jedes Jahr eine große\nPortion meiner <color red<Kürbissuppe>coloroff>! Doch vor\neiniger Zeit tauchte plötzlich diese\ngigantische Sturmwolke auf...\nDeshalb konnte ich Narisha dieses\nJahr leider keine Suppe bringen.\nIch bin untröstlich...")
/*<227>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 23, 'next': 339, 'param3': 32}
/*<339>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 207, 'param3': 32}
/*<207>*/ 						printf(/* textboxtype: 1, unk: 0, line: 148 */ "<0x10009:0x000d0d08>Wirklich? Du wirst <color blue<Narisha >coloroff>etwas \nvon meiner Suppe bringen?\n\n\n<0x10009:0x00000700><0x10006:0xfdcd>...<0x10006:0x00cd>Es ist mir zwar schleierhaft, wie du\nmit deinem Vogel durch diese riesige\nSturmwolke fliegen willst...\n\n<0x10009:0x000b1000>Aber da er schon lange keine Suppe\nmehr hatte, werde ich sie dieses Mal\nbesonders lecker würzen!")
          						goto flw_471
          					  case 1:
/*<564>*/ 						switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          						  case 0:
          							flw_205:
/*<205>*/ 							printf(/* textboxtype: 1, unk: 0, line: 144 */ "<0x10009:0x00000005>Hm, dann habe ich mich getäuscht.\nNun, wenn alles in Ordnung ist, nimm\nPlatz und entspann dich!")
          						  case 1:
/*<346>*/ 							switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          							  case 0:
/*<347>*/ 								printf(/* textboxtype: 1, unk: 0, line: 145 */ "<0x10009:0x00000004>Nun, wenn du sagst, dass alles in\nOrdnung ist, glaube ich dir.\n\n\nWie wäre es dann, wenn du weiter\ndaran arbeitest, deine Schulden bei\nmir zu tilgen?")
          							  case 1:
          								goto flw_205
          							}
          						}
          					}
          				  case 1:
/*<522>*/ 					printf(/* textboxtype: 1, unk: 0, line: 146 */ "<0x10009:0x00000001>Willkommen in der Kürbisbar,\nder gemütlichen Raststätte für\nalle Vogelreiter!\n\nNur hier bekommst du meine leckere\nhausgemachte Suppe!\n\n\nAber du siehst so aus, als ob du etwas\nanderes als Suppe im Sinn hast...\n[1-]Nun...[2]Hab ich\ndas?")
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
/*<404>*/ 		printf(/* textboxtype: 1, unk: 0, line: 186 */ "Ojemine... Du hast es getan...\n\n\n\nWieso bist du nur so gierig?")
          	  case 1:
/*<411>*/ 		switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          		  case 0:
/*<420>*/ 			printf(/* textboxtype: 1, unk: 0, line: 185 */ "Dieser <color blue<Gelan>coloroff> ist wirklich ein begabter\nHandwerker.\n\n\nIch bin mir ganz sicher, dass er das\nZeug dazu hat, die Windmühle im\nWolkenhort zu reparieren.")
          		  case 1:
/*<412>*/ 			switch (story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */]) {
          			  case 0:
/*<419>*/ 				printf(/* textboxtype: 1, unk: 0, line: 184 */ "Ich habe <color blue<Amadin >coloroff>schon lange nicht\nmehr im <color blue<Basar >coloroff>gesehen...\n\n\nWirklich schade. Er war solch ein guter\nWahrsager...")
          			  case 1:
/*<413>*/ 				switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          				  case 0:
/*<418>*/ 					printf(/* textboxtype: 1, unk: 0, line: 183 */ "<color blue<Kabocha >coloroff>hat alle Hände voll zu tun.\n\n\n\nKennst du vielleicht jemanden, der ihr\nbeim Löcher graben unter die Arme\ngreifen kann?")
          				  case 1:
/*<414>*/ 					switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
          					  case 0:
/*<417>*/ 						printf(/* textboxtype: 1, unk: 0, line: 182 */ "Hast du schon Meister <color blue<Otus'>coloroff>\nPflanzensammlung gesehen?\n\n\nIch frage mich, ob er in letzter Zeit\nüber neue Pflanzenarten gestolpert ist.")
          					  case 1:
/*<415>*/ 						switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          						  case 0:
/*<400>*/ 							printf(/* textboxtype: 1, unk: 0, line: 181 */ "Du weißt nicht zufällig, was <color blue<Dodo\n>coloroff>zurzeit treibt?\n\n\nWollte er nicht einen Ort schaffen, an\ndem man tagein, tagaus Sturzroulette\nspielen kann?")
          						  case 1:
/*<416>*/ 							printf(/* textboxtype: 1, unk: 0, line: 180 */ "Ich wusste nicht, dass es Leute gibt,\ndie sogar über der Kürbisbar ihren\nParaschal ausbreiten...\n\nÜbrigens... Es soll ein schillerndes\nTier geben, das nur dann auftaucht,\nwenn man von seinem Wolkenvogel\nabspringt.\nAngeblich widerfährt jedem, der\ndiesem Tier begegnet, etwas Gutes...")
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
/*<482>*/ 		printf(/* textboxtype: 1, unk: 0, line: 197 */ "<0x10009:0x1a000001>Besser, du gehst gleich zu Vater und\nbeichtest es ihm!\n\n\n<0x10009:0x1a1a0800>Oje... Er wird bestimmt ganz schön\nwütend werden!")
          		flw_480:
/*<480>*/ 		{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 282, 'next': 481, 'param3': 14}
/*<481>*/ 		{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 26, 'next': -1, 'param3': 15}
          	  case 1:
/*<479>*/ 		printf(/* textboxtype: 1, unk: 0, line: 196 */ "<0x10009:0x1a000001>Willkommen in der <color red<Kürbisbar>coloroff>!\nHier serviert man die leckerste\nSuppe weit und breit!\n\n<0x10009:0x1a1a0800>An diesem Ort kannst du entspannen\nund dir eine Auszeit gönnen!")
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
/*<408>*/ 		printf(/* textboxtype: 1, unk: 0, line: 188 */ "Was ist denn hier los?")
          	  case 1:
/*<406>*/ 		printf(/* textboxtype: 1, unk: 0, line: 187 */ "Ich komme nachts immer hierher.")
          	}
          }

          void entrypoint_117_30() {
/*< 39>*/ 	start()
/*<352>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<353>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<354>*/ 			printf(/* textboxtype: 1, unk: 0, line: 127 */ "<0x10009:0x000b0704>Erschreck mich doch nicht so! Oder soll\nich etwa auf der Stelle tot umfallen?\n\n\n<0x10009:0x000a0700>Also, was willst du von mir?")
          			flw_56:
/*< 56>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*< 62>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*<610>*/ 					switch (scene_flags[70 /* 0x9 40 */]) {
          					  case 0:
/*<609>*/ 						switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          						  case 0:
/*<612>*/ 							printf(/* textboxtype: 1, unk: 0, line: 130 */ "<0x10009:0x00000004>Ein so großer Kronleuchter macht\nwirklich was her... Aber ein bisschen zu\nhell ist er schon.")
          						  case 1:
          							flw_70:
/*< 70>*/ 							printf(/* textboxtype: 1, unk: 0, line: 125 */ "<0x10009:0x000b0c04>Du hast den Grabstein bewegt?\n\n\n\n<0x10009:0x000a0f00>Und? Konntest du einen Blick auf die\nelende Bestie werfen? Schaurig, nicht\nwahr?\n\nDu brauchst mir nichts vorzumachen!\nIch weiß, dass du vor lauter Angst die\nHosen voll hattest!")
          						}
          					  case 1:
/*<611>*/ 						scene_flags[21 'The Sky'][70 /* 0x9 40 */] = true;
          						goto flw_70
          					}
          				  case 1:
/*< 69>*/ 					switch (scene_flags[5 /* 0x1 20 */]) {
          					  case 0:
/*<585>*/ 						printf(/* textboxtype: 1, unk: 0, line: 120 */ "<0x10009:0x00000001>Hast du irgendwas nicht verstanden?\n[1-]Nachts?[2-]Friedhof?")
/*<586>*/ 						switch (choice(2)) {
          						  case 0:
/*<587>*/ 							printf(/* textboxtype: 1, unk: 0, line: 121 */ "<0x10009:0x000b0704>Möchtest du mal <color red<nachts >coloroff>durch den\nWolkenhort laufen, <color green<leg dich in ein\nBett>coloroff> und warte, bis es dunkel ist.\n\nNachts ist der Wolkenhort nicht mehr\ndas, was er tagsüber ist...\n\n\n<0x10009:0x000a0f00>Ich würde dir ja fast raten, es lieber\nnicht selbst auszuprobieren...\nMir gruselt es heute noch!")
          						  case 1:
/*< 67>*/ 							printf(/* textboxtype: 1, unk: 0, line: 119 */ "<0x10009:0x000b0704>Ich war auf dem Friedhof und habe\n<color red<auf den Grabstein in der Nähe des\nBaumes >coloroff>geschlagen...\n\nUnd weißt du was? Plötzlich leuchtete\ner gleißend hell auf!\n\n\nAls ich dann <color red<dem Grabstein einen\nSchubs gegeben>coloroff> habe, ging die Tür\nzum Schuppen auf!\n\nMir ist beinahe das Herz in die Hose\ngerutscht! Dort stand ein Monster!\nMitten im Schuppen!\n\n<0x10009:0x000a0f00>Überzeug dich selbst, wenn du den Mut\ndazu hast! Aber komm dann bloß nicht\nangerannt und behaupte, ich hätte dich\nnicht gewarnt!")
          						}
          					  case 1:
/*<606>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 42, 'param3': 31}
/*< 42>*/ 						printf(/* textboxtype: 1, unk: 0, line: 118 */ "<0x10009:0x000b0704>Das Wolkenhort-Monster!\nDu glaubst mir doch, oder?\n\n\nEigentlich ist es gar kein Monster,\nsondern ein Dämon! Und niemand\nüberlebt die Begegnung mit ihm!\n\n<0x10009:0x000b0700>Was? Du willst wissen, ob ich ihn schon\nmal gesehen habe?\n[1-]Ja![2]Ist mir egal...")
/*< 63>*/ 						switch (choice(2)) {
          						  case 0:
/*< 64>*/ 							printf(/* textboxtype: 1, unk: 0, line: 122 */ "<0x10009:0x000a0f00>I-i-ich hab ihn gesehen! Und ich kann\nauch nur davon berichten, weil ich die\nBeine in die Hand genommen habe und\ngeflitzt bin!\n<0x10009:0x000b0700>Jemand mit weniger Glück hätte mit\nSicherheit ins Gras gebissen!")
          							flw_66:
/*< 66>*/ 							printf(/* textboxtype: 1, unk: 0, line: 124 */ "<0x10009:0x000b0700>Wie dem auch sei, ich habe dieses Biest\nmit eigenen Augen gesehen und lasse\nmir nichts anderes erzählen!\n\nIch lief also gerade in der Nähe des\ngroßen Baumes auf dem Friedhof,\nmitten <color red<in der Nacht>coloroff>...\n\nDer Dämon <color red<schlug auf den Grabstein\nbeim großen Baum>coloroff>, welcher sofort hell\naufleuchtete!\n\nDann <color red<schob er den Grabstein >coloroff>zur Seite\nund plötzlich öffnete sich die Tür zum\nSchuppen!\n\nDer Dämon ging hinein und schloss mit\neiner für eine Bestie sehr unüblichen \nEleganz die Tür hinter sich.\n\n<0x10009:0x000b0700>Ich werde diesen Anblick mein Lebtag\nnicht vergessen! Halte dich <color red<nachts vom\nFriedhof >coloroff>fern!")
/*< 68>*/ 							scene_flags[21 'The Sky'][5 /* 0x1 20 */] = true;
/*<577>*/ 							story_flags[825 /* us: 805A9B33 0x02, jp: 805ACDB3 0x02 */] = true;
          						  case 1:
/*< 65>*/ 							printf(/* textboxtype: 1, unk: 0, line: 123 */ "Heee! Unterbrich mich gefälligst nicht,\nwährend ich meine Geschichte erzähle!")
          							goto flw_66
          						}
          					}
          				}
          			  case 1:
/*< 57>*/ 				printf(/* textboxtype: 1, unk: 1, line: 114 */ "<0x10009:0x00000001>Du glaubst mir doch, oder?\n[1-]Was glauben?[2-]Ich glaube dir.[3]Nie im\nLeben!")
/*< 58>*/ 				switch (choice(3)) {
          				  case 0:
/*< 59>*/ 					printf(/* textboxtype: 1, unk: 0, line: 115 */ "<0x10009:0x000b0703>Ich sage dir, im Wolkenhort lebt ein\nfürchterlicher Dämon!\n\n\nUm ein Haar hätte mich das Biest\nlebendig verspeist!\n\n\n<0x10009:0x000b0700>Du magst vielleicht ein Ritter sein,\naber dieser Dämon wird selbst dich\nzum Frühstück verputzen!")
          				  case 1:
/*< 60>*/ 					printf(/* textboxtype: 1, unk: 0, line: 116 */ "<0x10009:0x000b0e04>Sieh an, sieh an...\nDu bist ein echt netter Bengel!")
          				  case 2:
/*< 61>*/ 					printf(/* textboxtype: 1, unk: 0, line: 117 */ "<0x10009:0x000a0f03>Hm.<pause 20>.<pause 20>.<pause 20> Was ist bloß los mit der Jugend\nvon heute?")
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
/*<173>*/ 	printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00000008>In diesem Fall... Danke schön!\nDu <pause 10>netter, <pause 10>lieber <pause 10>Maulwurf!")
          }

          void entrypoint_117_48() {
/*<421>*/ 	start()
/*<501>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<502>*/ 		printf(/* textboxtype: 1, unk: 0, line: 112 */ "<0x10009:0x00000001>Ich kann kaum glauben, endlich mal\nwieder Kabochas liebliche Stimme\nvernommen zu haben!\n\nIch spüre meine alte Liebe zu ihr\nwieder aufflammen!")
          	  case 1:
/*<422>*/ 		printf(/* textboxtype: 1, unk: 0, line: 111 */ "<0x10009:0x00000001>Schon gehört?\n\n\n\n<color blue<Kabocha>coloroff> hat manchmal für die Gäste\nder Kürbisbar Lieder zum Besten\ngegeben!\n\n<0x10009:0x00090700>Ach, hätte sie doch nur musikalische\nBegleitung, dann könnte sie wieder\nauftreten!")
          	}
          }

          void entrypoint_117_31() {
/*< 37>*/ 	start()
/*<503>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<504>*/ 		printf(/* textboxtype: 1, unk: 0, line: 129 */ "<0x10009:0x00000004>Ich wusste es! Kabochas Gesang ist das\nSchönste, das ich jemals gehört habe!\n\n\nWenn ich dagegen an die schrille \nStimme meiner Frau denke...")
          	  case 1:
/*<401>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<402>*/ 			printf(/* textboxtype: 1, unk: 0, line: 127 */ "<0x10009:0x000b0704>Erschreck mich doch nicht so! Oder soll\nich etwa auf der Stelle tot umfallen?\n\n\n<0x10009:0x000a0700>Also, was willst du von mir?")
          		  case 1:
/*<495>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<496>*/ 				printf(/* textboxtype: 1, unk: 0, line: 128 */ "<0x10009:0x00000004>Kabochas Gesangsstimme ist einfach\nein Traum!\n\n\n<pause 10>.<pause 10>.<pause 10>.aber der Kerl, der für sie gespielt\nhat, hat sein Instrument genommen\nund ist abgehauen.\n\nAch, könnte ich doch wieder ihre\nliebliche Stimme hören! Ich werde\nihren glockenhellen Klang wohl nie\nvergessen!")
          			  case 1:
/*< 40>*/ 				printf(/* textboxtype: 1, unk: 0, line: 126 */ "<0x10009:0x00000004>Du solltest dich nachts von den Straßen\ndes Wolkenhorts fernhalten! Wer weiß,\nauf welch gruselige Wesen du in tiefer\nFinsternis triffst!\nWenn du mit mir sprechen möchtest,\nkomm bitte tagsüber vorbei!")
          			}
          		}
          	}
          }

          void entrypoint_117_14() {
/*<286>*/ 	start()
/*<174>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00000005>Aber... Na ja... Ich meine... Naaa gut.\nIch kann es ja mal versuchen!")
          }

          void entrypoint_117_15() {
/*<287>*/ 	start()
/*<169>*/ 	printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x00000009>Wie gefällt dir das?")
          }

          void entrypoint_117_32() {
/*<544>*/ 	start()
          	goto flw_546
          }

          void entrypoint_117_50() {
/*<109>*/ 	start()
/*<111>*/ 	printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00000012><0x10008:0x02cd>Was glaubst du eigentlich,\nwas du da oben treibst?\n\n\n<0x10008:0x00cd>Mach sofort, dass du runter kommst!")
/*<110>*/ 	story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */] = true;
/*<349>*/ 	zone_temp_flags[3 /* 0x1 08 */] = true;
          }

          void entrypoint_117_16() {
/*<288>*/ 	start()
/*<170>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00000009>Oh! Hui! Sieh dir das an!\nUuunglaublich!")
          }

          void entrypoint_117_51() {
/*<271>*/ 	start()
/*<276>*/ 	set_camera(3, 0)
/*<277>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 272, 'param3': 13}
/*<272>*/ 	printf(/* textboxtype: 1, unk: 0, line: 72 */ "Hey!\n\n\n\nDu glaubst doch wohl nicht, dass ich\ndich nach dieser Aktion so einfach\ngehen lasse, oder?")
/*<278>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_17() {
/*<289>*/ 	start()
/*<171>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x00000006>Hohoho... Findest du wirklich?\nDas war doch nicht der Rede wert!\n\n\nDas Talent, die Erde umzugraben,\nwurde uns Mogma praktisch in die\nWiege gelegt!")
          }

          void entrypoint_117_52() {
/*<273>*/ 	start()
/*<280>*/ 	set_camera(4, 0)
/*<281>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 279, 'param3': 13}
/*<279>*/ 	printf(/* textboxtype: 1, unk: 0, line: 72 */ "Hey!\n\n\n\nDu glaubst doch wohl nicht, dass ich\ndich nach dieser Aktion so einfach\ngehen lasse, oder?")
/*<282>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_18() {
/*<290>*/ 	start()
/*<172>*/ 	printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0000000a>Meinst du, du schaffst das noch\neinmal? Bitte! Bitte, bitte, bitte!")
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
/*<100>*/ 								printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00130808>Er ist emsiger als einhundert normale\nArbeitskräfte! Ich bin ihm so dankbar\nfür seine Hilfe!")
          							  case 1:
/*<510>*/ 								switch (zone_temp_flags[7 /* 0x1 80 */]) {
          								  case 0:
          									flw_388:
/*<388>*/ 									entrypoint_117_25();
          								  case 1:
/*<507>*/ 									printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x00130808>Seitdem uns der Maulwurf hilft,\nläuft die Arbeit auf dem Feld wie\ngeschmiert!\n\nNun können wir noch viel mehr\nKürbisse anbauen und ernten!")
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
/*<234>*/ 								printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x000b0e0f>Ich hoffe, du findest bald jemanden,\nder mir beim Pflügen des Feldes zur\nHand geht...")
/*<233>*/ 								switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          								  case 0:
          								  case 1:
/*<235>*/ 									{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 236, 'param3': 51}
/*<236>*/ 									printf(/* textboxtype: 2, unk: 0, line: 38 */ "Deine <sound 4><color red<Aurasuche>coloroff> ist zurzeit nicht\nauf die Person eingestellt, die das\nMädchen sucht.\n\nMöchtest du, dass ich die von diesem\nMädchen gesuchte <color red<Person, die das\nKürbisfeld pflügen kann>coloroff>, als Ziel für\ndie <sound 4><color red<Aurasuche>coloroff> festlege?\n[1-]Ja, bitte.[2]Jetzt nicht.")
/*<237>*/ 									switch (choice(2)) {
          									  case 0:
/*<239>*/ 										story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = true;
/*<240>*/ 										story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<241>*/ 										story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<242>*/ 										story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<243>*/ 										story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<244>*/ 										story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<575>*/ 										open_dowsing_wheel(15)
/*<576>*/ 										printf(/* textboxtype: 2, unk: 0, line: 39 */ "Sehr wohl, <0x10012:0x00000005>Gebieter.\n\n\n\nDie Person, nach der das Mädchen\nsucht, wurde als Ziel für die <sound 4><color red<Aurasuche\n>coloroff>festgelegt.")
          										flw_245:
/*<245>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          									  case 1:
/*<238>*/ 										printf(/* textboxtype: 2, unk: 0, line: 40 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Ich werde keine\nÄnderung an der aktuellen Einstellung\nder <sound 4>Aurasuche vornehmen. ")
          										goto flw_245
          									}
          								}
          							}
          						}
          					  case 1:
/*< 97>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 99, 'param3': 31}
/*< 99>*/ 						printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00000001>Hallo! Noch mal vielen Dank, dass du\nmir beim Tragen der Kürbisse geholfen\nhast! Jetzt können wir uns ganz dem\nPflanzen neuer Kürbisse widmen!\n<0x10009:0x00010100><pause 30>Leider ist das Pflügen des Feldes für\nmich <0x10009:0x000b0e00>viel zu anstrengend.\n\n\n<0x10009:0x00070700>Doch wo finde ich jemanden, der stark\ngenug ist, mir die Arbeit abzunehmen?\n[1-]Ich kenne da\njemanden![2]Hm, keine\nAhnung...")
/*<101>*/ 						switch (choice(2)) {
          						  case 0:
/*<103>*/ 							printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00070809>Wirklich? Dann sollte ich diese Person\nvielleicht um Hilfe bitten!\n\n\n<0x10009:0x00010700>Falls du ihr begegnest, bitte sei so lieb\nund bringe sie zu mir. Tust du mir den\nGefallen?")
/*<120>*/ 							{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 119, 'param3': 51}
/*<119>*/ 							printf(/* textboxtype: 2, unk: 0, line: 35 */ "Die Wahrscheinlichkeit, dass du für\ndeine Hilfe <color yellow<Juwelen der Güte >coloroff>erhältst,\nliegt bei 90 %.\n\nIch werde also eine Person, die dem\nMädchen beim Pflügen helfen kann,\nals Ziel für die <sound 4><color red<Aurasuche>coloroff> festlegen.\n\nFalls du dich allerdings momentan auf\nder Suche nach einem anderen Objekt\nbefindest, müsste ich dieses Objekt\naus der Aurasuche entfernen.\nSoll ich diese Änderung vornehmen und\ndie Aurasuche so einstellen, dass du\nnach einer <color red<Person, die das Kürbisfeld\nbestellen kann>coloroff>, suchen kannst?\n[1-]Ja[2]Nein")
/*<594>*/ 							switch (choice(2)) {
          							  case 0:
/*<595>*/ 								printf(/* textboxtype: 2, unk: 0, line: 37 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Die Aurasuche\nwurde dementsprechend eingestellt.\nDu kannst nun nach <color red<jemandem, der\ndas Feld bestellt>coloroff>, suchen.")
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
/*<573>*/ 								printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x0001070f>Ich hoffe, du kennst tatsächlich\njemanden und sagst das nicht nur,\ndamit ich mich besser fühle.\n\n<0x10009:0x00070700>Nun, ich darf die Hoffnung nicht\naufgeben. Ich warte hier, bis dieser\nJemand auftaucht!")
          							  case 1:
/*<596>*/ 								printf(/* textboxtype: 2, unk: 0, line: 36 */ "Sehr wohl, <0x10012:0x00000005>Gebieter. Wenn du die\nEinstellung der Aurasuche ändern\nmöchtest, sprich erneut mit dieser\nPerson.")
          								goto flw_572
          							}
          						  case 1:
/*<102>*/ 							printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00011611>Ist das dein Ernst? Du willst also\neinfach dabei zusehen, wie sich ein\nsüßes Mädchen wie ich abrackert?\n\nUnd ich dachte, du seist ein\nehrenwerter Ritter!")
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
/*< 85>*/ 				printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00000001>Ach, da ist ja der Ritter, der für\nunseren kaputten Kronleuchter\nWiedergutmachung leisten möchte.\n\n<0x10009:0x00010700>Hm, warte mal...<pause 30> Vater meinte,\ner hätte wieder Arbeit für dich.\n\n\n<0x10009:0x00070700>Am besten, du gehst gleich zu ihm\nund fragst ihn selbst.")
          			  case 1:
/*<541>*/ 				printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00000001>Ach, da ist ja der Ritter, der für\nunseren kaputten Kronleuchter\nWiedergutmachung leisten möchte.\n\n<0x10009:0x00010700>Wusstest du eigentlich, dass die\nKürbisernte kurz bevorsteht?<pause 30>\n\n\n<0x10009:0x00070700>Ich muss zugeben, dass es mir recht\nschwer fällt, diese wuchtigen Dinger\nzu tragen...")
          			}
          		}
          	}
          }

          void entrypoint_117_19() {
/*<291>*/ 	start()
/*<175>*/ 	printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x0000000c>Oooh ja! Und weiter geht's!")
          }

          void entrypoint_117_53() {
/*<355>*/ 	start()
/*<356>*/ 	set_camera(13, 0)
/*<357>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 359, 'param3': 40}
/*<359>*/ 	wait_frames(45)
/*<361>*/ 	set_camera(14, 0)
/*<360>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 358, 'param3': 40}
/*<358>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_02() {
/*<  8>*/ 	start()
/*< 32>*/ 	switch (context_related2(0)) {
          	  case 0:
/*<  9>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00130809>Ich wusste, du würdest es schaffen!\nDu hast tatsächlich alle Kürbisse ins\nLager gebracht!\n\n<0x10009:0x00010700>Das bedeutet dann wohl, dass es hier\nnichts mehr für dich zu tun gibt!\n<0x10009:0x00190800>Hab <pause 15>vielen, <pause 15>vielen <pause 15>Dank<pause 15>!")
          	  case 1:
/*< 33>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00011611>Oh nein! Du hast sie fallen lassen!\nDu bist aber auch ein Schussel...\n\n\n<0x10009:0x00070700>Nun, du kannst gerne noch einen\nVersuch wagen, falls du dich der\nAufgabe gewachsen fühlst!")
          	}
          }

          void entrypoint_117_54() {
/*<362>*/ 	start()
/*<526>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 527, 'param3': 32}
/*<527>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 363, 'param3': 17}
/*<363>*/ 	set_camera(15, 0)
/*<364>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 366, 'param3': 40}
/*<366>*/ 	wait_frames(45)
/*<368>*/ 	set_camera(16, 0)
/*<367>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 365, 'param3': 40}
/*<365>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_03() {
/*<  7>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00011611>Oh nein! Du hast sie fallen lassen!\nDu bist aber auch ein Schussel...\n\n\n<0x10009:0x00070700>Nun, du kannst gerne noch einen\nVersuch wagen, falls du dich der\nAufgabe gewachsen fühlst!")
          }

          void entrypoint_117_20() {
/*< 11>*/ 	start()
/*<104>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<409>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<106>*/ 			printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x00101604>Sieh nur, was du angerichtet hast!\nIch hätte die Rubine nicht erwähnen\nsollen! Dabei wollte ich dich warnen!\n\n<0x10009:0x001a1600>Gib bloß nicht mir die Schuld, wenn\nVater dir nun eine Standpauke hält!")
          		  case 1:
/*<537>*/ 			switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
          			  case 0:
/*<410>*/ 				printf(/* textboxtype: 1, unk: 0, line: 103 */ "<0x10009:0x00000001>Hallo du! Mein Vater hat mir erzählt,\ndass du deine Schulden für unseren\nkaputten Kronleuchter abarbeiten\nmöchtest.\n<0x10009:0x001a0800>Das wird sicher nicht leicht, aber ich\nglaube an dich!")
          				flw_491:
/*<491>*/ 				switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          				  case 0:
          				  case 1:
/*<490>*/ 					switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          					  case 0:
/*<492>*/ 						printf(/* textboxtype: 1, unk: 0, line: 106 */ "<0x10009:0x001a1000>Was? Du willst etwas über Narisha\nwissen?\n\n\nJetzt, da du ihn erwähnst...\nIch glaube, Vater hat ihm hin und\nwieder etwas Kürbissuppe gebracht.\n\nVielleicht kann er dir ja mehr über\nNarisha erzählen!")
          					  case 1:
          					}
          				}
          			  case 1:
/*<538>*/ 				printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x00101604>Sieh nur, was du angerichtet hast!\nIch hätte die Rubine nicht erwähnen\nsollen! Dabei wollte ich dich warnen!\n\n<0x10009:0x001a1600>Gib bloß nicht mir die Schuld, wenn\nVater dir nun eine Standpauke hält!")
          				goto flw_491
          			}
          		}
          	  case 1:
/*<489>*/ 		switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          		  case 0:
          			flw_105:
/*<105>*/ 			printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x00000001>Hallo du! Du siehst wie ein Ritter aus\ndem Wolkenhort aus! Hab ich Recht?\n<0x10009:0x001a0800>Nimm doch Platz und entspann dich\nein wenig!\n<0x10009:0x000d0700>Oh! Dir sind die Rubine an unserem\nKronleuchter aufgefallen?\n<0x10009:0x00100000>Versuch bloß nicht, die Rubine von\ndort oben herunterzubekommen.\nManche Leute behaupten, man könne\nden Kronleuchter zum Schwingen\nbringen, indem man etwas anrempelt,\nund die Rubine würden fallen...\n<0x10009:0x001a1600>Aber wie dem auch sei...\nDenk <0x10006:0xfccd>nicht mal <0x10006:0x00cd>dran!")
          		  case 1:
/*<487>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<488>*/ 				printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x00000001>Hallo du!\n\n\n\nWillkommen in der Kürbisbar!\nFühl dich ganz wie zu Hause!\n<pause 30>Geht es dir gut? Du wirkst nervös.")
          			  case 1:
          				goto flw_105
          			}
          		}
          	}
          }

          void entrypoint_117_55() {
/*<369>*/ 	start()
/*<370>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 372, 'param3': 40}
/*<372>*/ 	wait_frames(45)
/*<374>*/ 	set_camera(17, 0)
/*<373>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 371, 'param3': 40}
/*<371>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_04() {
/*<163>*/ 	start()
/*<161>*/ 	printf(/* textboxtype: 1, unk: 0, line: 141 */ "Ich habe diesen alten Mogma\nmitgebracht!")
          }

          void entrypoint_117_21() {
/*<247>*/ 	start()
/*<248>*/ 	switch (context_related4(1)) {
          	  case 0:
/*<249>*/ 		printf(/* textboxtype: 1, unk: 0, line: 158 */ "<0x10009:0x00171411>Hm... Ich dachte eigentlich, dass du\neinem solch schönen Instrument\nlieblichere Töne entlocken könntest...\n\n<0x10009:0x00011600>Meine Gäste sahen jedenfalls nicht so\naus, als ob sie sich über die diese...\nMusikuntermalung gefreut hätten.")
          		flw_252:
/*<252>*/ 		scene_flags[21 'The Sky'][21 /* 0x3 20 */] = true;
/*<384>*/ 		story_flags[675 /* us: 805A9B20 0x10, jp: 805ACDA0 0x10 */] = false;
          	  case 1:
/*<599>*/ 		printf(/* textboxtype: 1, unk: 0, line: 161 */ "<0x10009:0x00171411>Das war ja ganz brauchbar.\n\n\n\n<0x10009:0x00011600>Aber mal ehrlich, ein bisschen\nmehr hatte ich schon erwartet...")
          		goto flw_252
          	  case 2:
/*<250>*/ 		printf(/* textboxtype: 1, unk: 0, line: 159 */ "<0x10009:0x00161309>Hui! Du bist ein besserer Musiker, als\nich gedacht habe! Da habe ich dich wohl\ngehörig unterschätzt!\n\n<0x10009:0x00070700>Es wäre schön, wenn du bald wieder\nfür meine Gäste spielen würdest!")
          		goto flw_252
          	  case 3:
/*<251>*/ 		printf(/* textboxtype: 1, unk: 0, line: 160 */ "<0x10009:0x00150d0a>Du warst einfach unglaublich! Dein\nLyraspiel und meine Stimme haben\nperfekt harmoniert!\n\n<0x10009:0x00070800>Du hast eine neue Bewunderin! Ich\nkann es kaum erwarten, dich wieder\nspielen zu hören!")
          		goto flw_252
          	}
          }

          void entrypoint_117_56() {
/*<375>*/ 	start()
/*<528>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 529, 'param3': 32}
/*<529>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 376, 'param3': 17}
/*<376>*/ 	set_camera(18, 0)
/*<377>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 379, 'param3': 40}
/*<379>*/ 	wait_frames(45)
/*<381>*/ 	set_camera(19, 0)
/*<380>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 378, 'param3': 40}
/*<378>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_05() {
/*<164>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 1, unk: 0, line: 142 */ "Richte der verehrten Phai Grüße\nvon mir aus!")
          }

          void entrypoint_117_22() {
/*<253>*/ 	start()
/*<329>*/ 	switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          	  case 0:
/*<330>*/ 		switch (context_related4(0)) {
          		  case 0:
/*<331>*/ 			printf(/* textboxtype: 1, unk: 0, line: 167 */ "<0x10009:0x000a090d>Was war denn DAS? Dein Lyraspiel\nhat Kabochas Stimme total grausig\nklingen lassen!\n\n<0x10009:0x000d0000>Hör mal, Freundchen! Für solch eine\nLeistung werd ich dir auf keinen Fall\netwas zahlen!")
          		  case 1:
/*<600>*/ 			printf(/* textboxtype: 1, unk: 0, line: 171 */ "<0x10009:0x00000010>Hmmm... Ganz ehrlich, sogar das\nGejaule der Lemurin ist schöner als\ndein Lyraspiel. Für diesen Auftritt\nkann ich dir kein Geld geben.")
          		  case 2:
/*<333>*/ 			printf(/* textboxtype: 1, unk: 0, line: 168 */ "<0x10009:0x0000000e>Das war gar nicht so schlecht.\nMit ein bisschen mehr Übung könntest\ndu Kabocha bestimmt beeindrucken!\n\n<0x10009:0x000e0700>Für diese gelungene Darbietung zahle\nich dir <color red<20 Rubine>coloroff>!")
/*<334>*/ 			rupees += 20;
          		  case 3:
/*<332>*/ 			printf(/* textboxtype: 1, unk: 0, line: 169 */ "<0x10009:0x000b100c>Eine Spitzenleistung, <heroname>!\nDas war einfach fantastisch!\n\n\n<0x10009:0x000c0700>Für diesen Auftritt zahle ich dir\n<color red<50 Rubine>coloroff>!")
/*<335>*/ 			rupees += 50;
          		}
          	  case 1:
/*<255>*/ 		switch (context_related4(0)) {
          		  case 0:
/*<254>*/ 			printf(/* textboxtype: 1, unk: 0, line: 162 */ "<0x10009:0x000f0a0d>Was soll DAS denn?\nNennst du DAS etwa Musik?\n\n\n<0x10009:0x000a0900>Glaub nur nicht, dass damit deine\nSchulden beglichen sind! Reiß dich\nzusammen und spiel noch mal!")
          		  case 1:
/*<601>*/ 			printf(/* textboxtype: 1, unk: 0, line: 170 */ "<0x10009:0x00000010>Na ja, das war zwar nicht der beste\nAuftritt, den ich je gesehen habe, aber\nimmerhin war es ja dein erstes Mal.\nAlso gut, die Aufgabe ist bestanden!")
          			flw_258:
/*<258>*/ 			printf(/* textboxtype: 1, unk: 0, line: 165 */ "<0x10009:0x000b0700>Nun, das bedeutet dann wohl, dass du\nnicht länger für mich arbeiten musst.\nGut gemacht!\n\n<0x10009:0x000e1100>Und ich habe beschlossen, dass ich mir\nschon bald einen neuen Kronleuchter\nzulegen werde!\n\n<0x10009:0x000d0700>Da ich mit deiner Leistung überaus\nzufrieden war, gibt es auch noch eine\nBelohnung von mir. Los, nimm schon!")
/*<534>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 305, 'param3': 42}
/*<305>*/ 			give_item(94 0x5E);
/*<304>*/ 			printf(/* textboxtype: 1, unk: 0, line: 166 */ "<0x10009:0x00010700>Schau doch mal wieder vorbei!\nAber dann als Gast!")
/*<259>*/ 			story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */] = true;
          		  case 2:
/*<256>*/ 			printf(/* textboxtype: 1, unk: 0, line: 163 */ "<0x10009:0x0000000e>Nicht schlecht, nicht schlecht.\nDu hast dich wacker geschlagen!")
          			goto flw_258
          		  case 3:
/*<257>*/ 			printf(/* textboxtype: 1, unk: 0, line: 164 */ "<0x10009:0x000b100c>Das war... unglaublich...\nIch hätte beinahe weinen müssen!\nDu bist ja so talentiert!")
          			goto flw_258
          		}
          	}
          }

          void entrypoint_117_57() {
/*<443>*/ 	start()
/*<465>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<466>*/ 		printf(/* textboxtype: 1, unk: 0, line: 192 */ "<0x10009:0x0003080c>Oh nein! Schau nur, was du für ein\nChaos veranstaltet hast!\n\n\n<0x10009:0x00000100>Schätze, dafür gibt es einen Satz\nheiße Ohren...")
          	  case 1:
/*<579>*/ 		switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          		  case 0:
/*<584>*/ 			printf(/* textboxtype: 1, unk: 0, line: 193 */ "<0x10009:0x00000001>Hey, <heroname>!\nWenn du viele Insekten hast und nichts\ndamit anzufangen weißt, verkauf sie\nmir doch einfach!\n<0x10009:0x00120000>Aber hier ist nicht der geeignete Ort\ndafür. Komm doch nachts in mein\nZimmer in der Schule...")
          		  case 1:
/*<578>*/ 			switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          			  case 0:
/*<581>*/ 				switch (zone_temp_flags[5 /* 0x1 20 */]) {
          				  case 0:
/*<583>*/ 					printf(/* textboxtype: 1, unk: 0, line: 195 */ "<0x10009:0x00120001>Wenn du es schaffst, durch die Felsen\nmit den Löchern zu fliegen, wird die\nReise im Wolkenmeer viel angenehmer!\n\n<0x10009:0x00030104>Stößt du jedoch mit einem der Felsen\nzusammen, könnte sich aber auch alles\nins Gegenteil verkehren, hehehe!")
          				  case 1:
/*<580>*/ 					printf(/* textboxtype: 1, unk: 0, line: 194 */ "<0x10009:0x00000001>Hallo, <heroname>!\nIch habe etwas Neues für dich!\n\n\nHast du im Wolkenmeer schon einmal\ndiese <color red<Felsen>coloroff> gesehen, <color red<in deren Mitte\nein Loch ist>coloroff>?\n\nWenn du dort durchfliegst, wird dein\nWolkenvogel auf mysteriöse Weise <color red<eine\nZeit lang >coloroff>schneller!\n\n<0x10009:0x00120000>Geübte Vogelreiter nutzen diese\nFelsen, um sich noch flinker im\nWolkenmeer fortzubewegen!")
/*<582>*/ 					zone_temp_flags[5 /* 0x1 20 */] = true;
          				}
          			  case 1:
/*<444>*/ 				printf(/* textboxtype: 1, unk: 0, line: 189 */ "<0x10009:0x00000001>Hey, <heroname>!\n\n\n\n<0x10009:0x00120000>Hätte nicht gedacht, dich hier zu\ntreffen. Du fragst dich sicher,\nwas ich hier treibe...\n[1-]Stimmt![2-]Nicht wirklich...")
/*<445>*/ 				switch (choice(2)) {
          				  case 0:
/*<446>*/ 					printf(/* textboxtype: 1, unk: 0, line: 190 */ "<0x10009:0x00030104>Bestimmt habe ich es schon einmal\nerwähnt... Ich liiiebe Insekten!\n\n\nUnd genau deshalb bin ich hier:\nUm Insekten für meine Sammlung\nzu fangen!\n\n<0x10009:0x00040100>Wenn du bereits ein Schmetterlingsnetz\nhast, kannst du gleich loslegen.\n\n\nUnd falls du noch keines besitzt, kannst\ndu dir eines in Terris Laden kaufen.\n\n\n<0x10009:0x00120100>Wahrscheinlich dreht er gerade wieder\nseine Runden über dem Wolkenhort.")
          				  case 1:
/*<447>*/ 					printf(/* textboxtype: 1, unk: 0, line: 191 */ "<0x10009:0x00040805>Wie, nicht wirklich?\n\n\n\n<0x10009:0x00040100>Ich dachte mir schon, dass du mit\nInsekten nichts anfangen kannst!")
          				}
          			}
          		}
          	}
          }

