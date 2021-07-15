          void entrypoint_351_10() {
/*< 14>*/ 	start()
/*< 44>*/ 	switch (story_flags[473 /* us: 805A9B0E 0x20, jp: 805ACD8E 0x20 */]) {
          	  case 0:
/*< 45>*/ 		printf("\x0E\x01\x09\x04\x00\x04Hé, wat maak je me nou? We hadden toch een\ndeal dat je me naar een plek in de lucht zou\nbrengen?\n\nAls je zulke beloftes maakt, moet je je daaraan\nhouden, hoor je me?!")
          		flw_19:
/*< 19>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 20, 'param3': 35}
/*< 20>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 21, 'param3': 16}
/*< 21>*/ 		printf("De capaciteiten van dit individu komen perfect\novereen met het soort werknemer waar de\nmensen van De Oranje Poen naar op zoek zijn.\n\nZal ik de werkplaatsrobot voor u vragen om dit\nindividu mee te nemen?\n[1]Ja.[2-]Nee.")
/*< 22>*/ 		switch (choice(2)) {
          		  case 0:
/*< 24>*/ 			printf("Goed,\x0E\x01\x12\x04\x00\x05 meester. Ik zal contact opnemen met de\nrobot via een telepathische connectie.")
          		  case 1:
/*< 23>*/ 			printf("Begrepen, \x0E\x01\x12\x04\x00\x05meester. Als u van gedachten\nverandert, kunt u mij er hier nog eens over\naanspreken.")
          		}
          	  case 1:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\x09Hé, zo komen we elkaar nog eens tegen!\nNogmaals bedankt voor je hulp laatst.\n\n\nIk ben uiteraard nog steeds op zoek naar\nschatten, maar ik heb de laatste tijd totaal geen\ngeluk.\n\nHet is ook niet makkelijk om scherp te blijven\nin deze hitte.\n\n\n\x0E\x01\x09\x04\x00\x05Soms wou ik dat ik een baan had waarvoor ik\nmijn talenten kon gebruiken, maar dan op een\nplek waar het koeler is!\n[1]Ik weet wel iets![2]Succes daarmee...")
/*< 16>*/ 		switch (choice(2)) {
          		  case 0:
/*< 17>*/ 			printf("\x0E\x01\x09\x04\x00\x04Weet je een baan voor mij?\n\n\n\nErgens in de lucht?!\n...\n...\nIK BEN DOL OP DE LUCHT!\nWaar moet ik tekenen?<pause0A> Serieus, wat mij betreft\nhebben we een deal!<pause0A>")
          			goto flw_19
          		  case 1:
/*< 18>*/ 			printf("\x0E\x01\x09\x04\x00\x08Oké, dan...<pause0A> Nou, dan ploeter ik hier nog een\ntijdje voort.")
          		}
          	}
          }

          void entrypoint_351_11() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf("\x0E\x01\x12\x04\x00\x01Meester, mijn advies is om terug te keren naar\nde lucht om de Mogma op zijn plaats van\nbestemming te brengen.")
/*< 27>*/ 	story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*< 28>*/ 	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = true;
/*< 48>*/ 	story_flags[473 /* us: 805A9B0E 0x20, jp: 805ACD8E 0x20 */] = true;
/*< 42>*/ 	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = false;
/*< 41>*/ 	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = false;
/*< 40>*/ 	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
/*< 39>*/ 	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = false;
/*< 43>*/ 	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = false;
/*< 38>*/ 	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = false;
/*< 47>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
          }

          void entrypoint_351_12() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf("\x0E\x01\x12\x04\x00dDat hoeft u mij geen twee keer te zeggen, zrrbt!")
          }

          void entrypoint_351_01() {
          	start()
/*<  1>*/ 	printf("Ik heb de locatie gevonden van een substantie die\novereenkomsten vertoont met de kristallen bol\nvan de waarzegger.\n\nDit kan mogelijk als vervanging van de bol dienen.\nZal ik de werkplaatsrobot vragen om dit op te halen?\n[1]Ja.[2-]Nu even niet.")
/*<  2>*/ 	switch (choice(2)) {
          	  case 0:
/*<  4>*/ 		printf("Goed,\x0E\x01\x12\x04\x00\x05 meester. Ik zal contact opnemen met de\nrobot via een telepathische connectie.")
          	  case 1:
/*<  3>*/ 		printf("Begrepen, \x0E\x01\x12\x04\x00\x05meester. Als u van gedachten\nverandert, kunt u mij er hier nog eens over\naanspreken.")
          	}
          }

          void entrypoint_351_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf("\x0E\x01\x12\x04\x00dMeesteres Fi, vrrt! Hier ben ik dan, zrrpt!\n\n\n\nO, wilt u dat ik hiermee ga sjouwen, bzzt?")
          }

          void entrypoint_351_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	printf("\x0E\x01\x12\x04\x00dIk wacht op u in de lucht, dus ik zie u graag\ndaar, vrrt!")
          }

          void entrypoint_351_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("\x0E\x01\x12\x04\x00\x01Meester, mijn advies is om terug te keren naar\nde lucht om de kristallen bol zo spoedig mogelijk\naf te leveren.")
/*< 29>*/ 	story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*< 13>*/ 	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = true;
/*< 36>*/ 	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = false;
/*< 35>*/ 	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = false;
/*< 34>*/ 	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
/*< 33>*/ 	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = false;
/*< 32>*/ 	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = false;
/*< 37>*/ 	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = false;
/*< 46>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
          }

          void entrypoint_351_05() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf("\x0E\x01\x12\x04\x00dHé, meester Broekie, vrrt! Waarom geeft\nmeesteres Fi u altijd de makkelijke klusjes,\nzrrpt?")
          }

