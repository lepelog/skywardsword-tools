          void entrypoint_006_004() {
/*<  6>*/ 	start()
/*< 26>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 25>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*< 27>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 30>*/ 				printf(/* textboxtype: 2, unk: 0, line: 13 */ "Sehr gut, <0x10012:0x00000002>Gebieter. Du hast nun drei\nStimmen des <color blue<Heldenlieds >coloroff>erlernt.\n\n\nUm die einzelnen Stimmen richtig\nzusammenzufügen und die letzte\nStimme zu erhalten, besuche nun\nden großen Himmelsgeist <color blue<Narisha>coloroff>.")
/*< 33>*/ 				story_flags[465 /* us: 805A9B0F 0x04, jp: 805ACD8F 0x04 */] = true;
          			  case 1:
/*< 29>*/ 				printf(/* textboxtype: 2, unk: 0, line: 12 */ "Sehr gut, <0x10012:0x00000002>Gebieter. Du hast nun bereits\nzwei Stimmen des Heldenlieds erlernt.\nBesuche nun als letztes die <color blue<Wüste\nRanelle>coloroff>.")
          			}
          		  case 1:
/*< 28>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 32>*/ 				printf(/* textboxtype: 2, unk: 0, line: 10 */ "Sehr gut, <0x10012:0x00000002>Gebieter. Du hast nun bereits\nzwei Stimmen des Heldenlieds erlernt.\nBesuche nun als letztes den <color blue<Wald von\nPhirone>coloroff>.")
          			  case 1:
/*< 31>*/ 				printf(/* textboxtype: 2, unk: 0, line: 9 */ "Die Stimme, die du erlernt hast,\ngehört zum <color blue<Heldenlied>coloroff>, <0x10012:0x00000001>Gebieter.\n\n\nSuche die beiden Drachen der anderen\nLänder auf und lerne von ihnen die\nfehlenden Stimmen des Liedes.")
          			}
          		}
          	  case 1:
/*< 34>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*< 41>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 43>*/ 				printf(/* textboxtype: 2, unk: 0, line: 11 */ "Sehr gut, <0x10012:0x00000002>Gebieter. Du hast nun bereits\nzwei Stimmen des Heldenlieds erlernt.\nBesuche nun als letztes den <color blue<Vulkan\nEldin>coloroff>.")
          				flw_40:
/*< 40>*/ 				story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = true;
          			  case 1:
/*< 35>*/ 				printf(/* textboxtype: 2, unk: 0, line: 9 */ "Die Stimme, die du erlernt hast,\ngehört zum <color blue<Heldenlied>coloroff>, <0x10012:0x00000001>Gebieter.\n\n\nSuche die beiden Drachen der anderen\nLänder auf und lerne von ihnen die\nfehlenden Stimmen des Liedes.")
          				goto flw_40
          			}
          		  case 1:
/*< 36>*/ 			printf(/* textboxtype: 2, unk: 0, line: 9 */ "Die Stimme, die du erlernt hast,\ngehört zum <color blue<Heldenlied>coloroff>, <0x10012:0x00000001>Gebieter.\n\n\nSuche die beiden Drachen der anderen\nLänder auf und lerne von ihnen die\nfehlenden Stimmen des Liedes.")
          			goto flw_40
          		}
          	}
          }

          void entrypoint_006_005() {
/*< 20>*/ 	start()
/*< 21>*/ 	printf(/* textboxtype: 2, unk: 0, line: 14 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu\nberichten. Du hast nun eine Karte\ndieses Gebiets erhalten. Rufe sie\ndurch Drücken von (+) auf.<0x10011:0x03cd>\nDarauf wird dir angezeigt, wo sich<pause 15>\nTüren oder Schatztruhen befinden<pause 15>\nund ob diese geöffnet, versperrt\noder ungeöffnet sind.\nSymbole wie (X) markieren eben\ngenannte Stellen.\n\n\nIch weise dich jedoch darauf hin,\ndass du an Orten wie diesem <color red<keine\nSignallichter setzen >coloroff>kannst.")
/*< 22>*/ 	story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          }

          void entrypoint_006_006() {
/*< 23>*/ 	start()
/*< 24>*/ 	printf(/* textboxtype: 2, unk: 0, line: 15 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu\nberichten. Ich spüre das Portal\nder Prüfung ganz in der Nähe.\n\nNutze die <color red<Aurasuche>coloroff>, um den Ort zu\nfinden und spiele <color blue<Farores Mut>coloroff>, um das\nPortal freizulegen, <0x10012:0x00000002>Gebieter.")
/*< 42>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_006_007() {
/*< 37>*/ 	start()
/*< 38>*/ 	printf(/* textboxtype: 2, unk: 0, line: 16 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas\nzu berichten.\n\n\nDie Eruption des Vulkans ist zu Ende.\nEs ist nun möglich, wieder zurück ins\nWolkenmeer zu reisen.")
/*< 39>*/ 	entrypoint_006_04();
          }

          void entrypoint_006_008() {
/*< 45>*/ 	start()
/*< 47>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 3, 'next': 48, 'param3': 32}
/*< 48>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 99, 'next': 49, 'param3': 16}
/*< 49>*/ 	printf(/* textboxtype: 2, unk: 0, line: 15 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu\nberichten. Ich spüre das Portal\nder Prüfung ganz in der Nähe.\n\nNutze die <color red<Aurasuche>coloroff>, um den Ort zu\nfinden und spiele <color blue<Farores Mut>coloroff>, um das\nPortal freizulegen, <0x10012:0x00000002>Gebieter.")
/*< 52>*/ 	story_flags[121 /* us: 805A9AEA 0x40, jp: 805ACD6A 0x40 */] = true;
/*< 46>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*< 50>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 51, 'param3': 36}
/*< 51>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 15, 'next': -1, 'param3': 42}
          }

          void entrypoint_006_001() {
/*< 10>*/ 	start()
/*<  9>*/ 	printf(/* textboxtype: 2, unk: 0, line: 18 */ "Nach deinem glorreichen Sieg bei der\nVogelreiter-Zeremonie bist <0x10012:0x00000002>du mit\n<color blue<Zelda>coloroff> im Wolkenmeer geflogen, ehe\nsie abgestürzt ist.\nIm Tempel der Göttin hast du danach\ndas <color yellow<Schwert der Göttin >coloroff>erhalten, in\ndem auch ich, <color blue<Phai>coloroff>, ruhte, <0x10012:0x00000001>Gebieter.\n\nDurch das Einsetzen der <color yellow<Tafel >coloroff>wurde\ndir der Weg in das Erdland über die\n<color red<Lichtsäule >coloroff>eröffnet.")
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
/*< 15>*/ 				printf(/* textboxtype: 2, unk: 0, line: 2 */ "Stoße das Schwert in das Symbol und\nstelle dich der letzten Prüfung.")
/*< 19>*/ 				story_flags[99 /* us: 805A9AF0 0x01, jp: 805ACD70 0x01 */] = true;
          			  case 1:
/*< 13>*/ 				printf(/* textboxtype: 2, unk: 0, line: 1 */ "Stoße das Schwert in das Symbol und\nstelle dich der nächsten Prüfung.")
/*< 18>*/ 				story_flags[98 /* us: 805A9AF1 0x80, jp: 805ACD71 0x80 */] = true;
          			}
          		  case 1:
/*< 11>*/ 			printf(/* textboxtype: 2, unk: 0, line: 1 */ "Stoße das Schwert in das Symbol und\nstelle dich der nächsten Prüfung.")
/*< 17>*/ 			story_flags[97 /* us: 805A9AF1 0x40, jp: 805ACD71 0x40 */] = true;
          		}
          	  case 1:
/*<  1>*/ 		printf(/* textboxtype: 2, unk: 0, line: 0 */ "Dein Lyraspiel und mein Singen von\nFarores Mut haben mit dem Symbol\nauf dem Boden reagiert und ein Relief\nist erschienen, mein <0x10012:0x00000001>Gebieter.\nEs ist zu 90 % wahrscheinlich, dass es\nsich dabei um das Portal der Prüfung\nhandelt, von dem dir in der Stätte der\nLieder bereits berichtet wurde.\nStelle dich in die Mitte des Symbols und\nstoße dein Schwert in den Boden.")
/*< 16>*/ 		story_flags[93 /* us: 805A9AF1 0x04, jp: 805ACD71 0x04 */] = true;
          	}
          }

          void entrypoint_006_003() {
/*<  3>*/ 	start()
/*<  4>*/ 	printf(/* textboxtype: 2, unk: 0, line: 8 */ "")
/*<  5>*/ 	story_flags[358 /* us: 805A9B00 0x10, jp: 805ACD80 0x10 */] = true;
/*<  7>*/ 	story_flags[570 /* us: 805A9B18 0x02, jp: 805ACD98 0x02 */] = true;
/*<  8>*/ 	story_flags[571 /* us: 805A9B18 0x04, jp: 805ACD98 0x04 */] = true;
          }

