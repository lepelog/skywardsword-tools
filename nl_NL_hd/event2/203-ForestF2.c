          void entrypoint_203_55() {
/*<147>*/ 	start()
/*<149>*/ 	switch (story_flags[188 /* us: 805A9AE9 0x08, jp: 805ACD69 0x08 */]) {
          	  case 0:
/*<148>*/ 		printf("Als u dit <rd<bad >>naar de vulkaan verplaatst,\nacht ik het 85% zeker dat het water erin\nvoldoende is om het vuur te blussen dat\nuw pad blokkeert.\nIk stel voor dat u dit bad leent<pling> van de\nwaterdraak.")
          	  case 1:
/*<150>*/ 		printf("Mijn metingen geven aan dat er veel\nwater in het <rd<bad >>zit. Ik acht het 85%\nzeker dat u hiermee het vuur kunt blussen\ndat uw pad blokkeert.\nIk stel voor dat u dit bad leent <pling>van de\nwaterdraak.")
/*<167>*/ 		story_flags[188 /* us: 805A9AE9 0x08, jp: 805ACD69 0x08 */] = true;
          	}
          }

          void entrypoint_203_72() {
/*<163>*/ 	start()
/*<162>*/ 	printf("Meester Broekie! Let goed op, want\nik laat wel even zien hoe een échte\nheld eruitziet, bzzzzt!")
          }

          void entrypoint_203_03() {
/*<420>*/ 	start()
/*<421>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<422>*/ 		printf("\x0E\x01\x09\x04\x00\x04Ik vind het geweldig dat het hier nu veilig\nis... maar het is ook een beetje saai.\n\n\n\x0E\x01\x09\x04\x11\x05Ik moet echt stoppen met klagen en\ngenieten van mijn luxeprobleem.")
          	  case 1:
/*<423>*/ 		printf("\x0E\x01\x09\x04\x00\x14Misschien heb je het niet gezien, maar ik\nprobeer me hier te verstoppen. Kun je\nalsjeblieft weggaan voordat je gezien\nwordt door monsters?")
          	}
          }

          void entrypoint_203_90() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf("\x0E\x01\x09\x04\x00\x0FHm...")
          }

          void entrypoint_203_56() {
/*<151>*/ 	start()
/*<177>*/ 	switch (scene_flags[127 /* 0xE 80 */]) {
          	  case 0:
/*<178>*/ 		printf("Prima,<pause0F> zal ik de robot laten komen?\n[1]Graag![2]Ik mag hem niet zo...")
          		flw_153:
/*<153>*/ 		switch (choice(2)) {
          		  case 0:
/*<152>*/ 			printf("Begrepen, \x0E\x01\x12\x04\x00\x05meester. Ik doe het meteen,")
          		  case 1:
/*<181>*/ 			switch (scene_flags[127 /* 0xE 80 */]) {
          			  case 0:
/*<182>*/ 				printf("\x0E\x01\x12\x04\x00\x01Meester,<pause0F> hoewel ik begrip heb voor uw\ntwijfels, zou het irrationeel zijn om de\nmeest logische oplossing van de hand te\nwijzen. Ik laat hem komen.")
          			  case 1:
/*<154>*/ 				printf("\x0E\x01\x12\x04\x00\x01Meester,<pause0F> tenzij u het bad zelf wilt dragen,\nkunt u het zich nu niet veroorloven om\nkieskeurig te zijn over wie u helpt. Ik laat\nhem komen.")
          			}
          		}
          	  case 1:
/*<155>*/ 		printf("Om het watervat van de waterdraak\nnaar de vulkaan te vervoeren, heeft\nu de hulp nodig van de transportrobot.\nZal ik contact met hem opnemen?[1]Ja, graag![2]Ik mag hem niet zo...")
          		goto flw_153
          	}
          }

          void entrypoint_203_73() {
/*<165>*/ 	start()
/*<164>*/ 	printf("Zoals gewoonlijk wacht ik in het\nhemelrijk op u.")
/*<588>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          }

          void entrypoint_203_04() {
/*<441>*/ 	start()
/*<442>*/ 	switch (zone_temp_flags[11 /* 0x0 08 */]) {
          	  case 0:
/*<445>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 443, 'param3': 6}
/*<443>*/ 		printf("\x0E\x01\x09\x04\x00\x04Het is leuk om soms volledig in je eigen\ngedachten op te gaan.\n\n\n\x0E\x01\x09\x04\x00\x01Een korte pauze doet wonderen voor je\nlichaam en geest.")
/*<444>*/ 		scene_flags[1 'Faron Woods'][54 /* 0x7 40 */] = true;
          	  case 1:
/*<424>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*<426>*/ 			switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          			  case 0:
/*<427>*/ 				printf("\x0E\x01\x09\x04\x00\x13Het is niet leuk om me voor jou te\nverstoppen. Je vindt me veel te snel!")
          			  case 1:
/*<428>*/ 				printf("\x0E\x01\x09\x04\x11\x13Je hebt me alweer gevonden. Jeetje, het\nlijkt erop dat ik me niet voor je kan\nverstoppen.\n\n\x0E\x01\x09\x04\x0B\x07Eigenlijk vind ik dat dat wel een beloning\nwaard is. Hier, alsjeblieft. Dit heb ik\ntijdens het verstoppen gevonden.")
/*<430>*/ 				give_item(176 0xB0);
/*<429>*/ 				printf("\x0E\x01\x09\x04\x00\x14Vergeet niet, je mag het niemand\nvertellen!")
/*<431>*/ 				story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = true;
          			}
          		  case 1:
/*<425>*/ 			printf("\x0E\x01\x09\x04\x00\x07Dit is de plek waar wij leven. Er is genoeg\neten voor ons allemaal en het is hier fijn.")
          		}
          	}
          }

          void entrypoint_203_05() {
/*<  2>*/ 	start()
/*<224>*/ 	switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          	  case 0:
/*<432>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*<433>*/ 			printf("\x0E\x01\x09\x04\x00\x02Ik moet toegeven dat ik het water mis nu\nhet is weggelopen. Het was leuk dat de\nomgeving er even anders uitzag.")
/*<486>*/ 			printf("\x0E\x01\x09\x04\x00\x06Ho-ho-ho.")
/*<532>*/ 			entrypoint_203_09();
          		  case 1:
/*<434>*/ 			printf("\x0E\x01\x09\x04\x00\x0EDus de waterdraak heeft je waardig\nbevonden? Je weet me telkens weer\nte verrassen.")
/*<531>*/ 			entrypoint_203_09();
          		}
          	  case 1:
/*<225>*/ 		switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          		  case 0:
/*<226>*/ 			printf("\x0E\x01\x09\x04\x00\x0EDus je hebt Hare Majesteit, de water-\ndraak, ontmoet? Wat een fantastische\nervaring! Ik ben ongelofelijk jaloers!")
/*<530>*/ 			entrypoint_203_09();
          		  case 1:
/*<  5>*/ 			switch (scene_flags[55 /* 0x7 80 */]) {
          			  case 0:
/*<  9>*/ 				switch (story_flags[60 /* us: 805A9ADC 0x80, jp: 805ACD5C 0x80 */]) {
          				  case 0:
/*< 13>*/ 					switch (story_flags[63 /* us: 805A9ADC 0x40, jp: 805ACD5C 0x40 */]) {
          					  case 0:
/*< 15>*/ 						switch (temp_flags[5 /* 0x1 20 */]) {
          						  case 0:
          							flw_16:
/*< 16>*/ 							printf("\x0E\x01\x09\x04\x00\x02Wat is dit toch een wonderlijke wereld.\nHopelijk kom ik die kluizenaar zelf ook\neens tegen.")
/*<334>*/ 							printf("\x0E\x01\x09\x04\x00\x06Ho-ho-ho.")
/*<529>*/ 							entrypoint_203_09();
          						  case 1:
/*< 14>*/ 							printf("\x0E\x01\x09\x04\x00\x0EWat? Je hebt een Kikwi-kluizenaar\nontmoet die in de boom woont? Geweldig!\nAl die tijd dacht ik dat er maar vijf\nKikwi's in het woud woonden!")
/*< 17>*/ 							temp_flags[5 /* 0x1 20 */] = true;
          							goto flw_16
          						}
          					  case 1:
/*< 12>*/ 						printf("\x0E\x01\x09\x04\x00\x0EDus je bent naar de top van de boom\ngeklommen? Heel knap!\n\n\n\x0E\x01\x09\x04\x00\x08Wat zeg je? Er woont daar ook iemand?\nNou, je komt vast nog wel meer te weten\nover deze mysterieuze boombewoner.")
/*<528>*/ 						entrypoint_203_09();
          					}
          				  case 1:
/*< 11>*/ 					switch (scene_flags[19 /* 0x3 08 */]) {
          					  case 0:
/*<  8>*/ 						printf("\x0E\x01\x09\x04\x00\x0EJe hebt een weg naar het binnenste deel\nvan de boom gevonden? Knap, hoor!")
/*< 80>*/ 						printf("\x0E\x01\x09\x04\x00\x02Het uitzicht vanuit de top van de boom\nis prachtig! En je weet maar nooit wat\nje er allemaal zult zien...")
/*<527>*/ 						entrypoint_203_09();
          					  case 1:
/*< 10>*/ 						printf("\x0E\x01\x09\x04\x00\x03Er zijn nog delen van dit woud die je niet\nhebt verkend, kwieee.\n\n\n\x0E\x01\x09\x04\x00\x08Met de kracht van de waterdrakenschub\nkun je onderwater zwemmen, kwieee.\nDaarvoor druk je op (A) terwijl je je\nin het water bevindt.")
/*<526>*/ 						entrypoint_203_09();
          					}
          				}
          			  case 1:
/*<436>*/ 				switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          				  case 0:
/*< 20>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 328, 'param3': 31}
/*<328>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 327, 'param3': 6}
/*<327>*/ 					set_camera(1, 0)
/*<330>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 3, 'param3': 13}
/*<  3>*/ 					printf("\x0E\x01\x09\x04\x00\x0EO, hallo. Ik zie dat je daar de\nwaterdrakenschub hebt, kwieee.\n\n\n\x0E\x01\x09\x04\x00\x02Dat is fantastisch! Ze zeggen dat als je er\neen van hebt, kwieee, je door het water\nglijdt zoals een draak tijdens zijn vlucht.")
/*<329>*/ 					set_camera(-1, 0)
/*<  6>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 7, 'param3': 13}
/*<  7>*/ 					printf("\x0E\x01\x09\x04\x00\x03Je hebt vast nog niet het hele woud\nverkend, kwieee.\n\n\n\x0E\x01\x09\x04\x00\x08Met de waterdrakenschub kun je gebieden\nverkennen die je eerder niet kon bereiken,\nkwieee!")
/*<331>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 332, 'param3': 13}
/*<332>*/ 					printf("\x0E\x01\x09\x04\x00\x06Ho-ho-ho.")
/*<333>*/ 					scene_flags[1 'Faron Woods'][55 /* 0x7 80 */] = true;
/*<525>*/ 					entrypoint_203_09();
          				  case 1:
/*<435>*/ 					printf("\x0E\x01\x09\x04\x00\x03Zo te zien heb je het meisje niet diep in\nhet hart van het woud gevonden\nkie-paliep.\n\n\x0E\x01\x09\x04\x00\x02Maar geef het niet op! Als ik herenigd\nkon worden met mijn Kikwi-vrienden,\nvind jij vast je vriendin weer terug,\nkwieee!")
/*<524>*/ 					entrypoint_203_09();
          				}
          			}
          		}
          	}
          }

          void entrypoint_203_91() {
/*< 49>*/ 	start()
/*< 51>*/ 	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          	  case 0:
/*< 70>*/ 		switch (adventure_pouch_has(7 0x0007)) {
          		  case 0:
/*<319>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<320>*/ 				printf("\x0E\x01\x09\x04\x09\x707Wat is dat? Heb je daar <b<heilig water>>?\nGiet het maar snel in mijn bad!")
          				flw_351:
/*<351>*/ 				story_flags[85 /* us: 805A9AE8 0x02, jp: 805ACD68 0x02 */] = true;
/*<515>*/ 				{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<549>*/ 				printf("\x0E\x01\x09\x04\x00\x0FHm...")
/*<318>*/ 				printf("\x0E\x01\x09\x04\x07\x709Ja, moet je die kleur zien! Dat is\nongetwijfeld het heilige water waar\nik om zat te smachten. Snel, jochie,\ngiet het in mijn bad!")
          				goto flw_351
          			}
          		  case 1:
/*<548>*/ 			printf("\x0E\x01\x09\x04\x00\x0FHm...")
/*< 69>*/ 			printf("\x0E\x01\x09\x04\x07\x706Schiet op, breng me het heilige water\nwaar ik naar verlang. Als je dat doet,\ntoon ik je de weg naar de heilige vlam.")
          		}
          	  case 1:
/*< 53>*/ 		switch (scene_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 50>*/ 			printf("\x0E\x01\x09\x04\x00\x0FHm...")
/*< 58>*/ 			printf("\x0E\x01\x09\x04\x09\x706Ik leid je alleen naar de heilige vlam\nals je me het gevraagde <b<heilige water>>\nbrengt.\n[1]Oké![2-]Nee, dank u.")
/*< 60>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_61:
/*< 61>*/ 				entrypoint_203_52();
          			  case 1:
/*< 59>*/ 				printf("\x0E\x01\x09\x04\x09\x704Zo. Dus de opdracht was te moeilijk voor\njou? Dan ben je dus toch maar een\ndoodgewone mens...")
/*<473>*/ 				temp_flags[0 /* 0x1 01 */] = true;
          			}
          		  case 1:
/*<282>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*<457>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 454, 'param3': 49}
/*<454>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 455, 'param3': 6}
/*<455>*/ 				set_camera(11, 0)
/*<456>*/ 				{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 356, 'next': 283, 'param3': 15}
          				flw_283:
/*<283>*/ 				printf("\x0E\x01\x09\x04\x00\x0FJe bent mijn woning binnengedrongen,\neen heilige plek waar weinigen in toe\nworden gelaten!\n\n\x0E\x01\x09\x04\x09\x700Dit is geen plek voor iemand als jij.\nMaar toch sta je hier! Leg snel uit\nhoe je dat hebt gedaan!\n[1]Waterdraak?[2]Ik ben verdwaald.")
/*< 54>*/ 				switch (choice(2)) {
          				  case 0:
/*<458>*/ 					scene_flags[2 'Lake Floria'][0 /* 0x1 01 */] = true;
/*<474>*/ 					set_camera(27, 0)
/*<475>*/ 					printf("\x0E\x01\x09\x04\x07\x903Dat ben ik. Zij met goede manieren\nspreken me aan met \"Faron, wachter\nvan het woud\". De godin zelf heeft\nme aangesteld.\nHoewel mijn huidige gedaante weinig\nintimiderend is, moet je weten dat je je\nin de aanwezigheid bevindt van een\ntrouwe dienaar van de godin.\x0E\x01\x09\x04\x09\x900\n<pause0A>\x0E\x01\x09\x04\x00\x07Hm?")
/*<451>*/ 					set_camera(11, 0)
/*<452>*/ 					printf("\x0E\x01\x09\x04\x09\x900\x0E\x01\x06\x02\xFECDWat zie ik nou?<pause0F>\x0E\x01\x09\x04\x00\x06\x0E\x01\x06\x02\x2CD Dat is een van MIJN\nschubben!\n\n\n\x0E\x01\x09\x04\x09\x700Zo'n heilig geschenk kan alleen in het\nbezit zijn van de door de godin\nuitverkoren held. \x0E\x01\x09\x04\x00\x05Kun jij dat echt zijn?\n\n\x0E\x01\x09\x04\x07\x700Ik vraag me af... Zelfs met die schub is\nhet niet eenvoudig om mij te vinden. Hoe\nis je dat gelukt?")
/*<453>*/ 					set_camera(27, 0)
/*< 55>*/ 					printf("\x0E\x01\x09\x04\x07\x704O, ja...<pause1E> Die maffe, ouwe Kikwi-kluizenaar\nheeft je natuurlijk verteld waar ik woon.\n\n\n\x0E\x01\x09\x04\x09\x910Echt waar, ik heb hem al zo vaak gezegd\ndat hij zijn mond dicht moet houden.\nNu heb ik er genoeg van. De volgende\nkeer dat ik 'm zie, eet ik 'm op!\n\x0E\x01\x09\x04\x07\x900Maar genoeg daarover.<pause1E> Je bent hier voor\neen <r<heilige vlam>>, nietwaar?\n[1]Precies![2]Ben ik vergeten...")
/*<284>*/ 					switch (choice(2)) {
          					  case 0:
/*<285>*/ 						printf("\x0E\x01\x09\x04\x09\x704Ik wist het wel!")
          						flw_463:
/*<463>*/ 						printf("\x0E\x01\x09\x04\x09\x700Maar als ik eerlijk ben, ziet een\nopdondertje als jij er niet bepaald\nuit als een door de godin\nuitverkoren held.\n\x0E\x01\x09\x04\x07\x703Er is geen twijfel over mogelijk. Er is\neen test vereist om te zien of je wel echt\nbent wie je zegt te zijn.\n\nKort voor je komst werd ik aangevallen\ndoor een pretentieus wezen dat zichzelf\n<b<Ghirahim>> noemt.\n\nIk heb me weten te weren tegen de aanval\nvan deze zelfbenoemde demonenvorst,\nmaar ben wel gewond geraakt.")
/*<465>*/ 						set_camera(28, 0)
/*<464>*/ 						printf("\x0E\x01\x09\x04\x07\x70FDe verwondingen die hij me heeft\ntoegebracht, willen niet genezen.\nIk zit daarom gedwongen in dit\nbad vol <b<heilig water>>.\n\x0E\x01\x09\x04\x09\x700Helaas is de genezende kracht van\nhet water afgenomen en heb ik dus\neen nieuwe dosis nodig om volledig\nte kunnen genezen.\n\x0E\x01\x09\x04\x09\x906<r<Haal daarom<pling> wat vers heilig water>> voor\nmij.")
/*<450>*/ 						set_camera(27, 0)
/*< 56>*/ 						printf("Als je dit voor me doet, laat ik je met\nplezier zien waar je de heilige vlam kunt\nvinden. Wat zeg je ervan?\n[1]Klinkt goed![2-]Nee, dank u.")
/*< 57>*/ 						switch (choice(2)) {
          						  case 0:
/*<466>*/ 							temp_flags[3 /* 0x1 08 */] = true;
          							goto flw_61
          						  case 1:
/*<286>*/ 							printf("\x0E\x01\x09\x04\x09\x704Zo. Dus de opdracht was te moeilijk voor\njou? Dan ben je dus toch maar een\ndoodgewone mens...")
/*<287>*/ 							temp_flags[0 /* 0x1 01 */] = true;
/*<460>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						}
          					  case 1:
/*<291>*/ 						set_camera(11, 0)
/*<292>*/ 						printf("\x0E\x01\x09\x04\x09\x910\x0E\x01\x08\x02\x1CDSpot niet met mij, jochie! Als je\ngrappig probeert te zijn, heb je\naan mij een kwaaie!\n\n\x0E\x01\x09\x04\x01\x900Maar toch... Weinig mensen durven zo\nbrutaal tegen mij te zijn. Je laat je niet\nmakkelijk intimideren. Daar mag je best\ntrots op zijn.")
/*<296>*/ 						set_camera(27, 0)
          						goto flw_463
          					}
          				  case 1:
/*<289>*/ 					set_camera(11, 0)
/*<290>*/ 					printf("\x0E\x01\x09\x04\x09\x910Drijf niet de spot met mij, jochie!\n\n\n\nAls je nog langer mijn tijd verspilt,\nbijt ik je hoofd eraf!")
/*<459>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				}
          			  case 1:
/*<449>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 298, 'param3': 49}
/*<298>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 412, 'param3': 6}
/*<412>*/ 				set_camera(11, 0)
/*<448>*/ 				{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 356, 'next': 52, 'param3': 15}
/*< 52>*/ 				printf("\x0E\x01\x09\x04\x00\x01\x0E\x01\x08\x02\x2CDHé! Jij daar, mens!")
/*<281>*/ 				temp_flags[1 /* 0x1 02 */] = true;
/*<288>*/ 				set_camera(27, 0)
          				goto flw_283
          			}
          		}
          	}
          }

          void entrypoint_203_57() {
/*<156>*/ 	start()
/*<157>*/ 	printf("\x0E\x01\x12\x04\x00\x01Meester, er is niets meer dat u hier nu\nkunt doen. Laten we terugkeren naar het\nhemelrijk zodat we koers naar de vulkaan\nkunnen zetten.")
/*<166>*/ 	story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */] = true;
/*<206>*/ 	story_flags[677 /* us: 805A9B20 0x40, jp: 805ACDA0 0x40 */] = true;
/*<280>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
/*<176>*/ 	scene_flags[2 'Lake Floria'][127 /* 0xE 80 */] = true;
/*<316>*/ 	story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<203>*/ 	story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */] = false;
/*<204>*/ 	story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = false;
/*<202>*/ 	story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */] = false;
/*<205>*/ 	story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */] = false;
/*<200>*/ 	story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */] = false;
/*<201>*/ 	story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */] = false;
          }

          void entrypoint_203_06() {
/*< 31>*/ 	start()
/*<392>*/ 	printf("\x0E\x01\x09\x04\x03\x0FIk ben eerder iets belangrijks vergeten\nte zeggen.<pause0F> Hare majesteit, de waterdraak,\nvindt goede manieren heel belangrijk...\nDus let op de jouwe!\n\x0E\x01\x09\x04\x01\x00Als ze een slecht humeur heeft... \x0E\x01\x09\x04\x00\x0Bkun\nje eindigen als een tussendoortje,\nkwwwwrk!")
/*<447>*/ 	set_camera(18, 0)
/*<393>*/ 	printf("\x0E\x01\x09\x04\x01\x00Ik smaak vast als oud mos, maar ik zit er\nniet op te wachten om door haar\nopgegeten te worden, kwwwrk!\n\n\x0E\x01\x09\x04\x03\x06Dus vertel haar niet dat ik je over\nFarores vlam heb verteld, oké?\n\n\n\x0E\x01\x09\x04\x03\x07En vergeet niet om je in haar verblijf\nte gedragen als een beleefde gast!")
/*<446>*/ 	set_camera(20, 0)
/*<387>*/ 	printf("\x0E\x01\x09\x04\x00\x13Als je me nodig hebt, weet je me wel te\nvinden. Ik doe hier een dutje! Tot ziens,\nkwwwwwwrk...")
/*<388>*/ 	story_flags[63 /* us: 805A9ADC 0x40, jp: 805ACD5C 0x40 */] = true;
/*<389>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_92() {
/*< 68>*/ 	start()
/*<172>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<488>*/ 		switch (scene_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*<497>*/ 			entrypoint_203_85();
          		  case 1:
/*<487>*/ 			printf("\x0E\x01\x09\x04\x07\x702Het doet me goed om te zien hoeveel\nmonsters je uit dit woud hebt verdreven.\nJe bent je zwaard waardig.\n\n\x0E\x01\x09\x04\x07\x704Toen je me voor het eerst bezocht, leek je\neen onzeker, klein mensje...<pause1E> Maar nu blaak\nje van zelfvertrouwen.\n\n\x0E\x01\x09\x04\x07\x706Zorg er echter voor dat je je vol overgave\nin blijft zetten. Je moet wel, anders lukt\nhet je niet om de taak uit te voeren die je\nis toevertrouwd.")
/*<489>*/ 			scene_flags[2 'Lake Floria'][1 /* 0x1 02 */] = true;
          		}
          	  case 1:
/*<173>*/ 		switch (story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */]) {
          		  case 0:
/*<170>*/ 			printf("\x0E\x01\x09\x04\x07\x702Breng het bad terug zodra je er klaar mee\nbent, maar er is geen haast.")
          		  case 1:
/*<171>*/ 			switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
          			  case 0:
/*<174>*/ 				switch (scene_flags[127 /* 0xE 80 */]) {
          				  case 0:
/*<175>*/ 					printf("\x0E\x01\x09\x04\x07\x707Hmm? Je wilt mijn <r<bad >>nog eens lenen?\n\n\n\n<pause1E>\x0E\x01\x09\x04\x00\x05Hmm...<pause0F> prima. Maar ik moet zeggen dat\nhet ding dat er de vorige keer mee\nterugkwam, een nogal grote mond heeft!\n\n\x0E\x01\x09\x04\x07\x706Ik heb er niets aan gedaan omdat hij voor\njou werkt, maar als je dat ongelikte ding\ngeen manieren leert, doe ik het wel.")
          				  case 1:
/*<169>*/ 					printf("\x0E\x01\x09\x04\x00\x06O, jij bent het. Vertel, hoe gaat het met je\nbeheersing over de kracht van je zwaard?\n\n\n\x0E\x01\x09\x04\x07\x707O? Je wilt mijn <r<bad>> lenen?<pause1E> \x0E\x01\x09\x04\x00\x05Hmm...<pause0F> Prima.\nIk ben weer volledig hersteld en ben niet\nvan plan om het binnenkort te gebruiken!\n\n\x0E\x01\x09\x04\x07\x706Neem het mee en doe ermee wat je wilt.")
          				}
          			  case 1:
/*<168>*/ 				switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          				  case 0:
/*< 86>*/ 					printf("\x0E\x01\x09\x04\x07\x702Je draagt een prachtig zwaard. Zorg\nervoor dat je de kracht hebt die je nodig\nhebt om het te hanteren.")
          				  case 1:
/*< 74>*/ 					switch (story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */]) {
          					  case 0:
/*< 73>*/ 						printf("\x0E\x01\x09\x04\x07\x70FEn ooit komt de dag dat ik Ghirahim\nzijn daden hier betaald zal zetten.")
          					  case 1:
/*< 71>*/ 						printf("\x0E\x01\x09\x04\x09\x900Mmmmmm! Fantastisch! Ik voel de\nenergie door mijn lijf gieren!")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_203_58() {
/*<299>*/ 	start()
/*<301>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 300, 'param3': 40}
/*<300>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 302, 'param3': 6}
/*<302>*/ 	{'type': 'type3', 'subType': 1, 'param1': 340, 'param2': 0, 'next': 310, 'param3': 51}
/*<310>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 307, 'param3': 40}
/*<307>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 308, 'param3': 16}
/*<308>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 309, 'param3': 17}
/*<309>*/ 	set_camera(13, 0)
/*<304>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMeester, ik heb nieuwe informatie voor u.\n\n\n\nVolgens mijn schattingen bevindt u zich\nin het zuidwesten van het Faron-woud.\nBevestig deze locatie alstublieft op\nde kaart.")
/*<321>*/ 	scene_flags[1 'Faron Woods'][56 /* 0x6 01 */] = true;
/*<322>*/ 	{'type': 'type3', 'subType': 4, 'param1': 256, 'param2': 0, 'next': 305, 'param3': 30}
/*<305>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 306, 'param3': 34}
/*<306>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 303, 'param3': 6}
/*<303>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 311, 'param3': 36}
/*<311>*/ 	set_camera(14, 0)
/*<312>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_93() {
/*< 72>*/ 	start()
/*<187>*/ 	set_camera(3, 0)
/*<198>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 79, 'param3': 17}
/*< 79>*/ 	printf("\x0E\x01\x09\x04\x07\x705Let nu op...")
/*<188>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 190, 'param3': 32}
/*<190>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 189, 'param3': 17}
/*<189>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 270, 'param3': 17}
/*<270>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 268, 'param3': 6}
/*<268>*/ 	set_camera(5, 0)
/*<269>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 0, 'next': 266, 'param3': 13}
/*<266>*/ 	printf("\x0E\x01\x09\x04\x00\x300\x0E\x01\x05\x04<\x00\x0E\x01\x08\x02\x1CDHmmm\x0E\x01\x06\x02\xFCCD...")
/*<265>*/ 	set_camera(4, 0)
/*<267>*/ 	printf("")
/*< 78>*/ 	scene_flags[2 'Lake Floria'][100 /* 0xD 10 */] = true;
/*<273>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 196, 'param3': 6}
/*<196>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 194, 'param3': 13}
/*<194>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 191, 'param3': 17}
/*<191>*/ 	printf("\x0E\x01\x09\x04\x00\x06Ga. De heilige vlam die je zoekt, bevindt\nzich hierbinnen.\n\n\nAl sluit de waterval deze plek al vele jaren\naf van de rest van de wereld, toch hebben\nvele monsters een weg naar binnen\ngevonden.")
/*<274>*/ 	set_camera(8, 0)
/*<195>*/ 	set_camera(3, 0)
/*<192>*/ 	printf("\x0E\x01\x09\x04\x07\x704Ach, maar jij bent de door de godin\nuitverkoren held.\n\n\nJij en ik zullen elkaar snel genoeg weer\nzien, lijkt mij. Blijf tot die tijd op je hoede.\n\x0E\x01\x09\x04\x07\x703Tot ziens, jochie.")
/*<193>*/ 	set_camera(6, 0)
/*<278>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 277, 'param3': 6}
/*<277>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 199, 'param3': 17}
/*<199>*/ 	make_actor_do_something(0, 0)
/*<314>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 279, 'param3': 6}
/*<279>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 313, 'param3': 17}
/*<313>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 197, 'param3': 6}
/*<197>*/ 	story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */] = true;
/*<271>*/ 	set_camera(7, 0)
/*<272>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_07() {
/*<352>*/ 	start()
/*<353>*/ 	printf("\x0E\x01\x05\x04<\x00\x0E\x01\x08\x02\x2CDKikwiiiiiiiiii!")
          }

          void entrypoint_203_59() {
/*<476>*/ 	start()
/*<477>*/ 	printf("Ja, zoals ik al dacht, is het niveau van het\nwater in het Faron-woud gedaald. Het\nwoud is teruggekeerd naar zijn\noorspronkelijke staat.")
/*<478>*/ 	entrypoint_006_04();
          }

          void entrypoint_203_94() {
/*<207>*/ 	start()
/*<315>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 209, 'param3': 17}
/*<209>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 210, 'param3': 6}
/*<210>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 208, 'param3': 17}
/*<208>*/ 	printf("\x0E\x01\x09\x04\x07\x702O, het zwaard dat je bij je draagt, is veel\nsterker dan de vorige keer dat ik je zag...")
/*<212>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1792, 'next': 211, 'param3': 13}
/*<211>*/ 	printf("Ongelofelijk, de uitverkoren held van de\ngodin is maar een jochie. Wie had dat\ngedacht...")
/*<215>*/ 	set_camera(3, 0)
/*<214>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 4, 'next': 213, 'param3': 13}
/*<213>*/ 	printf("\x0E\x01\x09\x04\x07\x700Uitverkoren held of niet, je bent nog niet\nsterk genoeg om de volledige kracht van\ndat zwaard te benutten.")
/*<217>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 216, 'param3': 13}
/*<216>*/ 	printf("Je moet blijven trainen! Wijd jezelf\nvolledig aan deze taak.")
/*<481>*/ 	set_camera(32, 0)
/*<480>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 6, 'next': 479, 'param3': 13}
/*<479>*/ 	printf("\x0E\x01\x09\x04\x07\x700Tot ziens, jochie.")
/*<483>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 484, 'param3': 32}
/*<484>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 485, 'param3': 17}
/*<485>*/ 	make_actor_do_something(0, 0)
/*<482>*/ 	set_camera(9, 0)
/*<218>*/ 	story_flags[118 /* us: 805A9AEA 0x08, jp: 805ACD6A 0x08 */] = true;
/*<275>*/ 	set_camera(10, 0)
/*<276>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_08() {
/*<390>*/ 	start()
/*<391>*/ 	printf("\x0E\x01\x09\x04\x01\x0B\x0E\x01\x05\x04<\x00\x0E\x01\x08\x02\x2CDO, wacht even!")
          }

          void entrypoint_203_95() {
/*<335>*/ 	start()
/*<336>*/ 	printf("\x0E\x01\x09\x04\x07\x705Let nu op...")
          }

          void entrypoint_203_60() {
/*<500>*/ 	start()
/*<501>*/ 	printf("Ik wist niet dat mensen zo diep\nkunnen duiken!\n\n\nKun je ook een <r<waterbooraanval >>doen?")
          }

          void entrypoint_203_09() {
/*<519>*/ 	start()
/*<520>*/ 	switch (story_flags[481 /* us: 805A9B11 0x20, jp: 805ACD91 0x20 */]) {
          	  case 0:
/*<523>*/ 		printf("\x0E\x01\x09\x04\x00\x08Over omgeving gesproken, hoe gaat\nhet met Oelo in die grote, wijde wereld.\nGaat het goed met hem?")
          	  case 1:
/*<521>*/ 		switch (story_flags[1094 /* us: 805A9B52 0x10, jp: 805ACDD2 0x10 */]) {
          		  case 0:
/*<522>*/ 			printf("\x0E\x01\x09\x04\x00\x08O ja, heb je gehoord dat Oelo het woud wil\nverlaten, in zijn eentje? Wat een dappere\nKikwi...")
          		  case 1:
          		}
          	}
          }

          void entrypoint_203_96() {
/*<337>*/ 	start()
/*<339>*/ 	printf("\x0E\x01\x09\x04\x00\x300\x0E\x01\x05\x04<\x00\x0E\x01\x08\x02\x1CDHmmm\x0E\x01\x06\x02\xFCCD...")
          }

          void entrypoint_203_61() {
/*<502>*/ 	start()
/*<503>*/ 	printf("Zeg, meneer de mens, weet je hoe je een\n<r<draaisprong>> maakt?\n\n\nAls je een waterbooraanval <r<richting het\nwateroppervlak>> maakt, kun je een\nprachtige sprong maken!")
          }

          void entrypoint_203_97() {
/*<340>*/ 	start()
/*<338>*/ 	printf("")
          }

          void entrypoint_203_62() {
/*<504>*/ 	start()
/*<505>*/ 	printf("Ha! Mens in het water! <pause14>Moet je hem nou\nmet zijn armen zien flapperen!")
          }

          void entrypoint_203_10() {
/*<579>*/ 	start()
/*<580>*/ 	story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */] = true;
/*<581>*/ 	set_camera(24, 0)
/*<582>*/ 	printf("\x0E\x01\x09\x04\x00\x03Gebruik de kracht van de godin om het\nsymbool op de poort te voltooien.")
/*<583>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 584, 'param3': 30}
/*<584>*/ 	printf("\x0E\x01\x09\x04\x00\x09Plaats een baken op de \x0E\x02\x04\x02\x19CD op de kaart,\nzodat je de locatie kunt vinden waar ik\nhet over had, kwwwrk!")
/*<585>*/ 	set_camera(18, 0)
          	flw_406:
/*<406>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 35, 'param3': 34}
/*< 35>*/ 	printf("\x0E\x01\x09\x04\x01\x06Komt al deze informatie binnen, knul?\nWeet je nu waar je naar het symbool\nmoet gaan zoeken?\n[1]Ja![2-]Eh...")
/*< 36>*/ 	switch (choice(2)) {
          	  case 0:
/*< 45>*/ 		switch (story_flags[63 /* us: 805A9ADC 0x40, jp: 805ACD5C 0x40 */]) {
          		  case 0:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x00\x13Als je me nodig hebt, weet je me wel te\nvinden. Ik doe hier een dutje! Tot ziens,\nkwwwwwwrk...")
          		  case 1:
/*< 47>*/ 			printf("\x0E\x01\x09\x04\x03\x07Nou, dan wens ik je een goeie reis.")
/*< 48>*/ 			story_flags[61 /* us: 805A9ADF 0x01, jp: 805ACD5F 0x01 */] = true;
          		}
          	  case 1:
/*< 38>*/ 		printf("\x0E\x01\x09\x04\x00\x03Oké, kwwwwrk, laten we het nog eens\nproberen...")
          		flw_37:
/*< 37>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 32, 'param3': 30}
/*< 32>*/ 		switch (story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */]) {
          		  case 0:
/*< 33>*/ 			printf("\x0E\x01\x09\x04\x00\x09Plaats een baken op de \x0E\x02\x04\x02\x19CD op de kaart,\nzodat je de locatie kunt vinden waar ik\nhet over had, kwwwrk!")
          			goto flw_406
          		  case 1:
/*< 34>*/ 			story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */] = true;
/*<411>*/ 			printf("\x0E\x01\x09\x04\x01\x04De poort ligt in het zuiden, dus de\nkans is groot dat er in het noorden\neen zelfde symbool is. Ik stel voor\ndat je nabij deze \x0E\x02\x04\x02\x19CD zoekt, kwwwrk!")
          			goto flw_406
          		}
          	}
          }

          void entrypoint_203_80() {
/*< 87>*/ 	start()
/*<104>*/ 	switch (story_flags[111 /* us: 805A9AEB 0x10, jp: 805ACD6B 0x10 */]) {
          	  case 0:
/*<105>*/ 		switch (story_flags[112 /* us: 805A9AEB 0x20, jp: 805ACD6B 0x20 */]) {
          		  case 0:
/*<121>*/ 			switch (story_flags[113 /* us: 805A9AEB 0x40, jp: 805ACD6B 0x40 */]) {
          			  case 0:
/*<129>*/ 				switch (story_flags[114 /* us: 805A9AEB 0x80, jp: 805ACD6B 0x80 */]) {
          				  case 0:
/*<138>*/ 					switch (scene_flags[15 /* 0x0 80 */]) {
          					  case 0:
/*<140>*/ 						switch (temp_flags[15 /* 0x0 80 */]) {
          						  case 0:
/*<262>*/ 							switch (temp_flags[16 /* 0x3 01 */]) {
          							  case 0:
/*<263>*/ 								printf("Kom binnen.")
          							  case 1:
/*<261>*/ 								printf("Hare Majesteit de waterdraak bevindt\nzich iets verderop. Een momentje,\nalsjeblieft.")
/*<264>*/ 								temp_flags[16 /* 0x3 01 */] = true;
          							}
          						  case 1:
/*<139>*/ 							printf("Eindelijk, we zijn er!")
/*<142>*/ 							temp_flags[15 /* 0x0 80 */] = true;
          						}
          					  case 1:
/*<141>*/ 						printf("Wauw, de godin weet wel hoe zij ze moet\nkiezen! Je was geweldig!")
/*<143>*/ 						scene_flags[2 'Lake Floria'][15 /* 0x0 80 */] = true;
          					}
          				  case 1:
/*<130>*/ 					switch (scene_flags[14 /* 0x0 40 */]) {
          					  case 0:
/*<345>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 0, 'next': 131, 'param3': 13}
/*<131>*/ 						switch (temp_flags[14 /* 0x0 40 */]) {
          						  case 0:
/*<132>*/ 							printf("Zeg... Wij zijn toch vrienden? We houden\nallebei van... water. Doe me geen pijn...")
          						  case 1:
/*<555>*/ 							scene_flags[2 'Lake Floria'][50 /* 0x7 04 */] = false;
/*<554>*/ 							scene_flags[2 'Lake Floria'][51 /* 0x7 08 */] = true;
/*<556>*/ 							printf("Jakkes! Ze zijn er weer! Dat is een\nvan de vissen die die idioot mee had\ngenomen om Hare Majesteit mee\naan te vallen.\nKijk uit, het zijn gemene beesten!")
/*<557>*/ 							temp_flags[14 /* 0x0 40 */] = true;
/*<550>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 551, 'param3': 32}
/*<551>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 552, 'param3': 17}
/*<552>*/ 							set_camera(33, 0)
/*<553>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						}
          					  case 1:
/*<133>*/ 						printf("Wauw! Mooie sprong!\n\n\n\nIk zou je geweldig noemen als ik niet wist\ndat je zonder de schub van de waterdraak\nnooit zo hoog had kunnen springen.")
/*<134>*/ 						scene_flags[2 'Lake Floria'][14 /* 0x0 40 */] = true;
          					}
          				}
          			  case 1:
/*<122>*/ 				switch (scene_flags[13 /* 0x0 20 */]) {
          				  case 0:
/*<124>*/ 					switch (temp_flags[13 /* 0x0 20 */]) {
          					  case 0:
/*<125>*/ 						printf("Als je er niet doorheen kunt gaan, kun je\nook over de muur springen.")
/*<587>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          					  case 1:
/*<123>*/ 						printf("Kom op, kom op! Schiet een beetje op, ja?\n\n\n\nHè? Je komt er niet door? Jeetje, jullie\nmensen ook met jullie botten. Wat\nonhandig. Nou, als het moet, kun je ook\nover deze muur springen.")
/*<127>*/ 						temp_flags[13 /* 0x0 20 */] = true;
          					}
          				  case 1:
/*<126>*/ 					printf("Dat heb je goed gedaan! We zijn bijna bij\nHare Majesteit. Deze kant op!")
/*<128>*/ 					scene_flags[2 'Lake Floria'][13 /* 0x0 20 */] = true;
          				}
          			}
          		  case 1:
/*<113>*/ 			switch (scene_flags[12 /* 0x0 10 */]) {
          			  case 0:
/*<115>*/ 				switch (temp_flags[12 /* 0x0 10 */]) {
          				  case 0:
/*<116>*/ 					printf("Zie je die monsters daar? Ze zien er\ngemeen uit, maar als je een <r<waterboor-\naanval >>uitvoert, kun je ze makkelijk\nverslaan.")
          				  case 1:
/*<114>*/ 					printf("Hé, dat is vreemd. Ik zou hier een vriend\ntreffen, maar het pad is door een\ngigantisch rotsblok geblokkeerd.\n\nGeweldig. Wat moeten we nu?")
/*<118>*/ 					temp_flags[12 /* 0x0 10 */] = true;
          				}
          			  case 1:
/*<117>*/ 				printf("Wat?! Hoe is dat mogelijk? Ik heb\neen mens nog nooit een waterbooraanval\nzien doen!\n\nWacht.<pause0A>.<pause0A>.<pause0A> Dat is de <b<waterdrakenschub>>!\nBetekent dat dat je de gezant van de\ngodin bent, zoals de waterdraak al\nzei?\nHé, ik heb een idee! Misschien kun jij\nHare Majesteit helpen?\n[1]Wat is het probleem?[2]Breng me ernaartoe!")
/*<498>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_499:
/*<499>*/ 					printf("Ja, daarover...<pause0F> Het is onlangs gebeurd.\nEen idioot viel binnen met een bende\nmonsters en vloog op Hare Majesteit af.\n\nZij is een sterke vechter en slokte een boel\nvan de monsters al binnen enkele\nseconden op.\n\nHet waren er alleen heel veel. Terwijl\nze afgeleid was, lukte het de sukkel die\nde monsters leidde, om haar te\nverwonden.\nEnkele wonden zijn al genezen, maar ze\nzegt dat ze niet genoeg speciaal water\nheeft om volledig te herstellen.\n\nZou je met Hare Majesteit kunnen gaan\npraten om te zien of je haar kunt helpen?\n\n\nIk breng je wel naar haar toe. Volg mij!")
/*<119>*/ 					scene_flags[2 'Lake Floria'][12 /* 0x0 10 */] = true;
          				  case 1:
          					goto flw_499
          				}
          			}
          		}
          	  case 1:
/*<106>*/ 		switch (scene_flags[11 /* 0x0 08 */]) {
          		  case 0:
/*<108>*/ 			switch (temp_flags[11 /* 0x0 08 */]) {
          			  case 0:
/*<109>*/ 				printf("Ja, om dat te doen moet je een\n<g<waterbooraanval >>kunnen uitvoeren\nen dat kun jij duidelijk niet!")
/*<586>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          			  case 1:
/*<107>*/ 				printf("Ha-HA! Dat zag je niet aankomen, hè?\nJa, het lukt je nooit van z'n lang zal ze\nleven om me nu nog te volgen!\n\nEn wat ga je nu doen? Huilen? Als je\ndenkt dat je het kunt, probeer dan\nmaar eens hier te komen!")
/*<111>*/ 				temp_flags[11 /* 0x0 08 */] = true;
          			}
          		  case 1:
/*<508>*/ 			switch (scene_flags[110 /* 0xC 40 */]) {
          			  case 0:
/*<110>*/ 				printf("Volg me niet zo, lastpak! Als je daar niet\nmee ophoudt, vertel ik hare majesteit\nde waterdraak over je gepest!")
/*<112>*/ 				scene_flags[2 'Lake Floria'][11 /* 0x0 08 */] = true;
          			  case 1:
/*<509>*/ 				printf("O, néé. Nog zo'n mens!\n\n\n\nOké, oké... Vermijd oogcontact en loop\nstilletjes weg...")
/*<510>*/ 				scene_flags[2 'Lake Floria'][110 /* 0xC 40 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_203_98() {
/*<341>*/ 	start()
/*<342>*/ 	printf("\x0E\x01\x09\x04\x00\x06Ga. De heilige vlam die je zoekt, bevindt\nzich hierbinnen.\n\n\nAl sluit de waterval deze plek al vele jaren\naf van de rest van de wereld, toch hebben\nvele monsters een weg naar binnen\ngevonden.")
          }

          void entrypoint_203_63() {
/*<506>*/ 	start()
/*<507>*/ 	printf("Het was hier heel lang erg vredig. Toen\nkwamen er opeens van die rare figuren\nals jij opdagen.\n\nDaarbij terroriseren enge vissen onze\nwateren! Door al die commotie kom ik\nzelden aan rust toe.")
          }

          void entrypoint_203_81() {
/*< 88>*/ 	start()
/*< 90>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<101>*/ 		printf("Wat een pech. Toen het woud onder water\nstond, moest ik hier blijven om de boel\nin de gaten te houden.\n\nIk wilde zo graag eens in het\nondergelopen gebied zwemmen.\nWat een teleurstelling!")
/*<562>*/ 		set_camera(34, 0)
/*<103>*/ 		make_actor_do_something(0, 0)
/*<102>*/ 		printf("Teleurstelling! Teleurstelling!")
          		flw_563:
/*<563>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<323>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<324>*/ 			printf("Hare Majesteit is op dit moment niet hier.")
/*<561>*/ 			set_camera(34, 0)
/*<326>*/ 			make_actor_do_something(0, 0)
/*<325>*/ 			printf("Niet hier! Niet hier!")
          			goto flw_563
          		  case 1:
/*< 89>*/ 			switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          			  case 0:
/*< 98>*/ 				printf("Dankzij jou is de waterdraak volledig\nhersteld. Enorm bedankt!")
/*<560>*/ 				set_camera(34, 0)
/*<100>*/ 				make_actor_do_something(0, 0)
/*< 99>*/ 				printf("Enorm bedankt! Enorm bedankt!")
          				goto flw_563
          			  case 1:
/*< 93>*/ 				switch (random(2)) {
          				  case 0:
/*< 95>*/ 					printf("Help Hare Majesteit alsjeblieft bij\nhaar herstel!")
/*<558>*/ 					set_camera(34, 0)
/*< 97>*/ 					make_actor_do_something(0, 0)
/*< 96>*/ 					printf("Help haar! Help haar!")
          					goto flw_563
          				  case 1:
/*< 91>*/ 					printf("Hare Majesteit bevindt zich iets verderop.\nGa gerust naar haar toe.")
/*<559>*/ 					set_camera(34, 0)
/*< 94>*/ 					make_actor_do_something(0, 0)
/*< 92>*/ 					printf("Kom op! Ga naar de waterdraak toe!")
          					goto flw_563
          				}
          			}
          		}
          	}
          }

          void entrypoint_203_99() {
/*<343>*/ 	start()
/*<344>*/ 	printf("\x0E\x01\x09\x04\x07\x704Ach, maar jij bent de door de godin\nuitverkoren held.\n\n\nJij en ik zullen elkaar snel genoeg weer\nzien, lijkt mij. Blijf tot die tijd op je hoede.\n\x0E\x01\x09\x04\x07\x703Tot ziens, jochie.")
/*<518>*/ 	story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */] = true;
          }

          void entrypoint_203_64() {
/*<511>*/ 	start()
/*<512>*/ 	printf("Zie je hem daar? Hij wil dolgraag in het\ngevlei raken bij de waterdraak.\n\n\nAls ik jou was, bleef ik ver bij hem\nvandaan. Er komt niets goeds van omgaan\nmet een slijmende Parella.")
          }

          void entrypoint_203_82() {
/*<120>*/ 	start()
/*<136>*/ 	switch (random(2)) {
          	  case 0:
/*<137>*/ 		printf("Kom op, kom op! Schiet een beetje op, ja?\n\n\n\nHè? Je komt er niet door? Jeetje, jullie\nmensen ook met jullie botten. Wat\nonhandig. Nou, als het moet, kun je ook\nover deze muur springen.")
          	  case 1:
/*<135>*/ 		printf("Ha-HA! Dat zag je niet aankomen, hè?\nJa, het lukt je nooit van z'n lang zal ze\nleven om me nu nog te volgen!\n\nEn wat ga je nu doen? Huilen? Als je\ndenkt dat je het kunt, probeer dan\nmaar eens hier te komen!")
          	}
          }

          void entrypoint_203_65() {
/*<513>*/ 	start()
/*<514>*/ 	printf("Ik ben dol op mijn huis. Ik zou alleen wel\nwillen dat het wat makkelijker was om\nnaar binnen en naar buiten te gaan.")
          }

          void entrypoint_203_83() {
/*<233>*/ 	start()
/*<245>*/ 	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          	  case 0:
/*<246>*/ 		switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          		  case 0:
/*<248>*/ 			switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          			  case 0:
/*<251>*/ 				printf("Ik vind het jammer dat het woud niet\nmeer onder water staat. Ik was graag\nnog wat meer op verkenning gegaan.")
          			  case 1:
/*<250>*/ 				printf("Ik ben zo blij dat Hare Majesteit weer\nhersteld is. Bedankt voor je hulp!")
          			}
          		  case 1:
/*<249>*/ 			printf("Sinds de aanval is Hare Majesteit niet\nzichzelf. Kun jij haar helpen?")
          		}
          	  case 1:
/*<252>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<247>*/ 			printf("De waterdraak is eigenlijk heel aardig...\ntenzij je haar kwaad maakt. Dus zorg\nervoor dat je dat niet doet!")
/*<253>*/ 			printf("Vertel het niet door.")
          		  case 1:
/*<234>*/ 			printf("Iek! Eet me niet op!\n[1]Hare Majesteit?[2]Geen zorgen.")
/*<236>*/ 			switch (choice(2)) {
          			  case 0:
/*<241>*/ 				switch (scene_flags[25 /* 0x2 02 */]) {
          				  case 0:
/*<244>*/ 					printf("Of ík de waterdraak ben? Nee, hoor!<pause1E>\nMaar je bent op zoek naar Hare\nMajesteit?\n\nZe is heel aardig, tenzij je onbeleefd\ntegen haar bent. Dan is ze enorm eng.\nDus als je haar ziet, zorg dan dat je je\nnetjes tegenover haar gedraagt.")
          					flw_239:
/*<239>*/ 					printf("Vertel het niet door.")
/*<240>*/ 					scene_flags[2 'Lake Floria'][19 /* 0x3 08 */] = true;
          				  case 1:
/*<237>*/ 					printf("Of ík de waterdraak ben? Nee, hoor!<pause1E>\nMaar je bent op zoek naar Hare\nMajesteit?\n\nJe bezit een van haar schubben, dus\nje moet wel een vriend van onze soort\nzijn. Ik vertel je wel waar je haar kunt\nvinden.")
/*<242>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 238, 'param3': 30}
/*<238>*/ 					printf("De waterdraak woont iets verderop.\nAls je dat ergens wilt noteren, dan\nis dit een mooi moment daarvoor.")
/*<243>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 239, 'param3': 34}
          					goto flw_239
          				}
          			  case 1:
/*<235>*/ 				printf("Waaat?<pause0F> Je wilt me niet opeten?<pause0F> Dat is een\nhele opluchting!\n\n\nIk verstop me hier al een hele tijd. Al\nsinds die enge school vissen hier langs\nkwam zwemmen.")
          			}
          		}
          	}
          }

          void entrypoint_203_49() {
/*<564>*/ 	start()
/*<565>*/ 	printf("\x0E\x01\x12\x04\x00\x01Meester, luister goed. Hoort u dat?")
          }

          void entrypoint_203_50() {
/*<  4>*/ 	start()
/*<255>*/ 	set_camera(-1, 0)
/*<254>*/ 	printf("Gefeliciteerd, \x0E\x01\x12\x04\x00\x04meester Link.")
/*<256>*/ 	printf("U heeft de beproeving voltooid. U heeft\nnu de kracht om naar de eerste vlam\nte gaan waarmee u uw je zwaard kunt\nstalen.")
/*<258>*/ 	set_camera(2, 0)
/*<257>*/ 	printf("De <y<waterdrakenschub>> is een van de heilige\ngeschenken van de godin.\n\n\nMet de kracht die u door de <b<waterdraak>>\nis geschonken, kunt u zich vrij onder\nwater bewegen.")
/*<260>*/ 	set_camera(-1, 0)
/*<259>*/ 	printf("De vlam die u zoekt, bevindt zich ergens\nin dit woud... \x0E\x01\x12\x04\x00\x01Meester, dat is waarschijn-\nlijk in een deel van dit gebied dat u nog\nniet verkend heeft.")
          }

          void entrypoint_203_85() {
/*<490>*/ 	start()
/*<492>*/ 	printf("\x0E\x01\x09\x04\x07\x707Ja? Heb je een vraag voor me?\n[1]Vuurdraak?[2]Donderdraak?[3]Faron-woud?[4-]Laat maar.")
/*<491>*/ 	switch (choice(4)) {
          	  case 0:
/*<493>*/ 		printf("\x0E\x01\x09\x04\x07\x704Ha! Hij?<pause0F> Zoals ik over het woud waak,\nwaakt hij over het vulkanische land ten\nnoorden van hier.\n\nHij is nogal eigenaardig en woont in\nde brandende diepte van de vulkaan,\nbuiten het bereik van monsters en\nmensen.\nAls je niet tegen hitte kunt, kun je er\nmaar beter wegblijven. Tenzij je graag\nje haar in brand wilt steken, natuurlijk.")
          	  case 1:
/*<494>*/ 		printf("\x0E\x01\x09\x04\x07\x704Ha! O, hij?<pause0F> De godin heeft mij\nopgedragen om over het woud te waken,\nterwijl hij op zijn beurt over de kurkdroge\nwoestijnzanden regeert.\nHij is de oudste van ons draken. Hij\nverwaarloost ook al tijden zijn gezond-\nheid.<pause0F> Ik vraag me af hoe het met hem\ngaat...")
          	  case 2:
/*<495>*/ 		printf("\x0E\x01\x09\x04\x07\x704Vele oude liederen prijzen de wijze\nwaarop mensen vroeger in dit woud\nwoonden. Ze leefden in harmonie\nmet de natuur.\nEerlijk gezegd denk ik dat de liederen\nernaast zitten. Vind je niet ook dat\nhet woud veel mooier is zonder\nmensen?")
          	  case 3:
/*<496>*/ 		printf("\x0E\x01\x09\x04\x07\x706Blijf je lichaam en geest trainen!\nDat is heel belangrijk als je de\nheilige missie wilt voltooien die\nje is toevertrouwd.")
          	}
          }

          void entrypoint_203_51() {
/*< 18>*/ 	start()
/*<349>*/ 	set_camera(15, 0)
/*<346>*/ 	set_camera(16, 0)
/*<347>*/ 	{'type': 'type3', 'subType': 2, 'param1': 35, 'param2': 356, 'next': 348, 'param3': 15}
/*<348>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 146, 'param3': 40}
/*<146>*/ 	{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 0, 'next': 29, 'param3': 13}
/*< 29>*/ 	{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 27, 'param3': 35}
/*< 27>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 144, 'param3': 16}
/*<144>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 99, 'next': 350, 'param3': 17}
/*<350>*/ 	printf("Je hebt de top van de boom bereikt.\nHier heb je een uitstekend zicht op het\nwoud. Misschien zie je daarbij gebieden\ndie je nog niet hebt verkend.")
/*< 19>*/ 	story_flags[60 /* us: 805A9ADC 0x80, jp: 805ACD5C 0x80 */] = true;
/*<566>*/ 	scene_flags[1 'Faron Woods'][51 /* 0x7 08 */] = true;
/*< 44>*/ 	make_actor_do_something(0, 0)
/*<145>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 394, 'param3': 17}
/*<394>*/ 	set_camera(17, 0)
/*<395>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 381, 'param3': 17}
/*<381>*/ 	printf("\x0E\x01\x12\x04\x00\x01Meester, kijk... daarboven...")
/*<382>*/ 	set_camera(18, 0)
/*<386>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 383, 'param3': 6}
/*<383>*/ 	printf("Ik heb de ontdekking van een nieuwe\nKikwi bevestigd.\n\n\nVolgens mijn analyse is 90% zeker dat de\ngeluiden die we eerder hoorden, in feite\nvan het luide gesnurk van deze Kikwi\nkwamen.")
/*<384>*/ 	set_camera(19, 0)
/*<385>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 30, 'param3': 6}
/*< 30>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 28, 'param3': 36}
/*< 28>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_86() {
/*<398>*/ 	start()
/*<399>*/ 	printf("\x0E\x01\x09\x04\x09\x900Mmmmmm! Fantastisch! Ik voel de\nenergie door mijn lijf gieren!")
          }

          void entrypoint_203_00() {
          	start()
/*< 81>*/ 	switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          	  case 0:
/*<541>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*<542>*/ 			printf("\x0E\x01\x09\x04\x01\x14Jij! Ik had je toch gezegd om niet met de\nwaterdraak over ons gesprek te praten!\n\n\nToen de waterdraak het woud vol liet\nlopen, wist ik zeker dat mijn laatste uurtje\ngeslagen had!\n\n\x0E\x01\x09\x04\x01\x07Maar het resultaat valt best mee, hè?\nHet water heeft veel van de monsters\nweggespoeld en het woud is nu heel\nvredig.")
          			flw_540:
/*<540>*/ 			printf("\x0E\x01\x09\x04\x00\x13Als je me nodig hebt, weet je me wel te\nvinden. Ik doe hier een dutje! Tot ziens,\nkwwwwwwrk...")
          		  case 1:
/*<543>*/ 			printf("\x0E\x01\x09\x04\x01\x01Au! Dat doet pijn!\n\n\n\n\x0E\x01\x09\x04\x01\x07Ik heb gehoord dat de waterdraak van je\nonder de indruk is.\n\n\nUiteraard heb ik diezelfde eer al heel\nlang, dus...")
          			goto flw_540
          		}
          	  case 1:
/*< 82>*/ 		switch (scene_flags[50 /* 0x7 04 */]) {
          		  case 0:
/*<536>*/ 			switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          			  case 0:
/*<538>*/ 				switch (adventure_pouch_has(7 0x0007)) {
          				  case 0:
/*<539>*/ 					printf("\x0E\x01\x09\x04\x01\x01Heb je geen manieren of zo?\n\n\n\n\x0E\x01\x09\x04\x01\x07Ja, dat is overduidelijk het water waar\nHare Majesteit om smacht. Als je het niet\ndurft te geven, kun je wel zeggen dat het\nvan mij komt.")
          					goto flw_540
          				  case 1:
/*<544>*/ 					printf("\x0E\x01\x09\x04\x01\x01Heb je geen manieren of zo?\n\n\n\n\x0E\x01\x09\x04\x01\x06Hm? Zoek je heilig water om waardig\nte worden bevonden door de waterdraak?\n\n\nHeb je al in die tempel daar gezocht?\nAls ik het me goed herinner, is Hare\nMajesteit dol op het water van een\nvan de bronnen daar.")
          					goto flw_540
          				}
          			  case 1:
/*<537>*/ 				printf("\x0E\x01\x09\x04\x01\x01Nou ja, zeg. Zo bezorg je me nog blauwe\nplekken.\n\n\n\x0E\x01\x09\x04\x01\x07Dus het is je gelukt om de poort naar het\nFloria-meer te openen?\n\n\nVergeet niet dat als de waterdraak je\nvraagt hoe je weet waar ze woont,\nje dit niet van mij hebt!")
          				goto flw_540
          			}
          		  case 1:
/*< 83>*/ 			switch (story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */]) {
          			  case 0:
/*< 39>*/ 				switch (story_flags[61 /* us: 805A9ADF 0x01, jp: 805ACD5F 0x01 */]) {
          				  case 0:
/*< 40>*/ 					printf("\x0E\x01\x09\x04\x01\x04Hmmmmmm? O, daar ben je weer...\nkwwrk. Kan ik iets voor je doen?\n[1]Ja.[2-]Nee.")
/*< 41>*/ 					switch (choice(2)) {
          					  case 0:
/*< 42>*/ 						printf("\x0E\x01\x09\x04\x00\x03Gebruik de kracht van de godin om het\nsymbool op de poort te voltooien.")
          						goto flw_37
          					  case 1:
/*< 43>*/ 						printf("\x0E\x01\x09\x04\x00\x13Als je me nodig hebt, weet je me wel te\nvinden. Ik doe hier een dutje! Tot ziens,\nkwwwwwwrk...")
          					}
          				  case 1:
          					goto flw_37
          				}
          			  case 1:
/*<356>*/ 				printf("\x0E\x01\x09\x04\x00\x14Wat-wil-je?! Ik slaaaaap!")
/*<375>*/ 				set_camera(20, 0)
/*<569>*/ 				switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          				  case 0:
/*<570>*/ 					printf("\x0E\x01\x09\x04\x01\x01\x0E\x01\x06\x02\xFCCDWat?<pause0F> \x0E\x01\x06\x02ÍGoh, wat heb jij een bekend gezicht.\nHeb ik jou al eens ontmoet, kwrrrrrk?\n[1]Ja, dat heb je![2]Nee...")
/*<571>*/ 					switch (choice(2)) {
          					  case 0:
/*<575>*/ 						set_camera(18, 0)
/*<574>*/ 						printf("\x0E\x01\x09\x04\x00\x07O, je speelt in de <r<Heldenstand>>. Dat\nverklaart het. In dat geval hoef ik je niet\nuit te leggen wat je moet doen, hè?\n[1]Inderdaad.[2]Ik ben het vergeten...")
/*<576>*/ 						switch (choice(2)) {
          						  case 0:
/*<578>*/ 							entrypoint_203_10();
          						  case 1:
/*<577>*/ 							printf("\x0E\x01\x09\x04\x00\x03O nee. Als je geheugen zo slecht is dat je\nzoiets vergeet, dan kun je het nu best\nzwaar krijgen, kwwrk!")
          							flw_378:
/*<378>*/ 							set_camera(20, 0)
          							flw_379:
/*<379>*/ 							printf("\x0E\x01\x09\x04\x01\x06Beloof je dat je niemand zult vertellen\nwat ik je nu ga zeggen? Ik meen het,\nkwwwrk!\n[1]Dat beloof ik.[2]Ik beloof niets!")
/*< 21>*/ 							switch (choice(2)) {
          							  case 0:
          								flw_354:
/*<354>*/ 								printf("\x0E\x01\x09\x04\x03\x08Oké, ik zal het je vertellen. Maar vergeet\nniet dat je het niet door mag vertellen.")
          								flw_355:
/*<355>*/ 								set_camera(18, 0)
/*<364>*/ 								printf("\x0E\x01\x09\x04\x03\x04De vlam die je zoekt...<pause0F> wordt ook wel\n<pling><b<Farores vlam>> genoemd.\n\n\n\x0E\x01\x09\x04\x01\x00Ja, ja.. Farores vlam...<pause0F> Dat verhaal begint\nheel lang geleden, toen de godin nog bij\nons was, kwwwrk...")
/*<365>*/ 								set_camera(21, 0)
/*<366>*/ 								printf("\x0E\x01\x09\x04\x00\x02De godin heeft de vlam aan de\n<b<waterdraak>> gegeven, die regeert over het\n<b<Faron-woud>>.")
/*<367>*/ 								set_camera(22, 0)
/*<368>*/ 								printf("\x0E\x01\x09\x04\x00\x04Het verhaal gaat dat ze de vlam bij de\nwaterdraak achterliet, zodat zij de vlam\nop een dag aan \"<b<de hemelreiziger>>\" kon\ngeven...")
/*<369>*/ 								set_camera(20, 0)
/*<370>*/ 								printf("Weet je, kwwwwrk, Volgens mij had\nde godin het over jou, knul.\n\n\n\x0E\x01\x09\x04\x03\x09Het lijkt me duidelijk. Je moet de\nwaterdraak opzoeken.")
/*<371>*/ 								set_camera(23, 0)
/*<372>*/ 								printf("Ze woont diep in het meer in het zuiden\nvan dit woud, kwwwwwwrk. Daar waakt\nze over de vlam.")
/*<373>*/ 								set_camera(24, 0)
/*<374>*/ 								printf("\x0E\x01\x09\x04\x00\x04Er is wel iets dat je moet weten. De poort\nnaar dat meer opent niet voor degenen\ndie niet waardig worden geacht...\n\n\x0E\x01\x09\x04\x00\x07Maar maak je geen zorgen, kwwwwrk.\nIk zal je een trucje verklappen om\nde poort te openen.")
/*<407>*/ 								set_camera(25, 0)
/*<408>*/ 								printf("\x0E\x01\x09\x04\x01\x04Om de poort te openen<pause0F> moet je het\nsymbool op de deur vullen met <r<kracht van\nde godin>>, kwwwrk!\n\n\x0E\x01\x09\x04\x00\x09Maar dat is niet zo makkelijk als het\nlijkt!<pause0F> Het symbool is niet compleet.\nOm de poort te openen moet je eerst\nhet symbool voltooien.")
/*<409>*/ 								set_camera(18, 0)
/*<410>*/ 								printf("\x0E\x01\x09\x04\x03\x01De enige manier om te weten hoe het\nvolledige symbool eruit moet zien,\nis door hetzelfde volledige symbool\nergens in dit woud te vinden.")
          								goto flw_37
          							  case 1:
/*<380>*/ 								set_camera(18, 0)
/*< 22>*/ 								printf("\x0E\x01\x09\x04\x03\x14\x0E\x01\x08\x02\x2CDJe kunt geen geheim\nbewaren?!\n\n\n\x0E\x01\x09\x04\x01\x06Ik wil je een geheim verklappen en je wilt\nniet eens beloven dat je het aan niemand\nanders vertelt, kwwrk?\n[1]Vertel nou![2]Nee...")
/*< 23>*/ 								switch (choice(2)) {
          								  case 0:
          									goto flw_354
          								  case 1:
/*< 24>*/ 									printf("\x0E\x01\x09\x04\x03\x0B\x0E\x01\x08\x02\x2CDWat?!\n\n\n\n\x0E\x01\x09\x04\x01\x03Oké...<pause0F> Ik geef het op, kwwwrk. Je bent\nhelemaal hiernaartoe gereisd, dus ik zal\nhet je toch vertellen.")
          									goto flw_355
          								}
          							}
          						}
          					  case 1:
/*<572>*/ 						printf("\x0E\x01\x09\x04\x00\x03Hm, misschien... Misschien... Dit is vast\nwat ze déjà vu noemen, kwwwrk.\nGriezelig, hoor.")
/*<573>*/ 						set_camera(18, 0)
          						flw_363:
/*<363>*/ 						printf("\x0E\x01\x09\x04\x03\x06Maar genoeg nonsens, kwwwrk, waarom\nis een echte mens zoals jij eigenlijk hier in\ndit woud?\n[1]De vlam![2]Niets...")
/*<360>*/ 						switch (choice(2)) {
          						  case 0:
/*<361>*/ 							printf("\x0E\x01\x09\x04\x01\x01Je zoekt een vlam om je zwaard mee\nte verbeteren, kwwrk? Zodat je iemand\nkunt vinden die belangrijk voor je is?\n\nWat interessant...<pause0F> Een mens die me ziet\nen een vlam zoekt, kwwwrk!")
          							goto flw_378
          						  case 1:
/*<396>*/ 							set_camera(20, 0)
/*<397>*/ 							printf("\x0E\x01\x09\x04\x01\x14Weet je nog dat ik zei dat het mijn taak\nis om over het woud te waken? Ik weet\ndingen die anderen niet weten, kwrrrk!\n\nEen mens die een vlam zoekt om zijn\nzwaard te verbeteren. Pffft, ik weet wie\njij bent!")
          							goto flw_379
          						}
          					}
          				  case 1:
/*<357>*/ 					printf("\x0E\x01\x09\x04\x01\x01Ooo, moet je dat zien! Een echte mens!\nJouw soort heb ik al lang niet gezien,\nkwrrrrrk.\n\nJe mag me <b<Jasmi>> noemen. Ik sta bekend\nals de ouwe <b<Kikwi-kluizenaar>>. Ik waak\nover het bos hier... als ik niet slaap.\n\n\x0E\x01\x09\x04\x01\x06Ik weet niet hoe je hier gekomen bent,\nmaar ik wil je wat vragen... Kun je me\necht zien?\n[1]Heel goed.[2]Nee.")
/*<358>*/ 					switch (choice(2)) {
          					  case 0:
/*<362>*/ 						printf("\x0E\x01\x09\x04\x00\x07Is dat zo? Nou, daar mag je best trots\nop zijn, kwwwrk! Weet je, zelfs sommige\nKikwi's kunnen me niet zien.")
/*<377>*/ 						set_camera(18, 0)
          						goto flw_363
          					  case 1:
/*<376>*/ 						set_camera(18, 0)
/*<359>*/ 						printf("\x0E\x01\x09\x04\x03\x0BJokkebrok! Je bent een jokkende\njokkebrok, kwwrk!\n\n\n\x0E\x01\x09\x04\x01\x14En hoe heb je me met dat fraaie\nschietding geraakt zonder me te zien, hè?")
          						goto flw_363
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_203_52() {
/*< 62>*/ 	start()
/*< 65>*/ 	story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */] = true;
/*<468>*/ 	switch (temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<516>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 467, 'param3': 35}
/*<467>*/ 		set_camera(30, 0)
          		flw_64:
/*< 64>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 84, 'param3': 16}
/*< 84>*/ 		switch (adventure_pouch_has(7 0x0007)) {
          		  case 0:
/*< 85>*/ 			printf("Ik ben het water hier aan het analyseren\x0E\x01\x06\x02\xFCCD...<pause0F>\x0E\x01\x06\x02Í\nDe unieke <r<eigenschappen >>ervan <r<komen\novereen >>met die van het water uit de\nBron der Bezinning.")
/*<186>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 517, 'param3': 36}
/*<517>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 317, 'param3': 6}
/*<317>*/ 			temp_flags[2 /* 0x1 04 */] = true;
/*<470>*/ 			switch (temp_flags[3 /* 0x1 08 */]) {
          			  case 0:
/*<469>*/ 				set_camera(31, 0)
          				flw_183:
/*<183>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 185, 'param3': 16}
/*<185>*/ 				entrypoint_203_91();
          			  case 1:
          				goto flw_183
          			}
          		  case 1:
/*< 67>*/ 			printf("Ik heb het overgebleven water in dit\nwatervat geanalyseerd.\x0E\x01\x06\x02\xFCCD.<pause0F>.\x0E\x01\x06\x02Í<pling> Uitstekend.\nIk kan u nu helpen met de <r<detectie\n>>van het type water dat u zoekt.")
/*<568>*/ 			open_dowsing_wheel(5)
/*<567>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<230>*/ 			switch (adventure_pouch_has(1 0x0001)) {
          			  case 0:
/*<231>*/ 				printf("\x0E\x01\x12\x04\x00\x01Meester, u bent zo slim geweest om een\n<y<leeg flesje>> bij u te dragen. Gebruik het om\nwat water mee te nemen.")
          				flw_66:
/*< 66>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 297, 'param3': 36}
/*<297>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 462, 'param3': 6}
/*<462>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 294, 'param3': 16}
/*<294>*/ 				set_camera(12, 0)
/*<293>*/ 				printf("\x0E\x01\x09\x04\x00\x05Als je die kant op gaat, kom je bij de\nuitgang naar het woud.")
/*<471>*/ 				switch (temp_flags[0 /* 0x1 01 */]) {
          				  case 0:
/*<295>*/ 					set_camera(-1, 0)
          					flw_184:
/*<184>*/ 					printf("\x0E\x01\x09\x04\x09\x706Prachtig. Dan zou ik meteen maar op pad\ngaan. Het is niet slim om een draak\nte laten wachten.")
/*<461>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				  case 1:
/*<472>*/ 					set_camera(27, 0)
          					goto flw_184
          				}
          			  case 1:
/*<229>*/ 				printf("\x0E\x01\x12\x04\x00\x01Meester, u heeft iets nodig om het water\nin te kunnen verplaatsen.")
          				goto flw_66
          			}
          		}
          	  case 1:
/*< 63>*/ 		{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 64, 'param3': 35}
          		goto flw_64
          	}
          }

          void entrypoint_203_87() {
/*<400>*/ 	start()
/*<401>*/ 	printf("Aanschouw de glorie van <b<Faron>>,\nwaterdraak en wachter over dit\nwoud! Ik ben weer gezond en wel!")
          }

          void entrypoint_203_01() {
/*<  1>*/ 	start()
/*<413>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<414>*/ 		printf("\x0E\x01\x09\x04\x00\x07Ik weet zeker dat al die gemene kerels\nnu weg zijn. De vrede is teruggekeerd\nin het woud!\n\n\x0E\x01\x09\x04\x00\x04Ik hoop echt dat je je vriendin vindt,\nzodat jullie net zo gelukkig zijn als ik.")
          	  case 1:
/*<415>*/ 		printf("\x0E\x01\x09\x04\x00\x01Hallo, herinner je mij nog? Heb je dat\nmeisje waarnaar je op zoek was, nog\ngevonden?\n[1]Wie ben jij?[2]Nog niet...")
/*<533>*/ 		switch (choice(2)) {
          		  case 0:
/*<534>*/ 			printf("\x0E\x01\x09\x04\x11\x13Wie ik ben?<pause1E> Is het zo moeilijk om te\nonthouden wie ik ben?\n\n\n\x0E\x01\x09\x04\x0B\x04Weet je wat een goeie manier is om\nKikwi's van elkaar te onderscheiden?\nAls je ons selecteert op de kaart, zie\nje onze namen verschijnen.")
          		  case 1:
/*<535>*/ 			printf("\x0E\x01\x09\x04\x11\x13O... Ik hoop dat je haar snel vindt.\nEr is niets zo fijn als een hereniging\nmet een vriend of vriendin.")
          		}
          	}
          }

          void entrypoint_203_53() {
/*< 75>*/ 	start()
/*<221>*/ 	story_flags[68 /* us: 805A9ADF 0x80, jp: 805ACD5F 0x80 */] = true;
/*<219>*/ 	{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 220, 'param3': 35}
/*<220>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 227, 'param3': 16}
/*<227>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 223, 'param3': 17}
/*<223>*/ 	printf("")
/*<222>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 228, 'param3': 36}
/*<228>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_70() {
/*<159>*/ 	start()
/*<158>*/ 	printf("Meesteres Fi, bzzzt! Mijn excuses dat ik u\nheb laten wachten!")
          }

          void entrypoint_203_88() {
/*<402>*/ 	start()
/*<545>*/ 	switch (temp_flags[2 /* 0x1 04 */]) {
          	  case 0:
/*<546>*/ 		printf("\x0E\x01\x09\x04\x09\x700Mens, ik heb er goed aan gedaan om jou\nom het <b<heilige water>> te vragen.\n\n\nIk zie nu dat het geen toeval was dat je de\nbeproeving van de godin hebt voltooid en\ndaarmee mijn <b<waterdrakenschub>> hebt\nbemachtigd.")
          	  case 1:
/*<547>*/ 		printf("\x0E\x01\x09\x04\x09\x700Mens, ik heb er goed aan gedaan om jou\nom het <b<heilige water>> te vragen.\n\n\nIk zie nu dat het geen toeval was dat je de\nbeproeving van de godin hebt voltooid en\ndaarmee mijn <b<waterdrakenschub>> hebt\nbemachtigd.")
          	}
          }

          void entrypoint_203_54() {
/*< 76>*/ 	start()
/*< 77>*/ 	printf("Ik acht het 80% zeker dat dit het symbool\nis waar de kluizenaar het over had.")
/*<232>*/ 	set_camera(26, 0)
/*<437>*/ 	printf("Ik raad u aan de vorm van het symbool\ngoed te onthouden.")
/*<438>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 439, 'param3': 6}
/*<439>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 440, 'param3': 36}
/*<440>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 6}
          }

          void entrypoint_203_71() {
/*<161>*/ 	start()
/*<179>*/ 	switch (scene_flags[127 /* 0xE 80 */]) {
          	  case 0:
/*<180>*/ 		printf("Bah, vwwiep. Alweer dit oude <r<bad>>...<pause0F>\nPrima, vrrm! Geen probleem...")
          	  case 1:
/*<160>*/ 		printf("Eens even kijken... Deze lading ziet er\nzwaar uit,<pause0F> maar dat is geen enkel\nprobleem voor mij, bzzrrt!")
          	}
          }

          void entrypoint_203_89() {
/*<403>*/ 	start()
/*<404>*/ 	printf("\x0E\x01\x09\x04\x07\x700Zoals beloofd zal ik je de weg naar de\n<r<heilige vlam>> wijzen.\n\n\nVolg mij.")
/*<405>*/ 	changeScene(2, 0) // 
          }

          void entrypoint_203_02() {
/*<416>*/ 	start()
/*<417>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<418>*/ 		printf("\x0E\x01\x09\x04\x09\x0CIedereen zegt dat het weer veilig is in het\nwoud, maar ik geloof er niks van.\n\n\n\x0E\x01\x09\x04\x07\x13Is het ergens wel veilig? Ik hoop ooit eens\neen wandeling te kunnen maken waarbij\nik niet bij elk geluid angstig wegduik.")
          	  case 1:
/*<419>*/ 		printf("\x0E\x01\x09\x04\x09\x0CHoelang moeten we nog in angst leven?\n\n\n\n\x0E\x01\x09\x04\x07\x13Is het dan nergens veiling in het woud?\nWat zou het fijn zijn om eens een\nontspannen wandeling te kunnen\nmaken.")
          	}
          }

