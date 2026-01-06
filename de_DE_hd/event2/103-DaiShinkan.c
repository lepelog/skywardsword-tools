          void entrypoint_103_01() {
          	start()
/*< 77>*/ 	switch (scene_flags[92 /* 0xA 10 */]) {
          	  case 0:
/*< 78>*/ 		printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00000005>Kannst du deinen Wolkenvogel denn noch\nimmer nicht spüren?\n\n\nKonzentriere dich! Ich bin mir sicher, dass du\netwas spüren wirst...")
          	  case 1:
/*<  1>*/ 		switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          		  case 0:
/*<  3>*/ 			printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000001>Hallo, <heroname>!\nHast du deinen Wolkenvogel gefunden?\n\n\n<pause 40>Was? <color blue<Bado>coloroff>...\nDas sieht diesem Burschen ähnlich!")
/*< 79>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 71, 'param3': 32}
/*< 71>*/ 			{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': -1, 'next': 72, 'param3': 16}
/*< 72>*/ 			{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 0, 'next': 73, 'param3': 17}
/*< 73>*/ 			printf(/* textboxtype: 0, unk: 0, line: 2 */ "Direktor!\nWenn das wahr ist, könnte sich das sogar als\nVorteil für uns erweisen.\n\nSo kann er sich immerhin nicht beklagen, wenn\nsich der Anfang der Zeremonie verspätet...")
/*< 74>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 75, 'param3': 16}
/*< 75>*/ 			printf(/* textboxtype: 1, unk: 0, line: 3 */ "Hm, da ist etwas dran...\n\n\n\nHör mal, <heroname>!\nDu hast gehört, was dein Lehrer gesagt hat.\nSuche deinen Wolkenvogel und mach dir\nkeine Sorgen.")
/*< 76>*/ 			scene_flags[0 'Skyloft'][92 /* 0xA 10 */] = true;
          		  case 1:
/*<103>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
          				flw_2:
/*<  2>*/ 				printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000005>Wir sollten Meister <color blue<Tytor>coloroff> von dieser Sache\nberichten, <pause 15><heroname>!\nSag ihm, dass er in mein Zimmer kommen soll.\n\nAußerdem solltest du vielleicht die anderen\nSchüler nach deinem Wolkenvogel fragen.\nSie dürften alle auf dem Dorfplatz sein.")
/*<102>*/ 				entrypoint_100_58();
          			  case 1:
/*<101>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 2, 'param3': 31}
          				goto flw_2
          			}
          		}
          	}
          }

          void entrypoint_103_02() {
/*< 13>*/ 	start()
/*< 14>*/ 	scene_flags[0 'Skyloft'][5 /* 0x1 20 */] = true;
/*< 15>*/ 	scene_flags[0 'Skyloft'][6 /* 0x1 40 */] = true;
/*< 16>*/ 	scene_flags[0 'Skyloft'][1 /* 0x1 02 */] = true;
/*< 42>*/ 	scene_flags[0 'Skyloft'][67 /* 0x9 08 */] = true;
          }

          void entrypoint_103_03() {
/*< 67>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00000005>So viele unglaubliche Dinge sind gerade\ngeschehen...\n\n\nAber vielleicht solltest du den Ratschlag\nbeherzigen und sehen, was noch geschieht...")
          }

          void entrypoint_103_06() {
/*< 17>*/ 	start()
/*< 63>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*< 82>*/ 		switch (zone_temp_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			flw_84:
/*< 84>*/ 			printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00000004>Ich vertraue noch immer darauf, dass du es\nschaffen wirst, mir Zelda zurückzubringen.\nStreng dich an, <heroname>!")
/*< 83>*/ 			zone_temp_flags[19 /* 0x3 08 */] = true;
          		  case 1:
/*< 64>*/ 			printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00000002><0x30001:0x><heroname>!\n\n\n\nDie Göttin...<pause 30>\nDie Insel der Göttin...\nSie ist verschwunden!\n\n[1-]Also...[2-]Nun...")
/*< 66>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_65:
/*< 65>*/ 				printf(/* textboxtype: 0, unk: 0, line: 26 */ "Sag nichts, <heroname>!\n\n\n\n<color yellow white<Wenn das Unheil abgewendet ist, wird\ndie Göttin ins Erdland zurückkehren...>coloroff>\n\n\nSo heißt es am Ende der <color red<Überlieferung>coloroff>.<pause 20>\nJetzt habe ich es endlich verstanden.\n\n\nHeißt das, dass es endlich ausgestanden ist?<pause 20>\nMeine Tochter...<pause 10> Zelda ist endlich in Sicherheit?\n[1-]Es tut mir leid...[2-]Nein.")
/*< 98>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_99:
/*< 99>*/ 					printf(/* textboxtype: 1, unk: 0, line: 27 */ "Ich verstehe...\nMach dir keine Vorwürfe.\n\n\nGib einfach dein Bestes und ich bin sicher,\nalles wird sich zum Guten wenden.")
          					goto flw_84
          				  case 1:
          					goto flw_99
          				}
          			  case 1:
          				goto flw_65
          			}
          		}
          	  case 1:
/*< 96>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*< 97>*/ 			printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00000004>Huch... Ich bilde mir ein, ich hätte eben ein\nlautes Poltern gehört...\n\n\nNun, wie dem auch sei, bitte finde Zelda so\nschnell wie möglich.")
          		  case 1:
/*< 87>*/ 			switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          			  case 0:
/*< 88>*/ 				switch (zone_temp_flags[19 /* 0x3 08 */]) {
          				  case 0:
/*< 91>*/ 					printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00000004>Ich bin mir sicher, dieses Juwel schon einmal\nirgendwo gesehen zu haben... Aber wo?\n\n\nVielleicht solltest du einmal den Wahrsager\naufsuchen und ihn dazu befragen.")
          				  case 1:
/*< 89>*/ 					printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000002>Hallo, <heroname>!\nWie geht es dir?\n\n\nWas sagst du da? Du musst das <color red<Insigne der\nReife>coloroff> irgendwo hinbringen?\n\n\nHmmm, ich kann mich erinnern, dass es einst\nirgendwo aufbewahrt wurde. Aber wo?")
/*< 90>*/ 					zone_temp_flags[19 /* 0x3 08 */] = true;
          				}
          			  case 1:
/*< 80>*/ 				switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          				  case 0:
/*< 81>*/ 					printf(/* textboxtype: 0, unk: 0, line: 29 */ "Was sagst du da? Du hast Narishas Zorn\nbesänftigt und so über das Triforce erfahren?\n\n\nDu hast so viel in so kurzer Zeit erreicht!\nIch bin tief beeindruckt...\n\n\nGib weiter dein Bestes und bestehe auch die\nfolgenden Prüfungen, die das Schicksal für\ndich bereithält!")
          				  case 1:
/*< 60>*/ 					switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          					  case 0:
/*< 62>*/ 						{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 61, 'param3': 13}
/*< 61>*/ 						printf(/* textboxtype: 1, unk: 0, line: 24 */ "Ah, Narisha ist also... Hmmm...\nDer Tornadostoß ist nicht ungefährlich,\nkann aber auch sehr hilfreich sein!")
          					  case 1:
/*< 34>*/ 						switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          						  case 0:
/*< 59>*/ 							{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 4, 'next': 31, 'param3': 13}
/*< 31>*/ 							printf(/* textboxtype: 1, unk: 0, line: 39 */ "Geh nach nebenan und frage Meister <color blue<Otus\n>coloroff>nach Narisha, ja?")
          						  case 1:
/*< 85>*/ 							switch (story_flags[327 /* us: 805A9AFF 0x20, jp: 805ACD7F 0x20 */]) {
          							  case 0:
/*< 86>*/ 								printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x00000002>Ob es jemanden gibt, der dir mehr über das\nTriforce erzählen kann...\n\n\nIch befürchte, dass es hier im Wolkenhort keine\nsolche Person gibt...")
          							  case 1:
/*< 20>*/ 								switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          								  case 0:
/*< 35>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 58, 'param3': 31}
/*< 58>*/ 									{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 21, 'param3': 13}
/*< 21>*/ 									printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x30001:0x><heroname>!\nHast du etwas Neues über Zelda\nherausgefunden?\n\nSag schon<0x10006:0xfecd>...<0x10006:0x00cd>\nUnd sei es nur der kleinste Hinweis, ich\nwill alles hören!")
/*< 69>*/ 									wait_frames(40)
/*< 22>*/ 									printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10006:0xfecd>...<0x10006:0x00cd>Du kannst darüber noch nicht sprechen?\nIch verstehe... Es gibt Dinge, über die man nicht\nreden kann, und dann soll man schweigen<0x10006:0xfecd>...")
/*< 70>*/ 									wait_frames(30)
/*< 37>*/ 									printf(/* textboxtype: 0, unk: 1, line: 19 */ "Ich habe ein wenig nachgedacht,\n<heroname>...\n\n\nEs tut mir leid, mit anzusehen, wie du dich so\nmutterseelenallein deinem Schicksal stellst...\nIch bin nur ein alter Mann<0x10006:0xfecd>...<0x10006:0x00cd> Aber vielleicht\nkann ich dir gerade deswegen helfen.\nIch habe beschlossen, all mein Wissen mit dir\nzu teilen!\n\n\nDu kannst mich alles fragen, was du zum\nWolkenhort wissen willst...\n[1-]Also...[2-]Nicht jetzt.")
/*< 23>*/ 									switch (choice(2)) {
          									  case 0:
          										flw_25:
/*< 25>*/ 										printf(/* textboxtype: 0, unk: 0, line: 20 */ "Was sagst du da? Du willst wissen, was das\n<color yellow white<Triforce>coloroff> ist<0x10006:0xfecd>...<0x10006:0x00cd>\n\n\nWoher weißt du...\n\n\n\nDie alten Schriften sagen leider nur sehr wenig\ndarüber. Es ist auf jeden Fall sehr rätselhaft...")
/*< 26>*/ 										printf(/* textboxtype: 0, unk: 1, line: 22 */ "Es tut mir leid...\nDa rede ich von meiner Weisheit und muss\ntrotzdem passen...")
/*< 32>*/ 										story_flags[327 /* us: 805A9AFF 0x20, jp: 805ACD7F 0x20 */] = true;
          									  case 1:
/*< 24>*/ 										printf(/* textboxtype: 1, unk: 0, line: 21 */ "Wie, du willst dir meine Weisheit nicht\nzunutze machen?\n\n\nIch bin mir sicher, dass ich dir behilflich\nsein kann. Komm schon, frag mich etwas!")
          										goto flw_25
          									}
          								  case 1:
/*< 19>*/ 									switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          									  case 0:
/*< 57>*/ 										{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 5, 'next': 18, 'param3': 13}
/*< 18>*/ 										printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x30001:0x><heroname>!\nAuf dir ruht meine ganze Hoffnung...\nFinde Zelda für mich!")
          									  case 1:
/*< 11>*/ 										switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          										  case 0:
/*< 56>*/ 											{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1, 'next': 12, 'param3': 13}
/*< 12>*/ 											printf(/* textboxtype: 1, unk: 0, line: 15 */ "Werden zwei große Flügel zum Turm des\nLichts geführt, so wird dem Jüngling der\nVerbleib des legendären Liedes enthüllt...\n\nHör mal, <heroname>!\nDieses Lied wird im Wolkenhort seit\nGenerationen weitergegeben...\n\nVielleicht solltest du einmal nachsehen,\nwo im Wolkenhort sich diese <color red<zwei Flügel\n>coloroff>befinden könnten? Eventuell erhältst du\nso einen Hinweis...")
          										  case 1:
/*< 50>*/ 											switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          											  case 0:
/*< 36>*/ 												{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 31}
/*< 55>*/ 												{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 3, 'next': 92, 'param3': 13}
/*< 92>*/ 												printf(/* textboxtype: 0, unk: 0, line: 8 */ "Oh, da bist du ja, <heroname>!\nIch freue mich, dass du wohlauf bist.\n\n\nHast du etwas über Zeldas Verbleib\nherausfinden können?")
/*< 94>*/ 												set_camera(10, 0)
/*< 93>*/ 												printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000005>Ich verstehe<0x10006:0xfbcd>...<0x10006:0x00cd>\nOh, Zelda...\n\n\nNein, ich darf nicht klagen, sonst wird die Last,\ndie du auf deinen Schultern trägst, nur\nnoch schwerer...")
/*< 95>*/ 												set_camera(-1, 0)
/*<  4>*/ 												printf(/* textboxtype: 0, unk: 1, line: 10 */ "Was?<pause 40> Du willst den Text des Liedes erfahren,\ndas Zelda am Tag der Vogelreiter-Zeremonie\ngesungen hat?\n\nIch helfe dir ja gerne, aber ich bin wirklich\nkein großer Musiker...\n[1-]Der Text\ngenügt![2-]Bitte sing!")
/*<  5>*/ 												switch (choice(2)) {
          												  case 0:
/*<  7>*/ 													printf(/* textboxtype: 1, unk: 0, line: 12 */ "Und ich dachte schon... Na ja, umso besser!\n\n\nWarte einen Augenblick...")
          													flw_8:
/*<  8>*/ 													printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10006:0xfccd><color yellow white<Ein Jüngling, geleitet von der Göttin,\nwird Himmel und Erde verbinden und\ndas Licht bringen...>coloroff><0x10006:0x00cd>\n\nUnd weiter geht es so...\n\n\n\n<0x10006:0xfccd><color yellow white<Er wird zwei Flügel zum Turm des\nLichts führen... Ein Weg wird sich\nöffnen, das Echo des Liedes\nerschallen...>coloroff><0x10006:0x00cd>")
/*<  9>*/ 													printf(/* textboxtype: 0, unk: 0, line: 14 */ "Dies ist der Text des Liedes...\n\n\n\nDer <color red<Turm des Lichts >coloroff>ist der Turm am\nDorfplatz...\n\n\nAber die großen Flügel<0x10006:0xfecd>...\nWenn man zwei Flügel zum Turm am\nDorfplatz führt, passiert also etwas<0x10006:0xfecd>...<0x10006:0x00cd>\n\n<color red<Zwei große Flügel>coloroff>...\nHmmm<0x10006:0xfecd>...")
/*< 10>*/ 													story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */] = true;
/*<100>*/ 													story_flags[142 /* us: 805A9AEE 0x01, jp: 805ACD6E 0x01 */] = true;
          												  case 1:
/*<  6>*/ 													printf(/* textboxtype: 0, unk: 0, line: 11 */ "Ich... Jetzt hör schon auf mit diesem Unfug!\nDen Text kann ich dir aufsagen...\n\nMoment mal...")
          													goto flw_8
          												}
          											  case 1:
/*< 52>*/ 												switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          												  case 0:
/*< 51>*/ 													printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00000002>Hallo, <heroname>!\nHast du etwas über Zelda herausgefunden?\n\n\nIch habe es vorgezogen, nicht über\ndie Ereignisse jener Nacht zu sprechen.\nIch möchte hier im Dorf keine Unruhe stiften.\n\nEs tut mir leid, dass du ganz alleine bist,\naber ich bitte dich... Erweise dich dieser\nAufgabe würdig! Für uns alle!")
          												  case 1:
/*< 53>*/ 													printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00000001>Ich hörte, dass der <color red<Schwertmeister >coloroff>Bedenken\nbezüglich deiner Reise hat.\n\n\nVielleicht solltest du vor deinem Aufbruch noch\nmal kurz bei der Übungshalle vorbeischauen\nund mit ihm reden?\n\n<0x30001:0x><heroname>, ich vertraue dir.\nFinde Zelda!")
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

          void entrypoint_103_07() {
/*< 27>*/ 	start()
/*< 54>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 28, 'param3': 13}
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "Einen Moment, <heroname>!")
/*< 43>*/ 	set_camera(1, 0)
/*< 44>*/ 	{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 100, 'next': 29, 'param3': 15}
/*< 29>*/ 	printf(/* textboxtype: 0, unk: 1, line: 34 */ "Einen Hinweis kann ich dir geben.\nVielleicht hast du von dem uralten\n<color red<Himmelsgeist >coloroff><color blue<Narisha>coloroff> gehört...\n\n<0x1000A:0x000200cd>Narisha ist seit ewiger Zeit der Hüter der\nWolken und zugleich ein wandelndes Lexikon...\n\n\nIch bin mir sicher, dass er dir etwas zum\n<color yellow white<Triforce>coloroff> sagen können wird.\n[1-]Wo ist er?[2-]Ein Lexikon?")
/*< 38>*/ 	switch (choice(2)) {
          	  case 0:
/*< 39>*/ 		printf(/* textboxtype: 0, unk: 0, line: 35 */ "Hm, das ist eine wirklich gute Frage...")
          		flw_45:
/*< 45>*/ 		set_camera(3, 0)
/*< 30>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "Dir ist sicher schon diese riesige <color red<Sturmwolke\n>coloroff>aufgefallen, die vor Kurzem aus heiterem\nHimmel erschienen ist...\n\nEs gibt das Gerücht, dass Narisha in dieser\nWolke eingeschlossen wäre...")
/*< 46>*/ 		set_camera(4, 0)
/*< 41>*/ 		printf(/* textboxtype: 0, unk: 0, line: 38 */ "Ich hatte Meister <color blue<Otus>coloroff> beauftragt, diesem\nGerücht nachzugehen, doch dann kam die Sache\nmit Zelda dazwischen...\n\nIch habe ihn noch nicht befragen können, aber\nvielleicht hat er bereits etwas herausgefunden...\n\n\nVielleicht solltest du Meister <color blue<Otus >coloroff>direkt nach\nNarisha fragen!")
/*< 33>*/ 		story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */] = true;
/*< 47>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 40>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "Ja, er scheint in der Tat allwissend zu sein.\nAllerdings...")
          		goto flw_45
          	}
          }

          void entrypoint_103_08() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x00000017>Was soll das denn jetzt werden? Beeil dich und\nfolge den anderen, und zwar dalli! Auf geht's!")
          }

