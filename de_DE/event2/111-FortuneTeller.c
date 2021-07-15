          void entrypoint_111_01() {
          	start()
/*< 12>*/ 	switch (story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */]) {
          	  case 0:
/*< 18>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
          			flw_19:
/*< 19>*/ 			printf("Du hast meine Prophezeiung von eben\nnicht verstanden? Waren meine Worte\nnicht deutlich genug?\n\nNun, ich wiederhole sie noch einmal,\nalso lausche meinen Worten!")
/*<162>*/ 			zone_temp_flags[3 /* 0x1 08 */] = false;
          			flw_74:
/*< 74>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*< 76>*/ 				printf("Was hast du nur getan, mein junger\nFreund? Die Insel der Göttin ist aus\ndem Wolkenhort verschwunden!\n\nDoch ich sehe, dass du dies aus einem\nguten Grund getan hast.\n\n\nNun kann ich dir nur noch eine Sache\nmit auf den Weg geben: Folge deinem\nHerzen, junger Freund!")
          				flw_127:
/*<127>*/ 				entrypoint_111_05();
          			  case 1:
/*<137>*/ 				switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          				  case 0:
/*<138>*/ 					printf("Das, was du suchst, wirst du auf der\nInsel der Göttin finden.\n\n\nDoch der Weg zu deinem Ziel wird sehr\nbeschwerlich sein... Du musst nun stark\nsein, junger Freund.")
          					goto flw_127
          				  case 1:
/*< 73>*/ 					switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          					  case 0:
/*<136>*/ 						printf("Du hast sogar die letzte der Prüfungen\nbestanden...\n\n\nNun, ich habe jedenfalls das Gefühl,\ndass dies die letzte war.\n\n\nIn dieser letzten Prüfung hast du etwas\nerhalten, das du benötigst, um deinen\nWeg weiterzugehen.\n\nIrgendwo hier im Wolkenhort scheint\nes einen <r<Stein in Form eines Auges >>zu\ngeben, der in der <r<Statue eines Vogels>>\nsteckt.\nIch bin sicher, du hast diese Statue\nschon einmal gesehen.\n\n\nFinde sie, und der Weg wird sich vor dir\nauftun, junger Freund...")
          						goto flw_127
          					  case 1:
/*< 72>*/ 						switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          						  case 0:
/*<129>*/ 							printf("Nutze das Lied, das du von einem sehr\ngroßen Wesen erlernt hast, um nun das\n<r<Portal der Prüfung >>zu finden.\n\nEs scheint so, als würde die nächste\nPrüfung <r<irgendwo im Wolkenhort >>auf\ndich warten...\n\nWas mag das wohl bedeuten?")
          							goto flw_127
          						  case 1:
/*<199>*/ 							switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          							  case 0:
/*<198>*/ 								switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          								  case 0:
/*<200>*/ 									switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          									  case 0:
/*<201>*/ 										printf("Es scheint, als hättest du drei Teile\neines Liedes zusammen, doch den\nletzten hat jemand, der sehr... groß\nist! Unglaublich groß sogar...\nDu solltest dich schnell auf den Weg\nzu diesem... großen Wesen machen.")
          										goto flw_127
          									  case 1:
          										flw_71:
/*< 71>*/ 										switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          										  case 0:
/*< 77>*/ 											check_item_flag(497, 1)
/*< 78>*/ 											switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 52}) {
          											  case 0:
/*< 79>*/ 												printf("Oooh... Ich sehe, dass du etwas ganz\nBestimmtes erledigen musst...\n\n\nSuche einen Ort, um den Keimling zu\npflanzen! Für diese besondere Saat\nkommt jedoch nur ein besonderer Ort\nin Frage.\n\x0E\x01\x06\x02\xFCCDHmmm... Eine alte Frau...\x0E\x01\x06\x02Í Sie lebt an\ndiesem Ort. Oh, ist das ein Tempel? Ja,\nich glaube, das ist ein geeigneter Ort.")
          												flw_88:
/*< 88>*/ 												entrypoint_111_05();
          											  case 1:
/*< 75>*/ 												printf("Mache dich auf die Suche nach den\nvier Teilen eines Liedes!\n\n\nDer Weg, den du nun gehen musst,\nführt dich an drei<pause0A> Orte. Du kannst\nselbst wählen, welchen du zuerst\nbesuchst.\nSobald du einen dieser Orte betrittst,\nwirst du auf jemanden treffen, der\nbereits auf dich wartet.")
          												goto flw_88
          											}
          										  case 1:
/*< 70>*/ 											switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          											  case 0:
/*<128>*/ 												printf("Du scheinst die Person getroffen zu\nhaben, nach der du gesucht hast! Wie\nüberaus erfreulich!\n\nDoch deine Prüfung ist damit noch\nnicht vorbei. Suche nach dem großen\nWesen, das in den Wolken lebt.\n\nDer <r<Direktor der Ritterschule >>kann dir\nmehr darüber erzählen.")
          												flw_126:
/*<126>*/ 												entrypoint_111_05();
          											  case 1:
/*< 66>*/ 												switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          												  case 0:
/*< 69>*/ 													printf("Ich sehe den gewaltigen Schatten einer\ngigantischen Bestie...\n\n\nEs ist unglaublich! Wie oft ich auch in\ndeine Zukunft sehe, ich bin jedes Mal\naufs Neue überrascht...\n\nWie dem auch sei, ich rate dir, eine\ngroße Menge an <r<Tränken>> bei dir zu\ntragen. Man weiß ja nie...")
          													goto flw_126
          												  case 1:
/*<183>*/ 													switch (story_flags[73 /* us: 805A9AE9 0x40, jp: 805ACD69 0x40 */]) {
          													  case 0:
/*< 90>*/ 														switch (story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */]) {
          														  case 0:
/*< 92>*/ 															switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
          															  case 0:
/*<179>*/ 																switch (story_flags[187 /* us: 805A9AE9 0x04, jp: 805ACD69 0x04 */]) {
          																  case 0:
/*<180>*/ 																	printf("Du weißt genau, was du zu tun hast,\njunger Freund.\n\n\nVergiss nicht, einen <r<Eisenschild>> bei dir\nzu tragen, wenn du dich der Hitze am\nBerg des Feuers entgegenstellst.")
          																	flw_186:
/*<186>*/ 																	entrypoint_111_05();
          																  case 1:
/*<188>*/ 																	switch (story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */]) {
          																	  case 0:
/*<187>*/ 																		printf("Du musst das Gefäß voll Wasser zum\nBerg des Feuers bringen...\n\n\nOh... Ich sehe, dass jemand bereits\nsehnsüchtig darauf wartet.")
          																		goto flw_186
          																	  case 1:
/*< 93>*/ 																		printf("Du benötigst Wasser... Und zwar eine\nsehr große Menge.\n\n\nJedoch fehlt dir ein Gefäß, um diese\ngroße Menge Wasser zu transportieren.\n\n\nVielleicht findest du in einem Wald ja\netwas, das dir in dieser Angelegenheit\nbehilflich ist.")
/*< 94>*/ 																		switch (story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */]) {
          																		  case 0:
          																			goto flw_186
          																		  case 1:
/*<123>*/ 																			{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 178, 'param3': 51}
/*<178>*/ 																			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 95, 'param3': 16}
/*< 95>*/ 																			printf("Die Wahrscheinlichkeit, das gesuchte\nObjekt im Wald zu finden, liegt bei\n60 %.\n\nIch empfehle dir, dich auf den Weg in\nden Wald zu machen.\n\n\n<pling>Soll ich den <r<Wasserbehälter>> als Ziel für\ndie <r<Aurasuche>> festlegen?\n[1]Ja, bitte.[2-]Jetzt nicht.")
/*< 97>*/ 																			switch (choice(2)) {
          																			  case 0:
/*< 99>*/ 																				story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = true;
/*<100>*/ 																				story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<101>*/ 																				story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<102>*/ 																				story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<103>*/ 																				story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<104>*/ 																				story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<189>*/ 																				open_dowsing_wheel(13)
/*< 96>*/ 																				printf("Ich habe den <r<Wasserbehälter>> als Ziel\nfür die <r<Aurasuche>> festgelegt, \x0E\x01\x12\x04\x00\x05Gebieter.\n\n\nBitte mache dich nun auf die Suche.")
/*<190>*/ 																				story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          																				flw_105:
/*<105>*/ 																				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 125, 'param3': 36}
/*<125>*/ 																				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 124, 'param3': 16}
/*<124>*/ 																				entrypoint_111_05();
          																			  case 1:
/*< 98>*/ 																				printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter. Solltest du deine\nMeinung ändern, so sprich erneut mit\ndiesem Wesen hier.")
          																				goto flw_105
          																			}
          																		}
          																	}
          																}
          															  case 1:
/*< 91>*/ 																printf("Oh, du hast die Prüfung im Land des\nFeuers bestanden... Und als nächstes\nwirst du viel Wasser benötigen.\n\nKomm zu mir, wenn es soweit ist und\ndu nicht weiter weißt.")
          																flw_89:
/*< 89>*/ 																entrypoint_111_05();
          															}
          														  case 1:
/*< 68>*/ 															printf("Hmmm... Wie viele Prüfungen musst\ndu wohl noch bestehen?\n\n\nDas nächste <r<Portal der Prüfung >>liegt\nan einem Berg voller Flammen.\n\n\nIch rate dir übrigens davon ab, dort\neinen <r<Holzschild>> zu tragen...")
          															goto flw_89
          														}
          													  case 1:
/*< 65>*/ 														switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          														  case 0:
/*<184>*/ 															printf("Um dein Schicksal zu erfüllen, musst\ndu an einem heiligen Ort ein <r<Lied\n>>erlernen.\n\nIch sehe, dass du diesen Ort bereits\neinmal betreten hast.\n\n\nEin heiliger Ort, tief in den Wolken...\nDies zeigt mir meine Kristallkugel.")
          															flw_185:
/*<185>*/ 															entrypoint_111_05();
          														  case 1:
/*<181>*/ 															switch (story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */]) {
          															  case 0:
/*<205>*/ 																switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          																  case 0:
/*<206>*/ 																	printf("Oho, ich sehe, du hast die Prüfung im\nSand bestanden!\n\n\nUnd doch sehe ich wieder Sand...\nEin <r<Meer>>...<pause14>Ein <r<Schiff>>...<pause14> So ganz\nverstehe ich das nicht, aber du musst\nwohl wieder in das Land des Sandes.")
          																	goto flw_185
          																  case 1:
/*< 67>*/ 																	printf("Ein <r<Portal der Prüfung >>liegt in einem\nOrt voller Sand.\n\n\nFolge dem Sand, mein junger Freund.")
          																	goto flw_185
          																}
          															  case 1:
/*< 64>*/ 																switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          																  case 0:
/*<182>*/ 																	printf("Um dein Schicksal zu erfüllen, musst\ndu an einem heiligen Ort ein <r<Lied\n>>erlernen.\n\nIch sehe, dass du diesen Ort bereits\neinmal betreten hast.\n\n\nEin heiliger Ort, tief in den Wolken...\nDies zeigt mir meine Kristallkugel.")
          																	flw_87:
/*< 87>*/ 																	entrypoint_111_05();
          																  case 1:
/*< 62>*/ 																	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
          																	  case 0:
/*<203>*/ 																		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          																		  case 0:
/*<204>*/ 																			printf("Ah, du hast die Prüfung im Wald\nbestanden!\n\n\nJetzt sehe ich einen <r<großen Baum>> in\ndiesem Wald... Dort triffst du jemand\nWichtiges...\n\nUnd dann eine große Steinstatue...<pause14>\nUnter der Erde...<pause14> Sie bewegt sich\nnach unten und oben und bleibt nicht\nan ihrem Platz...\nDu solltest in den Wald gehen!")
          																			goto flw_87
          																		  case 1:
/*< 63>*/ 																			printf("Du musst die Prüfung in einer dunklen\nWelt bestehen, junger Freund. Eine gar\nabscheuliche Vorstellung...\n\nDer Ort der Prüfung liegt in einem\nWald. Ich wünsche dir viel Glück!")
          																			goto flw_87
          																		}
          																	  case 1:
/*< 60>*/ 																		switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          																		  case 0:
/*< 61>*/ 																			printf("Richte die zwei großen Flügel auf den\ngroßen Turm und spiele ein Lied auf\nder Spitze des Turmes...\n\nNur dann wirst du das Licht sehen, das\ndir den Weg weist!")
/*<202>*/ 																			entrypoint_111_05();
          																		  case 1:
/*<175>*/ 																			switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          																			  case 0:
/*< 57>*/ 																				switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          																				  case 0:
/*< 58>*/ 																					printf("Junger Freund, ich sehe du bist auf der\nSuche nach etwas.\n\n\nEin kleiner Propeller, der in die Tiefen\nunter den Wolken gestürzt ist...\n\n\nIch sehe ihn... auf einem <r<Berg voller\nFlammen>>. Nahe eines Abhanges beim\n<r<Tempel am Vulkan>> liegt er und... nun,\nliegt eben dort.\nOb ich damit wohl richtig liege?")
/*<120>*/ 																					switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          																					  case 0:
/*<121>*/ 																						entrypoint_111_05();
          																					  case 1:
/*<111>*/ 																						{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 177, 'param3': 51}
/*<177>*/ 																						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 108, 'param3': 16}
/*<108>*/ 																						printf("")
/*<109>*/ 																						switch (choice(2)) {
          																						  case 0:
/*<112>*/ 																							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<113>*/ 																							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<114>*/ 																							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<115>*/ 																							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<116>*/ 																							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<117>*/ 																							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<191>*/ 																							open_dowsing_wheel(13)
/*<193>*/ 																							printf("")
/*<192>*/ 																							story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          																							flw_118:
/*<118>*/ 																							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 122, 'param3': 36}
/*<122>*/ 																							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 119, 'param3': 16}
/*<119>*/ 																							entrypoint_111_05();
          																						  case 1:
/*<110>*/ 																							printf("")
          																							goto flw_118
          																						}
          																					}
          																				  case 1:
/*<194>*/ 																					switch (story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */]) {
          																					  case 0:
/*<195>*/ 																						printf("Hmmm... Junger Freund, ich sehe, du\nbrauchst etwas, um etwas anderes zu\nreparieren.\n\nJa\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Ich sehe eine <y<Äonenblume>>...\n\n\n\nSie wuchs einst in einem großen <r<Land\nvoller Sand>>...<pause14> Nur dort kannst du sie\nfinden!")
          																						flw_86:
/*< 86>*/ 																						entrypoint_111_05();
          																					  case 1:
/*< 59>*/ 																						printf("Ich sehe zwei Gebäude mit sehr großen\nFlügeln. Nur der Wind hat die Kraft,\nsie zu bewegen.\n\nDrehe die beiden Gebäude in Richtung\ndes Turmes...")
          																						goto flw_86
          																					}
          																				}
          																			  case 1:
/*< 56>*/ 																				switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          																				  case 0:
/*<176>*/ 																					printf("Oh, du hast ein sehr großes Hindernis\nüberwunden, junger Freund! Ich kann\ndeine Freude spüren!\n\nDein nächstes Ziel ist...<pause1E> die <r<Hymne\nder Göttin>>!<pause1E>\n\n\nIch sehe jemanden, der dir mehr über\ndie Hymne der Göttin erzählen kann.\nFrage den <r<Direktor der Ritterschule\n>>um Rat.")
          																					flw_85:
/*< 85>*/ 																					entrypoint_111_05();
          																				  case 1:
/*< 36>*/ 																					switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          																					  case 0:
/*< 37>*/ 																						printf("Dein nächstes Ziel ist...\n\n\n\nOh! Etwas sehr Bedeutungsvolles wird\ngeschehen! Etwas <pause1E>gigantisch <pause14>Großes\n<pause28>kommt auf dich zu!\n\nNimm am besten genügend <r<Herztränke\n>>mit, um auf alles vorbereitet zu sein.")
          																						goto flw_85
          																					  case 1:
/*< 35>*/ 																						switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          																						  case 0:
/*< 34>*/ 																							printf("Ich sehe... Sand. Einen Strand? Nein,\nnoch mehr Sand! Noch viel mehr Sand!\n\n\nUnd nicht nur das, ich spüre auch ein\nseltsames Kribbeln, als ob ein Blitz\ndurch meinen ganzen Körper fahren\nwürde!\nEin Eisenschild ist dort bestimmt fehl\nam Platz. Nimm einen <r<Holzschild>> oder\neinen noch stärkeren Schild mit!\n\nUnd vergiss nicht, ausreichend <r<Bomben\n>>bei dir zu tragen. Meine Kristallkugel\nsagt mir, dass du viele benötigen wirst.")
          																							goto flw_85
          																						  case 1:
/*< 22>*/ 																							switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          																							  case 0:
/*< 23>*/ 																								printf("Ich sehe Feuer... Aaah! Einen Ort voll\nlodernder Flammen! Mir wird schon\nvom Hinsehen ganz heiß, mein Freund.\n\nEin Holzschild wird dich an diesem Ort\nkaum schützen können. Aber Eisen...\nJa, das ist es. Kaufe einen <r<Eisenschild>>!\n\nUnd auch ein <r<Herztrank >>im Gepäck ist\nstets nützlich, aber das weißt du doch\nbestimmt schon...")
/*< 84>*/ 																								entrypoint_111_05();
          																							  case 1:
/*< 16>*/ 																								printf("Du wirst einen Ort voller saftigem\nGrün betreten... Oh, und ich sehe\nBäume. Unglaublich... viele... <pause14>Bäume<pause0A>!\n\nEin <r<Holzschild>> wäre an jenem Ort wohl\ndie geeignete Ausrüstung. Und auch ein\n<r<roter Trank >>im Gepäck schadet nicht!")
/*< 83>*/ 																								entrypoint_111_05();
          																							}
          																						}
          																					}
          																				}
          																			}
          																		}
          																	}
          																}
          															}
          														}
          													}
          												}
          											}
          										}
          									}
          								  case 1:
          									goto flw_71
          								}
          							  case 1:
          								goto flw_71
          							}
          						}
          					}
          				}
          			}
          		  case 1:
/*< 31>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 13, 'param3': 12}
/*< 13>*/ 			printf("\x0E\x01\x09\x04\x00\x03Sei gegrüßt, junger Freund. Soll ich dir\ndeine Zukunft voraussagen? Ein Blick\nin deine Zukunft kostet dich <r<10 Rubine>>.\n\nNur <r<10 Rubine>> und ich sage dir, wohin\ndein Schicksal dich führen wird. Nun,\nsoll ich beginnen?\n[1]Gerne![2-]Nein...")
/*< 14>*/ 			switch (choice(2)) {
          			  case 0:
/*< 29>*/ 				switch (has_rupees(10)) {
          				  case 0:
/*< 30>*/ 					rupees += -10;
          					flw_160:
/*<160>*/ 					switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          					  case 0:
/*<141>*/ 						printf("Also gut, worüber möchtest du etwas\nerfahren, junger Freund?\n[1]Schicksal[2]Schätze")
/*<174>*/ 						scene_flags[0 'Skyloft'][86 /* 0xB 40 */] = true;
/*< 27>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 12}
/*<142>*/ 						switch (choice(2)) {
          						  case 0:
/*< 20>*/ 							printf("So soll es sein! Dann blicke ich für dich\nin die Zukunft!")
          							flw_38:
/*< 38>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2560, 'next': 164, 'param3': 13}
/*<164>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 50, 'next': 39, 'param3': 54}
/*< 39>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 160, 'next': 40, 'param3': 6}
/*< 40>*/ 							{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -238, 'next': 165, 'param3': 13}
/*<165>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 50, 'next': 17, 'param3': 54}
/*< 17>*/ 							zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 21>*/ 							printf("Oooh! Ich sehe es! Jaaa... Ich sehe es\nganz deutlich vor mir!")
          							goto flw_74
          						  case 1:
/*<145>*/ 							entrypoint_111_06();
          						}
          					  case 1:
/*<161>*/ 						printf("So soll es sein.")
/*<163>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 38, 'param3': 12}
          						goto flw_38
          					}
          				  case 1:
/*< 32>*/ 					printf("\x0E\x01\x09\x04\x09\x909Du besitzt leider nicht genug Rubine,\njunger Freund.\n\n\nMeine sanften Augen mögen es wohl so\nerscheinen lassen, aber ich bin fürwahr\nkein Wohltäter! Ohne Rubine wage ich\nauch keinen Blick in die Zukunft!")
          				}
          			  case 1:
/*< 15>*/ 				printf("\x0E\x01\x09\x04\x09\x900Ich verstehe. Nun, es wird die Zeit\nkommen, da du meine Dienste sehr\nwohl benötigen wirst.\n\nKomm bloß nicht heulend angerannt,\nwenn es so weit ist!")
          			}
          		}
          	  case 1:
/*<173>*/ 		scene_flags[0 'Skyloft'][26 /* 0x2 04 */] = true;
/*< 24>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 1, 'param3': 12}
/*<  1>*/ 		printf("\x0E\x01\x09\x04\x00\x03Sei gegrüßt, junger Freund. Soll ich\ndir deine Zukunft voraussagen?\n\n\nÜblicherweise verlange ich dafür ja\n10 Rubine, aber nur heute wage ich\nden Blick in den Kristall für nur\n<r<einen einzigen Rubin>>.\nHörst du? Nur <r<ein Rubin>>. Möchtest du\ndeine Zukunft erfahren?\n[1]Gerne![2-]Nein...")
/*<  4>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_25:
/*< 25>*/ 			switch (has_rupees(1)) {
          			  case 0:
/*< 26>*/ 				rupees += -1;
/*<  8>*/ 				printf("\x0E\x01\x09\x04\x00\nOh, wie schön! Ich hatte schon so lange\nkeine Kunden mehr!\n\n\nAh\x0E\x01\x06\x02\xFDCD...\x0E\x01\x06\x02Í Nein, versteh mich nicht falsch!\nDiese sanften Augen verfügen über die\nMacht der Weissagung, junger Freund!")
          				goto flw_160
          			  case 1:
/*< 28>*/ 				printf("\x0E\x01\x09\x04\x09\x909Du besitzt nicht einmal einen Rubin,\njunger Freund? Wie bedauerlich...\n\n\nNun, die Zukunft eines solch armen\nHänflings kann ich mir auch ohne den\nBlick in den Kristall gut vorstellen...")
          			}
          		  case 1:
/*<  5>*/ 			printf("\x0E\x01\x09\x04\x00\x07Wie unerwartet! Du schlägst mein\ngroßzügiges Angebot aus? Hast du\ndenn etwa kein Vertrauen in meine\ngroßartigen Fähigkeiten?\nNun, wie dem auch sei, solltest du deine\nMeinung ändern, wage ich jederzeit\nfür dich einen Blick in deine Zukunft.\n\nUnd, ähem... Bist du dir auch wirklich\nsicher, dass du mein Angebot nicht\nannehmen möchtest?\n[1]Also gut![2-]Ja, kein\nBedarf!")
/*<  6>*/ 			switch (choice(2)) {
          			  case 0:
          				goto flw_25
          			  case 1:
/*<  7>*/ 				printf("Dein Starrsinn ist sehr beeindruckend,\njunger Freund. Nun, du scheinst auch\nohne Wahrsagerei deinen Weg stets zu\nfinden, so so...\nUnd doch... frage ich dich noch ein\nallerletztes Mal. Möchtest du meine\nDienste wirklich nicht in Anspruch\nnehmen?\n[1]Also gut.[2-]N-e-i-n!")
/*<  9>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_25
          				  case 1:
/*< 10>*/ 					printf("\x0E\x01\x09\x04\x09\x909Du zweifelst tatsächlich an meinen\nFähigkeiten... Ich hoffe, dass du\ndeinen Starrsinn nicht später noch\nbereust...\x0E\x01\x08\x02\xFECD Grml! Unwürdiger Banause!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_111_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf("\x0E\x01\x09\x04\x00\x02Aaah! Oooh! Uuuh! Was ist denn das?\nWas sehen meine Augen?\n\n\nJunger Freund, ich sehe, vor dir liegt\nein beschwerlicher Weg... Er ist voller\nGefahren, steil und mit Hindernissen\ngeradezu übersät.\nJunger Freund, solltest du dein Ziel je\naus den Augen verlieren, blicke ich für\ndich in die Zukunft, denn ich bin ein\nwahrhaftiger Wahrsager! Ah!\nVertraue meinen \x0E\x01\x06\x02\xFCCD<r<sanften Augen>>...\x0E\x01\x06\x02Í\nLausche meiner klaren Stimme...\nDann droht dir keine Gefahr. Komm\njederzeit zu mir, junger Freund!")
          }

          void entrypoint_111_03() {
/*< 48>*/ 	start()
          	goto flw_160
          }

          void entrypoint_111_04() {
/*< 53>*/ 	start()
          	goto flw_19
          }

          void entrypoint_111_05() {
/*< 82>*/ 	start()
/*<130>*/ 	switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
          	  case 0:
/*<131>*/ 		printf("Wenn du nach <r<Pflanzen>> suchst, wirst du\nim <r<Wald>> fündig werden... \x0E\x01\x06\x02\xFBCDSo ein...\ngroßer...\x0E\x01\x06\x02Í Wald...")
          		flw_132:
/*<132>*/ 		switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          		  case 0:
/*<133>*/ 			printf("Du suchst jemanden, der ein Feld\nbestellen kann.\n\n\nIm Wolkenhort wirst du jedoch nicht\nfündig werden. Suche nach jemandem,\nder <r<hervorragend Löcher graben >>kann.\n\nEine <r<Höhle >>ist der geeignete Ort, um\nnach so jemandem zu suchen.")
          			flw_134:
/*<134>*/ 			switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          			  case 0:
/*<135>*/ 				printf("Ah, ich sehe es! Du bist auf der Suche\nnach einem verlorenen Gegenstand!\n\n\nEin glänzendes Objekt, das sich im\nKreise dreht! Oh ja, ich sehe, wo du\nes finden kannst...\n\nSuche an einem <r<trockenen Ort voller\nSand>>...")
          				flw_170:
/*<170>*/ 				switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          				  case 0:
/*<171>*/ 					switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          					  case 0:
          						flw_33:
/*< 33>*/ 						printf("\x0E\x01\x09\x04\x00\x12Nun, das wäre alles für den Moment.\nSolltest du erneut vom Weg abkommen,\nzögere nicht, mich um Rat zu fragen.")
/*< 41>*/ 						printf("\x0E\x01\x05\x04\x1E\x00\x0E\x01\x09\x04\x0B\xB0DViel Glück!")
/*< 11>*/ 						story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */] = true;
          					  case 1:
/*<172>*/ 						printf("Ich sehe eine Person, die ein geliebtes\nInsekt verloren hat...\n\n\nDas Insekt versteckt sich an einem Ort,\nan dem sich auch ein <r<Insektenliebhaber\n>>aufhält.")
          						goto flw_33
          					}
          				  case 1:
          					goto flw_33
          				}
          			  case 1:
          				goto flw_170
          			}
          		  case 1:
          			goto flw_134
          		}
          	  case 1:
          		goto flw_132
          	}
          }

          void entrypoint_111_06() {
/*<143>*/ 	start()
/*<144>*/ 	printf("Schätze also... Nun, ich selbst habe ja\nnoch nie einen Schatz gefunden...\n\n\nAber wie dem auch sei, meine Augen\nsehen alles! Dann wage ich nun den\nBlick in die Kristallkugel...")
/*<147>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2560, 'next': 166, 'param3': 13}
/*<166>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 50, 'next': 148, 'param3': 54}
/*<148>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 160, 'next': 149, 'param3': 6}
/*<149>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -238, 'next': 167, 'param3': 13}
/*<167>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 50, 'next': 146, 'param3': 54}
/*<146>*/ 	printf("Oooh! Ich sehe es! Jaaa... Ich sehe es\nganz deutlich vor mir!")
/*<156>*/ 	printf("Oooh... Ein Wald... Ein Land voll Sand!\nEin Feuerberg... Und dazu zahlreiche\nMonster...\n\nÜber welche Schätze soll ich meine\nKristallkugel befragen?\n[1]Wald[2]Land voll Sand[3]Feuerberg[4]Monster")
/*<150>*/ 	switch (choice(4)) {
          	  case 0:
/*<151>*/ 		printf("Der Wald... Aaah, ich sehe ihn deutlich\nvor mir! Du kannst <y<Vogelfedern >>und\n<y<Bienenlarven>> finden.\n\nFange kleine Vögel mit einem Netz, um\nan die <y<Vogelfedern >>zu gelangen.\n\n\n<y<Bienenlarven>> erhältst du, wenn du\neinen Bienenstock zu Boden stürzen\nlässt.\n\nUnd hast du das Glück auf deiner Seite,\nfindest du statt einer Vogelfeder sogar\neine seltene <r<blaue Vogelfeder>>.")
          		flw_155:
/*<155>*/ 		printf("An den meisten Orten kannst du zudem\n<y<Bernsteinhalbmonde >>oder die seltenen\n<y<Finsterhalbmonde>> finden.\n\n<y<Finsterhalbmonde>> findest du jedoch\nnur während einer Prüfung.\n\n\nDer seltenste Schatz, den ich sehe, ist\ndas <y<Geschenk der Göttin>>. Findest du\ndies, bist du wohl wahrlich vom Glück\ngesegnet worden!")
/*<157>*/ 		printf("\x0E\x01\x09\x04\x00\x12Nun, das wäre alles für den Moment.\nSolltest du erneut vom Weg abkommen,\nzögere nicht, mich um Rat zu fragen.")
/*<158>*/ 		printf("\x0E\x01\x05\x04\x1E\x00\x0E\x01\x09\x04\x0B\xB0DViel Glück!")
/*<159>*/ 		story_flags[45 /* us: 805A9AE7 0x40, jp: 805ACD67 0x40 */] = true;
          	  case 1:
/*<152>*/ 		printf("Das Land voll Sand... Aaah, ich sehe es\nvor mir! Du kannst dort <y<Wüstengras\n>>und <y<Äonenblumen >>finden, mein junger\nFreund.\nDas <y<Wüstengras>> kannst du mit einem\nNetz einfangen, wenn es durch die\nGegend rollt.\n\n<y<Äonenblumen>> jedoch findest du, wenn\ndu in eine längst vergangene Epoche\nzurückkehrst.")
          		goto flw_155
          	  case 2:
/*<153>*/ 		printf("Der Feuerberg... Aaah, ich sehe ihn\nvor mir! Du kannst dort <y<Eldin-Erz>> und\n<y<Eidechsenschwänze >>finden...\n\nUm an <y<Eldin-Erz>> zu gelangen, musst du\nLöcher in den Boden graben.\n\n\n<y<Eidechsenschwänze>>... Nun, dazu musst\ndu einer Eidechse wohl den Schwanz\nabschlagen. Wer hätte das gedacht?")
          		goto flw_155
          	  case 3:
/*<154>*/ 		printf("<y<Monsterklauen>>, <y<Schmuckschädel>>,\n<y<Glibber>> oder <y<Monsterhörner>>... Dies\nund noch vieles mehr kannst du von\nMonstern erbeuten.\n<y<Monsterklauen >>sind recht häufig.\nFliegende Monster verlieren sie, wenn\ndu sie besiegst.\n\nUm einen <y<Schmuckschädel>> zu finden,\nbesiegst du am besten Monster von\nmenschenähnlicher Gestalt.\n\nMonster von weicher und gallertartiger\nErscheinung hinterlassen <y<Glibber>>.")
/*<207>*/ 		printf("<y<Monsterhörner>> erhältst du von Wesen,\ndie ein Signalhorn bei sich tragen.\n\n\nSolltest du ein Monster treffen, das\ndich verflucht, erhältst du vielleicht\neinen seltenen <y<Schattenkristall>>.\n\nUnd wenn du besonders viel Glück hast,\nfindest du anstelle eines gewöhnlichen\nSchmuckschädels vielleicht sogar einen\n<y<goldenen Schmuckschädel>>.")
          		goto flw_155
          	}
          }

          void entrypoint_111_07() {
/*<168>*/ 	start()
/*<169>*/ 	printf("\x0E\x01\x09\x04\x00\x02Oh, warte einen Augenblick!\n\n\n\nDu siehst emsig aus, junger Freund!\nVermutlich bist du fleißig auf der\nSuche nach Schätzen, nicht wahr?\n\nIch kann meine Kristallkugel nach\nSchätzen befragen, wenn du möchtest.\nSprich mich an, wenn du Interesse\ndaran hast.")
          }

          void entrypoint_111_11() {
/*< 42>*/ 	start()
/*< 52>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*< 54>*/ 		entrypoint_111_04();
          	  case 1:
/*< 43>*/ 		switch (story_flags[374 /* us: 805A9B02 0x10, jp: 805ACD82 0x10 */]) {
          		  case 0:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x00\nDa bist du ja, junger Freund! Ich habe\nbereits gesehen, dass du bald zu mir\nkommen würdest.\n\nUnd deinem Blick nach zu urteilen\nmöchtest du, dass ich für dich in die\nZukunft sehe, nicht wahr?")
          			flw_140:
/*<140>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 47, 'param3': 12}
/*< 47>*/ 			printf("Als Dank für deine Hilfe mache ich dir\neinen Sonderpreis, junger Freund!\n\n\nEin Blick in die Zukunft für sagenhafte\n<r<5 Rubine>>! Soll ich beginnen?\n[1]Ja, bitte.[2-]Nein, danke.")
/*< 50>*/ 			switch (choice(2)) {
          			  case 0:
/*<197>*/ 				check_item_flag(501, 5)
/*<196>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 100}) {
          				  case 0:
/*<139>*/ 					rupees += -5;
/*< 49>*/ 					entrypoint_111_03();
          				  case 1:
/*< 55>*/ 					printf("\x0E\x01\x09\x04\x09\x909Du besitzt leider nicht genug Rubine,\njunger Freund.\n\n\nSo sehr du auch bettelst, aber ich kann\nnichts für dich tun. Bitte komm ein\nandermal wieder.")
          				}
          			  case 1:
/*< 51>*/ 				printf("\x0E\x01\x09\x04\x09\x900Ich verstehe. Nun, es wird die Zeit\nkommen, da du meine Dienste sehr\nwohl benötigen wirst.\n\nKomm bloß nicht heulend angerannt,\nwenn es so weit ist!")
          			}
          		  case 1:
/*< 44>*/ 			printf("\x0E\x01\x09\x04\x00\nOh, du bist es, junger Freund!\n\n\n\nDank dir kann ich endlich wieder in die\nZukunft sehen. Was sagst du, soll ich\neinen Blick für dich wagen?\n\nDa du mir geholfen hast, will ich dich\nbelohnen und berechne dir nur den\nhalben Preis!")
/*< 45>*/ 			story_flags[374 /* us: 805A9B02 0x10, jp: 805ACD82 0x10 */] = true;
          			goto flw_140
          		}
          	}
          }

          void entrypoint_111_30() {
/*< 80>*/ 	start()
/*<106>*/ 	switch (story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */]) {
          	  case 0:
/*<107>*/ 		printf("\x0E\x01\x09\x04\x01\x703Dank dir ist mein Leben so schön wie\nnie zuvor, junger Freund! Vielen Dank!\n\n\nWillst du herausfinden, wie es um dich\nsteht, besuche mich tagsüber im Basar!")
          	  case 1:
/*< 81>*/ 		printf("\x0E\x01\x09\x04\x01\x701Was willst du denn um diese Zeit hier?\n\x0E\x01\x06\x02\xFCCDGähn...\x0E\x01\x06\x02Í\n\n\nNachts hält meine Kristallkugel ihren\nwohlverdienten Schönheitsschlaf, also\nbesuche mich doch morgen im Basar,\njunger Freund.")
          	}
          }

