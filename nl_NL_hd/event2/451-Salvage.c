          void entrypoint_451_01() {
          	start()
/*<  1>*/ 	printf("Volgens mijn analyse is dit het object waar\nde eigenaardige man op Preteiland naar op\nzoek is.\n\nAls u wilt, kan ik de werkplaatsrobot\ncontacteren. Zal ik dat voor u doen?\n[1]Ja![2-]Nee, dank je.")
/*<  2>*/ 	switch (choice(2)) {
          	  case 0:
/*<  3>*/ 		printf("Goed,\x0E\x01\x12\x04\x00\x05 meester. Ik zal contact opnemen met\nde robot via een telepathische connectie.")
          	  case 1:
/*<  4>*/ 		printf("Begrepen, \x0E\x01\x12\x04\x00\x05meester. Als u van gedachten\nverandert, kun u het voorwerp nogmaals\nbestuderen.")
          	}
          }

          void entrypoint_451_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf("\x0E\x01\x12\x04\x00dMeesteres Fi, zrrpt! Heeft u mij geroepen?\n\n\n\nWauw, zrrft... Dit gebied komt me op een\nof andere manier bekend voor, brrzrrt...\n\n\nDus u wilt dat ik dit ding voor u draag,\nbzzzt?")
          }

          void entrypoint_451_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	printf("\x0E\x01\x12\x04\x00dIk zal in de lucht op u wachten, dus ik\nhoop u daar gauw te zien, vrrt!")
          }

          void entrypoint_451_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("\x0E\x01\x12\x04\x00\x01Meester, mijn advies is om terug te keren\nnaar de lucht en het spelwiel zo spoedig\nmogelijk terug te geven aan zijn eigenaar.")
/*< 14>*/ 	story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*< 13>*/ 	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = true;
/*< 19>*/ 	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = false;
/*< 18>*/ 	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = false;
/*< 17>*/ 	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
/*< 16>*/ 	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = false;
/*< 20>*/ 	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = false;
/*< 15>*/ 	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = false;
/*< 21>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 721, 'next': 22, 'param3': 52}
/*< 22>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 722, 'next': 24, 'param3': 52}
/*< 24>*/ 	story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = false;
/*< 23>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
          }

          void entrypoint_451_05() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf("\x0E\x01\x12\x04\x00dOké, oké, zrrft... Let erop dat je me niet\nin de weg zit, meester Broekie, bzzzt!")
          }

          void entrypoint_451_06() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf("Volgens mijn analyse is dit het object waar\nde eigenaardige man op Preteiland naar op\nzoek is.\n\nOnder normale omstandigheden zouden we\nde werkplaatsrobot in kunnen schakelen\nom dit object mee te nemen.\n\nDe robot voert echter al een opdracht uit\nbij de Eldin-vulkaan en is daarom op dit\nmoment niet beschikbaar.\n\nMijn advies is om naar de Eldin-vulkaan te\ngaan en contact op te nemen met de robot.")
          }

