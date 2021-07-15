          void entrypoint_006_209() {
/*< 32>*/ 	start()
/*< 33>*/ 	switch (story_flags[463 /* us: 805A9B0F 0x01, jp: 805ACD8F 0x01 */]) {
          	  case 0:
/*< 34>*/ 		printf("Helaas is ze nu met een onbekend individu\nnaar een andere locatie vertrokken.\n\n\nNet als bij de <b<Bron der Bezinning >>raad\nik u aan informatie te zoeken bij het\ngodinnenbeeld van de <b<Bron der Aarde>>.<entrypoint_296>")
          	  case 1:
/*< 35>*/ 		printf("De kans dat Zelda veilig en wel is, lijkt\nsteeds geringer. U dient haar zo spoedig\nmogelijk te vinden.<entrypoint_296>")
          	}
          }

          void entrypoint_006_243() {
/*< 61>*/ 	start()
/*< 62>*/ 	switch (story_flags[362 /* us: 805A9B03 0x01, jp: 805ACD83 0x01 */]) {
          	  case 0:
/*< 63>*/ 		printf("Om Levias te kunnen helpen dient u eerst\nvan <b<meester Cornuylius>> de <g<luchtboor>>-\ntechniek te leren.<entrypoint_296>")
          	  case 1:
/*< 64>*/ 		printf("<b<Meester Cornuylius>> weet veel over Levias.\nMijn advies is om hem om informatie te\nvragen over de wolkenhoeder.<entrypoint_296>")
          	}
          }

          void entrypoint_006_226() {
/*< 65>*/ 	start()
/*< 66>*/ 	switch (story_flags[157 /* us: 805A9AE0 0x08, jp: 805ACD60 0x08 */]) {
          	  case 0:
/*< 67>*/ 		printf("Met de <y<grijpklauwen>> heeft u de <b<Lanayru-\nzandzee>> bereikt. Mijn advies is om hier\nverder te zoeken naar de locatie van de\nheilige vlam.<entrypoint_296>")
          	  case 1:
/*< 68>*/ 		printf("De <y<grijpklauwen>> die u na de <r<beproeving>>\nheeft gekregen, zullen u met een\nzekerheid van 96% naar nieuwe gebieden\nin <b<Lanayru>> leiden.<entrypoint_296>")
          	}
          }

          void entrypoint_006_244() {
/*< 55>*/ 	start()
/*< 56>*/ 	switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          	  case 0:
/*< 57>*/ 		printf("Levias gedraagt zich echter zeer\nagressief. Het is onmogelijk om met hem\nte redeneren terwijl hij in deze toestand\nis.\nMijn advies is om de luchtbooraanval te\ngebruiken om de onbekende objecten van\nzijn lichaam te verwijderen.<entrypoint_296>")
          	  case 1:
/*< 60>*/ 		switch (story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */]) {
          		  case 0:
/*< 58>*/ 			printf("Ik acht het voor 90% zeker dat <b<Levias\n>>verschijnt wanneer u hem wat van de\n<y<pompoensoep>> brengt waar hij verzot op is.\n\nMijn advies is daarom om de pompoen-\nsoep mee te nemen naar het kleine\n<r<regenboogeiland >>dat zich in de\n<b<donderwolk >>bevindt.<entrypoint_296>")
          		  case 1:
/*< 59>*/ 			printf("Het is voor 80% zeker dat de eigenaar\nvan De Oranje Poen u kan helpen om\nLevias te vinden.<entrypoint_296>")
          		}
          	}
          }

          void entrypoint_006_296() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf("Huidige speeltijd: <r<\x0E\x02\x03\x06\x00\x00\x2CD\xFF1A<numeric arg1(2)>>>\nTotale speeltijd: <r<<numeric arg2(2)>\xFF1A\x0E\x02\x03\x06\x00\x03\x2CD>>\nDit is het einde van mijn analyse.")
          }

          void entrypoint_006_227() {
/*< 77>*/ 	start()
/*< 78>*/ 	switch (story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */]) {
          	  case 0:
/*< 80>*/ 		printf("Mijn advies is om de zeekaart aan de\nrobotkapitein te laten zien.<entrypoint_296>")
          	  case 1:
/*< 79>*/ 		printf("U dient eerst een zeekaart op te halen\nin <b<Huize Kapbot>> voordat u verder kunt\nzoeken naar het schip.<entrypoint_296>")
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
/*<  6>*/ 				printf("U heeft nu twee delen van het <r<Heldenlied\n>>geleerd. De laatste draak vindt u in\n<b<Lanayru>>.\n[1]En daarna?[2-]Begrepen.")
          				flw_16:
/*< 16>*/ 				switch (choice(2)) {
          				  case 0:
/*< 17>*/ 					printf("Als u de drie delen van het Heldenlied\nvan de drie draken heeft geleerd, dient u\nterug te keren naar <b<Levias>> om het\nHeldenlied te voltooien.\nDe informatie die u verzameld heeft, zal\nu naar de <y+<Triforce>> leiden als deze correct\nis.\n\nEn als het u lukt de <y+<Triforce>> te\nbemachtigen, dan dient u die te gebruiken\nom <b<Fatalot>> te vernietigen.\n\nDat is niet alleen uw uiteindelijke doel,\nhet is uw lot om dat te doen, \x0E\x01\x12\x04\x00\x02meester.<entrypoint_296>")
          				  case 1:
          				}
          			}
          		  case 1:
/*<  7>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*<  8>*/ 				printf("U heeft nu twee delen van het <r<Heldenlied\n>>geleerd. De laatste draak vindt u in <b<Eldin>>.\n[1]En daarna?[2-]Begrepen.")
          				goto flw_16
          			  case 1:
/*<  9>*/ 				printf("U heeft nu één deel van het <r<Heldenlied\n>>geleerd. De andere draken vindt u in\n<b<Eldin>> en <b<Lanayru>>.\n[1]En daarna?[2-]Begrepen.")
          				goto flw_16
          			}
          		}
          	  case 1:
/*< 10>*/ 		switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          		  case 0:
/*< 11>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 15>*/ 				printf("U heeft nu twee delen van het <r<Heldenlied\n>>geleerd. De laatste draak vindt u in\n<b<Faron>>.\n[1]En daarna?[2-]Begrepen.")
          				goto flw_16
          			  case 1:
/*< 12>*/ 				printf("U heeft nu één deel van het <r<Heldenlied\n>>geleerd. De andere draken vindt u in\n<b<Faron>> en <b<Lanayru>>.\n[1]En daarna?[2-]Begrepen.")
          				goto flw_16
          			}
          		  case 1:
/*< 13>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 14>*/ 				printf("U heeft nu één deel van het <r<Heldenlied\n>>geleerd. De andere draken vindt u in\n<b<Faron>> en <b<Eldin>>.\n[1]En daarna?[2-]Begrepen.")
          				goto flw_16
          			  case 1:
          			}
          		}
          	}
          }

          void entrypoint_006_249() {
/*< 18>*/ 	start()
/*< 19>*/ 	printf("Mijn advies is om terug te keren naar\n<b<Levias>>, de wolkenhoeder, om het laatste\ndeel te horen en het Heldenlied te\nvoltooien.\n[1]En daarna?[2-]Begrepen.")
/*< 20>*/ 	switch (choice(2)) {
          	  case 0:
/*< 21>*/ 		printf("Mijn aanname is dat het Heldenlied de\nweg zal openen naar de <y+<Triforce>>.\n\n\nAls het u lukt de <y+<Triforce>> te bemachtigen,\ndan dient u die te gebruiken om <b<Fatalot>>\x0E\x01\x12\x04\x00\x02 te\nvernietigen.\n\nDat is niet alleen uw uiteindelijke doel,\nhet is uw lot om dat te doen, \x0E\x01\x12\x04\x00\x02meester.")
          	  case 1:
          	}
          }

          void entrypoint_006_217() {
/*< 36>*/ 	start()
/*< 84>*/ 	switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          	  case 0:
/*< 85>*/ 		printf("De windmolens hebben een geheim\nmechanisme boven op de lichttoren\ngeactiveerd. Mijn advies is om dat\nmechanisme nader te bestuderen.<entrypoint_296>")
          	  case 1:
/*< 82>*/ 		switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          		  case 0:
/*< 37>*/ 			printf("Ik acht het 80% zeker dat de molen die\n<b<Leeuwik>> heeft gerepareerd, een van de\n<r<twee draaiende zeilen>> is die we zoeken.<entrypoint_296>")
          		  case 1:
/*< 81>*/ 			switch (story_flags[1108 /* us: 805A9B54 0x04, jp: 805ACDD4 0x04 */]) {
          			  case 0:
/*< 83>*/ 				printf("Hoewel het verband met de twee zeilen\nonzeker blijft, is er een kans van 85% dat\ndit de <r<propeller>> is van een windmolen op\nSkyloft.\nMijn advies is dus om de werkplaatsrobot\nin te schakelen en terug te leiden naar\nSkyloft terwijl hij deze propeller draagt.<entrypoint_296>")
          			  case 1:
/*< 39>*/ 				switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          				  case 0:
/*< 40>*/ 					printf("Het is niet 100% zeker dat met de draaiende\nzeilen de windmolens bedoeld worden, maar\neen <r<propeller>> ontbreekt, waardoor we dat\nniet met zekerheid kunnen bevestigen.\nMiddels <g<detectie>> kunt u de locatie van de\npropeller vaststellen.\n\n\nZodra we de locatie van de propeller\nvastgesteld hebben, kunnen we de\nwerkplaatsrobot vragen om hem naar\nSkyloft te brengen.<entrypoint_296>")
          				  case 1:
/*< 41>*/ 					switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          					  case 0:
/*< 42>*/ 						printf("Het is niet 100% zeker dat met draaiende\nzeilen de windmolens bedoeld worden, maar\neen <r<propeller>> ontbreekt, waardoor we dat niet\nmet zekerheid kunnen bevestigen.\nOmdat de propeller mogelijk door de\nwolken naar beneden is gevallen, raad ik\naan om op het oppervlak te zoeken.<entrypoint_296>")
          					  case 1:
/*< 38>*/ 						printf("Hoewel de betekenis van de passage\nonduidelijk is, raad ik u aan op Skyloft te\nzoeken naar twee dingen die op draaiende\nzeilen lijken.<entrypoint_296>")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_006_200() {
          	start()
/*<  1>*/ 	printf("Om <b<Zelda>> te vinden raad ik u aan naar\nbeneden te <g<springen>> op de plaats waar\nhet <r<licht door een opening>> in de wolken-\nbarrière schijnt.\nDit licht bevindt zich ten zuiden van\n<b<Skyloft>>.<entrypoint_296>")
          }

          void entrypoint_006_201() {
/*< 22>*/ 	start()
/*< 23>*/ 	switch (story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */]) {
          	  case 0:
/*< 24>*/ 		printf("Het lijkt mij verstandig het advies van de\noude wijze van de <b<Verzegelde Tempel>> te\nvolgen en het <b<Faron-woud>> te bezoeken.<entrypoint_296>")
          	  case 1:
/*< 25>*/ 		printf("Ik heb overblijfselen van een beschaving\nwaargenomen. Mijn advies is om het\ngebied te doorzoeken waar u bent geland.<entrypoint_296>")
          	}
          }

          void entrypoint_006_236() {
/*< 47>*/ 	start()
/*< 48>*/ 	switch (story_flags[187 /* us: 805A9AE9 0x04, jp: 805ACD69 0x04 */]) {
          	  case 0:
/*< 49>*/ 		printf("Er bevindt zich een groot bouwwerk op de\ntop van de vulkaan. Mijn advies is om het\nte doorzoeken.<entrypoint_296>")
          	  case 1:
/*< 50>*/ 		printf("Om voorbij de vlammen op de top te\nkomen, dient u het grote <r<bad>> van de\nwaterdraak te lenen.<entrypoint_296>")
          	}
          }

          void entrypoint_006_202() {
/*< 26>*/ 	start()
/*< 27>*/ 	switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          	  case 0:
/*< 71>*/ 		switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          		  case 0:
/*< 72>*/ 			printf("Mijn advies is om op <b<Tuhé>>'s rug te\nklimmen en de schat van de Kikwi's\nte pakken.")
          		  case 1:
/*< 28>*/ 			printf("Als u alle Kikwi's weet te vinden, kan het\nKikwi-stamhoofd u wellicht van nuttige\ninformatie voorzien.<entrypoint_296>")
          		}
          	  case 1:
/*< 31>*/ 		switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          		  case 0:
/*< 29>*/ 			printf("De informatie van de Kikwi <b<Machi >>wijst\nmet 80% zekerheid uit dat het stamhoofd\nvan de Kikwi's ons richting Zelda kan\nleiden.<entrypoint_296>")
          		  case 1:
/*< 30>*/ 			printf("Zelda's aanwezigheid is waarschijnlijk\nopvallend hier. Wellicht weten de lokale\nbewoners waar ze naartoe is gegaan.<entrypoint_296>")
          		}
          	}
          }

          void entrypoint_006_222() {
/*< 43>*/ 	start()
/*< 44>*/ 	switch (story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */]) {
          	  case 0:
/*< 45>*/ 		printf("De waterdraak heeft de ingang geopend\nvan het complex waarin <r<Farores vlam>> zich\nbevindt.\n\nEr zullen waarschijnlijk veel monsters\naanwezig zijn, dus mijn advies is om u\ngoed uit te rusten voor de strijd.<entrypoint_296>")
          	  case 1:
/*< 46>*/ 		printf("Om van de waterdraak meer te weten te\nkomen over de locatie van de heilige vlam\nin <b<Faron>>, dient u eerst <y<heilig water>> voor\nhaar te zoeken.\nIk heb de aura van het heilige water\nopgeslagen, zodat u het via <g<detectie>> kunt\ntraceren.<entrypoint_296>")
          	}
          }

          void entrypoint_006_240() {
/*< 51>*/ 	start()
/*< 52>*/ 	switch (story_flags[344 /* us: 805A9AFE 0x40, jp: 805ACD7E 0x40 */]) {
          	  case 0:
/*< 53>*/ 		printf("\x0E\x01\x12\x04\x00\x01Meester, u bent door de <r<Poort des Tijds\n>>gereisd.\n\n\nIk acht het voor 99% zeker dat <b<Zelda>> hier\nergens op u wacht.<entrypoint_296>")
          	  case 1:
/*< 54>*/ 		printf("Het moment is gekomen waarop u de\n<r<Poort des Tijds>> kunt openen met de\nkracht van uw zwaard. Mijn advies is\nom dat spoedig te doen.<entrypoint_296>")
          	}
          }

          void entrypoint_006_208() {
/*< 73>*/ 	start()
/*< 74>*/ 	switch (story_flags[120 /* us: 805A9AEA 0x20, jp: 805ACD6A 0x20 */]) {
          	  case 0:
/*< 76>*/ 		printf("U heeft de sleutel van de tempel op de\nEldin-vulkaan gerepareerd. U kunt nu\nnaar de deur gaan om hem te openen.<entrypoint_296>")
          	  case 1:
/*< 75>*/ 		printf("U dient momenteel de <r<sleutel van de\ntempeldeur te vinden>>. Deze sleutel is\nopgedeeld in vijf stukken, die u middels\n<g<detectie>> kunt opsporen.<entrypoint_296>")
          	}
          }

