          void entrypoint_303_27() {
/*< 91>*/ 	start()
/*< 92>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "Mia adorata Faih! Bzzz! Hai visto\ncome sono stato bravo?")
          }

          void entrypoint_303_44() {
/*<203>*/ 	start()
/*<204>*/ 	printf(/* textboxtype: 1, unk: 0, line: 1 */ "Argh! Che caldo terribile! Bzzz!\nPer fortuna sono un modello\nmodernissimo, posso sopportarlo!")
          }

          void entrypoint_303_10() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ "<sound 114>Ehi?! Dove vai?! Bzzz! Se hai cose\nda fare, io ti aspetto qui.\nSbrigati però!")
          }

          void entrypoint_303_28() {
/*< 93>*/ 	start()
/*< 94>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "Se dovessi servirti ancora, non esitare\na chiamarmi! Bzzz!")
          }

          void entrypoint_303_45() {
/*<205>*/ 	start()
/*<206>*/ 	printf(/* textboxtype: 1, unk: 0, line: 2 */ "Ehi! Dove stiamo andando? Secondo\nme non è questo il posto giusto. Vedi\ndi stare attento a dove vai! Bzzz!")
          }

          void entrypoint_303_11() {
/*< 56>*/ 	start()
/*< 57>*/ 	printf(/* textboxtype: 1, unk: 0, line: 5 */ "<sound 114>Mi attaccano! Aiuto!\nVieni, svelto! Bzzz!")
          }

          void entrypoint_303_29() {
/*< 95>*/ 	start()
/*< 96>*/ 	printf(/* textboxtype: 2, unk: 0, line: 104 */ "Confermo che le fiamme sono state\nestinte. Vi suggerisco di proseguire.")
/*<200>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<291>*/ 	story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = false;
          }

          void entrypoint_303_46() {
/*<207>*/ 	start()
/*<208>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "Ehi! Siamo arrivati? Sbrighiamoci!\nBzzz!")
          }

          void entrypoint_303_12() {
/*< 58>*/ 	start()
/*< 59>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "<sound 114>Eeehiii!!! Bzzz! Sbrigati a fare\nqualcosa!!!")
          }

          void entrypoint_303_47() {
/*<219>*/ 	start()
/*<220>*/ 	printf(/* textboxtype: 2, unk: 0, line: 121 */ "Ben tornato, <0x10012:0x00000004>mio signore\n<heroname>.\n\n\nGrazie al potere dei <color yellow<termorecchini\n>coloroff>ora siete in grado di oltrepassare zone\nincandescenti. Suggerisco, quindi, di\ncontinuare a cercare la <color red<fiamma sacra>coloroff>.")
          }

          void entrypoint_303_13() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10005:0x003c0000><0x10008:0x02cd>AAAH!")
          }

          void entrypoint_303_30() {
/*< 97>*/ 	start()
/*< 98>*/ 	printf(/* textboxtype: 2, unk: 0, line: 105 */ "<0x10005:0x004b0000><0x10012:0x0000000b>Signore, Faih a rapporto.\nSiamo nelle vicinanze del cratere del\n<color blue<vulcano di Oldin>coloroff>, in cima alla\nmontagna.")
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
/*<271>*/ 					printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x00110801>Ehi, sei riuscito a far fuori quei tipi\n<color red<con lo scudo enorme>coloroff>?\n\n\n<0x10009:0x00ffff00>Taglia lo scudo se è di legno, respingi le\nlance con il tuo scudo e pensa agli altri\ncome se fossero un muro.\n\nSe tieni a mente queste semplici\nregole, sconfiggerai tutti!")
/*<272>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				  case 1:
/*<263>*/ 					printf(/* textboxtype: 1, unk: 0, line: 97 */ "Ehilà! Ciao!\nQuei tipi <color red<con lo scudo enorme\n>coloroff>continuano a darti problemi?\n\n<0x10009:0x0015080b>Se vuoi, posso svelarti l'<color red<ultima\ninformazione segreta >coloroff>per\nmetterli al tappeto!")
/*<264>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 256, 'param3': 12}
/*<256>*/ 					printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x00ffff09>Ov‐<pause 10>via‐<pause 10>men‐<pause 10>te<pause 10> il prezzo sale...\nChe ne pensi di <color red<50 rupie>coloroff>?[1-]OK![2]No")
          					flw_245:
/*<245>*/ 					switch (choice(2)) {
          					  case 0:
/*<247>*/ 						check_item_flag(501, 50)
/*<248>*/ 						switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 84}) {
          						  case 0:
/*<269>*/ 							rupees += -50;
/*<250>*/ 							printf(/* textboxtype: 1, unk: 0, line: 91 */ "<0x10009:0x0011080b>Bene, anzi, benissimo!\nMi piace il tuo spirito!\nNon ti tiri indietro...\n\n<0x10009:0x00141200>Vedi di non farti fregare\ndagli altri, ora...")
/*<251>*/ 							scene_flags[4 'Eldin Volcano'][114 /* 0xF 04 */] = true;
/*<265>*/ 							printf(/* textboxtype: 1, unk: 0, line: 92 */ "<0x10009:0x00ffff00>Dunque, questa è l'ultima.\nHai presente quei tipi grossi\ncon gli scudi che sembrano muri?!\n\n<0x10009:0x00110800>Affrontali con la stessa determinazione\nche useresti nei confronti di un muro!\n\n\n<0x10009:0x00ffff09>Eh eh eh! Ti lascio il brivido\ndi scoprire cosa succede!\nProva, mi raccomando!\n\n<0x10009:0x00110800>Datti da fare! Vai a dar loro una\nlezione! E grazie!")
/*<266>*/ 							scene_flags[4 'Eldin Volcano'][114 /* 0xF 04 */] = true;
/*<275>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						  case 1:
/*<249>*/ 							printf(/* textboxtype: 1, unk: 0, line: 101 */ "<0x10009:0x00141215>Ehi, guarda che non ti bastano le\nrupie! Non ti dirò niente senza\nuna giusta ricompensa.\n\n<0x10009:0x00ffff00>Metti da parte <color red<50 rupie>coloroff> e poi torna qui!")
/*<274>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					  case 1:
/*<246>*/ 						printf(/* textboxtype: 1, unk: 0, line: 100 */ "<0x10009:0x00141215>Vuoi dirmi che non vuoi investire\nqueste <color red<50 rupie>coloroff>?!\nChe tirchio!\n\n<0x10009:0x00ffff00>Beh, se cambi idea torna pure da me!")
/*<273>*/ 						zone_temp_flags[7 /* 0x1 80 */] = true;
          					}
          				}
          			  case 1:
/*<261>*/ 				printf(/* textboxtype: 1, unk: 0, line: 95 */ "Ciao! Quei tipi <color red<con lo scudo enorme\n>coloroff>ti danno filo da torcere?\n\n\n<0x10009:0x0015080b>Se vuoi, posso svelarti delle\n<color red<informazioni ancora più\nsegrete>coloroff> grazie alle quali\npotrai sicuramente vincere!")
/*<262>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 255, 'param3': 12}
/*<255>*/ 				printf(/* textboxtype: 1, unk: 0, line: 96 */ "<0x10009:0x00ffff09>Ov‐<pause 10>via‐<pause 10>men‐<pause 10>te<pause 10> non dirò niente gratis!\nTi chiedo <color red<30 rupie>coloroff>, che ne dici?[1-]OK![2]No")
          				flw_234:
/*<234>*/ 				switch (choice(2)) {
          				  case 0:
/*<236>*/ 					check_item_flag(501, 30)
/*<237>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 78}) {
          					  case 0:
/*<268>*/ 						rupees += -30;
/*<239>*/ 						printf(/* textboxtype: 1, unk: 0, line: 88 */ "<0x10009:0x00110808>Oooh... bravo!\nTi interessa, allora!\nAscolta bene!\n\n<0x10009:0x00ffff00>Quando ti attaccano con le lance\nlunghe, c'è poco da fare...\n\n\nMa se tu riesci a <color red<respingere l'attacco\ncon lo scudo>coloroff>...<pause 15> <0x10009:0x00110800>beh... il gioco è fatto!\nChiaro?<pause 15>\n[1-]Non lo\nsapevo![2-]Lo sapevo!")
/*<241>*/ 						scene_flags[4 'Eldin Volcano'][113 /* 0xF 02 */] = true;
/*<242>*/ 						switch (choice(2)) {
          						  case 0:
/*<244>*/ 							printf(/* textboxtype: 1, unk: 0, line: 89 */ "<0x10009:0x0011080b>Visto?! Non sai che fatica\nriuscire a ottenere queste\ninestimabili informazioni!\n\n<0x10009:0x00ffff00>Ma non è tutto, potrei dirti dell'altro...<pause 20>\nPerò questa volta ti costerà <color red<50 rupie>coloroff>![1-]OK![2]No")
          							goto flw_245
          						  case 1:
/*<243>*/ 							printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x00120e04>Cosa?! Non ci credo! Non puoi esserti\naccorto di una cosa simile...\n\n\n<0x10009:0x00ffff00>Comunque sia, la prossima è\nun'informazione ancora più utile!\nSolo <color red<50 rupie>coloroff>![1-]Dimmela![2]No")
          							goto flw_245
          						}
          					  case 1:
/*<238>*/ 						printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00141215>Ahi, ahi, mi sa che non bastano queste\nrupie, non ti dirò niente.\n\n\n<0x10009:0x00ffff00>Torna da me quando avrai messo\nda parte <color red<30 rupie>coloroff>!")
/*<276>*/ 						zone_temp_flags[7 /* 0x1 80 */] = true;
          					}
          				  case 1:
/*<235>*/ 					printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00141215>Ma dai... che vuoi che siano <color red<30 rupie>coloroff>!\n\n\n\n<0x10009:0x00ffff00>Vabbè, se per caso cambiassi idea,\ntorna da me!")
/*<277>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				}
          			}
          		  case 1:
/*<259>*/ 			printf(/* textboxtype: 1, unk: 0, line: 93 */ "Sei di nuovo tu! Quei tipi <color red<con lo scudo\nenorme >coloroff>ti danno filo da torcere?\n\n\n<0x10009:0x0015080b>Se vuoi ho delle <color red<informazioni segrete \n>coloroff>che ti aiuteranno a vincere!")
/*<260>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 253, 'param3': 12}
/*<253>*/ 			printf(/* textboxtype: 1, unk: 0, line: 94 */ "<0x10009:0x00ffff09>Ov‐<pause 10>via‐<pause 10>men‐<pause 10>te<pause 10> non dirò niente gratis!\nTi chiedo <color red<30 rupie>coloroff>, che ne dici?[1-]OK![2]No")
          			flw_225:
/*<225>*/ 			switch (choice(2)) {
          			  case 0:
/*<227>*/ 				check_item_flag(501, 30)
/*<228>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 72}) {
          				  case 0:
/*<267>*/ 					rupees += -30;
/*<230>*/ 					printf(/* textboxtype: 1, unk: 0, line: 85 */ "<0x10009:0x00110809>Affare fatto!\nBene, ora ti dico tutto, ma ricordati\nche è un segreto!\n\n<0x10009:0x00ffff00>Vedi...<pause 20> puoi spaccare il loro scudo!\nAllora? Non è una notizia utilissima?!\n\n\nAlcuni di loro però, hanno degli scudi\nrinforzati col metallo e quelli non puoi\ntagliarli![1-]Bene![2-]Tutto qui?")
/*<240>*/ 					scene_flags[4 'Eldin Volcano'][112 /* 0xF 01 */] = true;
/*<231>*/ 					switch (choice(2)) {
          					  case 0:
/*<233>*/ 						printf(/* textboxtype: 1, unk: 0, line: 86 */ "<0x10009:0x0015090b>Eh eh eh! Ma non è finita qui!\nHo altre informazioni utili!\nSei curioso, vero?\n\n<0x10009:0x00ffff00>Bene...<pause 20>\n<color red<30 rupie >coloroff>e ti dico tutto![1-]OK![2]No")
          						goto flw_234
          					  case 1:
/*<232>*/ 						printf(/* textboxtype: 1, unk: 0, line: 87 */ "Ehi, cos'è quella faccia?\nCome se sapessi già\ntutto...\n\n<0x10009:0x00150809>Quello che ti ho detto prima\nera nulla a confronto di quanto ti\ndirei ora! Su, <color red<30 rupie>coloroff>![1-]OK![2]No")
          						goto flw_234
          					}
          				  case 1:
/*<229>*/ 					printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00141215>Ahi, ahi, mi sa che non bastano queste\nrupie, non ti dirò niente.\n\n\n<0x10009:0x00ffff00>Torna da me quando avrai messo\nda parte <color red<30 rupie>coloroff>!")
/*<278>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				}
          			  case 1:
/*<226>*/ 				printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00141215>Ma dai... che vuoi che siano <color red<30 rupie>coloroff>!\n\n\n\n<0x10009:0x00ffff00>Vabbè, se per caso cambiassi idea,\ntorna da me!")
/*<279>*/ 				zone_temp_flags[7 /* 0x1 80 */] = true;
          			}
          		}
          	  case 1:
/*<222>*/ 		printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000001>Ciao!\nSei venuto a prendere fiato qui, eh?\nI mostri sono una scocciatura...\n\n<0x10009:0x00110900>Soprattutto quelli lì <color red<con lo scudo\nenorme >coloroff>sembrano parecchio forti!\n\n\n<0x10009:0x0015080b>Visto che siamo amici, ti svelerò un\n<color red<segreto >coloroff>per batterli senza problemi!")
/*<258>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 257, 'param3': 12}
/*<257>*/ 		printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x00ffff09>Ov‐<pause 10>via‐<pause 10>men‐<pause 10>te<pause 10> non te lo dirò certo\ngratis! Ti chiedo <color red<30 rupie>coloroff>,\nche ne dici?[1-]OK![2]No")
/*<224>*/ 		scene_flags[4 'Eldin Volcano'][108 /* 0xC 10 */] = true;
          		goto flw_225
          	}
          }

          void entrypoint_303_14() {
/*< 62>*/ 	start()
/*< 63>*/ 	printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10005:0x005a0000>Mi‐bzzz... mi sto‐bzz...\nrompendo‐bzzz!\nColpa‐bzzz tua‐bzzz!!!")
          }

          void entrypoint_303_31() {
/*< 99>*/ 	start()
/*<100>*/ 	printf(/* textboxtype: 2, unk: 0, line: 106 */ "<0x10005:0x005a0000>In questa zona vi è una <color red<temperatura\nestremamente elevata>coloroff>, ma grazie ai\n<color yellow<termorecchini>coloroff> potete resistere.")
          }

          void entrypoint_303_49() {
/*<280>*/ 	start()
/*<281>*/ 	printf(/* textboxtype: 2, unk: 0, line: 122 */ "<0x10012:0x0000000b>Signore <heroname>, Faih\na rapporto. Non rilevo presenza\nd'<color red<acqua >coloroff>in questo luogo.\n\nPer attivare quel meccanismo è\nnecessario un grosso recipiente, ma\nsuggerirei comunque di focalizzare\nl'attenzione sulla <sound 4>ricerca dell'<color red<acqua>coloroff>.")
/*<282>*/ 	scene_flags[5 'Eldin Volcano Summit'][115 /* 0xF 08 */] = true;
          }

          void entrypoint_303_15() {
/*< 64>*/ 	start()
/*< 65>*/ 	printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10012:0x00000064>Ehi! Io non posso seguirti da\nquella parte! Fammi strada\ncamminando! Bzzz!")
          }

          void entrypoint_303_32() {
/*<101>*/ 	start()
/*<102>*/ 	printf(/* textboxtype: 2, unk: 0, line: 107 */ "<0x10005:0x005a0000>Probabilità che l'ultima <color red<fiamma sacra\n>coloroff>si trovi in questa zona: 90%.")
          }

          void entrypoint_303_16() {
/*< 66>*/ 	start()
/*< 67>*/ 	printf(/* textboxtype: 1, unk: 0, line: 11 */ "<sound 114>Ehi, ehi! Non mollarmi qui! Bzzz!")
          }

          void entrypoint_303_33() {
/*<103>*/ 	start()
/*<104>*/ 	printf(/* textboxtype: 2, unk: 0, line: 108 */ "Confermo il guasto del robot.\nSuggerisco di tornare indietro\ne ripararlo.")
          }

          void entrypoint_303_50() {
/*<293>*/ 	start()
/*<294>*/ 	printf(/* textboxtype: 2, unk: 0, line: 123 */ "<0x10012:0x0000000b>Signore <heroname>, Faih\na rapporto. Il robot è in attesa ai piedi\ndel vulcano.\n\nPer prima cosa, suggerirei di\nripercorrere il vulcano e guidare il\nrobot fino a qui.")
/*<295>*/ 	temp_flags[29 /* 0x2 20 */] = true;
          }

          void entrypoint_303_17() {
/*< 68>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 1, unk: 0, line: 12 */ "<sound 114>Ti ho perso di vista! Controlla\ndove mi trovo sulla <color red<mappa>coloroff> con (+)\ne vieni subito a prendermi! Bzzz!")
          }

          void entrypoint_303_34() {
/*<105>*/ 	start()
/*<106>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "Questa volta vedi di fare\nil tuo dovere!!! Bzzz!")
/*<199>*/ 	story_flags[723 /* us: 805A9B24 0x08, jp: 805ACDA4 0x08 */] = false;
          }

          void entrypoint_303_00() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "Forza, sbrigati, signor Verdino!\nTi seguo, fai strada! Bzzz!")
          }

          void entrypoint_303_18() {
/*< 70>*/ 	start()
/*<196>*/ 	switch (random(3)) {
          	  case 0:
/*< 71>*/ 		printf(/* textboxtype: 1, unk: 0, line: 13 */ "<sound 114>Ehi! EHI! Mooostriii!!! Presto!\nFai qualcosa! Bzzz!")
          	  case 1:
/*<197>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "<sound 114>AAAH! Aiutooo! Sbrigati!!!\nFai qualcosa! Bzzz!")
          	  case 2:
/*<198>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "<sound 114>AAAH! Mo... mostriii!\nChe fifaaa!!! Bzzz!")
          	}
          }

          void entrypoint_303_35() {
/*<107>*/ 	start()
/*<108>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "Se dovessi servirti ancora, non esitare\na chiamarmi! Bzzz!")
          }

          void entrypoint_303_01() {
/*<  2>*/ 	start()
/*<  6>*/ 	switch (story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */]) {
          	  case 0:
/*<  8>*/ 		printf(/* textboxtype: 1, unk: 0, line: 35 */ "Anche su questo vulcano sento che\npotrebbero esserci altri <color yellow<esaedri\ndella Dea>coloroff>, cercali!")
          	  case 1:
/*<  3>*/ 		printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x00151b09>Oh, ciao roccia!\nCi incontriamo di nuovo! Stai bene?\n\n\nHo sentito dire che da queste parti ci\nsono degli <color yellow<esaedri della Dea >coloroff>e ho fatto\nun salto!\n\nAnche tu ne avrai trovati diversi,\nma ho la sensazione che ce ne\nsiano altri nascosti!\n\n<0x10009:0x001817ff>Perché non ti metti a cercarli?")
/*<  9>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_303_19() {
/*< 72>*/ 	start()
/*< 74>*/ 	switch (random(3)) {
          	  case 0:
/*< 73>*/ 		printf(/* textboxtype: 1, unk: 0, line: 16 */ "<sound 114>Ehi! Quanto vuoi farmi aspettare?!\nSe non sai dove mi trovo, controlla\ncon (+) sulla <color red<mappa>coloroff>! Bzzz!")
          	  case 1:
/*< 75>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "<sound 114>Svelto, vieni qui!!! Bzzz! Se non sai\ndove trovarmi, controlla\ncon (+) sulla <color red<mappa>coloroff>!")
          	  case 2:
/*< 76>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<sound 114>Che stai combinando?! Bzzz! Vieni qui,\nsbrigati! Se non sai dove mi trovo,\ncontrolla sulla <color red<mappa >coloroff>con (+)!")
          	}
          }

          void entrypoint_303_36() {
/*<109>*/ 	start()
/*<213>*/ 	switch (story_flags[744 /* us: 805A9B29 0x01, jp: 805ACDA9 0x01 */]) {
          	  case 0:
/*<215>*/ 		set_camera(2, 0)
/*<216>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 49, 'next': 217, 'param3': 32}
/*<217>*/ 		make_actor_do_something(0, 49)
/*<214>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "")
/*<218>*/ 		story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = true;
          	  case 1:
/*<116>*/ 		set_camera(2, 0)
/*<209>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 49, 'next': 210, 'param3': 32}
/*<210>*/ 		make_actor_do_something(0, 49)
/*<110>*/ 		printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10012:0x00000064>Cosa, cosa? Bzzz?\nStavo per fermarmi, non\nvolevi che portassi qui l'orcio?!\n\n<pause 10>Cosa?! In cima al vulcano?!<pause 15> Potevi\ndirlo prima, bzzz! Che domande!\nMi pare ovvio che non mi diverta a\nscarrozzare questo coso pesante!<pause 15>")
/*<114>*/ 		set_camera(1, 0)
/*<111>*/ 		printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10012:0x00000064>Qui ci sono un sacco di mostri, bzzz!")
/*<115>*/ 		set_camera(3, 0)
/*<112>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10012:0x00000064>B‐bzzz! Non ho certo paura dei\nmostri, io! Bzzz! È solo che ora\nsto portando l'orcio d'acqua...")
/*<113>*/ 		printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10012:0x00000064>Forza, signor Verdino! \nVisto che sei qui, dimostra il tuo\nvalore! Bzzz! Mi farai da scudo,\nio ti seguirò, bzzz!")
/*<187>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10012:0x00000064>Non farmi nemmeno sfiorare da\nquei mostri! Bzzz!")
/*<211>*/ 		story_flags[744 /* us: 805A9B29 0x01, jp: 805ACDA9 0x01 */] = true;
/*<212>*/ 		story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = true;
          	}
          }

          void entrypoint_303_02() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 2, unk: 0, line: 103 */ "<0x10012:0x0000000b>Signore, Faih a rapporto.\nGrazie alla nuova forza della\nvostra spada, è possibile registrare gli\n<color yellow<esaedri della Dea >coloroff>nel <color red<rilevatore>coloroff>!\nHo aggiunto l'<color yellow<esaedro della Dea>coloroff>\nalle frequenze del <color red<rilevatore>coloroff>.\n<sound 4>Fatene buon uso.")
/*<  7>*/ 	story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */] = true;
/*<290>*/ 	open_dowsing_wheel(21)
          }

          void entrypoint_303_37() {
/*<117>*/ 	start()
/*<124>*/ 	switch (story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */]) {
          	  case 0:
/*<125>*/ 		printf(/* textboxtype: 1, unk: 0, line: 59 */ "Che scocciatura però, essere arrivati\nfin qui e non riuscire a entrare!\n\n\n<0x10009:0x00150dff>...<pause 20> Ho la sensazione di stare\nscordando qualcosa di estremamente\nimportante.\n\nQualcosa che mi aveva detto un mio\namico...<pause 20>\n<0x10009:0x00000004>Mmh... cos'era...?\n\n<0x10009:0x000908ff>Boh, non importa... \nSe hai bisogno di tanta acqua, ti\nconsiglio di andare al <color red<lago di Floria>coloroff>!")
          		flw_141:
/*<141>*/ 		switch (story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */]) {
          		  case 0:
          		  case 1:
/*<138>*/ 			zone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	  case 1:
/*<118>*/ 		printf(/* textboxtype: 1, unk: 1, line: 55 */ "<0x10009:0x00110801>Ma ciao, amico! Anche tu da queste\nparti?! Sempre in cerca della tua\namica?\n\n<0x10009:0x000908ff>Io, ovviamente, sono in cerca di\ntesori! Mi hanno detto che ci sono\ndelle splendide rovine...\n\n<0x10009:0x00150dff>Ancora non ho trovato niente di\ninteressante, tu sai qualcosa?\n[1-]Beh...[2-]Non te\nlo dico")
/*<119>*/ 		switch (choice(2)) {
          		  case 0:
/*<120>*/ 			printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x00110900>Ne sai qualcosa, allora! Siamo amici\nnoi, vero?! Dai, raccontami tutto!")
          			flw_122:
/*<122>*/ 			printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x0009080e>Come? Delle fiamme ti impediscono di\npassare? Perché non ci butti su\ndell'acqua?\n\n<0x10009:0x00150800>Dici che te ne serve molta? Capisco...<pause 20>\nQuella che c'è qui non ti basta,\nquindi...\n\n<0x10009:0x000908ff>A pensarci bene, pare che la fonte\ndell'acqua di qui, sia la stessa di quella\ndel <color red<lago di Floria<sound 4>>coloroff>!\n\n<0x10009:0x001108ff>Un mio amico che è andato a caccia di\ntesori nella <color blue<foresta di Firone>coloroff>, mi ha\ndetto che è tornato qui seguendo quella\nvena d'acqua!\n<0x10009:0x000908ff>OK, sto divagando. La cosa importante\nè che pare proprio che lì ci sia un lago\nbello grosso! Perché non provi ad\nandarci e vedere di cavarne qualcosa?!")
/*<123>*/ 			story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */] = true;
          			goto flw_141
          		  case 1:
/*<121>*/ 			printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x0014120a>E daaai! Non fare il prezioso!\nSiamo amici, no?!\nDimmi tutto!")
          			goto flw_122
          		}
          	}
          }

          void entrypoint_303_03() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 7, unk: 0, line: 102 */ "Dai da bere agli assetati e la via\nsi aprirà.")
          }

          void entrypoint_303_20() {
/*< 77>*/ 	start()
/*< 78>*/ 	printf(/* textboxtype: 1, unk: 0, line: 19 */ "<sound 114>Meno male! Bzzz! Non mi piantare\npiù in asso!")
          }

          void entrypoint_303_38() {
/*<126>*/ 	start()
/*<135>*/ 	switch (scene_flags[114 /* 0xF 04 */]) {
          	  case 0:
/*<136>*/ 		printf(/* textboxtype: 2, unk: 1, line: 117 */ "<heroname>, <0x10012:0x0000000b>mio signore, Faih a\nrapporto. Ancora non potete\nproseguire a causa delle fiamme.\n<color blue<\n>coloroff>Desiderate che imposti il <color green<rilevatore>coloroff>\nsul recipiente in cui si trovava il\n<color blue<drago d'acqua>coloroff>?\n[1-]OK![2]No")
          		flw_139:
/*<139>*/ 		switch (choice(2)) {
          		  case 0:
/*<128>*/ 			story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = true;
/*<129>*/ 			story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<130>*/ 			story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<131>*/ 			story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<132>*/ 			story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<133>*/ 			story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<289>*/ 			printf(/* textboxtype: 2, unk: 0, line: 118 */ "<0x10012:0x00000005>Bene signore, ho impostato il <color green<rilevatore\n>coloroff>sul recipiente in cui si trovava\nil <color blue<drago d'acqua>coloroff>.<sound 4>")
/*<288>*/ 			open_dowsing_wheel(13)
          			flw_134:
/*<134>*/ 			scene_flags[5 'Eldin Volcano Summit'][114 /* 0xF 04 */] = true;
/*<137>*/ 			zone_temp_flags[0 /* 0x1 01 */] = false;
          		  case 1:
/*<140>*/ 			printf(/* textboxtype: 2, unk: 0, line: 119 */ "<0x10012:0x00000005>Bene signore, procederò in un altro\nmomento.")
          			goto flw_134
          		}
          	  case 1:
/*<127>*/ 		printf(/* textboxtype: 2, unk: 1, line: 109 */ "<0x10012:0x0000000b><heroname>, mio signore, Faih\na rapporto. Consiglierei di dirigerci\nverso il <color red<lago di Floria>coloroff>, come suggerito\ndal <color blue<Mogma>coloroff>.\nPer quanto concerne il problema di\ncome trasportare l'acqua dal lago...<pause 15>\n<sound 4>Suggerirei di consultarvi con il <color red<drago\nd'acqua>coloroff>.\nConfermo che sarebbe possibile\ntrasportare una grande quantità\nd'acqua utilizzando l'<color red<orcio>coloroff> in cui il\ndrago risiedeva per curarsi.")
/*<296>*/ 		printf(/* textboxtype: 2, unk: 1, line: 116 */ "Basandomi sulle informazioni raccolte\nin passato, posso impostare il\n<color red<rilevatore >coloroff>su quell'oggetto. Procedo?\n[1-]OK![2]Non ora")
          		goto flw_139
          	}
          }

          void entrypoint_303_04() {
/*< 12>*/ 	start()
/*< 14>*/ 	switch (story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */]) {
          	  case 0:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00151b09>Ehilà! Anche tu sei venuto in cerca\ndegli <color yellow<esaedri della Dea>coloroff>? Sei pure\npassato da quella zona torrida!\n\n<0x10009:0x00ffff00>Non ho problemi con il caldo,\nma queste fiamme mi bloccano\nil passaggio!")
          		flw_17:
/*< 17>*/ 		printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x001817ff>Non puoi fare qualcosa per queste\nfiamme?")
          	  case 1:
/*< 13>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00151b09>Ciao roccia! Ci rincontriamo!\nTutto bene?\n\n\n<0x10009:0x00160bff>Ho sentito dire che da queste parti\nci sono degli <color yellow<esaedri della Dea >coloroff>e ho\nfatto un salto!\n\n<0x10009:0x00000b00>Secondo me, anche qui in fondo\nce ne potrebbe essere uno...\nSolo che per colpa di tutte quelle\nfiamme, non posso proseguire!")
/*< 16>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_17
          	}
          }

          void entrypoint_303_21() {
/*< 79>*/ 	start()
/*< 80>*/ 	printf(/* textboxtype: 1, unk: 0, line: 20 */ "<sound 114>Ohi! Che stai facendo?!\nBzzz!")
          }

          void entrypoint_303_39() {
/*<148>*/ 	start()
/*<150>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*<151>*/ 		printf(/* textboxtype: 1, unk: 2, line: 61 */ "<0x10009:0x000c0405>Mi piacerebbe un bellissimo posto in\nalto, per godermi al meglio una vita\nin panciolle!\n\n<0x10009:0x000c0dff>Sai, ho vissuto sempre sottoterra, ma\nadoro ammirare il cielo!\n\n\n<0x10009:0x00090906>Se potessi rinascere, mi piacerebbe\npoter essere un uccello per poter\nvolare!")
          	  case 1:
/*<149>*/ 		printf(/* textboxtype: 1, unk: 2, line: 60 */ "<0x10009:0x000b0c07>Ehi! Ma tu sei quello dell'altra volta!\n\n\n\n<0x10009:0x000b0506>Oh oh oh! Come ti trovi con quei\nguanti di mia invenzione?!\n\n\nCome? Io come sto? Io...\n\n\n\n<0x10009:0x000c0405>Da quella volta sono andato in cerca di\nun nuovo posto in cui scovare tesori,\nma con scarsa fortuna! Mi sono stufato\ndi cercare tesori in posti torridi...\n<0x10009:0x00090908>Sto iniziando a pensare di ritirarmi a\nuna vita più tranquilla e godermi\nla vecchiaia!")
/*<152>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          	}
          }

          void entrypoint_303_05() {
/*< 23>*/ 	start()
/*< 21>*/ 	switch (scene_flags[106 /* 0xC 04 */]) {
          	  case 0:
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x00181700>Esci da qui e, in fondo, gira a destra.\nTroverai una <color red<sorgente d'acqua>coloroff>.\nMa cosa possiamo farci?")
          	  case 1:
/*< 20>*/ 		switch (scene_flags[105 /* 0xC 02 */]) {
          		  case 0:
/*< 18>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "“Dai da bere agli assetati\"?!\nA proposito, c'è un'uscita giusto\ntornando indietro, in fondo a destra.\n\nLì ho trovato una <color red<sorgente d'acqua>coloroff>!<sound 4>\nEra ottima!\n\n\n<0x10009:0x00181705>Ma si può portare l'acqua fin qui?\nQuella cosa strana che sembra una\nrana non si può mica trasportare...<pause 15>\nChe si fa?")
/*< 19>*/ 			scene_flags[5 'Eldin Volcano Summit'][106 /* 0xC 04 */] = true;
          		  case 1:
/*< 24>*/ 			printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x001817ff>Non puoi fare qualcosa per queste\nfiamme?")
          		}
          	}
          }

          void entrypoint_303_22() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<sound 114>Ehi! Se andiamo avanti così finirà\nche mi romperò! Bzzz!")
          }

          void entrypoint_303_06() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x00171908>OOOH! Si sono spente le fiamme!\nOra si può proseguire!")
/*<153>*/ 	{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6911, 'next': 28, 'param3': 13}
/*< 28>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 0, 'next': 27, 'param3': 14}
/*< 27>*/ 	story_flags[468 /* us: 805A9B0F 0x40, jp: 805ACD8F 0x40 */] = true;
/*<142>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_303_23() {
/*< 83>*/ 	start()
/*< 84>*/ 	printf(/* textboxtype: 2, unk: 0, line: 22 */ "<0x10012:0x0000000b>Signore, il robot ci attende al vulcano:\nandiamoci al più presto.")
          }

          void entrypoint_303_40() {
/*<155>*/ 	start()
/*<157>*/ 	switch (story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */]) {
          	  case 0:
          		flw_165:
/*<165>*/ 		switch (scene_flags[81 /* 0xB 02 */]) {
          		  case 0:
/*<166>*/ 			printf(/* textboxtype: 1, unk: 0, line: 70 */ "<0x10009:0x001a030d>Capo... ti renderò fiero di me!\n\n\n\nContinua a vegliare su di noi lì\ndal cielo...")
          		  case 1:
/*<158>*/ 			printf(/* textboxtype: 1, unk: 1, line: 67 */ "<0x10009:0x001c180f>Ooh...\nIl capo s'è involato!\nDov'è andato?\n[1-]Cielo[2-]Paradiso")
/*<161>*/ 			switch (choice(2)) {
          			  case 0:
/*<162>*/ 				printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x001a2011>In Cielo?!\n\n\n\n... <0x10009:0x001b0407>In effetti<pause 20>... lo diceva sempre\nche amava il cielo!\n\n\nDi sicuro sarà in cerca di tesori\nanche lì!")
          				flw_164:
/*<164>*/ 				scene_flags[4 'Eldin Volcano'][81 /* 0xB 02 */] = true;
          			  case 1:
/*<163>*/ 				printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x001a2011>In paradiso?!\n\n\n\n... <0x10009:0x001b2207>Capisco<pause 20>...\nQuindi ci ha lasciati così...\nDel resto tutti prima o poi dobbiamo\nfare questo viaggio...")
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
/*<177>*/ 					printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x001b2207>Andare su e giù tra cielo e terra non\nè mica una cosa da tutti, eh! Forte!")
          				  case 1:
/*<174>*/ 					printf(/* textboxtype: 1, unk: 0, line: 71 */ "<0x10009:0x001a2011>Che cosa?!\nIl capo è... tornato?!\n\n\n<0x10009:0x001b2207>Incredibile! Può addirittura andare\na piacimento tra cielo e terra!\nChe forza il capo!")
/*<175>*/ 					zone_temp_flags[4 /* 0x1 10 */] = true;
          				}
          			  case 1:
/*<167>*/ 				switch (zone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<172>*/ 					switch (zone_temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*<173>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000015>Vuole ritirarsi...\nSe il capo vuole così, è sempre giusto\ndargli ascolto!")
          					  case 1:
/*<286>*/ 						switch (story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */]) {
          						  case 0:
/*<170>*/ 							printf(/* textboxtype: 1, unk: 0, line: 64 */ "<0x10009:0x001a2001>Ehilà! Sei andato a incontrare il capo?\nCome t'è sembrato?\n... ... ...\n\n<0x10008:0x01cd><0x10009:0x001a2011>COSA?!\nVuole andare in pensione?!\n\n\n... <0x10009:0x000000ff>Cioè?! Che roba è, un nuovo\ntipo di tesoro?!\n\n\n<0x10009:0x001b1e15>Bah, non capisco...\n\n\n\nComunque, se il capo dice così, è\ngiusto accontentarlo!")
          							flw_171:
/*<171>*/ 							zone_temp_flags[3 /* 0x1 08 */] = true;
          						  case 1:
/*<287>*/ 							printf(/* textboxtype: 1, unk: 0, line: 65 */ "<0x10009:0x001b2201>Ehilà! Ciao, amico!\nTutto bene?\n\n\nCome? Io come sto?\nAlla grande!!!\n\n\n<0x10009:0x00000002>Però sono in pensiero per il <color blue<capo>coloroff>... sai,\nè strano da quando è andato alle\nrovine...\n\n<0x10009:0x001b22ff>Tu gli hai parlato giusto poco fa, no?\nCome t'è sembrato?\n\n\n<0x10008:0x01cd><0x10009:0x001a2011>COSA?!\nVuole andare in pensione?!\n\n\n... <0x10009:0x000000ff>Cioè?! Che roba è, un nuovo\ntipo di tesoro?!\n\n\n<0x10009:0x001b1e15>Bah, non capisco...\n\n\n\nComunque, se è quello che il capo\nvuole, è sempre giusto dargli ascolto!")
/*<292>*/ 							story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */] = true;
          							goto flw_171
          						}
          					}
          				  case 1:
/*<168>*/ 					switch (story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */]) {
          					  case 0:
/*<169>*/ 						printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x001b050a>Credo che il <color blue<capo>coloroff> sia qui da qualche\nparte! Passa a salutarlo!\nSarà contento di vederti!")
          					  case 1:
/*<156>*/ 						printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x001b2201>Ehilà! Ciao, amico!\nTutto bene?\n\n\nCome? Io come sto?\nAlla grande!!!\n\n\n<0x10009:0x00000002>Però sono in pensiero per il <color blue<capo>coloroff>... è\nstrano da quando è andato alle\nrovine...\n\n<0x10009:0x001b230a>Boh... In ogni caso, fai un salto\ndal <color blue<capo>coloroff>! Credo sia da queste\nparti!")
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
/*< 32>*/ 		printf(/* textboxtype: 1, unk: 0, line: 43 */ "Mi spiace chiedertelo, roccia...\nMa non potresti occupartene\ndi nuovo tu?")
          	  case 1:
/*< 30>*/ 		printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00161e56>Di nuovo... Che noia queste fiamme...")
/*< 33>*/ 		temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_32
          	}
          }

          void entrypoint_303_24() {
/*< 85>*/ 	start()
/*< 86>*/ 	printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10012:0x00000064>Ti aspettavo! Sbrigati, conducimi in\ncima alla montagna!\nBzzz!")
          }

          void entrypoint_303_41() {
/*<178>*/ 	start()
/*<180>*/ 	switch (zone_temp_flags[5 /* 0x1 20 */]) {
          	  case 0:
/*<181>*/ 		printf(/* textboxtype: 1, unk: 0, line: 76 */ "<0x10009:0x001b2215><color blue<Platio>coloroff>... mostra delle doti spiccate solo\nquando si tratta di cercare tesori!")
          	  case 1:
/*<179>*/ 		printf(/* textboxtype: 1, unk: 1, line: 73 */ "<0x10009:0x001a200f>Oh! Sei quello dell'altra volta!?<pause 15>\n\n\n\n<0x10009:0x001b2209>... Eh eh eh! Va tutto bene!\n\n\n\nMio fratello ha scoperto della\nfaccenda lì alle rovine...\n\n\n<0x10009:0x001b1eff>Anche mio fratello è stato preso, siamo\nproprio simili!\n\n\n<0x10009:0x001a0a12>... Piuttosto, dimmi! Hai mica\nincontrato <color blue<Platio>coloroff>?\n[1-]Era lì[2-]No")
/*<183>*/ 		switch (choice(2)) {
          		  case 0:
/*<184>*/ 			printf(/* textboxtype: 1, unk: 0, line: 74 */ "<0x10009:0x001b0a12>Ah, sì?\nBenissimo!\n\n\nNon lo vedevo da un po'...\n\n\n\n<0x10009:0x001b160f>Ho temuto fosse andato a tirare le\ncuoia in qualcuna delle sue\nstrampalate avventure!\n\n<0x10009:0x001b16ff>Quando si tratta di lui, non si può mai\nstare tranquilli!")
          			flw_182:
/*<182>*/ 			zone_temp_flags[5 /* 0x1 20 */] = true;
          		  case 1:
/*<185>*/ 			printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x001b2207>Accidenti a lui...<pause 20> Sarà andato di nuovo\nda solo in cerca di tesori! Me lo dice\nsempre lui stesso che lavorare da soli\nè pericoloso!\n<0x10009:0x001b0009>Non si possono mettere limiti allo\nspirito da <color blue<cacciatore di tesori>coloroff>!\nSe vedi <color blue<Platio >coloroff>in giro, fammelo\nsapere!")
          			goto flw_182
          		}
          	}
          }

          void entrypoint_303_08() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x00171908>Oooh! Bene!\nProcediamo, procediamo!")
/*<154>*/ 	{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6911, 'next': 37, 'param3': 13}
/*< 37>*/ 	{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 0, 'next': 36, 'param3': 14}
/*< 36>*/ 	story_flags[469 /* us: 805A9B0E 0x02, jp: 805ACD8E 0x02 */] = true;
/*<143>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_303_25() {
/*< 87>*/ 	start()
/*< 88>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10012:0x00000064>Non ti scordare di me, sai!? Bzzz!\nSe non sai dove mi trovo, controlla\nsulla <color red<mappa >coloroff>con (+)!<0x10011:0x03cd>")
          }

          void entrypoint_303_42() {
/*<188>*/ 	start()
/*<190>*/ 	switch (scene_flags[82 /* 0xB 04 */]) {
          	  case 0:
/*<191>*/ 		printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x000d0509>OK! E ora dove posso\nandare in cerca di tesori...?")
          	  case 1:
/*<189>*/ 		printf(/* textboxtype: 1, unk: 1, line: 77 */ "<0x10008:0x01cd><0x10009:0x000e1008>Oh! Ma ciao!\nTutto bene?!\n\n\n<0x10009:0x0011110b>Lo sapevo! Sei riuscito a recuperare\ntutte le tue cose!\n\n\nE quindi...<pause 20> com'è andata?\nHai trovato tesori?\n[1-]Tantissimi![2-]Nessuno!")
/*<192>*/ 		switch (choice(2)) {
          		  case 0:
/*<193>*/ 			printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x000e0505>Davvero? Che invidiaaa!\n\n\n\n<0x10009:0x000e1f0a>Ma il mondo è grande!\nDi certo ce ne sono ancora\nnascosti qua e là...\n\nQuindi, non perderò tempo\ne m'impegnerò ancora di più!\nLa prossima volta non mi\nfarò fregare da te!")
          			flw_195:
/*<195>*/ 			scene_flags[4 'Eldin Volcano'][82 /* 0xB 04 */] = true;
          		  case 1:
/*<194>*/ 			printf(/* textboxtype: 1, unk: 0, line: 79 */ "<0x10009:0x000e040a>Come? Niente di entusiasmante,\nquindi... che peccato!\n\n\n<0x10009:0x000f0508>Ma non ti abbattere!\nIl mondo è grande e di certo\nci sono tesori nascosti qua e là!")
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
/*< 53>*/ 			printf(/* textboxtype: 1, unk: 0, line: 54 */ "Credo che ora riprenderò la\nmia spedizione di ricerca...\nNon abbatterti mai, roccia!")
          		  case 1:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 1, line: 51 */ "<0x10009:0x00181702>Allora, roccia?! Com'è andata?! Cosa\nc'era dentro?\n[1-]Trappole[2-]Mostri")
/*< 47>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_49:
/*< 49>*/ 				switch (story_flags[248 /* us: 805A9AF7 0x04, jp: 805ACD77 0x04 */]) {
          				  case 0:
/*< 50>*/ 					printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x00161e56>Ah... capisco... significa che lascerò\na te l'esplorazione...\n\n\n<0x10009:0x00080bff>Credo che continuerò le mie\nricerche da qualche altra parte!\nA presto, roccia!")
          					flw_51:
/*< 51>*/ 					scene_flags[5 'Eldin Volcano Summit'][111 /* 0xC 80 */] = true;
          				  case 1:
/*< 48>*/ 					printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00161e56>Ah... capisco... significa che lascerò\na te l'esplorazione...\n\n\n<0x10009:0x00080bff>Piuttosto... ho la sensazione che\nqui vicino ci sia qualche <color yellow<esaedro\ndella Dea>coloroff>.\n\nMi sbaglio molto difficilmente,\nquindi puoi fidarti e provare\na cercare in giro!")
          					goto flw_51
          				}
          			  case 1:
          				goto flw_49
          			}
          		}
          	  case 1:
/*< 43>*/ 		switch (story_flags[187 /* us: 805A9AE9 0x04, jp: 805ACD69 0x04 */]) {
          		  case 0:
/*< 44>*/ 			printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00171908>Sei acuto come una stalattite!\nTrovi sempre una soluzione!\n\n\n<0x10009:0x00080bff>Credo di doverti quantomeno cedere\nl'onore di entrare per primo! Prego!")
          		  case 1:
/*< 40>*/ 			switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
          			  case 0:
/*<284>*/ 				switch (temp_flags[15 /* 0x0 80 */]) {
          				  case 0:
/*<285>*/ 					printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00181707>Un <color red<grosso recipiente >coloroff>con tanta <color red<acqua>coloroff>...\nDove possiamo procurarceli?")
          				  case 1:
/*< 41>*/ 					printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00181707>Cosa si può usare per versarci <color red<acqua\n>coloroff>in abbondanza? Servirebbe un <color red<grosso\nrecipiente>coloroff>...\n\n<0x10009:0x00161eff>Roccia, ti sei avventurato in tanti\nposti, no? Non ti viene in mente\nniente?!")
/*<283>*/ 					temp_flags[15 /* 0x0 80 */] = true;
          				}
          			  case 1:
/*< 39>*/ 				printf(/* textboxtype: 1, unk: 0, line: 45 */ "Hai visto anche tu, roccia?!\nHa un'aria oltremodo sospetta!\n\n\n<0x10009:0x00171908>Non è il momento di pensare agli\n<color yellow<esaedri della Dea>coloroff>! Qui deve esserci\nnascosto <color red<qualcosa di molto\nimportante>coloroff>!")
/*<144>*/ 				set_camera(4, 0)
/*<146>*/ 				printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x00161eff>Comunque sia... questa volta\nè un bel problema! Non ce la\ncaveremo certo con un'<color yellow<ampolla>coloroff>.")
/*<145>*/ 				set_camera(-1, 0)
/*<147>*/ 				printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00000007>Mmh...<pause 15> <0x10009:0x00181700>Ci servirebbe qualcosa di\nadatto allo scopo, come per esempio\nun <color red<grosso recipiente>coloroff>.<sound 4> Non ce l'hai?\n\n<0x10009:0x00161eff>E poi, deve poter contenere tanta\n<color red<acqua>coloroff>... Sempre più difficile...")
/*< 42>*/ 				story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_303_26() {
/*< 89>*/ 	start()
/*< 90>*/ 	printf(/* textboxtype: 1, unk: 0, line: 25 */ "Vuoi che versi l'acqua lì?\nBene, lascia fare a me! Bzzz!")
          }

          void entrypoint_303_43() {
/*<201>*/ 	start()
/*<202>*/ 	printf(/* textboxtype: 2, unk: 0, line: 120 */ "Siamo arrivati al vulcano di Oldin.\n\n\n\nÈ possibile impostare il <color red<rilevatore\n>coloroff>sul portale della prova necessaria\nper ottenere la fiamma sacra.")
          }

