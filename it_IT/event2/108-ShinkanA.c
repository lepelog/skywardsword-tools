          void entrypoint_108_03() {
/*< 32>*/ 	start()
/*<255>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 113, 'next': 33, 'param3': 24}
/*< 33>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10008:0x01cd>Via!!!<0x10005:0x000f0000>")
          }

          void entrypoint_108_20() {
/*<156>*/ 	start()
/*<289>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<290>*/ 		printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x00000001>La statua della Dea è scomparsa, ma\nquesto non significa che sia scomparsa\nanche la Dea! Lei è sempre tra noi,\nvero <heroname>?")
          	  case 1:
/*<282>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*<283>*/ 			printf(/* textboxtype: 1, unk: 0, line: 97 */ "<0x10009:0x00000001>Ragazzo, mi sembra che ultimamente i\ntuoi progressi siano notevoli!\nTi stai impegnando a fondo, eh?!\nBravo!")
          		  case 1:
/*<278>*/ 			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          			  case 0:
/*<281>*/ 				printf(/* textboxtype: 1, unk: 0, line: 96 */ "<0x10009:0x00000001>Cosa? Narisha?!<pause 40>\nHo sentito qualche voce su di lui...\n\n\nMa purtroppo non ne so molto.\n\n\n\nDovresti chiedere al <color blue<maestro Asio Otus\n>coloroff>di insegnartelo. È lui che si occupa\ndell'insegnamento della pratica. ")
          			  case 1:
/*<279>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<280>*/ 					printf(/* textboxtype: 1, unk: 0, line: 95 */ "<0x10009:0x00000001>Non trovi che Fifì sia proprio carina?!<pause 30>\nTriforza? Cos'è?<pause 40>\nC'entra qualcosa con Fifì?")
          				  case 1:
/*<157>*/ 					printf(/* textboxtype: 1, unk: 0, line: 94 */ "<0x10009:0x00000001>Ho iniziato a occuparmi\ndi Fifì, come mi aveva \nchiesto di fare il direttore.\n\nÈ davvero una bestiola tenera!\nVorrei anch'io un prociatto...")
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_04() {
/*< 34>*/ 	start()
/*<151>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 59, 'param3': 32}
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': -1, 'next': 153, 'param3': 50}
/*<153>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 150, 'param3': 49}
/*<150>*/ 	make_actor_do_something(0, 10)
/*<152>*/ 	{'type': 'type3', 'subType': 4, 'param1': 2578, 'param2': 2562, 'next': 35, 'param3': 13}
/*< 35>*/ 	printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x1000D:0x1906><0x10008:0x01cd>Ehi, <heroname>!\nDi qua!\n")
/*< 57>*/ 	set_camera(11, 0)
/*<244>*/ 	make_actor_do_something(1, 10)
/*<213>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 10, 'next': 261, 'param3': 17}
/*<261>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<262>*/ 		printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x0a0e0a01>Buongiorno, <heroname>!\nFantastico, hai deciso di cimentarti\nnella <color red<modalità eroica>coloroff>!\n\nOggi è il gran giorno del <color red<battesimo del\nvolo>coloroff>, come ti senti?\n\n\nVorrei parlare con te! Tieni premuto\n(Z) e guarda da questa parte.\nCon (A) puoi rivolgermi la parola.<0x10011:0x07cd>")
          		flw_64:
/*< 64>*/ 		scene_flags[0 'Skyloft'][36 /* 0x5 10 */] = true;
/*< 75>*/ 		story_flags[565 /* us: 805A9B19 0x10, jp: 805ACD99 0x10 */] = true;
/*<254>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*< 56>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0a0e0a01>Buongiorno <heroname>! \nOggi è il giorno del <color red<battesimo del volo>coloroff>!\nTi senti in forma?\nVorrei dirti un paio di cose...\nGirati verso di me tenendo\npremuto (Z) e parlami premendo (A).<0x10011:0x07cd>")
          		goto flw_64
          	}
          }

          void entrypoint_108_21() {
/*<186>*/ 	start()
/*<192>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 190, 'param3': 32}
/*<190>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 187, 'param3': 13}
/*<187>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10008:0x01cd>Ehi, <heroname>!")
/*<188>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x1000A:0x001200cd><0x10009:0x000a0202>È inutile provarci. Non riuscirai\nmai a salire sul tetto solo con lo\n<color green<sprint>coloroff> con (A).")
/*<191>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 193, 'param3': 17}
/*<193>*/ 	wait_frames(15)
/*<189>*/ 	set_camera(19, 0)
/*<230>*/ 	printf(/* textboxtype: 1, unk: 0, line: 23 */ "Dovrebbe esserci una cassa\ndi legno lassù. Se la <color green<sposti>coloroff>,<color green<\nspingendola >coloroff>con (A), puoi\nusarla come base per salire.\nMettila vicino al muro e poi effettua\nuno <color green<sprint >coloroff>con (A) o usa (StickUp) per\nsalire.")
          }

          void entrypoint_108_05() {
/*< 36>*/ 	start()
/*<267>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<268>*/ 		printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x000b0a03>Mmh... vedo che adesso sei diventato\nun asso nell'usare lo (A) <color green<sprint>coloroff>!\n\n\nMa se esageri esaurirai il\n<color red<vigore>coloroff> e ti sentirai uno\nstraccio!\n\nBene! Vuoi che prosegua con\nqualche altra lezione?\n[1-]Sì[2]No")
/*<270>*/ 		switch (choice(2)) {
          		  case 0:
/*<271>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "Una distanza del genere puoi saltarla\nsenza problemi! Si chiama <color green<salto\nautomatico>coloroff>!\n\nAutomatico<0x10006:0xfccd>...<pause 15> <0x10006:0x00cd>suona molto bene,\nnon trovi?")
          		  case 1:
/*<269>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Bene, bene... ora vieni qui, svelto!")
          		}
          	  case 1:
/*<266>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x000b0a03>Comodo, no, fare uno <color green<sprint >coloroff>con (A)?\n\n\n\nMa se esageri, esaurirai il <color red<vigore\n>coloroff>e ti sentirai uno straccio... \n\n\nSe ti senti stanco, riposati un po'!\n\n\n\nBene, andiamo avanti!\n\n\n\nSupererai distanze del genere\nsaltando automaticamente mentre\nti muovi! Questo si chiama\n<color green<salto automatico>coloroff>!\nAutomatico<0x10006:0xfccd>...<0x10006:0x00cd> non è una\nbella parola?")
          	}
          }

          void entrypoint_108_22() {
/*<208>*/ 	start()
/*<210>*/ 	switch (scene_flags[92 /* 0xA 10 */]) {
          	  case 0:
/*<211>*/ 		printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x00000001>Ho disposto che l'inizio della\ncerimonia sia rinviato fino a\nquando non ritrovi il tuo solcanubi.\nTu preoccupati solo di quello!")
          	  case 1:
/*<212>*/ 		printf(/* textboxtype: 1, unk: 0, line: 100 */ "<0x10009:0x00000001>Sono davvero felice\nche l'inizio della cerimonia\nsia stato rimandato!\nCosì potrai ritrovare il tuo solcanubi!")
          	}
          }

          void entrypoint_108_06() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf(/* textboxtype: 1, unk: 2, line: 44 */ "<0x10009:0x000b0a52>Ehi, <heroname>!\nNon far finta di niente!\nFai quello che dice il maestro!\n\nGirati verso di me tenendo\npremuto (Z) e parla con (A).<0x10011:0x07cd>")
          }

          void entrypoint_108_23() {
/*<217>*/ 	start()
/*<225>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<226>*/ 		printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x00000001>Allora, <heroname>!\nRiesci a cavartela?\n\n\nSe dovessi avere problemi,\nnon fare complimenti e\nvieni a parlare con me!")
          	  case 1:
/*<221>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*<224>*/ 			printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x00000001>L'attacco avvitato\nè una manovra alquanto impegnativa\nper un solcanubi!\n\nMa con il tuo bel carminio,\nnon dovresti avere problemi...")
          		  case 1:
/*<220>*/ 			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          			  case 0:
/*<223>*/ 				printf(/* textboxtype: 1, unk: 0, line: 103 */ "<0x10009:0x00000005><heroname>...\nChe ci fai qui nel\ncuore della notte?\n\nCosa?! Narisha?!\nBah, questi non sono discorsi\nda fare in piena notte!\n\nTorna domani mattina.\nTe ne parlerò nei dettagli!")
          			  case 1:
/*<219>*/ 				switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          				  case 0:
/*<222>*/ 					printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x00000001>Come va, <heroname>?\nHai trovato Zelda?\n\n\nSono certo che riuscirai\na trovarla.\nCredo in te!")
          				  case 1:
/*<218>*/ 					printf(/* textboxtype: 1, unk: 0, line: 101 */ "<0x10009:0x00000001>Di notte i nostri\nsolcanubi non possono volare.\nNon possiamo cercare Zelda.\nPer oggi, riposati un pochino!\nPartiremo domani.\nOgni tanto una bella pausa\naiuta a ritrovare la tranquillità!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_07() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x000a0a00><0x10008:0x02cd>Ehi, <heroname>!\n\n\n\n<0x10008:0x02cd>Ti sto aspettando!")
          }

          void entrypoint_108_24() {
/*<232>*/ 	start()
/*<245>*/ 	switch (scene_flags[41 /* 0x4 02 */]) {
          	  case 0:
/*<238>*/ 		printf(/* textboxtype: 1, unk: 0, line: 107 */ "<0x10009:0x00000002>Ahi, ahi, <heroname>!\nNon è il caso di fare\ncerte cose!\n\nVai subito a cercare il\ntuo solcanubi! Ascolta quello che\nti dicono i tuoi compagni!")
          	  case 1:
/*<239>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<246>*/ 			printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x00000002>Ahi, ahi, <heroname>!\nChe fai, te ne vai di soppiatto?\n\n\nVieni qui!")
          		  case 1:
/*<233>*/ 			printf(/* textboxtype: 1, unk: 0, line: 106 */ "<0x10009:0x00000002>Ahi, ahi, <heroname>!\nNon bisogna ignorare gli\ninsegnamenti del maestro...\n\nVieni qui e ascolta quello\nche ho da dirti!")
          		}
          	}
          }

          void entrypoint_108_08() {
/*< 76>*/ 	start()
/*< 88>*/ 	switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          	  case 0:
/*<209>*/ 		printf(/* textboxtype: 1, unk: 0, line: 76 */ "")
          	  case 1:
/*< 83>*/ 		switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          		  case 0:
/*< 85>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 77, 'param3': 31}
/*< 77>*/ 			printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00000001>Ehi, <heroname>,\ncome va la ricerca di Zelda?\nL'hai trovata?\n\n<0x10009:0x00000005>Cosa?<pause 40> Narisha?\nHai chiesto al direttore?\n\n\nSì, sono sicuro che Narisha\nfosse dentro quella nuvola...\n\n\nMa quello<0x10006:0xfecd>...<0x10006:0x00cd> <pause 25>non è il nostro Narisha.\n<0x10006:0xfecd>Quello è...<pause 40><0x10006:0x01cd> un <color red<mostro>coloroff>!\n\n\n<0x10009:0x0000000f>Sembrava proprio Narisha,\nma poi mi sono avvicinato e...\n\n\nHa cercato di attaccarmi con\nil suo corpo enorme!\n\n\nIn quel momento, nei suoi occhi\nho visto un grande odio...\n\n\nDicono che le persone cambiano...\n<0x10006:0xfecd>ma così... <0x10006:0x00cd><pause 25>ho la sensazione che\n<pause 25> sia posseduto.")
/*<203>*/ 			wait_frames(40)
/*< 78>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00000005>Cosa? <pause 40>Vorresti parlare\ncon Narisha?\n\n\n<0x10006:0xfecd>Ma è...<0x10006:0x00cd> impossibile!\nIl Narisha di questo tempo\nnon comprenderebbe le parole\ndegli umani.\n<0x10006:0xfecd>E poi...<0x10006:0x00cd> se ti avvicini a lui per\nparlare finirai anche tu nel\nmare di nuvole.")
/*<204>*/ 			wait_frames(40)
/*<201>*/ 			printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x00000052>Eh?! <pause 40>... Allora vai lo stesso?\n\n\n\n<0x10006:0xfecd>Capisco... <0x10006:0x00cd>lo fai per trovare Zelda?\n\n\n\n... Va bene.<pause 30> Del resto non credo\nche ti fermeresti anche se te lo\nchiedessi.")
/*<205>*/ 			wait_frames(30)
/*<202>*/ 			printf(/* textboxtype: 1, unk: 0, line: 54 */ "Bene! Ho un'idea... vieni con me!")
/*< 86>*/ 			story_flags[362 /* us: 805A9B03 0x01, jp: 805ACD83 0x01 */] = true;
/*< 87>*/ 			changeScene(0, 0) // 
          		  case 1:
/*<276>*/ 			switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          			  case 0:
/*<277>*/ 				printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x00000001>Ciao <heroname>!\n<pause 30>Come? Triforza, dici?!\n\n\nMi dispiace, ragazzo, non ne so nulla!\nPerché non provi a chiedere al\ndirettore?")
          			  case 1:
/*< 84>*/ 				printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00000001>Ehi, <heroname>,\ncome va la ricerca di Zelda?\n\n\nMi dispiace di averti affidato\nquest'incarico difficile.\nMa conto su di te! Trovala!")
          			}
          		}
          	}
          }

          void entrypoint_108_09() {
/*< 79>*/ 	start()
/*< 80>*/ 	printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x00000002>Ho avuto l'impressione che, dentro\nquella nuvola, Narisha fosse come\nposseduto.\n\nSe riuscissimo a liberarlo da quella\nforza malefica, riavremmo il nostro\nNarisha. Giusto, <heroname>?\n\nAllora, adesso ti insegnerò una\ntecnica speciale da usare col solcanubi.\n\n\n<0x10009:0x00000003>Si chiama <color red<attacco avvitato>coloroff>!")
/*<259>*/ 	set_camera(22, 0)
/*<257>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "Grazie all'attacco avvitato, potrai\neffettuare un colpo molto potente,\nin grado di ferire il parassita che\ninfesta Narisha!\nEseguire un attacco avvitato di per sé\nnon è difficile. Basta premere (A).\n\n\nRispetto agli <color red<attacchi >coloroff>normali,\nl'accelerazione dura più a lungo\ne risulta difficile mantenere la\ndirezione.\nAlla scuola d'armi questa è una\ntecnica ritenuta di alto livello, \nriservata agli esperti. Forse per te è\nancora presto per impararla...\n<pause 30>Ma voglio metterti alla prova\nper vedere se hai talento...")
/*<260>*/ 	set_camera(-1, 0)
/*<258>*/ 	printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x00000004>Per prima cosa, lanciati\ne vola in groppa al solcanubi.")
/*< 94>*/ 	story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
/*< 99>*/ 	story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*<249>*/ 	zone_temp_flags[13 /* 0x0 20 */] = true;
          }

          void entrypoint_108_10() {
/*< 91>*/ 	start()
/*<129>*/ 	switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          	  case 0:
/*<130>*/ 		printf(/* textboxtype: 1, unk: 0, line: 61 */ "<0x10009:0x0000000f>Quello che è successo\na Zelda è davvero terribile...\n\n\nMa tu non devi tormentarti...\nÈ stato un incidente...")
          	  case 1:
/*<128>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<197>*/ 			switch (scene_flags[91 /* 0xA 08 */]) {
          			  case 0:
/*<199>*/ 				printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x00000001>Non preoccuparti per la cerimonia.\nVai subito a cercare il solcanubi!")
          			  case 1:
/*<127>*/ 				printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x0000000f>Che succede, <heroname>?\n<pause 30>Il tuo solcanubi non risponde\nal richiamo?\n\nÈ una cosa molto strana, direi\npraticamente impossibile<0x10006:0xfecd>...\n\n\nNe hai parlato con il responsabile\ndella cerimonia, il <color blue<maestro\nCornelio>coloroff>?\n\nAh... se ne hai già parlato con il\ndirettore, si troverà una\nsoluzione...\n\nIntanto, vai a cercare il tuo\nsolcanubi al più presto!")
/*<200>*/ 				scene_flags[0 'Skyloft'][91 /* 0xA 08 */] = true;
          			}
          		  case 1:
/*<195>*/ 			switch (scene_flags[90 /* 0xA 04 */]) {
          			  case 0:
/*<196>*/ 				printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x00000001>Veramente ti capita spesso di\nconfondere me con il <color blue<maestro\nCornelio>coloroff>...\n\nIo sono il <color blue<maestro Asio Otus >coloroff>e\nho i capelli bianchi; il <color blue<maestro\nCornelio>coloroff>, invece, ha i capelli neri!\nForse così te lo ricorderai meglio!")
          			  case 1:
/*< 92>*/ 				printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00000001>Ehi, <heroname>! \nOggi è il giorno del <color red<battesimo del volo>coloroff>!\n\n\nRicordati delle teorie che ti ho spiegato\nio, il maestro <color blue<Asio Otus>coloroff>, e di quelle del\nmaestro <color blue<Cornelio >coloroff>e fai del tuo meglio!\n\nA proposito, ti ricordi come ci si\n<color red<guarda intorno >coloroff>con (C)?<0x10011:0x06cd>\nSe vuoi guardarti bene intorno,\n<color green<premi >coloroff>(C)!<0x10011:0x06cd>\nSe poi hai la sensazione che il <color red<cursore si\nstia spostando dal centro>coloroff>, punta il\ntelecomando verso lo schermo e\n<color green<premi >coloroff>(v)! Visto? Semplice, no?<0x10011:0x09cd>")
/*<198>*/ 				scene_flags[0 'Skyloft'][90 /* 0xA 04 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_108_11() {
/*<123>*/ 	start()
/*<163>*/ 	switch (scene_flags[20 /* 0x3 10 */]) {
          	  case 0:
/*<273>*/ 		switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          		  case 0:
/*<275>*/ 			printf(/* textboxtype: 1, unk: 0, line: 70 */ "<0x10009:0x00000001>Intendi dire che esiste davvero il\nmondo chiamato Terra?!\n\n\nSupponendo che sia così, immagino\nche sia esattamente l'opposto del\nnostro bel mondo rigoglioso...")
          		  case 1:
/*<272>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<274>*/ 				printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00000001>Come vanno le ricerche di Zelda,\nstanno procedendo?\n\n\nQuando sei stanco, riposati su un letto!\nPuoi dormire fino a sera o recuperare\ntutti i cuori, sai?!")
          			  case 1:
/*<167>*/ 				printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x00000001>Abbi cura di te! Ricorda che le sorti di\nZelda sono nelle tue mani...\nMi raccomando!")
          			}
          		}
          	  case 1:
/*<168>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 124, 'param3': 31}
/*<124>*/ 		printf(/* textboxtype: 1, unk: 0, line: 64 */ "<0x10009:0x00000011><heroname>, ho sentito che\nvuoi andare a cercare Zelda\nal di sotto delle nuvole...\n\nIl direttore dice che laggiù\nci sia la Terra...\nTu che cosa sai della Terra?")
/*<169>*/ 		switch (adventure_pouch_has(9 0x0009)) {
          		  case 0:
/*<171>*/ 			printf(/* textboxtype: 1, unk: 0, line: 71 */ "Ah, quella è la famosa spada?\nMa lo scudo<pause 10>.<pause 10>.<pause 10>.<pause 10>\n\n\nUhm... hai ottenuto uno scudo\ncome si deve! Bravo!\nBeh, è il momento di dirsi addio...")
          			flw_172:
/*<172>*/ 			give_item(4 0x04);
/*<256>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 173, 'param3': 12}
          			flw_173:
/*<173>*/ 			printf(/* textboxtype: 1, unk: 0, line: 72 */ "Se non sai come usare lo scudo,\nfattelo insegnare dal <color blue<primo cavaliere>coloroff>.\nLo trovi alla palestra di scherma.")
/*<166>*/ 			scene_flags[0 'Skyloft'][20 /* 0x3 10 */] = true;
/*<214>*/ 			switch (scene_flags[89 /* 0xA 02 */]) {
          			  case 0:
          			  case 1:
/*<215>*/ 				story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
/*<216>*/ 				scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
          			}
          		  case 1:
/*<247>*/ 			switch (is_adventure_pouch_full()) {
          			  case 0:
/*<248>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "Ah, quella è la famosa spada?\nPerò, senza un buono scudo\nnon andrai molto lontano.\n\nTe ne avrei dato uno ma hai la\nborsa piena. Ecco, prendi questo\npiccolo regalo da parte mia...")
          				goto flw_172
          			  case 1:
/*<170>*/ 				printf(/* textboxtype: 1, unk: 0, line: 65 */ "Ah, quella è la famosa spada?\nPerò, senza un buono scudo\nnon andrai molto lontano.\n\nPrendi questo!")
/*<164>*/ 				give_item(116 0x74);
/*<165>*/ 				printf(/* textboxtype: 1, unk: 0, line: 67 */ "Lo scudo di legno è leggero\ne maneggevole, ma è il\npiù fragile degli scudi.\n\nÈ vulnerabile al fuoco\nma se si rompe lo puoi\nricomprare al bazar.\n\nScegli uno scudo ed equipaggialo\n<color green<tenendo premuto>coloroff> <color green<(-) >coloroff>e\n<color green<spostando >coloroff>il telecomando.<0x10011:0x02cd>")
          				goto flw_173
          			}
          		}
          	}
          }

          void entrypoint_108_12() {
/*< 95>*/ 	start()
/*<206>*/ 	switch (scene_flags[77 /* 0x8 20 */]) {
          	  case 0:
/*<207>*/ 		printf(/* textboxtype: 1, unk: 0, line: 76 */ "")
          	  case 1:
/*< 97>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*< 81>*/ 			printf(/* textboxtype: 1, unk: 0, line: 73 */ "<0x10009:0x0000000a>Oh! Sei riuscito a distruggere 10\nbersagli nel tempo stabilito!\nSplendido!\n\nSe riesci a cavalcare il solcanubi\ncosì bene, non avrai problemi!\n<heroname>! Tu e il tuo solcanubi\nrosso siete davvero unici!\nOra hai il mio permesso\ndi usare l'attacco avvitato!")
/*< 82>*/ 			printf(/* textboxtype: 1, unk: 0, line: 74 */ "E ora veniamo a come\ntrovare Narisha...\n\n\nOgni anno si fa un'offerta \ndi zuppa di zucca a Narisha.\nIl titolare della <color red<taverna delle zucche>coloroff>\nsaprà darti informazioni!\nVai da lui e chiedi!")
/*<107>*/ 			scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = true;
          		  case 1:
/*< 96>*/ 			switch (story_flags[641 /* us: 805A9B1D 0x04, jp: 805ACD9D 0x04 */]) {
          			  case 0:
/*< 98>*/ 				printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x0000000f>Uhm... non riesci ancora a distruggere\ni 10 bersagli in meno di <color red<120 secondi>coloroff>.\nMi dispiace ma non posso rivelarti\ntutti i segreti.\nOra rilassati un poco, tanto io resterò\nqui. Quando sarai di nuovo pronto per\nla prova, dimmelo!")
/*<100>*/ 				story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = false;
/*<227>*/ 				story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = false;
/*<228>*/ 				story_flags[641 /* us: 805A9B1D 0x04, jp: 805ACD9D 0x04 */] = false;
/*<105>*/ 				scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = true;
          			  case 1:
          			}
          		}
          	}
          }

          void entrypoint_108_13() {
/*<101>*/ 	start()
/*<103>*/ 	switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          	  case 0:
/*<104>*/ 		printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000001>La taverna della zucca è un locale\nmolto carino che si trova su un'isoletta\na <color red<sud‐est >coloroff>di Oltrenuvola.\n\nCi lavora una ragazza dalla voce\nsplendida, <color blue<Pepa>coloroff>.\n<pause 30>Io<0x10006:0xfecd>...<0x10006:0x00cd> sono un suo grande fan.\nMa non dirlo a nessuno!")
          	  case 1:
/*<106>*/ 		switch (scene_flags[77 /* 0x8 20 */]) {
          		  case 0:
          			flw_108:
/*<108>*/ 			printf(/* textboxtype: 1, unk: 0, line: 79 */ "<0x10009:0x00000001>Allora, <heroname>!\nVuoi fare un po' di esercizio\ndi attacco avvitato?\n[1-]Va bene[2]Dopo")
/*<109>*/ 			switch (choice(2)) {
          			  case 0:
/*<110>*/ 				printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x00000003>Ottima risposta!\nAllora lanciati da qua!")
/*<112>*/ 				scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = false;
/*<113>*/ 				story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
/*<114>*/ 				story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*<251>*/ 				zone_temp_flags[13 /* 0x0 20 */] = true;
          			  case 1:
/*<111>*/ 				printf(/* textboxtype: 1, unk: 0, line: 81 */ "Non c'è niente di male!\nAspetta fino a quando\nnon ti senti pronto!\n\nResterò qui per un po'...\nTorna pure quando vuoi!")
/*<253>*/ 				zone_temp_flags[13 /* 0x0 20 */] = false;
          			}
          		  case 1:
/*<122>*/ 			switch (story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */]) {
          			  case 0:
/*<102>*/ 				printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x00000001>Ma che fai?\nPresto, lanciati!\nO non ne hai il coraggio?\n[1-]Sono pronto![2]Ho paura!")
/*<117>*/ 				switch (choice(2)) {
          				  case 0:
/*<121>*/ 					printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x00000003>Proprio questo mi\naspettavo!\nIl cielo è tuo, <heroname>!")
/*<250>*/ 					zone_temp_flags[13 /* 0x0 20 */] = true;
          				  case 1:
/*<118>*/ 					story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = false;
/*<119>*/ 					story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = false;
/*<120>*/ 					printf(/* textboxtype: 1, unk: 0, line: 81 */ "Non c'è niente di male!\nAspetta fino a quando\nnon ti senti pronto!\n\nResterò qui per un po'...\nTorna pure quando vuoi!")
/*<252>*/ 					zone_temp_flags[13 /* 0x0 20 */] = false;
          				}
          			  case 1:
          				goto flw_108
          			}
          		}
          	}
          }

          void entrypoint_108_30() {
/*<142>*/ 	start()
/*<143>*/ 	printf(/* textboxtype: 1, unk: 0, line: 109 */ "Bene, <heroname>!\n\n\n\nHo insegnato al tuo solcanubi\na fare un <color green<avvitamento >coloroff>\npremendo (A).")
          }

          void entrypoint_108_14() {
/*<115>*/ 	start()
/*<116>*/ 	printf(/* textboxtype: 1, unk: 0, line: 83 */ "")
          }

          void entrypoint_108_31() {
/*<144>*/ 	start()
/*<147>*/ 	printf(/* textboxtype: 1, unk: 0, line: 110 */ "Ora devi rompere <color red<10 bersagli >coloroff>che si\ntrovano sulle rocce davanti a te\ncon l'<color red<attacco avvitato>coloroff>, premendo (A).")
          }

          void entrypoint_108_15() {
/*<125>*/ 	start()
/*<126>*/ 	printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000002><heroname>!!!\nMa dove vai?! Il battesimo del volo\nè già iniziato! Presto, lanciati dalla\npiattaforma!")
          }

          void entrypoint_108_32() {
/*<145>*/ 	start()
/*<148>*/ 	printf(/* textboxtype: 1, unk: 0, line: 111 */ "Solo quando riuscirai a distruggere\n10 bersagli in meno di <color red<120 secondi>coloroff>,\navrai dimostrato di essere un vero\ncavaliere dei solcanubi.")
          }

          void entrypoint_108_16() {
/*<131>*/ 	start()
/*<284>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<286>*/ 		switch (zone_temp_flags[15 /* 0x0 80 */]) {
          		  case 0:
/*<288>*/ 			printf(/* textboxtype: 1, unk: 0, line: 88 */ "<0x10009:0x00000016>All'improvviso sono scomparsi i mostri\ne i prociatti non diventano più\naggressivi... mi chiedo cosa sarà mai\nsuccesso!")
          		  case 1:
/*<285>*/ 			printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x0000000d>Ehi, <heroname>! Guarda!\nAnche se è notte, Fifì non è diventata\naggressiva!\n\nNon trovi anche tu che sia un evento\nstraordinario?! Aaah, non potrei\nessere più contento di così!")
/*<287>*/ 			zone_temp_flags[15 /* 0x0 80 */] = true;
          		}
          	  case 1:
/*<158>*/ 		switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          		  case 0:
/*<159>*/ 			printf(/* textboxtype: 1, unk: 0, line: 86 */ "<0x10009:0x00000016>La notte preferisco\nstare lontano da Fifì...\n\n\nPrima la tenevo nella\nscuola, ma una volta\nè successo un disastro...\n\nNon ti conviene andare\nin giro di notte!")
          		  case 1:
/*<132>*/ 			printf(/* textboxtype: 1, unk: 0, line: 85 */ "<0x10009:0x00000004>È pericoloso uscire\ndi notte!\n\n\nAnche Fifì, la prociatta del direttore,\ndi notte si trasforma in una belva...\n\n\nDi notte Oltrenuvola è \npervasa da una strana energia...")
          		}
          	}
          }

          void entrypoint_108_33() {
/*<146>*/ 	start()
/*<149>*/ 	printf(/* textboxtype: 1, unk: 0, line: 112 */ "Pronti... via!")
          }

          void entrypoint_108_17() {
/*<133>*/ 	start()
/*<134>*/ 	printf(/* textboxtype: 1, unk: 0, line: 89 */ "<0x10009:0x00000002><heroname>!\nMa dove vai?!\n\n\nPresto! Lanciati dalla piattaforma e\nchiama il tuo solcanubi!")
          }

          void entrypoint_108_18() {
/*<135>*/ 	start()
/*<136>*/ 	printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x00000002>Ehi, <heroname>!\nVorresti una lezione\npersino ora?\n[1-]Sì[2]No...")
/*<137>*/ 	switch (choice(2)) {
          	  case 0:
/*<139>*/ 		printf(/* textboxtype: 1, unk: 0, line: 92 */ "D'accordo, anche se per oggi\nsarebbero sospese, per te farò \nun'eccezione.\nOttimo atteggiamento!\nAllora oggi ti racconterò\nla storia di Oltrenuvola.\n\n\nOltrenuvola è un'isola che fluttua\nnel cielo da migliaia di anni.\n\n\nI nostri antenati sono\nsempre vissuti in cielo,\nqui e nelle isole vicine.\n\n<0x10009:0x00090a00>Al di sotto di Oltrenuvola,\nsi estende un mare di nubi,\ne chi vi cade non fa ritorno.\n\nSi dice che al di sotto del\nmare di nuvole ci sia il nulla.\n\n\n<0x10009:0x000a0a00>Per oggi è tutto. Ora vai a\nprepararti per il battesimo\ndel volo.")
          	  case 1:
/*<138>*/ 		printf(/* textboxtype: 1, unk: 0, line: 91 */ "Capisco... ad ogni modo le lezioni di\noggi erano già state sospese a causa dei\npreparativi per il battesimo del volo...\n\nSarebbe meglio che anche tu\ncominciassi a prepararti per\nla cerimonia.")
          	}
          }

          void entrypoint_108_01() {
          	start()
/*<  9>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 71>*/ 		switch (scene_flags[41 /* 0x4 02 */]) {
          		  case 0:
/*< 63>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "Fidati di me,\nritroverai presto\nil tuo solcanubi!")
          		  case 1:
/*< 62>*/ 			printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00000001><heroname>, che ti è successo?\nSei pallido...\n\n\nCosa?!<pause 50> Non trovi più il tuo\nsolcanubi?\n\n\nQuesto è un vero problema!\nE<0x10006:0xfccd>...<0x10006:0x00cd> pensi di riuscire a ritrovarlo?\n\n\nVai a cercarlo?<pause 40>\nMa non riuscirai mai a\nfare in tempo per la cerimonia!\n\nUn battesimo del volo senza\nil solcanubi è impossibile<0x10006:0xfccd>...<pause 30>\n\n\n<0x10009:0x00000005><0x10006:0x02cd>Uhm...<pause 30>")
/*<160>*/ 			switch (scene_flags[30 /* 0x2 40 */]) {
          			  case 0:
/*<161>*/ 				printf(/* textboxtype: 1, unk: 0, line: 19 */ "Davvero?\nIl direttore mi\nsta cercando?\n\nBene!\nGrazie di avermi avvertito!\n\n\nNon stare in pensiero per\nla cerimonia.\nVai a cercare\nil tuo solcanubi!")
          				flw_72:
/*< 72>*/ 				scene_flags[0 'Skyloft'][41 /* 0x4 02 */] = true;
          			  case 1:
/*<162>*/ 				printf(/* textboxtype: 1, unk: 0, line: 20 */ "Forse è la punizione\nper non aver ascoltato\nil maestro...\n\nMah, lasciamo perdere...\nIl direttore vuole parlarmi?\nIn tal caso, per ora non\npreoccuparti della cerimonia.\nVai a cercare\nil tuo solcanubi!")
/*<240>*/ 				story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = false;
          				goto flw_72
          			}
          		}
          	  case 1:
/*< 48>*/ 		switch (scene_flags[28 /* 0x2 10 */]) {
          		  case 0:
/*< 51>*/ 			switch (scene_flags[30 /* 0x2 40 */]) {
          			  case 0:
/*< 10>*/ 				printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x000a0404>Oh! Che bello!\nHai ritrovato Fifì...\nQuesti animali si chiamano <color blue<prociatti>coloroff>...\n\n<0x10009:0x00000a00>Sono tanto carini, ma\nmeglio star loro alla larga\ndi notte...\n[1-]Perché?[2-]La notte?")
/*< 11>*/ 				switch (choice(2)) {
          				  case 0:
/*< 12>*/ 					printf(/* textboxtype: 1, unk: 0, line: 9 */ "Uhm... non sai che i prociatti di notte \nsi trasformano...?\n\n\nÈ una storia che fa paura...")
          					flw_13:
/*< 13>*/ 					printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00000016>Qui a Oltrenuvola, quando cala\nla notte, i prociatti sono come\nposseduti.\n\nAnche gli animali che vivono\nnelle grotte o in luoghi oscuri\nsono attivi di notte.\n\nEcco perché gli umani\nnon escono la sera, se non\nper cose importanti.\n\nBeh, per voi che aspirate a\ndiventare cavalieri, non \ndovrebbero essere un problema...\n\nPerò la prudenza non è mai troppa!")
          				  case 1:
          					goto flw_13
          				}
          			  case 1:
/*< 93>*/ 				set_camera(17, 0)
/*< 49>*/ 				printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x000f040d>Oh! Me l'hai riportata\nsana e salva! Grazie!\n<pause 35><0x10009:0x00090400>Sei stato proprio gentile,\n<heroname>!\nScommetto che è affamata!\nAdesso le darò un po' di cibo.")
/*<155>*/ 				set_camera(20, 0)
/*< 52>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "Puoi dire al direttore che\nsta bene? Lo trovi nella\n<color red<piazza di fronte al santuario>coloroff>.")
/*<241>*/ 				set_camera(21, 0)
/*<242>*/ 				printf(/* textboxtype: 1, unk: 0, line: 16 */ "Zelda dovrebbe essere con lui.\nPresto, vai!")
/*<243>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 50, 'param3': 42}
/*< 50>*/ 				scene_flags[0 'Skyloft'][30 /* 0x2 40 */] = true;
          			}
          		  case 1:
/*< 46>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*< 47>*/ 				printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00000006><heroname>, che succede?")
/*< 61>*/ 				set_camera(14, 0)
/*< 60>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "Uno sprint in direzione del muro ti\npermetterà di <color green<aggrapparti>coloroff>!\n\n\nMa fai attenzione a non esaurire il\n<color red<vigore >coloroff>muovendoti quando sei\naggrappato.")
          			  case 1:
/*<  6>*/ 				switch (temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<  7>*/ 					printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00090400>Oh! Mi andresti\ndavvero a prendere Fifì?\n[1-]Sì[2-]No")
/*<  8>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_2:
/*<  2>*/ 						printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x0009040d>Davvero?\nAnche se vai di fretta? Ti ringrazio!")
/*< 43>*/ 						{'type': 'type3', 'subType': 4, 'param1': 3328, 'param2': 0, 'next': 44, 'param3': 22}
/*< 44>*/ 						printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00090400>Da quella parte dovresti riuscire a\nsalire. Se ti aggrappi al cornicione e\narrivi fin lì dovresti riuscire a\nraggiungere il tetto.\n<0x10007:0xff000000>Mi raccomando!")
/*< 45>*/ 						temp_flags[2 /* 0x1 04 */] = true;
/*<235>*/ 						story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
          					  case 1:
/*<229>*/ 						printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00000a00>Ah...\n\n\n\nAllora potresti dire al direttore\nche il maestro Cornelio ha trovato\nFifì? Così starà tranquillo...")
          					}
          				  case 1:
/*< 68>*/ 					switch (scene_flags[38 /* 0x5 40 */]) {
          					  case 0:
/*<231>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 1, 'param3': 31}
/*<  1>*/ 						printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Buongiorno, <heroname>!\nVuoi allenarti subito per il battesimo\ndel volo?\n\nEh? <pause 30>Un appuntamento?\n<pause 30>Ah... devi vedere <color blue<Zelda>coloroff>?")
/*< 42>*/ 						printf(/* textboxtype: 1, unk: 0, line: 1 */ "Beh, allora capiti proprio a fagiolo!\n\n\n\n<color blue<Gaepora>coloroff>, il padre di Zelda, sai... il\ndirettore della scuola... beh, la sua\n<color red<Fifì >coloroff>è fuggita...")
/*<237>*/ 						set_camera(12, 0)
/*<236>*/ 						printf(/* textboxtype: 1, unk: 0, line: 2 */ "Guarda! <0x1000A:0x001000cd>Non vuole scendere da lì...\n\n\n\n<0x1000A:0xffff00cd>Il direttore è troppo\nimpegnato a preparare\nla cerimonia insieme a Zelda...\n\nAvevo pensato di attirarla con del cibo,\nma la cerimonia sta per cominciare e\nnon vorrei sporcare il mio vestito\nmigliore...\n<0x10007:0xff000000>Perché non vai tu a\nprendere Fifì?\n\n[1-]Va bene[2-]Ho da fare")
/*<  4>*/ 						switch (choice(2)) {
          						  case 0:
/*< 54>*/ 							set_camera(-1, 0)
          							goto flw_2
          						  case 1:
/*< 55>*/ 							set_camera(-1, 0)
/*<  3>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00000a00>Ah...\n\n\n\nAllora potresti dire al direttore\nche il maestro Cornelio ha trovato\nFifì? Così starà tranquillo...")
/*<  5>*/ 							temp_flags[1 /* 0x1 02 */] = true;
/*<234>*/ 							story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
          						}
          					  case 1:
/*< 65>*/ 						switch (scene_flags[37 /* 0x5 20 */]) {
          						  case 0:
/*< 90>*/ 							set_camera(9, 0)
/*< 67>*/ 							printf(/* textboxtype: 1, unk: 2, line: 43 */ "<0x10009:0x000b0a06>Ma che fai?\nFai subito quello che ti\ndice il maestro!")
          						  case 1:
/*<154>*/ 							story_flags[565 /* us: 805A9B19 0x10, jp: 805ACD99 0x10 */] = false;
/*<174>*/ 							{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 100, 'next': 89, 'param3': 17}
/*< 89>*/ 							set_camera(9, 0)
/*<264>*/ 							switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          							  case 0:
/*<265>*/ 								printf(/* textboxtype: 1, unk: 2, line: 42 */ "<0x10009:0x000b0a0d>Esatto, con (Z) puoi <color green<inquadrare\n>coloroff>in quella direzione.<0x10011:0x07cd>\n\n\n<0x10009:0x00000c04>Mmh? <pause 15> Noto dalla tua espressione che\nnon hai molta voglia di starmi a\nsentire, ma ritengo che qualche\nnozione di base possa esserti utile!\n<0x10009:0x00000a00>Nella <color red<modalità eroica>coloroff>...<pause 30>\n<sound 4>I <color red<cuori>coloroff> subiranno il <color red<doppio dei danni>coloroff>!\nPer questo è ancora più importante che\ntu sappia <color green<inquadrare>coloroff> con (Z)<color green< >coloroff>!<0x10011:0x07cd>\nComunque sia, parlare in questo modo\nè decisamente scomodo! Per piacere\nvieni qui sopra!")
          								flw_58:
/*< 58>*/ 								set_camera(10, 0)
/*< 41>*/ 								printf(/* textboxtype: 1, unk: 2, line: 38 */ "<0x10009:0x000b0a00>Prova a salire su quelle casse di legno\nfacendo uno <color green<sprint>coloroff>. Vedrai che ce la\nfai!\n\nPer fare uno <color green<sprint >coloroff>tieni premuto\n(A) mentre ti sposti.\nVedrai che non avrai problemi a\nsuperare un dislivello del genere!\nProva ad arrivare fin qui!")
/*< 66>*/ 								scene_flags[0 'Skyloft'][37 /* 0x5 20 */] = true;
          							  case 1:
/*<263>*/ 								printf(/* textboxtype: 1, unk: 2, line: 41 */ "<0x10009:0x000b0a0d>Esattamente!\nUsando (Z) puoi <color green<inquadrare >coloroff>una\ndeterminata direzione o un bersaglio.<0x10011:0x07cd>\n\nSe usi (Z) per <color green<inquadrare>coloroff>,\npuoi parlare con la gente\nsemplicemente premendo(A).<0x10011:0x07cd>\n\nUsare (Z) è molto comodo<0x10011:0x07cd> anche se\nnon c'è nessun bersaglio da\n<color green<inquadrare>coloroff>, perché ti fa centrare la\nvisuale in avanti.\nPerò da questa distanza è un po'\ndifficile parlare... perché non ti\navvicini?")
          								goto flw_58
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_19() {
/*<140>*/ 	start()
/*<141>*/ 	printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x00000004>Ehi! Quello è il posto del maestro!\nTu sei un allievo!\nVatti a sedere dall'altra parte!")
          }

          void entrypoint_108_02() {
/*< 14>*/ 	start()
/*< 38>*/ 	switch (story_flags[31 /* us: 805A9ADA 0x80, jp: 805ACD5A 0x80 */]) {
          	  case 0:
/*< 21>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00000002>Che fai? Presto, fai uno <color green<sprint >coloroff>con (A),\n<color red<lanciati >coloroff>in aria e chiama il solcanubi!\n\n\nPer chiamare il solcanubi premi (v)!<0x10011:0x09cd>")
          	  case 1:
/*< 28>*/ 		set_camera(1, 0)
/*< 22>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 23, 'param3': 32}
/*< 23>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 24, 'param3': 32}
/*< 24>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 6, 'next': 177, 'param3': 32}
/*<177>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 180, 'param3': 32}
/*<180>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 25, 'param3': 32}
/*< 25>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 26, 'param3': 17}
/*< 26>*/ 		{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 0, 'next': 27, 'param3': 17}
/*< 27>*/ 		{'type': 'type3', 'subType': 1, 'param1': 6, 'param2': 0, 'next': 181, 'param3': 17}
/*<181>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 19, 'next': 15, 'param3': 13}
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000002>Il <color red<battesimo del volo\n>coloroff>sta per iniziare.\n\n\n<heroname> stava per essere\nescluso, ma per fortuna ora è tutto\nrisolto e siamo al completo!\n\nBene, lasciate che vi\nspieghi le <color red<regole>coloroff>!")
          		flw_16:
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "Per primo si lancerà il solcanubi che\nporta la statuetta...\n\n\nPoi, al mio segnale, farete uno <color red<sprint \n>coloroff>con (A) e <color red<vi lancerete>coloroff> in cielo per\nsaltare in groppa al vostro solcanubi.\n\nAppena vi lanciate, non dimenticatevi\ndi usare il <color green<richiamo>coloroff> con (v)!<0x10011:0x09cd>\n\n\nIl primo che raggiunge il solcanubi e\nprende la statuetta con (A) è il\nvincitore!\n\n<0x1000A:0x000200cd>Ecco, tutto qui.\nAvete capito tutti?\n[1-]Sì[2?]No")
/*< 18>*/ 		switch (choice(2)) {
          		  case 0:
/*< 30>*/ 			set_camera(3, 0)
/*< 17>*/ 			printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00000003><0x10008:0x01cd>Bene!\n\n\n\nIl vincitore verrà promosso alla classe\nsuperiore della scuola d'armi.<pause 20>\n\n\nInoltre riceverà un <color red<riconoscimento per\nl'onore>coloroff>, che gli sarà consegnato dalla\nragazza scelta per rappresentare\nla <color red<Dea>coloroff> durante la cerimonia...\nIn occasione del 25° anniversario,\nil conferimento avverrà <color red<sulla\npiattaforma tra le mani della statua\ndella Dea>coloroff>.\nQuest'anno, per desiderio della\nrappresentante della Dea, sarà un\noggetto da lei stessa <color red<realizzato>coloroff>.\n\nE come sapete, <color red<la rappresentante\ndella Dea >coloroff>quest'anno è...")
/*<185>*/ 			{'type': 'type3', 'subType': 4, 'param1': 267, 'param2': 3840, 'next': 178, 'param3': 13}
/*<178>*/ 			set_camera(5, 0)
/*<175>*/ 			printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x01000009><0x10008:0x01cd>La dolce Zelda!")
/*<194>*/ 			{'type': 'type3', 'subType': 4, 'param1': 1048, 'param2': 3084, 'next': 31, 'param3': 13}
/*< 31>*/ 			set_camera(2, 0)
/*< 20>*/ 			printf(/* textboxtype: 1, unk: 1, line: 31 */ "Fateci vedere quali risultati\navete ottenuto con il\nvostro allenamento!\n\nE non lanciate oggetti\nné scontratevi con gli\naltri concorrenti!")
/*<179>*/ 			set_camera(6, 0)
/*<182>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 4, 'next': 183, 'param3': 50}
/*<183>*/ 			{'type': 'type3', 'subType': 4, 'param1': 512, 'param2': 23, 'next': 176, 'param3': 13}
/*<176>*/ 			printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10008:0x01cd>Hai capito, <0x10009:0x04191700>Bado?")
/*< 40>*/ 			set_camera(4, 0)
/*<184>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 53, 'param3': 50}
/*< 53>*/ 			make_actor_do_something(0, 0)
/*< 39>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00000002>Bene! Tutti ai posti di partenza!")
/*< 37>*/ 			story_flags[31 /* us: 805A9ADA 0x80, jp: 805ACD5A 0x80 */] = true;
          		  case 1:
/*< 19>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000052>Bene...\nRipeto!")
/*< 29>*/ 			set_camera(1, 0)
          			goto flw_16
          		}
          	}
          }

