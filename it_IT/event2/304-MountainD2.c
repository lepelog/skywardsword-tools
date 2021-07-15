          void entrypoint_304_14() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (scene_flags[107 /* 0xC 08 */]) {
          	  case 0:
/*< 63>*/ 		printf("\x0E\x01\x09\x04\x0C\xE09Ecco i versi della\nleggenda su queste rovine,\ntramandata tra i Mogma.\n\n\x201CL'ingresso al tesoro del re\ntroverai, se<r< due statue che\nsi guardano >>cercherai.\"\n\n\x201CDimostra di esser valente<r<\nsaltando nella bocca della\nstatua dormiente>>.\nLa via si aprirà immantinente.\"\n\x0E\x01\x09\x04\x09\x908A dire il vero non so\nse sia una valanga di frottole,\npersonalmente sto facendo\ndelle ricerche a riguardo.")
          	  case 1:
/*< 98>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 99, 'param3': 49}
/*< 99>*/ 		printf("\x0E\x01\x0B\x04\x00\x3F4\x0E\x01\x09\x04ÿ\xFF02Uh uh... ecco\nfinalmente l'uscita!")
/*<100>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 59, 'param3': 17}
/*< 59>*/ 		printf("...\x0E\x01\x08\x02\x2CD\x0E\x01\x09\x04\n\x5304 AARGH!\n\n\n\n\x0E\x01\x08\x02Í\x0E\x01\x09\x04\x09\x9FFMa... ma!!!\nNon farmi prendere un colpo!\nMi sembravi un mostro!\n\n... ... ...\x0E\x01\x09\x04\x0B\xC07 Mmh?\nMa tu hai i\ntalpoguanti?!\n\n\n\x0E\x01\x09\x04ÿ\xFF0AChi sei?!\nChe ci fai qui?!\n[1]Ricerche[2]Allora...")
/*< 60>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_62:
/*< 62>*/ 			printf("\x0E\x01\x09\x04\x0C\xD05... Immaginavo.\n\n\n\n\x0E\x01\x09\x04\x0C\xD07Come? Chi sono?\n\n\n\n\x0E\x01\x09\x04\x09\x90ASono il capo dei\nMogma, <b<Auro>>!\n\n\nSono l'inventore di quei\ntalpoguanti che hai!\n\x0E\x01\x09\x04\x09\x90BUha uha uha!")
/*< 61>*/ 			printf("...\x0E\x01\x09\x04\x0C\x409 Mah... non hai proprio l'aria di\nuno che cerca tesori...\n\n\n\x0E\x01\x09\x04\x09\xE08Lo sapevi?\n\n\n\nPare che tra queste rovine\nsia nascosto un tesoro\ninestimabile...\n\nE non c'è nessuno che sia\nmai riuscito a trovarlo e\ntornare per raccontarlo!\n\nUn sacco di cercatori di\ntesori sono scomparsi\nnella ricerca!\n\n\x0E\x01\x09\x04\x0C\x409In quanto esperto nel campo, ti direi di\nnon andare avanti, ma...\n\x0E\x01\x09\x04ÿ\xFF08Tanto andresti lo stesso, vero?\n[1]Sì[2]...")
/*< 80>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_76:
/*< 76>*/ 				printf("\x0E\x01\x09\x04\x09\x905OK, ho capito... ti racconterò\nla leggenda dei cercatori di tesori\ncome si tramanda tra noi Mogma.\n\x0E\x01\x09\x04ÿ\xFF0BTutti i Mogma la conoscono.\n\x0E\x01\x09\x04\x0C\xD0ADunque...\n\n\n\n\x201CL'ingresso al tesoro del re\ntroverai, se<r< due statue che\nsi guardano >>cercherai.\"\n\n\x201CDimostra di esser valente<r<\nsaltando nella bocca della\nstatua dormiente>>.\nLa via si aprirà immantinente.\"\n\x0E\x01\x09\x04ÿ\x509Ricordati queste parole,\nti torneranno utili![1]Grazie![2]Ripeti!")
          				flw_78:
/*< 78>*/ 				switch (choice(2)) {
          				  case 0:
/*< 79>*/ 					printf("\x0E\x01\x09\x04\x09\x905Anche altri miei\ncompari stanno cercando\nil tesoro qui.\n\nSe ti perdi, puoi chiedere\na loro!")
/*< 64>*/ 					scene_flags[15 'Eldin: Fire Sanctuary'][107 /* 0xC 08 */] = true;
          				  case 1:
/*< 77>*/ 					printf("\x0E\x01\x09\x04ÿ\x07Uha uha uha...\nNon c'è problema!\n\n\nAscolta...\n\n\n\n\x0E\x01\x09\x04\x0C\xD0A\x201CL'ingresso al tesoro del re\ntroverai, se<r< due statue che\nsi guardano >>cercherai.\"\n\n\x201CDimostra di esser valente<r<\nsaltando nella bocca della\nstatua dormiente>>.\nLa via si aprirà immantinente.\"\n\x0E\x01\x09\x04\x09\x109Pensi di ricordarla?\n[1]Sì[2]Ripeti!")
          					goto flw_78
          				}
          			  case 1:
          				goto flw_76
          			}
          		  case 1:
          			goto flw_62
          		}
          	}
          }

          void entrypoint_304_15() {
/*< 65>*/ 	start()
/*< 66>*/ 	printf("Partendo con ordine dalla\nstatua con meno ali, si\naccenda una luce.\n\nQuando tutte le statue saranno\nilluminate, il tesoro del re potrà\nessere raggiunto.")
          }

          void entrypoint_304_16() {
/*< 67>*/ 	start()
/*< 82>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 85>*/ 		printf("\x0E\x01\x09\x04\x1B\xA02Quei guanti che ti ho regalato\nsono di ottima qualità, non per niente\nfacevano parte della mia collezione!")
          	  case 1:
/*< 83>*/ 		printf("\x0E\x01\x09\x04\x1B\xA01Ehilà! Come va con\ni guanti che ti ho regalato?\n\n\nQuando sei sottoterra, premi (Z)\nper dare un'occhiata in superficie.\x0E\x01\x11\x02\x7CD\n\n\nCosì sappiamo sempre cosa\nsuccede sopra le nostre teste!")
/*< 84>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_304_17() {
/*< 68>*/ 	start()
/*<170>*/ 	switch (story_flags[84 /* us: 805A9AE8 0x01, jp: 805ACD68 0x01 */]) {
          	  case 0:
/*<171>*/ 		printf("\x0E\x01\x09\x04\x1B\xA0DAccidenti...\nnon me ne va mai una dritta!")
          	  case 1:
/*< 87>*/ 		switch (zone_temp_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*< 86>*/ 			printf("\x0E\x01\x09\x04\x1B\xA0EHai trovato il tesoro\ngrazie a quella mappa?")
          		  case 1:
/*< 88>*/ 			printf("\x0E\x01\x09\x04\x1B\xB12Ma come?! E secondo te che cosa\nte l'ho data a fare quella mappa,\nallora?!\n\n\x0E\x01\x09\x04\x1B\xA0DChe avventuriero da strapazzo che sei!")
/*< 89>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		}
          	}
          }

          void entrypoint_304_18() {
/*< 69>*/ 	start()
/*< 92>*/ 	switch (zone_temp_flags[2 /* 0x1 04 */]) {
          	  case 0:
/*< 90>*/ 		printf("\x0E\x01\x09\x04\x0F\xF09Finché tutti questi mostri non se ne\nvanno, conviene darcela a gambe!")
          	  case 1:
/*< 91>*/ 		printf("\x0E\x01\x09\x04\x0F\xF0BEhi! Ciao!\nStai bene, allora!\n\n\nHai incontrato tutti quei mostri che ti\ndicevo, lì nella zona dove ho fatto le\nmie ricerche?\n\n\x0E\x01\x09\x04\x0E\xE0ASarei curioso di sapere\nche cosa cercano!")
/*< 93>*/ 		zone_temp_flags[2 /* 0x1 04 */] = true;
          	}
          }

          void entrypoint_304_01() {
/*< 14>*/ 	start()
/*< 10>*/ 	switch (scene_flags[100 /* 0xD 10 */]) {
          	  case 0:
/*<101>*/ 		switch (scene_flags[50 /* 0x7 04 */]) {
          		  case 0:
/*<105>*/ 			switch (scene_flags[108 /* 0xC 10 */]) {
          			  case 0:
/*<103>*/ 				printf("\x0E\x01\x09\x04\x3311\x120FEhi, tu!\n\n\n\nGià che hai fatto ritirare la lava...\n\n\n\n\x0E\x01\x09\x04\x3311\x1213... non è che potresti anche\nliberarmi da questa catena?")
          			  case 1:
/*<138>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 51, 'next': 139, 'param3': 32}
/*<139>*/ 				{'type': 'type3', 'subType': 1, 'param1': 51, 'param2': 100, 'next': 137, 'param3': 16}
/*<137>*/ 				set_camera(6, 0)
/*<102>*/ 				printf("\x0E\x01\x09\x04\x3311\x1208Ehiii!\n\n\n\nTi ho visto, sai!?\nSei stato incredibile! Hai\nfatto fuori quei mostri!\n\n\x0E\x01\x09\x04\x3311\x1213Già che ci sei... non è\nche mi aiuteresti a scendere?!")
/*<104>*/ 				scene_flags[15 'Eldin: Fire Sanctuary'][108 /* 0xC 10 */] = true;
/*<176>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		  case 1:
/*<114>*/ 			{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 1536, 'next': 12, 'param3': 13}
/*< 12>*/ 			printf("\x0E\x01\x09\x04\x13\x1317Di là, di là!\n\n\n\nNon sono un oggettino da\nguardare, io! Vai via!")
          		}
          	  case 1:
/*<115>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 51, 'next': 113, 'param3': 32}
/*<113>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13311, 'param2': 1536, 'next': 111, 'param3': 13}
/*<111>*/ 		set_camera(3, 0)
/*< 11>*/ 		printf("\x0E\x01\x09\x04\x3313\x1917Aaah!\nFa bene alla schiena!")
/*<112>*/ 		set_camera(4, 0)
/*<117>*/ 		{'type': 'type3', 'subType': 1, 'param1': 51, 'param2': 100, 'next': 116, 'param3': 16}
/*<116>*/ 		printf("\x0E\x01\x09\x04\x3316\x1614Che c'è?\nUn nuovo spettatore?!\n\n\nEh!\n\n\n\nMi spiace, ma sono abituato\na roba del genere!\nNon dirò nulla!\n\n\x0E\x01\x09\x04\x3313\x1913E non sono in mostra,\nvai via!")
/*<118>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 13, 'param3': 42}
/*< 13>*/ 		scene_flags[15 'Eldin: Fire Sanctuary'][100 /* 0xD 10 */] = true;
          	}
          }

          void entrypoint_304_19() {
/*< 70>*/ 	start()
/*< 71>*/ 	printf("\x0E\x01\x06\x02\xFDCD... Che seccatura...\nIo sono Ghiraim, patriarca dei maghi...")
          }

          void entrypoint_304_02() {
/*< 30>*/ 	start()
/*< 31>*/ 	switch (scene_flags[101 /* 0xD 20 */]) {
          	  case 0:
/*< 32>*/ 		printf("\x0E\x01\x09\x04\x331B\xA05Ecco qui!\n\n\n\nSono stati chiusi in uno scrigno\nsottoterra, quindi sono quasi\nperfetti!\n\nNon è mica un oggettino da niente,\nnon si trovano dappertutto!\nTrattali bene!")
/*< 81>*/ 		printf("\x0E\x01\x09\x04\x331B\x502OK, io me la squaglio!\nCi si vede!")
          	  case 1:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x330B\x208Oooh! Sono salvo!\n\n\n\n\x0E\x01\x09\x04\x08\xAFFNon so da dove tu venga,\nma ti sono estremamente grato!\n\n\nSei anche tu in cerca\ndi tesori?\n[1]Esatto![2]Tesori?")
/*< 16>*/ 		switch (choice(2)) {
          		  case 0:
/*<119>*/ 			printf("\x0E\x01\x09\x04\x08\x509Ah ah! Ci sei\ncascato anche tu?!\n")
          			flw_17:
/*< 17>*/ 			printf("La leggenda della <r<statua\ndormiente>>, giusto?!\n\n\nPiuttosto dimmi...\nQuei <y<guanti>> consumati che hai,\nte li ha dati qualcuno?!\nMmh...\n\x0E\x01\x09\x04\x3308\x90BOK, ho deciso...\nPer ringraziarti te ne darò un paio\ndalla mia collezione segreta!\nAspettami qui!")
/*< 29>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][101 /* 0xD 20 */] = true;
          		  case 1:
/*<120>*/ 			printf("\x0E\x01\x09\x04\x08\x509Direi che è piuttosto\nchiaro il motivo per cui\nsei venuto qui!")
          			goto flw_17
          		}
          	}
          }

          void entrypoint_304_20() {
/*< 72>*/ 	start()
/*< 73>*/ 	printf("Importa molto poco quanto sia\neccellente la tua spada, sai?\nResti un pivello, un inutile umano...<pause14>\n\nCiononostante, continui a\nessere una seccatura.")
          }

          void entrypoint_304_03() {
/*<153>*/ 	start()
/*<157>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 51, 'next': 158, 'param3': 32}
/*<158>*/ 	{'type': 'type3', 'subType': 1, 'param1': 51, 'param2': 100, 'next': 156, 'param3': 16}
/*<156>*/ 	set_camera(4, 0)
/*<154>*/ 	printf("\x0E\x01\x09\x04\x3311\x1208Ehiii!\n\n\n\nTi ho visto, sai!?\nSei stato incredibile! Hai\nfatto fuori quei mostri!\n\n\x0E\x01\x09\x04\x3311\x1213Già che ci sei... non è\nche mi aiuteresti a scendere?!")
/*<155>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][108 /* 0xC 10 */] = true;
/*<175>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_304_21() {
/*< 74>*/ 	start()
/*< 75>*/ 	printf("Pivello! Non basterà l'eternità per\ncancellare il mio rancore nei tuoi \nconfronti!\n\nFarò di tutto pur di vederti\nsoffrire le pene dell'inferno!")
/*< 97>*/ 	story_flags[84 /* us: 805A9AE8 0x01, jp: 805ACD68 0x01 */] = true;
/*<166>*/ 	story_flags[172 /* us: 805A9AE2 0x08, jp: 805ACD62 0x08 */] = false;
/*<169>*/ 	story_flags[820 /* us: 805A9B30 0x10, jp: 805ACDB0 0x10 */] = true;
/*<167>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][22 /* 0x3 40 */] = true;
/*<168>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][20 /* 0x3 10 */] = true;
          }

          void entrypoint_304_05() {
/*<  2>*/ 	start()
/*<  8>*/ 	printf("")
          }

          void entrypoint_304_22() {
/*< 95>*/ 	start()
/*< 96>*/ 	printf("Ehi! Tu!\n\n\n\nCome va con i guanti\nche ti ho dato?\n\n\nSe vuoi dare un'occhiata <r<in superficie>>,\npremi (Z)!\x0E\x01\x11\x02\x7CD\n\n\nOK? Con (Z), vedrai la <r<superficie>>!\nRicordatelo!\x0E\x01\x11\x02\x7CD")
/*<124>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_304_06() {
/*<  7>*/ 	start()
/*<  3>*/ 	printf("")
          }

          void entrypoint_304_23() {
/*<127>*/ 	start()
/*<141>*/ 	switch (scene_flags[97 /* 0xD 02 */]) {
          	  case 0:
/*<140>*/ 		printf("\x0E\x01\x09\x04\x1B\xA01Credo che andrò a farmi\nun bel giretto in questa sala!\n\n\nE poi devo fare rapporto al capo,\nal posto di quel fifone che è\nfuggito via!")
          	  case 1:
/*<132>*/ 		switch (scene_flags[119 /* 0xF 80 */]) {
          		  case 0:
/*<133>*/ 			printf("\x0E\x01\x09\x04\x1B\x1A15Sei proprio tosto, tu!\nHai persino distrutto il muro!")
          		  case 1:
/*<128>*/ 			switch (scene_flags[77 /* 0x8 20 */]) {
          			  case 0:
/*<130>*/ 				printf("\x0E\x01\x09\x04\x1B\xA02Questa stanza è conosciuta\nanche come la <r<stanza del muro\nfalso>>!\n\nDietro uno dei muri, c'è un'altra\nstanza, o almeno così si dice.\n\n\n\x0E\x01\x09\x04\x1B\x1E0AIn questa zona, sottoterra \nci sono tonnellate di mostri, per\ncui noi non ci avventuriamo mai...\n\n<pling>Credo che potrebbe esserci un\n<r<passaggio segreto>>.")
          			  case 1:
/*<134>*/ 				switch (scene_flags[78 /* 0x8 40 */]) {
          				  case 0:
/*<136>*/ 					printf("\x0E\x01\x09\x04\x1B\xA09Non ho intenzione di rubarti quella\nroba che ti ha regalato il mio compare!\n\n\n\x0E\x01\x09\x04\x1B\xA02Le informazioni contenute in quello\nscrigno ti torneranno utili, vedrai!")
          				  case 1:
/*<126>*/ 					printf("...")
/*<129>*/ 					printf("\x0E\x01\x09\x04\x1B\xA09Ehi, tu!\nCi rincontriamo!\n\n\nEh eh eh! Scusa sai, ma...\nho sentito tutto!\n\n\nA quant'ho capito, uno dei\nmiei compari ti ha un po'\nscocciato...\n\n\x0E\x01\x09\x04\x1B\xC02Però... non ha detto\nfrottole!\n\n\nIn qualche punto di questa stanza\nsento una corrente d'aria...\n\n\n\x0E\x01\x09\x04\x331B\xA0BLe informazioni in quello scrigno\nsecondo me potrebbero esserti\nparecchio utili!")
/*<135>*/ 					scene_flags[15 'Eldin: Fire Sanctuary'][78 /* 0x8 40 */] = true;
          				}
          			}
          		}
          	}
          }

          void entrypoint_304_07() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf("")
/*< 94>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][121 /* 0xE 02 */] = true;
/*<  6>*/ 	changeScene(1, 0) // 
          }

          void entrypoint_304_24() {
/*<106>*/ 	start()
/*<107>*/ 	printf("Ponte della determinazione.\nScegli il cammino in cui credi\ne prosegui con coraggio.")
          }

          void entrypoint_304_08() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf("Grande\nSantuario Antico")
          }

          void entrypoint_304_25() {
/*<160>*/ 	start()
/*<159>*/ 	printf("Probabilità che l'informazione in\npossesso di costui vi possa essere\nutile: 80%.\n\nVi suggerirei caldamente di\nliberarlo e ottenerla.")
/*<164>*/ 	set_camera(7, 0)
/*<163>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 161, 'param3': 42}
/*<161>*/ 	scene_flags[15 'Eldin: Fire Sanctuary'][98 /* 0xD 04 */] = false;
          }

          void entrypoint_304_09() {
/*< 37>*/ 	start()
/*< 39>*/ 	switch (scene_flags[105 /* 0xC 02 */]) {
          	  case 0:
/*<151>*/ 		set_camera(2, 0)
/*<149>*/ 		printf("\x0E\x01\x09\x04\x11\x1213Daaai!\nTe lo chiedo per favore,\nliberami!\n\n\x0E\x01\x09\x04\x16\x1614In cambio ti fornirò\nun'informazione importante! Forza!")
/*<152>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*<110>*/ 		{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 1536, 'next': 108, 'param3': 13}
/*<108>*/ 		set_camera(1, 0)
/*<109>*/ 		set_camera(2, 0)
/*< 41>*/ 		printf("\x0E\x01\x09\x04\x11\x1213Ehilà! Arrivi proprio\nal momento giusto!\n\n\n\x0E\x01\x09\x04\x16\x1614Non ho idea di chi tu sia né da dove tu\nvenga, ma potresti comunque liberarmi\nda questa catena?!\n[1]Sono\ndi fretta![2]...")
/*< 42>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_43:
/*< 43>*/ 			printf("\x0E\x01\x09\x04\x11\x130FSe mi liberi, ti ricompenserò!\nTi svelerò un <r<interessante segreto\n>>riguardo a questa stanza...\n\nE riguardo a un tesoro...\nAllora, che ne dici?!")
/*< 38>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][105 /* 0xC 02 */] = true;
          		  case 1:
          			goto flw_43
          		}
          	}
          }

          void entrypoint_304_10() {
/*< 50>*/ 	start()
/*< 49>*/ 	switch (scene_flags[106 /* 0xC 04 */]) {
          	  case 0:
/*< 53>*/ 		printf("\x0E\x01\x09\x04\x331B\x2203Ecco qui!\nPrendi!\n\n\nQui dentro puoi trovare tutte le\ninformazioni sull'interessante\nsegreto di cui ti parlavo...\nSono sicurissimo del fatto mio!\nMe lo confermano le mie ultime\nricerche!\nAllora, mi segui...?\nIn questa stanza...\n\x0E\x01\x09\x04\x331A\x2008\x0E\x01\x08\x02\x2CDC'è una <r<camera segreta>>!\n\n\n\n... ... ...\n\n\n\n\x0E\x01\x09\x04\x331B\x50AE ora, in cambio,\nnon dire a nessuno\nche sono stato catturato!\n[1]Va bene[2]...")
/*<142>*/ 		switch (scene_flags[119 /* 0xF 80 */]) {
          		  case 0:
/*<144>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][37 /* 0x5 20 */] = true;
/*<145>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][79 /* 0x8 80 */] = true;
/*<174>*/ 			story_flags[822 /* us: 805A9B30 0x40, jp: 805ACDB0 0x40 */] = true;
/*<143>*/ 			switch (choice(2)) {
          			  case 0:
/*<147>*/ 				printf("\x0E\x01\x09\x04\x331B\x2200Bene! Guarda un po' cosa c'è dentro,\ne non dimenticare quello che t'ho detto!")
          				flw_123:
/*<123>*/ 				story_flags[820 /* us: 805A9B30 0x10, jp: 805ACDB0 0x10 */] = true;
/*<165>*/ 				scene_flags[15 'Eldin: Fire Sanctuary'][98 /* 0xD 04 */] = true;
/*<173>*/ 				scene_flags[15 'Eldin: Fire Sanctuary'][99 /* 0xD 08 */] = true;
          			  case 1:
/*<148>*/ 				printf("\x0E\x01\x09\x04\x3300\x100DIngrato!")
          				goto flw_123
          			}
          		  case 1:
/*<146>*/ 			story_flags[819 /* us: 805A9B30 0x08, jp: 805ACDB0 0x08 */] = true;
/*< 54>*/ 			switch (choice(2)) {
          			  case 0:
/*< 55>*/ 				printf("\x0E\x01\x09\x04\x331B\x2200Bene! Guarda un po' cosa c'è dentro,\ne non dimenticare quello che t'ho detto!\n\n\nBene...\nCi vediamo!")
          				flw_131:
/*<131>*/ 				printf("\x0E\x01\x08\x02\x2CDAh...")
          				goto flw_123
          			  case 1:
/*< 56>*/ 				printf("\x0E\x01\x09\x04\x3300\x100DSei un ingrato!!!\nChi ti credi di essere?!")
          				goto flw_131
          			}
          		}
          	  case 1:
/*< 47>*/ 		printf("\x0E\x01\x09\x04\x330B\xA08EVVIVA! Sono libero!\n\n\n\n\x0E\x01\x09\x04\x3308\xA09Eh eh... Grazie mille per\navermi aiutato, stupidotto!\n\n\nNon crederai davvero che ti\ndia un'informazione tanto utile\nsui tesori così facilmente...\n\n\x0E\x01\x09\x04\x3325\x1A06\x0E\x01\x08\x02\x2CDCosa?!\n\n\n\n\x0E\x01\x09\x04\x08\xA00Ma quei guanti fanno parte della\ncollezione segreta di mio fratello!\nLo conosci, siete amici?\n[1]Esatto![2]L'ho\naiutato")
/*< 48>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_51:
/*< 51>*/ 			printf("\x0E\x01\x09\x04\x3325\x1A00Aspetta!\nC'è una cosa che vorrei darti!\n\n\n\x0E\x01\x09\x04\x00\x500Resta lì, vado un attimo\na prenderla!")
/*< 52>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][106 /* 0xC 04 */] = true;
          		  case 1:
          			goto flw_51
          		}
          	}
          }

          void entrypoint_304_11() {
/*<150>*/ 	start()
/*< 45>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 46>*/ 		printf("\x0E\x01\x09\x04\x11\x1312EHI!\nAspetta un secondo!\n\n\nTi dirò qualcosa di utile\nse mi liberi!")
          		flw_44:
/*< 44>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
/*<162>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*< 40>*/ 		printf("\x0E\x01\x09\x04\x11\x1312Ehi! Aspetta un secondo! EHI!\n\n\n\nDavvero vuoi mollarmi qui\nin queste condizioni? Vuoi\nignorarmi? Ti pare giusto?!\n\nDai, ti offro un'informazione\nutile in cambio, liberami!")
          		goto flw_44
          	}
          }

          void entrypoint_304_12() {
/*<  9>*/ 	start()
/*< 18>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 1, 'param3': 31}
/*<  1>*/ 	switch (scene_flags[103 /* 0xD 80 */]) {
          	  case 0:
/*< 23>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 21>*/ 			printf("\x0E\x01\x09\x04\x3308\x802ARGH! Di nuovo qui?!\n\n\n\n\x0E\x01\x09\x04\x330B\x901Eh... eh eh!\nCi troviamo di nuovo!\n")
          		  case 1:
/*< 20>*/ 			printf("AAAAAAAAARGH!\nUn mostro verde!!!\n\n\n\x0E\x01\x09\x04\x332A\x9FF(Arrivano dappertutto!!!)\n\n\n\n(Non ho altra scelta...!)\n\n\n\n\x0E\x01\x09\x04\x330B\x901Eh... eh eh eh! Cos'hai intenzione di\nfare contro un Mogma sottoterra?!\nSarà uno scherzo sfuggirti,\nse non mi <r<intralci>>!")
/*< 24>*/ 			zone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	  case 1:
/*< 19>*/ 		printf("\x0E\x01\x09\x04\x331A\x1A0BHo decisamente troppo da fare!\nAnche oggi passerò la notte in\nbianco alla ricerca di tesori!")
          		scene_flags[15 'Eldin: Fire Sanctuary'][103 /* 0xD 80 */] = true;
          	}
          }

          void entrypoint_304_13() {
/*< 33>*/ 	start()
/*< 26>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 36>*/ 		printf("Tieni!\n\n\n\n\x0E\x01\x09\x04\x330E\xEFFMi sa che alcuni mostri cercano\nqualcosa laggiù oltre quella rupe...\n\n\nCi stai andando anche tu?\nFai attenzione...\n\n\n\x0E\x01\x09\x04\x330F\xF0BIo torno dal capo ora!\n\n\n\nVisto che passo da lì, ti aprirò la porta!\nCiao!")
/*<121>*/ 		scene_flags[15 'Eldin: Fire Sanctuary'][33 /* 0x5 02 */] = true;
/*<122>*/ 		story_flags[821 /* us: 805A9B30 0x20, jp: 805ACDB0 0x20 */] = true;
/*<172>*/ 		story_flags[822 /* us: 805A9B30 0x40, jp: 805ACDB0 0x40 */] = true;
/*<125>*/ 		scene_flags[15 'Eldin: Fire Sanctuary'][82 /* 0xB 04 */] = true;
          	  case 1:
/*< 22>*/ 		printf("\x0E\x01\x09\x04\x3321\x1601Accidenti! Ho fallito!\nFammi alla piastra o\nbollito... non fa differenza!\n\n... ... ...\n\n\n\n\x0E\x01\x09\x04\x331C\x1D05Mmh?\nQuei guanti...\n\n\nSono quelli della collezione segreta\ndi mio fratello!\n[1]È un\nregalo[2]Esatto!")
/*< 25>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_34:
/*< 34>*/ 			printf("\x0E\x01\x09\x04\x331D\x0BMa... allora sei\nun amico di mio fratello?!\n\n\nTutto verde come sei... per un attimo\nho pensato che fossi uno\ndei mostri!\n...\n\x0E\x01\x09\x04\x3324\x2109Oh, stai calmo! Non ti arrabbiare!\nMica è solo colpa mia! Sei tu che sei\nvestito strano! \n\nMi faccio perdonare\ncon un regalo, OK?!\nResta lì!")
/*< 35>*/ 			scene_flags[15 'Eldin: Fire Sanctuary'][104 /* 0xC 01 */] = true;
          		  case 1:
          			goto flw_34
          		}
          	}
          }

