          void entrypoint_251_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 2, unk: 0, line: 3 */ "<0x10012:0x00000064>Meesters Fi! Ik hoop dat u niet lang op\nme moest wachten, bzzzzt! Wilt u dat ik\ndit ding meeneem, zrrbt?")
          }

          void entrypoint_251_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	printf(/* textboxtype: 0, unk: 1, line: 4 */ "Ik zal in de lucht op u wachten, dus ik\nhoop u daar gauw te zien, vrrt!")
          }

          void entrypoint_251_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10012:0x00000001>Meester, mijn advies is om de Kikwi\nspoedig af te leveren op de plaats van\nbestemming.")
/*< 23>*/ 	story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*< 13>*/ 	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = true;
/*< 24>*/ 	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = false;
/*< 25>*/ 	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = false;
/*< 26>*/ 	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
/*< 27>*/ 	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = false;
/*< 28>*/ 	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = false;
/*< 29>*/ 	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = false;
/*< 30>*/ 	story_flags[673 /* us: 805A9B20 0x04, jp: 805ACDA0 0x04 */] = true;
/*< 34>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
          }

          void entrypoint_251_05() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10012:0x00000064>Aan de kant! Aan de kant, brrt! Wat een\nenergieverspilling om dit iedere keer te\nmoeten roepen, zrrppt!")
          }

          void entrypoint_251_06() {
/*< 22>*/ 	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "Ik kan slechts met 40% zekerheid\nvaststellen dat dit een plant is. <color blue<Cornuylius\n>coloroff>kan daar wellicht meer over zeggen.\n\nWe kunnen dit organisme op laten halen\ndoor de werkplaatsrobot. Zal ik die voor u\nroepen?\n[1-]Graag![2]Nee, dank je.")
/*<  2>*/ 	switch (choice(2)) {
          	  case 0:
/*<  4>*/ 		printf(/* textboxtype: 0, unk: 0, line: 2 */ "Goed,<0x10012:0x00000005> meester. Ik zal contact opnemen\nmet de robot via een telepathische\nconnectie.")
          	  case 1:
/*<  3>*/ 		printf(/* textboxtype: 0, unk: 2, line: 1 */ "Begrepen, <0x10012:0x00000005>meester. U kunt het organisme\nopnieuw bestuderen als u het toch naar\nSkyloft wilt brengen.")
          	}
          }

          void entrypoint_251_01() {
          	start()
/*< 31>*/ 	switch (story_flags[673 /* us: 805A9B20 0x04, jp: 805ACDA0 0x04 */]) {
          	  case 0:
/*< 33>*/ 		printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00070014>Wat is dat nou, kwie-kwiek? Eerst beloof\nje me mee te nemen naar een land in de\nlucht en nu wil je ineens niet meer?\n\n<0x10009:0x00090013>Nu voel ik me helemaal verdrietig, omdat\nik nog steeds geen plek heb waar ik veilig\nben.")
/*< 32>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00070004>Kun je me er niet snel even naartoe\nbrengen?\n\n\n<0x10009:0x00000001>Laat me hier niet achter, kwiek!")
          	  case 1:
/*< 36>*/ 		switch (zone_temp_flags[9 /* 0x0 02 */]) {
          		  case 0:
/*< 37>*/ 			printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00070003>Breng me naar een veilige plek waar ik\nme nooit hoef te verstoppen voor gevaar!\n\n\n<0x10009:0x00000001>Kun je me helpen, alsjekwiek?")
          		  case 1:
/*< 14>*/ 			printf(/* textboxtype: 0, unk: 2, line: 7 */ "<0x10009:0x00000001>O, daar ben je weer, kwiek! Van al dat\nverstoppen zijn mijn schouders helemaal\nstijf.\n[1-]Welke schouders?[2-]Wat vervelend.")
/*< 15>*/ 			switch (choice(2)) {
          			  case 0:
/*< 16>*/ 				printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00090014>Dat is onbeleefd, kwiek! Ik heb heus wel\nschouders! Ze zijn alleen niet zo duidelijk\nte zien!\n\n<0x10009:0x00070011>Waar het om draait, is dat niet fijn is om\nje altijd maar voor gevaar te moeten\nverstoppen, kwiek!")
          				flw_38:
/*< 38>*/ 				switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          				  case 0:
/*< 39>*/ 					printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00090013>Iedereen is blij dat de vrede is terug-\ngekeerd in het woud, maar ik geloof er\nhelemaal niets van, kwiek!\n\n<0x10009:0x00070004>Denk maar niet dat ik tevoorschijn kom!\nVan me lang-zal-ik-leven niet!")
          					flw_19:
/*< 19>*/ 					printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00090005>Het zou zo fijn zijn als er een plek was die\necht vredig is. Ergens waar ik me nooit\nhoef te verstoppen...\n[1-]Zo'n plek ken ik![2-]Ik kan je helpen.")
/*< 20>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_21:
/*< 21>*/ 						printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00060007>Echt? Dat is geweldig! Kun je me dan\ngelijk naar die plek brengen, kwiek?")
/*< 35>*/ 						zone_temp_flags[9 /* 0x0 02 */] = true;
/*< 40>*/ 						story_flags[1094 /* us: 805A9B52 0x10, jp: 805ACDD2 0x10 */] = true;
          					  case 1:
          						goto flw_21
          					}
          				  case 1:
/*< 18>*/ 					printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00090013>Ik weet zeker dat er nog een heleboel\nbeesten hun tanden in me willen zetten\nen nare dingen met me willen doen,\nkwiek!\n<0x10009:0x00070004>Kikwi's als ik doen hun hele leven niets\nanders dan zich verstoppen om te\noverleven!")
          					goto flw_19
          				}
          			  case 1:
/*< 17>*/ 				printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00070011>Heel vervelend, kwiek! Je hebt geen idee\nhoe het is om steeds maar op één plek te\nzitten zonder te weten of er iets aankomt!")
          				goto flw_38
          			}
          		}
          	}
          }

