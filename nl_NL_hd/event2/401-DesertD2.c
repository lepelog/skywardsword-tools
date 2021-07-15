          void entrypoint_401_00() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_401_01() {
          	start()
/*< 17>*/ 	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
          	  case 0:
/*<100>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*<101>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
/*<104>*/ 				printf("Je hebt allebei de aggregaten aangezet,\nvrrm! Nu kun je via de machinekamer bij\nons komen. Kom ons dus snel redden,\nbzzt!")
          			  case 1:
          				flw_103:
/*<103>*/ 				printf("Je hebt een van de aggregaten aangezet,\nvrrm! Nu het andere nog en dan kun je\nvia de machinekamer bij ons komen, zrrt.\n\nZet dus snel het andere <r<aggregaat>> aan en\nkom ons redden, bzzt!")
          			}
          		  case 1:
/*<102>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
          				goto flw_103
          			  case 1:
/*< 18>*/ 				printf("We hebben je hulp nodig, vwwiep! Je moet\neerst de <r<aggregaten in de machinekamer\n>>aanzetten, bzzt!")
          			}
          		}
          	  case 1:
/*< 49>*/ 		switch (scene_flags[109 /* 0xC 20 */]) {
          		  case 0:
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 2304, 'next': 106, 'param3': 13}
/*<106>*/ 			switch (scene_flags[69 /* 0x9 20 */]) {
          			  case 0:
/*<107>*/ 				printf("\x0E\x01\x09\x04\x09\xC00Dat was eng, vrrm!\n\n\n\n\x0E\x01\x09\x04\x03\x900Jij bent een mens, toch, brrzrrt? Hoe is\nhet je gelukt hier binnen te komen,\nvwwiep?")
          				flw_1:
/*<  1>*/ 				printf(".<pause05>.<pause05>.<pause05>\n\n\n\n\x0E\x01\x09\x04\x03\x900Ben jij met de <b<kapitein>> meegekomen om\nons te redden, vwoep?! Wat geweldig,\nvrrm!\n\n\x0E\x01\x09\x04\x03\x900Maar we kunnen niet weg zolang de\nuitgang wordt geblokkeerd door dat\n<r<vonkende ding>>, zrrt.")
/*< 31>*/ 				set_camera(5, 0)
/*< 61>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 32, 'param3': 6}
/*< 32>*/ 				set_camera(-1, 0)
/*< 29>*/ 				printf(".<pause05>.<pause05>.<pause05>\n\n\n\n\x0E\x01\x09\x04\x03\x900Ik moet je nog vertellen dat de navigatie-\nruimte onder de scheepsgevangenis is,\nvrrrrrm.")
/*< 33>*/ 				set_camera(1, 0)
/*< 30>*/ 				printf("\x0E\x01\x09\x04\x03\x900Er is een gang tussen de machinekamer\nen de scheepsgevangenis, vrrm.")
/*< 34>*/ 				set_camera(-1, 0)
/*< 35>*/ 				printf("\x0E\x01\x09\x04\x03\x900Maar om hier te komen vanuit de\nmachinekamer, moet je in de\nmachinekamer eerst de twee\n<r<<pling>aggregaten >>aanzetten, bzzt.")
/*<109>*/ 				switch (scene_flags[60 /* 0x6 10 */]) {
          				  case 0:
/*<110>*/ 					switch (scene_flags[61 /* 0x6 20 */]) {
          					  case 0:
/*<113>*/ 						printf("\x0E\x01\x09\x04\x03\x900Huh<pause05>.<pause05>.<pause05>. O! Er is weer stroom in de\nmachinekamer, vrrm.\n\n\n\x0E\x01\x09\x04\x03\x900Heb jij dat gedaan, vwwiep? \x0E\x01\x09\x04\x03\x900Oké, dan\nmoet je nu hier kunnen komen via de\nmachinekamer, zrrt!\n\n\x0E\x01\x09\x04\x03\x900We rekenen op je, vwwiep!")
/*<117>*/ 						story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
          						flw_19:
/*< 19>*/ 						story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */] = true;
          					  case 1:
          						flw_112:
/*<112>*/ 						printf("\x0E\x01\x09\x04\x03\x900Huh<pause05>.<pause05>.<pause05>. O, is het je gelukt om een van de\n<r<aggregaten>> aan te zetten, vrrm?\n\n\n\x0E\x01\x09\x04\x03\x900Je moet het andere ook nog aanzetten,\nzrrt! Er zijn er tenslotte twee, vwwiep!")
/*<139>*/ 						switch (scene_flags[60 /* 0x6 10 */]) {
          						  case 0:
/*<116>*/ 							{'type': 'type3', 'subType': 4, 'param1': 511, 'param2': 0, 'next': 115, 'param3': 30}
          							flw_115:
/*<115>*/ 							story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
/*<120>*/ 							printf("\x0E\x01\x09\x04\x03\x900Hier is het andere <r<aggregaat>>, vrrm.")
/*<119>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 118, 'param3': 34}
/*<118>*/ 							printf("\x0E\x01\x09\x04\x03\x900Je kunt het, vwwiep!")
          							goto flw_19
          						  case 1:
/*<114>*/ 							{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': 0, 'next': 115, 'param3': 30}
          							goto flw_115
          						}
          					}
          				  case 1:
/*<111>*/ 					switch (scene_flags[61 /* 0x6 20 */]) {
          					  case 0:
          						goto flw_112
          					  case 1:
/*< 20>*/ 						{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': 0, 'next': 47, 'param3': 30}
/*< 47>*/ 						{'type': 'type3', 'subType': 4, 'param1': 511, 'param2': 0, 'next': 24, 'param3': 30}
/*< 24>*/ 						story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
/*< 23>*/ 						printf("\x0E\x01\x09\x04\x03\x900Er zijn twee <r<aggregaten>> op verschillende\nlocaties die je aan moet zetten, zrrt.")
/*< 22>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 21, 'param3': 34}
/*< 21>*/ 						printf("\x0E\x01\x09\x04\x03\x900Je kunt het, vwwiep!")
          						goto flw_19
          					}
          				}
          			  case 1:
/*<108>*/ 				printf("\x0E\x01\x09\x04\x03\x900Jij bent een mens, toch, brrzrrt? Hoe is\nhet je gelukt hierbinnen te komen,\nvwwiep?")
          				goto flw_1
          			}
          		  case 1:
/*< 97>*/ 			printf("\x0E\x01\x09\x04\x09\xC00Ik ben bang, brrzrrt... Doe iets aan die\nmonsters en zorg dat we hier wegkomen,\nvwwiep.")
/*<105>*/ 			scene_flags[-1 'Skyloft: Silent Realm'][69 /* 0x9 20 */] = true;
          		}
          	}
          }

          void entrypoint_401_02() {
/*<  4>*/ 	start()
/*<  7>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_401_03() {
/*<  6>*/ 	start()
/*<  5>*/ 	printf("")
          }

          void entrypoint_401_04() {
/*<  8>*/ 	start()
/*< 11>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_401_05() {
/*< 10>*/ 	start()
/*<  9>*/ 	printf("")
          }

          void entrypoint_401_06() {
/*< 12>*/ 	start()
/*< 99>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 256, 'next': 121, 'param3': 13}
/*<121>*/ 	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
          	  case 0:
/*< 13>*/ 		printf("\x0E\x01\x09\x04\x03\x900Je hebt ons echt gered, vwwiep! Mijn\nnetwerken gloeien van geluk, vrrm!")
          		flw_15:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x03\x900Meen je dat, vrrm? Je bent aan boord\ngekomen om <r<Nayru's vlam >>te zoeken,\nzrrt?\n\n\x0E\x01\x09\x04\x03\x900Om <r<Nayru's vlam>> te vinden moet je eerst\nhet schip in handen krijgen, vwwiep.\n\n\n\x0E\x01\x09\x04\x03\x900De navigatieruimte is onder de scheeps-\ngevangenis, maar je hebt een sleutel nodig\nom de deur te openen, vrrm.\n\n\x0E\x01\x09\x04\x03\x900Ga daarom eerst naar <b<de hut van de\nkapitein>>, zrrt! <pling>Daar vind je vast de\nsleutel, vwwiep!")
/*<144>*/ 		set_camera(12, 0)
/*<145>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 143, 'param3': 15}
/*<143>*/ 		printf("\x0E\x01\x09\x04\x03\x900Deze <r<sleutel>> kun jij vast wel gebruiken,\nvrrrrm.\n\n\n\x0E\x01\x09\x04\x03\x900Het is de <r<sleutel>> waarmee je <b<de hut van de\nkapitein>> kunt openen, vwwiep.")
/*<146>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 14, 'param3': 42}
/*< 14>*/ 		give_item(1 0x01);
/*<129>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 256, 'next': 128, 'param3': 13}
/*<128>*/ 		set_camera(-1, 0)
/*< 43>*/ 		printf("\x0E\x01\x09\x04\x03\x900Je kunt een deur op het achterdek\ngebruiken om in de hut van de kapitein\nte komen, vrrm.")
/*< 41>*/ 		{'type': 'type3', 'subType': 4, 'param1': 768, 'param2': 0, 'next': 126, 'param3': 30}
/*<126>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 42, 'param3': 15}
/*< 42>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 130, 'param3': 34}
/*<130>*/ 		set_camera(12, 0)
/*< 28>*/ 		printf("\x0E\x01\x09\x04\x03\x900Ikzelf ga ervandoor, vrrm.\n\n\n\n\x0E\x01\x09\x04\x03\x900Sorry dat ik je in de steek laat, maar\nvolgens mij red jij je wel, zrrt! We\nrekenen op je, vwwiep!")
/*< 57>*/ 		set_camera(6, 0)
/*< 60>*/ 		{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 256, 'next': 58, 'param3': 15}
/*< 58>*/ 		{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 0, 'next': 127, 'param3': 14}
/*<127>*/ 		{'type': 'type3', 'subType': 4, 'param1': 2, 'param2': 0, 'next': 59, 'param3': 13}
/*< 59>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 16, 'param3': 6}
/*< 16>*/ 		story_flags[262 /* us: 805A9AF9 0x01, jp: 805ACD79 0x01 */] = true;
/*< 48>*/ 		scene_flags[18 'Lanayru: Sandship'][108 /* 0xC 10 */] = true;
          	  case 1:
/*<122>*/ 		switch (scene_flags[69 /* 0x9 20 */]) {
          		  case 0:
/*<123>*/ 			printf("\x0E\x01\x09\x04\x03\x900Jou heb ik eerder gezien, vwwiep<pause05>.<pause05>.<pause05>.\n\x0E\x01\x09\x04\x03\x900Je was hier en toen liet je me in de steek,\nvrrm. Wat een harteloze streek voor een\nmens, zrrt!\n\x0E\x01\x09\x04\x03\x900Maar hoe is het je gelukt hier binnen te\nkomen, vwwiep?")
          			flw_125:
/*<125>*/ 			printf("\x0E\x01\x09\x04\x03\x900.<pause05>.<pause05>.<pause05>\n\n\n\n\x0E\x01\x09\x04\x03\x900Ben je met <b<Kapbot>> meegekomen om ons te\nredden, vrrm?! Daar maak je ons enorm\nblij mee, zrrt!")
          			goto flw_15
          		  case 1:
/*<124>*/ 			printf("\x0E\x01\x09\x04\x03\x900Jij bent een mens, toch, vrrm? Hoe is het\nje gelukt hier binnen te komen, zrrt?")
          			goto flw_125
          		}
          	}
          }

          void entrypoint_401_07() {
/*< 25>*/ 	start()
/*< 37>*/ 	set_camera(2, 0)
/*< 26>*/ 	printf("\x0E\x01\x09\x04\x03\x900\x0E\x03\x01\x00Link! Uitstekend gedaan,\nvwwiep!")
/*< 38>*/ 	set_camera(3, 0)
/*< 36>*/ 	printf("\x0E\x01\x09\x04\x03\x900Het schip ziet er weer als vanouds uit,\nvwwiep! Ik ben heel gelukkig om hier\nweer te zijn, vrrm!\n\n\x0E\x01\x09\x04\x03\x900Nu moet je alleen nog mijn <b<bemanning\n>>redden, vwwiep!\n\n\n\x0E\x01\x09\x04\x03\x900Ik ben er vrij zeker van dat ze in de\n<b<<pling>scheepsgevangenis>> zitten, brrzrrt!")
/*< 39>*/ 	{'type': 'type3', 'subType': 4, 'param1': 766, 'param2': 0, 'next': 40, 'param3': 30}
/*< 40>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 34}
/*< 27>*/ 	printf("\x0E\x01\x09\x04\x03\x900Het is hier nog best gevaarlijk, dus ik\nwacht voorlopig nog even in de boot, zrrt.\n\n\n\x0E\x01\x09\x04\x03\x900Je kunt het, vrrm!")
/*< 50>*/ 	story_flags[277 /* us: 805A9AF8 0x80, jp: 805ACD78 0x80 */] = true;
/*<138>*/ 	scene_flags[18 'Lanayru: Sandship'][19 /* 0x3 08 */] = true;
          }

          void entrypoint_401_08() {
/*< 44>*/ 	start()
/*< 45>*/ 	printf("")
/*< 46>*/ 	changeScene(1, 0) // 
          }

          void entrypoint_401_09() {
/*< 51>*/ 	start()
/*< 62>*/ 	set_camera(7, 0)
/*< 56>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 54, 'param3': 6}
/*< 54>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 52, 'param3': 35}
/*< 52>*/ 	printf("Attentie, \x0E\x01\x12\x04\x00\x0Bmeester. Aan de grote van de\n<r<tentakels>> te zien hebben we te maken met\neen monster van een enorme omvang.\n\nHet is moeilijk de huidige situatie\naccuraat te duiden, maar het lijkt erop\ndat het schip wordt aangevallen.\n\nIk acht het 80% zeker dat het schip\nzal kapseizen als we niets doen.\n\n\nMijn advies is om het monster terug te\ndrijven met een <r<<pling>heilige kracht>>, en dan\nnaar buiten te gaan om daar de situatie\nverder waar te nemen.")
/*< 55>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 53, 'param3': 36}
/*< 53>*/ 	scene_flags[18 'Lanayru: Sandship'][79 /* 0x8 80 */] = true;
          }

          void entrypoint_401_10() {
/*< 63>*/ 	start()
/*< 64>*/ 	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
          	  case 0:
/*< 65>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*< 66>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
/*< 70>*/ 				printf("\x0E\x01\x12\x04\x00\x01Meester, ik kan bevestigen dat de\nmachinekamer nu volledig operationeel is.\n\n\nHaast u snel naar de scheepsgevangenis\nvia de machinekamer <g<om de bemanning\nte bevrijden>>.")
          			  case 1:
          				flw_69:
/*< 69>*/ 				printf("\x0E\x01\x12\x04\x00\x01Meester, ik kan de woorden van de\nbemanning bevestigen. De machinekamer\nis weer volledig operationeel.\n\nMaar de gang naar de scheepsgevangenis\nis niet toegankelijk voordat het andere\n<r<aggregaat>> geactiveerd is.\n\nU moet daarom snel het andere <r<aggregaat\n>>zoeken.")
          			}
          		  case 1:
/*< 67>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
          				goto flw_69
          			  case 1:
          				goto flw_69
          			}
          		}
          	  case 1:
/*< 72>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*< 73>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
/*< 68>*/ 				printf("\x0E\x01\x12\x04\x00\x01Meester, ik neem opnieuw sterke\ntrillingen waar.\n\n\nOmdat de betekenis hiervan moeilijk is\nvast te stellen, raad ik u aan eerst de\n<b<bemanning>> in de scheepsgevangenis\nte bevrijden.")
          			  case 1:
          				flw_71:
/*< 71>*/ 				printf("\x0E\x01\x12\x04\x00\x01Meester, ik neem sterke trillingen waar.\n\n\n\nDit wijst erop dat de activatie van dit\nmechanisme iets in gang heeft gezet in\nhet schip.\n\nOmdat de betekenis hiervan moeilijk is\nvast te stellen, raad ik u aan eerst de\n<b<bemanning>> in de scheepsgevangenis\nte bevrijden.")
          			}
          		  case 1:
/*< 74>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
          				goto flw_71
          			  case 1:
          				goto flw_71
          			}
          		}
          	}
          }

          void entrypoint_401_11() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf("\x0E\x01\x12\x04\x00\x01Meester, mijn inschatting is dat dit de\n<r<sleutel>> is van de <pling>navigatieruimte waar de\nbemanning het over had.")
/*< 79>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1278, 'param2': 0, 'next': 77, 'param3': 30}
/*< 77>*/ 	printf("Volgens mijn geheugen is de <b<deur van de\nnavigatieruimte >>gemarkeerd met \x0E\x02\x04\x02\x19CD.")
/*< 80>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 78, 'param3': 34}
/*< 78>*/ 	printf("Mijn advies is om u snel richting de\n<b<navigatieruimte>> te begeven.")
          }

          void entrypoint_401_12() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf("\x0E\x01\x12\x04\x00\x01Attentie, meester.")
/*< 91>*/ 	set_camera(8, 0)
/*< 89>*/ 	printf("Deze grote deur is hermetisch gesloten.")
/*< 92>*/ 	set_camera(-1, 0)
/*< 90>*/ 	printf("Achter deze deur bevindt zich\nwaarschijnlijk een belangrijke ruimte.")
          }

          void entrypoint_401_13() {
/*< 83>*/ 	start()
/*< 84>*/ 	printf("Attentie, \x0E\x01\x12\x04\x00\x01meester.")
/*< 95>*/ 	set_camera(9, 0)
/*< 93>*/ 	printf("Ik neem de aanwezigheid van iets\nkwaadaardigs waar aan de andere kant\nvan deze deur.")
/*< 96>*/ 	set_camera(-1, 0)
/*< 94>*/ 	printf("Ik acht het 90% zeker dat het om het\nlichaam van het monster gaat dat het\nschip aanvalt.\n\nMijn advies is om u goed voor te bereiden\nvoordat u naar buiten gaat.")
          }

          void entrypoint_401_14() {
/*< 85>*/ 	start()
/*<154>*/ 	set_camera(17, 0)
/*<155>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 151, 'param3': 6}
/*<151>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 152, 'param3': 51}
/*<152>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 86, 'param3': 16}
/*< 86>*/ 	printf("\x0E\x01\x12\x04\x00\x01Meester, ik heb belangrijke informatie\nvoor u. Ik acht het 90% zeker dat dat\neen <pling><r<chronokristal>> is.\n\nAls u het <g<op krachtige wijze in beroering\nweet te brengen>>, kan dat invloed hebben\nop het schip.")
/*<153>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 156, 'param3': 36}
/*<156>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 42}
          }

          void entrypoint_401_15() {
/*< 87>*/ 	start()
/*<147>*/ 	set_camera(16, 0)
/*<148>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 149, 'param3': 51}
/*<149>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 88, 'param3': 16}
/*< 88>*/ 	printf("\x0E\x01\x12\x04\x00\x01Meester, ik acht het 99% zeker dat deze\nmechanische levensvorm de <b<piraat>> is waar\nde kapitein het over had.\n\nHet feit dat het al deze jaren functioneel\nis gebleven is wonderbaarlijk.")
/*<150>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_401_16() {
/*<136>*/ 	start()
/*<137>*/ 	set_camera(14, 0)
/*<140>*/ 	{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 0, 'next': 141, 'param3': 51}
/*<141>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 132, 'param3': 16}
/*<132>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMeester, ik heb informatie over de boog\ndie u zojuist heeft verkregen.\n\n\nDankzij de elasticiteit van het koord kunt\nu pijlen <g<over een grote afstand schieten\nom doelwitten te raken>>.\n\nVoor informatie over het gebruik van uw\nboog drukt u eerst op \x0E\x02\x04\x02\x29CD en vervolgens\nop \x0E\x02\x04\x02\x13CD.\x0E\x01\x11\x02\xFCD\x0E\x01\x11\x02\xBCD")
/*<164>*/ 	set_camera(19, 0)
/*<163>*/ 	printf("Het is ook mogelijk om met pijlen\n<r<bepaalde mechanismes >>te activeren.")
/*<135>*/ 	set_camera(13, 0)
/*<133>*/ 	printf("Zo'n <r<mechanisme>> heb ik waargenomen op\nhet <b<<pling>dek>>.")
/*<134>*/ 	set_camera(15, 0)
/*<131>*/ 	printf("Het is helaas moeilijk om er vanaf hier\nbij te komen, dus mijn advies is om terug\nte keren naar het dek.")
/*<142>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_401_17() {
/*<157>*/ 	start()
/*<158>*/ 	printf("\x0E\x01\x12\x04\x00\x01Attentie boven u, meester.")
/*<161>*/ 	set_camera(18, 0)
/*<160>*/ 	printf("Het chronokristal is zichtbaar door de\nventilatieschacht in het dek.")
/*<162>*/ 	set_camera(-1, 0)
/*<159>*/ 	scene_flags[18 'Lanayru: Sandship'][56 /* 0x6 01 */] = true;
          }

