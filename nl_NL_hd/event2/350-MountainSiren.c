          void entrypoint_350_00() {
          	start()
/*< 17>*/ 	set_camera(8, 0)
/*< 13>*/ 	switch (story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */]) {
          	  case 0:
/*< 12>*/ 		printf("We zijn er, Link! Laat maar\neens zien wat je kunt!")
/*< 15>*/ 		set_camera(10, 0)
/*< 14>*/ 		{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 16, 'param3': 40}
/*< 16>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<  1>*/ 		switch (scene_flags[102 /* 0xD 40 */]) {
          		  case 0:
/*< 19>*/ 			switch (temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 31>*/ 				printf("\x0E\x01\x12\x04\x00\x04Meester Link. U bent er\nhelaas niet in geslaagd de beproeving tot\neen goed einde te brengen.")
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
/*< 39>*/ 										printf("\x0E\x01\x12\x04\x00\x01Meester. Naast de <r<Hoeders>>, die u zullen\naanvallen, zijn er ook twee soorten\n<r<Wakers>>, die naar indringers speuren\n<r<op de grond en in de lucht>>.\nDe twee soorten vertonen elk ander\ngedrag, dus zorg dat u weet hoe u\nkunt voorkomen dat u door hen\nopgemerkt wordt.")
/*< 43>*/ 										temp_flags[5 /* 0x1 20 */] = false;
/*< 44>*/ 										temp_flags[6 /* 0x1 40 */] = false;
/*< 45>*/ 										temp_flags[7 /* 0x1 80 */] = false;
          										flw_32:
/*< 32>*/ 										printf("Verzamel alle <y<tranen>> in het Rijk der Stilte.\nIk zal hier op uw terugkeer wachten.")
          										flw_49:
/*< 49>*/ 										{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 30, 'param3': 40}
/*< 30>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
/*< 36>*/ 										printf("De locaties van de <y<tranen >>die u al eens\nheeft gepakt, zullen worden <r<aangegeven\nop de kaart>>. Maak daar goed gebruik van.\n\nProbeer eerst de locaties van alle 15 tranen\nte ontdekken. Daarmee verhoogt u uw\nkansen om de beproeving tot een goed\neinde te brengen.")
/*< 42>*/ 										temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_32
          									}
          								  case 1:
/*< 38>*/ 									printf("Als ik u een tip mag geven: probeer\n<r<gemakkelijk bereikbare tranen>> te laten\nliggen tot wanneer u achtervolgd wordt.")
/*< 41>*/ 									temp_flags[6 /* 0x1 40 */] = true;
          									goto flw_32
          								}
          							  case 1:
/*< 37>*/ 								printf("De kans dat u niet de uitverkoren held\nbent, neemt langzaam toe, \x0E\x01\x12\x04\x00\x01meester.\n\n\nDoor uw vele pogingen is uw concentratie\ngebroken. Uw prestaties lijden daaronder.\nIk raad u aan rust te nemen alvorens u het\nweer probeert.")
/*< 40>*/ 								temp_flags[5 /* 0x1 20 */] = true;
          								goto flw_32
          							}
          						  case 1:
/*< 26>*/ 							printf("<r<Twee soorten Wakers >>bewaken het rijk\ntegen indringers. Het is van groot belang\ndat u omzichtig handelt.\n\nZolang u hun lichten vermijdt, zullen de\n<r<vliegende Luchtwakers>> u niet zien.\n\n\nDe <r<Aardwakers>>, die <r<vlak boven de grond\nzweven>>, zullen u opmerken als u te dicht\nbij ze komt. <r<Blijf alert >>en houd afstand.")
/*< 28>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_32
          						}
          					  case 1:
/*< 29>*/ 						printf("De locaties van de <y<tranen>> die u heeft\ngevonden, worden <r<aangegeven op de\nkaart>>.\n\nHet zal makkelijker zijn om uw taak\nte volbrengen als u eerst probeert de\nlocaties van alle 15 tranen vast te stellen.")
/*< 25>*/ 						temp_flags[3 /* 0x1 08 */] = true;
          						goto flw_32
          					}
          				  case 1:
/*< 21>*/ 					printf("Zolang u er de kracht en de wil toe heeft,\n\x0E\x01\x12\x04\x00\x02meester, kunt u een beproeving proberen\nzo vaak u wilt.\n\nHet is een goede aanpak om de <y<tranen>>\ndie het makkelijkst te bereiken zijn,\n<r<wel te lokaliseren maar niet te pakken>>\ntotdat u ontdekt wordt.\nVerzamel de 15 <y<tranen>> en voltooi zo de\nbeproeving. Ik zal in de materiële wereld\nop uw terugkeer wachten.")
/*< 23>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_49
          				}
          			  case 1:
/*< 47>*/ 				printf("\x0E\x01\x12\x04\x00\x04Meester Link.")
/*< 46>*/ 				{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 18, 'param3': 40}
/*< 18>*/ 				printf("Zodra uw <y<spirituele bloem>> 15 <r<tranen>>\nbevat, zal uw spirituele groei voltooid zijn\nen zal de godin u zegenen met een nieuwe\nkracht.\nIk zal in de materiële wereld op uw\nterugkeer wachten, \x0E\x01\x12\x04\x00\x02meester.")
/*< 20>*/ 				temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_49
          			}
          		  case 1:
/*<  3>*/ 			printf("\x0E\x01\x12\x04\x00\x04Meester Link.")
/*<  4>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 2, 'param3': 40}
/*<  2>*/ 			printf("U staat in <b<Dins Rijk der Stilte>>, waar de\nderde beproeving op u wacht. Deze keer\nzal uw <r<kracht>> op de proef gesteld worden.\n\nOm de laatste vlam te bereiken die uw\nzwaard zal stalen,\x0E\x01\x12\x04\x00\x02 moet u zich aan deze\nbeproeving onderwerpen en spirituele\ngroei doormaken.")
/*<  5>*/ 			set_camera(9, 0)
/*<  7>*/ 			{'type': 'type3', 'subType': 1, 'param1': 62, 'param2': 1, 'next': 11, 'param3': 40}
/*< 11>*/ 			give_item(17 0x11);
/*<  8>*/ 			set_camera(8, 0)
/*<  9>*/ 			{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 6, 'param3': 40}
/*<  6>*/ 			printf("Zodra uw <y<spirituele bloem>> vol is, zal uw\nspirituele groei voltooid zijn en zal de\ngodin u zegenen met een <r<nieuwe kracht>>.\n\nHeeft u nog vragen?\n[1]Ja![2-]Nee.")
/*< 10>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				printf("Waarover wilt u uitleg krijgen?\n\n\n[1]De spirituele bloem.[2]De Hoeders.[3]Het ontwaakwater.[4-]Niets.")
          				flw_51:
/*< 51>*/ 				switch (choice(4)) {
          				  case 0:
/*< 52>*/ 					printf("Ja, \x0E\x01\x12\x04\x00\x05meester.\n\n\n\nOm de <y<spirituelebloem>> te vullen moet u de\n<y<tranen van Din>> vinden en verzamelen.\nZij zijn verspreid over dit Rijk der Stilte.")
/*< 59>*/ 					set_camera(2, 0)
/*< 58>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 56, 'param3': 40}
/*< 56>*/ 					printf("\x0E\x01\x12\x04\x00\x02Meester, ziet u het lichtgevende object\nvoor u?")
/*< 55>*/ 					set_camera(3, 0)
/*< 54>*/ 					printf("Dat is een <y<traan van Din>>. U dient er <r<15>>\nte verzamelen.")
/*< 57>*/ 					{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 53, 'param3': 40}
/*< 53>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 77, 'param3': 6}
          					flw_77:
/*< 77>*/ 					set_camera(1, 0)
/*< 78>*/ 					printf("Waarover heeft u verder nog vragen?\n\n\n[1]De spirituele bloem.[2]De Hoeders.[3]Het ontwaakwater.[4-]Niets.")
          					goto flw_51
          				  case 1:
/*< 60>*/ 					printf("Ja, \x0E\x01\x12\x04\x00\x05meester.")
/*< 64>*/ 					set_camera(6, 0)
/*< 66>*/ 					printf("Zodra u een voet buiten de magische cirkel\nzet waarin u staat, zullen de <r<Hoeders>> van\ndit rijk ontwaken en op u af komen,\n\x0E\x01\x12\x04\x00\x02meester.")
/*< 63>*/ 					set_camera(4, 0)
/*< 65>*/ 					printf("Een <r<Hoeder >>hoeft u slechts eenmaal te\ntreffen om uw ziel te breken. Als uw ziel\ngebroken wordt, kunt u de beproeving niet\nmeer volbrengen.")
/*< 62>*/ 					set_camera(5, 0)
/*< 61>*/ 					printf("U moet de <y<tranen>> die verspreid zijn over\ndit gebied, vergaren en uw <y<spirituele\nbloem>> vullen zonder geraakt te worden\ndoor een aanval.")
          					goto flw_77
          				  case 2:
/*< 68>*/ 					printf("Ja, \x0E\x01\x12\x04\x00\x05meester.")
/*< 67>*/ 					set_camera(11, 0)
/*< 69>*/ 					printf("De bijzondere vloeibare substantie die u in\nhet gebied aantreft, staat bekend als\n<r<ontwaakwater>>. Dit water heeft een aantal\nunieke eigenschappen.\nAls u ontwaakwater aanraakt, zullen de\n<r<Hoeders direct van uw aanwezigheid op\nde hoogte zijn>>.\n\nOveral in het landschap bevinden zich\npoelen van dit ontwaakwater. Ik raad u\naan om goed te kijken waar u loopt.")
          					goto flw_77
          				  case 3:
          					flw_70:
/*< 70>*/ 					printf("Begrepen, \x0E\x01\x12\x04\x00\x05meester.")
/*< 71>*/ 					set_camera(10, 0)
/*< 72>*/ 					printf("Ik zal in de materiële wereld op uw\nterugkeer wachten, \x0E\x01\x12\x04\x00\x02meester.")
/*< 73>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 75, 'param3': 40}
/*< 75>*/ 					scene_flags[23 'Eldin: Silent Realm'][102 /* 0xD 40 */] = true;
/*< 74>*/ 					temp_flags[1 /* 0x1 02 */] = true;
/*< 76>*/ 					{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          				}
          			  case 1:
          				goto flw_70
          			}
          		}
          	}
          }

