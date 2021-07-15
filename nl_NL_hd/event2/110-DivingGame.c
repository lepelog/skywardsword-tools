          void entrypoint_110_01() {
          	start()
/*< 37>*/ 	switch (story_flags[398 /* us: 805A9B0E 0x01, jp: 805ACD8E 0x01 */]) {
          	  case 0:
/*< 29>*/ 		switch (zone_temp_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*<126>*/ 			printf("\x0E\x01\x09\x04\x00\x01Wil je dat ik de regels nog een keer\nuitleg? Je bent hier tenslotte niet voor\nde verwarring, maar voor de PRET!\n[1]Ja...[2-]Nee, dank je.")
/*<127>*/ 			switch (choice(2)) {
          			  case 0:
/*< 30>*/ 				printf("\x0E\x01\x09\x04\x0D\x602Oeeh! Sta mij toe om je de regels uit te\nleggen!\n\n\n\x0E\x01\x09\x04\x12\x600Allereerst laden we je in dit kanon hier.\nJazeker, een KANON! En we schieten je\nheeeeel hoog de lucht in. Maar maak je\nniet druk, jongeman. Het is 99% veilig!\nJe doel is om op een van de gekleurde\nvakken op het bord te landen. Als je op\nzo'n feestelijk gekleurd vak landt, dan\nwin je rupees op basis van de kleur.\n\x0E\x01\x09\x04\x0D\x600MAAR! Als je op een grijs vak landt, dat\nnoem ik het <r<VERLIEZERSVAK>>, dan stop\nik mijn hand in je buidel en grijp wat van\nJOUW rupees! O, wat, LEUK!\n\x0E\x01\x09\x04\x12\x1100Je kunt hier op Preteiland alles op het\nspel zetten om alles te winnen. Maar let\nop: het komt op <r<geluk >>aan! Onthoud dat\nals je op een <r<verliezersvak>> landt. Hihi!")
/*<129>*/ 				printf("\x0E\x01\x09\x04\x00\x600Tijdens het skydiven zullen op magische\nwijze mijn <r<bonusringen >>en mijn\ngepatenteerde <r<Dodoh-ballen>> verschijnen!\n\n\x0E\x01\x09\x04\x0D\x600Als je erin slaagt door een van mijn\n<r<bonusringen>> te gaan, neemt je\nuiteindelijke prijs in rupees exponentieel\ntoe! Wahoooe!\nBovendien zal het wiel telkens iets\nlangzamer draaien voor elke ring waar je\ndoorheen weet te duiken. Zo wordt het\nnog makkelijker om te WIN-NEN!\n\x0E\x01\x09\x04\x12\xC00Maar raak je één van de <r<Dodoh-ballen>>,\ndan gaat je bonuspuntenteller terug naar\nnul!\n\n\x0E\x01\x09\x04\x0D\x600En tenslotte: de parachutedoek die je daar\nhebt, <r<mag je niet gebruiken >>in dit spel. Is\ndat allemaal duidelijk, jongeman?")
          			  case 1:
/*<128>*/ 				printf("\x0E\x01\x09\x04\x0D\x06Haast je nu en spring in het kanon!")
          			}
          		  case 1:
/*< 75>*/ 			switch (story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */]) {
          			  case 0:
          				flw_77:
/*< 77>*/ 				switch (story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */]) {
          				  case 0:
/*< 79>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 84, 'param3': 12}
/*< 84>*/ 					switch (zone_temp_flags[6 /* 0x1 40 */]) {
          					  case 0:
/*< 85>*/ 						printf("\x0E\x01\x09\x04\x00\x01Wil je nog een keer spelen, jongeman?\nWahoooe! Volgens mij wil jij niets liever!\n\n\nVoor <r<20 rupees>> mag je nog een keer...\n[1]Ja![2]De regels?[3-]Nee, dank je.")
          						flw_33:
/*< 33>*/ 						switch (choice(3)) {
          						  case 0:
/*< 76>*/ 							switch (story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */]) {
          							  case 0:
/*<  6>*/ 								switch (has_rupees(20)) {
          								  case 0:
/*< 10>*/ 									rupees += -20;
          									flw_82:
/*< 82>*/ 									zone_temp_flags[5 /* 0x1 20 */] = true;
/*<  5>*/ 									printf("\x0E\x01\x09\x04\x00\x02Hi-jaaa! Wat een dappere jongeman! Als\nje er klaar voor bent, spring je in dat\nkanon daar in het midden van het eiland!\nIk zorg dat het gebruiksklaar is!")
/*<144>*/ 									switch (zone_temp_flags[8 /* 0x0 01 */]) {
          									  case 0:
/*<145>*/ 										make_actor_do_something(2, 0)
          									  case 1:
/*<146>*/ 										zone_temp_flags[8 /* 0x0 01 */] = true;
/*< 80>*/ 										set_camera(1, 0)
/*<  3>*/ 										make_actor_do_something(0, 0)
/*< 81>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 80, 'next': -1, 'param3': 6}
          									}
          								  case 1:
/*<  7>*/ 									printf("<pause0F>\x0E\x01\x09\x04\x16\xC03Je hebt niet genoeg rupees. Ik kan niet\nzorgen dat je PRET hebt als je me niet\nhelpt rijk te worden, jongeman!\n\n\x0E\x01\x09\x04\x00\x600Kom maar weer terug als je 20 rupees\nvoor me hebt, dan proberen we het nog\neens!")
          								}
          							  case 1:
          								flw_74:
/*< 74>*/ 								story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */] = true;
          								goto flw_82
          							}
          						  case 1:
/*< 34>*/ 							printf("\x0E\x01\x09\x04\x0D\x602Oeeh! Sta mij toe om je de regels uit te\nleggen!\n\n\n\x0E\x01\x09\x04\x12\x600Allereerst laden we je in dit kanon hier.\nJazeker, een KANON! En we schieten je\nheeeeel hoog de lucht in. Maar maak je\nniet druk, jongeman. Het is 99% veilig!\nJe doel is om op een van de gekleurde\nvakken op het bord te landen. Als je op\nzo'n feestelijk gekleurd vak landt, dan\nwin je rupees op basis van de kleur.\n\x0E\x01\x09\x04\x0D\x600MAAR! Als je op een grijs vak landt, dat\nnoem ik het <r<VERLIEZERSVAK>>, dan stop\nik mijn hand in je buidel en grijp wat van\nJOUW rupees! O, wat, LEUK!\n\x0E\x01\x09\x04\x12\x1100Je kunt hier op Preteiland alles op het\nspel zetten om alles te winnen. Maar let\nop: het komt op <r<geluk >>aan! Onthoud dat\nals je op een <r<verliezersvak>> landt. Hihi!")
/*< 35>*/ 							printf("\x0E\x01\x09\x04\x00\x600Tijdens het skydiven zullen op magische\nwijze mijn <r<bonusringen >>en mijn\ngepatenteerde <r<Dodoh-ballen>> verschijnen!\n\n\x0E\x01\x09\x04\x0D\x600Als je erin slaagt door een van mijn\n<r<bonusringen>> te gaan, neemt je\nuiteindelijke prijs in rupees exponentieel\ntoe! Wahoooe!\nBovendien zal het wiel telkens iets\nlangzamer draaien voor elke ring waar je\ndoorheen weet te duiken. Zo wordt het\nnog makkelijker om te WIN-NEN!\n\x0E\x01\x09\x04\x12\xC00Maar raak je één van de <r<Dodoh-ballen>>,\ndan gaat je bonuspuntenteller terug naar\nnul!\n\n\x0E\x01\x09\x04\x0D\x600En tenslotte: de parachutedoek die je daar\nhebt, <r<mag je niet gebruiken >>in dit spel. Is\ndat allemaal duidelijk, jongeman?")
          						  case 2:
/*< 36>*/ 							printf("\x0E\x01\x09\x04\x16\xD05Wahoooe! Wat hoor ik nu?! Is deze\njongeman een pantoffelheld?! Ben je\nbang voor een klein kanonnetje?")
          						}
          					  case 1:
/*<  9>*/ 						printf("\x0E\x01\x09\x04\x0D\x601YAHOOOI! De jongeman is weer\nTERUG! Wat dacht je ervan in mijn\nkanon te springen? Ik kan niet wachten\nJOU de lucht in te knallen!\n\x0E\x01\x09\x04\x09\x600O, maar dat gaat dit keer wel wat kosten.\n<r<20 rupees>> om precies te zijn. Dus...\n[1]Ik wil spelen![2]De regels?[3-]Nee.")
/*< 83>*/ 						zone_temp_flags[6 /* 0x1 40 */] = true;
          						goto flw_33
          					}
          				  case 1:
/*< 78>*/ 					printf("\x0E\x01\x09\x04\x00\x01YA-HOOOOI! Kom kijken, kom spelen!\nJongeman, jou kan ik vast voor een\nsprong in het diepe interesseren?\n\nEn als dank voor het vinden van mijn\ndierbare roulettewiel, knal ik je de eerste\nkeer voor niks de lucht in! Gratis PRET!\n[1]Kom maar op![2]De regels?[3-]Nee, dank je.")
          					goto flw_33
          				}
          			  case 1:
/*< 11>*/ 				switch (story_flags[42 /* us: 805A9AE7 0x08, jp: 805ACD67 0x08 */]) {
          				  case 0:
          					goto flw_77
          				  case 1:
/*< 12>*/ 					printf("\x0E\x01\x09\x04\x00\x601O, jij jolige jongeman! Zonder jou had ik\nmijn wiel nooit teruggevonden!\n\n\nMijn droom, het bouwen van een lachen-\ngieren-brullen <b<Preteiland >>van plezier, is\neindelijk werkelijkheid geworden! Nu kan\niedereen dankzij en om dit eiland lachen!\nNormaal kost het 20 rupees om een keer\nte spelen, maar jij hebt nog iets van me te\ngoed! Je eerste keer is daarom GRATIS,\ndat is veel leuker dan BETAALD!")
/*<  8>*/ 					printf("\x0E\x01\x09\x04\x0D\x602Oeeh! Sta mij toe om je de regels uit te\nleggen!\n\n\n\x0E\x01\x09\x04\x12\x600Allereerst laden we je in dit kanon hier.\nJazeker, een KANON! En we schieten je\nheeeeel hoog de lucht in. Maar maak je\nniet druk, jongeman. Het is 99% veilig!\nJe doel is om op een van de gekleurde\nvakken op het bord te landen. Als je op\nzo'n feestelijk gekleurd vak landt, dan\nwin je rupees op basis van de kleur.\n\x0E\x01\x09\x04\x0D\x600MAAR! Als je op een grijs vak landt, dat\nnoem ik het <r<VERLIEZERSVAK>>, dan stop\nik mijn hand in je buidel en grijp wat van\nJOUW rupees! O, wat, LEUK!\n\x0E\x01\x09\x04\x12\x1100Je kunt hier op Preteiland alles op het\nspel zetten om alles te winnen. Maar let\nop: het komt op <r<geluk >>aan! Onthoud dat\nals je op een <r<verliezersvak>> landt. Hihi!")
/*< 22>*/ 					printf("\x0E\x01\x09\x04\x00\x600Tijdens het skydiven zullen op magische\nwijze mijn <r<bonusringen >>en mijn\ngepatenteerde <r<Dodoh-ballen>> verschijnen!\n\n\x0E\x01\x09\x04\x0D\x600Als je erin slaagt door een van mijn\n<r<bonusringen>> te gaan, neemt je\nuiteindelijke prijs in rupees exponentieel\ntoe! Wahoooe!\nBovendien zal het wiel telkens iets\nlangzamer draaien voor elke ring waar je\ndoorheen weet te duiken. Zo wordt het\nnog makkelijker om te WIN-NEN!\n\x0E\x01\x09\x04\x12\xC00Maar raak je één van de <r<Dodoh-ballen>>,\ndan gaat je bonuspuntenteller terug naar\nnul!\n\n\x0E\x01\x09\x04\x0D\x600En tenslotte: de parachutedoek die je daar\nhebt, <r<mag je niet gebruiken >>in dit spel. Is\ndat allemaal duidelijk, jongeman?")
/*< 13>*/ 					story_flags[42 /* us: 805A9AE7 0x08, jp: 805ACD67 0x08 */] = true;
/*<  1>*/ 					printf("\x0E\x01\x09\x04\x12\x600Dat klinkt toch als DOLLE PRET, of\nniet? Wil je het eens uitproberen?!\n[1]Graag![2-]Niet nu.")
/*<  2>*/ 					switch (choice(2)) {
          					  case 0:
/*<130>*/ 						printf("\x0E\x01\x09\x04\x00\x01Wil je dat ik de regels nog een keer\nuitleg? Je bent hier tenslotte niet voor\nde verwarring, maar voor de PRET!\n[1]Ja...[2-]Nee, dank je.")
/*<131>*/ 						switch (choice(2)) {
          						  case 0:
/*<132>*/ 							printf("\x0E\x01\x09\x04\x0D\x602Oeeh! Sta mij toe om je de regels uit te\nleggen!\n\n\n\x0E\x01\x09\x04\x12\x600Allereerst laden we je in dit kanon hier.\nJazeker, een KANON! En we schieten je\nheeeeel hoog de lucht in. Maar maak je\nniet druk, jongeman. Het is 99% veilig!\nJe doel is om op een van de gekleurde\nvakken op het bord te landen. Als je op\nzo'n feestelijk gekleurd vak landt, dan\nwin je rupees op basis van de kleur.\n\x0E\x01\x09\x04\x0D\x600MAAR! Als je op een grijs vak landt, dat\nnoem ik het <r<VERLIEZERSVAK>>, dan stop\nik mijn hand in je buidel en grijp wat van\nJOUW rupees! O, wat, LEUK!\n\x0E\x01\x09\x04\x12\x1100Je kunt hier op Preteiland alles op het\nspel zetten om alles te winnen. Maar let\nop: het komt op <r<geluk >>aan! Onthoud dat\nals je op een <r<verliezersvak>> landt. Hihi!")
/*<133>*/ 							printf("\x0E\x01\x09\x04\x00\x600Tijdens het skydiven zullen op magische\nwijze mijn <r<bonusringen >>en mijn\ngepatenteerde <r<Dodoh-ballen>> verschijnen!\n\n\x0E\x01\x09\x04\x0D\x600Als je erin slaagt door een van mijn\n<r<bonusringen>> te gaan, neemt je\nuiteindelijke prijs in rupees exponentieel\ntoe! Wahoooe!\nBovendien zal het wiel telkens iets\nlangzamer draaien voor elke ring waar je\ndoorheen weet te duiken. Zo wordt het\nnog makkelijker om te WIN-NEN!\n\x0E\x01\x09\x04\x12\xC00Maar raak je één van de <r<Dodoh-ballen>>,\ndan gaat je bonuspuntenteller terug naar\nnul!\n\n\x0E\x01\x09\x04\x0D\x600En tenslotte: de parachutedoek die je daar\nhebt, <r<mag je niet gebruiken >>in dit spel. Is\ndat allemaal duidelijk, jongeman?")
          							goto flw_74
          						  case 1:
          							goto flw_74
          						}
          					  case 1:
/*<  4>*/ 						printf("\x0E\x01\x09\x04\x16\xD05Wahoooe! Wat hoor ik nu?! Is deze\njongeman een pantoffelheld?! Ben je\nbang voor een klein kanonnetje?")
          					}
          				}
          			}
          		}
          	  case 1:
/*< 38>*/ 		switch (story_flags[92 /* us: 805A9AF1 0x02, jp: 805ACD71 0x02 */]) {
          		  case 0:
/*<152>*/ 			switch (story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */]) {
          			  case 0:
/*<153>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 31}
          			  case 1:
/*< 40>*/ 				switch (story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */]) {
          				  case 0:
/*<151>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 91, 'param3': 31}
/*< 91>*/ 					switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          					  case 0:
/*< 42>*/ 						printf("\x0E\x01\x09\x04\n\xC10Aiaiai... Kon iemand het maar voor mij\nvinden. Stel je al die lachende kinder-\ngezichtjes eens voor als ze zien dat het\nroulettewiel er weer is...\nIk kan maar beter alle hoop laten varen...")
          					  case 1:
/*<105>*/ 						printf("\x0E\x01\x09\x04\x00\x0FHallo-hallo, jongeman. Denk je dat je\nmijn roulettewiel voor mij kunt vinden?\n\n\nNee? Dat dacht ik al...")
/*<101>*/ 						{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 92, 'param3': 51}
/*< 92>*/ 						printf("Het <r<roulettewiel >>waarnaar deze persoon op zoek is,\nstaat momenteel niet ingesteld als doelwit dat u kunt\n<pling><r<detecteren>>.\n\n<pling>Wil u uw zwaard kalibreren om dit <r<roulettewiel >>te\nkunnen <r<detecteren>>?\n[1]Ja.[2-]Nee.")
/*< 93>*/ 						switch (choice(2)) {
          						  case 0:
/*< 94>*/ 							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = true;
/*< 99>*/ 							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*< 98>*/ 							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*< 95>*/ 							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*< 96>*/ 							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*< 97>*/ 							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<135>*/ 							open_dowsing_wheel(17)
/*<134>*/ 							printf("\x0E\x01\x12\x04\x00\x05Begrepen, meester.\n\n\n\nUw zwaard is nu gekalibreerd zodat u het <r<roulettewiel>>\nwaar deze man naar op zoek is, kunt <pling><r<detecteren>>.")
/*<147>*/ 							printf("Er is een kans van 90% dat het voorwerp ergens in de\n<b<Lanayru-woestijn >>terecht is gekomen. Ik stel voor dat\nu daar eerst op zoek gaat.")
          							flw_102:
/*<102>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          						  case 1:
/*<100>*/ 							printf("\x0E\x01\x12\x04\x00\x05Begrepen, meester. Ik zal uw zwaard niet opnieuw\nkalibreren, dus u zult dit voorwerp niet kunnen\n<pling>detecteren.")
          							goto flw_102
          						}
          					}
          				  case 1:
/*< 44>*/ 					switch (story_flags[661 /* us: 805A9B1F 0x08, jp: 805ACD9F 0x08 */]) {
          					  case 0:
/*<103>*/ 						switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          						  case 0:
/*< 49>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 113, 'param3': 31}
/*<113>*/ 							switch (temp_flags[5 /* 0x1 20 */]) {
          							  case 0:
/*<114>*/ 								printf("\x0E\x01\x09\x04\x00\x0FO, niets aan het handje hoor. Mijn droom\ndie in een nachtmerrie veranderde, dat is\nniet jouw probleem.\n\nHet was maar een maf, draagbaar rug-\nversiersel, <pause0A>maar toch...<pause0A> Het was wel MIJN\nmaffe, draagbare rugversiersel...\n[1]Ik vind 't wel![2-]Vervelend, hoor.")
          								flw_54:
/*< 54>*/ 								switch (choice(2)) {
          								  case 0:
/*< 55>*/ 									printf("Hoe kan ik iets terughalen dat door de\nwolken gevallen is? Zoiets is gewoonweg\nonmogelijk!")
/*< 56>*/ 									{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 57, 'param3': 51}
/*< 57>*/ 									printf("U kunt uw zwaard kalibreren om het voorwerp te\n<pling><r<detecteren >>waarnaar deze persoon op zoek is.\n\n\nAls u ervoor kiest om dit doelwit in te stellen, zal een\nander voorwerp dat u voor iemand zoekt niet meer te\n<r<detecteren >>zijn.\n\nWilt u het <r<roulettewiel >>instellen als doelwit?\n[1]Ja.[2-]Niet nu.")
/*<109>*/ 									switch (choice(2)) {
          									  case 0:
/*<110>*/ 										printf("\x0E\x01\x12\x04\x00\x05Begrepen, meester. Ik zal uw zwaard zo kalibreren\ndat u het <r<roulettewiel>> kunt <r<detecteren>>.")
/*<136>*/ 										story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = true;
/*<141>*/ 										story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<140>*/ 										story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<137>*/ 										story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<138>*/ 										story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<139>*/ 										story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<142>*/ 										open_dowsing_wheel(17)
/*<143>*/ 										printf("Er is een kans van 90% dat het voorwerp ergens in de\n<b<Lanayru-woestijn >>terecht is gekomen. Ik stel voor dat\nu daar eerst op zoek gaat.")
          										flw_58:
/*< 58>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 45, 'param3': 36}
/*< 45>*/ 										story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */] = true;
/*<104>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 59, 'param3': 50}
/*< 59>*/ 										printf("\x0E\x01\x09\x04\n\xC10Aiaiai... Kon iemand het maar voor mij\nvinden. Stel je al die lachende kinder-\ngezichtjes eens voor als ze zien dat het\nroulettewiel er weer is...\nIk kan maar beter alle hoop laten varen...")
          									  case 1:
/*<111>*/ 										printf("Ja, \x0E\x01\x12\x04\x00\x05meester. Spreek opnieuw met deze persoon om een\nnieuw doelwit in te stellen om te detecteren.")
          										goto flw_58
          									}
          								  case 1:
          									flw_52:
/*< 52>*/ 									printf("\x0E\x01\x09\x04\x00\x10Zonder dat wiel kan ik mensen toch niet\nblij maken? Daarom is de pretfabriek nu\ndicht.\n\n\x0E\x01\x09\x04\n\xC00Er is niets wat ik kan doen...")
/*<112>*/ 									temp_flags[5 /* 0x1 20 */] = true;
          								}
          							  case 1:
/*< 50>*/ 								printf("\x0E\x01\x09\x04\x00\x0FBah... Wat moet ik nu toch doen?!\nDit schiet toch niet op. Het is voorbij...\n[1]Wat is er?[2-] Eh...")
/*< 51>*/ 								switch (choice(2)) {
          								  case 0:
/*< 53>*/ 									printf("Kijk, het roulettewiel dat ik op mijn rug\ndroeg, is van het eiland afgevallen en\nergens ver onder de wolken terecht-\ngekomen.\nZonder mijn roulettewiel kan ik van dit\neiland niet de prettige plek van plezier\nmaken die de mensen verwachten!\n\n\x0E\x01\x09\x04\n\xC00O, wat moet ik doen? Het is door het\nwolkendek gevallen, dus ik kan het net zo\ngoed gewoon opgeven.\n[1]Ga op zoek![2-]Geef het op.")
          									goto flw_54
          								  case 1:
          									goto flw_52
          								}
          							}
          						  case 1:
          							flw_41:
/*< 41>*/ 							printf("\x0E\x01\x09\x04\x00\x0FBah... Mijn superlollige roulettewiel van\nplezier is van het eiland gevallen,\nhelemaal naar beneden, voorbij de\nwolken...\nZonder dat wiel is mijn droom van pret\nen spellen voorgoed voorbij. Ik heb zo\nnergens meer fut voor. Mijn lach en een\ntraan zijn steeds vaker alleen nog tranen.")
          						}
          					  case 1:
          						goto flw_41
          					}
          				}
          			}
          		  case 1:
/*<107>*/ 			switch (temp_flags[4 /* 0x1 10 */]) {
          			  case 0:
/*<108>*/ 				printf("\x0E\x01\x09\x04\x00\x01<b<PRETEILAND>>! Het ruikt hier nu al naar\nplezierig gevaar en gevaarlijke pret, vind\nje ook niet?! Ik ben nog bezig alles klaar\nte zetten, dus kom later nog eens terug!")
          			  case 1:
/*< 39>*/ 				printf("\x0E\x01\x09\x04\x0D\x01Ya-hoooi! Kom dat zien, jongeman!\n\n\n\n\x0E\x01\x09\x04\x09\x600Je vraagt je vanzelfsprekend af wat dit\nhier nou weer voor moet stellen?\n[1]Misschien wel.[2-]Nee.")
/*< 46>*/ 				switch (choice(2)) {
          				  case 0:
/*< 48>*/ 					printf("\x0E\x01\x09\x04\x0D\x02Oooe! Naar dat antwoord was ik op zoek!\nJe bent een scherpe jongeman, dat ben je!\n\n\n\x0E\x01\x09\x04\x08\x600Ik hoop van dit eiland een ware PRETplek\nte maken, waar iedereen welkom is om\nzich op te laten vrolijken...\n\nHoe ik dit eiland heb genoemd? Of wilde\nje dat niet weten?<pause1E> Ik vertel het toch! Het\nheet: het <b<PRETEILAND>>!\n\n\x0E\x01\x09\x04\x12\x600Ik ben nog niet helemaal klaar met het\nopbouwen van het eiland, dus hopelijk\nkom je later nog eens! Je zult versteld\nstaan van alle KLEUREN en PLEZIER!")
/*<106>*/ 					temp_flags[4 /* 0x1 10 */] = true;
          				  case 1:
/*< 47>*/ 					printf("\x0E\x01\x09\x04\x0D\xC03Nou, nou, nou! Dat is toch niet leuk?!\n\n\n\n\x0E\x01\x09\x04\x08\x600Ik doe hier mijn uiterste best om dromen\nuit te laten komen en dit krijg ik ervoor\nterug...")
          				}
          			}
          		}
          	}
          }

          void entrypoint_110_02() {
/*< 21>*/ 	start()
/*< 88>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 31, 'param3': 44}
/*< 31>*/ 	zone_temp_flags[5 /* 0x1 20 */] = false;
/*< 26>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 14, 'param3': 12}
/*< 14>*/ 	switch (context_related4(0)) {
          	  case 0:
/*<115>*/ 		{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 6912, 'next': 117, 'param3': 13}
/*<117>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 50, 'next': 15, 'param3': 6}
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\xFF05Wahoooooe! Wat vre-se-lijk, vreselijk\nONPRETTIG. Je bent op een verliezers-\nvak terechtgekomen.\n\nDat betekent dat <r<<numeric arg2>>> van je rupees nu van mij\nzijn. Tihihi!")
/*< 25>*/ 		make_actor_do_something(1, 0)
          		flw_89:
/*< 89>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 125, 'param3': 45}
/*<125>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<116>*/ 		{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 6912, 'next': 118, 'param3': 13}
/*<118>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 50, 'next': 16, 'param3': 6}
/*< 16>*/ 		printf("\x0E\x01\x09\x04\x00\xFF05Tihihi, o jee! Wat ONPRETTIG. Je hebt\neen denkbeeldige buidel met wel <r<0 rupees\n>>gewonnen. Maar! Geef niet op, jongeman.\nKom snel weer langs!")
          		goto flw_89
          	  case 2:
/*<119>*/ 		{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5888, 'next': 121, 'param3': 13}
/*<121>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 85, 'next': 17, 'param3': 6}
/*< 17>*/ 		printf("\x0E\x01\x09\x04ÿ\xFF06WA-HAHA! Is dat niet een prettig, LEUK\nvak waarop je geland bent?\n\n\n\x0E\x01\x09\x04\x0D\x600Je bent op een <numeric arg0>-rupeevak geland en je\nbonuspuntenteller staat op <numeric arg1>! Dus je wint\nin totaal <r<<numeric arg2>>> rupees!")
/*<123>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			flw_23:
/*< 23>*/ 			printf("Hier heb je je grote prijs van wel\n<numeric arg2> \x0E\x03\x04\x02\x1CD!")
/*< 32>*/ 			make_actor_do_something(1, 0)
/*< 90>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 124, 'param3': 45}
/*<124>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*< 27>*/ 			printf("\x0E\x01\x09\x04\x12\x600Ik heb een heel speciale prijs voor de heel\nspeciale mensen die door vijf ringen\nweten te tuimelen zonder een Dodoh-bal te\nraken... en op een 50-rupeevlak landen!\n\x0E\x01\x09\x04\x08\x1000Ik hoop maar dat je nog een sprong durft\nte wagen voor mijn Rupee-roulette!")
          			goto flw_23
          		}
          	  case 3:
/*<120>*/ 		{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 5120, 'next': 122, 'param3': 13}
/*<122>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 130, 'next': 24, 'param3': 6}
/*< 24>*/ 		printf("\x0E\x01\x09\x04ÿ\xFF06Nu-huhuhu! Je bent op een geweldig\n50-rupeevak geland!\n\n\nJe bonuspuntenteller staat op <numeric arg1> en dat\nbetekent dat je wel <r<<numeric arg2> rupees>> wint!")
/*< 86>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			goto flw_23
          		  case 1:
/*< 18>*/ 			switch (context_related2(0)) {
          			  case 0:
/*< 20>*/ 				printf("Je bent door al mijn bonusringen heen\ngetuimeld! Drie keer raden welke\njongeman er een speciale prijs verdiend\nheeft? Kom op, RAAD MAAR!")
/*< 87>*/ 				scene_flags[21 'The Sky'][19 /* 0x3 08 */] = true;
/*<148>*/ 				check_item_flag(489, 3)
/*<149>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 65}) {
          				  case 0:
/*<150>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 19, 'param3': 12}
          					flw_19:
/*< 19>*/ 					give_item(94 0x5E);
          					goto flw_23
          				  case 1:
          					goto flw_19
          				}
          			  case 1:
/*< 28>*/ 				printf("\x0E\x01\x09\x04\x12\x600Ik heb een heel speciale prijs voor de heel\nspeciale mensen die door vijf ringen\nweten te tuimelen zonder een Dodoh-bal te\nraken... en op een 50-rupeevlak landen!\n\x0E\x01\x09\x04\x08\x1000Ik hoop maar dat je nog een sprong durft\nte wagen voor mijn Rupee-roulette!")
          				goto flw_23
          			}
          		}
          	}
          }

          void entrypoint_110_04() {
/*< 61>*/ 	start()
/*< 73>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*< 66>*/ 		printf("\x0E\x01\x09\x04\x00\x06Dank je, dank je, DANK JE! Nu kan ik\ndan eindelijk mijn droom verwezenlijken\nom een <b<Preteiland >>te openen!\n\n\x0E\x01\x09\x04\x00\xA00WOEYAAAH! Ik ben ZO BLIJ!")
/*< 67>*/ 		printf("En jij, jongeman, wordt mijn eerste\nklant! Wat zeg je daarvan? O, ik ben zo\nblij! En we gaan zo'n PRET hebben!")
/*< 43>*/ 		story_flags[398 /* us: 805A9B0E 0x01, jp: 805ACD8E 0x01 */] = true;
/*< 60>*/ 		give_gratitude_crystals();
          	  case 1:
/*< 63>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 65>*/ 			printf("\x0E\x01\x09\x04\x00\x07YA-HOOOOOOI! Mijn roulettewiel!")
/*< 72>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		  case 1:
/*< 62>*/ 			printf("\x0E\x01\x09\x04\x00\x0BIS DIT... IS DIT?!\n\n\n\nJA, DAT IS HET! DAT IS HET!")
/*< 64>*/ 			zone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	}
          }

          void entrypoint_110_05() {
/*< 71>*/ 	start()
/*< 68>*/ 	printf("\x0E\x01\x12\x04\x00dIk heb hier dat wiel voor je, bzzzrrrt!")
/*< 70>*/ 	make_actor_do_something(0, 0)
/*< 69>*/ 	printf("\x0E\x01\x12\x04\x00dAls je wat anders wil, zzrrrrt, laat het me\ndan weten.")
          }

