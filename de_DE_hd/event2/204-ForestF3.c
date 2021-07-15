          void entrypoint_204_25() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 59>*/ 		printf("Schnell, zurück zum <b<Wasserdrachen>>!")
          	  case 1:
/*< 60>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 83>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_116:
/*<116>*/ 				switch (story_flags[78 /* us: 805A9AE8 0x80, jp: 805ACD68 0x80 */]) {
          				  case 0:
          					flw_119:
/*<119>*/ 					printf("Wenn du diese Stachelbiester <r<explodieren lässt>>,\nsei vorsichtig, damit dich die Explosion nicht\nauch erwischt!")
          				  case 1:
/*<117>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 118, 'param3': 31}
/*<118>*/ 					story_flags[78 /* us: 805A9AE8 0x80, jp: 805ACD68 0x80 */] = true;
          					goto flw_119
          				}
          			  case 1:
/*< 82>*/ 				printf("Der Häuptling des Waldes ruft.\nHör dir doch mal an, was er zu sagen hat.")
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
/*<101>*/ 		printf("Schnell, zurück zum <b<Wasserdrachen>>!")
          	  case 1:
/*<102>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*<104>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_138:
/*<138>*/ 				switch (story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */]) {
          				  case 0:
          					flw_141:
/*<141>*/ 					printf("Die Melodinen sind gern zusammen und\nhalten sich oft <r<bei kleinen Fischen >>auf.")
          				  case 1:
/*<139>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 140, 'param3': 31}
/*<140>*/ 					story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */] = true;
          					goto flw_141
          				}
          			  case 1:
/*<103>*/ 				printf("Der Häuptling des Waldes ruft.\nHör dir doch mal an, was er zu sagen hat.")
          			}
          		  case 1:
          			goto flw_138
          		}
          	}
          }

          void entrypoint_204_09() {
/*<150>*/ 	start()
/*<151>*/ 	printf("\x0E\x01\x09\x04\x00\x0EVorsicht, Link!\nHier sind ein paar bösartig aussehende\nFische aufgetaucht!\n\nWenn sie dich sehen, wird es gefährlich!\nSei vorsichtig!")
          }

          void entrypoint_204_27() {
/*<166>*/ 	start()
/*<167>*/ 	printf("Der ganze Wald steht unter Wasser!")
          }

          void entrypoint_204_10() {
/*< 35>*/ 	start()
/*< 17>*/ 	printf("\x0E\x01\x09\x04\x00\x0EAh, Link!\nSehr gut, du hast alle Melodinen gefangen!\n\n\nDu solltest besser schnell zum <b<Wasserdrachen\n>>zurückkehren.")
/*<195>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          }

          void entrypoint_204_28() {
/*<168>*/ 	start()
/*<169>*/ 	printf("Der Wasserdrache ist zornig!")
          }

          void entrypoint_204_29() {
/*<170>*/ 	start()
/*<171>*/ 	printf("Die Ungeheuer verschwinden aus dem Wald!")
          }

          void entrypoint_204_12() {
/*<146>*/ 	start()
/*<149>*/ 	printf("Die Strömung hier ist zu stark für dich.\n\n\n\nDas ist zu gefährlich für Menschen,\nnimm lieber den anderen Ausgang.")
          }

          void entrypoint_204_30() {
/*< 41>*/ 	start()
/*<142>*/ 	{'type': 'type3', 'subType': 1, 'param1': 23, 'param2': 0, 'next': 145, 'param3': 35}
/*<145>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 42, 'param3': 16}
/*< 42>*/ 	printf("Ich vermute, dass er die <r<Aurasuche >>meint.\n\n\n\nEs ist ein kluger Vorschlag, \x0E\x01\x12\x04\x00\x02Gebieter.\nIch habe die Merkmale der Melodinen\nbereits analysiert.")
/*<183>*/ 	story_flags[81 /* us: 805A9AEB 0x04, jp: 805ACD6B 0x04 */] = true;
/*<184>*/ 	open_dowsing_wheel(9)
/*< 53>*/ 	printf("Die Melodinen können nun mit der <pling><r<Aurasuche\n>>gefunden werden.\n\n\nBedauerlicherweise funktioniert die Aurasuche\njedoch <r<nicht im Wasser>>.")
/*<181>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*< 54>*/ 	scene_flags[3 'Flooded Faron Woods'][20 /* 0x3 10 */] = true;
/*<143>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_204_13() {
/*<147>*/ 	start()
/*<148>*/ 	printf("Vorsicht, Vorsicht!\nDie Strömung ist hier zu stark.\nNimm besser den oberen Ausgang!")
          }

          void entrypoint_204_31() {
/*<172>*/ 	start()
/*<173>*/ 	printf("Der Wald ist überschwemmt!")
          }

          void entrypoint_204_14() {
/*<174>*/ 	start()
/*<176>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*<175>*/ 		printf("")
          	  case 1:
/*<177>*/ 		printf("")
          	}
          }

          void entrypoint_204_32() {
/*<185>*/ 	start()
/*<186>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*<187>*/ 		printf("Schnell, zurück zum <b<Wasserdrachen>>!")
          	  case 1:
/*<188>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*<190>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_191:
/*<191>*/ 				switch (story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */]) {
          				  case 0:
          					flw_194:
/*<194>*/ 					printf("Die Melodinen speichern Luft in\nihren Körpern. Wenn du sie einfängst,\n<r<füllt sich deine Luftanzeige >>ein wenig.")
          				  case 1:
/*<192>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 193, 'param3': 31}
/*<193>*/ 					story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */] = true;
          					goto flw_194
          				}
          			  case 1:
/*<189>*/ 				printf("Der Häuptling des Waldes ruft.\nHör dir doch mal an, was er zu sagen hat.")
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
/*< 23>*/ 			printf("\x0E\x01\x09\x04\x00\x07Der Wald ist überschwemmt, aber das\nwird schon. Grüß mir den <b<Wasserdrachen>>!")
          		  case 1:
/*<120>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<121>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
          					flw_123:
/*<123>*/ 					printf("\x0E\x01\x09\x04\x00\x01Ein kleiner Tipp...\nManche Felsen lassen sich durch\nAttacken wegrollen!")
          				  case 1:
/*<122>*/ 					printf("\x0E\x01\x09\x04\x00\x07Der Häuptling verlangt nach dir!\nDu solltest mit ihm reden.")
          				}
          			  case 1:
          				goto flw_123
          			}
          		}
          	  case 1:
/*< 43>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 1, 'param3': 31}
/*<  1>*/ 		printf("\x0E\x01\x09\x04\x00\x04Als aus dem <r<Stamm des großen Baumes\n>><pling>Wasser kam, ist <b<Senbuli>> ganz schön\nerschrocken!\n\nBei all dem Wasser kann man sich gar\nnicht verstecken. \x0E\x01\x09\x04\x11\x05Wird unser Wald\njemals wieder wie früher sein?")
          	}
          }

          void entrypoint_204_02() {
/*<  3>*/ 	start()
/*<  5>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 24>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 25>*/ 			printf("\x0E\x01\x09\x04\x09\x0CWann geht das Wasser endlich zurück?\n<b<Senbuli>> kann nicht schwimmen!")
          		  case 1:
/*<124>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<125>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<137>*/ 					printf("\x0E\x01\x09\x04\x09\x0CNutze die Aurasuche oder was immer nötig\nist, aber finde nur schnell diese Melodinen!")
          				  case 1:
/*<126>*/ 					printf("\x0E\x01\x09\x04\x00\x07Der Häuptling verlangt nach dir!\nDu solltest mit ihm reden.")
          				}
          			  case 1:
/*<127>*/ 				printf("\x0E\x01\x09\x04\x09\x0CDer <b<Wasserdrache>> hat die\nÜberschwemmung verursacht?\nOh nein, er wird die Kyu alle fressen!")
          			}
          		}
          	  case 1:
/*< 44>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 4, 'param3': 31}
/*<  4>*/ 		printf("\x0E\x01\x09\x04\x09\x0CEs ist aus! Was wird nur aus unserem Wald?")
          	}
          }

          void entrypoint_204_03() {
/*<  6>*/ 	start()
/*<  8>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 26>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 27>*/ 			printf("\x0E\x01\x09\x04\x00\x07Der Wald ist überschwemmt, aber das\nwird schon. Grüß mir den <b<Wasserdrachen>>!")
          		  case 1:
/*<128>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<129>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
          					flw_131:
/*<131>*/ 					printf("\x0E\x01\x09\x04\x11\x0BDie Parakwa kennen sich mit den\nMelodinen aus...\n[1]Die Parakwa?[2-]Ich weiß.")
/*<178>*/ 					switch (choice(2)) {
          					  case 0:
/*<180>*/ 						printf("\x0E\x01\x09\x04\x0C\x01Na, diese Wesen im Wasser mit den\nspitzen Mündern!")
          						flw_179:
/*<179>*/ 						printf("\x0E\x01\x09\x04\x0B\x05Sprich mit ihnen, wenn du im Wasser bist.")
          					  case 1:
          						goto flw_179
          					}
          				  case 1:
/*<130>*/ 					printf("\x0E\x01\x09\x04\x00\x07Der Häuptling verlangt nach dir!\nDu solltest mit ihm reden.")
          				}
          			  case 1:
          				goto flw_131
          			}
          		}
          	  case 1:
/*< 45>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 7, 'param3': 31}
/*<  7>*/ 		printf("\x0E\x01\x09\x04\x00\x0FDer <b<Wasserdrache>> war's!\nNur er kann den Wald so verändern.")
          	}
          }

          void entrypoint_204_20() {
/*< 30>*/ 	start()
/*< 39>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 40>*/ 		printf("Schnell, zurück zum <b<Wasserdrachen>>!")
          	  case 1:
/*< 48>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 77>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_105:
/*<105>*/ 				switch (story_flags[74 /* us: 805A9AE8 0x08, jp: 805ACD68 0x08 */]) {
          				  case 0:
          					flw_31:
/*< 31>*/ 					printf("Fange die fliehenden <b<Melodinen>> mit\neiner <g<Wasserschraube>> und hindere\nsie so an der Flucht.\n\nAch...<pause1E> Menschen <r<verbrauchen ja Luft\ndafür>>, also übertreib es besser nicht.")
          				  case 1:
/*<106>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 107, 'param3': 31}
/*<107>*/ 					story_flags[74 /* us: 805A9AE8 0x08, jp: 805ACD68 0x08 */] = true;
          					goto flw_31
          				}
          			  case 1:
/*< 49>*/ 				printf("Der Häuptling des Waldes ruft.\nHör dir doch mal an, was er zu sagen hat.")
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
/*< 29>*/ 			printf("\x0E\x01\x09\x04\x00\x14Kehre schnell zum <b<Wasserdrachen >>zurück!")
          		  case 1:
/*<132>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<133>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<136>*/ 					printf("\x0E\x01\x09\x04\x00\x14Versuche, die Melodinen mit der Aurasuche\nzu finden.")
          				  case 1:
/*<134>*/ 					printf("\x0E\x01\x09\x04\x00\x07Der Häuptling verlangt nach dir!\nDu solltest mit ihm reden.")
          				}
          			  case 1:
/*<135>*/ 				printf("\x0E\x01\x09\x04\x00\x14Wenn du die Melodinen fängst, werden sie\nzu Noten einer Melodie.")
          			}
          		}
          	  case 1:
/*< 46>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 10, 'param3': 31}
/*< 10>*/ 		printf("\x0E\x01\x09\x04\x00\x04Der <b<Wasserdrache>> ist hier!\nEr versteckt sich hier irgendwo!")
          	}
          }

          void entrypoint_204_21() {
/*< 61>*/ 	start()
/*< 62>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 63>*/ 		printf("Schnell, zurück zum <b<Wasserdrachen>>!")
          	  case 1:
/*< 64>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 79>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_108:
/*<108>*/ 				switch (story_flags[75 /* us: 805A9AE8 0x10, jp: 805ACD68 0x10 */]) {
          				  case 0:
          					flw_111:
/*<111>*/ 					printf("Die lila gefärbten Blasen sind <r<voller Gift>>,\nwenn du sie einatmest, <r<geht dir die Luft aus>>.\nSei vorsichtig!")
          				  case 1:
/*<109>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 110, 'param3': 31}
/*<110>*/ 					story_flags[75 /* us: 805A9AE8 0x10, jp: 805ACD68 0x10 */] = true;
          					goto flw_111
          				}
          			  case 1:
/*< 78>*/ 				printf("Der Häuptling des Waldes ruft.\nHör dir doch mal an, was er zu sagen hat.")
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
/*< 33>*/ 			printf("\x0E\x01\x09\x04\x00\x0EKehre schnell zum <b<Wasserdrachen >>zurück!")
          		  case 1:
/*< 55>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
/*< 56>*/ 				printf("\x0E\x01\x09\x04\x00\x0EGenau, genau, die Aurasuche!\nKannst du damit nicht die übrigen\nMelodinen aufspüren?")
          			  case 1:
/*< 50>*/ 				switch (scene_flags[25 /* 0x2 02 */]) {
          				  case 0:
/*< 51>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 52, 'param3': 31}
/*< 52>*/ 					printf("\x0E\x01\x09\x04\x00\x01Gut, dich zu sehen, Link!\n\n\n\nKommst du mit den <b<Melodinen >>voran?\nWeißt du, mir ist da etwas eingefallen...\n\n\n\x0E\x01\x09\x04\x04\x11Ach, wie hieß das noch gleich...\n\n\n\nDieser Trick da, mit dem du meine\nGefährten gefunden hast...\nSetz den doch wieder ein!\n\n\x0E\x01\x09\x04\x06\x09Damit müsstest du sie doch einfacher\nfinden können, oder?")
/*<144>*/ 					scene_flags[3 'Flooded Faron Woods'][26 /* 0x2 04 */] = true;
          				  case 1:
/*< 15>*/ 					printf("\x0E\x01\x09\x04\x00\x0EHallo, Link.\n\n\n\n\x0E\x01\x09\x04\x06\x03Was, der <b<Wasserdrache>> hat diese\nÜberschwemmung verursacht?\nDie ganzen Ungeheuer im Wald haben\nihn erzürnt?\n\x0E\x01\x09\x04\x01\x0CDas heißt dann wohl, dass wir uns an\ndiesen Zustand gewöhnen müssen...")
          				}
          			}
          		}
          	  case 1:
/*<163>*/ 		switch (scene_flags[27 /* 0x2 08 */]) {
          		  case 0:
/*<164>*/ 			printf("\x0E\x01\x09\x04\x06\x01Aus dem <r<großen Baum hinter mir>> kam\nplötzlich Wasser geschossen und im Nu\nwar der ganze Wald überschwemmt!\n\n\x0E\x01\x09\x04\x01\x06Aber irgendwie gefällt mir der Wald\nganz gut so!")
          		  case 1:
/*< 47>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 13, 'param3': 31}
/*< 13>*/ 			printf("\x0E\x01\x09\x04\x00\x0EOh!\nDu bist doch.<pause0F>.<pause0F>.<pause14>\nAch ja, ich hatte dich gar nicht nach\ndeinem Namen gefragt.\n\x0E\x01\x09\x04\x00\x03Soso...<pause19>\n\x0E\x03\x01\x00Link also...\nKomischer Name.\n\n\x0E\x01\x09\x04\x00\x00Wie auch immer, was kann ich für dich tun?\n[1]Das Wasser...[2]Der Wald...")
/*<161>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_162:
/*<162>*/ 				printf("\x0E\x01\x09\x04\x00\x02Hast du gesehen, was passiert ist?\n\n\n\n\x0E\x01\x09\x04\x04\x00Aus dem <r<großen Baum hinter mir>><pling> kam\nplötzlich Wasser geschossen und im Nu\nwar der ganze Wald überschwemmt!\n\n\x0E\x01\x09\x04\x00\x03Ich weiß nicht, warum das passiert ist,\naber so werden wir vielleicht wenigstens\ndie ganzen Monster los.")
/*< 32>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 165, 'param3': 6}
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
/*< 68>*/ 		printf("Schnell, zurück zum <b<Wasserdrachen>>!")
          	  case 1:
/*< 70>*/ 		switch (story_flags[76 /* us: 805A9AE8 0x20, jp: 805ACD68 0x20 */]) {
          		  case 0:
/*< 75>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*< 81>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
          					flw_76:
/*< 76>*/ 					printf("Wenn du die Melodinen <r<nicht schnell genug\nfängst>>, verschwinden sie aus deinem Notenblatt.\n\n\n<g<Dreh dich beim Schwimmen>>, um sie mit\neinem Wirbel <r<anzusaugen>> und alle auf\neinmal einzufangen.")
          				  case 1:
/*< 80>*/ 					printf("Der ganze Wald steht unter Wasser!")
          				}
          			  case 1:
          				goto flw_76
          			}
          		  case 1:
/*< 69>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 66, 'param3': 31}
/*< 66>*/ 			printf("Willst du die Melodinen fangen?\n\n\n\n[1]Genau![2]Nein...")
/*< 71>*/ 			switch (choice(2)) {
          			  case 0:
/*< 73>*/ 				printf("Da habe ich einen wichtigen Tipp für dich...\n\n\n\nWenn du die Melodinen <r<nicht schnell genug\nfängst>>, verschwinden sie aus deinem Notenblatt.\n\n\n<g<Dreh dich beim Schwimmen>>, um sie mit\neinem Wirbel <r<anzusaugen>> und alle auf\neinmal einzufangen.\n\nNur eine Frage der...<pause1E> Ausdauer!")
/*< 74>*/ 				story_flags[76 /* us: 805A9AE8 0x20, jp: 805ACD68 0x20 */] = true;
          			  case 1:
/*< 72>*/ 				printf("Wie du meinst.")
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
/*< 20>*/ 		printf("\x0E\x01\x09\x04\x00\x06Wenn ich dich für würdig befinden soll,\nfinde die <r<Melodinen>>.")
          	}
          }

          void entrypoint_204_23() {
/*< 84>*/ 	start()
/*< 85>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 86>*/ 		printf("Schnell, zurück zum <b<Wasserdrachen>>!")
          	  case 1:
/*< 87>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 89>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_112:
/*<112>*/ 				switch (story_flags[77 /* us: 805A9AE8 0x40, jp: 805ACD68 0x40 */]) {
          				  case 0:
          					flw_115:
/*<115>*/ 					printf("Wenn du Melodinen derselben Farbe <r<nicht\nschnell genug fängst>>, verschwinden sie aus\ndeinem Notenblatt.")
          				  case 1:
/*<113>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 114, 'param3': 31}
/*<114>*/ 					story_flags[77 /* us: 805A9AE8 0x40, jp: 805ACD68 0x40 */] = true;
          					goto flw_115
          				}
          			  case 1:
/*< 88>*/ 				printf("Der Häuptling des Waldes ruft.\nHör dir doch mal an, was er zu sagen hat.")
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
/*< 92>*/ 		printf("Schnell, zurück zum <b<Wasserdrachen>>!")
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
/*< 98>*/ 						printf("Oh nein, wieder diese <b<aggressiven Fische>>!\nWir müssen fliehen!\n\n\nZum Glück sind <r<tiefe Stellen >>für sie\nunerreichbar!")
          					  case 1:
/*<152>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 197, 'param3': 31}
/*<197>*/ 						scene_flags[3 'Flooded Faron Woods'][70 /* 0x9 40 */] = true;
          						goto flw_98
          					}
          				  case 1:
/*< 97>*/ 					printf("Die großen Fische machen mir Angst.\nIhre Attacken sind so stark! Zum Glück\nsind gerade keine hier.")
          				}
          			  case 1:
/*< 94>*/ 				printf("Der Häuptling des Waldes ruft.\nHör dir doch mal an, was er zu sagen hat.")
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
/*<158>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 157, 'param3': 6}
/*<157>*/ 	printf("\x0E\x01\x09\x04\x00\x0EHey, Link!\nHörst du mich?\n\n\nMir ist etwas eingefallen!\nKannst du kurz zu mir kommen?")
/*<159>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

