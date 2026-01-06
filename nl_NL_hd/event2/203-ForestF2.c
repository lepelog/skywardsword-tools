          void entrypoint_203_55() {
/*<147>*/ 	start()
/*<149>*/ 	switch (story_flags[188 /* us: 805A9AE9 0x08, jp: 805ACD69 0x08 */]) {
          	  case 0:
/*<148>*/ 		printf(/* textboxtype: 1, unk: 0, line: 89 */ "Als u dit <color also red<bad >coloroff>naar de vulkaan verplaatst,\nacht ik het 85% zeker dat het water erin\nvoldoende is om het vuur te blussen dat\nuw pad blokkeert.\nIk stel voor dat u dit bad leent<sound 4> van de\nwaterdraak.")
          	  case 1:
/*<150>*/ 		printf(/* textboxtype: 0, unk: 1, line: 88 */ "Mijn metingen geven aan dat er veel\nwater in het <color also red<bad >coloroff>zit. Ik acht het 85%\nzeker dat u hiermee het vuur kunt blussen\ndat uw pad blokkeert.\nIk stel voor dat u dit bad leent <sound 4>van de\nwaterdraak.")
/*<167>*/ 		story_flags[188 /* us: 805A9AE9 0x08, jp: 805ACD69 0x08 */] = true;
          	}
          }

          void entrypoint_203_72() {
/*<163>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 1, unk: 0, line: 191 */ "Meester Broekie! Let goed op, want\nik laat wel even zien hoe een échte\nheld eruitziet, bzzzzt!")
          }

          void entrypoint_203_03() {
/*<420>*/ 	start()
/*<421>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<422>*/ 		printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x00000004>Ik vind het geweldig dat het hier nu veilig\nis... maar het is ook een beetje saai.\n\n\n<0x10009:0x00110005>Ik moet echt stoppen met klagen en\ngenieten van mijn luxeprobleem.")
          	  case 1:
/*<423>*/ 		printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00000014>Misschien heb je het niet gezien, maar ik\nprobeer me hier te verstoppen. Kun je\nalsjeblieft weggaan voordat je gezien\nwordt door monsters?")
          	}
          }

          void entrypoint_203_90() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 1, line: 96 */ "<0x10009:0x0000000f>Hm...")
          }

          void entrypoint_203_56() {
/*<151>*/ 	start()
/*<177>*/ 	switch (scene_flags[127 /* 0xE 80 */]) {
          	  case 0:
/*<178>*/ 		printf(/* textboxtype: 0, unk: 1, line: 91 */ "Prima,<pause 15> zal ik de robot laten komen?\n[1-]Graag![2-]Ik mag hem niet zo...")
          		flw_153:
/*<153>*/ 		switch (choice(2)) {
          		  case 0:
/*<152>*/ 			printf(/* textboxtype: 1, unk: 0, line: 92 */ "Begrepen, <0x10012:0x00000005>meester. Ik doe het meteen,")
          		  case 1:
/*<181>*/ 			switch (scene_flags[127 /* 0xE 80 */]) {
          			  case 0:
/*<182>*/ 				printf(/* textboxtype: 0, unk: 1, line: 94 */ "<0x10012:0x00000001>Meester,<pause 15> hoewel ik begrip heb voor uw\ntwijfels, zou het irrationeel zijn om de\nmeest logische oplossing van de hand te\nwijzen. Ik laat hem komen.")
          			  case 1:
/*<154>*/ 				printf(/* textboxtype: 1, unk: 1, line: 93 */ "<0x10012:0x00000001>Meester,<pause 15> tenzij u het bad zelf wilt dragen,\nkunt u het zich nu niet veroorloven om\nkieskeurig te zijn over wie u helpt. Ik laat\nhem komen.")
          			}
          		}
          	  case 1:
/*<155>*/ 		printf(/* textboxtype: 1, unk: 1, line: 90 */ "Om het watervat van de waterdraak\nnaar de vulkaan te vervoeren, heeft\nu de hulp nodig van de transportrobot.\nZal ik contact met hem opnemen?[1-]Ja, graag![2-]Ik mag hem niet zo...")
          		goto flw_153
          	}
          }

          void entrypoint_203_73() {
/*<165>*/ 	start()
/*<164>*/ 	printf(/* textboxtype: 1, unk: 1, line: 192 */ "Zoals gewoonlijk wacht ik in het\nhemelrijk op u.")
/*<588>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          }

          void entrypoint_203_04() {
/*<441>*/ 	start()
/*<442>*/ 	switch (zone_temp_flags[11 /* 0x0 08 */]) {
          	  case 0:
/*<445>*/ 		wait_frames(15)
/*<443>*/ 		printf(/* textboxtype: 1, unk: 2, line: 54 */ "<0x10009:0x00000004>Het is leuk om soms volledig in je eigen\ngedachten op te gaan.\n\n\n<0x10009:0x00000001>Een korte pauze doet wonderen voor je\nlichaam en geest.")
/*<444>*/ 		scene_flags[1 'Faron Woods'][54 /* 0x7 40 */] = true;
          	  case 1:
/*<424>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*<426>*/ 			switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          			  case 0:
/*<427>*/ 				printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x00000013>Het is niet leuk om me voor jou te\nverstoppen. Je vindt me veel te snel!")
          			  case 1:
/*<428>*/ 				printf(/* textboxtype: 1, unk: 1, line: 51 */ "<0x10009:0x00110013>Je hebt me alweer gevonden. Jeetje, het\nlijkt erop dat ik me niet voor je kan\nverstoppen.\n\n<0x10009:0x000b0007>Eigenlijk vind ik dat dat wel een beloning\nwaard is. Hier, alsjeblieft. Dit heb ik\ntijdens het verstoppen gevonden.")
/*<430>*/ 				give_item(176 0xB0);
/*<429>*/ 				printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x00000014>Vergeet niet, je mag het niemand\nvertellen!")
/*<431>*/ 				story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = true;
          			}
          		  case 1:
/*<425>*/ 			printf(/* textboxtype: 1, unk: 1, line: 48 */ "<0x10009:0x00000007>Dit is de plek waar wij leven. Er is genoeg\neten voor ons allemaal en het is hier fijn.")
          		}
          	}
          }

          void entrypoint_203_05() {
/*<  2>*/ 	start()
/*<224>*/ 	switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          	  case 0:
/*<432>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*<433>*/ 			printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000002>Ik moet toegeven dat ik het water mis nu\nhet is weggelopen. Het was leuk dat de\nomgeving er even anders uitzag.")
/*<486>*/ 			printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00000006>Ho-ho-ho.")
/*<532>*/ 			entrypoint_203_09();
          		  case 1:
/*<434>*/ 			printf(/* textboxtype: 1, unk: 2, line: 66 */ "<0x10009:0x0000000e>Dus de waterdraak heeft je waardig\nbevonden? Je weet me telkens weer\nte verrassen.")
/*<531>*/ 			entrypoint_203_09();
          		}
          	  case 1:
/*<225>*/ 		switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          		  case 0:
/*<226>*/ 			printf(/* textboxtype: 2, unk: 0, line: 65 */ "<0x10009:0x0000000e>Dus je hebt Hare Majesteit, de water-\ndraak, ontmoet? Wat een fantastische\nervaring! Ik ben ongelofelijk jaloers!")
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
/*< 16>*/ 							printf(/* textboxtype: 0, unk: 1, line: 64 */ "<0x10009:0x00000002>Wat is dit toch een wonderlijke wereld.\nHopelijk kom ik die kluizenaar zelf ook\neens tegen.")
/*<334>*/ 							printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00000006>Ho-ho-ho.")
/*<529>*/ 							entrypoint_203_09();
          						  case 1:
/*< 14>*/ 							printf(/* textboxtype: 1, unk: 2, line: 63 */ "<0x10009:0x0000000e>Wat? Je hebt een Kikwi-kluizenaar\nontmoet die in de boom woont? Geweldig!\nAl die tijd dacht ik dat er maar vijf\nKikwi's in het woud woonden!")
/*< 17>*/ 							temp_flags[5 /* 0x1 20 */] = true;
          							goto flw_16
          						}
          					  case 1:
/*< 12>*/ 						printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x0000000e>Dus je bent naar de top van de boom\ngeklommen? Heel knap!\n\n\n<0x10009:0x00000008>Wat zeg je? Er woont daar ook iemand?\nNou, je komt vast nog wel meer te weten\nover deze mysterieuze boombewoner.")
/*<528>*/ 						entrypoint_203_09();
          					}
          				  case 1:
/*< 11>*/ 					switch (scene_flags[19 /* 0x3 08 */]) {
          					  case 0:
/*<  8>*/ 						printf(/* textboxtype: 1, unk: 1, line: 60 */ "<0x10009:0x0000000e>Je hebt een weg naar het binnenste deel\nvan de boom gevonden? Knap, hoor!")
/*< 80>*/ 						printf(/* textboxtype: 0, unk: 1, line: 61 */ "<0x10009:0x00000002>Het uitzicht vanuit de top van de boom\nis prachtig! En je weet maar nooit wat\nje er allemaal zult zien...")
/*<527>*/ 						entrypoint_203_09();
          					  case 1:
/*< 10>*/ 						printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x00000003>Er zijn nog delen van dit woud die je niet\nhebt verkend, kwieee.\n\n\n<0x10009:0x00000008>Met de kracht van de waterdrakenschub\nkun je onderwater zwemmen, kwieee.\nDaarvoor druk je op (A) terwijl je je\nin het water bevindt.")
/*<526>*/ 						entrypoint_203_09();
          					}
          				}
          			  case 1:
/*<436>*/ 				switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          				  case 0:
/*< 20>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 328, 'param3': 31}
/*<328>*/ 					wait_frames(20)
/*<327>*/ 					set_camera(1, 0)
/*<330>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 3, 'param3': 13}
/*<  3>*/ 					printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x0000000e>O, hallo. Ik zie dat je daar de\nwaterdrakenschub hebt, kwieee.\n\n\n<0x10009:0x00000002>Dat is fantastisch! Ze zeggen dat als je er\neen van hebt, kwieee, je door het water\nglijdt zoals een draak tijdens zijn vlucht.")
/*<329>*/ 					set_camera(-1, 0)
/*<  6>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 7, 'param3': 13}
/*<  7>*/ 					printf(/* textboxtype: 1, unk: 1, line: 57 */ "<0x10009:0x00000003>Je hebt vast nog niet het hele woud\nverkend, kwieee.\n\n\n<0x10009:0x00000008>Met de waterdrakenschub kun je gebieden\nverkennen die je eerder niet kon bereiken,\nkwieee!")
/*<331>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 332, 'param3': 13}
/*<332>*/ 					printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00000006>Ho-ho-ho.")
/*<333>*/ 					scene_flags[1 'Faron Woods'][55 /* 0x7 80 */] = true;
/*<525>*/ 					entrypoint_203_09();
          				  case 1:
/*<435>*/ 					printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x00000003>Zo te zien heb je het meisje niet diep in\nhet hart van het woud gevonden\nkie-paliep.\n\n<0x10009:0x00000002>Maar geef het niet op! Als ik herenigd\nkon worden met mijn Kikwi-vrienden,\nvind jij vast je vriendin weer terug,\nkwieee!")
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
/*<320>*/ 				printf(/* textboxtype: 2, unk: 1, line: 114 */ "<0x10009:0x00090707>Wat is dat? Heb je daar <color blue<heilig water>coloroff>?\nGiet het maar snel in mijn bad!")
          				flw_351:
/*<351>*/ 				story_flags[85 /* us: 805A9AE8 0x02, jp: 805ACD68 0x02 */] = true;
/*<515>*/ 				{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<549>*/ 				printf(/* textboxtype: 1, unk: 1, line: 96 */ "<0x10009:0x0000000f>Hm...")
/*<318>*/ 				printf(/* textboxtype: 0, unk: 0, line: 110 */ "<0x10009:0x00070709>Ja, moet je die kleur zien! Dat is\nongetwijfeld het heilige water waar\nik om zat te smachten. Snel, jochie,\ngiet het in mijn bad!")
          				goto flw_351
          			}
          		  case 1:
/*<548>*/ 			printf(/* textboxtype: 1, unk: 1, line: 96 */ "<0x10009:0x0000000f>Hm...")
/*< 69>*/ 			printf(/* textboxtype: 0, unk: 2, line: 109 */ "<0x10009:0x00070706>Schiet op, breng me het heilige water\nwaar ik naar verlang. Als je dat doet,\ntoon ik je de weg naar de heilige vlam.")
          		}
          	  case 1:
/*< 53>*/ 		switch (scene_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 50>*/ 			printf(/* textboxtype: 1, unk: 1, line: 96 */ "<0x10009:0x0000000f>Hm...")
/*< 58>*/ 			printf(/* textboxtype: 2, unk: 0, line: 108 */ "<0x10009:0x00090706>Ik leid je alleen naar de heilige vlam\nals je me het gevraagde <color blue<heilige water>coloroff>\nbrengt.\n[1-]Oké![2]Nee, dank u.")
/*< 60>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_61:
/*< 61>*/ 				entrypoint_203_52();
          			  case 1:
/*< 59>*/ 				printf(/* textboxtype: 2, unk: 1, line: 111 */ "<0x10009:0x00090704>Zo. Dus de opdracht was te moeilijk voor\njou? Dan ben je dus toch maar een\ndoodgewone mens...")
/*<473>*/ 				temp_flags[0 /* 0x1 01 */] = true;
          			}
          		  case 1:
/*<282>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*<457>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 454, 'param3': 49}
/*<454>*/ 				wait_frames(20)
/*<455>*/ 				set_camera(11, 0)
/*<456>*/ 				{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 356, 'next': 283, 'param3': 15}
          				flw_283:
/*<283>*/ 				printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x0000000f>Je bent mijn woning binnengedrongen,\neen heilige plek waar weinigen in toe\nworden gelaten!\n\n<0x10009:0x00090700>Dit is geen plek voor iemand als jij.\nMaar toch sta je hier! Leg snel uit\nhoe je dat hebt gedaan!\n[1-]Waterdraak?[2-]Ik ben verdwaald.")
/*< 54>*/ 				switch (choice(2)) {
          				  case 0:
/*<458>*/ 					scene_flags[2 'Lake Floria'][0 /* 0x1 01 */] = true;
/*<474>*/ 					set_camera(27, 0)
/*<475>*/ 					printf(/* textboxtype: 1, unk: 1, line: 99 */ "<0x10009:0x00070903>Dat ben ik. Zij met goede manieren\nspreken me aan met \"Faron, wachter\nvan het woud\". De godin zelf heeft\nme aangesteld.\nHoewel mijn huidige gedaante weinig\nintimiderend is, moet je weten dat je je\nin de aanwezigheid bevindt van een\ntrouwe dienaar van de godin.<0x10009:0x00090900>\n<pause 10><0x10009:0x00000007>Hm?")
/*<451>*/ 					set_camera(11, 0)
/*<452>*/ 					printf(/* textboxtype: 0, unk: 1, line: 100 */ "<0x10009:0x00090900><0x10006:0xfecd>Wat zie ik nou?<pause 15><0x10009:0x00000006><0x10006:0x02cd> Dat is een van MIJN\nschubben!\n\n\n<0x10009:0x00090700>Zo'n heilig geschenk kan alleen in het\nbezit zijn van de door de godin\nuitverkoren held. <0x10009:0x00000005>Kun jij dat echt zijn?\n\n<0x10009:0x00070700>Ik vraag me af... Zelfs met die schub is\nhet niet eenvoudig om mij te vinden. Hoe\nis je dat gelukt?")
/*<453>*/ 					set_camera(27, 0)
/*< 55>*/ 					printf(/* textboxtype: 1, unk: 0, line: 101 */ "<0x10009:0x00070704>O, ja...<pause 30> Die maffe, ouwe Kikwi-kluizenaar\nheeft je natuurlijk verteld waar ik woon.\n\n\n<0x10009:0x00090910>Echt waar, ik heb hem al zo vaak gezegd\ndat hij zijn mond dicht moet houden.\nNu heb ik er genoeg van. De volgende\nkeer dat ik 'm zie, eet ik 'm op!\n<0x10009:0x00070900>Maar genoeg daarover.<pause 30> Je bent hier voor\neen <color red<heilige vlam>coloroff>, nietwaar?\n[1-]Precies![2-]Ben ik vergeten...")
/*<284>*/ 					switch (choice(2)) {
          					  case 0:
/*<285>*/ 						printf(/* textboxtype: 1, unk: 1, line: 102 */ "<0x10009:0x00090704>Ik wist het wel!")
          						flw_463:
/*<463>*/ 						printf(/* textboxtype: 0, unk: 1, line: 103 */ "<0x10009:0x00090700>Maar als ik eerlijk ben, ziet een\nopdondertje als jij er niet bepaald\nuit als een door de godin\nuitverkoren held.\n<0x10009:0x00070703>Er is geen twijfel over mogelijk. Er is\neen test vereist om te zien of je wel echt\nbent wie je zegt te zijn.\n\nKort voor je komst werd ik aangevallen\ndoor een pretentieus wezen dat zichzelf\n<color blue<Ghirahim>coloroff> noemt.\n\nIk heb me weten te weren tegen de aanval\nvan deze zelfbenoemde demonenvorst,\nmaar ben wel gewond geraakt.")
/*<465>*/ 						set_camera(28, 0)
/*<464>*/ 						printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x0007070f>De verwondingen die hij me heeft\ntoegebracht, willen niet genezen.\nIk zit daarom gedwongen in dit\nbad vol <color blue<heilig water>coloroff>.\n<0x10009:0x00090700>Helaas is de genezende kracht van\nhet water afgenomen en heb ik dus\neen nieuwe dosis nodig om volledig\nte kunnen genezen.\n<0x10009:0x00090906><color red<Haal daarom<sound 4> wat vers heilig water>coloroff> voor\nmij.")
/*<450>*/ 						set_camera(27, 0)
/*< 56>*/ 						printf(/* textboxtype: 2, unk: 0, line: 105 */ "Als je dit voor me doet, laat ik je met\nplezier zien waar je de heilige vlam kunt\nvinden. Wat zeg je ervan?\n[1-]Klinkt goed![2]Nee, dank u.")
/*< 57>*/ 						switch (choice(2)) {
          						  case 0:
/*<466>*/ 							temp_flags[3 /* 0x1 08 */] = true;
          							goto flw_61
          						  case 1:
/*<286>*/ 							printf(/* textboxtype: 2, unk: 1, line: 111 */ "<0x10009:0x00090704>Zo. Dus de opdracht was te moeilijk voor\njou? Dan ben je dus toch maar een\ndoodgewone mens...")
/*<287>*/ 							temp_flags[0 /* 0x1 01 */] = true;
/*<460>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						}
          					  case 1:
/*<291>*/ 						set_camera(11, 0)
/*<292>*/ 						printf(/* textboxtype: 0, unk: 2, line: 112 */ "<0x10009:0x00090910><0x10008:0x01cd>Spot niet met mij, jochie! Als je\ngrappig probeert te zijn, heb je\naan mij een kwaaie!\n\n<0x10009:0x00010900>Maar toch... Weinig mensen durven zo\nbrutaal tegen mij te zijn. Je laat je niet\nmakkelijk intimideren. Daar mag je best\ntrots op zijn.")
/*<296>*/ 						set_camera(27, 0)
          						goto flw_463
          					}
          				  case 1:
/*<289>*/ 					set_camera(11, 0)
/*<290>*/ 					printf(/* textboxtype: 0, unk: 0, line: 107 */ "<0x10009:0x00090910>Drijf niet de spot met mij, jochie!\n\n\n\nAls je nog langer mijn tijd verspilt,\nbijt ik je hoofd eraf!")
/*<459>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				}
          			  case 1:
/*<449>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 298, 'param3': 49}
/*<298>*/ 				wait_frames(20)
/*<412>*/ 				set_camera(11, 0)
/*<448>*/ 				{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 356, 'next': 52, 'param3': 15}
/*< 52>*/ 				printf(/* textboxtype: 0, unk: 1, line: 97 */ "<0x10009:0x00000001><0x10008:0x02cd>Hé! Jij daar, mens!")
/*<281>*/ 				temp_flags[1 /* 0x1 02 */] = true;
/*<288>*/ 				set_camera(27, 0)
          				goto flw_283
          			}
          		}
          	}
          }

          void entrypoint_203_57() {
/*<156>*/ 	start()
/*<157>*/ 	printf(/* textboxtype: 1, unk: 0, line: 95 */ "<0x10012:0x00000001>Meester, er is niets meer dat u hier nu\nkunt doen. Laten we terugkeren naar het\nhemelrijk zodat we koers naar de vulkaan\nkunnen zetten.")
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
/*<392>*/ 	printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x0003000f>Ik ben eerder iets belangrijks vergeten\nte zeggen.<pause 15> Hare majesteit, de waterdraak,\nvindt goede manieren heel belangrijk...\nDus let op de jouwe!\n<0x10009:0x00010000>Als ze een slecht humeur heeft... <0x10009:0x0000000b>kun\nje eindigen als een tussendoortje,\nkwwwwrk!")
/*<447>*/ 	set_camera(18, 0)
/*<393>*/ 	printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00010000>Ik smaak vast als oud mos, maar ik zit er\nniet op te wachten om door haar\nopgegeten te worden, kwwwrk!\n\n<0x10009:0x00030006>Dus vertel haar niet dat ik je over\nFarores vlam heb verteld, oké?\n\n\n<0x10009:0x00030007>En vergeet niet om je in haar verblijf\nte gedragen als een beleefde gast!")
/*<446>*/ 	set_camera(20, 0)
/*<387>*/ 	printf(/* textboxtype: 1, unk: 1, line: 33 */ "<0x10009:0x00000013>Als je me nodig hebt, weet je me wel te\nvinden. Ik doe hier een dutje! Tot ziens,\nkwwwwwwrk...")
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
/*<487>*/ 			printf(/* textboxtype: 0, unk: 0, line: 122 */ "<0x10009:0x00070702>Het doet me goed om te zien hoeveel\nmonsters je uit dit woud hebt verdreven.\nJe bent je zwaard waardig.\n\n<0x10009:0x00070704>Toen je me voor het eerst bezocht, leek je\neen onzeker, klein mensje...<pause 30> Maar nu blaak\nje van zelfvertrouwen.\n\n<0x10009:0x00070706>Zorg er echter voor dat je je vol overgave\nin blijft zetten. Je moet wel, anders lukt\nhet je niet om de taak uit te voeren die je\nis toevertrouwd.")
/*<489>*/ 			scene_flags[2 'Lake Floria'][1 /* 0x1 02 */] = true;
          		}
          	  case 1:
/*<173>*/ 		switch (story_flags[186 /* us: 805A9AE9 0x02, jp: 805ACD69 0x02 */]) {
          		  case 0:
/*<170>*/ 			printf(/* textboxtype: 0, unk: 2, line: 130 */ "<0x10009:0x00070702>Breng het bad terug zodra je er klaar mee\nbent, maar er is geen haast.")
          		  case 1:
/*<171>*/ 			switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
          			  case 0:
/*<174>*/ 				switch (scene_flags[127 /* 0xE 80 */]) {
          				  case 0:
/*<175>*/ 					printf(/* textboxtype: 2, unk: 0, line: 129 */ "<0x10009:0x00070707>Hmm? Je wilt mijn <color red<bad >coloroff>nog eens lenen?\n\n\n\n<pause 30><0x10009:0x00000005>Hmm...<pause 15> prima. Maar ik moet zeggen dat\nhet ding dat er de vorige keer mee\nterugkwam, een nogal grote mond heeft!\n\n<0x10009:0x00070706>Ik heb er niets aan gedaan omdat hij voor\njou werkt, maar als je dat ongelikte ding\ngeen manieren leert, doe ik het wel.")
          				  case 1:
/*<169>*/ 					printf(/* textboxtype: 0, unk: 0, line: 128 */ "<0x10009:0x00000006>O, jij bent het. Vertel, hoe gaat het met je\nbeheersing over de kracht van je zwaard?\n\n\n<0x10009:0x00070707>O? Je wilt mijn <color red<bad>coloroff> lenen?<pause 30> <0x10009:0x00000005>Hmm...<pause 15> Prima.\nIk ben weer volledig hersteld en ben niet\nvan plan om het binnenkort te gebruiken!\n\n<0x10009:0x00070706>Neem het mee en doe ermee wat je wilt.")
          				}
          			  case 1:
/*<168>*/ 				switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          				  case 0:
/*< 86>*/ 					printf(/* textboxtype: 0, unk: 2, line: 121 */ "<0x10009:0x00070702>Je draagt een prachtig zwaard. Zorg\nervoor dat je de kracht hebt die je nodig\nhebt om het te hanteren.")
          				  case 1:
/*< 74>*/ 					switch (story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */]) {
          					  case 0:
/*< 73>*/ 						printf(/* textboxtype: 2, unk: 0, line: 120 */ "<0x10009:0x0007070f>En ooit komt de dag dat ik Ghirahim\nzijn daden hier betaald zal zetten.")
          					  case 1:
/*< 71>*/ 						printf(/* textboxtype: 0, unk: 2, line: 115 */ "<0x10009:0x00090900>Mmmmmm! Fantastisch! Ik voel de\nenergie door mijn lijf gieren!")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_203_58() {
/*<299>*/ 	start()
/*<301>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 300, 'param3': 40}
/*<300>*/ 	wait_frames(15)
/*<302>*/ 	{'type': 'type3', 'subType': 1, 'param1': 340, 'param2': 0, 'next': 310, 'param3': 51}
/*<310>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 307, 'param3': 40}
/*<307>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 308, 'param3': 16}
/*<308>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 309, 'param3': 17}
/*<309>*/ 	set_camera(13, 0)
/*<304>*/ 	printf(/* textboxtype: 1, unk: 1, line: 84 */ "<0x10012:0x0000000b>Meester, ik heb nieuwe informatie voor u.\n\n\n\nVolgens mijn schattingen bevindt u zich\nin het zuidwesten van het Faron-woud.\nBevestig deze locatie alstublieft op\nde kaart.")
/*<321>*/ 	scene_flags[1 'Faron Woods'][56 /* 0x6 01 */] = true;
/*<322>*/ 	{'type': 'type3', 'subType': 4, 'param1': 256, 'param2': 0, 'next': 305, 'param3': 30}
/*<305>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 306, 'param3': 34}
/*<306>*/ 	wait_frames(15)
/*<303>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 311, 'param3': 36}
/*<311>*/ 	set_camera(14, 0)
/*<312>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_93() {
/*< 72>*/ 	start()
/*<187>*/ 	set_camera(3, 0)
/*<198>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 79, 'param3': 17}
/*< 79>*/ 	printf(/* textboxtype: 2, unk: 0, line: 123 */ "<0x10009:0x00070705>Let nu op...")
/*<188>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 190, 'param3': 32}
/*<190>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 189, 'param3': 17}
/*<189>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 270, 'param3': 17}
/*<270>*/ 	wait_frames(15)
/*<268>*/ 	set_camera(5, 0)
/*<269>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 0, 'next': 266, 'param3': 13}
/*<266>*/ 	printf(/* textboxtype: 0, unk: 2, line: 124 */ "<0x10009:0x00000300><0x10005:0x003c0000><0x10008:0x01cd>Hmmm<0x10006:0xfccd>...")
/*<265>*/ 	set_camera(4, 0)
/*<267>*/ 	printf(/* textboxtype: 0, unk: 0, line: 125 */ "")
/*< 78>*/ 	scene_flags[2 'Lake Floria'][100 /* 0xD 10 */] = true;
/*<273>*/ 	wait_frames(60)
/*<196>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 194, 'param3': 13}
/*<194>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 191, 'param3': 17}
/*<191>*/ 	printf(/* textboxtype: 2, unk: 0, line: 126 */ "<0x10009:0x00000006>Ga. De heilige vlam die je zoekt, bevindt\nzich hierbinnen.\n\n\nAl sluit de waterval deze plek al vele jaren\naf van de rest van de wereld, toch hebben\nvele monsters een weg naar binnen\ngevonden.")
/*<274>*/ 	set_camera(8, 0)
/*<195>*/ 	set_camera(3, 0)
/*<192>*/ 	printf(/* textboxtype: 0, unk: 2, line: 127 */ "<0x10009:0x00070704>Ach, maar jij bent de door de godin\nuitverkoren held.\n\n\nJij en ik zullen elkaar snel genoeg weer\nzien, lijkt mij. Blijf tot die tijd op je hoede.\n<0x10009:0x00070703>Tot ziens, jochie.")
/*<193>*/ 	set_camera(6, 0)
/*<278>*/ 	wait_frames(15)
/*<277>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 199, 'param3': 17}
/*<199>*/ 	make_actor_do_something(0, 0)
/*<314>*/ 	wait_frames(15)
/*<279>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 313, 'param3': 17}
/*<313>*/ 	wait_frames(15)
/*<197>*/ 	story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */] = true;
/*<271>*/ 	set_camera(7, 0)
/*<272>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_07() {
/*<352>*/ 	start()
/*<353>*/ 	printf(/* textboxtype: 2, unk: 0, line: 2 */ "<0x10005:0x003c0000><0x10008:0x02cd>Kikwiiiiiiiiii!")
          }

          void entrypoint_203_59() {
/*<476>*/ 	start()
/*<477>*/ 	printf(/* textboxtype: 0, unk: 1, line: 85 */ "Ja, zoals ik al dacht, is het niveau van het\nwater in het Faron-woud gedaald. Het\nwoud is teruggekeerd naar zijn\noorspronkelijke staat.")
/*<478>*/ 	entrypoint_006_04();
          }

          void entrypoint_203_94() {
/*<207>*/ 	start()
/*<315>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 209, 'param3': 17}
/*<209>*/ 	wait_frames(15)
/*<210>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 208, 'param3': 17}
/*<208>*/ 	printf(/* textboxtype: 2, unk: 1, line: 132 */ "<0x10009:0x00070702>O, het zwaard dat je bij je draagt, is veel\nsterker dan de vorige keer dat ik je zag...")
/*<212>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1792, 'next': 211, 'param3': 13}
/*<211>*/ 	printf(/* textboxtype: 0, unk: 2, line: 133 */ "Ongelofelijk, de uitverkoren held van de\ngodin is maar een jochie. Wie had dat\ngedacht...")
/*<215>*/ 	set_camera(3, 0)
/*<214>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 4, 'next': 213, 'param3': 13}
/*<213>*/ 	printf(/* textboxtype: 1, unk: 0, line: 134 */ "<0x10009:0x00070700>Uitverkoren held of niet, je bent nog niet\nsterk genoeg om de volledige kracht van\ndat zwaard te benutten.")
/*<217>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 216, 'param3': 13}
/*<216>*/ 	printf(/* textboxtype: 2, unk: 1, line: 135 */ "Je moet blijven trainen! Wijd jezelf\nvolledig aan deze taak.")
/*<481>*/ 	set_camera(32, 0)
/*<480>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 6, 'next': 479, 'param3': 13}
/*<479>*/ 	printf(/* textboxtype: 0, unk: 2, line: 136 */ "<0x10009:0x00070700>Tot ziens, jochie.")
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
/*<391>*/ 	printf(/* textboxtype: 1, unk: 1, line: 36 */ "<0x10009:0x0001000b><0x10005:0x003c0000><0x10008:0x02cd>O, wacht even!")
          }

          void entrypoint_203_95() {
/*<335>*/ 	start()
/*<336>*/ 	printf(/* textboxtype: 2, unk: 0, line: 123 */ "<0x10009:0x00070705>Let nu op...")
          }

          void entrypoint_203_60() {
/*<500>*/ 	start()
/*<501>*/ 	printf(/* textboxtype: 1, unk: 0, line: 182 */ "Ik wist niet dat mensen zo diep\nkunnen duiken!\n\n\nKun je ook een <color red<waterbooraanval >coloroff>doen?")
          }

          void entrypoint_203_09() {
/*<519>*/ 	start()
/*<520>*/ 	switch (story_flags[481 /* us: 805A9B11 0x20, jp: 805ACD91 0x20 */]) {
          	  case 0:
/*<523>*/ 		printf(/* textboxtype: 2, unk: 0, line: 68 */ "<0x10009:0x00000008>Over omgeving gesproken, hoe gaat\nhet met Oelo in die grote, wijde wereld.\nGaat het goed met hem?")
          	  case 1:
/*<521>*/ 		switch (story_flags[1094 /* us: 805A9B52 0x10, jp: 805ACDD2 0x10 */]) {
          		  case 0:
/*<522>*/ 			printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>O ja, heb je gehoord dat Oelo het woud wil\nverlaten, in zijn eentje? Wat een dappere\nKikwi...")
          		  case 1:
          		}
          	}
          }

          void entrypoint_203_96() {
/*<337>*/ 	start()
/*<339>*/ 	printf(/* textboxtype: 0, unk: 2, line: 124 */ "<0x10009:0x00000300><0x10005:0x003c0000><0x10008:0x01cd>Hmmm<0x10006:0xfccd>...")
          }

          void entrypoint_203_61() {
/*<502>*/ 	start()
/*<503>*/ 	printf(/* textboxtype: 1, unk: 1, line: 183 */ "Zeg, meneer de mens, weet je hoe je een\n<color red<draaisprong>coloroff> maakt?\n\n\nAls je een waterbooraanval <color red<richting het\nwateroppervlak>coloroff> maakt, kun je een\nprachtige sprong maken!")
          }

          void entrypoint_203_97() {
/*<340>*/ 	start()
/*<338>*/ 	printf(/* textboxtype: 0, unk: 0, line: 125 */ "")
          }

          void entrypoint_203_62() {
/*<504>*/ 	start()
/*<505>*/ 	printf(/* textboxtype: 0, unk: 1, line: 184 */ "Ha! Mens in het water! <pause 20>Moet je hem nou\nmet zijn armen zien flapperen!")
          }

          void entrypoint_203_10() {
/*<579>*/ 	start()
/*<580>*/ 	story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */] = true;
/*<581>*/ 	set_camera(24, 0)
/*<582>*/ 	printf(/* textboxtype: 1, unk: 2, line: 30 */ "<0x10009:0x00000003>Gebruik de kracht van de godin om het\nsymbool op de poort te voltooien.")
/*<583>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 584, 'param3': 30}
/*<584>*/ 	printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00000009>Plaats een baken op de (X) op de kaart,\nzodat je de locatie kunt vinden waar ik\nhet over had, kwwwrk!")
/*<585>*/ 	set_camera(18, 0)
          	flw_406:
/*<406>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 35, 'param3': 34}
/*< 35>*/ 	printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00010006>Komt al deze informatie binnen, knul?\nWeet je nu waar je naar het symbool\nmoet gaan zoeken?\n[1-]Ja![2]Eh...")
/*< 36>*/ 	switch (choice(2)) {
          	  case 0:
/*< 45>*/ 		switch (story_flags[63 /* us: 805A9ADC 0x40, jp: 805ACD5C 0x40 */]) {
          		  case 0:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 1, line: 33 */ "<0x10009:0x00000013>Als je me nodig hebt, weet je me wel te\nvinden. Ik doe hier een dutje! Tot ziens,\nkwwwwwwrk...")
          		  case 1:
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00030007>Nou, dan wens ik je een goeie reis.")
/*< 48>*/ 			story_flags[61 /* us: 805A9ADF 0x01, jp: 805ACD5F 0x01 */] = true;
          		}
          	  case 1:
/*< 38>*/ 		printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00000003>Oké, kwwwwrk, laten we het nog eens\nproberen...")
          		flw_37:
/*< 37>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 32, 'param3': 30}
/*< 32>*/ 		switch (story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */]) {
          		  case 0:
/*< 33>*/ 			printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00000009>Plaats een baken op de (X) op de kaart,\nzodat je de locatie kunt vinden waar ik\nhet over had, kwwwrk!")
          			goto flw_406
          		  case 1:
/*< 34>*/ 			story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */] = true;
/*<411>*/ 			printf(/* textboxtype: 1, unk: 1, line: 27 */ "<0x10009:0x00010004>De poort ligt in het zuiden, dus de\nkans is groot dat er in het noorden\neen zelfde symbool is. Ik stel voor\ndat je nabij deze (X) zoekt, kwwwrk!")
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
/*<263>*/ 								printf(/* textboxtype: 0, unk: 1, line: 160 */ "Kom binnen.")
          							  case 1:
/*<261>*/ 								printf(/* textboxtype: 1, unk: 0, line: 159 */ "Hare Majesteit de waterdraak bevindt\nzich iets verderop. Een momentje,\nalsjeblieft.")
/*<264>*/ 								temp_flags[16 /* 0x3 01 */] = true;
          							}
          						  case 1:
/*<139>*/ 							printf(/* textboxtype: 0, unk: 0, line: 158 */ "Eindelijk, we zijn er!")
/*<142>*/ 							temp_flags[15 /* 0x0 80 */] = true;
          						}
          					  case 1:
/*<141>*/ 						printf(/* textboxtype: 0, unk: 1, line: 157 */ "Wauw, de godin weet wel hoe zij ze moet\nkiezen! Je was geweldig!")
/*<143>*/ 						scene_flags[2 'Lake Floria'][15 /* 0x0 80 */] = true;
          					}
          				  case 1:
/*<130>*/ 					switch (scene_flags[14 /* 0x0 40 */]) {
          					  case 0:
/*<345>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 0, 'next': 131, 'param3': 13}
/*<131>*/ 						switch (temp_flags[14 /* 0x0 40 */]) {
          						  case 0:
/*<132>*/ 							printf(/* textboxtype: 1, unk: 0, line: 156 */ "Zeg... Wij zijn toch vrienden? We houden\nallebei van... water. Doe me geen pijn...")
          						  case 1:
/*<555>*/ 							scene_flags[2 'Lake Floria'][50 /* 0x7 04 */] = false;
/*<554>*/ 							scene_flags[2 'Lake Floria'][51 /* 0x7 08 */] = true;
/*<556>*/ 							printf(/* textboxtype: 0, unk: 0, line: 155 */ "Jakkes! Ze zijn er weer! Dat is een\nvan de vissen die die idioot mee had\ngenomen om Hare Majesteit mee\naan te vallen.\nKijk uit, het zijn gemene beesten!")
/*<557>*/ 							temp_flags[14 /* 0x0 40 */] = true;
/*<550>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 551, 'param3': 32}
/*<551>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 552, 'param3': 17}
/*<552>*/ 							set_camera(33, 0)
/*<553>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						}
          					  case 1:
/*<133>*/ 						printf(/* textboxtype: 0, unk: 1, line: 154 */ "Wauw! Mooie sprong!\n\n\n\nIk zou je geweldig noemen als ik niet wist\ndat je zonder de schub van de waterdraak\nnooit zo hoog had kunnen springen.")
/*<134>*/ 						scene_flags[2 'Lake Floria'][14 /* 0x0 40 */] = true;
          					}
          				}
          			  case 1:
/*<122>*/ 				switch (scene_flags[13 /* 0x0 20 */]) {
          				  case 0:
/*<124>*/ 					switch (temp_flags[13 /* 0x0 20 */]) {
          					  case 0:
/*<125>*/ 						printf(/* textboxtype: 1, unk: 0, line: 153 */ "Als je er niet doorheen kunt gaan, kun je\nook over de muur springen.")
/*<587>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          					  case 1:
/*<123>*/ 						printf(/* textboxtype: 0, unk: 0, line: 152 */ "Kom op, kom op! Schiet een beetje op, ja?\n\n\n\nHè? Je komt er niet door? Jeetje, jullie\nmensen ook met jullie botten. Wat\nonhandig. Nou, als het moet, kun je ook\nover deze muur springen.")
/*<127>*/ 						temp_flags[13 /* 0x0 20 */] = true;
          					}
          				  case 1:
/*<126>*/ 					printf(/* textboxtype: 0, unk: 1, line: 151 */ "Dat heb je goed gedaan! We zijn bijna bij\nHare Majesteit. Deze kant op!")
/*<128>*/ 					scene_flags[2 'Lake Floria'][13 /* 0x0 20 */] = true;
          				}
          			}
          		  case 1:
/*<113>*/ 			switch (scene_flags[12 /* 0x0 10 */]) {
          			  case 0:
/*<115>*/ 				switch (temp_flags[12 /* 0x0 10 */]) {
          				  case 0:
/*<116>*/ 					printf(/* textboxtype: 1, unk: 0, line: 150 */ "Zie je die monsters daar? Ze zien er\ngemeen uit, maar als je een <color red<waterboor-\naanval >coloroff>uitvoert, kun je ze makkelijk\nverslaan.")
          				  case 1:
/*<114>*/ 					printf(/* textboxtype: 0, unk: 0, line: 149 */ "Hé, dat is vreemd. Ik zou hier een vriend\ntreffen, maar het pad is door een\ngigantisch rotsblok geblokkeerd.\n\nGeweldig. Wat moeten we nu?")
/*<118>*/ 					temp_flags[12 /* 0x0 10 */] = true;
          				}
          			  case 1:
/*<117>*/ 				printf(/* textboxtype: 1, unk: 0, line: 147 */ "Wat?! Hoe is dat mogelijk? Ik heb\neen mens nog nooit een waterbooraanval\nzien doen!\n\nWacht.<pause 10>.<pause 10>.<pause 10> Dat is de <color blue<waterdrakenschub>coloroff>!\nBetekent dat dat je de gezant van de\ngodin bent, zoals de waterdraak al\nzei?\nHé, ik heb een idee! Misschien kun jij\nHare Majesteit helpen?\n[1-]Wat is het probleem?[2-]Breng me ernaartoe!")
/*<498>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_499:
/*<499>*/ 					printf(/* textboxtype: 0, unk: 1, line: 148 */ "Ja, daarover...<pause 15> Het is onlangs gebeurd.\nEen idioot viel binnen met een bende\nmonsters en vloog op Hare Majesteit af.\n\nZij is een sterke vechter en slokte een boel\nvan de monsters al binnen enkele\nseconden op.\n\nHet waren er alleen heel veel. Terwijl\nze afgeleid was, lukte het de sukkel die\nde monsters leidde, om haar te\nverwonden.\nEnkele wonden zijn al genezen, maar ze\nzegt dat ze niet genoeg speciaal water\nheeft om volledig te herstellen.\n\nZou je met Hare Majesteit kunnen gaan\npraten om te zien of je haar kunt helpen?\n\n\nIk breng je wel naar haar toe. Volg mij!")
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
/*<109>*/ 				printf(/* textboxtype: 0, unk: 0, line: 146 */ "Ja, om dat te doen moet je een\n<color green<waterbooraanval >coloroff>kunnen uitvoeren\nen dat kun jij duidelijk niet!")
/*<586>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          			  case 1:
/*<107>*/ 				printf(/* textboxtype: 0, unk: 1, line: 145 */ "Ha-HA! Dat zag je niet aankomen, hè?\nJa, het lukt je nooit van z'n lang zal ze\nleven om me nu nog te volgen!\n\nEn wat ga je nu doen? Huilen? Als je\ndenkt dat je het kunt, probeer dan\nmaar eens hier te komen!")
/*<111>*/ 				temp_flags[11 /* 0x0 08 */] = true;
          			}
          		  case 1:
/*<508>*/ 			switch (scene_flags[110 /* 0xC 40 */]) {
          			  case 0:
/*<110>*/ 				printf(/* textboxtype: 1, unk: 0, line: 143 */ "Volg me niet zo, lastpak! Als je daar niet\nmee ophoudt, vertel ik hare majesteit\nde waterdraak over je gepest!")
/*<112>*/ 				scene_flags[2 'Lake Floria'][11 /* 0x0 08 */] = true;
          			  case 1:
/*<509>*/ 				printf(/* textboxtype: 1, unk: 0, line: 144 */ "O, néé. Nog zo'n mens!\n\n\n\nOké, oké... Vermijd oogcontact en loop\nstilletjes weg...")
/*<510>*/ 				scene_flags[2 'Lake Floria'][110 /* 0xC 40 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_203_98() {
/*<341>*/ 	start()
/*<342>*/ 	printf(/* textboxtype: 2, unk: 0, line: 126 */ "<0x10009:0x00000006>Ga. De heilige vlam die je zoekt, bevindt\nzich hierbinnen.\n\n\nAl sluit de waterval deze plek al vele jaren\naf van de rest van de wereld, toch hebben\nvele monsters een weg naar binnen\ngevonden.")
          }

          void entrypoint_203_63() {
/*<506>*/ 	start()
/*<507>*/ 	printf(/* textboxtype: 1, unk: 0, line: 185 */ "Het was hier heel lang erg vredig. Toen\nkwamen er opeens van die rare figuren\nals jij opdagen.\n\nDaarbij terroriseren enge vissen onze\nwateren! Door al die commotie kom ik\nzelden aan rust toe.")
          }

          void entrypoint_203_81() {
/*< 88>*/ 	start()
/*< 90>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<101>*/ 		printf(/* textboxtype: 2, unk: 0, line: 170 */ "Wat een pech. Toen het woud onder water\nstond, moest ik hier blijven om de boel\nin de gaten te houden.\n\nIk wilde zo graag eens in het\nondergelopen gebied zwemmen.\nWat een teleurstelling!")
/*<562>*/ 		set_camera(34, 0)
/*<103>*/ 		make_actor_do_something(0, 0)
/*<102>*/ 		printf(/* textboxtype: 1, unk: 0, line: 171 */ "Teleurstelling! Teleurstelling!")
          		flw_563:
/*<563>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<323>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<324>*/ 			printf(/* textboxtype: 1, unk: 0, line: 168 */ "Hare Majesteit is op dit moment niet hier.")
/*<561>*/ 			set_camera(34, 0)
/*<326>*/ 			make_actor_do_something(0, 0)
/*<325>*/ 			printf(/* textboxtype: 0, unk: 1, line: 169 */ "Niet hier! Niet hier!")
          			goto flw_563
          		  case 1:
/*< 89>*/ 			switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          			  case 0:
/*< 98>*/ 				printf(/* textboxtype: 0, unk: 1, line: 166 */ "Dankzij jou is de waterdraak volledig\nhersteld. Enorm bedankt!")
/*<560>*/ 				set_camera(34, 0)
/*<100>*/ 				make_actor_do_something(0, 0)
/*< 99>*/ 				printf(/* textboxtype: 0, unk: 0, line: 167 */ "Enorm bedankt! Enorm bedankt!")
          				goto flw_563
          			  case 1:
/*< 93>*/ 				switch (random(2)) {
          				  case 0:
/*< 95>*/ 					printf(/* textboxtype: 0, unk: 0, line: 164 */ "Help Hare Majesteit alsjeblieft bij\nhaar herstel!")
/*<558>*/ 					set_camera(34, 0)
/*< 97>*/ 					make_actor_do_something(0, 0)
/*< 96>*/ 					printf(/* textboxtype: 1, unk: 0, line: 165 */ "Help haar! Help haar!")
          					goto flw_563
          				  case 1:
/*< 91>*/ 					printf(/* textboxtype: 1, unk: 0, line: 162 */ "Hare Majesteit bevindt zich iets verderop.\nGa gerust naar haar toe.")
/*<559>*/ 					set_camera(34, 0)
/*< 94>*/ 					make_actor_do_something(0, 0)
/*< 92>*/ 					printf(/* textboxtype: 0, unk: 1, line: 163 */ "Kom op! Ga naar de waterdraak toe!")
          					goto flw_563
          				}
          			}
          		}
          	}
          }

          void entrypoint_203_99() {
/*<343>*/ 	start()
/*<344>*/ 	printf(/* textboxtype: 0, unk: 2, line: 127 */ "<0x10009:0x00070704>Ach, maar jij bent de door de godin\nuitverkoren held.\n\n\nJij en ik zullen elkaar snel genoeg weer\nzien, lijkt mij. Blijf tot die tijd op je hoede.\n<0x10009:0x00070703>Tot ziens, jochie.")
/*<518>*/ 	story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */] = true;
          }

          void entrypoint_203_64() {
/*<511>*/ 	start()
/*<512>*/ 	printf(/* textboxtype: 1, unk: 1, line: 186 */ "Zie je hem daar? Hij wil dolgraag in het\ngevlei raken bij de waterdraak.\n\n\nAls ik jou was, bleef ik ver bij hem\nvandaan. Er komt niets goeds van omgaan\nmet een slijmende Parella.")
          }

          void entrypoint_203_82() {
/*<120>*/ 	start()
/*<136>*/ 	switch (random(2)) {
          	  case 0:
/*<137>*/ 		printf(/* textboxtype: 0, unk: 0, line: 152 */ "Kom op, kom op! Schiet een beetje op, ja?\n\n\n\nHè? Je komt er niet door? Jeetje, jullie\nmensen ook met jullie botten. Wat\nonhandig. Nou, als het moet, kun je ook\nover deze muur springen.")
          	  case 1:
/*<135>*/ 		printf(/* textboxtype: 0, unk: 1, line: 145 */ "Ha-HA! Dat zag je niet aankomen, hè?\nJa, het lukt je nooit van z'n lang zal ze\nleven om me nu nog te volgen!\n\nEn wat ga je nu doen? Huilen? Als je\ndenkt dat je het kunt, probeer dan\nmaar eens hier te komen!")
          	}
          }

          void entrypoint_203_65() {
/*<513>*/ 	start()
/*<514>*/ 	printf(/* textboxtype: 0, unk: 1, line: 187 */ "Ik ben dol op mijn huis. Ik zou alleen wel\nwillen dat het wat makkelijker was om\nnaar binnen en naar buiten te gaan.")
          }

          void entrypoint_203_83() {
/*<233>*/ 	start()
/*<245>*/ 	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          	  case 0:
/*<246>*/ 		switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          		  case 0:
/*<248>*/ 			switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          			  case 0:
/*<251>*/ 				printf(/* textboxtype: 0, unk: 1, line: 181 */ "Ik vind het jammer dat het woud niet\nmeer onder water staat. Ik was graag\nnog wat meer op verkenning gegaan.")
          			  case 1:
/*<250>*/ 				printf(/* textboxtype: 1, unk: 1, line: 180 */ "Ik ben zo blij dat Hare Majesteit weer\nhersteld is. Bedankt voor je hulp!")
          			}
          		  case 1:
/*<249>*/ 			printf(/* textboxtype: 1, unk: 0, line: 179 */ "Sinds de aanval is Hare Majesteit niet\nzichzelf. Kun jij haar helpen?")
          		}
          	  case 1:
/*<252>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<247>*/ 			printf(/* textboxtype: 0, unk: 1, line: 178 */ "De waterdraak is eigenlijk heel aardig...\ntenzij je haar kwaad maakt. Dus zorg\nervoor dat je dat niet doet!")
/*<253>*/ 			printf(/* textboxtype: 0, unk: 1, line: 175 */ "Vertel het niet door.")
          		  case 1:
/*<234>*/ 			printf(/* textboxtype: 0, unk: 1, line: 172 */ "Iek! Eet me niet op!\n[1-]Hare Majesteit?[2-]Geen zorgen.")
/*<236>*/ 			switch (choice(2)) {
          			  case 0:
/*<241>*/ 				switch (scene_flags[25 /* 0x2 02 */]) {
          				  case 0:
/*<244>*/ 					printf(/* textboxtype: 1, unk: 1, line: 177 */ "Of ík de waterdraak ben? Nee, hoor!<pause 30>\nMaar je bent op zoek naar Hare\nMajesteit?\n\nZe is heel aardig, tenzij je onbeleefd\ntegen haar bent. Dan is ze enorm eng.\nDus als je haar ziet, zorg dan dat je je\nnetjes tegenover haar gedraagt.")
          					flw_239:
/*<239>*/ 					printf(/* textboxtype: 0, unk: 1, line: 175 */ "Vertel het niet door.")
/*<240>*/ 					scene_flags[2 'Lake Floria'][19 /* 0x3 08 */] = true;
          				  case 1:
/*<237>*/ 					printf(/* textboxtype: 1, unk: 0, line: 173 */ "Of ík de waterdraak ben? Nee, hoor!<pause 30>\nMaar je bent op zoek naar Hare\nMajesteit?\n\nJe bezit een van haar schubben, dus\nje moet wel een vriend van onze soort\nzijn. Ik vertel je wel waar je haar kunt\nvinden.")
/*<242>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 238, 'param3': 30}
/*<238>*/ 					printf(/* textboxtype: 1, unk: 1, line: 174 */ "De waterdraak woont iets verderop.\nAls je dat ergens wilt noteren, dan\nis dit een mooi moment daarvoor.")
/*<243>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 239, 'param3': 34}
          					goto flw_239
          				}
          			  case 1:
/*<235>*/ 				printf(/* textboxtype: 1, unk: 0, line: 176 */ "Waaat?<pause 15> Je wilt me niet opeten?<pause 15> Dat is een\nhele opluchting!\n\n\nIk verstop me hier al een hele tijd. Al\nsinds die enge school vissen hier langs\nkwam zwemmen.")
          			}
          		}
          	}
          }

          void entrypoint_203_49() {
/*<564>*/ 	start()
/*<565>*/ 	printf(/* textboxtype: 1, unk: 0, line: 86 */ "<0x10012:0x00000001>Meester, luister goed. Hoort u dat?")
          }

          void entrypoint_203_50() {
/*<  4>*/ 	start()
/*<255>*/ 	set_camera(-1, 0)
/*<254>*/ 	printf(/* textboxtype: 2, unk: 0, line: 80 */ "Gefeliciteerd, <0x10012:0x00000004>meester <heroname>.")
/*<256>*/ 	printf(/* textboxtype: 1, unk: 1, line: 81 */ "U heeft de beproeving voltooid. U heeft\nnu de kracht om naar de eerste vlam\nte gaan waarmee u uw je zwaard kunt\nstalen.")
/*<258>*/ 	set_camera(2, 0)
/*<257>*/ 	printf(/* textboxtype: 0, unk: 1, line: 82 */ "De <color yellow<waterdrakenschub>coloroff> is een van de heilige\ngeschenken van de godin.\n\n\nMet de kracht die u door de <color blue<waterdraak>coloroff>\nis geschonken, kunt u zich vrij onder\nwater bewegen.")
/*<260>*/ 	set_camera(-1, 0)
/*<259>*/ 	printf(/* textboxtype: 1, unk: 0, line: 83 */ "De vlam die u zoekt, bevindt zich ergens\nin dit woud... <0x10012:0x00000001>Meester, dat is waarschijn-\nlijk in een deel van dit gebied dat u nog\nniet verkend heeft.")
          }

          void entrypoint_203_85() {
/*<490>*/ 	start()
/*<492>*/ 	printf(/* textboxtype: 1, unk: 0, line: 137 */ "<0x10009:0x00070707>Ja? Heb je een vraag voor me?\n[1-]Vuurdraak?[2-]Donderdraak?[3-]Faron-woud?[4]Laat maar.")
/*<491>*/ 	switch (choice(4)) {
          	  case 0:
/*<493>*/ 		printf(/* textboxtype: 2, unk: 1, line: 138 */ "<0x10009:0x00070704>Ha! Hij?<pause 15> Zoals ik over het woud waak,\nwaakt hij over het vulkanische land ten\nnoorden van hier.\n\nHij is nogal eigenaardig en woont in\nde brandende diepte van de vulkaan,\nbuiten het bereik van monsters en\nmensen.\nAls je niet tegen hitte kunt, kun je er\nmaar beter wegblijven. Tenzij je graag\nje haar in brand wilt steken, natuurlijk.")
          	  case 1:
/*<494>*/ 		printf(/* textboxtype: 0, unk: 2, line: 139 */ "<0x10009:0x00070704>Ha! O, hij?<pause 15> De godin heeft mij\nopgedragen om over het woud te waken,\nterwijl hij op zijn beurt over de kurkdroge\nwoestijnzanden regeert.\nHij is de oudste van ons draken. Hij\nverwaarloost ook al tijden zijn gezond-\nheid.<pause 15> Ik vraag me af hoe het met hem\ngaat...")
          	  case 2:
/*<495>*/ 		printf(/* textboxtype: 1, unk: 0, line: 140 */ "<0x10009:0x00070704>Vele oude liederen prijzen de wijze\nwaarop mensen vroeger in dit woud\nwoonden. Ze leefden in harmonie\nmet de natuur.\nEerlijk gezegd denk ik dat de liederen\nernaast zitten. Vind je niet ook dat\nhet woud veel mooier is zonder\nmensen?")
          	  case 3:
/*<496>*/ 		printf(/* textboxtype: 2, unk: 1, line: 141 */ "<0x10009:0x00070706>Blijf je lichaam en geest trainen!\nDat is heel belangrijk als je de\nheilige missie wilt voltooien die\nje is toevertrouwd.")
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
/*<350>*/ 	printf(/* textboxtype: 55, unk: 1, line: 70 */ "Je hebt de top van de boom bereikt.\nHier heb je een uitstekend zicht op het\nwoud. Misschien zie je daarbij gebieden\ndie je nog niet hebt verkend.")
/*< 19>*/ 	story_flags[60 /* us: 805A9ADC 0x80, jp: 805ACD5C 0x80 */] = true;
/*<566>*/ 	scene_flags[1 'Faron Woods'][51 /* 0x7 08 */] = true;
/*< 44>*/ 	make_actor_do_something(0, 0)
/*<145>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 394, 'param3': 17}
/*<394>*/ 	set_camera(17, 0)
/*<395>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 381, 'param3': 17}
/*<381>*/ 	printf(/* textboxtype: 2, unk: 0, line: 71 */ "<0x10012:0x00000001>Meester, kijk... daarboven...")
/*<382>*/ 	set_camera(18, 0)
/*<386>*/ 	wait_frames(30)
/*<383>*/ 	printf(/* textboxtype: 1, unk: 2, line: 72 */ "Ik heb de ontdekking van een nieuwe\nKikwi bevestigd.\n\n\nVolgens mijn analyse is 90% zeker dat de\ngeluiden die we eerder hoorden, in feite\nvan het luide gesnurk van deze Kikwi\nkwamen.")
/*<384>*/ 	set_camera(19, 0)
/*<385>*/ 	wait_frames(30)
/*< 30>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 28, 'param3': 36}
/*< 28>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_86() {
/*<398>*/ 	start()
/*<399>*/ 	printf(/* textboxtype: 0, unk: 2, line: 115 */ "<0x10009:0x00090900>Mmmmmm! Fantastisch! Ik voel de\nenergie door mijn lijf gieren!")
          }

          void entrypoint_203_00() {
          	start()
/*< 81>*/ 	switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          	  case 0:
/*<541>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*<542>*/ 			printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x00010014>Jij! Ik had je toch gezegd om niet met de\nwaterdraak over ons gesprek te praten!\n\n\nToen de waterdraak het woud vol liet\nlopen, wist ik zeker dat mijn laatste uurtje\ngeslagen had!\n\n<0x10009:0x00010007>Maar het resultaat valt best mee, hè?\nHet water heeft veel van de monsters\nweggespoeld en het woud is nu heel\nvredig.")
          			flw_540:
/*<540>*/ 			printf(/* textboxtype: 1, unk: 1, line: 33 */ "<0x10009:0x00000013>Als je me nodig hebt, weet je me wel te\nvinden. Ik doe hier een dutje! Tot ziens,\nkwwwwwwrk...")
          		  case 1:
/*<543>*/ 			printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x00010001>Au! Dat doet pijn!\n\n\n\n<0x10009:0x00010007>Ik heb gehoord dat de waterdraak van je\nonder de indruk is.\n\n\nUiteraard heb ik diezelfde eer al heel\nlang, dus...")
          			goto flw_540
          		}
          	  case 1:
/*< 82>*/ 		switch (scene_flags[50 /* 0x7 04 */]) {
          		  case 0:
/*<536>*/ 			switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          			  case 0:
/*<538>*/ 				switch (adventure_pouch_has(7 0x0007)) {
          				  case 0:
/*<539>*/ 					printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00010001>Heb je geen manieren of zo?\n\n\n\n<0x10009:0x00010007>Ja, dat is overduidelijk het water waar\nHare Majesteit om smacht. Als je het niet\ndurft te geven, kun je wel zeggen dat het\nvan mij komt.")
          					goto flw_540
          				  case 1:
/*<544>*/ 					printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00010001>Heb je geen manieren of zo?\n\n\n\n<0x10009:0x00010006>Hm? Zoek je heilig water om waardig\nte worden bevonden door de waterdraak?\n\n\nHeb je al in die tempel daar gezocht?\nAls ik het me goed herinner, is Hare\nMajesteit dol op het water van een\nvan de bronnen daar.")
          					goto flw_540
          				}
          			  case 1:
/*<537>*/ 				printf(/* textboxtype: 1, unk: 1, line: 39 */ "<0x10009:0x00010001>Nou ja, zeg. Zo bezorg je me nog blauwe\nplekken.\n\n\n<0x10009:0x00010007>Dus het is je gelukt om de poort naar het\nFloria-meer te openen?\n\n\nVergeet niet dat als de waterdraak je\nvraagt hoe je weet waar ze woont,\nje dit niet van mij hebt!")
          				goto flw_540
          			}
          		  case 1:
/*< 83>*/ 			switch (story_flags[62 /* us: 805A9ADF 0x02, jp: 805ACD5F 0x02 */]) {
          			  case 0:
/*< 39>*/ 				switch (story_flags[61 /* us: 805A9ADF 0x01, jp: 805ACD5F 0x01 */]) {
          				  case 0:
/*< 40>*/ 					printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00010004>Hmmmmmm? O, daar ben je weer...\nkwwrk. Kan ik iets voor je doen?\n[1-]Ja.[2]Nee.")
/*< 41>*/ 					switch (choice(2)) {
          					  case 0:
/*< 42>*/ 						printf(/* textboxtype: 1, unk: 2, line: 30 */ "<0x10009:0x00000003>Gebruik de kracht van de godin om het\nsymbool op de poort te voltooien.")
          						goto flw_37
          					  case 1:
/*< 43>*/ 						printf(/* textboxtype: 1, unk: 1, line: 33 */ "<0x10009:0x00000013>Als je me nodig hebt, weet je me wel te\nvinden. Ik doe hier een dutje! Tot ziens,\nkwwwwwwrk...")
          					}
          				  case 1:
          					goto flw_37
          				}
          			  case 1:
/*<356>*/ 				printf(/* textboxtype: 1, unk: 2, line: 3 */ "<0x10009:0x00000014>Wat-wil-je?! Ik slaaaaap!")
/*<375>*/ 				set_camera(20, 0)
/*<569>*/ 				switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          				  case 0:
/*<570>*/ 					printf(/* textboxtype: 1, unk: 1, line: 6 */ "<0x10009:0x00010001><0x10006:0xfccd>Wat?<pause 15> <0x10006:0x00cd>Goh, wat heb jij een bekend gezicht.\nHeb ik jou al eens ontmoet, kwrrrrrk?\n[1-]Ja, dat heb je![2-]Nee...")
/*<571>*/ 					switch (choice(2)) {
          					  case 0:
/*<575>*/ 						set_camera(18, 0)
/*<574>*/ 						printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00000007>O, je speelt in de <color red<Heldenstand>coloroff>. Dat\nverklaart het. In dat geval hoef ik je niet\nuit te leggen wat je moet doen, hè?\n[1-]Inderdaad.[2-]Ik ben het vergeten...")
/*<576>*/ 						switch (choice(2)) {
          						  case 0:
/*<578>*/ 							entrypoint_203_10();
          						  case 1:
/*<577>*/ 							printf(/* textboxtype: 1, unk: 1, line: 9 */ "<0x10009:0x00000003>O nee. Als je geheugen zo slecht is dat je\nzoiets vergeet, dan kun je het nu best\nzwaar krijgen, kwwrk!")
          							flw_378:
/*<378>*/ 							set_camera(20, 0)
          							flw_379:
/*<379>*/ 							printf(/* textboxtype: 1, unk: 1, line: 15 */ "<0x10009:0x00010006>Beloof je dat je niemand zult vertellen\nwat ik je nu ga zeggen? Ik meen het,\nkwwwrk!\n[1-]Dat beloof ik.[2-]Ik beloof niets!")
/*< 21>*/ 							switch (choice(2)) {
          							  case 0:
          								flw_354:
/*<354>*/ 								printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00030008>Oké, ik zal het je vertellen. Maar vergeet\nniet dat je het niet door mag vertellen.")
          								flw_355:
/*<355>*/ 								set_camera(18, 0)
/*<364>*/ 								printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00030004>De vlam die je zoekt...<pause 15> wordt ook wel\n<sound 4><color blue<Farores vlam>coloroff> genoemd.\n\n\n<0x10009:0x00010000>Ja, ja.. Farores vlam...<pause 15> Dat verhaal begint\nheel lang geleden, toen de godin nog bij\nons was, kwwwrk...")
/*<365>*/ 								set_camera(21, 0)
/*<366>*/ 								printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00000002>De godin heeft de vlam aan de\n<color blue<waterdraak>coloroff> gegeven, die regeert over het\n<color blue<Faron-woud>coloroff>.")
/*<367>*/ 								set_camera(22, 0)
/*<368>*/ 								printf(/* textboxtype: 1, unk: 1, line: 21 */ "<0x10009:0x00000004>Het verhaal gaat dat ze de vlam bij de\nwaterdraak achterliet, zodat zij de vlam\nop een dag aan \"<color blue<de hemelreiziger>coloroff>\" kon\ngeven...")
/*<369>*/ 								set_camera(20, 0)
/*<370>*/ 								printf(/* textboxtype: 0, unk: 1, line: 22 */ "Weet je, kwwwwrk, Volgens mij had\nde godin het over jou, knul.\n\n\n<0x10009:0x00030009>Het lijkt me duidelijk. Je moet de\nwaterdraak opzoeken.")
/*<371>*/ 								set_camera(23, 0)
/*<372>*/ 								printf(/* textboxtype: 1, unk: 0, line: 23 */ "Ze woont diep in het meer in het zuiden\nvan dit woud, kwwwwwwrk. Daar waakt\nze over de vlam.")
/*<373>*/ 								set_camera(24, 0)
/*<374>*/ 								printf(/* textboxtype: 1, unk: 1, line: 24 */ "<0x10009:0x00000004>Er is wel iets dat je moet weten. De poort\nnaar dat meer opent niet voor degenen\ndie niet waardig worden geacht...\n\n<0x10009:0x00000007>Maar maak je geen zorgen, kwwwwrk.\nIk zal je een trucje verklappen om\nde poort te openen.")
/*<407>*/ 								set_camera(25, 0)
/*<408>*/ 								printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00010004>Om de poort te openen<pause 15> moet je het\nsymbool op de deur vullen met <color red<kracht van\nde godin>coloroff>, kwwwrk!\n\n<0x10009:0x00000009>Maar dat is niet zo makkelijk als het\nlijkt!<pause 15> Het symbool is niet compleet.\nOm de poort te openen moet je eerst\nhet symbool voltooien.")
/*<409>*/ 								set_camera(18, 0)
/*<410>*/ 								printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00030001>De enige manier om te weten hoe het\nvolledige symbool eruit moet zien,\nis door hetzelfde volledige symbool\nergens in dit woud te vinden.")
          								goto flw_37
          							  case 1:
/*<380>*/ 								set_camera(18, 0)
/*< 22>*/ 								printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00030014><0x10008:0x02cd>Je kunt geen geheim\nbewaren?!\n\n\n<0x10009:0x00010006>Ik wil je een geheim verklappen en je wilt\nniet eens beloven dat je het aan niemand\nanders vertelt, kwwrk?\n[1-]Vertel nou![2-]Nee...")
/*< 23>*/ 								switch (choice(2)) {
          								  case 0:
          									goto flw_354
          								  case 1:
/*< 24>*/ 									printf(/* textboxtype: 1, unk: 1, line: 18 */ "<0x10009:0x0003000b><0x10008:0x02cd>Wat?!\n\n\n\n<0x10009:0x00010003>Oké...<pause 15> Ik geef het op, kwwwrk. Je bent\nhelemaal hiernaartoe gereisd, dus ik zal\nhet je toch vertellen.")
          									goto flw_355
          								}
          							}
          						}
          					  case 1:
/*<572>*/ 						printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00000003>Hm, misschien... Misschien... Dit is vast\nwat ze déjà vu noemen, kwwwrk.\nGriezelig, hoor.")
/*<573>*/ 						set_camera(18, 0)
          						flw_363:
/*<363>*/ 						printf(/* textboxtype: 1, unk: 1, line: 12 */ "<0x10009:0x00030006>Maar genoeg nonsens, kwwwrk, waarom\nis een echte mens zoals jij eigenlijk hier in\ndit woud?\n[1-]De vlam![2-]Niets...")
/*<360>*/ 						switch (choice(2)) {
          						  case 0:
/*<361>*/ 							printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00010001>Je zoekt een vlam om je zwaard mee\nte verbeteren, kwwrk? Zodat je iemand\nkunt vinden die belangrijk voor je is?\n\nWat interessant...<pause 15> Een mens die me ziet\nen een vlam zoekt, kwwwrk!")
          							goto flw_378
          						  case 1:
/*<396>*/ 							set_camera(20, 0)
/*<397>*/ 							printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00010014>Weet je nog dat ik zei dat het mijn taak\nis om over het woud te waken? Ik weet\ndingen die anderen niet weten, kwrrrk!\n\nEen mens die een vlam zoekt om zijn\nzwaard te verbeteren. Pffft, ik weet wie\njij bent!")
          							goto flw_379
          						}
          					}
          				  case 1:
/*<357>*/ 					printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00010001>Ooo, moet je dat zien! Een echte mens!\nJouw soort heb ik al lang niet gezien,\nkwrrrrrk.\n\nJe mag me <color blue<Jasmi>coloroff> noemen. Ik sta bekend\nals de ouwe <color blue<Kikwi-kluizenaar>coloroff>. Ik waak\nover het bos hier... als ik niet slaap.\n\n<0x10009:0x00010006>Ik weet niet hoe je hier gekomen bent,\nmaar ik wil je wat vragen... Kun je me\necht zien?\n[1-]Heel goed.[2-]Nee.")
/*<358>*/ 					switch (choice(2)) {
          					  case 0:
/*<362>*/ 						printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00000007>Is dat zo? Nou, daar mag je best trots\nop zijn, kwwwrk! Weet je, zelfs sommige\nKikwi's kunnen me niet zien.")
/*<377>*/ 						set_camera(18, 0)
          						goto flw_363
          					  case 1:
/*<376>*/ 						set_camera(18, 0)
/*<359>*/ 						printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x0003000b>Jokkebrok! Je bent een jokkende\njokkebrok, kwwrk!\n\n\n<0x10009:0x00010014>En hoe heb je me met dat fraaie\nschietding geraakt zonder me te zien, hè?")
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
/*< 85>*/ 			printf(/* textboxtype: 2, unk: 0, line: 77 */ "Ik ben het water hier aan het analyseren<0x10006:0xfccd>...<pause 15><0x10006:0x00cd>\nDe unieke <color red<eigenschappen >coloroff>ervan <color red<komen\novereen >coloroff>met die van het water uit de\nBron der Bezinning.")
/*<186>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 517, 'param3': 36}
/*<517>*/ 			wait_frames(15)
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
/*< 67>*/ 			printf(/* textboxtype: 2, unk: 0, line: 74 */ "Ik heb het overgebleven water in dit\nwatervat geanalyseerd.<0x10006:0xfccd>.<pause 15>.<0x10006:0x00cd><sound 4> Uitstekend.\nIk kan u nu helpen met de <color red<detectie\n>coloroff>van het type water dat u zoekt.")
/*<568>*/ 			open_dowsing_wheel(5)
/*<567>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<230>*/ 			switch (adventure_pouch_has(1 0x0001)) {
          			  case 0:
/*<231>*/ 				printf(/* textboxtype: 0, unk: 1, line: 76 */ "<0x10012:0x00000001>Meester, u bent zo slim geweest om een\n<color yellow<leeg flesje>coloroff> bij u te dragen. Gebruik het om\nwat water mee te nemen.")
          				flw_66:
/*< 66>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 297, 'param3': 36}
/*<297>*/ 				wait_frames(15)
/*<462>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 294, 'param3': 16}
/*<294>*/ 				set_camera(12, 0)
/*<293>*/ 				printf(/* textboxtype: 1, unk: 0, line: 113 */ "<0x10009:0x00000005>Als je die kant op gaat, kom je bij de\nuitgang naar het woud.")
/*<471>*/ 				switch (temp_flags[0 /* 0x1 01 */]) {
          				  case 0:
/*<295>*/ 					set_camera(-1, 0)
          					flw_184:
/*<184>*/ 					printf(/* textboxtype: 0, unk: 2, line: 106 */ "<0x10009:0x00090706>Prachtig. Dan zou ik meteen maar op pad\ngaan. Het is niet slim om een draak\nte laten wachten.")
/*<461>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				  case 1:
/*<472>*/ 					set_camera(27, 0)
          					goto flw_184
          				}
          			  case 1:
/*<229>*/ 				printf(/* textboxtype: 1, unk: 2, line: 75 */ "<0x10012:0x00000001>Meester, u heeft iets nodig om het water\nin te kunnen verplaatsen.")
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
/*<401>*/ 	printf(/* textboxtype: 1, unk: 0, line: 116 */ "Aanschouw de glorie van <color blue<Faron>coloroff>,\nwaterdraak en wachter over dit\nwoud! Ik ben weer gezond en wel!")
          }

          void entrypoint_203_01() {
/*<  1>*/ 	start()
/*<413>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<414>*/ 		printf(/* textboxtype: 1, unk: 1, line: 45 */ "<0x10009:0x00000007>Ik weet zeker dat al die gemene kerels\nnu weg zijn. De vrede is teruggekeerd\nin het woud!\n\n<0x10009:0x00000004>Ik hoop echt dat je je vriendin vindt,\nzodat jullie net zo gelukkig zijn als ik.")
          	  case 1:
/*<415>*/ 		printf(/* textboxtype: 1, unk: 1, line: 42 */ "<0x10009:0x00000001>Hallo, herinner je mij nog? Heb je dat\nmeisje waarnaar je op zoek was, nog\ngevonden?\n[1-]Wie ben jij?[2-]Nog niet...")
/*<533>*/ 		switch (choice(2)) {
          		  case 0:
/*<534>*/ 			printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x00110013>Wie ik ben?<pause 30> Is het zo moeilijk om te\nonthouden wie ik ben?\n\n\n<0x10009:0x000b0004>Weet je wat een goeie manier is om\nKikwi's van elkaar te onderscheiden?\nAls je ons selecteert op de kaart, zie\nje onze namen verschijnen.")
          		  case 1:
/*<535>*/ 			printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x00110013>O... Ik hoop dat je haar snel vindt.\nEr is niets zo fijn als een hereniging\nmet een vriend of vriendin.")
          		}
          	}
          }

          void entrypoint_203_53() {
/*< 75>*/ 	start()
/*<221>*/ 	story_flags[68 /* us: 805A9ADF 0x80, jp: 805ACD5F 0x80 */] = true;
/*<219>*/ 	{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 220, 'param3': 35}
/*<220>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 227, 'param3': 16}
/*<227>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 223, 'param3': 17}
/*<223>*/ 	printf(/* textboxtype: 0, unk: 1, line: 73 */ "")
/*<222>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 228, 'param3': 36}
/*<228>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_203_70() {
/*<159>*/ 	start()
/*<158>*/ 	printf(/* textboxtype: 1, unk: 0, line: 188 */ "Meesteres Fi, bzzzt! Mijn excuses dat ik u\nheb laten wachten!")
          }

          void entrypoint_203_88() {
/*<402>*/ 	start()
/*<545>*/ 	switch (temp_flags[2 /* 0x1 04 */]) {
          	  case 0:
/*<546>*/ 		printf(/* textboxtype: 0, unk: 2, line: 118 */ "<0x10009:0x00090700>Mens, ik heb er goed aan gedaan om jou\nom het <color blue<heilige water>coloroff> te vragen.\n\n\nIk zie nu dat het geen toeval was dat je de\nbeproeving van de godin hebt voltooid en\ndaarmee mijn <color blue<waterdrakenschub>coloroff> hebt\nbemachtigd.")
          	  case 1:
/*<547>*/ 		printf(/* textboxtype: 2, unk: 0, line: 117 */ "<0x10009:0x00090700>Mens, ik heb er goed aan gedaan om jou\nom het <color blue<heilige water>coloroff> te vragen.\n\n\nIk zie nu dat het geen toeval was dat je de\nbeproeving van de godin hebt voltooid en\ndaarmee mijn <color blue<waterdrakenschub>coloroff> hebt\nbemachtigd.")
          	}
          }

          void entrypoint_203_54() {
/*< 76>*/ 	start()
/*< 77>*/ 	printf(/* textboxtype: 1, unk: 2, line: 78 */ "Ik acht het 80% zeker dat dit het symbool\nis waar de kluizenaar het over had.")
/*<232>*/ 	set_camera(26, 0)
/*<437>*/ 	printf(/* textboxtype: 0, unk: 1, line: 79 */ "Ik raad u aan de vorm van het symbool\ngoed te onthouden.")
/*<438>*/ 	wait_frames(15)
/*<439>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 440, 'param3': 36}
/*<440>*/ 	wait_frames(15)
          }

          void entrypoint_203_71() {
/*<161>*/ 	start()
/*<179>*/ 	switch (scene_flags[127 /* 0xE 80 */]) {
          	  case 0:
/*<180>*/ 		printf(/* textboxtype: 0, unk: 1, line: 190 */ "Bah, vwwiep. Alweer dit oude <color red<bad>coloroff>...<pause 15>\nPrima, vrrm! Geen probleem...")
          	  case 1:
/*<160>*/ 		printf(/* textboxtype: 1, unk: 1, line: 189 */ "Eens even kijken... Deze lading ziet er\nzwaar uit,<pause 15> maar dat is geen enkel\nprobleem voor mij, bzzrrt!")
          	}
          }

          void entrypoint_203_89() {
/*<403>*/ 	start()
/*<404>*/ 	printf(/* textboxtype: 0, unk: 0, line: 119 */ "<0x10009:0x00070700>Zoals beloofd zal ik je de weg naar de\n<color red<heilige vlam>coloroff> wijzen.\n\n\nVolg mij.")
/*<405>*/ 	changeScene(2, 0) // 
          }

          void entrypoint_203_02() {
/*<416>*/ 	start()
/*<417>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<418>*/ 		printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x0009000c>Iedereen zegt dat het weer veilig is in het\nwoud, maar ik geloof er niks van.\n\n\n<0x10009:0x00070013>Is het ergens wel veilig? Ik hoop ooit eens\neen wandeling te kunnen maken waarbij\nik niet bij elk geluid angstig wegduik.")
          	  case 1:
/*<419>*/ 		printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x0009000c>Hoelang moeten we nog in angst leven?\n\n\n\n<0x10009:0x00070013>Is het dan nergens veiling in het woud?\nWat zou het fijn zijn om eens een\nontspannen wandeling te kunnen\nmaken.")
          	}
          }

