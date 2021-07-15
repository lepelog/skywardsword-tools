          void entrypoint_112_01() {
          	start()
/*< 54>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 29, 'param3': 6}
/*< 29>*/ 	switch (story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */]) {
          	  case 0:
/*< 30>*/ 		entrypoint_123_06();
          	  case 1:
/*<  1>*/ 		printf("\x0E\x01\x09\x04\x00\x01Salve! Questo è il deposito!\n\n\n\nPosso prendere in custodia le\ncose che hai nella borsa e puoi\ntornare a riprenderle quando\nti servono.\nVuoi lasciare o riprendere qualcosa?\n[1]Sì[2-]No")
          		flw_4:
/*<  4>*/ 		switch (choice(2)) {
          		  case 0:
/*< 16>*/ 			switch (context_related2(0)) {
          			  case 0:
/*< 42>*/ 				switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          				  case 0:
/*< 61>*/ 					switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          					  case 0:
/*< 62>*/ 						switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          						  case 0:
          							flw_43:
/*< 43>*/ 							switch (is_item_check_full()) {
          							  case 0:
/*< 44>*/ 								printf("\x0E\x01\x09\x04\x00\x0BOh, caro! Qui è già\npieno di roba tua!\n\n\nIl deposito è come il mio cuore...\npronto a esplodere!\n\n\nPer favore, <r<getta via >>quello che\nnon ti serve più.")
          								flw_5:
/*<  5>*/ 								make_actor_do_something(0, 0)
          							  case 1:
/*< 45>*/ 								printf("\x0E\x01\x09\x04\x08\xA0CFai con comodo, caro!")
          								goto flw_5
          							}
          						  case 1:
/*< 63>*/ 							switch (is_item_check_full()) {
          							  case 0:
/*< 64>*/ 								printf("\x0E\x01\x09\x04\x00\x17Oh cielo... il deposito è\nstracolmo di roba tua.\n\n\nPrima mi prometti il tuo cuore\ne poi mi lasci le tue cianfrusaglie?\n\n\nScherzo! Ma se tu potessi\n<r<gettare via >>le cose che non ti\nservono, te ne sarei grata.")
          								goto flw_5
          							  case 1:
/*< 65>*/ 								printf("\x0E\x01\x09\x04\x00\x13Prego!")
          								goto flw_5
          							}
          						}
          					  case 1:
          						goto flw_43
          					}
          				  case 1:
/*< 90>*/ 					switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          					  case 0:
/*< 91>*/ 						switch (is_item_check_full()) {
          						  case 0:
/*< 93>*/ 							printf("\x0E\x01\x09\x04\x00\x15Guarda, non mi pesa custodire\nle tue cose, però qui è pieno di\nroba tua!\n\nPer favore, <r<getta via >>quello che\nnon ti serve più...")
          							goto flw_5
          						  case 1:
/*< 92>*/ 							printf("\x0E\x01\x09\x04\x00\x15Fai come preferisci...")
          							goto flw_5
          						}
          					  case 1:
/*< 27>*/ 						switch (is_item_check_full()) {
          						  case 0:
/*< 28>*/ 							printf("\x0E\x01\x09\x04\x00\x04Guarda, non mi pesa custodire\nle tue cose, però qui è pieno di\nroba tua!\n\nPer favore, <r<getta via >>quello che\nnon ti serve più...")
          							goto flw_5
          						  case 1:
/*<  2>*/ 							printf("\x0E\x01\x09\x04\x00\x03Prego!")
          							goto flw_5
          						}
          					}
          				}
          			  case 1:
/*< 51>*/ 				switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          				  case 0:
/*< 59>*/ 					switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          					  case 0:
/*< 60>*/ 						switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          						  case 0:
          							flw_52:
/*< 52>*/ 							printf("\x0E\x01\x09\x04\x00\nOh, caro, non hai niente\ncon te.\n\n\nNon ti preoccupare, sono\nsicura che presto avrai\ntante belle cose da\ndepositare.")
          						  case 1:
/*< 55>*/ 							printf("\x0E\x01\x09\x04\x00\x04Oh. Non hai niente!\n\n\n\nTorna a trovarmi quando avrai\nqualcosa da depositare.")
          						}
          					  case 1:
          						goto flw_52
          					}
          				  case 1:
/*< 17>*/ 					printf("\x0E\x01\x09\x04\x00\x04Oh! Ma non hai niente...\n\n\n\nTorna da me quando avrai davvero\nqualcosa da depositare.")
          				}
          			}
          		  case 1:
/*< 50>*/ 			switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          			  case 0:
/*< 56>*/ 				switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          				  case 0:
/*< 57>*/ 					switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          					  case 0:
          						flw_47:
/*< 47>*/ 						printf("\x0E\x01\x09\x04\x0E\x150CEhi! Basta! Mi stai prendendo\nin giro!")
          					  case 1:
/*< 58>*/ 						printf("\x0E\x01\x09\x04\x00\x13Allora sei venuto solo per farmi visita?\nMi vedi più bella ogni giorno che passa,\nvero? E non riesci a non pensare a me,\nè così?!")
          					}
          				  case 1:
          					goto flw_47
          				}
          			  case 1:
/*< 49>*/ 				switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          				  case 0:
/*< 46>*/ 					printf("\x0E\x01\x09\x04\x00\x17Ehi, ma che problema hai!\nSe non vuoi niente, smettila\ndi importunarmi!")
          				  case 1:
/*< 48>*/ 					switch (story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */]) {
          					  case 0:
/*< 87>*/ 						printf("\x0E\x01\x09\x04\x00\x02Ehi, ma che problema hai?\nSe non vuoi niente, smettila\ndi importunarmi!")
          					  case 1:
/*<  3>*/ 						printf("\x0E\x01\x09\x04\x00\x02Va bene, questa volta ti perdono\nper avermi fatto perdere del tempo.")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_112_02() {
/*<  6>*/ 	start()
/*< 41>*/ 	switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          	  case 0:
/*< 69>*/ 		switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          		  case 0:
/*< 70>*/ 			switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          			  case 0:
          				flw_66:
/*< 66>*/ 				switch (is_item_check_full()) {
          				  case 0:
/*< 67>*/ 					printf("\x0E\x01\x09\x04\x00\x07Ho già troppe cose tue!\n\n\n\nNon posso prenderne altre in\ndeposito. Caro, ti prego, <r<getta\nvia >>quello che non ti serve.")
          				  case 1:
/*< 68>*/ 					printf("\x0E\x01\x09\x04\x0B\x1709Spero di rivederti presto!")
          				}
          			  case 1:
/*< 71>*/ 				switch (is_item_check_full()) {
          				  case 0:
/*< 72>*/ 					printf("\x0E\x01\x09\x04\x00\x04Accidenti, non ho più\nneanche lo spazio per respirare!\n\n\nNon posso prendere altro in\ndeposito. Per favore, <r<getta via\n>>le cose che non ti servono.")
          				  case 1:
/*< 73>*/ 					printf("\x0E\x01\x09\x04\x00\x15Dovresti tornare ogni giorno\nper vedere quanto sono bella!")
          				}
          			}
          		  case 1:
          			goto flw_66
          		}
          	  case 1:
/*< 25>*/ 		switch (is_item_check_full()) {
          		  case 0:
/*< 94>*/ 			switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          			  case 0:
/*< 95>*/ 				printf("\x0E\x01\x09\x04\x00\x15Hai troppa roba in deposito!\n\n\n\nNon so più dove metterla. Per\nfavore, <r<getta via >>le cose che\nnon ti servono.")
          			  case 1:
/*< 26>*/ 				printf("\x0E\x01\x09\x04\x00\x04Tutto il deposito è pieno\ndi roba tua!\n\n\nNon c'è più spazio... per favore,\n<r<getta via >>quello che non ti \nserve più, te ne prego.")
          			}
          		  case 1:
/*< 88>*/ 			switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          			  case 0:
/*< 89>*/ 				printf("\x0E\x01\x09\x04\x00\x06Grazie tante...")
          			  case 1:
/*<  7>*/ 				printf("\x0E\x01\x09\x04\x00\x03Grazie tante...")
          			}
          		}
          	}
          }

          void entrypoint_112_03() {
/*<  8>*/ 	start()
/*< 19>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 36, 'param3': 12}
/*< 36>*/ 	switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          	  case 0:
/*< 35>*/ 		printf("Fanno <r<<r<<numeric arg0><r< rupie\n>>per il deposito.\n\n\nSei sicuro?\n[1]Sì[2-]No")
          		flw_11:
/*< 11>*/ 		switch (choice(2)) {
          		  case 0:
/*< 18>*/ 			make_actor_do_something(1, 0)
/*< 20>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 39, 'param3': 6}
/*< 39>*/ 			switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          			  case 0:
/*< 77>*/ 				switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          				  case 0:
/*< 78>*/ 					switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          					  case 0:
          						flw_40:
/*< 40>*/ 						printf("\x0E\x01\x09\x04\x00\x08Grazie! Forse hai qualcos'altro\nda mettere in deposito. Puoi stare qui\ntutto il tempo che vuoi a guardarmi!")
          						flw_53:
/*< 53>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 12}
/*< 12>*/ 						make_actor_do_something(0, 0)
          					  case 1:
/*< 79>*/ 						printf("\x0E\x01\x09\x04\x00\x03Grazie!\nC'è qualcos'altro?")
          						goto flw_53
          					}
          				  case 1:
          					goto flw_40
          				}
          			  case 1:
/*< 10>*/ 				printf("\x0E\x01\x09\x04\x00\x03Grazie.\nPosso fare qualcos'altro per te?")
          				goto flw_53
          			}
          		  case 1:
/*< 37>*/ 			switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          			  case 0:
/*< 74>*/ 				switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          				  case 0:
/*< 75>*/ 					switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          					  case 0:
          						flw_38:
/*< 38>*/ 						printf("\x0E\x01\x09\x04\x00\x12Oh! Non vuoi?\nMa certo! Non ne vale la pena.\nChe furbo che sei, caro mio!")
          						goto flw_53
          					  case 1:
/*< 76>*/ 						printf("\x0E\x01\x09\x04\x00\x14Eh? Cambiato idea? Beh,\ncambiare idea è normale.\nProprio come hai cambiato\nidea anche su di me...")
          						goto flw_53
          					}
          				  case 1:
          					goto flw_38
          				}
          			  case 1:
/*< 13>*/ 				printf("Oh? Hai cambiato idea?\nChe peccato.")
          				goto flw_53
          			}
          		}
          	  case 1:
/*<  9>*/ 		printf("Mmmh... sono disposta a pagare\n<r<<r<<numeric arg0><r< rupie>>.\n\n\nChe mi dici, affare fatto?\n[1]Sì[2-]No")
          		goto flw_11
          	}
          }

          void entrypoint_112_04() {
/*< 14>*/ 	start()
/*< 34>*/ 	switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          	  case 0:
/*< 80>*/ 		switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          		  case 0:
/*< 81>*/ 			switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          			  case 0:
          				flw_82:
/*< 82>*/ 				printf("\x0E\x01\x09\x04\x00\nOh, caro, non hai niente\ncon te.\n\n\nNon ti preoccupare, sono\nsicura che presto avrai\ntante belle cose da\ndepositare.")
          			  case 1:
/*< 83>*/ 				printf("\x0E\x01\x09\x04\x00\x04Oh. Non hai niente!\n\n\n\nTorna a trovarmi quando avrai\nqualcosa da depositare.")
          			}
          		  case 1:
          			goto flw_82
          		}
          	  case 1:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\x04Oh! Ma non hai niente...\n\n\n\nTorna da me quando avrai davvero\nqualcosa da depositare.")
          	}
          }

          void entrypoint_112_05() {
/*< 21>*/ 	start()
/*< 32>*/ 	switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          	  case 0:
/*< 84>*/ 		switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          		  case 0:
/*< 85>*/ 			switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          			  case 0:
          				flw_33:
/*< 33>*/ 				printf("\x0E\x01\x09\x04\x00\x08Capisco!\nVuoi mettere ordine tra le tue cose.\n\n\nQuesto pulsante serve per\nsistemare gli oggetti che hai\nin deposito.\n\nPer esempio, potresti raggruppare\nle frecce che hai in varie faretre!")
          				flw_23:
/*< 23>*/ 				story_flags[300 /* us: 805A9AFD 0x40, jp: 805ACD7D 0x40 */] = true;
/*< 24>*/ 				make_actor_do_something(0, 0)
          			  case 1:
/*< 86>*/ 				printf("\x0E\x01\x09\x04\x00\x04Vuoi sistemare le tue cose.\n\n\n\nQuesto pulsante serve per\norganizzare gli oggetti che\nhai in deposito.\n\nPer esempio, potresti raggruppare\nle frecce che hai sparse in varie\nfaretre!")
          				goto flw_23
          			}
          		  case 1:
          			goto flw_33
          		}
          	  case 1:
/*< 22>*/ 		printf("\x0E\x01\x09\x04\x00\x04Oh. Vuoi organizzare le\ntue cose...\n\n\nQuesto pulsante serve per\nsistemare le cose che hai\nin deposito.\n\nPer esempio, potresti mettere in ordine\nle frecce che hai nella faretra!")
          		goto flw_23
          	}
          }

          void entrypoint_112_06() {
/*< 31>*/ 	start()
          	goto flw_4
          }

