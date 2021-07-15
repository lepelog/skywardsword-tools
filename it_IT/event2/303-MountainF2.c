          void entrypoint_303_27() {
/*< 91>*/ 	start()
/*< 92>*/ 	printf("Mia adorata Faih! Bzzz! Hai visto\ncome sono stato bravo?")
          }

          void entrypoint_303_44() {
/*<203>*/ 	start()
/*<204>*/ 	printf("Argh! Che caldo terribile! Bzzz!\nPer fortuna sono un modello\nmodernissimo, posso sopportarlo!")
          }

          void entrypoint_303_10() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf("\x0E\x01\x0B\x04\x00rEhi?! Dove vai?! Bzzz! Se hai cose\nda fare, io ti aspetto qui.\nSbrigati però!")
          }

          void entrypoint_303_28() {
/*< 93>*/ 	start()
/*< 94>*/ 	printf("Se dovessi servirti ancora, non esitare\na chiamarmi! Bzzz!")
          }

          void entrypoint_303_45() {
/*<205>*/ 	start()
/*<206>*/ 	printf("Ehi! Dove stiamo andando? Secondo\nme non è questo il posto giusto. Vedi\ndi stare attento a dove vai! Bzzz!")
          }

          void entrypoint_303_11() {
/*< 56>*/ 	start()
/*< 57>*/ 	printf("\x0E\x01\x0B\x04\x00rMi attaccano! Aiuto!\nVieni, svelto! Bzzz!")
          }

          void entrypoint_303_29() {
/*< 95>*/ 	start()
/*< 96>*/ 	printf("Confermo che le fiamme sono state\nestinte. Vi suggerisco di proseguire.")
/*<200>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<291>*/ 	story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = false;
          }

          void entrypoint_303_46() {
/*<207>*/ 	start()
/*<208>*/ 	printf("Ehi! Siamo arrivati? Sbrighiamoci!\nBzzz!")
          }

          void entrypoint_303_12() {
/*< 58>*/ 	start()
/*< 59>*/ 	printf("\x0E\x01\x0B\x04\x00rEeehiii!!! Bzzz! Sbrigati a fare\nqualcosa!!!")
          }

          void entrypoint_303_47() {
/*<219>*/ 	start()
/*<220>*/ 	printf("Ben tornato, \x0E\x01\x12\x04\x00\x04mio signore\nLink.\n\n\nGrazie al potere dei <y<termorecchini\n>>ora siete in grado di oltrepassare zone\nincandescenti. Suggerisco, quindi, di\ncontinuare a cercare la <r<fiamma sacra>>.")
          }

          void entrypoint_303_13() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf("\x0E\x01\x05\x04<\x00\x0E\x01\x08\x02\x2CDAAAH!")
          }

          void entrypoint_303_30() {
/*< 97>*/ 	start()
/*< 98>*/ 	printf("\x0E\x01\x05\x04K\x00\x0E\x01\x12\x04\x00\x0BSignore, Faih a rapporto.\nSiamo nelle vicinanze del cratere del\n<b<vulcano di Oldin>>, in cima alla\nmontagna.")
          }

          void entrypoint_303_48() {
/*<221>*/ 	start()
/*<223>*/ 	switch (scene_flags[108 /* 0xC 10 */]) {
          	  case 0:
/*<252>*/ 		switch (scene_flags[112 /* 0xF 01 */]) {
          		  case 0:
/*<254>*/ 			switch (scene_flags[113 /* 0xF 02 */]) {
          			  case 0:
/*<270>*/ 				switch (scene_flags[114 /* 0xF 04 */]) {
          				  case 0:
/*<271>*/ 					printf("\x0E\x01\x09\x04\x11\x801Ehi, sei riuscito a far fuori quei tipi\n<r<con lo scudo enorme>>?\n\n\n\x0E\x01\x09\x04ÿ\xFF00Taglia lo scudo se è di legno, respingi le\nlance con il tuo scudo e pensa agli altri\ncome se fossero un muro.\n\nSe tieni a mente queste semplici\nregole, sconfiggerai tutti!")
/*<272>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				  case 1:
/*<263>*/ 					printf("Ehilà! Ciao!\nQuei tipi <r<con lo scudo enorme\n>>continuano a darti problemi?\n\n\x0E\x01\x09\x04\x15\x80BSe vuoi, posso svelarti l'<r<ultima\ninformazione segreta >>per\nmetterli al tappeto!")
/*<264>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 256, 'param3': 12}
/*<256>*/ 					printf("\x0E\x01\x09\x04ÿ\xFF09Ov\x2010<pause0A>via\x2010<pause0A>men\x2010<pause0A>te<pause0A> il prezzo sale...\nChe ne pensi di <r<50 rupie>>?[1]OK![2-]No")
          					flw_245:
/*<245>*/ 					switch (choice(2)) {
          					  case 0:
/*<247>*/ 						check_item_flag(501, 50)
/*<248>*/ 						switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 84}) {
          						  case 0:
/*<269>*/ 							rupees += -50;
/*<250>*/ 							printf("\x0E\x01\x09\x04\x11\x80BBene, anzi, benissimo!\nMi piace il tuo spirito!\nNon ti tiri indietro...\n\n\x0E\x01\x09\x04\x14\x1200Vedi di non farti fregare\ndagli altri, ora...")
/*<251>*/ 							scene_flags[4 'Eldin Volcano'][114 /* 0xF 04 */] = true;
/*<265>*/ 							printf("\x0E\x01\x09\x04ÿ\xFF00Dunque, questa è l'ultima.\nHai presente quei tipi grossi\ncon gli scudi che sembrano muri?!\n\n\x0E\x01\x09\x04\x11\x800Affrontali con la stessa determinazione\nche useresti nei confronti di un muro!\n\n\n\x0E\x01\x09\x04ÿ\xFF09Eh eh eh! Ti lascio il brivido\ndi scoprire cosa succede!\nProva, mi raccomando!\n\n\x0E\x01\x09\x04\x11\x800Datti da fare! Vai a dar loro una\nlezione! E grazie!")
/*<266>*/ 							scene_flags[4 'Eldin Volcano'][114 /* 0xF 04 */] = true;
/*<275>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						  case 1:
/*<249>*/ 							printf("\x0E\x01\x09\x04\x14\x1215Ehi, guarda che non ti bastano le\nrupie! Non ti dirò niente senza\nuna giusta ricompensa.\n\n\x0E\x01\x09\x04ÿ\xFF00Metti da parte <r<50 rupie>> e poi torna qui!")
/*<274>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					  case 1:
/*<246>*/ 						printf("\x0E\x01\x09\x04\x14\x1215Vuoi dirmi che non vuoi investire\nqueste <r<50 rupie>>?!\nChe tirchio!\n\n\x0E\x01\x09\x04ÿ\xFF00Beh, se cambi idea torna pure da me!")
/*<273>*/ 						zone_temp_flags[7 /* 0x1 80 */] = true;
          					}
          				}
          			  case 1:
/*<261>*/ 				printf("Ciao! Quei tipi <r<con lo scudo enorme\n>>ti danno filo da torcere?\n\n\n\x0E\x01\x09\x04\x15\x80BSe vuoi, posso svelarti delle\n<r<informazioni ancora più\nsegrete>> grazie alle quali\npotrai sicuramente vincere!")
/*<262>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 255, 'param3': 12}
/*<255>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF09Ov\x2010<pause0A>via\x2010<pause0A>men\x2010<pause0A>te<pause0A> non dirò niente gratis!\nTi chiedo <r<30 rupie>>, che ne dici?[1]OK![2-]No")
          				flw_234:
/*<234>*/ 				switch (choice(2)) {
          				  case 0:
/*<236>*/ 					check_item_flag(501, 30)
/*<237>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 78}) {
          					  case 0:
/*<268>*/ 						rupees += -30;
/*<239>*/ 						printf("\x0E\x01\x09\x04\x11\x808Oooh... bravo!\nTi interessa, allora!\nAscolta bene!\n\n\x0E\x01\x09\x04ÿ\xFF00Quando ti attaccano con le lance\nlunghe, c'è poco da fare...\n\n\nMa se tu riesci a <r<respingere l'attacco\ncon lo scudo>>...<pause0F> \x0E\x01\x09\x04\x11\x800beh... il gioco è fatto!\nChiaro?<pause0F>\n[1]Non lo\nsapevo![2]Lo sapevo!")
/*<241>*/ 						scene_flags[4 'Eldin Volcano'][113 /* 0xF 02 */] = true;
/*<242>*/ 						switch (choice(2)) {
          						  case 0:
/*<244>*/ 							printf("\x0E\x01\x09\x04\x11\x80BVisto?! Non sai che fatica\nriuscire a ottenere queste\ninestimabili informazioni!\n\n\x0E\x01\x09\x04ÿ\xFF00Ma non è tutto, potrei dirti dell'altro...<pause14>\nPerò questa volta ti costerà <r<50 rupie>>![1]OK![2-]No")
          							goto flw_245
          						  case 1:
/*<243>*/ 							printf("\x0E\x01\x09\x04\x12\xE04Cosa?! Non ci credo! Non puoi esserti\naccorto di una cosa simile...\n\n\n\x0E\x01\x09\x04ÿ\xFF00Comunque sia, la prossima è\nun'informazione ancora più utile!\nSolo <r<50 rupie>>![1]Dimmela![2-]No")
          							goto flw_245
          						}
          					  case 1:
/*<238>*/ 						printf("\x0E\x01\x09\x04\x14\x1215Ahi, ahi, mi sa che non bastano queste\nrupie, non ti dirò niente.\n\n\n\x0E\x01\x09\x04ÿ\xFF00Torna da me quando avrai messo\nda parte <r<30 rupie>>!")
/*<276>*/ 						zone_temp_flags[7 /* 0x1 80 */] = true;
          					}
          				  case 1:
/*<235>*/ 					printf("\x0E\x01\x09\x04\x14\x1215Ma dai... che vuoi che siano <r<30 rupie>>!\n\n\n\n\x0E\x01\x09\x04ÿ\xFF00Vabbè, se per caso cambiassi idea,\ntorna da me!")
/*<277>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				}
          			}
          		  case 1:
/*<259>*/ 			printf("Sei di nuovo tu! Quei tipi <r<con lo scudo\nenorme >>ti danno filo da torcere?\n\n\n\x0E\x01\x09\x04\x15\x80BSe vuoi ho delle <r<informazioni segrete \n>>che ti aiuteranno a vincere!")
/*<260>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 253, 'param3': 12}
/*<253>*/ 			printf("\x0E\x01\x09\x04ÿ\xFF09Ov\x2010<pause0A>via\x2010<pause0A>men\x2010<pause0A>te<pause0A> non dirò niente gratis!\nTi chiedo <r<30 rupie>>, che ne dici?[1]OK![2-]No")
          			flw_225:
/*<225>*/ 			switch (choice(2)) {
          			  case 0:
/*<227>*/ 				check_item_flag(501, 30)
/*<228>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 72}) {
          				  case 0:
/*<267>*/ 					rupees += -30;
/*<230>*/ 					printf("\x0E\x01\x09\x04\x11\x809Affare fatto!\nBene, ora ti dico tutto, ma ricordati\nche è un segreto!\n\n\x0E\x01\x09\x04ÿ\xFF00Vedi...<pause14> puoi spaccare il loro scudo!\nAllora? Non è una notizia utilissima?!\n\n\nAlcuni di loro però, hanno degli scudi\nrinforzati col metallo e quelli non puoi\ntagliarli![1]Bene![2]Tutto qui?")
/*<240>*/ 					scene_flags[4 'Eldin Volcano'][112 /* 0xF 01 */] = true;
/*<231>*/ 					switch (choice(2)) {
          					  case 0:
/*<233>*/ 						printf("\x0E\x01\x09\x04\x15\x90BEh eh eh! Ma non è finita qui!\nHo altre informazioni utili!\nSei curioso, vero?\n\n\x0E\x01\x09\x04ÿ\xFF00Bene...<pause14>\n<r<30 rupie >>e ti dico tutto![1]OK![2-]No")
          						goto flw_234
          					  case 1:
/*<232>*/ 						printf("Ehi, cos'è quella faccia?\nCome se sapessi già\ntutto...\n\n\x0E\x01\x09\x04\x15\x809Quello che ti ho detto prima\nera nulla a confronto di quanto ti\ndirei ora! Su, <r<30 rupie>>![1]OK![2-]No")
          						goto flw_234
          					}
          				  case 1:
/*<229>*/ 					printf("\x0E\x01\x09\x04\x14\x1215Ahi, ahi, mi sa che non bastano queste\nrupie, non ti dirò niente.\n\n\n\x0E\x01\x09\x04ÿ\xFF00Torna da me quando avrai messo\nda parte <r<30 rupie>>!")
/*<278>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				}
          			  case 1:
/*<226>*/ 				printf("\x0E\x01\x09\x04\x14\x1215Ma dai... che vuoi che siano <r<30 rupie>>!\n\n\n\n\x0E\x01\x09\x04ÿ\xFF00Vabbè, se per caso cambiassi idea,\ntorna da me!")
/*<279>*/ 				zone_temp_flags[7 /* 0x1 80 */] = true;
          			}
          		}
          	  case 1:
/*<222>*/ 		printf("\x0E\x01\x09\x04\x00\x01Ciao!\nSei venuto a prendere fiato qui, eh?\nI mostri sono una scocciatura...\n\n\x0E\x01\x09\x04\x11\x900Soprattutto quelli lì <r<con lo scudo\nenorme >>sembrano parecchio forti!\n\n\n\x0E\x01\x09\x04\x15\x80BVisto che siamo amici, ti svelerò un\n<r<segreto >>per batterli senza problemi!")
/*<258>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 257, 'param3': 12}
/*<257>*/ 		printf("\x0E\x01\x09\x04ÿ\xFF09Ov\x2010<pause0A>via\x2010<pause0A>men\x2010<pause0A>te<pause0A> non te lo dirò certo\ngratis! Ti chiedo <r<30 rupie>>,\nche ne dici?[1]OK![2-]No")
/*<224>*/ 		scene_flags[4 'Eldin Volcano'][108 /* 0xC 10 */] = true;
          		goto flw_225
          	}
          }

          void entrypoint_303_14() {
/*< 62>*/ 	start()
/*< 63>*/ 	printf("\x0E\x01\x05\x04Z\x00Mi\x2010bzzz... mi sto\x2010bzz...\nrompendo\x2010bzzz!\nColpa\x2010bzzz tua\x2010bzzz!!!")
          }

          void entrypoint_303_31() {
/*< 99>*/ 	start()
/*<100>*/ 	printf("\x0E\x01\x05\x04Z\x00In questa zona vi è una <r<temperatura\nestremamente elevata>>, ma grazie ai\n<y<termorecchini>> potete resistere.")
          }

          void entrypoint_303_49() {
/*<280>*/ 	start()
/*<281>*/ 	printf("\x0E\x01\x12\x04\x00\x0BSignore Link, Faih\na rapporto. Non rilevo presenza\nd'<r<acqua >>in questo luogo.\n\nPer attivare quel meccanismo è\nnecessario un grosso recipiente, ma\nsuggerirei comunque di focalizzare\nl'attenzione sulla <pling>ricerca dell'<r<acqua>>.")
/*<282>*/ 	scene_flags[5 'Eldin Volcano Summit'][115 /* 0xF 08 */] = true;
          }

          void entrypoint_303_15() {
/*< 64>*/ 	start()
/*< 65>*/ 	printf("\x0E\x01\x12\x04\x00dEhi! Io non posso seguirti da\nquella parte! Fammi strada\ncamminando! Bzzz!")
          }

          void entrypoint_303_32() {
/*<101>*/ 	start()
/*<102>*/ 	printf("\x0E\x01\x05\x04Z\x00Probabilità che l'ultima <r<fiamma sacra\n>>si trovi in questa zona: 90%.")
          }

          void entrypoint_303_16() {
/*< 66>*/ 	start()
/*< 67>*/ 	printf("\x0E\x01\x0B\x04\x00rEhi, ehi! Non mollarmi qui! Bzzz!")
          }

          void entrypoint_303_33() {
/*<103>*/ 	start()
/*<104>*/ 	printf("Confermo il guasto del robot.\nSuggerisco di tornare indietro\ne ripararlo.")
          }

          void entrypoint_303_50() {
/*<293>*/ 	start()
/*<294>*/ 	printf("\x0E\x01\x12\x04\x00\x0BSignore Link, Faih\na rapporto. Il robot è in attesa ai piedi\ndel vulcano.\n\nPer prima cosa, suggerirei di\nripercorrere il vulcano e guidare il\nrobot fino a qui.")
/*<295>*/ 	temp_flags[29 /* 0x2 20 */] = true;
          }

          void entrypoint_303_17() {
/*< 68>*/ 	start()
/*< 69>*/ 	printf("\x0E\x01\x0B\x04\x00rTi ho perso di vista! Controlla\ndove mi trovo sulla <r<mappa>> con \x0E\x02\x04\x02\x3CD\ne vieni subito a prendermi! Bzzz!")
          }

          void entrypoint_303_34() {
/*<105>*/ 	start()
/*<106>*/ 	printf("Questa volta vedi di fare\nil tuo dovere!!! Bzzz!")
/*<199>*/ 	story_flags[723 /* us: 805A9B24 0x08, jp: 805ACDA4 0x08 */] = false;
          }

          void entrypoint_303_00() {
          	start()
/*<  1>*/ 	printf("Forza, sbrigati, signor Verdino!\nTi seguo, fai strada! Bzzz!")
          }

          void entrypoint_303_18() {
/*< 70>*/ 	start()
/*<196>*/ 	switch (random(3)) {
          	  case 0:
/*< 71>*/ 		printf("\x0E\x01\x0B\x04\x00rEhi! EHI! Mooostriii!!! Presto!\nFai qualcosa! Bzzz!")
          	  case 1:
/*<197>*/ 		printf("\x0E\x01\x0B\x04\x00rAAAH! Aiutooo! Sbrigati!!!\nFai qualcosa! Bzzz!")
          	  case 2:
/*<198>*/ 		printf("\x0E\x01\x0B\x04\x00rAAAH! Mo... mostriii!\nChe fifaaa!!! Bzzz!")
          	}
          }

          void entrypoint_303_35() {
/*<107>*/ 	start()
/*<108>*/ 	printf("Se dovessi servirti ancora, non esitare\na chiamarmi! Bzzz!")
          }

          void entrypoint_303_01() {
/*<  2>*/ 	start()
/*<  6>*/ 	switch (story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */]) {
          	  case 0:
/*<  8>*/ 		printf("Anche su questo vulcano sento che\npotrebbero esserci altri <y<esaedri\ndella Dea>>, cercali!")
          	  case 1:
/*<  3>*/ 		printf("\x0E\x01\x09\x04\x15\x1B09Oh, ciao roccia!\nCi incontriamo di nuovo! Stai bene?\n\n\nHo sentito dire che da queste parti ci\nsono degli <y<esaedri della Dea >>e ho fatto\nun salto!\n\nAnche tu ne avrai trovati diversi,\nma ho la sensazione che ce ne\nsiano altri nascosti!\n\n\x0E\x01\x09\x04\x18\x17FFPerché non ti metti a cercarli?")
/*<  9>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_303_19() {
/*< 72>*/ 	start()
/*< 74>*/ 	switch (random(3)) {
          	  case 0:
/*< 73>*/ 		printf("\x0E\x01\x0B\x04\x00rEhi! Quanto vuoi farmi aspettare?!\nSe non sai dove mi trovo, controlla\ncon \x0E\x02\x04\x02\x3CD sulla <r<mappa>>! Bzzz!")
          	  case 1:
/*< 75>*/ 		printf("\x0E\x01\x0B\x04\x00rSvelto, vieni qui!!! Bzzz! Se non sai\ndove trovarmi, controlla\ncon \x0E\x02\x04\x02\x3CD sulla <r<mappa>>!")
          	  case 2:
/*< 76>*/ 		printf("\x0E\x01\x0B\x04\x00rChe stai combinando?! Bzzz! Vieni qui,\nsbrigati! Se non sai dove mi trovo,\ncontrolla sulla <r<mappa >>con \x0E\x02\x04\x02\x3CD!")
          	}
          }

          void entrypoint_303_36() {
/*<109>*/ 	start()
/*<213>*/ 	switch (story_flags[744 /* us: 805A9B29 0x01, jp: 805ACDA9 0x01 */]) {
          	  case 0:
/*<215>*/ 		set_camera(2, 0)
/*<216>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 49, 'next': 217, 'param3': 32}
/*<217>*/ 		make_actor_do_something(0, 49)
/*<214>*/ 		printf("")
/*<218>*/ 		story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = true;
          	  case 1:
/*<116>*/ 		set_camera(2, 0)
/*<209>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 49, 'next': 210, 'param3': 32}
/*<210>*/ 		make_actor_do_something(0, 49)
/*<110>*/ 		printf("\x0E\x01\x12\x04\x00dCosa, cosa? Bzzz?\nStavo per fermarmi, non\nvolevi che portassi qui l'orcio?!\n\n<pause0A>Cosa?! In cima al vulcano?!<pause0F> Potevi\ndirlo prima, bzzz! Che domande!\nMi pare ovvio che non mi diverta a\nscarrozzare questo coso pesante!<pause0F>")
/*<114>*/ 		set_camera(1, 0)
/*<111>*/ 		printf("\x0E\x01\x12\x04\x00dQui ci sono un sacco di mostri, bzzz!")
/*<115>*/ 		set_camera(3, 0)
/*<112>*/ 		printf("\x0E\x01\x12\x04\x00dB\x2010bzzz! Non ho certo paura dei\nmostri, io! Bzzz! È solo che ora\nsto portando l'orcio d'acqua...")
/*<113>*/ 		printf("\x0E\x01\x12\x04\x00dForza, signor Verdino! \nVisto che sei qui, dimostra il tuo\nvalore! Bzzz! Mi farai da scudo,\nio ti seguirò, bzzz!")
/*<187>*/ 		printf("\x0E\x01\x12\x04\x00dNon farmi nemmeno sfiorare da\nquei mostri! Bzzz!")
/*<211>*/ 		story_flags[744 /* us: 805A9B29 0x01, jp: 805ACDA9 0x01 */] = true;
/*<212>*/ 		story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = true;
          	}
          }

          void entrypoint_303_02() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf("\x0E\x01\x12\x04\x00\x0BSignore, Faih a rapporto.\nGrazie alla nuova forza della\nvostra spada, è possibile registrare gli\n<y<esaedri della Dea >>nel <r<rilevatore>>!\nHo aggiunto l'<y<esaedro della Dea>>\nalle frequenze del <r<rilevatore>>.\n<pling>Fatene buon uso.")
/*<  7>*/ 	story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */] = true;
/*<290>*/ 	open_dowsing_wheel(21)
          }

          void entrypoint_303_37() {
/*<117>*/ 	start()
/*<124>*/ 	switch (story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */]) {
          	  case 0:
/*<125>*/ 		printf("Che scocciatura però, essere arrivati\nfin qui e non riuscire a entrare!\n\n\n\x0E\x01\x09\x04\x15\xDFF...<pause14> Ho la sensazione di stare\nscordando qualcosa di estremamente\nimportante.\n\nQualcosa che mi aveva detto un mio\namico...<pause14>\n\x0E\x01\x09\x04\x00\x04Mmh... cos'era...?\n\n\x0E\x01\x09\x04\x09\x8FFBoh, non importa... \nSe hai bisogno di tanta acqua, ti\nconsiglio di andare al <r<lago di Floria>>!")
          		flw_141:
/*<141>*/ 		switch (story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */]) {
          		  case 0:
          		  case 1:
/*<138>*/ 			zone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	  case 1:
/*<118>*/ 		printf("\x0E\x01\x09\x04\x11\x801Ma ciao, amico! Anche tu da queste\nparti?! Sempre in cerca della tua\namica?\n\n\x0E\x01\x09\x04\x09\x8FFIo, ovviamente, sono in cerca di\ntesori! Mi hanno detto che ci sono\ndelle splendide rovine...\n\n\x0E\x01\x09\x04\x15\xDFFAncora non ho trovato niente di\ninteressante, tu sai qualcosa?\n[1]Beh...[2]Non te\nlo dico")
/*<119>*/ 		switch (choice(2)) {
          		  case 0:
/*<120>*/ 			printf("\x0E\x01\x09\x04\x11\x900Ne sai qualcosa, allora! Siamo amici\nnoi, vero?! Dai, raccontami tutto!")
          			flw_122:
/*<122>*/ 			printf("\x0E\x01\x09\x04\x09\x80ECome? Delle fiamme ti impediscono di\npassare? Perché non ci butti su\ndell'acqua?\n\n\x0E\x01\x09\x04\x15\x800Dici che te ne serve molta? Capisco...<pause14>\nQuella che c'è qui non ti basta,\nquindi...\n\n\x0E\x01\x09\x04\x09\x8FFA pensarci bene, pare che la fonte\ndell'acqua di qui, sia la stessa di quella\ndel <r<lago di Floria<pling>>>!\n\n\x0E\x01\x09\x04\x11\x8FFUn mio amico che è andato a caccia di\ntesori nella <b<foresta di Firone>>, mi ha\ndetto che è tornato qui seguendo quella\nvena d'acqua!\n\x0E\x01\x09\x04\x09\x8FFOK, sto divagando. La cosa importante\nè che pare proprio che lì ci sia un lago\nbello grosso! Perché non provi ad\nandarci e vedere di cavarne qualcosa?!")
/*<123>*/ 			story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */] = true;
          			goto flw_141
          		  case 1:
/*<121>*/ 			printf("\x0E\x01\x09\x04\x14\x120AE daaai! Non fare il prezioso!\nSiamo amici, no?!\nDimmi tutto!")
          			goto flw_122
          		}
          	}
          }

          void entrypoint_303_03() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf("Dai da bere agli assetati e la via\nsi aprirà.")
          }

          void entrypoint_303_20() {
/*< 77>*/ 	start()
/*< 78>*/ 	printf("\x0E\x01\x0B\x04\x00rMeno male! Bzzz! Non mi piantare\npiù in asso!")
          }

          void entrypoint_303_38() {
/*<126>*/ 	start()
/*<135>*/ 	switch (scene_flags[114 /* 0xF 04 */]) {
          	  case 0:
/*<136>*/ 		printf("Link, \x0E\x01\x12\x04\x00\x0Bmio signore, Faih a\nrapporto. Ancora non potete\nproseguire a causa delle fiamme.\n<b<\n>>Desiderate che imposti il <g<rilevatore>>\nsul recipiente in cui si trovava il\n<b<drago d'acqua>>?\n[1]OK![2-]No")
          		flw_139:
/*<139>*/ 		switch (choice(2)) {
          		  case 0:
/*<128>*/ 			story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = true;
/*<129>*/ 			story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<130>*/ 			story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<131>*/ 			story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<132>*/ 			story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<133>*/ 			story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<289>*/ 			printf("\x0E\x01\x12\x04\x00\x05Bene signore, ho impostato il <g<rilevatore\n>>sul recipiente in cui si trovava\nil <b<drago d'acqua>>.<pling>")
/*<288>*/ 			open_dowsing_wheel(13)
          			flw_134:
/*<134>*/ 			scene_flags[5 'Eldin Volcano Summit'][114 /* 0xF 04 */] = true;
/*<137>*/ 			zone_temp_flags[0 /* 0x1 01 */] = false;
          		  case 1:
/*<140>*/ 			printf("\x0E\x01\x12\x04\x00\x05Bene signore, procederò in un altro\nmomento.")
          			goto flw_134
          		}
          	  case 1:
/*<127>*/ 		printf("\x0E\x01\x12\x04\x00\x0BLink, mio signore, Faih\na rapporto. Consiglierei di dirigerci\nverso il <r<lago di Floria>>, come suggerito\ndal <b<Mogma>>.\nPer quanto concerne il problema di\ncome trasportare l'acqua dal lago...<pause0F>\n<pling>Suggerirei di consultarvi con il <r<drago\nd'acqua>>.\nConfermo che sarebbe possibile\ntrasportare una grande quantità\nd'acqua utilizzando l'<r<orcio>> in cui il\ndrago risiedeva per curarsi.")
/*<296>*/ 		printf("Basandomi sulle informazioni raccolte\nin passato, posso impostare il\n<r<rilevatore >>su quell'oggetto. Procedo?\n[1]OK![2-]Non ora")
          		goto flw_139
          	}
          }

          void entrypoint_303_04() {
/*< 12>*/ 	start()
/*< 14>*/ 	switch (story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */]) {
          	  case 0:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x15\x1B09Ehilà! Anche tu sei venuto in cerca\ndegli <y<esaedri della Dea>>? Sei pure\npassato da quella zona torrida!\n\n\x0E\x01\x09\x04ÿ\xFF00Non ho problemi con il caldo,\nma queste fiamme mi bloccano\nil passaggio!")
          		flw_17:
/*< 17>*/ 		printf("\x0E\x01\x09\x04\x18\x17FFNon puoi fare qualcosa per queste\nfiamme?")
          	  case 1:
/*< 13>*/ 		printf("\x0E\x01\x09\x04\x15\x1B09Ciao roccia! Ci rincontriamo!\nTutto bene?\n\n\n\x0E\x01\x09\x04\x16\xBFFHo sentito dire che da queste parti\nci sono degli <y<esaedri della Dea >>e ho\nfatto un salto!\n\n\x0E\x01\x09\x04\x00\xB00Secondo me, anche qui in fondo\nce ne potrebbe essere uno...\nSolo che per colpa di tutte quelle\nfiamme, non posso proseguire!")
/*< 16>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_17
          	}
          }

          void entrypoint_303_21() {
/*< 79>*/ 	start()
/*< 80>*/ 	printf("\x0E\x01\x0B\x04\x00rOhi! Che stai facendo?!\nBzzz!")
          }

          void entrypoint_303_39() {
/*<148>*/ 	start()
/*<150>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*<151>*/ 		printf("\x0E\x01\x09\x04\x0C\x405Mi piacerebbe un bellissimo posto in\nalto, per godermi al meglio una vita\nin panciolle!\n\n\x0E\x01\x09\x04\x0C\xDFFSai, ho vissuto sempre sottoterra, ma\nadoro ammirare il cielo!\n\n\n\x0E\x01\x09\x04\x09\x906Se potessi rinascere, mi piacerebbe\npoter essere un uccello per poter\nvolare!")
          	  case 1:
/*<149>*/ 		printf("\x0E\x01\x09\x04\x0B\xC07Ehi! Ma tu sei quello dell'altra volta!\n\n\n\n\x0E\x01\x09\x04\x0B\x506Oh oh oh! Come ti trovi con quei\nguanti di mia invenzione?!\n\n\nCome? Io come sto? Io...\n\n\n\n\x0E\x01\x09\x04\x0C\x405Da quella volta sono andato in cerca di\nun nuovo posto in cui scovare tesori,\nma con scarsa fortuna! Mi sono stufato\ndi cercare tesori in posti torridi...\n\x0E\x01\x09\x04\x09\x908Sto iniziando a pensare di ritirarmi a\nuna vita più tranquilla e godermi\nla vecchiaia!")
/*<152>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          	}
          }

          void entrypoint_303_05() {
/*< 23>*/ 	start()
/*< 21>*/ 	switch (scene_flags[106 /* 0xC 04 */]) {
          	  case 0:
/*< 22>*/ 		printf("\x0E\x01\x09\x04\x18\x1700Esci da qui e, in fondo, gira a destra.\nTroverai una <r<sorgente d'acqua>>.\nMa cosa possiamo farci?")
          	  case 1:
/*< 20>*/ 		switch (scene_flags[105 /* 0xC 02 */]) {
          		  case 0:
/*< 18>*/ 			printf("\x201CDai da bere agli assetati\"?!\nA proposito, c'è un'uscita giusto\ntornando indietro, in fondo a destra.\n\nLì ho trovato una <r<sorgente d'acqua>>!<pling>\nEra ottima!\n\n\n\x0E\x01\x09\x04\x18\x1705Ma si può portare l'acqua fin qui?\nQuella cosa strana che sembra una\nrana non si può mica trasportare...<pause0F>\nChe si fa?")
/*< 19>*/ 			scene_flags[5 'Eldin Volcano Summit'][106 /* 0xC 04 */] = true;
          		  case 1:
/*< 24>*/ 			printf("\x0E\x01\x09\x04\x18\x17FFNon puoi fare qualcosa per queste\nfiamme?")
          		}
          	}
          }

          void entrypoint_303_22() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf("\x0E\x01\x0B\x04\x00rEhi! Se andiamo avanti così finirà\nche mi romperò! Bzzz!")
          }

          void entrypoint_303_06() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf("\x0E\x01\x09\x04\x17\x1908OOOH! Si sono spente le fiamme!\nOra si può proseguire!")
/*<153>*/ 	{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6911, 'next': 28, 'param3': 13}
/*< 28>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 0, 'next': 27, 'param3': 14}
/*< 27>*/ 	story_flags[468 /* us: 805A9B0F 0x40, jp: 805ACD8F 0x40 */] = true;
/*<142>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_303_23() {
/*< 83>*/ 	start()
/*< 84>*/ 	printf("\x0E\x01\x12\x04\x00\x0BSignore, il robot ci attende al vulcano:\nandiamoci al più presto.")
          }

          void entrypoint_303_40() {
/*<155>*/ 	start()
/*<157>*/ 	switch (story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */]) {
          	  case 0:
          		flw_165:
/*<165>*/ 		switch (scene_flags[81 /* 0xB 02 */]) {
          		  case 0:
/*<166>*/ 			printf("\x0E\x01\x09\x04\x1A\x30DCapo... ti renderò fiero di me!\n\n\n\nContinua a vegliare su di noi lì\ndal cielo...")
          		  case 1:
/*<158>*/ 			printf("\x0E\x01\x09\x04\x1C\x180FOoh...\nIl capo s'è involato!\nDov'è andato?\n[1]Cielo[2]Paradiso")
/*<161>*/ 			switch (choice(2)) {
          			  case 0:
/*<162>*/ 				printf("\x0E\x01\x09\x04\x1A\x2011In Cielo?!\n\n\n\n... \x0E\x01\x09\x04\x1B\x407In effetti<pause14>... lo diceva sempre\nche amava il cielo!\n\n\nDi sicuro sarà in cerca di tesori\nanche lì!")
          				flw_164:
/*<164>*/ 				scene_flags[4 'Eldin Volcano'][81 /* 0xB 02 */] = true;
          			  case 1:
/*<163>*/ 				printf("\x0E\x01\x09\x04\x1A\x2011In paradiso?!\n\n\n\n... \x0E\x01\x09\x04\x1B\x2207Capisco<pause14>...\nQuindi ci ha lasciati così...\nDel resto tutti prima o poi dobbiamo\nfare questo viaggio...")
          				goto flw_164
          			}
          		}
          	  case 1:
/*<186>*/ 		switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          		  case 0:
          			goto flw_165
          		  case 1:
/*<160>*/ 			switch (scene_flags[81 /* 0xB 02 */]) {
          			  case 0:
/*<176>*/ 				switch (zone_temp_flags[4 /* 0x1 10 */]) {
          				  case 0:
/*<177>*/ 					printf("\x0E\x01\x09\x04\x1B\x2207Andare su e giù tra cielo e terra non\nè mica una cosa da tutti, eh! Forte!")
          				  case 1:
/*<174>*/ 					printf("\x0E\x01\x09\x04\x1A\x2011Che cosa?!\nIl capo è... tornato?!\n\n\n\x0E\x01\x09\x04\x1B\x2207Incredibile! Può addirittura andare\na piacimento tra cielo e terra!\nChe forza il capo!")
/*<175>*/ 					zone_temp_flags[4 /* 0x1 10 */] = true;
          				}
          			  case 1:
/*<167>*/ 				switch (zone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<172>*/ 					switch (zone_temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*<173>*/ 						printf("\x0E\x01\x09\x04\x00\x15Vuole ritirarsi...\nSe il capo vuole così, è sempre giusto\ndargli ascolto!")
          					  case 1:
/*<286>*/ 						switch (story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */]) {
          						  case 0:
/*<170>*/ 							printf("\x0E\x01\x09\x04\x1A\x2001Ehilà! Sei andato a incontrare il capo?\nCome t'è sembrato?\n... ... ...\n\n\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x1A\x2011COSA?!\nVuole andare in pensione?!\n\n\n... \x0E\x01\x09\x04\x00ÿCioè?! Che roba è, un nuovo\ntipo di tesoro?!\n\n\n\x0E\x01\x09\x04\x1B\x1E15Bah, non capisco...\n\n\n\nComunque, se il capo dice così, è\ngiusto accontentarlo!")
          							flw_171:
/*<171>*/ 							zone_temp_flags[3 /* 0x1 08 */] = true;
          						  case 1:
/*<287>*/ 							printf("\x0E\x01\x09\x04\x1B\x2201Ehilà! Ciao, amico!\nTutto bene?\n\n\nCome? Io come sto?\nAlla grande!!!\n\n\n\x0E\x01\x09\x04\x00\x02Però sono in pensiero per il <b<capo>>... sai,\nè strano da quando è andato alle\nrovine...\n\n\x0E\x01\x09\x04\x1B\x22FFTu gli hai parlato giusto poco fa, no?\nCome t'è sembrato?\n\n\n\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x1A\x2011COSA?!\nVuole andare in pensione?!\n\n\n... \x0E\x01\x09\x04\x00ÿCioè?! Che roba è, un nuovo\ntipo di tesoro?!\n\n\n\x0E\x01\x09\x04\x1B\x1E15Bah, non capisco...\n\n\n\nComunque, se è quello che il capo\nvuole, è sempre giusto dargli ascolto!")
/*<292>*/ 							story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */] = true;
          							goto flw_171
          						}
          					}
          				  case 1:
/*<168>*/ 					switch (story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */]) {
          					  case 0:
/*<169>*/ 						printf("\x0E\x01\x09\x04\x1B\x50ACredo che il <b<capo>> sia qui da qualche\nparte! Passa a salutarlo!\nSarà contento di vederti!")
          					  case 1:
/*<156>*/ 						printf("\x0E\x01\x09\x04\x1B\x2201Ehilà! Ciao, amico!\nTutto bene?\n\n\nCome? Io come sto?\nAlla grande!!!\n\n\n\x0E\x01\x09\x04\x00\x02Però sono in pensiero per il <b<capo>>... è\nstrano da quando è andato alle\nrovine...\n\n\x0E\x01\x09\x04\x1B\x230ABoh... In ogni caso, fai un salto\ndal <b<capo>>! Credo sia da queste\nparti!")
/*<159>*/ 						story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */] = true;
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_303_07() {
/*< 29>*/ 	start()
/*< 31>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
          		flw_32:
/*< 32>*/ 		printf("Mi spiace chiedertelo, roccia...\nMa non potresti occupartene\ndi nuovo tu?")
          	  case 1:
/*< 30>*/ 		printf("\x0E\x01\x09\x04\x16\x1E56Di nuovo... Che noia queste fiamme...")
/*< 33>*/ 		temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_32
          	}
          }

          void entrypoint_303_24() {
/*< 85>*/ 	start()
/*< 86>*/ 	printf("\x0E\x01\x12\x04\x00dTi aspettavo! Sbrigati, conducimi in\ncima alla montagna!\nBzzz!")
          }

          void entrypoint_303_41() {
/*<178>*/ 	start()
/*<180>*/ 	switch (zone_temp_flags[5 /* 0x1 20 */]) {
          	  case 0:
/*<181>*/ 		printf("\x0E\x01\x09\x04\x1B\x2215<b<Platio>>... mostra delle doti spiccate solo\nquando si tratta di cercare tesori!")
          	  case 1:
/*<179>*/ 		printf("\x0E\x01\x09\x04\x1A\x200FOh! Sei quello dell'altra volta!?<pause0F>\n\n\n\n\x0E\x01\x09\x04\x1B\x2209... Eh eh eh! Va tutto bene!\n\n\n\nMio fratello ha scoperto della\nfaccenda lì alle rovine...\n\n\n\x0E\x01\x09\x04\x1B\x1EFFAnche mio fratello è stato preso, siamo\nproprio simili!\n\n\n\x0E\x01\x09\x04\x1A\xA12... Piuttosto, dimmi! Hai mica\nincontrato <b<Platio>>?\n[1]Era lì[2]No")
/*<183>*/ 		switch (choice(2)) {
          		  case 0:
/*<184>*/ 			printf("\x0E\x01\x09\x04\x1B\xA12Ah, sì?\nBenissimo!\n\n\nNon lo vedevo da un po'...\n\n\n\n\x0E\x01\x09\x04\x1B\x160FHo temuto fosse andato a tirare le\ncuoia in qualcuna delle sue\nstrampalate avventure!\n\n\x0E\x01\x09\x04\x1B\x16FFQuando si tratta di lui, non si può mai\nstare tranquilli!")
          			flw_182:
/*<182>*/ 			zone_temp_flags[5 /* 0x1 20 */] = true;
          		  case 1:
/*<185>*/ 			printf("\x0E\x01\x09\x04\x1B\x2207Accidenti a lui...<pause14> Sarà andato di nuovo\nda solo in cerca di tesori! Me lo dice\nsempre lui stesso che lavorare da soli\nè pericoloso!\n\x0E\x01\x09\x04\x1B\x09Non si possono mettere limiti allo\nspirito da <b<cacciatore di tesori>>!\nSe vedi <b<Platio >>in giro, fammelo\nsapere!")
          			goto flw_182
          		}
          	}
          }

          void entrypoint_303_08() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf("\x0E\x01\x09\x04\x17\x1908Oooh! Bene!\nProcediamo, procediamo!")
/*<154>*/ 	{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6911, 'next': 37, 'param3': 13}
/*< 37>*/ 	{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 0, 'next': 36, 'param3': 14}
/*< 36>*/ 	story_flags[469 /* us: 805A9B0E 0x02, jp: 805ACD8E 0x02 */] = true;
/*<143>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_303_25() {
/*< 87>*/ 	start()
/*< 88>*/ 	printf("\x0E\x01\x12\x04\x00dNon ti scordare di me, sai!? Bzzz!\nSe non sai dove mi trovo, controlla\nsulla <r<mappa >>con \x0E\x02\x04\x02\x3CD!\x0E\x01\x11\x02\x3CD")
          }

          void entrypoint_303_42() {
/*<188>*/ 	start()
/*<190>*/ 	switch (scene_flags[82 /* 0xB 04 */]) {
          	  case 0:
/*<191>*/ 		printf("\x0E\x01\x09\x04\x0D\x509OK! E ora dove posso\nandare in cerca di tesori...?")
          	  case 1:
/*<189>*/ 		printf("\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x0E\x1008Oh! Ma ciao!\nTutto bene?!\n\n\n\x0E\x01\x09\x04\x11\x110BLo sapevo! Sei riuscito a recuperare\ntutte le tue cose!\n\n\nE quindi...<pause14> com'è andata?\nHai trovato tesori?\n[1]Tantissimi![2]Nessuno!")
/*<192>*/ 		switch (choice(2)) {
          		  case 0:
/*<193>*/ 			printf("\x0E\x01\x09\x04\x0E\x505Davvero? Che invidiaaa!\n\n\n\n\x0E\x01\x09\x04\x0E\x1F0AMa il mondo è grande!\nDi certo ce ne sono ancora\nnascosti qua e là...\n\nQuindi, non perderò tempo\ne m'impegnerò ancora di più!\nLa prossima volta non mi\nfarò fregare da te!")
          			flw_195:
/*<195>*/ 			scene_flags[4 'Eldin Volcano'][82 /* 0xB 04 */] = true;
          		  case 1:
/*<194>*/ 			printf("\x0E\x01\x09\x04\x0E\x40ACome? Niente di entusiasmante,\nquindi... che peccato!\n\n\n\x0E\x01\x09\x04\x0F\x508Ma non ti abbattere!\nIl mondo è grande e di certo\nci sono tesori nascosti qua e là!")
          			goto flw_195
          		}
          	}
          }

          void entrypoint_303_09() {
/*< 38>*/ 	start()
/*< 45>*/ 	switch (story_flags[173 /* us: 805A9AE2 0x10, jp: 805ACD62 0x10 */]) {
          	  case 0:
/*< 52>*/ 		switch (scene_flags[111 /* 0xC 80 */]) {
          		  case 0:
/*< 53>*/ 			printf("Credo che ora riprenderò la\nmia spedizione di ricerca...\nNon abbatterti mai, roccia!")
          		  case 1:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x18\x1702Allora, roccia?! Com'è andata?! Cosa\nc'era dentro?\n[1]Trappole[2]Mostri")
/*< 47>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_49:
/*< 49>*/ 				switch (story_flags[248 /* us: 805A9AF7 0x04, jp: 805ACD77 0x04 */]) {
          				  case 0:
/*< 50>*/ 					printf("\x0E\x01\x09\x04\x16\x1E56Ah... capisco... significa che lascerò\na te l'esplorazione...\n\n\n\x0E\x01\x09\x04\x08\xBFFCredo che continuerò le mie\nricerche da qualche altra parte!\nA presto, roccia!")
          					flw_51:
/*< 51>*/ 					scene_flags[5 'Eldin Volcano Summit'][111 /* 0xC 80 */] = true;
          				  case 1:
/*< 48>*/ 					printf("\x0E\x01\x09\x04\x16\x1E56Ah... capisco... significa che lascerò\na te l'esplorazione...\n\n\n\x0E\x01\x09\x04\x08\xBFFPiuttosto... ho la sensazione che\nqui vicino ci sia qualche <y<esaedro\ndella Dea>>.\n\nMi sbaglio molto difficilmente,\nquindi puoi fidarti e provare\na cercare in giro!")
          					goto flw_51
          				}
          			  case 1:
          				goto flw_49
          			}
          		}
          	  case 1:
/*< 43>*/ 		switch (story_flags[187 /* us: 805A9AE9 0x04, jp: 805ACD69 0x04 */]) {
          		  case 0:
/*< 44>*/ 			printf("\x0E\x01\x09\x04\x17\x1908Sei acuto come una stalattite!\nTrovi sempre una soluzione!\n\n\n\x0E\x01\x09\x04\x08\xBFFCredo di doverti quantomeno cedere\nl'onore di entrare per primo! Prego!")
          		  case 1:
/*< 40>*/ 			switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
          			  case 0:
/*<284>*/ 				switch (temp_flags[15 /* 0x0 80 */]) {
          				  case 0:
/*<285>*/ 					printf("\x0E\x01\x09\x04\x18\x1707Un <r<grosso recipiente >>con tanta <r<acqua>>...\nDove possiamo procurarceli?")
          				  case 1:
/*< 41>*/ 					printf("\x0E\x01\x09\x04\x18\x1707Cosa si può usare per versarci <r<acqua\n>>in abbondanza? Servirebbe un <r<grosso\nrecipiente>>...\n\n\x0E\x01\x09\x04\x16\x1EFFRoccia, ti sei avventurato in tanti\nposti, no? Non ti viene in mente\nniente?!")
/*<283>*/ 					temp_flags[15 /* 0x0 80 */] = true;
          				}
          			  case 1:
/*< 39>*/ 				printf("Hai visto anche tu, roccia?!\nHa un'aria oltremodo sospetta!\n\n\n\x0E\x01\x09\x04\x17\x1908Non è il momento di pensare agli\n<y<esaedri della Dea>>! Qui deve esserci\nnascosto <r<qualcosa di molto\nimportante>>!")
/*<144>*/ 				set_camera(4, 0)
/*<146>*/ 				printf("\x0E\x01\x09\x04\x16\x1EFFComunque sia... questa volta\nè un bel problema! Non ce la\ncaveremo certo con un'<y<ampolla>>.")
/*<145>*/ 				set_camera(-1, 0)
/*<147>*/ 				printf("\x0E\x01\x09\x04\x00\x07Mmh...<pause0F> \x0E\x01\x09\x04\x18\x1700Ci servirebbe qualcosa di\nadatto allo scopo, come per esempio\nun <r<grosso recipiente>>.<pling> Non ce l'hai?\n\n\x0E\x01\x09\x04\x16\x1EFFE poi, deve poter contenere tanta\n<r<acqua>>... Sempre più difficile...")
/*< 42>*/ 				story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_303_26() {
/*< 89>*/ 	start()
/*< 90>*/ 	printf("Vuoi che versi l'acqua lì?\nBene, lascia fare a me! Bzzz!")
          }

          void entrypoint_303_43() {
/*<201>*/ 	start()
/*<202>*/ 	printf("Siamo arrivati al vulcano di Oldin.\n\n\n\nÈ possibile impostare il <r<rilevatore\n>>sul portale della prova necessaria\nper ottenere la fiamma sacra.")
          }

