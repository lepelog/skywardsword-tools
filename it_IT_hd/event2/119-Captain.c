          void entrypoint_119_10() {
/*<113>*/ 	start()
/*<120>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*<112>*/ 		printf("\x0E\x01\x09\x04\x17\x209\x0E\x01\x08\x02\x2CDSplendido!")
/*<124>*/ 		set_camera(3, 0)
/*<125>*/ 		printf("\x0E\x01\x09\x04\x17\x1A08La tua determinazione è eccellente!\n\n\n\n\x0E\x01\x09\x04\x09\x200Perché non provi a\neseguire un <g<colpo di grazia>>?\n[1]Certo![2-]Non ora")
          	  case 1:
/*<121>*/ 		printf("\x0E\x01\x09\x04\x09\x1D04Che succede, Link?\nQualcosa non va?")
/*<122>*/ 		set_camera(3, 0)
/*<123>*/ 		printf("\x0E\x01\x09\x04\x08\x1D01Resta in mezzo ai tuoi avversari senza\nmuoverti. Per eseguire un attacco rotante,\ndevi muovere la spada al momento giusto.\n\n\x0E\x01\x09\x04\x09\x200Vuoi riprovare?\n[1]Sì[2-]No")
          	}
          }

          void entrypoint_119_11() {
/*<115>*/ 	start()
/*<111>*/ 	printf("\x0E\x01\x09\x04\x08\x200Bene! Ora devi tagliare tutti i tronchi\nche ti circondano senza spostarti, con\nun <g<attacco rotante>>.")
/*<165>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 6, 'next': -1, 'param3': 60}
          }

          void entrypoint_119_12() {
/*<126>*/ 	start()
/*<127>*/ 	printf("\x0E\x01\x09\x04\x08\x1D03Bene! Se il nemico è a terra, <r<inquadralo\n>>premendo (Z) e lanciati su di lui per\neseguire il <g<colpo di grazia>>.\x0E\x01\x11\x02\x7CD\n\n\x0E\x01\x09\x04\x09\x1D00Esegui un taglio orizzontale su quel\ntronco e, quando cade, sperimenta\nla nuova tecnica!")
          }

          void entrypoint_119_13() {
/*<128>*/ 	start()
/*<129>*/ 	printf("\x0E\x01\x09\x04\x17\x1A09\x0E\x01\x08\x02\x1CDMeraviglioso!")
/*<130>*/ 	set_camera(3, 0)
/*<131>*/ 	printf("\x0E\x01\x09\x04\x19\x200L'uso dello <r<scudo>> o dell'<r<attacco rotante\n>>è certamente importante, ma il <g<colpo di\ngrazia >>è una tecnica fondamentale quando\nil nemico è al tappeto.\n\x0E\x01\x09\x04\x1C\x200Devi eseguirlo rapidamente prima che\nil nemico si rialzi!")
          }

          void entrypoint_119_01() {
          	start()
/*< 68>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*< 70>*/ 		printf("\x0E\x01\x09\x04\x09\x1901Porta i miei saluti al proprietario\ndella taverna delle zucche!")
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
/*< 58>*/ 					printf("\x0E\x01\x09\x04\x00\x03Ehi! Di' un po'...\nMi hai portato... dell'altra zuppa\ndi zucca bollente?\n\nHa un ottimo aspetto...\n[1]Uhmmm...\necco qui[2]...")
/*< 59>*/ 					switch (choice(2)) {
          					  case 0:
/*< 61>*/ 						printf("\x0E\x01\x09\x04\x17\x1909È per me?! Sei sicuro?\nScusa se l'ho dato per scontato.\n\n\nA vederla così, mi ci tufferei!")
/*<138>*/ 						{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 108, 'param3': 47}
/*<108>*/ 						make_actor_do_something(0, 0)
/*< 62>*/ 						make_actor_do_something(1, 0)
/*<119>*/ 						{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 99, 'param3': 15}
/*< 99>*/ 						set_camera(10, 0)
/*<100>*/ 						{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 139, 'param3': 13}
/*<139>*/ 						{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 102, 'param3': 48}
/*<102>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 96, 'next': 101, 'param3': 6}
/*<101>*/ 						{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5651, 'next': 103, 'param3': 13}
/*<103>*/ 						printf("Mmh... deliziosa!\x0E\x01\x05\x04\x1E\x00")
/*<104>*/ 						set_camera(11, 0)
/*< 63>*/ 						printf("È squisita!\n\n\n\n\x0E\x01\x09\x04\x17\x1900La zuppa di zucca di Zuco è sempre deliziosa.\nPotrei mangiarne a barili!")
/*<154>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 144, 'param3': 47}
/*<144>*/ 						set_camera(12, 0)
/*<143>*/ 						make_actor_do_something(2, 0)
/*<155>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 142, 'param3': 48}
/*<142>*/ 						printf("\x0E\x01\x09\x04\x08\x200Grazie, Link!\nUna piccola ricompensa da parte mia!")
/*<105>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 64, 'param3': 42}
/*< 64>*/ 						give_item(4 0x04);
/*< 71>*/ 						zone_temp_flags[1 /* 0x1 02 */] = true;
          					  case 1:
/*< 60>*/ 						printf("\x0E\x01\x06\x02\xFCCD...\n...\x0E\x01\x06\x02Í\n\n\n\x0E\x01\x09\x04\x08\x1900Ah ah ah!\nScherzavo!")
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
/*< 37>*/ 					printf("\x0E\x01\x09\x04\x08\x1901Ehi, Link!\nTi sei allenato per bene con la spada?\n\n\n\x0E\x01\x09\x04\x00\x200Eh?\n\n\n\n\x0E\x01\x09\x04\x00\x1909Ehi, ma quella non è la mia\nadorata <r<zuppa di zucca>>?!\n\n\n\x0E\x01\x09\x04\x00\x200Zuco ti ha chiesto di portarmene\nun po'... e sei venuto fin qui dalla\ntaverna delle zucche con quella?\n[1]Esatto![2-]No")
/*< 41>*/ 					switch (choice(2)) {
          					  case 0:
/*< 42>*/ 						printf("\x0E\x01\x09\x04\x17\x1909Evvai!\nVeloce! Dammela, presto!\n[1]Ecco[2-]Ehm...")
/*< 44>*/ 						switch (choice(2)) {
          						  case 0:
/*<135>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 107, 'param3': 47}
/*<107>*/ 							make_actor_do_something(0, 0)
/*< 48>*/ 							make_actor_do_something(1, 0)
/*<118>*/ 							{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 95, 'param3': 15}
/*< 95>*/ 							set_camera(10, 0)
/*< 91>*/ 							{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 136, 'param3': 13}
/*<136>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 93, 'param3': 48}
/*< 93>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 96, 'next': 92, 'param3': 6}
/*< 92>*/ 							{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5655, 'next': 94, 'param3': 13}
/*< 94>*/ 							printf("Mmh... deliziosa!\x0E\x01\x05\x04\x1E\x00")
/*< 96>*/ 							set_camera(11, 0)
/*< 52>*/ 							printf("\x0E\x01\x09\x04\x00\x13Assolutamente squisita!\n\n\n\n\x0E\x01\x09\x04\x17\x1900Non c'è niente di meglio di una bella\nzuppa di zucca bollente!")
/*<151>*/ 							{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 141, 'param3': 47}
/*<141>*/ 							make_actor_do_something(2, 0)
/*<145>*/ 							set_camera(12, 0)
/*<152>*/ 							{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 140, 'param3': 48}
/*<140>*/ 							printf("\x0E\x01\x09\x04\x08\x1900Bel lavoro! Ringrazia Zuco da parte mia\nquando lo vedi!")
/*< 51>*/ 							story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */] = true;
/*< 66>*/ 							zone_temp_flags[1 /* 0x1 02 */] = true;
/*<153>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*< 47>*/ 							printf("\x0E\x01\x09\x04\x00\x1D00Cosa?! Non ti ha detto di portarmela?\nSai, non ti consiglio di provocarmi\nin questo modo.\n\n\x0E\x01\x09\x04\x08\x1D00Se quella zuppa non è più buona è\nmeglio che tu vada subito a prenderne\ndell'altra!\n\nSe non è bollente, non mi piace!\nRicordatelo!")
          						}
          					  case 1:
/*< 40>*/ 						printf("\x0E\x01\x09\x04\x0E\x1D00Capisco...\nCon chi crede di avere a che fare\nil proprietario della taverna? Gli avevo\nchiesto di portarmene una subito!\n\x0E\x01\x09\x04\x08\x1D00Sai, perdo la pazienza molto\nfacilmente se non bevo la mia\nzuppa di zucca ogni giorno.")
          					}
          				  case 1:
/*< 35>*/ 					switch (adventure_pouch_has(3 0x0003)) {
          					  case 0:
/*< 36>*/ 						printf("\x0E\x01\x09\x04\x08\x1901Ehi, Link!\nTi sei allenato per bene con la spada?\n\n\n\x0E\x01\x09\x04\x00\x200Eh?\n\n\n\n\x0E\x01\x09\x04\x00\x1909Ehi, ma quella non è la mia\nadorata <r<zuppa di zucca>>?!\n\n\n\x0E\x01\x09\x04\x00\x200Zuco ti ha chiesto di portarmene\nun po'... e sei venuto fin qui dalla\ntaverna delle zucche con quella?\n[1]Esatto![2-]No")
/*< 39>*/ 						switch (choice(2)) {
          						  case 0:
/*< 43>*/ 							printf("\x0E\x01\x09\x04\x17\x1909Evvai!\nVeloce! Dammela, presto!\n[1]Ecco[2-]Ehm...")
/*< 45>*/ 							switch (choice(2)) {
          							  case 0:
/*<132>*/ 								{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 106, 'param3': 47}
/*<106>*/ 								make_actor_do_something(0, 0)
/*< 49>*/ 								make_actor_do_something(1, 0)
/*<117>*/ 								{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 97, 'param3': 15}
/*< 97>*/ 								set_camera(10, 0)
/*< 88>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 133, 'param3': 13}
/*<133>*/ 								{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 90, 'param3': 48}
/*< 90>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 96, 'next': 89, 'param3': 6}
/*< 89>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4118, 'next': 147, 'param3': 13}
/*<147>*/ 								set_camera(11, 0)
/*<146>*/ 								printf("Bleah! Ma è disgustosa...<pause14>\nÈ fredda come la roccia...")
/*<148>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 149, 'param3': 47}
/*<149>*/ 								{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 7424, 'next': 134, 'param3': 13}
/*<134>*/ 								make_actor_do_something(2, 0)
/*< 98>*/ 								set_camera(12, 0)
/*<150>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 50, 'param3': 48}
/*< 50>*/ 								printf("Ci sono due cose che odio: la zuppa\nfredda e le donne snob!\n\n\nPortami dell'altra zuppa!\nCalda, mi raccomando!")
/*<137>*/ 								{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          							  case 1:
/*< 46>*/ 								printf("\x0E\x01\x09\x04\x00\x1D00Cosa?! Non ti ha detto di portarmela?\nSai, non ti consiglio di provocarmi\nin questo modo.\n\n\x0E\x01\x09\x04\x08\x1D00Se quella zuppa non è più buona è\nmeglio che tu vada subito a prenderne\ndell'altra!\n\nSe non è bollente, non mi piace!\nRicordatelo!")
          							}
          						  case 1:
/*< 38>*/ 							printf("\x0E\x01\x09\x04\x0E\x1D00Capisco...\nCon chi crede di avere a che fare\nil proprietario della taverna? Gli avevo\nchiesto di portarmene una subito!\n\x0E\x01\x09\x04\x08\x1D00Sai, perdo la pazienza molto\nfacilmente se non bevo la mia\nzuppa di zucca ogni giorno.")
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
/*< 25>*/ 	printf("\x0E\x01\x09\x04\xB0D\x02Ehi!\x0E\x01\x0D\x02\x1900 Link!")
/*< 31>*/ 	{'type': 'type3', 'subType': 1, 'param1': 11, 'param2': 0, 'next': 72, 'param3': 16}
/*< 72>*/ 	set_camera(1, 0)
/*< 28>*/ 	printf("\x0E\x01\x09\x04\x08\x1D00Non puoi portare via le spade da qui.\n\n\n\nChe credi di fare?\nPortartene una via di nascosto?")
/*< 73>*/ 	set_camera(2, 0)
/*< 29>*/ 	make_actor_do_something(3, 11)
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 11, 'next': 26, 'param3': 17}
/*< 26>*/ 	printf("\x0E\x01\x09\x04\x00\x05Che?\n<pause28>Non trovi più il tuo solcanubi?\n<pause28>Vuoi andare a cercarlo?\nAllora va bene, non posso negartelo.\n\x0E\x01\x09\x04\x09\xE00Ma ricorda... Oltrenuvola è in pace\ne solo i cavalieri possono girare\narmati. È la regola!\n\nQuindi non voglio vederti andare in giro \nmenando colpi a destra e a manca.\n\n\nPiuttosto, fai pratica con i tronchi\nqui dentro, così sarai pronto\nquando verrà il momento di usare\nquel ferro!")
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
/*< 17>*/ 			printf("\x0E\x01\x09\x04\x00\x05Cosa?\nVuoi ascoltare di nuovo i <r<segreti\ndella difesa>>?\n\n[1]Pratica[2]Teoria[3-]Non ora")
/*< 19>*/ 			switch (choice(3)) {
          			  case 0:
/*<167>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 9, 'next': 20, 'param3': 60}
/*< 20>*/ 				printf("<r<Pratica>>? Ottimo!\n\n\n\n\x0E\x01\x09\x04\x19\x1D00Se proietti lo scudo in avanti\nquando un nemico ti aggredisce,\nne <g<respingerai >>l'attacco.\n\n\x0E\x01\x09\x04\x1C\x1D00Eseguendo la tecnica chiamata\n<r<attacco scudo>>, farai perdere\nl'equilibrio al tuo nemico e avrai\nla possibilità di contrattaccare.\n\x0E\x01\x09\x04\x0D\x200Questa tecnica è utile anche\ncontro i nemici che usano armi\na lungo raggio o che non lasciano\nalcuno spiraglio per colpire.")
          				flw_21:
/*< 21>*/ 				printf("\x0E\x01\x09\x04\x0E\x200Durante un combattimento reale,\nil tempismo è fondamentale per\nuna manovra difensiva efficace.\n\n\x0E\x01\x09\x04\x08\x200Perché non fai pratica con\nil <r<tronco degli >><r<esercizi per la difesa>>?")
          			  case 1:
/*<166>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 18, 'param3': 60}
/*< 18>*/ 				printf("\x0E\x01\x09\x04\x1C\x200Per quanto riguarda la difesa,\nl'importante è imparare a usare\nlo <r<scudo>>. Le basi sono semplici!\n\n\x0E\x01\x09\x04\x0E\x200Per abbassare lo scudo, <g<usa la spada o\npremi (B) per riporre la spada e lo scudo>>.\n\n\n\x0E\x01\x09\x04\x08\x200Però fai attenzione, perché ogni volta che\n<g<attacchi con la spada>>, abbasserai lo scudo\ne <r<non avrai difese>>.")
          				goto flw_21
          			  case 2:
/*<160>*/ 				printf("\x0E\x01\x09\x04\x09\x200Capisco... È giusto, è sempre meglio\nsperimentare di persona.\n\n\nPerché non provi a fare pratica con\nquel tronco?")
          			}
          		  case 1:
/*< 22>*/ 			switch (scene_flags[59 /* 0x6 08 */]) {
          			  case 0:
/*< 14>*/ 				printf("\x0E\x01\x09\x04\x00\x09Uaoh! Link! Hai proprio\nun bello scudo!\n\n\n\x0E\x01\x09\x04\x19\x200Allora è tempo che ti insegni\n<r<come difenderti>>. Dunque,\n<r<allenamento base>>!")
          				flw_15:
/*< 15>*/ 				printf("\x0E\x01\x09\x04\x1C\x200Per quanto riguarda la difesa,\nl'importante è imparare a usare\nlo <r<scudo>>. Le basi sono semplici!\n\n\x0E\x01\x09\x04\x0E\x200Per abbassare lo scudo, <g<usa la spada o\npremi (B) per riporre la spada e lo scudo>>.\n\n\n\x0E\x01\x09\x04\x08\x200Però fai attenzione, perché ogni volta che\n<g<attacchi con la spada>>, abbasserai lo scudo\ne <r<non avrai difese>>.")
/*< 16>*/ 				printf("\x0E\x01\x09\x04\x09\x1D00Perché non ci provi?")
/*< 23>*/ 				scene_flags[0 'Skyloft'][60 /* 0x6 10 */] = true;
/*<164>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': -1, 'param3': 60}
          			  case 1:
/*<157>*/ 				printf("\x0E\x01\x09\x04\x08\x1D04Link...\nHo sentito cosa è successo dal direttore.\nSono preoccupato per Zelda...\n\nMa non ho informazioni\ndettagliate...\n\n\nLa spada che porti non proviene da\nOltrenuvola. È un <r<antico artefatto\n>>che solo il prescelto può brandire.\n\nQuella spada è avvolta nel mistero...")
/*<159>*/ 				printf("\x0E\x01\x09\x04\x00\x1D04Link, non posso fare\nmolto per aiutarti, ma...\n\n\nPosso però \x0E\x01\x09\x04\x19\x1D00insegnarti\n<r<come difenderti>>!\n\n\n\x0E\x01\x09\x04\x00\x200Dunque, iniziamo\ndall'<r<allenamento base>>!")
          				goto flw_15
          			}
          		}
          	  case 1:
/*< 11>*/ 		switch (scene_flags[59 /* 0x6 08 */]) {
          		  case 0:
/*< 12>*/ 			printf("\x0E\x01\x09\x04\x19\x1D01Anche usare uno scudo è\nun'arte. Le battaglie si vincono\nbilanciando attacco e difesa!\n\n\x0E\x01\x09\x04\x08\xE00Puoi comprare uno <r<scudo >>al <r<bazar>>.\nQuando ne avrai uno, torna qui per\nfare pratica con spada e scudo.\n\n\x0E\x01\x09\x04\x09\x1D00Fatti furbo e segui il mio consiglio!")
          		  case 1:
/*<  8>*/ 			switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
          			  case 0:
/*<  9>*/ 				printf("\x0E\x01\x09\x04\x08\x1D04Link...\nHo sentito cosa è successo dal direttore.\nSono preoccupato per Zelda...\n\nMa non ho informazioni\ndettagliate...\n\n\nLa spada che porti non proviene da\nOltrenuvola. È un <r<antico artefatto\n>>che solo il prescelto può brandire.\n\nQuella spada è avvolta nel mistero...")
/*<158>*/ 				printf("\x0E\x01\x09\x04\x00\x1D00Link, ora non ti resta che\nprocurarti uno <r<scudo\n>>e tornare qui.\n\n\x0E\x01\x09\x04\x19\x1D00Ti svelerò come <r<usare\nlo scudo alla perfezione>>! È il minimo\nche possa fare per te.")
/*< 10>*/ 				scene_flags[0 'Skyloft'][59 /* 0x6 08 */] = true;
          			  case 1:
/*<  5>*/ 				switch (scene_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*<  6>*/ 					printf("\x0E\x01\x09\x04\x00\x05Che? Vuoi sapere come usare la spada?\n[1]Sì[2-]No")
/*<  4>*/ 					switch (choice(2)) {
          					  case 0:
/*<  3>*/ 						printf("\x0E\x01\x09\x04\x09\x203Ecco le basi della scherma. È importante\npensare in quale direzione vuoi muovere\nla spada.\n\nPer eseguire un <g<fendente verticale>>,\nmuovila in verticale. Per un <g<taglio\norizzontale>>... beh, ci siamo capiti. E se la\nmuovi in avanti, eseguirai un <g<affondo>>.\n\x0E\x01\x09\x04\x17\x200Ora, una tecnica più complessa:\nl'<g<attacco rotante>>! È la mossa perfetta\nda usare se vieni circondato dai nemici.\n\n\x0E\x01\x09\x04\x18\x1D00Se ricorderai come eseguire queste mosse,\nnon avrai problemi.\n\n\n\x0E\x01\x09\x04\x00\x1D04Ma non dimenticare le basi! Appena vedi\nun nemico, premi (Z) per <r<inquadrarlo>>!\x0E\x01\x11\x02\x7CD")
          						flw_7:
/*<  7>*/ 						printf("\x0E\x01\x09\x04\x1C\x1D03Perché non provi a fare un po' di pratica\ncon quei <r<tronchi>>?\n\n\n\x0E\x01\x09\x04\x09\x200Se hai dimenticato come usare la spada,\npuoi sempre chiedere <r<aiuto>> con \x0E\x02\x04\x02\x13CD.\nLe mosse fondamentali sono importantissime!\x0E\x01\x11\x02\xBCD\n\n\x0E\x01\x09\x04\x08\x200Una volta che avrai tagliato i tronchi, farò in\nmodo che tu possa provare la tua <r<super mossa>>.")
/*<163>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': -1, 'param3': 60}
          					  case 1:
/*<  2>*/ 						printf("\x0E\x01\x09\x04\x0E\x1A08Ah, ecco. Hai sempre avuto\ndel talento per la scherma.\n\n\n\x0E\x01\x09\x04\x08\x200A ogni modo, la pratica e\nl'esercizio sono fondamentali.\n\n\n\x0E\x01\x09\x04\x19\x1D00E soprattutto la tecnica di<r< inquadrare\nl'avversario >>premendo (Z).\nSi inizia così!\x0E\x01\x11\x02\x7CD")
          						goto flw_7
          					}
          				  case 1:
/*<  1>*/ 					printf("\x0E\x01\x09\x04\x00\x03Ehi, Link!\n\n\n\n\x0E\x01\x09\x04\x09\x200Nonostante oggi sia il giorno\ndel battesimo del volo vuoi fare un po'\ndi pratica con la spada? Bene!\n\nNella stanza qui dietro c'è la tua spada.\nVai a prenderla!\n\n\nIo resterò qui. Non esitare a\nchiedere se hai qualche dubbio!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_119_04() {
/*< 76>*/ 	start()
/*< 84>*/ 	printf("\x0E\x01\x09\x04\x01\x201Quello è il tronco per la pratica del\n<r<fendente verticale>>. Porta in alto la\nspada, poi spostala verso il basso\nper colpire il tronco.")
          }

          void entrypoint_119_05() {
/*< 80>*/ 	start()
/*< 85>*/ 	printf("\x0E\x01\x09\x04\x19\x203Quello è il tronco per la pratica del <r<taglio\norizzontale>>. Tieni la spada in posizione\norizzontale, poi muovila di lato.")
          }

          void entrypoint_119_06() {
/*< 81>*/ 	start()
/*< 86>*/ 	printf("\x0E\x01\x09\x04\x1D\x202Quello è il tronco per la pratica del\n<r<fendente obliquo>>. Muovi la spada in\ndiagonale per colpire il tronco.")
          }

          void entrypoint_119_07() {
/*< 82>*/ 	start()
/*< 87>*/ 	printf("\x0E\x01\x09\x04\x08\x203Quello è il tronco per la pratica\ndell'<r<affondo>>. Spingi la spada in avanti\nper eseguire la tecnica. Per saperne di\npiù, guarda l'aiuto.")
          }

          void entrypoint_119_08() {
/*< 83>*/ 	start()
/*<161>*/ 	switch (adventure_pouch_has(0 0x0000)) {
          	  case 0:
/*< 79>*/ 		printf("\x0E\x01\x09\x04\x19\x202Quello è il tronco per la pratica\ndella difesa.\n\n\n\x0E\x01\x09\x04\x1C\x1D00Colpisci il tronco con la spada, poi esegui\nun <r<attacco scudo >>quando il tronco torna\nverso di te.")
          	  case 1:
/*< 77>*/ 		switch (adventure_pouch_has(9 0x0009)) {
          		  case 0:
/*<162>*/ 			printf("\x0E\x01\x09\x04\x19\x1D02Quello è il tronco per la pratica della\n<r<difesa>>. Equipaggiati di uno <r<scudo>> e\nmettiti in guardia o ti metterà al\ntappeto!")
          		  case 1:
/*< 78>*/ 			printf("\x0E\x01\x09\x04\x19\x1D02Quello è il tronco per la pratica della <r<difesa>>.\nNon hai equipaggiato uno <r<scudo>>, quindi stai\nattento a non farti male se qualcosa va storto.")
          		}
          	}
          }

          void entrypoint_119_09() {
/*<109>*/ 	start()
/*<114>*/ 	printf("\x0E\x01\x09\x04\n\x213Davvero eccezionale,\nLink!")
/*<116>*/ 	set_camera(3, 0)
/*<110>*/ 	printf("\x0E\x01\x09\x04\x08\x1908Sei davvero uno spadaccino\neccellente!\nSono fiero di essere il tuo insegnante!\n\n\x0E\x01\x09\x04\x09\x200Perché non provi un <g<attacco rotante>>?\n[1]OK![2-]Non ora")
          }

