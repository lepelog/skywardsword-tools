          void entrypoint_500_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00434500>Mancato! Se non colpiamo il bersaglio,\nche senso ha...?!\n\n\n<0x10009:0x00414000>Un attimo di pazienza che la carico... \nNel frattempo, cerca di combattere\ncome puoi! Appena è pronta ti darò\nil segnale!")
          }

          void entrypoint_500_37() {
/*< 49>*/ 	start()
/*< 61>*/ 	switch (scene_flags[14 /* 0x0 40 */]) {
          	  case 0:
/*<435>*/ 		switch (scene_flags[109 /* 0xC 20 */]) {
          		  case 0:
/*<436>*/ 			printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x00000001>Io intanto vado a cercare altre\ninformazioni su queste statue!")
          		  case 1:
/*<427>*/ 			printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x00080b07>Secondo i testi antichi, nell'immensità\ndel cielo esiste un luogo chiamato<color red< Isola\ndella Dea>coloroff>.\n\nQueste antiche statue dovrebbero\npermettere di farci ritorno. Inoltre,\ntra tutte le statue, questa sembra\nessere speciale...\nSi direbbe sia in grado di <color red<attivare>coloroff>\nle altre.\n\n\n<0x10009:0x00161900>Forse si tratta solo di una favola per\nbambini, ma io ci credo!\n\n\n<0x10009:0x00000b04>Altrimenti, a cosa servirebbero tutte\nqueste statue qui intorno?")
          			flw_62:
/*< 62>*/ 			printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x00181700>Adoro essere chiaro, chiaro come\nil cristallo! Vuoi saperne di più?\n[1-]Sì[2]No")
/*<423>*/ 			switch (choice(2)) {
          			  case 0:
/*<424>*/ 				printf(/* textboxtype: 1, unk: 0, line: 61 */ "<0x10009:0x00151902>Ah! Anche a te interessa la storia?\n\n\n\n<0x10009:0x00160b00>Allora lascia che ti spieghi.\n\n\n\nSull'Isola della Dea, gli umani vivono\nspostandosi sul dorso di enormi\nvolatili che non esistono qui sulla\nTerra.\n<0x10009:0x00001e00>In realtà si tratta di un arcipelago\nformato da tante pacifiche isole, i cui\nabitanti adorano la Dea.\n\n<0x10009:0x00000b00>La loro cultura è avanzatissima, molto\npiù della nostra.")
/*<426>*/ 				printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x00080b00>Ma non finisce qui! Il bello deve\nancora venire!\n\n\n<0x10009:0x001f1e00>Dal momento che l'isola è stata\ncreata da una Dea, è ricca di\nelementi preziosissimi e\nsconosciuti.\n<0x10009:0x00001908>Tutti gli edifici dell'isola sono d'oro!\nDa fonti inesauribili, l'acqua sacra\nsi riversa a fiumi: bevendola si\nottiene l'eterna giovinezza.\n<0x10009:0x00000b00>Sugli alberi crescono frutti in grado\ndi guarire ogni malattia e nei campi\nnascono zucche che non marciscono\nmai!\nI prati sono costellati di fiori dai\nmille colori!\n\n\n<0x10009:0x00171900>Per non parlare del clima! Mai\ntroppo caldo né troppo freddo: un\nparadiso di eterna primavera!\nQuesta è l'Isola della Dea.\n<0x10009:0x00000b05><0x10008:0x01cd>Più preziosa del diamante più\nprezioso!\n\n\n<0x10009:0x00211806><0x10008:0x02cd>Scommetto che vuoi\nsaperne di più...\n<0x10008:0x01cd>Che ne dici?\n[1-]Va bene[2]No")
/*<434>*/ 				scene_flags[10 'Sealed Grounds'][109 /* 0xC 20 */] = true;
/*<430>*/ 				switch (choice(2)) {
          				  case 0:
/*<428>*/ 					printf(/* textboxtype: 1, unk: 0, line: 65 */ "<0x10009:0x00271956>Ah! Vedo che il fascino dell'Isola\ndella Dea ti ha già ammaliato!\n\n\n<0x10009:0x00161e00>Vorrei continuare con il racconto, ma\nse non vado avanti con le mie ricerche\nnon avrò più niente da dire...\n\n<0x10009:0x00000b00>Ti prometto che alla prossima\noccasione avrò pronte altre storie \naffascinanti.")
          					flw_433:
/*<433>*/ 					switch (scene_flags[14 /* 0x0 40 */]) {
          					  case 0:
          					  case 1:
/*< 60>*/ 						scene_flags[10 'Sealed Grounds'][14 /* 0x0 40 */] = true;
/*<579>*/ 						scene_flags[10 'Sealed Grounds'][35 /* 0x5 08 */] = true;
/*<343>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					}
          				  case 1:
/*<429>*/ 					printf(/* textboxtype: 1, unk: 0, line: 64 */ "<0x10009:0x00161e56>Davvero? Per tutti i porfidi, se mi\nsarebbe piaciuto parlartene! Sarà\nper la prossima volta...")
          					goto flw_433
          				}
          			  case 1:
/*<425>*/ 				printf(/* textboxtype: 1, unk: 0, line: 64 */ "<0x10009:0x00161e56>Davvero? Per tutti i porfidi, se mi\nsarebbe piaciuto parlartene! Sarà\nper la prossima volta...")
          				goto flw_433
          			}
          		}
          	  case 1:
/*< 55>*/ 		switch (scene_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<341>*/ 			printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x00000008>Grazie dell'aiuto!")
/*<334>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 340, 'param3': 47}
/*<340>*/ 			set_camera(49, 0)
/*<338>*/ 			{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 256, 'next': 339, 'param3': 15}
/*<339>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 335, 'param3': 15}
/*<335>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 58, 'param3': 48}
/*< 58>*/ 			printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00080b0a>Cosa sono quelle cose rosse come lava?\nNon pensavo che in questa foresta si\naggirassero esseri simili...\n\n<0x10009:0x00161e00>Sai, oggi è la seconda volta che vedo\nuno della tua specie! Quante cose\nstrane accadono ultimamente...\n\n<0x10009:0x00000b00>Per ringraziarti di avermi aiutato\nti darò qualche informazione...")
/*< 57>*/ 			set_camera(13, 0)
/*<437>*/ 			{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 356, 'next': 65, 'param3': 15}
/*< 65>*/ 			{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 256, 'next': 56, 'param3': 15}
/*< 56>*/ 			{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 0, 'next': 260, 'param3': 14}
/*<260>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 342, 'param3': 17}
/*<342>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 365, 'param3': 17}
/*<365>*/ 			{'type': 'type3', 'subType': 2, 'param1': 16, 'param2': 256, 'next': 59, 'param3': 15}
/*< 59>*/ 			printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x00080b01>Mi chiamo <color blue<Pigoron >coloroff>e mi trovo in questa\nforesta per condurre ricerche sulla\nstoria antica. \n\n<0x10009:0x00001700>Secondo i testi antichi, nell'immensità\ndel cielo esiste un luogo chiamato<color red< Isola\ndella Dea>coloroff>.\n\n<0x10009:0x00000b00>Queste <color blue<antiche statue >coloroff>dovrebbero\nfungere da punto di riferimento \nquando si <color red<sale in cielo>coloroff> e quando si\nridiscende.\n<color red<<sound 4>>coloroff><color red<Se quando ne trovi una la esamini>coloroff>,\ndovrebbero aumentare i riferimenti,\ncosa che semplificherà l'orientamento!\n\nQuesta statua, però, dovrebbe essere\nspeciale rispetto alle altre.\nSi direbbe sia in grado di attivare\nle altre.\n<0x10009:0x00161907>Forse è solo una fiaba per bambini, ma\nio ci voglio credere!\n\n\nAnche perché, se non fosse vero, a cosa\nservirebbero le statue che si trovano\nin giro, altrimenti?")
          			goto flw_62
          		  case 1:
/*<336>*/ 			switch (scene_flags[94 /* 0xA 40 */]) {
          			  case 0:
/*<337>*/ 				printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00000b52>Ohh!")
          			  case 1:
/*<258>*/ 				set_camera(37, 0)
/*<465>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 50, 'param3': 32}
/*< 50>*/ 				printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x18000b52>Lasciatemi in pace!\nAndate via, maledetti!")
/*<259>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		}
          	}
          }

          void entrypoint_500_54() {
/*<215>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 2, unk: 0, line: 11 */ "<0x10005:0x00320000><0x10012:0x00000004>Mio signore <heroname>.")
          }

          void entrypoint_500_71() {
/*<438>*/ 	start()
/*<439>*/ 	printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00151b09><0x10008:0x01cd>Ehhh!!!")
          }

          void entrypoint_500_03() {
/*<  4>*/ 	start()
/*<568>*/ 	{'type': 'type3', 'subType': 4, 'param1': 62, 'param2': 16384, 'next': 5, 'param3': 13}
/*<  5>*/ 	printf(/* textboxtype: 1, unk: 0, line: 5 */ "Bene questa volta tocca a te! Ti aiuterò,\nma non ho idea di come possa andare\na finire, sia chiaro!")
          }

          void entrypoint_500_55() {
/*<210>*/ 	start()
/*<211>*/ 	printf(/* textboxtype: 2, unk: 0, line: 12 */ "<0x10005:0x004b0000>Ecco la <color blue<Terra >coloroff>di cui si parla nelle\nantiche leggende di Oltrenuvola.")
          }

          void entrypoint_500_72() {
/*<442>*/ 	start()
/*<443>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 445, 'param3': 32}
/*<445>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 453, 'param3': 40}
/*<453>*/ 	wait_frames(30)
/*<444>*/ 	printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x28000004><0x10008:0x01cd>Ehi! <heroname>!")
/*<454>*/ 	set_camera(51, 0)
/*<458>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 446, 'param3': 16}
/*<446>*/ 	printf(/* textboxtype: 1, unk: 1, line: 109 */ "<0x10007:0x2800000f>Eh eh eh! Guarda qua! Questa è la\nsuper arma di Bado!")
/*<455>*/ 	set_camera(56, 0)
/*<459>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16909, 'next': 447, 'param3': 13}
/*<447>*/ 	printf(/* textboxtype: 1, unk: 1, line: 110 */ "Si chiama <color red<badopulta>coloroff>!")
/*<460>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 448, 'param3': 13}
/*<448>*/ 	printf(/* textboxtype: 1, unk: 1, line: 111 */ "<0x10009:0x28000018>Vedo che sei senza parole!\nDel resto non è stato facile\nper me costruirla!")
/*<462>*/ 	printf(/* textboxtype: 1, unk: 1, line: 112 */ "Guarda qua!")
/*<456>*/ 	set_camera(48, 0)
/*<463>*/ 	printf(/* textboxtype: 1, unk: 1, line: 113 */ "<0x10009:0x28404300>Ho dovuto abbattere ogni ostacolo per\npoter posare i binari per farla\nmuovere! E il tutto da solo!\n\nMi sono stupito di me stesso! <pause 30>\nNon sospettavo di avere un\nsimile talento!\n\n<0x10009:0x28414000>Usa pure questa macchina come\nmeglio credi e fai fuori quel\nmostro!")
/*<464>*/ 	set_camera(32, 0)
/*<449>*/ 	printf(/* textboxtype: 1, unk: 1, line: 114 */ "<0x10009:0x28044000>Se una delle mie bombe gli fa una\nvisitina, anche quell'enorme essere\ndovrà calmarsi per un po'!")
/*<461>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 450, 'param3': 13}
/*<450>*/ 	printf(/* textboxtype: 1, unk: 1, line: 115 */ "Aspetta... L'essere oscuro si è\nrisvegliato troppo presto!")
/*<451>*/ 	printf(/* textboxtype: 1, unk: 1, line: 116 */ "<0x10009:0x28414000>La mia arma segreta ha ancora\nbisogno di qualche ritocco!\n\n\nTi faccio un cenno quando sarà pronta!\nIntanto difenditi come puoi!")
/*<457>*/ 	set_camera(57, 0)
/*<452>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_04() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "")
          }

          void entrypoint_500_56() {
/*<214>*/ 	start()
/*<212>*/ 	printf(/* textboxtype: 2, unk: 0, line: 13 */ "<0x10005:0x004b0000>E questo...\nè il luogo denominato <color blue<Terra dell'esilio>coloroff>.")
          }

          void entrypoint_500_73() {
/*<479>*/ 	start()
/*<477>*/ 	printf(/* textboxtype: 1, unk: 2, line: 17 */ "<0x10006:0xfdcd>Tu...\n\n\n\n<0x10006:0xfdcd>Figlio del fato, disceso dal cielo...")
          }

          void entrypoint_500_05() {
/*<  8>*/ 	start()
/*<  9>*/ 	printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x0000000f>Il sigillo è in frantumi!\n\n\n\nDopo ti spiegherò tutto!\n\n\n\nPer il momento impediamogli di\nuscire da lì!\n\n\nNon dobbiamo assolutamente farlo\navvicinare al santuario!")
          }

          void entrypoint_500_22() {
/*< 26>*/ 	start()
/*< 81>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 80, 'param3': 32}
/*< 80>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 27, 'param3': 16}
/*< 27>*/ 	printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0010160d>Ora, <heroname>!<pause 30>\n\n\n\nColpisci il pilastro con il <color red<potere celeste>coloroff>!\n\n\n\n<0x10009:0x00111700>Sbrigati!")
          }

          void entrypoint_500_57() {
/*<413>*/ 	start()
/*<370>*/ 	{'type': 'type3', 'subType': 2, 'param1': 23, 'param2': 356, 'next': 310, 'param3': 15}
/*<310>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 311, 'param3': 32}
/*<311>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 484, 'param3': 17}
/*<484>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 40, 'next': 509, 'param3': 17}
/*<509>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<510>*/ 	wait_frames(30)
/*<511>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*<515>*/ 	wait_frames(10)
/*<512>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
/*<513>*/ 	wait_frames(60)
/*<375>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<514>*/ 	wait_frames(10)
/*<517>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10302, 'param2': 17664, 'next': 485, 'param3': 13}
/*<485>*/ 	set_camera(52, 0)
/*<376>*/ 	printf(/* textboxtype: 1, unk: 1, line: 119 */ "<0x10009:0x28000053>Aaah!!!<0x10005:0x001e0000>")
/*<254>*/ 	printf(/* textboxtype: 1, unk: 1, line: 118 */ "<0x10009:0x28004000>Ci siamo! I giochi stanno\nper cominciare!<0x10005:0x001e0000>")
/*<255>*/ 	printf(/* textboxtype: 1, unk: 1, line: 120 */ "<0x10009:0x283e400f>La calma è la virtù dei forti!\n\n\n\n<0x10009:0x28410000>Del resto ormai ti rendi conto delle\npotenzialità della mia <color red<badopulta>coloroff>!")
/*<256>*/ 	printf(/* textboxtype: 1, unk: 1, line: 121 */ "<0x10009:0x28000000>Fino a quando ci sarà la mia arma, la\nparola “sconfitta\" non esisterà nel mio\ndizionario!\n\n<0x10009:0x28000200>Forse è questa la missione che mi è\nstata affidata...")
/*<257>*/ 	printf(/* textboxtype: 1, unk: 1, line: 122 */ "<0x10009:0x28000200><heroname>! Cerca solo di non\ntrovarti sulla traiettoria di tiro!")
/*<516>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
/*<371>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*<522>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<566>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<567>*/ 	story_flags[176 /* us: 805A9AE2 0x80, jp: 805ACD62 0x80 */] = true;
/*<312>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 419, 'param3': 42}
/*<419>*/ 	story_flags[483 /* us: 805A9B10 0x02, jp: 805ACD90 0x02 */] = true;
          }

          void entrypoint_500_74() {
/*<480>*/ 	start()
/*<478>*/ 	printf(/* textboxtype: 1, unk: 2, line: 18 */ "<0x10006:0xfdcd>Innalza la spada della Dea verso\nil cielo... <pause 15><0x10006:0xfdcd>rivolgila verso l'aura\nmalvagia, così che il potere\ndella lama possa colpirla.")
          }

          void entrypoint_500_40() {
/*< 51>*/ 	start()
/*< 85>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 84, 'param3': 32}
/*< 84>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3592, 'param2': 2829, 'next': 86, 'param3': 13}
/*< 86>*/ 	set_camera(15, 0)
/*< 52>*/ 	printf(/* textboxtype: 1, unk: 0, line: 68 */ "<heroname>! Il <color red<pilastro del sigillo\n>coloroff>dovrebbe essere sulla fronte dell'essere\noscuro.\n\n<0x10009:0x0e000013>Se lo riesci a conficcare ancor più a\nfondo con la tua spada, riuscirai a\nvincere!")
/*< 87>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_58() {
/*<216>*/ 	start()
/*<213>*/ 	printf(/* textboxtype: 2, unk: 0, line: 14 */ "<0x10005:0x004b0000>Ora, <0x10012:0x0000000b>mio signore, procedete pure e\nsiate prudente!")
          }

          void entrypoint_500_23() {
/*<475>*/ 	start()
/*<481>*/ 	printf(/* textboxtype: 2, unk: 0, line: 8 */ "Mio signore, Faih a rapporto.")
/*<482>*/ 	printf(/* textboxtype: 2, unk: 0, line: 9 */ "Sembra che la porta sia stata aperta di\nrecente, ma ora vi è sigillata una\nmisteriosa e potente forza.")
          }

          void entrypoint_500_75() {
/*<497>*/ 	start()
/*<498>*/ 	story_flags[790 /* us: 805A9B2C 0x40, jp: 805ACDAC 0x40 */] = true;
/*<520>*/ 	scene_flags[10 'Sealed Grounds'][54 /* 0x7 40 */] = true;
          }

          void entrypoint_500_41() {
/*< 76>*/ 	start()
/*< 74>*/ 	printf(/* textboxtype: 1, unk: 0, line: 86 */ "<0x10009:0x00000026>Ottimo lavoro, <heroname>!\nDovresti ringraziarmi!\n\n\nOra bisogna attivare la Porta del\nTempo! Io vado!")
          }

          void entrypoint_500_24() {
/*<137>*/ 	start()
/*<547>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<548>*/ 		printf(/* textboxtype: 2, unk: 0, line: 41 */ "<0x10012:0x0000000b>Mio signore, Faih a rapporto.\nIl <color red<pilastro del sigillo >coloroff>è conficcato\nnella fronte dell'essere oscuro.\n\nNon potete fuggire fino a quando non\navrete neutralizzato l'essere oscuro.")
          	  case 1:
/*<139>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<140>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<141>*/ 				printf(/* textboxtype: 2, unk: 0, line: 42 */ "<0x10012:0x0000000b>Mio signore, Faih a rapporto.\n<0x10012:0x00000002>Dovete immediatamente neutralizzare\nl'essere oscuro. Non potete ancora\nlasciare questo luogo.")
          			  case 1:
/*<142>*/ 				printf(/* textboxtype: 2, unk: 0, line: 41 */ "<0x10012:0x0000000b>Mio signore, Faih a rapporto.\nIl <color red<pilastro del sigillo >coloroff>è conficcato\nnella fronte dell'essere oscuro.\n\nNon potete fuggire fino a quando non\navrete neutralizzato l'essere oscuro.")
          			}
          		  case 1:
/*<138>*/ 			printf(/* textboxtype: 2, unk: 0, line: 40 */ "")
          		}
          	}
          }

          void entrypoint_500_59() {
/*<217>*/ 	start()
/*<218>*/ 	printf(/* textboxtype: 1, unk: 2, line: 72 */ "<0x10009:0x003e4515><0x10008:0x01cd>Nooo!\n\n\n\n<0x10009:0x00004000>Che disastro! Le scosse di prima\nhanno bloccato il sentiero e non\nposso più prendere le bombe!\n\nChe faccio ora?!\n<0x10008:0x01cd>...")
          }

          void entrypoint_500_76() {
/*<506>*/ 	start()
/*<466>*/ 	printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x00131907>Per tutti i porfidi! Ma che magia hai\nfatto?\n\n\n<0x10009:0x00171b08>Basta che ti avvicini e la statua\nreagisce! Ma è incredibile!")
          }

          void entrypoint_500_08() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00444300>Bersaglio centrato! Certo si potrebbe\nfare di meglio...\n\n\n<0x10009:0x00004000>Un attimo di pazienza che la carico... \nNel frattempo, cerca di combattere\ncome puoi! Appena è pronta ti darò\nil segnale!")
          }

          void entrypoint_500_25() {
/*< 35>*/ 	start()
/*<525>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = false;
/*< 70>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*< 38>*/ 	scene_flags[10 'Sealed Grounds'][10 /* 0x0 04 */] = true;
/*< 41>*/ 	scene_flags[10 'Sealed Grounds'][13 /* 0x0 20 */] = false;
/*<582>*/ 	story_flags[852 /* us: 805A9B34 0x04, jp: 805ACDB4 0x04 */] = true;
          }

          void entrypoint_500_42() {
/*< 77>*/ 	start()
/*< 75>*/ 	printf(/* textboxtype: 1, unk: 0, line: 88 */ "<0x10009:0x00203010>Ah ah ah... <heroname>! Ce la\nsiamo cavata per un pelo questa volta!\nComunque, alla fine tutto è andato\nper il verso giusto.\n<0x10009:0x00420200>Beh, io vado al santuario. Sbrigati a\nraggiungermi!")
          }

          void entrypoint_500_77() {
/*<507>*/ 	start()
/*<508>*/ 	printf(/* textboxtype: 1, unk: 2, line: 73 */ "<0x10009:0x003e4026><heroname>! Presto, <color red<sali fin qui>coloroff>!\nProcedi a lato del santuario!")
          }

          void entrypoint_500_09() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf(/* textboxtype: 1, unk: 2, line: 4 */ "<0x10009:0x0020403c>Bene, ora sei sul <color blue<macchinario>coloroff>! Cerca di\nmirare e colpire il pilastro che ha sulla\ntesta!")
          }

          void entrypoint_500_26() {
/*< 36>*/ 	start()
/*<526>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = false;
/*< 48>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*< 39>*/ 	scene_flags[10 'Sealed Grounds'][11 /* 0x0 08 */] = true;
/*< 42>*/ 	scene_flags[10 'Sealed Grounds'][13 /* 0x0 20 */] = false;
/*<583>*/ 	story_flags[853 /* us: 805A9B34 0x08, jp: 805ACDB4 0x08 */] = true;
          }

          void entrypoint_500_43() {
/*<131>*/ 	start()
/*<405>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 369, 'param3': 32}
/*<369>*/ 	set_camera(59, 0)
/*<401>*/ 	{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 260, 'next': 403, 'param3': 15}
/*<403>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1042, 'param2': 4352, 'next': 402, 'param3': 13}
/*<402>*/ 	{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 4, 'next': 483, 'param3': 14}
/*<483>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 404, 'param3': 17}
/*<404>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 521, 'param3': 17}
/*<521>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<133>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<262>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1086, 'param2': 16447, 'next': 132, 'param3': 13}
/*<132>*/ 	printf(/* textboxtype: 1, unk: 1, line: 95 */ "Ehi, <heroname>!\nA quanto pare l'essere oscuro\nsi sta risvegliando di nuovo!")
/*<263>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1089, 'param2': 16384, 'next': 136, 'param3': 13}
/*<136>*/ 	printf(/* textboxtype: 1, unk: 1, line: 96 */ "Mi vado a preparare.\nAspetta un attimo!")
/*<135>*/ 	{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 772, 'next': 420, 'param3': 14}
/*<420>*/ 	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
/*<134>*/ 	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
/*<418>*/ 	changeScene(16, 0) // 
          }

          void entrypoint_500_60() {
/*<219>*/ 	start()
/*<372>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 222, 'param3': 32}
/*<222>*/ 	printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x28000004><0x10008:0x01cd>Ehi! <heroname>!")
/*<293>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 294, 'param3': 40}
/*<294>*/ 	wait_frames(45)
/*<229>*/ 	set_camera(31, 0)
/*<231>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 295, 'param3': 16}
/*<295>*/ 	{'type': 'type3', 'subType': 2, 'param1': 20, 'param2': 356, 'next': 223, 'param3': 15}
/*<223>*/ 	printf(/* textboxtype: 1, unk: 1, line: 109 */ "<0x10007:0x2800000f>Eh eh eh! Guarda qua! Questa è la\nsuper arma di Bado!")
/*<230>*/ 	set_camera(32, 0)
/*<344>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 224, 'param3': 13}
/*<224>*/ 	printf(/* textboxtype: 1, unk: 1, line: 110 */ "Si chiama <color red<badopulta>coloroff>!")
/*<345>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10302, 'param2': 512, 'next': 225, 'param3': 13}
/*<225>*/ 	printf(/* textboxtype: 1, unk: 1, line: 111 */ "<0x10009:0x28000018>Vedo che sei senza parole!\nDel resto non è stato facile\nper me costruirla!")
/*<361>*/ 	printf(/* textboxtype: 1, unk: 1, line: 112 */ "Guarda qua!")
/*<232>*/ 	set_camera(33, 0)
/*<362>*/ 	printf(/* textboxtype: 1, unk: 1, line: 113 */ "<0x10009:0x28404300>Ho dovuto abbattere ogni ostacolo per\npoter posare i binari per farla\nmuovere! E il tutto da solo!\n\nMi sono stupito di me stesso! <pause 30>\nNon sospettavo di avere un\nsimile talento!\n\n<0x10009:0x28414000>Usa pure questa macchina come\nmeglio credi e fai fuori quel\nmostro!")
/*<233>*/ 	set_camera(32, 0)
/*<226>*/ 	printf(/* textboxtype: 1, unk: 1, line: 114 */ "<0x10009:0x28044000>Se una delle mie bombe gli fa una\nvisitina, anche quell'enorme essere\ndovrà calmarsi per un po'!")
/*<368>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 227, 'param3': 13}
/*<227>*/ 	printf(/* textboxtype: 1, unk: 1, line: 115 */ "Aspetta... L'essere oscuro si è\nrisvegliato troppo presto!")
/*<228>*/ 	printf(/* textboxtype: 1, unk: 1, line: 116 */ "<0x10009:0x28414000>La mia arma segreta ha ancora\nbisogno di qualche ritocco!\n\n\nTi faccio un cenno quando sarà pronta!\nIntanto difenditi come puoi!")
/*<296>*/ 	set_camera(45, 0)
/*<240>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_78() {
/*<580>*/ 	start()
/*<581>*/ 	printf(/* textboxtype: 2, unk: 0, line: 128 */ "<0x10012:0x0000000b>Mio signore, Faih a rapporto.\nIl vostro compito ora è imprigionare\nnuovamente il mostro. È inevitabile.")
          }

          void entrypoint_500_27() {
/*< 37>*/ 	start()
/*<527>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = false;
/*< 69>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*< 40>*/ 	scene_flags[10 'Sealed Grounds'][12 /* 0x0 10 */] = true;
/*< 43>*/ 	scene_flags[10 'Sealed Grounds'][13 /* 0x0 20 */] = false;
/*<584>*/ 	story_flags[854 /* us: 805A9B34 0x10, jp: 805ACDB4 0x10 */] = true;
          }

          void entrypoint_500_61() {
/*<220>*/ 	start()
/*<243>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 244, 'param3': 32}
/*<244>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 245, 'param3': 16}
/*<245>*/ 	printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x28000004><0x10008:0x01cd>Ehi! <heroname>!")
/*<246>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 297, 'param3': 40}
/*<297>*/ 	wait_frames(30)
/*<501>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 298, 'param3': 47}
/*<298>*/ 	set_camera(36, 0)
/*<503>*/ 	{'type': 'type3', 'subType': 2, 'param1': 30, 'param2': 356, 'next': 502, 'param3': 15}
/*<502>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 247, 'param3': 48}
/*<247>*/ 	printf(/* textboxtype: 1, unk: 1, line: 109 */ "<0x10007:0x2800000f>Eh eh eh! Guarda qua! Questa è la\nsuper arma di Bado!")
/*<299>*/ 	set_camera(46, 0)
/*<300>*/ 	wait_frames(15)
/*<346>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16909, 'next': 248, 'param3': 13}
/*<248>*/ 	printf(/* textboxtype: 1, unk: 1, line: 110 */ "Si chiama <color red<badopulta>coloroff>!")
/*<474>*/ 	{'type': 'type3', 'subType': 2, 'param1': 29, 'param2': 356, 'next': 347, 'param3': 15}
/*<347>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 249, 'param3': 13}
/*<249>*/ 	printf(/* textboxtype: 1, unk: 1, line: 111 */ "<0x10009:0x28000018>Vedo che sei senza parole!\nDel resto non è stato facile\nper me costruirla!")
/*<363>*/ 	printf(/* textboxtype: 1, unk: 1, line: 112 */ "Guarda qua!")
/*<301>*/ 	set_camera(47, 0)
/*<364>*/ 	printf(/* textboxtype: 1, unk: 1, line: 113 */ "<0x10009:0x28404300>Ho dovuto abbattere ogni ostacolo per\npoter posare i binari per farla\nmuovere! E il tutto da solo!\n\nMi sono stupito di me stesso! <pause 30>\nNon sospettavo di avere un\nsimile talento!\n\n<0x10009:0x28414000>Usa pure questa macchina come\nmeglio credi e fai fuori quel\nmostro!")
/*<367>*/ 	set_camera(32, 0)
/*<250>*/ 	printf(/* textboxtype: 1, unk: 1, line: 114 */ "<0x10009:0x28044000>Se una delle mie bombe gli fa una\nvisitina, anche quell'enorme essere\ndovrà calmarsi per un po'!")
/*<348>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 251, 'param3': 13}
/*<251>*/ 	printf(/* textboxtype: 1, unk: 1, line: 115 */ "Aspetta... L'essere oscuro si è\nrisvegliato troppo presto!")
/*<252>*/ 	printf(/* textboxtype: 1, unk: 1, line: 116 */ "<0x10009:0x28414000>La mia arma segreta ha ancora\nbisogno di qualche ritocco!\n\n\nTi faccio un cenno quando sarà pronta!\nIntanto difenditi come puoi!")
/*<302>*/ 	set_camera(50, 0)
/*<253>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_44() {
/*<354>*/ 	start()
/*<356>*/ 	switch (scene_flags[6 /* 0x1 40 */]) {
          	  case 0:
/*<358>*/ 		printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x00171b08>La statua ha reagito! Allora tu ne sai\nancora più di me!")
          	  case 1:
/*<355>*/ 		printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x00151b05><0x10008:0x01cd>Ehi!")
/*<357>*/ 		printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00131909>Ehi!!!\n\n\n\n<0x10009:0x00171b08>Cos'hai fatto? La statua ha reagito!\nAllora tu ne sai ancora più di me!")
/*<359>*/ 		scene_flags[10 'Sealed Grounds'][6 /* 0x1 40 */] = true;
          	}
          }

          void entrypoint_500_45() {
/*< 89>*/ 	start()
/*< 88>*/ 	printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000026>Ohhh!\nSembra gli siano spuntate le braccia!\n\n\nPerfetto! È arrivato il momento di\nmostrare al mondo cosa è in grado di\nfare la fantastica badopulta!\n\n<0x10009:0x00424000>Non appena sarà pronta ti farò sapere!\nPer il momento, continua a darti\nda fare!")
          }

          void entrypoint_500_28() {
/*<160>*/ 	start()
/*<553>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<554>*/ 		printf(/* textboxtype: 2, unk: 0, line: 43 */ "<0x10012:0x0000000b>Mio signore, Faih a rapporto.\nL'essere oscuro si è risvegliato di\nnuovo. Non potete ancora lasciare\nquesto luogo.")
          	  case 1:
/*<161>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<162>*/ 			printf(/* textboxtype: 2, unk: 0, line: 44 */ "<0x10012:0x0000000b>Mio signore, Faih a rapporto.\nDovete ripristinare il sigillo prima di\npoter lasciare questo luogo.")
          		  case 1:
/*<163>*/ 			printf(/* textboxtype: 2, unk: 0, line: 43 */ "<0x10012:0x0000000b>Mio signore, Faih a rapporto.\nL'essere oscuro si è risvegliato di\nnuovo. Non potete ancora lasciare\nquesto luogo.")
          		}
          	}
          }

          void entrypoint_500_62() {
/*<221>*/ 	start()
/*<234>*/ 	printf(/* textboxtype: 1, unk: 0, line: 117 */ "")
/*<303>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 307, 'param3': 40}
/*<307>*/ 	wait_frames(45)
/*<305>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 349, 'param3': 32}
/*<349>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 306, 'param3': 16}
/*<306>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 304, 'param3': 17}
/*<304>*/ 	set_camera(31, 0)
/*<308>*/ 	{'type': 'type3', 'subType': 2, 'param1': 20, 'param2': 356, 'next': 238, 'param3': 15}
/*<238>*/ 	wait_frames(30)
/*<350>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 235, 'param3': 13}
/*<235>*/ 	printf(/* textboxtype: 1, unk: 1, line: 118 */ "<0x10009:0x28004000>Ci siamo! I giochi stanno\nper cominciare!<0x10005:0x001e0000>")
/*<241>*/ 	set_camera(32, 0)
/*<351>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 236, 'param3': 13}
/*<236>*/ 	printf(/* textboxtype: 1, unk: 1, line: 120 */ "<0x10009:0x283e400f>La calma è la virtù dei forti!\n\n\n\n<0x10009:0x28410000>Del resto ormai ti rendi conto delle\npotenzialità della mia <color red<badopulta>coloroff>!")
/*<237>*/ 	printf(/* textboxtype: 1, unk: 1, line: 121 */ "<0x10009:0x28000000>Fino a quando ci sarà la mia arma, la\nparola “sconfitta\" non esisterà nel mio\ndizionario!\n\n<0x10009:0x28000200>Forse è questa la missione che mi è\nstata affidata...")
/*<352>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 242, 'param3': 13}
/*<242>*/ 	printf(/* textboxtype: 1, unk: 1, line: 122 */ "<0x10009:0x28000200><heroname>! Cerca solo di non\ntrovarti sulla traiettoria di tiro!")
/*<309>*/ 	set_camera(45, 0)
/*<239>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_11() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 2, unk: 0, line: 15 */ "")
          }

          void entrypoint_500_29() {
/*< 72>*/ 	start()
/*<538>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 2, 'next': 100, 'param3': 46}
/*<100>*/ 	switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          	  case 0:
/*<528>*/ 		switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          		  case 0:
/*<530>*/ 			switch (scene_flags[43 /* 0x4 08 */]) {
          			  case 0:
/*<534>*/ 				printf(/* textboxtype: 1, unk: 0, line: 85 */ "<0x10009:0x00004026>Ascolta bene, <heroname>!\nNon possiamo rifornirci di bombe!\n\n\n<0x10009:0x00204000>Quindi, al posto delle bombe userò te!\nSali! Forza sali sulla badopulta!")
          			  case 1:
/*<532>*/ 				switch (zone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<533>*/ 					printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00000026>La <color red<badopulta>coloroff> è pronta!\n\n\n\nPremi (^) per prepararti a fare fuoco!<0x10011:0x08cd>\n\n\n\nCon (ControlStick) puoi muoverla e con il\n<color red<telecomando>coloroff> mirare. Poi basta\npuntare e... BUM!")
          				  case 1:
/*<531>*/ 					printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00004226>Ecco che la mia mitica <color red<badopulta >coloroff>torna\ndi nuovo utile!\n\n\nCome ben sai, quando sarà pronta\napparirò su (^) !<0x10011:0x08cd>\n\n\n<0x10009:0x00424000>Dai il meglio di te per far fuori quel\nmostro!")
          				}
          			}
          		  case 1:
/*<529>*/ 			switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          			  case 0:
/*<536>*/ 				switch (zone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<537>*/ 					printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00000026>La <color red<badopulta>coloroff> è pronta!\n\n\n\nPremi (^) per prepararti a fare fuoco!<0x10011:0x08cd>\n\n\n\nCon (ControlStick) puoi muoverla e con il\n<color red<telecomando>coloroff> mirare. Poi basta\npuntare e... BUM!")
          				  case 1:
/*<535>*/ 					printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x00044100>È finalmente arrivato il momento in\ncui la mia arma segreta, la <color red<badopulta>coloroff>,\npuò essere sfruttata!\n\n<0x10009:0x00000300>Non appena sarà pronta ti avvertirò,\nocchio a (^)!\n<0x10009:0x00004000>Nel frattempo, continua a difenderti\ncome puoi con la spada!<0x10011:0x08cd>")
          				}
          			  case 1:
/*< 78>*/ 				switch (scene_flags[71 /* 0x9 80 */]) {
          				  case 0:
/*<193>*/ 					switch (story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */]) {
          					  case 0:
/*<261>*/ 						scene_flags[10 'Sealed Grounds'][97 /* 0xD 02 */] = true;
/*<561>*/ 						switch (story_flags[490 /* us: 805A9B13 0x01, jp: 805ACD93 0x01 */]) {
          						  case 0:
/*<564>*/ 							switch (story_flags[799 /* us: 805A9B2F 0x80, jp: 805ACDAF 0x80 */]) {
          							  case 0:
          								flw_194:
/*<194>*/ 								printf(/* textboxtype: 1, unk: 1, line: 100 */ "<0x10009:0x00000026>Bene, dove vuoi andare?\nNelle aree di gioco del Cielo\no in quelle della Terra?\n\n[1-]Cielo[2-]Terra[3]Nessuna")
/*<195>*/ 								switch (choice(3)) {
          								  case 0:
/*<586>*/ 									switch (story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */]) {
          									  case 0:
/*<196>*/ 										printf(/* textboxtype: 1, unk: 1, line: 101 */ "Le aree di gioco del Cielo?\nPreferisci giocare a Roulette aerea\no a Insettopoli?\n\n[1-]Roulette\naerea[2-]Insettopoli[3-]Altro")
/*<571>*/ 										switch (choice(3)) {
          										  case 0:
          											flw_209:
/*<209>*/ 											zone_temp_flags[1 /* 0x1 02 */] = true;
          											flw_204:
/*<204>*/ 											{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 199, 'param3': 42}
/*<199>*/ 											printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x00420342>Perfetto! Mi raccomando tieniti\nforte!")
          										  case 1:
          											flw_202:
/*<202>*/ 											zone_temp_flags[2 /* 0x1 04 */] = true;
          											goto flw_204
          										  case 2:
/*<197>*/ 											printf(/* textboxtype: 1, unk: 1, line: 102 */ "Preferisci giocare ad Affetta il bambù\no a Tiro alla zucca?\n\n[1-]Affetta\nil bambù[2-]Tiro\nalla zucca[3]Niente")
/*<572>*/ 											switch (choice(3)) {
          											  case 0:
          												flw_203:
/*<203>*/ 												zone_temp_flags[3 /* 0x1 08 */] = true;
          												goto flw_204
          											  case 1:
/*<205>*/ 												zone_temp_flags[4 /* 0x1 10 */] = true;
          												goto flw_204
          											  case 2:
          												flw_200:
/*<200>*/ 												printf(/* textboxtype: 1, unk: 0, line: 106 */ "Torna da me quando vuoi farti un giro!")
          											}
          										}
          									  case 1:
/*<585>*/ 										printf(/* textboxtype: 1, unk: 1, line: 103 */ "Le aree di gioco nel Cielo?\nBene! Quale preferisci?\n[1-]Roulette\naerea[2-]Insettopoli[3-]Affetta\nil bambù[4]Nessuna")
/*<587>*/ 										switch (choice(4)) {
          										  case 0:
          											goto flw_209
          										  case 1:
          											goto flw_202
          										  case 2:
          											goto flw_203
          										  case 3:
          											goto flw_200
          										}
          									}
          								  case 1:
/*<198>*/ 									printf(/* textboxtype: 1, unk: 1, line: 104 */ "Le aree di gioco della Terra?\nPreferisci giocare a Le sfide del\ndrago del fulmine, a Stana la rupia\no a Montagne russe?\n[1-]Drago\ndel fulmine[2-]Stana la\nrupia[3-]Montagne\nrusse[4]Nessuno")
/*<201>*/ 									switch (choice(4)) {
          									  case 0:
/*<206>*/ 										zone_temp_flags[5 /* 0x1 20 */] = true;
          										goto flw_204
          									  case 1:
/*<207>*/ 										zone_temp_flags[6 /* 0x1 40 */] = true;
          										goto flw_204
          									  case 2:
/*<208>*/ 										zone_temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_204
          									  case 3:
          										goto flw_200
          									}
          								  case 2:
          									goto flw_200
          								}
          							  case 1:
/*<563>*/ 								printf(/* textboxtype: 1, unk: 0, line: 107 */ "<0x10009:0x00000004>Ehi, <heroname>!\n\n\n\nStavo giusto pensando di\ndarti una mano!")
/*<562>*/ 								story_flags[799 /* us: 805A9B2F 0x80, jp: 805ACDAF 0x80 */] = true;
/*<577>*/ 								switch (story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */]) {
          								  case 0:
          									goto flw_194
          								  case 1:
/*<578>*/ 									printf(/* textboxtype: 1, unk: 0, line: 98 */ "Puoi usare questa macchina per andare\nda qualche altra parte.")
          									flw_575:
/*<575>*/ 									printf(/* textboxtype: 1, unk: 0, line: 99 */ "Grazie alla mia inventiva, ti potrò\ncatapultare ovunque tu desideri!\nDovunque sia, sono sicuro che ti\nattendono fantastiche avventure!\nSe vai in un posto che non hai mai\nvisto prima, assicurati di esplorarlo\nper bene!")
/*<576>*/ 									story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */] = true;
          									goto flw_194
          								}
          							}
          						  case 1:
/*<573>*/ 							switch (story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */]) {
          							  case 0:
          								goto flw_194
          							  case 1:
/*<574>*/ 								printf(/* textboxtype: 1, unk: 0, line: 97 */ "<0x10009:0x00000004>Ehi, <heroname>! Se ti va puoi\nusare questa macchina per andare\nda qualche altra parte!")
          								goto flw_575
          							}
          						}
          					  case 1:
/*< 79>*/ 						printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x00000003>Vuoi andare alla foresta di Firone?\n\n\n\nCon la <color red<badopulta >coloroff>faremo in un attimo!\n[1-]Ok![2]No, grazie")
/*< 93>*/ 						switch (choice(2)) {
          						  case 0:
/*< 95>*/ 							printf(/* textboxtype: 1, unk: 0, line: 92 */ "<0x10009:0x00000042>Ottimo! Lascia fare a me!")
/*< 92>*/ 							zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 96>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*< 94>*/ 							printf(/* textboxtype: 1, unk: 0, line: 91 */ "Se cambi idea, torna da me!")
          						}
          					}
          				  case 1:
/*<188>*/ 					switch (story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */]) {
          					  case 0:
/*<187>*/ 						switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          						  case 0:
          							flw_190:
/*<190>*/ 							printf(/* textboxtype: 1, unk: 0, line: 89 */ "<0x10009:0x00000026>Ancora una volta ho salvato la\nsituazione. Ora, però, scendi a\nripristinare il sigillo, presto!")
          						  case 1:
/*<192>*/ 							switch (scene_flags[19 /* 0x3 08 */]) {
          							  case 0:
          								goto flw_190
          							  case 1:
/*<320>*/ 								switch (scene_flags[43 /* 0x4 08 */]) {
          								  case 0:
/*<324>*/ 									printf(/* textboxtype: 1, unk: 0, line: 85 */ "<0x10009:0x00004026>Ascolta bene, <heroname>!\nNon possiamo rifornirci di bombe!\n\n\n<0x10009:0x00204000>Quindi, al posto delle bombe userò te!\nSali! Forza sali sulla badopulta!")
          								  case 1:
/*<322>*/ 									switch (zone_temp_flags[11 /* 0x0 08 */]) {
          									  case 0:
/*<323>*/ 										printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00000026>La <color red<badopulta>coloroff> è pronta!\n\n\n\nPremi (^) per prepararti a fare fuoco!<0x10011:0x08cd>\n\n\n\nCon (ControlStick) puoi muoverla e con il\n<color red<telecomando>coloroff> mirare. Poi basta\npuntare e... BUM!")
          									  case 1:
/*<321>*/ 										printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00004226>Ecco che la mia mitica <color red<badopulta >coloroff>torna\ndi nuovo utile!\n\n\nCome ben sai, quando sarà pronta\napparirò su (^) !<0x10011:0x08cd>\n\n\n<0x10009:0x00424000>Dai il meglio di te per far fuori quel\nmostro!")
          									}
          								}
          							}
          						}
          					  case 1:
/*<186>*/ 						switch (story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */]) {
          						  case 0:
          							flw_189:
/*<189>*/ 							printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00000026>Tutto grazie a me!<pause 30> Presto, ora devi\nripristinare il sigillo! La volta scorsa\nhai utilizzato il potere della tua spada,\nnon è così?")
          						  case 1:
/*<191>*/ 							switch (scene_flags[18 /* 0x3 04 */]) {
          							  case 0:
          								goto flw_189
          							  case 1:
/*<318>*/ 								switch (zone_temp_flags[11 /* 0x0 08 */]) {
          								  case 0:
/*<319>*/ 									printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00000026>La <color red<badopulta>coloroff> è pronta!\n\n\n\nPremi (^) per prepararti a fare fuoco!<0x10011:0x08cd>\n\n\n\nCon (ControlStick) puoi muoverla e con il\n<color red<telecomando>coloroff> mirare. Poi basta\npuntare e... BUM!")
          								  case 1:
/*< 73>*/ 									printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x00044100>È finalmente arrivato il momento in\ncui la mia arma segreta, la <color red<badopulta>coloroff>,\npuò essere sfruttata!\n\n<0x10009:0x00000300>Non appena sarà pronta ti avvertirò,\nocchio a (^)!\n<0x10009:0x00004000>Nel frattempo, continua a difenderti\ncome puoi con la spada!<0x10011:0x08cd>")
          								}
          							}
          						}
          					}
          				}
          			}
          		}
          	  case 1:
/*<101>*/ 		printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x00000026>La vegliarda ha detto che\nquell'enorme essere mostruoso\npotrebbe risvegliarsi.\n\n<0x10009:0x00004200>E il grande Bado ha costruito\nun'arma segreta per prepararsi\nall'evento!\n\n<0x10009:0x0000000f>Non è ancora pronta, ma sarà una\ngran bella sorpresa!")
          	}
          }

          void entrypoint_500_46() {
/*< 90>*/ 	start()
/*< 91>*/ 	printf(/* textboxtype: 1, unk: 0, line: 79 */ "<0x10009:0x00000026>Ecco che ritorna! Perfetto!\nSono pronto a tutto!\n\n\n<0x10009:0x00044000><heroname>! Facciamo\nesattamente come l'altra volta!")
          }

          void entrypoint_500_63() {
/*<377>*/ 	start()
/*<406>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 392, 'param3': 32}
/*<392>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 260, 'next': 382, 'param3': 15}
/*<382>*/ 	set_camera(54, 0)
/*<408>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 394, 'param3': 17}
/*<394>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1042, 'param2': 4352, 'next': 393, 'param3': 13}
/*<393>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 4, 'next': 395, 'param3': 14}
/*<395>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 524, 'param3': 16}
/*<524>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<380>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<381>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1086, 'param2': 16447, 'next': 379, 'param3': 13}
/*<379>*/ 	printf(/* textboxtype: 1, unk: 1, line: 95 */ "Ehi, <heroname>!\nA quanto pare l'essere oscuro\nsi sta risvegliando di nuovo!")
/*<383>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1089, 'param2': 16384, 'next': 385, 'param3': 13}
/*<385>*/ 	printf(/* textboxtype: 1, unk: 1, line: 96 */ "Mi vado a preparare.\nAspetta un attimo!")
/*<384>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 772, 'next': 422, 'param3': 14}
/*<422>*/ 	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
/*<415>*/ 	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
/*<416>*/ 	changeScene(16, 0) // 
          }

          void entrypoint_500_47() {
/*<154>*/ 	start()
/*<539>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<541>*/ 		{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 540, 'param3': 13}
/*<540>*/ 		printf(/* textboxtype: 1, unk: 0, line: 68 */ "<heroname>! Il <color red<pilastro del sigillo\n>coloroff>dovrebbe essere sulla fronte dell'essere\noscuro.\n\n<0x10009:0x0e000013>Se lo riesci a conficcare ancor più a\nfondo con la tua spada, riuscirai a\nvincere!")
          	  case 1:
/*<156>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<157>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<159>*/ 				printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0010160d>Ora, <heroname>!<pause 30>\n\n\n\nColpisci il pilastro con il <color red<potere celeste>coloroff>!\n\n\n\n<0x10009:0x00111700>Sbrigati!")
          			  case 1:
/*<374>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 158, 'param3': 13}
/*<158>*/ 				printf(/* textboxtype: 1, unk: 0, line: 68 */ "<heroname>! Il <color red<pilastro del sigillo\n>coloroff>dovrebbe essere sulla fronte dell'essere\noscuro.\n\n<0x10009:0x0e000013>Se lo riesci a conficcare ancor più a\nfondo con la tua spada, riuscirai a\nvincere!")
          			}
          		  case 1:
/*<155>*/ 			printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x0008170f><heroname>! Vai subito a\ncontrollare il <color red<pilastro del sigillo>coloroff>!\n\n\n<0x10009:0x00140b00>Non è normale che la terra tremi in\nquesto modo! Prima o poi l'essere\noscuro si risveglierà! Avvicinati\ncon cautela!")
          		}
          	}
          }

          void entrypoint_500_64() {
/*<265>*/ 	start()
/*<276>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
/*<282>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 281, 'param3': 40}
/*<281>*/ 	wait_frames(60)
/*<273>*/ 	set_camera(40, 0)
/*<289>*/ 	{'type': 'type3', 'subType': 2, 'param1': 18, 'param2': 356, 'next': 270, 'param3': 15}
/*<270>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 500, 'param3': 32}
/*<500>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 268, 'param3': 17}
/*<268>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 260, 'next': 271, 'param3': 15}
/*<271>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 269, 'param3': 32}
/*<269>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 270, 'next': 504, 'param3': 15}
/*<504>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 288, 'param3': 17}
/*<288>*/ 	set_camera(41, 0)
/*<275>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3585, 'param2': 256, 'next': 272, 'param3': 13}
/*<272>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1077, 'param2': 13824, 'next': 290, 'param3': 13}
/*<290>*/ 	set_camera(42, 0)
/*<274>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<286>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1082, 'param2': 15360, 'next': 267, 'param3': 13}
/*<267>*/ 	printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x04000030>Eh?! Che succede? La terra trema...?")
/*<291>*/ 	set_camera(24, 0)
/*<287>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1079, 'param2': 14592, 'next': 283, 'param3': 13}
/*<283>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x04000031>La terra sta tremando... si salvi\nchi può!")
/*<279>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*<278>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
/*<277>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<280>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 353, 'param3': 13}
/*<353>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3584, 'param2': 5632, 'next': 499, 'param3': 13}
/*<499>*/ 	set_camera(43, 0)
/*<266>*/ 	printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x0e000010><heroname>! Che stai facendo?!\nPresto, vai a controllare il <color red<pilastro del\nsigillo>coloroff>!")
/*<284>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x0e001653>Prima o poi l'essere oscuro si\nrisveglierà! Avvicinati con cautela!")
/*<292>*/ 	set_camera(44, 0)
/*<505>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 270, 'next': 285, 'param3': 15}
/*<285>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_30() {
/*< 82>*/ 	start()
/*< 83>*/ 	printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x0000000f>Il sigillo è in frantumi!\n\n\n\nDopo ti spiegherò tutto!\n\n\n\nPer il momento impediamogli di\nuscire da lì!\n\n\nNon dobbiamo assolutamente farlo\navvicinare al santuario!")
          }

          void entrypoint_500_48() {
/*<164>*/ 	start()
/*<552>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<551>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0010180f><heroname>! Devi al più presto\nsigillare quel mostro! Il suo potere è\naumentato rispetto all'ultima volta!\nFa' attenzione!\n")
          	  case 1:
/*<165>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<167>*/ 			printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x0010180d>Sai già come sigillare il mostro, no?\n\n\n\nRaggiungi il pilastro e colpiscilo con il\n<color red<potere celeste>coloroff>!<pause 30> Solo tu puoi farlo.")
          		  case 1:
/*<166>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0010180f><heroname>! Devi al più presto\nsigillare quel mostro! Il suo potere è\naumentato rispetto all'ultima volta!\nFa' attenzione!\n")
          		}
          	}
          }

          void entrypoint_500_65() {
/*<328>*/ 	start()
/*<330>*/ 	printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x00434553><0x10008:0x01cd>Che?! <pause 10>Guarda come vola!\n\n\n\n<0x10009:0x00424026>Forse ha intenzione di dirigersi\ndirettamente al santuario, ma io\nnon glielo permetterò di certo!\n<pause 8>Coraggio, facciamolo fuori!")
          }

          void entrypoint_500_13() {
/*<476>*/ 	start()
/*<491>*/ 	printf(/* textboxtype: 2, unk: 1, line: 123 */ "<0x10012:0x0000000b><heroname>, mio signore, Faih a\nrapporto.\nPrendo atto delle modifiche indotte dal\npotere celeste.")
/*<495>*/ 	printf(/* textboxtype: 2, unk: 1, line: 124 */ "<0x10012:0x00000002>Mio signore, nella zona rilevo un'aura\ndel tutto simile a quella del vostro\nmanto magico. Presumo si tratti di\nZelda.\n<0x10012:0x00000002>Mio signore, posso guidarvi nella giusta\ndirezione con il <sound 4><color red<rilevatore>coloroff>. Volete che\nvi spieghi di cosa si tratta?\n[1-]Sì[2]No")
/*<569>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<492>*/ 	switch (choice(2)) {
          	  case 0:
/*<493>*/ 		printf(/* textboxtype: 2, unk: 1, line: 125 */ "<0x10012:0x00000005>Certamente, signore.\n\n\n\nCon il rilevatore potete individuare\nl'aura degli oggetti che cercate,\ngrazie alla punta della vostra spada.\n\nPiù vi avvicinerete e <color red<più intensamente\nreagirà >coloroff>il rilevatore emettendo suoni e\nvibrazioni.\n\nInoltre, un <color red<cursore >coloroff>indicherà l'esatta\nposizione di ciò che cercate.")
          		flw_570:
/*<570>*/ 		open_dowsing_wheel(0)
/*<496>*/ 		printf(/* textboxtype: 2, unk: 1, line: 126 */ "È sufficiente che impostiate Zelda\ncome obiettivo tenendo premuto (C),\ne puntiate la spada nella direzione in\ncui desiderate cercare.<0x10011:0x06cd>")
/*<565>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          	  case 1:
/*<494>*/ 		printf(/* textboxtype: 2, unk: 1, line: 127 */ "Certamente, mio signore.")
          		goto flw_570
          	}
          }

          void entrypoint_500_31() {
/*<143>*/ 	start()
/*<544>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<546>*/ 		{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 545, 'param3': 13}
/*<545>*/ 		printf(/* textboxtype: 1, unk: 0, line: 68 */ "<heroname>! Il <color red<pilastro del sigillo\n>coloroff>dovrebbe essere sulla fronte dell'essere\noscuro.\n\n<0x10009:0x0e000013>Se lo riesci a conficcare ancor più a\nfondo con la tua spada, riuscirai a\nvincere!")
          	  case 1:
/*<145>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<146>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<148>*/ 				printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0010160d>Ora, <heroname>!<pause 30>\n\n\n\nColpisci il pilastro con il <color red<potere celeste>coloroff>!\n\n\n\n<0x10009:0x00111700>Sbrigati!")
          			  case 1:
/*<373>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 147, 'param3': 13}
/*<147>*/ 				printf(/* textboxtype: 1, unk: 0, line: 68 */ "<heroname>! Il <color red<pilastro del sigillo\n>coloroff>dovrebbe essere sulla fronte dell'essere\noscuro.\n\n<0x10009:0x0e000013>Se lo riesci a conficcare ancor più a\nfondo con la tua spada, riuscirai a\nvincere!")
          			}
          		  case 1:
/*<144>*/ 			printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x0008170f><heroname>! Vai subito a\ncontrollare il <color red<pilastro del sigillo>coloroff>!\n\n\n<0x10009:0x00140b00>Non è normale che la terra tremi in\nquesto modo! Prima o poi l'essere\noscuro si risveglierà! Avvicinati\ncon cautela!")
          		}
          	}
          }

          void entrypoint_500_49() {
/*<168>*/ 	start()
/*<549>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<550>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0010180f><heroname>! Devi al più presto\nsigillare quel mostro! Il suo potere è\naumentato rispetto all'ultima volta!\nFa' attenzione!\n")
          	  case 1:
/*<169>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<171>*/ 			printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x0010180d>Sai già come sigillare il mostro, no?\n\n\n\nRaggiungi il pilastro e colpiscilo con il\n<color red<potere celeste>coloroff>!<pause 30> Solo tu puoi farlo.")
          		  case 1:
/*<170>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0010180f><heroname>! Devi al più presto\nsigillare quel mostro! Il suo potere è\naumentato rispetto all'ultima volta!\nFa' attenzione!\n")
          		}
          	}
          }

          void entrypoint_500_66() {
/*<329>*/ 	start()
/*<331>*/ 	printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00414043>Accidenti! Guarda lì!\nChe magnifica macchina che ho\ncostruito! Le mie bombe hanno\ndavvero messo K.O. quel mostro!\nPerò ora tocca a te finirlo e dargli\nil colpo di grazia!\nFai presto!")
          }

          void entrypoint_500_14() {
/*<440>*/ 	start()
/*<441>*/ 	printf(/* textboxtype: 2, unk: 0, line: 19 */ "<0x10012:0x0000000b>Mio signore, Faih a rapporto.\n\n\n\nMentre <color green<inquadrate >coloroff>qualcosa premendo\n(Z), sarò lieta di darvi ogni\ninformazione disponibile sul\nvostro bersaglio.<0x10011:0x07cd>\nPremete (Z) <color red<per inquadrare <color 24<il bersaglio\ne poi <color red<>coloroff>(v) per chiamarmi.<0x10011:0x07cd><0x10011:0x09cd>")
          }

          void entrypoint_500_32() {
/*< 25>*/ 	start()
/*<542>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<543>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00000031>Ahhh!!!")
          	  case 1:
/*<149>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<150>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<151>*/ 				printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00000030>Dunque, dunque... devi fare come ha\ndetto la vecchietta...\n\n\nColpisci il pilastro con il potere della\ntua spada!")
          			  case 1:
/*<153>*/ 				printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00000031>Ahhh!!!")
          			}
          		  case 1:
/*<152>*/ 			printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x00000015>Eh?! Che succede? La terra trema...?\n\n\n\nLa terra sta tremando... incredibile!")
          		}
          	}
          }

          void entrypoint_500_67() {
/*<332>*/ 	start()
/*<333>*/ 	printf(/* textboxtype: 1, unk: 2, line: 71 */ "<0x10009:0x00000026>Ehi! <heroname>! La catapulta\nè pronta!\n\n\nQuando ti serve, premi (^) per\navvertirmi! <0x10011:0x08cd>")
          }

          void entrypoint_500_33() {
/*< 47>*/ 	start()
/*<313>*/ 	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
          	  case 0:
/*<325>*/ 		switch (scene_flags[106 /* 0xC 04 */]) {
          		  case 0:
/*<314>*/ 			printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00040202>Ti farò vedere <heroname>...<pause 30>\n... che anch'io, a mio modo, riuscirò\nad aiutare Zelda.")
          		  case 1:
/*<326>*/ 			printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00000002>Eh... <heroname>?\nCi ho pensato bene...\n\n\nCome dice la vegliarda, anche io\neccello in alcune cose, sebbene non\nsia in grado di combattere come fai tu.\n\n<0x10009:0x00404200>Adesso so come posso aiutare Zelda.\nAspetta e vedrai!")
/*<327>*/ 			scene_flags[10 'Sealed Grounds'][106 /* 0xC 04 */] = true;
          		}
          	  case 1:
/*<315>*/ 		switch (scene_flags[105 /* 0xC 02 */]) {
          		  case 0:
/*<316>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x0000002d>Uh... <pause 30>uha...!<pause 30>\nAllora, sono proprio un<pause 30>.<pause 30>.<pause 30>. buono\na nulla...")
          		  case 1:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x0000003d><0x10008:0x01cd>Ohhh!!\n\n\n\n<0x10009:0x00003a00><0x10008:0x01cd><0x10008:0x01cd>Non ci sono riuscito!\n\n\n\n<0x10009:0x00004000><0x10008:0x01cd><0x10008:0x02cd>Non sono riuscito a fare\nniente!")
/*<317>*/ 			scene_flags[10 'Sealed Grounds'][105 /* 0xC 02 */] = true;
          		}
          	}
          }

          void entrypoint_500_50() {
/*<172>*/ 	start()
/*<559>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<560>*/ 		printf(/* textboxtype: 2, unk: 0, line: 45 */ "<0x10012:0x00000001>Il vostro compito è di sigillare quella\ncreatura per sempre. Non potrete\nlasciare questo luogo fino a quando non\nlo avrete fatto.")
          	  case 1:
/*<173>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<174>*/ 			printf(/* textboxtype: 2, unk: 0, line: 46 */ "<0x10012:0x0000000b>Mio signore, Faih a rapporto.\n<0x10012:0x00000002>Dovete immediatamente neutralizzare\ndi nuovo l'essere oscuro. Non potete\nlasciare questo luogo!")
          		  case 1:
/*<175>*/ 			printf(/* textboxtype: 2, unk: 0, line: 45 */ "<0x10012:0x00000001>Il vostro compito è di sigillare quella\ncreatura per sempre. Non potrete\nlasciare questo luogo fino a quando non\nlo avrete fatto.")
          		}
          	}
          }

          void entrypoint_500_68() {
/*<378>*/ 	start()
/*<488>*/ 	wait_frames(30)
/*<489>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 407, 'param3': 47}
/*<407>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 400, 'param3': 32}
/*<400>*/ 	set_camera(55, 0)
/*<487>*/ 	{'type': 'type3', 'subType': 2, 'param1': 29, 'param2': 356, 'next': 396, 'param3': 15}
/*<396>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 260, 'next': 486, 'param3': 15}
/*<486>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 490, 'param3': 17}
/*<490>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 398, 'param3': 48}
/*<398>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1042, 'param2': 4352, 'next': 397, 'param3': 13}
/*<397>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 4, 'next': 399, 'param3': 14}
/*<399>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 523, 'param3': 16}
/*<523>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<387>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<388>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1086, 'param2': 16447, 'next': 386, 'param3': 13}
/*<386>*/ 	printf(/* textboxtype: 1, unk: 1, line: 95 */ "Ehi, <heroname>!\nA quanto pare l'essere oscuro\nsi sta risvegliando di nuovo!")
/*<389>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1089, 'param2': 16384, 'next': 391, 'param3': 13}
/*<391>*/ 	printf(/* textboxtype: 1, unk: 1, line: 96 */ "Mi vado a preparare.\nAspetta un attimo!")
/*<390>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 772, 'next': 421, 'param3': 14}
/*<421>*/ 	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
/*<414>*/ 	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
/*<417>*/ 	changeScene(16, 0) // 
          }

          void entrypoint_500_34() {
/*< 97>*/ 	start()
/*< 98>*/ 	printf(/* textboxtype: 1, unk: 2, line: 93 */ "<0x10009:0x00000026>La foresta di Firone è vicina!<0x10005:0x000a0000>")
/*< 99>*/ 	printf(/* textboxtype: 1, unk: 2, line: 94 */ "Buon viaggio!<0x10005:0x001e0000>")
          }

          void entrypoint_500_51() {
/*<176>*/ 	start()
/*<557>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<558>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x0010180f><heroname>! Devi al più presto\nsigillare quel mostro!\n\n\nIl suo potere sta aumentando\nsempre di più!\nFa' attenzione!")
          	  case 1:
/*<177>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<179>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x0010180d>Dev'essere una creatura estremamente\npotente se è riuscita a infrangere il\nsigillo ancora una volta!\n\nSai già come ripristinarlo, vero?\nSolo tu puoi farcela!")
          		  case 1:
/*<178>*/ 			printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x0010180f><heroname>! Devi al più presto\nsigillare quel mostro!\n\n\nIl suo potere sta aumentando\nsempre di più!\nFa' attenzione!")
          		}
          	}
          }

          void entrypoint_500_69() {
/*<409>*/ 	start()
/*<410>*/ 	printf(/* textboxtype: 1, unk: 2, line: 74 */ "Ottimo! Ora tocca a me!")
/*<411>*/ 	printf(/* textboxtype: 1, unk: 2, line: 75 */ "Sposta la catapulta con (ControlStick) e mira con il\n<color red<telecomando>coloroff>...\n\n\nPoi lancia una bomba con (A).\nL'occasione migliore è quando il\nmostro smette di avanzare!")
/*<412>*/ 	printf(/* textboxtype: 1, unk: 2, line: 76 */ "Se ti dimentichi i comandi per\nutilizzare la <color blue<catapulta>coloroff>, premi (2)\nmentre la stai usando per ripassarli!<0x10011:0x05cd>")
          }

          void entrypoint_500_17() {
/*<473>*/ 	start()
/*< 19>*/ 	set_camera(16, 0)
/*<102>*/ 	{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3330, 'next': 17, 'param3': 13}
/*< 17>*/ 	printf(/* textboxtype: 1, unk: 0, line: 20 */ "Quindi, <heroname>...\n\n\n\nSe devo credere a quello che dici, la\nvegliarda del <color red<santuario>coloroff> in fondo alla\nstrada saprebbe tutto degli spostamenti\ndi <color blue<Zelda>coloroff>?!")
/*< 20>*/ 	set_camera(17, 0)
/*<104>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "Ma che bella notizia!\n\n\n\nGrazie davvero, <heroname>!\nOra puoi anche togliere il disturbo!\n\n\n<0x10009:0x000d0b41>Ora a cercare <color blue<Zelda >coloroff>ci pensa\nil magnifico <color blue<Bado>coloroff>!")
/*<103>*/ 	{'type': 'type3', 'subType': 4, 'param1': 24, 'param2': 5632, 'next': 18, 'param3': 13}
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "Penserò io ad aiutare <color blue<Zelda >coloroff>e poi \ntorneremo a casa insieme...<pause 30>")
/*<106>*/ 	set_camera(18, 0)
/*<107>*/ 	printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x0000000c>Durante il viaggio la convincerò a\nsposarmi e vivremo felici per\nl'eternità.")
/*<108>*/ 	set_camera(19, 0)
/*<112>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 512, 'next': 113, 'param3': 13}
/*<113>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x0000000d>Dunque, non c'è più nessun bisogno che\ntu ti occupi di questa storia!")
/*<109>*/ 	wait_frames(30)
/*<105>*/ 	printf(/* textboxtype: 1, unk: 0, line: 25 */ "Bene, allora... vado subito a cercare\nla vegliarda.")
/*< 21>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 1024, 'next': 22, 'param3': 14}
/*< 22>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10008:0x01cd>Mi raccomando a te!<pause 45>\n<0x10008:0xffcd><heroname>!!!")
/*<110>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 256, 'next': 111, 'param3': 15}
/*<111>*/ 	set_camera(20, 0)
/*<114>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_35() {
/*< 54>*/ 	start()
/*<360>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 53, 'param3': 13}
/*< 53>*/ 	printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x0e000054><0x10006:0x01cd>Aaghh!<pause 15>\n<color red<<0x10006:0x00cd>Questa <pause 10><0x10006:0xfecd>è la fine...>coloroff><0x10005:0x00280000>")
          }

          void entrypoint_500_52() {
/*<180>*/ 	start()
/*<555>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<556>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x0010180f><heroname>! Devi al più presto\nsigillare quel mostro!\n\n\nIl suo potere sta aumentando\nsempre di più!\nFa' attenzione!")
          	  case 1:
/*<181>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<183>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x0010180d>Dev'essere una creatura estremamente\npotente se è riuscita a infrangere il\nsigillo ancora una volta!\n\nSai già come ripristinarlo, vero?\nSolo tu puoi farcela!")
          		  case 1:
/*<182>*/ 			printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x0010180f><heroname>! Devi al più presto\nsigillare quel mostro!\n\n\nIl suo potere sta aumentando\nsempre di più!\nFa' attenzione!")
          		}
          	}
          }

          void entrypoint_500_18() {
/*<519>*/ 	start()
/*< 66>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 116, 'param3': 40}
/*<116>*/ 	wait_frames(60)
/*< 44>*/ 	set_camera(21, 0)
/*<467>*/ 	{'type': 'type3', 'subType': 2, 'param1': 28, 'param2': 356, 'next': 30, 'param3': 15}
/*< 30>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 28, 'param3': 32}
/*< 28>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 260, 'next': 31, 'param3': 15}
/*< 31>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 29, 'param3': 32}
/*< 29>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 270, 'next': 120, 'param3': 15}
/*<120>*/ 	set_camera(25, 0)
/*< 33>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 34, 'param3': 17}
/*< 34>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1077, 'param2': 13824, 'next': 32, 'param3': 13}
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 470, 'param3': 17}
/*<470>*/ 	wait_frames(30)
/*<469>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<518>*/ 	set_camera(26, 0)
/*<129>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1082, 'param2': 15381, 'next': 472, 'param3': 13}
/*<472>*/ 	wait_frames(15)
/*<471>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3605, 'param2': 2319, 'next': 24, 'param3': 13}
/*< 24>*/ 	printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x04000030>Eh?! Che succede? La terra trema...?")
/*<121>*/ 	wait_frames(30)
/*<130>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1079, 'param2': 14592, 'next': 468, 'param3': 13}
/*<468>*/ 	wait_frames(15)
/*<119>*/ 	set_camera(24, 0)
/*<118>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x04000031>La terra sta tremando... si salvi\nchi può!")
/*< 45>*/ 	set_camera(27, 0)
/*< 71>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*< 68>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
/*< 67>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<115>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 125, 'param3': 13}
/*<125>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 14, 'next': 128, 'param3': 17}
/*<128>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 23, 'param3': 13}
/*< 23>*/ 	printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x0e000010><heroname>! Che stai facendo?!\nPresto, vai a controllare il <color red<pilastro del\nsigillo>coloroff>!")
/*<123>*/ 	{'type': 'type3', 'subType': 2, 'param1': 28, 'param2': 356, 'next': 122, 'param3': 15}
/*<122>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x0e001653>Prima o poi l'essere oscuro si\nrisveglierà! Avvicinati con cautela!")
/*<126>*/ 	wait_frames(15)
/*<124>*/ 	set_camera(28, 0)
/*<264>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 270, 'next': 366, 'param3': 15}
/*<366>*/ 	scene_flags[10 'Sealed Grounds'][107 /* 0xC 08 */] = true;
/*<127>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00424300>Che ne dici della potenza\ndella mia catapulta?\nNon la trovi micidiale?\n\n<0x10009:0x003e4000>Ci vuole un po’ per caricarla ogni volta,\nma quando è pronta a fare\nfuoco te lo faccio sapere.")
          }

          void entrypoint_500_36() {
/*< 63>*/ 	start()
/*< 64>*/ 	printf(/* textboxtype: 2, unk: 0, line: 10 */ "Quella creatura potrebbe avere delle\ninformazioni sul mostro che ci ha\nattaccato. Consiglierei di intervenire.")
          }

          void entrypoint_500_53() {
/*<184>*/ 	start()
/*<185>*/ 	printf(/* textboxtype: 1, unk: 2, line: 70 */ "<0x10009:0x00000026>Ehi! <heroname>! La catapulta\nè pronta!\n\n\nQuell'essere potrebbe provare ad\narrampicarsi... Se lo fa, non ci resta\nche usare la catapulta per\nimpedirglielo!\nQuando è il momento, premi (^)\nper chiamarmi!<0x10011:0x08cd>")
          }

          void entrypoint_500_70() {
/*<431>*/ 	start()
/*<432>*/ 	printf(/* textboxtype: 2, unk: 0, line: 16 */ "<0x10012:0x00000001>Mio signore... Permettetemi di\ninsegnarvi come usare il <color blue<manto\nmagico>coloroff>. È assolutamente\nindispensabile per gli atterraggi.\n<0x10012:0x00000002>Al prossimo atterraggio, mio signore,\nprovate a premere (B) per aprirlo!<0x10011:0x01cd>\n")
          }

