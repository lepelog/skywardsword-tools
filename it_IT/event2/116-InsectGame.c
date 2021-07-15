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
/*<  4>*/ 						printf("\x0E\x01\x09\x04\x00\x01Allora, sei pronto? Si vede che sei\nun vero appassionato di insetti!\nIl livello principiante costa <r<20 rupie>>,\nquello avanzato <r<50>>.\nQuale scegli?\n[1]Principiante[2]Avanzato[3-]Niente")
          						flw_1:
/*<  1>*/ 						switch (choice(3)) {
          						  case 0:
/*<102>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 96>*/ 								switch (has_rupees(20)) {
          								  case 0:
/*< 98>*/ 									rupees += -20;
/*< 91>*/ 									printf("\x0E\x01\x09\x04\x03\x100Ti cronometrerò, e se otterrai un\nbuon tempo ti darò anche un premio.\n\n\n\x0E\x01\x09\x04\x00\x100Nel livello principiante dovrai\ncatturare un esemplare di ognuno\ndei cinque tipi di insetti. Bene.\nSi comincia!")
/*< 75>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = false;
/*<  2>*/ 									make_actor_do_something(0, 0)
          								  case 1:
/*< 97>*/ 									printf("\x0E\x01\x09\x04\x12\x315Sembra che tu non abbia abbastanza\nsoldi. Sarai anche un compagno alla\nscuola d'armi, ma non posso farti uno\nsconto, mi spiace.")
          								}
          							  case 1:
          								flw_104:
/*<104>*/ 								printf("\x0E\x01\x09\x04\x12\x813Non penso che tu stia prendendo la\ncosa seriamente se credi di poter\ncatturare insetti con così poca\n<r<vitalità>>.\n\x0E\x01\x09\x04\x00\x100Recuperane un po' e poi torna qui.")
          							}
          						  case 1:
/*<103>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 93>*/ 								switch (has_rupees(50)) {
          								  case 0:
/*< 95>*/ 									rupees += -50;
/*< 92>*/ 									printf("\x0E\x01\x09\x04\x03\x100Ti cronometrerò, e se otterrai un\nbuon tempo ti darò anche un premio.\n\n\n\x0E\x01\x09\x04\x00\x100Nel livello avanzato dovrai catturare\ndieci esemplari appartenenti agli otto\ntipi di insetti indicati. Bene.\nSi comincia!")
/*< 76>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = true;
/*< 12>*/ 									make_actor_do_something(1, 0)
          								  case 1:
/*< 94>*/ 									printf("\x0E\x01\x09\x04\x12\x315Sembra che tu non abbia abbastanza\nsoldi. Sarai anche un compagno alla\nscuola d'armi, ma non posso farti uno\nsconto, mi spiace.")
          								}
          							  case 1:
          								goto flw_104
          							}
          						  case 2:
/*<  3>*/ 							printf("\x0E\x01\x09\x04\x12\x513Beh, immagino che tu non sia affatto\nun amante degli insetti come me.")
          						}
          					  case 1:
/*<116>*/ 						printf("\x0E\x01\x09\x04\x13\x80ACosa?! Non hai nemmeno un <y<retino>>?\nStai scherzando!\n\n\n\x0E\x01\x09\x04\x00\x500Com'è possibile che tu non sia\naffascinato dall'entomologia?\nOrmai è quasi una moda!\nMi dispiace per te.\n\x0E\x01\x09\x04\x03\x100Comunque, puoi comprare un retino\nalla <r<bottega di Terry>>. Fossi in te ci\nandrei subito!")
          					}
          				  case 1:
/*< 56>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 7, 'param3': 12}
/*<  7>*/ 					story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */] = true;
/*< 49>*/ 					story_flags[286 /* us: 805A9AFA 0x01, jp: 805ACD7A 0x01 */] = true;
/*<  6>*/ 					printf("\x0E\x01\x09\x04\x00\x01Ehi, Link! Che\ncoincidenza incontrarti qui.\n\n\n\x0E\x01\x09\x04\x12\x600Mi sono perso nella nebbia e mi\nsono ritrovato su quest'isola...\n\n\n\x0E\x01\x09\x04\x00\x100Sai, sembra essere l'habitat\nperfetto per gli insetti!\n\n\n\x0E\x01\x09\x04\x03\x104Perciò ho deciso di allevare gli\ninsetti qui, ma naturalmente\ndevo prima catturarli. \n\n\x0E\x01\x09\x04\x00\x100Ho un'idea! Perché non ne\ncatturi qualcuno anche tu?")
/*<112>*/ 					check_item_flag(71, 1)
/*<111>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 62}) {
          					  case 0:
/*<110>*/ 						printf("\x0E\x01\x09\x04\x00\x100Puoi scegliere tra due livelli. <r<Livello\nprincipiante>>, piuttosto facile, e <r<livello\navanzato>>, per veri esperti.\n\n\x0E\x01\x09\x04\x03\x100Tu non mi sembri un vero esperto,\nperciò il primo ti costerà <r<20 rupie>>,\nil secondo <r<50>>. Quale scegli?\n[1]Principiante[2]Avanzato[3-]Niente")
          						goto flw_1
          					  case 1:
/*<113>*/ 						printf("\x0E\x01\x09\x04\x13\x80ACosa?! Non hai nemmeno un <y<retino>>?\nStai scherzando!\n\n\n\x0E\x01\x09\x04\x00\x500Com'è possibile che tu non sia\naffascinato dall'entomologia?\nOrmai è quasi una moda!\nMi dispiace per te.\n\x0E\x01\x09\x04\x03\x100Comunque, puoi comprare un retino\nalla <r<bottega di Terry>>. Fossi in te ci\nandrei subito!")
          					}
          				}
          			  case 1:
/*< 26>*/ 				switch (story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */]) {
          				  case 0:
/*< 42>*/ 					printf("\x0E\x01\x09\x04\x00\x04Eh eh eh... sei tornato a prendere\nil <b<rinocottero gigante>>?\n[1]Certo![2-]No")
          					flw_50:
/*< 50>*/ 					switch (choice(2)) {
          					  case 0:
/*< 58>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 36, 'param3': 12}
/*< 36>*/ 						printf("Gli affari sono affari, quindi ti\nprenderò <r<10 rupie>>.\n[1]Va bene[2-]No")
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
/*< 41>*/ 										printf("\x0E\x01\x09\x04\x04\x100Secondo le regole devi catturare\ndieci esemplari a mia scelta.\n\n\n\x0E\x01\x09\x04\x03\x100Ti cronometrerò e dovrai catturare\ni dieci insetti <r<in meno di 3 minuti>>.\n\n\n\x0E\x01\x09\x04\x00\x100Se ci riuscirai, ti darò il <b<rinocottero\ngigante>>.\n\n\nBene, allora. Si comincia!")
/*< 37>*/ 										make_actor_do_something(1, 0)
          									  case 1:
/*<119>*/ 										printf("\x0E\x01\x09\x04\x13\x807Fermo lì! Non hai ancora un retino\ne non posso farti partecipare\nsenza.\n\n\x0E\x01\x09\x04\x04\x100Vai a comprare un <y<retino >>e poi torna\nqui!")
          									}
          								  case 1:
/*<106>*/ 									printf("\x0E\x01\x09\x04\x12\x813Non penso che tu stia prendendo la\ncosa seriamente se credi di poter\ncatturare insetti con così poca\n<r<vitalità>>.\n\x0E\x01\x09\x04\x00\x100Recuperane un po' e poi torna qui.")
          								}
          							  case 1:
/*< 39>*/ 								printf("\x0E\x01\x09\x04\x12\x315Sembra che tu non abbia abbastanza\nsoldi. Sarai anche un compagno alla\nscuola d'armi, ma non posso farti uno\nsconto, mi spiace.")
          							}
          						  case 1:
          							flw_52:
/*< 52>*/ 							printf("\x0E\x01\x09\x04\x12\x305Vuoi diventare parte della mia\ncollezione?\n\n\n\x0E\x01\x09\x04\x00\x100No, te lo chiedo perché hai\nun <r<cervello da formica>>!\nEh eh eh! \x0E\x01\x09\x04\x00\x04")
          						}
          					  case 1:
          						goto flw_52
          					}
          				  case 1:
/*< 31>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 28, 'param3': 31}
/*< 28>*/ 					printf("\x0E\x01\x09\x04\x00\x04Eh eh eh... salve, Link!\nCome va?\n\n\n\x0E\x01\x09\x04\x00\x100Che? Perché rido tanto?\nEh eh eh... perché sono felice!\n\n\nE sai perché? Ho trovato un insetto\nraro.\n[1]Racconta![2]Non mi\nimporta")
/*< 29>*/ 					switch (choice(2)) {
          					  case 0:
/*< 27>*/ 						story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */] = true;
/*< 32>*/ 						printf("\x0E\x01\x09\x04\x03\x100Ti interessa, eh?\n\n\n\nBeh...<pause1E> \x0E\x01\x09\x04\x13\x100Sono riuscito a catturare il\nleggendario <b<rinocottero gigante>>!\n\n\n\x0E\x01\x09\x04\x03\x100Le possibilità di trovarne uno sono\ncosì scarse che è quasi come trovare\nuna mosca bianca! Sono troppo felice!")
/*< 54>*/ 						printf("\x0E\x01\x09\x04\x01\x800Che dici?! Questo è l'insetto di Terry?\nLo stesso Terry che sorvola\nOltrenuvola con la sua\nbottega volante?\n[1]Ridaglielo[2]Povero Terry...")
/*< 33>*/ 						switch (choice(2)) {
          						  case 0:
/*< 35>*/ 							printf("\x0E\x01\x09\x04\x10\x800Credi davvero di convincermi con\ndelle storie strappalacrime?\nSei una persona orribile!\n\n\x0E\x01\x09\x04\x13\x100L'ho trovato io, quindi è mio!")
          							flw_51:
/*< 51>*/ 							printf("\x0E\x01\x06\x02\xFDCD...\x0E\x01\x06\x02Í Immagino di dover restituire ciò che\nnon mi appartiene.\n\n\n\x0E\x01\x09\x04\x12\x100Però non riesco proprio a dartelo,\ncome una persona onesta\ndovrebbe fare...\n\n\x0E\x01\x09\x04\x00\x500Mmh... ho un'idea!\n\n\n\n\x0E\x01\x09\x04\x00\x100Ti consegnerò l'insetto se riuscirai a\nottenere un tempo assolutamente\nstrabiliante!\n\n\x0E\x01\x09\x04\x03\x100Allora, che ne pensi? Accetti la sfida?\n[1]Sì[2-]Non ora")
          							goto flw_50
          						  case 1:
/*< 34>*/ 							printf("\x0E\x01\x09\x04\x12\x500Hai la minima idea di quanto valga\nquesto insetto?\n\n\n\x0E\x01\x09\x04\x00\x100Il solo possederlo mi ha reso una\ncelebrità tra gli appassionati di insetti!")
          							goto flw_51
          						}
          					  case 1:
/*< 30>*/ 						printf("\x0E\x01\x09\x04\x12\x515Capisco... Sei davvero perfido, lo sai?")
          					}
          				}
          			}
          		  case 1:
          			goto flw_5
          		}
          	  case 1:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\x05Non vuoi più catturare gli insetti?\nMi prendi in giro?\n[1]Lascio[2-]Continuo")
/*< 17>*/ 		switch (choice(2)) {
          		  case 0:
/*< 14>*/ 			printf("\x0E\x01\x09\x04\x12\x500Davvero? Ma che grilli\nhai per la testa?")
/*< 18>*/ 			make_actor_do_something(3, 0)
          		  case 1:
/*< 16>*/ 			printf("Ci avrei giurato! La situazione si muta\nda bruco in farfalla!")
          		}
          	  case 2:
/*< 19>*/ 		printf("\x0E\x01\x09\x04\x12\x500Mmh... ci hai messo un po' troppo,\nnon ti pare?!\n\n\n\x0E\x01\x09\x04\x00\x100Difatti il tempo è scaduto, mi dispiace,\ne non hai finito!")
/*< 23>*/ 		make_actor_do_something(4, 0)
          	  case 3:
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x13\x1000Calma, calma. Stavi proprio per fare il\nvolo del calabrone, sai?\n\n\n\x0E\x01\x09\x04\x03\x100Dimentichi che gli insetti possono\nanche reagire! Ho pensato che fossi\nin pericolo e ho fermato tutto!")
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
/*< 10>*/ 				printf("\x0E\x01\x09\x04\x12\x107Bene, hai finito! Però sai che potevi\nfare molto meglio.\n\n\n\x0E\x01\x09\x04\x00\x100Cerca di metterci <r<meno >><r<di 5 minuti>>\nla prossima volta.\n\n\n\x0E\x01\x09\x04\x03\x100Di notte compro insetti, lo sapevi?\nFai un salto da me quando puoi!")
/*< 45>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 21>*/ 				printf("\x0E\x01\x09\x04\x12\x500È un vero peccato che tu non riesca\na cogliere il fascino degli insetti.\n\n\n\x0E\x01\x09\x04\x00\x100Però puoi tornare quando vuoi!")
          			  case 2:
/*< 22>*/ 				printf("\x0E\x01\x09\x04\x03\x100Mi dispiace, nessun rimborso.\n\x0E\x01\x09\x04\x00\x100Riprova! Eh eh eh...")
          			  case 3:
/*<101>*/ 				printf("\x0E\x01\x09\x04\x00\x04Eh eh eh... Eri così occupato a\ncatturare insetti che non hai fatto\ncaso alla tua vitalità!\n\n\x0E\x01\x09\x04\x00\x500Mi dispiace, nessun rimborso.\nRecupera un po' di vitalità e\ntorna qui.")
          			}
          		  case 1:
/*< 79>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 77, 'param3': 44}
/*< 77>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 78>*/ 				printf("\x0E\x01\x09\x04\x12\x104OK, hai finito! Nient'affatto male,\ndirei.\n\n\n\x0E\x01\x09\x04\x00\x100Cerca di ricordare dove trovare gli\ninsetti e ci metterai anche meno.\nProva a impiegarci <r<meno di 3 minuti\n>>la prossima volta.")
/*< 59>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 120, 'param3': 12}
/*<120>*/ 				printf("\x0E\x01\x09\x04\x03\x100Ecco il tuo premio, <r<80 rupie>>.")
/*< 81>*/ 				rupees += 80;
/*< 80>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 11>*/ 				printf("\x0E\x01\x09\x04\x00\x04Bene, hai finito! Direi che mi aspettavo\nche ci impiegassi questo tempo.\n\n\n\x0E\x01\x09\x04\x00\x100Anche se gli insetti sono dello stesso\ntipo, potrebbe essere più facile\ncatturarli in altri posti. Io proverei\na cercarli altrove.")
/*<122>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 121, 'param3': 12}
/*<121>*/ 				printf("\x0E\x01\x09\x04\x03\x100La prossima volta devi cercare\ndi metterci <r<meno di>> <r<3 minuti>>.\nIntanto, eccoti <r<30 rupie>>.")
/*< 55>*/ 				rupees += 30;
/*< 46>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 2:
/*< 88>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 87, 'param3': 44}
/*< 87>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 83>*/ 				printf("\x0E\x01\x09\x04\x00\x811Bene, hai finito! Ma che incredibile\nprestazione!\n\n\n\x0E\x01\x09\x04\x00\x100Potresti persino diventare il secondo\npiù grande collezionista d'insetti dopo\ndi me. Però la prossima volta devi\nmetterci <r<meno di 2 minuti>>.\nE in premio avrai... <r<5 insetti>>!")
/*< 82>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 45}
/*<129>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<108>*/ 				give_item(23 0x17);
/*<130>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<125>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00Ti prego, prenditene cura, non fare\nla cicala.")
          			  case 1:
/*< 60>*/ 				printf("\x0E\x01\x09\x04\x00\x11Ecco, hai finito! Wow. Sai, hai un\ntalento naturale! \n\n\n\x0E\x01\x09\x04\x12\x500Però non sei ancora abbastanza bravo\nper vincere qualcuno dei miei insetti\npreferiti!")
/*<124>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 123, 'param3': 12}
/*<123>*/ 				printf("Prova a finire in <r<meno di 2 minuti>>\nla prossima volta.\n\n\nIn questo modo vincerai <r<50 rupie>>!")
/*< 86>*/ 				rupees += 50;
/*< 47>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 3:
/*< 90>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 89, 'param3': 44}
/*< 89>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 84>*/ 				printf("\x0E\x01\x09\x04\x13\x811Bene, hai finito.\nMa è incredibile!\n\n\n\x0E\x01\x09\x04\x00\x100Non posso nasconderti che sei\nappena diventato il più grande\ncollezionista d'insetti del\nmondo!\n\x0E\x01\x09\x04\x04\x100Il tuo premio è in insetti,\novviamente. <r<5 esemplari>> e anche\npiuttosto rari!")
/*< 85>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 131, 'param3': 45}
/*<131>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<109>*/ 				give_item(24 0x18);
/*<133>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<126>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00Ti prego, prenditene cura, non fare\nla cicala.")
          			  case 1:
/*< 43>*/ 				printf("\x0E\x01\x09\x04\x03\x811Hai finito! Incredibile!\n\n\n\n\x0E\x01\x09\x04\x12\x100Sei ancora al livello principiante,\nperò!\n\n\n\x0E\x01\x09\x04\x00\x100Prova il livello avanzato e, se avrai\nsuccesso, potrai aggiungere i miei\n<r<5 insetti>> preferiti alla tua collezione.")
/*< 48>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 132, 'param3': 45}
/*<132>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<107>*/ 				give_item(22 0x16);
/*<134>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<127>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00Ti prego, prenditene cura, non fare\nla cicala.")
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
/*< 64>*/ 					printf("\x0E\x01\x09\x04\x00\x13Meno male...\nnon ce l'hai fatta...\n\n\n\x0E\x01\x09\x04\x12\x500Mi spiace ma non posso darti il\n<b<rinocottero gigante>>!\n\n\n\x0E\x01\x09\x04\x00\x100Dovrai metterci meno di 3 minuti.\nForza, sorprendimi!")
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
/*< 71>*/ 				printf("Bene, hai finito! \x0E\x01\x09\x04\x00\x04Eh eh eh... chi\nl'avrebbe mai detto che per te\nsarebbe stato così facile battere\nil record!")
/*< 67>*/ 				printf("\x0E\x01\x09\x04\x12\x500Come promesso... eccoti il\n<b<rinocottero gigante>>. \n\n\n\x0E\x01\x09\x04\x00\x100Ammetto la sconfitta. Ora ho\ncapito che non sei uno\nche corre dietro alle <r<farfalle>>. \n\n\x0E\x01\x09\x04\x03\x100Eh eh eh...")
/*< 68>*/ 				story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */] = true;
/*< 69>*/ 				give_item(159 0x9F);
/*< 74>*/ 				printf("\x0E\x01\x09\x04\x04\x500Di' a Terry che mi dispiace di aver\ncausato dei problemi.")
/*< 70>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 3:
          				goto flw_72
          			}
          		  case 1:
          			goto flw_9
          		}
          	}
          }

