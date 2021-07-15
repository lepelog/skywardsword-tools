          void entrypoint_116_01() {
          	start()
/*< 13>*/ 	switch (context_related4(1)) {
          	  case 0:
/*< 24>*/ 		switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          		  case 0:
/*< 25>*/ 			switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          			  case 0:
          				flw_5:
/*<  5>*/ 				switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          				  case 0:
/*< 57>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 115, 'param3': 12}
/*<115>*/ 					check_item_flag(71, 1)
/*<114>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 64}) {
          					  case 0:
/*<  4>*/ 						printf("\x0E\x01\x09\x04\x00\x01Ben je er klaar voor om beeldschone\ninsecten te vangen? Misschien bevalt het\nwel zo goed, dat je hier niet meer weg wil.\nHehe.\nHet makkelijke larvenniveau kost <r<20\nrupees>> en de stekende wespentest kost\n<r<50 rupees>>. Wat zeg je ervan?\n[1]Larvenniveau![2]Wespentest![3-]Nee, bedankt.")
          						flw_1:
/*<  1>*/ 						switch (choice(3)) {
          						  case 0:
/*<102>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 96>*/ 								switch (has_rupees(20)) {
          								  case 0:
/*< 98>*/ 									rupees += -20;
/*< 91>*/ 									printf("\x0E\x01\x09\x04\x03\x100Ik ga je tijd bijhouden tijdens je\ninsectenjacht. Als je tijd heel goed is,\ndan win je een prijs!\n\n\x0E\x01\x09\x04\x00\x100Voor het larvenniveau laat ik je plaatjes\nvan vijf verschillende insecten zien.\nVang er één van elk soort en je bent\nklaar! Snap je? Goed, ga klaarstaan...")
/*< 75>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = false;
/*<  2>*/ 									make_actor_do_something(0, 0)
          								  case 1:
/*< 97>*/ 									printf("\x0E\x01\x09\x04\x12\x315Je hebt niet genoeg rupees bij je. Dacht je\nsoms dat ik je korting zou geven omdat\nwe naar dezelfde school gingen?\nKansloos. Hehe.")
          								}
          							  case 1:
          								flw_104:
/*<104>*/ 								printf("\x0E\x01\x09\x04\x12\x813Je was van plan om met weinig <r<hartjes>> op\ninsectenjacht te gaan? Je zult dit echt wat\nserieuzer moeten nemen. Hehe.\n\n\x0E\x01\x09\x04\x00\x100Kom maar terug wanneer je wat meer\nhartjes hebt.")
          							}
          						  case 1:
/*<103>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 93>*/ 								switch (has_rupees(50)) {
          								  case 0:
/*< 95>*/ 									rupees += -50;
/*< 92>*/ 									printf("\x0E\x01\x09\x04\x03\x100Ik ga je tijd bijhouden tijdens je\ninsectenjacht. Als je tijd heel goed is,\ndan win je een prijs!\n\n\x0E\x01\x09\x04\x00\x100Voor de wespentest moet je tien insecten\nvangen, maar alleen van de acht verschil-\nlende soorten die ik je laat zien.\nDuidelijk? Ga klaarstaan!")
/*< 76>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = true;
/*< 12>*/ 									make_actor_do_something(1, 0)
          								  case 1:
/*< 94>*/ 									printf("\x0E\x01\x09\x04\x12\x315Je hebt niet genoeg rupees bij je. Dacht je\nsoms dat ik je korting zou geven omdat\nwe naar dezelfde school gingen?\nKansloos. Hehe.")
          								}
          							  case 1:
          								goto flw_104
          							}
          						  case 2:
/*<  3>*/ 							printf("\x0E\x01\x09\x04\x12\x513Ach, dan ben je toch niet een echte\nliefhebber van insecten, zoals ik.")
          						}
          					  case 1:
/*<116>*/ 						printf("\x0E\x01\x09\x04\x13\x80AHè? Je hebt niet eens een <r<net>>? Niet te\ngeloven.\n\n\n\x0E\x01\x09\x04\x00\x500Je hebt nog nooit de adrenaline van een\ninsectenjacht gevoeld? Arme jij.\n\n\n\x0E\x01\x09\x04\x03\x100Je kunt een vangnet kopen in <r<Beedles\nwolkenwinkel>>, dus waar wacht je nog op?\nGa nu naar die winkel!")
          					}
          				  case 1:
/*< 56>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 7, 'param3': 12}
/*<  7>*/ 					story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */] = true;
/*< 49>*/ 					story_flags[286 /* us: 805A9AFA 0x01, jp: 805ACD7A 0x01 */] = true;
/*<  6>*/ 					printf("\x0E\x01\x09\x04\x00\x01\x0E\x03\x01\x00Link? Wat een toeval dat ik\njou hier aantref. Hehe.\n\n\n\x0E\x01\x09\x04\x12\x600Ik vloog door een dikke mist toen ik dit\neiland vond.\n\n\n\x0E\x01\x09\x04\x00\x100Toen ik om me heen keek, zag ik het... Dit\nis... het Insectenparadijs!\n\n\n\x0E\x01\x09\x04\x03\x104Mijn droom om een zwerm insecten te\nvertroetelen, kon eindelijk uitkomen.\nEn nu breng ik elke dag door met mijn\ninsectenvrienden! Hehe.\n\x0E\x01\x09\x04\x00\x100Wil je proberen om er een paar te\nvangen? Ik laat er een paar voor je vrij,\ndus probeer het gewoon eens, oké?")
/*<112>*/ 					check_item_flag(71, 1)
/*<111>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 62}) {
          					  case 0:
/*<110>*/ 						printf("\x0E\x01\x09\x04\x00\x100Ik heb twee niveaus bedacht voor mijn\ninsectenvangwedstrijd: het makkelijke\n<r<larvenniveau>> en de stekende <r<wespentest\n>>voor experts zoals ik.\n\x0E\x01\x09\x04\x03\x100Aangezien je je arthropode-affectie\nnog moet bewijzen, kost een larvenlevel\nje <r<20 rupees >>en een wespentest <r<50 rupees>>.\nWat zeg je ervan?\n[1]Larvenniveau![2]Wespentest![3-]Nee, dank je.")
          						goto flw_1
          					  case 1:
/*<113>*/ 						printf("\x0E\x01\x09\x04\x13\x80AHè? Je hebt niet eens een <r<net>>? Niet te\ngeloven.\n\n\n\x0E\x01\x09\x04\x00\x500Je hebt nog nooit de adrenaline van een\ninsectenjacht gevoeld? Arme jij.\n\n\n\x0E\x01\x09\x04\x03\x100Je kunt een vangnet kopen in <r<Beedles\nwolkenwinkel>>, dus waar wacht je nog op?\nGa nu naar die winkel!")
          					}
          				}
          			  case 1:
/*< 26>*/ 				switch (story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */]) {
          				  case 0:
/*< 42>*/ 					printf("\x0E\x01\x09\x04\x00\x04Hehe... Je komt een poging wagen om de\n<b<gigantor>> terug te winnen?\n[1]Natuurlijk![2-]Nee.")
          					flw_50:
/*< 50>*/ 					switch (choice(2)) {
          					  case 0:
/*< 58>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 36, 'param3': 12}
/*< 36>*/ 						printf("En ik doe dit nog steeds niet voor niks,\ndus het kost <r<10 rupees >>om te spelen...\n[1]Oké...[2-]Nee, dank je.")
/*< 53>*/ 						switch (choice(2)) {
          						  case 0:
/*< 38>*/ 							switch (has_rupees(10)) {
          							  case 0:
/*<105>*/ 								switch (context_related2(0)) {
          								  case 0:
/*<118>*/ 									check_item_flag(71, 1)
/*<117>*/ 									switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 66}) {
          									  case 0:
/*< 40>*/ 										rupees += -10;
/*< 41>*/ 										printf("\x0E\x01\x09\x04\x04\x100Goed, vang de tien insecten die ik voor je\nuitkies!\n\n\n\x0E\x01\x09\x04\x03\x100Ik hou je tijd bij. Je moet ze alle tien\n<r<binnen drie minuten>> zien te vangen.\n\n\n\x0E\x01\x09\x04\x00\x100Als dat je lukt, dan geef ik je de\n<b<gigantor>>.\n\n\nKlaar voor de start? Dan kan het spel\nbeginnen.")
/*< 37>*/ 										make_actor_do_something(1, 0)
          									  case 1:
/*<119>*/ 										printf("\x0E\x01\x09\x04\x13\x807Ho, stop! Waar is je <y<net>>? Zonder net help\nik je niet.\n\n\n\x0E\x01\x09\x04\x04\x100Kom maar terug wanneer je eindelijk een\nvangnet gekocht hebt!")
          									}
          								  case 1:
/*<106>*/ 									printf("\x0E\x01\x09\x04\x12\x813Je was van plan om met weinig <r<hartjes>> op\ninsectenjacht te gaan? Je zult dit echt wat\nserieuzer moeten nemen. Hehe.\n\n\x0E\x01\x09\x04\x00\x100Kom maar terug wanneer je wat meer\nhartjes hebt.")
          								}
          							  case 1:
/*< 39>*/ 								printf("\x0E\x01\x09\x04\x12\x315Je hebt niet genoeg rupees bij je. Dacht je\nsoms dat ik je korting zou geven omdat\nwe naar dezelfde school gingen?\nKansloos. Hehe.")
          							}
          						  case 1:
          							flw_52:
/*< 52>*/ 							printf("\x0E\x01\x09\x04\x12\x305O, ben je hier dan om onderdeel van mijn\nverzameling te worden?\n\n\n\x0E\x01\x09\x04\x00\x100Je bent net een grote, irritante mug...\nHehe.\x0E\x01\x09\x04\x00\x04")
          						}
          					  case 1:
          						goto flw_52
          					}
          				  case 1:
/*< 31>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 28, 'param3': 31}
/*< 28>*/ 					printf("\x0E\x01\x09\x04\x00\x04Hehe. Kijk aan, als dat Link\nniet is! Hoe is het ermee?\n\n\n\x0E\x01\x09\x04\x00\x100O, je vindt dat ik bijzonder vrolijk ben?\nHehe... Tja, dat klopt eigenlijk wel.\n\n\nIk heb niet zo lang geleden een extreem\nzeldzaam insect ontdekt!\n[1]Vertel me meer![2]Geen interesse...")
/*< 29>*/ 					switch (choice(2)) {
          					  case 0:
/*< 27>*/ 						story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */] = true;
/*< 32>*/ 						printf("\x0E\x01\x09\x04\x03\x100O, je wilt meer weten? Hehe.\n\n\n\nNou...<pause1E> \x0E\x01\x09\x04\x13\x100Zou je me geloven als ik zeg dat\nik een echte <b<gigantor >>gevangen heb...<b<\n\n\n>>\x0E\x01\x09\x04\x03\x100Ik kan het zelf ook nauwelijks geloven!\nWat is de kans dat je zoiets tegenkomt?\nIk ben zo blij dat ik kramp heb van het\nlachen!")
/*< 54>*/ 						printf("\x0E\x01\x09\x04\x01\x800Wat?! Deze kever is een huisdier van\nBeedle? Die Beedle met zijn vliegende\nwinkel waarin hij allerlei troep verkoopt?\n[1]Geef die tor terug![2]Arme Beedle...")
/*< 33>*/ 						switch (choice(2)) {
          						  case 0:
/*< 35>*/ 							printf("\x0E\x01\x09\x04\x10\x800Dacht je echt dat je zielige verhaal op\nmij zou werken? Wat een grap. Hehe.\n\n\n\x0E\x01\x09\x04\x13\x100Ik heb deze tor eerlijk gevonden, dus hij\nis van mij alleen!")
          							flw_51:
/*< 51>*/ 							printf("Misschien is het wel erg gemeen om\niemands lievelingsinsect te stelen\x0E\x01\x06\x02\xFDCD...\x0E\x01\x06\x02Í\n\n\n\x0E\x01\x09\x04\x12\x100Maar toch, ik kan zo'n schitterende schat\nvan een tor niet zomaar terug geven...\n\n\n\x0E\x01\x09\x04\x00\x500Wat denk je hiervan?\n\n\n\n\x0E\x01\x09\x04\x00\x100Als jij bij het insectenvangspel een betere\ntijd neerzet dan de mijne, dan geef ik je\nde gigantor.\n\n\x0E\x01\x09\x04\x03\x100Dus durf je het aan? Hehe. Nou?\n[1]Kom maar op![2-]Niet nu.")
          							goto flw_50
          						  case 1:
/*< 34>*/ 							printf("\x0E\x01\x09\x04\x12\x500Heb je enig idee hoeveel dit insect wel\nniet waard is?\n\n\n\x0E\x01\x09\x04\x00\x100Met deze grote jongen in mijn\nverzameling, zullen alle verzamelaars\nvan insecten naar me opkijken! Ik zal\nberoemd worden!")
          							goto flw_51
          						}
          					  case 1:
/*< 30>*/ 						printf("\x0E\x01\x09\x04\x12\x515O, ik zie het al... Jij bent een listige...")
          					}
          				}
          			}
          		  case 1:
          			goto flw_5
          		}
          	  case 1:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\x05Hé! Je was toch niet van plan van deze\nronde weg te lopen, of wel?\n[1]Ja, ik stop![2-]Nee, ik ga verder.")
/*< 17>*/ 		switch (choice(2)) {
          		  case 0:
/*< 14>*/ 			printf("\x0E\x01\x09\x04\x12\x500Je stopt er dus echt mee... Dan ben je toch\nniet zo'n fan van insecten als ik.")
/*< 18>*/ 			make_actor_do_something(3, 0)
          		  case 1:
/*< 16>*/ 			printf("Hehe, nou, hè? De tijd vliegt wanneer\nje op insecten jaagt!")
          		}
          	  case 2:
/*< 19>*/ 		printf("\x0E\x01\x09\x04\x12\x500Nou, eh... Je doet er wel erg lang over,\nvind je niet?\n\n\n\x0E\x01\x09\x04\x00\x100Je hebt nog niet alle insecten gevangen,\nmaar je tijd is om!")
/*< 23>*/ 		make_actor_do_something(4, 0)
          	  case 3:
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x13\x1000Niet zo snel! Hehe. Het is niet de\nbedoeling dat je als insectenvoer eindigt!\n\n\n\x0E\x01\x09\x04\x03\x100Insecten vechten terug, vergeet dat niet!\nIk wil niet dat je hier wat overkomt, dus\nik heb het spel onderbroken.")
/*<100>*/ 		make_actor_do_something(4, 0)
          	}
          }

          void entrypoint_116_02() {
/*<  8>*/ 	start()
/*<128>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 61, 'param3': 42}
/*< 61>*/ 	switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          	  case 0:
          		flw_9:
/*<  9>*/ 		switch (context_related4(0)) {
          		  case 0:
/*< 20>*/ 			switch (context_related4(2)) {
          			  case 0:
/*< 44>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 10, 'param3': 44}
/*< 10>*/ 				printf("\x0E\x01\x09\x04\x12\x107Ennn... de tijd is om! Hmm... Zo te zien\nkun je wel wat extra training gebruiken.\n\n\n\x0E\x01\x09\x04\x00\x100Probeer eens je tijd <r<onder de vijf\nminuten>> te krijgen en geef het niet op!\n\n\n\x0E\x01\x09\x04\x03\x100Trouwens, als je ooit een beeldschoon\ninsect weet te vangen, kom dan 's nachts\nnaar mijn kamer op Skyloft. Dan koop ik\nde insecten waar je vanaf wil.")
/*< 45>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 21>*/ 				printf("\x0E\x01\x09\x04\x12\x500Eigenlijk is het triest. Hehe. Dat je\ninsectenvangen niet kan waarderen,\nbedoel ik.\n\n\x0E\x01\x09\x04\x00\x100Kom terug als je van gedachten\nverandert!")
          			  case 2:
/*< 22>*/ 				printf("\x0E\x01\x09\x04\x03\x100Sorry, ik geef je niet je geld terug!\n\n\n\n\x0E\x01\x09\x04\x00\x100Misschien heb je de volgende keer meer\ngeluk. Hehe.")
          			  case 3:
/*<101>*/ 				printf("\x0E\x01\x09\x04\x00\x04Hehe... Ik had niet verwacht dat je\nzoveel van insectenvangen zou houden.\nEn al zeker niet dat je je eigen leven op\nhet spel zou zetten!\n\x0E\x01\x09\x04\x00\x500Sorry, je krijgt geen geld terug! Kom\nmaar terug als je meer hartjes hebt.")
          			}
          		  case 1:
/*< 79>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 77, 'param3': 44}
/*< 77>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 78>*/ 				printf("\x0E\x01\x09\x04\x12\x104Je tijd is om! Ik geef eerlijk toe, het zag\ner goed uit. Hehe.\n\n\n\x0E\x01\x09\x04\x00\x100Als je onthoudt waar de verschillende\ninsecten wonen, kun je ze sneller vangen.\nMisschien zelfs <r<binnen drie minuten>>.")
/*< 59>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 120, 'param3': 12}
/*<120>*/ 				printf("\x0E\x01\x09\x04\x03\x100Goed, hier heb je je prijs van <r<80 rupees>>!")
/*< 81>*/ 				rupees += 80;
/*< 80>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 11>*/ 				printf("\x0E\x01\x09\x04\x00\x04Oké, dat was het! Hm. Ik had wel\nverwacht dat je zo lang bezig zou zijn.\n\n\n\x0E\x01\x09\x04\x00\x100Weet je, soms kun je een insect op een\nandere plek makkelijker vangen. Zoek\ngoed naar de ideale plek. Hehe.")
/*<122>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 121, 'param3': 12}
/*<121>*/ 				printf("\x0E\x01\x09\x04\x03\x100Probeer het hierna een keer <r<binnen drie\nminuten>> te doen. O, en hier is je beloning.\nPak aan, <r<30 rupees>>.")
/*< 55>*/ 				rupees += 30;
/*< 46>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 2:
/*< 88>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 87, 'param3': 44}
/*< 87>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 83>*/ 				printf("\x0E\x01\x09\x04\x00\x811Oké! Je tijd is om! Hé, dit... is geweldig!\n\n\n\n\x0E\x01\x09\x04\x00\x100Het lijkt erop dat je op de tweede plaats\neindigt als de op één na beste insecten-\njager. Probeer het ook eens in <r<minder dan\ntwee minuten>> te doen!\nAls dat je lukt, win je <r<vijf bloedmooie\ninsecten>>! Wie wil dat nu niet?")
/*< 82>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 45}
/*<129>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<108>*/ 				give_item(23 0x17);
/*<130>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<125>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00Zorg alsjeblieft goed voor ze. Hehe.")
          			  case 1:
/*< 60>*/ 				printf("\x0E\x01\x09\x04\x00\x11Je tijd is om! En wauw, dat is indruk-\nwekkend. Je bent een natuurtalent!\n\n\n\x0E\x01\x09\x04\x12\x500Maar dat is geen reden om overmoedig\nte zijn. Om mijn beste insecten te winnen\nmoet je nog beter presteren!")
/*<124>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 123, 'param3': 12}
/*<123>*/ 				printf("Doe de volgende keer je uiterste best,\ngeef alles voor die insecten! En doe het\nin <r<minder dan twee minuten>>.\n\nO, en je prijs is <r<50 rupees>>!")
/*< 86>*/ 				rupees += 50;
/*< 47>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 3:
/*< 90>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 89, 'param3': 44}
/*< 89>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 84>*/ 				printf("\x0E\x01\x09\x04\x13\x811En stop de tijd! D-Dit... Wauw!\n\n\n\n\x0E\x01\x09\x04\x00\x100Je laat me geen keuze. Ik benoem je\nhierbij officieel tot de beste insectenjager\naller tijden! Ik kan het nog steeds niet\ngeloven...\n\x0E\x01\x09\x04\x04\x100Voordat ik het vergeet! Je prijs. Ik geef\nje hierbij <r<vijf>> zeldzame insecten!")
/*< 85>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 131, 'param3': 45}
/*<131>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<109>*/ 				give_item(24 0x18);
/*<133>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<126>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00Zorg alsjeblieft goed voor ze. Hehe.")
          			  case 1:
/*< 43>*/ 				printf("\x0E\x01\x09\x04\x03\x811Stop! Stop! Je tijd is om! Dat was...\nongelooflijk!\n\n\n\x0E\x01\x09\x04\x12\x100O, maar vergeet niet dat dat nog maar\nhet makkelijke larvenniveau was!\n\n\n\x0E\x01\x09\x04\x00\x100Probeer de volgende keer ook eens de\nstekende wespentest! Hier heb je <r<vijf>> van\nmijn favoriete <r<insecten>>!")
/*< 48>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 132, 'param3': 45}
/*<132>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<107>*/ 				give_item(22 0x16);
/*<134>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<127>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00Zorg alsjeblieft goed voor ze. Hehe.")
          			}
          		}
          	  case 1:
/*< 62>*/ 		switch (story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */]) {
          		  case 0:
/*< 63>*/ 			switch (context_related4(0)) {
          			  case 0:
/*< 73>*/ 				switch (context_related3(0)) {
          				  case 0:
          					flw_65:
/*< 65>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 64, 'param3': 44}
          					flw_64:
/*< 64>*/ 					printf("\x0E\x01\x09\x04\x00\x13Pfoe...\n\n\n\n\x0E\x01\x09\x04\x12\x500Sorry, hehe. Je krijgt de <b<gigantor>> niet\nterug!\n\n\n\x0E\x01\x09\x04\x00\x100Met zo'n tijd red je het helaas niet. Je zult\nhet op zijn minst in minder dan drie\nminuten moeten doen... Kom op! Laat dat\nnetje fijn wapperen!")
/*< 66>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          				  case 1:
          					goto flw_64
          				  case 2:
          					goto flw_64
          				}
          			  case 1:
          				goto flw_65
          			  case 2:
          				flw_72:
/*< 72>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 71, 'param3': 44}
/*< 71>*/ 				printf("Goed, je tijd is om! \x0E\x01\x09\x04\x00\x04Hehe... Ik moet\nzeggen dat ik niet gedacht had dat je\nmijn record zo makkelijk zou verbeteren!")
/*< 67>*/ 				printf("\x0E\x01\x09\x04\x12\x500Oké... Beloofd is beloofd, hier is de\n<b<gigantor>>.\n\n\n\x0E\x01\x09\x04\x00\x100Je hebt je ontpopt als een zeer succesvolle\ninsectenvanger.\n\n\n\x0E\x01\x09\x04\x03\x100Hehe...")
/*< 68>*/ 				story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */] = true;
/*< 69>*/ 				give_item(159 0x9F);
/*< 74>*/ 				printf("\x0E\x01\x09\x04\x04\x500Doe Beedle de groeten. En zeg hem dat\nhet me spijt, als insectenliefhebber, dat ik\neen vriend van de insectenwereld zo'n\nstress bezorgd heb.")
/*< 70>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 3:
          				goto flw_72
          			}
          		  case 1:
          			goto flw_9
          		}
          	}
          }

