          void entrypoint_112_01() {
          	start()
/*< 54>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 29, 'param3': 6}
/*< 29>*/ 	switch (story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */]) {
          	  case 0:
/*< 30>*/ 		entrypoint_123_06();
          	  case 1:
/*<  1>*/ 		printf("\x0E\x01\x09\x04\x00\x01Hallöchen! Bei mir kannst du deine Items\nlagern und gelagerte Items wieder an\ndich nehmen.\n\nMöchtest du das Item-Lager nutzen?\n[1]Ja![2-]Eigentlich\nnicht.")
          		flw_4:
/*<  4>*/ 		switch (choice(2)) {
          		  case 0:
/*< 16>*/ 			switch (context_related2(0)) {
          			  case 0:
/*< 42>*/ 				switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          				  case 0:
/*< 61>*/ 					switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          					  case 0:
/*< 62>*/ 						switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          						  case 0:
          							flw_43:
/*< 43>*/ 							switch (is_item_check_full()) {
          							  case 0:
/*< 44>*/ 								printf("\x0E\x01\x09\x04\x00\x0BOh, Schatz! Mein Herz ist voller Liebe, und\nmein Lager voller... Plunder.\n\n\nIch würde ja sonst alles von dir annehmen, aber\nich habe keinen Platz mehr.\n\n\nDu könntest natürlich ein paar deiner Items\n<r<verkaufen>>, wenn du möchtest.")
          								flw_5:
/*<  5>*/ 								make_actor_do_something(0, 0)
          							  case 1:
/*< 45>*/ 								printf("\x0E\x01\x09\x04\x08\xA0CNur keine Hektik, mein Schatz!")
          								goto flw_5
          							}
          						  case 1:
/*< 63>*/ 							switch (is_item_check_full()) {
          							  case 0:
/*< 64>*/ 								printf("\x0E\x01\x09\x04\x00\x17Oh... Das Item-Lager ist bereits voll.\n\n\n\nDein Herz hast du mir verwehrt, aber sonst\ngibst du mir wohl jeden Plunder, den du hast?\n\n\nAch, so war das nicht gemeint. Aber wenn du\nendlich ein paar deiner Items <r<verkaufen\n>>würdest, wäre ich dir nicht gerade böse...")
          								goto flw_5
          							  case 1:
/*< 65>*/ 								printf("\x0E\x01\x09\x04\x00\x13Nur zu, tob dich aus.")
          								goto flw_5
          							}
          						}
          					  case 1:
          						goto flw_43
          					}
          				  case 1:
/*< 90>*/ 					switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          					  case 0:
/*< 91>*/ 						switch (is_item_check_full()) {
          						  case 0:
/*< 93>*/ 							printf("\x0E\x01\x09\x04\x00\x15Oh... Ich würde dir ja gern etwas abnehmen,\naber das Item-Lager ist leider randvoll.\n\n\nWie wäre es, wenn du ein paar deiner Items\n<r<verkaufen >>würdest?")
          							goto flw_5
          						  case 1:
/*< 92>*/ 							printf("\x0E\x01\x09\x04\x00\x15Aber gern. Bitte sehr.")
          							goto flw_5
          						}
          					  case 1:
/*< 27>*/ 						switch (is_item_check_full()) {
          						  case 0:
/*< 28>*/ 							printf("\x0E\x01\x09\x04\x00\x04Oh... Ich würde dir ja etwas abnehmen, aber das\nItem-Lager ist randvoll.\n\n\nSchaffe etwas Platz, indem du ein paar deiner\nItems <r<verkaufst>>...")
          							goto flw_5
          						  case 1:
/*<  2>*/ 							printf("\x0E\x01\x09\x04\x00\x03Also gut, nur zu.")
          							goto flw_5
          						}
          					}
          				}
          			  case 1:
/*< 51>*/ 				switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          				  case 0:
/*< 59>*/ 					switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          					  case 0:
/*< 60>*/ 						switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          						  case 0:
          							flw_52:
/*< 52>*/ 							printf("\x0E\x01\x09\x04\x00\nDu hast ja gar nichts bei dir, Schatz!\n\n\n\nStreng dich an und sammle ein paar\nschöne Items. Und dann kommst du\neinfach zu mir, ja?")
          						  case 1:
/*< 55>*/ 							printf("\x0E\x01\x09\x04\x00\x04Oh, du hast ja gar nichts.\n\n\n\nNa ja, komm einfach wieder, wenn du\netwas lagern möchtest.")
          						}
          					  case 1:
          						goto flw_52
          					}
          				  case 1:
/*< 17>*/ 					printf("\x0E\x01\x09\x04\x00\x04Du hast doch gar nichts, das ich für dich\naufbewahren könnte...\n\n\nNa ja, komm einfach wieder, wenn du etwas\nlagern möchtest.")
          				}
          			}
          		  case 1:
/*< 50>*/ 			switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          			  case 0:
/*< 56>*/ 				switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          				  case 0:
/*< 57>*/ 					switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          					  case 0:
          						flw_47:
/*< 47>*/ 						printf("\x0E\x01\x09\x04\x0E\x150CWas soll das, mein Schatz? Machst du das etwa\nmit Absicht?")
          					  case 1:
/*< 58>*/ 						printf("\x0E\x01\x09\x04\x00\x13Kommst du etwa nur, um mich zu sehen? Weil\nich von Tag zu Tag schöner werde? Und du\nohne mich nicht leben kannst? Ja?")
          					}
          				  case 1:
          					goto flw_47
          				}
          			  case 1:
/*< 49>*/ 				switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          				  case 0:
/*< 46>*/ 					printf("\x0E\x01\x09\x04\x00\x17Also wirklich! Wieso sprichst du mich denn an,\nwenn du hier doch gar nichts zu tun hast?")
          				  case 1:
/*< 48>*/ 					switch (story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */]) {
          					  case 0:
/*< 87>*/ 						printf("\x0E\x01\x09\x04\x00\x02Also wirklich! Wieso sprichst du mich an, wenn\ndu hier doch gar nichts zu tun hast? Ach...")
          					  case 1:
/*<  3>*/ 						printf("\x0E\x01\x09\x04\x00\x02Aha... Soll mir recht sein. Aber das nächste Mal\nkommst du nur, wenn du hier auch etwas zu\nerledigen hast, ja?")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_112_02() {
/*<  6>*/ 	start()
/*< 41>*/ 	switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          	  case 0:
/*< 69>*/ 		switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          		  case 0:
/*< 70>*/ 			switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          			  case 0:
          				flw_66:
/*< 66>*/ 				switch (is_item_check_full()) {
          				  case 0:
/*< 67>*/ 					printf("\x0E\x01\x09\x04\x00\x07Das Item-Lager ist leider ganz voll,\nmein Schatz!\n\n\nAber du könntest ein paar Items, die du\nnicht brauchst, <r<verkaufen>>!")
          				  case 1:
/*< 68>*/ 					printf("\x0E\x01\x09\x04\x0B\x1709Du kommst doch bald wieder, oder?")
          				}
          			  case 1:
/*< 71>*/ 				switch (is_item_check_full()) {
          				  case 0:
/*< 72>*/ 					printf("\x0E\x01\x09\x04\x00\x04Oh... Im Item-Lager ist leider kein Platz mehr.\n\n\n\nWie wäre es, wenn du endlich ein paar Items,\ndie du nicht brauchst, <r<verkaufen >>würdest?")
          				  case 1:
/*< 73>*/ 					printf("\x0E\x01\x09\x04\x00\x15Oh... Also gut. Wenn du mich vermisst,\nkomm einfach wieder zurück! Ach...")
          				}
          			}
          		  case 1:
          			goto flw_66
          		}
          	  case 1:
/*< 25>*/ 		switch (is_item_check_full()) {
          		  case 0:
/*< 94>*/ 			switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          			  case 0:
/*< 95>*/ 				printf("\x0E\x01\x09\x04\x00\x15Das Item-Lager ist voll bis auf den\nletzten Platz!\n\n\nWie wäre es, wenn du ein paar Items,\ndie du nicht brauchst, <r<verkaufst>>?")
          			  case 1:
/*< 26>*/ 				printf("\x0E\x01\x09\x04\x00\x04Spitz die Ohren, mein Freund! Das Item-Lager\nist voll bis auf den letzten Platz! Und zwar\nden allerletzten!\n\nWie wäre es, wenn du ein paar Items, die du\nnicht brauchst, <r<verkaufen >>würdest?")
          			}
          		  case 1:
/*< 88>*/ 			switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          			  case 0:
/*< 89>*/ 				printf("\x0E\x01\x09\x04\x00\x06Vielen Dank...")
          			  case 1:
/*<  7>*/ 				printf("\x0E\x01\x09\x04\x00\x03Ja, ja... Vielen Dank und so...")
          			}
          		}
          	}
          }

          void entrypoint_112_03() {
/*<  8>*/ 	start()
/*< 19>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 36, 'param3': 12}
/*< 36>*/ 	switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          	  case 0:
/*< 35>*/ 		printf("Ich gebe dir <r<<r<<numeric arg0><r< >><r<\x0E\x03\x04\x02\x1CD >>und entsorge\ndieses Item für dich, wenn du willst.\nBist du damit einverstanden?\n[1]Ja[2-]Nein")
          		flw_11:
/*< 11>*/ 		switch (choice(2)) {
          		  case 0:
/*< 18>*/ 			make_actor_do_something(1, 0)
/*< 20>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 39, 'param3': 6}
/*< 39>*/ 			switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          			  case 0:
/*< 77>*/ 				switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          				  case 0:
/*< 78>*/ 					switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          					  case 0:
          						flw_40:
/*< 40>*/ 						printf("\x0E\x01\x09\x04\x00\x08Danke schön! Du hast doch sicher noch mehr,\noder? Bleib doch einfach den ganzen Tag über\nhier, wenn du willst.")
          						flw_53:
/*< 53>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 12}
/*< 12>*/ 						make_actor_do_something(0, 0)
          					  case 1:
/*< 79>*/ 						printf("\x0E\x01\x09\x04\x00\x03Danke schön. Hast du sonst noch was?")
          						goto flw_53
          					}
          				  case 1:
          					goto flw_40
          				}
          			  case 1:
/*< 10>*/ 				printf("\x0E\x01\x09\x04\x00\x03Danke schön. Hast du sonst noch irgendwas?")
          				goto flw_53
          			}
          		  case 1:
/*< 37>*/ 			switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          			  case 0:
/*< 74>*/ 				switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          				  case 0:
/*< 75>*/ 					switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          					  case 0:
          						flw_38:
/*< 38>*/ 						printf("\x0E\x01\x09\x04\x00\x12Wirklich? Ach, du hast recht. Du bist ja so klug,\nmein Schatz!")
          						goto flw_53
          					  case 1:
/*< 76>*/ 						printf("\x0E\x01\x09\x04\x00\x14Nun, dieses Item hat es auch nicht verdient,\nentsorgt zu werden. So wie ich anscheinend\ndeine Liebe nicht verdient habe...")
          						goto flw_53
          					}
          				  case 1:
          					goto flw_38
          				}
          			  case 1:
/*< 13>*/ 				printf("Wie? Oh, das ist aber schade...")
          				goto flw_53
          			}
          		}
          	  case 1:
/*<  9>*/ 		printf("Ich gebe dir <r<<r<<numeric arg0><r< >><r<\x0E\x03\x04\x02\x1CD >>und entsorge\ndieses Item für dich, wenn du willst.\nBist du damit einverstanden?\n[1]Ja[2-]Nein")
          		goto flw_11
          	}
          }

          void entrypoint_112_04() {
/*< 14>*/ 	start()
/*< 34>*/ 	switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          	  case 0:
/*< 80>*/ 		switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          		  case 0:
/*< 81>*/ 			switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          			  case 0:
          				flw_82:
/*< 82>*/ 				printf("\x0E\x01\x09\x04\x00\nDu hast ja gar nichts bei dir, Schatz!\n\n\n\nStreng dich an und sammle ein paar\nschöne Items. Und dann kommst du\neinfach zu mir, ja?")
          			  case 1:
/*< 83>*/ 				printf("\x0E\x01\x09\x04\x00\x04Oh, du hast ja gar nichts.\n\n\n\nNa ja, komm einfach wieder, wenn du\netwas lagern möchtest.")
          			}
          		  case 1:
          			goto flw_82
          		}
          	  case 1:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\x04Du hast doch gar nichts, das ich für dich\naufbewahren könnte...\n\n\nNa ja, komm einfach wieder, wenn du etwas\nlagern möchtest.")
          	}
          }

          void entrypoint_112_05() {
/*< 21>*/ 	start()
/*< 32>*/ 	switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          	  case 0:
/*< 84>*/ 		switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          		  case 0:
/*< 85>*/ 			switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          			  case 0:
          				flw_33:
/*< 33>*/ 				printf("\x0E\x01\x09\x04\x00\x08Du willst Ordnung im Item-Lager schaffen?\nWie schön!\n\n\nMit diesem Knopf kannst du das\njederzeit erledigen.\n\n\nDie Pfeile in deinen Köchern zum Beispiel\nwerden dann zusammengefasst und sortiert.")
          				flw_23:
/*< 23>*/ 				story_flags[300 /* us: 805A9AFD 0x40, jp: 805ACD7D 0x40 */] = true;
/*< 24>*/ 				make_actor_do_something(0, 0)
          			  case 1:
/*< 86>*/ 				printf("\x0E\x01\x09\x04\x00\x04Du willst Ordnung im Item-Lager schaffen?\nNa endlich!\n\n\nMit diesem Knopf kannst du das\njederzeit erledigen.\n\n\nDie Pfeile in deinen Köchern zum Beispiel\nwerden dann zusammengefasst und sortiert.")
          				goto flw_23
          			}
          		  case 1:
          			goto flw_33
          		}
          	  case 1:
/*< 22>*/ 		printf("\x0E\x01\x09\x04\x00\x04Du willst Ordnung im Item-Lager\nschaffen? Hm...\n\n\nNa ja, mit diesem Knopf kannst du das\njederzeit erledigen.\n\n\nDie Pfeile in deinen Köchern zum Beispiel\nwerden dann zusammengefasst und sortiert.")
          		goto flw_23
          	}
          }

          void entrypoint_112_06() {
/*< 31>*/ 	start()
          	goto flw_4
          }

