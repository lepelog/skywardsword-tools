          void entrypoint_107_04() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 6, unk: 0, line: 3 */ "<icon 20> Statua della Dea")
          }

          void entrypoint_107_21() {
/*< 41>*/ 	start()
/*< 42>*/ 	printf(/* textboxtype: 22, unk: 0, line: 21 */ "Sala da bagno")
          }

          void entrypoint_107_56() {
/*< 63>*/ 	start()
/*<158>*/ 	story_flags[104 /* us: 805A9ADE 0x20, jp: 805ACD5E 0x20 */] = true;
/*<153>*/ 	check_item_flag(502, 80)
/*<152>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 26}) {
          	  case 0:
/*<112>*/ 		printf(/* textboxtype: 2, unk: 0, line: 72 */ "<0x10012:0x0000000b>Mio signore, Faih a rapporto.\n\n\n\nLa vostra spada si è potenziata e ora\npotete usare il <color red<rilevatore >coloroff>per\nlocalizzare le <color yellow<gemme di gratitudine>coloroff>.\n\nHo aggiunto le <color yellow<gemme di\ngratitudine >coloroff>agli obiettivi del <color red<rilevatore>coloroff><sound 4>.")
/*<159>*/ 		open_dowsing_wheel(19)
/*<160>*/ 		printf(/* textboxtype: 2, unk: 0, line: 73 */ "Ma vedo che avete già raccolto\ntutte le gemme di gratitudine!\nComplimenti, <0x10012:0x00000002>mio signore!")
          	  case 1:
/*< 64>*/ 		printf(/* textboxtype: 2, unk: 0, line: 71 */ "<0x10012:0x0000000b>Mio signore, Faih a rapporto.\n\n\n\nLa vostra spada si è potenziata e ora\npotete usare il <color red<rilevatore >coloroff>per\nlocalizzare le <color yellow<gemme di gratitudine>coloroff>.\n\nHo aggiunto le <color yellow<gemme di\ngratitudine >coloroff>agli obiettivi del <color red<rilevatore>coloroff>,<sound 4>\nusatelo a vostro piacimento!")
/*< 65>*/ 		open_dowsing_wheel(19)
          	}
          }

          void entrypoint_107_39() {
/*<137>*/ 	start()
/*<145>*/ 	printf(/* textboxtype: 8, unk: 0, line: 40 */ "Deliziosa zuppa di zucca!\nGustatela calda!")
          }

          void entrypoint_107_05() {
/*<  8>*/ 	start()
/*<  9>*/ 	printf(/* textboxtype: 6, unk: 0, line: 4 */ "<icon 20> Piazza di Oltrenuvola")
          }

          void entrypoint_107_22() {
/*< 45>*/ 	start()
/*< 46>*/ 	printf(/* textboxtype: 22, unk: 0, line: 22 */ "Palestra di scherma")
          }

          void entrypoint_107_57() {
/*< 78>*/ 	start()
/*< 80>*/ 	printf(/* textboxtype: 2, unk: 0, line: 74 */ "<0x10012:0x0000000b>Mio signore, Faih a rapporto.\n\n\n\nI solcanubi non possono volare\ndi notte. Riposatevi a letto\ne partite con il nuovo giorno!")
          }

          void entrypoint_107_06() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 6, unk: 0, line: 5 */ "<icon 20>Scuola d'armi")
          }

          void entrypoint_107_58() {
/*< 79>*/ 	start()
/*< 81>*/ 	printf(/* textboxtype: 2, unk: 0, line: 75 */ "<0x10012:0x0000000b>Mio signore, Faih a rapporto.\n\n\n\nIn una delle isole che fluttuano\nin Cielo si trova il <color red<portale della prova>coloroff>,\nche si aprirà per mezzo della Melodia\ndell'impavido.\nAttivate subito il <color red<rilevatore >coloroff>per\ndecidere dove recarvi.")
/*<161>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 162, 'param3': 58}
/*<162>*/ 	open_dowsing_wheel(6)
/*<163>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_107_23() {
/*< 82>*/ 	start()
/*< 84>*/ 	switch (story_flags[712 /* us: 805A9B25 0x04, jp: 805ACDA5 0x04 */]) {
          	  case 0:
/*< 83>*/ 		printf(/* textboxtype: 22, unk: 0, line: 23 */ "<0x10008:0x00cd>Casa di Vania\n<0x10008:0xffcd>Addetta al deposito")
          	  case 1:
          	}
          }

          void entrypoint_107_40() {
/*<138>*/ 	start()
/*<146>*/ 	printf(/* textboxtype: 8, unk: 0, line: 41 */ "Si ricerca con urgenza\ncoltivatore di zucche!")
          }

          void entrypoint_107_07() {
/*< 51>*/ 	start()
/*< 52>*/ 	printf(/* textboxtype: 8, unk: 0, line: 6 */ "Vietato correre nei\ncorridoi della scuola!")
          }

          void entrypoint_107_24() {
/*< 85>*/ 	start()
/*< 86>*/ 	switch (story_flags[713 /* us: 805A9B25 0x08, jp: 805ACDA5 0x08 */]) {
          	  case 0:
/*< 87>*/ 		printf(/* textboxtype: 22, unk: 0, line: 24 */ "<0x10008:0xffcd>Casa di Gianna")
          	  case 1:
          	}
          }

          void entrypoint_107_59() {
/*<117>*/ 	start()
/*<118>*/ 	printf(/* textboxtype: 2, unk: 0, line: 76 */ "<0x10012:0x00000001>Complimenti, mio signore!\n\n\n\nAvete superato tutte le prove!")
/*<121>*/ 	set_camera(6, 0)
/*<119>*/ 	printf(/* textboxtype: 2, unk: 0, line: 77 */ "L'<color red<emblema della prova >coloroff>che avete\nottenuto è parte di una coppia.\n\n\nSu quest'isola deve trovarsi una \nseconda gemma uguale a quella già\nin vostro possesso...\n\nRitrovandola, la strada che conduce\nalla <color yellow white<Triforza >coloroff>si paleserà.\n\n\n<0x1000A:0xffff00cd>Suggerisco di trovare al più presto\nl'emblema mancante.")
/*<120>*/ 	story_flags[769 /* us: 805A9B2A 0x02, jp: 805ACDAA 0x02 */] = true;
          }

          void entrypoint_107_41() {
/*<139>*/ 	start()
/*<147>*/ 	printf(/* textboxtype: 8, unk: 0, line: 42 */ "Per Oltrenuvola:\nqualche battito d'ali\na nord‐ovest da qui.")
          }

          void entrypoint_107_25() {
/*< 88>*/ 	start()
/*< 89>*/ 	switch (story_flags[714 /* us: 805A9B25 0x10, jp: 805ACDA5 0x10 */]) {
          	  case 0:
/*< 90>*/ 		printf(/* textboxtype: 22, unk: 0, line: 25 */ "<0x10008:0xffcd>Casa di Chicca")
          	  case 1:
          	}
          }

          void entrypoint_107_08() {
/*<113>*/ 	start()
/*<114>*/ 	printf(/* textboxtype: 8, unk: 0, line: 8 */ "Lanciarsi sul solcanubi\nsolo dai luoghi stabiliti!")
          }

          void entrypoint_107_42() {
/*<140>*/ 	start()
/*<148>*/ 	printf(/* textboxtype: 8, unk: 0, line: 43 */ "Grudia/Ra...")
          }

          void entrypoint_107_26() {
/*< 91>*/ 	start()
/*< 92>*/ 	switch (story_flags[715 /* us: 805A9B25 0x20, jp: 805ACDA5 0x20 */]) {
          	  case 0:
/*< 93>*/ 		printf(/* textboxtype: 22, unk: 0, line: 26 */ "<0x10008:0xffcd>Casa di Pardalo e Ralla")
          	  case 1:
          	}
          }

          void entrypoint_107_09() {
/*<115>*/ 	start()
/*<116>*/ 	printf(/* textboxtype: 8, unk: 0, line: 7 */ "Mantenere in ordine\nle proprie stanze!")
          }

          void entrypoint_107_60() {
/*<124>*/ 	start()
/*<126>*/ 	set_camera(10, 0)
/*<129>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 356, 'next': 127, 'param3': 15}
/*<127>*/ 	set_camera(11, 0)
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 128, 'param3': 51}
/*<128>*/ 	set_camera(12, 0)
/*<125>*/ 	printf(/* textboxtype: 2, unk: 0, line: 78 */ "<heroname>, <0x10012:0x0000000b>mio signore,\nFaih a rapporto.\nQuesta isola è già nella mia banca dati.\n\nIl suo nome è <color blue<Isola delle melodie>coloroff><color red<\n>coloroff>e confermo che si tratta di un luogo\nche la Dea ha lasciato per <0x10012:0x00000002>voi.\n\nTuttavia, ignoro come possiate\naccedere all'edificio innanzi a voi.\nSuggerirei di perlustrare i dintorni.")
/*<131>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 132, 'param3': 36}
/*<132>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_107_43() {
/*<170>*/ 	start()
/*<171>*/ 	printf(/* textboxtype: 7, unk: 0, line: 44 */ "Ruotare il piedistallo centrale\nper ricomporre il ponte che\nconduce alla torre dell'Isola\ndelle melodie.")
          }

          void entrypoint_107_27() {
/*< 94>*/ 	start()
/*< 95>*/ 	switch (story_flags[716 /* us: 805A9B25 0x40, jp: 805ACDA5 0x40 */]) {
          	  case 0:
/*< 96>*/ 		printf(/* textboxtype: 22, unk: 0, line: 27 */ "<0x10008:0x00cd>Casa di Rupiero\n<0x10008:0xffcd>Titolare della bottega degli arnesi ")
          	  case 1:
          	}
          }

          void entrypoint_107_61() {
/*<154>*/ 	start()
/*<156>*/ 	printf(/* textboxtype: 2, unk: 0, line: 79 */ "<0x10012:0x0000000b><heroname>, mio signore.\nConfermo la comparsa di una seconda\ncolonna di luce a nord‐est.\n\nSuggerisco di effettuare i preparativi e\ndirigersi là per una discesa sulla Terra.")
          }

          void entrypoint_107_44() {
/*<180>*/ 	start()
/*<181>*/ 	printf(/* textboxtype: 6, unk: 0, line: 45 */ "Per oggi le attività sono chiuse.\nVi aspettiamo di nuovo domani.\n\n\nIn caso di urgenze, rivolgetevi\nai rispettivi proprietari\npresso le loro abitazioni.\n                Il Comitato del bazar")
          }

          void entrypoint_107_10() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 22, unk: 0, line: 9 */ "Stanza di <heroname>")
          }

          void entrypoint_107_28() {
/*< 97>*/ 	start()
/*< 98>*/ 	switch (story_flags[717 /* us: 805A9B25 0x80, jp: 805ACDA5 0x80 */]) {
          	  case 0:
/*< 99>*/ 		printf(/* textboxtype: 22, unk: 0, line: 28 */ "<0x10008:0xffcd>Casa di Sparvio")
          	  case 1:
          	}
          }

          void entrypoint_107_62() {
/*<155>*/ 	start()
/*<157>*/ 	printf(/* textboxtype: 2, unk: 0, line: 80 */ "<0x10012:0x0000000b><heroname>, mio signore.\nConfermo la comparsa di una terza\ncolonna di luce a sud‐ovest.\n\nSuggerisco di effettuare i preparativi e\ndirigersi là per una discesa sulla Terra.")
          }

          void entrypoint_107_45() {
/*<182>*/ 	start()
/*<183>*/ 	printf(/* textboxtype: 9, unk: 0, line: 46 */ "I bravi ragazzi si lavano\nle mani!")
          }

          void entrypoint_107_11() {
/*< 21>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 22, unk: 0, line: 10 */ "Stanza di Bado")
          }

          void entrypoint_107_29() {
/*<100>*/ 	start()
/*<101>*/ 	switch (story_flags[718 /* us: 805A9B24 0x01, jp: 805ACDA4 0x01 */]) {
          	  case 0:
/*<102>*/ 		printf(/* textboxtype: 22, unk: 0, line: 29 */ "<0x10008:0x00cd>Casa di Prunello\n<0x10008:0xffcd>Indovino")
          	  case 1:
          	}
          }

          void entrypoint_107_63() {
/*<165>*/ 	start()
/*<166>*/ 	printf(/* textboxtype: 2, unk: 0, line: 81 */ "<0x10012:0x0000000b>Mio signore <heroname>.\n\n\n\nPer potere eliminare il parassita da\nNarisha, è necessario che impariate\na dovere come effettuare un attacco\navvitato.\nIl maestro Asio Otus vi attende nella\nzona nord‐est di Oltrenuvola, vicino\nalla <color red<statua del solcanubi>coloroff>.\nConsiglio di dirigerci là al più presto.")
          }

          void entrypoint_107_46() {
/*<184>*/ 	start()
/*<185>*/ 	printf(/* textboxtype: 9, unk: 0, line: 47 */ "Manteniamo sempre pulito!")
          }

          void entrypoint_107_12() {
/*< 22>*/ 	start()
/*< 29>*/ 	printf(/* textboxtype: 22, unk: 0, line: 11 */ "Stanza di Ras e Dacio")
          }

          void entrypoint_107_64() {
/*<172>*/ 	start()
/*<174>*/ 	switch (story_flags[649 /* us: 805A9B1C 0x04, jp: 805ACD9C 0x04 */]) {
          	  case 0:
/*<176>*/ 		printf(/* textboxtype: 2, unk: 0, line: 82 */ "<heroname>, <0x10012:0x0000000b>mio signore.\n\n\n\n<0x1000A:0x000d00cd>Dai dati in mio possesso, riguardanti\nquesti oggetti antichi simili a scrigni,\ndeduco che si tratta di reliquie lasciate\ndalla Dea per il futuro impavido.")
/*<178>*/ 		set_camera(-1, 0)
/*<177>*/ 		printf(/* textboxtype: 2, unk: 0, line: 84 */ "Suppongo che, quando l'energia degli\n<color red<esaedri della Dea >coloroff>raggiunge il cielo, si\nverifichi l'apertura di uno scrigno.\n\nInviando la loro energia dalla terra al\ncielo, state aiutando voi stesso.")
          	  case 1:
/*<173>*/ 		printf(/* textboxtype: 2, unk: 0, line: 82 */ "<heroname>, <0x10012:0x0000000b>mio signore.\n\n\n\n<0x1000A:0x000d00cd>Dai dati in mio possesso, riguardanti\nquesti oggetti antichi simili a scrigni,\ndeduco che si tratta di reliquie lasciate\ndalla Dea per il futuro impavido.")
/*<179>*/ 		set_camera(-1, 0)
/*<175>*/ 		printf(/* textboxtype: 2, unk: 0, line: 83 */ "Tuttavia, allo stato attuale, non\nposseggo dati che indichino le\nmodalità di apertura di tali oggetti.")
          	}
          }

          void entrypoint_107_47() {
/*<186>*/ 	start()
/*<187>*/ 	printf(/* textboxtype: 6, unk: 0, line: 48 */ "Al momento sto lavorando.\nSe volete parlarmi, siete\npregati di venire di notte.\n<0x10006:0x05cd>                                           Terry")
          }

          void entrypoint_107_13() {
/*< 23>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 22, unk: 0, line: 12 */ "Stanza di Gentirosso")
          }

          void entrypoint_107_30() {
/*< 47>*/ 	start()
/*< 48>*/ 	printf(/* textboxtype: 7, unk: 0, line: 30 */ "Eseguendo la melodia, dono\ndella Dea, all'impavido verrà\nmostrata la luce.")
          }

          void entrypoint_107_14() {
/*< 24>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 22, unk: 0, line: 13 */ "Stanza del direttore Gaepora")
          }

          void entrypoint_107_31() {
/*<103>*/ 	start()
/*<104>*/ 	switch (story_flags[719 /* us: 805A9B24 0x02, jp: 805ACDA4 0x02 */]) {
          	  case 0:
/*<105>*/ 		printf(/* textboxtype: 22, unk: 0, line: 31 */ "<0x10008:0x00cd>Casa di Kondoroy\n<0x10008:0xffcd>Titolare dell'officina\n")
          	  case 1:
          	}
          }

          void entrypoint_107_15() {
/*< 25>*/ 	start()
/*< 32>*/ 	printf(/* textboxtype: 22, unk: 0, line: 14 */ "Stanza del maestro Asio Otus")
          }

          void entrypoint_107_32() {
/*<106>*/ 	start()
/*<107>*/ 	switch (story_flags[720 /* us: 805A9B24 0x04, jp: 805ACDA4 0x04 */]) {
          	  case 0:
/*<108>*/ 		printf(/* textboxtype: 22, unk: 0, line: 32 */ "<0x10008:0x00cd>Casa di Rino\n<0x10008:0xffcd>Mercante di pozioni")
          	  case 1:
          	}
          }

          void entrypoint_107_50() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf(/* textboxtype: 2, unk: 0, line: 50 */ "<heroname>, <0x10012:0x00000004>mio signore,\nquel <color red<bagliore verde>coloroff> è una\n<color blue<colonna di luce >coloroff>che permette\ndi raggiungere la Terra.")
/*< 70>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 72, 'param3': 30}
/*< 72>*/ 	printf(/* textboxtype: 2, unk: 2, line: 51 */ "Suggerirei di consultare\nla mappa per conoscere\nla posizione rispetto\na Oltrenuvola.")
/*< 71>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 73, 'param3': 34}
/*< 73>*/ 	printf(/* textboxtype: 2, unk: 0, line: 52 */ "Alla base della colonna\ndi luce, le nubi si aprono\nper lasciarvi raggiungere\nla terra.")
/*< 14>*/ 	story_flags[198 /* us: 805A9AEF 0x01, jp: 805ACD6F 0x01 */] = true;
          }

          void entrypoint_107_16() {
/*< 26>*/ 	start()
/*< 33>*/ 	printf(/* textboxtype: 22, unk: 0, line: 15 */ "Stanza del maestro Cornelio")
          }

          void entrypoint_107_33() {
/*<109>*/ 	start()
/*<110>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<111>*/ 		printf(/* textboxtype: 22, unk: 0, line: 33 */ "<0x10008:0xffcd>Casa di Morsego")
          	  case 1:
          	}
          }

          void entrypoint_107_51() {
/*< 15>*/ 	start()
/*< 17>*/ 	printf(/* textboxtype: 2, unk: 0, line: 53 */ "<0x10012:0x00000001>Mio signore.\nConfermo il legame tra\nla stele di ieri sera e\nla Terra.\nSuppongo che la colonna di luce\napparsa a sud permetta di\nscendere sotto le nuvole.")
/*< 66>*/ 	printf(/* textboxtype: 2, unk: 0, line: 54 */ "Le probabilità di sopravvivenza\nsulla Terra, dotato solo della\nspada, sono minime.\n\nConcludo che dobbiamo recarci al\nbazar e acquistare uno<color red< scudo >coloroff>e delle\n<color red<pozioni >coloroff>prima della partenza.")
/*<164>*/ 	printf(/* textboxtype: 2, unk: 0, line: 55 */ "Inoltre, <0x10012:0x00000001>mio signore... \n\n\n\n<0x10012:0x00000001>Se ritenete di aver acquisito\ndimestichezza con i comandi,\npotete scegliere se visualizzare o\nmeno la <color red<guida ai comandi>coloroff>.\nL'opzione per farlo è ora disponibile\nnell'<color blue<inventario>coloroff>. Impostate pure la\nvisualizzazione che desiderate.")
/*< 53>*/ 	story_flags[198 /* us: 805A9AEF 0x01, jp: 805ACD6F 0x01 */] = true;
/*< 67>*/ 	story_flags[679 /* us: 805A9B22 0x02, jp: 805ACDA2 0x02 */] = true;
/*<167>*/ 	story_flags[358 /* us: 805A9B00 0x10, jp: 805ACD80 0x10 */] = true;
/*<168>*/ 	story_flags[570 /* us: 805A9B18 0x02, jp: 805ACD98 0x02 */] = true;
/*<169>*/ 	story_flags[571 /* us: 805A9B18 0x04, jp: 805ACD98 0x04 */] = true;
          }

          void entrypoint_107_17() {
/*< 27>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 22, unk: 0, line: 16 */ "Stanza di Grudia")
          }

          void entrypoint_107_34() {
/*<122>*/ 	start()
/*<123>*/ 	printf(/* textboxtype: 8, unk: 0, line: 34 */ "Mappa di Oltrenuvola\nN: Statua della Dea S: Piazza\nE: Residenze O: Scuola d'armi")
          }

          void entrypoint_107_52() {
/*< 18>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 2, unk: 0, line: 56 */ "<0x10012:0x00000001>Mio signore...\nDa qui si può vedere la\ncolonna di luce.")
/*< 75>*/ 	set_camera(2, 0)
/*< 74>*/ 	printf(/* textboxtype: 2, unk: 0, line: 57 */ "Tuffatevi in direzione\ndella luce e richiamate\nil vostro solcanubi.")
/*< 77>*/ 	set_camera(-1, 0)
/*< 76>*/ 	printf(/* textboxtype: 2, unk: 0, line: 58 */ "Partiamo alla ricerca di Zelda!\nDopo esservi lanciato,\nusate (v) per\nrichiamare il solcanubi.<0x10011:0x09cd>")
          }

          void entrypoint_107_18() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 22, unk: 0, line: 17 */ "Stanza di Zelda")
          }

          void entrypoint_107_35() {
/*<133>*/ 	start()
/*<141>*/ 	printf(/* textboxtype: 8, unk: 0, line: 35 */ "Zuppa di zucca!\nNutriente ed energizzante!\n1 porzione 10 rupie!")
          }

          void entrypoint_107_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 6, unk: 0, line: 0 */ "Grotta della cascata.\nAttenzione: presenza di\ncreature succhiasangue!")
          }

          void entrypoint_107_19() {
/*< 37>*/ 	start()
/*< 49>*/ 	switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          	  case 0:
/*< 50>*/ 		printf(/* textboxtype: 8, unk: 0, line: 19 */ "Il vincitore del battesimo del\nvolo è <heroname>! Ma\nci sono anche brutte notizie...")
          	  case 1:
/*< 38>*/ 		printf(/* textboxtype: 8, unk: 0, line: 18 */ "Oggi battesimo del volo di\nBado, Ras, Dacio e \n<heroname>.\nChi vincerà?")
          	}
          }

          void entrypoint_107_53() {
/*< 43>*/ 	start()
/*<188>*/ 	switch (scene_flags[25 /* 0x2 02 */]) {
          	  case 0:
/*<189>*/ 		printf(/* textboxtype: 2, unk: 0, line: 61 */ "<0x10012:0x00000004>Mio signore <heroname>,\nposizionate nella colonna la <color red<stele>coloroff> che\navete ottenuto.")
          	  case 1:
/*< 68>*/ 		switch (story_flags[38 /* us: 805A9AE5 0x10, jp: 805ACD65 0x10 */]) {
          		  case 0:
/*< 44>*/ 			printf(/* textboxtype: 2, unk: 0, line: 59 */ "<heroname>, <0x10012:0x00000004>mio signore.\nColpite l'emblema con il <color red<potere\nceleste>coloroff>, poi posizionatevi la stele.\n\nPer attivare il <color red<potere celeste\n>coloroff><color green<sollevate la spada verso il\ncielo >coloroff>affinché accumuli energia.")
          		  case 1:
/*< 69>*/ 			printf(/* textboxtype: 2, unk: 0, line: 60 */ "Io sono <color blue<Faih>coloroff>...\nPonetevi di fronte a quel\npiedistallo ed estraete la spada.")
          		}
          	}
          }

          void entrypoint_107_36() {
/*<134>*/ 	start()
/*<149>*/ 	switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          	  case 0:
/*<150>*/ 		printf(/* textboxtype: 8, unk: 0, line: 37 */ "Palcoscenico di Pepa\nAperto ogni tanto.\nSolo la sera.")
          	  case 1:
/*<142>*/ 		printf(/* textboxtype: 8, unk: 0, line: 36 */ "Palcoscenico di Pepa\nChiuso per mancanza di\nartisti. Si cercano artisti.")
          	}
          }

          void entrypoint_107_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 6, unk: 0, line: 1 */ "<icon 22> Scuola d'armi\n    Quartiere residenziale <icon 23>")
          }

          void entrypoint_107_54() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf(/* textboxtype: 2, unk: 0, line: 62 */ "<heroname>, <0x10012:0x00000004>mio signore...\n\n\n\nQuando si colpiscono con il <color red<potere\nceleste >coloroff>gli <color red<esaedri della Dea>coloroff>, si libera\nun'energia che genera delle\nripercussioni in Cielo.")
/*< 58>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 7, 'next': 151, 'param3': 30}
/*<151>*/ 	wait_frames(60)
/*< 56>*/ 	printf(/* textboxtype: 2, unk: 0, line: 64 */ "Sulla mappa sono indicati i luoghi\nin cui l'energia ha avuto effetto.")
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 57, 'param3': 34}
/*< 57>*/ 	printf(/* textboxtype: 2, unk: 0, line: 65 */ "Vi suggerirei di esplorare\nquelle zone.")
/*< 62>*/ 	scene_flags[21 'The Sky'][13 /* 0x0 20 */] = true;
          }

          void entrypoint_107_37() {
/*<135>*/ 	start()
/*<143>*/ 	printf(/* textboxtype: 8, unk: 0, line: 38 */ "Taverna delle zucche\nLampadario in mostra\nal primo piano.")
          }

          void entrypoint_107_03() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 6, unk: 0, line: 2 */ "<icon 20> Bazar")
          }

          void entrypoint_107_20() {
/*< 39>*/ 	start()
/*< 40>*/ 	printf(/* textboxtype: 22, unk: 0, line: 20 */ "Gabinetto")
          }

          void entrypoint_107_55() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf(/* textboxtype: 2, unk: 0, line: 70 */ "Ci vorranno migliaia di anni\nperché questo bulbo cresca.\nConfermo che questa non\nè la dimora più adatta.")
          }

          void entrypoint_107_38() {
/*<136>*/ 	start()
/*<144>*/ 	printf(/* textboxtype: 8, unk: 0, line: 39 */ "Fragile!\nEvitare movimenti bruschi.")
          }

