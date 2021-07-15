          void entrypoint_150_00() {
          	start()
/*< 36>*/ 	set_camera(8, 0)
/*< 29>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 79>*/ 		scene_flags[25 'Skyloft: Silent Realm'][100 /* 0xD 10 */] = true;
/*< 28>*/ 		printf("We zijn er, Link! Laat maar\neens zien wat je kunt!")
/*< 31>*/ 		set_camera(10, 0)
/*< 30>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 32, 'param3': 40}
/*< 32>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*<  3>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 39>*/ 				printf("\x0E\x01\x12\x04\x00\x04Meester Link. U bent er\nhelaas niet in geslaagd de beproeving tot\neen goed einde te brengen.")
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
/*< 47>*/ 										printf("\x0E\x01\x12\x04\x00\x01Meester. Naast de <r<Hoeders>>, die u zullen\naanvallen, zijn er ook twee soorten\n<r<Wakers>>, die naar indringers speuren\n<r<op de grond en in de lucht>>.\nDe twee soorten vertonen elk ander\ngedrag, dus zorg dat u weet hoe u\nkunt voorkomen dat u door hen\nopgemerkt wordt.")
/*< 51>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 52>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 53>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_40:
/*< 40>*/ 										printf("Verzamel alle <y<tranen>> in het Rijk der\nStilte. Ik zal hier op uw terugkeer\nwachten.")
          										flw_57:
/*< 57>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 38, 'param3': 40}
/*< 38>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 44>*/ 										printf("De locaties van de <y<tranen >>die u al eens\nheeft gepakt, zullen worden <r<aangegeven\nop de kaart>>. Maak daar goed gebruik van.\n\nProbeer eerst de locaties van alle 15\ntranen te ontdekken. Daarmee verhoogt\nu uw kansen om de beproeving tot een\ngoed einde te brengen.")
/*< 50>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_40
          									}
          								  case 1:
/*< 46>*/ 									printf("Als ik u een tip mag geven: probeer\n<r<gemakkelijk bereikbare tranen>> te laten\nliggen tot wanneer u achtervolgd wordt.")
/*< 49>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_40
          								}
          							  case 1:
/*< 45>*/ 								printf("De kans dat u niet de uitverkoren held\nbent, neemt langzaam toe, \x0E\x01\x12\x04\x00\x01meester.\n\n\nDoor uw vele pogingen is uw concentratie\ngebroken. Uw prestaties lijden daaronder.\nIk raad u aan rust te nemen alvorens u\nhet weer probeert.")
/*< 48>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_40
          							}
          						  case 1:
/*< 10>*/ 							printf("<r<Twee soorten Wakers >>bewaken het rijk\ntegen indringers. Het is van groot belang\ndat u omzichtig handelt.\n\nZolang u hun lichten vermijdt, zullen de\n<r<vliegende Luchtwakers>> u niet zien.\n\n\nDe <r<Aardwakers>>, die <r<vlak boven de grond\nzweven>>, zullen u opmerken als u te dicht\nbij ze komt. <r<Blijf alert >>en houd afstand.")
/*< 12>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_40
          						}
          					  case 1:
/*< 27>*/ 						printf("De locaties van de <y<tranen>> die u heeft\ngevonden, worden <r<aangegeven op de\nkaart>>.\n\nHet zal makkelijker zijn om uw taak\nte volbrengen als u eerst probeert de\nlocaties van alle tranen vast te stellen.")
/*<  9>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_40
          					}
          				  case 1:
/*<  5>*/ 					printf("Zolang u er de kracht en de wil toe heeft,\n\x0E\x01\x12\x04\x00\x02meester, kunt u een beproeving proberen\nzo vaak u wilt.\n\nHet is een goede aanpak om de <y<tranen>>\ndie het makkelijkst te bereiken zijn,\n<r<wel te lokaliseren maar niet te pakken>>\ntotdat u ontdekt wordt.\nVerzamel de 15 <y<tranen>> en voltooi zo de\nbeproeving. Ik zal in de materiële wereld\nop uw terugkeer wachten.")
/*<  7>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_57
          				}
          			  case 1:
/*< 55>*/ 				printf("\x0E\x01\x12\x04\x00\x04Meester Link.")
/*< 54>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 				printf("Zodra uw <y<spirituele bloem>> 15 <y<tranen>>\nbevat, zal uw spirituele groei voltooid zijn\nen zal de godin u zegenen met een nieuwe\nkracht.\nIk zal in de materiële wereld op uw\nterugkeer wachten, \x0E\x01\x12\x04\x00\x02meester.")
/*<  4>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_57
          			}
          		  case 1:
/*< 35>*/ 			printf("\x0E\x01\x12\x04\x00\x04Meester Link.")
/*< 34>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 33, 'param3': 40}
/*< 33>*/ 			printf("U bent op de plaats van de laatste\nbeproeving, het <b<Rijk der Stilte van de\ngodin>>.")
/*< 37>*/ 			set_camera(9, 0)
/*< 25>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 13, 'param3': 40}
/*< 13>*/ 			give_item(17 0x11);
/*< 16>*/ 			set_camera(8, 0)
/*< 15>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 26, 'param3': 40}
/*< 26>*/ 			printf("Als u nog eenmaal de <y<spirituele bloem>>\nweet te vullen, zult u eindelijk worden\nerkend als de ware uitverkoren held.\n\nAlleen dan zal u gewezen worden waar de\ndeur is waarachter de <y+<Triforce>> zich\nbevindt. Ik wens u veel succes tijdens deze\nbeproeving, \x0E\x01\x12\x04\x00\x02meester.\nHeeft u nog vragen voordat u aan deze\nbeproeving begint?\n[1]Ja![2-]Nee.")
/*< 14>*/ 			switch (choice(2)) {
          			  case 0:
/*< 58>*/ 				printf("Waarover wilt u uitleg krijgen?\n\n\n[1]De spirituele bloem.[2]De Hoeders.[3]Het ontwaakwater.[4-]Niets.")
          				flw_59:
/*< 59>*/ 				switch (choice(4)) {
          				  case 0:
/*< 17>*/ 					printf("Ja, \x0E\x01\x12\x04\x00\x05meester.\n\n\n\nOm de <y<spirituele bloem>> te vullen moet u\nde <y<godinnentranen>> vinden en verzamelen.\nZij zijn verspreid over dit Rijk der Stilte.")
/*< 24>*/ 					set_camera(2, 0)
/*< 23>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 21, 'param3': 40}
/*< 21>*/ 					printf("\x0E\x01\x12\x04\x00\x02Meester, ziet u het lichtgevende object\nvoor u?")
/*< 20>*/ 					set_camera(3, 0)
/*< 19>*/ 					printf("Dat is een <y<godinnentraan>>. U dient er <r<15>>\nte verzamelen.")
/*< 22>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 71, 'param3': 6}
          					flw_71:
/*< 71>*/ 					set_camera(1, 0)
/*< 60>*/ 					printf("Waarover heeft u verder nog vragen?\n\n\n[1]De spirituele bloem.[2]De Hoeders.[3]Het ontwaakwater.[4-]Niets.")
          					goto flw_59
          				  case 1:
/*< 61>*/ 					printf("Ja, \x0E\x01\x12\x04\x00\x05meester.")
/*< 65>*/ 					set_camera(6, 0)
/*< 67>*/ 					printf("Zodra u een voet buiten de magische\ncirkel zet waarin u staat, zullen de\n<r<Hoeders>> van dit rijk ontwaken en op u\nafkomen, \x0E\x01\x12\x04\x00\x02meester.")
/*< 64>*/ 					set_camera(4, 0)
/*< 66>*/ 					printf("Een <r<Hoeder >>hoeft u slechts eenmaal te\ntreffen om uw ziel te breken. Als uw ziel\ngebroken wordt, kunt u de beproeving\nniet meer volbrengen.")
/*< 63>*/ 					set_camera(5, 0)
/*< 62>*/ 					printf("U moet de <y<tranen>> die verspreid zijn over\ndit gebied, vergaren en uw <y<spirituele\nbloem>> vullen zonder geraakt te worden\ndoor een aanval.")
          					goto flw_71
          				  case 2:
/*< 68>*/ 					printf("Ja, \x0E\x01\x12\x04\x00\x05meester.")
/*< 70>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf("De bijzondere vloeibare substantie die u in\nhet gebied aantreft, staat bekend als\n<r<ontwaakwater>>. Dit water heeft een aantal\nunieke eigenschappen.\nAls u ontwaakwater aanraakt, zullen de\n<r<Hoeders direct van uw aanwezigheid op\nde hoogte zijn>>.\n\nOveral in het landschap bevinden zich\npoelen van dit ontwaakwater. Ik raad u\naan om goed te kijken waar u loopt.")
          					goto flw_71
          				  case 3:
          					flw_78:
/*< 78>*/ 					printf("Begrepen, \x0E\x01\x12\x04\x00\x05meester.")
/*< 76>*/ 					set_camera(10, 0)
/*< 75>*/ 					printf("Ik zal in de materiële wereld op uw\nterugkeer wachten, \x0E\x01\x12\x04\x00\x02meester.")
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

