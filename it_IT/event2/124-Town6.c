          void entrypoint_124_00() {
          	start()
/*< 42>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 43>*/ 		printf("Sei soddisfatto? Se vuoi qualche altra\ncosa, vieni pure quando ti pare!")
          	  case 1:
/*< 48>*/ 		switch (zone_temp_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*< 49>*/ 			printf("Allora che fai, compri?\n[1]Sì[2-]Non ora")
          			flw_3:
/*<  3>*/ 			switch (choice(2)) {
          			  case 0:
/*< 74>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 4, 'param3': 12}
/*<  4>*/ 				printf("Bene! Quale tesoro ti interessa?\n[1]Piuma\nazzurra[2]Teschio\ndorato[3]Ciglia\ndella Dea[4-]Altro")
/*<  6>*/ 				switch (choice(4)) {
          				  case 0:
/*<  7>*/ 					printf("Molto bene, una piuma azzurra!\nFanno <r<200 rupie>>! Che te ne pare?\n[1]Va bene[2-]Troppo")
/*<  9>*/ 					switch (choice(2)) {
          					  case 0:
/*< 11>*/ 						switch (has_rupees(200)) {
          						  case 0:
/*< 10>*/ 							printf("Ottimo! Ecco a te!")
/*< 13>*/ 							zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 34>*/ 							rupees += -200;
/*< 38>*/ 							zone_temp_flags[4 /* 0x1 10 */] = true;
          						  case 1:
/*< 12>*/ 							printf("Sembrerebbe che tu non abbia\nsoldi... torna quando li avrai!")
          						}
          					  case 1:
/*<  8>*/ 						printf("Secondo te è troppo caro? Allora vuol\ndire che non sei molto interessato\na tesori del genere!")
          					}
          				  case 1:
/*< 14>*/ 					printf("Molto bene, un teschio dorato!\nFanno <r<200 rupie>>! Che te ne pare?\n[1]Va bene[2-]Troppo")
/*< 16>*/ 					switch (choice(2)) {
          					  case 0:
/*< 18>*/ 						switch (has_rupees(200)) {
          						  case 0:
/*< 17>*/ 							printf("Ottimo! Ecco a te!")
/*< 20>*/ 							zone_temp_flags[1 /* 0x1 02 */] = true;
/*< 35>*/ 							rupees += -200;
/*< 39>*/ 							zone_temp_flags[4 /* 0x1 10 */] = true;
          						  case 1:
/*< 19>*/ 							printf("Sembrerebbe che tu non abbia\nsoldi... torna quando li avrai!")
          						}
          					  case 1:
/*< 15>*/ 						printf("Secondo te è troppo caro? Allora vuol\ndire che non sei molto interessato\na tesori del genere!")
          					}
          				  case 2:
/*< 21>*/ 					printf("Molto bene, le ciglia della Dea!\nFanno <r<200 rupie>>! Che te ne pare?\n[1]Va bene[2-]Troppo")
/*< 24>*/ 					switch (choice(2)) {
          					  case 0:
/*< 26>*/ 						switch (has_rupees(200)) {
          						  case 0:
/*< 25>*/ 							printf("Ottimo! Ecco a te!")
/*< 28>*/ 							zone_temp_flags[2 /* 0x1 04 */] = true;
/*< 36>*/ 							rupees += -200;
/*< 40>*/ 							zone_temp_flags[4 /* 0x1 10 */] = true;
          						  case 1:
/*< 27>*/ 							printf("Sembrerebbe che tu non abbia\nsoldi... torna quando li avrai!")
          						}
          					  case 1:
/*< 23>*/ 						printf("Secondo te è troppo caro? Allora vuol\ndire che non sei molto interessato\na tesori del genere!")
          					}
          				  case 3:
/*< 53>*/ 					printf("Ah, sei difficile da soddisfare, eh?!\nQuindi, un altro tesoro... che ne dici\ndi questi?[1]Magatama\nscura[2]Cristallo\ndemoniaco[3]Corno\ndi mostro[4-]Altro")
/*< 54>*/ 					switch (choice(4)) {
          					  case 0:
/*< 22>*/ 						printf("Allora, una magatama scura!\nFanno <r<100 rupie>>! Che te ne pare?\n[1]Va bene[2-]Troppo")
/*< 30>*/ 						switch (choice(2)) {
          						  case 0:
/*< 52>*/ 							switch (has_rupees(100)) {
          							  case 0:
/*< 31>*/ 								printf("Ottimo! Ecco a te!")
/*< 33>*/ 								zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 37>*/ 								rupees += -100;
/*< 41>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 32>*/ 								printf("Sembrerebbe che tu non abbia\nsoldi... torna quando li avrai!")
          							}
          						  case 1:
/*< 29>*/ 							printf("Secondo te è troppo caro? Allora vuol\ndire che non sei molto interessato\na tesori del genere!")
          						}
          					  case 1:
/*< 55>*/ 						printf("Bene, un cristallo demoniaco!\nFanno <r<100 rupie>>! Che te ne pare?\n[1]Va bene[2-]Troppo")
/*< 57>*/ 						switch (choice(2)) {
          						  case 0:
/*< 63>*/ 							switch (has_rupees(100)) {
          							  case 0:
/*< 58>*/ 								printf("Ottimo! Ecco a te!")
/*< 60>*/ 								zone_temp_flags[6 /* 0x1 40 */] = true;
/*< 61>*/ 								rupees += -100;
/*< 62>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 59>*/ 								printf("Sembrerebbe che tu non abbia\nsoldi... torna quando li avrai!")
          							}
          						  case 1:
/*< 56>*/ 							printf("Secondo te è troppo caro? Allora vuol\ndire che non sei molto interessato\na tesori del genere!")
          						}
          					  case 2:
/*< 64>*/ 						printf("Dunque, un corno di mostro!\nFanno <r<100 rupie>>! Che te ne pare?\n[1]Va bene[2-]Troppo")
/*< 66>*/ 						switch (choice(2)) {
          						  case 0:
/*< 72>*/ 							switch (has_rupees(100)) {
          							  case 0:
/*< 67>*/ 								printf("Ottimo! Ecco a te!")
/*< 69>*/ 								zone_temp_flags[7 /* 0x1 80 */] = true;
/*< 70>*/ 								rupees += -100;
/*< 71>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 68>*/ 								printf("Sembrerebbe che tu non abbia\nsoldi... torna quando li avrai!")
          							}
          						  case 1:
/*< 65>*/ 							printf("Secondo te è troppo caro? Allora vuol\ndire che non sei molto interessato\na tesori del genere!")
          						}
          					  case 3:
/*< 73>*/ 						printf("Più di questo non ho...\nIl resto devi cercarlo da te.")
          					}
          				}
          			  case 1:
/*<  5>*/ 				printf("Come vuoi... La gente onesta dovrebbe\nevitare di avere a che fare con me...")
          			}
          		  case 1:
/*< 44>*/ 			switch (scene_flags[80 /* 0xB 01 */]) {
          			  case 0:
/*< 45>*/ 				printf("Ehilà! Sono un venditore notturno...\nAh, sei ancora tu. Vuoi\ncomprare qualcosa?\n[1]Sì[2-]Non ora")
          				goto flw_3
          			  case 1:
/*<  1>*/ 				printf("Psst! Ragazzo, vieni qui! Sono un\n<b<venditore notturno>>, se c'è qualche\ntesoro su cui vuoi a tutti i costi mettere\nle mani, io potrei vendertelo...\n... Se me lo chiedi gentilmente.")
/*<  2>*/ 				printf("Beh, ti costerà un po', è chiaro! Chi\nviene da me, lo fa perché raccogliere\ntesori è complicato e, a volte, persino\nseccante...\nTi può interessare?[1]Sì[2-]No")
/*< 46>*/ 				scene_flags[0 'Skyloft'][80 /* 0xB 01 */] = true;
/*< 47>*/ 				zone_temp_flags[5 /* 0x1 20 */] = true;
          				goto flw_3
          			}
          		}
          	}
          }

          void entrypoint_124_01() {
/*< 50>*/ 	start()
/*< 51>*/ 	printf("Devi avere il gusto per l'avventura\nse sei arrivato fin qui.\n\n\nCredi di poter atterrare sul nido della\ntorretta, se <g<ti lanci>> da questo punto?")
          }

