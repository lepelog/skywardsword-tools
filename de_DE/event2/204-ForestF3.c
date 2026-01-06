          void entrypoint_204_25() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 59>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "Schnell, zurück zum <color blue<Wasserdrachen>coloroff>!")
          	  case 1:
/*< 60>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 83>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_116:
/*<116>*/ 				switch (story_flags[78 /* us: 805A9AE8 0x80, jp: 805ACD68 0x80 */]) {
          				  case 0:
          					flw_119:
/*<119>*/ 					printf(/* textboxtype: 1, unk: 0, line: 35 */ "Wenn du diese Stachelbiester\n<color red<explodieren lässt>coloroff>, sei vorsichtig, damit\ndich die Explosion nicht auch erwischt!\n")
          				  case 1:
/*<117>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 118, 'param3': 31}
/*<118>*/ 					story_flags[78 /* us: 805A9AE8 0x80, jp: 805ACD68 0x80 */] = true;
          					goto flw_119
          				}
          			  case 1:
/*< 82>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "Der Häuptling des Waldes ruft.\nHör dir doch mal an, was er zu sagen\nhat.")
          			}
          		  case 1:
          			goto flw_116
          		}
          	}
          }

          void entrypoint_204_26() {
/*< 99>*/ 	start()
/*<100>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*<101>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "Schnell, zurück zum <color blue<Wasserdrachen>coloroff>!")
          	  case 1:
/*<102>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*<104>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_138:
/*<138>*/ 				switch (story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */]) {
          				  case 0:
          					flw_141:
/*<141>*/ 					printf(/* textboxtype: 1, unk: 0, line: 36 */ "Die Melodinen sind gern zusammen\nund halten sich oft <color red<bei kleinen Fischen\n>coloroff>auf.")
          				  case 1:
/*<139>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 140, 'param3': 31}
/*<140>*/ 					story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */] = true;
          					goto flw_141
          				}
          			  case 1:
/*<103>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "Der Häuptling des Waldes ruft.\nHör dir doch mal an, was er zu sagen\nhat.")
          			}
          		  case 1:
          			goto flw_138
          		}
          	}
          }

          void entrypoint_204_09() {
/*<150>*/ 	start()
/*<151>*/ 	printf(/* textboxtype: 1, unk: 2, line: 25 */ "<0x10009:0x0000000e>Vorsicht, <heroname>!\nHier sind ein paar bösartig aussehende\nFische aufgetaucht!\n\nWenn sie dich sehen, wird es\ngefährlich! Sei vorsichtig!")
          }

          void entrypoint_204_27() {
/*<166>*/ 	start()
/*<167>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "Der ganze Wald steht unter Wasser!")
          }

          void entrypoint_204_10() {
/*< 35>*/ 	start()
/*< 17>*/ 	printf(/* textboxtype: 1, unk: 2, line: 24 */ "<0x10009:0x0000000e>Ah, <heroname>!\nSehr gut, du hast alle Melodinen\ngefangen!\n\nDu solltest besser schnell zum\n<color blue<Wasserdrachen >coloroff>zurückkehren.")
/*<195>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          }

          void entrypoint_204_28() {
/*<168>*/ 	start()
/*<169>*/ 	printf(/* textboxtype: 1, unk: 0, line: 43 */ "Der Wasserdrache ist zornig!")
          }

          void entrypoint_204_29() {
/*<170>*/ 	start()
/*<171>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ "Die Ungeheuer verschwinden aus dem\nWald!")
          }

          void entrypoint_204_12() {
/*<146>*/ 	start()
/*<149>*/ 	printf(/* textboxtype: 1, unk: 0, line: 52 */ "Die Strömung hier ist zu stark für dich.\n\n\n\nDas ist zu gefährlich für Menschen,\nnimm lieber den anderen Ausgang.")
          }

          void entrypoint_204_30() {
/*< 41>*/ 	start()
/*<142>*/ 	{'type': 'type3', 'subType': 1, 'param1': 23, 'param2': 0, 'next': 145, 'param3': 35}
/*<145>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 42, 'param3': 16}
/*< 42>*/ 	printf(/* textboxtype: 2, unk: 0, line: 48 */ "Ich vermute, dass er die <color red<Aurasuche>coloroff>\nmeint.\n\n\nEs ist ein kluger Vorschlag, <0x10012:0x00000002>Gebieter.\nIch habe die Merkmale der Melodinen\nbereits analysiert.")
/*<183>*/ 	story_flags[81 /* us: 805A9AEB 0x04, jp: 805ACD6B 0x04 */] = true;
/*<184>*/ 	open_dowsing_wheel(9)
/*< 53>*/ 	printf(/* textboxtype: 2, unk: 0, line: 49 */ "Die Melodinen können nun mit der\n<sound 4><color red<Aurasuche >coloroff>gefunden werden.\n\n\nBedauerlicherweise funktioniert die\nAurasuche jedoch <color red<nicht im Wasser>coloroff>.")
/*<181>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*< 54>*/ 	scene_flags[3 'Flooded Faron Woods'][20 /* 0x3 10 */] = true;
/*<143>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_204_13() {
/*<147>*/ 	start()
/*<148>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "Vorsicht, Vorsicht!\nDie Strömung ist hier zu stark.\nNimm besser den oberen Ausgang!")
          }

          void entrypoint_204_31() {
/*<172>*/ 	start()
/*<173>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "Der Wald ist überschwemmt!")
          }

          void entrypoint_204_14() {
/*<174>*/ 	start()
/*<176>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*<175>*/ 		printf(/* textboxtype: 1, unk: 0, line: 47 */ "")
          	  case 1:
/*<177>*/ 		printf(/* textboxtype: 1, unk: 0, line: 46 */ "")
          	}
          }

          void entrypoint_204_32() {
/*<185>*/ 	start()
/*<186>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*<187>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "Schnell, zurück zum <color blue<Wasserdrachen>coloroff>!")
          	  case 1:
/*<188>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*<190>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_191:
/*<191>*/ 				switch (story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */]) {
          				  case 0:
          					flw_194:
/*<194>*/ 					printf(/* textboxtype: 1, unk: 0, line: 40 */ "Die Melodinen speichern Luft in\nihren Körpern. Wenn du sie einfängst,\n<color red<füllt sich deine Luftanzeige >coloroff>ein wenig.")
          				  case 1:
/*<192>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 193, 'param3': 31}
/*<193>*/ 					story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */] = true;
          					goto flw_194
          				}
          			  case 1:
/*<189>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "Der Häuptling des Waldes ruft.\nHör dir doch mal an, was er zu sagen\nhat.")
          			}
          		  case 1:
          			goto flw_191
          		}
          	}
          }

          void entrypoint_204_01() {
          	start()
/*<  2>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 22>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 23>*/ 			printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000007>Der Wald ist überschwemmt, aber\ndas wird schon. Grüß mir den\n<color blue<Wasserdrachen>coloroff>!")
          		  case 1:
/*<120>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<121>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
          					flw_123:
/*<123>*/ 					printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00000001>Ein kleiner Tipp...\nManche Felsen lassen sich durch\nAttacken wegrollen!")
          				  case 1:
/*<122>*/ 					printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000007>Der Häuptling verlangt nach dir!\nDu solltest mit ihm reden.")
          				}
          			  case 1:
          				goto flw_123
          			}
          		}
          	  case 1:
/*< 43>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 1, 'param3': 31}
/*<  1>*/ 		printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000004>Als aus dem <color red<Stamm des großen Baumes\n>coloroff><sound 4>Wasser kam, ist <color blue<Senbuli>coloroff> ganz schön\nerschrocken!\n\nBei all dem Wasser kann man sich gar\nnicht verstecken. <0x10009:0x00110005>Wird unser Wald\njemals wieder wie früher sein?")
          	}
          }

          void entrypoint_204_02() {
/*<  3>*/ 	start()
/*<  5>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 24>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 25>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x0009000c>Wann geht das Wasser endlich zurück?\n<color blue<Senbuli>coloroff> kann nicht schwimmen!")
          		  case 1:
/*<124>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<125>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<137>*/ 					printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x0009000c>Nutze die Aurasuche oder was immer\nnötig ist, aber finde nur schnell diese\nMelodinen!")
          				  case 1:
/*<126>*/ 					printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000007>Der Häuptling verlangt nach dir!\nDu solltest mit ihm reden.")
          				}
          			  case 1:
/*<127>*/ 				printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x0009000c>Der <color blue<Wasserdrache>coloroff> hat die\nÜberschwemmung verursacht?\nOh nein, er wird die Kyu alle fressen!")
          			}
          		}
          	  case 1:
/*< 44>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 4, 'param3': 31}
/*<  4>*/ 		printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x0009000c>Es ist aus! Was wird nur aus unserem\nWald?")
          	}
          }

          void entrypoint_204_03() {
/*<  6>*/ 	start()
/*<  8>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 26>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 27>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000007>Der Wald ist überschwemmt, aber\ndas wird schon. Grüß mir den\n<color blue<Wasserdrachen>coloroff>!")
          		  case 1:
/*<128>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<129>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
          					flw_131:
/*<131>*/ 					printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x0011000b>Die Parakwa kennen sich mit den\nMelodinen aus...\n[1-]Die Parakwa?[2]Ich weiß.")
/*<178>*/ 					switch (choice(2)) {
          					  case 0:
/*<180>*/ 						printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x000c0001>Na, diese Wesen im Wasser mit den\nspitzen Mündern!")
          						flw_179:
/*<179>*/ 						printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x000b0005>Sprich mit ihnen, wenn du im Wasser\nbist.")
          					  case 1:
          						goto flw_179
          					}
          				  case 1:
/*<130>*/ 					printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000007>Der Häuptling verlangt nach dir!\nDu solltest mit ihm reden.")
          				}
          			  case 1:
          				goto flw_131
          			}
          		}
          	  case 1:
/*< 45>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 7, 'param3': 31}
/*<  7>*/ 		printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x0000000f>Der <color blue<Wasserdrache>coloroff> war's!\nNur er kann den Wald so verändern.")
          	}
          }

          void entrypoint_204_20() {
/*< 30>*/ 	start()
/*< 39>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 40>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "Schnell, zurück zum <color blue<Wasserdrachen>coloroff>!")
          	  case 1:
/*< 48>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 77>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_105:
/*<105>*/ 				switch (story_flags[74 /* us: 805A9AE8 0x08, jp: 805ACD68 0x08 */]) {
          				  case 0:
          					flw_31:
/*< 31>*/ 					printf(/* textboxtype: 1, unk: 0, line: 28 */ "Fange die fliehenden <color blue<Melodinen>coloroff> mit\neiner <color green<Wasserschraube>coloroff> und hindere\nsie so an der Flucht.\n\nAch...<pause 30> Menschen <color red<verbrauchen ja Luft\ndafür>coloroff>, also übertreib es besser nicht.")
          				  case 1:
/*<106>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 107, 'param3': 31}
/*<107>*/ 					story_flags[74 /* us: 805A9AE8 0x08, jp: 805ACD68 0x08 */] = true;
          					goto flw_31
          				}
          			  case 1:
/*< 49>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "Der Häuptling des Waldes ruft.\nHör dir doch mal an, was er zu sagen\nhat.")
          			}
          		  case 1:
          			goto flw_105
          		}
          	}
          }

          void entrypoint_204_04() {
/*<  9>*/ 	start()
/*< 11>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 28>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 29>*/ 			printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000014>Kehre schnell zum <color blue<Wasserdrachen\n>coloroff>zurück!")
          		  case 1:
/*<132>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<133>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<136>*/ 					printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00000014>Versuche, die Melodinen mit der\n Aurasuche zu finden.")
          				  case 1:
/*<134>*/ 					printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000007>Der Häuptling verlangt nach dir!\nDu solltest mit ihm reden.")
          				}
          			  case 1:
/*<135>*/ 				printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00000014>Wenn du die Melodinen fängst, werden\nsie zu Noten einer Melodie.")
          			}
          		}
          	  case 1:
/*< 46>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 10, 'param3': 31}
/*< 10>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000004>Der <color blue<Wasserdrache>coloroff> ist hier!\nEr versteckt sich hier irgendwo!")
          	}
          }

          void entrypoint_204_21() {
/*< 61>*/ 	start()
/*< 62>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 63>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "Schnell, zurück zum <color blue<Wasserdrachen>coloroff>!")
          	  case 1:
/*< 64>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 79>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_108:
/*<108>*/ 				switch (story_flags[75 /* us: 805A9AE8 0x10, jp: 805ACD68 0x10 */]) {
          				  case 0:
          					flw_111:
/*<111>*/ 					printf(/* textboxtype: 1, unk: 0, line: 29 */ "Die lila gefärbten Blasen sind <color red<voller\nGift>coloroff>, wenn du sie einatmest, <color red<geht dir\ndie Luft aus>coloroff>. Sei vorsichtig!")
          				  case 1:
/*<109>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 110, 'param3': 31}
/*<110>*/ 					story_flags[75 /* us: 805A9AE8 0x10, jp: 805ACD68 0x10 */] = true;
          					goto flw_111
          				}
          			  case 1:
/*< 78>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "Der Häuptling des Waldes ruft.\nHör dir doch mal an, was er zu sagen\nhat.")
          			}
          		  case 1:
          			goto flw_108
          		}
          	}
          }

          void entrypoint_204_05() {
/*< 12>*/ 	start()
/*< 14>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 18>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 33>*/ 			printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x0000000e>Kehre schnell zum <color blue<Wasserdrachen\n>coloroff>zurück!")
          		  case 1:
/*< 55>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
/*< 56>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x0000000e>Genau, genau, die Aurasuche!\nKannst du damit nicht die übrigen\nMelodinen aufspüren?")
          			  case 1:
/*< 50>*/ 				switch (scene_flags[25 /* 0x2 02 */]) {
          				  case 0:
/*< 51>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 52, 'param3': 31}
/*< 52>*/ 					printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00000001>Gut, dich zu sehen, <heroname>!\n\n\n\nKommst du mit den <color blue<Melodinen\n>coloroff>voran? Weißt du, mir ist da etwas\neingefallen...\n\n<0x10009:0x00040011>Ach, wie hieß das noch gleich...\n\n\n\nDieser Trick da, mit dem du meine\nGefährten gefunden hast...\nSetz den doch wieder ein!\n\n<0x10009:0x00060009>Damit müsstest du sie doch einfacher\nfinden können, oder?")
/*<144>*/ 					scene_flags[3 'Flooded Faron Woods'][26 /* 0x2 04 */] = true;
          				  case 1:
/*< 15>*/ 					printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x0000000e>Hallo, <heroname>.\n\n\n\n<0x10009:0x00060003>Was, der <color blue<Wasserdrache>coloroff> hat diese\nÜberschwemmung verursacht?\nDie ganzen Ungeheuer im Wald haben\nihn erzürnt?\n<0x10009:0x0001000c>Das heißt dann wohl, dass wir uns an\ndiesen Zustand gewöhnen müssen...")
          				}
          			}
          		}
          	  case 1:
/*<163>*/ 		switch (scene_flags[27 /* 0x2 08 */]) {
          		  case 0:
/*<164>*/ 			printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00060001>Aus dem <color red<großen Baum hinter mir>coloroff> kam\nplötzlich Wasser geschossen und im Nu\nwar der ganze Wald überschwemmt!\n\n<0x10009:0x00010006>Aber irgendwie gefällt mir der Wald\nganz gut so!")
          		  case 1:
/*< 47>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 13, 'param3': 31}
/*< 13>*/ 			printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x0000000e>Oh!\nDu bist doch.<pause 15>.<pause 15>.<pause 20>\nAch ja, ich hatte dich gar nicht nach\ndeinem Namen gefragt.\n<0x10009:0x00000003>Soso...<pause 25>\n<heroname> also...\nKomischer Name.\n\n<0x10009:0x00000000>Wie auch immer, was kann ich für dich\ntun?\n[1-]Das Wasser...[2-]Der Wald...")
/*<161>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_162:
/*<162>*/ 				printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00000002>Hast du gesehen, was passiert ist?\n\n\n\n<0x10009:0x00040000>Aus dem <color red<großen Baum hinter mir>coloroff><sound 4> kam\nplötzlich Wasser geschossen und im Nu\nwar der ganze Wald überschwemmt!\n\n<0x10009:0x00000003>Ich weiß nicht, warum das passiert\nist, aber so werden wir vielleicht\nwenigstens die ganzen Monster los.")
/*< 32>*/ 				wait_frames(1)
/*<165>*/ 				scene_flags[3 'Flooded Faron Woods'][27 /* 0x2 08 */] = true;
          			  case 1:
          				goto flw_162
          			}
          		}
          	}
          }

          void entrypoint_204_22() {
/*< 65>*/ 	start()
/*< 67>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 68>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "Schnell, zurück zum <color blue<Wasserdrachen>coloroff>!")
          	  case 1:
/*< 70>*/ 		switch (story_flags[76 /* us: 805A9AE8 0x20, jp: 805ACD68 0x20 */]) {
          		  case 0:
/*< 75>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*< 81>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
          					flw_76:
/*< 76>*/ 					printf(/* textboxtype: 1, unk: 0, line: 33 */ "Wenn du die Melodinen <color red<nicht schnell\ngenug fängst>coloroff>, verschwinden sie aus\ndeinem Notenblatt.\n\n<color green<Dreh dich beim Schwimmen>coloroff>, um sie mit\neinem Wirbel <color red<anzusaugen>coloroff> und alle auf\neinmal einzufangen.")
          				  case 1:
/*< 80>*/ 					printf(/* textboxtype: 1, unk: 0, line: 42 */ "Der ganze Wald steht unter Wasser!")
          				}
          			  case 1:
          				goto flw_76
          			}
          		  case 1:
/*< 69>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 66, 'param3': 31}
/*< 66>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "Willst du die Melodinen fangen?\n\n\n\n[1-]Genau![2-]Nein...")
/*< 71>*/ 			switch (choice(2)) {
          			  case 0:
/*< 73>*/ 				printf(/* textboxtype: 1, unk: 0, line: 32 */ "Da habe ich einen wichtigen Tipp für\ndich...\n\n\nWenn du die Melodinen <color red<nicht schnell\ngenug fängst>coloroff>, verschwinden sie aus\ndeinem Notenblatt.\n\n<color green<Dreh dich beim Schwimmen>coloroff>, um sie mit\neinem Wirbel <color red<anzusaugen>coloroff> und alle auf\neinmal einzufangen.\n\nNur eine Frage der...<pause 30> Ausdauer!")
/*< 74>*/ 				story_flags[76 /* us: 805A9AE8 0x20, jp: 805ACD68 0x20 */] = true;
          			  case 1:
/*< 72>*/ 				printf(/* textboxtype: 1, unk: 0, line: 31 */ "Wie du meinst.")
          			}
          		}
          	}
          }

          void entrypoint_204_06() {
/*< 16>*/ 	start()
/*< 19>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 21>*/ 		story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */] = true;
/*<182>*/ 		story_flags[176 /* us: 805A9AE2 0x80, jp: 805ACD62 0x80 */] = false;
/*<160>*/ 		story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = false;
/*< 36>*/ 		switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          		  case 0:
/*< 37>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 38>*/ 				story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */] = true;
          				flw_34:
/*< 34>*/ 				changeScene(7, 0) // 
          			  case 1:
          				goto flw_34
          			}
          		  case 1:
          			goto flw_34
          		}
          	  case 1:
/*< 20>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000006>Wenn ich dich für würdig befinden soll,\nfinde die <color red<Melodinen>coloroff>.")
          	}
          }

          void entrypoint_204_23() {
/*< 84>*/ 	start()
/*< 85>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 86>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "Schnell, zurück zum <color blue<Wasserdrachen>coloroff>!")
          	  case 1:
/*< 87>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 89>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_112:
/*<112>*/ 				switch (story_flags[77 /* us: 805A9AE8 0x40, jp: 805ACD68 0x40 */]) {
          				  case 0:
          					flw_115:
/*<115>*/ 					printf(/* textboxtype: 1, unk: 0, line: 34 */ "Wenn du Melodinen derselben\nFarbe <color red<nicht schnell genug fängst>coloroff>,\nverschwinden sie aus deinem\nNotenblatt.")
          				  case 1:
/*<113>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 114, 'param3': 31}
/*<114>*/ 					story_flags[77 /* us: 805A9AE8 0x40, jp: 805ACD68 0x40 */] = true;
          					goto flw_115
          				}
          			  case 1:
/*< 88>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "Der Häuptling des Waldes ruft.\nHör dir doch mal an, was er zu sagen\nhat.")
          			}
          		  case 1:
          			goto flw_112
          		}
          	}
          }

          void entrypoint_204_24() {
/*< 90>*/ 	start()
/*< 91>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 92>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "Schnell, zurück zum <color blue<Wasserdrachen>coloroff>!")
          	  case 1:
/*< 93>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 95>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_96:
/*< 96>*/ 				switch (scene_flags[24 /* 0x2 01 */]) {
          				  case 0:
/*<196>*/ 					switch (scene_flags[70 /* 0x9 40 */]) {
          					  case 0:
          						flw_98:
/*< 98>*/ 						printf(/* textboxtype: 1, unk: 0, line: 39 */ "Oh nein, wieder diese <color blue<aggressiven\nFische>coloroff>! Wir müssen fliehen!\n\n\nZum Glück sind <color red<tiefe Stellen >coloroff>für sie\nunerreichbar!")
          					  case 1:
/*<152>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 197, 'param3': 31}
/*<197>*/ 						scene_flags[3 'Flooded Faron Woods'][70 /* 0x9 40 */] = true;
          						goto flw_98
          					}
          				  case 1:
/*< 97>*/ 					printf(/* textboxtype: 1, unk: 0, line: 38 */ "Die großen Fische machen mir Angst.\nIhre Attacken sind so stark! Zum Glück\nsind gerade keine hier.")
          				}
          			  case 1:
/*< 94>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "Der Häuptling des Waldes ruft.\nHör dir doch mal an, was er zu sagen\nhat.")
          			}
          		  case 1:
          			goto flw_96
          		}
          	}
          }

          void entrypoint_204_07() {
/*<153>*/ 	start()
/*<154>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 155, 'param3': 47}
/*<155>*/ 	set_camera(4, 0)
/*<156>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 158, 'param3': 48}
/*<158>*/ 	wait_frames(15)
/*<157>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x0000000e>Hey, <heroname>!\nHörst du mich?\n\n\nMir ist etwas eingefallen!\nKannst du kurz zu mir kommen?")
/*<159>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

