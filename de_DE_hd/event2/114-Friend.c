          void entrypoint_114_03() {
          	start()
/*< 48>*/ 	switch (story_flags[202 /* us: 805A9AEF 0x10, jp: 805ACD6F 0x10 */]) {
          	  case 0:
/*< 49>*/ 		printf("\x0E\x01\x09\x04\x07\x02Oh, Link! Hast du schon einen\nHinweis darauf, wo sich Zelda befindet?\n\n\nIch glaube ganz fest daran, dass du sie\nfinden kannst!")
          	  case 1:
/*< 12>*/ 		switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
          		  case 0:
/*< 13>*/ 			printf("\x0E\x01\x09\x04\x00\x09Du schaffst das, Link!")
          		  case 1:
/*< 53>*/ 			switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          			  case 0:
/*< 54>*/ 				printf("\x0E\x01\x09\x04\x07\x811Wie konnte Zelda nur von ihrem\nWolkenvogel fallen?!?\n\n\nSie war doch solch eine gute Reiterin!\n\n\n\n\x0E\x01\x09\x04\x00\xE00Tja... Ein Tollpatsch wie ich kann da\nnur hoffen, dass ihr nichts passiert ist.")
          			  case 1:
/*<  7>*/ 				switch (scene_flags[40 /* 0x4 01 */]) {
          				  case 0:
/*<  6>*/ 					printf("\x0E\x01\x09\x04\x00\x811Das klingt nach einem Problem.<pause19> Ich hoffe, dein\nWolkenvogel taucht bald wieder auf\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í")
          				  case 1:
/*<  4>*/ 					switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          					  case 0:
/*<  5>*/ 						printf("\x0E\x01\x09\x04\x01\x708Wieso bist du denn so aufgebracht,\nLink?\n\n\n\x0E\x01\x09\x04\x07\xC00Was sagst du? Du weißt nicht, wo dein\nWolkenvogel ist?<pause19> Was hat das denn zu\nbedeuten?\n\nEr kam nicht, obwohl du ihn gerufen\nhast? Hm\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\n\n\n\x0E\x01\x09\x04\x01\x800Ähem\x0E\x01\x06\x02\xFBCD... \x0E\x01\x06\x02ÍKönnte es...<pause19> \x0E\x01\x08\x02\xFFCDVielleicht... Hmmm...\n\n\n\n\x0E\x01\x09\x04\x08\x807Wie? <pause19>Ach, es ist nichts!<pause19>\nIch<pause14> habe nur laut gedacht...")
/*< 29>*/ 						scene_flags[0 'Skyloft'][40 /* 0x4 01 */] = true;
          					  case 1:
/*< 10>*/ 						switch (scene_flags[23 /* 0x3 80 */]) {
          						  case 0:
/*< 11>*/ 							printf("\x0E\x01\x09\x04\x00\x09Ich bleibe hier in der Schule und halte\ndie Stellung.\n\n\nWas die <r<Vogelreiter-Zeremonie\n>>betrifft, drücke ich dir natürlich ganz\nfest die Daumen, Link!")
          						  case 1:
/*<  1>*/ 							switch (scene_flags[39 /* 0x5 80 */]) {
          							  case 0:
/*<  2>*/ 								printf("\x0E\x01\x09\x04\x00\x809Im Gegensatz zu dir habe ich rein gar nichts\ndrauf. Was auch immer ich mache, ich versage\njedes Mal.\n\nJetzt muss ich schon wieder üben, Fässer und\nKrüge durch Drücken von (A) <g<hochzuheben>>.\n\n\n\x0E\x01\x09\x04\x07\xE00Na ja, immerhin bekomme ich ein paar\nRubine dafür...")
          							  case 1:
/*<  3>*/ 								printf("\x0E\x01\x09\x04\x00\x02Guten Morgen, Link!\n\n\n\nHeute ist der große Tag der\n<r<Vogelreiter-Zeremonie>>!\n\n\n\x0E\x01\x09\x04\x01\x800Ich wollte ja auch teilnehmen,\x0E\x01\x06\x02\xFBCD aber\x0E\x01\x06\x02Í ich habe\ndie Qualifikation nicht geschafft. Deshalb\nbleibe ich hier und muss diese \x0E\x01\x09\x04\x07\x800<r<Fässer>> in\nden Speisesaal schleppen.\n\x0E\x01\x09\x04\x01\x800Dabei wollte ich dich doch so gerne\nfliegen sehen...\n\n\n\x0E\x01\x09\x04\x07\xA00Tja, nichts zu machen!<pause14> Streng dich an!\nIch drücke dir fest die Daumen!")
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
/*< 85>*/ 					printf("\x0E\x01\x09\x04\x00\x02Willst du das Kürbisschießen erneut versuchen?\nEs kostet nur <r<20 Rubine>>!\n[1]Sehr gern![2]Wie geht das?[3-]Eher nicht.")
          					flw_74:
/*< 74>*/ 					switch (choice(3)) {
          					  case 0:
          						flw_67:
/*< 67>*/ 						switch (has_rupees(20)) {
          						  case 0:
/*< 68>*/ 							rupees += -20;
/*< 70>*/ 							printf("\x0E\x01\x09\x04\x07\xA0ADann lege ich jetzt los. Streng dich an,\nLink!")
/*< 71>*/ 							make_actor_do_something(0, 0)
          						  case 1:
          							flw_66:
/*< 66>*/ 							printf("\x0E\x01\x09\x04\x01\x811Du kannst nicht einmal 20 Rubine entbehren,\nLink? Das Leben ist wohl\nziemlich hart zu dir...")
          						}
          					  case 1:
          						flw_63:
/*< 63>*/ 						printf("\x0E\x01\x09\x04\x07\x200Ich werde<r< 90 Sekunden lang >>Kürbisse in die\nLuft werfen. Für jeden Treffer bekommst\ndu 10 Punkte.\n\n\x0E\x01\x09\x04\x00\xA00Triffst du mehrere Kürbisse in Folge, erhöht\nsich deine Punktzahl noch mehr, also streng\ndich an!")
/*< 69>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 64, 'param3': 12}
/*< 64>*/ 						printf("\x0E\x01\x09\x04\x07\x200Ich muss allerdings 20 Rubine für jede Runde\nverlangen. Immerhin muss ja jemand die\nKürbisse bezahlen...\n\n\x0E\x01\x09\x04\x08\xA00Was sagst du dazu? Willst du es mal versuchen?\nEs kostet nur <r<20 Rubine>>!\n[1]Ich bin dabei![2-]Keine Lust.")
/*< 65>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_67
          						  case 1:
          							goto flw_66
          						}
          					  case 2:
/*< 75>*/ 						printf("\x0E\x01\x09\x04\x07\x811Oh... Na ja, du hast bestimmt etwas\nWichtigeres zu tun.\n\n\nImmerhin bist du damit beschäftigt,\nunsere Zelda zu finden. Entschuldige,\ndass ich <pause0A>gefragt habe.")
          					}
          				  case 1:
/*< 73>*/ 					printf("\x0E\x01\x09\x04\x00\x02Hallo, Link! Wie geht's?\n\n\n\nHast du heute Lust auf eine Runde\nKürbisschießen? Nur <r<20 Rubine>>!\n[1]Sehr gern![2]Wie geht das?[3-]Nein, danke.")
          					goto flw_74
          				}
          			  case 1:
/*<102>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 31}
/*< 76>*/ 				story_flags[400 /* us: 805A9B10 0x01, jp: 805ACD90 0x01 */] = true;
/*< 56>*/ 				printf("\x0E\x01\x09\x04\x07\x202Hallo, Link!\n\n\n\nLangsam aber sicher bin ich an dem Punkt,\nan dem sich meine Muskeln nicht mehr\nweiter stählen lassen.\n\nIch würde mich gerne einer neuen\nSache widmen.\n\n\n\x0E\x01\x09\x04\x00\x207Hm? <pause1E>Was ist das denn für ein schöner Bogen,\nden du da hast? Du kannst bestimmt sehr gut\ndamit umgehen...\n[1]Natürlich![2]Na ja, ähem...")
/*< 58>*/ 				switch (choice(2)) {
          				  case 0:
/*< 57>*/ 					printf("\x0E\x01\x09\x04\x07\xAFFDu bist unglaublich, Link!\n\n\n\n\x0E\x01\x09\x04\x01\x200Ich könnte 3000 Liegestütze machen und wäre\nnicht einmal annähernd so stark wie du...")
          					flw_59:
/*< 59>*/ 					printf("\x0E\x01\x09\x04\x07\xA00Dann zeig mir doch mal, was du mit dem Bogen\nso alles draufhast!\n\n\nIch werfe gleich ein paar Kürbisse in die Luft.\n\n\n\n\x0E\x01\x09\x04\x00\x200Zeig mir, ob du sie mit deinem Bogen\nabschießen kannst!\n\n\n\x0E\x01\x09\x04\x07\xA00Du kannst deine Fertigkeiten mit dem Bogen\nüben, und ich meine Muskeln durchs\nKürbiswerfen stählen!\n\nSo haben wir beide etwas davon. Was sagst du?\n[1]Ich bin dabei![2-]Keine Lust.")
/*< 61>*/ 					switch (choice(2)) {
          					  case 0:
          						goto flw_63
          					  case 1:
/*< 62>*/ 						printf("\x0E\x01\x09\x04\x07\x811Oh... Na ja, du hast bestimmt etwas\nWichtigeres zu tun.\n\n\nImmerhin bist du damit beschäftigt,\nunsere Zelda zu finden. Entschuldige,\ndass ich <pause0A>gefragt habe.")
          					}
          				  case 1:
/*< 60>*/ 					printf("\x0E\x01\x09\x04\x00\xA09Sei doch nicht so schüchtern! Ich weiß,\nwas du kannst.")
          					goto flw_59
          				}
          			}
          		  case 1:
/*<108>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<109>*/ 				printf("\x0E\x01\x09\x04\x00\x501\x0E\x03\x01\x00Link!\nDie Insel der Göttin ist verschwunden!\nWas ist da bloß passiert?\n\n<pause0A>.<pause0A>.<pause0A>.<pause0A>.<pause0A>.<pause0A>.<pause0A>\n\x0E\x01\x09\x04\x00\x800Oh, \x0E\x01\x06\x02\xFBCDdu\x0E\x01\x06\x02Í weißt das alles also schon...\n\n\n\x0E\x01\x09\x04\x00\x200Wie? Du musstest das tun, um Zelda zu\nfinden? Na, das nenne ich ja mal eine\nunglaubliche Geschichte...\n\nIn Zukunft werde ich nicht mehr so\nschreckhaft sein. Bitte, finde unsere\nZelda, Link!")
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
/*< 79>*/ 			printf("\x0E\x01\x09\x04\x00\x12Nur <numeric arg0> \x0E\x03\x04\x02\x2CD...\n\n\n\nOh... Heute hattest du wohl keinen sehr guten\nTag, Link. Für diese Punktzahl\nkann ich dir leider keinen Preis geben...\n\n\x0E\x01\x09\x04\x07\x200Versuche, die Flugbahn des Kürbisses mit\neinzuberechnen und bewege das Fadenkreuz\nein wenig vor den Kürbis. So triffst du\nbestimmt öfter!\nUnd vielleicht erreichst du so auch\n<r<150 Punkte>>...\n\n\n\x0E\x01\x09\x04\x01\xA00Aber das wusstest du bestimmt alles bereits,\nnicht wahr?")
          			flw_86:
/*< 86>*/ 			printf("\x0E\x01\x09\x04\x07\xA00Sag mir Bescheid, wenn du es erneut\nversuchen möchtest!")
          			flw_91:
/*< 91>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 103, 'param3': 45}
/*<103>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*< 93>*/ 			{'type': 'type3', 'subType': 4, 'param1': 29, 'param2': 9728, 'next': 80, 'param3': 13}
/*< 80>*/ 			printf("\x0E\x01\x09\x04\x00\x0BDu hast <numeric arg0> \x0E\x03\x04\x02\x2CD! Das ist großartig,\nLink!\n\n\nDu kannst das bestimmt noch besser, aber deine\nLeistung war schon ganz ordentlich!\n\n\nVersuche als Nächstes, eine Punktzahl von\n<r<400 Punkten >>zu erreichen!\n\n\n\x0E\x01\x09\x04\x07\xA00Als Preis für deine Leistung gebe ich dir\n50 hart verdiente Rubine!")
/*< 87>*/ 			rupees += 50;
          			goto flw_86
          		  case 2:
/*< 94>*/ 			{'type': 'type3', 'subType': 4, 'param1': 29, 'param2': 9728, 'next': 81, 'param3': 13}
/*< 81>*/ 			printf("\x0E\x01\x09\x04\x00\x0B<numeric arg0> \x0E\x03\x04\x02\x2CD! Das ist ja unglaublich,\nLink! Du bist wirklich\ntalentiert!\n\n\x0E\x01\x09\x04\x07\xA00Hier, das ist dein Preis!")
/*<106>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 88, 'param3': 42}
/*< 88>*/ 			give_item(62 0x3E);
/*<115>*/ 			printf("\x0E\x01\x09\x04\x07\xA00Vielleicht schaffst du es, die absolute\nRekordmarke von <r<600 Punkten>> zu\nknacken! Versuch es bald noch mal!")
          			goto flw_91
          		  case 3:
/*< 95>*/ 			{'type': 'type3', 'subType': 4, 'param1': 30, 'param2': 9984, 'next': 97, 'param3': 13}
/*< 97>*/ 			switch (story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */]) {
          			  case 0:
/*< 82>*/ 				printf("\x0E\x01\x09\x04\x00\x0B<numeric arg0> \x0E\x03\x04\x02\x2CD! Das ist ja unglaublich,\nLink! Du bist ein wahrer\nMeisterschütze!\n\n\x0E\x01\x09\x04\x07\xA00Ach, du bist die große Hoffnung der\ngesamten Ritterschule! Hier, das ist\ndein Preis!")
/*<105>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 89, 'param3': 42}
/*< 89>*/ 				give_item(64 0x40);
          				goto flw_91
          			  case 1:
/*< 96>*/ 				story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */] = true;
/*< 98>*/ 				printf("\x0E\x01\x09\x04\x00\x0B<numeric arg0> \x0E\x03\x04\x02\x2CD! Ich habe noch nie so einen\nguten Bogenschützen wie dich gesehen,\nLink!\n\nDu bist die große Hoffnung unserer\nRitterschule!\n\n\n\x0E\x01\x09\x04\x07\xA00Nimm dies hier als <r<Zeichen unserer\nFreundschaft>>, Link!")
/*<104>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 99, 'param3': 42}
/*< 99>*/ 				give_item(94 0x5E);
          				goto flw_86
          			}
          		}
          	}
          }

          void entrypoint_114_04() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf("\x0E\x01\x09\x04\x00\x01\x0E\x01\x08\x02\x1CD\x0E\x03\x01\x00Link!\x0E\x01\x0D\x02\x1906")
/*< 39>*/ 	set_camera(4, 0)
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 37, 'param3': 16}
/*< 37>*/ 	printf("\x0E\x01\x09\x04\x01\x800\x0E\x01\x08\x02\xFFCDÄhm,<pause14> also...\n\n\n\n\x0E\x01\x09\x04\x07\x800Ach, nichts.<pause14> Vergiss einfach, dass ich etwas\ngesagt habe...")
          }

          void entrypoint_114_05() {
/*< 32>*/ 	start()
/*< 41>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*< 42>*/ 		printf("\x0E\x01\x09\x04\x07\xA0BVielen Dank, Link!\nDu warst eine große Hilfe.\n\n\n\x0E\x01\x09\x04\x00\x209Ich gebe dir dafür die Hälfte meines\nTageslohns als Dank. Es ist nicht viel,\naber du kannst es sicher gebrauchen.")
/*< 43>*/ 		give_item(4 0x04);
/*<116>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 44, 'param3': 12}
/*< 44>*/ 		printf("\x0E\x01\x09\x04\x00\x09Ich bleibe hier in der Schule und halte\ndie Stellung.\n\n\nWas die <r<Vogelreiter-Zeremonie\n>>betrifft, drücke ich dir natürlich ganz\nfest die Daumen, Link!")
/*< 45>*/ 		scene_flags[0 'Skyloft'][23 /* 0x3 80 */] = true;
          	  case 1:
/*< 40>*/ 		switch (zone_temp_flags[11 /* 0x0 08 */]) {
          		  case 0:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x00\x03Ah, Link!\nBist du etwa hier, um mir zu helfen?\n\n\nHach, du bist eben ein ganz Netter,\ndarum nehme ich dein Angebot liebend\ngerne an!\n\n\x0E\x01\x09\x04\x07\x203Könntest du vielleicht eines dieser <r<Fässer>>\nfür mich zu der alten Dame tragen, die im\nSpeisesaal arbeitet?\n\nHebe es mit (A) hoch und drücke noch mal (A),\num es wieder <g<abzustellen>>.\n\n\n\x0E\x01\x09\x04\x01\x200Wenn du etwas hochhältst, kannst du es\nübrigens werfen! Kleinere Dinge wie einen\nKrug kann man sogar <g<rollen>>, aber dafür\nmuss man sie nach unten halten.\n\x0E\x01\x09\x04\xC07\x200Das Fass bringst du aber bitte heil in den\nSpeisesaal, ja? Also immer schön vorsichtig!")
/*<114>*/ 			printf("\x0E\x01\x09\x04\x01\x200Solltest du vergessen haben, was ich dir eben\nerklärt habe, <g<drücke \x0E\x02\x04\x02\x13CD>>.\x0E\x01\x11\x02\xBCD\n\n\nSo wird dir angezeigt, welche Aktionen du im\nAugenblick ausführen kannst. Das ist wirklich\nsehr praktisch!")
          		  case 1:
/*< 33>*/ 			printf("")
/*< 34>*/ 			switch (choice(2)) {
          			  case 0:
/*< 35>*/ 				printf("")
/*<  9>*/ 				printf("\x0E\x01\x09\x04\x00\x03Ah, Link!\nBist du etwa hier, um mir zu helfen?\n\n\nHach, du bist eben ein ganz Netter,\ndarum nehme ich dein Angebot liebend\ngerne an!\n\n\x0E\x01\x09\x04\x07\x203Könntest du vielleicht eines dieser <r<Fässer>>\nfür mich zu der alten Dame tragen, die im\nSpeisesaal arbeitet?\n\nHebe es mit (A) hoch und drücke noch mal (A),\num es wieder <g<abzustellen>>.\n\n\n\x0E\x01\x09\x04\x01\x200Wenn du etwas hochhältst, kannst du es\nübrigens werfen! Kleinere Dinge wie einen\nKrug kann man sogar <g<rollen>>, aber dafür\nmuss man sie nach unten halten.\n\x0E\x01\x09\x04\xC07\x200Das Fass bringst du aber bitte heil in den\nSpeisesaal, ja? Also immer schön vorsichtig!")
/*<113>*/ 				printf("\x0E\x01\x09\x04\x01\x200Solltest du vergessen haben, was ich dir eben\nerklärt habe, <g<drücke \x0E\x02\x04\x02\x13CD>>.\x0E\x01\x11\x02\xBCD\n\n\nSo wird dir angezeigt, welche Aktionen du im\nAugenblick ausführen kannst. Das ist wirklich\nsehr praktisch!")
/*<  8>*/ 				zone_temp_flags[11 /* 0x0 08 */] = true;
          			  case 1:
/*< 36>*/ 				printf("")
          			}
          		}
          	}
          }

          void entrypoint_114_01() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf("\x0E\x01\x09\x04\x07\x201\x0E\x03\x01\x00Link!")
/*< 23>*/ 	set_camera(1, 0)
/*< 18>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 100, 'next': 25, 'param3': 15}
/*< 25>*/ 	set_camera(3, 0)
/*< 17>*/ 	{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 0, 'next': 22, 'param3': 14}
/*< 22>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 20, 'param3': 16}
/*< 20>*/ 	printf("\x0E\x01\x09\x04\x07\x1800Diese grüne Kleidung steht dir wirklich gut!\nDu siehst aus wie ein wahrhaftiger Ritter!")
/*<111>*/ 	set_camera(2, 0)
/*<112>*/ 	printf("\x0E\x01\x09\x04\x0B\x200Ich habe vom Direktor erfahren, dass du\nlosziehst, um nach Zelda zu suchen.\n\n\n\x0E\x01\x09\x04\x00\x1700Du bist wirklich unglaublich! Ich würde so\netwas niemals schaffen...\n\n\n\x0E\x01\n\x04\x05ÍHier, das habe ich für dich gemacht. Vielleicht\nnützt es dir auf deiner Reise!")
/*< 51>*/ 	{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 4096, 'next': 52, 'param3': 13}
/*< 52>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 50, 'param3': 6}
/*< 50>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 16, 'param3': 42}
/*< 16>*/ 	give_item(112 0x70);
/*< 19>*/ 	printf("Das ist eine <r<Abenteurertasche>>. Darin kannst du\nbis zu <r<vier Items >>verstauen.\n\n\nWenn du möchtest, kannst du im Basar ein paar\nItems kaufen. Die kannst du dann in dieser\nTasche aufbewahren.\n\n\x0E\x01\x09\x04\x07\xA09Ich bin sicher, ein <y<Schild >>oder ein <y<Herztrank\n>>werden dir auf deiner Reise besonders\nnützlich sein!")
/*< 24>*/ 	set_camera(2, 0)
/*< 21>*/ 	printf("\x0E\x03\x01\x00Link! \x0E\x01\x09\x04\x01\xC00Ich glaube ganz fest daran,\ndass du Zelda finden wirst!")
/*<100>*/ 	scene_flags[0 'Skyloft'][0 /* 0x1 01 */] = true;
/*<101>*/ 	scene_flags[0 'Skyloft'][21 /* 0x3 20 */] = true;
/*< 47>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_114_02() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf("")
          }

