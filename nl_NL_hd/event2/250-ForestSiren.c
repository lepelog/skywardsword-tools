          void entrypoint_250_03() {
/*< 89>*/ 	start()
          	flw_67:
/*< 67>*/ 	set_camera(6, 0)
/*< 65>*/ 	printf(/* textboxtype: 2, unk: 2, line: 9 */ "Zodra u een voet buiten de magische\ncirkel zet waarin u staat, zullen de\n<color red<Hoeders>coloroff> van dit rijk ontwaken en op\nu af komen, <0x10012:0x00000002>meester.")
/*< 68>*/ 	set_camera(4, 0)
/*< 66>*/ 	printf(/* textboxtype: 4, unk: 2, line: 10 */ "Een <color red<Hoeder >coloroff>hoeft u slechts eenmaal te\ntreffen om uw ziel te breken. Als uw ziel\ngebroken wordt, kunt u de beproeving\nniet meer volbrengen.")
/*< 69>*/ 	set_camera(5, 0)
/*< 70>*/ 	printf(/* textboxtype: 2, unk: 4, line: 11 */ "U moet de <color yellow<tranen>coloroff> die verspreid zijn over\ndit gebied, vergaren en uw <color yellow<spirituele\nbloem>coloroff> vullen zonder geraakt te worden\ndoor een aanval.")
          	flw_74:
/*< 74>*/ 	set_camera(1, 0)
/*< 75>*/ 	printf(/* textboxtype: 4, unk: 2, line: 13 */ "Heb ik het u helder uitgelegd, <0x10012:0x00000002>meester?\nOf wilt u mijn uitleg nogmaals horen?\n[1-]Vertel nog maar eens.[2]Ik heb het begrepen.")
/*< 76>*/ 	switch (choice(2)) {
          	  case 0:
/*< 77>*/ 		printf(/* textboxtype: 2, unk: 4, line: 14 */ "Waarover wilt u uitleg krijgen?\n\n\n[1-]De spirituele bloem.[2-]De Hoeders.[3-]Het Rijk der Stilte.[4]Niets.")
/*< 92>*/ 		switch (choice(4)) {
          		  case 0:
/*< 84>*/ 			printf(/* textboxtype: 2, unk: 2, line: 15 */ "<0x10012:0x00000005>Begrepen, meester.")
/*< 87>*/ 			zone_temp_flags[10 /* 0x0 04 */] = true;
/*< 90>*/ 			entrypoint_250_02();
          		  case 1:
/*< 85>*/ 			printf(/* textboxtype: 2, unk: 2, line: 15 */ "<0x10012:0x00000005>Begrepen, meester.")
/*< 91>*/ 			entrypoint_250_03();
          		  case 2:
/*< 93>*/ 			printf(/* textboxtype: 2, unk: 2, line: 15 */ "<0x10012:0x00000005>Begrepen, meester.")
/*< 95>*/ 			set_camera(12, 0)
/*< 94>*/ 			printf(/* textboxtype: 4, unk: 2, line: 16 */ "Het <color blue<Rijk der Stilte>coloroff> is een <color red<spirituele\nwereld>coloroff>, slechts toegankelijk voor de door\nde godin uitverkoren held.\n\nUw ziel is uitgetreden uit uw lichaam\nen u bestaat in deze wereld enkel in een\nonstoffelijke vorm.\n\nDe taken die u hier moet volbrengen,\ntesten uw geestelijke volharding.\nConcentreer u op de beproeving\nen breng die tot een goed einde.")
/*< 97>*/ 			entrypoint_250_04();
          		  case 3:
          			flw_83:
/*< 83>*/ 			set_camera(10, 0)
/*< 78>*/ 			printf(/* textboxtype: 2, unk: 2, line: 12 */ "<0x10012:0x00000005>Begrepen, meester.\n\n\n\nIk zal in de materiële wereld op uw\nterugkeer wachten.\n\n\nMoge de godin over u waken, <0x10012:0x00000001>meester.")
/*< 79>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 86, 'param3': 40}
/*< 86>*/ 			zone_temp_flags[10 /* 0x0 04 */] = false;
/*< 80>*/ 			scene_flags[22 'Faron: Silent Realm'][100 /* 0xD 10 */] = true;
/*< 81>*/ 			temp_flags[1 /* 0x1 02 */] = true;
/*< 82>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
          		goto flw_83
          	}
          }

          void entrypoint_250_04() {
/*< 96>*/ 	start()
          	goto flw_74
          }

          void entrypoint_250_00() {
          	start()
/*< 23>*/ 	set_camera(8, 0)
/*< 15>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 4, unk: 2, line: 28 */ "We zijn er, <heroname>! Laat maar\neens zien wat je kunt!")
/*< 18>*/ 		set_camera(10, 0)
/*< 17>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 19, 'param3': 40}
/*< 19>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  2>*/ 		switch (scene_flags[100 /* 0xD 10 */]) {
          		  case 0:
/*< 26>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 38>*/ 				printf(/* textboxtype: 2, unk: 2, line: 18 */ "<0x10012:0x00000004>Meester <heroname>. U bent er\nhelaas niet in geslaagd de beproeving tot\neen goed einde te brengen.")
/*< 55>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 29, 'param3': 40}
/*< 29>*/ 				switch (temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*< 31>*/ 					switch (temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*< 34>*/ 						switch (temp_flags[4 /* 0x1 10 */]) {
          						  case 0:
/*< 40>*/ 							switch (temp_flags[5 /* 0x1 20 */]) {
          							  case 0:
/*< 41>*/ 								switch (temp_flags[6 /* 0x1 40 */]) {
          								  case 0:
/*< 42>*/ 									switch (temp_flags[7 /* 0x1 80 */]) {
          									  case 0:
/*< 46>*/ 										printf(/* textboxtype: 2, unk: 4, line: 26 */ "<0x10012:0x00000001>Meester. Naast de <color red<Hoeders>coloroff>, die u zullen\naanvallen, zijn er ook twee soorten\n<color red<Wakers>coloroff>, die naar indringers speuren\n<color red<op de grond en in de lucht>coloroff>.\nDe twee soorten vertonen elk ander\ngedrag, dus zorg dat u weet hoe u\nkunt voorkomen dat u door hen\nopgemerkt wordt.")
/*< 50>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 51>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 52>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_39:
/*< 39>*/ 										printf(/* textboxtype: 4, unk: 2, line: 19 */ "Verzamel alle <color yellow<tranen>coloroff> in het Rijk der\nStilte. Ik zal hier op uw terugkeer\nwachten.")
          										flw_56:
/*< 56>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 37, 'param3': 40}
/*< 37>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 43>*/ 										printf(/* textboxtype: 4, unk: 2, line: 25 */ "De locaties van de <color yellow<tranen >coloroff>die u al eens\nheeft gepakt, zullen worden <color red<aangegeven\nop de kaart>coloroff>. Maak daar goed gebruik van.\n\nProbeer eerst de locaties van alle 15\ntranen te ontdekken. Daarmee verhoogt\nu uw kansen om de beproeving tot een\ngoed einde te brengen.")
/*< 49>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_39
          									}
          								  case 1:
/*< 45>*/ 									printf(/* textboxtype: 2, unk: 2, line: 24 */ "Als ik u een tip mag geven: probeer\n<color red<gemakkelijk bereikbare tranen>coloroff> te laten\nliggen tot wanneer u achtervolgd wordt.")
/*< 48>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_39
          								}
          							  case 1:
/*< 44>*/ 								printf(/* textboxtype: 2, unk: 4, line: 23 */ "De kans dat u niet de uitverkoren held\nbent, neemt langzaam toe, <0x10012:0x00000001>meester.\n\n\nDoor uw vele pogingen is uw concentratie\ngebroken. Uw prestaties lijden daaronder.\nIk raad u aan rust te nemen alvorens u\nhet weer probeert.")
/*< 47>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_39
          							}
          						  case 1:
/*< 33>*/ 							printf(/* textboxtype: 4, unk: 2, line: 22 */ "<color red<Twee soorten Wakers >coloroff>bewaken het rijk\ntegen indringers. Het is van groot belang\ndat u omzichtig handelt.\n\nZolang u hun lichten vermijdt, zullen de\n<color red<vliegende Luchtwakers>coloroff> u niet zien.\n\n\nDe <color red<Aardwakers>coloroff>, die <color red<vlak boven de grond\nzweven>coloroff>, zullen u opmerken als u te dicht\nbij ze komt. <color red<Blijf alert >coloroff>en houd afstand.")
/*< 35>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_39
          						}
          					  case 1:
/*< 36>*/ 						printf(/* textboxtype: 2, unk: 2, line: 21 */ "De locaties van de <color yellow<tranen>coloroff> die u heeft\ngevonden, worden <color red<aangegeven op de\nkaart>coloroff>.\n\nHet zal makkelijker zijn om uw taak\nte volbrengen als u eerst probeert de\nlocaties van alle 15 tranen vast te stellen.")
/*< 32>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_39
          					}
          				  case 1:
/*< 28>*/ 					printf(/* textboxtype: 2, unk: 4, line: 20 */ "Zolang u er de kracht en de wil toe heeft,\n<0x10012:0x00000002>meester, kunt u een beproeving proberen\nzo vaak u wilt.\n\nHet is een goede aanpak om de <color yellow<tranen>coloroff>\ndie het makkelijkst te bereiken zijn,\n<color red<wel te lokaliseren maar niet te pakken>coloroff>\ntotdat u ontdekt wordt.\nVerzamel de 15 <color yellow<tranen>coloroff> en voltooi zo de\nbeproeving. Ik zal in de materiële wereld\nop uw terugkeer wachten.")
/*< 30>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_56
          				}
          			  case 1:
/*< 53>*/ 				printf(/* textboxtype: 0, unk: 2, line: 1 */ "<0x10012:0x00000004>Meester <heroname>.")
/*< 54>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 25, 'param3': 40}
/*< 25>*/ 				printf(/* textboxtype: 2, unk: 4, line: 17 */ "Zodra uw <color yellow<spirituele bloem>coloroff> 15 <color red<tranen>coloroff>\nbevat, zal uw spirituele groei voltooid\nzijn en zal de godin u zegenen met\neen nieuwe kracht.\nIk zal in de materiële wereld op uw\nterugkeer wachten, <0x10012:0x00000002>meester.")
/*< 27>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_56
          			}
          		  case 1:
/*<  1>*/ 			printf(/* textboxtype: 0, unk: 2, line: 1 */ "<0x10012:0x00000004>Meester <heroname>.")
/*< 21>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 22, 'param3': 40}
/*< 22>*/ 			printf(/* textboxtype: 2, unk: 4, line: 2 */ "Zoals verwacht kan ik u niet volgen naar\ndit gebied, want dit gebied bestaat alleen\n<0x10012:0x00000002>voor uw geest.\n\nU bevindt zich in een van de <color blue<Rijken der\nStilte>coloroff>. Deze rijken zijn domeinen van de\nziel, open slechts voor de door de godin\nuitverkoren held.\nIn dit rijk, <color blue<Farores Rijk der Stilte>coloroff>, zullen\nde grenzen van uw <color red<moed>coloroff> getest worden.\n\n\n<0x10012:0x00000001>Uw ziel heeft zich tijdelijk losgemaakt van\nuw lichaam, opdat u deze beproeving kunt\nondergaan.\n\nOm een van de vlammen te bereiken die\nuw zwaard zullen stalen, <0x10012:0x00000002> moet u zich aan\ndeze beproeving onderwerpen en\nspirituele groei doormaken.")
/*< 10>*/ 			set_camera(9, 0)
/*< 20>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 24, 'param3': 40}
/*< 24>*/ 			give_item(17 0x11);
/*<  5>*/ 			set_camera(8, 0)
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 3, 'param3': 40}
/*<  3>*/ 			printf(/* textboxtype: 4, unk: 2, line: 4 */ "Dat is uw <color yellow<spirituele bloem>coloroff>.\n\n\n\nAls deze bloem gevuld is, is uw spirituele\ngroei voltooid en heeft u de beproeving\ndoorstaan.\n\nDe godin zal u dan zegenen met een\n<color red<nieuwe kracht>coloroff>.")
          			flw_6:
/*<  6>*/ 			printf(/* textboxtype: 2, unk: 4, line: 5 */ "Om de <color yellow<spirituele bloem>coloroff> te vullen moet u\nde <color yellow<tranen van Farore>coloroff> zoeken. Daarvan\nzijn er vele verspreid over dit vreemde\ngebied.")
/*<  7>*/ 			set_camera(2, 0)
/*<  8>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 11, 'param3': 40}
/*< 11>*/ 			printf(/* textboxtype: 2, unk: 2, line: 6 */ "<0x10012:0x00000002>Meester, ziet u het lichtgevende object\nvoor u?")
/*< 12>*/ 			set_camera(3, 0)
/*< 13>*/ 			printf(/* textboxtype: 4, unk: 2, line: 7 */ "Dat is een <color yellow<traan van Farore>coloroff>. U dient er\n<color red<15>coloroff> te verzamelen.")
/*<  9>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 14, 'param3': 40}
/*< 14>*/ 			wait_frames(15)
/*< 71>*/ 			switch (zone_temp_flags[10 /* 0x0 04 */]) {
          			  case 0:
          				goto flw_74
          			  case 1:
/*< 73>*/ 				set_camera(1, 0)
/*< 72>*/ 				printf(/* textboxtype: 2, unk: 4, line: 8 */ "Deze taak schijnt u wellicht eenvoudig\ntoe, maar vergis u niet. Niet voor niets\nspreek ik over een <color red<beproeving>coloroff>.")
          				goto flw_67
          			}
          		}
          	}
          }

          void entrypoint_250_01() {
/*< 57>*/ 	start()
/*< 58>*/ 	printf(/* textboxtype: 0, unk: 2, line: 1 */ "<0x10012:0x00000004>Meester <heroname>.")
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 61, 'param3': 40}
/*< 61>*/ 	wait_frames(30)
/*< 62>*/ 	set_camera(11, 0)
/*< 60>*/ 	printf(/* textboxtype: 2, unk: 2, line: 27 */ "De bijzondere vloeibare substantie die u in\nhet gebied aantreft, staat bekend als\n<color red<ontwaakwater>coloroff>. Dit water heeft een aantal\nunieke eigenschappen.\nAls u ontwaakwater aanraakt, zullen de\n<color red<Hoeders direct van uw aanwezigheid op\nde hoogte zijn>coloroff>.\n\nOveral in het landschap bevinden zich\npoelen van dit ontwaakwater. Ik raad u\naan om goed te kijken waar u loopt.")
/*< 64>*/ 	scene_flags[22 'Faron: Silent Realm'][80 /* 0xB 01 */] = true;
/*< 63>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_250_02() {
/*< 88>*/ 	start()
          	goto flw_6
          }

