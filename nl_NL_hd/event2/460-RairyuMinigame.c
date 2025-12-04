          void entrypoint_460_00() {
/*<  1>*/ 	start()
/*< 38>*/ 	story_flags[351 /* us: 805A9B01 0x20, jp: 805ACD81 0x20 */] = false;
/*< 39>*/ 	story_flags[352 /* us: 805A9B01 0x40, jp: 805ACD81 0x40 */] = false;
/*< 33>*/ 	story_flags[353 /* us: 805A9B01 0x80, jp: 805ACD81 0x80 */] = false;
/*< 34>*/ 	story_flags[354 /* us: 805A9B00 0x04, jp: 805ACD80 0x04 */] = false;
/*< 35>*/ 	story_flags[355 /* us: 805A9B00 0x02, jp: 805ACD80 0x02 */] = false;
/*< 36>*/ 	story_flags[356 /* us: 805A9B00 0x01, jp: 805ACD80 0x01 */] = false;
/*< 37>*/ 	story_flags[357 /* us: 805A9B00 0x08, jp: 805ACD80 0x08 */] = false;
          	switch (context_related4(0)) {
          	  case 0:
/*<  4>*/ 		switch (story_flags[509 /* us: 805A9B15 0x08, jp: 805ACD95 0x08 */]) {
          		  case 0:
/*<119>*/ 			switch (scene_flags[113 /* 0xF 02 */]) {
          			  case 0:
/*<  8>*/ 				printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00070c01><0x30001:0x><heroname>! Ben je hier voor een\n<color red<gevecht>coloroff> of ga je voor een beproeving in een\n<color red<Rijk der Stilte>coloroff>?\n[1-]Gevecht![2-]Rijk der Stilte![3]Geen van beide.")
/*< 16>*/ 				switch (choice(3)) {
          				  case 0:
          					flw_80:
/*< 80>*/ 					switch (story_flags[522 /* us: 805A9B15 0x80, jp: 805ACD95 0x80 */]) {
          					  case 0:
          						flw_17:
/*< 17>*/ 						switch (context_related2(1)) {
          						  case 0:
          							flw_52:
/*< 52>*/ 							printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00070c06>Wat een vechtersmentaliteit! Ik ben onder\nde indruk!")
/*< 40>*/ 							scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = false;
/*< 41>*/ 							scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = false;
/*< 42>*/ 							scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = false;
/*< 43>*/ 							scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = false;
/*< 44>*/ 							scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = false;
/*< 45>*/ 							scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = false;
/*< 46>*/ 							scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = false;
/*< 47>*/ 							scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = false;
/*< 48>*/ 							scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = false;
/*< 49>*/ 							scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = false;
/*< 50>*/ 							scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = false;
/*< 51>*/ 							scene_flags[9 'Lanayru Gorge'][126 /* 0xE 40 */] = false;
/*<1010>*/ 							switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          							  case 0:
          								flw_13:
/*< 13>*/ 								printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00000c00>Oké... Uit welk deel van je reis wil je een\nvijand uitdagen?\n[1-]Het begin.[2-]Het midden.[3-]Latere deel.[4]Laat maar zitten.")
/*< 14>*/ 								switch (choice(4)) {
          								  case 0:
          									flw_236:
/*<236>*/ 									entrypoint_460_41();
          								  case 1:
          									flw_237:
/*<237>*/ 									entrypoint_460_42();
          								  case 2:
/*<262>*/ 									switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          									  case 0:
/*<238>*/ 										entrypoint_460_43();
          									  case 1:
/*<263>*/ 										switch (story_flags[225 /* us: 805A9AF2 0x10, jp: 805ACD72 0x10 */]) {
          										  case 0:
/*<265>*/ 											entrypoint_460_44();
          										  case 1:
/*<264>*/ 											switch (story_flags[134 /* us: 805A9AE4 0x10, jp: 805ACD64 0x10 */]) {
          											  case 0:
/*<266>*/ 												entrypoint_460_45();
          											  case 1:
/*<267>*/ 												entrypoint_460_46();
          											}
          										}
          									}
          								  case 3:
          									flw_15:
/*< 15>*/ 									printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000c05>Wat? Geen interesse? Wat saai...\n\n\n\n<0x10009:0x00070c00>Nou ja, je weet me te vinden als je van\ngedachten verandert.")
          								}
          							  case 1:
/*<194>*/ 								switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          								  case 0:
          									goto flw_13
          								  case 1:
/*<195>*/ 									printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x00070c00>Oké... Wil je het opnemen tegen een\nvijand uit het begin of een recentere\ntegenstander?\n[1-]Het begin.[2-]Recent.[3]Laat maar zitten.")
/*<196>*/ 									switch (choice(3)) {
          									  case 0:
          										goto flw_236
          									  case 1:
          										goto flw_237
          									  case 2:
          										goto flw_15
          									}
          								}
          							}
          						  case 1:
/*< 20>*/ 							printf(/* textboxtype: 1, unk: 1, line: 6 */ "<0x10009:0x00100c0b>Eh... <pause 15>Ho eens even... Je ziet eruit alsof je op\nieder moment in zwijm kunt vallen! Weet\nje zeker dat je er klaar voor bent?\n[1-]Ja, joh![2]Nee...")
/*< 21>*/ 							switch (choice(2)) {
          							  case 0:
          								goto flw_52
          							  case 1:
/*< 22>*/ 								printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00070c09>Goed...<pause 15> Als het gevecht al over is voordat\nhet begint, is er geen lol aan. Ik wacht\nliever nog even op een eerlijk gevecht.\n\n<0x10009:0x00000c00>Kom eerst maar eens op krachten, zodat ik\nkan zien wat je werkelijk kunt. Ik zal hier\ngeduldig op je wachten!")
          							}
          						}
          					  case 1:
/*< 10>*/ 						printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x000b0c0d>Zin in een <color red<gevecht>coloroff>? Fantastisch! Voor\nlefgozers als jij heb ik altijd respect.\n\n\nOmdat je voor een <color red<gevecht>coloroff> hebt gekozen,\nzal ik de sterkste tegenstanders uit je\nverleden kiezen...\n\n<0x10009:0x00000c00>En ik zal met mijn kracht zorgen dat de\nomstandigheden precies zo zijn als\nvoorheen!\n\nOmdat je je zo dapper in de strijd waagt,\nzal ik je een mooie beloning geven voor een\noverwinning: een belachelijk stevig schild!\n\nMaar als je verliest...\n\n\n\n<0x10009:0x000d0c00>Laten we het erop houden dat dit een heel\ngevaarlijk spelletje is... <color red<Als je verliest, is\nhet met je gedaan.>coloroff> Je zult niet heelhuids\nthuiskomen!\n<0x10009:0x00000c0a>Lijkt het je nog steeds wat?\n[1-]Ja![2]Eh... Nee.")
/*< 11>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_17
          						  case 1:
/*< 12>*/ 							printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000c05>Wat? Geen interesse? Wat saai...\n\n\n\n<0x10009:0x00070c00>Nou ja, je weet me te vinden als je van\ngedachten verandert.")
          						}
          					}
          				  case 1:
          					flw_81:
/*< 81>*/ 					switch (story_flags[523 /* us: 805A9B14 0x01, jp: 805ACD94 0x01 */]) {
          					  case 0:
          						flw_75:
/*< 75>*/ 						switch (context_related2(1)) {
          						  case 0:
/*< 77>*/ 							switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          							  case 0:
          								flw_464:
/*<464>*/ 								entrypoint_460_72();
          							  case 1:
/*<1015>*/ 								switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          								  case 0:
          									goto flw_464
          								  case 1:
/*<465>*/ 									entrypoint_460_74();
          								}
          							}
          						  case 1:
/*< 76>*/ 							printf(/* textboxtype: 0, unk: 0, line: 71 */ "<0x10009:0x00000005>Ho eens even... Je ziet eruit alsof je op ieder\nmoment in zwijm kunt vallen! Weet je\nzeker dat je er klaar voor bent?\n\nHet is het niet waard om je leven zo op het\nspel te zetten. Kom maar terug als je die\nhartjes van je hebt aangevuld.")
          						}
          					  case 1:
/*< 72>*/ 						printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10009:0x00000006>Waag je je aan een beproeving in een\n<color red<Rijk der Stilte>coloroff>? Jij hebt lef, jongen!\n\n\n<0x10009:0x00070c00>Ik kan de beproevingen recreëren voor\nieder <color red<Rijk der Stilte>coloroff> dat je bezocht hebt.\nEn dat kan ik ter plekke doen.\n\nMaar dit keer is het niet voldoende om de\nbeproeving te voltooien. Ik zal je tijd\nopnemen en als je snel genoeg bent, win je\neen prijs.\nMaar...<pause 20> als een waker je ook maar één\nkeer raakt, keer je hier terug <color red<met nog\nmaar heel weinig hartjes>coloroff>. <0x10009:0x00070c0a>Dus, durf je de\nbeproeving aan?[1-]Ja![2]Nee.")
/*< 73>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_75
          						  case 1:
/*< 74>*/ 							printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000c05>Wat? Geen interesse? Wat saai...\n\n\n\n<0x10009:0x00070c00>Nou ja, je weet me te vinden als je van\ngedachten verandert.")
          						}
          					}
          				  case 2:
/*< 19>*/ 					printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000c05>Wat? Geen interesse? Wat saai...\n\n\n\n<0x10009:0x00070c00>Nou ja, je weet me te vinden als je van\ngedachten verandert.")
          				}
          			  case 1:
/*<118>*/ 				printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00070c01>Nou, <heroname>, vertel... Ben je\neindelijk klaar om een lolletje te trappen?\n\n\n<0x10009:0x00000c00>We gaan gewoon een paar van de grootste\nuitdagingen uit je jonge leventje\nherbeleven... Lijkt je dat wat?\n[1-]Kom maar op![2]Liever niet...")
          				flw_5:
/*<  5>*/ 				switch (choice(2)) {
          				  case 0:
/*<120>*/ 					scene_flags[9 'Lanayru Gorge'][113 /* 0xF 02 */] = true;
/*<  6>*/ 					printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000b06>Je bent een echte held! Dat is heel moedig\nvan je!\n\n\n<0x10009:0x000b0c00>Als je het niet erg vindt, zal ik even kijken\nwat je zoal beleefd hebt.\n\n\n<0x10006:0xfbcd>...\n\n\n\n<0x10009:0x00000c08>Aha! Aha! Je hebt niet stilgezeten. Je hebt\n<color red<gevochten>coloroff> tegen zeer vervaarlijke vijanden\nen beproevingen in de rijken der stilte\ndoorstaan.\n<0x10009:0x000d0c00>Op basis daarvan zal ik je laten kiezen\ntussen twee spannende uitdagingen!\n\n\n<0x10009:0x00000c00>Welke uitdaging wil je aangaan? Kies maar\nwaar je zin in hebt!\n[1-]Gevecht![2-]Rijk der Stilte![3]Geen van beide.")
/*<  9>*/ 					switch (choice(3)) {
          					  case 0:
          						goto flw_80
          					  case 1:
          						goto flw_81
          					  case 2:
/*< 18>*/ 						printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000c05>Wat? Geen interesse? Wat saai...\n\n\n\n<0x10009:0x00070c00>Nou ja, je weet me te vinden als je van\ngedachten verandert.")
          					}
          				  case 1:
/*<  7>*/ 					printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000c05>Wat? Geen interesse? Wat saai...\n\n\n\n<0x10009:0x00070c00>Nou ja, je weet me te vinden als je van\ngedachten verandert.")
          				}
          			}
          		  case 1:
/*< 28>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 2, 'param3': 31}
/*<  2>*/ 			story_flags[509 /* us: 805A9B15 0x08, jp: 805ACD95 0x08 */] = true;
/*<111>*/ 			switch (temp_flags[63 /* 0x6 80 */]) {
          			  case 0:
/*<110>*/ 				printf(/* textboxtype: 0, unk: 1, line: 91 */ "<0x10009:0x000b0c08>Ho, <heroname>, ik zei toch dat je het\nrustig aan moest doen? Kun je de\nverlokking niet weerstaan?\n\n<0x10009:0x00000000>Oké! Waarop wachten we dan nog?\nDe show kan beginnen!\n\n\n<0x10009:0x00000c00>Als legendarische held heb je er natuurlijk\ngeen zin in om je tijd te verlummelen.\n\n\n<0x10009:0x000d0c00>Om dit verzetje wat betekenisvoller te maken\nzal ik je uitdagingen uit je verleden laten\nherbeleven.\n\n<0x10009:0x00070c00>Soms moet je een stapje terug doen om\ntwee stappen vooruit te komen. Je kunt\nveel leren van je verleden, haha!\n\n<0x10009:0x00000c0a>Dus, <heroname>, lijkt het je wat?\n[1-]Ja![2]Niet echt...")
          				goto flw_5
          			  case 1:
/*<  3>*/ 				printf(/* textboxtype: 1, unk: 1, line: 0 */ "Eindelijk, <0x10009:0x000b0c01><heroname>! Ik ben blij\ndat je terug bent gekomen!\n\n\n<0x10009:0x00000000>Het wordt hoog tijd dat we wat leuks gaan\ndoen!\n\n\n<0x10009:0x00000c00>Of heb jij als held geen tijd om je te\nvermaken?\n\n\n<0x10009:0x000d0c00>Wel, ik weet een uitdaging waar jij als held\naardig voor zult moeten zweten! Het zijn\ngevechten die je al eerder hebt moeten\ndoorstaan.\n<0x10009:0x00070c00>Kijk naar het verleden om de toekomst te\nbegrijpen, zeg ik altijd! En ik weet zeker\ndat er van jouw verleden heel wat te leren\nvalt.\n<0x10009:0x00000c0a>Lijkt het je wat, <heroname>?\n[1-]Ik doe mee![2]Nee, bedankt.")
          				goto flw_5
          			}
          		}
          	  case 1:
/*<507>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 116, 'param3': 44}
/*<116>*/ 		story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */] = false;
/*<689>*/ 		entrypoint_460_13();
          	  case 2:
/*<509>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 6, 'next': 115, 'param3': 44}
/*<115>*/ 		story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */] = false;
/*< 90>*/ 		switch (story_flags[528 /* us: 805A9B14 0x20, jp: 805ACD94 0x20 */]) {
          		  case 0:
/*< 92>*/ 			printf(/* textboxtype: 0, unk: 0, line: 80 */ "<0x10009:0x00000007>Uitstekend gedaan! Zo te zien ben je nog\nhelemaal in orde.")
          			flw_94:
/*< 94>*/ 			printf(/* textboxtype: 0, unk: 1, line: 82 */ "Voor het voltooien van deze beproeving was\nje tijd: <numeric arg0 0>:<numeric arg1 2>:<numeric arg2 2>.")
/*<103>*/ 			switch (context_related4(5)) {
          			  case 0:
/*<108>*/ 				printf(/* textboxtype: 0, unk: 1, line: 85 */ "<0x10009:0x00000007>Fenomenaal, <heroname>! Wat een\nsnelle tijd! Daarvoor geef ik je iets\nspeciaals. Kijk!<0x10009:0x000c0b06>")
/*<109>*/ 				give_item(64 0x40);
          				flw_470:
/*<470>*/ 				switch (context_related2(6)) {
          				  case 0:
          					flw_91:
/*< 91>*/ 					switch (context_related3(3)) {
          					  case 0:
/*< 95>*/ 						printf(/* textboxtype: 0, unk: 0, line: 83 */ "<0x10009:0x00000c05>Het is de eerste keer dat je een tijd zet in\ndit <color red<Rijk der Stilte>coloroff>! Dat moeten we vieren\nmet een beloning!<0x10009:0x000c0b06>")
          						flw_638:
/*<638>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 639, 'param3': 12}
/*<639>*/ 						rupees += 50;
/*<637>*/ 						printf(/* textboxtype: 1, unk: 0, line: 57 */ "Deze 50 rupees zijn voor jou! Ja, pak maar\naan!")
          						flw_641:
/*<641>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 510, 'param3': 12}
/*<510>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 6, 'next': 98, 'param3': 45}
/*< 98>*/ 						printf(/* textboxtype: 0, unk: 0, line: 89 */ "<0x10009:0x0000000a>En, <heroname>? Wat zeg je van nog\neen beproeving in een <color red<Rijk der Stilte>coloroff>?\n[1-]Ja![2]Nee, bedankt.")
/*< 99>*/ 						switch (choice(2)) {
          						  case 0:
/*<466>*/ 							switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          							  case 0:
          								flw_467:
/*<467>*/ 								entrypoint_460_72();
          							  case 1:
/*<1017>*/ 								switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          								  case 0:
          									goto flw_467
          								  case 1:
/*<468>*/ 									entrypoint_460_74();
          								}
          							}
          						  case 1:
/*<100>*/ 							printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x00000005>Pfff, wat saai!<pause 20> Nou, als je toch nog een\nkeer zin hebt, moet je me maar een keer\naanspreken.")
/*<652>*/ 							temp_flags[5 /* 0x1 20 */] = true;
          						}
          					  case 1:
/*< 96>*/ 						printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x000b0c09>Dat is een nieuw record! Goed gedaan!\nDat verdient een prijs. <0x10009:0x000c0b00>Hier, pak maar aan.")
          						goto flw_638
          					  case 2:
          						goto flw_641
          					}
          				  case 1:
/*<469>*/ 					printf(/* textboxtype: 1, unk: 0, line: 42 */ "Als je trouwens uit bent op mijn\nhoofdprijs, zul je het record moeten\nbreken: <color red<<numeric arg3 0>:<numeric arg4 2>>coloroff>.\n\nOm daaraan te kunnen tippen zul je\nmoeten trainen als een kampioen!")
          					goto flw_91
          				}
          			  case 1:
/*<107>*/ 				printf(/* textboxtype: 0, unk: 0, line: 86 */ "<0x10009:0x00000007>Een hele sterke tijd! Kijk, hier is je prijs!<0x10009:0x000c0b06>")
/*<635>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 636, 'param3': 12}
/*<636>*/ 				rupees += 100;
/*<634>*/ 				printf(/* textboxtype: 0, unk: 1, line: 58 */ "Kijk, 100 rupees! Koop er iets voor wat je\ngoed kunt gebruiken!")
          				goto flw_470
          			  case 2:
/*<106>*/ 				printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x0000000b>Hmm... Dat stelde niet veel voor...<pause 20> Maar je\nhebt je best gedaan, dus hier heb je toch\neen prijsje.<0x10009:0x000c0b06>")
/*<632>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 633, 'param3': 12}
/*<633>*/ 				rupees += 20;
/*<631>*/ 				printf(/* textboxtype: 0, unk: 0, line: 56 */ "Alsjeblieft, 20 rupees. Wees er maar zuinig\nop!")
          				goto flw_470
          			  case 3:
/*<105>*/ 				printf(/* textboxtype: 0, unk: 1, line: 88 */ "<0x10009:0x0000000b>Kom op, zeg.<pause 20> Dat kan toch veel beter?\n\n\n\nLaat de volgende keer wat meer passie\nzien! Het spijt me, maar meer dan dit kan\nik je niet geven.<0x10009:0x000c0b06>")
/*<629>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 630, 'param3': 12}
/*<630>*/ 				rupees += 5;
/*<628>*/ 				printf(/* textboxtype: 0, unk: 1, line: 55 */ "Kijk, hier heb je 5 rupees. Niet tevreden?\nDan geef je ze maar terug!")
          				goto flw_470
          			}
          		  case 1:
/*< 93>*/ 			printf(/* textboxtype: 0, unk: 1, line: 79 */ "<0x10009:0x00000007>Goed gedaan, <heroname>! Je hebt\nze allemaal verzameld. Dat was een echte\nheldenprestatie!")
/*< 97>*/ 			story_flags[528 /* us: 805A9B14 0x20, jp: 805ACD94 0x20 */] = true;
          			goto flw_94
          		}
          	  case 3:
/*<114>*/ 		story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */] = false;
/*<104>*/ 		printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x0000000b>Ohhhhh, dat ging niet lekker...\n\n\n\nPijnlijk, want nu heb je voor straf nog\nmaar één vol hartje. Ga je andere hartjes\nmaar snel herstellen voor je terugkomt.")
          	}
          }

          void entrypoint_460_52() {
/*<162>*/ 	start()
/*<128>*/ 	story_flags[354 /* us: 805A9B00 0x04, jp: 805ACD80 0x04 */] = true;
/*<129>*/ 	story_flags[355 /* us: 805A9B00 0x02, jp: 805ACD80 0x02 */] = true;
/*<130>*/ 	story_flags[356 /* us: 805A9B00 0x01, jp: 805ACD80 0x01 */] = true;
/*<131>*/ 	story_flags[357 /* us: 805A9B00 0x08, jp: 805ACD80 0x08 */] = true;
/*<133>*/ 	make_actor_do_something(1, 0)
/*<663>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 132, 'param3': 52}
/*<132>*/ 	changeScene(2, 0) // {'name': 'B200', 'room': 10, 'layer': 3, 'entrance': 1, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_35() {
/*<417>*/ 	start()
/*<796>*/ 	switch (random(3)) {
          	  case 0:
/*<378>*/ 		switch (scene_flags[115 /* 0xF 08 */]) {
          		  case 0:
/*<380>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<382>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<385>*/ 					switch (scene_flags[118 /* 0xF 40 */]) {
          					  case 0:
/*<386>*/ 						switch (scene_flags[119 /* 0xF 80 */]) {
          						  case 0:
/*<387>*/ 							switch (scene_flags[120 /* 0xE 01 */]) {
          							  case 0:
/*<388>*/ 								switch (scene_flags[121 /* 0xE 02 */]) {
          								  case 0:
/*<389>*/ 									switch (scene_flags[122 /* 0xE 04 */]) {
          									  case 0:
/*<390>*/ 										switch (scene_flags[123 /* 0xE 08 */]) {
          										  case 0:
/*<391>*/ 											switch (scene_flags[124 /* 0xE 10 */]) {
          											  case 0:
/*<392>*/ 												switch (scene_flags[125 /* 0xE 20 */]) {
          												  case 0:
/*<400>*/ 													scene_flags[9 'Lanayru Gorge'][126 /* 0xE 40 */] = true;
/*<407>*/ 													entrypoint_460_62();
          												  case 1:
/*<399>*/ 													scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
/*<408>*/ 													entrypoint_460_61();
          												}
          											  case 1:
/*<398>*/ 												scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<405>*/ 												entrypoint_460_60();
          											}
          										  case 1:
/*<397>*/ 											scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<406>*/ 											entrypoint_460_59();
          										}
          									  case 1:
/*<396>*/ 										scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<411>*/ 										entrypoint_460_58();
          									}
          								  case 1:
/*<395>*/ 									scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<412>*/ 									entrypoint_460_57();
          								}
          							  case 1:
/*<394>*/ 								scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<409>*/ 								entrypoint_460_56();
          							}
          						  case 1:
/*<393>*/ 							scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<410>*/ 							entrypoint_460_55();
          						}
          					  case 1:
/*<384>*/ 						scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<403>*/ 						entrypoint_460_54();
          					}
          				  case 1:
/*<383>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<404>*/ 					entrypoint_460_53();
          				}
          			  case 1:
/*<381>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<401>*/ 				entrypoint_460_52();
          			}
          		  case 1:
/*<379>*/ 			scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<402>*/ 			entrypoint_460_51();
          		}
          	  case 1:
/*<933>*/ 		switch (scene_flags[125 /* 0xE 20 */]) {
          		  case 0:
/*<921>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<931>*/ 				switch (scene_flags[123 /* 0xE 08 */]) {
          				  case 0:
/*<926>*/ 					switch (scene_flags[118 /* 0xF 40 */]) {
          					  case 0:
/*<919>*/ 						switch (scene_flags[115 /* 0xF 08 */]) {
          						  case 0:
/*<932>*/ 							switch (scene_flags[124 /* 0xE 10 */]) {
          							  case 0:
/*<927>*/ 								switch (scene_flags[119 /* 0xF 80 */]) {
          								  case 0:
/*<930>*/ 									switch (scene_flags[122 /* 0xE 04 */]) {
          									  case 0:
/*<928>*/ 										switch (scene_flags[120 /* 0xE 01 */]) {
          										  case 0:
/*<929>*/ 											switch (scene_flags[121 /* 0xE 02 */]) {
          											  case 0:
/*<923>*/ 												switch (scene_flags[117 /* 0xF 20 */]) {
          												  case 0:
/*<941>*/ 													scene_flags[9 'Lanayru Gorge'][126 /* 0xE 40 */] = true;
/*<948>*/ 													entrypoint_460_62();
          												  case 1:
/*<924>*/ 													scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<945>*/ 													entrypoint_460_53();
          												}
          											  case 1:
/*<936>*/ 												scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<953>*/ 												entrypoint_460_57();
          											}
          										  case 1:
/*<935>*/ 											scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<950>*/ 											entrypoint_460_56();
          										}
          									  case 1:
/*<937>*/ 										scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<952>*/ 										entrypoint_460_58();
          									}
          								  case 1:
/*<934>*/ 									scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<951>*/ 									entrypoint_460_55();
          								}
          							  case 1:
/*<939>*/ 								scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<946>*/ 								entrypoint_460_60();
          							}
          						  case 1:
/*<920>*/ 							scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<943>*/ 							entrypoint_460_51();
          						}
          					  case 1:
/*<925>*/ 						scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<944>*/ 						entrypoint_460_54();
          					}
          				  case 1:
/*<938>*/ 					scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<947>*/ 					entrypoint_460_59();
          				}
          			  case 1:
/*<922>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<942>*/ 				entrypoint_460_52();
          			}
          		  case 1:
/*<940>*/ 			scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
/*<949>*/ 			entrypoint_460_61();
          		}
          	  case 2:
/*<966>*/ 		switch (scene_flags[123 /* 0xE 08 */]) {
          		  case 0:
/*<963>*/ 			switch (scene_flags[120 /* 0xE 01 */]) {
          			  case 0:
/*<964>*/ 				switch (scene_flags[121 /* 0xE 02 */]) {
          				  case 0:
/*<968>*/ 					switch (scene_flags[125 /* 0xE 20 */]) {
          					  case 0:
/*<954>*/ 						switch (scene_flags[115 /* 0xF 08 */]) {
          						  case 0:
/*<965>*/ 							switch (scene_flags[122 /* 0xE 04 */]) {
          							  case 0:
/*<962>*/ 								switch (scene_flags[119 /* 0xF 80 */]) {
          								  case 0:
/*<956>*/ 									switch (scene_flags[116 /* 0xF 10 */]) {
          									  case 0:
/*<961>*/ 										switch (scene_flags[118 /* 0xF 40 */]) {
          										  case 0:
/*<967>*/ 											switch (scene_flags[124 /* 0xE 10 */]) {
          											  case 0:
/*<958>*/ 												switch (scene_flags[117 /* 0xF 20 */]) {
          												  case 0:
/*<976>*/ 													scene_flags[9 'Lanayru Gorge'][126 /* 0xE 40 */] = true;
/*<983>*/ 													entrypoint_460_62();
          												  case 1:
/*<959>*/ 													scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<980>*/ 													entrypoint_460_53();
          												}
          											  case 1:
/*<974>*/ 												scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<981>*/ 												entrypoint_460_60();
          											}
          										  case 1:
/*<960>*/ 											scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<979>*/ 											entrypoint_460_54();
          										}
          									  case 1:
/*<957>*/ 										scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<977>*/ 										entrypoint_460_52();
          									}
          								  case 1:
/*<969>*/ 									scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<986>*/ 									entrypoint_460_55();
          								}
          							  case 1:
/*<972>*/ 								scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<987>*/ 								entrypoint_460_58();
          							}
          						  case 1:
/*<955>*/ 							scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<978>*/ 							entrypoint_460_51();
          						}
          					  case 1:
/*<975>*/ 						scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
/*<984>*/ 						entrypoint_460_61();
          					}
          				  case 1:
/*<971>*/ 					scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<988>*/ 					entrypoint_460_57();
          				}
          			  case 1:
/*<970>*/ 				scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<985>*/ 				entrypoint_460_56();
          			}
          		  case 1:
/*<973>*/ 			scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<982>*/ 			entrypoint_460_59();
          		}
          	}
          }

          void entrypoint_460_53() {
/*<163>*/ 	start()
/*<134>*/ 	story_flags[355 /* us: 805A9B00 0x02, jp: 805ACD80 0x02 */] = true;
/*<135>*/ 	story_flags[356 /* us: 805A9B00 0x01, jp: 805ACD80 0x01 */] = true;
/*<136>*/ 	story_flags[357 /* us: 805A9B00 0x08, jp: 805ACD80 0x08 */] = true;
/*<138>*/ 	make_actor_do_something(2, 0)
/*<662>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 137, 'param3': 52}
/*<137>*/ 	changeScene(8, 0) // {'name': 'B300', 'room': 0, 'layer': 2, 'entrance': 1, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_01() {
/*<235>*/ 	start()
/*< 23>*/ 	switch (story_flags[522 /* us: 805A9B15 0x80, jp: 805ACD95 0x80 */]) {
          	  case 0:
          		flw_25:
/*< 25>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000c00>Ben je er klaar voor? Heb je het schild dat\nje wilt gebruiken, bij je? Dit is namelijk\nvoor het echie!\n[1-]Kom maar op![2]Nee, wacht.")
/*< 26>*/ 		switch (choice(2)) {
          		  case 0:
/*< 27>*/ 			printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00070c0d>Ga ervoor!")
/*< 78>*/ 			story_flags[522 /* us: 805A9B15 0x80, jp: 805ACD95 0x80 */] = true;
/*<112>*/ 			story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */] = true;
/*< 30>*/ 			switch (scene_flags[115 /* 0xF 08 */]) {
          			  case 0:
/*<174>*/ 				entrypoint_460_51();
          			  case 1:
/*< 31>*/ 				switch (scene_flags[116 /* 0xF 10 */]) {
          				  case 0:
/*<173>*/ 					entrypoint_460_52();
          				  case 1:
/*< 32>*/ 					switch (scene_flags[117 /* 0xF 20 */]) {
          					  case 0:
/*<177>*/ 						entrypoint_460_53();
          					  case 1:
/*<178>*/ 						switch (scene_flags[118 /* 0xF 40 */]) {
          						  case 0:
/*<176>*/ 							entrypoint_460_54();
          						  case 1:
/*<182>*/ 							switch (scene_flags[119 /* 0xF 80 */]) {
          							  case 0:
/*<191>*/ 								entrypoint_460_55();
          							  case 1:
/*<179>*/ 								switch (scene_flags[120 /* 0xE 01 */]) {
          								  case 0:
/*<190>*/ 									entrypoint_460_56();
          								  case 1:
/*<180>*/ 									switch (scene_flags[121 /* 0xE 02 */]) {
          									  case 0:
/*<193>*/ 										entrypoint_460_57();
          									  case 1:
/*<181>*/ 										switch (scene_flags[122 /* 0xE 04 */]) {
          										  case 0:
/*<192>*/ 											entrypoint_460_58();
          										  case 1:
/*<183>*/ 											switch (scene_flags[123 /* 0xE 08 */]) {
          											  case 0:
/*<187>*/ 												entrypoint_460_59();
          											  case 1:
/*<184>*/ 												switch (scene_flags[124 /* 0xE 10 */]) {
          												  case 0:
/*<186>*/ 													entrypoint_460_60();
          												  case 1:
/*<185>*/ 													switch (scene_flags[125 /* 0xE 20 */]) {
          													  case 0:
/*<189>*/ 														entrypoint_460_61();
          													  case 1:
/*<188>*/ 														entrypoint_460_62();
          													}
          												}
          											}
          										}
          									}
          								}
          							}
          						}
          					}
          				}
          			}
          		  case 1:
/*< 29>*/ 			printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00000c05>O, van gedachten veranderd?<pause 20> Geen zorgen,\njochie. Kom terug wanneer je maar wilt.\n\n\n<0x10009:0x00070c00>Mocht je een ander schild willen gebruiken,\ndan zul je het eerst tevoorschijn moeten halen.\nKom daarna nog maar eens met me praten.")
          		}
          	  case 1:
/*< 24>*/ 		printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x000d0c00>Ah!<pause 15> Ik moet je nog iets belangrijks\nvertellen!\n\n\nDe enige voorwerpen die je tijdens het\ngevecht mag gebruiken, zijn <color red<voorwerpen\ndie je destijds al had>coloroff>. Dat zijn de regels!\n\n<0x10009:0x00070c00>Daarnaast <color red<mag je je buidel >coloroff>niet mee-\nnemen! Dat klinkt streng, maar ik wil\nhet interessant houden, omdat je deze\ngevechten al kent.\n<0x10009:0x00000c00>Hmm... Ik kan op zich één uitzondering\nmaken. Je mag de strijd aangaan met het\n<color red<schild dat je nu vasthoudt>coloroff>.")
          		goto flw_25
          	}
          }

          void entrypoint_460_54() {
/*<164>*/ 	start()
/*<175>*/ 	story_flags[355 /* us: 805A9B00 0x02, jp: 805ACD80 0x02 */] = true;
/*<139>*/ 	story_flags[356 /* us: 805A9B00 0x01, jp: 805ACD80 0x01 */] = true;
/*<140>*/ 	story_flags[357 /* us: 805A9B00 0x08, jp: 805ACD80 0x08 */] = true;
/*<142>*/ 	make_actor_do_something(3, 0)
/*<661>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 665, 'param3': 52}
/*<665>*/ 	story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */] = true;
/*<668>*/ 	story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */] = false;
/*<669>*/ 	story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */] = false;
/*<670>*/ 	story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = true;
/*<993>*/ 	story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */] = false;
/*<1005>*/ 	story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */] = false;
/*<1008>*/ 	story_flags[149 /* us: 805A9AEE 0x80, jp: 805ACD6E 0x80 */] = false;
/*<141>*/ 	changeScene(9, 0) // {'name': 'F401', 'room': 1, 'layer': 0, 'entrance': 7, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_71() {
/*<463>*/ 	start()
/*<102>*/ 	switch (context_related2(4)) {
          	  case 0:
/*<992>*/ 		make_actor_do_something(21, 0)
/*<101>*/ 		printf(/* textboxtype: 1, unk: 0, line: 77 */ "Goed, eens zien... Je record voor dit rijk is:\n<numeric arg0 0>:<numeric arg1 2>:<numeric arg2 2>.")
          		flw_82:
/*< 82>*/ 		printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x000b0c0d>Laten we beginnen! Sluit je ogen en\nconcentreer je...")
/*< 79>*/ 		story_flags[523 /* us: 805A9B14 0x01, jp: 805ACD94 0x01 */] = true;
/*<113>*/ 		story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */] = true;
/*< 83>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 85>*/ 			make_actor_do_something(12, 0)
          		  case 1:
/*< 84>*/ 			switch (zone_temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 86>*/ 				make_actor_do_something(13, 0)
          			  case 1:
/*< 87>*/ 				switch (zone_temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*< 88>*/ 					make_actor_do_something(14, 0)
          				  case 1:
/*< 89>*/ 					make_actor_do_something(15, 0)
          				}
          			}
          		}
          	  case 1:
          		goto flw_82
          	}
          }

          void entrypoint_460_02() {
/*<472>*/ 	start()
/*< 54>*/ 	switch (story_flags[510 /* us: 805A9B15 0x10, jp: 805ACD95 0x10 */]) {
          	  case 0:
/*< 55>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000b0c07>Goed gedaan! Je hebt je weer kranig\ngeweerd!")
          		flw_57:
/*< 57>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "Hier is de tijd waarin je <color blue<<string arg0>\n>coloroff>hebt verslagen: <numeric arg0 0>:<numeric arg1 2>.<numeric arg2 2>.")
/*< 53>*/ 		switch (context_related3(3)) {
          		  case 0:
/*< 58>*/ 			printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00000008>Was dat niet de eerste keer dat je dat\ngevecht hebt herbeleefd? Ik wil je inzet\ngraag belonen met een kleinigheidje!<0x10009:0x000c0b06>")
          			flw_545:
/*<545>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 546, 'param3': 12}
/*<546>*/ 			rupees += 50;
/*<544>*/ 			printf(/* textboxtype: 1, unk: 0, line: 57 */ "Deze 50 rupees zijn voor jou! Ja, pak maar\naan!")
          			flw_640:
/*<640>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 508, 'param3': 12}
/*<508>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 61, 'param3': 45}
/*< 61>*/ 			switch (story_flags[510 /* us: 805A9B15 0x10, jp: 805ACD95 0x10 */]) {
          			  case 0:
          				flw_64:
/*< 64>*/ 				printf(/* textboxtype: 1, unk: 1, line: 51 */ "Als je nu stopt, krijg je een mooie\n<color red<<string arg1>>coloroff>. Niet slecht, toch?\n\n\nMaar na de volgende overwinning is\nje prijs nog beter... Een prachtige\n<color red<<string arg2>>coloroff>!\n<0x10009:0x0000000a>Wat wordt het? Ga je door of stop je?\n[1-]Ik ga door![2]Ik stop.")
/*< 65>*/ 				switch (choice(2)) {
          				  case 0:
/*< 70>*/ 					switch (scene_flags[114 /* 0xF 04 */]) {
          					  case 0:
/*< 68>*/ 						printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x00000008>Zo doe je dat!\n\n\n\nHierna volgt gevecht nummer <numeric arg3 0> nog.\nAls je er nog <numeric arg4 0> wint, dan heb je ze allemaal\nverslagen. Laten we snel doorgaan!")
          						flw_117:
/*<117>*/ 						story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */] = true;
/*< 71>*/ 						switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          						  case 0:
/*<421>*/ 							entrypoint_460_35();
          						  case 1:
/*<418>*/ 							switch (story_flags[225 /* us: 805A9AF2 0x10, jp: 805ACD72 0x10 */]) {
          							  case 0:
/*<422>*/ 								entrypoint_460_34();
          							  case 1:
/*<419>*/ 								switch (story_flags[134 /* us: 805A9AE4 0x10, jp: 805ACD64 0x10 */]) {
          								  case 0:
/*<423>*/ 									entrypoint_460_33();
          								  case 1:
/*<420>*/ 									switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          									  case 0:
/*<424>*/ 										entrypoint_460_32();
          									  case 1:
/*<425>*/ 										entrypoint_460_31();
          									}
          								}
          							}
          						}
          					  case 1:
/*< 67>*/ 						printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x00000008>Zo mag ik het horen! Er is alleen nog één\ndingetje...\n\n\n<0x10009:0x00070900>Bij gevechten achterelkaar bepaal ik wie je\nvolgende tegenstander wordt.\n\n\nDat scheelt jou kiezen en maakt het een\nverrassing! Maar ik heb genoeg gekletst.\nLaat de strijd beginnen!")
/*< 69>*/ 						scene_flags[9 'Lanayru Gorge'][114 /* 0xF 04 */] = true;
          						goto flw_117
          					}
          				  case 1:
/*< 66>*/ 					printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00000005>Goed...<pause 15> Ik snap het. Je wilt natuurlijk je\nkrachten sparen voor echte gevechten...\n\n\n<0x10009:0x000c0b06>Maar je hebt moedig gevochten. Daarom\nkrijg je, zoals beloofd, je beloning.")
/*<499>*/ 					switch (context_related3(12)) {
          					  case 0:
/*<500>*/ 						switch (context_related4(13)) {
          						  case 0:
/*<512>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 513, 'param3': 12}
/*<513>*/ 							rupees += 20;
/*<511>*/ 							printf(/* textboxtype: 0, unk: 0, line: 56 */ "Alsjeblieft, 20 rupees. Wees er maar zuinig\nop!")
          							flw_648:
/*<648>*/ 							temp_flags[5 /* 0x1 20 */] = true;
/*<471>*/ 							make_actor_do_something(20, 0)
/*<995>*/ 							printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00010c09>Kom zo vaak vechten als je wilt! Je weet\nme te vinden!")
          						  case 1:
/*<503>*/ 							give_item(61 0x3D);
          							goto flw_648
          						  case 2:
/*<515>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 516, 'param3': 12}
/*<516>*/ 							rupees += 100;
/*<514>*/ 							printf(/* textboxtype: 0, unk: 1, line: 58 */ "Kijk, 100 rupees! Koop er iets voor wat je\ngoed kunt gebruiken!")
          							goto flw_648
          						  case 3:
/*<990>*/ 							switch (story_flags[511 /* us: 805A9B15 0x20, jp: 805ACD95 0x20 */]) {
          							  case 0:
/*<518>*/ 								{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 519, 'param3': 12}
/*<519>*/ 								rupees += 200;
/*<517>*/ 								printf(/* textboxtype: 0, unk: 0, line: 59 */ "Deze 200 rupees zijn voor jou! Moet je jou\nnu toch eens zien!")
          								goto flw_648
          							  case 1:
/*<989>*/ 								give_item(94 0x5E);
/*<991>*/ 								story_flags[511 /* us: 805A9B15 0x20, jp: 805ACD95 0x20 */] = true;
          								goto flw_648
          							}
          						}
          					  case 1:
/*<501>*/ 						switch (context_related4(14)) {
          						  case 0:
/*<521>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 522, 'param3': 12}
/*<522>*/ 							rupees += 300;
/*<520>*/ 							printf(/* textboxtype: 1, unk: 0, line: 60 */ "300 welverdiende rupees! Koop er vooral\niets moois van!")
          							goto flw_648
          						  case 1:
/*<504>*/ 							give_item(64 0x40);
          							goto flw_648
          						  case 2:
/*<524>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 525, 'param3': 12}
/*<525>*/ 							rupees += 500;
/*<523>*/ 							printf(/* textboxtype: 0, unk: 1, line: 61 */ "Ik geef je 500 rupees! Dat is vast een\nfortuin voor jou!")
          							goto flw_648
          						  case 3:
/*<526>*/ 							switch (story_flags[512 /* us: 805A9B15 0x40, jp: 805ACD95 0x40 */]) {
          							  case 0:
/*<529>*/ 								{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 530, 'param3': 12}
/*<530>*/ 								rupees += 1000;
/*<528>*/ 								printf(/* textboxtype: 0, unk: 0, line: 62 */ "1000! 1000 rupees! Heb je er ooit zoveel\nbij elkaar gezien?")
          								goto flw_648
          							  case 1:
/*<1007>*/ 								switch (is_adventure_pouch_full()) {
          								  case 0:
/*<997>*/ 									switch (is_item_check_full()) {
          									  case 0:
/*<1003>*/ 										{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 1014, 'param3': 12}
/*<1014>*/ 										printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x000b0c09>Wat? Geen plek in je buidel? En ook niet\nin de voorwerpenbank op Skyloft? Dan\nkan ik je dit schild niet geven.")
/*<1004>*/ 										rupees += 1000;
/*<1002>*/ 										printf(/* textboxtype: 0, unk: 1, line: 49 */ "Ai, niets aan te doen. Maar ik kan je wel\n1000 rupees geven voor je prestatie!\n<0x10009:0x000c0b06>Probeer het de volgende keer nog eens en\nmisschien win je dan het schild!")
          										goto flw_648
          									  case 1:
          										flw_505:
/*<505>*/ 										give_item(125 0x7D);
/*<527>*/ 										story_flags[512 /* us: 805A9B15 0x40, jp: 805ACD95 0x40 */] = true;
          										goto flw_648
          									}
          								  case 1:
          									goto flw_505
          								}
          							}
          						}
          					  case 2:
/*<502>*/ 						switch (context_related4(15)) {
          						  case 0:
/*<532>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 533, 'param3': 12}
/*<533>*/ 							rupees += 2000;
/*<531>*/ 							printf(/* textboxtype: 1, unk: 0, line: 63 */ "Ah, 2000 rupees! Hoe durf je een oude\ndraak zo te beroven?")
          							goto flw_648
          						  case 1:
/*<506>*/ 							give_item(64 0x40);
/*<536>*/ 							printf(/* textboxtype: 0, unk: 0, line: 65 */ "<0x10009:0x000c0b00>Hier is je prijs!")
/*<534>*/ 							give_item(64 0x40);
/*<537>*/ 							printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x000c0b00>Je hebt deze fabuleuze prijs gewonnen!")
/*<535>*/ 							give_item(64 0x40);
          							goto flw_648
          						  case 2:
/*<539>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 540, 'param3': 12}
/*<540>*/ 							rupees += 3000;
/*<538>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "Nou, nou! Je hebt 3000 rupees gewonnen!\nWaar moet je dat allemaal aan uitgeven?")
          							goto flw_648
          						  case 3:
/*<542>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 543, 'param3': 12}
/*<543>*/ 							rupees += 9900;
/*<541>*/ 							printf(/* textboxtype: 0, unk: 0, line: 68 */ "Deze keer win je 9900 rupees! Voor dat\nbedrag heb ik onder al mijn schubben\nmoeten zoeken!")
          							goto flw_648
          						}
          					}
          				}
          			  case 1:
/*< 62>*/ 				printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00100c00>Zeg, <heroname>... Wat denk je ervan\nom gelijk nog een gevecht te proberen?\n\n\n<0x10009:0x000b0c09>Natuurlijk kun je weer iets winnen. Ik zal\nje zelfs betere prijzen geven op basis van\nhet aantal overwinningen op rij!\n\nZoals gezegd heb ik veel prijzen, waaronder\neen <color red<belachelijk stevig schild>coloroff>! Als je dat\nhoort, wil je gelijk weer vechten, toch?\n\n<0x10009:0x000d0c00>Maar...<pause 20> Je hebt vast al geraden dat als je\nverliest, ons spelletje voorbij is.\n\n\nEn <color red<beschadigingen aan je schild of\nverloren hartjes>coloroff> zullen niet tussentijds\nhersteld worden. Spannend, nietwaar?")
/*< 63>*/ 				story_flags[510 /* us: 805A9B15 0x10, jp: 805ACD95 0x10 */] = true;
          				goto flw_64
          			}
          		  case 1:
/*< 59>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00000006>Mooie prestatie! Je hebt je eigen record\nverbroken. Daarvoor verdien je een\npresentje!<0x10009:0x000c0b06>")
          			goto flw_545
          		  case 2:
/*< 60>*/ 			printf(/* textboxtype: 0, unk: 1, line: 40 */ "Dat was niet je beste prestatie. Als je je\nrecord wilt breken, zul je beter je best\nmoeten doen!")
          			goto flw_640
          		}
          	  case 1:
/*< 56>*/ 		printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x000b0c07>Wauw, <heroname>! Dat was\nongelofelijk! Jij weet wel van wanten!")
          		goto flw_57
          	}
          }

          void entrypoint_460_55() {
/*<165>*/ 	start()
/*<143>*/ 	story_flags[356 /* us: 805A9B00 0x01, jp: 805ACD80 0x01 */] = true;
/*<144>*/ 	story_flags[357 /* us: 805A9B00 0x08, jp: 805ACD80 0x08 */] = true;
/*<146>*/ 	make_actor_do_something(4, 0)
/*<660>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 145, 'param3': 52}
/*<145>*/ 	changeScene(10, 0) // {'name': 'B101', 'room': 0, 'layer': 2, 'entrance': 2, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_72() {
/*<452>*/ 	start()
/*<444>*/ 	printf(/* textboxtype: 0, unk: 0, line: 74 */ "<0x10009:0x00000006>Daar hoopte ik al op, dappere held! Naar\nwelk Rijk der Stilte wil je afreizen?\n[1-]Faron-woud![2-]Eldin-vulkaan![3-]Lanayru-woestijn![4-]Ergens anders.")
          	flw_445:
/*<445>*/ 	switch (choice(4)) {
          	  case 0:
/*<448>*/ 		make_actor_do_something(16, 0)
/*<446>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          		flw_460:
/*<460>*/ 		entrypoint_460_71();
          	  case 1:
/*<449>*/ 		make_actor_do_something(17, 0)
/*<447>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          		goto flw_460
          	  case 2:
/*<451>*/ 		make_actor_do_something(18, 0)
/*<450>*/ 		zone_temp_flags[2 /* 0x1 04 */] = true;
          		goto flw_460
          	  case 3:
/*<457>*/ 		printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00000005>Ergens anders? Waar dan precies?\n[1-]Skyloft![2-]Die plaatsen van net.[3]Ik stop.")
/*<455>*/ 		switch (choice(3)) {
          		  case 0:
/*<456>*/ 			make_actor_do_something(19, 0)
          			goto flw_460
          		  case 1:
/*<458>*/ 			printf(/* textboxtype: 0, unk: 1, line: 76 */ "<0x10009:0x0000000a>Kom op, zeg! Je moet wel een keuze\nmaken!\n[1-]Faron-woud.[2-]Eldin-vulkaan.[3-]Lanayru-woestijn.[4-]Meer plaatsen!")
          			goto flw_445
          		  case 2:
/*<459>*/ 			printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000c05>Wat? Geen interesse? Wat saai...\n\n\n\n<0x10009:0x00070c00>Nou ja, je weet me te vinden als je van\ngedachten verandert.")
/*<650>*/ 			temp_flags[5 /* 0x1 20 */] = true;
          		}
          	}
          }

          void entrypoint_460_03() {
/*<488>*/ 	start()
/*<489>*/ 	printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x000b0c09>Gefeliciteerd! Dat zijn acht overwinningen\nop rij!")
/*<549>*/ 	switch (story_flags[512 /* us: 805A9B15 0x40, jp: 805ACD95 0x40 */]) {
          	  case 0:
/*<552>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 553, 'param3': 12}
/*<553>*/ 		rupees += 1000;
/*<551>*/ 		printf(/* textboxtype: 0, unk: 0, line: 62 */ "1000! 1000 rupees! Heb je er ooit zoveel\nbij elkaar gezien?")
          		flw_647:
/*<647>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 649, 'param3': 12}
/*<649>*/ 		temp_flags[5 /* 0x1 20 */] = true;
/*<492>*/ 		make_actor_do_something(20, 0)
/*<996>*/ 		printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00010c09>Kom zo vaak vechten als je wilt! Je weet\nme te vinden!")
          	  case 1:
/*<1006>*/ 		switch (is_adventure_pouch_full()) {
          		  case 0:
/*<998>*/ 			switch (is_item_check_full()) {
          			  case 0:
/*<1000>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 1016, 'param3': 12}
/*<1016>*/ 				printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x000b0c09>Wat? Geen plek in je buidel? En ook niet\nin de voorwerpenbank op Skyloft? Dan\nkan ik je dit schild niet geven.")
/*<1001>*/ 				rupees += 1000;
/*<999>*/ 				printf(/* textboxtype: 0, unk: 1, line: 49 */ "Ai, niets aan te doen. Maar ik kan je wel\n1000 rupees geven voor je prestatie!\n<0x10009:0x000c0b06>Probeer het de volgende keer nog eens en\nmisschien win je dan het schild!")
          				goto flw_647
          			  case 1:
          				flw_547:
/*<547>*/ 				give_item(125 0x7D);
/*<550>*/ 				story_flags[512 /* us: 805A9B15 0x40, jp: 805ACD95 0x40 */] = true;
          				goto flw_647
          			}
          		  case 1:
          			goto flw_547
          		}
          	}
          }

          void entrypoint_460_56() {
/*<166>*/ 	start()
/*<148>*/ 	make_actor_do_something(5, 0)
/*<659>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 147, 'param3': 52}
/*<147>*/ 	changeScene(11, 0) // {'name': 'B301', 'room': 0, 'layer': 2, 'entrance': 3, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_73() {
/*<453>*/ 	start()
/*<427>*/ 	printf(/* textboxtype: 0, unk: 1, line: 73 */ "")
/*<428>*/ 	switch (choice(4)) {
          	  case 0:
/*<433>*/ 		make_actor_do_something(16, 0)
/*<430>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          		flw_461:
/*<461>*/ 		entrypoint_460_71();
          	  case 1:
/*<434>*/ 		make_actor_do_something(17, 0)
/*<432>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          		goto flw_461
          	  case 2:
/*<437>*/ 		make_actor_do_something(18, 0)
/*<436>*/ 		zone_temp_flags[2 /* 0x1 04 */] = true;
          		goto flw_461
          	  case 3:
/*<435>*/ 		make_actor_do_something(19, 0)
          		goto flw_461
          	}
          }

          void entrypoint_460_04() {
/*<490>*/ 	start()
/*<491>*/ 	printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x000b0c09>Wauw! Negen overwinningen op rij! Wie\nhad dat gedacht?")
/*<555>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 556, 'param3': 12}
/*<556>*/ 	rupees += 2000;
/*<554>*/ 	printf(/* textboxtype: 1, unk: 0, line: 63 */ "Ah, 2000 rupees! Hoe durf je een oude\ndraak zo te beroven?")
          	goto flw_647
          }

          void entrypoint_460_57() {
/*<167>*/ 	start()
/*<150>*/ 	make_actor_do_something(6, 0)
/*<658>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 149, 'param3': 52}
/*<149>*/ 	changeScene(12, 0) // {'name': 'B201', 'room': 0, 'layer': 3, 'entrance': 1, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_74() {
/*<454>*/ 	start()
/*<426>*/ 	printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00000006>Daar hoopte ik al op, dappere held! Naar\nwelk Rijk der Stilte wil je afreizen?\n[1-]Faron-woud![2-]Eldin-vulkaan![3-]Lanayru-woestijn![4]Laat maar.")
/*<429>*/ 	switch (choice(4)) {
          	  case 0:
/*<440>*/ 		make_actor_do_something(16, 0)
/*<438>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          		flw_462:
/*<462>*/ 		entrypoint_460_71();
          	  case 1:
/*<441>*/ 		make_actor_do_something(17, 0)
/*<439>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          		goto flw_462
          	  case 2:
/*<443>*/ 		make_actor_do_something(18, 0)
/*<442>*/ 		zone_temp_flags[2 /* 0x1 04 */] = true;
          		goto flw_462
          	  case 3:
/*<431>*/ 		printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000c05>Wat? Geen interesse? Wat saai...\n\n\n\n<0x10009:0x00070c00>Nou ja, je weet me te vinden als je van\ngedachten verandert.")
/*<651>*/ 		temp_flags[5 /* 0x1 20 */] = true;
          	}
          }

          void entrypoint_460_05() {
/*<493>*/ 	start()
/*<494>*/ 	printf(/* textboxtype: 1, unk: 1, line: 45 */ "<0x10009:0x000b0c09>Zijn dat echt tien overwinningen op rij? Je\nbent me er eentje, jochie!")
/*<557>*/ 	printf(/* textboxtype: 0, unk: 1, line: 64 */ "<0x10009:0x000c0b06>Hier! Alsjeblieft!")
/*<548>*/ 	give_item(64 0x40);
/*<560>*/ 	printf(/* textboxtype: 0, unk: 0, line: 65 */ "<0x10009:0x000c0b00>Hier is je prijs!")
/*<558>*/ 	give_item(64 0x40);
/*<561>*/ 	printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x000c0b00>Je hebt deze fabuleuze prijs gewonnen!")
/*<559>*/ 	give_item(64 0x40);
          	goto flw_647
          }

          void entrypoint_460_58() {
/*<168>*/ 	start()
/*<152>*/ 	make_actor_do_something(7, 0)
/*<657>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 666, 'param3': 52}
/*<666>*/ 	story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */] = true;
/*<671>*/ 	story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */] = false;
/*<672>*/ 	story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = true;
/*<151>*/ 	changeScene(13, 0) // {'name': 'F401', 'room': 1, 'layer': 0, 'entrance': 7, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_06() {
/*<495>*/ 	start()
/*<496>*/ 	printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x000b0c09>Je blijft maar indruk op me maken, wist je\ndat? Elf keer op rij gewonnen. Ik sta paf!")
/*<563>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 564, 'param3': 12}
/*<564>*/ 	rupees += 3000;
/*<562>*/ 	printf(/* textboxtype: 0, unk: 1, line: 67 */ "Nou, nou! Je hebt 3000 rupees gewonnen!\nWaar moet je dat allemaal aan uitgeven?")
          	goto flw_647
          }

          void entrypoint_460_59() {
/*<169>*/ 	start()
/*<154>*/ 	make_actor_do_something(8, 0)
/*<656>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 667, 'param3': 52}
/*<667>*/ 	story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */] = true;
/*<674>*/ 	story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = true;
/*<1011>*/ 	switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          	  case 0:
/*<1012>*/ 		story_flags[495 /* us: 805A9B13 0x20, jp: 805ACD93 0x20 */] = true;
          		flw_673:
/*<673>*/ 		story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */] = false;
/*<153>*/ 		changeScene(14, 0) // {'name': 'F401', 'room': 1, 'layer': 0, 'entrance': 7, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          	  case 1:
/*<1013>*/ 		story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
          		goto flw_673
          	}
          }

          void entrypoint_460_41() {
/*<231>*/ 	start()
/*<197>*/ 	printf(/* textboxtype: 1, unk: 1, line: 9 */ "<0x10009:0x00000009>Van het begin van je reis? Goed, in dat\ngeval...<pause 20> Kijk, deze schobbejakken ben je\ntoen tegengekomen. Wie wil je uitdagen?\n[1-]Ghirahim![2-]Scaldera![3-]Moldarach![4-]De Banneling!")
/*<198>*/ 	switch (choice(4)) {
          	  case 0:
/*<199>*/ 		printf(/* textboxtype: 0, unk: 0, line: 17 */ "<color blue<<0x10009:0x000b0c0d>Ghirahim>coloroff>! Daarvoor gaan we terug naar\njullie strijd in de <color blue<Tempel der Bezinning>coloroff>.")
/*<203>*/ 		scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
          		flw_228:
/*<228>*/ 		entrypoint_460_01();
          	  case 1:
/*<201>*/ 		printf(/* textboxtype: 1, unk: 1, line: 18 */ "<color blue<<0x10009:0x000b0c0d>Scaldera >coloroff>komt eraan! Dat is die enorme\nvuurbal uit de <color blue<Tempel der Aarde>coloroff>.")
/*<204>*/ 		scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
          		goto flw_228
          	  case 2:
/*<202>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<color blue<<0x10009:0x000b0c0d>Moldarach >coloroff>komt eraan! Deze engerd\nkroop rond in het zand van <color blue<Lanayru's\nmijnbouwcentrum>coloroff>.")
/*<205>*/ 		scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
          		goto flw_228
          	  case 3:
/*<200>*/ 		printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x000b0c0d>Goed, <color blue<de Banneling>coloroff>! Dat is dat enorme,\nweerzinwekkende monster dat je moest\nverslaan in de <color blue<Verzegelde Vallei>coloroff>.")
/*<206>*/ 		scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
          		goto flw_228
          	}
          }

          void entrypoint_460_07() {
/*<497>*/ 	start()
/*<498>*/ 	printf(/* textboxtype: 0, unk: 0, line: 47 */ "<0x10009:0x000b0c09>Twaalf gevechten en twaalf keer de winst\ngepakt! Daar valt niet aan te tippen! Wat\neen held!")
/*<566>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 567, 'param3': 12}
/*<567>*/ 	rupees += 9900;
/*<565>*/ 	printf(/* textboxtype: 0, unk: 0, line: 68 */ "Deze keer win je 9900 rupees! Voor dat\nbedrag heb ik onder al mijn schubben\nmoeten zoeken!")
          	goto flw_647
          }

          void entrypoint_460_42() {
/*<232>*/ 	start()
/*<234>*/ 	switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          	  case 0:
/*<227>*/ 		printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00000009>Van het midden van je reis? Goed, in dat\ngeval...<pause 20> Kijk, deze schobbejakken ben je\ntoen tegengekomen. Wie wil je uitdagen?\n[1-]Koloktos![2-]Tentalus![3-]Ghirahim![4-]De Banneling!")
          		flw_207:
/*<207>*/ 		switch (choice(4)) {
          		  case 0:
/*<208>*/ 			printf(/* textboxtype: 1, unk: 1, line: 21 */ "<color blue<<0x10009:0x000b0c09>Koloktos>coloroff> komt eraan! Tegen dit zesarmige\nmechanische monster heb je het\nopgenomen in het <color blue<eeuwenoude reservoir>coloroff>.")
/*<212>*/ 			scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
          			flw_229:
/*<229>*/ 			entrypoint_460_01();
          		  case 1:
/*<210>*/ 			printf(/* textboxtype: 0, unk: 1, line: 22 */ "<color blue<<0x10009:0x000b0c0d>Tentalus >coloroff>komt eraan! Deze ken je als het\neenogige monster dat je aanviel op de\n<color blue<Zandvaarder>coloroff>.")
/*<213>*/ 			scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
          			goto flw_229
          		  case 2:
/*<211>*/ 			printf(/* textboxtype: 1, unk: 0, line: 23 */ "<color blue<<0x10009:0x000b0c0d>Ghirahim>coloroff>! Daarvoor gaan we terug naar\njullie strijd in het <color blue<Vuurheiligdom>coloroff>.")
/*<214>*/ 			scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
          			goto flw_229
          		  case 3:
/*<209>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x000b0c0d>Goed, <color blue<de Banneling>coloroff>! Dat is dat enorme,\nweerzinwekkende monster dat je voor de\ntweede keer moest verslaan in de\n<color blue<Verzegelde Vallei>coloroff>.")
/*<215>*/ 			scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
          			goto flw_229
          		}
          	  case 1:
/*<226>*/ 		printf(/* textboxtype: 1, unk: 1, line: 15 */ "<0x10009:0x00000009>Een recent gevecht? Goed, in dat geval...<pause 20>\nKijk, deze schobbejakken ben je recent\ntegengekomen. Wie wil je uitdagen?\n[1-]Koloktos![2-]Tentalus![3-]Ghirahim![4-]De Banneling!")
          		goto flw_207
          	}
          }

          void entrypoint_460_08() {
/*<578>*/ 	start()
/*<569>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000b0c07>Goed gedaan! Je hebt je weer kranig\ngeweerd!")
/*<570>*/ 	printf(/* textboxtype: 0, unk: 1, line: 37 */ "Hier is de tijd waarin je <color blue<<string arg0>\n>coloroff>hebt verslagen: <numeric arg0 0>:<numeric arg1 2>.<numeric arg2 2>.")
/*<568>*/ 	switch (context_related3(3)) {
          	  case 0:
/*<571>*/ 		printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00000008>Was dat niet de eerste keer dat je dat\ngevecht hebt herbeleefd? Ik wil je inzet\ngraag belonen met een kleinigheidje!<0x10009:0x000c0b06>")
          		flw_576:
/*<576>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 577, 'param3': 12}
/*<577>*/ 		rupees += 50;
/*<575>*/ 		printf(/* textboxtype: 1, unk: 0, line: 57 */ "Deze 50 rupees zijn voor jou! Ja, pak maar\naan!")
          		flw_642:
/*<642>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 574, 'param3': 12}
/*<574>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 623, 'param3': 45}
/*<623>*/ 		entrypoint_460_03();
          	  case 1:
/*<572>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00000006>Mooie prestatie! Je hebt je eigen record\nverbroken. Daarvoor verdien je een\npresentje!<0x10009:0x000c0b06>")
          		goto flw_576
          	  case 2:
/*<573>*/ 		printf(/* textboxtype: 0, unk: 0, line: 41 */ "Dat was helaas geen nieuw record, maar je\nhebt alles overleefd wat ik op je af heb\ngestuurd, dus toch een hele prestatie!")
          		goto flw_642
          	}
          }

          void entrypoint_460_60() {
/*<170>*/ 	start()
/*<156>*/ 	make_actor_do_something(9, 0)
/*<655>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 1009, 'param3': 52}
/*<1009>*/ 	story_flags[347 /* us: 805A9B01 0x02, jp: 805ACD81 0x02 */] = true;
/*<155>*/ 	changeScene(15, 0) // {'name': 'F403', 'room': 1, 'layer': 0, 'entrance': 1, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_43() {
/*<233>*/ 	start()
/*<216>*/ 	printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00000009>Van je latere reis? Goed, in dat geval...<pause 20>\nKijk, deze schobbejakken ben je toen\ntegengekomen. Wie daag je uit?\n[1-]De Banneling![2-]Vijandige meute![3-]Ghirahim![4-]Fatalot!")
/*<217>*/ 	switch (choice(4)) {
          	  case 0:
/*<218>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x000b0c0d>Goed, <color blue<de Banneling>coloroff>! Dat is dat enorme,\nweerzinwekkende monster dat je voor de\nderde keer moest verslaan in de <color blue<Verzegelde\nVallei>coloroff>.")
/*<222>*/ 		scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
          		flw_230:
/*<230>*/ 		entrypoint_460_01();
          	  case 1:
/*<220>*/ 		printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x000b0c0d>O, de <color blue<vijandige meute>coloroff>! Dat waren de\nmonsters die <color blue<Ghirahim>coloroff> had opgeroepen in\nde <color blue<Verzegelde Vallei>coloroff>.")
/*<223>*/ 		scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
          		goto flw_230
          	  case 2:
/*<221>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<color blue<<0x10009:0x000b0c0d>Ghirahim>coloroff>! Daarvoor gaan we terug naar\njullie strijd in de <color blue<Verzegelde Vallei>coloroff>.")
/*<224>*/ 		scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
          		goto flw_230
          	  case 3:
/*<219>*/ 		printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x000b0c0d>Oké, <color blue<Fatalot>coloroff> komt eraan! Je hebt het\ntegen heel wat engerds opgenomen, maar\nvan dit figuur gaan mijn schubben recht\novereind staan. Bij wijze van spreken.")
/*<225>*/ 		scene_flags[9 'Lanayru Gorge'][126 /* 0xE 40 */] = true;
          		goto flw_230
          	}
          }

          void entrypoint_460_09() {
/*<589>*/ 	start()
/*<580>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000b0c07>Goed gedaan! Je hebt je weer kranig\ngeweerd!")
/*<581>*/ 	printf(/* textboxtype: 0, unk: 1, line: 37 */ "Hier is de tijd waarin je <color blue<<string arg0>\n>coloroff>hebt verslagen: <numeric arg0 0>:<numeric arg1 2>.<numeric arg2 2>.")
/*<579>*/ 	switch (context_related3(3)) {
          	  case 0:
/*<582>*/ 		printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00000008>Was dat niet de eerste keer dat je dat\ngevecht hebt herbeleefd? Ik wil je inzet\ngraag belonen met een kleinigheidje!<0x10009:0x000c0b06>")
          		flw_587:
/*<587>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 588, 'param3': 12}
/*<588>*/ 		rupees += 50;
/*<586>*/ 		printf(/* textboxtype: 1, unk: 0, line: 57 */ "Deze 50 rupees zijn voor jou! Ja, pak maar\naan!")
          		flw_643:
/*<643>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 585, 'param3': 12}
/*<585>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 624, 'param3': 45}
/*<624>*/ 		entrypoint_460_04();
          	  case 1:
/*<583>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00000006>Mooie prestatie! Je hebt je eigen record\nverbroken. Daarvoor verdien je een\npresentje!<0x10009:0x000c0b06>")
          		goto flw_587
          	  case 2:
/*<584>*/ 		printf(/* textboxtype: 0, unk: 0, line: 41 */ "Dat was helaas geen nieuw record, maar je\nhebt alles overleefd wat ik op je af heb\ngestuurd, dus toch een hele prestatie!")
          		goto flw_643
          	}
          }

          void entrypoint_460_61() {
/*<171>*/ 	start()
/*<158>*/ 	make_actor_do_something(10, 0)
/*<654>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 691, 'param3': 52}
/*<691>*/ 	story_flags[726 /* us: 805A9B24 0x40, jp: 805ACDA4 0x40 */] = true;
/*<157>*/ 	changeScene(16, 0) // {'name': 'F403', 'room': 1, 'layer': 4, 'entrance': 7, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_44() {
/*<248>*/ 	start()
/*<239>*/ 	printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00000009>Van je latere reis? Goed, in dat geval...<pause 20>\nKijk, deze schobbejakken ben je toen\ntegengekomen. Wie daag je uit?\n[1-]De Banneling![2-]Vijandige meute![3-]Ghirahim!")
/*<240>*/ 	switch (choice(3)) {
          	  case 0:
/*<241>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x000b0c0d>Goed, <color blue<de Banneling>coloroff>! Dat is dat enorme,\nweerzinwekkende monster dat je voor de\nderde keer moest verslaan in de <color blue<Verzegelde\nVallei>coloroff>.")
/*<244>*/ 		scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
          		flw_247:
/*<247>*/ 		entrypoint_460_01();
          	  case 1:
/*<242>*/ 		printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x000b0c0d>O, de <color blue<vijandige meute>coloroff>! Dat waren de\nmonsters die <color blue<Ghirahim>coloroff> had opgeroepen in\nde <color blue<Verzegelde Vallei>coloroff>.")
/*<245>*/ 		scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
          		goto flw_247
          	  case 2:
/*<243>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<color blue<<0x10009:0x000b0c0d>Ghirahim>coloroff>! Daarvoor gaan we terug naar\njullie strijd in de <color blue<Verzegelde Vallei>coloroff>.")
/*<246>*/ 		scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
          		goto flw_247
          	}
          }

          void entrypoint_460_62() {
/*<172>*/ 	start()
/*<160>*/ 	make_actor_do_something(11, 0)
/*<653>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 159, 'param3': 52}
/*<159>*/ 	changeScene(17, 0) // {'name': 'B400', 'room': 0, 'layer': 1, 'entrance': 3, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_45() {
/*<256>*/ 	start()
/*<249>*/ 	printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000009>Van je latere reis? Goed, in dat geval...<pause 20>\nKijk, deze schobbejakken ben je toen\ntegengekomen. Wie daag je uit?\n[1-]De Banneling![2-]Vijandige meute!")
/*<250>*/ 	switch (choice(2)) {
          	  case 0:
/*<251>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x000b0c0d>Goed, <color blue<de Banneling>coloroff>! Dat is dat enorme,\nweerzinwekkende monster dat je voor de\nderde keer moest verslaan in de <color blue<Verzegelde\nVallei>coloroff>.")
/*<253>*/ 		scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
          		flw_255:
/*<255>*/ 		entrypoint_460_01();
          	  case 1:
/*<252>*/ 		printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x000b0c0d>O, de <color blue<vijandige meute>coloroff>! Dat waren de\nmonsters die <color blue<Ghirahim>coloroff> had opgeroepen in\nde <color blue<Verzegelde Vallei>coloroff>.")
/*<254>*/ 		scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
          		goto flw_255
          	}
          }

          void entrypoint_460_10() {
/*<600>*/ 	start()
/*<591>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000b0c07>Goed gedaan! Je hebt je weer kranig\ngeweerd!")
/*<592>*/ 	printf(/* textboxtype: 0, unk: 1, line: 37 */ "Hier is de tijd waarin je <color blue<<string arg0>\n>coloroff>hebt verslagen: <numeric arg0 0>:<numeric arg1 2>.<numeric arg2 2>.")
/*<590>*/ 	switch (context_related3(3)) {
          	  case 0:
/*<593>*/ 		printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00000008>Was dat niet de eerste keer dat je dat\ngevecht hebt herbeleefd? Ik wil je inzet\ngraag belonen met een kleinigheidje!<0x10009:0x000c0b06>")
          		flw_598:
/*<598>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 599, 'param3': 12}
/*<599>*/ 		rupees += 50;
/*<597>*/ 		printf(/* textboxtype: 1, unk: 0, line: 57 */ "Deze 50 rupees zijn voor jou! Ja, pak maar\naan!")
          		flw_644:
/*<644>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 596, 'param3': 12}
/*<596>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 625, 'param3': 45}
/*<625>*/ 		entrypoint_460_05();
          	  case 1:
/*<594>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00000006>Mooie prestatie! Je hebt je eigen record\nverbroken. Daarvoor verdien je een\npresentje!<0x10009:0x000c0b06>")
          		goto flw_598
          	  case 2:
/*<595>*/ 		printf(/* textboxtype: 0, unk: 0, line: 41 */ "Dat was helaas geen nieuw record, maar je\nhebt alles overleefd wat ik op je af heb\ngestuurd, dus toch een hele prestatie!")
          		goto flw_644
          	}
          }

          void entrypoint_460_46() {
/*<261>*/ 	start()
/*<257>*/ 	printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00000009>Van je latere reis?<pause 20> De enige tegenstander\ndie je toen bent tegengekomen is:\n<color blue<de Banneling>coloroff>.")
/*<258>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x000b0c0d>Goed, <color blue<de Banneling>coloroff>! Dat is dat enorme,\nweerzinwekkende monster dat je voor de\nderde keer moest verslaan in de <color blue<Verzegelde\nVallei>coloroff>.")
/*<259>*/ 	scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<260>*/ 	entrypoint_460_01();
          }

          void entrypoint_460_11() {
/*<611>*/ 	start()
/*<602>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000b0c07>Goed gedaan! Je hebt je weer kranig\ngeweerd!")
/*<603>*/ 	printf(/* textboxtype: 0, unk: 1, line: 37 */ "Hier is de tijd waarin je <color blue<<string arg0>\n>coloroff>hebt verslagen: <numeric arg0 0>:<numeric arg1 2>.<numeric arg2 2>.")
/*<601>*/ 	switch (context_related3(3)) {
          	  case 0:
/*<604>*/ 		printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00000008>Was dat niet de eerste keer dat je dat\ngevecht hebt herbeleefd? Ik wil je inzet\ngraag belonen met een kleinigheidje!<0x10009:0x000c0b06>")
          		flw_609:
/*<609>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 610, 'param3': 12}
/*<610>*/ 		rupees += 50;
/*<608>*/ 		printf(/* textboxtype: 1, unk: 0, line: 57 */ "Deze 50 rupees zijn voor jou! Ja, pak maar\naan!")
          		flw_645:
/*<645>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 607, 'param3': 12}
/*<607>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 626, 'param3': 45}
/*<626>*/ 		entrypoint_460_06();
          	  case 1:
/*<605>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00000006>Mooie prestatie! Je hebt je eigen record\nverbroken. Daarvoor verdien je een\npresentje!<0x10009:0x000c0b06>")
          		goto flw_609
          	  case 2:
/*<606>*/ 		printf(/* textboxtype: 0, unk: 0, line: 41 */ "Dat was helaas geen nieuw record, maar je\nhebt alles overleefd wat ik op je af heb\ngestuurd, dus toch een hele prestatie!")
          		goto flw_645
          	}
          }

          void entrypoint_460_12() {
/*<622>*/ 	start()
/*<613>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000b0c07>Goed gedaan! Je hebt je weer kranig\ngeweerd!")
/*<614>*/ 	printf(/* textboxtype: 0, unk: 1, line: 37 */ "Hier is de tijd waarin je <color blue<<string arg0>\n>coloroff>hebt verslagen: <numeric arg0 0>:<numeric arg1 2>.<numeric arg2 2>.")
/*<612>*/ 	switch (context_related3(3)) {
          	  case 0:
/*<615>*/ 		printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00000008>Was dat niet de eerste keer dat je dat\ngevecht hebt herbeleefd? Ik wil je inzet\ngraag belonen met een kleinigheidje!<0x10009:0x000c0b06>")
          		flw_620:
/*<620>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 621, 'param3': 12}
/*<621>*/ 		rupees += 50;
/*<619>*/ 		printf(/* textboxtype: 1, unk: 0, line: 57 */ "Deze 50 rupees zijn voor jou! Ja, pak maar\naan!")
          		flw_646:
/*<646>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 618, 'param3': 12}
/*<618>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 627, 'param3': 45}
/*<627>*/ 		entrypoint_460_07();
          	  case 1:
/*<616>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00000006>Mooie prestatie! Je hebt je eigen record\nverbroken. Daarvoor verdien je een\npresentje!<0x10009:0x000c0b06>")
          		goto flw_620
          	  case 2:
/*<617>*/ 		printf(/* textboxtype: 0, unk: 0, line: 41 */ "Dat was helaas geen nieuw record, maar je\nhebt alles overleefd wat ik op je af heb\ngestuurd, dus toch een hele prestatie!")
          		goto flw_646
          	}
          }

          void entrypoint_460_13() {
/*<687>*/ 	start()
/*<675>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<680>*/ 		story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */] = false;
/*<686>*/ 		story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = false;
          		flw_690:
/*<690>*/ 		entrypoint_460_14();
          	  case 1:
/*<676>*/ 		switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          		  case 0:
/*<679>*/ 			story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */] = false;
/*<684>*/ 			story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */] = true;
/*<685>*/ 			story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = false;
          			goto flw_690
          		  case 1:
/*<677>*/ 			switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          			  case 0:
/*<678>*/ 				story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */] = false;
/*<681>*/ 				story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */] = true;
/*<682>*/ 				story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */] = true;
/*<683>*/ 				story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = false;
/*<994>*/ 				story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */] = true;
          				goto flw_690
          			  case 1:
/*<692>*/ 				switch (story_flags[726 /* us: 805A9B24 0x40, jp: 805ACDA4 0x40 */]) {
          				  case 0:
/*<693>*/ 					story_flags[726 /* us: 805A9B24 0x40, jp: 805ACDA4 0x40 */] = false;
          					goto flw_690
          				  case 1:
          					goto flw_690
          				}
          			}
          		}
          	}
          }

          void entrypoint_460_31() {
/*<413>*/ 	start()
/*<694>*/ 	switch (random(3)) {
          	  case 0:
/*<268>*/ 		switch (scene_flags[115 /* 0xF 08 */]) {
          		  case 0:
/*<270>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<272>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<275>*/ 					switch (scene_flags[118 /* 0xF 40 */]) {
          					  case 0:
/*<276>*/ 						switch (scene_flags[119 /* 0xF 80 */]) {
          						  case 0:
/*<277>*/ 							switch (scene_flags[120 /* 0xE 01 */]) {
          							  case 0:
/*<278>*/ 								switch (scene_flags[121 /* 0xE 02 */]) {
          								  case 0:
/*<282>*/ 									scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<289>*/ 									entrypoint_460_58();
          								  case 1:
/*<281>*/ 									scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<290>*/ 									entrypoint_460_57();
          								}
          							  case 1:
/*<280>*/ 								scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<287>*/ 								entrypoint_460_56();
          							}
          						  case 1:
/*<279>*/ 							scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<288>*/ 							entrypoint_460_55();
          						}
          					  case 1:
/*<274>*/ 						scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<285>*/ 						entrypoint_460_54();
          					}
          				  case 1:
/*<273>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<286>*/ 					entrypoint_460_53();
          				}
          			  case 1:
/*<271>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<283>*/ 				entrypoint_460_52();
          			}
          		  case 1:
/*<269>*/ 			scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<284>*/ 			entrypoint_460_51();
          		}
          	  case 1:
/*<704>*/ 		switch (scene_flags[120 /* 0xE 01 */]) {
          		  case 0:
/*<702>*/ 			switch (scene_flags[118 /* 0xF 40 */]) {
          			  case 0:
/*<699>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<703>*/ 					switch (scene_flags[119 /* 0xF 80 */]) {
          					  case 0:
/*<705>*/ 						switch (scene_flags[121 /* 0xE 02 */]) {
          						  case 0:
/*<695>*/ 							switch (scene_flags[115 /* 0xF 08 */]) {
          							  case 0:
/*<697>*/ 								switch (scene_flags[116 /* 0xF 10 */]) {
          								  case 0:
/*<709>*/ 									scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<716>*/ 									entrypoint_460_58();
          								  case 1:
/*<698>*/ 									scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<710>*/ 									entrypoint_460_52();
          								}
          							  case 1:
/*<696>*/ 								scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<711>*/ 								entrypoint_460_51();
          							}
          						  case 1:
/*<708>*/ 							scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<717>*/ 							entrypoint_460_57();
          						}
          					  case 1:
/*<706>*/ 						scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<715>*/ 						entrypoint_460_55();
          					}
          				  case 1:
/*<700>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<713>*/ 					entrypoint_460_53();
          				}
          			  case 1:
/*<701>*/ 				scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<712>*/ 				entrypoint_460_54();
          			}
          		  case 1:
/*<707>*/ 			scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<714>*/ 			entrypoint_460_56();
          		}
          	  case 2:
/*<725>*/ 		switch (scene_flags[118 /* 0xF 40 */]) {
          		  case 0:
/*<726>*/ 			switch (scene_flags[119 /* 0xF 80 */]) {
          			  case 0:
/*<718>*/ 				switch (scene_flags[115 /* 0xF 08 */]) {
          				  case 0:
/*<728>*/ 					switch (scene_flags[121 /* 0xE 02 */]) {
          					  case 0:
/*<720>*/ 						switch (scene_flags[116 /* 0xF 10 */]) {
          						  case 0:
/*<727>*/ 							switch (scene_flags[120 /* 0xE 01 */]) {
          							  case 0:
/*<722>*/ 								switch (scene_flags[117 /* 0xF 20 */]) {
          								  case 0:
/*<732>*/ 									scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<739>*/ 									entrypoint_460_58();
          								  case 1:
/*<723>*/ 									scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<736>*/ 									entrypoint_460_53();
          								}
          							  case 1:
/*<730>*/ 								scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<737>*/ 								entrypoint_460_56();
          							}
          						  case 1:
/*<721>*/ 							scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<733>*/ 							entrypoint_460_52();
          						}
          					  case 1:
/*<731>*/ 						scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<740>*/ 						entrypoint_460_57();
          					}
          				  case 1:
/*<719>*/ 					scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<734>*/ 					entrypoint_460_51();
          				}
          			  case 1:
/*<729>*/ 				scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<738>*/ 				entrypoint_460_55();
          			}
          		  case 1:
/*<724>*/ 			scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<735>*/ 			entrypoint_460_54();
          		}
          	}
          }

          void entrypoint_460_14() {
/*<688>*/ 	start()
/*<473>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<477>*/ 		switch (context_related2(7)) {
          		  case 0:
/*<487>*/ 			entrypoint_460_12();
          		  case 1:
          			flw_482:
/*<482>*/ 			entrypoint_460_02();
          		}
          	  case 1:
/*<474>*/ 		switch (story_flags[225 /* us: 805A9AF2 0x10, jp: 805ACD72 0x10 */]) {
          		  case 0:
/*<478>*/ 			switch (context_related2(8)) {
          			  case 0:
/*<486>*/ 				entrypoint_460_11();
          			  case 1:
          				goto flw_482
          			}
          		  case 1:
/*<475>*/ 			switch (story_flags[134 /* us: 805A9AE4 0x10, jp: 805ACD64 0x10 */]) {
          			  case 0:
/*<479>*/ 				switch (context_related2(9)) {
          				  case 0:
/*<485>*/ 					entrypoint_460_10();
          				  case 1:
          					goto flw_482
          				}
          			  case 1:
/*<476>*/ 				switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          				  case 0:
/*<480>*/ 					switch (context_related2(10)) {
          					  case 0:
/*<484>*/ 						entrypoint_460_09();
          					  case 1:
          						goto flw_482
          					}
          				  case 1:
/*<481>*/ 					switch (context_related2(11)) {
          					  case 0:
/*<483>*/ 						entrypoint_460_08();
          					  case 1:
          						goto flw_482
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_460_32() {
/*<414>*/ 	start()
/*<741>*/ 	switch (random(3)) {
          	  case 0:
/*<291>*/ 		switch (scene_flags[115 /* 0xF 08 */]) {
          		  case 0:
/*<293>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<295>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<298>*/ 					switch (scene_flags[118 /* 0xF 40 */]) {
          					  case 0:
/*<299>*/ 						switch (scene_flags[119 /* 0xF 80 */]) {
          						  case 0:
/*<300>*/ 							switch (scene_flags[120 /* 0xE 01 */]) {
          							  case 0:
/*<301>*/ 								switch (scene_flags[121 /* 0xE 02 */]) {
          								  case 0:
/*<302>*/ 									switch (scene_flags[122 /* 0xE 04 */]) {
          									  case 0:
/*<307>*/ 										scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<312>*/ 										entrypoint_460_59();
          									  case 1:
/*<306>*/ 										scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<315>*/ 										entrypoint_460_58();
          									}
          								  case 1:
/*<305>*/ 									scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<316>*/ 									entrypoint_460_57();
          								}
          							  case 1:
/*<304>*/ 								scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<313>*/ 								entrypoint_460_56();
          							}
          						  case 1:
/*<303>*/ 							scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<314>*/ 							entrypoint_460_55();
          						}
          					  case 1:
/*<297>*/ 						scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<310>*/ 						entrypoint_460_54();
          					}
          				  case 1:
/*<296>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<311>*/ 					entrypoint_460_53();
          				}
          			  case 1:
/*<294>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<308>*/ 				entrypoint_460_52();
          			}
          		  case 1:
/*<292>*/ 			scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<309>*/ 			entrypoint_460_51();
          		}
          	  case 1:
/*<752>*/ 		switch (scene_flags[121 /* 0xE 02 */]) {
          		  case 0:
/*<753>*/ 			switch (scene_flags[122 /* 0xE 04 */]) {
          			  case 0:
/*<751>*/ 				switch (scene_flags[120 /* 0xE 01 */]) {
          				  case 0:
/*<742>*/ 					switch (scene_flags[115 /* 0xF 08 */]) {
          					  case 0:
/*<746>*/ 						switch (scene_flags[117 /* 0xF 20 */]) {
          						  case 0:
/*<749>*/ 							switch (scene_flags[118 /* 0xF 40 */]) {
          							  case 0:
/*<744>*/ 								switch (scene_flags[116 /* 0xF 10 */]) {
          								  case 0:
/*<750>*/ 									switch (scene_flags[119 /* 0xF 80 */]) {
          									  case 0:
/*<758>*/ 										scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<763>*/ 										entrypoint_460_59();
          									  case 1:
/*<754>*/ 										scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<765>*/ 										entrypoint_460_55();
          									}
          								  case 1:
/*<745>*/ 									scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<759>*/ 									entrypoint_460_52();
          								}
          							  case 1:
/*<748>*/ 								scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<761>*/ 								entrypoint_460_54();
          							}
          						  case 1:
/*<747>*/ 							scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<762>*/ 							entrypoint_460_53();
          						}
          					  case 1:
/*<743>*/ 						scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<760>*/ 						entrypoint_460_51();
          					}
          				  case 1:
/*<755>*/ 					scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<764>*/ 					entrypoint_460_56();
          				}
          			  case 1:
/*<757>*/ 				scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<766>*/ 				entrypoint_460_58();
          			}
          		  case 1:
/*<756>*/ 			scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<767>*/ 			entrypoint_460_57();
          		}
          	  case 2:
/*<775>*/ 		switch (scene_flags[118 /* 0xF 40 */]) {
          		  case 0:
/*<770>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<777>*/ 				switch (scene_flags[120 /* 0xE 01 */]) {
          				  case 0:
/*<778>*/ 					switch (scene_flags[121 /* 0xE 02 */]) {
          					  case 0:
/*<772>*/ 						switch (scene_flags[117 /* 0xF 20 */]) {
          						  case 0:
/*<776>*/ 							switch (scene_flags[119 /* 0xF 80 */]) {
          							  case 0:
/*<779>*/ 								switch (scene_flags[122 /* 0xE 04 */]) {
          								  case 0:
/*<768>*/ 									switch (scene_flags[115 /* 0xF 08 */]) {
          									  case 0:
/*<784>*/ 										scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<789>*/ 										entrypoint_460_59();
          									  case 1:
/*<769>*/ 										scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<786>*/ 										entrypoint_460_51();
          									}
          								  case 1:
/*<783>*/ 									scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<792>*/ 									entrypoint_460_58();
          								}
          							  case 1:
/*<780>*/ 								scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<791>*/ 								entrypoint_460_55();
          							}
          						  case 1:
/*<773>*/ 							scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<788>*/ 							entrypoint_460_53();
          						}
          					  case 1:
/*<782>*/ 						scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<793>*/ 						entrypoint_460_57();
          					}
          				  case 1:
/*<781>*/ 					scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<790>*/ 					entrypoint_460_56();
          				}
          			  case 1:
/*<771>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<785>*/ 				entrypoint_460_52();
          			}
          		  case 1:
/*<774>*/ 			scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<787>*/ 			entrypoint_460_54();
          		}
          	}
          }

          void entrypoint_460_33() {
/*<415>*/ 	start()
/*<794>*/ 	switch (random(3)) {
          	  case 0:
/*<317>*/ 		switch (scene_flags[115 /* 0xF 08 */]) {
          		  case 0:
/*<319>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<321>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<324>*/ 					switch (scene_flags[118 /* 0xF 40 */]) {
          					  case 0:
/*<325>*/ 						switch (scene_flags[119 /* 0xF 80 */]) {
          						  case 0:
/*<326>*/ 							switch (scene_flags[120 /* 0xE 01 */]) {
          							  case 0:
/*<327>*/ 								switch (scene_flags[121 /* 0xE 02 */]) {
          								  case 0:
/*<328>*/ 									switch (scene_flags[122 /* 0xE 04 */]) {
          									  case 0:
/*<329>*/ 										switch (scene_flags[123 /* 0xE 08 */]) {
          										  case 0:
/*<335>*/ 											scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<340>*/ 											entrypoint_460_60();
          										  case 1:
/*<334>*/ 											scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<341>*/ 											entrypoint_460_59();
          										}
          									  case 1:
/*<333>*/ 										scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<344>*/ 										entrypoint_460_58();
          									}
          								  case 1:
/*<332>*/ 									scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<345>*/ 									entrypoint_460_57();
          								}
          							  case 1:
/*<331>*/ 								scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<342>*/ 								entrypoint_460_56();
          							}
          						  case 1:
/*<330>*/ 							scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<343>*/ 							entrypoint_460_55();
          						}
          					  case 1:
/*<323>*/ 						scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<338>*/ 						entrypoint_460_54();
          					}
          				  case 1:
/*<322>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<339>*/ 					entrypoint_460_53();
          				}
          			  case 1:
/*<320>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<336>*/ 				entrypoint_460_52();
          			}
          		  case 1:
/*<318>*/ 			scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<337>*/ 			entrypoint_460_51();
          		}
          	  case 1:
/*<809>*/ 		switch (scene_flags[123 /* 0xE 08 */]) {
          		  case 0:
/*<799>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<801>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<797>*/ 					switch (scene_flags[115 /* 0xF 08 */]) {
          					  case 0:
/*<804>*/ 						switch (scene_flags[118 /* 0xF 40 */]) {
          						  case 0:
/*<807>*/ 							switch (scene_flags[121 /* 0xE 02 */]) {
          							  case 0:
/*<805>*/ 								switch (scene_flags[119 /* 0xF 80 */]) {
          								  case 0:
/*<808>*/ 									switch (scene_flags[122 /* 0xE 04 */]) {
          									  case 0:
/*<806>*/ 										switch (scene_flags[120 /* 0xE 01 */]) {
          										  case 0:
/*<815>*/ 											scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<820>*/ 											entrypoint_460_60();
          										  case 1:
/*<811>*/ 											scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<822>*/ 											entrypoint_460_56();
          										}
          									  case 1:
/*<813>*/ 										scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<824>*/ 										entrypoint_460_58();
          									}
          								  case 1:
/*<810>*/ 									scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<823>*/ 									entrypoint_460_55();
          								}
          							  case 1:
/*<812>*/ 								scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<825>*/ 								entrypoint_460_57();
          							}
          						  case 1:
/*<803>*/ 							scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<818>*/ 							entrypoint_460_54();
          						}
          					  case 1:
/*<798>*/ 						scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<817>*/ 						entrypoint_460_51();
          					}
          				  case 1:
/*<802>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<819>*/ 					entrypoint_460_53();
          				}
          			  case 1:
/*<800>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<816>*/ 				entrypoint_460_52();
          			}
          		  case 1:
/*<814>*/ 			scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<821>*/ 			entrypoint_460_59();
          		}
          	  case 2:
/*<835>*/ 		switch (scene_flags[120 /* 0xE 01 */]) {
          		  case 0:
/*<826>*/ 			switch (scene_flags[115 /* 0xF 08 */]) {
          			  case 0:
/*<830>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<838>*/ 					switch (scene_flags[123 /* 0xE 08 */]) {
          					  case 0:
/*<828>*/ 						switch (scene_flags[116 /* 0xF 10 */]) {
          						  case 0:
/*<836>*/ 							switch (scene_flags[121 /* 0xE 02 */]) {
          							  case 0:
/*<834>*/ 								switch (scene_flags[119 /* 0xF 80 */]) {
          								  case 0:
/*<833>*/ 									switch (scene_flags[118 /* 0xF 40 */]) {
          									  case 0:
/*<837>*/ 										switch (scene_flags[122 /* 0xE 04 */]) {
          										  case 0:
/*<844>*/ 											scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<849>*/ 											entrypoint_460_60();
          										  case 1:
/*<842>*/ 											scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<853>*/ 											entrypoint_460_58();
          										}
          									  case 1:
/*<832>*/ 										scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<847>*/ 										entrypoint_460_54();
          									}
          								  case 1:
/*<839>*/ 									scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<852>*/ 									entrypoint_460_55();
          								}
          							  case 1:
/*<841>*/ 								scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<854>*/ 								entrypoint_460_57();
          							}
          						  case 1:
/*<829>*/ 							scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<845>*/ 							entrypoint_460_52();
          						}
          					  case 1:
/*<843>*/ 						scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<850>*/ 						entrypoint_460_59();
          					}
          				  case 1:
/*<831>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<848>*/ 					entrypoint_460_53();
          				}
          			  case 1:
/*<827>*/ 				scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<846>*/ 				entrypoint_460_51();
          			}
          		  case 1:
/*<840>*/ 			scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<851>*/ 			entrypoint_460_56();
          		}
          	}
          }

          void entrypoint_460_51() {
/*<161>*/ 	start()
/*<121>*/ 	story_flags[353 /* us: 805A9B01 0x80, jp: 805ACD81 0x80 */] = true;
/*<122>*/ 	story_flags[354 /* us: 805A9B00 0x04, jp: 805ACD80 0x04 */] = true;
/*<123>*/ 	story_flags[355 /* us: 805A9B00 0x02, jp: 805ACD80 0x02 */] = true;
/*<124>*/ 	story_flags[356 /* us: 805A9B00 0x01, jp: 805ACD80 0x01 */] = true;
/*<125>*/ 	story_flags[357 /* us: 805A9B00 0x08, jp: 805ACD80 0x08 */] = true;
/*<127>*/ 	make_actor_do_something(0, 0)
/*<664>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 126, 'param3': 52}
/*<126>*/ 	changeScene(7, 0) // {'name': 'B100', 'room': 0, 'layer': 5, 'entrance': 2, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_34() {
/*<416>*/ 	start()
/*<795>*/ 	switch (random(3)) {
          	  case 0:
/*<346>*/ 		switch (scene_flags[115 /* 0xF 08 */]) {
          		  case 0:
/*<348>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<350>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<353>*/ 					switch (scene_flags[118 /* 0xF 40 */]) {
          					  case 0:
/*<354>*/ 						switch (scene_flags[119 /* 0xF 80 */]) {
          						  case 0:
/*<355>*/ 							switch (scene_flags[120 /* 0xE 01 */]) {
          							  case 0:
/*<356>*/ 								switch (scene_flags[121 /* 0xE 02 */]) {
          								  case 0:
/*<357>*/ 									switch (scene_flags[122 /* 0xE 04 */]) {
          									  case 0:
/*<358>*/ 										switch (scene_flags[123 /* 0xE 08 */]) {
          										  case 0:
/*<359>*/ 											switch (scene_flags[124 /* 0xE 10 */]) {
          											  case 0:
/*<366>*/ 												scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
/*<373>*/ 												entrypoint_460_61();
          											  case 1:
/*<365>*/ 												scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<371>*/ 												entrypoint_460_60();
          											}
          										  case 1:
/*<364>*/ 											scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<372>*/ 											entrypoint_460_59();
          										}
          									  case 1:
/*<363>*/ 										scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<376>*/ 										entrypoint_460_58();
          									}
          								  case 1:
/*<362>*/ 									scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<377>*/ 									entrypoint_460_57();
          								}
          							  case 1:
/*<361>*/ 								scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<374>*/ 								entrypoint_460_56();
          							}
          						  case 1:
/*<360>*/ 							scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<375>*/ 							entrypoint_460_55();
          						}
          					  case 1:
/*<352>*/ 						scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<369>*/ 						entrypoint_460_54();
          					}
          				  case 1:
/*<351>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<370>*/ 					entrypoint_460_53();
          				}
          			  case 1:
/*<349>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<367>*/ 				entrypoint_460_52();
          			}
          		  case 1:
/*<347>*/ 			scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<368>*/ 			entrypoint_460_51();
          		}
          	  case 1:
/*<857>*/ 		switch (scene_flags[116 /* 0xF 10 */]) {
          		  case 0:
/*<863>*/ 			switch (scene_flags[119 /* 0xF 80 */]) {
          			  case 0:
/*<864>*/ 				switch (scene_flags[120 /* 0xE 01 */]) {
          				  case 0:
/*<867>*/ 					switch (scene_flags[123 /* 0xE 08 */]) {
          					  case 0:
/*<862>*/ 						switch (scene_flags[118 /* 0xF 40 */]) {
          						  case 0:
/*<865>*/ 							switch (scene_flags[121 /* 0xE 02 */]) {
          							  case 0:
/*<866>*/ 								switch (scene_flags[122 /* 0xE 04 */]) {
          								  case 0:
/*<868>*/ 									switch (scene_flags[124 /* 0xE 10 */]) {
          									  case 0:
/*<855>*/ 										switch (scene_flags[115 /* 0xF 08 */]) {
          										  case 0:
/*<859>*/ 											switch (scene_flags[117 /* 0xF 20 */]) {
          											  case 0:
/*<875>*/ 												scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
/*<882>*/ 												entrypoint_460_61();
          											  case 1:
/*<860>*/ 												scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<879>*/ 												entrypoint_460_53();
          											}
          										  case 1:
/*<856>*/ 											scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<877>*/ 											entrypoint_460_51();
          										}
          									  case 1:
/*<874>*/ 										scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<880>*/ 										entrypoint_460_60();
          									}
          								  case 1:
/*<872>*/ 									scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<885>*/ 									entrypoint_460_58();
          								}
          							  case 1:
/*<871>*/ 								scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<886>*/ 								entrypoint_460_57();
          							}
          						  case 1:
/*<861>*/ 							scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<878>*/ 							entrypoint_460_54();
          						}
          					  case 1:
/*<873>*/ 						scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<881>*/ 						entrypoint_460_59();
          					}
          				  case 1:
/*<870>*/ 					scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<883>*/ 					entrypoint_460_56();
          				}
          			  case 1:
/*<869>*/ 				scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<884>*/ 				entrypoint_460_55();
          			}
          		  case 1:
/*<858>*/ 			scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<876>*/ 			entrypoint_460_52();
          		}
          	  case 2:
/*<887>*/ 		switch (scene_flags[115 /* 0xF 08 */]) {
          		  case 0:
/*<895>*/ 			switch (scene_flags[119 /* 0xF 80 */]) {
          			  case 0:
/*<896>*/ 				switch (scene_flags[120 /* 0xE 01 */]) {
          				  case 0:
/*<897>*/ 					switch (scene_flags[121 /* 0xE 02 */]) {
          					  case 0:
/*<894>*/ 						switch (scene_flags[118 /* 0xF 40 */]) {
          						  case 0:
/*<891>*/ 							switch (scene_flags[117 /* 0xF 20 */]) {
          							  case 0:
/*<900>*/ 								switch (scene_flags[124 /* 0xE 10 */]) {
          								  case 0:
/*<899>*/ 									switch (scene_flags[123 /* 0xE 08 */]) {
          									  case 0:
/*<889>*/ 										switch (scene_flags[116 /* 0xF 10 */]) {
          										  case 0:
/*<898>*/ 											switch (scene_flags[122 /* 0xE 04 */]) {
          											  case 0:
/*<907>*/ 												scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
/*<914>*/ 												entrypoint_460_61();
          											  case 1:
/*<904>*/ 												scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<917>*/ 												entrypoint_460_58();
          											}
          										  case 1:
/*<890>*/ 											scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<908>*/ 											entrypoint_460_52();
          										}
          									  case 1:
/*<905>*/ 										scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<913>*/ 										entrypoint_460_59();
          									}
          								  case 1:
/*<906>*/ 									scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<912>*/ 									entrypoint_460_60();
          								}
          							  case 1:
/*<892>*/ 								scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<911>*/ 								entrypoint_460_53();
          							}
          						  case 1:
/*<893>*/ 							scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<910>*/ 							entrypoint_460_54();
          						}
          					  case 1:
/*<903>*/ 						scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<918>*/ 						entrypoint_460_57();
          					}
          				  case 1:
/*<902>*/ 					scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<915>*/ 					entrypoint_460_56();
          				}
          			  case 1:
/*<901>*/ 				scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<916>*/ 				entrypoint_460_55();
          			}
          		  case 1:
/*<888>*/ 			scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<909>*/ 			entrypoint_460_51();
          		}
          	}
          }

