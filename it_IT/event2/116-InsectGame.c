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
/*<  4>*/ 						printf(/* textboxtype: 1, unk: 1, line: 4 */ "<0x10009:0x00000001>Allora, sei pronto? Si vede che sei\nun vero appassionato di insetti!\nIl livello principiante costa <color red<20 rupie>coloroff>,\nquello avanzato <color red<50>coloroff>.\nQuale scegli?\n[1-]Principiante[2-]Avanzato[3]Niente")
          						flw_1:
/*<  1>*/ 						switch (choice(3)) {
          						  case 0:
/*<102>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 96>*/ 								switch (has_rupees(20)) {
          								  case 0:
/*< 98>*/ 									rupees += -20;
/*< 91>*/ 									printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00030100>Ti cronometrerò, e se otterrai un\nbuon tempo ti darò anche un premio.\n\n\n<0x10009:0x00000100>Nel livello principiante dovrai\ncatturare un esemplare di ognuno\ndei cinque tipi di insetti. Bene.\nSi comincia!")
/*< 75>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = false;
/*<  2>*/ 									make_actor_do_something(0, 0)
          								  case 1:
/*< 97>*/ 									printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00120315>Sembra che tu non abbia abbastanza\nsoldi. Sarai anche un compagno alla\nscuola d'armi, ma non posso farti uno\nsconto, mi spiace.")
          								}
          							  case 1:
          								flw_104:
/*<104>*/ 								printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00120813>Non penso che tu stia prendendo la\ncosa seriamente se credi di poter\ncatturare insetti con così poca\n<color red<vitalità>coloroff>.\n<0x10009:0x00000100>Recuperane un po' e poi torna qui.")
          							}
          						  case 1:
/*<103>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 93>*/ 								switch (has_rupees(50)) {
          								  case 0:
/*< 95>*/ 									rupees += -50;
/*< 92>*/ 									printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00030100>Ti cronometrerò, e se otterrai un\nbuon tempo ti darò anche un premio.\n\n\n<0x10009:0x00000100>Nel livello avanzato dovrai catturare\ndieci esemplari appartenenti agli otto\ntipi di insetti indicati. Bene.\nSi comincia!")
/*< 76>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = true;
/*< 12>*/ 									make_actor_do_something(1, 0)
          								  case 1:
/*< 94>*/ 									printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00120315>Sembra che tu non abbia abbastanza\nsoldi. Sarai anche un compagno alla\nscuola d'armi, ma non posso farti uno\nsconto, mi spiace.")
          								}
          							  case 1:
          								goto flw_104
          							}
          						  case 2:
/*<  3>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00120513>Beh, immagino che tu non sia affatto\nun amante degli insetti come me.")
          						}
          					  case 1:
/*<116>*/ 						printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x0013080a>Cosa?! Non hai nemmeno un <color yellow<retino>coloroff>?\nStai scherzando!\n\n\n<0x10009:0x00000500>Com'è possibile che tu non sia\naffascinato dall'entomologia?\nOrmai è quasi una moda!\nMi dispiace per te.\n<0x10009:0x00030100>Comunque, puoi comprare un retino\nalla <color red<bottega di Terry>coloroff>. Fossi in te ci\nandrei subito!")
          					}
          				  case 1:
/*< 56>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 7, 'param3': 12}
/*<  7>*/ 					story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */] = true;
/*< 49>*/ 					story_flags[286 /* us: 805A9AFA 0x01, jp: 805ACD7A 0x01 */] = true;
/*<  6>*/ 					printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Ehi, <heroname>! Che\ncoincidenza incontrarti qui.\n\n\n<0x10009:0x00120600>Mi sono perso nella nebbia e mi\nsono ritrovato su quest'isola...\n\n\n<0x10009:0x00000100>Sai, sembra essere l'habitat\nperfetto per gli insetti!\n\n\n<0x10009:0x00030104>Perciò ho deciso di allevare gli\ninsetti qui, ma naturalmente\ndevo prima catturarli. \n\n<0x10009:0x00000100>Ho un'idea! Perché non ne\ncatturi qualcuno anche tu?")
/*<112>*/ 					check_item_flag(71, 1)
/*<111>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 62}) {
          					  case 0:
/*<110>*/ 						printf(/* textboxtype: 1, unk: 1, line: 1 */ "<0x10009:0x00000100>Puoi scegliere tra due livelli. <color red<Livello\nprincipiante>coloroff>, piuttosto facile, e <color red<livello\navanzato>coloroff>, per veri esperti.\n\n<0x10009:0x00030100>Tu non mi sembri un vero esperto,\nperciò il primo ti costerà <color red<20 rupie>coloroff>,\nil secondo <color red<50>coloroff>. Quale scegli?\n[1-]Principiante[2-]Avanzato[3]Niente")
          						goto flw_1
          					  case 1:
/*<113>*/ 						printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x0013080a>Cosa?! Non hai nemmeno un <color yellow<retino>coloroff>?\nStai scherzando!\n\n\n<0x10009:0x00000500>Com'è possibile che tu non sia\naffascinato dall'entomologia?\nOrmai è quasi una moda!\nMi dispiace per te.\n<0x10009:0x00030100>Comunque, puoi comprare un retino\nalla <color red<bottega di Terry>coloroff>. Fossi in te ci\nandrei subito!")
          					}
          				}
          			  case 1:
/*< 26>*/ 				switch (story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */]) {
          				  case 0:
/*< 42>*/ 					printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00000004>Eh eh eh... sei tornato a prendere\nil <color blue<rinocottero gigante>coloroff>?\n[1-]Certo![2]No")
          					flw_50:
/*< 50>*/ 					switch (choice(2)) {
          					  case 0:
/*< 58>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 36, 'param3': 12}
/*< 36>*/ 						printf(/* textboxtype: 1, unk: 0, line: 36 */ "Gli affari sono affari, quindi ti\nprenderò <color red<10 rupie>coloroff>.\n[1-]Va bene[2]No")
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
/*< 41>*/ 										printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00040100>Secondo le regole devi catturare\ndieci esemplari a mia scelta.\n\n\n<0x10009:0x00030100>Ti cronometrerò e dovrai catturare\ni dieci insetti <color red<in meno di 3 minuti>coloroff>.\n\n\n<0x10009:0x00000100>Se ci riuscirai, ti darò il <color blue<rinocottero\ngigante>coloroff>.\n\n\nBene, allora. Si comincia!")
/*< 37>*/ 										make_actor_do_something(1, 0)
          									  case 1:
/*<119>*/ 										printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00130807>Fermo lì! Non hai ancora un retino\ne non posso farti partecipare\nsenza.\n\n<0x10009:0x00040100>Vai a comprare un <color yellow<retino >coloroff>e poi torna\nqui!")
          									}
          								  case 1:
/*<106>*/ 									printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00120813>Non penso che tu stia prendendo la\ncosa seriamente se credi di poter\ncatturare insetti con così poca\n<color red<vitalità>coloroff>.\n<0x10009:0x00000100>Recuperane un po' e poi torna qui.")
          								}
          							  case 1:
/*< 39>*/ 								printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00120315>Sembra che tu non abbia abbastanza\nsoldi. Sarai anche un compagno alla\nscuola d'armi, ma non posso farti uno\nsconto, mi spiace.")
          							}
          						  case 1:
          							flw_52:
/*< 52>*/ 							printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00120305>Vuoi diventare parte della mia\ncollezione?\n\n\n<0x10009:0x00000100>No, te lo chiedo perché hai\nun <color red<cervello da formica>coloroff>!\nEh eh eh! <0x10009:0x00000004>")
          						}
          					  case 1:
          						goto flw_52
          					}
          				  case 1:
/*< 31>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 28, 'param3': 31}
/*< 28>*/ 					printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00000004>Eh eh eh... salve, <heroname>!\nCome va?\n\n\n<0x10009:0x00000100>Che? Perché rido tanto?\nEh eh eh... perché sono felice!\n\n\nE sai perché? Ho trovato un insetto\nraro.\n[1-]Racconta![2-]Non mi\nimporta")
/*< 29>*/ 					switch (choice(2)) {
          					  case 0:
/*< 27>*/ 						story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */] = true;
/*< 32>*/ 						printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00030100>Ti interessa, eh?\n\n\n\nBeh...<pause 30> <0x10009:0x00130100>Sono riuscito a catturare il\nleggendario <color blue<rinocottero gigante>coloroff>!\n\n\n<0x10009:0x00030100>Le possibilità di trovarne uno sono\ncosì scarse che è quasi come trovare\nuna mosca bianca! Sono troppo felice!")
/*< 54>*/ 						printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00010800>Che dici?! Questo è l'insetto di Terry?\nLo stesso Terry che sorvola\nOltrenuvola con la sua\nbottega volante?\n[1-]Ridaglielo[2-]Povero Terry...")
/*< 33>*/ 						switch (choice(2)) {
          						  case 0:
/*< 35>*/ 							printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00100800>Credi davvero di convincermi con\ndelle storie strappalacrime?\nSei una persona orribile!\n\n<0x10009:0x00130100>L'ho trovato io, quindi è mio!")
          							flw_51:
/*< 51>*/ 							printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10006:0xfdcd>...<0x10006:0x00cd> Immagino di dover restituire ciò che\nnon mi appartiene.\n\n\n<0x10009:0x00120100>Però non riesco proprio a dartelo,\ncome una persona onesta\ndovrebbe fare...\n\n<0x10009:0x00000500>Mmh... ho un'idea!\n\n\n\n<0x10009:0x00000100>Ti consegnerò l'insetto se riuscirai a\nottenere un tempo assolutamente\nstrabiliante!\n\n<0x10009:0x00030100>Allora, che ne pensi? Accetti la sfida?\n[1-]Sì[2]Non ora")
          							goto flw_50
          						  case 1:
/*< 34>*/ 							printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00120500>Hai la minima idea di quanto valga\nquesto insetto?\n\n\n<0x10009:0x00000100>Il solo possederlo mi ha reso una\ncelebrità tra gli appassionati di insetti!")
          							goto flw_51
          						}
          					  case 1:
/*< 30>*/ 						printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00120515>Capisco... Sei davvero perfido, lo sai?")
          					}
          				}
          			}
          		  case 1:
          			goto flw_5
          		}
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000005>Non vuoi più catturare gli insetti?\nMi prendi in giro?\n[1-]Lascio[2]Continuo")
/*< 17>*/ 		switch (choice(2)) {
          		  case 0:
/*< 14>*/ 			printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00120500>Davvero? Ma che grilli\nhai per la testa?")
/*< 18>*/ 			make_actor_do_something(3, 0)
          		  case 1:
/*< 16>*/ 			printf(/* textboxtype: 1, unk: 0, line: 11 */ "Ci avrei giurato! La situazione si muta\nda bruco in farfalla!")
          		}
          	  case 2:
/*< 19>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00120500>Mmh... ci hai messo un po' troppo,\nnon ti pare?!\n\n\n<0x10009:0x00000100>Difatti il tempo è scaduto, mi dispiace,\ne non hai finito!")
/*< 23>*/ 		make_actor_do_something(4, 0)
          	  case 3:
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00131000>Calma, calma. Stavi proprio per fare il\nvolo del calabrone, sai?\n\n\n<0x10009:0x00030100>Dimentichi che gli insetti possono\nanche reagire! Ho pensato che fossi\nin pericolo e ho fermato tutto!")
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
/*< 10>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00120107>Bene, hai finito! Però sai che potevi\nfare molto meglio.\n\n\n<0x10009:0x00000100>Cerca di metterci <color red<meno >coloroff><color red<di 5 minuti>coloroff>\nla prossima volta.\n\n\n<0x10009:0x00030100>Di notte compro insetti, lo sapevi?\nFai un salto da me quando puoi!")
/*< 45>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 21>*/ 				printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00120500>È un vero peccato che tu non riesca\na cogliere il fascino degli insetti.\n\n\n<0x10009:0x00000100>Però puoi tornare quando vuoi!")
          			  case 2:
/*< 22>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00030100>Mi dispiace, nessun rimborso.\n<0x10009:0x00000100>Riprova! Eh eh eh...")
          			  case 3:
/*<101>*/ 				printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00000004>Eh eh eh... Eri così occupato a\ncatturare insetti che non hai fatto\ncaso alla tua vitalità!\n\n<0x10009:0x00000500>Mi dispiace, nessun rimborso.\nRecupera un po' di vitalità e\ntorna qui.")
          			}
          		  case 1:
/*< 79>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 77, 'param3': 44}
/*< 77>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 78>*/ 				printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00120104>OK, hai finito! Nient'affatto male,\ndirei.\n\n\n<0x10009:0x00000100>Cerca di ricordare dove trovare gli\ninsetti e ci metterai anche meno.\nProva a impiegarci <color red<meno di 3 minuti\n>coloroff>la prossima volta.")
/*< 59>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 120, 'param3': 12}
/*<120>*/ 				printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00030100>Ecco il tuo premio, <color red<80 rupie>coloroff>.")
/*< 81>*/ 				rupees += 80;
/*< 80>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 11>*/ 				printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00000004>Bene, hai finito! Direi che mi aspettavo\nche ci impiegassi questo tempo.\n\n\n<0x10009:0x00000100>Anche se gli insetti sono dello stesso\ntipo, potrebbe essere più facile\ncatturarli in altri posti. Io proverei\na cercarli altrove.")
/*<122>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 121, 'param3': 12}
/*<121>*/ 				printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00030100>La prossima volta devi cercare\ndi metterci <color red<meno di>coloroff> <color red<3 minuti>coloroff>.\nIntanto, eccoti <color red<30 rupie>coloroff>.")
/*< 55>*/ 				rupees += 30;
/*< 46>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 2:
/*< 88>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 87, 'param3': 44}
/*< 87>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 83>*/ 				printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000811>Bene, hai finito! Ma che incredibile\nprestazione!\n\n\n<0x10009:0x00000100>Potresti persino diventare il secondo\npiù grande collezionista d'insetti dopo\ndi me. Però la prossima volta devi\nmetterci <color red<meno di 2 minuti>coloroff>.\nE in premio avrai... <color red<5 insetti>coloroff>!")
/*< 82>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 45}
/*<129>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<108>*/ 				give_item(23 0x17);
/*<130>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<125>*/ 				printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00ffff00>Ti prego, prenditene cura, non fare\nla cicala.")
          			  case 1:
/*< 60>*/ 				printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x00000011>Ecco, hai finito! Wow. Sai, hai un\ntalento naturale! \n\n\n<0x10009:0x00120500>Però non sei ancora abbastanza bravo\nper vincere qualcuno dei miei insetti\npreferiti!")
/*<124>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 123, 'param3': 12}
/*<123>*/ 				printf(/* textboxtype: 1, unk: 0, line: 26 */ "Prova a finire in <color red<meno di 2 minuti>coloroff>\nla prossima volta.\n\n\nIn questo modo vincerai <color red<50 rupie>coloroff>!")
/*< 86>*/ 				rupees += 50;
/*< 47>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 3:
/*< 90>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 89, 'param3': 44}
/*< 89>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 84>*/ 				printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00130811>Bene, hai finito.\nMa è incredibile!\n\n\n<0x10009:0x00000100>Non posso nasconderti che sei\nappena diventato il più grande\ncollezionista d'insetti del\nmondo!\n<0x10009:0x00040100>Il tuo premio è in insetti,\novviamente. <color red<5 esemplari>coloroff> e anche\npiuttosto rari!")
/*< 85>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 131, 'param3': 45}
/*<131>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<109>*/ 				give_item(24 0x18);
/*<133>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<126>*/ 				printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00ffff00>Ti prego, prenditene cura, non fare\nla cicala.")
          			  case 1:
/*< 43>*/ 				printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00030811>Hai finito! Incredibile!\n\n\n\n<0x10009:0x00120100>Sei ancora al livello principiante,\nperò!\n\n\n<0x10009:0x00000100>Prova il livello avanzato e, se avrai\nsuccesso, potrai aggiungere i miei\n<color red<5 insetti>coloroff> preferiti alla tua collezione.")
/*< 48>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 132, 'param3': 45}
/*<132>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<107>*/ 				give_item(22 0x16);
/*<134>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<127>*/ 				printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00ffff00>Ti prego, prenditene cura, non fare\nla cicala.")
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
/*< 64>*/ 					printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x00000013>Meno male...\nnon ce l'hai fatta...\n\n\n<0x10009:0x00120500>Mi spiace ma non posso darti il\n<color blue<rinocottero gigante>coloroff>!\n\n\n<0x10009:0x00000100>Dovrai metterci meno di 3 minuti.\nForza, sorprendimi!")
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
/*< 71>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "Bene, hai finito! <0x10009:0x00000004>Eh eh eh... chi\nl'avrebbe mai detto che per te\nsarebbe stato così facile battere\nil record!")
/*< 67>*/ 				printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00120500>Come promesso... eccoti il\n<color blue<rinocottero gigante>coloroff>. \n\n\n<0x10009:0x00000100>Ammetto la sconfitta. Ora ho\ncapito che non sei uno\nche corre dietro alle <color red<farfalle>coloroff>. \n\n<0x10009:0x00030100>Eh eh eh...")
/*< 68>*/ 				story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */] = true;
/*< 69>*/ 				give_item(159 0x9F);
/*< 74>*/ 				printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x00040500>Di' a Terry che mi dispiace di aver\ncausato dei problemi.")
/*< 70>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 3:
          				goto flw_72
          			}
          		  case 1:
          			goto flw_9
          		}
          	}
          }

