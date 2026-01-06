          void entrypoint_402_17() {
/*< 38>*/ 	start()
/*< 39>*/ 	printf(/* textboxtype: 1, unk: 0, line: 63 */ "Dit is echt zo eng als ik had verwacht,\nvrrm<pause 5>.<pause 5>.<pause 5>.\n\n\n<0x10009:0x00070000>Maar als je er goed over nadenkt, zijn ze\nwaarschijnlijk toch allemaal allang dood,\nbrrzrrt!\n\n<0x10009:0x00070000>Zonder het chronokristal van mijn boot zou ik\nbijvoorbeeld ook niet zo energiek zijn,\nvwwoep!\n\n<0x10009:0x00070000>Dus ik hoef me nergens zorgen om te\nmaken, vrrm! Bij die gedachte voel ik me\nal wat beter. <0x30001:0x><heroname>, het wordt\ntijd dat je mijn schip gaat vinden, zrt!\n<0x10009:0x00070000>Ik wacht hier wel op je, bzzt.")
/*< 51>*/ 	story_flags[280 /* us: 805A9AFB 0x04, jp: 805ACD7B 0x04 */] = true;
/*< 85>*/ 	scene_flags[8 'Lanayru Sand Sea'][47 /* 0x4 80 */] = true;
          }

          void entrypoint_402_51() {
/*<116>*/ 	start()
/*<121>*/ 	printf(/* textboxtype: 0, unk: 2, line: 97 */ "Naar de werf")
          }

          void entrypoint_402_18() {
/*< 74>*/ 	start()
/*<147>*/ 	printf(/* textboxtype: 0, unk: 0, line: 65 */ "<0x10012:0x0000000b>Ik heb informatie voor u, meester. Uw\nattentie, alstublieft.")
/*<167>*/ 	set_camera(3, 0)
/*<148>*/ 	printf(/* textboxtype: 1, unk: 2, line: 66 */ "Ik acht het 60% zeker dat deze masten en\nzeilen behoren tot het schip dat <color red<Nayru's\nvlam>coloroff> bevat.")
/*<168>*/ 	set_camera(-1, 0)
/*< 75>*/ 	printf(/* textboxtype: 0, unk: 1, line: 64 */ "U kunt nu <color red<detectie>coloroff> gebruiken om het schip\nte zoeken dat <color red<<sound 4>Nayru's vlam>coloroff> bevat.")
/*< 76>*/ 	story_flags[275 /* us: 805A9AF8 0x20, jp: 805ACD78 0x20 */] = true;
/*< 80>*/ 	story_flags[271 /* us: 805A9AF8 0x02, jp: 805ACD78 0x02 */] = true;
/*<279>*/ 	open_dowsing_wheel(7)
/*<278>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<149>*/ 	scene_flags[8 'Lanayru Sand Sea'][112 /* 0xF 01 */] = true;
/*<201>*/ 	story_flags[647 /* us: 805A9B1C 0x01, jp: 805ACD9C 0x01 */] = true;
          }

          void entrypoint_402_52() {
/*<117>*/ 	start()
/*<123>*/ 	printf(/* textboxtype: 0, unk: 0, line: 98 */ "Ga naar de mijnwagen en druk\nop (A) om in te stappen.")
          }

          void entrypoint_402_01() {
/*<  1>*/ 	start()
          	printf(/* textboxtype: 0, unk: 20, line: 4 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_402_19() {
/*< 77>*/ 	start()
/*<272>*/ 	printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x10012:0x0000000b>Meester, het lijkt erop dat monsters zich\nhier hebben gevestigd sinds de fabriek in\nonbruik is geraakt.\n\nIk heb mijn inschatting bijgesteld en de\nkans om hier een aanwijzing te vinden\nlijkt nu extreem laag te zijn.")
/*< 79>*/ 	story_flags[270 /* us: 805A9AF8 0x01, jp: 805ACD78 0x01 */] = true;
/*<239>*/ 	story_flags[741 /* us: 805A9B26 0x20, jp: 805ACDA6 0x20 */] = true;
          }

          void entrypoint_402_53() {
/*<118>*/ 	start()
/*<122>*/ 	printf(/* textboxtype: 2, unk: 0, line: 99 */ "Gebruik je lichaam om het\ngewicht van de mijnwagen in\nbochten in balans te houden.")
          }

          void entrypoint_402_70() {
/*<245>*/ 	start()
/*<250>*/ 	printf(/* textboxtype: 0, unk: 0, line: 110 */ "Beste kapitein,\nbedankt voor alles, zrrt!\nHoogachtend,\nde bemanning, vrrrrrm.")
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
/*<223>*/ 					printf(/* textboxtype: 0, unk: 0, line: 20 */ "Laten we snel gaan, vrrm! Je bent toch op\nzoek naar iemand, brrzt?\n\n\nOf wil je ergens anders heen?\n[1-]Ik wil varen![2-]Naar de Zandvaarder![3]Laat maar.")
          					flw_263:
/*<263>*/ 					switch (choice(3)) {
          					  case 0:
/*<264>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00070000>Mooi! Daar gaan we dan, vrrrrm!")
/*<267>*/ 						changeScene(2, 0) // 
          					  case 1:
/*<265>*/ 						printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00070000>Goed, ik zal je naar mijn schip brengen,\nvrrm!")
/*<266>*/ 						changeScene(4, 0) // 
          					  case 2:
/*<268>*/ 						printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x00070000>Kom me gerust nog eens opzoeken, vrrm!")
          					}
          				  case 1:
/*<281>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*<280>*/ 						switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          						  case 0:
          							flw_222:
/*<222>*/ 							printf(/* textboxtype: 1, unk: 0, line: 21 */ "Je hebt het gehaald, zrrt! Heb je die\npersoon gevonden die je zocht, phaweep?\n\n\nAls je wilt, kunnen we een eindje gaan\nvaren, brrzrrt.\n[1-]Ik wil varen![2-]Naar de Zandvaarder![3]Laat maar.")
          							goto flw_263
          						  case 1:
/*<292>*/ 							switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          							  case 0:
          								flw_282:
/*<282>*/ 								printf(/* textboxtype: 0, unk: 1, line: 22 */ "Ben je op zoek naar een drakengod, vrrm?\n\n\n\n<0x10009:0x00070000>Als je <color blue<meester Donderdraak >coloroff>zoekt, moet je\nten zuiden van de <color blue<Lanayru-grotten >coloroff>zijn,\nbzzt. Andere drakengoden ken ik niet,\nbrrzrrt.\n<0x10009:0x00070000>Als je wilt, kunnen we ook een eindje gaan\nvaren.\n[1-]Ik wil varen![2-]Naar de Zandvaarder![3]Laat maar.")
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
/*< 27>*/ 					printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00070000>Zin om de wilde baren op te gaan, brrzt?\n[1-]Ik wil varen.[2-]Naar de Zandvaarder.[3]Laat maar.")
/*< 28>*/ 					switch (choice(3)) {
          					  case 0:
/*< 29>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00070000>Mooi! Daar gaan we dan, vrrrrm!")
/*< 33>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 31>*/ 						printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00070000>Goed, ik zal je naar mijn schip brengen,\nvrrm!")
/*< 32>*/ 						changeScene(0, 0) // 
          					  case 2:
/*< 30>*/ 						printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00070000>Laten we dan voortmaken, bzzt!")
          					}
          				  case 1:
/*<155>*/ 					printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00070000>Zullen we de wilde baren op gaan, vrrm?\n[1-]Ja, varen maar![2]Wacht...")
/*<154>*/ 					switch (choice(2)) {
          					  case 0:
/*<151>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00070000>Mooi! Daar gaan we dan, vrrrrm!")
/*<153>*/ 						changeScene(2, 0) // 
          					  case 1:
/*<152>*/ 						printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00070000>Laten we dan voortmaken, bzzt!")
          					}
          				}
          			}
          		  case 1:
/*<135>*/ 			printf(/* textboxtype: 0, unk: 1, line: 13 */ "Wat is dat nou, vwwoep?\nBen je van gedachten veranderd?\n\n\nWil je me toch helpen om mijn schip terug\nte krijgen, bzztzzz?\n[1-]Ik help je![2]Nee, doei.")
          			flw_134:
/*<134>*/ 			switch (choice(2)) {
          			  case 0:
/*< 26>*/ 				printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00070000>Meen je dat serieus, vrrm? Nou, in dat\ngeval, bzzt...")
/*< 25>*/ 				printf(/* textboxtype: 1, unk: 0, line: 6 */ "Hmm<pause 10>.<pause 10>.<pause 10>. Er is iets raars aan die kaart van\njou... vrrm.\n\n\n<0x10009:0x00070000>Je kunt je niet op de open zee wagen\nzonder een fatsoenlijke <color yellow<zeekaart>coloroff>, zzwiep!\n\n\nEr ligt een <color yellow<zeekaart>coloroff><color blue< in mijn huis>coloroff>, bzzzt.\nStap dus in deze boot, dan gaan we op weg\nnaar <color blue<Huize Kapbot>coloroff>!")
/*< 24>*/ 				story_flags[273 /* us: 805A9AF8 0x08, jp: 805ACD78 0x08 */] = true;
          				goto flw_150
          			  case 1:
/*<133>*/ 				printf(/* textboxtype: 1, unk: 1, line: 12 */ "<0x10009:0x00070000>Dan laat ik je niet aan boord, brrt!\n\n\n\nEn denk maar niet dat je ergens komt\nzonder deze sloep, vwwiep!")
          			}
          		}
          	  case 1:
/*< 23>*/ 		story_flags[264 /* us: 805A9AF9 0x04, jp: 805ACD79 0x04 */] = true;
/*<  3>*/ 		printf(/* textboxtype: 0, unk: 0, line: 5 */ "Hmm<pause 10>.<pause 10>.<pause 10>. Wie ben jij, bzzt? Een of ander\nmens, vrrrm?\n\n\nWie ik ben, brrzrrt?\n\n\n\n<0x10009:0x00070000><sound 4>Ik ben de trotse kapitein van het schip dat\n<color red<Nayru's vlam>coloroff> beschermt, vwwiep!\n[1-]Nayru's vlam?[2-]Wat voor schip?")
/*<208>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_212:
/*<212>*/ 			set_camera(13, 0)
/*<210>*/ 			printf(/* textboxtype: 0, unk: 0, line: 17 */ "<pause 10>.<pause 10>.<pause 10>.\n\n\n\nEr was een enorme storm<pause 5>.<pause 5>.<pause 5>.\nMijn bemanning en ik waren zoals\ngewoonlijk op de zandzee, vrrm...\n\n...toen die woestelingen, bzzt<pause 5>.<pause 5>.<pause 5>. die piraten,\nons plotseling overvielen, brrzt.\n\n\nHet was ze om <color red<Nayru's vlam>coloroff> te doen, zzpt.\nMijn bemanning is gevangen gezet... vrrrt...\nen ik ben in zee gegooid!")
/*<213>*/ 			set_camera(14, 0)
/*<211>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00070000>Via de stroming ben ik in deze haven\nbeland, vrrrrm<pause 5>.<pause 5>.<pause 5>.")
/*<269>*/ 			set_camera(17, 0)
/*<270>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00070000>Daarna ben ik met dit bootje op zoek\ngegaan naar mijn schip en mijn\nbemanning, maar die zijn nergens te\nbekennen, bzzt.")
/*<218>*/ 			set_camera(-1, 0)
/*<217>*/ 			printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00070000>De vraag waar mijn schip nu is, spookt\nnog steeds door mijn hoofd, vwwiep.<pause 5>.<pause 5>.\n\n\nIk verwed mijn hoed erom dat ze het schip\nonzichtbaar hebben gemaakt, vrrm! Ik kan\nhet nergens vinden.\n[1-]Waarom niet?[2-]Onzichtbaar?")
/*<216>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_209:
/*<209>*/ 				printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00070000>Om <color red<Nayru's vlam>coloroff> te beschermen heeft het\nschip een functie die het onzichtbaar kan\nmaken, vwwiep<pause 5>.<pause 5>.<pause 5>.\n\nDus... jij hebt <color red<Nayru's vlam >coloroff>nodig om\niemand te vinden die je dierbaar is,\nvrrrm<pause 5>.<pause 5>.<pause 5>.\n\n<0x10009:0x00070000>In dat geval moet je me helpen om mijn\nschip en mijn bemanning te vinden,\nvwwoep!")
/*<214>*/ 				set_camera(15, 0)
/*<207>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "Als je me wilt helpen, vzzzt, mag je mijn\nboot gebruiken.\n[1-]Ik help je![2]Nee, doei.")
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
/*< 82>*/ 	printf(/* textboxtype: 1, unk: 0, line: 69 */ "")
          }

          void entrypoint_402_54() {
/*<119>*/ 	start()
/*<124>*/ 	printf(/* textboxtype: 0, unk: 2, line: 100 */ "Als je te snel gaat, kun je\nafremmen met (B).")
          }

          void entrypoint_402_71() {
/*<246>*/ 	start()
/*<251>*/ 	printf(/* textboxtype: 1, unk: 0, line: 111 */ "Lieve papa,\nSucces op je werk, vrrm!")
          }

          void entrypoint_402_03() {
/*< 12>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 0, unk: 20, line: 4 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_402_55() {
/*<145>*/ 	start()
/*<146>*/ 	printf(/* textboxtype: 0, unk: 0, line: 101 */ "Spring omhoog om over\nobstakels te springen.")
          }

          void entrypoint_402_72() {
/*<254>*/ 	start()
/*<255>*/ 	printf(/* textboxtype: 2, unk: 0, line: 96 */ "Naar de pier")
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
/*< 44>*/ 					printf(/* textboxtype: 1, unk: 0, line: 27 */ "Mijn familie en ik hebben vele mooie\nherinneringen aan dat huis, vrrm.\n\n\nIk vraag me af wanneer ik er weer kan\nwonen, zrrt. Ik mis mijn familie, weet je,\nvwwiep.<pause 5>.<pause 5>.")
          					flw_46:
/*< 46>*/ 					printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00070000>Zullen we de wilde baren op gaan, vrrt?\n[1-]Ik wil varen![2]Nog niet.")
          					flw_47:
/*< 47>*/ 					switch (choice(2)) {
          					  case 0:
/*< 49>*/ 						printf(/* textboxtype: 1, unk: 1, line: 30 */ "<0x10009:0x00070000>Hijs het anker, zrrm!")
/*< 50>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 48>*/ 						printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00070000>Oké, vwwiep...")
          					}
          				  case 1:
/*<295>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_285:
/*<285>*/ 						printf(/* textboxtype: 0, unk: 1, line: 28 */ "Dus je zoekt een drakengod, vrrm?\n\n\n\n<0x10009:0x00070000>Als je <color blue<meester Donderdraak >coloroff>zoekt, moet je\nten zuiden van de <color blue<Lanayru-grotten>coloroff> zijn,\nbzzt. Andere drakengoden ken ik niet,\nbrrzrrt.")
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
/*< 43>*/ 			printf(/* textboxtype: 0, unk: 0, line: 26 */ "Je hebt de <color yellow<zeekaart>coloroff>, vrrm! Nu kunnen we\nons verder de zee op wagen, zrrt!\n\n\nVwwiep! Laten we mijn schip gaan\nzoeken!")
/*< 45>*/ 			story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */] = true;
          			goto flw_46
          		}
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "Waar wacht je nog op, zrrt? Ga snel die\n<color yellow<zeekaart>coloroff> halen in mijn oude huis, vrrm!\n\n\nOf wil je eerst de zee weer op?\n[1-]Ik wil varen.[2]Laat maar.")
          		goto flw_47
          	}
          }

          void entrypoint_402_21() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10012:0x00000064>Zag je dat, vwwoep? Dat is mijn schip,\nvrrm!\n\n\nSnel erachteraan, bzzt! En blijf erop\nschieten met het kanon, zrrt!")
          }

          void entrypoint_402_56() {
/*<143>*/ 	start()
/*<144>*/ 	printf(/* textboxtype: 2, unk: 0, line: 102 */ "Laatste halte: werf")
          }

          void entrypoint_402_05() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 1, unk: 0, line: 32 */ "Bedankt dat je me mijn schip terug hebt\ngegeven, vrrm.\n\n\n<0x10009:0x00070000>Het is weliswaar half vernield, maar mijn\nbemanning en ik hebben het binnen een\nmum van tijd weer opgelapt, vrrt.\n\n<0x10009:0x00070000>Ik wens je veel geluk bij het vinden van die\npersoon die je zoekt, vwwiep!\n\n\n<0x10009:0x00070000>Kom gerust nog eens langs. Je bent altijd\nwelkom, vwwoep!")
/*<137>*/ 	story_flags[815 /* us: 805A9B31 0x80, jp: 805ACDB1 0x80 */] = true;
/*<219>*/ 	zone_temp_flags[1 /* 0x1 02 */] = true;
          }

          void entrypoint_402_22() {
/*< 94>*/ 	start()
/*< 97>*/ 	printf(/* textboxtype: 0, unk: 0, line: 71 */ "Open de <color yellow<zeekaart>coloroff> die je hebt meegebracht,\nzrrt!")
/*<105>*/ 	{'type': 'type3', 'subType': 4, 'param1': 768, 'param2': 6, 'next': 192, 'param3': 30}
/*<192>*/ 	wait_frames(105)
/*<102>*/ 	story_flags[519 /* us: 805A9B15 0x01, jp: 805ACD95 0x01 */] = true;
/*<100>*/ 	printf(/* textboxtype: 1, unk: 0, line: 72 */ "De <color blue<<sound 4>scheepswerf >coloroff>is hier, vrrt. Ik zal de\nlocatie voor je markeren met (X), vwwiep.")
/*<107>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 34}
/*<142>*/ 	printf(/* textboxtype: 0, unk: 0, line: 74 */ "<0x10009:0x00070000>Op de scheepswerf bouwden we vroeger\nonze schepen, vrrt. Mijn schip is daar ook\ngebouwd, vwwiep!\n\n<0x10009:0x00070000>Als we daar een kijkje nemen, vinden we\nmisschien informatie over waar mijn schip\nnu is, brrzrrt!")
/*<110>*/ 	printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x00070000>Oké! Varen maar, vrrm!")
/*<112>*/ 	scene_flags[8 'Lanayru Sand Sea'][30 /* 0x2 40 */] = false;
/*<113>*/ 	scene_flags[8 'Lanayru Sand Sea'][31 /* 0x2 80 */] = true;
/*<259>*/ 	story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */] = true;
          }

          void entrypoint_402_57() {
/*<242>*/ 	start()
/*<247>*/ 	printf(/* textboxtype: 0, unk: 1, line: 103 */ "Waarschuw je medewerkers op\ntijd en geef piraten geen kans om\naan te vallen, zrrt!")
          }

          void entrypoint_402_23() {
/*< 95>*/ 	start()
/*<256>*/ 	switch (story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */]) {
          	  case 0:
/*< 98>*/ 		printf(/* textboxtype: 1, unk: 0, line: 75 */ "Dit kan best eng worden, vwwiep<pause 5>.<pause 5>.<pause 5>.\n\n\n\nDe kapitein van de piraten is een\nmechanische maniak, zrrt! En zijn\nbemanningsleden zijn ook geen lieverdjes,\nvrrm!\n<0x10009:0x00070000>Ik hoopte dat ik die lelijkerd nooit meer\nmet mijn visuele receptoren waar hoefde te\nnemen, brrzrrt. Maar<pause 5>.<pause 5>.<pause 5>.\n\n<0x10009:0x00070000>...als we mijn schip terug willen krijgen,\nhebben we geen keuze, vwwiep!")
          		flw_106:
/*<106>*/ 		{'type': 'type3', 'subType': 4, 'param1': 512, 'param2': 0, 'next': 101, 'param3': 30}
/*<101>*/ 		printf(/* textboxtype: 0, unk: 1, line: 76 */ "Het <sound 4><color blue<piratennest >coloroff>is hier bij het (X)-teken,\nzrrt.")
/*<108>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 109, 'param3': 34}
/*<109>*/ 		printf(/* textboxtype: 0, unk: 0, line: 77 */ "<0x10009:0x00070000>Goed, trek je stoute voortbeweegonderdelen\naan en ga op onderzoek uit, vwwoep!")
/*<103>*/ 		story_flags[520 /* us: 805A9B15 0x02, jp: 805ACD95 0x02 */] = true;
/*<114>*/ 		scene_flags[8 'Lanayru Sand Sea'][31 /* 0x2 80 */] = false;
          	  case 1:
/*<258>*/ 		printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00070000>Dus mijn schip is niet hier, zrrt? Dan is er\nnog maar één plek om naar aanwijzingen\nte zoeken, vrrm<pause 5>.<pause 5>.<pause 5>.\n\n<0x10009:0x00070000>Brrzrrt. Dit kan eng worden, maar...\nwe moeten naar het piratennest van die\nzandschuimers die mijn schip hebben\ngejat, vwwiep!\n<0x10009:0x00070000>De kapitein van de piraten is een\nmechanische maniak, zrrt! En zijn\nbemanningsleden zijn ook geen lieverdjes,\nvrrm!\n<0x10009:0x00070000>Ik hoopte dat ik die lelijkerd nooit meer\nmet mijn visuele receptoren hoefde te\nzien, brrzrrt. Maar<pause 5>.<pause 5>.<pause 5>.\n\n<0x10009:0x00070000>...als we mijn schip terug willen krijgen,\nhebben we geen keuze, vwwiep!")
/*<257>*/ 		story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */] = true;
          		goto flw_106
          	}
          }

          void entrypoint_402_40() {
/*<169>*/ 	start()
/*<170>*/ 	printf(/* textboxtype: 0, unk: 1, line: 79 */ "<0x10012:0x00000001>Attentie, meester.")
/*<178>*/ 	set_camera(8, 0)
/*<171>*/ 	printf(/* textboxtype: 0, unk: 0, line: 80 */ "Dit object staat bekend als een <color yellow<<sound 4>chronobol>coloroff>.\n\n\n\nMijn aanname is dat deze bol, in\ntegenstelling tot de kristallen, ontworpen\nis voor gebruik op verschillende locaties\nen daarom meegenomen kan worden.")
/*<179>*/ 	set_camera(-1, 0)
          }

          void entrypoint_402_58() {
/*<243>*/ 	start()
/*<248>*/ 	printf(/* textboxtype: 0, unk: 0, line: 104 */ "Aan het eind van de maand zal\nde baan tijdelijk buiten gebruik\nzijn voor een inspectie.")
          }

          void entrypoint_402_24() {
/*< 96>*/ 	start()
/*<261>*/ 	switch (story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */]) {
          	  case 0:
          		flw_99:
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00070000>Vraag je je af hoe we deze grote zee gaan\nverkennen, vrrm?\n\n\n<0x10009:0x00070000>Dat werk laat ik aan jou over, brrzrrt!\nDus varen maar, vwwiep!\n\n\n<0x10009:0x00070000>Het schip is waarschijnlijk onzichtbaar.\nMaar <sound 4><color green<als we het aanvallen>coloroff>, zien we er\nmisschien een glimp van, zrrt!")
/*<104>*/ 		story_flags[521 /* us: 805A9B15 0x04, jp: 805ACD95 0x04 */] = true;
/*<260>*/ 		story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */] = true;
          	  case 1:
/*<262>*/ 		printf(/* textboxtype: 1, unk: 0, line: 51 */ "Bij het piratennest is mijn schip dus ook\nniet, vrrm<pause 5>.<pause 5>.<pause 5>.\n\n\nWat zeg je, bzzt? Heb je een aanwijzing\ngevonden?\n\n\n<0x10009:0x00070000>Je weet waar we heen moeten? Via een\nsoort <color red<detectiemethode>coloroff>, vrrm? Dat is\nfantastisch, vwwoep!")
          		goto flw_99
          	}
          }

          void entrypoint_402_41() {
/*<172>*/ 	start()
/*<173>*/ 	printf(/* textboxtype: 0, unk: 1, line: 82 */ "<0x10012:0x00000001>Meester, kijk daar.")
/*<176>*/ 	set_camera(9, 0)
/*<174>*/ 	printf(/* textboxtype: 0, unk: 0, line: 83 */ "Dit is het schip dat Nayru's vlam bevat. Ik\nacht het 90% zeker dat deze mechanische\nlevensvormen bemanningsleden zijn.")
/*<177>*/ 	set_camera(-1, 0)
/*<175>*/ 	printf(/* textboxtype: 1, unk: 0, line: 84 */ "Deze afbeelding duidt erop dat de kapitein\nen zijn bemanning samen een gelukkige\ntijd hebben doorgebracht.")
/*<237>*/ 	story_flags[738 /* us: 805A9B26 0x04, jp: 805ACDA6 0x04 */] = true;
/*<238>*/ 	story_flags[739 /* us: 805A9B26 0x08, jp: 805ACDA6 0x08 */] = true;
          }

          void entrypoint_402_59() {
/*<244>*/ 	start()
/*<249>*/ 	printf(/* textboxtype: 1, unk: 2, line: 105 */ "Ik hoop dat de blauwdrukken\nvoor mijn schip snel klaar zullen\nzijn.")
          }

          void entrypoint_402_42() {
/*<180>*/ 	start()
/*<181>*/ 	printf(/* textboxtype: 0, unk: 1, line: 85 */ "<0x10012:0x00000001>Attentie, meester.")
/*<190>*/ 	set_camera(10, 0)
/*<186>*/ 	printf(/* textboxtype: 0, unk: 0, line: 86 */ "Deze machine ziet eruit alsof er een\n<color red<chronokristal >coloroff>in past. Op het moment\nontbreekt die echter.\n\nIk acht het 95% zeker dat dit dezelfde\nsoort machine is als wat we in de <color blue<Lanayru-\nmijn>coloroff> zijn tegengekomen.")
/*<191>*/ 	set_camera(-1, 0)
/*<187>*/ 	printf(/* textboxtype: 1, unk: 0, line: 87 */ "Informatie wijst erop dat in dit gebouw\n<sound 4><color red<chronokristallen >coloroff>als energiebron werden\ngebruikt.")
          }

          void entrypoint_402_25() {
/*<252>*/ 	start()
/*<253>*/ 	printf(/* textboxtype: 0, unk: 20, line: 4 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_402_09() {
/*<  4>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 0, unk: 20, line: 4 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_402_60() {
/*<125>*/ 	start()
/*<128>*/ 	printf(/* textboxtype: 74, unk: 1, line: 106 */ "<0x10005:0x000f0000>Attentie, <0x10012:0x0000000b>meester.\n\n\n\n<0x10005:0x003c0000>Dit is de <color blue<Lanayru-zandzee>coloroff>. Dit gebied was\nooit een enorme oceaan.")
          }

          void entrypoint_402_43() {
/*<182>*/ 	start()
/*<183>*/ 	printf(/* textboxtype: 0, unk: 1, line: 88 */ "<0x10012:0x00000001>Meester, we zijn aangekomen op de\nbouwplaats van de scheepswerf.")
/*<188>*/ 	set_camera(11, 0)
/*<184>*/ 	printf(/* textboxtype: 0, unk: 0, line: 89 */ "In de loop van jaren heeft het zand zich in\ndit gebouw opgehoopt.")
/*<189>*/ 	set_camera(-1, 0)
/*<185>*/ 	printf(/* textboxtype: 1, unk: 0, line: 90 */ "Mijn advies is om het zand te doorzoeken\nvoor een aanwijzing naar de locatie van het\nschip.")
          }

          void entrypoint_402_61() {
/*<126>*/ 	start()
/*<129>*/ 	printf(/* textboxtype: 0, unk: 0, line: 107 */ "<0x10005:0x005a0000>Het water is inmiddels verdampt en het\nenige wat over is, is een zee van zand.")
          }

          void entrypoint_402_44() {
/*<224>*/ 	start()
/*<230>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 232, 'param3': 51}
/*<232>*/ 	set_camera(-1, 0)
/*<229>*/ 	printf(/* textboxtype: 0, unk: 1, line: 91 */ "<0x10012:0x00000001>Mijn advies is om onze missie te voltooien\nalvorens een pauze te nemen. Ons doel is\nmomenteel om de zeekaart te vinden.")
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
/*<275>*/ 					printf(/* textboxtype: 1, unk: 0, line: 39 */ "Ik herinner me nog toen mijn schip hier\nnet af was, vrrm. Ik was zo gelukkig,\nvvvwwwww.<pause 5>.<pause 5>.")
          					flw_67:
/*< 67>*/ 					printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00070000>Zullen we de wilde baren op gaan, vrrt?\n[1-]Ik wil varen![2]Nog niet.")
          					flw_68:
/*< 68>*/ 					switch (choice(2)) {
          					  case 0:
/*< 70>*/ 						printf(/* textboxtype: 1, unk: 1, line: 30 */ "<0x10009:0x00070000>Hijs het anker, zrrm!")
/*< 71>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 69>*/ 						printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00070000>Oké, vwwiep...")
          					}
          				  case 1:
/*<301>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_288:
/*<288>*/ 						printf(/* textboxtype: 0, unk: 1, line: 28 */ "Dus je zoekt een drakengod, vrrm?\n\n\n\n<0x10009:0x00070000>Als je <color blue<meester Donderdraak >coloroff>zoekt, moet je\nten zuiden van de <color blue<Lanayru-grotten>coloroff> zijn,\nbzzt. Andere drakengoden ken ik niet,\nbrrzrrt.")
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
/*< 73>*/ 				printf(/* textboxtype: 0, unk: 1, line: 37 */ "Bereid je voor, brrzrrt! We naderen het\n<color blue<piratennest>coloroff>, vwwiep!")
          				goto flw_67
          			  case 1:
/*< 66>*/ 				story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */] = true;
/*< 72>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00070000>Dus mijn schip is niet hier, zrrt? Dan is er\nnog maar één plek om naar aanwijzingen\nte zoeken, vrrm<pause 5>.<pause 5>.<pause 5>.\n\n<0x10009:0x00070000>Brrzrrt. Dit kan eng worden, maar...\nwe moeten naar het piratennest van die\nzeeschuimers die mijn schip hebben gejat,\nvwwiep!\n<0x10009:0x00070000>Dus laten we geen tijd verspillen, vrrm!\n[1-]Daar gaan we![2]Wacht.")
          				goto flw_68
          			}
          		}
          	  case 1:
/*< 11>*/ 		printf(/* textboxtype: 0, unk: 0, line: 35 */ "Waar wacht je nog op, zrrt? Haast je en\nga op zoek naar aanwijzingen in de\n<color blue<scheepswerf>coloroff>, vrrm!\n\n<0x10009:0x00070000>Of wil je eerst weer even de zee op?\n[1-]Ik wil varen![2]Laat maar.")
          		goto flw_68
          	}
          }

          void entrypoint_402_62() {
/*<127>*/ 	start()
/*<130>*/ 	printf(/* textboxtype: 1, unk: 2, line: 108 */ "<0x10005:0x005a0000>Mijn gegevens wijzen erop dat dit een\nhaven is, die het land met de zee verbindt.")
          }

          void entrypoint_402_45() {
/*<225>*/ 	start()
/*<231>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 226, 'param3': 51}
/*<226>*/ 	printf(/* textboxtype: 0, unk: 0, line: 92 */ "Attentie, <0x10012:0x0000000b>meester.")
/*<228>*/ 	set_camera(16, 0)
/*<227>*/ 	printf(/* textboxtype: 1, unk: 0, line: 93 */ "Ik neem een grote hoeveelheid geleed-\npotigen waar boven in dit huis.")
/*<234>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 236, 'param3': 36}
/*<236>*/ 	story_flags[740 /* us: 805A9B26 0x10, jp: 805ACDA6 0x10 */] = true;
          }

          void entrypoint_402_11() {
/*<  7>*/ 	start()
/*< 91>*/ 	switch (story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */]) {
          	  case 0:
/*< 90>*/ 		printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10012:0x00000064>Dat is het nest van die valse piraten,\nvwwiep!\n\n\nZrrrt! Het is hier gevaarlijk, dus we beter\nwegblijven. Eerst maar eens naar de\n<color blue<scheepswerf>coloroff>, vrrm!")
          	  case 1:
/*<  8>*/ 		printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10012:0x00000064>Opgelet! Het is hier gevaarlijk. We moeten\neerst naar <color blue<Huize Kapbot>coloroff>, vwwoep!")
          	}
          }

          void entrypoint_402_63() {
/*<131>*/ 	start()
/*<132>*/ 	printf(/* textboxtype: 0, unk: 1, line: 109 */ "<0x10005:0x003c0000>In dit gebied werd gebruik gemaakt van\neen nieuwe vorm van energie. Ik acht het\n90% zeker dat de<color red< heilige vlam >coloroff>zich\nverderop bevindt.\n<0x10005:0x001e0000>Mijn advies is om op verkenning te gaan\nop de zandzee.")
          }

          void entrypoint_402_46() {
/*<240>*/ 	start()
/*<241>*/ 	printf(/* textboxtype: 0, unk: 1, line: 94 */ "Attentie, <0x10012:0x0000000b>meester. De kracht van het\nchronokristal lijkt dit gebouw veranderd te\nhebben.\n\nMijn advies is om de situatie buiten te\nonderzoeken.")
          }

          void entrypoint_402_12() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "Van de zilte zeelucht gaan mijn netwerken\nzoemen, vrrm! Het voelt goed om weer op\nzee te zijn, brrzrrt. Eens zien of ik nog\nweet hoe je deze schuit bestuurt, vrroem.\n<0x10009:0x00070000>Druk op (ControlStick2) om vooruit te komen, zrrt.\nAls je op (B) drukt, zal de boot versnellen,\nvrrm!<0x10011:0x01cd>\n\nDruk op <icon 41> om het kanon te activeren,\nvwwiep. Druk daarna opnieuw op <icon 41> om\nte schieten, zrrt!<0x10011:0x0fcd>")
/*< 87>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 136, 'param3': 30}
/*<136>*/ 	printf(/* textboxtype: 0, unk: 0, line: 44 */ "Ik heb het eiland waar mijn huis staat,\ngemarkeerd met een (X), vrrm!\n\n\nHet eiland heeft een <color red<pier>coloroff> waar we aan\nkunnen leggen, brrzrrt!")
/*< 89>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 88, 'param3': 34}
/*< 88>*/ 	printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x00070000>Goed, daar gaan we, vrrm!")
/*< 83>*/ 	story_flags[499 /* us: 805A9B12 0x02, jp: 805ACD92 0x02 */] = true;
/*<111>*/ 	scene_flags[8 'Lanayru Sand Sea'][30 /* 0x2 40 */] = true;
          }

          void entrypoint_402_13() {
/*< 16>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 0, unk: 20, line: 4 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_402_30() {
/*<271>*/ 	start()
/*< 78>*/ 	printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10012:0x0000000b>Attentie, meester. Er is een kans van 0%\ndat het schip hier gevonden kan worden.\n\n\nVanwege deze onmogelijkheid, raad ik u\naan om de scheepskapitein in te lichten en\ndit eiland te verlaten.")
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
/*<277>*/ 					printf(/* textboxtype: 0, unk: 1, line: 52 */ "Brrzrrrt... Ik heb nog steeds nachtmerries\nover mijn schip en die piraten, vrrm. Ik\nwas zo bang dat ik er haast kortsluiting\nvan kreeg.<pause 5>.<pause 5>.")
          					flw_56:
/*< 56>*/ 					printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00070000>Zullen we de wilde baren op gaan, vrrt?\n[1-]Ik wil varen![2]Nog niet.")
          					flw_57:
/*< 57>*/ 					switch (choice(2)) {
          					  case 0:
/*< 59>*/ 						printf(/* textboxtype: 1, unk: 1, line: 30 */ "<0x10009:0x00070000>Hijs het anker, zrrm!")
/*< 60>*/ 						changeScene(0, 0) // 
          					  case 1:
/*< 58>*/ 						printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00070000>Oké, vwwiep...")
          					}
          				  case 1:
/*<298>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_291:
/*<291>*/ 						printf(/* textboxtype: 0, unk: 1, line: 28 */ "Dus je zoekt een drakengod, vrrm?\n\n\n\n<0x10009:0x00070000>Als je <color blue<meester Donderdraak >coloroff>zoekt, moet je\nten zuiden van de <color blue<Lanayru-grotten>coloroff> zijn,\nbzzt. Andere drakengoden ken ik niet,\nbrrzrrt.")
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
/*< 63>*/ 				printf(/* textboxtype: 0, unk: 0, line: 47 */ "We moeten opschieten en mijn schip\nvinden, vrrt!")
          				goto flw_56
          			  case 1:
/*< 62>*/ 				printf(/* textboxtype: 0, unk: 1, line: 46 */ "Dus hier is mijn schip ook niet, vrrm<pause 5>.<pause 5>.<pause 5>.\n\n\n\nZrrt? Vwwieeep? Heb je een aanwijzing\ngevonden, brrt?\n\n\n<0x10009:0x00070000>Je weet waar we heen moeten? Via een\nsoort <color red<detectiemethode>coloroff>, vrrm? Dat is\nfantastisch, vwwoep!\n\n<0x10009:0x00070000>Dan zullen we mijn schip deze keer vast en\nzeker vinden, bzzoep!\n\n\n<0x10009:0x00070000>Klaar om het ruimte sop te kiezen,\nvwwiep?\n[1-]Varen maar![2]Nog niet.")
/*< 55>*/ 				story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */] = true;
          				goto flw_57
          			}
          		}
          	  case 1:
/*<193>*/ 		switch (scene_flags[76 /* 0x8 10 */]) {
          		  case 0:
/*<198>*/ 			switch (scene_flags[88 /* 0xA 01 */]) {
          			  case 0:
/*<197>*/ 				printf(/* textboxtype: 0, unk: 0, line: 50 */ "<sound 4>Er is iets bij de brug in de mond, vwwiep!\n\n\n\nMisschien heeft het met mijn schip te\nmaken, zrrt! Ik zal eens gaan kijken,\nbrzzt!")
/*<202>*/ 				scene_flags[-1 'Skyloft: Silent Realm'][88 /* 0xA 01 */] = true;
          				flw_194:
/*<194>*/ 				printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00070000>Of wil je eerst weer even de zee op, vrrm?\n[1-]Ik wil varen.[2]Laat maar.")
          				goto flw_57
          			  case 1:
/*<196>*/ 				printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x30001:0x><heroname>, vwwiep! Dat was heel\nindrukwekkend!\n\n\nDie grote mond ging ineens open, zrrt! Hoe\nheb je dat voor elkaar gekregen, vrrm?!")
/*<205>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 199, 'param3': 54}
/*<199>*/ 				set_camera(12, 0)
/*<195>*/ 				printf(/* textboxtype: 0, unk: 0, line: 50 */ "<sound 4>Er is iets bij de brug in de mond, vwwiep!\n\n\n\nMisschien heeft het met mijn schip te\nmaken, zrrt! Ik zal eens gaan kijken,\nbrzzt!")
/*<206>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 200, 'param3': 54}
/*<200>*/ 				set_camera(-1, 0)
          				goto flw_194
          			}
          		  case 1:
/*< 61>*/ 			printf(/* textboxtype: 1, unk: 0, line: 45 */ "Waar wacht je nog op, vrrm? Ben je bang\nvoor de piraten, zrrt? Nergens voor nodig,\ndie zijn allang dood, vwwiep. Of wil je eerst\nweer even de zee op, vwwoep?\n[1-]Ik wil varen.[2]Laat maar.")
          			goto flw_57
          		}
          	}
          }

          void entrypoint_402_15() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 0, unk: 0, line: 53 */ "We zijn er, vwwiep!")
/*<158>*/ 	set_camera(1, 0)
/*<156>*/ 	printf(/* textboxtype: 1, unk: 0, line: 54 */ "Mijn huis is helemaal boven aan de top,\nvrrm!")
/*<159>*/ 	set_camera(2, 0)
/*<157>*/ 	printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x00070000>De <color yellow<<sound 4>zeekaart>coloroff> die we zoeken, ligt in mijn\nhuis, zrrt. Die zul jij moeten halen, bzzt!\n\n\nEr zijn meer monsters dan voorheen, dus\nwees voorzichtig, vwwiep!\n\n\n<0x10009:0x00070000>Ik moet in de buurt van de boot blijven,\ndus ik zal hier op je wachten, vrrm.")
/*< 40>*/ 	story_flags[278 /* us: 805A9AFB 0x01, jp: 805ACD7B 0x01 */] = true;
/*< 84>*/ 	scene_flags[8 'Lanayru Sand Sea'][45 /* 0x4 20 */] = true;
          }

          void entrypoint_402_16() {
/*< 36>*/ 	start()
/*< 37>*/ 	printf(/* textboxtype: 0, unk: 0, line: 56 */ "We zijn er, vrrm!\n\n\n\nOp dit eiland bouwden we vroeger onze\nschepen, bzzt. Hier vind je zowel de\nscheepswerf als het dorp waar de\ndokwerkers woonden, vwwiep!")
/*<160>*/ 	set_camera(4, 0)
/*<165>*/ 	printf(/* textboxtype: 0, unk: 74, line: 62 */ "Dat gebouw is de scheepswerf, vrrm!")
/*<166>*/ 	set_camera(5, 0)
/*<138>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "Volgens mij zit de ingang potdicht, vrrrm.\nHier kom je er dus niet in, brzzt.")
/*<162>*/ 	set_camera(6, 0)
/*<139>*/ 	printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x00070000>De belangrijkste locaties op het eiland zijn\nverbonden via een mijnwagenbaan, vrrm!")
/*<164>*/ 	printf(/* textboxtype: 74, unk: 1, line: 61 */ "<0x10009:0x00070000>Met een mijnwagen kunt je misschien de\nachteringang van de werf bereiken, brzrrt.")
/*<203>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 161, 'param3': 54}
/*<161>*/ 	set_camera(7, 0)
/*<140>*/ 	printf(/* textboxtype: 0, unk: 0, line: 59 */ "Daar is een station waar je in kunt stappen,\nzrrt!")
/*<204>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 163, 'param3': 54}
/*<163>*/ 	set_camera(6, 0)
/*<141>*/ 	printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x00070000>Ga eerst naar het station. Ik wacht hier op\nje, vwwoep!")
/*< 52>*/ 	story_flags[279 /* us: 805A9AFB 0x02, jp: 805ACD7B 0x02 */] = true;
/*< 86>*/ 	scene_flags[8 'Lanayru Sand Sea'][46 /* 0x4 40 */] = true;
          }

          void entrypoint_402_50() {
/*<115>*/ 	start()
/*<120>*/ 	printf(/* textboxtype: 0, unk: 0, line: 95 */ "Naar het dorpscentrum")
          }

