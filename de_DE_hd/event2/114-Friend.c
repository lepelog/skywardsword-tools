          void entrypoint_114_03() {
          	start()
/*< 48>*/ 	switch (story_flags[202 /* us: 805A9AEF 0x10, jp: 805ACD6F 0x10 */]) {
          	  case 0:
/*< 49>*/ 		printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00070002>Oh, <heroname>! Hast du schon einen\nHinweis darauf, wo sich Zelda befindet?\n\n\nIch glaube ganz fest daran, dass du sie\nfinden kannst!")
          	  case 1:
/*< 12>*/ 		switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
          		  case 0:
/*< 13>*/ 			printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000009>Du schaffst das, <heroname>!")
          		  case 1:
/*< 53>*/ 			switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          			  case 0:
/*< 54>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00070811>Wie konnte Zelda nur von ihrem\nWolkenvogel fallen?!?\n\n\nSie war doch solch eine gute Reiterin!\n\n\n\n<0x10009:0x00000e00>Tja... Ein Tollpatsch wie ich kann da\nnur hoffen, dass ihr nichts passiert ist.")
          			  case 1:
/*<  7>*/ 				switch (scene_flags[40 /* 0x4 01 */]) {
          				  case 0:
/*<  6>*/ 					printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00000811>Das klingt nach einem Problem.<pause 25> Ich hoffe, dein\nWolkenvogel taucht bald wieder auf<0x10006:0xfbcd>...<0x10006:0x00cd>")
          				  case 1:
/*<  4>*/ 					switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          					  case 0:
/*<  5>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00010708>Wieso bist du denn so aufgebracht,\n<heroname>?\n\n\n<0x10009:0x00070c00>Was sagst du? Du weißt nicht, wo dein\nWolkenvogel ist?<pause 25> Was hat das denn zu\nbedeuten?\n\nEr kam nicht, obwohl du ihn gerufen\nhast? Hm<0x10006:0xfbcd>...<0x10006:0x00cd>\n\n\n<0x10009:0x00010800>Ähem<0x10006:0xfbcd>... <0x10006:0x00cd>Könnte es...<pause 25> <0x10008:0xffcd>Vielleicht... Hmmm...\n\n\n\n<0x10009:0x00080807>Wie? <pause 25>Ach, es ist nichts!<pause 25>\nIch<pause 20> habe nur laut gedacht...")
/*< 29>*/ 						scene_flags[0 'Skyloft'][40 /* 0x4 01 */] = true;
          					  case 1:
/*< 10>*/ 						switch (scene_flags[23 /* 0x3 80 */]) {
          						  case 0:
/*< 11>*/ 							printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00000009>Ich bleibe hier in der Schule und halte\ndie Stellung.\n\n\nWas die <color red<Vogelreiter-Zeremonie\n>coloroff>betrifft, drücke ich dir natürlich ganz\nfest die Daumen, <heroname>!")
          						  case 1:
/*<  1>*/ 							switch (scene_flags[39 /* 0x5 80 */]) {
          							  case 0:
/*<  2>*/ 								printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00000809>Im Gegensatz zu dir habe ich rein gar nichts\ndrauf. Was auch immer ich mache, ich versage\njedes Mal.\n\nJetzt muss ich schon wieder üben, Fässer und\nKrüge durch Drücken von (A) <color green<hochzuheben>coloroff>.\n\n\n<0x10009:0x00070e00>Na ja, immerhin bekomme ich ein paar\nRubine dafür...")
          							  case 1:
/*<  3>*/ 								printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000002>Guten Morgen, <heroname>!\n\n\n\nHeute ist der große Tag der\n<color red<Vogelreiter-Zeremonie>coloroff>!\n\n\n<0x10009:0x00010800>Ich wollte ja auch teilnehmen,<0x10006:0xfbcd> aber<0x10006:0x00cd> ich habe\ndie Qualifikation nicht geschafft. Deshalb\nbleibe ich hier und muss diese <0x10009:0x00070800><color red<Fässer>coloroff> in\nden Speisesaal schleppen.\n<0x10009:0x00010800>Dabei wollte ich dich doch so gerne\nfliegen sehen...\n\n\n<0x10009:0x00070a00>Tja, nichts zu machen!<pause 20> Streng dich an!\nIch drücke dir fest die Daumen!")
/*< 26>*/ 								scene_flags[0 'Skyloft'][39 /* 0x5 80 */] = true;
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_114_20() {
/*< 55>*/ 	start()
/*< 77>*/ 	switch (context_related2(0)) {
          	  case 0:
/*<107>*/ 		switch (scene_flags[31 /* 0x2 80 */]) {
          		  case 0:
          			flw_72:
/*< 72>*/ 			switch (story_flags[400 /* us: 805A9B10 0x01, jp: 805ACD90 0x01 */]) {
          			  case 0:
/*<117>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 84, 'param3': 12}
/*< 84>*/ 				switch (temp_flags[6 /* 0x1 40 */]) {
          				  case 0:
/*< 85>*/ 					printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x00000002>Willst du das Kürbisschießen erneut versuchen?\nEs kostet nur <color red<20 Rubine>coloroff>!\n[1-]Sehr gern![2-]Wie geht das?[3]Eher nicht.")
          					flw_74:
/*< 74>*/ 					switch (choice(3)) {
          					  case 0:
          						flw_67:
/*< 67>*/ 						switch (has_rupees(20)) {
          						  case 0:
/*< 68>*/ 							rupees += -20;
/*< 70>*/ 							printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00070a0a>Dann lege ich jetzt los. Streng dich an,\n<heroname>!")
/*< 71>*/ 							make_actor_do_something(0, 0)
          						  case 1:
          							flw_66:
/*< 66>*/ 							printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00010811>Du kannst nicht einmal 20 Rubine entbehren,\n<heroname>? Das Leben ist wohl\nziemlich hart zu dir...")
          						}
          					  case 1:
          						flw_63:
/*< 63>*/ 						printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00070200>Ich werde<color red< 90 Sekunden lang >coloroff>Kürbisse in die\nLuft werfen. Für jeden Treffer bekommst\ndu 10 Punkte.\n\n<0x10009:0x00000a00>Triffst du mehrere Kürbisse in Folge, erhöht\nsich deine Punktzahl noch mehr, also streng\ndich an!")
/*< 69>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 64, 'param3': 12}
/*< 64>*/ 						printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00070200>Ich muss allerdings 20 Rubine für jede Runde\nverlangen. Immerhin muss ja jemand die\nKürbisse bezahlen...\n\n<0x10009:0x00080a00>Was sagst du dazu? Willst du es mal versuchen?\nEs kostet nur <color red<20 Rubine>coloroff>!\n[1-]Ich bin dabei![2]Keine Lust.")
/*< 65>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_67
          						  case 1:
          							goto flw_66
          						}
          					  case 2:
/*< 75>*/ 						printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00070811>Oh... Na ja, du hast bestimmt etwas\nWichtigeres zu tun.\n\n\nImmerhin bist du damit beschäftigt,\nunsere Zelda zu finden. Entschuldige,\ndass ich <pause 10>gefragt habe.")
          					}
          				  case 1:
/*< 73>*/ 					printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00000002>Hallo, <heroname>! Wie geht's?\n\n\n\nHast du heute Lust auf eine Runde\nKürbisschießen? Nur <color red<20 Rubine>coloroff>!\n[1-]Sehr gern![2-]Wie geht das?[3]Nein, danke.")
          					goto flw_74
          				}
          			  case 1:
/*<102>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 31}
/*< 76>*/ 				story_flags[400 /* us: 805A9B10 0x01, jp: 805ACD90 0x01 */] = true;
/*< 56>*/ 				printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x00070202>Hallo, <heroname>!\n\n\n\nLangsam aber sicher bin ich an dem Punkt,\nan dem sich meine Muskeln nicht mehr\nweiter stählen lassen.\n\nIch würde mich gerne einer neuen\nSache widmen.\n\n\n<0x10009:0x00000207>Hm? <pause 30>Was ist das denn für ein schöner Bogen,\nden du da hast? Du kannst bestimmt sehr gut\ndamit umgehen...\n[1-]Natürlich![2-]Na ja, ähem...")
/*< 58>*/ 				switch (choice(2)) {
          				  case 0:
/*< 57>*/ 					printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00070aff>Du bist unglaublich, <heroname>!\n\n\n\n<0x10009:0x00010200>Ich könnte 3000 Liegestütze machen und wäre\nnicht einmal annähernd so stark wie du...")
          					flw_59:
/*< 59>*/ 					printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00070a00>Dann zeig mir doch mal, was du mit dem Bogen\nso alles draufhast!\n\n\nIch werfe gleich ein paar Kürbisse in die Luft.\n\n\n\n<0x10009:0x00000200>Zeig mir, ob du sie mit deinem Bogen\nabschießen kannst!\n\n\n<0x10009:0x00070a00>Du kannst deine Fertigkeiten mit dem Bogen\nüben, und ich meine Muskeln durchs\nKürbiswerfen stählen!\n\nSo haben wir beide etwas davon. Was sagst du?\n[1-]Ich bin dabei![2]Keine Lust.")
/*< 61>*/ 					switch (choice(2)) {
          					  case 0:
          						goto flw_63
          					  case 1:
/*< 62>*/ 						printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00070811>Oh... Na ja, du hast bestimmt etwas\nWichtigeres zu tun.\n\n\nImmerhin bist du damit beschäftigt,\nunsere Zelda zu finden. Entschuldige,\ndass ich <pause 10>gefragt habe.")
          					}
          				  case 1:
/*< 60>*/ 					printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00000a09>Sei doch nicht so schüchtern! Ich weiß,\nwas du kannst.")
          					goto flw_59
          				}
          			}
          		  case 1:
/*<108>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<109>*/ 				printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000501><0x30001:0x><heroname>!\nDie Insel der Göttin ist verschwunden!\nWas ist da bloß passiert?\n\n<pause 10>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.<pause 10>\n<0x10009:0x00000800>Oh, <0x10006:0xfbcd>du<0x10006:0x00cd> weißt das alles also schon...\n\n\n<0x10009:0x00000200>Wie? Du musstest das tun, um Zelda zu\nfinden? Na, das nenne ich ja mal eine\nunglaubliche Geschichte...\n\nIn Zukunft werde ich nicht mehr so\nschreckhaft sein. Bitte, finde unsere\nZelda, <heroname>!")
/*<110>*/ 				scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          			  case 1:
          				goto flw_72
          			}
          		}
          	  case 1:
/*< 83>*/ 		temp_flags[6 /* 0x1 40 */] = true;
/*< 90>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 78, 'param3': 44}
/*< 78>*/ 		switch (context_related4(0)) {
          		  case 0:
/*< 92>*/ 			{'type': 'type3', 'subType': 4, 'param1': 28, 'param2': 9472, 'next': 79, 'param3': 13}
/*< 79>*/ 			printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x00000012>Nur <numeric arg0 0> <0x30004:0x02cd>...\n\n\n\nOh... Heute hattest du wohl keinen sehr guten\nTag, <heroname>. Für diese Punktzahl\nkann ich dir leider keinen Preis geben...\n\n<0x10009:0x00070200>Versuche, die Flugbahn des Kürbisses mit\neinzuberechnen und bewege das Fadenkreuz\nein wenig vor den Kürbis. So triffst du\nbestimmt öfter!\nUnd vielleicht erreichst du so auch\n<color red<150 Punkte>coloroff>...\n\n\n<0x10009:0x00010a00>Aber das wusstest du bestimmt alles bereits,\nnicht wahr?")
          			flw_86:
/*< 86>*/ 			printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00070a00>Sag mir Bescheid, wenn du es erneut\nversuchen möchtest!")
          			flw_91:
/*< 91>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 103, 'param3': 45}
/*<103>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*< 93>*/ 			{'type': 'type3', 'subType': 4, 'param1': 29, 'param2': 9728, 'next': 80, 'param3': 13}
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x0000000b>Du hast <numeric arg0 0> <0x30004:0x02cd>! Das ist großartig,\n<heroname>!\n\n\nDu kannst das bestimmt noch besser, aber deine\nLeistung war schon ganz ordentlich!\n\n\nVersuche als Nächstes, eine Punktzahl von\n<color red<400 Punkten >coloroff>zu erreichen!\n\n\n<0x10009:0x00070a00>Als Preis für deine Leistung gebe ich dir\n50 hart verdiente Rubine!")
/*< 87>*/ 			rupees += 50;
          			goto flw_86
          		  case 2:
/*< 94>*/ 			{'type': 'type3', 'subType': 4, 'param1': 29, 'param2': 9728, 'next': 81, 'param3': 13}
/*< 81>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0000000b><numeric arg0 0> <0x30004:0x02cd>! Das ist ja unglaublich,\n<heroname>! Du bist wirklich\ntalentiert!\n\n<0x10009:0x00070a00>Hier, das ist dein Preis!")
/*<106>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 88, 'param3': 42}
/*< 88>*/ 			give_item(62 0x3E);
/*<115>*/ 			printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00070a00>Vielleicht schaffst du es, die absolute\nRekordmarke von <color red<600 Punkten>coloroff> zu\nknacken! Versuch es bald noch mal!")
          			goto flw_91
          		  case 3:
/*< 95>*/ 			{'type': 'type3', 'subType': 4, 'param1': 30, 'param2': 9984, 'next': 97, 'param3': 13}
/*< 97>*/ 			switch (story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */]) {
          			  case 0:
/*< 82>*/ 				printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x0000000b><numeric arg0 0> <0x30004:0x02cd>! Das ist ja unglaublich,\n<heroname>! Du bist ein wahrer\nMeisterschütze!\n\n<0x10009:0x00070a00>Ach, du bist die große Hoffnung der\ngesamten Ritterschule! Hier, das ist\ndein Preis!")
/*<105>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 89, 'param3': 42}
/*< 89>*/ 				give_item(64 0x40);
          				goto flw_91
          			  case 1:
/*< 96>*/ 				story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */] = true;
/*< 98>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x0000000b><numeric arg0 0> <0x30004:0x02cd>! Ich habe noch nie so einen\nguten Bogenschützen wie dich gesehen,\n<heroname>!\n\nDu bist die große Hoffnung unserer\nRitterschule!\n\n\n<0x10009:0x00070a00>Nimm dies hier als <color red<Zeichen unserer\nFreundschaft>coloroff>, <heroname>!")
/*<104>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 99, 'param3': 42}
/*< 99>*/ 				give_item(94 0x5E);
          				goto flw_86
          			}
          		}
          	}
          }

          void entrypoint_114_04() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000001><0x10008:0x01cd><0x30001:0x><heroname>!<0x1000D:0x1906>")
/*< 39>*/ 	set_camera(4, 0)
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 37, 'param3': 16}
/*< 37>*/ 	printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00010800><0x10008:0xffcd>Ähm,<pause 20> also...\n\n\n\n<0x10009:0x00070800>Ach, nichts.<pause 20> Vergiss einfach, dass ich etwas\ngesagt habe...")
          }

          void entrypoint_114_05() {
/*< 32>*/ 	start()
/*< 41>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*< 42>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00070a0b>Vielen Dank, <heroname>!\nDu warst eine große Hilfe.\n\n\n<0x10009:0x00000209>Ich gebe dir dafür die Hälfte meines\nTageslohns als Dank. Es ist nicht viel,\naber du kannst es sicher gebrauchen.")
/*< 43>*/ 		give_item(4 0x04);
/*<116>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 44, 'param3': 12}
/*< 44>*/ 		printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00000009>Ich bleibe hier in der Schule und halte\ndie Stellung.\n\n\nWas die <color red<Vogelreiter-Zeremonie\n>coloroff>betrifft, drücke ich dir natürlich ganz\nfest die Daumen, <heroname>!")
/*< 45>*/ 		scene_flags[0 'Skyloft'][23 /* 0x3 80 */] = true;
          	  case 1:
/*< 40>*/ 		switch (zone_temp_flags[11 /* 0x0 08 */]) {
          		  case 0:
/*< 46>*/ 			printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00000003>Ah, <heroname>!\nBist du etwa hier, um mir zu helfen?\n\n\nHach, du bist eben ein ganz Netter,\ndarum nehme ich dein Angebot liebend\ngerne an!\n\n<0x10009:0x00070203>Könntest du vielleicht eines dieser <color red<Fässer>coloroff>\nfür mich zu der alten Dame tragen, die im\nSpeisesaal arbeitet?\n\nHebe es mit (A) hoch und drücke noch mal (A),\num es wieder <color green<abzustellen>coloroff>.\n\n\n<0x10009:0x00010200>Wenn du etwas hochhältst, kannst du es\nübrigens werfen! Kleinere Dinge wie einen\nKrug kann man sogar <color green<rollen>coloroff>, aber dafür\nmuss man sie nach unten halten.\n<0x10009:0x0c070200>Das Fass bringst du aber bitte heil in den\nSpeisesaal, ja? Also immer schön vorsichtig!")
/*<114>*/ 			printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00010200>Solltest du vergessen haben, was ich dir eben\nerklärt habe, <color green<drücke <icon 19>>coloroff>.<0x10011:0x0bcd>\n\n\nSo wird dir angezeigt, welche Aktionen du im\nAugenblick ausführen kannst. Das ist wirklich\nsehr praktisch!")
          		  case 1:
/*< 33>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "")
/*< 34>*/ 			switch (choice(2)) {
          			  case 0:
/*< 35>*/ 				printf(/* textboxtype: 0, unk: 1, line: 7 */ "")
/*<  9>*/ 				printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00000003>Ah, <heroname>!\nBist du etwa hier, um mir zu helfen?\n\n\nHach, du bist eben ein ganz Netter,\ndarum nehme ich dein Angebot liebend\ngerne an!\n\n<0x10009:0x00070203>Könntest du vielleicht eines dieser <color red<Fässer>coloroff>\nfür mich zu der alten Dame tragen, die im\nSpeisesaal arbeitet?\n\nHebe es mit (A) hoch und drücke noch mal (A),\num es wieder <color green<abzustellen>coloroff>.\n\n\n<0x10009:0x00010200>Wenn du etwas hochhältst, kannst du es\nübrigens werfen! Kleinere Dinge wie einen\nKrug kann man sogar <color green<rollen>coloroff>, aber dafür\nmuss man sie nach unten halten.\n<0x10009:0x0c070200>Das Fass bringst du aber bitte heil in den\nSpeisesaal, ja? Also immer schön vorsichtig!")
/*<113>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00010200>Solltest du vergessen haben, was ich dir eben\nerklärt habe, <color green<drücke <icon 19>>coloroff>.<0x10011:0x0bcd>\n\n\nSo wird dir angezeigt, welche Aktionen du im\nAugenblick ausführen kannst. Das ist wirklich\nsehr praktisch!")
/*<  8>*/ 				zone_temp_flags[11 /* 0x0 08 */] = true;
          			  case 1:
/*< 36>*/ 				printf(/* textboxtype: 0, unk: 0, line: 8 */ "")
          			}
          		}
          	}
          }

          void entrypoint_114_01() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00070201><0x30001:0x><heroname>!")
/*< 23>*/ 	set_camera(1, 0)
/*< 18>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 100, 'next': 25, 'param3': 15}
/*< 25>*/ 	set_camera(3, 0)
/*< 17>*/ 	{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 0, 'next': 22, 'param3': 14}
/*< 22>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 20, 'param3': 16}
/*< 20>*/ 	printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00071800>Diese grüne Kleidung steht dir wirklich gut!\nDu siehst aus wie ein wahrhaftiger Ritter!")
/*<111>*/ 	set_camera(2, 0)
/*<112>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x000b0200>Ich habe vom Direktor erfahren, dass du\nlosziehst, um nach Zelda zu suchen.\n\n\n<0x10009:0x00001700>Du bist wirklich unglaublich! Ich würde so\netwas niemals schaffen...\n\n\n<0x1000A:0x000500cd>Hier, das habe ich für dich gemacht. Vielleicht\nnützt es dir auf deiner Reise!")
/*< 51>*/ 	{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 4096, 'next': 52, 'param3': 13}
/*< 52>*/ 	wait_frames(20)
/*< 50>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 16, 'param3': 42}
/*< 16>*/ 	give_item(112 0x70);
/*< 19>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "Das ist eine <color red<Abenteurertasche>coloroff>. Darin kannst du\nbis zu <color red<vier Items >coloroff>verstauen.\n\n\nWenn du möchtest, kannst du im Basar ein paar\nItems kaufen. Die kannst du dann in dieser\nTasche aufbewahren.\n\n<0x10009:0x00070a09>Ich bin sicher, ein <color yellow<Schild >coloroff>oder ein <color yellow<Herztrank\n>coloroff>werden dir auf deiner Reise besonders\nnützlich sein!")
/*< 24>*/ 	set_camera(2, 0)
/*< 21>*/ 	printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x30001:0x><heroname>! <0x10009:0x00010c00>Ich glaube ganz fest daran,\ndass du Zelda finden wirst!")
/*<100>*/ 	scene_flags[0 'Skyloft'][0 /* 0x1 01 */] = true;
/*<101>*/ 	scene_flags[0 'Skyloft'][21 /* 0x3 20 */] = true;
/*< 47>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_114_02() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "")
          }

