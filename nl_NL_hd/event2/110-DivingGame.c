          void entrypoint_110_01() {
          	start()
/*< 37>*/ 	switch (story_flags[398 /* us: 805A9B0E 0x01, jp: 805ACD8E 0x01 */]) {
          	  case 0:
/*< 29>*/ 		switch (zone_temp_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*<126>*/ 			printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00000001>Wil je dat ik de regels nog een keer\nuitleg? Je bent hier tenslotte niet voor\nde verwarring, maar voor de PRET!\n[1-]Ja...[2]Nee, dank je.")
/*<127>*/ 			switch (choice(2)) {
          			  case 0:
/*< 30>*/ 				printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x000d0602>Oeeh! Sta mij toe om je de regels uit te\nleggen!\n\n\n<0x10009:0x00120600>Allereerst laden we je in dit kanon hier.\nJazeker, een KANON! En we schieten je\nheeeeel hoog de lucht in. Maar maak je\nniet druk, jongeman. Het is 99% veilig!\nJe doel is om op een van de gekleurde\nvakken op het bord te landen. Als je op\nzo'n feestelijk gekleurd vak landt, dan\nwin je rupees op basis van de kleur.\n<0x10009:0x000d0600>MAAR! Als je op een grijs vak landt, dat\nnoem ik het <color red<VERLIEZERSVAK>coloroff>, dan stop\nik mijn hand in je buidel en grijp wat van\nJOUW rupees! O, wat, LEUK!\n<0x10009:0x00121100>Je kunt hier op Preteiland alles op het\nspel zetten om alles te winnen. Maar let\nop: het komt op <color red<geluk >coloroff>aan! Onthoud dat\nals je op een <color red<verliezersvak>coloroff> landt. Hihi!")
/*<129>*/ 				printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00000600>Tijdens het skydiven zullen op magische\nwijze mijn <color red<bonusringen >coloroff>en mijn\ngepatenteerde <color red<Dodoh-ballen>coloroff> verschijnen!\n\n<0x10009:0x000d0600>Als je erin slaagt door een van mijn\n<color red<bonusringen>coloroff> te gaan, neemt je\nuiteindelijke prijs in rupees exponentieel\ntoe! Wahoooe!\nBovendien zal het wiel telkens iets\nlangzamer draaien voor elke ring waar je\ndoorheen weet te duiken. Zo wordt het\nnog makkelijker om te WIN-NEN!\n<0x10009:0x00120c00>Maar raak je één van de <color red<Dodoh-ballen>coloroff>,\ndan gaat je bonuspuntenteller terug naar\nnul!\n\n<0x10009:0x000d0600>En tenslotte: de parachutedoek die je daar\nhebt, <color red<mag je niet gebruiken >coloroff>in dit spel. Is\ndat allemaal duidelijk, jongeman?")
          			  case 1:
/*<128>*/ 				printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x000d0006>Haast je nu en spring in het kanon!")
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
/*< 85>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000001>Wil je nog een keer spelen, jongeman?\nWahoooe! Volgens mij wil jij niets liever!\n\n\nVoor <color red<20 rupees>coloroff> mag je nog een keer...\n[1-]Ja![2-]De regels?[3]Nee, dank je.")
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
/*<  5>*/ 									printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00000002>Hi-jaaa! Wat een dappere jongeman! Als\nje er klaar voor bent, spring je in dat\nkanon daar in het midden van het eiland!\nIk zorg dat het gebruiksklaar is!")
/*<144>*/ 									switch (zone_temp_flags[8 /* 0x0 01 */]) {
          									  case 0:
/*<145>*/ 										make_actor_do_something(2, 0)
          									  case 1:
/*<146>*/ 										zone_temp_flags[8 /* 0x0 01 */] = true;
/*< 80>*/ 										set_camera(1, 0)
/*<  3>*/ 										make_actor_do_something(0, 0)
/*< 81>*/ 										wait_frames(80)
          									}
          								  case 1:
/*<  7>*/ 									printf(/* textboxtype: 0, unk: 1, line: 7 */ "<pause 15><0x10009:0x00160c03>Je hebt niet genoeg rupees. Ik kan niet\nzorgen dat je PRET hebt als je me niet\nhelpt rijk te worden, jongeman!\n\n<0x10009:0x00000600>Kom maar weer terug als je 20 rupees\nvoor me hebt, dan proberen we het nog\neens!")
          								}
          							  case 1:
          								flw_74:
/*< 74>*/ 								story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */] = true;
          								goto flw_82
          							}
          						  case 1:
/*< 34>*/ 							printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x000d0602>Oeeh! Sta mij toe om je de regels uit te\nleggen!\n\n\n<0x10009:0x00120600>Allereerst laden we je in dit kanon hier.\nJazeker, een KANON! En we schieten je\nheeeeel hoog de lucht in. Maar maak je\nniet druk, jongeman. Het is 99% veilig!\nJe doel is om op een van de gekleurde\nvakken op het bord te landen. Als je op\nzo'n feestelijk gekleurd vak landt, dan\nwin je rupees op basis van de kleur.\n<0x10009:0x000d0600>MAAR! Als je op een grijs vak landt, dat\nnoem ik het <color red<VERLIEZERSVAK>coloroff>, dan stop\nik mijn hand in je buidel en grijp wat van\nJOUW rupees! O, wat, LEUK!\n<0x10009:0x00121100>Je kunt hier op Preteiland alles op het\nspel zetten om alles te winnen. Maar let\nop: het komt op <color red<geluk >coloroff>aan! Onthoud dat\nals je op een <color red<verliezersvak>coloroff> landt. Hihi!")
/*< 35>*/ 							printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00000600>Tijdens het skydiven zullen op magische\nwijze mijn <color red<bonusringen >coloroff>en mijn\ngepatenteerde <color red<Dodoh-ballen>coloroff> verschijnen!\n\n<0x10009:0x000d0600>Als je erin slaagt door een van mijn\n<color red<bonusringen>coloroff> te gaan, neemt je\nuiteindelijke prijs in rupees exponentieel\ntoe! Wahoooe!\nBovendien zal het wiel telkens iets\nlangzamer draaien voor elke ring waar je\ndoorheen weet te duiken. Zo wordt het\nnog makkelijker om te WIN-NEN!\n<0x10009:0x00120c00>Maar raak je één van de <color red<Dodoh-ballen>coloroff>,\ndan gaat je bonuspuntenteller terug naar\nnul!\n\n<0x10009:0x000d0600>En tenslotte: de parachutedoek die je daar\nhebt, <color red<mag je niet gebruiken >coloroff>in dit spel. Is\ndat allemaal duidelijk, jongeman?")
          						  case 2:
/*< 36>*/ 							printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00160d05>Wahoooe! Wat hoor ik nu?! Is deze\njongeman een pantoffelheld?! Ben je\nbang voor een klein kanonnetje?")
          						}
          					  case 1:
/*<  9>*/ 						printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x000d0601>YAHOOOI! De jongeman is weer\nTERUG! Wat dacht je ervan in mijn\nkanon te springen? Ik kan niet wachten\nJOU de lucht in te knallen!\n<0x10009:0x00090600>O, maar dat gaat dit keer wel wat kosten.\n<color red<20 rupees>coloroff> om precies te zijn. Dus...\n[1-]Ik wil spelen![2-]De regels?[3]Nee.")
/*< 83>*/ 						zone_temp_flags[6 /* 0x1 40 */] = true;
          						goto flw_33
          					}
          				  case 1:
/*< 78>*/ 					printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00000001>YA-HOOOOI! Kom kijken, kom spelen!\nJongeman, jou kan ik vast voor een\nsprong in het diepe interesseren?\n\nEn als dank voor het vinden van mijn\ndierbare roulettewiel, knal ik je de eerste\nkeer voor niks de lucht in! Gratis PRET!\n[1-]Kom maar op![2-]De regels?[3]Nee, dank je.")
          					goto flw_33
          				}
          			  case 1:
/*< 11>*/ 				switch (story_flags[42 /* us: 805A9AE7 0x08, jp: 805ACD67 0x08 */]) {
          				  case 0:
          					goto flw_77
          				  case 1:
/*< 12>*/ 					printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00000601>O, jij jolige jongeman! Zonder jou had ik\nmijn wiel nooit teruggevonden!\n\n\nMijn droom, het bouwen van een lachen-\ngieren-brullen <color blue<Preteiland >coloroff>van plezier, is\neindelijk werkelijkheid geworden! Nu kan\niedereen dankzij en om dit eiland lachen!\nNormaal kost het 20 rupees om een keer\nte spelen, maar jij hebt nog iets van me te\ngoed! Je eerste keer is daarom GRATIS,\ndat is veel leuker dan BETAALD!")
/*<  8>*/ 					printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x000d0602>Oeeh! Sta mij toe om je de regels uit te\nleggen!\n\n\n<0x10009:0x00120600>Allereerst laden we je in dit kanon hier.\nJazeker, een KANON! En we schieten je\nheeeeel hoog de lucht in. Maar maak je\nniet druk, jongeman. Het is 99% veilig!\nJe doel is om op een van de gekleurde\nvakken op het bord te landen. Als je op\nzo'n feestelijk gekleurd vak landt, dan\nwin je rupees op basis van de kleur.\n<0x10009:0x000d0600>MAAR! Als je op een grijs vak landt, dat\nnoem ik het <color red<VERLIEZERSVAK>coloroff>, dan stop\nik mijn hand in je buidel en grijp wat van\nJOUW rupees! O, wat, LEUK!\n<0x10009:0x00121100>Je kunt hier op Preteiland alles op het\nspel zetten om alles te winnen. Maar let\nop: het komt op <color red<geluk >coloroff>aan! Onthoud dat\nals je op een <color red<verliezersvak>coloroff> landt. Hihi!")
/*< 22>*/ 					printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00000600>Tijdens het skydiven zullen op magische\nwijze mijn <color red<bonusringen >coloroff>en mijn\ngepatenteerde <color red<Dodoh-ballen>coloroff> verschijnen!\n\n<0x10009:0x000d0600>Als je erin slaagt door een van mijn\n<color red<bonusringen>coloroff> te gaan, neemt je\nuiteindelijke prijs in rupees exponentieel\ntoe! Wahoooe!\nBovendien zal het wiel telkens iets\nlangzamer draaien voor elke ring waar je\ndoorheen weet te duiken. Zo wordt het\nnog makkelijker om te WIN-NEN!\n<0x10009:0x00120c00>Maar raak je één van de <color red<Dodoh-ballen>coloroff>,\ndan gaat je bonuspuntenteller terug naar\nnul!\n\n<0x10009:0x000d0600>En tenslotte: de parachutedoek die je daar\nhebt, <color red<mag je niet gebruiken >coloroff>in dit spel. Is\ndat allemaal duidelijk, jongeman?")
/*< 13>*/ 					story_flags[42 /* us: 805A9AE7 0x08, jp: 805ACD67 0x08 */] = true;
/*<  1>*/ 					printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00120600>Dat klinkt toch als DOLLE PRET, of\nniet? Wil je het eens uitproberen?!\n[1-]Graag![2]Niet nu.")
/*<  2>*/ 					switch (choice(2)) {
          					  case 0:
/*<130>*/ 						printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00000001>Wil je dat ik de regels nog een keer\nuitleg? Je bent hier tenslotte niet voor\nde verwarring, maar voor de PRET!\n[1-]Ja...[2]Nee, dank je.")
/*<131>*/ 						switch (choice(2)) {
          						  case 0:
/*<132>*/ 							printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x000d0602>Oeeh! Sta mij toe om je de regels uit te\nleggen!\n\n\n<0x10009:0x00120600>Allereerst laden we je in dit kanon hier.\nJazeker, een KANON! En we schieten je\nheeeeel hoog de lucht in. Maar maak je\nniet druk, jongeman. Het is 99% veilig!\nJe doel is om op een van de gekleurde\nvakken op het bord te landen. Als je op\nzo'n feestelijk gekleurd vak landt, dan\nwin je rupees op basis van de kleur.\n<0x10009:0x000d0600>MAAR! Als je op een grijs vak landt, dat\nnoem ik het <color red<VERLIEZERSVAK>coloroff>, dan stop\nik mijn hand in je buidel en grijp wat van\nJOUW rupees! O, wat, LEUK!\n<0x10009:0x00121100>Je kunt hier op Preteiland alles op het\nspel zetten om alles te winnen. Maar let\nop: het komt op <color red<geluk >coloroff>aan! Onthoud dat\nals je op een <color red<verliezersvak>coloroff> landt. Hihi!")
/*<133>*/ 							printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00000600>Tijdens het skydiven zullen op magische\nwijze mijn <color red<bonusringen >coloroff>en mijn\ngepatenteerde <color red<Dodoh-ballen>coloroff> verschijnen!\n\n<0x10009:0x000d0600>Als je erin slaagt door een van mijn\n<color red<bonusringen>coloroff> te gaan, neemt je\nuiteindelijke prijs in rupees exponentieel\ntoe! Wahoooe!\nBovendien zal het wiel telkens iets\nlangzamer draaien voor elke ring waar je\ndoorheen weet te duiken. Zo wordt het\nnog makkelijker om te WIN-NEN!\n<0x10009:0x00120c00>Maar raak je één van de <color red<Dodoh-ballen>coloroff>,\ndan gaat je bonuspuntenteller terug naar\nnul!\n\n<0x10009:0x000d0600>En tenslotte: de parachutedoek die je daar\nhebt, <color red<mag je niet gebruiken >coloroff>in dit spel. Is\ndat allemaal duidelijk, jongeman?")
          							goto flw_74
          						  case 1:
          							goto flw_74
          						}
          					  case 1:
/*<  4>*/ 						printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00160d05>Wahoooe! Wat hoor ik nu?! Is deze\njongeman een pantoffelheld?! Ben je\nbang voor een klein kanonnetje?")
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
/*< 42>*/ 						printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x000a0c10>Aiaiai... Kon iemand het maar voor mij\nvinden. Stel je al die lachende kinder-\ngezichtjes eens voor als ze zien dat het\nroulettewiel er weer is...\nIk kan maar beter alle hoop laten varen...")
          					  case 1:
/*<105>*/ 						printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x0000000f>Hallo-hallo, jongeman. Denk je dat je\nmijn roulettewiel voor mij kunt vinden?\n\n\nNee? Dat dacht ik al...")
/*<101>*/ 						{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 92, 'param3': 51}
/*< 92>*/ 						printf(/* textboxtype: 0, unk: 0, line: 44 */ "Het <color red<roulettewiel >coloroff>waarnaar deze persoon op zoek is,\nstaat momenteel niet ingesteld als doelwit dat u kunt\n<sound 4><color red<detecteren>coloroff>.\n\n<sound 4>Wil u uw zwaard kalibreren om dit <color red<roulettewiel >coloroff>te\nkunnen <color red<detecteren>coloroff>?\n[1-]Ja.[2]Nee.")
/*< 93>*/ 						switch (choice(2)) {
          						  case 0:
/*< 94>*/ 							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = true;
/*< 99>*/ 							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*< 98>*/ 							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*< 95>*/ 							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*< 96>*/ 							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*< 97>*/ 							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<135>*/ 							open_dowsing_wheel(17)
/*<134>*/ 							printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10012:0x00000005>Begrepen, meester.\n\n\n\nUw zwaard is nu gekalibreerd zodat u het <color red<roulettewiel>coloroff>\nwaar deze man naar op zoek is, kunt <sound 4><color red<detecteren>coloroff>.")
/*<147>*/ 							printf(/* textboxtype: 1, unk: 0, line: 42 */ "Er is een kans van 90% dat het voorwerp ergens in de\n<color blue<Lanayru-woestijn >coloroff>terecht is gekomen. Ik stel voor dat\nu daar eerst op zoek gaat.")
          							flw_102:
/*<102>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          						  case 1:
/*<100>*/ 							printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10012:0x00000005>Begrepen, meester. Ik zal uw zwaard niet opnieuw\nkalibreren, dus u zult dit voorwerp niet kunnen\n<sound 4>detecteren.")
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
/*<114>*/ 								printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x0000000f>O, niets aan het handje hoor. Mijn droom\ndie in een nachtmerrie veranderde, dat is\nniet jouw probleem.\n\nHet was maar een maf, draagbaar rug-\nversiersel, <pause 10>maar toch...<pause 10> Het was wel MIJN\nmaffe, draagbare rugversiersel...\n[1-]Ik vind 't wel![2]Vervelend, hoor.")
          								flw_54:
/*< 54>*/ 								switch (choice(2)) {
          								  case 0:
/*< 55>*/ 									printf(/* textboxtype: 1, unk: 0, line: 30 */ "Hoe kan ik iets terughalen dat door de\nwolken gevallen is? Zoiets is gewoonweg\nonmogelijk!")
/*< 56>*/ 									{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 57, 'param3': 51}
/*< 57>*/ 									printf(/* textboxtype: 0, unk: 1, line: 40 */ "U kunt uw zwaard kalibreren om het voorwerp te\n<sound 4><color red<detecteren >coloroff>waarnaar deze persoon op zoek is.\n\n\nAls u ervoor kiest om dit doelwit in te stellen, zal een\nander voorwerp dat u voor iemand zoekt niet meer te\n<color red<detecteren >coloroff>zijn.\n\nWilt u het <color red<roulettewiel >coloroff>instellen als doelwit?\n[1-]Ja.[2]Niet nu.")
/*<109>*/ 									switch (choice(2)) {
          									  case 0:
/*<110>*/ 										printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10012:0x00000005>Begrepen, meester. Ik zal uw zwaard zo kalibreren\ndat u het <color red<roulettewiel>coloroff> kunt <color red<detecteren>coloroff>.")
/*<136>*/ 										story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = true;
/*<141>*/ 										story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<140>*/ 										story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<137>*/ 										story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<138>*/ 										story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<139>*/ 										story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<142>*/ 										open_dowsing_wheel(17)
/*<143>*/ 										printf(/* textboxtype: 1, unk: 0, line: 42 */ "Er is een kans van 90% dat het voorwerp ergens in de\n<color blue<Lanayru-woestijn >coloroff>terecht is gekomen. Ik stel voor dat\nu daar eerst op zoek gaat.")
          										flw_58:
/*< 58>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 45, 'param3': 36}
/*< 45>*/ 										story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */] = true;
/*<104>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 59, 'param3': 50}
/*< 59>*/ 										printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x000a0c10>Aiaiai... Kon iemand het maar voor mij\nvinden. Stel je al die lachende kinder-\ngezichtjes eens voor als ze zien dat het\nroulettewiel er weer is...\nIk kan maar beter alle hoop laten varen...")
          									  case 1:
/*<111>*/ 										printf(/* textboxtype: 0, unk: 1, line: 43 */ "Ja, <0x10012:0x00000005>meester. Spreek opnieuw met deze persoon om een\nnieuw doelwit in te stellen om te detecteren.")
          										goto flw_58
          									}
          								  case 1:
          									flw_52:
/*< 52>*/ 									printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00000010>Zonder dat wiel kan ik mensen toch niet\nblij maken? Daarom is de pretfabriek nu\ndicht.\n\n<0x10009:0x000a0c00>Er is niets wat ik kan doen...")
/*<112>*/ 									temp_flags[5 /* 0x1 20 */] = true;
          								}
          							  case 1:
/*< 50>*/ 								printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x0000000f>Bah... Wat moet ik nu toch doen?!\nDit schiet toch niet op. Het is voorbij...\n[1-]Wat is er?[2] Eh...")
/*< 51>*/ 								switch (choice(2)) {
          								  case 0:
/*< 53>*/ 									printf(/* textboxtype: 0, unk: 0, line: 29 */ "Kijk, het roulettewiel dat ik op mijn rug\ndroeg, is van het eiland afgevallen en\nergens ver onder de wolken terecht-\ngekomen.\nZonder mijn roulettewiel kan ik van dit\neiland niet de prettige plek van plezier\nmaken die de mensen verwachten!\n\n<0x10009:0x000a0c00>O, wat moet ik doen? Het is door het\nwolkendek gevallen, dus ik kan het net zo\ngoed gewoon opgeven.\n[1-]Ga op zoek![2]Geef het op.")
          									goto flw_54
          								  case 1:
          									goto flw_52
          								}
          							}
          						  case 1:
          							flw_41:
/*< 41>*/ 							printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x0000000f>Bah... Mijn superlollige roulettewiel van\nplezier is van het eiland gevallen,\nhelemaal naar beneden, voorbij de\nwolken...\nZonder dat wiel is mijn droom van pret\nen spellen voorgoed voorbij. Ik heb zo\nnergens meer fut voor. Mijn lach en een\ntraan zijn steeds vaker alleen nog tranen.")
          						}
          					  case 1:
          						goto flw_41
          					}
          				}
          			}
          		  case 1:
/*<107>*/ 			switch (temp_flags[4 /* 0x1 10 */]) {
          			  case 0:
/*<108>*/ 				printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000001><color blue<PRETEILAND>coloroff>! Het ruikt hier nu al naar\nplezierig gevaar en gevaarlijke pret, vind\nje ook niet?! Ik ben nog bezig alles klaar\nte zetten, dus kom later nog eens terug!")
          			  case 1:
/*< 39>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x000d0001>Ya-hoooi! Kom dat zien, jongeman!\n\n\n\n<0x10009:0x00090600>Je vraagt je vanzelfsprekend af wat dit\nhier nou weer voor moet stellen?\n[1-]Misschien wel.[2]Nee.")
/*< 46>*/ 				switch (choice(2)) {
          				  case 0:
/*< 48>*/ 					printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x000d0002>Oooe! Naar dat antwoord was ik op zoek!\nJe bent een scherpe jongeman, dat ben je!\n\n\n<0x10009:0x00080600>Ik hoop van dit eiland een ware PRETplek\nte maken, waar iedereen welkom is om\nzich op te laten vrolijken...\n\nHoe ik dit eiland heb genoemd? Of wilde\nje dat niet weten?<pause 30> Ik vertel het toch! Het\nheet: het <color blue<PRETEILAND>coloroff>!\n\n<0x10009:0x00120600>Ik ben nog niet helemaal klaar met het\nopbouwen van het eiland, dus hopelijk\nkom je later nog eens! Je zult versteld\nstaan van alle KLEUREN en PLEZIER!")
/*<106>*/ 					temp_flags[4 /* 0x1 10 */] = true;
          				  case 1:
/*< 47>*/ 					printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x000d0c03>Nou, nou, nou! Dat is toch niet leuk?!\n\n\n\n<0x10009:0x00080600>Ik doe hier mijn uiterste best om dromen\nuit te laten komen en dit krijg ik ervoor\nterug...")
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
/*<117>*/ 		wait_frames(50)
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 1, line: 12 */ "<0x10009:0x0000ff05>Wahoooooe! Wat vre-se-lijk, vreselijk\nONPRETTIG. Je bent op een verliezers-\nvak terechtgekomen.\n\nDat betekent dat <color red<<numeric arg2 0>>coloroff> van je rupees nu van mij\nzijn. Tihihi!")
/*< 25>*/ 		make_actor_do_something(1, 0)
          		flw_89:
/*< 89>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 125, 'param3': 45}
/*<125>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<116>*/ 		{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 6912, 'next': 118, 'param3': 13}
/*<118>*/ 		wait_frames(50)
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x0000ff05>Tihihi, o jee! Wat ONPRETTIG. Je hebt\neen denkbeeldige buidel met wel <color red<0 rupees\n>coloroff>gewonnen. Maar! Geef niet op, jongeman.\nKom snel weer langs!")
          		goto flw_89
          	  case 2:
/*<119>*/ 		{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5888, 'next': 121, 'param3': 13}
/*<121>*/ 		wait_frames(85)
/*< 17>*/ 		printf(/* textboxtype: 1, unk: 1, line: 15 */ "<0x10009:0x00ffff06>WA-HAHA! Is dat niet een prettig, LEUK\nvak waarop je geland bent?\n\n\n<0x10009:0x000d0600>Je bent op een <numeric arg0 0>-rupeevak geland en je\nbonuspuntenteller staat op <numeric arg1 0>! Dus je wint\nin totaal <color red<<numeric arg2 0>>coloroff> rupees!")
/*<123>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			flw_23:
/*< 23>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "Hier heb je je grote prijs van wel\n<numeric arg2 0> <0x30004:0x01cd>!")
/*< 32>*/ 			make_actor_do_something(1, 0)
/*< 90>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 124, 'param3': 45}
/*<124>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*< 27>*/ 			printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00120600>Ik heb een heel speciale prijs voor de heel\nspeciale mensen die door vijf ringen\nweten te tuimelen zonder een Dodoh-bal te\nraken... en op een 50-rupeevlak landen!\n<0x10009:0x00081000>Ik hoop maar dat je nog een sprong durft\nte wagen voor mijn Rupee-roulette!")
          			goto flw_23
          		}
          	  case 3:
/*<120>*/ 		{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 5120, 'next': 122, 'param3': 13}
/*<122>*/ 		wait_frames(130)
/*< 24>*/ 		printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00ffff06>Nu-huhuhu! Je bent op een geweldig\n50-rupeevak geland!\n\n\nJe bonuspuntenteller staat op <numeric arg1 0> en dat\nbetekent dat je wel <color red<<numeric arg2 0> rupees>coloroff> wint!")
/*< 86>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			goto flw_23
          		  case 1:
/*< 18>*/ 			switch (context_related2(0)) {
          			  case 0:
/*< 20>*/ 				printf(/* textboxtype: 0, unk: 0, line: 17 */ "Je bent door al mijn bonusringen heen\ngetuimeld! Drie keer raden welke\njongeman er een speciale prijs verdiend\nheeft? Kom op, RAAD MAAR!")
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
/*< 28>*/ 				printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00120600>Ik heb een heel speciale prijs voor de heel\nspeciale mensen die door vijf ringen\nweten te tuimelen zonder een Dodoh-bal te\nraken... en op een 50-rupeevlak landen!\n<0x10009:0x00081000>Ik hoop maar dat je nog een sprong durft\nte wagen voor mijn Rupee-roulette!")
          				goto flw_23
          			}
          		}
          	}
          }

          void entrypoint_110_04() {
/*< 61>*/ 	start()
/*< 73>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*< 66>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00000006>Dank je, dank je, DANK JE! Nu kan ik\ndan eindelijk mijn droom verwezenlijken\nom een <color blue<Preteiland >coloroff>te openen!\n\n<0x10009:0x00000a00>WOEYAAAH! Ik ben ZO BLIJ!")
/*< 67>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "En jij, jongeman, wordt mijn eerste\nklant! Wat zeg je daarvan? O, ik ben zo\nblij! En we gaan zo'n PRET hebben!")
/*< 43>*/ 		story_flags[398 /* us: 805A9B0E 0x01, jp: 805ACD8E 0x01 */] = true;
/*< 60>*/ 		give_gratitude_crystals();
          	  case 1:
/*< 63>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 65>*/ 			printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x00000007>YA-HOOOOOOI! Mijn roulettewiel!")
/*< 72>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		  case 1:
/*< 62>*/ 			printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x0000000b>IS DIT... IS DIT?!\n\n\n\nJA, DAT IS HET! DAT IS HET!")
/*< 64>*/ 			zone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	}
          }

          void entrypoint_110_05() {
/*< 71>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10012:0x00000064>Ik heb hier dat wiel voor je, bzzzrrrt!")
/*< 70>*/ 	make_actor_do_something(0, 0)
/*< 69>*/ 	printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10012:0x00000064>Als je wat anders wil, zzrrrrt, laat het me\ndan weten.")
          }

