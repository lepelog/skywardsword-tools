          void entrypoint_124_00() {
          	start()
/*< 42>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 43>*/ 		printf("En? Is het alles dat je hoopte dat het\nzou zijn? En meer? Als je weer eens\nnaar een schat op zoek bent, dan ben ik\nje steen, als je begrijpt wat ik bedoel.")
          	  case 1:
/*< 48>*/ 		switch (zone_temp_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*< 49>*/ 			printf("O, je komt dus wat kopen?\n[1]Ja.[2-]Neuh...")
          			flw_3:
/*<  3>*/ 			switch (choice(2)) {
          			  case 0:
/*< 74>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 4, 'param3': 12}
/*<  4>*/ 				printf("Uitstekend! Dus, zeg het eens. Met wat\nvoor schat kan ik jou blij maken?\n[1]<itemAE>.[2]<itemAF>.[3]<itemB0>.[4-]Iets anders.")
/*<  6>*/ 				switch (choice(4)) {
          				  case 0:
/*<  7>*/ 					printf("Goed, dat is dan <r<200 rupees>>!\n[1]Deal![2-]Te duur.")
/*<  9>*/ 					switch (choice(2)) {
          					  case 0:
/*< 11>*/ 						switch (has_rupees(200)) {
          						  case 0:
/*< 10>*/ 							printf("Ja hoor, het is een deal! Hier is je\nabsoluut-niet-verdachte schat!")
/*< 13>*/ 							zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 34>*/ 							rupees += -200;
/*< 38>*/ 							zone_temp_flags[4 /* 0x1 10 */] = true;
          						  case 1:
/*< 12>*/ 							printf("Zo te zien kom je wat rupees tekort.\nAch, je weet me te vinden wanneer je\ner wat bij elkaar weet te schrapen.")
          						}
          					  case 1:
/*<  8>*/ 						printf("Als-je-blieft zeg. Alsof ik die nog niet\ngehoord had. Te duur? Dan zul je wel\ngeen echte interesse hebben. Anders\nhoestte je nu meteen die rupees op!")
          					}
          				  case 1:
/*< 14>*/ 					printf("Goed, één gouden schedelsieraad!\nVoor <r<200 rupees>> is het van jou!\n[1]Deal![2-]Te duur.")
/*< 16>*/ 					switch (choice(2)) {
          					  case 0:
/*< 18>*/ 						switch (has_rupees(200)) {
          						  case 0:
/*< 17>*/ 							printf("Ja hoor, het is een deal! Hier is je\nabsoluut-niet-verdachte schat!")
/*< 20>*/ 							zone_temp_flags[1 /* 0x1 02 */] = true;
/*< 35>*/ 							rupees += -200;
/*< 39>*/ 							zone_temp_flags[4 /* 0x1 10 */] = true;
          						  case 1:
/*< 19>*/ 							printf("Zo te zien kom je wat rupees tekort.\nAch, je weet me te vinden wanneer je\ner wat bij elkaar weet te schrapen.")
          						}
          					  case 1:
/*< 15>*/ 						printf("Als-je-blieft zeg. Alsof ik die nog niet\ngehoord had. Te duur? Dan zul je wel\ngeen echte interesse hebben. Anders\nhoestte je nu meteen die rupees op!")
          					}
          				  case 2:
/*< 21>*/ 					printf("Goed, dat is dan <r<200 rupees>>!\n[1]Deal![2-]Te duur.")
/*< 24>*/ 					switch (choice(2)) {
          					  case 0:
/*< 26>*/ 						switch (has_rupees(200)) {
          						  case 0:
/*< 25>*/ 							printf("Ja hoor, het is een deal! Hier is je\nabsoluut-niet-verdachte schat!")
/*< 28>*/ 							zone_temp_flags[2 /* 0x1 04 */] = true;
/*< 36>*/ 							rupees += -200;
/*< 40>*/ 							zone_temp_flags[4 /* 0x1 10 */] = true;
          						  case 1:
/*< 27>*/ 							printf("Zo te zien kom je wat rupees tekort.\nAch, je weet me te vinden wanneer je\ner wat bij elkaar weet te schrapen.")
          						}
          					  case 1:
/*< 23>*/ 						printf("Als-je-blieft zeg. Alsof ik die nog niet\ngehoord had. Te duur? Dan zul je wel\ngeen echte interesse hebben. Anders\nhoestte je nu meteen die rupees op!")
          					}
          				  case 3:
/*< 53>*/ 					printf("Iets anders? Dan ben je misschien in\neen van deze dingen geïnteresseerd?\n[1]<itemA8>.[2]<itemAD>.[3]<itemAB>.[4-]Iets anders.")
/*< 54>*/ 					switch (choice(4)) {
          					  case 0:
/*< 22>*/ 						printf("Goed, dat is dan <r<100 rupees>>!\n[1]Deal![2-]Te duur.")
/*< 30>*/ 						switch (choice(2)) {
          						  case 0:
/*< 52>*/ 							switch (has_rupees(100)) {
          							  case 0:
/*< 31>*/ 								printf("Ja hoor, het is een deal! Hier is je\nabsoluut-niet-verdachte schat!")
/*< 33>*/ 								zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 37>*/ 								rupees += -100;
/*< 41>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 32>*/ 								printf("Zo te zien kom je wat rupees tekort.\nAch, je weet me te vinden wanneer je\ner wat bij elkaar weet te schrapen.")
          							}
          						  case 1:
/*< 29>*/ 							printf("Als-je-blieft zeg. Alsof ik die nog niet\ngehoord had. Te duur? Dan zul je wel\ngeen echte interesse hebben. Anders\nhoestte je nu meteen die rupees op!")
          						}
          					  case 1:
/*< 55>*/ 						printf("Goed, dat is dan <r<100 rupees>>!\n[1]Deal![2-]Te duur.")
/*< 57>*/ 						switch (choice(2)) {
          						  case 0:
/*< 63>*/ 							switch (has_rupees(100)) {
          							  case 0:
/*< 58>*/ 								printf("Ja hoor, het is een deal! Hier is je\nabsoluut-niet-verdachte schat!")
/*< 60>*/ 								zone_temp_flags[6 /* 0x1 40 */] = true;
/*< 61>*/ 								rupees += -100;
/*< 62>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 59>*/ 								printf("Zo te zien kom je wat rupees tekort.\nAch, je weet me te vinden wanneer je\ner wat bij elkaar weet te schrapen.")
          							}
          						  case 1:
/*< 56>*/ 							printf("Als-je-blieft zeg. Alsof ik die nog niet\ngehoord had. Te duur? Dan zul je wel\ngeen echte interesse hebben. Anders\nhoestte je nu meteen die rupees op!")
          						}
          					  case 2:
/*< 64>*/ 						printf("Goed, dat is dan <r<100 rupees>>!\n[1]Deal![2-]Te duur.")
/*< 66>*/ 						switch (choice(2)) {
          						  case 0:
/*< 72>*/ 							switch (has_rupees(100)) {
          							  case 0:
/*< 67>*/ 								printf("Ja hoor, het is een deal! Hier is je\nabsoluut-niet-verdachte schat!")
/*< 69>*/ 								zone_temp_flags[7 /* 0x1 80 */] = true;
/*< 70>*/ 								rupees += -100;
/*< 71>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 68>*/ 								printf("Zo te zien kom je wat rupees tekort.\nAch, je weet me te vinden wanneer je\ner wat bij elkaar weet te schrapen.")
          							}
          						  case 1:
/*< 65>*/ 							printf("Als-je-blieft zeg. Alsof ik die nog niet\ngehoord had. Te duur? Dan zul je wel\ngeen echte interesse hebben. Anders\nhoestte je nu meteen die rupees op!")
          						}
          					  case 3:
/*< 73>*/ 						printf("De klant is koning, maar meer heb ik\nhelaas niet op dit moment. Als wat je\nzoekt daar niet tussen zit, dan zul je\nzelf op zoek moeten gaan.")
          					}
          				}
          			  case 1:
/*<  5>*/ 				printf("Hm. Waarschijnlijk is het zo maar\nbeter ook. Een goeierik als jij heeft\nniks te zoeken bij een steen van de\nnacht als ik...")
          			}
          		  case 1:
/*< 44>*/ 			switch (scene_flags[80 /* 0xB 01 */]) {
          			  case 0:
/*< 45>*/ 				printf("O, hallo! Wat een geluksvogel ben jij, dat\nje hier zomaar op...<pause14> O. Ben jij het. Kom je\nhier schatten kopen?\n[1]Ja![2-]Neuh...")
          				goto flw_3
          			  case 1:
/*<  1>*/ 				printf("O, hallo! Wat een geluksvogel ben jij\ndat je hier zomaar op mijn <b<heimelijke\nhandelsimperium>> stuit!\n\nVraag me niet waar mijn waar vandaan\nkomt! Zwijgen is goud, tenslotte.\n\n\nMaar als je me lief aankijkt, kan ik je\nmisschien een schat aanbieden die je\naltijd al wilde hebben...")
/*<  2>*/ 				printf("Maar-MAAR! Voordat je de rupees uit\nje beurs haalt: weet dat je hier een\nzeer hoge prijs betaalt!\n\nMijn klanten zijn meestal personen die\nzelf niet op zoek willen naar schatten,\nof gewoon niet kunnen vinden wat ze\nzoeken. Klinkt dat herkenbaar?[1]Zeker![2-]Totaal niet.")
/*< 46>*/ 				scene_flags[0 'Skyloft'][80 /* 0xB 01 */] = true;
/*< 47>*/ 				zone_temp_flags[5 /* 0x1 20 */] = true;
          				goto flw_3
          			}
          		}
          	}
          }

          void entrypoint_124_01() {
/*< 50>*/ 	start()
/*< 51>*/ 	printf("Een rare vogel ben je, hier helemaal\nnaartoe klimmen voor de lol...\n\n\nO, trouwens, als je van deze klif af zou\n<g<duiken>>, kun je waarschijnlijk in dat\nnest op die toren landen. Maar waarom\nzou je naar een steen luisteren?")
          }

