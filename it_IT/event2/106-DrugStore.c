          void entrypoint_106_34() {
/*< 22>*/ 	start()
/*< 51>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 21, 'param3': 12}
/*< 21>*/ 	check_item_flag(153, 1)
/*< 20>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 12}) {
          	  case 0:
/*< 26>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000001>Questo liquido dalle proprietà magiche\nsi chiama <color yellow<olio rigenerante>coloroff>!\n\n\nApplicandolo su uno scudo rotto se ne\notterrà una completa riparazione.\n\n\nInoltre, la vitalità viene ripristinata di\n<color red<4>coloroff> cuori! È un vero toccasana! Dovresti\naverlo sempre con te, in viaggio.\nCosta <color red<30 rupie>coloroff>. Che ne dici?\n[1-]Lo compro[2]Non\nmi serve")
          		flw_11:
/*< 11>*/ 		switch (choice(2)) {
          		  case 0:
/*< 13>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 26}
          		  case 1:
/*< 12>*/ 			entrypoint_106_08();
          		}
          	  case 1:
/*< 29>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00090702>Buona giornata a te!\n\n\n\n<0x10009:0x000c0b00>Oh... mi spiace, ma non hai alcuna\nampolla. Senza quelle non posso\nvenderti niente.\n\n<0x10009:0x000d0700>Se ti interessa sapere come essere\nservito in questa bottega, non devi fare\naltro che rivolgermi la parola!")
          	}
          }

          void entrypoint_106_51() {
/*< 65>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00070704>C‐c‐certo. Darò un tocco in più a\nquesta pozione. Va bene?\n[1-]Certo![2]Forse no...")
/*< 70>*/ 	switch (choice(2)) {
          	  case 0:
/*<110>*/ 		make_actor_do_something(3, 0)
/*< 68>*/ 		printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x00070700>Non c'è problema. Dammi solo un\nmomento...")
/*< 99>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 71, 'param3': 12}
/*< 71>*/ 		make_actor_do_something(1, 0)
/*< 72>*/ 		printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00070708>Ecco fatto! Ci siamo!")
/*< 89>*/ 		zone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 73>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000a0a06>Capisco... c'è qualcos'altro in cui\nposso aiutarti?")
/*<100>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 78, 'param3': 12}
/*< 78>*/ 		make_actor_do_something(0, 0)
          	}
          }

          void entrypoint_106_35() {
/*< 55>*/ 	start()
/*< 56>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 54, 'param3': 12}
/*< 54>*/ 	check_item_flag(153, 1)
/*< 53>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 18}) {
          	  case 0:
/*< 57>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x0000000b>Quella è l'<color yellow<invincibilina>coloroff>.\nSi tratta di una pozione capace di\nridurre i danni subiti per un certo\nlasso di tempo.\nÈ la pozione ottimale da bere prima\ndi una battaglia impegnativa.\n\n\nMa è molto cara, non posso negarlo:\nsono <color red<200 rupie>coloroff>. La vuoi?\n[1-]La compro[2]Non\nmi serve")
          		goto flw_11
          	  case 1:
/*< 58>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00090702>Buona giornata a te!\n\n\n\n<0x10009:0x000c0b00>Oh... mi spiace, ma non hai alcuna\nampolla. Senza quelle non posso\nvenderti niente.\n\n<0x10009:0x000d0700>Se ti interessa sapere come essere\nservito in questa bottega, non devi fare\naltro che rivolgermi la parola!")
          	}
          }

          void entrypoint_106_52() {
/*< 74>*/ 	start()
/*< 90>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 91>*/ 		printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00090908>Grazie mille!\nGrazie tante davvero!\nTi prego, torna a trovarci!")
          	  case 1:
/*< 75>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x000a0a06>Capisco. Hai cambiato idea, eh?\nBeh, spero di rivederti presto.")
          	}
          }

          void entrypoint_106_01() {
          	start()
/*< 40>*/ 	switch (story_flags[35 /* us: 805A9ADD 0x08, jp: 805ACD5D 0x08 */]) {
          	  case 0:
/*<126>*/ 		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          		  case 0:
/*<127>*/ 			switch (story_flags[1075 /* us: 805A9B50 0x02, jp: 805ACDD0 0x02 */]) {
          			  case 0:
          				flw_105:
/*<105>*/ 				switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          				  case 0:
/*<109>*/ 					switch (scene_flags[85 /* 0xB 20 */]) {
          					  case 0:
          						flw_6:
/*<  6>*/ 						switch (zone_temp_flags[2 /* 0x1 04 */]) {
          						  case 0:
/*<  5>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x0000000b>Mmm? Che c'è?\n[1-]Spiegami[2]Niente")
          							flw_2:
/*<  2>*/ 							switch (choice(2)) {
          							  case 0:
/*<  4>*/ 								printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000004>Non c'è problema, giovincello!\nMettiti di fronte alla pozione che\nvuoi e premi (A).\n\nIo te ne spiegherò gli effetti.\nI prodotti che vedi qui sono quelli\npiù semplici. Se cerchi qualcosa di più\npotente...\n<0x10009:0x000d0700>Compra una delle mie pozioni e portala\na mio marito, qui accanto.\nLui saprà come aiutarti.\n\n<0x10009:0x000c0000>Sì, lo so, non sembra molto sveglio, ma\nè davvero bravo e poi... sa persino\ncambiare i pannolini!")
          								flw_7:
/*<  7>*/ 								zone_temp_flags[2 /* 0x1 04 */] = true;
          							  case 1:
/*<  3>*/ 								printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x000c0b0e>Ehi! Screanzato!\nGuarda che anch'io ho da fare, eh!\nMa sembri un ragazzo perbene, quindi\nsei perdonato.\n<0x10009:0x000d0000>Se cerchi qualcosa di meglio, vai a\nparlare con mio marito. Lui sa come\nmescolare e potenziare le pozioni\nnormali.")
          								goto flw_7
          							}
          						  case 1:
/*<  1>*/ 							printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Benvenuto, ragazzo!\n\n\n\nQuesta è la bottega delle pozioni!\nLe mie bevande potrebbero risultarti\nmolto utili quando sarai nei guai.\n\nNe vuoi sapere di più?\n[1-]Sì[2]No")
          							goto flw_2
          						}
          					  case 1:
/*<107>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 106, 'param3': 31}
/*<106>*/ 						printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00000001>Ehi! Ho una bella novità!\nLa pozione che stavo distillando\nè pronta finalmente!\n\nL'ho chiamata <color yellow<pozione levafatica>coloroff>!\n\n\n\nQuando bevi questa pozione,\nper un certo periodo di tempo\nil tuo <color blue<vigore>coloroff> si consumerà\npiù lentamente.\nSì, è vero, il prezzo è alto,\nma la qualità si paga!\n\n\nPer averne un po', mettiti di\nfronte al recipiente\ne chiamami!")
/*<108>*/ 						scene_flags[0 'Skyloft'][85 /* 0xB 20 */] = true;
/*<131>*/ 						zone_temp_flags[2 /* 0x1 04 */] = true;
          					}
          				  case 1:
          					goto flw_6
          				}
          			  case 1:
/*<128>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 31}
/*<129>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000001>Ehi! Guarda qua!\nHo preparato una nuova pozione!\n\n\nL'ho chiamata <color yellow<ossigeno liquido>coloroff>!\n\n\n\nBevendo questa pozione, per un\ncerto periodo di tempo la <color blue<quantità\ndi ossigeno>coloroff> a tua disposizione\nsi ridurrà più lentamente.\nNon è fantastica?\nE non è nemmeno troppo cara!\nTi consiglio di comprarla subito!\n\nCome al solito, se vuoi comprare la\npozione devi metterti di fronte al\nrecipiente e parlare con me!")
/*<130>*/ 				story_flags[1075 /* us: 805A9B50 0x02, jp: 805ACDD0 0x02 */] = true;
/*<132>*/ 				zone_temp_flags[2 /* 0x1 04 */] = true;
          			}
          		  case 1:
          			goto flw_105
          		}
          	  case 1:
/*< 52>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 39, 'param3': 31}
/*< 39>*/ 		printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00000002>Ehi tu! Bel fanciullo!\n\n\n\nQuesta è la bottega delle pozioni!\nSono ottime quando sei ferito\ne devi rimetterti in sesto.\n\n<0x10009:0x000d0700>Sei uno dei cavalieri, vero?\nOppure sei in addestramento?\n\n\nBeh, lascia che ti dica una cosa: le\nmie pozioni prima o poi ti\nserviranno, quindi fatti furbo\ne comprane un bel po'!")
/*< 42>*/ 		printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x000c0b06>Mmmh<0x10006:0xfccd>...?<0x10006:0x00cd>\n\n\n\nCe l'hai un'ampolla?\n\n\n\nQui non vendiamo ampolle, quindi\nposso venderti una pozione solo se\nne hai una in cui metterla.\n\n<0x10009:0x0009090b>Ma siccome sei un caro ragazzo,\noggi la casa ti offre un'ampolla\nin omaggio!\n\n<0x10009:0x00070700>Ovviamente dentro ci potrai\nmettere anche altre cose oltre\nalle pozioni. Perciò è un oggetto\nutilissimo per ogni avventuriero!")
/*< 45>*/ 		check_item_flag(112, 1)
/*< 46>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 16}) {
          		  case 0:
/*< 59>*/ 			switch (is_adventure_pouch_full()) {
          			  case 0:
/*< 60>*/ 				printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x000c0b08>Oh cielo, la tua borsa è stracolma!\nTi piace fare acquisti, eh?\n\n\n<0x10009:0x000a0a00>Perché non lasci qualcosa\nal deposito. Così non devi\nsempre portarti tutto dietro!")
          			  case 1:
/*< 44>*/ 				give_item(153 0x99);
/*< 41>*/ 				story_flags[35 /* us: 805A9ADD 0x08, jp: 805ACD5D 0x08 */] = true;
/*< 96>*/ 				switch (scene_flags[89 /* 0xA 02 */]) {
          				  case 0:
/*< 43>*/ 					printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x000d070b>Le ampolle vanno messe nella borsa\ndell'avventuriero. Premi (-) per\ndarci un'occhiata.<0x10011:0x02cd>")
/*<114>*/ 					printf(/* textboxtype: 1, unk: 0, line: 8 */ "Se poi hai troppi oggetti e la borsa\ndell'avventuriero è piena, vai al\ndeposito, lì sapranno come aiutarti.\n\n<0x10009:0x000c070b>Allora, che cosa desideri comprare?")
          					goto flw_7
          				  case 1:
/*< 97>*/ 					printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x000d070b>Le ampolle vuote vanno nella borsa\ndell'avventuriero. Premi <color green<(-) >coloroff>per\ndarle un'occhiata. <0x10011:0x02cd>\n\nTieni premuto (-), punta il\ntelecomando Wii verso lo schermo e\n<color green<muovilo compiendo un cerchio>coloroff> per\nscegliere l'oggetto che vuoi usare.<0x10011:0x02cd>\n<color green<Rilascia>coloroff> (-) per selezionare\ne usare quell'oggetto.<0x10011:0x02cd>")
/*<115>*/ 					printf(/* textboxtype: 1, unk: 0, line: 8 */ "Se poi hai troppi oggetti e la borsa\ndell'avventuriero è piena, vai al\ndeposito, lì sapranno come aiutarti.\n\n<0x10009:0x000c070b>Allora, che cosa desideri comprare?")
/*< 98>*/ 					story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
/*<111>*/ 					scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
          				}
          			}
          		  case 1:
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "")
          		}
          	}
          }

          void entrypoint_106_53() {
/*< 79>*/ 	start()
/*<112>*/ 	switch (context_related2(0)) {
          	  case 0:
/*< 81>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "Se vuoi migliorare altre pozioni\nportamele senza problemi!")
/*< 80>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<113>*/ 		printf(/* textboxtype: 1, unk: 0, line: 40 */ "Questa pozione è già ottima e\nnon può essere migliorata.\nSe sei interessato ad altre pozioni,\nti prego di parlare con mia moglie.")
          	}
          }

          void entrypoint_106_70() {
/*<133>*/ 	start()
/*<136>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 134, 'param3': 12}
/*<134>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x0000000a>Oh no...\nPer poter miscelare mancano ancora\nle <color yellow<cavallerbe>coloroff>...\n\nSecondo il mio libro segreto,\nle <color yellow<cavallerbe >coloroff>vivono in territori\ndove c'è molto verde...")
          	flw_137:
/*<137>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00070000>M-mi dispiace...\nProviamo con un'altra pozione?")
/*<135>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_54() {
/*< 82>*/ 	start()
/*<101>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 84, 'param3': 12}
/*< 84>*/ 	printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x0000000a>Non hai abbastanza ingredienti\nda aggiungere a questa pozione...\n\n\nMi spiace... Scegli qualcos'altro\nper favore.")
/*< 87>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_71() {
/*<138>*/ 	start()
/*<140>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 139, 'param3': 12}
/*<139>*/ 	printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x0000000a>Oh no...\nPer poter miscelare mancano ancora\ni <color yellow<fironeotteri>coloroff>...\n\nSecondo il mio libro segreto,\ni <color yellow<fironeotteri >coloroff>vivono in territori\ndove c'è molto verde o sugli alberi...")
          	goto flw_137
          }

          void entrypoint_106_55() {
/*< 83>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x0000000a>Oh... caro... mi rincresce doverti far\nnotare che... a quanto pare non\ndisponi di rupie a sufficienza...")
/*<102>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 86, 'param3': 12}
/*< 86>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_72() {
/*<141>*/ 	start()
/*<143>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 12}
/*<142>*/ 	printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x0000000a>Oh no...\nPer poter miscelare mancano ancora\nle <color yellow<dekuapi>coloroff>...\n\nSecondo il mio libro segreto,\nle <color yellow<<color yellow<dekuapi <color yellow<>coloroff>vivono in territori\ndove c'è molto verde e costruiscono\ni loro alveari sugli alberi...")
          	goto flw_137
          }

          void entrypoint_106_56() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x0000000a>Oh no... non hai nessuna pozione\nda potenziare.\n\n\n<0x10009:0x00090900>Se vuoi, puoi parlare con mia\nmoglie qui accanto: lei vende\npozioni...")
          }

          void entrypoint_106_73() {
/*<144>*/ 	start()
/*<146>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 145, 'param3': 12}
/*<145>*/ 	printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x0000000a>Oh no...\nPer poter miscelare mancano ancora\nle <color yellow<cielontidi>coloroff>...\n\nLe <color yellow<cielontidi >coloroff>sono particolarmente\nnumerose qui a Oltrenuvola...")
          	goto flw_137
          }

          void entrypoint_106_05() {
/*< 30>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x000a0a08>Ma non hai nemmeno un'<color red<ampolla>coloroff>...\nTorna quando ne avrai una!")
          }

          void entrypoint_106_74() {
/*<147>*/ 	start()
/*<150>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 148, 'param3': 12}
/*<148>*/ 	printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x0000000a>Oh no...\nPer poter miscelare mancano ancora\nle <color yellow<fuococcinelle>coloroff>...\n\nSecondo il mio libro segreto,\nle <color yellow<fuococcinelle >coloroff>vivono in territori\ndi montagne e fiamme...")
          	flw_151:
/*<151>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00070000>M-mi dispiace...\nProviamo con un'altra pozione?")
/*<149>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_06() {
/*< 31>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x000c0b08>Oh cielo! Non hai abbastanza soldi!\nSei un ragazzo tanto caro, ma io devo\nmandare avanti la bottega e non sono\ntua madre!\n<0x10009:0x000a0a00>Torna quando avrai qualcosa in tasca.")
          }

          void entrypoint_106_75() {
/*<152>*/ 	start()
/*<154>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 153, 'param3': 12}
/*<153>*/ 	printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x0000000a>Oh no...\nPer poter miscelare mancano ancora\nle <color yellow<lepidee>coloroff>...\n\nLe <color yellow<lepidee >coloroff>sono piuttosto\nnumerose qui a Oltrenuvola...")
          	goto flw_151
          }

          void entrypoint_106_07() {
/*< 32>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x0009090a>Grazie mille.\nSe vuoi potenziare una pozione,\nparla con mio marito qui accanto.\nLui sa come aiutarti.")
          }

          void entrypoint_106_76() {
/*<155>*/ 	start()
/*<157>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 156, 'param3': 12}
/*<156>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x0000000a>Oh no...\nPer poter miscelare mancano ancora\nle <color yellow<sabbiormiche>coloroff>...\n\nSecondo il mio libro segreto,\nle <color yellow<sabbiormiche >coloroff>vivono in grandi\nfamiglie, in territori sabbiosi...")
          	goto flw_151
          }

          void entrypoint_106_08() {
/*< 33>*/ 	start()
/*< 77>*/ 	switch (random(2)) {
          	  case 0:
/*< 76>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x000a0a0e>Umpf! Qui non abbiamo\nbisogno di perditempo.")
          	  case 1:
/*< 37>*/ 		printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x000c0b10>Non la vuoi più?\nLo so che le mie pozioni hanno uno\nstrano odore, ma non si può dire\nche non siano efficaci!")
          	}
          }

          void entrypoint_106_77() {
/*<158>*/ 	start()
/*<160>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 159, 'param3': 12}
/*<159>*/ 	printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x0000000a>Oh no...\nPer poter miscelare mancano ancora\nle <color yellow<sabbicale>coloroff>...\n\nSecondo il mio libro segreto,\nle <color yellow<sabbicale >coloroff>vivono da qualche parte,\nin territori sabbiosi...")
          	goto flw_151
          }

          void entrypoint_106_78() {
/*<161>*/ 	start()
/*<164>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 162, 'param3': 12}
/*<162>*/ 	printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x0000000a>Oh no...\nPer poter miscelare mancano ancora\nle <color yellow<sabbellule>coloroff>...\n\nSecondo il mio libro segreto,\nle <color yellow<sabbellule>coloroff><color yellow< >coloroff>vivono tra i cespugli,\nin territori sabbiosi...")
          	flw_165:
/*<165>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00070000>M-mi dispiace...\nProviamo con un'altra pozione?")
/*<163>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_106_79() {
/*<166>*/ 	start()
/*<168>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 167, 'param3': 12}
/*<167>*/ 	printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x0000000a>Oh no...\nPer poter miscelare mancano ancora\ni <color yellow<magmorari>coloroff>...\n\nSecondo il mio libro segreto,\ni <color yellow<magmorari>coloroff><color yellow< >coloroff>vivono in territori\ndi montagne e fiamme...")
          	goto flw_165
          }

          void entrypoint_106_80() {
/*<169>*/ 	start()
/*<171>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 170, 'param3': 12}
/*<170>*/ 	printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x0000000a>Oh no...\nPer poter miscelare mancano ancora\ngli <color yellow<azzurrotteri>coloroff>...\n\nGli <color yellow<azzurrotteri>coloroff><color yellow< >coloroff>sono insetti piuttosto\nfamosi qui a Oltrenuvola...")
          	goto flw_165
          }

          void entrypoint_106_81() {
/*<172>*/ 	start()
/*<174>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 173, 'param3': 12}
/*<173>*/ 	printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x0000000a>Oh no...\nPer poter miscelare mancano ancora\nle <color yellow<cielucciole>coloroff>...\n\nLe <color yellow<cielucciole >coloroff>sono insetti preziosi che\nsi incontrano qui a Oltrenuvola, ma\nsolo la notte...")
          	goto flw_165
          }

          void entrypoint_106_31() {
/*< 10>*/ 	start()
/*< 48>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 9, 'param3': 12}
/*<  9>*/ 	check_item_flag(153, 1)
/*<  8>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 4}) {
          	  case 0:
/*< 38>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000001>Questa è la pozione <color yellow<scaldacuore>coloroff>!\nBevendola recupererai otto cuori.\n\n\nPerché non ne prendi un po' per le tue\navventure? Costa solo <color red rupee<20 rupie>coloroff>.\nChe ne dici?\n[1-]La compro[2]Non\nmi serve")
          		goto flw_11
          	  case 1:
/*< 23>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00090702>Buona giornata a te!\n\n\n\n<0x10009:0x000c0b00>Oh... mi spiace, ma non hai alcuna\nampolla. Senza quelle non posso\nvenderti niente.\n\n<0x10009:0x000d0700>Se ti interessa sapere come essere\nservito in questa bottega, non devi fare\naltro che rivolgermi la parola!")
          	}
          }

          void entrypoint_106_32() {
/*< 16>*/ 	start()
/*< 15>*/ 	check_item_flag(153, 1)
/*< 14>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          	  case 0:
/*<124>*/ 		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          		  case 0:
/*< 49>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 24, 'param3': 12}
/*< 24>*/ 			printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00000004>Questo è <color yellow<ossigeno liquido>coloroff>! Con questo,\nconsumerai meno <color blue<ossigeno\n>coloroff>nuotando sott'acqua.\n\nTi può interessare? \nSono solo <color red<20 rupie>coloroff>.\n[1-]Lo compro[2]Non\nmi serve")
          			goto flw_11
          		  case 1:
/*<125>*/ 			printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x000c0b04>Questa è una nuova pozione ancora in\ncorso di preparazione. \nFra poco sarà pronta, quindi non ti\nresta che avere un po' di pazienza.\n<0x10009:0x00090700>Nel frattempo, perché non dai\nun'occhiata alle altre pozioni?")
          		}
          	  case 1:
/*< 27>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00090702>Buona giornata a te!\n\n\n\n<0x10009:0x000c0b00>Oh... mi spiace, ma non hai alcuna\nampolla. Senza quelle non posso\nvenderti niente.\n\n<0x10009:0x000d0700>Se ti interessa sapere come essere\nservito in questa bottega, non devi fare\naltro che rivolgermi la parola!")
          	}
          }

          void entrypoint_106_33() {
/*< 19>*/ 	start()
/*< 18>*/ 	check_item_flag(153, 1)
/*< 17>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 10}) {
          	  case 0:
/*<103>*/ 		switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          		  case 0:
/*< 50>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 25, 'param3': 12}
/*< 25>*/ 			printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x0000000b>Questa è la fenomenale <color yellow<pozione\nlevafatica>coloroff>.\n\n\nQuando la bevi, il tuo <color blue<vigore >coloroff>si\nconsumerà più lentamente per\nun certo lasso di tempo.\n\nÈ cara, ma vale quello che costa.\nTe la posso vendere per <color red<50 rupie>coloroff>.\n[1-]La compro[2]Non\nmi serve")
          			goto flw_11
          		  case 1:
/*<104>*/ 			printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x000c0b04>Questa è una pozione incredibile,\ncapace di arrestare il consumo di\n<color blue<vigore>coloroff>.\n\nPurtroppo è in fase di sviluppo quindi\nnon è ancora in vendita. <0x10009:0x00090700>Ma ti prego,\ndai uno sguardo anche alle altre\npozioni!")
          		}
          	  case 1:
/*< 28>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00090702>Buona giornata a te!\n\n\n\n<0x10009:0x000c0b00>Oh... mi spiace, ma non hai alcuna\nampolla. Senza quelle non posso\nvenderti niente.\n\n<0x10009:0x000d0700>Se ti interessa sapere come essere\nservito in questa bottega, non devi fare\naltro che rivolgermi la parola!")
          	}
          }

          void entrypoint_106_50() {
/*< 61>*/ 	start()
/*< 88>*/ 	zone_temp_flags[4 /* 0x1 10 */] = false;
/*<181>*/ 	switch (zone_temp_flags[7 /* 0x1 80 */]) {
          	  case 0:
          		flw_116:
/*<116>*/ 		switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          		  case 0:
/*<118>*/ 			check_item_flag(71, 1)
/*<119>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 44}) {
          			  case 0:
          				flw_62:
/*< 62>*/ 				printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00000001>O‐ho... c‐c‐ciao...\nBenvenuto alla bottega delle pozioni,\nintrugli adatti a tutte le occasioni!\n\nDa me puoi dare un tocco in più\nalle pozioni che hai comprato\nda mia moglie.\n\n<0x10009:0x00070700>Oh bene... c‐c‐c'è qualche pozione\nche posso... truccare per te?\n[1-]Sì[2]No")
/*< 63>*/ 				switch (choice(2)) {
          				  case 0:
/*< 94>*/ 					switch (context_related2(0)) {
          					  case 0:
/*< 66>*/ 						printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000003>Certo, credo proprio di poterti\nessere utile...")
/*< 64>*/ 						make_actor_do_something(0, 0)
          					  case 1:
/*< 95>*/ 						printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x0000000a>Oh no... non hai nessuna pozione\nda potenziare.\n\n\n<0x10009:0x00090900>Se vuoi, puoi parlare con mia\nmoglie qui accanto: lei vende\npozioni...")
          					}
          				  case 1:
/*< 67>*/ 					printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x000a0a06>Capisco... non importa.\nSpero di rivederti presto.")
          				}
          			  case 1:
/*<121>*/ 				switch (zone_temp_flags[6 /* 0x1 40 */]) {
          				  case 0:
/*<123>*/ 					printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000001>S‐se non hai ancora un <color yellow<retino>coloroff>, ti\nconsiglio di andare alla <color red<bottega di\nTerry>coloroff> a procurartene uno!\n\nDi solito Terry vola in tondo sul\nbazar...\n\n\nSe <color green<osservi>coloroff> attentamente il cielo,\nsono sicuro che lo vedrai!")
          				  case 1:
/*<117>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 120, 'param3': 31}
/*<120>*/ 					printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00000001>B‐benvenuto alla bottega delle pozioni\npiù potenti in circolazione!\n\n\nDa me è possibile modificare le pozioni\nche compri da mia moglie!\n\n\n<0x10009:0x00000007>T‐ti servono degli i‐i‐insetti per\npoterlo fare però...\n\n\nS‐se non hai ancora un <color yellow<retino>coloroff>, ti\nconsiglio di andare alla <color red<bottega di\nTerry>coloroff> a procurartene uno!\n\n<0x10009:0x00070708>Di solito Terry vola in tondo sul\nbazar...\nSe <color green<osservi>coloroff> attentamente il cielo,\nsono sicuro che lo vedrai!")
/*<122>*/ 					zone_temp_flags[6 /* 0x1 40 */] = true;
          				}
          			}
          		  case 1:
          			goto flw_62
          		}
          	  case 1:
/*<176>*/ 		switch (story_flags[386 /* us: 805A9B0D 0x10, jp: 805ACD8D 0x10 */]) {
          		  case 0:
/*<175>*/ 			switch (story_flags[387 /* us: 805A9B0D 0x20, jp: 805ACD8D 0x20 */]) {
          			  case 0:
          				goto flw_116
          			  case 1:
/*<177>*/ 				check_item_flag(160, 1)
/*<178>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 58}) {
          				  case 0:
/*<182>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 179, 'param3': 31}
/*<179>*/ 					printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00000001>B‐benvenuto!\nCome dici?! Vuoi mostrarmi una\ncosa?!\n\nM‐mi dispiace, non mi posso distrarre\nquando lavoro. Potresti venirmi a\ntrovare a casa <color red<di notte>coloroff>, magari?\n\nGrazie mille! Ti aspetto!")
/*<180>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				  case 1:
          					goto flw_116
          				}
          			}
          		  case 1:
/*<183>*/ 			switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          			  case 0:
/*<186>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 184, 'param3': 31}
/*<184>*/ 				printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00000001>B‐b‐benvenuto!\n<0x10006:0xfbcd>...<0x10006:0x00cd><0x10009:0x000a0a06> Uuuufff!\n\n\n<0x10009:0x00ffff00>Oh, scusami, non dovrei lasciarmi\nsfuggire dei sospiri davanti ai clienti,\nlo so, è che ultimamente non dormo\nbene la <color red<notte>coloroff>...\nAccipicchia, anche annoiare i clienti\ncon delle lamentele non è proprio un\nbuon comportamento!\n\nF‐fai finta di niente, scusa!")
/*<185>*/ 				zone_temp_flags[7 /* 0x1 80 */] = true;
          				goto flw_116
          			  case 1:
          				goto flw_116
          			}
          		}
          	}
          }

