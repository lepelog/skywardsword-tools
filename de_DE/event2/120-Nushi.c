          void entrypoint_120_20() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf("Ich stelle die Kürbissuppe hier ab,\nin Ordnung?\n\n\nDas ist ein komischer Ort. Ich habe das\nGefühl, dass hier gleich irgendetwas\nganz Großes erscheint.")
          }

          void entrypoint_120_21() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf("Ich mache mich dann mal vom Acker!\x0E\x01\x05\x04(\x00")
/*< 25>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*< 23>*/ 	story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */] = true;
/*< 24>*/ 	story_flags[288 /* us: 805A9AFA 0x04, jp: 805ACD7A 0x04 */] = true;
          }

          void entrypoint_120_01() {
/*<  7>*/ 	start()
/*< 32>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*< 34>*/ 		printf("Oho! Ich bin stolz auf dich. Du hast es\ngeschafft, das Triforce zu finden!")
          		flw_35:
/*< 35>*/ 		printf("Ich nehme an, du weißt nun selbst,\nwas zu tun ist.\n\n\nGlaube an dich und gehe den Weg, den\ndein Schicksal dir weist, Jüngling.")
          		flw_36:
/*< 36>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 31>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*< 33>*/ 			printf("Oho! Ich bin stolz auf dich. Du hast\nherausgefunden, wo sich das Triforce\nbefindet.")
          			goto flw_35
          		  case 1:
/*< 15>*/ 			switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          			  case 0:
/*< 16>*/ 				printf("Das Heldenlied öffnet den Eingang zur\nletzten Prüfung. Er muss sich irgendwo\nim weiten <b<Wolkenmeer >>befinden.\n\nDu kannst das <y+<Triforce>> nur erlangen,\nwenn du diese Prüfung bestehst.")
          				goto flw_36
          			  case 1:
/*< 10>*/ 				switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          				  case 0:
/*<  9>*/ 					switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          					  case 0:
/*< 11>*/ 						switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          						  case 0:
/*< 26>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 13, 'param3': 6}
/*< 13>*/ 							changeScene(5, 0) // 
          						  case 1:
          							flw_8:
/*<  8>*/ 							printf("Ho ho, wie kommst du voran, Jüngling?\n\n\n\nBesuche mich, sobald du alle drei\nStimmen des Heldenlieds erlernt hast.\n\n\nDie drei Drachen im Wald von Phirone,\nam Vulkan Eldin und in der Wüste\nRanelle können sie dir beibringen.")
          						}
          					  case 1:
          						goto flw_8
          					}
          				  case 1:
/*< 21>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*< 12>*/ 						printf("Komm zu mir, wenn du drei Stimmen\ndes Heldenlieds erlernt hast.\n\n\nNur dann singe ich für dich die vierte\nund letzte Stimme, um das Lied zu\nvervollständigen.\n\n\x0E\x01\x08\x02\xFFCDIch sollte wohl schon einmal damit beginnen,\nmeine Stimmbänder ein wenig anzuwärmen...\x0E\x01\x08\x02Í")
          					  case 1:
          						printf("Du warst es, der mir meine geliebte\nKürbissuppe brachte?\n\n\nUnd du hast mich vor diesem Monster\ngerettet, das meinen Geist und meinen\nKörper befallen hat...\n\nDer Geruch meiner geliebten Suppe\nhat mich hierher geführt. Ich danke\ndir, Jüngling...")
/*<  1>*/ 						printf("Ich bin <b<Narisha>>, ein Diener unserer\n<b<Göttin Hylia>>, und ich herrsche über das\nWolkenmeer.\n\nHm...<pause19> Ich verstehe. Dein Name ist\nalso Link...\nEin klangvoller Name, fürwahr.\n\nDeine Eltern haben ein gutes Gespür\nbei der Wahl deines Namens bewiesen.\n\n\n<pause14>Oh... <pause14>Dieses Schwert... <pause14>Die Kraft in\ndeinem Herzen... Bist du etwa der\nauserwählte Held, Link?\nKann es tatsächlich sein?\nWenn dem so ist, kommst du wohl, um\nmich nach dem <y+<Triforce>> zu fragen...\n[1]Das ist richtig.[2]Weißt du davon?")
/*<  2>*/ 						switch (choice(2)) {
          						  case 0:
          							flw_4:
/*<  4>*/ 							printf("Meine Vermutung ist also korrekt...<pause19>\nDann will ich dir etwas erzählen.\n\n\nWie du weißt, unternahm die Göttin\nalles, damit das Triforce nicht in die\nHände der bösen Mächte fällt.\n\nAus diesem Grund hat sie es im\n<b<Wolkenhort >>versteckt, an einem\nOrt, den niemand kennt.\n\nSelbst ich weiß nicht, wo sich dieser\nOrt befindet. Doch die Göttin gab mir\neinen Hinweis.\n\nEs handelt sich dabei um ein Lied für\ndie <b<Lyra>>, die du bei dir trägst. Es trägt\nden Namen <r<Heldenlied>>.")
/*<  5>*/ 							printf("Das Heldenlied ist so etwas wie der\n<r<Schlüssel >>zu dem Ort, an dem das\nTriforce verborgen ist.")
/*<  6>*/ 							printf("Doch die Göttin hat das Lied in vier\nTeile, vier Stimmen, aufgeteilt.\n\n\nEine der Stimmen kenne ich, doch die\nanderen drei wurden an die erhabenen\nDrachen des Erdlandes weitergegeben.\n\nDu musst die drei <pling><r<Stimmen des\nHeldenlieds >>jeweils von den drei\nDrachen erlernen.\n\nWenn du alle drei Stimmen hast, komm\nzu mir und ich singe für dich die letzte\nfehlende Stimme. Hast du verstanden?\n\nBesuche die drei Drachen im Wald von\nPhirone, am Vulkan Eldin und in der\nWüste Ranelle.")
/*< 22>*/ 							story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */] = true;
/*< 14>*/ 							story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = true;
/*< 37>*/ 							story_flags[781 /* us: 805A9B2D 0x20, jp: 805ACDAD 0x20 */] = true;
          						  case 1:
/*<  3>*/ 							printf("Du stellst die Weisheit des großen\nHimmelsgeistes in Frage? <pause14>Nun, ich\nwill dir deinen Frevel verzeihen...")
          							goto flw_4
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_120_02() {
/*< 27>*/ 	start()
/*< 28>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*< 30>*/ 		scene_flags[21 'The Sky'][37 /* 0x5 20 */] = true;
          	  case 1:
/*< 29>*/ 		scene_flags[21 'The Sky'][36 /* 0x5 10 */] = true;
          	}
          }

