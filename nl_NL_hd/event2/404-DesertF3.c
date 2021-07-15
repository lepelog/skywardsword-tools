          void entrypoint_404_03() {
/*<  3>*/ 	start()
/*< 43>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*< 44>*/ 		printf("Ik ben dol op het uitzicht hier.")
          	  case 1:
/*< 50>*/ 		check_item_flag(198, 1)
/*< 51>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 24}) {
          		  case 0:
/*< 52>*/ 			printf("Brrroem! Is dat wat ik denk dat het is?!<pause1E>\nGa er snel mee naar <b<meester Donderdraak>>,\nvwwiep-vwwiep!")
          		  case 1:
/*< 30>*/ 			check_item_flag(497, 1)
/*< 31>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 10}) {
          			  case 0:
/*<111>*/ 				switch (scene_flags[23 /* 0x3 80 */]) {
          				  case 0:
/*<113>*/ 					printf("\x0E\x01\x09\x04\x03\xC00Ik denk niet dat de zaailing in <b<Lanayru\n>>ooit uit zal groeien tot een boom die\nvruchten draagt, vrrm...\n\n\x0E\x01\x09\x04\x00\x900We hebben je hulp nodig, brrzrrt! \x0E\x01\x09\x04\x03\x900Meester\nDonderdraak heeft een <r<levensboomvrucht>>\nnodig om te kunnen genezen!")
          				  case 1:
/*< 70>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 32, 'param3': 31}
/*< 32>*/ 					printf("\x0E\x01\x09\x04\x03\x900Wat doe je met de levensboomzaailing,\nvrrm?!<pause1E> <b<Meester Donderdraak>> heeft voor\nzijn genezing een <r<levensboomvrucht >>nodig!\n\n\x0E\x01\x09\x04\x03\x900Tenzij... Probeer je mijn meester soms te\nhelpen, bzzzzt?\n[1]Ja![2]Nee, niet echt...")
/*<131>*/ 					switch (choice(2)) {
          					  case 0:
/*<132>*/ 						printf("\x0E\x01\x09\x04\x03\x900Echt waar, vrrm?! Dank je wel, zrrt! Zorg\ndat je de zaailing plant op een plek waar\nhij goed kan groeien, vwwoep.\n\n\x0E\x01\x09\x04\x03\x900Ik vrees dat dat in <r<Lanayru onmogelijk\nzal zijn>>,<pling> brrzrrt. We rekenen op je, vwwiep!")
          						flw_72:
/*< 72>*/ 						scene_flags[9 'Lanayru Gorge'][11 /* 0x0 08 */] = true;
/*<112>*/ 						scene_flags[9 'Lanayru Gorge'][23 /* 0x3 80 */] = true;
          					  case 1:
/*<133>*/ 						printf("\x0E\x01\x09\x04\x03\x900Nou, nu jij hem ontworteld hebt, moet je er\nook zelf voor zorgen vrrm! Zorg dat je de\nzaailing plant op een plek waar hij snel\nkan groeien, vwwoep.\n\x0E\x01\x09\x04\x03\x900Dat betekent dat je<r< een andere plek dan\nLanayru moet vinden>>, bzzt!<pling> We rekenen op\nje, vwwiep!")
          						goto flw_72
          					}
          				}
          			  case 1:
/*<  4>*/ 				printf("\x0E\x01\x09\x04\x03\xC00<b<Meester Donderdraak>> is er al tijden slecht\naan toe.<pause0F> Helaas groeien bomen niet al te\nbest op deze grond, zrrt.<pause1E> \x0E\x01\x09\x04\x01\xC00Hadden we maar\nmeer tijd, vrrm...")
          			}
          		}
          	}
          }

          void entrypoint_404_55() {
/*<106>*/ 	start()
/*<108>*/ 	switch (scene_flags[107 /* 0xC 08 */]) {
          	  case 0:
/*<123>*/ 		switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          		  case 0:
/*<124>*/ 			printf("\x0E\x01\x09\x04\x2F08\xD09Het is duidelijk dat je archeologie een\nwarm hart toedraagt, vriend! Ik hoor het\ngraag als je meer te weten komt over de\nlegende van de drie draken!")
          			flw_99:
/*< 99>*/ 			scene_flags[9 'Lanayru Gorge'][107 /* 0xC 08 */] = true;
/*<110>*/ 			scene_flags[9 'Lanayru Gorge'][108 /* 0xC 10 */] = true;
          		  case 1:
/*<109>*/ 			printf("\x0E\x01\x09\x04\x2F00\x06Is er nog iets anders waarmee ik je kan\nhelpen? Als je meer te weten komt over de\nlegende van de drie draken, moet je het me\nzeker komen vertellen!")
          			goto flw_99
          		}
          	  case 1:
/*<107>*/ 		printf("\x0E\x01\x09\x04\x2F00\xD0AIk krijg bijna nooit bezoekers!<pause1E> Ik ben\n<b<Golo>> en ik doe onderzoek naar de <r<legende\nvan de drie draken>>. Een daarvan schijnt\nhier te leven!\n\x0E\x01\x09\x04\x2F00\x07Op het eerste gezicht lijkt er hier niets\nwat de moeite waard is, maar ik weet\nzeker dat ik iets zal vinden als ik goed\nzoek!\nDus jij bent Link? Hmm...\nDat is niet bepaald een makkelijke naam\nom uit te spreken.\n\n\x0E\x01\x09\x04\x2F01\xD00Waarvoor ben jij hier, Link?\n\n\n\n\x0E\x01\x09\x04\x2F00\x07Ben je op zoek naar een <b<heilige vlam>>? Er\ngaat een vaag belletje rinkelen,<pause19> denk ik...\n\n\n\x0E\x01\x09\x04\x2F0F\x709Goeie goro,<pause19> \x0E\x01\x09\x04\x2F00\xD00Ik weet nu waar je het over\nhebt! Daar heb ik over gelezen in\nboekrollen over de <b<Lanayru-zandzee>>.\n\n\x0E\x01\x09\x04\x2F08\xD00Ik kan me niet precies herinneren waar\nhet over ging, maar als je in die richting\ngaat, dan kom je vanzelf bij de Lanayru-\nzandzee uit.")
/*<125>*/ 		set_camera(2, 0)
/*<126>*/ 		set_camera(-1, 0)
/*<128>*/ 		printf("\x0E\x01\x09\x04\x2F08\xD00Voor de doorgang naar de Lanayru-\nzandzee heb je deze sleutel nodig!")
/*<127>*/ 		give_item(1 0x01);
/*<129>*/ 		printf("\x0E\x01\x09\x04\x2F08\xD09Succes bij je zoektocht!")
          		goto flw_99
          	}
          }

          void entrypoint_404_04() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf("...")
          }

          void entrypoint_404_56() {
/*<143>*/ 	start()
/*<155>*/ 	switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          	  case 0:
/*<156>*/ 		printf("\x0E\x01\x09\x04\x2F08\x709Ben je bij de draak gekomen,\nLink?<pause54>\n\n\n\x0E\x01\x09\x04\x2F01\x805\x0E\x01\x08\x02\x2CDIk ben er jaloers van!<pause5A>\n\n\n\n\x0E\x01\x09\x04\x2F0F\x706\x0E\x01\x08\x02\x2CDJe hebt me zo de loef\nafgestoken!")
          		flw_154:
/*<154>*/ 		scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
          	  case 1:
/*<147>*/ 		switch (scene_flags[35 /* 0x5 08 */]) {
          		  case 0:
/*<149>*/ 			printf("\x0E\x01\x09\x04\x2F08\xD0AIk heb een gang gemaakt naar het gebied\nwaar de <r<donderdraak>> leeft, maar...<pause2D>\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x09\x04\x2F0D\x800de doorgang is te smal voor mij.\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x09\x04\x2F08\x700Wat moet ik nu?")
          			goto flw_154
          		  case 1:
/*<150>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 31}
/*<144>*/ 			switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          			  case 0:
/*<158>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD02Goed je te zien, Link.\n\n\n\nHeb je uiteindelijk die <b<heilige vlam\n>>gevonden waar je naar zocht? Wat, echt?\nIs het je gelukt?! Dat is geweldig! Nou,\nvertel me alles! Hoe was het?\n\x0E\x01\x09\x04\x2F08\x407Wauw.<pause14>.<pause14>.<pause14> Dus na al die omzwervingen\nheb je de vlam eindelijk gevonden!\n\n\n\x0E\x03\x01\x00Link, ik moet zeggen...\ndat ik diep onder de indruk van je ben!")
/*<170>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD0AMaar ik heb ook niet stilgezeten! Ik heb\nontdekt dat hierachter inderdaad een\ngeheim gebied ligt! Er is een <r<smalle holte>>\n<pling>waar ik net iets te fors voor ben!\n\x0E\x01\x09\x04\x2F00\xD00Mijn hypothese is dat deze gang naar de\nverblijfplaats van de <r<donderdraak>> leidt,\neen van de drie draken uit de legendes.\n\n\x0E\x01\x09\x04\x2F00\x800En ik ben er zeker van dat die robots\ner ook iets mee te maken hebben.<pause0F>\n\n\n\x0E\x01\x09\x04\x2F01\x807\x0E\x01\x06\x02\xFFCDDe <r<donderdraak>>, een stelletje robots, en\nchronokristallen<pause14>.<pause14>.<pause14>.\n\n\n\x0E\x01\x09\x04\x2F08\x708\x0E\x01\x08\x02\x2CDWat een verhaal!")
/*<146>*/ 				printf("\x0E\x01\x09\x04\x08\xD00O, bijna vergeten, Link!\nHerinner je je nog dat opgravingsproject\nwaarin je hebt geïnvesteerd?<pause14>\n\nNou, dat was een doorslaand succes! Ik\nheb een enorme afzetting van chrono-\nkristallen gevonden.\x0E\x01\x09\x04\x2F00\xD01 Nu kan ik je inleg\ntienvoudig terugbetalen!")
/*<145>*/ 				rupees += 100;
          				flw_148:
/*<148>*/ 				scene_flags[9 'Lanayru Gorge'][35 /* 0x5 08 */] = true;
          				goto flw_154
          			  case 1:
/*<157>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD02Goed je te zien, Link.\n\n\n\nHeb je uiteindelijk die <b<heilige vlam\n>>gevonden waar je naar zocht? Wat, echt?\nIs het je gelukt?! Dat is geweldig! Nou,\nvertel me alles! Hoe was het?\n\x0E\x01\x09\x04\x2F08\x407Wauw.<pause14>.<pause14>.<pause14> Dus na al die omzwervingen\nheb je de vlam eindelijk gevonden!\n\n\n\x0E\x03\x01\x00Link, ik moet zeggen...\ndat ik diep onder de indruk van je ben!")
/*<171>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD0AMaar ik heb ook niet stilgezeten! Ik heb\nontdekt dat hierachter inderdaad een\ngeheim gebied ligt! Er is een <r<smalle holte>>\n<pling>waar ik net iets te fors voor ben!\n\x0E\x01\x09\x04\x2F00\xD00Mijn hypothese is dat deze gang naar de\nverblijfplaats van de <r<donderdraak>> leidt,\neen van de drie draken uit de legendes.\n\n\x0E\x01\x09\x04\x2F00\x800En ik ben er zeker van dat die robots\ner ook iets mee te maken hebben.<pause0F>\n\n\n\x0E\x01\x09\x04\x2F01\x807\x0E\x01\x06\x02\xFFCDDe <r<donderdraak>>, een stelletje robots, en\nchronokristallen<pause14>.<pause14>.<pause14>.\n\n\n\x0E\x01\x09\x04\x2F08\x708\x0E\x01\x08\x02\x2CDWat een verhaal!")
          				goto flw_148
          			}
          		}
          	}
          }

          void entrypoint_404_05() {
/*<  7>*/ 	start()
/*< 45>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*<135>*/ 		switch (temp_flags[63 /* 0x6 80 */]) {
          		  case 0:
/*< 46>*/ 			printf("Meester Donderdraak is weer op krachten,\nen dat is helemaal dankzij jou, brrzrrt! We\nzijn je voor eeuwig dankbaar, vwwiep!")
          		  case 1:
/*<136>*/ 			printf("Ben je hier om meester Donderdraak te\nbezoeken, vwwoep?")
          		}
          	  case 1:
/*< 53>*/ 		check_item_flag(198, 1)
/*< 54>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 26}) {
          		  case 0:
/*< 55>*/ 			printf("Meester Donderdraak zal weer op krachten\nkomen zodra hij een <r<levensboomvrucht>> eet,\nvrrm!")
          		  case 1:
/*< 35>*/ 			check_item_flag(497, 1)
/*< 36>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 14}) {
          			  case 0:
/*< 38>*/ 				printf("\x0E\x01\x09\x04\x03\xC00In dit gebied kunnen hooguit bloemen en\ngras groeien, zrrt.<pause1E> \x0E\x01\x09\x04\x01\xC00Als we geen manier\nvinden om de zaailing snel te laten groeien,\n\x0E\x01\x06\x02\xFECDgaat onze meester het niet redden, bzzt...")
          			  case 1:
/*< 33>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*<168>*/ 					switch (scene_flags[23 /* 0x3 80 */]) {
          					  case 0:
/*<169>*/ 						printf("\x0E\x01\x09\x04\x00\x00Ik maak me zorgen om de huidige toestand\nvan meester Donderdraak, vrrrp. Als we\ngeen <r<levensboomvrucht>> voor hem vinden,\nzullen zijn systemen het begeven, brrrt.")
          					  case 1:
/*< 37>*/ 						printf("\x0E\x01\x09\x04\x03\x900Om meester Donderdraak te helpen\nhebben we een <r<levensboomzaailing>>\ngeplant. Een vrucht van die boom schijnt\niedere ziekte te kunnen genezen, vrrm.")
          					}
          				  case 1:
/*<  8>*/ 					printf("\x0E\x01\x09\x04\x03\xC00De situatie is kritiek, vrrrrm! <b<Meester\nDonderdraak>> is ernstig ziek, bzzt.<pause0F>\n\n\n\x0E\x01\x09\x04\x03\xC00En we mogen niets doen met dit chronokristal\nzonder toestemming van meester\nDonderdraak, vrrm.<pause1E>\n\n\x0E\x01\x09\x04\x01\xC00Maar dat van het chronokristal is natuurlijk\nlang niet het ergste, brrzrrt...")
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_57() {
/*<151>*/ 	start()
/*<152>*/ 	printf("\x0E\x01\x09\x04\x2F0C\xD01\x0E\x01\x06\x02\xFFCD\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x2F00\x01Hé, ben jij dat, Link?\n\n\n\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x08\x02\x1CDDat komt mooi uit!<pause0F> Ik moet je\nnamelijk spreken!<pause0F>\n\n\n\x0E\x01\x06\x02\x2CD\x0E\x01\x08\x02\x1CDAls je een moment hebt, kun je dan\neven hier komen?")
/*<153>*/ 	scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
/*<159>*/ 	story_flags[829 /* us: 805A9B33 0x20, jp: 805ACDB3 0x20 */] = true;
/*<160>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<161>*/ 	story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<162>*/ 	story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          }

          void entrypoint_404_06() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("...")
          }

          void entrypoint_404_58() {
/*<163>*/ 	start()
/*<164>*/ 	printf("\x0E\x01\x09\x04\x2F08\x709Hé, Link! Ik heb hierachter\neen doorgang gevonden!\n\n\nMaar deze rots is keihard. Het gaat nog\nwel een tijdje duren voordat ik daar\ndoorheen ben.")
          }

          void entrypoint_404_07() {
/*< 11>*/ 	start()
/*< 24>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 25>*/ 		printf("Zorg dat je in de buurt van de wagen\nblijft, vrrm!")
          	  case 1:
/*< 71>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 31}
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x03\x900Er zijn hier veel grote chronokristallen, zrrt.<pause1E>\n\x0E\x01\x09\x04\x00\x900Heb jij net als wij toestemming gekregen\nvan <b<meester Donderdraak>> om hier te\nkomen, vrrm?\n\x0E\x01\x09\x04\x01\x900We zijn namelijk net van plan om dit\nchronokristal naar meester Donderdraak te\nbrengen, vwwiep.")
/*< 18>*/ 		temp_flags[0 /* 0x1 01 */] = true;
/*< 87>*/ 		set_camera(1, 0)
/*< 86>*/ 		printf("\x0E\x01\x05\x04(\x00Langs het spoor zijn veel monsters, vrrm.<pause0F>\n\x0E\x01\x09\x04\x03\xC00Wees dus heel voorzichtig, bzrt!")
          	}
          }

          void entrypoint_404_08() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("...")
          }

          void entrypoint_404_09() {
/*< 15>*/ 	start()
/*< 47>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*<134>*/ 		switch (temp_flags[63 /* 0x6 80 */]) {
          		  case 0:
/*< 48>*/ 			printf("Meester Donderdraak maakt het\nuitstekend, vwwiep!")
          		  case 1:
/*<137>*/ 			printf("Meester Donderdraak is weer zo sterk als\nvoorheen, vrroem!")
          		}
          	  case 1:
/*< 56>*/ 		check_item_flag(198, 1)
/*< 57>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 28}) {
          		  case 0:
/*< 58>*/ 			printf("Rrrring! Waar heb je die vrucht vandaan,\nbrrt?!<pause2D> Is die voor <b<meester Donderdraak>>,\nvwwoep?!")
          		  case 1:
/*< 27>*/ 			check_item_flag(197, 1)
/*< 28>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          			  case 0:
/*< 39>*/ 				printf("\x0E\x01\x09\x04\x03\xC00De grond in <b<Lanayru>> is niet geschikt voor\nbomen, zrrt.<pause1E> \x0E\x01\x09\x04\x03\x900Ken jij een plaats waar bomen\nsnel kunnen groeien, vwiep?")
          			  case 1:
/*< 26>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*< 29>*/ 					printf("Aan de andere kant van de brug hebben\nwe een <r<levensboomzaailing>>, geplant, brrt.\nEen vrucht van zo'n boom kan iedere\nziekte genezen, vrrm.<pause1E>\n\x0E\x01\x09\x04\x00\xC00Maar bomen hebben moeite om hier te\ngroeien, vwwiep...")
          				  case 1:
/*< 16>*/ 					printf("\x0E\x01\x09\x04\x03\x900We hebben toestemming van meester\nDonderdraak om <b<chronokristallen>> op te\ngraven, vwwiep.\n\n<pause1E>\x0E\x01\x09\x04\x03\xC00Helaas is <b<meester Donderdraak>> heel erg\nziek, brrzrrt.<pause0F> Ik maak me zorgen om hem,\nvrrm.<pause1E> \x0E\x01\x09\x04\x01\xC00Als het zo doorgaat, zal onze meester\nophouden te functioneren, vwwiep...")
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_10() {
/*< 94>*/ 	start()
/*<116>*/ 	switch (scene_flags[14 /* 0x0 40 */]) {
          	  case 0:
/*<118>*/ 		printf("<pause14>.<pause14>.<pause14>.")
          	  case 1:
/*<115>*/ 		switch (scene_flags[9 /* 0x0 02 */]) {
          		  case 0:
/*<119>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
/*<121>*/ 				printf("<pause14>.<pause14>.<pause14>.")
          			  case 1:
/*<117>*/ 				printf("<pause14>.<pause14>.<pause14>.")
/*<120>*/ 				scene_flags[9 'Lanayru Gorge'][26 /* 0x2 04 */] = true;
          			}
          		  case 1:
/*< 96>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 97>*/ 				printf("<pause14>.<pause14>.<pause14>.")
          			  case 1:
/*<114>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 95, 'param3': 31}
/*< 95>*/ 				printf("<pause14>.<pause14>.<pause14>.")
/*<100>*/ 				scene_flags[9 'Lanayru Gorge'][18 /* 0x3 04 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_404_11() {
/*<138>*/ 	start()
/*<140>*/ 	printf("\x0E\x01\x09\x04\x0B\x901\x0E\x03\x01\x00Link! Je hebt mijn leven\ngered! Daarvoor moet ik je belonen!\n\n\n\x0E\x01\x09\x04\x00\x900Geef me even de tijd om me voor te\nbereiden. Ik weet zeker dat je het de\nmoeite waard zult vinden!")
/*<139>*/ 	scene_flags[9 'Lanayru Gorge'][29 /* 0x2 20 */] = true;
          }

          void entrypoint_404_30() {
/*< 19>*/ 	start()
/*< 20>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*< 21>*/ 		switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          		  case 0:
/*< 22>*/ 			story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */] = true;
          			flw_79:
/*< 79>*/ 			story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */] = true;
/*< 23>*/ 			temp_flags[63 /* 0x6 80 */] = true;
/*<122>*/ 			entrypoint_006_04();
          		  case 1:
          			goto flw_79
          		}
          	  case 1:
          		goto flw_79
          	}
          }

          void entrypoint_404_31() {
/*< 80>*/ 	start()
/*< 91>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*< 81>*/ 	printf("\x0E\x01\x05\x04K\x00Dit is de <b<Lanayru-kloof>>. Volgens de\nlegendes leeft hier een draak die trouw is\naan de godin.")
          }

          void entrypoint_404_32() {
/*< 82>*/ 	start()
/*< 83>*/ 	printf("\x0E\x01\x05\x04Z\x00Aan de omgeving te zien deed een oude\nbeschaving hier aan opgravingen om\nhoogwaardige chronokristallen te winnen.")
          }

          void entrypoint_404_50() {
/*< 17>*/ 	start()
/*< 68>*/ 	switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          	  case 0:
/*< 69>*/ 		printf("\x0E\x01\x09\x04\x2F08\xD09Het is duidelijk dat je archeologie een\nwarm hart toedraagt, vriend! Ik zal hier\ngoed gebruik van maken en hopelijk levert\ndat binnenkort wat moois op!")
          	  case 1:
/*< 61>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 62, 'param3': 12}
/*< 62>*/ 		printf("\x0E\x01\x09\x04\x2F00\xD09Jij... bent niet toevallig geïnteresseerd in\nopgravingen, of wel?<pause3C> Dat ben je wel?!\nNou, dan vind je dit vast reuze-\ninteressant!<pause3C>\n\x0E\x01\x09\x04\x2F00\xD07Helaas kunnen dit soort opgravingen vrij\nveel kosten...<pause1E> Maar, ze kunnen ook\nlucratief zijn. Zou je misschien 10 rupees\nin mijn opgraving willen investeren?[1]Ja hoor![2-]Nee, ik ben niet gek.")
/*< 59>*/ 		switch (choice(2)) {
          		  case 0:
/*< 63>*/ 			switch (has_rupees(10)) {
          			  case 0:
/*< 64>*/ 				rupees += -10;
/*< 66>*/ 				printf("\x0E\x01\x09\x04\x2F02\x208Dank je wel! Ik zal hier goed gebruik van\nmaken!")
/*< 67>*/ 				story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */] = true;
          				flw_98:
/*< 98>*/ 				scene_flags[9 'Lanayru Gorge'][106 /* 0xC 04 */] = true;
          			  case 1:
/*< 65>*/ 				printf("Goro toch, zoveel rupees heb je niet. Maar\nkom gerust nog eens terug als je me wilt\nsteunen. Mijn onderzoek hangt ervan af!")
          				goto flw_98
          			}
          		  case 1:
/*< 60>*/ 			printf("\x0E\x01\x09\x04\x2F01\x805\x0E\x01\x06\x02\xFFCDDat is jammer...<pause1E> Er is tegenwoordig maar\nweinig animo om archeologisch onderzoek\nfinancieel te ondersteunen.")
          			goto flw_98
          		}
          	}
          }

          void entrypoint_404_33() {
/*< 84>*/ 	start()
/*< 85>*/ 	printf("\x0E\x01\x05\x04Z\x00Daardoor ligt er nu overal in dit gebied\noud mijnbouwgereedschap, zoals\nmijnwagens en spoorbanen.")
          }

          void entrypoint_404_51() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf("Rechtdoor naar de Lanayru-\nzandzee, een uitgestrekte oceaan\nvan zand. In die omgeving zijn\nook vele oude ruïnes te vinden.")
          }

          void entrypoint_404_34() {
/*<166>*/ 	start()
/*<167>*/ 	printf("Sommige Bokoblins dragen een monsterhoorn aan hun\nriem.\n\n\nMet je <rd<zweep>> kun je die mogelijk van ze afpakken.")
          }

          void entrypoint_404_52() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf("Rechtdoor naar de Lanayru-\nwoestijn. Het avontuur wacht\nvoor diegenen die de mysteriën\nvan de groeve willen ontrafelen.")
          }

          void entrypoint_404_01() {
          	start()
/*< 88>*/ 	check_item_flag(198, 1)
/*< 89>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 36}) {
          	  case 0:
/*<165>*/ 		story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = false;
/*< 90>*/ 		changeScene(18, 0) // 
          	  case 1:
/*< 40>*/ 		check_item_flag(497, 1)
/*< 41>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 16}) {
          		  case 0:
/*<103>*/ 			switch (scene_flags[22 /* 0x3 40 */]) {
          			  case 0:
/*<105>*/ 				printf("Wat zeg je, Link? Wil je een\nplek zoeken waar de zaailing <r<sneller zal\ngroeien>>?\n\n\x0E\x01\x09\x04\x11\x804Daar zou je me enorm mee helpen. <r<Eén\nlevensboomvrucht >>zou voor mij voldoende\nzijn om volledig op te knappen.\n\n\x0E\x01\x09\x04\x08\xA00Als ik jou was, zou ik zoeken naar een\nplaats waar <r<de grond zeer vruchtbaar is>>.")
          			  case 1:
/*< 42>*/ 				printf("\x0E\x01\x09\x04\x08\xA03Dag, Link.<pause0F> Bedriegen mijn\nogen me of heb je de <r<levensboomzaailing\n>>meegenomen?\n\nDaar kom je te laat mee, jonkie.<pause1E> Tegen de\ntijd dat dat een boom met vruchten is, is\nmijn leven allang voorbij.\x0E\x01\x09\x04\x08\x110C Kuch... kuch...\n\nHet spijt me zeer. Onder betere omstandig-\nheden had ik ieder lied voor je gezongen\ndat ik ken.<pause1E> \x0E\x01\x09\x04\x08\x1102Kuch... kuch...")
/*<104>*/ 				scene_flags[9 'Lanayru Gorge'][22 /* 0x3 40 */] = true;
          			}
          		  case 1:
/*<141>*/ 			switch (story_flags[794 /* us: 805A9B2F 0x04, jp: 805ACDAF 0x04 */]) {
          			  case 0:
/*<142>*/ 				printf("\x0E\x03\x01\x00Link... Met een\n<b<levensboomvrucht>> zou je me enorm...\nhelpen.")
          			  case 1:
/*<101>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*<102>*/ 					printf("De robots hebben voor mij een\n<r<levensboomzaailing>> geplant. Het schijnt dat\niedere ziekte genezen kan worden met een\nvrucht van zo'n boom...\nZe hebben de zaailing daar verderop\ngeplant.<pause14> Kuch...\x0E\x01\x09\x04\x08\x110C<pause1E> \x0E\x01\x09\x04\x00\x00Maar die wil niet groeien.<pause1E>\nKuch...\x0E\x01\x09\x04\x08\x110C<pause2D> \x0E\x01\x09\x04\x11\x804Dit is het einde voor mij.<pause14>")
          				  case 1:
/*<  1>*/ 					printf("\x0E\x01\x09\x04\x11\x804\x0E\x01\x08\x02\x2CD\x0E\x01\x06\x02\xFFCDKuch, kuch...<pause1E>\n\n\n\n\x0E\x01\x09\x04\x08\xA03O, hallo...<pause14> Ik heb al... heel lang geen\nbezoekers gehad.\n\n\n\x0E\x01\x09\x04\x08\xA00Jij bent een mens, nietwaar? Er zal wel\neen bijzondere reden zijn waarom je hier\nbent.\n\n<pause0F>.<pause0F>.<pause0F>.\n\n\n\n\x0E\x01\x09\x04\x11\x80CAha, je naam is Link en je komt\nuit de lucht... \x0E\x01\x06\x02\xFFCDKuch...<pause0F> Dat is toch niet je\nvolledige naam?\n\n\x0E\x01\x09\x04\x08\xA00Wat dacht je ervan als ik je net zo'n\nmodelnummer geef als mijn vrienden?\n<r<LW-Link-16>>.<pause14>.<pause14>.<pause14>\n\nO. Ik kan aan je zien dat je dat maar niks\nvindt.<pause0F> Wat jammer... <pause0F>\x0E\x01\x09\x04\x08\x802Kuch... kuch... Goed,\nwat kan ik voor je betekenen?\n\n\x0E\x01\x09\x04\x08\xA03O...<pause1E> Wil je dat ik je een lied leer? Kuch...")
/*<130>*/ 					printf("\x0E\x01\x09\x04\x08\xA00Wacht eens. Zei je niet dat je uit de lucht\nkomt, Link? Betekent dat dat\njij de held bent die door de godin is\nuitverkoren?\nAha... Wat bijzonder...\n\n\n\n\x0E\x01\x09\x04\n\xA00Ik moet me alleen verontschuldigen. Ik ben\nnamelijk niet in staat om je te helpen.\n\n\n\x0E\x01\x09\x04\n\xA00Ik heb nog wel de puf voor een kort\ngesprek, maar zoals je merkt ben ik ernstig\nziek.<pause1E> \x0E\x01\x09\x04\x00\x0CKuch...\n\n\x0E\x01\x09\x04\n\xA00In deze staat gaat het me niet lukken om\neen lied te zingen.\n\n\n\x0E\x01\x09\x04\x11\x804Ik schaam me diep dat ik de taak die de\ngodin me heeft toevertrouwd, niet kan\nvervullen... Kuch...")
/*< 34>*/ 					story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */] = true;
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_53() {
/*< 77>*/ 	start()
/*< 78>*/ 	printf("Voor me ligt de Lanayru-mijn.\nHier zal ik het mysterie achter\nde chronokristallen oplossen!")
          }

          void entrypoint_404_02() {
/*<  2>*/ 	start()
/*< 49>*/ 	printf("...")
          }

          void entrypoint_404_54() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf("Dit gebied is alleen toegankelijk\nmet toestemming van <b<meester\nDonderdraak>>,<b< Lanayru>>.")
          }

