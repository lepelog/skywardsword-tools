          void entrypoint_150_00() {
          	start()
/*< 36>*/ 	set_camera(8, 0)
/*< 29>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 79>*/ 		scene_flags[25 'Skyloft: Silent Realm'][100 /* 0xD 10 */] = true;
/*< 28>*/ 		printf(/* textboxtype: 2, unk: 4, line: 26 */ "We zijn er, <heroname>! Laat maar\neens zien wat je kunt!")
/*< 31>*/ 		set_camera(10, 0)
/*< 30>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 32, 'param3': 40}
/*< 32>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*<  3>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 39>*/ 				printf(/* textboxtype: 2, unk: 4, line: 17 */ "<0x10012:0x00000004>Meester <heroname>. U bent er\nhelaas niet in geslaagd de beproeving tot\neen goed einde te brengen.")
/*< 56>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 6, 'param3': 40}
/*<  6>*/ 				switch (temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*<  8>*/ 					switch (temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*< 11>*/ 						switch (temp_flags[4 /* 0x1 10 */]) {
          						  case 0:
/*< 41>*/ 							switch (temp_flags[5 /* 0x1 20 */]) {
          							  case 0:
/*< 42>*/ 								switch (temp_flags[6 /* 0x1 40 */]) {
          								  case 0:
/*< 43>*/ 									switch (temp_flags[7 /* 0x1 80 */]) {
          									  case 0:
/*< 47>*/ 										printf(/* textboxtype: 4, unk: 2, line: 25 */ "<0x10012:0x00000001>Meester. Naast de <color red<Hoeders>coloroff>, die u zullen\naanvallen, zijn er ook twee soorten\n<color red<Wakers>coloroff>, die naar indringers speuren\n<color red<op de grond en in de lucht>coloroff>.\nDe twee soorten vertonen elk ander\ngedrag, dus zorg dat u weet hoe u\nkunt voorkomen dat u door hen\nopgemerkt wordt.")
/*< 51>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 52>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 53>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_40:
/*< 40>*/ 										printf(/* textboxtype: 2, unk: 2, line: 18 */ "Verzamel alle <color yellow<tranen>coloroff> in het Rijk der\nStilte. Ik zal hier op uw terugkeer\nwachten.")
          										flw_57:
/*< 57>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 38, 'param3': 40}
/*< 38>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 44>*/ 										printf(/* textboxtype: 2, unk: 2, line: 24 */ "De locaties van de <color yellow<tranen >coloroff>die u al eens\nheeft gepakt, zullen worden <color red<aangegeven\nop de kaart>coloroff>. Maak daar goed gebruik van.\n\nProbeer eerst de locaties van alle 15\ntranen te ontdekken. Daarmee verhoogt\nu uw kansen om de beproeving tot een\ngoed einde te brengen.")
/*< 50>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_40
          									}
          								  case 1:
/*< 46>*/ 									printf(/* textboxtype: 2, unk: 0, line: 23 */ "Als ik u een tip mag geven: probeer\n<color red<gemakkelijk bereikbare tranen>coloroff> te laten\nliggen tot wanneer u achtervolgd wordt.")
/*< 49>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_40
          								}
          							  case 1:
/*< 45>*/ 								printf(/* textboxtype: 4, unk: 2, line: 22 */ "De kans dat u niet de uitverkoren held\nbent, neemt langzaam toe, <0x10012:0x00000001>meester.\n\n\nDoor uw vele pogingen is uw concentratie\ngebroken. Uw prestaties lijden daaronder.\nIk raad u aan rust te nemen alvorens u\nhet weer probeert.")
/*< 48>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_40
          							}
          						  case 1:
/*< 10>*/ 							printf(/* textboxtype: 2, unk: 2, line: 21 */ "<color red<Twee soorten Wakers >coloroff>bewaken het rijk\ntegen indringers. Het is van groot belang\ndat u omzichtig handelt.\n\nZolang u hun lichten vermijdt, zullen de\n<color red<vliegende Luchtwakers>coloroff> u niet zien.\n\n\nDe <color red<Aardwakers>coloroff>, die <color red<vlak boven de grond\nzweven>coloroff>, zullen u opmerken als u te dicht\nbij ze komt. <color red<Blijf alert >coloroff>en houd afstand.")
/*< 12>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_40
          						}
          					  case 1:
/*< 27>*/ 						printf(/* textboxtype: 2, unk: 4, line: 20 */ "De locaties van de <color yellow<tranen>coloroff> die u heeft\ngevonden, worden <color red<aangegeven op de\nkaart>coloroff>.\n\nHet zal makkelijker zijn om uw taak\nte volbrengen als u eerst probeert de\nlocaties van alle tranen vast te stellen.")
/*<  9>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_40
          					}
          				  case 1:
/*<  5>*/ 					printf(/* textboxtype: 4, unk: 2, line: 19 */ "Zolang u er de kracht en de wil toe heeft,\n<0x10012:0x00000002>meester, kunt u een beproeving proberen\nzo vaak u wilt.\n\nHet is een goede aanpak om de <color yellow<tranen>coloroff>\ndie het makkelijkst te bereiken zijn,\n<color red<wel te lokaliseren maar niet te pakken>coloroff>\ntotdat u ontdekt wordt.\nVerzamel de 15 <color yellow<tranen>coloroff> en voltooi zo de\nbeproeving. Ik zal in de materiële wereld\nop uw terugkeer wachten.")
/*<  7>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_57
          				}
          			  case 1:
/*< 55>*/ 				printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004>Meester <heroname>.")
/*< 54>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 				printf(/* textboxtype: 4, unk: 2, line: 16 */ "Zodra uw <color yellow<spirituele bloem>coloroff> 15 <color yellow<tranen>coloroff>\nbevat, zal uw spirituele groei voltooid zijn\nen zal de godin u zegenen met een nieuwe\nkracht.\nIk zal in de materiële wereld op uw\nterugkeer wachten, <0x10012:0x00000002>meester.")
/*<  4>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_57
          			}
          		  case 1:
/*< 35>*/ 			printf(/* textboxtype: 2, unk: 2, line: 0 */ "<0x10012:0x00000004>Meester <heroname>.")
/*< 34>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 33, 'param3': 40}
/*< 33>*/ 			printf(/* textboxtype: 4, unk: 2, line: 1 */ "U bent op de plaats van de laatste\nbeproeving, het <color blue<Rijk der Stilte van de\ngodin>coloroff>.")
/*< 37>*/ 			set_camera(9, 0)
/*< 25>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 13, 'param3': 40}
/*< 13>*/ 			give_item(17 0x11);
/*< 16>*/ 			set_camera(8, 0)
/*< 15>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 26, 'param3': 40}
/*< 26>*/ 			printf(/* textboxtype: 2, unk: 4, line: 2 */ "Als u nog eenmaal de <color yellow<spirituele bloem>coloroff>\nweet te vullen, zult u eindelijk worden\nerkend als de ware uitverkoren held.\n\nAlleen dan zal u gewezen worden waar de\ndeur is waarachter de <color yellow white<Triforce>coloroff> zich\nbevindt. Ik wens u veel succes tijdens deze\nbeproeving, <0x10012:0x00000002>meester.\nHeeft u nog vragen voordat u aan deze\nbeproeving begint?\n[1-]Ja![2]Nee.")
/*< 14>*/ 			switch (choice(2)) {
          			  case 0:
/*< 58>*/ 				printf(/* textboxtype: 2, unk: 2, line: 3 */ "Waarover wilt u uitleg krijgen?\n\n\n[1-]De spirituele bloem.[2-]De Hoeders.[3-]Het ontwaakwater.[4]Niets.")
          				flw_59:
/*< 59>*/ 				switch (choice(4)) {
          				  case 0:
/*< 17>*/ 					printf(/* textboxtype: 4, unk: 2, line: 7 */ "Ja, <0x10012:0x00000005>meester.\n\n\n\nOm de <color yellow<spirituele bloem>coloroff> te vullen moet u\nde <color yellow<godinnentranen>coloroff> vinden en verzamelen.\nZij zijn verspreid over dit Rijk der Stilte.")
/*< 24>*/ 					set_camera(2, 0)
/*< 23>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 21, 'param3': 40}
/*< 21>*/ 					printf(/* textboxtype: 2, unk: 4, line: 8 */ "<0x10012:0x00000002>Meester, ziet u het lichtgevende object\nvoor u?")
/*< 20>*/ 					set_camera(3, 0)
/*< 19>*/ 					printf(/* textboxtype: 2, unk: 2, line: 9 */ "Dat is een <color yellow<godinnentraan>coloroff>. U dient er <color red<15>coloroff>\nte verzamelen.")
/*< 22>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 					wait_frames(15)
          					flw_71:
/*< 71>*/ 					set_camera(1, 0)
/*< 60>*/ 					printf(/* textboxtype: 4, unk: 2, line: 4 */ "Waarover heeft u verder nog vragen?\n\n\n[1-]De spirituele bloem.[2-]De Hoeders.[3-]Het ontwaakwater.[4]Niets.")
          					goto flw_59
          				  case 1:
/*< 61>*/ 					printf(/* textboxtype: 4, unk: 2, line: 10 */ "Ja, <0x10012:0x00000005>meester.")
/*< 65>*/ 					set_camera(6, 0)
/*< 67>*/ 					printf(/* textboxtype: 2, unk: 4, line: 11 */ "Zodra u een voet buiten de magische\ncirkel zet waarin u staat, zullen de\n<color red<Hoeders>coloroff> van dit rijk ontwaken en op u\nafkomen, <0x10012:0x00000002>meester.")
/*< 64>*/ 					set_camera(4, 0)
/*< 66>*/ 					printf(/* textboxtype: 2, unk: 2, line: 12 */ "Een <color red<Hoeder >coloroff>hoeft u slechts eenmaal te\ntreffen om uw ziel te breken. Als uw ziel\ngebroken wordt, kunt u de beproeving\nniet meer volbrengen.")
/*< 63>*/ 					set_camera(5, 0)
/*< 62>*/ 					printf(/* textboxtype: 4, unk: 2, line: 13 */ "U moet de <color yellow<tranen>coloroff> die verspreid zijn over\ndit gebied, vergaren en uw <color yellow<spirituele\nbloem>coloroff> vullen zonder geraakt te worden\ndoor een aanval.")
          					goto flw_71
          				  case 2:
/*< 68>*/ 					printf(/* textboxtype: 4, unk: 2, line: 10 */ "Ja, <0x10012:0x00000005>meester.")
/*< 70>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf(/* textboxtype: 2, unk: 4, line: 14 */ "De bijzondere vloeibare substantie die u in\nhet gebied aantreft, staat bekend als\n<color red<ontwaakwater>coloroff>. Dit water heeft een aantal\nunieke eigenschappen.\nAls u ontwaakwater aanraakt, zullen de\n<color red<Hoeders direct van uw aanwezigheid op\nde hoogte zijn>coloroff>.\n\nOveral in het landschap bevinden zich\npoelen van dit ontwaakwater. Ik raad u\naan om goed te kijken waar u loopt.")
          					goto flw_71
          				  case 3:
          					flw_78:
/*< 78>*/ 					printf(/* textboxtype: 2, unk: 4, line: 5 */ "Begrepen, <0x10012:0x00000005>meester.")
/*< 76>*/ 					set_camera(10, 0)
/*< 75>*/ 					printf(/* textboxtype: 2, unk: 2, line: 6 */ "Ik zal in de materiële wereld op uw\nterugkeer wachten, <0x10012:0x00000002>meester.")
/*< 77>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 74, 'param3': 40}
/*< 74>*/ 					scene_flags[25 'Skyloft: Silent Realm'][100 /* 0xD 10 */] = true;
/*< 80>*/ 					scene_flags[25 'Skyloft: Silent Realm'][101 /* 0xD 20 */] = true;
/*< 73>*/ 					temp_flags[1 /* 0x1 02 */] = true;
/*< 72>*/ 					{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          				}
          			  case 1:
          				goto flw_78
          			}
          		}
          	}
          }

