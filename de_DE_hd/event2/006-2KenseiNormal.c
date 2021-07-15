          void entrypoint_006_209() {
/*< 32>*/ 	start()
/*< 33>*/ 	switch (story_flags[463 /* us: 805A9B0F 0x01, jp: 805ACD8F 0x01 */]) {
          	  case 0:
/*< 34>*/ 		printf("Neuesten Erkenntnissen zufolge wurde Zelda\nvon einer mysteriösen Person an einen anderen\nOrt gebracht.\n\nIch empfehle, an der <b<Quelle des Erdlandes >>die\nStatue der Göttin um Rat zu fragen, wie zuvor\nan der <b<Quelle des Himmelsblicks>>.<entrypoint_296>")
          	  case 1:
/*< 35>*/ 		printf("Die Wahrscheinlichkeit, dass Zelda wohlauf ist,\nsinkt mit jeder Sekunde. Beeile dich und finde sie,\nso schnell du kannst.<entrypoint_296>")
          	}
          }

          void entrypoint_006_243() {
/*< 61>*/ 	start()
/*< 62>*/ 	switch (story_flags[362 /* us: 805A9B03 0x01, jp: 805ACD83 0x01 */]) {
          	  case 0:
/*< 63>*/ 		printf("Um etwas für Narisha tun zu können, musst du von\n<b<Otus >>die Wolkenvogel-Technik <g<Tornadostoß >>erlernen.<entrypoint_296>")
          	  case 1:
/*< 64>*/ 		printf("Meister <b<Otus >>stellt Forschungen zu Narisha an.\nEs wäre ratsam, ihn um ein Gespräch zu bitten.<entrypoint_296>")
          	}
          }

          void entrypoint_006_226() {
/*< 65>*/ 	start()
/*< 66>*/ 	switch (story_flags[157 /* us: 805A9AE0 0x08, jp: 805ACD60 0x08 */]) {
          	  case 0:
/*< 67>*/ 		printf("Dank des <y<Greifhakens >>konntest du das <b<Ranelle-\nSandmeer >>erreichen.\n\n\nIch empfehle dir, dort nach weiteren Hinweisen\nzu suchen.<entrypoint_296>")
          	  case 1:
/*< 68>*/ 		printf("Nutze den <y<Greifhaken>>, den du bei der <r<Prüfung >>in der\n<b<Wüste Ranelle >>erhalten hast.\n\n\nDie Wahrscheinlichkeit, dass dir damit in <b<Ranelle >>neue\nWege eröffnet werden, liegt bei 96 %.<entrypoint_296>")
          	}
          }

          void entrypoint_006_244() {
/*< 55>*/ 	start()
/*< 56>*/ 	switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          	  case 0:
/*< 57>*/ 		printf("Narisha ist in seinem augenblicklichen Zustand sehr\nangriffslustig, und ein Gespräch mit ihm scheint\nunmöglich.\n\nIch schlage vor, die seltsamen Wesen, die Narisha\nbefallen haben, mit dem <g<Tornadostoß >>auszuschalten.<entrypoint_296>")
          	  case 1:
/*< 60>*/ 		switch (story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */]) {
          		  case 0:
/*< 58>*/ 			printf("Die Wahrscheinlichkeit, dass <b<Narisha >>auftauchen wird,\nwenn du ihm seine Leibspeise <y<Kürbissuppe >>darbringst,\nliegt bei 90 %.\n\nIch schlage vor, die Kürbissuppe zu einer kleinen Insel\ninnerhalb der <b<Sturmwolke >>zu bringen, über der ein\n<r<Regenbogen >>erstrahlt.<entrypoint_296>")
          		  case 1:
/*< 59>*/ 			printf("Die Wahrscheinlichkeit, dass dir jemand in der\nKürbisbar mehr über Narishas Aufenthaltsort\nsagen kann, liegt bei 85 %.<entrypoint_296>")
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
/*< 80>*/ 		printf("Ich empfehle, mit der Seekarte zum Kapitän\nzurückzukehren.<entrypoint_296>")
          	  case 1:
/*< 79>*/ 		printf("Um das Schiff zurückzuerobern, musst du die antike\nSeekarte aus dem <b<Haus des Kapitäns >>holen.<entrypoint_296>")
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
/*<  6>*/ 				printf("Du hast bereits zwei Stimmen des <r<Heldenlieds >>erlernt.\nBesuche nun den Drachen, der über <b<Ranelle >>herrscht.\n[1]Und danach?[2-]Klar!")
          				flw_16:
/*< 16>*/ 				switch (choice(2)) {
          				  case 0:
/*< 17>*/ 					printf("Bringe die erlernten drei Stimmen des Heldenlieds\nzum großen Himmelsgeist <b<Narisha>>.\n\n\nEr wird dir den Weg weisen, der dich zum\n<y+<Triforce >>führt.\n\n\nDein Schicksal ist erfüllt, wenn du mit der Macht\ndes <y+<Triforce>> den <b<Todbringer >>für alle Zeiten\nvernichtest,\x0E\x01\x12\x04\x00\x02 Gebieter.<entrypoint_296>")
          				  case 1:
          				}
          			}
          		  case 1:
/*<  7>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*<  8>*/ 				printf("Du hast bereits zwei Stimmen des <r<Heldenlieds >>erlernt.\nBesuche nun den Drachen, der über <b<Eldin >>herrscht.\n[1]Und danach?[2-]Bin schon\nauf dem Weg!")
          				goto flw_16
          			  case 1:
/*<  9>*/ 				printf("Du hast bereits eine Stimme des <r<Heldenlieds >>erlernt.\nBesuche nun die Drachen, die über die Länder <b<Eldin\n>>und <b<Ranelle >>herrschen.\n[1]Und danach?[2-]Ja!")
          				goto flw_16
          			}
          		}
          	  case 1:
/*< 10>*/ 		switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          		  case 0:
/*< 11>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 15>*/ 				printf("Du hast bereits zwei Stimmen des <r<Heldenlieds >>erlernt.\nBesuche nun den Drachen, der über das <b<Land von\nPhirone >>herrscht.\n[1]Und danach?[2-]Verstanden!")
          				goto flw_16
          			  case 1:
/*< 12>*/ 				printf("Du hast bereits eine Stimme des <r<Heldenlieds >>erlernt.\nBesuche nun die Drachen, die über die Länder <b<Phirone\n>>und <b<Ranelle >>herrschen.\n[1]Und danach?[2-]Verstanden!")
          				goto flw_16
          			}
          		  case 1:
/*< 13>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 14>*/ 				printf("Du hast bereits eine Stimme des <r<Heldenlieds >>erlernt.\nBesuche nun die Drachen, die über die Länder <b<Eldin\n>>und <b<Phirone >>herrschen.\n[1]Und danach?[2-]Verstanden!")
          				goto flw_16
          			  case 1:
          			}
          		}
          	}
          }

          void entrypoint_006_249() {
/*< 18>*/ 	start()
/*< 19>*/ 	printf("Bringe die drei Stimmen zum großen Himmelsgeist\n<b<Narisha >>und lasse das Heldenlied von ihm\nvervollständigen.\n[1]Und danach?[2-]Verstanden!")
/*< 20>*/ 	switch (choice(2)) {
          	  case 0:
/*< 21>*/ 		printf("Ich stelle fest, dass mit dem Heldenlied der Weg\nzum <y+<Triforce >>geöffnet werden kann, da es nun\nvollständig ist.\n\nDein Schicksal ist erfüllt, wenn du mit der Macht\ndes <y+<Triforce>> den <b<Todbringer >>für alle Zeiten\nvernichtest, \x0E\x01\x12\x04\x00\x02Gebieter.")
          	  case 1:
          	}
          }

          void entrypoint_006_217() {
/*< 36>*/ 	start()
/*< 84>*/ 	switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          	  case 0:
/*< 85>*/ 		printf("Nachdem du die Windräder auf den Turm des Lichts\nausgerichtet hast, ist ein bis dahin versteckter Teil des\nTurms erschienen.<entrypoint_296>")
          	  case 1:
/*< 82>*/ 		switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          		  case 0:
/*< 37>*/ 			printf("Mit einer Wahrscheinlichkeit von 80 % handelt es sich\nbei einem der <r<beiden großen Flügel>> um das Windrad,\ndas <b<Gelan>> repariert hat.<entrypoint_296>")
          		  case 1:
/*< 81>*/ 			switch (story_flags[1108 /* us: 805A9B54 0x04, jp: 805ACDD4 0x04 */]) {
          			  case 0:
/*< 83>*/ 				printf("Mit einer Wahrscheinlichkeit von 85 % ist das\nkürzlich gefundene Objekt ein <r<Windrad-Propeller>>.\nDie Verbindung zu den zwei Flügeln ist unklar.\n\nIch empfehle, ihn zusammen mit dem Roboter in\nden Wolkenhort zu transportieren.<entrypoint_296>")
          			  case 1:
/*< 39>*/ 				switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          				  case 0:
/*< 40>*/ 					printf("Es ist unklar, ob dies mit den zwei großen Flügeln\nzusammenhängt, doch es steht fest, dass ein <r<Windrad-\nPropeller >>ins Erdland gestürzt ist.\n\nVerwende die <g<Aurasuche>>, um den Propeller zu finden\nund rufe den Roboter aus der Werkstatt, um ihn zum\nWolkenhort zu bringen.<entrypoint_296>")
          				  case 1:
/*< 41>*/ 					switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          					  case 0:
/*< 42>*/ 						printf("Es ist unklar, ob dies mit den zwei großen Flügeln\nzusammenhängt, doch es steht fest, dass ein <r<Windrad-\nPropeller >>ins Erdland gestürzt ist.\n\nIch halte es für sinnvoll, nach einer Möglichkeit\nzu suchen, den Propeller zu bergen.<entrypoint_296>")
          					  case 1:
/*< 38>*/ 						printf("Die Bedeutung dieser Worte ist mir unklar, doch ich\nempfehle dir, im Wolkenhort nach etwas zu suchen,\ndas großen Flügeln ähnelt.<entrypoint_296>")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_006_200() {
          	start()
/*<  1>*/ 	printf("Ich empfehle, an der <r<Lichtsäule >>im Wolkenmeer\n<g<abzuspringen>>, um die ins Erdland hinabgestürzte\nZelda zu suchen.\n\nDie Lichtsäule befindet sich südlich des <b<Wolkenhorts>>.<entrypoint_296>")
          }

          void entrypoint_006_201() {
/*< 22>*/ 	start()
/*< 23>*/ 	switch (story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */]) {
          	  case 0:
/*< 24>*/ 		printf("Ich empfehle, den Worten der Hüterin im <b<Tempel\ndes Siegels >>Folge zu leisten und dich zum <b<Wald von\nPhirone>> zu begeben.<entrypoint_296>")
          	  case 1:
/*< 25>*/ 		printf("Ich bestätige den Fund von Spuren einer Zivilisation.\nIch empfehle, die unmittelbare Umgebung gründlich\nzu untersuchen.<entrypoint_296>")
          	}
          }

          void entrypoint_006_236() {
/*< 47>*/ 	start()
/*< 48>*/ 	switch (story_flags[187 /* us: 805A9AE9 0x04, jp: 805ACD69 0x04 */]) {
          	  case 0:
/*< 49>*/ 		printf("Untersuche das Innere des Gebäudes am Vulkangipfel.<entrypoint_296>")
          	  case 1:
/*< 50>*/ 		printf("Du benötigst den <r<Wasserbehälter >>des Wasserdrachen,\num das Feuer löschen zu können, das den Weg zum\nGipfel blockiert.<entrypoint_296>")
          	}
          }

          void entrypoint_006_202() {
/*< 26>*/ 	start()
/*< 27>*/ 	switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          	  case 0:
/*< 71>*/ 		switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          		  case 0:
/*< 72>*/ 			printf("Ich empfehle, auf <b<Roiboss'>> Rücken zu klettern,\num dort ein Item zu finden, das traditionell von\nKyu zu Kyu weitergegeben wird.")
          		  case 1:
/*< 28>*/ 			printf("Meiner Analyse der Worte des Kyu-Häuptlings\n<b<Roiboss >>zufolge hilft er uns, wenn wir alle seine\nversteckten Stammesbrüder finden.<entrypoint_296>")
          		}
          	  case 1:
/*< 31>*/ 		switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          		  case 0:
/*< 29>*/ 			printf("Meiner Analyse der Worte des Kyu <b<Macha >>zufolge\nwird uns das Finden des Kyu-Häuptlings zu 80 % bei\nunserer Suche nach Zelda helfen.<entrypoint_296>")
          		  case 1:
/*< 30>*/ 			printf("Im Erdland erregt Zeldas Erscheinung mit sehr hoher\nWahrscheinlichkeit großes Aufsehen.\n\n\nEs muss Augenzeugen geben, die Zelda gesehen haben.\nIch schlage vor, nach solchen zu suchen.<entrypoint_296>")
          		}
          	}
          }

          void entrypoint_006_222() {
/*< 43>*/ 	start()
/*< 44>*/ 	switch (story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */]) {
          	  case 0:
/*< 45>*/ 		printf("Der Wasserdrache hat den Pfad zu <r<Farores Flamme>>,\neine der drei heiligen Flammen, geöffnet.\n\n\nDa ich eine dämonische Präsenz spüre, empfehle\nich dir, sehr gut vorbereitet auf die Suche danach\nzu gehen.<entrypoint_296>")
          	  case 1:
/*< 46>*/ 		printf("Du musst dem Wasserdrachen das <y<heilige Wasser\n>>bringen, um die heilige Flamme in <b<Phirone >>suchen\nzu können.\n\nIch habe das heilige Wasser als Ziel für die <g<Aurasuche\n>>hinzugefügt.<entrypoint_296>")
          	}
          }

          void entrypoint_006_240() {
/*< 51>*/ 	start()
/*< 52>*/ 	switch (story_flags[344 /* us: 805A9AFE 0x40, jp: 805ACD7E 0x40 */]) {
          	  case 0:
/*< 53>*/ 		printf("Bitte betritt das <r<Zeitportal>>, mein \x0E\x01\x12\x04\x00\x01Gebieter.\nDie Wahrscheinlichkeit, dass <b<Zelda >>auf der\nanderen Seite wartet, liegt bei 99 %.<entrypoint_296>")
          	  case 1:
/*< 54>*/ 		printf("Du kannst nun das <r<Zeitportal >>durch die Macht\ndeines Schwertes öffnen. Eile zum Portal und\nöffne es.<entrypoint_296>")
          	}
          }

          void entrypoint_006_208() {
/*< 73>*/ 	start()
/*< 74>*/ 	switch (story_flags[120 /* us: 805A9AEA 0x20, jp: 805ACD6A 0x20 */]) {
          	  case 0:
/*< 76>*/ 		printf("Du hast die fünf Fragmente des Schlüssels\nzusammengesetzt und bist nun auf dem Weg,\num den Tempel am Vulkan zu öffnen.<entrypoint_296>")
          	  case 1:
/*< 75>*/ 		printf("Du bist gerade auf der Suche nach den fünf\nFragmenten des <r<Schlüssels zum Tempel>>.\nNutze die <g<Aurasuche>>, um sie zu finden.<entrypoint_296>")
          	}
          }

