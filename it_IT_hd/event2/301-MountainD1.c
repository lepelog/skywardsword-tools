          void entrypoint_301_11() {
/*<107>*/ 	start()
/*<108>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "Zelda ha trovato un modo per lasciare\nquesto luogo. Suggerirei di proseguire\nvelocemente.\n\nUna volta inquadrato il nemico con (Z),\npotrete chiamarmi con (v) e vi illustrerò\ntutte le informazioni utili al riguardo\nin mio possesso.<0x10011:0x07cd><0x10011:0x09cd>")
          }

          void entrypoint_301_01() {
          	start()
/*< 24>*/ 	{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2064, 'next': 1, 'param3': 13}
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "Accidenti! Ci sono miriadi di\nmostri qui in giro, ho pure perso\nil mio compare e non credo tornerà!")
/*< 31>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -255, 'next': 33, 'param3': 13}
/*< 33>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 32, 'param3': 17}
/*< 32>*/ 	printf(/* textboxtype: 0, unk: 1, line: 1 */ "Oh, di nuovo tu!\nSei venuto fin qui per trovare la tua\namica?\n\nA proposito...<pause 15> Prima di venire qui,\nho visto una <color red<tipa bionda vestita in modo\nstrano>coloroff><sound 4> che veniva rapita...\n\nMa...<0x10009:0x00141215> non mi è stato proprio possibile\naiutarla! Qui è troppo pieno di mostri!\n\n\n<0x10009:0x00ffff00>Anzi, se ci tieni alla pelle, ti consiglio\ndi andare via di corsa!")
/*< 23>*/ 	scene_flags[14 'Eldin: Earth Temple'][51 /* 0x7 08 */] = true;
          }

          void entrypoint_301_03() {
/*<  2>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10012:0x00000004>Mio signore <heroname>,\nZelda è venuta in questa fonte per\npurificarsi.\n\nInoltre, se ci basiamo sull'antico\nmessaggio da me appena tradotto,\nessa dovrebbe essersi diretta verso\nuna terra chiamata <color blue<Ranel>coloroff>.\nSe riporterete la stele al santuario,\nsi leverà una nuova colonna di luce\nsopra le <color blue<Terre di Ranel>coloroff>.\n\nSuggerirei di far ritorno a <color blue<Oltrenuvola\n>coloroff>e, in seguito, dirigerci verso le\nTerre di Ranel.")
/*< 20>*/ 	story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */] = true;
/*< 21>*/ 	zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 60, 'param3': 36}
/*< 60>*/ 	wait_frames(15)
          }

          void entrypoint_301_04() {
/*<  4>*/ 	start()
/*< 25>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 3, 'param3': 13}
/*<  3>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "Acciderbola! Non lo trovo più...\ndev'essermi caduto da qualche parte!")
/*< 87>*/ 	make_actor_do_something(3, 0)
/*< 28>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 30, 'param3': 17}
/*< 30>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3346, 'next': 29, 'param3': 13}
/*< 29>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "Ah! Ciao!\nChe tempismo perfetto!\nSono io, <color blue<Ferrinio>coloroff>!\n\n<0x10009:0x00ffffff>Secondo me è stato il destino a farci\nincontrare qui!\nRecupereresti il mio <color yellow<portabombe>coloroff>?")
/*<102>*/ 	set_camera(16, 0)
/*<101>*/ 	printf(/* textboxtype: 0, unk: 1, line: 4 */ "Stavo cercando tesori quando a un\ntratto sono sbucati dei mostri da lì\ndietro...<pause 15> Me la sono data a gambe,\nma <0x10009:0x0013100d>mi deve essere caduto!")
/*<104>*/ 	set_camera(-1, 0)
/*<103>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x000908ff>È un oggetto in cui <color red<puoi riporre i fiori\nbomba e usarli quando vuoi>coloroff>!\nÈ utilissimo, se lo saranno rubato\ni mostri!<pause 10>\n<0x10009:0x00110dff>Vammi a recuperare il <color yellow<portabombe>coloroff>,\nper favore!")
          }

          void entrypoint_301_05() {
/*<  5>*/ 	start()
/*< 94>*/ 	set_camera(14, 0)
/*< 93>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 92, 'param3': 40}
/*< 92>*/ 	{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 100, 'next': 88, 'param3': 14}
/*< 88>*/ 	make_actor_do_something(3, 0)
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 95, 'param3': 17}
/*< 95>*/ 	set_camera(15, 0)
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00110d08>Ooh! Il mio <color yellow<portabombe>coloroff>!\n\n\n\n<0x10009:0x00ff08ff>Grazie mille!\nDammelo...<pause 20>\n\n\n<0x10009:0x00110d0e>COSA?! Vuoi che te lo presti per poter\nandare avanti?\n\n\n<0x10009:0x00ffffff>Ora che ci penso, sei anche venuto fin\nqui per cercare la tua amica...\n\n\n<0x10009:0x00150d11> Mmh...<pause 15> ma il mio compare...?\n[1-]È rientrato[2-]Ti cercava[3-]Boh...")
/*< 34>*/ 	switch (choice(3)) {
          	  case 0:
/*< 35>*/ 		printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00131007>Sul serio?!\nNon si può proprio contare su di lui...\n\n\n<0x10009:0x00ff08ff>Tu sei stato formidabile!\nEra una situazione complicata!\n\n\n<0x10009:0x00141209>Mi sa che non ho altra scelta che\nregalartelo! Trattalo bene!")
          		flw_105:
/*<105>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 19, 'param3': 42}
/*< 19>*/ 		give_item(92 0x5C);
/*< 26>*/ 		{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -245, 'next': 18, 'param3': 13}
/*< 18>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "Mi raccomando, ora trova la tua\namica! Il mio <color yellow<portabombe >coloroff>ti\naiuterà nell'impresa!")
/*<106>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 36>*/ 		printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00001004>Mi cercava?!<pause 15>\nCapisco...\n\n\n<0x10009:0x00ff08ff>Anche tu sarai in pena per la tua amica,\nvisto che non sai se sta bene o no...\n\n\n<0x10009:0x00141209>Mi sa che non ho altra scelta che\nregalartelo! Trattalo bene!")
          		goto flw_105
          	  case 2:
/*< 37>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000804>Mmh...<pause 15>\nChissà se sta bene,\ncon tutti quei mostri...\n\n<0x10009:0x000008ff>Anche tu sarai in pena per la tua amica,\nvisto che non sai se sta bene o no...\n\n\n<0x10009:0x00141209>Mi sa che non ho altra scelta che\nregalartelo! Trattalo bene!")
          		goto flw_105
          	}
          }

          void entrypoint_301_06() {
/*< 11>*/ 	start()
/*< 89>*/ 	make_actor_do_something(3, 0)
/*< 27>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 10, 'param3': 17}
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00110d12>AH!!!\nMi sono scordato una cosa importante!\n\n\n<0x10009:0x000908ff>La sacca è vuota, prendi...")
/*< 16>*/ 	give_item(40 0x28);
/*< 17>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "Quando trovi dei fiori bomba in giro,\npuoi riporli nel portabombe invece di\nfarli scoppiare!\n\n<0x10009:0x0011080b>Per conservare un fiore bomba,\nraccoglilo normalmente e poi premi (B)\nper <color green<riporlo>coloroff>. Tienilo a mente!<0x10011:0x01cd>\n\n<0x10009:0x000908ff>Quella sacca<color red< può contenere fino a\ndieci bombe>coloroff>! Quando trovi dei fiori\nbomba, fanne scorta!")
          }

          void entrypoint_301_07() {
/*<  7>*/ 	start()
/*< 90>*/ 	make_actor_do_something(3, 0)
/*< 91>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 9, 'param3': 17}
/*<  9>*/ 	check_item_flag(92, 1)
/*<  8>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 0}) {
          	  case 0:
/*< 12>*/ 		printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00110d00>Dimmi un po', t'è mai successo di\nprendere fuoco mentre combatti\nun mostro?\n\n<0x10009:0x000908ff>Se ti dovesse succedere, spegni subito\nle fiamme!\nE non tirare fuori le <color yellow<bombe>coloroff>!")
          	  case 1:
/*< 99>*/ 		switch (scene_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*<100>*/ 			printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00150809>Eh eh, bravo, hai fatto rotolare il\n<color yellow<fiore bomba >coloroff>fin lì...\nNiente male!\n\n<0x10009:0x00110800>Se continui così, di certo recupererai\nil mio <color yellow<portabombe >coloroff>senza problemi!")
          		  case 1:
/*< 96>*/ 			switch (temp_flags[57 /* 0x6 02 */]) {
          			  case 0:
/*< 13>*/ 				printf(/* textboxtype: 0, unk: 1, line: 7 */ "Dovresti provare a sgretolare quelle\nrocce... perché non cerchi dei\n<color yellow<fiori bomba>coloroff>?")
          			  case 1:
/*< 97>*/ 				printf(/* textboxtype: 1, unk: 1, line: 6 */ "Ah...<pause 15> pensandoci bene, non puoi\narrivare lì senza passare sottoterra!\n\n\n<0x10009:0x0015120c>Mmh... forse se fai saltare con un\n<color yellow<fiore bomba >coloroff>quella roccia...\n\n\n<0x10009:0x0009ff00>Vedi se ci sono dei <color yellow<fiori bomba\n>coloroff>nelle vicinanze...")
/*< 98>*/ 				temp_flags[57 /* 0x6 02 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_301_08() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf(/* textboxtype: 0, unk: 2, line: 31 */ "Santuario\ndella Terra")
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
/*< 70>*/ 	wait_frames(10)
/*< 51>*/ 	set_camera(2, 0)
/*< 40>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x0d0805ff>A‐ha! Ci incontriamo ancora!")
/*< 79>*/ 	set_camera(10, 0)
/*< 78>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x0d0005ff>Ah<pause 1>.<pause 1>.<pause 1>.<pause 1>\n<pause 8>Perdonami, ma...<pause 20>\nMi ripeteresti il tuo nome?\n\n<0x10009:0x0d0a05ff>Anche se, ripensandoci...\nnon mi importa granché,\nvisto che ora subirai la mia ira!")
/*< 73>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3339, 'param2': 3327, 'next': 72, 'param3': 13}
/*< 72>*/ 	set_camera(6, 0)
/*< 58>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x0d000900>Proprio quando sembrava\nche avessimo finalmente tra le mani\nla voce della Dea... cosa succede?!\n\n<0x10009:0x0d000cff>Che mi trovo di nuovo davanti\ni seguaci della Dea...")
/*< 74>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3340, 'param2': 3327, 'next': 65, 'param3': 13}
/*< 65>*/ 	printf(/* textboxtype: 0, unk: 2, line: 25 */ "<0x10008:0xfecd><0x1000A:0x000c00cd>Questa volta...\n\n\n\n<0x10009:0x0d000cff><0x10008:0xfecd><pause 15><0x1000A:0x000d00cd>Quella...")
/*< 75>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3341, 'param2': 3583, 'next': 66, 'param3': 13}
/*< 66>*/ 	printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10005:0x002d0000><0x10008:0x02cd>Tirapiedi della Dea...<0x1000A:0x000b00cd>\nè qui a intralciarmi!!!")
/*< 81>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3342, 'param2': 3583, 'next': 63, 'param3': 13}
/*< 63>*/ 	printf(/* textboxtype: 2, unk: 0, line: 27 */ "<0x10008:0x01cd>La voce della Dea mi è\nassolutamente necessaria per\nla rinascita del mio signore!")
/*< 77>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1535, 'next': 76, 'param3': 13}
/*< 76>*/ 	set_camera(9, 0)
/*< 64>*/ 	printf(/* textboxtype: 0, unk: 2, line: 28 */ "<pause 5>.<pause 5>.<pause 5>.<pause 5>\n<pause 10>Mi dispiace...\n\n\n<0x10009:0x0d0805ff>Ad ogni modo, capisci anche tu che\nnon posso andar via così, come se\nnulla fosse, no?")
/*< 67>*/ 	set_camera(3, 0)
/*< 61>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x0d0a05ff>In effetti, non c'è ragione di farlo!\n<pause 20>Anzi...<pause 20>\nLascerò esplodere...<pause 20>")
/*< 71>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1535, 'next': 68, 'param3': 13}
/*< 68>*/ 	set_camera(4, 0)
/*< 62>*/ 	printf(/* textboxtype: 2, unk: 0, line: 30 */ "... questa mia collera inaudita!")
/*< 47>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3337, 'param2': 1791, 'next': 69, 'param3': 13}
/*< 69>*/ 	set_camera(5, 0)
/*< 53>*/ 	wait_frames(65)
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
/*< 42>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10012:0x0000000b>Signore, Faih a rapporto.\nIn questa zona avverto l'aura di Zelda.")
/*< 44>*/ 	set_camera(1, 0)
/*< 43>*/ 	printf(/* textboxtype: 0, unk: 1, line: 19 */ "In particolar modo questa catena...\nProbabilità che Zelda vi sia entrata\nin contatto: 95%.")
/*< 45>*/ 	set_camera(-1, 0)
/*< 46>*/ 	printf(/* textboxtype: 0, unk: 0, line: 20 */ "Apparentemente ha trovato un modo\nper fuggire. Suggerirei di proseguire\nvelocemente.")
          }

