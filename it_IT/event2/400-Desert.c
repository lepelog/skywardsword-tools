          void entrypoint_400_13() {
/*< 33>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "...")
          }

          void entrypoint_400_65() {
/*<161>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 2, unk: 0, line: 84 */ "Siamo arrivati alla <color blue<miniera di Ranel>coloroff>.\n\n\n\nÈ possibile individuare con il rilevatore\nil portale della prova, necessario per\nottenere la fiamma sacra.")
/*<163>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_30() {
/*<234>*/ 	start()
/*<235>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "Cosa? Vuoi lavorare qui?\nAllora togliti quello strano berretto\ne indossa il casco! Bzzz!\n")
/*<244>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_14() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 1, unk: 0, line: 16 */ "Levati dai piedi! Bzzz!\nSta per passare il\ncarrello! Bzzz!")
/*< 71>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_66() {
/*<164>*/ 	start()
/*<165>*/ 	printf(/* textboxtype: 2, unk: 0, line: 85 */ "Siamo arrivati al <color blue<deserto di Ranel>coloroff>.\n\n\n\nÈ possibile individuare con il rilevatore\nil portale della prova, necessario per\nottenere la fiamma sacra.")
/*<166>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_31() {
/*<236>*/ 	start()
/*<237>*/ 	printf(/* textboxtype: 1, unk: 0, line: 52 */ "...")
          }

          void entrypoint_400_15() {
/*< 37>*/ 	start()
/*<307>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<308>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_38:
/*< 38>*/ 			printf(/* textboxtype: 1, unk: 0, line: 17 */ "...")
          		  case 1:
/*<345>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				flw_310:
/*<310>*/ 				printf(/* textboxtype: 1, unk: 0, line: 17 */ "...")
          			  case 1:
/*<309>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 310, 'param3': 31}
          				goto flw_310
          			}
          		}
          	  case 1:
          		goto flw_38
          	}
          }

          void entrypoint_400_67() {
/*<167>*/ 	start()
/*<168>*/ 	printf(/* textboxtype: 2, unk: 0, line: 86 */ "Siamo arrivati al <color blue<Santuario del Tempo>coloroff>.\n\n\n\nÈ possibile individuare con il\nrilevatore il portale della prova,\nnecessario per ottenere\nla fiamma sacra.")
/*<169>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_32() {
/*<238>*/ 	start()
/*<239>*/ 	printf(/* textboxtype: 1, unk: 0, line: 53 */ "Ultimamente siamo spesso attaccati\nda strani esseri. Noi non abbiamo\narmi... ogni attacco può essere\nletale... Bzzz!")
/*<245>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_16() {
/*< 39>*/ 	start()
/*<  9>*/ 	switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          	  case 0:
/*<311>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<312>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_12:
/*< 12>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "Ma sei ancora qui?! Bzzz!\nProcedi con cautela! Bzzz!")
          			  case 1:
/*<313>*/ 				printf(/* textboxtype: 1, unk: 0, line: 62 */ "Stai cercando un drago? Bzzz?\nSe si tratta del <color blue<<color blue<<0x10009:0x13030000><color blue<drago del fulmine>coloroff>, \npotresti trovarlo a sud delle <color blue<grotte di\nRanel>coloroff>. \nSe invece è un altro drago, non\nne ho la più pallida idea... Bzzz...")
/*<344>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_12
          		}
          	  case 1:
/*<  5>*/ 		switch (story_flags[90 /* us: 805A9AEF 0x80, jp: 805ACD6F 0x80 */]) {
          		  case 0:
          			flw_10:
/*< 10>*/ 			printf(/* textboxtype: 1, unk: 0, line: 20 */ "Ora è in grado di\n<color red<afferrare le cose con le pinze>coloroff>!\nFai attenzione! Bzzz!")
/*< 77>*/ 			scene_flags[7 'Lanayru Desert'][5 /* 0x1 20 */] = true;
/*<283>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<  6>*/ 			switch (context_related2(0)) {
          			  case 0:
/*<277>*/ 				printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x13030000>Grazie! Bzzz!")
/*<278>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 279, 'param3': 47}
/*<279>*/ 				set_camera(6, 0)
/*<281>*/ 				{'type': 'type3', 'subType': 2, 'param1': 27, 'param2': 356, 'next': 280, 'param3': 15}
/*<280>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 282, 'param3': 17}
/*<282>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 7, 'param3': 48}
/*<  7>*/ 				printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x13030000>C'è mancato poco!\nStava per staccarmi la corrente! Bzzz!\n\n\nVediamo un po'... <pause 30>Hai uno\n<color yellow<scarabeo>coloroff> vero? Ma è del vecchio\nmodello Ranel...\n\nPer premio <color red<lo >coloroff>trasformerò in qualcosa\ndi meglio! Bzzz!\n<0x10009:0x13030000>Dai qua! Bzzz!")
/*< 91>*/ 				make_actor_do_something(0, 0)
/*<284>*/ 				{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 8, 'param3': 42}
/*<  8>*/ 				give_item(75 0x4B);
/*< 11>*/ 				story_flags[90 /* us: 805A9AEF 0x80, jp: 805ACD6F 0x80 */] = true;
          				goto flw_10
          			  case 1:
/*<  4>*/ 				printf(/* textboxtype: 1, unk: 0, line: 18 */ "Ehi, aiutami! Bzzz!")
/*< 76>*/ 				scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
/*<228>*/ 				scene_flags[7 'Lanayru Desert'][28 /* 0x2 10 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_400_50() {
/*< 58>*/ 	start()
/*<142>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*< 59>*/ 	printf(/* textboxtype: 2, unk: 0, line: 63 */ "<0x10005:0x005a0000><0x10012:0x0000000b><heroname>, mio signore,\nFaih a rapporto.\nSiete giunto nella <color blue<miniera di Ranel>coloroff>.")
          }

          void entrypoint_400_68() {
/*<170>*/ 	start()
/*<172>*/ 	set_camera(-1, 0)
/*<171>*/ 	printf(/* textboxtype: 2, unk: 0, line: 87 */ "Complimenti, <heroname>,\n<0x10012:0x00000004>mio signore!")
/*<173>*/ 	printf(/* textboxtype: 2, unk: 0, line: 88 */ "<0x10012:0x00000001>Avete superato la prova!\nLa vostra anima si è rafforzata e\nora potete recarvi a purificare\nla vostra spada.")
/*<175>*/ 	set_camera(3, 0)
/*<174>*/ 	printf(/* textboxtype: 2, unk: 0, line: 89 */ "Quegli <color yellow<artigli >coloroff>sono una delle armi\nlasciate dalla Dea.\n\n\nLanciando quelle unghie di ferro,\npotete balzare volando direttamente\nsugli <color red<obiettivi >coloroff>o sulle pareti ricoperte\ndi <color red<edera>coloroff>.")
/*<177>*/ 	set_camera(-1, 0)
/*<176>*/ 	printf(/* textboxtype: 2, unk: 0, line: 90 */ "Confermo che la fiamma si trova\nda qualche parte nel deserto.\nDeduco che non avete ancora\nscoperto tale luogo, <0x10012:0x00000001>signore.")
          }

          void entrypoint_400_33() {
/*<240>*/ 	start()
/*<241>*/ 	printf(/* textboxtype: 1, unk: 0, line: 54 */ "...")
          }

          void entrypoint_400_17() {
/*< 40>*/ 	start()
/*<125>*/ 	switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          	  case 0:
/*<216>*/ 		switch (scene_flags[89 /* 0xA 02 */]) {
          		  case 0:
/*<218>*/ 			printf(/* textboxtype: 1, unk: 0, line: 106 */ "<0x10009:0x00162007>Ora posso proseguire le mie ricerche\nall'interno! <0x10009:0x00002000>Poi dovrò tornare alla\nTerra dell'esilio... Sarà meglio che\nmi sbrighi!")
          		  case 1:
/*<126>*/ 			printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x00151b09>Eh? Sei riuscito a entrare?!\n\n\n\n<0x10009:0x00151b00>Cosa? C'è un'altra strada segreta?\nPer tutti i porfidi, insegnamela!\n\n\n<0x10009:0x00082100>Io stavo per lasciar perdere quando...\nho sentito un rumore fortissimo e\ntornando indietro ho notato che le\nrocce non c'erano più...!\n<0x10009:0x00162007>Ora posso proseguire le mie ricerche\nall'interno! <0x10009:0x00002000>Poi dovrò tornare alla\nTerra dell'esilio... sarà meglio che\nmi sbrighi! ")
/*<217>*/ 			scene_flags[7 'Lanayru Desert'][89 /* 0xA 02 */] = true;
          		}
          	  case 1:
/*<150>*/ 		switch (scene_flags[73 /* 0x8 02 */]) {
          		  case 0:
/*<152>*/ 			printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x00162007>Che rabbia non poter passare!\nNon c'è un'altra strada che porta\nal santuario...?")
          		  case 1:
/*< 41>*/ 			printf(/* textboxtype: 1, unk: 0, line: 103 */ "<0x10009:0x00000002>Eccoti di nuovo!\nMa sbuchi proprio dappertutto!\n\n\nMa lasciamo perdere... piuttosto\nsenti qua:<0x10009:0x00172008> ho fatto la scoperta\ndel secolo!\n\n<0x10009:0x00002000>Sai dove ci troviamo? In un luogo\nmolto sacro e venerato,\nil <color blue<Santuario del Tempo>coloroff>.\n\n<0x10009:0x0000190a>Bene, proprio qui mi è capitato di\nvedere gli <color red<abitanti dell'Isola della\nDea>coloroff>... sì, quella delle leggende!\n\n<0x10009:0x00001900>Indossavano abiti identici a quelli\ndescritti dai testi antichi e...\na dire il vero ti somigliavano\nun bel po'!\n<0x10009:0x00082105>Erano in due e sono passati\nper la porta. Volevo seguirli,\nma...\n\n<0x10009:0x00151b00>Improvvisamente... Booom!\nUn'esplosione ha distrutto\nla porta e come puoi vedere...\n\n<0x10009:0x00162007>Ora è impossibile attraversarla...\nChe rabbia! Per tutti i lapislazzuli!")
/*<151>*/ 			scene_flags[7 'Lanayru Desert'][73 /* 0x8 02 */] = true;
          		}
          	}
          }

          void entrypoint_400_51() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf(/* textboxtype: 2, unk: 0, line: 67 */ "Confermo che in quest'area il tempo\nè tornato indietro.\n\n\nSuppongo che il colpo inferto alla\npietra azzurra abbia fatto\nregredire il tempo e ora\n<color red<<sound 4>ci troviamo nel passato>coloroff>.")
          }

          void entrypoint_400_69() {
/*<207>*/ 	start()
/*<208>*/ 	printf(/* textboxtype: 8, unk: 0, line: 108 */ "Vi invito ad adottare ogni\nmisura di sicurezza, per\nevitare incidenti.\n　　　　Il Direttore")
          }

          void entrypoint_400_34() {
/*<242>*/ 	start()
/*<243>*/ 	printf(/* textboxtype: 1, unk: 0, line: 55 */ "Ti interessano le pietre del tempo?\nAllora ti suggerisco di visitare\nl'<color blue<opificio di Ranel>coloroff>! Bzzz!")
/*<246>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_52() {
/*< 87>*/ 	start()
/*< 88>*/ 	printf(/* textboxtype: 2, unk: 0, line: 69 */ "Ho scoperto altri <color blue<generatori >coloroff>simili\nnelle vicinanze. \n<sound 4>Individuazione con <color red<rilevatore >coloroff>possibile.")
/*<220>*/ 	story_flags[107 /* us: 805A9AE1 0x01, jp: 805ACD61 0x01 */] = true;
/*<294>*/ 	open_dowsing_wheel(3)
/*<268>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_400_35() {
/*<247>*/ 	start()
/*<248>*/ 	printf(/* textboxtype: 1, unk: 0, line: 56 */ "...")
          }

          void entrypoint_400_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 2 */ "...")
          }

          void entrypoint_400_19() {
/*< 42>*/ 	start()
/*<314>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<315>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_43:
/*< 43>*/ 			printf(/* textboxtype: 1, unk: 0, line: 23 */ "...")
          		  case 1:
/*<347>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_43
          			  case 1:
/*<316>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 43, 'param3': 31}
          				goto flw_43
          			}
          		}
          	  case 1:
          		goto flw_43
          	}
          }

          void entrypoint_400_53() {
/*< 92>*/ 	start()
/*<113>*/ 	story_flags[109 /* us: 805A9AE1 0x04, jp: 805ACD61 0x04 */] = true;
/*<114>*/ 	printf(/* textboxtype: 2, unk: 0, line: 77 */ "")
/*<159>*/ 	set_camera(1, 0)
/*<160>*/ 	printf(/* textboxtype: 2, unk: 0, line: 78 */ "")
/*<178>*/ 	set_camera(-1, 0)
/*<179>*/ 	printf(/* textboxtype: 2, unk: 0, line: 79 */ "")
          }

          void entrypoint_400_70() {
/*<209>*/ 	start()
/*<210>*/ 	printf(/* textboxtype: 8, unk: 0, line: 109 */ "Obiettivo del mese:\n150 contenitori\n           Il Direttore")
          }

          void entrypoint_400_36() {
/*<249>*/ 	start()
/*<250>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "Le pietre del tempo permettono a noi\ne alle macchine di funzionare.\nHanno una grande energia!\nLavoriamo sodo noi! Bzzz!")
/*<259>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "")
/*< 72>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_54() {
/*<100>*/ 	start()
/*<205>*/ 	switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          	  case 0:
/*<206>*/ 		printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x2f080709><heroname>!\nSei entrato nella terra dei draghi!<pause 84>\n\n\n<0x10009:0x2f010805><0x10008:0x02cd>Che invidia!<pause 90>\n\n\n\n<0x10009:0x2f0f0706><0x10008:0x02cd>Mi hai superato!\nPer tutti i porfidi!")
          		flw_149:
/*<149>*/ 		scene_flags[7 'Lanayru Desert'][76 /* 0x8 10 */] = true;
/*<269>*/ 		story_flags[828 /* us: 805A9B33 0x10, jp: 805ACDB3 0x10 */] = true;
/*<270>*/ 		story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<271>*/ 		story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<272>*/ 		story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          	  case 1:
/*<109>*/ 		switch (scene_flags[75 /* 0x8 08 */]) {
          		  case 0:
/*<111>*/ 			printf(/* textboxtype: 1, unk: 0, line: 100 */ "<0x10009:0x2f080d0a>Ho trovato la strada che conduce alla\nterra in cui viveva il <color red<drago del fulmine>coloroff>.<pause 45>\n\n\n<0x10006:0xffcd><0x10009:0x2f0d0800>Ma il passaggio è troppo\nstretto per me...\n<0x10006:0xffcd><0x10009:0x2f080700>Tutto inutile...")
          			goto flw_149
          		  case 1:
/*<112>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 105, 'param3': 31}
/*<105>*/ 			switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          			  case 0:
/*<275>*/ 				printf(/* textboxtype: 1, unk: 0, line: 96 */ "<0x10009:0x2f080d02>Ehi, <heroname>!")
/*<276>*/ 				set_camera(5, 0)
/*<108>*/ 				printf(/* textboxtype: 1, unk: 0, line: 98 */ "E invece la <color blue<fiamma sacra >coloroff>di cui\nmi parlavi... Come è andata a finire? \nL'hai trovata?\n\nDa quando me lo hai detto non ho\nfatto che pensarci...\nRacconta!\n\n<0x10009:0x2f080407>.<pause 20>.<pause 20>.<pause 20> Ah... dopo una serie di avventure\nsei riuscito a trovarla!\n\n\nSei davvero una roccia,\n<heroname>!")
/*<358>*/ 				printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x2f080d0a>Anch'io ho scoperto qualcosa sulla\nleggenda dei tre draghi.<pause 15>\n\n\nSì, è vero, nel deserto esiste\nun luogo nascosto!\n\n\nHo trovato un<color red< piccolo passaggio>coloroff><sound 4>,\ncosì piccolo che non ci entro!\n\n\n<0x10009:0x2f000d00>Secondo me conduce alla terra\ndove viveva il <color red<drago del fulmine>coloroff>,\nuno dei tre draghi della leggenda.\n\n<0x10009:0x2f000800>Scommetto che anche\ni robot c'entrano qualcosa...<pause 15>\n\n\n<color red<<0x10009:0x2f010807><0x10006:0xffcd>>coloroff><color red<Drago del fulmine>coloroff>, robot e\npietre del tempo<pause 20>.<pause 20>.<pause 20>.<pause 20>\n\n\n<0x10009:0x2f080708><0x10008:0x02cd><0x10008:0x02cd>Un vero e proprio\nromanzo di avventure!")
/*<107>*/ 				printf(/* textboxtype: 1, unk: 0, line: 97 */ "<0x10009:0x00080d00><heroname>,\nscusa per non averti informato prima\nsullo stato degli scavi da te finanziati.<pause 20>\n\nHo trovato tante pietre del tempo\ncome la sabbia nel mare!\n<0x10009:0x2f000d01>Posso restituirti il prestito\nmoltiplicato per 10!")
/*<106>*/ 				rupees += 100;
          				flw_285:
/*<285>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 110, 'param3': 42}
/*<110>*/ 				scene_flags[7 'Lanayru Desert'][75 /* 0x8 08 */] = true;
          				goto flw_149
          			  case 1:
/*<273>*/ 				printf(/* textboxtype: 1, unk: 0, line: 96 */ "<0x10009:0x2f080d02>Ehi, <heroname>!")
/*<274>*/ 				set_camera(5, 0)
/*<211>*/ 				printf(/* textboxtype: 1, unk: 0, line: 98 */ "E invece la <color blue<fiamma sacra >coloroff>di cui\nmi parlavi... Come è andata a finire? \nL'hai trovata?\n\nDa quando me lo hai detto non ho\nfatto che pensarci...\nRacconta!\n\n<0x10009:0x2f080407>.<pause 20>.<pause 20>.<pause 20> Ah... dopo una serie di avventure\nsei riuscito a trovarla!\n\n\nSei davvero una roccia,\n<heroname>!")
/*<359>*/ 				printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x2f080d0a>Anch'io ho scoperto qualcosa sulla\nleggenda dei tre draghi.<pause 15>\n\n\nSì, è vero, nel deserto esiste\nun luogo nascosto!\n\n\nHo trovato un<color red< piccolo passaggio>coloroff><sound 4>,\ncosì piccolo che non ci entro!\n\n\n<0x10009:0x2f000d00>Secondo me conduce alla terra\ndove viveva il <color red<drago del fulmine>coloroff>,\nuno dei tre draghi della leggenda.\n\n<0x10009:0x2f000800>Scommetto che anche\ni robot c'entrano qualcosa...<pause 15>\n\n\n<color red<<0x10009:0x2f010807><0x10006:0xffcd>>coloroff><color red<Drago del fulmine>coloroff>, robot e\npietre del tempo<pause 20>.<pause 20>.<pause 20>.<pause 20>\n\n\n<0x10009:0x2f080708><0x10008:0x02cd><0x10008:0x02cd>Un vero e proprio\nromanzo di avventure!")
          				goto flw_285
          			}
          		}
          	}
          }

          void entrypoint_400_71() {
/*<213>*/ 	start()
/*<214>*/ 	printf(/* textboxtype: 2, unk: 0, line: 91 */ "<0x10012:0x0000000b><heroname>, mio signore,\nFaih a rapporto.")
/*<298>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 299, 'param3': 30}
/*<299>*/ 	printf(/* textboxtype: 2, unk: 0, line: 92 */ "I simboli su questo meccanismo\ncorrispondono a quelli dei tre già\nattivati. Deduco che sia plausibile\nuna qualche sorta di connessione.")
/*<300>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 34}
          }

          void entrypoint_400_37() {
/*<251>*/ 	start()
/*<252>*/ 	printf(/* textboxtype: 1, unk: 0, line: 58 */ "...")
          }

          void entrypoint_400_03() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ "...")
          }

          void entrypoint_400_20() {
/*< 44>*/ 	start()
/*< 63>*/ 	switch (scene_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<317>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<318>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_66:
/*< 66>*/ 				printf(/* textboxtype: 1, unk: 0, line: 26 */ "Il Santuario del Tempo\nè sempre più bello! Bzzz!")
          			  case 1:
/*<319>*/ 				printf(/* textboxtype: 1, unk: 0, line: 62 */ "Stai cercando un drago? Bzzz?\nSe si tratta del <color blue<<color blue<<0x10009:0x13030000><color blue<drago del fulmine>coloroff>, \npotresti trovarlo a sud delle <color blue<grotte di\nRanel>coloroff>. \nSe invece è un altro drago, non\nne ho la più pallida idea... Bzzz...")
/*<346>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_66
          		}
          	  case 1:
/*< 94>*/ 		switch (scene_flags[69 /* 0x9 20 */]) {
          		  case 0:
/*< 96>*/ 			printf(/* textboxtype: 1, unk: 0, line: 28 */ "Per un pelo!\nMi hai salvato, grazie! Bzzz!")
/*< 93>*/ 			make_actor_do_something(1, 0)
/*< 45>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00030900>Qui ci troviamo nel <color blue<Santuario\ndel Tempo>coloroff>, il luogo in cui la Dea ha\ncollocato la sacra <color blue<Porta del Tempo>coloroff>.\n\n<0x10009:0x00030900>Noi ci occupiamo di tenere puliti\ni dintorni. Bzzz! Se vuoi raggiungere\nla Porta del Tempo, entra in quel\npassaggio.\n<0x10009:0x00030900>Eh?\nSe ci si può andare in altro modo?\n\n\n<0x10009:0x00030900>L'<color blue<opificio di Ranel >coloroff>e il <color blue<Santuario\ndel Tempo >coloroff><color red<sono collegati da un\npassaggio sotterraneo>coloroff>. L'opificio\ndi Ranel è qua!")
/*<202>*/ 			make_actor_do_something(2, 0)
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 215, 'param3': 30}
/*<215>*/ 			wait_frames(30)
/*< 90>*/ 			scene_flags[7 'Lanayru Desert'][3 /* 0x1 08 */] = true;
/*< 99>*/ 			wait_frames(30)
/*< 97>*/ 			printf(/* textboxtype: 1, unk: 0, line: 29 */ "Eh?\nQuesta mappa... ha qualcosa\ndi strano. La correggerò... Bzzz!")
/*< 64>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 3, 'next': 197, 'param3': 30}
/*<197>*/ 			{'type': 'type3', 'subType': 2, 'param1': 9, 'param2': 356, 'next': 67, 'param3': 15}
/*< 67>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 200, 'param3': 34}
/*<200>*/ 			set_camera(4, 0)
/*<199>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 65, 'param3': 17}
/*< 65>*/ 			printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x00030900>L'opificio di Ranel è più avanti!\nFai attenzione! Bzzz!")
/*<203>*/ 			make_actor_do_something(3, 0)
/*< 68>*/ 			{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 0, 'next': 89, 'param3': 14}
/*< 89>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 101, 'param3': 17}
/*<101>*/ 			story_flags[129 /* us: 805A9AED 0x40, jp: 805ACD6D 0x40 */] = true;
/*<196>*/ 			scene_flags[7 'Lanayru Desert'][53 /* 0x7 20 */] = true;
/*<198>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 201, 'param3': 17}
/*<201>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 204, 'param3': 42}
/*<204>*/ 			make_actor_do_something(4, 0)
          		  case 1:
/*< 95>*/ 			printf(/* textboxtype: 1, unk: 0, line: 27 */ "Aiuto! Bzzz!")
/*<127>*/ 			scene_flags[7 'Lanayru Desert'][53 /* 0x7 20 */] = true;
          		}
          	}
          }

          void entrypoint_400_55() {
/*<102>*/ 	start()
/*<286>*/ 	printf(/* textboxtype: 2, unk: 0, line: 70 */ "<0x10012:0x00000001>Mio signore, Faih a rapporto.\nImpossibile percepire l'aura di <color blue<Zelda>coloroff>.")
/*<287>*/ 	set_camera(7, 0)
/*<288>*/ 	printf(/* textboxtype: 2, unk: 0, line: 71 */ "Nell'attimo in cui la porta è stata\ndistrutta, ho cessato di percepire\nla presenza di Zelda. <sound 4><color red<Individuazione\ncon rilevatore impossibile.>coloroff>")
/*<289>*/ 	set_camera(-1, 0)
/*<103>*/ 	printf(/* textboxtype: 2, unk: 0, line: 72 */ "La persona che accompagnava Zelda\nvi ha detto di parlare con l'Anziana\ndella Terra dell'esilio...\n\nCiò corrisponde alle informazioni nella\nmia memoria, suggerirei di dirigerci\nverso il <color blue<Santuario dell'esilio>coloroff>.")
/*<104>*/ 	scene_flags[7 'Lanayru Desert'][57 /* 0x6 02 */] = true;
/*<219>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = false;
/*<290>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_400_72() {
/*<221>*/ 	start()
/*<222>*/ 	printf(/* textboxtype: 8, unk: 0, line: 110 */ "Turni mensili per la pulizia\ndel Santuario del Tempo.\n　　　　Il Direttore")
          }

          void entrypoint_400_38() {
/*<253>*/ 	start()
/*<254>*/ 	printf(/* textboxtype: 1, unk: 0, line: 59 */ "Strano vedere uomini da queste parti!\nBzzz!\nTi interessano le pietre del tempo?")
/*<260>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_04() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 1, unk: 0, line: 5 */ "")
/*< 73>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_21() {
/*< 46>*/ 	start()
/*<320>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<321>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_47:
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "...")
          		  case 1:
/*<349>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_47
          			  case 1:
/*<322>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 47, 'param3': 31}
          				goto flw_47
          			}
          		}
          	  case 1:
          		goto flw_47
          	}
          }

          void entrypoint_400_56() {
/*<128>*/ 	start()
/*<129>*/ 	printf(/* textboxtype: 1, unk: 0, line: 107 */ "")
          }

          void entrypoint_400_73() {
/*<223>*/ 	start()
/*<224>*/ 	printf(/* textboxtype: 8, unk: 0, line: 111 */ "Contro la desertificazione,\nimpegniamoci per una\nterra più verde!\n　　　　Il Direttore")
          }

          void entrypoint_400_39() {
/*<255>*/ 	start()
/*<256>*/ 	printf(/* textboxtype: 1, unk: 0, line: 60 */ "...")
          }

          void entrypoint_400_05() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "")
          }

          void entrypoint_400_22() {
/*< 48>*/ 	start()
/*< 78>*/ 	switch (scene_flags[103 /* 0xD 80 */]) {
          	  case 0:
/*< 79>*/ 		switch (scene_flags[30 /* 0x2 40 */]) {
          		  case 0:
/*<323>*/ 			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          			  case 0:
/*<324>*/ 				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          				  case 0:
          					flw_81:
/*< 81>*/ 					switch (scene_flags[8 /* 0x0 01 */]) {
          					  case 0:
/*< 83>*/ 						printf(/* textboxtype: 1, unk: 0, line: 34 */ "Questo è l'<color blue<opificio di Ranel>coloroff>!\nQui si producono le pietre del\ntempo. Bzzz!\n\n<0x10009:0x13030000>Non sono meravigliose? Bzzz!")
          					  case 1:
/*< 82>*/ 						printf(/* textboxtype: 1, unk: 0, line: 33 */ "Hai scoperto la combinazione? Bzzz!\nSei in gamba! Bzzz!\n\n\n<0x10009:0x13030000>Quello è l'<color blue<opificio di Ranel>coloroff>!\nVi si producono le pietre del tempo.\nBzzz!\n\n<0x10009:0x13030000>Non sono meravigliose? Bzzz!")
/*< 84>*/ 						scene_flags[7 'Lanayru Desert'][8 /* 0x0 01 */] = true;
          						flw_85:
/*< 85>*/ 						scene_flags[7 'Lanayru Desert'][35 /* 0x5 08 */] = true;
          					}
          				  case 1:
/*<325>*/ 					printf(/* textboxtype: 1, unk: 0, line: 62 */ "Stai cercando un drago? Bzzz?\nSe si tratta del <color blue<<color blue<<0x10009:0x13030000><color blue<drago del fulmine>coloroff>, \npotresti trovarlo a sud delle <color blue<grotte di\nRanel>coloroff>. \nSe invece è un altro drago, non\nne ho la più pallida idea... Bzzz...")
/*<348>*/ 					story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          				}
          			  case 1:
          				goto flw_81
          			}
          		  case 1:
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0, line: 32 */ "Hai trovato i tre simboli?\nBravo, ma senza combinazione non\nriuscirai mai ad accedere all'opificio.\nBzzz!")
          			goto flw_85
          		}
          	  case 1:
/*< 49>*/ 		printf(/* textboxtype: 1, unk: 0, line: 31 */ "E tu chi sei? Bzzz!\n\n\n\n<0x10009:0x13030000>Questo è il generatore dell'ingresso\ndell'opificio di Ranel.\nBzzz.\n\n<0x10009:0x13030000>Per aprirlo devi inserire una\n<color red<combinazione di 3 simboli>coloroff>. Bzzz!")
/*< 86>*/ 		scene_flags[7 'Lanayru Desert'][34 /* 0x5 04 */] = true;
          	}
          }

          void entrypoint_400_57() {
/*<130>*/ 	start()
/*<131>*/ 	printf(/* textboxtype: 2, unk: 0, line: 64 */ "<0x10005:0x005a0000>Da centinaia di anni, il deserto\navanza in questa zona.\nÈ un'area molto arida.")
          }

          void entrypoint_400_74() {
/*<229>*/ 	start()
/*<230>*/ 	switch (scene_flags[11 /* 0x0 08 */]) {
          	  case 0:
          	  case 1:
/*< 62>*/ 		printf(/* textboxtype: 2, unk: 0, line: 66 */ "Si suppone che questa unità sia\ndanneggiata e obsoleta.\nNon comprendo quello che dice.")
/*<231>*/ 		scene_flags[7 'Lanayru Desert'][11 /* 0x0 08 */] = true;
          	}
          }

          void entrypoint_400_06() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 1, unk: 0, line: 7 */ "")
/*< 74>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_23() {
/*< 50>*/ 	start()
/*<326>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<327>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_51:
/*< 51>*/ 			printf(/* textboxtype: 1, unk: 0, line: 35 */ "...")
          		  case 1:
/*<351>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_51
          			  case 1:
/*<328>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 51, 'param3': 31}
          				goto flw_51
          			}
          		}
          	  case 1:
          		goto flw_51
          	}
          }

          void entrypoint_400_58() {
/*<132>*/ 	start()
/*<133>*/ 	printf(/* textboxtype: 2, unk: 0, line: 65 */ "<0x10005:0x005a0000>Si presume che <color blue<Zelda>coloroff>\nsi sia diretta più avanti.")
/*<267>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<266>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_400_40() {
/*<257>*/ 	start()
/*<258>*/ 	printf(/* textboxtype: 1, unk: 0, line: 61 */ "Qualche tempo fa uno dei miei\ncompagni è stato rapito...\nPare gli abbiano anche\nstaccato la spina. Bzzz!")
/*<261>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_75() {
/*<291>*/ 	start()
/*<292>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 2, 'next': 293, 'param3': 40}
/*<293>*/ 	wait_frames(45)
          }

          void entrypoint_400_07() {
/*< 21>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 1, unk: 0, line: 8 */ "...")
          }

          void entrypoint_400_24() {
/*< 52>*/ 	start()
/*<186>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<329>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<330>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_187:
/*<187>*/ 				printf(/* textboxtype: 1, unk: 0, line: 39 */ "Hai scoperto la combinazione? Bzzz!\nSei in gamba! Bzzz!")
          			  case 1:
/*<331>*/ 				printf(/* textboxtype: 1, unk: 0, line: 62 */ "Stai cercando un drago? Bzzz?\nSe si tratta del <color blue<<color blue<<0x10009:0x13030000><color blue<drago del fulmine>coloroff>, \npotresti trovarlo a sud delle <color blue<grotte di\nRanel>coloroff>. \nSe invece è un altro drago, non\nne ho la più pallida idea... Bzzz...")
/*<350>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_187
          		}
          	  case 1:
/*<115>*/ 		switch (scene_flags[100 /* 0xD 10 */]) {
          		  case 0:
/*<116>*/ 			printf(/* textboxtype: 1, unk: 0, line: 37 */ "Bzzz!\nStraordinario!\n\n\n<0x10009:0x13030000>Per entrare nell'opificio non\nbasta conoscere la combinazione!")
          			flw_155:
/*<155>*/ 			story_flags[732 /* us: 805A9B27 0x10, jp: 805ACDA7 0x10 */] = true;
/*<157>*/ 			story_flags[733 /* us: 805A9B27 0x20, jp: 805ACDA7 0x20 */] = true;
          		  case 1:
/*<180>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*< 53>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "Stai cercando i tre simboli per entrare\nnell'opificio di Ranel?\n\n\n<0x10009:0x13030000>Che strano tipo che sei! Bzzz!\nNon insegno la combinazione a\ntipi sospetti. Bzzz!\n\n<0x10009:0x13030000>Se ti pesco ad armeggiare con\nil generatore, saranno guai!\nBzzz bzzz!\n")
          				goto flw_155
          			  case 1:
/*<181>*/ 				printf(/* textboxtype: 1, unk: 0, line: 38 */ "Sei proprio un tipo strano!\nPiù che strano, sospetto! Bzzz!\n\n\n<0x10009:0x13030000>Se ti pesco ad armeggiare\ncon il generatore, saranno guai!\nBzzz bzzz!")
          				goto flw_155
          			}
          		}
          	}
          }

          void entrypoint_400_59() {
/*<134>*/ 	start()
/*<143>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<135>*/ 	printf(/* textboxtype: 2, unk: 0, line: 73 */ "<0x10005:0x005a0000>Siamo giunti nel <color blue<deserto di Ranel>coloroff>.\nLa conformazione dell'area ha subito\nvarie mutazioni a causa della\ndesertificazione.")
          }

          void entrypoint_400_76() {
/*<295>*/ 	start()
/*<296>*/ 	printf(/* textboxtype: 2, unk: 0, line: 86 */ "Siamo arrivati al <color blue<Santuario del Tempo>coloroff>.\n\n\n\nÈ possibile individuare con il\nrilevatore il portale della prova,\nnecessario per ottenere\nla fiamma sacra.")
/*<297>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_08() {
/*< 23>*/ 	start()
/*<225>*/ 	switch (scene_flags[29 /* 0x2 20 */]) {
          	  case 0:
/*<226>*/ 		printf(/* textboxtype: 1, unk: 0, line: 10 */ "Quelle pietre azzurre\nsono pericolose per gli umani.\nNon le toccare! Vattene! Bzzz!")
          	  case 1:
/*< 24>*/ 		printf(/* textboxtype: 1, unk: 0, line: 9 */ "Ehi, tu! Da dove arrivi? Bzzz!\nQui noi raccogliamo pietre del tempo\nper portarle all'<color blue<opificio di Ranel>coloroff>.\n\n<0x10009:0x13030000>Quelle pietre azzurre\nsono pericolose per gli umani.\nNon le toccare! Bzzz!")
/*<227>*/ 		scene_flags[7 'Lanayru Desert'][29 /* 0x2 20 */] = true;
/*< 75>*/ 		scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          	}
          }

          void entrypoint_400_25() {
/*< 54>*/ 	start()
/*<332>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<333>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_55:
/*< 55>*/ 			printf(/* textboxtype: 1, unk: 0, line: 40 */ "...")
          		  case 1:
/*<353>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_55
          			  case 1:
/*<334>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 31}
          				goto flw_55
          			}
          		}
          	  case 1:
          		goto flw_55
          	}
          }

          void entrypoint_400_77() {
/*<301>*/ 	start()
/*<302>*/ 	printf(/* textboxtype: 2, unk: 0, line: 93 */ "<0x10012:0x0000000b><heroname>, mio signore,\nFaih a rapporto.\nSiete entrato in possesso di tutti e tre\ni simboli.\nOra dirigetevi verso il <color red<generatore >coloroff>posto\ndavanti all'<color blue<opificio di Ranel>coloroff>.")
          }

          void entrypoint_400_09() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0, line: 11 */ "...")
          }

          void entrypoint_400_26() {
/*< 56>*/ 	start()
/*<188>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<335>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<336>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_189:
/*<189>*/ 				printf(/* textboxtype: 1, unk: 0, line: 44 */ "Hai scoperto la combinazione? Bzzz!\nSei in gamba! Bzzz!")
          			  case 1:
/*<337>*/ 				printf(/* textboxtype: 1, unk: 0, line: 62 */ "Stai cercando un drago? Bzzz?\nSe si tratta del <color blue<<color blue<<0x10009:0x13030000><color blue<drago del fulmine>coloroff>, \npotresti trovarlo a sud delle <color blue<grotte di\nRanel>coloroff>. \nSe invece è un altro drago, non\nne ho la più pallida idea... Bzzz...")
/*<352>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_189
          		}
          	  case 1:
/*<117>*/ 		switch (scene_flags[102 /* 0xD 40 */]) {
          		  case 0:
/*<118>*/ 			printf(/* textboxtype: 1, unk: 0, line: 42 */ "Bzzz!\nStraordinario!\n\n\n<0x10009:0x13030000>Per entrare nell'opificio non\nbasta conoscere la combinazione!")
          			flw_153:
/*<153>*/ 			story_flags[731 /* us: 805A9B27 0x08, jp: 805ACDA7 0x08 */] = true;
/*<158>*/ 			story_flags[733 /* us: 805A9B27 0x20, jp: 805ACDA7 0x20 */] = true;
          		  case 1:
/*<182>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*< 57>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "Stai cercando i tre simboli per entrare\nnell'opificio di Ranel?\n\n\n<0x10009:0x13030000>Che strano tipo che sei! Bzzz!\nNon insegno la combinazione a\ntipi sospetti. Bzzz!\n\n<0x10009:0x13030000>Se ti pesco ad armeggiare\ncon il generatore, saranno guai!\nBzzz bzzz!")
          				goto flw_153
          			  case 1:
/*<183>*/ 				printf(/* textboxtype: 1, unk: 0, line: 43 */ "Sei proprio un tipo strano!\nPiù che strano, sospetto! Bzzz!\n\n\n<0x10009:0x13030000>Se ti pesco ad armeggiare\ncon il generatore, saranno guai!\nBzzz bzzz!")
          				goto flw_153
          			}
          		}
          	}
          }

          void entrypoint_400_60() {
/*<136>*/ 	start()
/*<137>*/ 	printf(/* textboxtype: 2, unk: 0, line: 74 */ "<0x10005:0x005a0000>Confermo la presenza di <color red<sabbie mobili>coloroff>.\nProbabilità di venire inghiottiti: 30%")
          }

          void entrypoint_400_78() {
/*<303>*/ 	start()
/*<304>*/ 	printf(/* textboxtype: 2, unk: 0, line: 94 */ "<0x10012:0x0000000b><heroname>, mio signore,\nFaih a rapporto.\n\n\nRitengo che per azionare il <color red<generatore>coloroff>\nsia necessario provvedere alla sua\nalimentazione tramite una fonte di\nelettricità.")
          }

          void entrypoint_400_27() {
/*<119>*/ 	start()
/*<338>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<339>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_120:
/*<120>*/ 			printf(/* textboxtype: 1, unk: 0, line: 45 */ "...")
          		  case 1:
/*<355>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_120
          			  case 1:
/*<340>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 120, 'param3': 31}
          				goto flw_120
          			}
          		}
          	  case 1:
          		goto flw_120
          	}
          }

          void entrypoint_400_61() {
/*<138>*/ 	start()
/*<139>*/ 	printf(/* textboxtype: 2, unk: 0, line: 75 */ "<0x10005:0x005a0000>Per evitare i pericoli vi suggerirei\ndi verificare la <color red<<sound 4>conformazione\ndel terreno >coloroff>sulla mappa con (+)<0x10011:0x03cd>.")
          }

          void entrypoint_400_79() {
/*<305>*/ 	start()
/*<306>*/ 	printf(/* textboxtype: 2, unk: 0, line: 80 */ "<0x10012:0x0000000b><heroname>, mio signore,\nFaih a rapporto.\n\n\nLa mappa di cui siete in possesso\ncoincide con la reale conformazione\ndel terreno per appena il 35%.\n\nL'attuale conformazione appare\ndi gran lunga differente.\n\n\nDesumo che la correzione della\nmappa effettuata dal robot\nraffiguri <color red<terre del passato>coloroff><sound 4>,\normai inghiottite dalle sabbie mobili.")
          }

          void entrypoint_400_10() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0, line: 12 */ "È il carrello per trasportare le\npietre del tempo. Gli uomini non ci\npossono salire... Levati di torno! Bzzz!")
/*< 69>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_28() {
/*<121>*/ 	start()
/*<190>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<341>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<342>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_191:
/*<191>*/ 				printf(/* textboxtype: 1, unk: 0, line: 49 */ "Hai scoperto la combinazione? Bzzz!\nSei in gamba! Bzzz!")
          			  case 1:
/*<343>*/ 				printf(/* textboxtype: 1, unk: 0, line: 62 */ "Stai cercando un drago? Bzzz?\nSe si tratta del <color blue<<color blue<<0x10009:0x13030000><color blue<drago del fulmine>coloroff>, \npotresti trovarlo a sud delle <color blue<grotte di\nRanel>coloroff>. \nSe invece è un altro drago, non\nne ho la più pallida idea... Bzzz...")
/*<354>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_191
          		}
          	  case 1:
/*<123>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*<124>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "Bzzz!\nStraordinario!\n\n\n<0x10009:0x13030000>Per entrare nell'opificio non\nbasta conoscere la combinazione!")
          			flw_154:
/*<154>*/ 			story_flags[731 /* us: 805A9B27 0x08, jp: 805ACDA7 0x08 */] = true;
/*<156>*/ 			story_flags[732 /* us: 805A9B27 0x10, jp: 805ACDA7 0x10 */] = true;
          		  case 1:
/*<184>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*<122>*/ 				printf(/* textboxtype: 1, unk: 0, line: 46 */ "Stai cercando i tre simboli per entrare\nnell'opificio di Ranel?\n\n\n<0x10009:0x13030000>Che strano tipo che sei! Bzzz!\nNon insegno la combinazione a\ntipi sospetti. Bzzz!\n\n<0x10009:0x13030000>Se ti pesco ad armeggiare\ncon il generatore, saranno guai!\nBzzz bzzz!")
          				goto flw_154
          			  case 1:
/*<185>*/ 				printf(/* textboxtype: 1, unk: 0, line: 48 */ "Sei proprio un tipo strano!\nPiù che strano, sospetto! Bzzz!\n\n\n<0x10009:0x13030000>Se ti pesco ad armeggiare\ncon il generatore, saranno guai!\nBzzz bzzz!")
          				goto flw_154
          			}
          		}
          	}
          }

          void entrypoint_400_62() {
/*<140>*/ 	start()
/*<141>*/ 	printf(/* textboxtype: 2, unk: 0, line: 76 */ "<0x10005:0x005a0000>Si suppone che <color blue<Zelda >coloroff>si sia allontanata.\nConfermo inoltre che il territorio\nè pericoloso.\n\nVi suggerirei di ricongiungervi a lei per\nverificare le motivazioni delle sue\nattività nel territorio di <color blue<<0x10005:0x005a0000>Oldin<color blue<.<color blue<>coloroff>")
          }

          void entrypoint_400_11() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0, line: 13 */ "...")
          }

          void entrypoint_400_63() {
/*<144>*/ 	start()
/*<145>*/ 	printf(/* textboxtype: 2, unk: 0, line: 81 */ "<0x10012:0x0000000b><heroname>, mio signore,\nFaih a rapporto.\n\n\nConfermo che al momento non state\ncamminando sulle sabbie mobili.\nVi suggerisco comunque\ndi consultare la mappa.\n")
/*<192>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 261, 'next': 193, 'param3': 30}
/*<193>*/ 	printf(/* textboxtype: 2, unk: 0, line: 82 */ "Nel passato, in questo luogo passava\nuna strada ora nascosta dalle sabbie\nmobili. Confermo che è possibile\nseguirla senza sprofondare.\nVi suggerisco di collocare fari celesti\nsulla mappa per contrassegnare\nl'antica strada, prima di proseguire.")
/*<212>*/ 	printf(/* textboxtype: 2, unk: 0, line: 83 */ "Vi suggerirei di utilizzare\n<color blue<diversi>coloroff><sound 4> fari celesti. ")
/*<195>*/ 	story_flags[745 /* us: 805A9B29 0x02, jp: 805ACDA9 0x02 */] = true;
/*<194>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 34}
          }

          void entrypoint_400_29() {
/*<232>*/ 	start()
/*<233>*/ 	printf(/* textboxtype: 1, unk: 0, line: 50 */ "...")
          }

          void entrypoint_400_80() {
/*<356>*/ 	start()
/*<357>*/ 	printf(/* textboxtype: 2, unk: 0, line: 95 */ "A volte, nel deserto di Ranel, si\nvedono rotolare i <color blue<rotolacampo>coloroff>.\nSono dei materiali molto utili e si\ncatturano usando il <color red<retino>coloroff>.")
          }

          void entrypoint_400_12() {
/*< 31>*/ 	start()
/*< 32>*/ 	printf(/* textboxtype: 1, unk: 0, line: 14 */ "Intralci gli scavi!\nPerché non smetti\ndi parlare? Bzzz!")
/*< 70>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_64() {
/*<146>*/ 	start()
/*<147>*/ 	printf(/* textboxtype: 1, unk: 0, line: 101 */ "<0x10009:0x2f0c0d01><0x10006:0xffcd><0x10008:0x01cd><0x10009:0x2f000001>Ehi, <heroname>, sei tu?\n\n\n\n<0x10006:0xffcd><0x10008:0x01cd>Che fortuna averti qui!<pause 15>\nAvevo voglia di vederti!<pause 15>\n\n\n<0x10006:0x02cd><0x10008:0x01cd>Puoi raggiungermi quassù?")
/*<148>*/ 	scene_flags[7 'Lanayru Desert'][76 /* 0x8 10 */] = true;
/*<262>*/ 	story_flags[828 /* us: 805A9B33 0x10, jp: 805ACDB3 0x10 */] = true;
/*<263>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<264>*/ 	story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<265>*/ 	story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          }

