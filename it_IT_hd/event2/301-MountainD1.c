          void entrypoint_301_11() {
/*<107>*/ 	start()
/*<108>*/ 	printf("Zelda ha trovato un modo per lasciare\nquesto luogo. Suggerirei di proseguire\nvelocemente.\n\nUna volta inquadrato il nemico con (Z),\npotrete chiamarmi con (v) e vi illustrerò\ntutte le informazioni utili al riguardo\nin mio possesso.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          }

          void entrypoint_301_01() {
          	start()
/*< 24>*/ 	{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2064, 'next': 1, 'param3': 13}
/*<  1>*/ 	printf("Accidenti! Ci sono miriadi di\nmostri qui in giro, ho pure perso\nil mio compare e non credo tornerà!")
/*< 31>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -255, 'next': 33, 'param3': 13}
/*< 33>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 32, 'param3': 17}
/*< 32>*/ 	printf("Oh, di nuovo tu!\nSei venuto fin qui per trovare la tua\namica?\n\nA proposito...<pause0F> Prima di venire qui,\nho visto una <r<tipa bionda vestita in modo\nstrano>><pling> che veniva rapita...\n\nMa...\x0E\x01\x09\x04\x14\x1215 non mi è stato proprio possibile\naiutarla! Qui è troppo pieno di mostri!\n\n\n\x0E\x01\x09\x04ÿ\xFF00Anzi, se ci tieni alla pelle, ti consiglio\ndi andare via di corsa!")
/*< 23>*/ 	scene_flags[14 'Eldin: Earth Temple'][51 /* 0x7 08 */] = true;
          }

          void entrypoint_301_03() {
/*<  2>*/ 	start()
/*< 22>*/ 	printf("\x0E\x01\x12\x04\x00\x04Mio signore Link,\nZelda è venuta in questa fonte per\npurificarsi.\n\nInoltre, se ci basiamo sull'antico\nmessaggio da me appena tradotto,\nessa dovrebbe essersi diretta verso\nuna terra chiamata <b<Ranel>>.\nSe riporterete la stele al santuario,\nsi leverà una nuova colonna di luce\nsopra le <b<Terre di Ranel>>.\n\nSuggerirei di far ritorno a <b<Oltrenuvola\n>>e, in seguito, dirigerci verso le\nTerre di Ranel.")
/*< 20>*/ 	story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */] = true;
/*< 21>*/ 	zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 60, 'param3': 36}
/*< 60>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 6}
          }

          void entrypoint_301_04() {
/*<  4>*/ 	start()
/*< 25>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 3, 'param3': 13}
/*<  3>*/ 	printf("Acciderbola! Non lo trovo più...\ndev'essermi caduto da qualche parte!")
/*< 87>*/ 	make_actor_do_something(3, 0)
/*< 28>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 30, 'param3': 17}
/*< 30>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3346, 'next': 29, 'param3': 13}
/*< 29>*/ 	printf("Ah! Ciao!\nChe tempismo perfetto!\nSono io, <b<Ferrinio>>!\n\n\x0E\x01\x09\x04ÿ\xFFFFSecondo me è stato il destino a farci\nincontrare qui!\nRecupereresti il mio <y<portabombe>>?")
/*<102>*/ 	set_camera(16, 0)
/*<101>*/ 	printf("Stavo cercando tesori quando a un\ntratto sono sbucati dei mostri da lì\ndietro...<pause0F> Me la sono data a gambe,\nma \x0E\x01\x09\x04\x13\x100Dmi deve essere caduto!")
/*<104>*/ 	set_camera(-1, 0)
/*<103>*/ 	printf("\x0E\x01\x09\x04\x09\x8FFÈ un oggetto in cui <r<puoi riporre i fiori\nbomba e usarli quando vuoi>>!\nÈ utilissimo, se lo saranno rubato\ni mostri!<pause0A>\n\x0E\x01\x09\x04\x11\xDFFVammi a recuperare il <y<portabombe>>,\nper favore!")
          }

          void entrypoint_301_05() {
/*<  5>*/ 	start()
/*< 94>*/ 	set_camera(14, 0)
/*< 93>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 92, 'param3': 40}
/*< 92>*/ 	{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 100, 'next': 88, 'param3': 14}
/*< 88>*/ 	make_actor_do_something(3, 0)
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 95, 'param3': 17}
/*< 95>*/ 	set_camera(15, 0)
/*<  6>*/ 	printf("\x0E\x01\x09\x04\x11\xD08Ooh! Il mio <y<portabombe>>!\n\n\n\n\x0E\x01\x09\x04ÿ\x8FFGrazie mille!\nDammelo...<pause14>\n\n\n\x0E\x01\x09\x04\x11\xD0ECOSA?! Vuoi che te lo presti per poter\nandare avanti?\n\n\n\x0E\x01\x09\x04ÿ\xFFFFOra che ci penso, sei anche venuto fin\nqui per cercare la tua amica...\n\n\n\x0E\x01\x09\x04\x15\xD11 Mmh...<pause0F> ma il mio compare...?\n[1]È rientrato[2]Ti cercava[3]Boh...")
/*< 34>*/ 	switch (choice(3)) {
          	  case 0:
/*< 35>*/ 		printf("\x0E\x01\x09\x04\x13\x1007Sul serio?!\nNon si può proprio contare su di lui...\n\n\n\x0E\x01\x09\x04ÿ\x8FFTu sei stato formidabile!\nEra una situazione complicata!\n\n\n\x0E\x01\x09\x04\x14\x1209Mi sa che non ho altra scelta che\nregalartelo! Trattalo bene!")
          		flw_105:
/*<105>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 19, 'param3': 42}
/*< 19>*/ 		give_item(92 0x5C);
/*< 26>*/ 		{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -245, 'next': 18, 'param3': 13}
/*< 18>*/ 		printf("Mi raccomando, ora trova la tua\namica! Il mio <y<portabombe >>ti\naiuterà nell'impresa!")
/*<106>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 36>*/ 		printf("\x0E\x01\x09\x04\x00\x1004Mi cercava?!<pause0F>\nCapisco...\n\n\n\x0E\x01\x09\x04ÿ\x8FFAnche tu sarai in pena per la tua amica,\nvisto che non sai se sta bene o no...\n\n\n\x0E\x01\x09\x04\x14\x1209Mi sa che non ho altra scelta che\nregalartelo! Trattalo bene!")
          		goto flw_105
          	  case 2:
/*< 37>*/ 		printf("\x0E\x01\x09\x04\x00\x804Mmh...<pause0F>\nChissà se sta bene,\ncon tutti quei mostri...\n\n\x0E\x01\x09\x04\x00\x8FFAnche tu sarai in pena per la tua amica,\nvisto che non sai se sta bene o no...\n\n\n\x0E\x01\x09\x04\x14\x1209Mi sa che non ho altra scelta che\nregalartelo! Trattalo bene!")
          		goto flw_105
          	}
          }

          void entrypoint_301_06() {
/*< 11>*/ 	start()
/*< 89>*/ 	make_actor_do_something(3, 0)
/*< 27>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 10, 'param3': 17}
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x11\xD12AH!!!\nMi sono scordato una cosa importante!\n\n\n\x0E\x01\x09\x04\x09\x8FFLa sacca è vuota, prendi...")
/*< 16>*/ 	give_item(40 0x28);
/*< 17>*/ 	printf("Quando trovi dei fiori bomba in giro,\npuoi riporli nel portabombe invece di\nfarli scoppiare!\n\n\x0E\x01\x09\x04\x11\x80BPer conservare un fiore bomba,\nraccoglilo normalmente e poi premi (B)\nper <g<riporlo>>. Tienilo a mente!\x0E\x01\x11\x02\x1CD\n\n\x0E\x01\x09\x04\x09\x8FFQuella sacca<r< può contenere fino a\ndieci bombe>>! Quando trovi dei fiori\nbomba, fanne scorta!")
          }

          void entrypoint_301_07() {
/*<  7>*/ 	start()
/*< 90>*/ 	make_actor_do_something(3, 0)
/*< 91>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 9, 'param3': 17}
/*<  9>*/ 	check_item_flag(92, 1)
/*<  8>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 0}) {
          	  case 0:
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x11\xD00Dimmi un po', t'è mai successo di\nprendere fuoco mentre combatti\nun mostro?\n\n\x0E\x01\x09\x04\x09\x8FFSe ti dovesse succedere, spegni subito\nle fiamme!\nE non tirare fuori le <y<bombe>>!")
          	  case 1:
/*< 99>*/ 		switch (scene_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*<100>*/ 			printf("\x0E\x01\x09\x04\x15\x809Eh eh, bravo, hai fatto rotolare il\n<y<fiore bomba >>fin lì...\nNiente male!\n\n\x0E\x01\x09\x04\x11\x800Se continui così, di certo recupererai\nil mio <y<portabombe >>senza problemi!")
          		  case 1:
/*< 96>*/ 			switch (temp_flags[57 /* 0x6 02 */]) {
          			  case 0:
/*< 13>*/ 				printf("Dovresti provare a sgretolare quelle\nrocce... perché non cerchi dei\n<y<fiori bomba>>?")
          			  case 1:
/*< 97>*/ 				printf("Ah...<pause0F> pensandoci bene, non puoi\narrivare lì senza passare sottoterra!\n\n\n\x0E\x01\x09\x04\x15\x120CMmh... forse se fai saltare con un\n<y<fiore bomba >>quella roccia...\n\n\n\x0E\x01\x09\x04\x09\xFF00Vedi se ci sono dei <y<fiori bomba\n>>nelle vicinanze...")
/*< 98>*/ 				temp_flags[57 /* 0x6 02 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_301_08() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf("Santuario\ndella Terra")
          }

          void entrypoint_301_09() {
/*< 39>*/ 	start()
/*< 80>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1006, 'next': 54, 'param3': 24}
/*< 54>*/ 	story_flags[686 /* us: 805A9B21 0x08, jp: 805ACDA1 0x08 */] = true;
/*< 82>*/ 	story_flags[748 /* us: 805A9B29 0x10, jp: 805ACDA9 0x10 */] = true;
/*< 50>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 13, 'next': 49, 'param3': 32}
/*< 49>*/ 	{'type': 'type3', 'subType': 1, 'param1': 13, 'param2': 99, 'next': 56, 'param3': 16}
/*< 56>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 1, 'next': 52, 'param3': 40}
/*< 52>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1279, 'next': 70, 'param3': 13}
/*< 70>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 51, 'param3': 6}
/*< 51>*/ 	set_camera(2, 0)
/*< 40>*/ 	printf("\x0E\x01\x09\x04\xD08\x5FFA\x2010ha! Ci incontriamo ancora!")
/*< 79>*/ 	set_camera(10, 0)
/*< 78>*/ 	printf("\x0E\x01\x09\x04\xD00\x5FFAh<pause01>.<pause01>.<pause01>.<pause01>\n<pause08>Perdonami, ma...<pause14>\nMi ripeteresti il tuo nome?\n\n\x0E\x01\x09\x04\xD0A\x5FFAnche se, ripensandoci...\nnon mi importa granché,\nvisto che ora subirai la mia ira!")
/*< 73>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3339, 'param2': 3327, 'next': 72, 'param3': 13}
/*< 72>*/ 	set_camera(6, 0)
/*< 58>*/ 	printf("\x0E\x01\x09\x04\xD00\x900Proprio quando sembrava\nche avessimo finalmente tra le mani\nla voce della Dea... cosa succede?!\n\n\x0E\x01\x09\x04\xD00\xCFFChe mi trovo di nuovo davanti\ni seguaci della Dea...")
/*< 74>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3340, 'param2': 3327, 'next': 65, 'param3': 13}
/*< 65>*/ 	printf("\x0E\x01\x08\x02\xFECD\x0E\x01\n\x04\x0CÍQuesta volta...\n\n\n\n\x0E\x01\x09\x04\xD00\xCFF\x0E\x01\x08\x02\xFECD<pause0F>\x0E\x01\n\x04\x0DÍQuella...")
/*< 75>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3341, 'param2': 3583, 'next': 66, 'param3': 13}
/*< 66>*/ 	printf("\x0E\x01\x05\x04-\x00\x0E\x01\x08\x02\x2CDTirapiedi della Dea...\x0E\x01\n\x04\x0BÍ\nè qui a intralciarmi!!!")
/*< 81>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3342, 'param2': 3583, 'next': 63, 'param3': 13}
/*< 63>*/ 	printf("\x0E\x01\x08\x02\x1CDLa voce della Dea mi è\nassolutamente necessaria per\nla rinascita del mio signore!")
/*< 77>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1535, 'next': 76, 'param3': 13}
/*< 76>*/ 	set_camera(9, 0)
/*< 64>*/ 	printf("<pause05>.<pause05>.<pause05>.<pause05>\n<pause0A>Mi dispiace...\n\n\n\x0E\x01\x09\x04\xD08\x5FFAd ogni modo, capisci anche tu che\nnon posso andar via così, come se\nnulla fosse, no?")
/*< 67>*/ 	set_camera(3, 0)
/*< 61>*/ 	printf("\x0E\x01\x09\x04\xD0A\x5FFIn effetti, non c'è ragione di farlo!\n<pause14>Anzi...<pause14>\nLascerò esplodere...<pause14>")
/*< 71>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1535, 'next': 68, 'param3': 13}
/*< 68>*/ 	set_camera(4, 0)
/*< 62>*/ 	printf("... questa mia collera inaudita!")
/*< 47>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3337, 'param2': 1791, 'next': 69, 'param3': 13}
/*< 69>*/ 	set_camera(5, 0)
/*< 53>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 65, 'next': 48, 'param3': 6}
/*< 48>*/ 	story_flags[189 /* us: 805A9AE9 0x10, jp: 805ACD69 0x10 */] = true;
/*< 83>*/ 	story_flags[748 /* us: 805A9B29 0x10, jp: 805ACDA9 0x10 */] = false;
/*< 55>*/ 	zone_temp_flags[1 /* 0x1 02 */] = true;
/*< 84>*/ 	switch (scene_flags[28 /* 0x2 10 */]) {
          	  case 0:
/*< 85>*/ 		zone_temp_flags[3 /* 0x1 08 */] = true;
          		flw_57:
/*< 57>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*< 86>*/ 		scene_flags[14 'Eldin: Earth Temple'][28 /* 0x2 10 */] = true;
          		goto flw_57
          	}
          }

          void entrypoint_301_10() {
/*< 41>*/ 	start()
/*< 42>*/ 	printf("\x0E\x01\x12\x04\x00\x0BSignore, Faih a rapporto.\nIn questa zona avverto l'aura di Zelda.")
/*< 44>*/ 	set_camera(1, 0)
/*< 43>*/ 	printf("In particolar modo questa catena...\nProbabilità che Zelda vi sia entrata\nin contatto: 95%.")
/*< 45>*/ 	set_camera(-1, 0)
/*< 46>*/ 	printf("Apparentemente ha trovato un modo\nper fuggire. Suggerirei di proseguire\nvelocemente.")
          }

