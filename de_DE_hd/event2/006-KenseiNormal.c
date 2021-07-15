          void entrypoint_006_004() {
/*<  6>*/ 	start()
/*< 26>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 25>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*< 27>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 30>*/ 				printf("Sehr gut, \x0E\x01\x12\x04\x00\x02Gebieter. Du hast nun drei Stimmen des\n<b<Heldenlieds >>erlernt.\n\n\nUm die einzelnen Stimmen richtig zusammenzufügen\nund die letzte Stimme zu erhalten, besuche nun den\ngroßen Himmelsgeist <b<Narisha>>.")
/*< 33>*/ 				story_flags[465 /* us: 805A9B0F 0x04, jp: 805ACD8F 0x04 */] = true;
          			  case 1:
/*< 29>*/ 				printf("Sehr gut, \x0E\x01\x12\x04\x00\x02Gebieter. Du hast nun bereits zwei\nStimmen des Heldenlieds erlernt. Besuche nun\nals Letztes die <b<Wüste Ranelle>>.")
          			}
          		  case 1:
/*< 28>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 32>*/ 				printf("Sehr gut, \x0E\x01\x12\x04\x00\x02Gebieter. Du hast nun bereits zwei\nStimmen des Heldenlieds erlernt. Besuche nun\nals Letztes den <b<Wald von Phirone>>.")
          			  case 1:
/*< 31>*/ 				printf("Die Stimme, die du erlernt hast, gehört zum\n<b<Heldenlied>>, \x0E\x01\x12\x04\x00\x01Gebieter.\n\n\nSuche die beiden Drachen der anderen Länder\nauf und lerne von ihnen die fehlenden Stimmen\ndes Liedes.")
          			}
          		}
          	  case 1:
/*< 34>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*< 41>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 43>*/ 				printf("Sehr gut, \x0E\x01\x12\x04\x00\x02Gebieter. Du hast nun bereits zwei\nStimmen des Heldenlieds erlernt. Besuche nun\nals Letztes den <b<Vulkan Eldin>>.")
          				flw_40:
/*< 40>*/ 				story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = true;
          			  case 1:
/*< 35>*/ 				printf("Die Stimme, die du erlernt hast, gehört zum\n<b<Heldenlied>>, \x0E\x01\x12\x04\x00\x01Gebieter.\n\n\nSuche die beiden Drachen der anderen Länder\nauf und lerne von ihnen die fehlenden Stimmen\ndes Liedes.")
          				goto flw_40
          			}
          		  case 1:
/*< 36>*/ 			printf("Die Stimme, die du erlernt hast, gehört zum\n<b<Heldenlied>>, \x0E\x01\x12\x04\x00\x01Gebieter.\n\n\nSuche die beiden Drachen der anderen Länder\nauf und lerne von ihnen die fehlenden Stimmen\ndes Liedes.")
          			goto flw_40
          		}
          	}
          }

          void entrypoint_006_005() {
/*< 20>*/ 	start()
/*< 21>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu berichten.\nDu hast nun eine Karte dieses Gebiets erhalten.\nRufe sie durch Drücken von \x0E\x02\x04\x02\x2CD auf.\x0E\x01\x11\x02\x2CD\n\nDarauf wird dir angezeigt, wo sich<pause0F> Türen oder\nSchatztruhen befinden<pause0F> und ob diese geöffnet,\nversperrt oder ungeöffnet sind.\n\nSymbole wie \x0E\x02\x04\x02\x19CD markieren eben genannte Stellen.\n\n\n\nIch weise dich jedoch darauf hin, dass du an Orten\nwie diesem <r<keine Signallichter setzen >>kannst.")
/*< 22>*/ 	story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          }

          void entrypoint_006_006() {
/*< 23>*/ 	start()
/*< 24>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu berichten.\nIch spüre das Portal der Prüfung ganz in der Nähe.\n\n\nNutze die <r<Aurasuche>>, um den Ort zu finden und spiele\n<b<Farores Mut>>, um das Portal freizulegen, \x0E\x01\x12\x04\x00\x02Gebieter.")
/*< 42>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_006_007() {
/*< 37>*/ 	start()
/*< 38>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu berichten.\n\n\n\nDie Eruption des Vulkans ist zu Ende. Es ist nun\nmöglich, wieder zurück ins Wolkenmeer zu reisen.")
/*< 39>*/ 	entrypoint_006_04();
          }

          void entrypoint_006_008() {
/*< 45>*/ 	start()
/*< 47>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 3, 'next': 48, 'param3': 32}
/*< 48>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 99, 'next': 49, 'param3': 16}
/*< 49>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu berichten.\nIch spüre das Portal der Prüfung ganz in der Nähe.\n\n\nNutze die <r<Aurasuche>>, um den Ort zu finden und spiele\n<b<Farores Mut>>, um das Portal freizulegen, \x0E\x01\x12\x04\x00\x02Gebieter.")
/*< 52>*/ 	story_flags[121 /* us: 805A9AEA 0x40, jp: 805ACD6A 0x40 */] = true;
/*< 46>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*< 50>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 51, 'param3': 36}
/*< 51>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 15, 'next': -1, 'param3': 42}
          }

          void entrypoint_006_001() {
/*< 10>*/ 	start()
/*<  9>*/ 	printf("Nach deinem glorreichen Sieg bei der Vogelreiter-\nZeremonie bist \x0E\x01\x12\x04\x00\x02du mit <b<Zelda>> im Wolkenmeer geflogen,\nehe sie abgestürzt ist.\n\nIm Tempel der Göttin hast du danach das <y<Schwert\nder Göttin >>erhalten, in dem auch ich, <b<Phai>>, ruhte,\n\x0E\x01\x12\x04\x00\x01Gebieter.\n\nDurch das Einsetzen der <y<Tafel >>wurde dir der Weg\nin das Erdland über die <r<Lichtsäule >>eröffnet.")
          }

          void entrypoint_006_002() {
          	start()
/*< 44>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*<  2>*/ 	switch (story_flags[93 /* us: 805A9AF1 0x04, jp: 805ACD71 0x04 */]) {
          	  case 0:
/*< 12>*/ 		switch (story_flags[97 /* us: 805A9AF1 0x40, jp: 805ACD71 0x40 */]) {
          		  case 0:
/*< 14>*/ 			switch (story_flags[98 /* us: 805A9AF1 0x80, jp: 805ACD71 0x80 */]) {
          			  case 0:
/*< 15>*/ 				printf("Stoße das Schwert in das Symbol und stelle dich der\nletzten Prüfung.")
/*< 19>*/ 				story_flags[99 /* us: 805A9AF0 0x01, jp: 805ACD70 0x01 */] = true;
          			  case 1:
/*< 13>*/ 				printf("Stoße das Schwert in das Symbol und stelle dich der\nnächsten Prüfung.")
/*< 18>*/ 				story_flags[98 /* us: 805A9AF1 0x80, jp: 805ACD71 0x80 */] = true;
          			}
          		  case 1:
/*< 11>*/ 			printf("Stoße das Schwert in das Symbol und stelle dich der\nnächsten Prüfung.")
/*< 17>*/ 			story_flags[97 /* us: 805A9AF1 0x40, jp: 805ACD71 0x40 */] = true;
          		}
          	  case 1:
/*<  1>*/ 		printf("Dein Lyraspiel und mein Singen von Farores Mut\nhaben mit dem Symbol auf dem Boden reagiert und\nein Relief ist erschienen, mein \x0E\x01\x12\x04\x00\x01Gebieter.\n\nEs ist zu 90 % wahrscheinlich, dass es sich dabei um\ndas Portal der Prüfung handelt, von dem dir in der\nStätte der Lieder bereits berichtet wurde.\n\nStelle dich in die Mitte des Symbols und stoße dein\nSchwert in den Boden.")
/*< 16>*/ 		story_flags[93 /* us: 805A9AF1 0x04, jp: 805ACD71 0x04 */] = true;
          	}
          }

          void entrypoint_006_003() {
/*<  3>*/ 	start()
/*<  4>*/ 	printf("")
/*<  5>*/ 	story_flags[358 /* us: 805A9B00 0x10, jp: 805ACD80 0x10 */] = true;
/*<  7>*/ 	story_flags[570 /* us: 805A9B18 0x02, jp: 805ACD98 0x02 */] = true;
/*<  8>*/ 	story_flags[571 /* us: 805A9B18 0x04, jp: 805ACD98 0x04 */] = true;
          }

