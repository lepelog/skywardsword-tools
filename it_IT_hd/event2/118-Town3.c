          void entrypoint_118_05() {
/*<  2>*/ 	start()
/*<280>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<281>*/ 		printf("\x0E\x01\x09\x04\n\xA12Da qui non si riesce più a vedere la\nDea! Chissà perché...? Mah...\n\n\nOra ho altro a cui pensare...")
          		flw_55:
/*< 55>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 56>*/ 			printf("\x0E\x01\x09\x04\x00\x09Eh?! Hai trovato Chicca?!\n\n\n\n\x0E\x01\x09\x04\x00\xE00Davvero un'ottima notizia! Si vede\nche sei un allievo della\nscuola d'armi!\n\n\x0E\x01\x09\x04\x00\x400Vai subito a dirlo alla mamma\ncosì si tranquillizza! Abita\nnella casa vicino alla riva!")
          		  case 1:
/*< 31>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*< 34>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ehi!\nChe succede, Link?\nSei impallidito!\n[1]Pazzesco[2-]Davvero?")
/*< 35>*/ 				switch (choice(2)) {
          				  case 0:
/*< 27>*/ 					printf("\x0E\x01\x09\x04\x00\x506Cosa?!\nChicca è scomparsa?!\n\n\n\x0E\x01\x09\x04\x00\x500Rapita da un mostro???\n\n\n\n\x0E\x01\x09\x04\x0B\x400Effettivamente ho sentito dire che,\nqui a Oltrenuvola, vive un mostro,\nuna sorta di diavolo.\n\n\x0E\x01\x09\x04\n\x500Si aggira in città durante la notte,\nspaventa gli abitanti e rapisce\ni bambini!\n\n\x0E\x01\x09\x04\x00\x400Pensavo fosse solo superstizione, ma\nora inizio a preoccuparmi sul serio...")
          				  case 1:
/*< 48>*/ 					printf("\x0E\x01\x09\x04\x00\x04Mah, speriamo che tutto si concluda\nper il meglio!")
          				}
          			  case 1:
/*<282>*/ 				switch (story_flags[47 /* us: 805A9AE6 0x01, jp: 805ACD66 0x01 */]) {
          				  case 0:
/*<284>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 283, 'param3': 31}
/*<283>*/ 					printf("\x0E\x01\x09\x04\x00\x06Ho sentito la madre di Chicca chiamarla\na squarciagola... Cosa è successo?")
          				  case 1:
/*< 51>*/ 					printf("\x0E\x01\x09\x04\x0B\xE01Congratulazioni!\nHai vinto il battesimo del volo!!!\n\n\n\x0E\x01\x09\x04\x00\xA00Ma che faccia triste...\nCosa succede?")
          				}
          			}
          		}
          	  case 1:
/*<488>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<489>*/ 			printf("\x0E\x01\x09\x04\n\xC12Chissà cosa ha provocato quel fracasso\nche s'è sentito poco fa!")
          			goto flw_55
          		  case 1:
          			goto flw_55
          		}
          	}
          }

          void entrypoint_118_22() {
/*<152>*/ 	start()
/*<148>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*<170>*/ 		{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 512, 'next': 156, 'param3': 13}
/*<156>*/ 		printf("\x0E\x01\x09\x04\x00\nOh!!!\nMa è fantastico!\n\n\nAl mondo esistono ancora tanti tipi\ndi piante che nessuno ha mai visto!\nHo ritrovato l'entusiasmo per\ncontinuare la mia collezione!")
/*<263>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 2560, 'next': 264, 'param3': 13}
/*<264>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 262, 'param3': 17}
/*<262>*/ 		printf("Link! Grazie mille!\nMi prenderò gran cura della\ntua pianta!\n\nSe ti capita di trovare ancora\nqualche nuova specie,\nfammelo sapere!")
/*<155>*/ 		story_flags[481 /* us: 805A9B11 0x20, jp: 805ACD91 0x20 */] = true;
/*<299>*/ 		story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<157>*/ 		give_gratitude_crystals();
          	  case 1:
/*<168>*/ 		{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 512, 'next': 171, 'param3': 13}
/*<171>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 36, 'next': 172, 'param3': 32}
/*<172>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 36, 'next': 153, 'param3': 17}
/*<153>*/ 		printf("\x0E\x01\x09\x04\x00SMa questo... era proprio il tipo di\npianta che stavo cercando!")
/*<169>*/ 		{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 1280, 'next': 154, 'param3': 13}
/*<154>*/ 		printf("Ma... un momento... si tratta di un\nvegetale o di un animale?\n\n\nUhmm... questa potrebbe essere\nla scoperta del secolo!")
/*<147>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_118_06() {
/*<  3>*/ 	start()
/*<373>*/ 	switch (zone_temp_flags[11 /* 0x0 08 */]) {
          	  case 0:
          		flw_57:
/*< 57>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 58>*/ 			printf("\x0E\x01\x09\x04\x09\x257Eh.<pause0A>.<pause0A>.?\nHai trovato la bambina?\nSi era persa?\n\nAllora non era stata rapita!\nMeno male...\n\n\n\x0E\x01\x09\x04\x00\x609Beh, per fortuna uno dei problemi è stato\nrisolto! Ottimo! Saresti un perfetto\ncavaliere!")
          		  case 1:
/*<398>*/ 			switch (story_flags[825 /* us: 805A9B33 0x02, jp: 805ACDB3 0x02 */]) {
          			  case 0:
/*<399>*/ 				switch (zone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<403>*/ 					printf("\x0E\x01\x09\x04\x00\x1557Cosa? <g<Colpisci >>la <r<lapide più vicina\nall'albero>>, poi la <g<muovi >>e così arrivi\nal mostro...?\n\n\x0E\x01\x09\x04\x00\x1513Comunque io\ndi notte al cimitero non ci vado...")
          				  case 1:
/*<400>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 401, 'param3': 31}
/*<401>*/ 					printf("\x0E\x01\x09\x04\x00\x01Hai parlato con il vecchietto\ndella taverna delle zucche?\n\n\nPer arrivare al mostro <g<bisogna\nmuovere>> la <r<lapide più vicina\nall'albero >>dopo averla <g<colpita>>...?\n\n\x0E\x01\x09\x04\x00\x1513Chissà se è vero\x0E\x01\x06\x02\xFBCD... \x0E\x01\x06\x02Ícomunque,\nmeglio non uscire di notte.")
/*<402>*/ 					zone_temp_flags[11 /* 0x0 08 */] = true;
          				}
          			  case 1:
/*< 32>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*<333>*/ 					switch (zone_temp_flags[11 /* 0x0 08 */]) {
          					  case 0:
          						flw_46:
/*< 46>*/ 						printf("\x0E\x01\x09\x04\x11\x200Dove vive esattamente?\n\n\n\n\x0E\x01\x09\x04\x00\x200Mah, forse sarà alla <r<taverna delle\nzucche>>, a est di qui... ci va\nsempre...\n\n\x0E\x01\x09\x04\x12\x200Ovviamente devi usare il solcanubi\nper arrivarci!")
/*<334>*/ 						zone_temp_flags[11 /* 0x0 08 */] = true;
          					  case 1:
/*<289>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 36, 'param3': 31}
/*< 36>*/ 						printf("\x0E\x01\x09\x04\x00\x1513Hai sentito?\nLa bambina che giocava al cimitero\nè scomparsa...\n\n\x0E\x01\x09\x04\x12\x1500Possibile che una città così piccola\nsia diventata così pericolosa?\n[1]Certo![2-]Mah...")
/*< 37>*/ 						switch (choice(2)) {
          						  case 0:
/*< 28>*/ 							printf("\x0E\x01\x09\x04\x01\xC06Possibile che sia stata rapita\nda un mostro...?\n\n\n\x0E\x01\x09\x04\x00\xC00Un mostro... mi sembra\nun'esagerazione...<pause1E> bah<pause0A>.<pause0A>.<pause0A>.<pause0A>\n\n\n\x0E\x01\x09\x04\x09\x200Qui vicino, comunque, vive un\n<pling><r<vecchietto >>che sa tutto sui mostri.\n\n\n\x0E\x01\x09\x04\x12\x200Però, siccome è sempre ubriaco,\nnessuno lo prende sul serio...")
          							goto flw_46
          						  case 1:
/*< 47>*/ 							printf("\x0E\x01\x09\x04\x12\x1557Ma sei proprio insensibile...\nNon capisci?\nÈ stata rapita una bambina!")
          						}
          					}
          				  case 1:
/*<287>*/ 					switch (story_flags[47 /* us: 805A9AE6 0x01, jp: 805ACD66 0x01 */]) {
          					  case 0:
/*<288>*/ 						printf("\x0E\x01\x09\x04\x00\x1504Ma sì, la storia della bambina scomparsa!")
          					  case 1:
/*< 52>*/ 						printf("\x0E\x01\x09\x04\x00\x501Guarda, guarda!\nMa tu sei il giovane che ha vinto\nil battesimo del volo!\n\n\x0E\x01\x09\x04\x0C\x200Ti riconosco dalla divisa della\nscuola d'armi! Lo sai che ti dona?\n\n\n\x0E\x01\x09\x04\x0C\x500Ti manca poco per diventare un vero\ne proprio cavaliere!")
          					}
          				}
          			}
          		}
          	  case 1:
/*<285>*/ 		switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          		  case 0:
/*<286>*/ 			printf("\x0E\x01\x09\x04\x09\x1501È stato terribile!\nSi è sentito un gran boato e poi\nl'Isola della Dea è scomparsa!\n\n\x0E\x01\x09\x04\x12\x200Ma... piuttosto...")
          			goto flw_57
          		  case 1:
/*<490>*/ 			switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          			  case 0:
/*<491>*/ 				printf("\x0E\x01\x09\x04\x00\x13Che scossone violento! Cosa sarà mai\nsuccesso?!\n\n\n\x0E\x01\x09\x04\x12\x200Forse... mmh...")
          				goto flw_57
          			  case 1:
          				goto flw_57
          			}
          		}
          	}
          }

          void entrypoint_118_23() {
/*<204>*/ 	start()
/*<206>*/ 	printf("\x0E\x01\x09\x04\x00\x02Eh? Link, che ti succede?")
/*<207>*/ 	set_camera(11, 0)
/*<208>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 72, 'param3': 17}
/*< 72>*/ 	printf("... Ti incuriosisce il mulino?\n\n\n\nFu costruito in modo da poter essere\norientato nella direzione in cui soffia\nil vento.")
/*<177>*/ 	set_camera(8, 0)
/*<196>*/ 	{'type': 'type3', 'subType': 2, 'param1': 32, 'param2': 0, 'next': 197, 'param3': 15}
/*<197>*/ 	{'type': 'type3', 'subType': 2, 'param1': 33, 'param2': 100, 'next': 175, 'param3': 15}
/*<175>*/ 	printf("Però, per far girare il mulino c'era\nuna piccola <r<elica>>...\n\n\nChe tanto tanto tempo fa si staccò e\nandò persa al di sotto delle nuvole.")
/*<195>*/ 	set_camera(4, 0)
/*<178>*/ 	set_camera(5, 0)
/*<176>*/ 	printf("Da quel momento, il mulino è diventato\ninutile ed è stato abbandonato.")
/*<179>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 181, 'param3': 6}
/*<181>*/ 	set_camera(9, 0)
/*<180>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 75, 'param3': 6}
/*< 75>*/ 	{'type': 'type3', 'subType': 1, 'param1': 315, 'param2': 0, 'next': 257, 'param3': 51}
/*<257>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 258, 'param3': 50}
/*<258>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 76, 'param3': 17}
/*< 76>*/ 	printf("Suggerisco di recuperare l'<r<elica>> dalla\nTerra, per far funzionare il mulino.")
/*< 77>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 165, 'param3': 36}
/*<165>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 259, 'param3': 16}
/*<259>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 198, 'param3': 6}
/*<198>*/ 	set_camera(10, 0)
/*< 78>*/ 	printf("\x0E\x01\x09\x04\x0C\x800Cioè, fammi capire. Vuoi sapere se\nposso riparare il mulino avendo l'elica?\n\n\nBeh, con quella tra le mani\ndovrei riuscire a risistemarlo...")
/*<199>*/ 	set_camera(12, 0)
/*<200>*/ 	printf("Ma come pensi di ritrovare l'elica?\n\n\n\nÈ praticamente impossibile ritrovare\nciò che cade al di sotto delle nuvole...")
/*<202>*/ 	set_camera(10, 0)
/*<203>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 2048, 'next': 79, 'param3': 13}
/*< 79>*/ 	printf("\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í\x0E\x01\x09\x04\x0C\xC13 Aspetta...\nHo sentito dire da <b<Kondoroy>>, quello\ndell'officina, che uno dei suoi\nantenati...\nUsava un <r<robot volante >>per\nrecuperare cianfrusaglie varie\nal di sotto delle nuvole...\nIngegnoso, no?")
/*< 74>*/ 	story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */] = true;
/*<201>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_118_07() {
/*<  4>*/ 	start()
/*<335>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<336>*/ 		printf("\x0E\x01\x09\x04\x00\x01La Dea è scomparsa!\nCome facciamo?!\n\n\nE pensare che era il posto migliore per\ncacciare insetti!")
          	  case 1:
/*< 60>*/ 		switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          		  case 0:
/*<405>*/ 			switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          			  case 0:
/*<409>*/ 				switch (story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */]) {
          				  case 0:
/*<447>*/ 					switch (zone_temp_flags[8 /* 0x0 01 */]) {
          					  case 0:
/*<406>*/ 						printf("\x0E\x01\x09\x04\x00\x01Voglio andare anch'io alla bottega di\nTerry e comprare subito un retino!\n\n\nE poi lo faccio trasformare in un\nretino grande all'officina!")
          					  case 1:
/*<451>*/ 						entrypoint_118_28();
          					}
          				  case 1:
/*<410>*/ 					printf("\x0E\x01\x09\x04\x00\x01Ehi, Link!\n\n\n\nSei andato alla bottega di Terry?\nCosa?! Veramente?!\nPotevi dirmelo!")
/*<411>*/ 					story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
/*<446>*/ 					zone_temp_flags[8 /* 0x0 01 */] = true;
          				}
          			  case 1:
/*<407>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ah! Non vedo l'ora di avere il retino!\nDevo trovare il modo di entrare nella\nbottega di Terry!")
          			}
          		  case 1:
/*< 59>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*< 61>*/ 				printf("\x0E\x01\x09\x04\x00\x01Hanno ritrovato Chicca!\n\n\n\n\x0E\x01\x09\x04\x0F\x1300Quella bimba ci ha fatto stare proprio\nin pensiero!")
          			  case 1:
/*< 33>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*<404>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 420, 'param3': 31}
/*<420>*/ 					switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          					  case 0:
/*<421>*/ 						printf("\x0E\x01\x09\x04\x00\x01Ehi, Link!\n\n\n\nSei andato alla bottega di Terry?\nCosa?! Veramente?!\nPotevi dirmelo!")
/*<422>*/ 						story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
          						flw_29:
/*< 29>*/ 						printf("\x0E\x01\x09\x04\x00\x06Chicca?\n\n\n\n\x0E\x01\x09\x04\x12\x900Sì, mi pare di averla vista giocare ieri\ndalle parti del <r<cimitero>>...\n\n\n\x0E\x01\x09\x04\n\x900Poi la mamma mi ha chiamato e io\nsono tornato a casa...\n\n\n\x0E\x01\x09\x04\x01\x900Le è successo qualcosa?")
          					  case 1:
/*< 38>*/ 						printf("\x0E\x01\x09\x04\x10\x1301Come si fa ad andare alla bottega di\nTerry e comprare un retino?\n[1]Chicca?[2]Bottega di\nTerry?")
/*< 39>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_29
          						  case 1:
/*< 49>*/ 							printf("\x0E\x01\x09\x04\x00\x04Sto pensando a come si fa a\nfermare la bottega di Terry...\n\n\n\x0E\x01\x09\x04\x12\x900Pare che si fermi se si fa suonare\nla campana, ma...\n\n\n\x0E\x01\x09\x04\x10\x1300Per arrivare così in alto servono\n<r<<pling>armi a lungo raggio>>...\n\n\nSe poi non la vedi nei paraggi,\nprova a cercarla sulla <g<mappa>>!")
          						}
          					}
          				  case 1:
/*<374>*/ 					switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          					  case 0:
/*<375>*/ 						printf("\x0E\x01\x09\x04\x00\x01Ehi, Link!\n\n\n\nSei andato alla bottega di Terry?\nCosa?! Veramente?!\nPotevi dirmelo!")
/*<408>*/ 						story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
          					  case 1:
/*<290>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 50, 'param3': 31}
/*< 50>*/ 						printf("\x0E\x01\x09\x04\x00\x01Guarda!\nSta passando la <b<bottega di Terry>>!\n\n\n\x0E\x01\x09\x04\n\x1300Vendono anche il <r<retino>>!\nQuasi quasi me lo compro!\n\n\n\x0E\x01\x09\x04\x12\x900Pare che per entrare nel negozio\nsi debba suonare la campana, ma...\n\n\n\x0E\x01\x09\x04\x10\x1300Come si fa ad arrivare lassù\nsenza un'<r<arma a lungo raggio>>?")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_24() {
/*<323>*/ 	start()
/*<324>*/ 	printf("\x0E\x01\x09\x04\x00\x04La gente che mi vede si spaventa,\nperché non somiglio a una\npianta...\n\n\x0E\x01\x09\x04\x00\x12Sarà meglio restare immobile...\n\n\n\n\x0E\x01\x09\x04\x09\x13Certo una bella differenza\ndalla vita che facevo prima!")
          }

          void entrypoint_118_08() {
/*<  5>*/ 	start()
/*< 63>*/ 	switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          	  case 0:
/*<471>*/ 		switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          		  case 0:
/*<475>*/ 			switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          			  case 0:
/*<472>*/ 				printf("\x0E\x01\x09\x04\x00\xD0FEhi, Link!\nNon è che per caso hai visto mio\nmarito, vero?\n\nUscire a quest'ora di notte!\nA me questo improvviso silenzio mette\npaura! E se improvvisamente\ncomparissero dei mostri?")
          			  case 1:
/*<476>*/ 				printf("\x0E\x01\x09\x04\x0C\xE08Ehi, Link!\nDopo quella brutta storia non ho più\npermesso a Chicca di uscire di casa\nda sola...\nMio marito invece non è cambiato:\nsempre a zonzo!")
          			}
          		  case 1:
/*< 66>*/ 			printf("\x0E\x01\x09\x04\x0C\xE08Link, ti ringrazio di cuore\nper aver trovato la mia Chicca!\n\n\nPrima o poi ringrazierò anche\nquel signore gentile che si\nè preso cura di lei...")
          		}
          	  case 1:
/*< 62>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*<424>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 142, 'param3': 31}
/*<142>*/ 			switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          			  case 0:
/*< 64>*/ 				printf("\x0E\x01\x09\x04\x0C\xE14Ah, sei tu, Link!\n\n\n\n\x0E\x01\x09\x04\x00\x800È tutto merito tuo se Chicca è tornata\nsana e salva!\nNon ho parole per ringraziarti...\n\n\x0E\x01\x09\x04\x09\x800Grazie a te anche io\nmi sono tranquillizzata!\nGrazie di cuore!")
/*< 65>*/ 				story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */] = true;
/*<144>*/ 				give_gratitude_crystals();
          			  case 1:
/*<143>*/ 				printf("\x0E\x01\x09\x04\x0C\xE13Eh?!\nHai trovato Chicca!\n\n\n\x0E\x01\x09\x04\x0F\xE00È con un signore gentile?\nMeno male!\nNon vedo l'ora di riabbracciarla!")
          			}
          		  case 1:
/*<492>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*<423>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 278, 'param3': 31}
/*<278>*/ 				switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          				  case 0:
/*<279>*/ 					printf("\x0E\x01\x09\x04\x0B\xD12Che disgrazia!\nL'Isola della Dea sta per cadere\ne io non ho ancora trovato Chicca!\n\nLa mia Chicca...\n\n\n\nLink!\nPresto, vai a cercarla!\n\n\n\x0E\x01\x09\x04\x09\xD00Sono sicura che non ti dispiace\nfarlo, vero?")
          				  case 1:
/*<  6>*/ 					printf("\x0E\x01\x09\x04\x0B\xD12Oh! La mia Chicca...<pause0A>\nLa mia bambina...<pause0A>\nTi prego, ritrovala!\n\nSe le succedesse qualcosa...\nIo... che farei...?")
          				}
          			  case 1:
/*<493>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 31}
          			}
          		}
          	}
          }

          void entrypoint_118_25() {
/*<343>*/ 	start()
/*<364>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 276, 'param3': 32}
/*<276>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<277>*/ 		printf("\x0E\x01\x09\x04\x1509\xD00Che disgrazia!\nL'Isola della Dea è precipitata!\nVolevo giusto cercare Chicca sull'isola...\n\nMa dimmi, piuttosto...\nHai trovato la mia Chicca?\n[1]No[2]Chicca?")
          		flw_18:
/*< 18>*/ 		switch (choice(2)) {
          		  case 0:
/*< 19>*/ 			printf("\x0E\x01\x09\x04\x150D\xD12Oh... Oh...")
          			flw_21:
/*< 21>*/ 			printf("\x0E\x01\x09\x04\x150F\xD00Ti prego, Link!\nAiutami anche tu a cercarla!\nL'ho persa di vista da un po'...\n\n\x0E\x01\x09\x04\x1509\xD00Ho provato a chiedere e mi hanno\ndetto di averla vista insieme a una\npersona dalla faccia poco\nraccomandabile.\n\x0E\x01\x09\x04\x150B\xD00Altri mi hanno detto che è stata\naggredita da un mostro...\nCome faccio...?\n\n\x0E\x01\x09\x04\x150E\xD00Di sicuro l'avranno rapita! Chicca\nè così graziosa... sicuramente\nqualcuno l'ha portata via!")
          			flw_22:
/*< 22>*/ 			printf("\x0E\x01\x09\x04\x1509\xD00Per favore, salva la mia Chicca!\nSono sicura che sta piangendo!\n\n\n\x0E\x01\x09\x04\x150F\xD00Per favore, Link!\n[1]Certo[2-]Ho da fare")
/*< 23>*/ 			switch (choice(2)) {
          			  case 0:
/*< 45>*/ 				printf("\x0E\x01\x09\x04\x150C\xE14Grazie!\nÈ così che si comporta un vero allievo\ndella scuola d'armi!\n\x0E\x01\x09\x04\x1500\x800Conto su di te!")
/*<  7>*/ 				story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */] = true;
/*<347>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*< 24>*/ 				printf("\x0E\x01\x09\x04\x1509\xD12E tu saresti un allievo della\nscuola d'armi?\n\n\nIl vostro lavoro non dovrebbe\nessere quello di tutelare la sicurezza\ndei cittadini?!")
          				goto flw_22
          			}
          		  case 1:
/*< 20>*/ 			printf("\x0E\x01\x09\x04\x1509\xD12È la mia bambina!\nÈ piccola, ha solo 5 anni!")
          			goto flw_21
          		}
          	  case 1:
/*< 17>*/ 		printf("\x0E\x01\x09\x04\x1509\xD00Giusto in tempo!\nHai trovato la mia Chicca?\n[1]No[2]Chicca?")
          		goto flw_18
          	}
          }

          void entrypoint_118_09() {
/*< 10>*/ 	start()
/*<260>*/ 	set_camera(13, 0)
/*<300>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 107, 'next': 11, 'param3': 24}
/*< 11>*/ 	printf("\x0E\x01\x0D\x02\x1900Ahhhh!!!")
/*< 94>*/ 	scene_flags[0 'Skyloft'][66 /* 0x9 04 */] = true;
/*<261>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_118_26() {
/*<348>*/ 	start()
/*<351>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 352, 'param3': 32}
/*<352>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 356, 'param3': 32}
/*<356>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5386, 'param2': 3072, 'next': 355, 'param3': 13}
/*<355>*/ 	set_camera(15, 0)
/*<353>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 8, 'next': 350, 'param3': 16}
/*<350>*/ 	printf("\x0E\x01\x09\x04\x1509\xD11Chicca! Chicca!\nMa dove si sarà cacciata?")
/*<357>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5387, 'param2': 3328, 'next': 349, 'param3': 13}
/*<349>*/ 	printf("... Oh... Chicca...\nDove sei finita?\n\n\nChe farei se qualcuno ti avesse\nportata via?")
/*<354>*/ 	story_flags[299 /* us: 805A9AFD 0x20, jp: 805ACD7D 0x20 */] = true;
/*<372>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 366, 'param3': 16}
/*<366>*/ 	printf("\x0E\x01\x09\x04\x150E\xD11Ehi! Link!")
/*<362>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 361, 'param3': 47}
/*<361>*/ 	set_camera(16, 0)
/*<360>*/ 	{'type': 'type3', 'subType': 2, 'param1': 49, 'param2': 356, 'next': 359, 'param3': 15}
/*<359>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 367, 'param3': 17}
/*<367>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5390, 'param2': 3840, 'next': 363, 'param3': 13}
/*<363>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 368, 'param3': 48}
/*<368>*/ 	{'type': 'type3', 'subType': 2, 'param1': 49, 'param2': 100, 'next': 358, 'param3': 14}
/*<358>*/ 	entrypoint_118_25();
          }

          void entrypoint_118_27() {
/*<427>*/ 	start()
/*<439>*/ 	switch (zone_temp_flags[7 /* 0x1 80 */]) {
          	  case 0:
/*<442>*/ 		switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          		  case 0:
/*<441>*/ 			printf("\x0E\x01\x09\x04\x07\xC08A proposito, hai sentito la storia\ndell'isola? Come mai sarà\nscomparsa?\n\nNon si trovano più neanche Zelda e\nBado... ma che cosa sta\nsuccedendo?")
/*<443>*/ 			scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          		  case 1:
/*<444>*/ 			printf("\x0E\x01\x09\x04\x00\x05Mi alleno di notte per diventare\nforte come te!")
          		}
          	  case 1:
/*<437>*/ 		switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
          		  case 0:
/*<438>*/ 			printf("\x0E\x01\x09\x04\x07\xA0BEhi, Link!\nCon la tua <y<pozione levafatica >>mi sento in piena\nforma!\n\n\x0E\x01\x09\x04ÿ\xFF00Certo, non credo che potrò mai raggiungere\ni tuoi livelli...\n\n\nComunque, se ti fa piacere, perché non torni\na trovarmi la sera?")
          			flw_440:
/*<440>*/ 			zone_temp_flags[7 /* 0x1 80 */] = true;
          		  case 1:
/*<435>*/ 			switch (story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */]) {
          			  case 0:
/*<436>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ehi, Link!\nNovità su Zelda?\n\n\nCredo di avertelo già detto, ma ho\ncome la sensazione di aver raggiunto\nil limite... Forse il mio corpo mi sta\nchiedendo di fermarmi...\nMagari potresti passare la <r<notte>> a\ndarmi qualche buon consiglio!")
          				goto flw_440
          			  case 1:
/*<431>*/ 				switch (story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */]) {
          				  case 0:
/*<434>*/ 					printf("\x0E\x01\x09\x04\x00\x01Ehi, Link!\nGrazie alla <y<pozione levafatica >>che mi\nhai dato, riesco ad allenarmi di <r<notte>>!\n\n\x0E\x01\x09\x04\x10\x1B00Ma ho la sensazione di essere arrivato\nal limite...\nForse dovrei dare ascolto a questa\nsensazione...\nCe la farò a diventare come te,\nLink...?\n\n\n\x0E\x01\x09\x04ÿ\xFF00Ma non mi scoraggerò!\nContinuerò ad allenarmi la <r<notte>>,\ntornerai a trovarmi per darmi qualche\nconsiglio, vero?!")
          					goto flw_440
          				  case 1:
/*<430>*/ 					switch (story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */]) {
          					  case 0:
/*<433>*/ 						printf("\x0E\x01\x09\x04\x07\xA0BOh, Link!\nGrazie per avermi dato la\n<y<pozione levafatica>>!\n\n\x0E\x01\x09\x04ÿ\xFF00Da quando me l'hai data, non ho più\nsmesso di fare flessioni!")
          						goto flw_440
          					  case 1:
/*<432>*/ 						printf("\x0E\x01\x09\x04\x00\x01Così nel cuore della notte...\nNon pensavo che qualcuno mi avrebbe\nvisto... Che vergogna!\n\nVorrei diventare forte quanto te,\nma ho paura che, per quanto ci provi,\nnon ce la farò proprio...\nComunque ce la metto tutta.")
          						goto flw_440
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_10() {
/*< 25>*/ 	start()
/*<428>*/ 	switch (story_flags[388 /* us: 805A9B0D 0x40, jp: 805ACD8D 0x40 */]) {
          	  case 0:
/*<445>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 429, 'param3': 31}
/*<429>*/ 		entrypoint_118_27();
          	  case 1:
/*< 40>*/ 		switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          		  case 0:
/*< 69>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*< 70>*/ 				switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          				  case 0:
/*<306>*/ 					switch (zone_temp_flags[7 /* 0x1 80 */]) {
          					  case 0:
/*<418>*/ 						switch (story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */]) {
          						  case 0:
/*<419>*/ 							printf("\x0E\x01\x09\x04\x00\x05Mi alleno di notte per diventare\nforte come te!")
          							flw_332:
/*<332>*/ 							switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          							  case 0:
/*<331>*/ 								printf("\x0E\x01\x09\x04\x07\xC08A proposito, hai sentito la storia\ndell'isola? Come mai sarà\nscomparsa?\n\nNon si trovano più neanche Zelda e\nBado... ma che cosa sta\nsuccedendo?")
/*<339>*/ 								scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          							  case 1:
          							}
          						  case 1:
/*<307>*/ 							printf("\x0E\x01\x09\x04\x00\x01Di certo tu sarai in grado di trovare\nZelda!")
          							goto flw_332
          						}
          					  case 1:
/*<312>*/ 						switch (story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */]) {
          						  case 0:
/*<498>*/ 							entrypoint_118_29();
          						  case 1:
/*<313>*/ 							printf("\x0E\x01\x09\x04\x00\x12Link!\nNon hai ancora trovato Chicca?\n\n\n\x0E\x01\x09\x04\x00\xE10Ma, Link\nla stai davvero cercando?\n\n\n\x0E\x01\x09\x04\x00\xC00Cosa?! L'hai trovata?!\n\n\n\n\x0E\x01\x09\x04\x07\xA0BMeno male! Meno male!\nL'hai trovata, Link!\n\n\nGrazie! Lo sapevo che ce l'avresti\nfatta, Link!")
/*<329>*/ 							story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */] = true;
/*<497>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					}
          				  case 1:
/*<308>*/ 					switch (story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */]) {
          					  case 0:
/*<310>*/ 						printf("\x0E\x01\x09\x04\x00\nPresto, corri a casa della\nmamma di Chicca! Abita vicino alla\nriva! Ti starà aspettando!")
          					  case 1:
/*<309>*/ 						printf("\x0E\x01\x09\x04\x00\x12Link!\nNon hai ancora trovato Chicca?\n\n\n\x0E\x01\x09\x04\x00\xE10Ma, Link\nla stai davvero cercando?\n\n\n\x0E\x01\x09\x04\x00\xC00Cosa?! L'hai trovata?!\n\n\n\n\x0E\x01\x09\x04\x07\xA0BMeno male! Meno male!\nL'hai trovata, Link!\n\n\nGrazie! Lo sapevo che ce l'avresti\nfatta, Link!")
/*<311>*/ 						story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */] = true;
          					}
          				}
          			  case 1:
/*<328>*/ 				switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          				  case 0:
/*<327>*/ 					printf("\x0E\x01\x09\x04\x07\x801Ehi, Link!\nÈ successa una cosa terribile!\nÈ scomparsa l'Isola della Dea!\n\n\x0E\x01\x09\x04\x00\x800Poi è scomparsa anche Chicca...\n\n\n\n\x0E\x01\x09\x04\x00\xE00E non si trovano più nemmeno\nZelda e Bado... ma che cosa è\nsuccesso?\n\n\x0E\x01\x09\x04\x07\x800Link, cerchiamoli\ninsieme! Ti darò una mano\nanche io!")
/*<338>*/ 					scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          				  case 1:
/*<304>*/ 					switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          					  case 0:
/*<305>*/ 						printf("\x0E\x01\x09\x04\x00\x12Link!\nNon hai ancora trovato Chicca?\n\n\n\x0E\x01\x09\x04\x00\xE10Ma, Link la stai davvero\ncercando? Non è che batti\nla fiacca?\n\n\x0E\x01\x09\x04\x07\x200Beh, io mi sto dando da fare!\nDatti una mossa anche tu!!!")
          					  case 1:
/*<301>*/ 						switch (zone_temp_flags[7 /* 0x1 80 */]) {
          						  case 0:
/*<303>*/ 							printf("\x0E\x01\x09\x04\x00\x1701Io cerco da queste parti.\nTu, Link, cerca dalle parti\ndella piazza!\n\n\x0E\x01\x09\x04\x08\x1700Prova a chiedere al bambino che giocava\ncon lei ieri...")
          						  case 1:
/*< 26>*/ 							printf("\x0E\x01\x09\x04\x00\x01Ehi, Link!\nHai trovato Zelda?\n\n\n<pause0A>.<pause0A>.<pause0A>.<pause0A>\nHo capito. Coraggio!\n\n\n\x0E\x01\x09\x04\x07\x200Sì, ora che me lo dici, ho visto la mamma\ndi Chicca andare verso il santuario.\n\n\n\x0E\x01\x09\x04\x08\x1700È successo qualcosa?")
/*< 30>*/ 							printf("\x0E\x01\x09\x04 \x508Cosa?! Chicca è scomparsa?\n\n\n\n\x0E\x01\x09\x04\x07\x800Che disgrazia!!! La cercherò anche io!\nTu, Link, prova a\nchiedere in giro!")
/*<302>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					}
          				}
          			}
          		  case 1:
/*<326>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<325>*/ 				printf("\x0E\x01\x09\x04\x07\x801Ehi, Link!\nÈ successa una cosa terribile!\nÈ scomparsa l'Isola della Dea!\n\n\x0E\x01\x09\x04\x00\x800Poi è scomparsa anche Chicca...\n\n\n\n\x0E\x01\x09\x04\x00\xE00E non si trovano più nemmeno\nZelda e Bado... ma che cosa è\nsuccesso?\n\n\x0E\x01\x09\x04\x07\x800Link, cerchiamoli\ninsieme! Ti darò una mano\nanche io!")
/*<337>*/ 				scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          			  case 1:
/*< 41>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ehi, Link!\nHai trovato Zelda?\n\n\n<pause0A>.<pause0A>.<pause0A>.<pause0A>\nHo capito. Coraggio!\n\n\nSì, ora che me lo dici, ho visto la\nmamma di Chicca andare verso\nil santuario...\n[1]Chi?[2]Lo so!")
/*< 42>*/ 				switch (choice(2)) {
          				  case 0:
/*< 43>*/ 					printf("\x0E\x01\x09\x04\x00\x05Sì, quella signora che vive nella casa\nvicino alla riva, con la bambina\ne il marito...\n\n\x0E\x01\x09\x04\x07\x800Sembrava molto preoccupata...")
          				  case 1:
/*< 44>*/ 					printf("\x0E\x01\x09\x04\x07\x806Davvero?!\nPotevi dirmelo prima!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_28() {
/*<450>*/ 	start()
/*<464>*/ 	switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          	  case 0:
          		flw_460:
/*<460>*/ 		switch (random(2)) {
          		  case 0:
/*<459>*/ 			printf("\x0E\x01\x09\x04\x00\x01Oh, Link!\nUltimamente non si vede più Bado...\n\n\nSi è comportato talmente male che\nlo hanno espulso dalla scuola d'armi?")
          		  case 1:
/*<461>*/ 			printf("\x0E\x01\x09\x04\x00\x01Oh, Link!\nMi sono fatto dare qualche <r<consiglio\nper catturare insetti >>da Dacio!\n\nSembra che sia meglio far oscillare\nil retino orizzontalmente, invece che\nin direzione verticale!\n\nPerò è importante avvicinarsi mooolto\nmooolto lentamente all'insetto da\ncatturare e poi dare un colpo secco!")
          		}
          	  case 1:
/*<462>*/ 		switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          		  case 0:
/*<463>*/ 			printf("\x0E\x01\x09\x04\x00\x01Oh, Link!\n\n\n\nCosa? Una <r<tinozza>>\x0E\x01\x06\x02\xFBCD...?\x0E\x01\x06\x02Í\n<pause14>A cosa ti serve?")
          		  case 1:
/*<458>*/ 			switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          			  case 0:
          				goto flw_460
          			  case 1:
/*<448>*/ 				switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          				  case 0:
/*<449>*/ 					printf("\x0E\x01\x09\x04\x00\x01Oh, Link!\nGuarda la Torre della luce!!!\n\n\nSta emettendo un raggio di luce!\nÈ bellissima!")
          				  case 1:
/*<457>*/ 					switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          					  case 0:
          						flw_454:
/*<454>*/ 						printf("\x0E\x01\x09\x04\x00\x01Oh, Link!\nMa è vero che con il <r<retino >>non si\nprendono solo insetti?\n\nMe lo ha detto il signore dell'officina,\nma sarà vero?")
          					  case 1:
/*<455>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<456>*/ 							printf("\x0E\x01\x09\x04\x00\x01Oh, Link!\n\n\n\nCosa? Il <r<testo >>della melodia che\ncantava Zelda?\n\n\nIl <r<testo>>... Ma cos'è? Quella cosa verde\ncon cui si condiscono gli spaghetti?")
          						  case 1:
/*<453>*/ 							switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          							  case 0:
          								goto flw_454
          							  case 1:
/*<452>*/ 								printf("\x0E\x01\x09\x04\x00\x01Voglio andare anch'io alla bottega di\nTerry e comprare subito un retino!\n\n\nE poi lo faccio trasformare in un\nretino grande all'officina!")
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_11() {
/*< 53>*/ 	start()
/*<162>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*< 54>*/ 		printf("\x0E\x01\x09\x04\x00\x01Questo signore non è cattivo!\n\n\n\nMi ha salvata quando stavo\nper cadere giù nel cielo!\nPoi mi ha detto che la sera\nè pericoloso andare in giro...\nDì alla mamma che ritornerò\ndomattina, quando farà giorno...")
          	  case 1:
/*<163>*/ 		printf("\x0E\x01\x09\x04\x00\x06Che succede, signore?\nHai paura? Perché?")
          	}
          }

          void entrypoint_118_29() {
/*<496>*/ 	start()
/*<413>*/ 	switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          	  case 0:
/*<412>*/ 		switch (story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */]) {
          		  case 0:
/*<417>*/ 			printf("\x0E\x01\x09\x04\x00\x01Voglio diventare forte come te, così\ndi nascosto mi alleno nella mia stanza\ndi notte, ma...\n\nÈ difficile! Ti ammiro molto,\nLink!")
          			flw_330:
/*<330>*/ 			zone_temp_flags[7 /* 0x1 80 */] = true;
          		  case 1:
/*<414>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 415, 'param3': 31}
/*<415>*/ 			printf("\x0E\x01\x09\x04\x00\x01Ehi, Link!\nHai trovato qualche indizio su Zelda?\n\n\nSai? Anch'io voglio diventare forte\ncome te e quindi durante <r<la notte>>\nmi alleno...\n\n<pause05>.<pause05>.<pause05>.<pause0A> Beh,\x0E\x01\x09\x04\x00\xA06 comunque mi vergogno, quindi\nnon venire di notte nella <r<mia stanza>>!")
/*<416>*/ 			story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */] = true;
          			goto flw_330
          		}
          	  case 1:
/*<501>*/ 		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          		  case 0:
          			flw_505:
/*<505>*/ 			printf("\x0E\x01\x09\x04\x00\x01Ciao, Link! Novità\nriguardo a Zelda? Spero tanto che\nla troverai presto!")
          			goto flw_330
          		  case 1:
/*<500>*/ 			switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          			  case 0:
/*<504>*/ 				printf("\x0E\x01\x09\x04\x00\x811Ciao, Link!\nHai visto?! Dalla Torre della luce è\nvenuto fuori un raggio luminoso! È la\nprima volta che vedo una cosa simile!")
          			  case 1:
/*<507>*/ 				switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          				  case 0:
          					goto flw_505
          				  case 1:
/*<494>*/ 					switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          					  case 0:
/*<503>*/ 						printf("\x0E\x01\x09\x04\x07\xA0BCiao, Link!\n\n\n\n\x0E\x01\x09\x04\x00\xFF05Uhm, <r<due enormi torri del vento>>...?\nBeh, a Oltrenuvola soffia sempre un\nvento forte, qualunque edificio alto\npuò essere una torre del vento!")
          					  case 1:
/*<495>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<502>*/ 							printf("\x0E\x01\x09\x04\x07\xA0BCiao, Link!\n\n\n\n\x0E\x01\x09\x04\x00\xFF08Come? La <r<Melodia della Dea>>...?<pause1E>\nSì, la conosco! Zelda la canticchiava\nspesso!\n\nNon conosco le parole, però penso che\nuno che può saperne qualcosa possa\nessere il direttore!")
          						  case 1:
/*<314>*/ 							printf("\x0E\x01\x09\x04\x00\x0BLink!\nChissà com'era contenta la mamma\ndi Chicca! Che bella cosa!")
/*<499>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_12() {
/*< 67>*/ 	start()
/*<473>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<474>*/ 		printf("\x0E\x01\x09\x04\x00\x01Ehi, signor Link!\n<pause1E>Cosa?! Quel signore buono è riuscito a\ndiventare umano?!\n\n\x0E\x01\x06\x02\xFBCD... ...\x0E\x01\x06\x02Í\nPerò con le ali era più bello...")
          	  case 1:
/*< 68>*/ 		printf("\x0E\x01\x09\x04\x00\x01Ma sei Link!\n\n\n\nIl signore dell'altro giorno fa\ncollezione di gratitudine!\nMa la gratitudine è una cosa che\nsi può collezionare?")
          	}
          }

          void entrypoint_118_99() {
/*<506>*/ 	start()
/*<293>*/ 	switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          	  case 0:
          	  case 1:
/*<247>*/ 		{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 244, 'param3': 51}
/*<244>*/ 		printf("")
/*<245>*/ 		switch (choice(2)) {
          		  case 0:
/*<248>*/ 			story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<249>*/ 			story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<250>*/ 			story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<251>*/ 			story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<252>*/ 			story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<253>*/ 			story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<378>*/ 			open_dowsing_wheel(13)
/*<380>*/ 			printf("")
/*<379>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          			flw_254:
/*<254>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          		  case 1:
/*<246>*/ 			printf("\x0E\x01\x12\x04\x00\x05Sì, mio signore.\nImpostazioni del <pling>rilevatore cancellate.")
          			goto flw_254
          		}
          	}
          }

          void entrypoint_118_13() {
/*< 71>*/ 	start()
/*< 84>*/ 	switch (story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */]) {
          	  case 0:
/*< 85>*/ 		printf("\x0E\x01\x09\x04\x00\x13Non ci posso credere!\nMa guarda se quello non era quel\nmacinino del robot di Kondoroy...")
/*<189>*/ 		make_actor_do_something(1, 0)
/*< 87>*/ 		printf("Ma questa è...\n\n\n\n<pause14>Caspita!<pause28> Questa è proprio l'<r<elica\ndel mulino>>! Sei riuscito a ripescarla?\n\n\n\x0E\x01\x09\x04\x0C\xC00Allora gli antenati di Kondoroy\navevano ragione!\n\n\nSembra sia stata rosicchiata\nda qualche animale... non sarà\nfacile rimetterla a posto...")
/*<182>*/ 		set_camera(6, 0)
/*< 88>*/ 		printf("Allora, qui facciamo così...\nQuesto invece...")
/*<183>*/ 		{'type': 'type3', 'subType': 2, 'param1': 29, 'param2': 256, 'next': 184, 'param3': 15}
/*<184>*/ 		{'type': 'type3', 'subType': 2, 'param1': 30, 'param2': 356, 'next': 209, 'param3': 15}
/*<209>*/ 		story_flags[661 /* us: 805A9B1F 0x08, jp: 805ACD9F 0x08 */] = true;
/*<186>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 190, 'param3': 6}
/*<190>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 256, 'next': 185, 'param3': 13}
/*<185>*/ 		set_camera(7, 0)
/*<194>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 89, 'param3': 6}
/*< 89>*/ 		printf("\x0E\x01\x09\x04\n\x10EUfff...!")
/*<188>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 187, 'param3': 17}
/*<187>*/ 		printf("\x0E\x01\x09\x04\x0C\xC00Ecco! Ora è a posto!\nSe riesci ad azionare l'elica dovresti\nessere in grado di ruotare il mulino.")
/*<210>*/ 		printf("\x0E\x01\x09\x04\x00\x100\x0E\x01\x08\x02\xFFCDTesoro!\nTesooorooo...!")
/*<297>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 90>*/ 			printf("\x0E\x01\x09\x04\x05\x714Ah... dimenticavo... mia moglie mi\naveva chiesto di riparare l'armadio!\n\n\nLei è sempre impegnata a cercare\nqualcuno...")
/*< 91>*/ 			printf("\x0E\x01\x09\x04\x0C\xC00Link, io devo andare.\nCi vediamo dopo!")
          			flw_192:
/*<192>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 191, 'param3': 17}
/*<191>*/ 			{'type': 'type3', 'subType': 2, 'param1': 31, 'param2': 0, 'next': 193, 'param3': 14}
/*<193>*/ 			story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */] = true;
/*<294>*/ 			story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<211>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<295>*/ 			printf("\x0E\x01\x09\x04\x05\x714Ah... Dimenticavo...\nStavo cercando Chicca!")
/*<296>*/ 			printf("\x0E\x01\x09\x04\x0C\xC00Link, ci vediamo dopo!\nSe dovessi trovare Chicca,\nfammelo sapere subito!")
          			goto flw_192
          		}
          	  case 1:
/*< 73>*/ 		switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          		  case 0:
/*<243>*/ 			printf("\x0E\x01\x09\x04\x00\x05Io non credo che si possano\nrecuperare cose da sotto le nuvole...\n\n\nMa siccome <b<Kondoroy >>ci crede,\ncontinua a conservare quel\nrobot, anche se non funziona...")
          		  case 1:
/*<291>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<205>*/ 				printf("\x0E\x01\x09\x04\x00\x01Link, hai ritrovato\nChicca! Grazie!\n\n\nE poi oggi è anche una bella giornata!\n\n\n\nQuesto è proprio un giorno adatto\nper fare un salto alla taverna\ndelle zucche!\n\n... Ma come faccio con l'armadio\ndi mia moglie? Uffa!\nChe seccatura!")
          			  case 1:
/*<292>*/ 				printf("\x0E\x01\x09\x04\x00\x0ECiao, Link.\n\n\n\nNo, Chicca non è ancora tornata.\n\n\n\nOra inizio anche io a preoccuparmi!\nPerché non la cerchi anche tu?")
          			}
          		}
          	}
          }

          void entrypoint_118_14() {
/*< 80>*/ 	start()
/*< 82>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 83>*/ 		printf("... Sì che mi piace! Bzzz! Per la mia\nadorata Faih farei qualsiasi cosa... bzzz...")
          	  case 1:
/*< 81>*/ 		printf(".<pause05>.<pause05>.")
          	}
          }

          void entrypoint_118_15() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf("Si avverte una presenza inquietante\ndietro la porta.")
          }

          void entrypoint_118_16() {
/*< 95>*/ 	start()
/*<102>*/ 	switch (story_flags[373 /* us: 805A9B02 0x08, jp: 805ACD82 0x08 */]) {
          	  case 0:
/*<107>*/ 		printf("\x0E\x01\x09\x04\x01\x701Quando hai tempo, torna pure al bazar!\n\n\n\nTi leggerò il futuro a un prezzo speciale!")
          	  case 1:
/*<101>*/ 		switch (story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */]) {
          		  case 0:
/*<104>*/ 			printf("\x0E\x01\x09\x04\x10\x70DOoh!!!\n\n\n\nMa questa... è identica alla sfera di\ncristallo che usavo!")
/*<256>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 105, 'param3': 17}
/*<105>*/ 			printf("\x0E\x01\x09\x04\x00\x700Ahh... è come se l'energia tornasse\na fluire in tutto il mio corpo!\n\n\nOra posso riprendere le mie\ndivinazioni!\n\n\nQuando hai tempo, torna pure\nal bazar!\n\n\nTi leggerò il futuro a un prezzo\nspeciale!")
/*<106>*/ 			story_flags[373 /* us: 805A9B02 0x08, jp: 805ACD82 0x08 */] = true;
/*<298>*/ 			story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<376>*/ 			scene_flags[0 'Skyloft'][26 /* 0x2 04 */] = true;
/*<377>*/ 			scene_flags[0 'Skyloft'][86 /* 0xB 40 */] = true;
/*<141>*/ 			give_gratitude_crystals();
          		  case 1:
/*< 99>*/ 			switch (story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */]) {
          			  case 0:
/*<425>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 212, 'param3': 31}
/*<212>*/ 				switch (story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */]) {
          				  case 0:
/*<161>*/ 					{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1799, 'next': 103, 'param3': 13}
/*<103>*/ 					printf("Ehi! Ehi! Ma che stai facendo? Presto,\nportami una sfera di cristallo nuova!")
          				  case 1:
/*<214>*/ 					{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1799, 'next': 213, 'param3': 13}
/*<213>*/ 					printf("Ehi! Ehi! Ma che stai facendo? Presto,\nportami una sfera di cristallo nuova!")
/*<242>*/ 					{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 215, 'param3': 51}
/*<215>*/ 					printf("La <r<sfera di cristallo >>non è al momento\nimpostata come obiettivo del\n<pling><r<rilevatore>>.\n\nDesiderate impostare il <pling><r<rilevatore\n>>per la ricerca della <r<sfera di cristallo>>?\n[1]Sì[2-]No")
/*<216>*/ 					switch (choice(2)) {
          					  case 0:
/*<382>*/ 						story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = true;
/*<221>*/ 						story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<220>*/ 						story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<218>*/ 						story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<219>*/ 						story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<222>*/ 						story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<384>*/ 						open_dowsing_wheel(14)
/*<383>*/ 						printf("\x0E\x01\x12\x04\x00\x05Sì, mio signore.\n\n\n\nIl <pling><r<rilevatore >>è stato impostato per\nla ricerca della <r<sfera di cristallo>>,\ndesiderata da questo individuo.")
          						flw_241:
/*<241>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          					  case 1:
/*<217>*/ 						printf("\x0E\x01\x12\x04\x00\x05Sì, mio signore.\nImpostazioni del <pling>rilevatore cancellate.")
          						goto flw_241
          					}
          				}
          			  case 1:
/*<100>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 122, 'param3': 31}
/*<122>*/ 				printf("\x0E\x01\x09\x04\x0C\x100FLasciami perdere... lasciami\nperdere... non preoccuparti\nper me...\n\nOra che la sfera di cristallo si è rotta,\nnon potrò più leggere il tuo destino...\nHo persino l'impressione che anche i\nmiei \x0E\x01\x06\x02\xFCCDocchi\x0E\x01\x06\x02Í si stiano offuscando.\n<pause1E>Ah! Se solo avessi una sfera\ndi cristallo nuova...")
/*<160>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1798, 'next': 159, 'param3': 13}
/*<159>*/ 				printf("Piuttosto... ho sentito dire che\nsei riuscito a trovare una parte\ndel mulino al di sotto delle nuvole.\n\nQuesta sfera di cristallo rotta\nera stata trovata al di sotto delle\nnuvole dall'antenato di Kondoroy.\nForse ce ne sono delle altre...\nAndresti a cercarmene una?\n\n[1]Certo![2-]Non posso")
/*< 96>*/ 				switch (choice(2)) {
          				  case 0:
/*<255>*/ 					{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1802, 'next': 97, 'param3': 13}
/*< 97>*/ 					printf("Che bella notizia!\nAllora conto su di te!\n\n\nSecondo il robot dell'antenato\ndi Kondoroy, la sfera di cristallo\nera su un <r<edificio sulla cima di\nuna montagna>>!")
/*<123>*/ 					{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 124, 'param3': 51}
/*<124>*/ 					printf("Il <pling><r<rilevatore >>può essere impostato per\nla ricerca della <r<sfera di cristallo>>\ndesiderata da questo individuo.\n\nTuttavia, nel caso in cui sia in corso\nla ricerca di altri oggetti, la loro\nrilevazione sarà compromessa.\n\nVolete impostare il <r<rilevatore >>per la\nricerca della <r<sfera di cristallo>>?\n[1]Sì[2-]Non ora")
/*<465>*/ 					switch (choice(2)) {
          					  case 0:
/*<466>*/ 						printf("\x0E\x01\x12\x04\x00\x05Sì, mio signore.\nImpostazione per la ricerca della sfera\ndi cristallo effettuata.")
/*<381>*/ 						story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = true;
/*<388>*/ 						story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<387>*/ 						story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<385>*/ 						story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<386>*/ 						story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<389>*/ 						story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<394>*/ 						open_dowsing_wheel(14)
          						flw_391:
/*<391>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 390, 'param3': 36}
/*<390>*/ 						story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */] = true;
/*<393>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 392, 'param3': 16}
/*<392>*/ 						printf("\x0E\x01\x09\x04\x01\x70BPer favore, giovane!\nCon la sfera di cristallo rotta\nnon posso più predire il futuro...\nNeanche il tuo...\nPresto, portami una sfera di cristallo!")
          					  case 1:
/*<467>*/ 						printf("\x0E\x01\x12\x04\x00\x05Sì, mio signore.\nNel caso in cui vogliate effettuare\nl'impostazione, parlate con questo\nindividuo.")
          						goto flw_391
          					}
          				  case 1:
/*< 98>*/ 					printf("\x0E\x01\x06\x02\xFCCD... \x0E\x01\x06\x02Í\x0E\x01\x09\x04\x0C\x1009Sono momenti difficili\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í")
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_17() {
/*<109>*/ 	start()
/*<114>*/ 	switch (story_flags[481 /* us: 805A9B11 0x20, jp: 805ACD91 0x20 */]) {
          	  case 0:
/*<478>*/ 		switch (zone_temp_flags[14 /* 0x0 40 */]) {
          		  case 0:
/*<479>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<481>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 15, 'next': 480, 'param3': 13}
/*<480>*/ 				printf("In ogni caso... questa storia dell'Isola\ndella Dea che è precipitata...\n\n\nNon potevo credere ai miei occhi ieri,\nquando ho visto quel bagliore\naccecante!\n\nMa ho capito che non si poteva fare\naltrimenti, per far sì che tu potessi\nsalvare Zelda. Me lo ha detto il\ndirettore.")
          			  case 1:
          				flw_173:
/*<173>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 36, 'next': 509, 'param3': 32}
/*<509>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1, 'next': 322, 'param3': 13}
/*<322>*/ 				printf("Ehi! Link!\nMa allora ci sono ancora tante specie\nsconosciute al mondo! Incredibile!")
/*<174>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 36, 'next': 121, 'param3': 17}
/*<121>*/ 				printf("\x0E\x01\x09\x04\x0E\x50AQuesta pianta è\nproprio incredibile...\nPiù la guardo e più mi stupisce!\n\n\x0E\x01\x09\x04\x00\x500Dove smette di essere\nun vegetale e dove comincia\na essere un animale...?")
/*<477>*/ 				zone_temp_flags[14 /* 0x0 40 */] = true;
          			}
          		  case 1:
          			goto flw_173
          		}
          	  case 1:
/*<113>*/ 		switch (story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */]) {
          		  case 0:
/*<158>*/ 			entrypoint_118_21();
          		  case 1:
/*<112>*/ 			switch (story_flags[479 /* us: 805A9B11 0x08, jp: 805ACD91 0x08 */]) {
          			  case 0:
/*<426>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 274, 'param3': 31}
/*<274>*/ 				switch (zone_temp_flags[14 /* 0x0 40 */]) {
          				  case 0:
/*<275>*/ 					printf("\x0E\x01\x09\x04\x00\x09Ah ah ah!\nLo sapevo che non mi avresti deluso!\nGrazie!")
          					flw_229:
/*<229>*/ 					switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
          					  case 0:
          					  case 1:
/*<267>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 268, 'param3': 32}
/*<268>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 269, 'param3': 17}
/*<269>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 230, 'param3': 6}
/*<230>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 270, 'param3': 51}
/*<270>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 231, 'param3': 50}
/*<231>*/ 						printf("La <r<pianta >>è stata rimossa dagli\nobiettivi del <pling><r<rilevatore>>.\n\n\nDesiderate impostare nuovamente\nil <pling><r<rilevatore >>sulla ricerca della <r<pianta>>?\n[1]Sì[2-]No")
/*<232>*/ 						switch (choice(2)) {
          						  case 0:
/*<234>*/ 							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = true;
/*<235>*/ 							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<236>*/ 							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<237>*/ 							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<238>*/ 							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<239>*/ 							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<396>*/ 							open_dowsing_wheel(16)
/*<395>*/ 							printf("\x0E\x01\x12\x04\x00\x05Sì, mio signore.\n\n\n\nIl <pling><r<rilevatore >>è stato nuovamente\nimpostato per la ricerca della <r<pianta>>,\ndesiderata da questo individuo.")
          							flw_240:
/*<240>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          						  case 1:
/*<233>*/ 							printf("\x0E\x01\x12\x04\x00\x05Sì, mio signore.\nImpostazioni del <pling>rilevatore cancellate.")
          							goto flw_240
          						}
          					}
          				  case 1:
/*<120>*/ 					printf("\x0E\x01\x09\x04\x00\x01Allora?\nCome procedono le ricerche di\nun nuovo esemplare di pianta?")
          					goto flw_229
          				}
          			  case 1:
/*<111>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*<318>*/ 					switch (story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */]) {
          					  case 0:
/*<508>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 321, 'param3': 31}
/*<321>*/ 						printf("\x0E\x01\x09\x04\x00\x01Link!\nAllora vuoi ascoltare la mia richiesta?\n\n\nPer passare il tempo mi diletto\na collezionare piante rare!")
          						flw_118:
/*<118>*/ 						printf("\x0E\x01\x09\x04\x00\x00Comunque... ho l'impressione\nche la mia collezione di piante\nsia quasi completa.\n\nCosì stavo pensando di cercare\nun nuovo esemplare raro da\nqualche parte...\n\n\x0E\x01\x09\x04\x09\xA0FChe ne pensi? Non ti andrebbe di\nandare a cercare una nuova pianta\nche potrebbe sorprendere tutti?\n[1]Ci provo[2-]Non posso")
/*<132>*/ 						switch (choice(2)) {
          						  case 0:
/*<133>*/ 							printf("\x0E\x01\x09\x04\n\xA03Oh!\nLo sapevo che tu avresti ascoltato la\nmia richiesta! Per favore, mi porteresti\nun esemplare di pianta rara?")
/*<265>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 266, 'param3': 32}
/*<266>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 271, 'param3': 17}
/*<271>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 134, 'param3': 6}
/*<134>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 272, 'param3': 51}
/*<272>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 135, 'param3': 50}
/*<135>*/ 							printf("<pling><r<Rilevatore >>impostato per la ricerca\ndella <r<pianta >>desiderata da questo\nindividuo.\nServitevene per localizzarla!\nTuttavia, nel caso in cui sia in corso\nla ricerca di altri oggetti, la loro\nrilevazione sarà compromessa.\n\nVolete impostare il <r<rilevatore >>per la\nricerca della <r<pianta>>?\n[1]Sì[2-]Non ora")
/*<468>*/ 							switch (choice(2)) {
          							  case 0:
/*<469>*/ 								printf("\x0E\x01\x12\x04\x00\x05Sì, mio signore.\nImposto la pianta come obiettivo\ndella ricerca.")
/*<223>*/ 								story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = true;
/*<224>*/ 								story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<225>*/ 								story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<226>*/ 								story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<227>*/ 								story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<228>*/ 								story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<397>*/ 								open_dowsing_wheel(16)
          								flw_136:
/*<136>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 119, 'param3': 36}
/*<119>*/ 								story_flags[479 /* us: 805A9B11 0x08, jp: 805ACD91 0x08 */] = true;
/*<273>*/ 								zone_temp_flags[14 /* 0x0 40 */] = true;
          							  case 1:
/*<470>*/ 								printf("\x0E\x01\x12\x04\x00\x05Sì, mio signore.\nNel caso in cui vogliate effettuare\nl'impostazione, parlate con questo\nindividuo.")
          								goto flw_136
          							}
          						  case 1:
/*<117>*/ 							printf("\x0E\x01\x09\x04\n\xA09Ah ah ah!\nHo capito, hai altro di meglio da\nfare...\n\nMa guarda che a correre sempre\ndietro alla stessa cosa ci si stanca!\n\n\nOgni tanto serve anche fare una\npausa! Non te lo dimenticare!")
          						}
          					  case 1:
/*<320>*/ 						story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */] = true;
/*<115>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 484, 'param3': 31}
/*<484>*/ 						switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          						  case 0:
/*<483>*/ 							{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 15, 'next': 482, 'param3': 13}
/*<482>*/ 							printf("In ogni caso... questa storia dell'Isola\ndella Dea che è precipitata...\n\n\nNon potevo credere ai miei occhi ieri,\nquando ho visto quel bagliore\naccecante!\n\nMa ho capito che non si poteva fare\naltrimenti, per far sì che tu potessi\nsalvare Zelda. Me lo ha detto il\ndirettore.")
          							flw_116:
/*<116>*/ 							printf("\x0E\x01\x09\x04\x00\x13Uhm... a proposito... ti va di ascoltare\nla mia richiesta?\n\n\nCome già saprai, sono il più famoso\ncollezionista di piante di Oltrenuvola.\n\nO per lo meno, credo!")
          							goto flw_118
          						  case 1:
/*<319>*/ 							printf("\x0E\x01\x09\x04\x00\x01Ehi, Link!\nCome è andata?\nSei riuscito a parlare con Narisha?\n\nDavvero? Lo dicevo che hai una marcia\nin più rispetto agli altri!\n\n\nTu e il tuo solcanubi carminio non\navrete di certo problemi!\n\n\nLa strada è ancora lunga e piena di\ndifficoltà, ma non darti mai per vinto!")
          							goto flw_116
          						}
          					}
          				  case 1:
/*<315>*/ 					switch (story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */]) {
          					  case 0:
/*<110>*/ 						printf("\x0E\x01\x09\x04\x00\x01Link!\nHai un attimo per ascoltare i miei\nproblemi?\n[1]Dimmi![2-]Non posso...")
/*<129>*/ 						switch (choice(2)) {
          						  case 0:
/*<131>*/ 							printf("Ma no, meglio che te lo dica un'altra\nvolta, adesso dovremmo pensare\nalla piccola scomparsa. Se hai\ntempo, cercala anche tu!")
          						  case 1:
/*<130>*/ 							printf("\x0E\x01\x09\x04\x00\x09Ah ah ah!\nTe ne dico solo uno!\nNon ci vorrà molto!")
          						}
          					  case 1:
/*<487>*/ 						switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          						  case 0:
/*<486>*/ 							{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 15, 'next': 485, 'param3': 13}
/*<485>*/ 							printf("In ogni caso... questa storia dell'Isola\ndella Dea che è precipitata...\n\n\nNon potevo credere ai miei occhi ieri,\nquando ho visto quel bagliore\naccecante!\n\nMa ho capito che non si poteva fare\naltrimenti, per far sì che tu potessi\nsalvare Zelda. Me lo ha detto il\ndirettore.")
          						  case 1:
/*<316>*/ 							printf("\x0E\x01\x09\x04\x00\x01Ehi, Link!\nCome è andata?\nSei riuscito a parlare con Narisha?\n\nDavvero? Lo dicevo che hai una marcia\nin più rispetto agli altri!\n\n\nTu e il tuo solcanubi carminio non\navrete di certo problemi!\n\n\nLa strada è ancora lunga e piena di\ndifficoltà, ma non darti mai per vinto!")
/*<317>*/ 							story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */] = true;
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_18() {
/*<137>*/ 	start()
/*<164>*/ 	printf("Sono qui per consegnare l'<r<elica\ndel mulino>>! Bzzz!")
/*<108>*/ 	make_actor_do_something(0, 0)
/*< 86>*/ 	printf("Chiamatemi pure se\nvi serve qualcosa! Bzzz!\n\n\nPer la mia amata Faih andrei anche\nin capo al mondo! Bzzz!")
          }

          void entrypoint_118_19() {
/*<138>*/ 	start()
/*<139>*/ 	printf("\x0E\x01\x09\x04\x09\x11Kyu\x2010kyuuu!\nQuando mi fissano arrossisco tanto\nche sembro una tisana al mirtillo!")
          }

          void entrypoint_118_20() {
/*<140>*/ 	start()
/*<125>*/ 	printf("Sono qui per consegnare una scintillante\nsfera di cristallo! Bzzz!")
/*<127>*/ 	make_actor_do_something(0, 0)
/*<126>*/ 	printf("Chiamatemi pure se\nvi serve qualcosa! Bzzz!\n\n\nPer la mia amata Faih andrei anche\nin capo al mondo! Bzzz!")
/*<128>*/ 	zone_temp_flags[2 /* 0x1 04 */] = true;
          }

          void entrypoint_118_04() {
          	start()
/*< 12>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 13, 'param3': 32}
/*< 13>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 145, 'param3': 32}
/*<145>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5386, 'param2': 3072, 'next': 16, 'param3': 13}
/*< 16>*/ 	set_camera(1, 0)
/*< 14>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 8, 'next': 9, 'param3': 16}
/*<  9>*/ 	printf("\x0E\x01\x09\x04\x1509\xD11Chicca! Chicca!\nMa dove si sarà cacciata?")
/*<  8>*/ 	set_camera(2, 0)
/*<146>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5387, 'param2': 3328, 'next': 1, 'param3': 13}
/*<  1>*/ 	printf("... Oh... Chicca...\nDove sei finita?\n\n\nChe farei se qualcuno ti avesse\nportata via?")
/*< 15>*/ 	story_flags[299 /* us: 805A9AFD 0x20, jp: 805ACD7D 0x20 */] = true;
/*<371>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 369, 'param3': 16}
/*<369>*/ 	printf("\x0E\x01\x09\x04\x150E\xD11Ehi! Link!")
/*<345>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 344, 'param3': 47}
/*<344>*/ 	set_camera(14, 0)
/*<342>*/ 	{'type': 'type3', 'subType': 2, 'param1': 48, 'param2': 356, 'next': 341, 'param3': 15}
/*<341>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 365, 'param3': 17}
/*<365>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5390, 'param2': 3840, 'next': 346, 'param3': 13}
/*<346>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 370, 'param3': 48}
/*<370>*/ 	{'type': 'type3', 'subType': 2, 'param1': 48, 'param2': 100, 'next': 340, 'param3': 14}
/*<340>*/ 	entrypoint_118_25();
          }

          void entrypoint_118_21() {
/*<151>*/ 	start()
/*<166>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*<150>*/ 		printf("Sono sempre a disposizione! Bzzz!")
          	  case 1:
/*<149>*/ 		printf("Ecco qua lo strano Kyuri! Bzzz!")
/*<167>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          	}
          }

