          void entrypoint_006_209() {
/*< 32>*/ 	start()
/*< 33>*/ 	switch (story_flags[463 /* us: 805A9B0F 0x01, jp: 805ACD8F 0x01 */]) {
          	  case 0:
/*< 34>*/ 		printf("Neuesten Erkenntnissen zufolge\nwurde Zelda von einer mysteriösen\nPerson an einen anderen Ort gebracht.\n\nIch empfehle, an der <b<Quelle des\nErdlandes >>die Statue der Göttin\num Rat zu fragen, wie zuvor an\nder <b<Quelle des Himmelsblicks>>.<entrypoint_296>")
          	  case 1:
/*< 35>*/ 		printf("Die Wahrscheinlichkeit, dass Zelda\nwohlauf ist, sinkt mit jeder Sekunde.\nBeeile dich und finde sie so schnell\ndu kannst.<entrypoint_296>")
          	}
          }

          void entrypoint_006_243() {
/*< 61>*/ 	start()
/*< 62>*/ 	switch (story_flags[362 /* us: 805A9B03 0x01, jp: 805ACD83 0x01 */]) {
          	  case 0:
/*< 63>*/ 		printf("Um etwas für Narisha tun zu können,\nmusst du von <b<Otus >>die Wolkenvogel-\nTechnik <g<Tornadostoß >>erlernen.<entrypoint_296>")
          	  case 1:
/*< 64>*/ 		printf("Meister <b<Otus >>stellt Forschungen zu\nNarisha an. Es wäre ratsam, ihn um\nein Gespräch zu bitten.<entrypoint_296>")
          	}
          }

          void entrypoint_006_226() {
/*< 65>*/ 	start()
/*< 66>*/ 	switch (story_flags[157 /* us: 805A9AE0 0x08, jp: 805ACD60 0x08 */]) {
          	  case 0:
/*< 67>*/ 		printf("Dank des <y<Greifhakens >>konntest du das\n<b<Ranelle-Sandmeer >>erreichen.\n\n\nIch empfehle dir, dort nach weiteren\nHinweisen zu suchen.<entrypoint_296>")
          	  case 1:
/*< 68>*/ 		printf("Nutze den <y<Greifhaken>>, den du bei der\n<r<Prüfung >>in der <b<Wüste Ranelle >>erhalten\nhast.\n\nDie Wahrscheinlichkeit, dass dir damit\nin <b<Ranelle >>neue Wege eröffnet werden,\nliegt bei 96 %.<entrypoint_296>")
          	}
          }

          void entrypoint_006_244() {
/*< 55>*/ 	start()
/*< 56>*/ 	switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          	  case 0:
/*< 57>*/ 		printf("Narisha ist in seinem augenblicklichen\nZustand sehr angriffslustig, und ein\nGespräch mit ihm scheint unmöglich.\n\nIch schlage vor, die seltsamen Wesen,\ndie Narisha befallen haben, mit dem\n<g<Tornadostoß >>auszuschalten.<entrypoint_296>")
          	  case 1:
/*< 60>*/ 		switch (story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */]) {
          		  case 0:
/*< 58>*/ 			printf("Die Wahrscheinlichkeit, dass <b<Narisha>>\nauftauchen wird, wenn du ihm seine\nLeibspeise <y<Kürbissuppe >>darbringst,\nliegt bei 90 %.\nIch schlage vor, die Kürbissuppe zu\neiner kleinen Insel innerhalb der\n<b<Sturmwolke >>zu bringen, über der ein\n<r<Regenbogen >>erstrahlt.<entrypoint_296>")
          		  case 1:
/*< 59>*/ 			printf("Die Wahrscheinlichkeit, dass dir\njemand in der Kürbisbar mehr über\nNarishas Aufenthaltsort sagen kann,\nliegt bei 85 %.<entrypoint_296>")
          		}
          	}
          }

          void entrypoint_006_296() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf("Momentane Spielzeit: <r<\x0E\x02\x03\x06\x00\x00\x2CD>>:<r<<numeric arg1(2)>>>\nGesamtspielzeit: <r<<numeric arg2(2)>>>:<r<\x0E\x02\x03\x06\x00\x03\x2CD>>")
          }

          void entrypoint_006_227() {
/*< 77>*/ 	start()
/*< 78>*/ 	switch (story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */]) {
          	  case 0:
/*< 80>*/ 		printf("Ich empfehle, mit der Seekarte zum\nKapitän zurückzukehren.<entrypoint_296>")
          	  case 1:
/*< 79>*/ 		printf("Um das Schiff zurückzuerobern, musst\ndu die antike Seekarte aus dem <b<Haus\ndes Kapitäns >>holen.<entrypoint_296>")
          	}
          }

          void entrypoint_006_248() {
/*<  2>*/ 	start()
/*<  3>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<  4>*/ 		switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          		  case 0:
/*<  5>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
          			  case 1:
/*<  6>*/ 				printf("Du hast bereits zwei Stimmen des\n<r<Heldenlieds >>erlernt. Besuche nun den\nDrachen, der über <b<Ranelle >>herrscht.\n[1]Und danach?[2-]Klar!")
          				flw_16:
/*< 16>*/ 				switch (choice(2)) {
          				  case 0:
/*< 17>*/ 					printf("Bringe die erlernten drei Stimmen des\nHeldenlieds zum großen Himmelsgeist\n<b<Narisha>>.\n\nEr wird dir den Weg weisen, der dich\nzum <y+<Triforce >>führt.\n\n\nDein Schicksal ist erfüllt, wenn du mit\nder Macht des <y+<Triforce>> den <b<Todbringer\n>>für alle Zeiten vernichtest,\x0E\x01\x12\x04\x00\x02 Gebieter.<entrypoint_296>")
          				  case 1:
          				}
          			}
          		  case 1:
/*<  7>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*<  8>*/ 				printf("Du hast bereits zwei Stimmen des\n<r<Heldenlieds >>erlernt. Besuche nun den\nDrachen, der über <b<Eldin >>herrscht.\n[1]Und danach?[2-]Bin schon\nauf dem Weg!")
          				goto flw_16
          			  case 1:
/*<  9>*/ 				printf("Du hast bereits eine Stimme des\n<r<Heldenlieds >>erlernt. Besuche nun\ndie Drachen, die über die Länder\n<b<Eldin >>und <b<Ranelle >>herrschen.\n[1]Und danach?[2-]Ja!")
          				goto flw_16
          			}
          		}
          	  case 1:
/*< 10>*/ 		switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          		  case 0:
/*< 11>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 15>*/ 				printf("Du hast bereits zwei Stimmen des\n<r<Heldenlieds >>erlernt. Besuche nun den\nDrachen, der über das <b<Land von\nPhirone >>herrscht.\n[1]Und danach?[2-]Verstanden!")
          				goto flw_16
          			  case 1:
/*< 12>*/ 				printf("Du hast bereits eine Stimme des\n<r<Heldenlieds >>erlernt. Besuche nun\ndie Drachen, die über die Länder\n<b<Phirone >>und <b<Ranelle >>herrschen.\n[1]Und danach?[2-]Verstanden!")
          				goto flw_16
          			}
          		  case 1:
/*< 13>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 14>*/ 				printf("Du hast bereits eine Stimme des\n<r<Heldenlieds >>erlernt. Besuche nun\ndie Drachen, die über die Länder\n<b<Eldin >>und <b<Phirone >>herrschen.\n[1]Und danach?[2-]Verstanden!")
          				goto flw_16
          			  case 1:
          			}
          		}
          	}
          }

          void entrypoint_006_249() {
/*< 18>*/ 	start()
/*< 19>*/ 	printf("Bringe die drei Stimmen zum großen\nHimmelsgeist <b<Narisha >>und lasse das\nHeldenlied von ihm vervollständigen.\n[1]Und danach?[2-]Verstanden!")
/*< 20>*/ 	switch (choice(2)) {
          	  case 0:
/*< 21>*/ 		printf("Ich stelle fest, dass mit dem Heldenlied\nder Weg zum <y+<Triforce >>geöffnet werden\nkann, da es nun vollständig ist.\n\nDein Schicksal ist erfüllt, wenn du mit\nder Macht des <y+<Triforce>> den <b<Todbringer\n>>für alle Zeiten vernichtest, \x0E\x01\x12\x04\x00\x02Gebieter.")
          	  case 1:
          	}
          }

          void entrypoint_006_217() {
/*< 36>*/ 	start()
/*< 84>*/ 	switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          	  case 0:
/*< 85>*/ 		printf("Nachdem du die Windräder auf den\nTurm des Lichts ausgerichtet hast, ist\nein bis dahin versteckter Teil des\nTurms erschienen.<entrypoint_296>")
          	  case 1:
/*< 82>*/ 		switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          		  case 0:
/*< 37>*/ 			printf("Mit einer Wahrscheinlichkeit von 80 %\nhandelt es sich bei einem der <r<beiden\ngroßen Flügel>> um das Windrad, das\n<b<Gelan>> repariert hat.<entrypoint_296>")
          		  case 1:
/*< 81>*/ 			switch (story_flags[1108 /* us: 805A9B54 0x04, jp: 805ACDD4 0x04 */]) {
          			  case 0:
/*< 83>*/ 				printf("Mit einer Wahrscheinlichkeit von 85 %\nist das kürzlich gefundene Objekt ein\n<r<Windrad-Propeller>>. Die Verbindung zu\nden zwei Flügeln ist unklar.\nIch empfehle, ihn zusammen mit dem\nRoboter in den Wolkenhort zu\ntransportieren.<entrypoint_296>")
          			  case 1:
/*< 39>*/ 				switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          				  case 0:
/*< 40>*/ 					printf("Es ist unklar, ob dies mit den zwei\ngroßen Flügeln zusammenhängt,\ndoch es steht fest, dass ein <r<Windrad-\nPropeller >>ins Erdland gestürzt ist.\nVerwende die <g<Aurasuche>>, um den\nPropeller zu finden und rufe den\nRoboter aus der Werkstatt, um\nihn zum Wolkenhort zu bringen.<entrypoint_296>")
          				  case 1:
/*< 41>*/ 					switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          					  case 0:
/*< 42>*/ 						printf("Es ist unklar, ob dies mit den zwei\ngroßen Flügeln zusammenhängt,\ndoch es steht fest, dass ein <r<Windrad-\nPropeller >>ins Erdland gestürzt ist.\nIch halte es für sinnvoll, nach einer\nMöglichkeit zu suchen, den Propeller\nzu bergen.<entrypoint_296>")
          					  case 1:
/*< 38>*/ 						printf("Die Bedeutung dieser Worte ist mir\nunklar, doch ich empfehle dir, im\nWolkenhort nach etwas zu suchen,\ndas großen Flügeln ähnelt.<entrypoint_296>")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_006_200() {
          	start()
/*<  1>*/ 	printf("Ich empfehle, an der <r<Lichtsäule >>im\nWolkenmeer <g<abzuspringen>>, um die ins\nErdland hinabgestürzte Zelda zu\nsuchen.\nDie Lichtsäule befindet sich südlich\ndes <b<Wolkenhorts>>.<entrypoint_296>")
          }

          void entrypoint_006_201() {
/*< 22>*/ 	start()
/*< 23>*/ 	switch (story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */]) {
          	  case 0:
/*< 24>*/ 		printf("Ich empfehle, den Worten der Hüterin\nim <b<Tempel des Siegels >>Folge zu leisten\nund dich zum <b<Wald von Phirone>> zu\nbegeben.<entrypoint_296>")
          	  case 1:
/*< 25>*/ 		printf("Ich bestätige den Fund von Spuren\neiner Zivilisation. Ich empfehle, die\nunmittelbare Umgebung gründlich\nzu untersuchen.<entrypoint_296>")
          	}
          }

          void entrypoint_006_236() {
/*< 47>*/ 	start()
/*< 48>*/ 	switch (story_flags[187 /* us: 805A9AE9 0x04, jp: 805ACD69 0x04 */]) {
          	  case 0:
/*< 49>*/ 		printf("Untersuche das Innere des Gebäudes\nam Vulkangipfel.<entrypoint_296>")
          	  case 1:
/*< 50>*/ 		printf("Du benötigst den <r<Wasserbehälter >>des\nWasserdrachen, um das Feuer löschen\nzu können, das den Weg zum Gipfel\nblockiert.<entrypoint_296>")
          	}
          }

          void entrypoint_006_202() {
/*< 26>*/ 	start()
/*< 27>*/ 	switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          	  case 0:
/*< 71>*/ 		switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          		  case 0:
/*< 72>*/ 			printf("Ich empfehle, auf <b<Roiboss'>> Rücken zu\nklettern, um dort ein Item zu finden,\ndas traditionell von Kyu zu Kyu\nweitergegeben wird.")
          		  case 1:
/*< 28>*/ 			printf("Meiner Analyse der Worte des\nKyu-Häuptlings <b<Roiboss >>zufolge\nhilft er uns, wenn wir alle seine\nversteckten Stammesbrüder finden.<entrypoint_296>")
          		}
          	  case 1:
/*< 31>*/ 		switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          		  case 0:
/*< 29>*/ 			printf("Meiner Analyse der Worte des Kyu\n<b<Macha >>zufolge wird uns das Finden\ndes Kyu-Häuptlings zu 80 % bei\nunserer Suche nach Zelda helfen.<entrypoint_296>")
          		  case 1:
/*< 30>*/ 			printf("Im Erdland erregt Zeldas Erscheinung\nmit sehr hoher Wahrscheinlichkeit\ngroßes Aufsehen.\n\nEs muss Augenzeugen geben, die Zelda\ngesehen haben. Ich schlage vor, nach\nsolchen zu suchen.<entrypoint_296>")
          		}
          	}
          }

          void entrypoint_006_222() {
/*< 43>*/ 	start()
/*< 44>*/ 	switch (story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */]) {
          	  case 0:
/*< 45>*/ 		printf("Der Wasserdrache hat den Pfad zu\n<r<Farores Flamme>>, eine der drei heiligen\nFlammen, geöffnet.\n\nDa ich eine dämonische Präsenz spüre,\nempfehle ich dir, sehr gut vorbereitet\nauf die Suche danach zu gehen.<entrypoint_296>")
          	  case 1:
/*< 46>*/ 		printf("Du musst dem Wasserdrachen das\n<y<heilige Wasser >>bringen, um die heilige\nFlamme in <b<Phirone >>suchen zu können.\n\nIch habe das heilige Wasser als Ziel für\ndie <g<Aurasuche >>hinzugefügt.<entrypoint_296>")
          	}
          }

          void entrypoint_006_240() {
/*< 51>*/ 	start()
/*< 52>*/ 	switch (story_flags[344 /* us: 805A9AFE 0x40, jp: 805ACD7E 0x40 */]) {
          	  case 0:
/*< 53>*/ 		printf("Bitte betritt das <r<Zeitportal>>, mein\n\x0E\x01\x12\x04\x00\x01Gebieter. Die Wahrscheinlichkeit,\ndass <b<Zelda >>auf der anderen Seite\nwartet, liegt bei 99 %.<entrypoint_296>")
          	  case 1:
/*< 54>*/ 		printf("Du kannst nun das <r<Zeitportal >>durch\ndie neue Macht deines Schwertes\nöffnen. Eile zum Portal und öffne es.<entrypoint_296>")
          	}
          }

          void entrypoint_006_208() {
/*< 73>*/ 	start()
/*< 74>*/ 	switch (story_flags[120 /* us: 805A9AEA 0x20, jp: 805ACD6A 0x20 */]) {
          	  case 0:
/*< 76>*/ 		printf("Du hast die fünf Fragmente des\nSchlüssels zusammengesetzt und bist\nnun auf dem Weg, um den Tempel am\nVulkan zu öffnen.<entrypoint_296>")
          	  case 1:
/*< 75>*/ 		printf("Du bist gerade auf der Suche nach den\nfünf Fragmenten des <r<Schlüssels zum\nTempel>>. Nutze die <g<Aurasuche>>, um sie\nzu finden.<entrypoint_296>")
          	}
          }

