          void entrypoint_450_00() {
          	start()
/*< 16>*/ 	set_camera(8, 0)
/*<  9>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 10>*/ 		printf(/* textboxtype: 2, unk: 4, line: 26 */ "We zijn er, <heroname>! Laat maar\neens zien wat je kunt!")
/*< 12>*/ 		set_camera(10, 0)
/*< 11>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 13, 'param3': 40}
/*< 13>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*< 19>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 31>*/ 				printf(/* textboxtype: 2, unk: 4, line: 17 */ "<0x10012:0x00000004>Meester <heroname>. U bent er\nhelaas niet in geslaagd de beproeving tot\neen goed einde te brengen.")
/*< 48>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 22, 'param3': 40}
/*< 22>*/ 				switch (temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*< 24>*/ 					switch (temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*< 27>*/ 						switch (temp_flags[4 /* 0x1 10 */]) {
          						  case 0:
/*< 33>*/ 							switch (temp_flags[5 /* 0x1 20 */]) {
          							  case 0:
/*< 34>*/ 								switch (temp_flags[6 /* 0x1 40 */]) {
          								  case 0:
/*< 35>*/ 									switch (temp_flags[7 /* 0x1 80 */]) {
          									  case 0:
/*< 39>*/ 										printf(/* textboxtype: 4, unk: 2, line: 25 */ "<0x10012:0x00000001>Meester. Naast de <color red<Hoeders>coloroff>, die u zullen\naanvallen, zijn er ook twee soorten\n<color red<Wakers>coloroff>, die naar indringers speuren\n<color red<op de grond en in de lucht>coloroff>.\nDe twee soorten vertonen elk ander\ngedrag, dus zorg dat u weet hoe u\nkunt voorkomen dat u door hen\nopgemerkt wordt.")
/*< 43>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 44>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 45>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_32:
/*< 32>*/ 										printf(/* textboxtype: 2, unk: 2, line: 18 */ "Verzamel alle <color yellow<tranen>coloroff> in het Rijk der Stilte.\nIk zal hier op uw terugkeer wachten.")
          										flw_49:
/*< 49>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 30, 'param3': 40}
/*< 30>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 36>*/ 										printf(/* textboxtype: 2, unk: 2, line: 24 */ "De locaties van de <color yellow<tranen >coloroff>die u al eens\nheeft gepakt, zullen worden <color red<aangegeven\nop de kaart>coloroff>. Maak daar goed gebruik van.\n\nProbeer eerst de locaties van alle 15 tranen\nte ontdekken. Daarmee verhoogt u uw\nkansen om de beproeving tot een goed\neinde te brengen.")
/*< 42>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_32
          									}
          								  case 1:
/*< 38>*/ 									printf(/* textboxtype: 2, unk: 0, line: 23 */ "Als ik u een tip mag geven: probeer\n<color red<gemakkelijk bereikbare tranen>coloroff> te laten\nliggen tot wanneer u achtervolgd wordt.")
/*< 41>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_32
          								}
          							  case 1:
/*< 37>*/ 								printf(/* textboxtype: 4, unk: 2, line: 22 */ "De kans dat u niet de uitverkoren held\nbent, neemt langzaam toe, <0x10012:0x00000001>meester.\n\n\nDoor uw vele pogingen is uw concentratie\ngebroken. Uw prestaties lijden daaronder.\nIk raad u aan rust te nemen alvorens u het\nweer probeert.")
/*< 40>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_32
          							}
          						  case 1:
/*< 26>*/ 							printf(/* textboxtype: 2, unk: 2, line: 21 */ "<color red<Twee soorten Wakers >coloroff>bewaken het rijk\ntegen indringers. Het is van groot belang\ndat u omzichtig handelt.\n\nZolang u hun lichten vermijdt, zullen de\n<color red<vliegende Luchtwakers>coloroff> u niet zien.\n\n\nDe <color red<Aardwakers>coloroff>, die <color red<vlak boven de grond\nzweven>coloroff>, zullen u opmerken als u te dicht\nbij ze komt. <color red<Blijf alert >coloroff>en houd afstand.")
/*< 28>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_32
          						}
          					  case 1:
/*< 29>*/ 						printf(/* textboxtype: 2, unk: 4, line: 20 */ "De locaties van de <color yellow<tranen>coloroff> die u heeft\ngevonden, worden <color red<aangegeven op de\nkaart>coloroff>.\n\nHet zal makkelijker zijn om uw taak\nte volbrengen als u eerst probeert de\nlocaties van alle 15 tranen vast te stellen.")
/*< 25>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_32
          					}
          				  case 1:
/*< 21>*/ 					printf(/* textboxtype: 4, unk: 2, line: 19 */ "Zolang u er de kracht en de wil toe heeft,\n<0x10012:0x00000002>meester, kunt u een beproeving proberen\nzo vaak u wilt.\n\nHet is een goede aanpak om de <color yellow<tranen>coloroff>\ndie het makkelijkst te bereiken zijn,\n<color red<wel te lokaliseren maar niet te pakken>coloroff>\ntotdat u ontdekt wordt.\nVerzamel de 15 <color yellow<tranen>coloroff> en voltooi zo de\nbeproeving. Ik zal in de materiële wereld\nop uw terugkeer wachten.")
/*< 23>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_49
          				}
          			  case 1:
/*< 47>*/ 				printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004>Meester <heroname>.")
/*< 46>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 				printf(/* textboxtype: 4, unk: 2, line: 16 */ "Zodra uw <color yellow<spirituele bloem>coloroff> 15 <color red<tranen>coloroff>\nbevat, zal uw spirituele groei voltooid zijn\nen zal de godin u zegenen met een nieuwe\nkracht.\nIk zal in de materiële wereld op uw\nterugkeer wachten, <0x10012:0x00000002>meester.")
/*< 20>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_49
          			}
          		  case 1:
/*<  7>*/ 			printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004>Meester <heroname>.")
/*< 15>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 14, 'param3': 40}
/*< 14>*/ 			printf(/* textboxtype: 4, unk: 2, line: 1 */ "Zoals u weet, kan ik u niet volgen naar dit\ngebied. Deze beproeving bestaat alleen\n<0x10012:0x00000002>voor uw geest, zoals het in ieder <color blue<Rijk der\nStilte>coloroff> vergaat.\nHier in <color blue<Nayru's Rijk der Stilte>coloroff> zal uw\n<color red<wijsheid>coloroff> getest worden, <0x10012:0x00000002>meester.\n\n\nU moet deze beproeving met goed gevolg\nafleggen om een van de vlammen te\nvinden die uw zwaard zullen stalen.")
/*< 17>*/ 			set_camera(9, 0)
/*<  6>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 			give_item(17 0x11);
/*<  5>*/ 			set_camera(8, 0)
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 8, 'param3': 40}
/*<  8>*/ 			printf(/* textboxtype: 2, unk: 4, line: 2 */ "Zodra uw spirituele bloem volgroeid is, zal\nuw spirituele groei voltooid zijn en zal de\ngodin u zegenen met een <color red<nieuwe kracht>coloroff>.\n\nHeeft u nog vragen?\n[1-]Ja![2]Nee.")
/*<  3>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				printf(/* textboxtype: 2, unk: 2, line: 3 */ "Waarover wilt u uitleg krijgen?\n\n\n[1-]De spirituele bloem.[2-]De Hoeders.[3-]Het ontwaakwater.[4]Niets.")
          				flw_51:
/*< 51>*/ 				switch (choice(4)) {
          				  case 0:
/*< 58>*/ 					printf(/* textboxtype: 4, unk: 2, line: 7 */ "Ja, <0x10012:0x00000005>meester.\n\n\n\nOm de <color yellow<spirituele bloem>coloroff> te vullen moet u\nde <color yellow<tranen van Nayru>coloroff> vinden en\nverzamelen. Zij zijn verspreid over dit\nRijk der Stilte.")
/*< 52>*/ 					set_camera(2, 0)
/*< 53>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 55, 'param3': 40}
/*< 55>*/ 					printf(/* textboxtype: 2, unk: 4, line: 8 */ "<0x10012:0x00000002>Meester, ziet u het lichtgevende object\nvoor u?")
/*< 56>*/ 					set_camera(3, 0)
/*< 59>*/ 					printf(/* textboxtype: 2, unk: 2, line: 9 */ "Dat is een <color yellow<traan van Nayru>coloroff>. U dient er <color red<15>coloroff>\nte verzamelen.")
/*< 54>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 57, 'param3': 40}
/*< 57>*/ 					wait_frames(15)
          					flw_77:
/*< 77>*/ 					set_camera(1, 0)
/*< 78>*/ 					printf(/* textboxtype: 4, unk: 2, line: 4 */ "Waarover heeft u verder nog vragen?\n\n\n[1-]De spirituele bloem.[2-]De Hoeders.[3-]Het ontwaakwater.[4]Niets.")
          					goto flw_51
          				  case 1:
/*< 60>*/ 					printf(/* textboxtype: 4, unk: 2, line: 10 */ "Ja, <0x10012:0x00000005>meester.")
/*< 61>*/ 					set_camera(6, 0)
/*< 64>*/ 					printf(/* textboxtype: 2, unk: 4, line: 11 */ "Zodra u een voet buiten de magische cirkel\nzet waarin u staat, zullen de <color red<Hoeders>coloroff> van\ndit rijk ontwaken en op u af komen,\n<0x10012:0x00000002>meester.")
/*< 62>*/ 					set_camera(4, 0)
/*< 65>*/ 					printf(/* textboxtype: 2, unk: 2, line: 12 */ "Een <color red<Hoeder >coloroff>hoeft u slechts eenmaal te\ntreffen om uw ziel te breken. Als uw ziel\ngebroken wordt, kunt u de beproeving niet\nmeer volbrengen.")
/*< 63>*/ 					set_camera(5, 0)
/*< 66>*/ 					printf(/* textboxtype: 0, unk: 4, line: 14 */ "U moet de <color yellow<tranen>coloroff> die verspreid zijn over\ndit gebied, vergaren en uw <color yellow<spirituele\nbloem>coloroff> vullen zonder geraakt te worden\ndoor een aanval.")
          					goto flw_77
          				  case 2:
/*< 67>*/ 					printf(/* textboxtype: 4, unk: 2, line: 10 */ "Ja, <0x10012:0x00000005>meester.")
/*< 68>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf(/* textboxtype: 4, unk: 2, line: 13 */ "De bijzondere vloeibare substantie die u in\nhet gebied aantreft, staat bekend als\n<color red<ontwaakwater>coloroff>. Dit water heeft een aantal\nunieke eigenschappen.\nAls u ontwaakwater aanraakt, zullen de\n<color red<Hoeders direct van uw aanwezigheid op\nde hoogte zijn>coloroff>.\n\nOveral in het landschap bevinden zich\npoelen van dit ontwaakwater. Ik raad u\naan om goed te kijken waar u loopt.")
          					goto flw_77
          				  case 3:
          					flw_70:
/*< 70>*/ 					printf(/* textboxtype: 2, unk: 4, line: 5 */ "Ja, <0x10012:0x00000005>meester.")
/*< 71>*/ 					set_camera(10, 0)
/*< 72>*/ 					printf(/* textboxtype: 2, unk: 2, line: 6 */ "Ik zal in de materiële wereld op uw\nterugkeer wachten, <0x10012:0x00000002>meester.")
/*< 73>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 75, 'param3': 40}
/*< 75>*/ 					scene_flags[24 'Lanayru: Silent Realm'][101 /* 0xD 20 */] = true;
/*< 76>*/ 					temp_flags[1 /* 0x1 02 */] = true;
/*< 74>*/ 					{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          				}
          			  case 1:
          				goto flw_70
          			}
          		}
          	}
          }

