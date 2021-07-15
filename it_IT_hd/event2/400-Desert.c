          void entrypoint_400_13() {
/*< 33>*/ 	start()
/*< 34>*/ 	printf("...")
          }

          void entrypoint_400_65() {
/*<161>*/ 	start()
/*<162>*/ 	printf("Siamo arrivati alla <b<miniera di Ranel>>.\n\n\n\nÈ possibile individuare con il rilevatore\nil portale della prova, necessario per\nottenere la fiamma sacra.")
/*<163>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_30() {
/*<234>*/ 	start()
/*<235>*/ 	printf("Cosa? Vuoi lavorare qui?\nAllora togliti quello strano berretto\ne indossa il casco! Bzzz!\n")
/*<244>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_14() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf("Levati dai piedi! Bzzz! Sta per passare\nil carrello! Bzzz!")
/*< 71>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_66() {
/*<164>*/ 	start()
/*<165>*/ 	printf("Siamo arrivati al <b<deserto di Ranel>>.\n\n\n\nÈ possibile individuare con il rilevatore\nil portale della prova, necessario per\nottenere la fiamma sacra.")
/*<166>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_31() {
/*<236>*/ 	start()
/*<237>*/ 	printf("...")
          }

          void entrypoint_400_15() {
/*< 37>*/ 	start()
/*<304>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<305>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_38:
/*< 38>*/ 			printf("...")
          		  case 1:
/*<342>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				flw_307:
/*<307>*/ 				printf("...")
          			  case 1:
/*<306>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 307, 'param3': 31}
          				goto flw_307
          			}
          		}
          	  case 1:
          		goto flw_38
          	}
          }

          void entrypoint_400_67() {
/*<167>*/ 	start()
/*<168>*/ 	printf("Siamo arrivati al <b<Santuario del Tempo>>.\n\n\n\nÈ possibile individuare con il rilevatore\nil portale della prova, necessario per\nottenere la fiamma sacra.")
/*<169>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_32() {
/*<238>*/ 	start()
/*<239>*/ 	printf("Ultimamente siamo spesso attaccati da\nstrani esseri. Noi non abbiamo armi...\nogni attacco può essere letale... Bzzz!")
/*<245>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_16() {
/*< 39>*/ 	start()
/*<  9>*/ 	switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          	  case 0:
/*<308>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<309>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_12:
/*< 12>*/ 				printf("Ma sei ancora qui?! Bzzz!\nProcedi con cautela! Bzzz!")
          			  case 1:
/*<310>*/ 				printf("Stai cercando un drago? Bzzz? Se si\ntratta del <b<\x0E\x01\x09\x04\x1303\x00drago del fulmine>>, potresti\ntrovarlo a sud delle <b<grotte di Ranel>>.\n\nSe invece è un altro drago, non\nne ho la più pallida idea... Bzzz...")
/*<341>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_12
          		}
          	  case 1:
/*<  5>*/ 		switch (story_flags[90 /* us: 805A9AEF 0x80, jp: 805ACD6F 0x80 */]) {
          		  case 0:
          			flw_10:
/*< 10>*/ 			printf("Ora è in grado di <r<afferrare le cose\ncon le pinze>>! Fai attenzione! Bzzz!")
/*< 77>*/ 			scene_flags[7 'Lanayru Desert'][5 /* 0x1 20 */] = true;
/*<280>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<  6>*/ 			switch (context_related2(0)) {
          			  case 0:
/*<274>*/ 				printf("\x0E\x01\x09\x04\x1303\x00Grazie! Bzzz!")
/*<275>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 276, 'param3': 47}
/*<276>*/ 				set_camera(6, 0)
/*<278>*/ 				{'type': 'type3', 'subType': 2, 'param1': 27, 'param2': 356, 'next': 277, 'param3': 15}
/*<277>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 279, 'param3': 17}
/*<279>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 7, 'param3': 48}
/*<  7>*/ 				printf("\x0E\x01\x09\x04\x1303\x00C'è mancato poco!\nStava per staccarmi la corrente! Bzzz!\n\n\nVediamo un po'... <pause1E>Hai uno\n<y<scarabeo>> vero? Ma è del vecchio\nmodello Ranel...\n\nPer premio <r<lo >>trasformerò in qualcosa\ndi meglio! Bzzz!\n\x0E\x01\x09\x04\x1303\x00Dai qua! Bzzz!")
/*< 91>*/ 				make_actor_do_something(0, 0)
/*<281>*/ 				{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 8, 'param3': 42}
/*<  8>*/ 				give_item(75 0x4B);
/*< 11>*/ 				story_flags[90 /* us: 805A9AEF 0x80, jp: 805ACD6F 0x80 */] = true;
          				goto flw_10
          			  case 1:
/*<  4>*/ 				printf("Ehi, aiutami! Bzzz!")
/*< 76>*/ 				scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
/*<228>*/ 				scene_flags[7 'Lanayru Desert'][28 /* 0x2 10 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_400_50() {
/*< 58>*/ 	start()
/*<142>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*< 59>*/ 	printf("\x0E\x01\x05\x04Z\x00\x0E\x01\x12\x04\x00\x0BLink, mio signore,\nFaih a rapporto.\nSiete giunto nella <b<miniera di Ranel>>.")
          }

          void entrypoint_400_68() {
/*<170>*/ 	start()
/*<172>*/ 	set_camera(-1, 0)
/*<171>*/ 	printf("Complimenti, Link,\n\x0E\x01\x12\x04\x00\x04mio signore!")
/*<173>*/ 	printf("\x0E\x01\x12\x04\x00\x01Avete superato la prova!\nLa vostra anima si è rafforzata e\nora potete recarvi a purificare\nla vostra spada.")
/*<175>*/ 	set_camera(3, 0)
/*<174>*/ 	printf("Quegli <y<artigli >>sono una delle armi\nlasciate dalla Dea.\n\n\nLanciando quelle unghie di ferro,\npotete balzare volando direttamente\nsugli <r<obiettivi >>o sulle pareti ricoperte\ndi <r<edera>>.")
/*<177>*/ 	set_camera(-1, 0)
/*<176>*/ 	printf("Confermo che la fiamma si trova\nda qualche parte nel deserto.\nDeduco che non avete ancora\nscoperto tale luogo, \x0E\x01\x12\x04\x00\x01signore.")
          }

          void entrypoint_400_33() {
/*<240>*/ 	start()
/*<241>*/ 	printf("...")
          }

          void entrypoint_400_17() {
/*< 40>*/ 	start()
/*<125>*/ 	switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          	  case 0:
/*<216>*/ 		switch (scene_flags[89 /* 0xA 02 */]) {
          		  case 0:
/*<218>*/ 			printf("\x0E\x01\x09\x04\x16\x2007Ora posso proseguire le mie ricerche\nall'interno! \x0E\x01\x09\x04\x00\x2000Poi dovrò tornare alla\nTerra dell'esilio... Sarà meglio che\nmi sbrighi!")
          		  case 1:
/*<126>*/ 			printf("\x0E\x01\x09\x04\x15\x1B09Eh? Sei riuscito a entrare?!\n\n\n\n\x0E\x01\x09\x04\x15\x1B00Cosa? C'è un'altra strada segreta?\nPer tutti i porfidi, insegnamela!\n\n\n\x0E\x01\x09\x04\x08\x2100Io stavo per lasciar perdere quando...\nho sentito un rumore fortissimo e\ntornando indietro ho notato che le\nrocce non c'erano più...!\n\x0E\x01\x09\x04\x16\x2007Ora posso proseguire le mie ricerche\nall'interno! \x0E\x01\x09\x04\x00\x2000Poi dovrò tornare alla\nTerra dell'esilio... sarà meglio che\nmi sbrighi!")
/*<217>*/ 			scene_flags[7 'Lanayru Desert'][89 /* 0xA 02 */] = true;
          		}
          	  case 1:
/*<150>*/ 		switch (scene_flags[73 /* 0x8 02 */]) {
          		  case 0:
/*<152>*/ 			printf("\x0E\x01\x09\x04\x16\x2007Che rabbia non poter passare!\nNon c'è un'altra strada che porta\nal santuario...?")
          		  case 1:
/*< 41>*/ 			printf("\x0E\x01\x09\x04\x00\x02Eccoti di nuovo!\nMa sbuchi proprio dappertutto!\n\n\nMa lasciamo perdere... piuttosto\nsenti qua:\x0E\x01\x09\x04\x17\x2008 ho fatto la scoperta\ndel secolo!\n\n\x0E\x01\x09\x04\x00\x2000Sai dove ci troviamo? In un luogo\nmolto sacro e venerato,\nil <b<Santuario del Tempo>>.\n\n\x0E\x01\x09\x04\x00\x190ABene, proprio qui mi è capitato di\nvedere gli <r<abitanti dell'Isola della\nDea>>... sì, quella delle leggende!\n\n\x0E\x01\x09\x04\x00\x1900Indossavano abiti identici a quelli\ndescritti dai testi antichi e...\na dire il vero ti somigliavano\nun bel po'!\n\x0E\x01\x09\x04\x08\x2105Erano in due e sono passati\nper la porta. Volevo seguirli,\nma...\n\n\x0E\x01\x09\x04\x15\x1B00Improvvisamente... Booom!\nUn'esplosione ha distrutto\nla porta e come puoi vedere...\n\n\x0E\x01\x09\x04\x16\x2007Ora è impossibile attraversarla...\nChe rabbia! Per tutti i lapislazzuli!")
/*<151>*/ 			scene_flags[7 'Lanayru Desert'][73 /* 0x8 02 */] = true;
          		}
          	}
          }

          void entrypoint_400_51() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf("Confermo che in quest'area il tempo\nè tornato indietro.\n\n\nSuppongo che il colpo inferto alla\npietra azzurra abbia fatto\nregredire il tempo e ora\n<r<<pling>ci troviamo nel passato>>.")
          }

          void entrypoint_400_69() {
/*<207>*/ 	start()
/*<208>*/ 	printf("Vi invito ad adottare ogni\nmisura di sicurezza, per\nevitare incidenti.\n\x3000\x3000\x3000\x3000Il Direttore")
          }

          void entrypoint_400_34() {
/*<242>*/ 	start()
/*<243>*/ 	printf("Ti interessano le pietre del tempo?\nAllora ti suggerisco di visitare\nl'<b<opificio di Ranel>>! Bzzz!")
/*<246>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_52() {
/*< 87>*/ 	start()
/*< 88>*/ 	printf("Ho scoperto altri <b<generatori >>simili\nnelle vicinanze.\n<pling>Individuazione con <r<rilevatore >>possibile.")
/*<220>*/ 	story_flags[107 /* us: 805A9AE1 0x01, jp: 805ACD61 0x01 */] = true;
/*<291>*/ 	open_dowsing_wheel(3)
/*<268>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_400_35() {
/*<247>*/ 	start()
/*<248>*/ 	printf("...")
          }

          void entrypoint_400_01() {
          	start()
/*<  1>*/ 	printf("...")
          }

          void entrypoint_400_19() {
/*< 42>*/ 	start()
/*<311>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<312>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_43:
/*< 43>*/ 			printf("...")
          		  case 1:
/*<344>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_43
          			  case 1:
/*<313>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 43, 'param3': 31}
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
/*<114>*/ 	printf("")
/*<159>*/ 	set_camera(1, 0)
/*<160>*/ 	printf("")
/*<178>*/ 	set_camera(-1, 0)
/*<179>*/ 	printf("")
          }

          void entrypoint_400_70() {
/*<209>*/ 	start()
/*<210>*/ 	printf("Obiettivo del mese:\n150 contenitori\n           Il Direttore")
          }

          void entrypoint_400_36() {
/*<249>*/ 	start()
/*<250>*/ 	printf("Le pietre del tempo permettono a noi\ne alle macchine di funzionare. Hanno\nuna grande energia! Lavoriamo sodo noi!\nBzzz!")
/*<259>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf("")
/*< 72>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_54() {
/*<100>*/ 	start()
/*<205>*/ 	switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          	  case 0:
/*<206>*/ 		printf("\x0E\x01\x09\x04\x2F08\x709Link!\nSei entrato nella terra dei draghi!<pause54>\n\n\n\x0E\x01\x09\x04\x2F01\x805\x0E\x01\x08\x02\x2CDChe invidia!<pause5A>\n\n\n\n\x0E\x01\x09\x04\x2F0F\x706\x0E\x01\x08\x02\x2CDMi hai superato!\nPer tutti i porfidi!")
          		flw_149:
/*<149>*/ 		scene_flags[7 'Lanayru Desert'][76 /* 0x8 10 */] = true;
          	  case 1:
/*<109>*/ 		switch (scene_flags[75 /* 0x8 08 */]) {
          		  case 0:
/*<111>*/ 			printf("\x0E\x01\x09\x04\x2F08\xD0AHo trovato la strada che conduce alla\nterra in cui viveva il <r<drago del fulmine>>.<pause2D>\n\n\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x09\x04\x2F0D\x800Ma il passaggio è troppo\nstretto per me...\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x09\x04\x2F08\x700Tutto inutile...")
          			goto flw_149
          		  case 1:
/*<112>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 105, 'param3': 31}
/*<105>*/ 			switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          			  case 0:
/*<272>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD02Ehi, Link!")
/*<273>*/ 				set_camera(5, 0)
/*<108>*/ 				printf("E invece la <b<fiamma sacra >>di cui\nmi parlavi... Come è andata a finire?\nL'hai trovata?\n\nDa quando me lo hai detto non ho\nfatto che pensarci...\nRacconta!\n\n\x0E\x01\x09\x04\x2F08\x407.<pause14>.<pause14>.<pause14> Ah... dopo una serie di avventure\nsei riuscito a trovarla!\n\n\nSei davvero una roccia,\nLink!")
/*<355>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD0AAnch'io ho scoperto qualcosa sulla\nleggenda dei tre draghi.<pause0F>\n\n\nSì, è vero, nel deserto esiste\nun luogo nascosto!\n\n\nHo trovato un<r< piccolo passaggio>><pling>,\ncosì piccolo che non ci entro!\n\n\n\x0E\x01\x09\x04\x2F00\xD00Secondo me conduce alla terra\ndove viveva il <r<drago del fulmine>>,\nuno dei tre draghi della leggenda.\n\n\x0E\x01\x09\x04\x2F00\x800Scommetto che anche\ni robot c'entrano qualcosa...<pause0F>\n\n\n<r<\x0E\x01\x09\x04\x2F01\x807\x0E\x01\x06\x02\xFFCD>><r<Drago del fulmine>>, robot e\npietre del tempo<pause14>.<pause14>.<pause14>.<pause14>\n\n\n\x0E\x01\x09\x04\x2F08\x708\x0E\x01\x08\x02\x2CD\x0E\x01\x08\x02\x2CDUn vero e proprio\nromanzo di avventure!")
/*<107>*/ 				printf("\x0E\x01\x09\x04\x08\xD00Link,\nscusa per non averti informato prima\nsullo stato degli scavi da te finanziati.<pause14>\n\nHo trovato tante pietre del tempo\ncome la sabbia nel mare!\n\x0E\x01\x09\x04\x2F00\xD01Posso restituirti il prestito\nmoltiplicato per 10!")
/*<106>*/ 				rupees += 100;
          				flw_282:
/*<282>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 110, 'param3': 42}
/*<110>*/ 				scene_flags[7 'Lanayru Desert'][75 /* 0x8 08 */] = true;
/*<269>*/ 				story_flags[828 /* us: 805A9B33 0x10, jp: 805ACDB3 0x10 */] = true;
/*<357>*/ 				story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<358>*/ 				story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<359>*/ 				story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          				goto flw_149
          			  case 1:
/*<270>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD02Ehi, Link!")
/*<271>*/ 				set_camera(5, 0)
/*<211>*/ 				printf("E invece la <b<fiamma sacra >>di cui\nmi parlavi... Come è andata a finire?\nL'hai trovata?\n\nDa quando me lo hai detto non ho\nfatto che pensarci...\nRacconta!\n\n\x0E\x01\x09\x04\x2F08\x407.<pause14>.<pause14>.<pause14> Ah... dopo una serie di avventure\nsei riuscito a trovarla!\n\n\nSei davvero una roccia,\nLink!")
/*<356>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD0AAnch'io ho scoperto qualcosa sulla\nleggenda dei tre draghi.<pause0F>\n\n\nSì, è vero, nel deserto esiste\nun luogo nascosto!\n\n\nHo trovato un<r< piccolo passaggio>><pling>,\ncosì piccolo che non ci entro!\n\n\n\x0E\x01\x09\x04\x2F00\xD00Secondo me conduce alla terra\ndove viveva il <r<drago del fulmine>>,\nuno dei tre draghi della leggenda.\n\n\x0E\x01\x09\x04\x2F00\x800Scommetto che anche\ni robot c'entrano qualcosa...<pause0F>\n\n\n<r<\x0E\x01\x09\x04\x2F01\x807\x0E\x01\x06\x02\xFFCD>><r<Drago del fulmine>>, robot e\npietre del tempo<pause14>.<pause14>.<pause14>.<pause14>\n\n\n\x0E\x01\x09\x04\x2F08\x708\x0E\x01\x08\x02\x2CD\x0E\x01\x08\x02\x2CDUn vero e proprio\nromanzo di avventure!")
          				goto flw_282
          			}
          		}
          	}
          }

          void entrypoint_400_71() {
/*<213>*/ 	start()
/*<214>*/ 	printf("\x0E\x01\x12\x04\x00\x0BLink, mio signore,\nFaih a rapporto.")
/*<295>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 296, 'param3': 30}
/*<296>*/ 	printf("I simboli su questo meccanismo\ncorrispondono a quelli dei tre già\nattivati. Deduco che sia plausibile\nuna qualche sorta di connessione.")
/*<297>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 34}
          }

          void entrypoint_400_37() {
/*<251>*/ 	start()
/*<252>*/ 	printf("...")
          }

          void entrypoint_400_03() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("...")
          }

          void entrypoint_400_20() {
/*< 44>*/ 	start()
/*< 63>*/ 	switch (scene_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<314>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<315>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_66:
/*< 66>*/ 				printf("Il Santuario del Tempo è sempre\npiù bello! Bzzz!")
          			  case 1:
/*<316>*/ 				printf("Stai cercando un drago? Bzzz? Se si\ntratta del <b<\x0E\x01\x09\x04\x1303\x00drago del fulmine>>, potresti\ntrovarlo a sud delle <b<grotte di Ranel>>.\n\nSe invece è un altro drago, non\nne ho la più pallida idea... Bzzz...")
/*<343>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_66
          		}
          	  case 1:
/*< 94>*/ 		switch (scene_flags[69 /* 0x9 20 */]) {
          		  case 0:
/*< 96>*/ 			printf("Per un pelo!\nMi hai salvato, grazie! Bzzz!")
/*< 93>*/ 			make_actor_do_something(1, 0)
/*< 45>*/ 			printf("\x0E\x01\x09\x04\x03\x900Qui ci troviamo nel <b<Santuario\ndel Tempo>>, il luogo in cui la Dea ha\ncollocato la sacra <b<Porta del Tempo>>.\n\n\x0E\x01\x09\x04\x03\x900Noi ci occupiamo di tenere puliti\ni dintorni. Bzzz! Se vuoi raggiungere\nla Porta del Tempo, entra in quel\npassaggio.\n\x0E\x01\x09\x04\x03\x900Eh?\nSe ci si può andare in altro modo?\n\n\n\x0E\x01\x09\x04\x03\x900L'<b<opificio di Ranel >>e il <b<Santuario del\nTempo >><r<sono collegati da un passaggio\nsotterraneo>>. L'opificio di Ranel è qua!")
/*<202>*/ 			make_actor_do_something(2, 0)
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 215, 'param3': 30}
/*<215>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 90, 'param3': 6}
/*< 90>*/ 			scene_flags[7 'Lanayru Desert'][3 /* 0x1 08 */] = true;
/*< 99>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 97, 'param3': 6}
/*< 97>*/ 			printf("Eh? Questa mappa... ha qualcosa\ndi strano. La correggerò... Bzzz!")
/*< 64>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 3, 'next': 197, 'param3': 30}
/*<197>*/ 			{'type': 'type3', 'subType': 2, 'param1': 9, 'param2': 356, 'next': 67, 'param3': 15}
/*< 67>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 200, 'param3': 34}
/*<200>*/ 			set_camera(4, 0)
/*<199>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 65, 'param3': 17}
/*< 65>*/ 			printf("\x0E\x01\x09\x04\x03\x900L'opificio di Ranel è più avanti!\nFai attenzione! Bzzz!")
/*<203>*/ 			make_actor_do_something(3, 0)
/*< 68>*/ 			{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 0, 'next': 89, 'param3': 14}
/*< 89>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 101, 'param3': 17}
/*<101>*/ 			story_flags[129 /* us: 805A9AED 0x40, jp: 805ACD6D 0x40 */] = true;
/*<196>*/ 			scene_flags[7 'Lanayru Desert'][53 /* 0x7 20 */] = true;
/*<198>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 201, 'param3': 17}
/*<201>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 204, 'param3': 42}
/*<204>*/ 			make_actor_do_something(4, 0)
          		  case 1:
/*< 95>*/ 			printf("Aiuto! Bzzz!")
/*<127>*/ 			scene_flags[7 'Lanayru Desert'][53 /* 0x7 20 */] = true;
          		}
          	}
          }

          void entrypoint_400_55() {
/*<102>*/ 	start()
/*<283>*/ 	printf("\x0E\x01\x12\x04\x00\x01Mio signore, Faih a rapporto.\nImpossibile percepire l'aura di <b<Zelda>>.")
/*<284>*/ 	set_camera(7, 0)
/*<285>*/ 	printf("Nell'attimo in cui la porta è stata\ndistrutta, ho cessato di percepire\nla presenza di Zelda. <pling><r<Individuazione\ncon rilevatore impossibile.>>")
/*<286>*/ 	set_camera(-1, 0)
/*<103>*/ 	printf("La persona che accompagnava Zelda\nvi ha detto di parlare con l'Anziana\ndella Terra dell'esilio...\n\nCiò corrisponde alle informazioni nella\nmia memoria, suggerirei di dirigerci\nverso il <b<Santuario dell'esilio>>.")
/*<104>*/ 	scene_flags[7 'Lanayru Desert'][57 /* 0x6 02 */] = true;
/*<219>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = false;
/*<287>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_400_72() {
/*<221>*/ 	start()
/*<222>*/ 	printf("Turni mensili per la pulizia\ndel Santuario del Tempo.\n\x3000\x3000\x3000\x3000Il Direttore")
          }

          void entrypoint_400_38() {
/*<253>*/ 	start()
/*<254>*/ 	printf("Strano vedere uomini da queste parti!\nBzzz! Ti interessano le pietre del tempo?")
/*<260>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_04() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf("")
/*< 73>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_21() {
/*< 46>*/ 	start()
/*<317>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<318>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_47:
/*< 47>*/ 			printf("...")
          		  case 1:
/*<346>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_47
          			  case 1:
/*<319>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 47, 'param3': 31}
          				goto flw_47
          			}
          		}
          	  case 1:
          		goto flw_47
          	}
          }

          void entrypoint_400_56() {
/*<128>*/ 	start()
/*<129>*/ 	printf("")
          }

          void entrypoint_400_73() {
/*<223>*/ 	start()
/*<224>*/ 	printf("Contro la desertificazione,\nimpegniamoci per una\nterra più verde!\n\x3000\x3000\x3000\x3000Il Direttore")
          }

          void entrypoint_400_39() {
/*<255>*/ 	start()
/*<256>*/ 	printf("...")
          }

          void entrypoint_400_05() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf("")
          }

          void entrypoint_400_22() {
/*< 48>*/ 	start()
/*< 78>*/ 	switch (scene_flags[103 /* 0xD 80 */]) {
          	  case 0:
/*< 79>*/ 		switch (scene_flags[30 /* 0x2 40 */]) {
          		  case 0:
/*<320>*/ 			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          			  case 0:
/*<321>*/ 				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          				  case 0:
          					flw_81:
/*< 81>*/ 					switch (scene_flags[8 /* 0x0 01 */]) {
          					  case 0:
/*< 83>*/ 						printf("Questo è l'<b<opificio di Ranel>>! Qui si\nproducono le pietre del tempo. Bzzz!\n\n\n\x0E\x01\x09\x04\x1303\x00Non sono meravigliose? Bzzz!")
          					  case 1:
/*< 82>*/ 						printf("Hai scoperto la combinazione? Bzzz!\nSei in gamba! Bzzz!\n\n\n\x0E\x01\x09\x04\x1303\x00Quello è l'<b<opificio di Ranel>>!\nVi si producono le pietre del tempo. Bzzz!\n\n\n\x0E\x01\x09\x04\x1303\x00Non sono meravigliose? Bzzz!")
/*< 84>*/ 						scene_flags[7 'Lanayru Desert'][8 /* 0x0 01 */] = true;
          						flw_85:
/*< 85>*/ 						scene_flags[7 'Lanayru Desert'][35 /* 0x5 08 */] = true;
          					}
          				  case 1:
/*<322>*/ 					printf("Stai cercando un drago? Bzzz? Se si\ntratta del <b<\x0E\x01\x09\x04\x1303\x00drago del fulmine>>, potresti\ntrovarlo a sud delle <b<grotte di Ranel>>.\n\nSe invece è un altro drago, non\nne ho la più pallida idea... Bzzz...")
/*<345>*/ 					story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          				}
          			  case 1:
          				goto flw_81
          			}
          		  case 1:
/*< 80>*/ 			printf("Hai trovato i tre simboli?\nBravo, ma senza combinazione non\nriuscirai mai ad accedere all'opificio.\nBzzz!")
          			goto flw_85
          		}
          	  case 1:
/*< 49>*/ 		printf("E tu chi sei? Bzzz!\n\n\n\n\x0E\x01\x09\x04\x1303\x00Questo è il generatore dell'ingresso\ndell'opificio di Ranel. Bzzz.\n\n\n\x0E\x01\x09\x04\x1303\x00Per aprirlo devi inserire una\n<r<combinazione di 3 simboli>>. Bzzz!")
/*< 86>*/ 		scene_flags[7 'Lanayru Desert'][34 /* 0x5 04 */] = true;
          	}
          }

          void entrypoint_400_57() {
/*<130>*/ 	start()
/*<131>*/ 	printf("\x0E\x01\x05\x04Z\x00Da centinaia di anni, il deserto avanza\nin questa zona. È un'area molto arida.")
          }

          void entrypoint_400_74() {
/*<229>*/ 	start()
/*<230>*/ 	switch (scene_flags[11 /* 0x0 08 */]) {
          	  case 0:
          	  case 1:
/*< 62>*/ 		printf("Si suppone che questa unità sia\ndanneggiata e obsoleta.\nNon comprendo quello che dice.")
/*<231>*/ 		scene_flags[7 'Lanayru Desert'][11 /* 0x0 08 */] = true;
          	}
          }

          void entrypoint_400_06() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf("")
/*< 74>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_23() {
/*< 50>*/ 	start()
/*<323>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<324>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_51:
/*< 51>*/ 			printf("...")
          		  case 1:
/*<348>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_51
          			  case 1:
/*<325>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 51, 'param3': 31}
          				goto flw_51
          			}
          		}
          	  case 1:
          		goto flw_51
          	}
          }

          void entrypoint_400_58() {
/*<132>*/ 	start()
/*<133>*/ 	printf("\x0E\x01\x05\x04Z\x00Si presume che <b<Zelda >>si sia diretta\npiù avanti.")
/*<267>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<266>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_400_40() {
/*<257>*/ 	start()
/*<258>*/ 	printf("Qualche tempo fa uno dei miei compagni\nè stato rapito... Pare gli abbiano anche\nstaccato la spina. Bzzz!")
/*<261>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_75() {
/*<288>*/ 	start()
/*<289>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 2, 'next': 290, 'param3': 40}
/*<290>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': -1, 'param3': 6}
          }

          void entrypoint_400_07() {
/*< 21>*/ 	start()
/*< 22>*/ 	printf("...")
          }

          void entrypoint_400_24() {
/*< 52>*/ 	start()
/*<186>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<326>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<327>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_187:
/*<187>*/ 				printf("Hai scoperto la combinazione? Bzzz!\nSei in gamba! Bzzz!")
          			  case 1:
/*<328>*/ 				printf("Stai cercando un drago? Bzzz? Se si\ntratta del <b<\x0E\x01\x09\x04\x1303\x00drago del fulmine>>, potresti\ntrovarlo a sud delle <b<grotte di Ranel>>.\n\nSe invece è un altro drago, non\nne ho la più pallida idea... Bzzz...")
/*<347>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_187
          		}
          	  case 1:
/*<115>*/ 		switch (scene_flags[100 /* 0xD 10 */]) {
          		  case 0:
/*<116>*/ 			printf("Bzzz!\nStraordinario!\n\n\n\x0E\x01\x09\x04\x1303\x00Per entrare nell'opificio non\nbasta conoscere la combinazione!")
          			flw_155:
/*<155>*/ 			story_flags[732 /* us: 805A9B27 0x10, jp: 805ACDA7 0x10 */] = true;
/*<157>*/ 			story_flags[733 /* us: 805A9B27 0x20, jp: 805ACDA7 0x20 */] = true;
          		  case 1:
/*<180>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*< 53>*/ 				printf("Stai cercando i tre simboli per entrare\nnell'opificio di Ranel?\n\n\n\x0E\x01\x09\x04\x1303\x00Che strano tipo che sei! Bzzz!\nNon insegno la combinazione a\ntipi sospetti. Bzzz!\n\n\x0E\x01\x09\x04\x1303\x00Se ti pesco ad armeggiare con\nil generatore, saranno guai!\nBzzz bzzz!\n")
          				goto flw_155
          			  case 1:
/*<181>*/ 				printf("Sei proprio un tipo strano!\nPiù che strano, sospetto! Bzzz!\n\n\n\x0E\x01\x09\x04\x1303\x00Se ti pesco ad armeggiare\ncon il generatore, saranno guai!\nBzzz bzzz!")
          				goto flw_155
          			}
          		}
          	}
          }

          void entrypoint_400_59() {
/*<134>*/ 	start()
/*<143>*/ 	temp_flags[6 /* 0x1 40 */] = true;
/*<135>*/ 	printf("\x0E\x01\x05\x04Z\x00Siamo giunti nel <b<deserto di Ranel>>.\nLa conformazione dell'area ha subito\nvarie mutazioni a causa della\ndesertificazione.")
          }

          void entrypoint_400_76() {
/*<292>*/ 	start()
/*<293>*/ 	printf("Siamo arrivati al <b<Santuario del Tempo>>.\n\n\n\nÈ possibile individuare con il rilevatore\nil portale della prova, necessario per\nottenere la fiamma sacra.")
/*<294>*/ 	scene_flags[7 'Lanayru Desert'][74 /* 0x8 04 */] = true;
          }

          void entrypoint_400_08() {
/*< 23>*/ 	start()
/*<225>*/ 	switch (scene_flags[29 /* 0x2 20 */]) {
          	  case 0:
/*<226>*/ 		printf("Quelle pietre azzurre sono pericolose per\ngli umani. Non le toccare! Vattene! Bzzz!")
          	  case 1:
/*< 24>*/ 		printf("Ehi, tu! Da dove arrivi? Bzzz!\nQui noi raccogliamo pietre del tempo\nper portarle all'<b<opificio di Ranel>>.\n\n\x0E\x01\x09\x04\x1303\x00Quelle pietre azzurre\nsono pericolose per gli umani.\nNon le toccare! Bzzz!")
/*<227>*/ 		scene_flags[7 'Lanayru Desert'][29 /* 0x2 20 */] = true;
/*< 75>*/ 		scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          	}
          }

          void entrypoint_400_25() {
/*< 54>*/ 	start()
/*<329>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<330>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_55:
/*< 55>*/ 			printf("...")
          		  case 1:
/*<350>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_55
          			  case 1:
/*<331>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 31}
          				goto flw_55
          			}
          		}
          	  case 1:
          		goto flw_55
          	}
          }

          void entrypoint_400_77() {
/*<298>*/ 	start()
/*<299>*/ 	printf("\x0E\x01\x12\x04\x00\x0BLink, mio signore,\nFaih a rapporto.\nSiete entrato in possesso di tutti e tre\ni simboli.\nOra dirigetevi verso il <r<generatore >>posto\ndavanti all'<b<opificio di Ranel>>.")
          }

          void entrypoint_400_09() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf("...")
          }

          void entrypoint_400_26() {
/*< 56>*/ 	start()
/*<188>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<332>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<333>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_189:
/*<189>*/ 				printf("Hai scoperto la combinazione? Bzzz!\nSei in gamba! Bzzz!")
          			  case 1:
/*<334>*/ 				printf("Stai cercando un drago? Bzzz? Se si\ntratta del <b<\x0E\x01\x09\x04\x1303\x00drago del fulmine>>, potresti\ntrovarlo a sud delle <b<grotte di Ranel>>.\n\nSe invece è un altro drago, non\nne ho la più pallida idea... Bzzz...")
/*<349>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_189
          		}
          	  case 1:
/*<117>*/ 		switch (scene_flags[102 /* 0xD 40 */]) {
          		  case 0:
/*<118>*/ 			printf("Bzzz!\nStraordinario!\n\n\n\x0E\x01\x09\x04\x1303\x00Per entrare nell'opificio non\nbasta conoscere la combinazione!")
          			flw_153:
/*<153>*/ 			story_flags[731 /* us: 805A9B27 0x08, jp: 805ACDA7 0x08 */] = true;
/*<158>*/ 			story_flags[733 /* us: 805A9B27 0x20, jp: 805ACDA7 0x20 */] = true;
          		  case 1:
/*<182>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*< 57>*/ 				printf("Stai cercando i tre simboli per entrare\nnell'opificio di Ranel?\n\n\n\x0E\x01\x09\x04\x1303\x00Che strano tipo che sei! Bzzz!\nNon insegno la combinazione a\ntipi sospetti. Bzzz!\n\n\x0E\x01\x09\x04\x1303\x00Se ti pesco ad armeggiare\ncon il generatore, saranno guai!\nBzzz bzzz!")
          				goto flw_153
          			  case 1:
/*<183>*/ 				printf("Sei proprio un tipo strano!\nPiù che strano, sospetto! Bzzz!\n\n\n\x0E\x01\x09\x04\x1303\x00Se ti pesco ad armeggiare\ncon il generatore, saranno guai!\nBzzz bzzz!")
          				goto flw_153
          			}
          		}
          	}
          }

          void entrypoint_400_60() {
/*<136>*/ 	start()
/*<137>*/ 	printf("\x0E\x01\x05\x04Z\x00Confermo la presenza di <r<sabbie mobili>>.\nProbabilità di venire inghiottiti: 30%")
          }

          void entrypoint_400_78() {
/*<300>*/ 	start()
/*<301>*/ 	printf("\x0E\x01\x12\x04\x00\x0BLink, mio signore,\nFaih a rapporto.\n\n\nRitengo che per azionare il <r<generatore>>\nsia necessario provvedere alla sua\nalimentazione tramite una fonte di\nelettricità.")
          }

          void entrypoint_400_27() {
/*<119>*/ 	start()
/*<335>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<336>*/ 		switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          		  case 0:
          			flw_120:
/*<120>*/ 			printf("...")
          		  case 1:
/*<352>*/ 			switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          			  case 0:
          				goto flw_120
          			  case 1:
/*<337>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 120, 'param3': 31}
          				goto flw_120
          			}
          		}
          	  case 1:
          		goto flw_120
          	}
          }

          void entrypoint_400_61() {
/*<138>*/ 	start()
/*<139>*/ 	printf("\x0E\x01\x05\x04Z\x00Per evitare i pericoli vi suggerirei\ndi verificare la <r<<pling>conformazione\ndel terreno >>sulla mappa con \x0E\x02\x04\x02\x2CD\x0E\x01\x11\x02\x2CD.")
          }

          void entrypoint_400_79() {
/*<302>*/ 	start()
/*<303>*/ 	printf("\x0E\x01\x12\x04\x00\x0BLink, mio signore,\nFaih a rapporto.\n\n\nLa mappa di cui siete in possesso\ncoincide con la reale conformazione\ndel terreno per appena il 35%.\n\nL'attuale conformazione appare\ndi gran lunga differente.\n\n\nDesumo che la correzione della\nmappa effettuata dal robot\nraffiguri <r<terre del passato>><pling>,\normai inghiottite dalle sabbie mobili.")
          }

          void entrypoint_400_10() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf("È il carrello per trasportare le pietre del\ntempo. Gli uomini non ci possono salire...\nLevati di torno! Bzzz!")
/*< 69>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_28() {
/*<121>*/ 	start()
/*<190>*/ 	switch (scene_flags[30 /* 0x2 40 */]) {
          	  case 0:
/*<338>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*<339>*/ 			switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          			  case 0:
          				flw_191:
/*<191>*/ 				printf("Hai scoperto la combinazione? Bzzz!\nSei in gamba! Bzzz!")
          			  case 1:
/*<340>*/ 				printf("Stai cercando un drago? Bzzz? Se si\ntratta del <b<\x0E\x01\x09\x04\x1303\x00drago del fulmine>>, potresti\ntrovarlo a sud delle <b<grotte di Ranel>>.\n\nSe invece è un altro drago, non\nne ho la più pallida idea... Bzzz...")
/*<351>*/ 				story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          			}
          		  case 1:
          			goto flw_191
          		}
          	  case 1:
/*<123>*/ 		switch (scene_flags[101 /* 0xD 20 */]) {
          		  case 0:
/*<124>*/ 			printf("Bzzz!\nStraordinario!\n\n\n\x0E\x01\x09\x04\x1303\x00Per entrare nell'opificio non\nbasta conoscere la combinazione!")
          			flw_154:
/*<154>*/ 			story_flags[731 /* us: 805A9B27 0x08, jp: 805ACDA7 0x08 */] = true;
/*<156>*/ 			story_flags[732 /* us: 805A9B27 0x10, jp: 805ACDA7 0x10 */] = true;
          		  case 1:
/*<184>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*<122>*/ 				printf("Stai cercando i tre simboli per entrare\nnell'opificio di Ranel?\n\n\n\x0E\x01\x09\x04\x1303\x00Che strano tipo che sei! Bzzz!\nNon insegno la combinazione a\ntipi sospetti. Bzzz!\n\n\x0E\x01\x09\x04\x1303\x00Se ti pesco ad armeggiare\ncon il generatore, saranno guai!\nBzzz bzzz!")
          				goto flw_154
          			  case 1:
/*<185>*/ 				printf("Sei proprio un tipo strano!\nPiù che strano, sospetto! Bzzz!\n\n\n\x0E\x01\x09\x04\x1303\x00Se ti pesco ad armeggiare\ncon il generatore, saranno guai!\nBzzz bzzz!")
          				goto flw_154
          			}
          		}
          	}
          }

          void entrypoint_400_62() {
/*<140>*/ 	start()
/*<141>*/ 	printf("\x0E\x01\x05\x04Z\x00Si suppone che <b<Zelda >>si sia allontanata.\nConfermo inoltre che il territorio\nè pericoloso.\n\nVi suggerirei di ricongiungervi a lei per\nverificare le motivazioni delle sue\nattività nel territorio di <b<\x0E\x01\x05\x04Z\x00Oldin<b<.<b<>>")
          }

          void entrypoint_400_11() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf("...")
          }

          void entrypoint_400_63() {
/*<144>*/ 	start()
/*<145>*/ 	printf("\x0E\x01\x12\x04\x00\x0BLink, mio signore,\nFaih a rapporto.\n\n\nConfermo che al momento non state\ncamminando sulle sabbie mobili.\nVi suggerisco comunque\ndi consultare la mappa.\n")
/*<192>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 261, 'next': 193, 'param3': 30}
/*<193>*/ 	printf("Nel passato, in questo luogo passava\nuna strada ora nascosta dalle sabbie\nmobili. Confermo che è possibile\nseguirla senza sprofondare.\nVi suggerisco di collocare fari celesti\nsulla mappa per contrassegnare\nl'antica strada, prima di proseguire.")
/*<212>*/ 	printf("Vi suggerirei di utilizzare <b<diversi>><pling>\nfari celesti.")
/*<195>*/ 	story_flags[745 /* us: 805A9B29 0x02, jp: 805ACDA9 0x02 */] = true;
/*<194>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 34}
          }

          void entrypoint_400_29() {
/*<232>*/ 	start()
/*<233>*/ 	printf("...")
          }

          void entrypoint_400_80() {
/*<353>*/ 	start()
/*<354>*/ 	printf("A volte, nel deserto di Ranel, si\nvedono rotolare i <b<rotolacampo>>.\nSono dei materiali molto utili e si\ncatturano usando il <r<retino>>.")
          }

          void entrypoint_400_12() {
/*< 31>*/ 	start()
/*< 32>*/ 	printf("Intralci gli scavi! Perché non smetti\ndi parlare? Bzzz!")
/*< 70>*/ 	scene_flags[7 'Lanayru Desert'][4 /* 0x1 10 */] = true;
          }

          void entrypoint_400_64() {
/*<146>*/ 	start()
/*<147>*/ 	printf("\x0E\x01\x09\x04\x2F0C\xD01\x0E\x01\x06\x02\xFFCD\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x2F00\x01Ehi, Link, sei tu?\n\n\n\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x08\x02\x1CDChe fortuna averti qui!<pause0F>\nAvevo voglia di vederti!<pause0F>\n\n\n\x0E\x01\x06\x02\x2CD\x0E\x01\x08\x02\x1CDPuoi raggiungermi quassù?")
/*<148>*/ 	scene_flags[7 'Lanayru Desert'][76 /* 0x8 10 */] = true;
/*<262>*/ 	story_flags[828 /* us: 805A9B33 0x10, jp: 805ACDB3 0x10 */] = true;
/*<263>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<264>*/ 	story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<265>*/ 	story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          }

