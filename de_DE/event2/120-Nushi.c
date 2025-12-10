          void entrypoint_120_20() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0, line: 13 */ "Ich stelle die Kürbissuppe hier ab,\nin Ordnung?\n\n\nDas ist ein komischer Ort. Ich habe das\nGefühl, dass hier gleich irgendetwas\nganz Großes erscheint.")
          }

          void entrypoint_120_21() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 1, unk: 0, line: 14 */ "Ich mache mich dann mal vom Acker!<0x10005:0x00280000>")
/*< 25>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*< 23>*/ 	story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */] = true;
/*< 24>*/ 	story_flags[288 /* us: 805A9AFA 0x04, jp: 805ACD7A 0x04 */] = true;
          }

          void entrypoint_120_01() {
/*<  7>*/ 	start()
/*< 32>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*< 34>*/ 		printf(/* textboxtype: 1, unk: 0, line: 11 */ "Oho! Ich bin stolz auf dich. Du hast es\ngeschafft, das Triforce zu finden!")
          		flw_35:
/*< 35>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "Ich nehme an, du weißt nun selbst,\nwas zu tun ist.\n\n\nGlaube an dich und gehe den Weg, den\ndein Schicksal dir weist, Jüngling.")
          		flw_36:
/*< 36>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 31>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*< 33>*/ 			printf(/* textboxtype: 1, unk: 0, line: 10 */ "Oho! Ich bin stolz auf dich. Du hast\nherausgefunden, wo sich das Triforce\nbefindet.")
          			goto flw_35
          		  case 1:
/*< 15>*/ 			switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          			  case 0:
/*< 16>*/ 				printf(/* textboxtype: 1, unk: 0, line: 9 */ "Das Heldenlied öffnet den Eingang zur\nletzten Prüfung. Er muss sich irgendwo\nim weiten <color blue<Wolkenmeer >coloroff>befinden.\n\nDu kannst das <color yellow white<Triforce>coloroff> nur erlangen,\nwenn du diese Prüfung bestehst.")
          				goto flw_36
          			  case 1:
/*< 10>*/ 				switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          				  case 0:
/*<  9>*/ 					switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          					  case 0:
/*< 11>*/ 						switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          						  case 0:
/*< 26>*/ 							wait_frames(20)
/*< 13>*/ 							changeScene(5, 0) // 
          						  case 1:
          							flw_8:
/*<  8>*/ 							printf(/* textboxtype: 1, unk: 0, line: 6 */ "Ho ho, wie kommst du voran, Jüngling?\n\n\n\nBesuche mich, sobald du alle drei\nStimmen des Heldenlieds erlernt hast.\n\n\nDie drei Drachen im Wald von Phirone,\nam Vulkan Eldin und in der Wüste\nRanelle können sie dir beibringen.")
          						}
          					  case 1:
          						goto flw_8
          					}
          				  case 1:
/*< 21>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*< 12>*/ 						printf(/* textboxtype: 1, unk: 0, line: 7 */ "Komm zu mir, wenn du drei Stimmen\ndes Heldenlieds erlernt hast.\n\n\nNur dann singe ich für dich die vierte\nund letzte Stimme, um das Lied zu\nvervollständigen.\n\n<0x10008:0xffcd>Ich sollte wohl schon einmal damit beginnen,\nmeine Stimmbänder ein wenig anzuwärmen...<0x10008:0x00cd>")
          					  case 1:
          						printf(/* textboxtype: 1, unk: 0, line: 0 */ "Du warst es, der mir meine geliebte\nKürbissuppe brachte?\n\n\nUnd du hast mich vor diesem Monster\ngerettet, das meinen Geist und meinen\nKörper befallen hat...\n\nDer Geruch meiner geliebten Suppe\nhat mich hierher geführt. Ich danke\ndir, Jüngling...")
/*<  1>*/ 						printf(/* textboxtype: 1, unk: 0, line: 1 */ "Ich bin <color blue<Narisha>coloroff>, ein Diener unserer\n<color blue<Göttin Hylia>coloroff>, und ich herrsche über das\nWolkenmeer.\n\nHm...<pause 25> Ich verstehe. Dein Name ist\nalso <heroname>...\nEin klangvoller Name, fürwahr.\n\nDeine Eltern haben ein gutes Gespür\nbei der Wahl deines Namens bewiesen.\n\n\n<pause 20>Oh... <pause 20>Dieses Schwert... <pause 20>Die Kraft in\ndeinem Herzen... Bist du etwa der\nauserwählte Held, <heroname>?\nKann es tatsächlich sein?\nWenn dem so ist, kommst du wohl, um\nmich nach dem <color yellow white<Triforce>coloroff> zu fragen...\n[1-]Das ist richtig.[2-]Weißt du davon?")
/*<  2>*/ 						switch (choice(2)) {
          						  case 0:
          							flw_4:
/*<  4>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "Meine Vermutung ist also korrekt...<pause 25>\nDann will ich dir etwas erzählen.\n\n\nWie du weißt, unternahm die Göttin\nalles, damit das Triforce nicht in die\nHände der bösen Mächte fällt.\n\nAus diesem Grund hat sie es im\n<color blue<Wolkenhort >coloroff>versteckt, an einem\nOrt, den niemand kennt.\n\nSelbst ich weiß nicht, wo sich dieser\nOrt befindet. Doch die Göttin gab mir\neinen Hinweis.\n\nEs handelt sich dabei um ein Lied für\ndie <color blue<Lyra>coloroff>, die du bei dir trägst. Es trägt\nden Namen <color red<Heldenlied>coloroff>.")
/*<  5>*/ 							printf(/* textboxtype: 1, unk: 0, line: 4 */ "Das Heldenlied ist so etwas wie der\n<color red<Schlüssel >coloroff>zu dem Ort, an dem das\nTriforce verborgen ist.")
/*<  6>*/ 							printf(/* textboxtype: 1, unk: 0, line: 5 */ "Doch die Göttin hat das Lied in vier\nTeile, vier Stimmen, aufgeteilt.\n\n\nEine der Stimmen kenne ich, doch die\nanderen drei wurden an die erhabenen\nDrachen des Erdlandes weitergegeben.\n\nDu musst die drei <sound 4><color red<Stimmen des\nHeldenlieds >coloroff>jeweils von den drei\nDrachen erlernen.\n\nWenn du alle drei Stimmen hast, komm\nzu mir und ich singe für dich die letzte\nfehlende Stimme. Hast du verstanden?\n\nBesuche die drei Drachen im Wald von\nPhirone, am Vulkan Eldin und in der\nWüste Ranelle.")
/*< 22>*/ 							story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */] = true;
/*< 14>*/ 							story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = true;
/*< 37>*/ 							story_flags[781 /* us: 805A9B2D 0x20, jp: 805ACDAD 0x20 */] = true;
          						  case 1:
/*<  3>*/ 							printf(/* textboxtype: 1, unk: 0, line: 2 */ "Du stellst die Weisheit des großen\nHimmelsgeistes in Frage? <pause 20>Nun, ich\nwill dir deinen Frevel verzeihen...")
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

