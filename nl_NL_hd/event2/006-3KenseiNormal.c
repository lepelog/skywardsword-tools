          void entrypoint_006_300() {
          	start()
/*<  7>*/ 	switch (story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */]) {
          	  case 0:
/*<  8>*/ 		printf("Ik kan u niet van advies voorzien, omdat\nu aan een bliksemduel deelneemt van de\ndonderdraak Lanayru.")
          	  case 1:
/*<  1>*/ 		printf("U bevindt zich in de <b<Verzegelde Vallei>>.\nIk neem de aura's van een aantal zwakke\nmonsters waar.")
/*<  5>*/ 		printf("\x0E\x01\x12\x04\x00\x01Meester, de inhoud van uw buidel\nin beschouwing genomen, heeft u\neen <string arg0>.")
/*<  2>*/ 		printf("Ik acht het <numeric arg0>% zeker dat deze u in dit\ngebied van pas zal komen.")
/*<  6>*/ 		printf("Volgens mijn analyse moet u met een\nzwaard aardig stand kunnen houden in dit\ngebied.\n\nIk raad u tevens aan om uw avonturiers-\nbuidel te vullen met nuttige objecten.")
/*<  3>*/ 		switch (adventure_pouch_has(6 0x0006)) {
          		  case 0:
/*<  4>*/ 			printf("Uw houten schild is tevens slecht bestand\ntegen vuuraanvallen.<pause0F> Mijn advies is om\nhet hier niet te gebruiken.")
          		  case 1:
          		}
          	}
          }

          void entrypoint_006_301() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("Ik kan u op het moment niet van\nrelevante informatie voorzien.")
          }

