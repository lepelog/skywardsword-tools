          void entrypoint_112_01() {
          	start()
/*< 54>*/ 	wait_frames(1)
/*< 29>*/ 	switch (story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */]) {
          	  case 0:
/*< 30>*/ 		entrypoint_123_06();
          	  case 1:
/*<  1>*/ 		printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Salve! Questo è il deposito!\n\n\n\nPosso prendere in custodia le\ncose che hai nella borsa e puoi\ntornare a riprenderle quando\nti servono.\nVuoi lasciare o riprendere qualcosa?\n[1-]Sì[2]No")
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
/*< 44>*/ 								printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x0000000b>Oh, caro! Qui è già\npieno di roba tua!\n\n\nIl deposito è come il mio cuore...\npronto a esplodere!\n\n\nPer favore, <color red<getta via >coloroff>quello che\nnon ti serve più.")
          								flw_5:
/*<  5>*/ 								make_actor_do_something(0, 0)
          							  case 1:
/*< 45>*/ 								printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00080a0c>Fai con comodo, caro!")
          								goto flw_5
          							}
          						  case 1:
/*< 63>*/ 							switch (is_item_check_full()) {
          							  case 0:
/*< 64>*/ 								printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00000017>Oh cielo... il deposito è\nstracolmo di roba tua.\n\n\nPrima mi prometti il tuo cuore\ne poi mi lasci le tue cianfrusaglie?\n\n\nScherzo! Ma se tu potessi\n<color red<gettare via >coloroff>le cose che non ti\nservono, te ne sarei grata.")
          								goto flw_5
          							  case 1:
/*< 65>*/ 								printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00000013>Prego!")
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
/*< 93>*/ 							printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000015>Guarda, non mi pesa custodire le tue cose,\nperò qui è pieno di roba tua!\n\n\nPer favore, <color red<getta via >coloroff>quello che non ti\nserve più...")
          							goto flw_5
          						  case 1:
/*< 92>*/ 							printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00000015>Fai come preferisci...")
          							goto flw_5
          						}
          					  case 1:
/*< 27>*/ 						switch (is_item_check_full()) {
          						  case 0:
/*< 28>*/ 							printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00000004>Guarda, non mi pesa custodire le tue cose,\nperò qui è pieno di roba tua!\n\n\nPer favore, <color red<getta via >coloroff>quello che non ti\nserve più...")
          							goto flw_5
          						  case 1:
/*<  2>*/ 							printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000003>Prego!")
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
/*< 52>*/ 							printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x0000000a>Oh, caro, non hai niente con te.\n\n\n\nNon ti preoccupare, sono sicura che presto\navrai tante belle cose da depositare.")
          						  case 1:
/*< 55>*/ 							printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00000004>Oh. Non hai niente!\n\n\n\nTorna a trovarmi quando avrai qualcosa\nda depositare.")
          						}
          					  case 1:
          						goto flw_52
          					}
          				  case 1:
/*< 17>*/ 					printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00000004>Oh! Ma non hai niente...\n\n\n\nTorna da me quando avrai davvero\nqualcosa da depositare.")
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
/*< 47>*/ 						printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x000e150c>Ehi! Basta! Mi stai prendendo in giro!")
          					  case 1:
/*< 58>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000013>Allora sei venuto solo per farmi visita?\nMi vedi più bella ogni giorno che passa,\nvero? E non riesci a non pensare a me,\nè così?!")
          					}
          				  case 1:
          					goto flw_47
          				}
          			  case 1:
/*< 49>*/ 				switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          				  case 0:
/*< 46>*/ 					printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00000017>Ehi, ma che problema hai! Se non vuoi\nniente, smettila di importunarmi!")
          				  case 1:
/*< 48>*/ 					switch (story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */]) {
          					  case 0:
/*< 87>*/ 						printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00000002>Ehi, ma che problema hai? Se non vuoi\nniente, smettila di importunarmi!")
          					  case 1:
/*<  3>*/ 						printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00000002>Va bene, questa volta ti perdono\nper avermi fatto perdere del tempo.")
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
/*< 67>*/ 					printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00000007>Ho già troppe cose tue!\n\n\n\nNon posso prenderne altre in deposito.\nCaro, ti prego, <color red<getta via >coloroff>quello che non\nti serve.")
          				  case 1:
/*< 68>*/ 					printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x000b1709>Spero di rivederti presto!")
          				}
          			  case 1:
/*< 71>*/ 				switch (is_item_check_full()) {
          				  case 0:
/*< 72>*/ 					printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00000004>Accidenti, non ho più\nneanche lo spazio per respirare!\n\n\nNon posso prendere altro in\ndeposito. Per favore, <color red<getta via\n>coloroff>le cose che non ti servono.")
          				  case 1:
/*< 73>*/ 					printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000015>Dovresti tornare ogni giorno\nper vedere quanto sono bella!")
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
/*< 95>*/ 				printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00000015>Hai troppa roba in deposito!\n\n\n\nNon so più dove metterla. Per favore,\n<color red<getta via >coloroff>le cose che non ti servono.")
          			  case 1:
/*< 26>*/ 				printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00000004>Tutto il deposito è pieno di roba tua!\n\n\n\nNon c'è più spazio... per favore, <color red<getta via\n>coloroff>quello che non ti serve più, te ne prego.")
          			}
          		  case 1:
/*< 88>*/ 			switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          			  case 0:
/*< 89>*/ 				printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000006>Grazie tante...")
          			  case 1:
/*<  7>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000003>Grazie tante...")
          			}
          		}
          	}
          }

          void entrypoint_112_03() {
/*<  8>*/ 	start()
/*< 19>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 36, 'param3': 12}
/*< 36>*/ 	switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          	  case 0:
/*< 35>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "Fanno <color red<<numeric arg0 0> rupie >coloroff>per il deposito.\n\n\n\nSei sicuro?\n[1-]Sì[2]No")
          		flw_11:
/*< 11>*/ 		switch (choice(2)) {
          		  case 0:
/*< 18>*/ 			make_actor_do_something(1, 0)
/*< 20>*/ 			wait_frames(30)
/*< 39>*/ 			switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          			  case 0:
/*< 77>*/ 				switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          				  case 0:
/*< 78>*/ 					switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          					  case 0:
          						flw_40:
/*< 40>*/ 						printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00000008>Grazie! Forse hai qualcos'altro\nda mettere in deposito. Puoi stare qui\ntutto il tempo che vuoi a guardarmi!")
          						flw_53:
/*< 53>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 12}
/*< 12>*/ 						make_actor_do_something(0, 0)
          					  case 1:
/*< 79>*/ 						printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000003>Grazie!\nC'è qualcos'altro?")
          						goto flw_53
          					}
          				  case 1:
          					goto flw_40
          				}
          			  case 1:
/*< 10>*/ 				printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00000003>Grazie.\nPosso fare qualcos'altro per te?")
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
/*< 38>*/ 						printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00000012>Oh! Non vuoi?\nMa certo! Non ne vale la pena.\nChe furbo che sei, caro mio!")
          						goto flw_53
          					  case 1:
/*< 76>*/ 						printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000014>Eh? Cambiato idea? Beh, cambiare idea\nè normale. Proprio come hai cambiato\nidea anche su di me...")
          						goto flw_53
          					}
          				  case 1:
          					goto flw_38
          				}
          			  case 1:
/*< 13>*/ 				printf(/* textboxtype: 0, unk: 1, line: 28 */ "Oh? Hai cambiato idea?\nChe peccato.")
          				goto flw_53
          			}
          		}
          	  case 1:
/*<  9>*/ 		printf(/* textboxtype: 0, unk: 0, line: 23 */ "Mmmh... sono disposta a pagare\n<color red<<color red<<numeric arg0 0><color red< rupie>coloroff>.\n\n\nChe mi dici, affare fatto?\n[1-]Sì[2]No")
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
/*< 82>*/ 				printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x0000000a>Oh, caro, non hai niente con te.\n\n\n\nNon ti preoccupare, sono sicura che presto\navrai tante belle cose da depositare.")
          			  case 1:
/*< 83>*/ 				printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00000004>Oh. Non hai niente!\n\n\n\nTorna a trovarmi quando avrai qualcosa\nda depositare.")
          			}
          		  case 1:
          			goto flw_82
          		}
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00000004>Oh! Ma non hai niente...\n\n\n\nTorna da me quando avrai davvero\nqualcosa da depositare.")
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
/*< 33>*/ 				printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x00000008>Capisco!\nVuoi mettere ordine tra le tue cose.\n\n\nQuesto pulsante serve per\nsistemare gli oggetti che hai\nin deposito.\n\nPer esempio, potresti raggruppare\nle frecce che hai in varie faretre!")
          				flw_23:
/*< 23>*/ 				story_flags[300 /* us: 805A9AFD 0x40, jp: 805ACD7D 0x40 */] = true;
/*< 24>*/ 				make_actor_do_something(0, 0)
          			  case 1:
/*< 86>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00000004>Vuoi sistemare le tue cose.\n\n\n\nQuesto pulsante serve per\norganizzare gli oggetti che\nhai in deposito.\n\nPer esempio, potresti raggruppare\nle frecce che hai sparse in varie\nfaretre!")
          				goto flw_23
          			}
          		  case 1:
          			goto flw_33
          		}
          	  case 1:
/*< 22>*/ 		printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x00000004>Oh. Vuoi organizzare le\ntue cose...\n\n\nQuesto pulsante serve per\nsistemare le cose che hai\nin deposito.\n\nPer esempio, potresti mettere in ordine\nle frecce che hai nella faretra!")
          		goto flw_23
          	}
          }

          void entrypoint_112_06() {
/*< 31>*/ 	start()
          	goto flw_4
          }

