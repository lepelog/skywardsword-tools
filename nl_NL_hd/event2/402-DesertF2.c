          void entrypoint_402_17() {
/*< 38>*/ 	start()
/*< 39>*/ 	printf("Dit is echt zo eng als ik had verwacht,\nvrrm<pause05>.<pause05>.<pause05>.\n\n\n\x0E\x01\x09\x04\x07\x00Maar als je er goed over nadenkt, zijn ze\nwaarschijnlijk toch allemaal allang dood,\nbrrzrrt!\n\n\x0E\x01\x09\x04\x07\x00Zonder het chronokristal van mijn boot zou ik\nbijvoorbeeld ook niet zo energiek zijn,\nvwwoep!\n\n\x0E\x01\x09\x04\x07\x00Dus ik hoef me nergens zorgen om te\nmaken, vrrm! Bij die gedachte voel ik me\nal wat beter. \x0E\x03\x01\x00Link, het wordt\ntijd dat je mijn schip gaat vinden, zrt!\n\x0E\x01\x09\x04\x07\x00Ik wacht hier wel op je, bzzt.")
/*< 51>*/ 	story_flags[280 /* us: 805A9AFB 0x04, jp: 805ACD7B 0x04 */] = true;
/*< 85>*/ 	scene_flags[8 'Lanayru Sand Sea'][47 /* 0x4 80 */] = true;
          }

          void entrypoint_402_51() {
/*<116>*/ 	start()
/*<121>*/ 	printf("Naar de werf")
          }

          void entrypoint_402_18() {
/*< 74>*/ 	start()
/*<147>*/ 	printf("\x0E\x01\x12\x04\x00\x0BIk heb informatie voor u, meester. Uw\nattentie, alstublieft.")
/*<167>*/ 	set_camera(3, 0)
/*<148>*/ 	printf("Ik acht het 60% zeker dat deze masten en\nzeilen behoren tot het schip dat <r<Nayru's\nvlam>> bevat.")
/*<168>*/ 	set_camera(-1, 0)
/*< 75>*/ 	printf("U kunt nu <r<detectie>> gebruiken om het schip\nte zoeken dat <r<<pling>Nayru's vlam>> bevat.")
/*< 76>*/ 	story_flags[275 /* us: 805A9AF8 0x20, jp: 805ACD78 0x20 */] = true;
/*< 80>*/ 	story_flags[271 /* us: 805A9AF8 0x02, jp: 805ACD78 0x02 */] = true;
/*<279>*/ 	open_dowsing_wheel(7)
/*<278>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<149>*/ 	scene_flags[8 'Lanayru Sand Sea'][112 /* 0xF 01 */] = true;
/*<201>*/ 	story_flags[647 /* us: 805A9B1C 0x01, jp: 805ACD9C 0x01 */] = true;
          }

          void entrypoint_402_52() {
/*<117>*/ 	start()
/*<123>*/ 	printf("Ga naar de mijnwagen en druk\nop (A) om in te stappen.")
          }

          void entrypoint_402_01() {
/*<  1>*/ 	start()
          	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_402_19() {
/*< 77>*/ 	start()
/*<272>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMeester, het lijkt erop dat monsters zich\nhier hebben gevestigd sinds de fabriek in\nonbruik is geraakt.\n\nIk heb mijn inschatting bijgesteld en de\nkans om hier een aanwijzing te vinden\nlijkt nu extreem laag te zijn.")
/*< 79>*/ 	story_flags[270 /* us: 805A9AF8 0x01, jp: 805ACD78 0x01 */] = true;
/*<239>*/ 	story_flags[741 /* us: 805A9B26 0x20, jp: 805ACDA6 0x20 */] = true;
          }

          void entrypoint_402_53() {
/*<118>*/ 	start()
/*<122>*/ 	printf("Gebruik je lichaam om het\ngewicht van de mijnwagen in\nbochten in balans te houden.")
          }

          void entrypoint_402_70() {
/*<245>*/ 	start()
/*<250>*/ 	printf("Beste kapitein,\nbedankt voor alles, zrrt!\nHoogachtend,\nde bemanning, vrrrrrm.")
          }

          void entrypoint_402_02() {
/*<  2>*/ 	start()
/*< 21>*/ 	switch (story_flags[264 /* us: 805A9AF9 0x04, jp: 805ACD79 0x04 */]) {
          	  case 0:
/*< 22>*/ 		switch (story_flags[273 /* us: 805A9AF8 0x08, jp: 805ACD78 0x08 */]) {
          		  case 0:
/*<220>*/ 			switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          			  case 0:
/*<221>*/ 				switch (zone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<223>*/ 					printf("Laten we snel gaan, vrrm! Je bent toch op\nzoek naar iemand, brrzt?\n\n\nOf wil je ergens anders heen?\n[1]Ik wil varen![2]Naar de Zandvaarder![3-]Laat maar.")
          					flw_263:
/*<263>*/ 					switch (choice(3)) {
          					  case 0:
/*<264>*/ 						printf("\x0E\x01\x09\x04\x07\x00Mooi! Daar gaan we dan, vrrrrm!")
/*<267>*/ 						changeScene(2, 0) // 
          					  case 1:
/*<265>*/ 						printf("\x0E\x01\x09\x04\x07\x00Goed, ik zal je naar mijn schip brengen,\nvrrm!")
/*<266>*/ 						changeScene(4, 0) // 
          					  case 2:
/*<268>*/ 						printf("\x0E\x01\x09\x04\x07\x00Kom me gerust nog eens opzoeken, vrrm!")
          					}
          				  case 1:
/*<281>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*<280>*/ 						switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          						  case 0:
          							flw_222:
/*<222>*/ 							printf("Je hebt het gehaald, zrrt! Heb je die\npersoon gevonden die je zocht, phaweep?\n\n\nAls je wilt, kunnen we een eindje gaan\nvaren, brrzrrt.\n[1]Ik wil varen![2]Naar de Zandvaarder![3-]Laat maar.")
          							goto flw_263
          						  case 1:
/*<292>*/ 							switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          							  case 0:
          								flw_282:
/*<282>*/ 								printf("Ben je op zoek naar een drakengod, vrrm?\n\n\n\n\x0E\x01\x09\x04\x07\x00Als je <b<meester Donderdraak >>zoekt, moet je\nten zuiden van de <b<Lanayru-grotten >>zijn,\nbzzt. Andere drakengoden ken ik niet,\nbrrzrrt.\n\x0E\x01\x09\x04\x07\x00Als je wilt, kunnen we ook een eindje gaan\nvaren.\n[1]Ik wil varen![2]Naar de Zandvaarder![3-]Laat maar.")
          								goto flw_263
          							  case 1:
/*<293>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 294, 'param3': 31}
/*<294>*/ 								story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          								goto flw_282
          							}
          						}
          					  case 1:
          						goto flw_222
          					}
          				}
          			  case 1:
          				flw_150:
/*<150>*/ 				switch (story_flags[272 /* us: 805A9AF8 0x04, jp: 805ACD78 0x04 */]) {
          				  case 0:
/*< 27>*/ 					printf("\x0E\x01\x09\x04\x07\x00Zin om de wilde baren op te gaan, brrzt?\n[1]Ik wil varen.[2]Naar de Zandvaarder.[3-]Laat maar.")
/*< 28>*/ 					switch (choice(3)) {
          					  case 0:
/*< 29>*/ 						printf("\x0E\x01\x09\x04\x07\x00Mooi! Daar gaan we dan, vrrrrm!")
/*< 33>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 31>*/ 						printf("\x0E\x01\x09\x04\x07\x00Goed, ik zal je naar mijn schip brengen,\nvrrm!")
/*< 32>*/ 						changeScene(0, 0) // 
          					  case 2:
/*< 30>*/ 						printf("\x0E\x01\x09\x04\x07\x00Laten we dan voortmaken, bzzt!")
          					}
          				  case 1:
/*<155>*/ 					printf("\x0E\x01\x09\x04\x07\x00Zullen we de wilde baren op gaan, vrrm?\n[1]Ja, varen maar![2-]Wacht...")
/*<154>*/ 					switch (choice(2)) {
          					  case 0:
/*<151>*/ 						printf("\x0E\x01\x09\x04\x07\x00Mooi! Daar gaan we dan, vrrrrm!")
/*<153>*/ 						changeScene(2, 0) // 
          					  case 1:
/*<152>*/ 						printf("\x0E\x01\x09\x04\x07\x00Laten we dan voortmaken, bzzt!")
          					}
          				}
          			}
          		  case 1:
/*<135>*/ 			printf("Wat is dat nou, vwwoep?\nBen je van gedachten veranderd?\n\n\nWil je me toch helpen om mijn schip terug\nte krijgen, bzztzzz?\n[1]Ik help je![2-]Nee, doei.")
          			flw_134:
/*<134>*/ 			switch (choice(2)) {
          			  case 0:
/*< 26>*/ 				printf("\x0E\x01\x09\x04\x07\x00Meen je dat serieus, vrrm? Nou, in dat\ngeval, bzzt...")
/*< 25>*/ 				printf("Hmm<pause0A>.<pause0A>.<pause0A>. Er is iets raars aan die kaart van\njou... vrrm.\n\n\n\x0E\x01\x09\x04\x07\x00Je kunt je niet op de open zee wagen\nzonder een fatsoenlijke <y<zeekaart>>, zzwiep!\n\n\nEr ligt een <y<zeekaart>><b< in mijn huis>>, bzzzt.\nStap dus in deze boot, dan gaan we op weg\nnaar <b<Huize Kapbot>>!")
/*< 24>*/ 				story_flags[273 /* us: 805A9AF8 0x08, jp: 805ACD78 0x08 */] = true;
          				goto flw_150
          			  case 1:
/*<133>*/ 				printf("\x0E\x01\x09\x04\x07\x00Dan laat ik je niet aan boord, brrt!\n\n\n\nEn denk maar niet dat je ergens komt\nzonder deze sloep, vwwiep!")
          			}
          		}
          	  case 1:
/*< 23>*/ 		story_flags[264 /* us: 805A9AF9 0x04, jp: 805ACD79 0x04 */] = true;
/*<  3>*/ 		printf("Hmm<pause0A>.<pause0A>.<pause0A>. Wie ben jij, bzzt? Een of ander\nmens, vrrrm?\n\n\nWie ik ben, brrzrrt?\n\n\n\n\x0E\x01\x09\x04\x07\x00<pling>Ik ben de trotse kapitein van het schip dat\n<r<Nayru's vlam>> beschermt, vwwiep!\n[1]Nayru's vlam?[2]Wat voor schip?")
/*<208>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_212:
/*<212>*/ 			set_camera(13, 0)
/*<210>*/ 			printf("<pause0A>.<pause0A>.<pause0A>.\n\n\n\nEr was een enorme storm<pause05>.<pause05>.<pause05>.\nMijn bemanning en ik waren zoals\ngewoonlijk op de zandzee, vrrm...\n\n...toen die woestelingen, bzzt<pause05>.<pause05>.<pause05>. die piraten,\nons plotseling overvielen, brrzt.\n\n\nHet was ze om <r<Nayru's vlam>> te doen, zzpt.\nMijn bemanning is gevangen gezet... vrrrt...\nen ik ben in zee gegooid!")
/*<213>*/ 			set_camera(14, 0)
/*<211>*/ 			printf("\x0E\x01\x09\x04\x07\x00Via de stroming ben ik in deze haven\nbeland, vrrrrm<pause05>.<pause05>.<pause05>.")
/*<269>*/ 			set_camera(17, 0)
/*<270>*/ 			printf("\x0E\x01\x09\x04\x07\x00Daarna ben ik met dit bootje op zoek\ngegaan naar mijn schip en mijn\nbemanning, maar die zijn nergens te\nbekennen, bzzt.")
/*<218>*/ 			set_camera(-1, 0)
/*<217>*/ 			printf("\x0E\x01\x09\x04\x07\x00De vraag waar mijn schip nu is, spookt\nnog steeds door mijn hoofd, vwwiep.<pause05>.<pause05>.\n\n\nIk verwed mijn hoed erom dat ze het schip\nonzichtbaar hebben gemaakt, vrrm! Ik kan\nhet nergens vinden.\n[1]Waarom niet?[2]Onzichtbaar?")
/*<216>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_209:
/*<209>*/ 				printf("\x0E\x01\x09\x04\x07\x00Om <r<Nayru's vlam>> te beschermen heeft het\nschip een functie die het onzichtbaar kan\nmaken, vwwiep<pause05>.<pause05>.<pause05>.\n\nDus... jij hebt <r<Nayru's vlam >>nodig om\niemand te vinden die je dierbaar is,\nvrrrm<pause05>.<pause05>.<pause05>.\n\n\x0E\x01\x09\x04\x07\x00In dat geval moet je me helpen om mijn\nschip en mijn bemanning te vinden,\nvwwoep!")
/*<214>*/ 				set_camera(15, 0)
/*<207>*/ 				printf("Als je me wilt helpen, vzzzt, mag je mijn\nboot gebruiken.\n[1]Ik help je![2-]Nee, doei.")
/*<215>*/ 				set_camera(-1, 0)
          				goto flw_134
          			  case 1:
          				goto flw_209
          			}
          		  case 1:
          			goto flw_212
          		}
          	}
          }

          void entrypoint_401_20() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf("")
          }

          void entrypoint_402_54() {
/*<119>*/ 	start()
/*<124>*/ 	printf("Als je te snel gaat, kun je\nafremmen met (B).")
          }

          void entrypoint_402_71() {
/*<246>*/ 	start()
/*<251>*/ 	printf("Lieve papa,\nSucces op je werk, vrrm!")
          }

          void entrypoint_402_03() {
/*< 12>*/ 	start()
/*< 14>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_402_55() {
/*<145>*/ 	start()
/*<146>*/ 	printf("Spring omhoog om over\nobstakels te springen.")
          }

          void entrypoint_402_72() {
/*<254>*/ 	start()
/*<255>*/ 	printf("Naar de pier")
          }

          void entrypoint_402_04() {
/*< 13>*/ 	start()
/*< 41>*/ 	switch (story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */]) {
          	  case 0:
/*< 42>*/ 		switch (story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */]) {
          		  case 0:
/*<284>*/ 			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          			  case 0:
/*<283>*/ 				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          				  case 0:
          					flw_44:
/*< 44>*/ 					printf("Mijn familie en ik hebben vele mooie\nherinneringen aan dat huis, vrrm.\n\n\nIk vraag me af wanneer ik er weer kan\nwonen, zrrt. Ik mis mijn familie, weet je,\nvwwiep.<pause05>.<pause05>.")
          					flw_46:
/*< 46>*/ 					printf("\x0E\x01\x09\x04\x07\x00Zullen we de wilde baren op gaan, vrrt?\n[1]Ik wil varen![2-]Nog niet.")
          					flw_47:
/*< 47>*/ 					switch (choice(2)) {
          					  case 0:
/*< 49>*/ 						printf("\x0E\x01\x09\x04\x07\x00Hijs het anker, zrrm!")
/*< 50>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 48>*/ 						printf("\x0E\x01\x09\x04\x07\x00Oké, vwwiep...")
          					}
          				  case 1:
/*<295>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_285:
/*<285>*/ 						printf("Dus je zoekt een drakengod, vrrm?\n\n\n\n\x0E\x01\x09\x04\x07\x00Als je <b<meester Donderdraak >>zoekt, moet je\nten zuiden van de <b<Lanayru-grotten>> zijn,\nbzzt. Andere drakengoden ken ik niet,\nbrrzrrt.")
          						goto flw_46
          					  case 1:
/*<296>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 297, 'param3': 31}
/*<297>*/ 						story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          						goto flw_285
          					}
          				}
          			  case 1:
          				goto flw_44
          			}
          		  case 1:
/*< 43>*/ 			printf("Je hebt de <y<zeekaart>>, vrrm! Nu kunnen we\nons verder de zee op wagen, zrrt!\n\n\nVwwiep! Laten we mijn schip gaan\nzoeken!")
/*< 45>*/ 			story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */] = true;
          			goto flw_46
          		}
          	  case 1:
/*< 15>*/ 		printf("Waar wacht je nog op, zrrt? Ga snel die\n<y<zeekaart>> halen in mijn oude huis, vrrm!\n\n\nOf wil je eerst de zee weer op?\n[1]Ik wil varen.[2-]Laat maar.")
          		goto flw_47
          	}
          }

          void entrypoint_402_21() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf("\x0E\x01\x12\x04\x00dZag je dat, vwwoep? Dat is mijn schip,\nvrrm!\n\n\nSnel erachteraan, bzzt! En blijf erop\nschieten met het kanon, zrrt!")
          }

          void entrypoint_402_56() {
/*<143>*/ 	start()
/*<144>*/ 	printf("Laatste halte: werf")
          }

          void entrypoint_402_05() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf("Bedankt dat je me mijn schip terug hebt\ngegeven, vrrm.\n\n\n\x0E\x01\x09\x04\x07\x00Het is weliswaar half vernield, maar mijn\nbemanning en ik hebben het binnen een\nmum van tijd weer opgelapt, vrrt.\n\n\x0E\x01\x09\x04\x07\x00Ik wens je veel geluk bij het vinden van die\npersoon die je zoekt, vwwiep!\n\n\n\x0E\x01\x09\x04\x07\x00Kom gerust nog eens langs. Je bent altijd\nwelkom, vwwoep!")
/*<137>*/ 	story_flags[815 /* us: 805A9B31 0x80, jp: 805ACDB1 0x80 */] = true;
/*<219>*/ 	zone_temp_flags[1 /* 0x1 02 */] = true;
          }

          void entrypoint_402_22() {
/*< 94>*/ 	start()
/*< 97>*/ 	printf("Open de <y<zeekaart>> die je hebt meegebracht,\nzrrt!")
/*<105>*/ 	{'type': 'type3', 'subType': 4, 'param1': 768, 'param2': 6, 'next': 192, 'param3': 30}
/*<192>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 102, 'param3': 6}
/*<102>*/ 	story_flags[519 /* us: 805A9B15 0x01, jp: 805ACD95 0x01 */] = true;
/*<100>*/ 	printf("De <b<<pling>scheepswerf >>is hier, vrrt. Ik zal de\nlocatie voor je markeren met \x0E\x02\x04\x02\x19CD, vwwiep.")
/*<107>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 34}
/*<142>*/ 	printf("\x0E\x01\x09\x04\x07\x00Op de scheepswerf bouwden we vroeger\nonze schepen, vrrt. Mijn schip is daar ook\ngebouwd, vwwiep!\n\n\x0E\x01\x09\x04\x07\x00Als we daar een kijkje nemen, vinden we\nmisschien informatie over waar mijn schip\nnu is, brrzrrt!")
/*<110>*/ 	printf("\x0E\x01\x09\x04\x07\x00Oké! Varen maar, vrrm!")
/*<112>*/ 	scene_flags[8 'Lanayru Sand Sea'][30 /* 0x2 40 */] = false;
/*<113>*/ 	scene_flags[8 'Lanayru Sand Sea'][31 /* 0x2 80 */] = true;
/*<259>*/ 	story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */] = true;
          }

          void entrypoint_402_57() {
/*<242>*/ 	start()
/*<247>*/ 	printf("Waarschuw je medewerkers op\ntijd en geef piraten geen kans om\naan te vallen, zrrt!")
          }

          void entrypoint_402_23() {
/*< 95>*/ 	start()
/*<256>*/ 	switch (story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */]) {
          	  case 0:
/*< 98>*/ 		printf("Dit kan best eng worden, vwwiep<pause05>.<pause05>.<pause05>.\n\n\n\nDe kapitein van de piraten is een\nmechanische maniak, zrrt! En zijn\nbemanningsleden zijn ook geen lieverdjes,\nvrrm!\n\x0E\x01\x09\x04\x07\x00Ik hoopte dat ik die lelijkerd nooit meer\nmet mijn visuele receptoren waar hoefde te\nnemen, brrzrrt. Maar<pause05>.<pause05>.<pause05>.\n\n\x0E\x01\x09\x04\x07\x00...als we mijn schip terug willen krijgen,\nhebben we geen keuze, vwwiep!")
          		flw_106:
/*<106>*/ 		{'type': 'type3', 'subType': 4, 'param1': 512, 'param2': 0, 'next': 101, 'param3': 30}
/*<101>*/ 		printf("Het <pling><b<piratennest >>is hier bij het \x0E\x02\x04\x02\x19CD-teken,\nzrrt.")
/*<108>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 109, 'param3': 34}
/*<109>*/ 		printf("\x0E\x01\x09\x04\x07\x00Goed, trek je stoute voortbeweegonderdelen\naan en ga op onderzoek uit, vwwoep!")
/*<103>*/ 		story_flags[520 /* us: 805A9B15 0x02, jp: 805ACD95 0x02 */] = true;
/*<114>*/ 		scene_flags[8 'Lanayru Sand Sea'][31 /* 0x2 80 */] = false;
          	  case 1:
/*<258>*/ 		printf("\x0E\x01\x09\x04\x07\x00Dus mijn schip is niet hier, zrrt? Dan is er\nnog maar één plek om naar aanwijzingen\nte zoeken, vrrm<pause05>.<pause05>.<pause05>.\n\n\x0E\x01\x09\x04\x07\x00Brrzrrt. Dit kan eng worden, maar...\nwe moeten naar het piratennest van die\nzandschuimers die mijn schip hebben\ngejat, vwwiep!\n\x0E\x01\x09\x04\x07\x00De kapitein van de piraten is een\nmechanische maniak, zrrt! En zijn\nbemanningsleden zijn ook geen lieverdjes,\nvrrm!\n\x0E\x01\x09\x04\x07\x00Ik hoopte dat ik die lelijkerd nooit meer\nmet mijn visuele receptoren hoefde te\nzien, brrzrrt. Maar<pause05>.<pause05>.<pause05>.\n\n\x0E\x01\x09\x04\x07\x00...als we mijn schip terug willen krijgen,\nhebben we geen keuze, vwwiep!")
/*<257>*/ 		story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */] = true;
          		goto flw_106
          	}
          }

          void entrypoint_402_40() {
/*<169>*/ 	start()
/*<170>*/ 	printf("\x0E\x01\x12\x04\x00\x01Attentie, meester.")
/*<178>*/ 	set_camera(8, 0)
/*<171>*/ 	printf("Dit object staat bekend als een <y<<pling>chronobol>>.\n\n\n\nMijn aanname is dat deze bol, in\ntegenstelling tot de kristallen, ontworpen\nis voor gebruik op verschillende locaties\nen daarom meegenomen kan worden.")
/*<179>*/ 	set_camera(-1, 0)
          }

          void entrypoint_402_58() {
/*<243>*/ 	start()
/*<248>*/ 	printf("Aan het eind van de maand zal\nde baan tijdelijk buiten gebruik\nzijn voor een inspectie.")
          }

          void entrypoint_402_24() {
/*< 96>*/ 	start()
/*<261>*/ 	switch (story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */]) {
          	  case 0:
          		flw_99:
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x07\x00Vraag je je af hoe we deze grote zee gaan\nverkennen, vrrm?\n\n\n\x0E\x01\x09\x04\x07\x00Dat werk laat ik aan jou over, brrzrrt!\nDus varen maar, vwwiep!\n\n\n\x0E\x01\x09\x04\x07\x00Het schip is waarschijnlijk onzichtbaar.\nMaar <pling><g<als we het aanvallen>>, zien we er\nmisschien een glimp van, zrrt!")
/*<104>*/ 		story_flags[521 /* us: 805A9B15 0x04, jp: 805ACD95 0x04 */] = true;
/*<260>*/ 		story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */] = true;
          	  case 1:
/*<262>*/ 		printf("Bij het piratennest is mijn schip dus ook\nniet, vrrm<pause05>.<pause05>.<pause05>.\n\n\nWat zeg je, bzzt? Heb je een aanwijzing\ngevonden?\n\n\n\x0E\x01\x09\x04\x07\x00Je weet waar we heen moeten? Via een\nsoort <r<detectiemethode>>, vrrm? Dat is\nfantastisch, vwwoep!")
          		goto flw_99
          	}
          }

          void entrypoint_402_41() {
/*<172>*/ 	start()
/*<173>*/ 	printf("\x0E\x01\x12\x04\x00\x01Meester, kijk daar.")
/*<176>*/ 	set_camera(9, 0)
/*<174>*/ 	printf("Dit is het schip dat Nayru's vlam bevat. Ik\nacht het 90% zeker dat deze mechanische\nlevensvormen bemanningsleden zijn.")
/*<177>*/ 	set_camera(-1, 0)
/*<175>*/ 	printf("Deze afbeelding duidt erop dat de kapitein\nen zijn bemanning samen een gelukkige\ntijd hebben doorgebracht.")
/*<237>*/ 	story_flags[738 /* us: 805A9B26 0x04, jp: 805ACDA6 0x04 */] = true;
/*<238>*/ 	story_flags[739 /* us: 805A9B26 0x08, jp: 805ACDA6 0x08 */] = true;
          }

          void entrypoint_402_59() {
/*<244>*/ 	start()
/*<249>*/ 	printf("Ik hoop dat de blauwdrukken\nvoor mijn schip snel klaar zullen\nzijn.")
          }

          void entrypoint_402_42() {
/*<180>*/ 	start()
/*<181>*/ 	printf("\x0E\x01\x12\x04\x00\x01Attentie, meester.")
/*<190>*/ 	set_camera(10, 0)
/*<186>*/ 	printf("Deze machine ziet eruit alsof er een\n<r<chronokristal >>in past. Op het moment\nontbreekt die echter.\n\nIk acht het 95% zeker dat dit dezelfde\nsoort machine is als wat we in de <b<Lanayru-\nmijn>> zijn tegengekomen.")
/*<191>*/ 	set_camera(-1, 0)
/*<187>*/ 	printf("Informatie wijst erop dat in dit gebouw\n<pling><r<chronokristallen >>als energiebron werden\ngebruikt.")
          }

          void entrypoint_402_25() {
/*<252>*/ 	start()
/*<253>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_402_09() {
/*<  4>*/ 	start()
/*<  6>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_402_60() {
/*<125>*/ 	start()
/*<128>*/ 	printf("\x0E\x01\x05\x04\x0F\x00Attentie, \x0E\x01\x12\x04\x00\x0Bmeester.\n\n\n\n\x0E\x01\x05\x04<\x00Dit is de <b<Lanayru-zandzee>>. Dit gebied was\nooit een enorme oceaan.")
          }

          void entrypoint_402_43() {
/*<182>*/ 	start()
/*<183>*/ 	printf("\x0E\x01\x12\x04\x00\x01Meester, we zijn aangekomen op de\nbouwplaats van de scheepswerf.")
/*<188>*/ 	set_camera(11, 0)
/*<184>*/ 	printf("In de loop van jaren heeft het zand zich in\ndit gebouw opgehoopt.")
/*<189>*/ 	set_camera(-1, 0)
/*<185>*/ 	printf("Mijn advies is om het zand te doorzoeken\nvoor een aanwijzing naar de locatie van het\nschip.")
          }

          void entrypoint_402_61() {
/*<126>*/ 	start()
/*<129>*/ 	printf("\x0E\x01\x05\x04Z\x00Het water is inmiddels verdampt en het\nenige wat over is, is een zee van zand.")
          }

          void entrypoint_402_44() {
/*<224>*/ 	start()
/*<230>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 232, 'param3': 51}
/*<232>*/ 	set_camera(-1, 0)
/*<229>*/ 	printf("\x0E\x01\x12\x04\x00\x01Mijn advies is om onze missie te voltooien\nalvorens een pauze te nemen. Ons doel is\nmomenteel om de zeekaart te vinden.")
/*<233>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 235, 'param3': 36}
/*<235>*/ 	story_flags[738 /* us: 805A9B26 0x04, jp: 805ACDA6 0x04 */] = true;
          }

          void entrypoint_402_10() {
/*<  5>*/ 	start()
/*< 64>*/ 	switch (story_flags[270 /* us: 805A9AF8 0x01, jp: 805ACD78 0x01 */]) {
          	  case 0:
/*<274>*/ 		switch (story_flags[275 /* us: 805A9AF8 0x20, jp: 805ACD78 0x20 */]) {
          		  case 0:
/*<287>*/ 			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          			  case 0:
/*<286>*/ 				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          				  case 0:
          					flw_275:
/*<275>*/ 					printf("Ik herinner me nog toen mijn schip hier\nnet af was, vrrm. Ik was zo gelukkig,\nvvvwwwww.<pause05>.<pause05>.")
          					flw_67:
/*< 67>*/ 					printf("\x0E\x01\x09\x04\x07\x00Zullen we de wilde baren op gaan, vrrt?\n[1]Ik wil varen![2-]Nog niet.")
          					flw_68:
/*< 68>*/ 					switch (choice(2)) {
          					  case 0:
/*< 70>*/ 						printf("\x0E\x01\x09\x04\x07\x00Hijs het anker, zrrm!")
/*< 71>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 69>*/ 						printf("\x0E\x01\x09\x04\x07\x00Oké, vwwiep...")
          					}
          				  case 1:
/*<301>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_288:
/*<288>*/ 						printf("Dus je zoekt een drakengod, vrrm?\n\n\n\n\x0E\x01\x09\x04\x07\x00Als je <b<meester Donderdraak >>zoekt, moet je\nten zuiden van de <b<Lanayru-grotten>> zijn,\nbzzt. Andere drakengoden ken ik niet,\nbrrzrrt.")
          						goto flw_67
          					  case 1:
/*<302>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 303, 'param3': 31}
/*<303>*/ 						story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          						goto flw_288
          					}
          				}
          			  case 1:
          				goto flw_275
          			}
          		  case 1:
/*< 65>*/ 			switch (story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */]) {
          			  case 0:
/*< 73>*/ 				printf("Bereid je voor, brrzrrt! We naderen het\n<b<piratennest>>, vwwiep!")
          				goto flw_67
          			  case 1:
/*< 66>*/ 				story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */] = true;
/*< 72>*/ 				printf("\x0E\x01\x09\x04\x07\x00Dus mijn schip is niet hier, zrrt? Dan is er\nnog maar één plek om naar aanwijzingen\nte zoeken, vrrm<pause05>.<pause05>.<pause05>.\n\n\x0E\x01\x09\x04\x07\x00Brrzrrt. Dit kan eng worden, maar...\nwe moeten naar het piratennest van die\nzeeschuimers die mijn schip hebben gejat,\nvwwiep!\n\x0E\x01\x09\x04\x07\x00Dus laten we geen tijd verspillen, vrrm!\n[1]Daar gaan we![2-]Wacht.")
          				goto flw_68
          			}
          		}
          	  case 1:
/*< 11>*/ 		printf("Waar wacht je nog op, zrrt? Haast je en\nga op zoek naar aanwijzingen in de\n<b<scheepswerf>>, vrrm!\n\n\x0E\x01\x09\x04\x07\x00Of wil je eerst weer even de zee op?\n[1]Ik wil varen![2-]Laat maar.")
          		goto flw_68
          	}
          }

          void entrypoint_402_62() {
/*<127>*/ 	start()
/*<130>*/ 	printf("\x0E\x01\x05\x04Z\x00Mijn gegevens wijzen erop dat dit een\nhaven is, die het land met de zee verbindt.")
          }

          void entrypoint_402_45() {
/*<225>*/ 	start()
/*<231>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 226, 'param3': 51}
/*<226>*/ 	printf("Attentie, \x0E\x01\x12\x04\x00\x0Bmeester.")
/*<228>*/ 	set_camera(16, 0)
/*<227>*/ 	printf("Ik neem een grote hoeveelheid geleed-\npotigen waar boven in dit huis.")
/*<234>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 236, 'param3': 36}
/*<236>*/ 	story_flags[740 /* us: 805A9B26 0x10, jp: 805ACDA6 0x10 */] = true;
          }

          void entrypoint_402_11() {
/*<  7>*/ 	start()
/*< 91>*/ 	switch (story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */]) {
          	  case 0:
/*< 90>*/ 		printf("\x0E\x01\x12\x04\x00dDat is het nest van die valse piraten,\nvwwiep!\n\n\nZrrrt! Het is hier gevaarlijk, dus we beter\nwegblijven. Eerst maar eens naar de\n<b<scheepswerf>>, vrrm!")
          	  case 1:
/*<  8>*/ 		printf("\x0E\x01\x12\x04\x00dOpgelet! Het is hier gevaarlijk. We moeten\neerst naar <b<Huize Kapbot>>, vwwoep!")
          	}
          }

          void entrypoint_402_63() {
/*<131>*/ 	start()
/*<132>*/ 	printf("\x0E\x01\x05\x04<\x00In dit gebied werd gebruik gemaakt van\neen nieuwe vorm van energie. Ik acht het\n90% zeker dat de<r< heilige vlam >>zich\nverderop bevindt.\n\x0E\x01\x05\x04\x1E\x00Mijn advies is om op verkenning te gaan\nop de zandzee.")
          }

          void entrypoint_402_46() {
/*<240>*/ 	start()
/*<241>*/ 	printf("Attentie, \x0E\x01\x12\x04\x00\x0Bmeester. De kracht van het\nchronokristal lijkt dit gebouw veranderd te\nhebben.\n\nMijn advies is om de situatie buiten te\nonderzoeken.")
          }

          void entrypoint_402_12() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("Van de zilte zeelucht gaan mijn netwerken\nzoemen, vrrm! Het voelt goed om weer op\nzee te zijn, brrzrrt. Eens zien of ik nog\nweet hoe je deze schuit bestuurt, vrroem.\n\x0E\x01\x09\x04\x07\x00Druk op \x0E\x02\x04\x02\x8CD om vooruit te komen, zrrt.\nAls je op (B) drukt, zal de boot versnellen,\nvrrm!\x0E\x01\x11\x02\x1CD\n\nDruk op \x0E\x02\x04\x02\x29CD om het kanon te activeren,\nvwwiep. Druk daarna opnieuw op \x0E\x02\x04\x02\x29CD om\nte schieten, zrrt!\x0E\x01\x11\x02\xFCD")
/*< 87>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 136, 'param3': 30}
/*<136>*/ 	printf("Ik heb het eiland waar mijn huis staat,\ngemarkeerd met een \x0E\x02\x04\x02\x19CD, vrrm!\n\n\nHet eiland heeft een <r<pier>> waar we aan\nkunnen leggen, brrzrrt!")
/*< 89>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 88, 'param3': 34}
/*< 88>*/ 	printf("\x0E\x01\x09\x04\x07\x00Goed, daar gaan we, vrrm!")
/*< 83>*/ 	story_flags[499 /* us: 805A9B12 0x02, jp: 805ACD92 0x02 */] = true;
/*<111>*/ 	scene_flags[8 'Lanayru Sand Sea'][30 /* 0x2 40 */] = true;
          }

          void entrypoint_402_13() {
/*< 16>*/ 	start()
/*< 18>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_402_30() {
/*<271>*/ 	start()
/*< 78>*/ 	printf("\x0E\x01\x12\x04\x00\x0BAttentie, meester. Er is een kans van 0%\ndat het schip hier gevonden kan worden.\n\n\nVanwege deze onmogelijkheid, raad ik u\naan om de scheepskapitein in te lichten en\ndit eiland te verlaten.")
/*<273>*/ 	scene_flags[8 'Lanayru Sand Sea'][89 /* 0xA 02 */] = true;
          }

          void entrypoint_402_14() {
/*< 17>*/ 	start()
/*< 53>*/ 	switch (story_flags[275 /* us: 805A9AF8 0x20, jp: 805ACD78 0x20 */]) {
          	  case 0:
/*<276>*/ 		switch (story_flags[272 /* us: 805A9AF8 0x04, jp: 805ACD78 0x04 */]) {
          		  case 0:
/*<290>*/ 			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          			  case 0:
/*<289>*/ 				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          				  case 0:
          					flw_277:
/*<277>*/ 					printf("Brrzrrrt... Ik heb nog steeds nachtmerries\nover mijn schip en die piraten, vrrm. Ik\nwas zo bang dat ik er haast kortsluiting\nvan kreeg.<pause05>.<pause05>.")
          					flw_56:
/*< 56>*/ 					printf("\x0E\x01\x09\x04\x07\x00Zullen we de wilde baren op gaan, vrrt?\n[1]Ik wil varen![2-]Nog niet.")
          					flw_57:
/*< 57>*/ 					switch (choice(2)) {
          					  case 0:
/*< 59>*/ 						printf("\x0E\x01\x09\x04\x07\x00Hijs het anker, zrrm!")
/*< 60>*/ 						changeScene(0, 0) // 
          					  case 1:
/*< 58>*/ 						printf("\x0E\x01\x09\x04\x07\x00Oké, vwwiep...")
          					}
          				  case 1:
/*<298>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_291:
/*<291>*/ 						printf("Dus je zoekt een drakengod, vrrm?\n\n\n\n\x0E\x01\x09\x04\x07\x00Als je <b<meester Donderdraak >>zoekt, moet je\nten zuiden van de <b<Lanayru-grotten>> zijn,\nbzzt. Andere drakengoden ken ik niet,\nbrrzrrt.")
          						goto flw_56
          					  case 1:
/*<299>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 300, 'param3': 31}
/*<300>*/ 						story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          						goto flw_291
          					}
          				}
          			  case 1:
          				goto flw_277
          			}
          		  case 1:
/*< 54>*/ 			switch (story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */]) {
          			  case 0:
/*< 63>*/ 				printf("We moeten opschieten en mijn schip\nvinden, vrrt!")
          				goto flw_56
          			  case 1:
/*< 62>*/ 				printf("Dus hier is mijn schip ook niet, vrrm<pause05>.<pause05>.<pause05>.\n\n\n\nZrrt? Vwwieeep? Heb je een aanwijzing\ngevonden, brrt?\n\n\n\x0E\x01\x09\x04\x07\x00Je weet waar we heen moeten? Via een\nsoort <r<detectiemethode>>, vrrm? Dat is\nfantastisch, vwwoep!\n\n\x0E\x01\x09\x04\x07\x00Dan zullen we mijn schip deze keer vast en\nzeker vinden, bzzoep!\n\n\n\x0E\x01\x09\x04\x07\x00Klaar om het ruimte sop te kiezen,\nvwwiep?\n[1]Varen maar![2-]Nog niet.")
/*< 55>*/ 				story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */] = true;
          				goto flw_57
          			}
          		}
          	  case 1:
/*<193>*/ 		switch (scene_flags[76 /* 0x8 10 */]) {
          		  case 0:
/*<198>*/ 			switch (scene_flags[88 /* 0xA 01 */]) {
          			  case 0:
/*<197>*/ 				printf("<pling>Er is iets bij de brug in de mond, vwwiep!\n\n\n\nMisschien heeft het met mijn schip te\nmaken, zrrt! Ik zal eens gaan kijken,\nbrzzt!")
/*<202>*/ 				scene_flags[-1 'Skyloft: Silent Realm'][88 /* 0xA 01 */] = true;
          				flw_194:
/*<194>*/ 				printf("\x0E\x01\x09\x04\x07\x00Of wil je eerst weer even de zee op, vrrm?\n[1]Ik wil varen.[2-]Laat maar.")
          				goto flw_57
          			  case 1:
/*<196>*/ 				printf("\x0E\x03\x01\x00Link, vwwiep! Dat was heel\nindrukwekkend!\n\n\nDie grote mond ging ineens open, zrrt! Hoe\nheb je dat voor elkaar gekregen, vrrm?!")
/*<205>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 199, 'param3': 54}
/*<199>*/ 				set_camera(12, 0)
/*<195>*/ 				printf("<pling>Er is iets bij de brug in de mond, vwwiep!\n\n\n\nMisschien heeft het met mijn schip te\nmaken, zrrt! Ik zal eens gaan kijken,\nbrzzt!")
/*<206>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 200, 'param3': 54}
/*<200>*/ 				set_camera(-1, 0)
          				goto flw_194
          			}
          		  case 1:
/*< 61>*/ 			printf("Waar wacht je nog op, vrrm? Ben je bang\nvoor de piraten, zrrt? Nergens voor nodig,\ndie zijn allang dood, vwwiep. Of wil je eerst\nweer even de zee op, vwwoep?\n[1]Ik wil varen.[2-]Laat maar.")
          			goto flw_57
          		}
          	}
          }

          void entrypoint_402_15() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf("We zijn er, vwwiep!")
/*<158>*/ 	set_camera(1, 0)
/*<156>*/ 	printf("Mijn huis is helemaal boven aan de top,\nvrrm!")
/*<159>*/ 	set_camera(2, 0)
/*<157>*/ 	printf("\x0E\x01\x09\x04\x07\x00De <y<<pling>zeekaart>> die we zoeken, ligt in mijn\nhuis, zrrt. Die zul jij moeten halen, bzzt!\n\n\nEr zijn meer monsters dan voorheen, dus\nwees voorzichtig, vwwiep!\n\n\n\x0E\x01\x09\x04\x07\x00Ik moet in de buurt van de boot blijven,\ndus ik zal hier op je wachten, vrrm.")
/*< 40>*/ 	story_flags[278 /* us: 805A9AFB 0x01, jp: 805ACD7B 0x01 */] = true;
/*< 84>*/ 	scene_flags[8 'Lanayru Sand Sea'][45 /* 0x4 20 */] = true;
          }

          void entrypoint_402_16() {
/*< 36>*/ 	start()
/*< 37>*/ 	printf("We zijn er, vrrm!\n\n\n\nOp dit eiland bouwden we vroeger onze\nschepen, bzzt. Hier vind je zowel de\nscheepswerf als het dorp waar de\ndokwerkers woonden, vwwiep!")
/*<160>*/ 	set_camera(4, 0)
/*<165>*/ 	printf("Dat gebouw is de scheepswerf, vrrm!")
/*<166>*/ 	set_camera(5, 0)
/*<138>*/ 	printf("Volgens mij zit de ingang potdicht, vrrrm.\nHier kom je er dus niet in, brzzt.")
/*<162>*/ 	set_camera(6, 0)
/*<139>*/ 	printf("\x0E\x01\x09\x04\x07\x00De belangrijkste locaties op het eiland zijn\nverbonden via een mijnwagenbaan, vrrm!")
/*<164>*/ 	printf("\x0E\x01\x09\x04\x07\x00Met een mijnwagen kunt je misschien de\nachteringang van de werf bereiken, brzrrt.")
/*<203>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 161, 'param3': 54}
/*<161>*/ 	set_camera(7, 0)
/*<140>*/ 	printf("Daar is een station waar je in kunt stappen,\nzrrt!")
/*<204>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 163, 'param3': 54}
/*<163>*/ 	set_camera(6, 0)
/*<141>*/ 	printf("\x0E\x01\x09\x04\x07\x00Ga eerst naar het station. Ik wacht hier op\nje, vwwoep!")
/*< 52>*/ 	story_flags[279 /* us: 805A9AFB 0x02, jp: 805ACD7B 0x02 */] = true;
/*< 86>*/ 	scene_flags[8 'Lanayru Sand Sea'][46 /* 0x4 40 */] = true;
          }

          void entrypoint_402_50() {
/*<115>*/ 	start()
/*<120>*/ 	printf("Naar het dorpscentrum")
          }

