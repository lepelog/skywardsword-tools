          void entrypoint_119_10() {
/*<113>*/ 	start()
/*<120>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*<112>*/ 		printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00170209><0x10008:0x02cd>Splendido!")
/*<124>*/ 		set_camera(3, 0)
/*<125>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00171a08>La tua determinazione è eccellente!\n\n\n\n<0x10009:0x00090200>Perché non provi a\neseguire un <color green<colpo di grazia>coloroff>?\n[1-]Certo![2]Non ora")
          	  case 1:
/*<121>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00091d04>Che succede, <heroname>?\nQualcosa non va?")
/*<122>*/ 		set_camera(3, 0)
/*<123>*/ 		printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00081d01>Resta in mezzo ai tuoi avversari.\nDevi muovere il telecomando Wii e il\nNunchuk <color red<orizzontalmente e allo stesso\ntempo >coloroff>per eseguire un attacco rotante.\n<0x10009:0x00090200>Vuoi riprovare?\n[1-]Sì[2]No")
          	}
          }

          void entrypoint_119_11() {
/*<115>*/ 	start()
/*<111>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00080200>Bene! Ora devi tagliare i tronchi che ti\ncircondano senza spostarti.\nMuovi il telecomando Wii e il Nunchuk\n<color red<insieme >coloroff><color green<orizzontalmente>coloroff>.\n<0x10009:0x00090200>Provaci!")
          }

          void entrypoint_119_12() {
/*<126>*/ 	start()
/*<127>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00081d03>Bene! Se il nemico è a terra,\n<color red<inquadralo >coloroff>premendo (Z) e <color red<scuoti il\ntelecomando Wii e il Nunchuk insieme\n>coloroff>per eseguire il <color green<colpo di grazia>coloroff>.<0x10011:0x07cd>\n<0x10009:0x00091d00>Esegui un taglio orizzontale su\nquel tronco e, quando cade,\nsperimenta la nuova tecnica!")
          }

          void entrypoint_119_13() {
/*<128>*/ 	start()
/*<129>*/ 	printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x00171a09><0x10008:0x01cd>Meraviglioso!")
/*<130>*/ 	set_camera(3, 0)
/*<131>*/ 	printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00190200>L'uso dello <color red<scudo>coloroff> o dell'<color red<attacco rotante\n>coloroff>è certamente importante, ma il <color green<colpo di\ngrazia >coloroff>è una tecnica fondamentale una\nvolta che il nemico è al tappeto.\n<0x10009:0x001c0200>Per eseguirlo, devi scuotere il\ntelecomando Wii e il Nunchuk al\nmomento opportuno quando il\nnemico è a terra .")
          }

          void entrypoint_119_01() {
          	start()
/*< 68>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*< 70>*/ 		printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00091901>Porta i miei saluti al proprietario\ndella taverna delle zucche!")
          	  case 1:
/*< 53>*/ 		switch (story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */]) {
          		  case 0:
/*< 54>*/ 			switch (adventure_pouch_has(2 0x0002)) {
          			  case 0:
/*< 67>*/ 				switch (zone_temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
          					flw_57:
/*< 57>*/ 					entrypoint_119_03();
          				  case 1:
/*< 58>*/ 					printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00000003>Ehi! Di' un po'...\nMi hai portato... dell'altra\nzuppa di zucca bollente?\n\nHa un ottimo aspetto...\n[1-]Uhmmm...\necco qui[2-]...")
/*< 59>*/ 					switch (choice(2)) {
          					  case 0:
/*< 61>*/ 						printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00171909>È per me?! Sei sicuro?\nScusa se l'ho dato per scontato.\n\n\nA vederla così, mi ci tufferei!")
/*<138>*/ 						{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 108, 'param3': 47}
/*<108>*/ 						make_actor_do_something(0, 0)
/*< 62>*/ 						make_actor_do_something(1, 0)
/*<119>*/ 						{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 99, 'param3': 15}
/*< 99>*/ 						set_camera(10, 0)
/*<100>*/ 						{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 139, 'param3': 13}
/*<139>*/ 						{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 102, 'param3': 48}
/*<102>*/ 						wait_frames(96)
/*<101>*/ 						{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5651, 'next': 103, 'param3': 13}
/*<103>*/ 						printf(/* textboxtype: 1, unk: 0, line: 44 */ "Mmh... deliziosa!<0x10005:0x001e0000>")
/*<104>*/ 						set_camera(11, 0)
/*< 63>*/ 						printf(/* textboxtype: 1, unk: 0, line: 48 */ "È squisita!\n\n\n\n<0x10009:0x00171900>La zuppa di zucca di Zuco\nè sempre deliziosa, potrei\nmangiarne a barili!")
/*<154>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 144, 'param3': 47}
/*<144>*/ 						set_camera(12, 0)
/*<143>*/ 						make_actor_do_something(2, 0)
/*<155>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 142, 'param3': 48}
/*<142>*/ 						printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00080200>Grazie, <heroname>!\nUna piccola ricompensa da parte mia!")
/*<105>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 64, 'param3': 42}
/*< 64>*/ 						give_item(4 0x04);
/*< 71>*/ 						zone_temp_flags[1 /* 0x1 02 */] = true;
          					  case 1:
/*< 60>*/ 						printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10006:0xfccd>...\n...<0x10006:0x00cd>\n\n\n<0x10009:0x00081900>Ah ah ah!\nScherzavo!")
/*< 65>*/ 						zone_temp_flags[2 /* 0x1 04 */] = true;
          					}
          				}
          			  case 1:
          				goto flw_57
          			}
          		  case 1:
/*< 33>*/ 			switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
          			  case 0:
/*< 34>*/ 				switch (adventure_pouch_has(2 0x0002)) {
          				  case 0:
/*< 37>*/ 					printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00081901>Ehi, <heroname>!\nTi sei allenato per bene con la spada?\n\n\n<0x10009:0x00000200>Eh?\n\n\n\n<0x10009:0x00001909>Ehi, ma quella non è la mia\nadorata <color red<zuppa di zucca>coloroff>?!\n\n\n<0x10009:0x00000200>Zuco ti ha chiesto di portarmene\nun po'... e sei venuto fin qui dalla\ntaverna delle zucche con quella?\n[1-]Esatto![2]No")
/*< 41>*/ 					switch (choice(2)) {
          					  case 0:
/*< 42>*/ 						printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00171909>Evvai!\nVeloce! Dammela, presto!\n[1-]Ecco[2]Ehm...")
/*< 44>*/ 						switch (choice(2)) {
          						  case 0:
/*<135>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 107, 'param3': 47}
/*<107>*/ 							make_actor_do_something(0, 0)
/*< 48>*/ 							make_actor_do_something(1, 0)
/*<118>*/ 							{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 95, 'param3': 15}
/*< 95>*/ 							set_camera(10, 0)
/*< 91>*/ 							{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 136, 'param3': 13}
/*<136>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 93, 'param3': 48}
/*< 93>*/ 							wait_frames(96)
/*< 92>*/ 							{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5655, 'next': 94, 'param3': 13}
/*< 94>*/ 							printf(/* textboxtype: 1, unk: 0, line: 44 */ "Mmh... deliziosa!<0x10005:0x001e0000>")
/*< 96>*/ 							set_camera(11, 0)
/*< 52>*/ 							printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00000013>Assolutamente squisita!\n\n\n\n<0x10009:0x00171900>Non c'è niente di meglio di\nuna bella zuppa di zucca bollente!")
/*<151>*/ 							{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 141, 'param3': 47}
/*<141>*/ 							make_actor_do_something(2, 0)
/*<145>*/ 							set_camera(12, 0)
/*<152>*/ 							{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 140, 'param3': 48}
/*<140>*/ 							printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x00081900>Bel lavoro! Ringrazia Zuco da\nparte mia quando lo vedi!")
/*< 51>*/ 							story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */] = true;
/*< 66>*/ 							zone_temp_flags[1 /* 0x1 02 */] = true;
/*<153>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*< 47>*/ 							printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00001d00>Cosa?! Non ti ha detto di portarmela?\nSai, non ti consiglio di provocarmi\nin questo modo.\n\n<0x10009:0x00081d00>Se quella zuppa non è più buona è\nmeglio che tu vada subito a prenderne\ndell'altra!\n\nSe non è bollente, non mi piace!\nRicordatelo!")
          						}
          					  case 1:
/*< 40>*/ 						printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x000e1d00>Capisco...\nCon chi crede di avere a che fare\nil proprietario della taverna? Gli avevo\nchiesto di portarmene una subito!\n<0x10009:0x00081d00>Sai, perdo la pazienza molto\nfacilmente se non bevo la mia\nzuppa di zucca ogni giorno.")
          					}
          				  case 1:
/*< 35>*/ 					switch (adventure_pouch_has(3 0x0003)) {
          					  case 0:
/*< 36>*/ 						printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00081901>Ehi, <heroname>!\nTi sei allenato per bene con la spada?\n\n\n<0x10009:0x00000200>Eh?\n\n\n\n<0x10009:0x00001909>Ehi, ma quella non è la mia\nadorata <color red<zuppa di zucca>coloroff>?!\n\n\n<0x10009:0x00000200>Zuco ti ha chiesto di portarmene\nun po'... e sei venuto fin qui dalla\ntaverna delle zucche con quella?\n[1-]Esatto![2]No")
/*< 39>*/ 						switch (choice(2)) {
          						  case 0:
/*< 43>*/ 							printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00171909>Evvai!\nVeloce! Dammela, presto!\n[1-]Ecco[2]Ehm...")
/*< 45>*/ 							switch (choice(2)) {
          							  case 0:
/*<132>*/ 								{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 106, 'param3': 47}
/*<106>*/ 								make_actor_do_something(0, 0)
/*< 49>*/ 								make_actor_do_something(1, 0)
/*<117>*/ 								{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 97, 'param3': 15}
/*< 97>*/ 								set_camera(10, 0)
/*< 88>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 133, 'param3': 13}
/*<133>*/ 								{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 90, 'param3': 48}
/*< 90>*/ 								wait_frames(96)
/*< 89>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4118, 'next': 147, 'param3': 13}
/*<147>*/ 								set_camera(11, 0)
/*<146>*/ 								printf(/* textboxtype: 1, unk: 0, line: 40 */ "Bleah! Ma è disgustosa...<pause 20>\nÈ fredda come la roccia...")
/*<148>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 149, 'param3': 47}
/*<149>*/ 								{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 7424, 'next': 134, 'param3': 13}
/*<134>*/ 								make_actor_do_something(2, 0)
/*< 98>*/ 								set_camera(12, 0)
/*<150>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 50, 'param3': 48}
/*< 50>*/ 								printf(/* textboxtype: 1, unk: 0, line: 41 */ "Ci sono due cose che odio: la zuppa\nfredda e le donne snob!\n\n\nPortami dell'altra zuppa!\nCalda, mi raccomando!")
/*<137>*/ 								{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          							  case 1:
/*< 46>*/ 								printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00001d00>Cosa?! Non ti ha detto di portarmela?\nSai, non ti consiglio di provocarmi\nin questo modo.\n\n<0x10009:0x00081d00>Se quella zuppa non è più buona è\nmeglio che tu vada subito a prenderne\ndell'altra!\n\nSe non è bollente, non mi piace!\nRicordatelo!")
          							}
          						  case 1:
/*< 38>*/ 							printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x000e1d00>Capisco...\nCon chi crede di avere a che fare\nil proprietario della taverna? Gli avevo\nchiesto di portarmene una subito!\n<0x10009:0x00081d00>Sai, perdo la pazienza molto\nfacilmente se non bevo la mia\nzuppa di zucca ogni giorno.")
          						}
          					  case 1:
/*< 56>*/ 						entrypoint_119_03();
          					}
          				}
          			  case 1:
/*< 69>*/ 				entrypoint_119_03();
          			}
          		}
          	}
          }

          void entrypoint_119_02() {
/*< 24>*/ 	start()
/*< 30>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 11, 'next': 25, 'param3': 32}
/*< 25>*/ 	printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x0b0d0002>Ehi!<0x1000D:0x1900> <heroname>!")
/*< 31>*/ 	{'type': 'type3', 'subType': 1, 'param1': 11, 'param2': 0, 'next': 72, 'param3': 16}
/*< 72>*/ 	set_camera(1, 0)
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00081d00>Non puoi portare via le\nspade da qui.\n\n\nChe credi di fare? Portartene\nuna via di nascosto?")
/*< 73>*/ 	set_camera(2, 0)
/*< 29>*/ 	make_actor_do_something(3, 11)
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 11, 'next': 26, 'param3': 17}
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00000005>Che?\n<pause 40>Non trovi più il tuo solcanubi?\n<pause 40>Vuoi andare a cercarlo?\nAllora va bene, non posso negartelo.\n<0x10009:0x00090e00>Oltrenuvola è in pace e solo\ni cavalieri possono portare\narmi qui. È la regola!\n\nMa dammi retta, fai pratica con i\ntronchi qui dentro, così sarai pronto\nquando verrà il momento di usare\nquel ferro!")
/*< 74>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 27, 'param3': 42}
/*< 27>*/ 	story_flags[199 /* us: 805A9AEF 0x02, jp: 805ACD6F 0x02 */] = true;
/*< 75>*/ 	scene_flags[0 'Skyloft'][56 /* 0x6 01 */] = true;
          }

          void entrypoint_119_03() {
/*< 55>*/ 	start()
/*< 13>*/ 	switch (adventure_pouch_has(9 0x0009)) {
          	  case 0:
/*<156>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*< 17>*/ 			printf(/* textboxtype: 1, unk: 1, line: 13 */ "<0x10009:0x00000005>Cosa?\nVuoi ascoltare di nuovo i <color red<segreti\ndella difesa>coloroff>?\n\n[1-]Pratica[2-]Teoria[3]Non ora")
/*< 19>*/ 			switch (choice(3)) {
          			  case 0:
/*< 20>*/ 				printf(/* textboxtype: 1, unk: 0, line: 14 */ "<color red<Pratica>coloroff>? Ottimo!\n\n\n\n<0x10009:0x00191d00>Se proietti lo scudo in avanti\nquando un nemico ti aggredisce,\nne <color green<respingerai >coloroff>l'attacco.\n\n<0x10009:0x001c1d00>Eseguendo la tecnica chiamata\n<color red<attacco scudo>coloroff>, farai perdere\nl'equilibrio al tuo nemico e avrai\nla possibilità di contrattaccare.\n<0x10009:0x000d0200>Questa tecnica è utile anche\ncontro i nemici che usano armi\na lungo raggio o che non lasciano\nalcuno spiraglio per colpire.")
          				flw_21:
/*< 21>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x000e0200>Durante un combattimento reale,\nil tempismo è fondamentale per\nuna manovra difensiva efficace.\n\n<0x10009:0x00080200>Perché non fai pratica con\nil <color red<tronco degli >coloroff><color red<esercizi per la difesa>coloroff>?")
          			  case 1:
/*< 18>*/ 				printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x001c0200>Innanzitutto, <color green<fai oscillare il Nunchuk\n>coloroff>per usare lo <color red<scud>coloroff><color red<o>coloroff>. Le basi\nsono semplici!\n\n<0x10009:0x000e0200>Per abbassare lo scudo, <color green<brandisci la\nspada facendo oscillare il telecomando\nWii >coloroff>o riponi entrambi premendo (A).\n\n<0x10009:0x00080200>Però fai attenzione, perché\n<color green<estraendo la spada>coloroff> mentre ti difendi\n<color red<abbasserai le tue difese>coloroff>.")
          				goto flw_21
          			  case 2:
/*<160>*/ 				printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00090200>Capisco...\nÈ giusto, è sempre meglio\nsperimentare di persona.\n\nPerché non provi a fare\npratica con quel tronco?")
          			}
          		  case 1:
/*< 22>*/ 			switch (scene_flags[59 /* 0x6 08 */]) {
          			  case 0:
/*< 14>*/ 				printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00000009>Uaoh! <heroname>! Hai proprio \nun bello scudo!\n\n\n<0x10009:0x00190200>Allora è tempo che ti insegni\n<color red<come difenderti>coloroff>. Dunque,\n<color red<allenamento base>coloroff>!")
          				flw_15:
/*< 15>*/ 				printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x001c0200>Innanzitutto, <color green<fai oscillare il Nunchuk\n>coloroff>per usare lo <color red<scud>coloroff><color red<o>coloroff>. Le basi\nsono semplici!\n\n<0x10009:0x000e0200>Per abbassare lo scudo, <color green<brandisci la\nspada facendo oscillare il telecomando\nWii >coloroff>o riponi entrambi premendo (A).\n\n<0x10009:0x00080200>Però fai attenzione, perché\n<color green<estraendo la spada>coloroff> mentre ti difendi\n<color red<abbasserai le tue difese>coloroff>.")
/*< 16>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00091d00>Perché non ci provi?")
/*< 23>*/ 				scene_flags[0 'Skyloft'][60 /* 0x6 10 */] = true;
          			  case 1:
/*<157>*/ 				printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00081d04><heroname>...\nHo sentito cosa è successo\nsin dall'inizio. Sono\npreoccupato per Zelda...\nMa non ho informazioni\ndettagliate...\n\n\nLa spada che porti non\nproviene da Oltrenuvola. È un\n<color red<antico artefatto >coloroff>che solo il\nprescelto può brandire.\nQuella spada è avvolta\nnel mistero...")
/*<159>*/ 				printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00001d04><heroname>, non posso fare\nmolto per aiutarti, ma...\n\n\nPosso però <0x10009:0x00191d00>insegnarti\n<color red<come difenderti>coloroff>!\n\n\n<0x10009:0x00000200>Dunque, iniziamo\ndall'<color red<allenamento base>coloroff>!")
          				goto flw_15
          			}
          		}
          	  case 1:
/*< 11>*/ 		switch (scene_flags[59 /* 0x6 08 */]) {
          		  case 0:
/*< 12>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00191d01>Anche usare uno scudo è\nun'arte. Le battaglie si vincono\nbilanciando attacco e difesa!\n\n<0x10009:0x00080e00>Puoi comprare uno <color red<scudo >coloroff>al <color red<bazar>coloroff>.\nQuando ne avrai uno, torna qui per\nfare pratica con spada e scudo.\n\n<0x10009:0x00091d00>Fatti furbo e segui il mio consiglio!")
          		  case 1:
/*<  8>*/ 			switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
          			  case 0:
/*<  9>*/ 				printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00081d04><heroname>...\nHo sentito cosa è successo\nsin dall'inizio. Sono\npreoccupato per Zelda...\nMa non ho informazioni\ndettagliate...\n\n\nLa spada che porti non\nproviene da Oltrenuvola. È un\n<color red<antico artefatto >coloroff>che solo il\nprescelto può brandire.\nQuella spada è avvolta\nnel mistero...")
/*<158>*/ 				printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00001d00><heroname>, ora non ti resta che\nprocurarti uno <color red<scudo\n>coloroff>e tornare qui.\n\n<0x10009:0x00191d00>Ti svelerò come <color red<usare\nlo scudo alla perfezione>coloroff>! È il minimo\nche possa fare per te.")
/*< 10>*/ 				scene_flags[0 'Skyloft'][59 /* 0x6 08 */] = true;
          			  case 1:
/*<  5>*/ 				switch (scene_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*<  6>*/ 					printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00000005>Che? Vuoi sapere\ncome usare la spada?\n[1-]Sì[2]No")
/*<  4>*/ 					switch (choice(2)) {
          					  case 0:
/*<  3>*/ 						printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00090203>È facile! <color red<Usa il telecomando Wii\n>coloroff>per muovere la spada!\n\n\nPorta il telecomando Wii\nin alto per eseguire un\n<color green<fendente>coloroff>, o di lato per\nun <color green<taglio orizzontale>coloroff>.\nSpingi il telecomando Wii\nin avanti per eseguire\nun <color green<affondo>coloroff>.\n\n<0x10009:0x00170200>Ora, una tecnica più complessa:\nl'<color green<attacco rotante>coloroff>!\n\n\nMuovi insieme il telecomando\nWii e il Nunchuk lateralmente\nper eseguirlo.\n\n<0x10009:0x00181d00>Se ricorderai come eseguire\nqueste mosse, non avrai\nproblemi. Ma non dimenticare\nle basi...\n<0x10009:0x00001d04>Cioè <color red<inquadrare >coloroff>l'avversario\npremendo (Z). Appena vedi un\nnemico, premi (Z) immediatamente!<0x10011:0x07cd>")
          						flw_7:
/*<  7>*/ 						printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x001c1d03>Perché non provi a fare\nun po' di pratica con quei <color red<tronchi>coloroff>?\n\n\n<0x10009:0x00090200>Se non riesci ancora\na usare la spada come vorresti,\n<color green<assesta qualche colpo >coloroff>seguendo la\n<color red<direzione dei segni sui tronchi>coloroff>.\n<0x10009:0x00080200>Taglia tutti i tronchi provando\nle differenti tecniche.")
          					  case 1:
/*<  2>*/ 						printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x000e1a08>Ah, ecco. Hai sempre avuto\ndel talento per la scherma.\n\n\n<0x10009:0x00080200>A ogni modo, la pratica e\nl'esercizio sono fondamentali.\n\n\n<0x10009:0x00191d00>E soprattutto la tecnica di<color red< inquadrare\nl'avversario >coloroff>premendo (Z).\nSi inizia così!<0x10011:0x07cd>")
          						goto flw_7
          					}
          				  case 1:
/*<  1>*/ 					printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000003>Ehi, <heroname>!\n\n\n\n<0x10009:0x00090200>Nonostante oggi sia il giorno\ndel battesimo del volo vuoi fare un po'\ndi pratica con la spada? Bene!\n\nNella stanza qui dietro c'è la tua spada.\nVai a prenderla!\n\n\nIo resterò qui. Non esitare a\nchiedere se hai qualche dubbio!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_119_04() {
/*< 76>*/ 	start()
/*< 84>*/ 	printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00010201>Quello è il tronco per la\npratica del <color red<fendente verticale>coloroff>. Porta in\nalto il telecomando Wii, poi spostalo\nverso il basso per colpire il tronco.")
          }

          void entrypoint_119_05() {
/*< 80>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00190203>Quello è il tronco per la\npratica del <color red<taglio orizzontale>coloroff>.\nTieni il telecomando Wii in posizione\norizzontale e muovilo di lato.")
          }

          void entrypoint_119_06() {
/*< 81>*/ 	start()
/*< 86>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x001d0202>Quello è il tronco per la\npratica del <color red<fendente obliquo>coloroff>.\nMuovi il telecomando Wii in una\ndirezione obliqua per colpire il tronco.")
          }

          void entrypoint_119_07() {
/*< 82>*/ 	start()
/*< 87>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00080203>Quello è il tronco per la\npratica dell'<color red<affondo>coloroff>. Spingi il\ntelecomando Wii in avanti per\neseguire la tecnica.")
          }

          void entrypoint_119_08() {
/*< 83>*/ 	start()
/*<161>*/ 	switch (adventure_pouch_has(0 0x0000)) {
          	  case 0:
/*< 79>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00190202>Quello è il tronco per la\npratica della difesa.\n\n\n<0x10009:0x001c1d00>Colpisci il tronco con la\nspada e poi <color green<scuoti il Nunchuk >coloroff>per\neseguire un <color red<attacco scudo >coloroff>quando il\ntronco torna verso di te.")
          	  case 1:
/*< 77>*/ 		switch (adventure_pouch_has(9 0x0009)) {
          		  case 0:
/*<162>*/ 			printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x00191d02>Quello è il tronco per la pratica della\n<color red<difesa>coloroff>. Equipaggiati di uno <color red<scudo>coloroff> e\nmettiti in guardia o ti metterà al\ntappeto!")
          		  case 1:
/*< 78>*/ 			printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00191d02>Quello è il tronco per la pratica della\n<color red<difesa>coloroff>. Non hai equipaggiato uno\n<color red<scudo>coloroff>, quindi stai attento a non farti\nmale se qualcosa va storto.")
          		}
          	}
          }

          void entrypoint_119_09() {
/*<109>*/ 	start()
/*<114>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x000a0213>Davvero eccezionale,\n<heroname>!")
/*<116>*/ 	set_camera(3, 0)
/*<110>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00081908>Sei davvero uno spadaccino\neccellente!\nSono fiero di essere il tuo insegnante!\n\n<0x10009:0x00090200>Perché non provi un <color green<attacco rotante>coloroff>?\n[1-]OK![2]Non ora")
          }

