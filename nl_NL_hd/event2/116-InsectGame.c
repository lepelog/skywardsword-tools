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
/*<  4>*/ 						printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00000001>Ben je er klaar voor om beeldschone\ninsecten te vangen? Misschien bevalt het\nwel zo goed, dat je hier niet meer weg wil.\nHehe.\nHet makkelijke larvenniveau kost <color red<20\nrupees>coloroff> en de stekende wespentest kost\n<color red<50 rupees>coloroff>. Wat zeg je ervan?\n[1-]Larvenniveau![2-]Wespentest![3]Nee, bedankt.")
          						flw_1:
/*<  1>*/ 						switch (choice(3)) {
          						  case 0:
/*<102>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 96>*/ 								switch (has_rupees(20)) {
          								  case 0:
/*< 98>*/ 									rupees += -20;
/*< 91>*/ 									printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00030100>Ik ga je tijd bijhouden tijdens je\ninsectenjacht. Als je tijd heel goed is,\ndan win je een prijs!\n\n<0x10009:0x00000100>Voor het larvenniveau laat ik je plaatjes\nvan vijf verschillende insecten zien.\nVang er één van elk soort en je bent\nklaar! Snap je? Goed, ga klaarstaan...")
/*< 75>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = false;
/*<  2>*/ 									make_actor_do_something(0, 0)
          								  case 1:
/*< 97>*/ 									printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00120315>Je hebt niet genoeg rupees bij je. Dacht je\nsoms dat ik je korting zou geven omdat\nwe naar dezelfde school gingen?\nKansloos. Hehe.")
          								}
          							  case 1:
          								flw_104:
/*<104>*/ 								printf(/* textboxtype: 1, unk: 1, line: 6 */ "<0x10009:0x00120813>Je was van plan om met weinig <color red<hartjes>coloroff> op\ninsectenjacht te gaan? Je zult dit echt wat\nserieuzer moeten nemen. Hehe.\n\n<0x10009:0x00000100>Kom maar terug wanneer je wat meer\nhartjes hebt.")
          							}
          						  case 1:
/*<103>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 93>*/ 								switch (has_rupees(50)) {
          								  case 0:
/*< 95>*/ 									rupees += -50;
/*< 92>*/ 									printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00030100>Ik ga je tijd bijhouden tijdens je\ninsectenjacht. Als je tijd heel goed is,\ndan win je een prijs!\n\n<0x10009:0x00000100>Voor de wespentest moet je tien insecten\nvangen, maar alleen van de acht verschil-\nlende soorten die ik je laat zien.\nDuidelijk? Ga klaarstaan!")
/*< 76>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = true;
/*< 12>*/ 									make_actor_do_something(1, 0)
          								  case 1:
/*< 94>*/ 									printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00120315>Je hebt niet genoeg rupees bij je. Dacht je\nsoms dat ik je korting zou geven omdat\nwe naar dezelfde school gingen?\nKansloos. Hehe.")
          								}
          							  case 1:
          								goto flw_104
          							}
          						  case 2:
/*<  3>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00120513>Ach, dan ben je toch niet een echte\nliefhebber van insecten, zoals ik.")
          						}
          					  case 1:
/*<116>*/ 						printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x0013080a>Hè? Je hebt niet eens een <color red<net>coloroff>? Niet te\ngeloven.\n\n\n<0x10009:0x00000500>Je hebt nog nooit de adrenaline van een\ninsectenjacht gevoeld? Arme jij.\n\n\n<0x10009:0x00030100>Je kunt een vangnet kopen in <color red<Beedles\nwolkenwinkel>coloroff>, dus waar wacht je nog op?\nGa nu naar die winkel!")
          					}
          				  case 1:
/*< 56>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 7, 'param3': 12}
/*<  7>*/ 					story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */] = true;
/*< 49>*/ 					story_flags[286 /* us: 805A9AFA 0x01, jp: 805ACD7A 0x01 */] = true;
/*<  6>*/ 					printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001><0x30001:0x><heroname>? Wat een toeval dat ik\njou hier aantref. Hehe.\n\n\n<0x10009:0x00120600>Ik vloog door een dikke mist toen ik dit\neiland vond.\n\n\n<0x10009:0x00000100>Toen ik om me heen keek, zag ik het... Dit\nis... het Insectenparadijs!\n\n\n<0x10009:0x00030104>Mijn droom om een zwerm insecten te\nvertroetelen, kon eindelijk uitkomen.\nEn nu breng ik elke dag door met mijn\ninsectenvrienden! Hehe.\n<0x10009:0x00000100>Wil je proberen om er een paar te\nvangen? Ik laat er een paar voor je vrij,\ndus probeer het gewoon eens, oké?")
/*<112>*/ 					check_item_flag(71, 1)
/*<111>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 62}) {
          					  case 0:
/*<110>*/ 						printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000100>Ik heb twee niveaus bedacht voor mijn\ninsectenvangwedstrijd: het makkelijke\n<color red<larvenniveau>coloroff> en de stekende <color red<wespentest\n>coloroff>voor experts zoals ik.\n<0x10009:0x00030100>Aangezien je je arthropode-affectie\nnog moet bewijzen, kost een larvenlevel\nje <color red<20 rupees >coloroff>en een wespentest <color red<50 rupees>coloroff>.\nWat zeg je ervan?\n[1-]Larvenniveau![2-]Wespentest![3]Nee, dank je.")
          						goto flw_1
          					  case 1:
/*<113>*/ 						printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x0013080a>Hè? Je hebt niet eens een <color red<net>coloroff>? Niet te\ngeloven.\n\n\n<0x10009:0x00000500>Je hebt nog nooit de adrenaline van een\ninsectenjacht gevoeld? Arme jij.\n\n\n<0x10009:0x00030100>Je kunt een vangnet kopen in <color red<Beedles\nwolkenwinkel>coloroff>, dus waar wacht je nog op?\nGa nu naar die winkel!")
          					}
          				}
          			  case 1:
/*< 26>*/ 				switch (story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */]) {
          				  case 0:
/*< 42>*/ 					printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00000004>Hehe... Je komt een poging wagen om de\n<color blue<gigantor>coloroff> terug te winnen?\n[1-]Natuurlijk![2]Nee.")
          					flw_50:
/*< 50>*/ 					switch (choice(2)) {
          					  case 0:
/*< 58>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 36, 'param3': 12}
/*< 36>*/ 						printf(/* textboxtype: 1, unk: 0, line: 36 */ "En ik doe dit nog steeds niet voor niks,\ndus het kost <color red<10 rupees >coloroff>om te spelen...\n[1-]Oké...[2]Nee, dank je.")
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
/*< 41>*/ 										printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00040100>Goed, vang de tien insecten die ik voor je\nuitkies!\n\n\n<0x10009:0x00030100>Ik hou je tijd bij. Je moet ze alle tien\n<color red<binnen drie minuten>coloroff> zien te vangen.\n\n\n<0x10009:0x00000100>Als dat je lukt, dan geef ik je de\n<color blue<gigantor>coloroff>.\n\n\nKlaar voor de start? Dan kan het spel\nbeginnen.")
/*< 37>*/ 										make_actor_do_something(1, 0)
          									  case 1:
/*<119>*/ 										printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00130807>Ho, stop! Waar is je <color yellow<net>coloroff>? Zonder net help\nik je niet.\n\n\n<0x10009:0x00040100>Kom maar terug wanneer je eindelijk een\nvangnet gekocht hebt!")
          									}
          								  case 1:
/*<106>*/ 									printf(/* textboxtype: 1, unk: 1, line: 6 */ "<0x10009:0x00120813>Je was van plan om met weinig <color red<hartjes>coloroff> op\ninsectenjacht te gaan? Je zult dit echt wat\nserieuzer moeten nemen. Hehe.\n\n<0x10009:0x00000100>Kom maar terug wanneer je wat meer\nhartjes hebt.")
          								}
          							  case 1:
/*< 39>*/ 								printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00120315>Je hebt niet genoeg rupees bij je. Dacht je\nsoms dat ik je korting zou geven omdat\nwe naar dezelfde school gingen?\nKansloos. Hehe.")
          							}
          						  case 1:
          							flw_52:
/*< 52>*/ 							printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00120305>O, ben je hier dan om onderdeel van mijn\nverzameling te worden?\n\n\n<0x10009:0x00000100>Je bent net een grote, irritante mug...\nHehe.<0x10009:0x00000004>")
          						}
          					  case 1:
          						goto flw_52
          					}
          				  case 1:
/*< 31>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 28, 'param3': 31}
/*< 28>*/ 					printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00000004>Hehe. Kijk aan, als dat <heroname>\nniet is! Hoe is het ermee?\n\n\n<0x10009:0x00000100>O, je vindt dat ik bijzonder vrolijk ben?\nHehe... Tja, dat klopt eigenlijk wel.\n\n\nIk heb niet zo lang geleden een extreem\nzeldzaam insect ontdekt!\n[1-]Vertel me meer![2-]Geen interesse...")
/*< 29>*/ 					switch (choice(2)) {
          					  case 0:
/*< 27>*/ 						story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */] = true;
/*< 32>*/ 						printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00030100>O, je wilt meer weten? Hehe.\n\n\n\nNou...<pause 30> <0x10009:0x00130100>Zou je me geloven als ik zeg dat\nik een echte <color blue<gigantor >coloroff>gevangen heb...<color blue<\n\n\n>coloroff><0x10009:0x00030100>Ik kan het zelf ook nauwelijks geloven!\nWat is de kans dat je zoiets tegenkomt?\nIk ben zo blij dat ik kramp heb van het\nlachen!")
/*< 54>*/ 						printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00010800>Wat?! Deze kever is een huisdier van\nBeedle? Die Beedle met zijn vliegende\nwinkel waarin hij allerlei troep verkoopt?\n[1-]Geef die tor terug![2-]Arme Beedle...")
/*< 33>*/ 						switch (choice(2)) {
          						  case 0:
/*< 35>*/ 							printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00100800>Dacht je echt dat je zielige verhaal op\nmij zou werken? Wat een grap. Hehe.\n\n\n<0x10009:0x00130100>Ik heb deze tor eerlijk gevonden, dus hij\nis van mij alleen!")
          							flw_51:
/*< 51>*/ 							printf(/* textboxtype: 0, unk: 1, line: 34 */ "Misschien is het wel erg gemeen om\niemands lievelingsinsect te stelen<0x10006:0xfdcd>...<0x10006:0x00cd>\n\n\n<0x10009:0x00120100>Maar toch, ik kan zo'n schitterende schat\nvan een tor niet zomaar terug geven...\n\n\n<0x10009:0x00000500>Wat denk je hiervan?\n\n\n\n<0x10009:0x00000100>Als jij bij het insectenvangspel een betere\ntijd neerzet dan de mijne, dan geef ik je\nde gigantor.\n\n<0x10009:0x00030100>Dus durf je het aan? Hehe. Nou?\n[1-]Kom maar op![2]Niet nu.")
          							goto flw_50
          						  case 1:
/*< 34>*/ 							printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x00120500>Heb je enig idee hoeveel dit insect wel\nniet waard is?\n\n\n<0x10009:0x00000100>Met deze grote jongen in mijn\nverzameling, zullen alle verzamelaars\nvan insecten naar me opkijken! Ik zal\nberoemd worden!")
          							goto flw_51
          						}
          					  case 1:
/*< 30>*/ 						printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00120515>O, ik zie het al... Jij bent een listige...")
          					}
          				}
          			}
          		  case 1:
          			goto flw_5
          		}
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000005>Hé! Je was toch niet van plan van deze\nronde weg te lopen, of wel?\n[1-]Ja, ik stop![2]Nee, ik ga verder.")
/*< 17>*/ 		switch (choice(2)) {
          		  case 0:
/*< 14>*/ 			printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00120500>Je stopt er dus echt mee... Dan ben je toch\nniet zo'n fan van insecten als ik.")
/*< 18>*/ 			make_actor_do_something(3, 0)
          		  case 1:
/*< 16>*/ 			printf(/* textboxtype: 0, unk: 0, line: 11 */ "Hehe, nou, hè? De tijd vliegt wanneer\nje op insecten jaagt!")
          		}
          	  case 2:
/*< 19>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00120500>Nou, eh... Je doet er wel erg lang over,\nvind je niet?\n\n\n<0x10009:0x00000100>Je hebt nog niet alle insecten gevangen,\nmaar je tijd is om!")
/*< 23>*/ 		make_actor_do_something(4, 0)
          	  case 3:
/*< 99>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00131000>Niet zo snel! Hehe. Het is niet de\nbedoeling dat je als insectenvoer eindigt!\n\n\n<0x10009:0x00030100>Insecten vechten terug, vergeet dat niet!\nIk wil niet dat je hier wat overkomt, dus\nik heb het spel onderbroken.")
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
/*< 10>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00120107>Ennn... de tijd is om! Hmm... Zo te zien\nkun je wel wat extra training gebruiken.\n\n\n<0x10009:0x00000100>Probeer eens je tijd <color red<onder de vijf\nminuten>coloroff> te krijgen en geef het niet op!\n\n\n<0x10009:0x00030100>Trouwens, als je ooit een beeldschoon\ninsect weet te vangen, kom dan 's nachts\nnaar mijn kamer op Skyloft. Dan koop ik\nde insecten waar je vanaf wil.")
/*< 45>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 21>*/ 				printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00120500>Eigenlijk is het triest. Hehe. Dat je\ninsectenvangen niet kan waarderen,\nbedoel ik.\n\n<0x10009:0x00000100>Kom terug als je van gedachten\nverandert!")
          			  case 2:
/*< 22>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00030100>Sorry, ik geef je niet je geld terug!\n\n\n\n<0x10009:0x00000100>Misschien heb je de volgende keer meer\ngeluk. Hehe.")
          			  case 3:
/*<101>*/ 				printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00000004>Hehe... Ik had niet verwacht dat je\nzoveel van insectenvangen zou houden.\nEn al zeker niet dat je je eigen leven op\nhet spel zou zetten!\n<0x10009:0x00000500>Sorry, je krijgt geen geld terug! Kom\nmaar terug als je meer hartjes hebt.")
          			}
          		  case 1:
/*< 79>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 77, 'param3': 44}
/*< 77>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 78>*/ 				printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00120104>Je tijd is om! Ik geef eerlijk toe, het zag\ner goed uit. Hehe.\n\n\n<0x10009:0x00000100>Als je onthoudt waar de verschillende\ninsecten wonen, kun je ze sneller vangen.\nMisschien zelfs <color red<binnen drie minuten>coloroff>.")
/*< 59>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 120, 'param3': 12}
/*<120>*/ 				printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00030100>Goed, hier heb je je prijs van <color red<80 rupees>coloroff>!")
/*< 81>*/ 				rupees += 80;
/*< 80>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 11>*/ 				printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x00000004>Oké, dat was het! Hm. Ik had wel\nverwacht dat je zo lang bezig zou zijn.\n\n\n<0x10009:0x00000100>Weet je, soms kun je een insect op een\nandere plek makkelijker vangen. Zoek\ngoed naar de ideale plek. Hehe.")
/*<122>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 121, 'param3': 12}
/*<121>*/ 				printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00030100>Probeer het hierna een keer <color red<binnen drie\nminuten>coloroff> te doen. O, en hier is je beloning.\nPak aan, <color red<30 rupees>coloroff>.")
/*< 55>*/ 				rupees += 30;
/*< 46>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 2:
/*< 88>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 87, 'param3': 44}
/*< 87>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 83>*/ 				printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000811>Oké! Je tijd is om! Hé, dit... is geweldig!\n\n\n\n<0x10009:0x00000100>Het lijkt erop dat je op de tweede plaats\neindigt als de op één na beste insecten-\njager. Probeer het ook eens in <color red<minder dan\ntwee minuten>coloroff> te doen!\nAls dat je lukt, win je <color red<vijf bloedmooie\ninsecten>coloroff>! Wie wil dat nu niet?")
/*< 82>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 45}
/*<129>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<108>*/ 				give_item(23 0x17);
/*<130>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<125>*/ 				printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00ffff00>Zorg alsjeblieft goed voor ze. Hehe.")
          			  case 1:
/*< 60>*/ 				printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00000011>Je tijd is om! En wauw, dat is indruk-\nwekkend. Je bent een natuurtalent!\n\n\n<0x10009:0x00120500>Maar dat is geen reden om overmoedig\nte zijn. Om mijn beste insecten te winnen\nmoet je nog beter presteren!")
/*<124>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 123, 'param3': 12}
/*<123>*/ 				printf(/* textboxtype: 0, unk: 0, line: 26 */ "Doe de volgende keer je uiterste best,\ngeef alles voor die insecten! En doe het\nin <color red<minder dan twee minuten>coloroff>.\n\nO, en je prijs is <color red<50 rupees>coloroff>!")
/*< 86>*/ 				rupees += 50;
/*< 47>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 3:
/*< 90>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 89, 'param3': 44}
/*< 89>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 84>*/ 				printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00130811>En stop de tijd! D-Dit... Wauw!\n\n\n\n<0x10009:0x00000100>Je laat me geen keuze. Ik benoem je\nhierbij officieel tot de beste insectenjager\naller tijden! Ik kan het nog steeds niet\ngeloven...\n<0x10009:0x00040100>Voordat ik het vergeet! Je prijs. Ik geef\nje hierbij <color red<vijf>coloroff> zeldzame insecten!")
/*< 85>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 131, 'param3': 45}
/*<131>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<109>*/ 				give_item(24 0x18);
/*<133>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<126>*/ 				printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00ffff00>Zorg alsjeblieft goed voor ze. Hehe.")
          			  case 1:
/*< 43>*/ 				printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00030811>Stop! Stop! Je tijd is om! Dat was...\nongelooflijk!\n\n\n<0x10009:0x00120100>O, maar vergeet niet dat dat nog maar\nhet makkelijke larvenniveau was!\n\n\n<0x10009:0x00000100>Probeer de volgende keer ook eens de\nstekende wespentest! Hier heb je <color red<vijf>coloroff> van\nmijn favoriete <color red<insecten>coloroff>!")
/*< 48>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 132, 'param3': 45}
/*<132>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<107>*/ 				give_item(22 0x16);
/*<134>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<127>*/ 				printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00ffff00>Zorg alsjeblieft goed voor ze. Hehe.")
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
/*< 64>*/ 					printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x00000013>Pfoe...\n\n\n\n<0x10009:0x00120500>Sorry, hehe. Je krijgt de <color blue<gigantor>coloroff> niet\nterug!\n\n\n<0x10009:0x00000100>Met zo'n tijd red je het helaas niet. Je zult\nhet op zijn minst in minder dan drie\nminuten moeten doen... Kom op! Laat dat\nnetje fijn wapperen!")
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
/*< 71>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "Goed, je tijd is om! <0x10009:0x00000004>Hehe... Ik moet\nzeggen dat ik niet gedacht had dat je\nmijn record zo makkelijk zou verbeteren!")
/*< 67>*/ 				printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00120500>Oké... Beloofd is beloofd, hier is de\n<color blue<gigantor>coloroff>.\n\n\n<0x10009:0x00000100>Je hebt je ontpopt als een zeer succesvolle\ninsectenvanger.\n\n\n<0x10009:0x00030100>Hehe...")
/*< 68>*/ 				story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */] = true;
/*< 69>*/ 				give_item(159 0x9F);
/*< 74>*/ 				printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x00040500>Doe Beedle de groeten. En zeg hem dat\nhet me spijt, als insectenliefhebber, dat ik\neen vriend van de insectenwereld zo'n\nstress bezorgd heb.")
/*< 70>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 3:
          				goto flw_72
          			}
          		  case 1:
          			goto flw_9
          		}
          	}
          }

