          void entrypoint_101_30() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "")
          }

          void entrypoint_101_31() {
/*< 26>*/ 	start()
/*< 64>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 24, 'param3': 12}
/*< 24>*/ 	check_item_flag(19, 1)
/*< 25>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 6}) {
          	  case 0:
/*< 28>*/ 		printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00000002><color yellow<10 frecce>coloroff> sono sempre un ottimo acquisto,\nsecondo me! E sono anche un ottimo corredo\nper la divisa di un avventuriero.\n\nTuttavia, stia ben attento a non scagliarle per\nsbaglio contro la gente. Fanno <color red<20 rupie>coloroff>.\n[1-]Le compro[2]Non\nle compro")
/*< 21>*/ 		switch (choice(2)) {
          		  case 0:
/*< 23>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 26}
          		  case 1:
/*< 22>*/ 			entrypoint_101_08();
          		}
          	  case 1:
/*< 27>*/ 		printf(/* textboxtype: 0, unk: 0, line: 29 */ "Mi scusi, signore. Purtroppo non posso\nvenderle questo articolo dal momento\nche lei non possiede ancora un arco.\nTemo che queste siano le regole.")
          	}
          }

          void entrypoint_101_32() {
/*< 36>*/ 	start()
/*< 65>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 32, 'param3': 12}
/*< 32>*/ 	check_item_flag(92, 1)
/*< 31>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          	  case 0:
/*< 37>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000002>Aaah! Vedo che ha messo gli occhi su <color yellow<10 bombe>coloroff>.\nCon queste armi nel suo arsenale il signore sarà\ndavvero temibile!\n\nSono ottime per abbattere intere pareti con\nuna sola esplosione.\n\n\nCostano <color red<20 rupie>coloroff>.\nChe cosa ne dice?\n[1-]Le compro[2]Non\nle compro")
          		flw_33:
/*< 33>*/ 		switch (choice(2)) {
          		  case 0:
/*< 35>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 26}
          		  case 1:
/*< 34>*/ 			entrypoint_101_08();
          		}
          	  case 1:
/*< 38>*/ 		printf(/* textboxtype: 0, unk: 1, line: 31 */ "Mi scusi, signore. Purtroppo non posso\nvenderle questo articolo perché lei non\npossiede ancora un portabombe.\n\nLa prego di accettare le mie scuse,\nsignore.")
          	}
          }

          void entrypoint_101_33() {
/*< 46>*/ 	start()
/*< 66>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 47, 'param3': 12}
/*< 47>*/ 	printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00000002>Aaah. Quello è uno <color yellow<scudo di legno>coloroff>.\nEquipaggiandolo sarà in grado di respingere\ngli attacchi!\n\nTuttavia, se lo scudo subisce troppi danni,\n<color red<si romperà>coloroff>, quindi le consiglio di utilizzarlo\ncon cautela.\n\nUn altro dettaglio è che questo tipo di scudo\nè suscettibile al fuoco e si brucia facilmente.\n\n\nIl prezzo è di <color red<50 rupie>coloroff>.\nNe vuole acquistare uno?\n[1-]Lo compro[2]Non\nlo compro")
/*<125>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
          	goto flw_33
          }

          void entrypoint_101_34() {
/*< 48>*/ 	start()
/*< 67>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 50, 'param3': 12}
/*< 50>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00000002>Aaah. Quello è uno <color yellow<scudo di ferro>coloroff>.\nOffre maggiore protezione rispetto alla\nversione in legno.\n\nInoltre, è refrattario e invulnerabile al fuoco.\nIl suo punto debole d'altra parte è l'elettricità:\nsi aspetti di prendere delle belle scosse!\n\nIl prezzo è di <color red<100 rupie>coloroff>.\nLo vuole acquistare?\n[1-]Lo compro[2]Non\nlo compro")
/*<126>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
          	goto flw_33
          }

          void entrypoint_101_35() {
/*< 49>*/ 	start()
/*< 68>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 51, 'param3': 12}
/*< 51>*/ 	printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x00000002>Aaah. Quello è uno <color yellow<scudo sacro>coloroff>. Come ci si può\naspettare da ogni oggetto “sacro\", questo scudo\nè capace di resistere a ogni attacco.\n\nSe subisce dei leggeri danni, può ripararsi\nda solo e resiste a fuoco ed elettricità!\nUn vero gioiellino!\n\nPurtroppo<0x10006:0xfccd>...<0x10006:0x00cd> il suo difetto è la fragilità...\nD'altra parte il signore ha di certo il talento\nnecessario affinché questo non rappresenti\nun problema!\n\nCosta <color red<500 rupie>coloroff>.\nNe vuole acquistare uno?\n[1-]Lo compro[2]Non\nlo compro")
/*<127>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
          	goto flw_33
          }

          void entrypoint_101_01() {
          	start()
/*< 40>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
          		flw_41:
/*< 41>*/ 		printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00000001>Aaah, un cliente.\nCome posso esserle utile, signore?\n[1-]Spiegami [2]Niente,\nper ora")
          		flw_1:
/*<  1>*/ 		switch (choice(2)) {
          		  case 0:
/*<  4>*/ 			printf(/* textboxtype: 0, unk: 0, line: 2 */ "Ma signore, per me è un piacere\npoter rispondere a ogni sua\ndomanda.\n\nSi metta di fronte a un prodotto e\ncon la semplice pressione del tasto (A)\npotrà esaminarlo a piacimento!\n\nE non si preoccupi, può prendere\nvisione di tutto senza impegno!")
/*<139>*/ 			switch (story_flags[809 /* us: 805A9B31 0x02, jp: 805ACDB1 0x02 */]) {
          			  case 0:
/*<138>*/ 				printf(/* textboxtype: 1, unk: 0, line: 3 */ "Il signore ha anche a disposizione\nil servizio dell'officina nel caso\nvoglia potenziare e modificare\ngli oggetti acquistati qui.\nPer esempio, aumentando\nla resistenza degli scudi se ne\npossono godere i vantaggi più a\nlungo!")
/*<140>*/ 				zone_temp_flags[1 /* 0x1 02 */] = true;
          			  case 1:
          			}
          		  case 1:
/*<  3>*/ 			printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000007>Aaah, ma certo! Ma certo!\nUn cliente esperto e ben informato\ncome lei non ha certo bisogno\ndella mia assistenza!\nBene, che ne dice di curiosare un\npo' tra i miei prodotti di qualità?")
/*< 39>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		}
          	  case 1:
/*< 97>*/ 		switch (story_flags[1114 /* us: 805A9B57 0x01, jp: 805ACDD7 0x01 */]) {
          		  case 0:
/*<102>*/ 			switch (scene_flags[123 /* 0xE 08 */]) {
          			  case 0:
          				goto flw_41
          			  case 1:
/*<109>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 110, 'param3': 31}
/*<110>*/ 				printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000001>Aaah, signore, lei è davvero fortunato\nperché oggi ho un <color red<nuovo prodotto>coloroff>!\n\n\nIn offerta speciale per lei signore ho\nquesta <color yellow<faretra piccola>coloroff>. Per gli amanti\ndel tiro con l'arco si tratta di un\naccessorio imprescindibile!\nLa prego, osservi più da vicino.")
/*<111>*/ 				zone_temp_flags[1 /* 0x1 02 */] = true;
/*<115>*/ 				scene_flags[0 'Skyloft'][123 /* 0xE 08 */] = true;
          			}
          		  case 1:
/*< 98>*/ 			switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          			  case 0:
/*<101>*/ 				switch (scene_flags[122 /* 0xE 04 */]) {
          				  case 0:
          					goto flw_41
          				  case 1:
/*<106>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 107, 'param3': 31}
/*<107>*/ 					printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00000001>Aaah, signore, lei è davvero fortunato\nperché oggi ho un <color red<nuovo prodotto>coloroff>!\n\n\nQuesto <color yellow<scudo sacro>coloroff> dovrebbe essere\nproprio quello che le serve.\nSi tratta di un oggetto tanto\nmeraviglioso quanto misterioso!\nMa la prego, lo esamini pure da vicino.")
/*<108>*/ 					zone_temp_flags[1 /* 0x1 02 */] = true;
/*<114>*/ 					scene_flags[0 'Skyloft'][122 /* 0xE 04 */] = true;
          				}
          			  case 1:
/*< 96>*/ 				switch (story_flags[1115 /* us: 805A9B57 0x02, jp: 805ACDD7 0x02 */]) {
          				  case 0:
/*<100>*/ 					switch (scene_flags[121 /* 0xE 02 */]) {
          					  case 0:
          						goto flw_41
          					  case 1:
/*<103>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 104, 'param3': 31}
/*<104>*/ 						printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00000001>Aaah, signore, lei è davvero fortunato\nperché oggi ho un <color red<nuovo prodotto>coloroff> che\nfa al caso suo!\n\nCredo che lei saprà apprezzare questo\n<color yellow<portabombe piccolo>coloroff>!\nMa prego, dia pure un'occhiata.")
/*<105>*/ 						zone_temp_flags[1 /* 0x1 02 */] = true;
/*<113>*/ 						scene_flags[0 'Skyloft'][121 /* 0xE 02 */] = true;
          					}
          				  case 1:
/*< 92>*/ 					switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          					  case 0:
/*< 99>*/ 						switch (scene_flags[120 /* 0xE 01 */]) {
          						  case 0:
          							goto flw_41
          						  case 1:
/*< 93>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 123, 'param3': 31}
/*<123>*/ 							switch (scene_flags[124 /* 0xE 10 */]) {
          							  case 0:
/*< 94>*/ 								printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00000001>Aaah, signore, lei è proprio fortunato\nperché posso offrirle un <color red<nuovo\nprodotto >coloroff>arrivato proprio oggi: lo\n<color yellow<scudo di ferro>coloroff>!\nSi tratta di un'occasione eccezionale\nLa prego, dia un'occhiata.")
          								flw_95:
/*< 95>*/ 								zone_temp_flags[1 /* 0x1 02 */] = true;
/*<112>*/ 								scene_flags[0 'Skyloft'][120 /* 0xE 01 */] = true;
          							  case 1:
/*<124>*/ 								printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00000001>Aaah, signore. Lei è proprio fortunato\nperché oggi posso offrirle ben due\n<color red<nuovi prodotti>coloroff>!\n\nSono appena arrivati lo <color yellow<scudo di ferro>coloroff>\ne il <color yellow<sacco per semi piccolo>coloroff>.\nLa prego, osservi pure.")
          								goto flw_95
          							}
          						}
          					  case 1:
/*<117>*/ 						switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          						  case 0:
/*<118>*/ 							switch (scene_flags[124 /* 0xE 10 */]) {
          							  case 0:
          								goto flw_41
          							  case 1:
/*<119>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 122, 'param3': 31}
/*<122>*/ 								printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00000001>Aaah, signore, lei è davvero fortunato\nperché ho un <color red<nuovo prodotto >coloroff>arrivato\nproprio oggi!\n\nCredo che le piacerà questo <color yellow<sacco per\nsemi piccolo>coloroff>. Si tratta di un accessorio\nimprescindibile per chi usa molto la\nfionda.\nMa la prego, dia un'occhiata.")
/*<120>*/ 								zone_temp_flags[1 /* 0x1 02 */] = true;
/*<121>*/ 								scene_flags[0 'Skyloft'][124 /* 0xE 10 */] = true;
          							}
          						  case 1:
/*<  2>*/ 							printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Aaah, un cliente!\nBenvenuto signore! Benvenuto!\n\n\nBenvenuto alla bottega degli arnesi,\nil negozio più utile per l'avventuriero!\n\n\nLa prego, guardi la merce con calma,\nsicuramente troverà qualcosa di\ninteressante.\n\nE c'è anche un fantastico\nsconto per i cavalieri!\n\n\nE se desidera qualche informazione,\nnon esiti a chiedere!\n[1-]Ho capito[2]Va bene<0x10007:0x00000000>")
          							goto flw_1
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_101_36() {
/*< 54>*/ 	start()
/*< 69>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 53, 'param3': 12}
/*< 53>*/ 	check_item_flag(52, 1)
/*< 52>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 16}) {
          	  case 0:
/*< 55>*/ 		printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x00000002>Vedo che lei è interessato a questi\n<color yellow<10 semi Deku>coloroff>! Sono il proiettile\npreferito da ogni maestro di fionda.\n\nSe posso raccomandarglieli, sono precisi\ne affidabili. Costano <color red<20 rupie>coloroff>.\n[1-]Li compro[2]Non\nli compro")
          		goto flw_33
          	  case 1:
/*< 56>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "Signore... a quanto pare lei non è in\npossesso di una fionda. Non posso certo\nvenderle questo prodotto se lei non\nha ancora una fionda...\nPerché non dà uno sguardo\nal resto della merce?")
          	}
          }

          void entrypoint_101_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 0, unk: 0, line: 11 */ "")
          }

          void entrypoint_101_37() {
/*< 71>*/ 	start()
/*< 72>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 141, 'param3': 12}
/*<141>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
/*< 81>*/ 	check_item_flag(52, 1)
/*< 80>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 20}) {
          	  case 0:
/*< 73>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00000002>Questo è un <color yellow<sacco per semi piccolo>coloroff>!\nLe basta alloggiarlo all'interno della sua borsa\nper poter trasportare 10 semi in più.\n\nÈ un accessorio fondamentale per tutti gli\namanti della fionda! Costa <color red<100 rupie>coloroff>.\n\n\nChe ne dice, signore?\n[1-]Lo compro[2]Non\nlo compro")
          		goto flw_33
          	  case 1:
/*< 82>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "Signore... a quanto pare lei non è in\npossesso di una fionda. Non posso certo\nvenderle questo prodotto se lei non\nha ancora una fionda...\nPerché non dà uno sguardo\nal resto della merce?")
          	}
          }

          void entrypoint_101_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	switch (random(2)) {
          	  case 0:
/*<  9>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "")
          	  case 1:
/*< 10>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "")
          	}
          }

          void entrypoint_101_38() {
/*< 74>*/ 	start()
/*< 75>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 142, 'param3': 12}
/*<142>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
/*< 83>*/ 	check_item_flag(19, 1)
/*< 84>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 22}) {
          	  case 0:
/*< 76>*/ 		printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00000002>Questa è una <color yellow<faretra piccola>coloroff>!\nLe basta alloggiarla nella sua borsa per\npoter trasportare ben 5 frecce in più.\n\nÈ un acquisto obbligato per ogni arciere\nche si rispetti!\n\n\nLe viene a costare <color red<150 rupie>coloroff>.\nLa vuole acquistare?\n[1-]La compro[2]Non\nla compro")
          		goto flw_33
          	  case 1:
/*< 85>*/ 		printf(/* textboxtype: 0, unk: 0, line: 29 */ "Mi scusi, signore. Purtroppo non posso\nvenderle questo articolo dal momento\nche lei non possiede ancora un arco.\nTemo che queste siano le regole.")
          	}
          }

          void entrypoint_101_04() {
/*< 13>*/ 	start()
/*< 62>*/ 	check_item_flag(112, 1)
/*< 63>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 18}) {
          	  case 0:
/*< 14>*/ 		printf(/* textboxtype: 0, unk: 0, line: 14 */ "La prego di perdonarmi, signore.\nPurtroppo lei non ha spazio a\nsufficienza nella sua borsa per questo\noggetto...\nPosso suggerirle di affidare qualcosa al\ndeposito?")
/*<128>*/ 		zone_temp_flags[5 /* 0x1 20 */] = false;
          	  case 1:
          	}
          }

          void entrypoint_101_39() {
/*< 77>*/ 	start()
/*< 78>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 143, 'param3': 12}
/*<143>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
/*< 87>*/ 	check_item_flag(92, 1)
/*< 86>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 24}) {
          	  case 0:
/*< 79>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00000002>Questo è un <color yellow<portabombe piccolo>coloroff>!\nLe basta alloggiarlo nella sua borsa per\npoter trasportare ben 5 bombe in più.\n\nSe si trova spesso a corto di bombe,\ndeve assolutamente prenderlo!\n\n\nLe costa <color red<150 rupie>coloroff>.\nChe dice, lo compra?\n[1-]Lo compro[2]Non\nlo compro")
          		goto flw_33
          	  case 1:
/*< 88>*/ 		printf(/* textboxtype: 0, unk: 1, line: 31 */ "Mi scusi, signore. Purtroppo non posso\nvenderle questo articolo perché lei non\npossiede ancora un portabombe.\n\nLa prego di accettare le mie scuse,\nsignore.")
          	}
          }

          void entrypoint_101_05() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 0, unk: 1, line: 16 */ "La prego di perdonarmi, signore.\nTemo che lei abbia già la massima\nquantità consentita per questo\nprodotto.\nSe vuole però, può sempre valutare\nqualche altra mercanzia.")
/*<129>*/ 	zone_temp_flags[5 /* 0x1 20 */] = false;
          }

          void entrypoint_101_06() {
/*< 17>*/ 	start()
/*< 59>*/ 	make_actor_do_something(1, 0)
/*< 18>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00000008>Ehm...<0x10005:0x000a0000>")
/*< 60>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 512, 'next': 61, 'param3': 22}
/*< 61>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "Signore...\nLei, ehm, non possiede rupie a\nsufficienza per pagare...\n\nForse il signore potrebbe evitare di\nindulgere in giochetti così poco\nraffinati...?")
/*<130>*/ 	zone_temp_flags[5 /* 0x1 20 */] = false;
          }

          void entrypoint_101_07() {
/*< 19>*/ 	start()
/*< 57>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 512, 'next': 43, 'param3': 22}
/*< 43>*/ 	switch (random(2)) {
          	  case 0:
/*< 20>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00000007>Aaah, la ringrazio.\nLei qui è sempre il benvenuto!")
          		flw_144:
/*<144>*/ 		switch (zone_temp_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*< 90>*/ 			switch (scene_flags[89 /* 0xA 02 */]) {
          			  case 0:
/*<132>*/ 				switch (story_flags[809 /* us: 805A9B31 0x02, jp: 805ACDB1 0x02 */]) {
          				  case 0:
          					flw_70:
/*< 70>*/ 					printf(/* textboxtype: 1, unk: 0, line: 21 */ "Signore, se non le dispiace mi prendo la\nlibertà di riporre l'acquisto nella sua\nborsa.\n\nGli oggetti, come scudi o altro,\npossono essere <color red<equipaggiati >coloroff>aprendo\nla borsa con <color green<<icon 40>>coloroff> e selezionando\nl'oggetto desiderato!<0x10011:0x0ecd>")
          					flw_137:
/*<137>*/ 					zone_temp_flags[5 /* 0x1 20 */] = false;
          				  case 1:
/*<134>*/ 					switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
          					  case 0:
/*<135>*/ 						printf(/* textboxtype: 0, unk: 0, line: 23 */ "Signore, se nutre dubbi sulla\n<color red<durevolezza del suo scudo>coloroff>, posso\nsuggerirle di far visita all'<color red<officina>coloroff>?\n\nSe lei possiede tesori o altro, il\nproprietario sarà lieto di potenziarle\nlo scudo o altri strumenti.")
/*<133>*/ 						story_flags[809 /* us: 805A9B31 0x02, jp: 805ACDB1 0x02 */] = true;
          						goto flw_137
          					  case 1:
          						goto flw_70
          					}
          				}
          			  case 1:
/*< 89>*/ 				printf(/* textboxtype: 0, unk: 1, line: 22 */ "Signore, se non le dispiace mi prendo\nla libertà di riporre l'acquisto nella\nsua borsa.\nPer aprire la borsa tenga premuto <icon 40>.<0x10011:0x0ecd>\nQuando avrà scelto l'oggetto che intende\nutilizzare, <color green<rilasci >coloroff><icon 40> per equipaggiarlo.\nIn questo modo, le sarà possibile usare\noggetti quali gli scudi senza difficoltà!<0x10011:0x0ecd>")
/*< 91>*/ 				story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
/*<116>*/ 				scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
/*<136>*/ 				zone_temp_flags[5 /* 0x1 20 */] = false;
          			}
          		  case 1:
          		}
          	  case 1:
/*< 42>*/ 		printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00000007>Aaah. Il cliente ha sempre ragione!")
          		goto flw_144
          	}
          }

          void entrypoint_101_08() {
/*< 29>*/ 	start()
/*< 44>*/ 	make_actor_do_something(1, 0)
/*< 58>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00000008>...<0x10005:0x000f0000>")
/*< 45>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 512, 'next': 30, 'param3': 22}
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "Non si preoccupi! Non c'è problema,\nsignore!\nHo tanti altri articoli per lei...\nGuardi pure con comodo!")
/*<131>*/ 	zone_temp_flags[5 /* 0x1 20 */] = false;
          }

