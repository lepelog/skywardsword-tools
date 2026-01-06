          void entrypoint_406_01() {
          	start()
/*< 26>*/ 	switch (story_flags[270 /* us: 805A9AF8 0x01, jp: 805ACD78 0x01 */]) {
          	  case 0:
/*<100>*/ 		switch (context_related4(0)) {
          		  case 0:
/*<108>*/ 			{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3330, 'next': 10, 'param3': 13}
/*< 10>*/ 			switch (story_flags[274 /* us: 805A9AF8 0x10, jp: 805ACD78 0x10 */]) {
          			  case 0:
/*< 18>*/ 				story_flags[503 /* us: 805A9B12 0x20, jp: 805ACD92 0x20 */] = true;
/*< 70>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 24, 'param3': 12}
/*< 24>*/ 				switch (zone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*< 32>*/ 					printf(/* textboxtype: 1, unk: 0, line: 2 */ "Vuoi riprovare l'ebbrezza delle\nMontagne russe? Un giro costa\n20 rupie!\n[1-]Sì[2]No")
          					flw_2:
/*<  2>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_8:
/*<  8>*/ 						switch (has_rupees(20)) {
          						  case 0:
/*<  9>*/ 							rupees += -20;
/*< 56>*/ 							printf(/* textboxtype: 1, unk: 0, line: 26 */ "Che percorso preferisci?\n[1-]Facile[2-]Difficile")
/*< 57>*/ 							switch (choice(2)) {
          							  case 0:
/*<113>*/ 								{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3332, 'next': 58, 'param3': 13}
/*< 58>*/ 								printf(/* textboxtype: 1, unk: 0, line: 27 */ "E facile sia. Buona fortuna!")
/*< 61>*/ 								story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */] = false;
          								flw_15:
/*< 15>*/ 								switch (story_flags[503 /* us: 805A9B12 0x20, jp: 805ACD92 0x20 */]) {
          								  case 0:
/*< 41>*/ 									printf(/* textboxtype: 1, unk: 0, line: 6 */ "Vuoi che ti ripeta le regole?\n[1-]Sì[2]No")
/*< 16>*/ 									switch (choice(2)) {
          									  case 0:
/*<111>*/ 										{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3332, 'next': 42, 'param3': 13}
/*< 42>*/ 										printf(/* textboxtype: 1, unk: 0, line: 7 */ "Lo scopo è arrivare alla fine del\npercorso nel minor tempo possibile.\n\n\nInclina il telecomando Wii per\nbilanciare il carrello.\n\n\nCol tempismo giusto, acquisterai\nvelocità mentre sei in curva!\n\n\nAttento però: la minima distrazione\ne deraglierai!")
          										flw_84:
/*< 84>*/ 										switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          										  case 0:
/*< 85>*/ 											switch (story_flags[687 /* us: 805A9B21 0x10, jp: 805ACDA1 0x10 */]) {
          											  case 0:
/*< 88>*/ 												printf(/* textboxtype: 1, unk: 0, line: 29 */ "Il tuo miglior tempo finora è\n<numeric arg3 2>:<numeric arg4 2>.<numeric arg5 2>!")
          												flw_101:
/*<101>*/ 												{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3330, 'next': 44, 'param3': 13}
/*< 44>*/ 												printf(/* textboxtype: 1, unk: 0, line: 9 */ "Allora si parte!")
/*< 62>*/ 												story_flags[501 /* us: 805A9B12 0x08, jp: 805ACD92 0x08 */] = true;
/*<  3>*/ 												make_actor_do_something(0, 0)
/*<124>*/ 												{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          											  case 1:
          												goto flw_101
          											}
          										  case 1:
/*< 14>*/ 											switch (story_flags[500 /* us: 805A9B12 0x04, jp: 805ACD92 0x04 */]) {
          											  case 0:
/*< 43>*/ 												printf(/* textboxtype: 1, unk: 0, line: 8 */ "Il tuo miglior tempo finora è\n<numeric arg0 2>:<numeric arg1 2>.<numeric arg2 2>!")
          												goto flw_101
          											  case 1:
          												goto flw_101
          											}
          										}
          									  case 1:
          										goto flw_84
          									}
          								  case 1:
          									goto flw_84
          								}
          							  case 1:
/*<112>*/ 								{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3332, 'next': 59, 'param3': 13}
/*< 59>*/ 								printf(/* textboxtype: 1, unk: 0, line: 28 */ "E difficile sia. Buona fortuna!")
/*< 60>*/ 								story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */] = true;
          								goto flw_15
          							}
          						  case 1:
/*<103>*/ 							{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3333, 'next': 40, 'param3': 13}
/*< 40>*/ 							printf(/* textboxtype: 1, unk: 0, line: 5 */ "Non hai abbastanza soldi?\nChe peccato!\n\n\nTorna qui appena ne avrai\nracimolati un po'.")
          						}
          					  case 1:
/*<105>*/ 						{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3333, 'next': 34, 'param3': 13}
/*< 34>*/ 						printf(/* textboxtype: 1, unk: 0, line: 4 */ "OK. Ci vediamo!")
          					}
          				  case 1:
/*< 33>*/ 					printf(/* textboxtype: 1, unk: 0, line: 3 */ "Ehi roccia! Sei tornato!\n\n\n\nVuoi salire sulle Montagne russe?\nSono 20 rupie!\n[1-]Sì[2]No")
          					goto flw_2
          				}
          			  case 1:
/*< 21>*/ 				switch (zone_temp_flags[0 /* 0x1 01 */]) {
          				  case 0:
/*< 30>*/ 					printf(/* textboxtype: 1, unk: 0, line: 10 */ "Dunque ho la tua attenzione, roccia?\n[1-]Sì[2]No")
          					flw_19:
/*< 19>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_110:
/*<110>*/ 						{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3332, 'next': 38, 'param3': 13}
/*< 38>*/ 						printf(/* textboxtype: 1, unk: 0, line: 7 */ "Lo scopo è arrivare alla fine del\npercorso nel minor tempo possibile.\n\n\nInclina il telecomando Wii per\nbilanciare il carrello.\n\n\nCol tempismo giusto, acquisterai\nvelocità mentre sei in curva!\n\n\nAttento però: la minima distrazione\ne deraglierai!")
/*< 11>*/ 						story_flags[274 /* us: 805A9AF8 0x10, jp: 805ACD78 0x10 */] = true;
/*< 71>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 55, 'param3': 12}
/*< 55>*/ 						printf(/* textboxtype: 1, unk: 0, line: 25 */ "Che ne dici di un giro sulle Montagne\nrusse? Costa 20 rupie.\n[1-]OK[2]No")
/*< 22>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_8
          						  case 1:
/*<104>*/ 							{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3333, 'next': 37, 'param3': 13}
/*< 37>*/ 							printf(/* textboxtype: 1, unk: 0, line: 16 */ "Che peccato. Ci sono persino dei premi\nin palio...\n\n\nLa tua decisione è solida come la\nroccia?\n[1-]Partecipo[2]Rinuncio")
/*< 23>*/ 							switch (choice(2)) {
          							  case 0:
          								goto flw_8
          							  case 1:
/*<102>*/ 								{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3330, 'next': 39, 'param3': 13}
/*< 39>*/ 								printf(/* textboxtype: 1, unk: 0, line: 15 */ "OK. Ci si vede!")
          							}
          						}
          					  case 1:
/*<109>*/ 						{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3333, 'next': 36, 'param3': 13}
/*< 36>*/ 						printf(/* textboxtype: 1, unk: 0, line: 14 */ "Lasciarmi spiegare le regole\nnon ti costerà nulla...")
/*< 20>*/ 						zone_temp_flags[0 /* 0x1 01 */] = true;
          					}
          				  case 1:
/*< 31>*/ 					printf(/* textboxtype: 1, unk: 0, line: 11 */ "Ehi roccia. Che ci fai qui?\n\n\n\nChe ne dici di un po' di\ndivertimento?\n[1-]Che?[2]Non ora")
/*< 45>*/ 					switch (choice(2)) {
          					  case 0:
/*< 35>*/ 						printf(/* textboxtype: 1, unk: 0, line: 13 */ "Sapevo che avrei attirato la tua\nattenzione. Lascia che ti spieghi.")
          						goto flw_110
          					  case 1:
/*< 46>*/ 						printf(/* textboxtype: 1, unk: 0, line: 12 */ "Che noia, roccia. Almeno ascoltami!\n[1-]OK[2]No")
          						goto flw_19
          					}
          				}
          			}
          		  case 1:
/*<125>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 63, 'param3': 46}
/*< 63>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 3, 'next': 47, 'param3': 44}
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "Hai completato il percorso.")
/*< 83>*/ 			switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          			  case 0:
/*< 82>*/ 				switch (story_flags[687 /* us: 805A9B21 0x10, jp: 805ACDA1 0x10 */]) {
          				  case 0:
          					flw_12:
/*< 12>*/ 					switch (context_related2(0)) {
          					  case 0:
/*<114>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 3847, 'next': 48, 'param3': 13}
/*< 48>*/ 						printf(/* textboxtype: 1, unk: 0, line: 19 */ "Un nuovo record. Sei grande, roccia!")
          						flw_4:
/*<  4>*/ 						switch (context_related4(0)) {
          						  case 0:
/*< 65>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 3590, 'next': 51, 'param3': 13}
/*< 51>*/ 							printf(/* textboxtype: 1, unk: 0, line: 21 */ "Stai scherzando, eri troppo lento!\n\n\n\nNon c'è un premio per un simile tempo.")
          							flw_68:
/*< 68>*/ 							{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -256, 'next': 80, 'param3': 13}
/*< 80>*/ 							switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          							  case 0:
/*< 81>*/ 								story_flags[687 /* us: 805A9B21 0x10, jp: 805ACDA1 0x10 */] = true;
          								flw_64:
/*< 64>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 3, 'next': 50, 'param3': 45}
/*< 50>*/ 								printf(/* textboxtype: 1, unk: 0, line: 20 */ "Torna pure quando vuoi!")
/*< 25>*/ 								zone_temp_flags[1 /* 0x1 02 */] = true;
          							  case 1:
/*< 13>*/ 								story_flags[500 /* us: 805A9B12 0x04, jp: 805ACD92 0x04 */] = true;
          								goto flw_64
          							}
          						  case 1:
/*< 69>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 3589, 'next': 72, 'param3': 13}
/*< 72>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 52, 'param3': 12}
/*< 52>*/ 							printf(/* textboxtype: 1, unk: 0, line: 22 */ "Puoi fare di meglio, devi solo piegarti\ndi più col carrello. Comunque, ecco\nla tua vincita!")
/*< 73>*/ 							switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          							  case 0:
          								flw_5:
/*<  5>*/ 								give_item(4 0x04);
          								goto flw_68
          							  case 1:
          								goto flw_5
          							}
          						  case 2:
/*< 66>*/ 							{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 3847, 'next': 74, 'param3': 13}
/*< 74>*/ 							switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          							  case 0:
/*< 53>*/ 								printf(/* textboxtype: 1, unk: 0, line: 23 */ "Non male, ma non sei certo veloce\ncome me! Ecco a te!")
/*<  6>*/ 								give_item(63 0x3F);
          								goto flw_68
          							  case 1:
/*<131>*/ 								printf(/* textboxtype: 1, unk: 0, line: 34 */ "Risultato apprezzabile, ma non puoi\ncompetere con me! Eccoti 50 rupie.")
/*< 86>*/ 								{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 130, 'param3': 12}
/*<130>*/ 								rupees += 50;
          								goto flw_68
          							}
          						  case 3:
/*< 67>*/ 							{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 4104, 'next': 54, 'param3': 13}
/*< 54>*/ 							printf(/* textboxtype: 1, unk: 0, line: 24 */ "Wow! Una prestazione superba!\nHai superato persino me!")
/*< 75>*/ 							switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          							  case 0:
/*< 78>*/ 								switch (story_flags[667 /* us: 805A9B1E 0x02, jp: 805ACD9E 0x02 */]) {
          								  case 0:
/*<122>*/ 									printf(/* textboxtype: 1, unk: 0, line: 32 */ "Ti meriti un premio davvero speciale!")
/*< 76>*/ 									give_item(64 0x40);
          									goto flw_68
          								  case 1:
/*<121>*/ 									printf(/* textboxtype: 1, unk: 0, line: 31 */ "Per te ho un tesoro che ho trovato\nproprio su quest'isola!")
/*< 77>*/ 									give_item(94 0x5E);
/*< 79>*/ 									story_flags[667 /* us: 805A9B1E 0x02, jp: 805ACD9E 0x02 */] = true;
          									goto flw_68
          								}
          							  case 1:
/*<123>*/ 								printf(/* textboxtype: 1, unk: 0, line: 33 */ "Eccoti una rupia che custodivo\ncon cura!")
/*< 87>*/ 								{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 7, 'param3': 12}
/*<  7>*/ 								give_item(32 0x20);
          								goto flw_68
          							}
          						}
          					  case 1:
          						goto flw_4
          					}
          				  case 1:
          					goto flw_4
          				}
          			  case 1:
/*< 17>*/ 				switch (story_flags[500 /* us: 805A9B12 0x04, jp: 805ACD92 0x04 */]) {
          				  case 0:
          					goto flw_12
          				  case 1:
          					goto flw_4
          				}
          			}
          		  case 2:
/*<127>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 106, 'param3': 46}
/*<106>*/ 			{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3333, 'next': 49, 'param3': 13}
/*< 49>*/ 			printf(/* textboxtype: 1, unk: 0, line: 17 */ "Accidenti! Non è andata bene!\nPuoi sempre tornare e riprovare\nquando vuoi!")
/*<129>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		  case 3:
/*<126>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 107, 'param3': 46}
/*<107>*/ 			{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3333, 'next': 99, 'param3': 13}
/*< 99>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "Tempo scaduto! Riprova la\nprossima volta!")
/*<128>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		}
          	  case 1:
/*< 29>*/ 		switch (story_flags[507 /* us: 805A9B12 0x40, jp: 805ACD92 0x40 */]) {
          		  case 0:
/*<115>*/ 			{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3330, 'next': 28, 'param3': 13}
/*< 28>*/ 			printf(/* textboxtype: 1, unk: 0, line: 1 */ "Condurre i carrelli è divertente!\nUn giorno organizzerò una corsa!")
          		  case 1:
/*<116>*/ 			{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3330, 'next': 1, 'param3': 13}
/*<  1>*/ 			printf(/* textboxtype: 1, unk: 0, line: 0 */ "Questo posto è un deposito per i\ncarrelli.\n\n\nI carrelli funzionano ancora. Puoi\nsalire a bordo di uno e andare in giro\nper i vari isolotti di questa zona.\n\nSu quel muro è spiegato come\ncondurlo!\n\n\nAttenzione però, è roba tosta. Leggi\nbene prima di salire!")
/*< 27>*/ 			story_flags[507 /* us: 805A9B12 0x40, jp: 805ACD92 0x40 */] = true;
          		}
          	}
          }

          void entrypoint_406_02() {
/*< 89>*/ 	start()
/*< 94>*/ 	switch (story_flags[507 /* us: 805A9B12 0x40, jp: 805ACD92 0x40 */]) {
          	  case 0:
/*<117>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3330, 'next': 93, 'param3': 13}
/*< 93>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "Sono qui da parecchi anni ormai.\nVado sui carrelli ogni giorno, non\nmi basta mai.")
          		flw_97:
/*< 97>*/ 		story_flags[741 /* us: 805A9B26 0x20, jp: 805ACDA6 0x20 */] = true;
          	  case 1:
/*<119>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3334, 'next': 92, 'param3': 13}
/*< 92>*/ 		printf(/* textboxtype: 1, unk: 0, line: 35 */ "Quello è il mio sedile, per tutti\ni porfidi!")
          		goto flw_97
          	}
          }

          void entrypoint_406_03() {
/*< 90>*/ 	start()
/*< 95>*/ 	switch (story_flags[507 /* us: 805A9B12 0x40, jp: 805ACD92 0x40 */]) {
          	  case 0:
/*<118>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3330, 'next': 91, 'param3': 13}
/*< 91>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "Sono sempre qui, ma tu sei l'unico che\nviene a farmi visita. Pensi che qualcun\naltro possa venire a trovarmi?\nMi sento tanto solo...")
          		flw_98:
/*< 98>*/ 		story_flags[742 /* us: 805A9B26 0x40, jp: 805ACDA6 0x40 */] = true;
          	  case 1:
/*<120>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3334, 'next': 96, 'param3': 13}
/*< 96>*/ 		printf(/* textboxtype: 1, unk: 0, line: 35 */ "Quello è il mio sedile, per tutti\ni porfidi!")
          		goto flw_98
          	}
          }

