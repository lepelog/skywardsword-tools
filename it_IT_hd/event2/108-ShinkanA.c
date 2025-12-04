          void entrypoint_108_03() {
/*< 32>*/ 	start()
/*<254>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 113, 'next': 33, 'param3': 24}
/*< 33>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10008:0x01cd>Via!!!<0x10005:0x000f0000>")
          }

          void entrypoint_108_20() {
/*<155>*/ 	start()
/*<288>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<289>*/ 		printf(/* textboxtype: 0, unk: 0, line: 98 */ "<0x10009:0x00000001>La statua della Dea è scomparsa, ma\nquesto non significa che sia scomparsa\nanche la Dea! Lei è sempre tra noi,\nvero <heroname>?")
          	  case 1:
/*<281>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*<282>*/ 			printf(/* textboxtype: 0, unk: 1, line: 97 */ "<0x10009:0x00000001>Ragazzo, mi sembra che ultimamente i\ntuoi progressi siano notevoli!\nTi stai impegnando a fondo, eh?!\nBravo!")
          		  case 1:
/*<277>*/ 			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          			  case 0:
/*<280>*/ 				printf(/* textboxtype: 1, unk: 0, line: 96 */ "<0x10009:0x00000001>Cosa? Narisha?!<pause 40>\nHo sentito qualche voce su di lui...\n\n\nMa purtroppo non ne so molto.\n\n\n\nDovresti chiedere al <color blue<maestro Asio Otus>coloroff>\nse vuoi saperne di più.")
          			  case 1:
/*<278>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<279>*/ 					printf(/* textboxtype: 0, unk: 0, line: 95 */ "<0x10009:0x00000001>Non trovi che Fifì sia proprio carina?!<pause 30>\nTriforza? Cos'è?<pause 40>\nC'entra qualcosa con Fifì?")
          				  case 1:
/*<156>*/ 					printf(/* textboxtype: 0, unk: 1, line: 94 */ "<0x10009:0x00000001>Ho iniziato a occuparmi di Fifì, come\nmi aveva chiesto di fare il direttore.\n\n\nÈ davvero una bestiola tenera!\nVorrei anch'io un prociatto...")
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_04() {
/*< 34>*/ 	start()
/*<150>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 59, 'param3': 32}
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': -1, 'next': 152, 'param3': 50}
/*<152>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 149, 'param3': 49}
/*<149>*/ 	make_actor_do_something(0, 10)
/*<151>*/ 	{'type': 'type3', 'subType': 4, 'param1': 2578, 'param2': 2562, 'next': 35, 'param3': 13}
/*< 35>*/ 	printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x1000D:0x1906><0x10008:0x01cd>Ehi, <heroname>!\nDi qua!\n")
/*< 57>*/ 	set_camera(11, 0)
/*<243>*/ 	make_actor_do_something(1, 10)
/*<212>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 10, 'next': 260, 'param3': 17}
/*<260>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<261>*/ 		printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x0a0e0a01>Buongiorno, <heroname>!\nFantastico, hai deciso di cimentarti\nnella <color red<modalità eroica>coloroff>!\n\nOggi è il gran giorno del <color red<battesimo del\nvolo>coloroff>, come ti senti?\n\n\nVorrei parlare con te! <color green<Inquadrami >coloroff>così\npotremo fare due chiacchiere.")
          		flw_64:
/*< 64>*/ 		scene_flags[0 'Skyloft'][36 /* 0x5 10 */] = true;
/*<291>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 253, 'param3': 60}
/*<253>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 293, 'param3': 42}
/*<293>*/ 		scene_flags[0 'Skyloft'][27 /* 0x2 08 */] = true;
          	  case 1:
/*< 56>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0a0e0a01>Buongiorno <heroname>!\nOggi è il giorno del <color red<battesimo del volo>coloroff>!\nTi senti in forma?\nVorrei dirti un paio di cose...\n<color green<Inquadrami>coloroff> così possiamo fare due\nchiacchiere!")
          		goto flw_64
          	}
          }

          void entrypoint_108_21() {
/*<185>*/ 	start()
/*<191>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 189, 'param3': 32}
/*<189>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 186, 'param3': 13}
/*<186>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10008:0x01cd>Ehi, <heroname>!")
/*<187>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x1000A:0x001200cd><0x10009:0x000a0202>È inutile provarci. Non riuscirai mai\na salire sul tetto solo con lo <color green<sprint>coloroff>.")
/*<190>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 192, 'param3': 17}
/*<192>*/ 	wait_frames(15)
/*<188>*/ 	set_camera(19, 0)
/*<229>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "Dovrebbe esserci una cassa di legno lassù.\nSe la <color green<sposti>coloroff>, <color green<spingendola >coloroff>con (A), puoi\nusarla come base per salire.\n\nMettila vicino al muro e poi effettua uno\n<color green<sprint>coloroff> o usa (StickUp) per salire.")
          }

          void entrypoint_108_05() {
/*< 36>*/ 	start()
/*<266>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<267>*/ 		printf(/* textboxtype: 0, unk: 1, line: 46 */ "")
/*<269>*/ 		switch (choice(2)) {
          		  case 0:
/*<270>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "")
          		  case 1:
/*<268>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "")
          		}
          	  case 1:
/*<265>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "")
          	}
          }

          void entrypoint_108_22() {
/*<207>*/ 	start()
/*<209>*/ 	switch (scene_flags[92 /* 0xA 10 */]) {
          	  case 0:
/*<210>*/ 		printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x00000001>Ho disposto che l'inizio della\ncerimonia sia rinviato fino a\nquando non ritrovi il tuo solcanubi.\nTu preoccupati solo di quello!")
          	  case 1:
/*<211>*/ 		printf(/* textboxtype: 0, unk: 1, line: 100 */ "<0x10009:0x00000001>Sono davvero felice\nche l'inizio della cerimonia\nsia stato rimandato!\nCosì potrai ritrovare il tuo solcanubi!")
          	}
          }

          void entrypoint_108_06() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x000b0a52>Ehi, <heroname>!\nNon far finta di niente!\nFai quello che dice il maestro!\n\n<color also red<Inquadrami >coloroff>e parla con me!")
/*<294>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 60}
          }

          void entrypoint_108_23() {
/*<216>*/ 	start()
/*<224>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<225>*/ 		printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x00000001>Allora, <heroname>!\nRiesci a cavartela?\n\n\nSe dovessi avere problemi, non fare\ncomplimenti e vieni a parlare con me!")
          	  case 1:
/*<220>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*<223>*/ 			printf(/* textboxtype: 0, unk: 0, line: 104 */ "<0x10009:0x00000001>L'attacco avvitato\nè una manovra alquanto impegnativa\nper un solcanubi!\n\nMa con il tuo bel carminio,\nnon dovresti avere problemi...")
          		  case 1:
/*<219>*/ 			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          			  case 0:
/*<222>*/ 				printf(/* textboxtype: 0, unk: 1, line: 103 */ "<0x10009:0x00000005><heroname>...\nChe ci fai qui nel cuore della notte?\n\n\nCosa?! Narisha?!\nBah, questi non sono discorsi da fare\nin piena notte!\n\nTorna domani mattina.\nTe ne parlerò nei dettagli!")
          			  case 1:
/*<218>*/ 				switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          				  case 0:
/*<221>*/ 					printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x00000001>Come va, <heroname>?\nHai trovato Zelda?\n\n\nSono certo che riuscirai a trovarla.\nCredo in te!")
          				  case 1:
/*<217>*/ 					printf(/* textboxtype: 0, unk: 0, line: 101 */ "<0x10009:0x00000001>Di notte i nostri\nsolcanubi non possono volare.\nNon possiamo cercare Zelda.\nPer oggi, riposati un pochino!\nPartiremo domani.\nOgni tanto una bella pausa\naiuta a ritrovare la tranquillità!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_07() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x000a0a00><0x10008:0x02cd>Ehi, <heroname>!\n\n\n\n<0x10008:0x02cd>Ti sto aspettando!")
          }

          void entrypoint_108_24() {
/*<231>*/ 	start()
/*<244>*/ 	switch (scene_flags[41 /* 0x4 02 */]) {
          	  case 0:
/*<237>*/ 		printf(/* textboxtype: 0, unk: 0, line: 107 */ "<0x10009:0x00000002>Ahi, ahi, <heroname>!\nNon è il caso di fare\ncerte cose!\n\nVai subito a cercare il\ntuo solcanubi! Ascolta quello che\nti dicono i tuoi compagni!")
          	  case 1:
/*<238>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<245>*/ 			printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x00000002>Ahi, ahi, <heroname>!\nChe fai, te ne vai di soppiatto?\n\n\nVieni qui!")
          		  case 1:
/*<232>*/ 			printf(/* textboxtype: 0, unk: 1, line: 106 */ "<0x10009:0x00000002>Ahi, ahi, <heroname>!\nNon bisogna ignorare gli insegnamenti\ndel maestro...\n\nVieni qui e ascolta quello che ho da dirti!")
          		}
          	}
          }

          void entrypoint_108_08() {
/*< 75>*/ 	start()
/*< 87>*/ 	switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          	  case 0:
/*<208>*/ 		printf(/* textboxtype: 0, unk: 1, line: 76 */ "")
          	  case 1:
/*< 82>*/ 		switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          		  case 0:
/*< 84>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 31}
/*< 76>*/ 			printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x00000001>Ehi, <heroname>,\ncome va la ricerca di Zelda?\nL'hai trovata?\n\n<0x10009:0x00000005>Cosa?<pause 40> Narisha?\nHai chiesto al direttore?\n\n\nSì, sono sicuro che Narisha\nfosse dentro quella nuvola...\n\n\nMa quello<0x10006:0xfecd>...<0x10006:0x00cd> <pause 25>non è il nostro Narisha.\n<0x10006:0xfecd>Quello è...<pause 40><0x10006:0x01cd> un <color red<mostro>coloroff>!\n\n\n<0x10009:0x0000000f>Sembrava proprio Narisha,\nma poi mi sono avvicinato e...\n\n\nHa cercato di attaccarmi con\nil suo corpo enorme!\n\n\nIn quel momento, nei suoi occhi\nho visto un grande odio...\n\n\nDicono che col tempo si cambi...\n<0x10006:0xfecd>ma così... <0x10006:0x00cd><pause 25>ho la sensazione che\n<pause 25>sia posseduto.")
/*<202>*/ 			wait_frames(40)
/*< 77>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00000005>Cosa? <pause 40>Vorresti parlare con Narisha?\n\n\n\n<0x10006:0xfecd>Ma è...<0x10006:0x00cd> impossibile!\nIl Narisha di questo tempo non\ncomprenderebbe le parole degli umani.\n\n<0x10006:0xfecd>E poi...<0x10006:0x00cd> se ti avvicini a lui per parlare\nfinirai anche tu nel mare di nuvole.")
/*<203>*/ 			wait_frames(40)
/*<200>*/ 			printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x00000052>Eh?! <pause 40>... Allora vai lo stesso?\n\n\n\n<0x10006:0xfecd>Capisco... <0x10006:0x00cd>lo fai per trovare Zelda?\n\n\n\n... Va bene.<pause 30> Del resto non credo\nche ti fermeresti anche se te lo\nchiedessi.")
/*<204>*/ 			wait_frames(30)
/*<201>*/ 			printf(/* textboxtype: 1, unk: 0, line: 54 */ "Bene! Ho un'idea... vieni con me!")
/*< 85>*/ 			story_flags[362 /* us: 805A9B03 0x01, jp: 805ACD83 0x01 */] = true;
/*< 86>*/ 			changeScene(0, 0) // 
          		  case 1:
/*<275>*/ 			switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          			  case 0:
/*<276>*/ 				printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x00000001>Ciao <heroname>!\n<pause 30>Come? Triforza, dici?!\n\n\nMi dispiace, ragazzo, non ne so nulla!\nPerché non provi a chiedere al\ndirettore?")
          			  case 1:
/*< 83>*/ 				printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x00000001>Ehi, <heroname>, come va la ricerca\ndi Zelda?\n\n\nMi dispiace di averti affidato\nquest'incarico difficile.\nMa conto su di te! Trovala!")
          			}
          		}
          	}
          }

          void entrypoint_108_09() {
/*< 78>*/ 	start()
/*< 79>*/ 	printf(/* textboxtype: 0, unk: 0, line: 56 */ "<0x10009:0x00000002>Ho avuto l'impressione che, dentro\nquella nuvola, Narisha fosse come\nposseduto.\n\nSe riuscissimo a liberarlo da quella\nforza malefica, riavremmo il nostro\nNarisha. Giusto, <heroname>?\n\nAllora, adesso ti insegnerò una\ntecnica speciale da usare col solcanubi.\n\n\n<0x10009:0x00000003>Si chiama <color red<attacco avvitato>coloroff>!")
/*<258>*/ 	set_camera(22, 0)
/*<256>*/ 	printf(/* textboxtype: 1, unk: 2, line: 57 */ "Grazie all'attacco avvitato, potrai sferrare\nun colpo molto potente, in grado di ferire\nil parassita che infesta Narisha!\n\nEseguire un attacco avvitato di per sé\nnon è difficile. Basta premere <icon 30>.<0x10011:0x10cd>\n\n\nRispetto agli <color red<attacchi >coloroff>normali,\nl'accelerazione dura più a lungo e risulta\ndifficile mantenere la direzione.\n\nAlla scuola d'armi questa è una tecnica\nritenuta di alto livello, riservata agli\nesperti. Forse per te è ancora presto per\nimpararla...\n<pause 30>Ma voglio metterti alla prova per vedere\nse hai talento...")
/*<259>*/ 	set_camera(-1, 0)
/*<257>*/ 	printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x00000004>Per prima cosa, lanciati e vola in groppa\nal solcanubi.")
/*< 93>*/ 	story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
/*< 98>*/ 	story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*<248>*/ 	zone_temp_flags[13 /* 0x0 20 */] = true;
          }

          void entrypoint_108_10() {
/*< 90>*/ 	start()
/*<128>*/ 	switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          	  case 0:
/*<129>*/ 		printf(/* textboxtype: 0, unk: 1, line: 61 */ "<0x10009:0x0000000f>Quello che è successo a Zelda è davvero\nterribile...\n\n\nMa tu non devi tormentarti...\nÈ stato un incidente...")
          	  case 1:
/*<127>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<196>*/ 			switch (scene_flags[91 /* 0xA 08 */]) {
          			  case 0:
/*<198>*/ 				printf(/* textboxtype: 2, unk: 0, line: 62 */ "<0x10009:0x00000001>Non preoccuparti per la cerimonia.\nVai subito a cercare il solcanubi!")
          			  case 1:
/*<126>*/ 				printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x0000000f>Che succede, <heroname>?\n<pause 30>Il tuo solcanubi non risponde\nal richiamo?\n\nÈ una cosa molto strana, direi\npraticamente impossibile<0x10006:0xfecd>...\n\n\nNe hai parlato con il responsabile\ndella cerimonia, il <color blue<maestro\nCornelio>coloroff>?\n\nAh... se ne hai già parlato con il\ndirettore, si troverà una\nsoluzione...\n\nIntanto, vai a cercare il tuo\nsolcanubi al più presto!")
/*<199>*/ 				scene_flags[0 'Skyloft'][91 /* 0xA 08 */] = true;
          			}
          		  case 1:
/*<194>*/ 			switch (scene_flags[90 /* 0xA 04 */]) {
          			  case 0:
/*<195>*/ 				printf(/* textboxtype: 1, unk: 2, line: 63 */ "<0x10009:0x00000001>Veramente ti capita spesso di\nconfondere me con il <color blue<maestro\nCornelio>coloroff>...\n\nIo sono il <color blue<maestro Asio Otus >coloroff>e\nho i capelli bianchi; il <color blue<maestro\nCornelio>coloroff>, invece, ha i capelli neri!\nForse così te lo ricorderai meglio!")
          			  case 1:
/*< 91>*/ 				printf(/* textboxtype: 0, unk: 0, line: 59 */ "<0x10009:0x00000001>Ehi, <heroname>!\nOggi è il giorno del <color red<battesimo del volo>coloroff>!\n\n\nRicordati delle teorie che ti ho spiegato\nio, il maestro <color blue<Asio Otus>coloroff>, e di quelle del\nmaestro <color blue<Cornelio >coloroff>e fai del tuo meglio!\n\nA proposito, ti ricordi come ci si <color red<guarda\nintorno >coloroff>con (^)?<0x10011:0x08cd>\n\n\nSe vuoi dare un'occhiata intorno a te,\n<color green<premi >coloroff><icon 34>.<0x10011:0x08cd>")
/*<197>*/ 				scene_flags[0 'Skyloft'][90 /* 0xA 04 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_108_11() {
/*<122>*/ 	start()
/*<162>*/ 	switch (scene_flags[20 /* 0x3 10 */]) {
          	  case 0:
/*<272>*/ 		switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          		  case 0:
/*<274>*/ 			printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10009:0x00000001>Intendi dire che esiste davvero il\nmondo chiamato Terra?!\n\n\nSupponendo che sia così, immagino\nche sia esattamente l'opposto del\nnostro bel mondo rigoglioso...")
          		  case 1:
/*<271>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<273>*/ 				printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00000001>Come vanno le ricerche di Zelda,\nstanno procedendo?\n\n\nQuando sei stanco, riposati su un letto!\nPuoi dormire fino a sera o recuperare\ntutti i cuori, sai?!")
          			  case 1:
/*<166>*/ 				printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x10009:0x00000001>Abbi cura di te! Ricorda che le sorti di\nZelda sono nelle tue mani...\nMi raccomando!")
          			}
          		}
          	  case 1:
/*<167>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 123, 'param3': 31}
/*<123>*/ 		printf(/* textboxtype: 0, unk: 1, line: 64 */ "<0x10009:0x00000011><heroname>, ho sentito che\nvuoi andare a cercare Zelda\nal di sotto delle nuvole...\n\nIl direttore dice che laggiù\nci sia la Terra...\nTu che cosa sai della Terra?")
/*<168>*/ 		switch (adventure_pouch_has(9 0x0009)) {
          		  case 0:
/*<170>*/ 			printf(/* textboxtype: 0, unk: 0, line: 71 */ "Ah, quella è la famosa spada?\nMa lo scudo<pause 10>.<pause 10>.<pause 10>.<pause 10>\n\n\nUhm... hai ottenuto uno scudo\ncome si deve! Bravo!\nBeh, è il momento di dirsi addio...")
          			flw_171:
/*<171>*/ 			give_item(4 0x04);
/*<255>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 172, 'param3': 12}
          			flw_172:
/*<172>*/ 			printf(/* textboxtype: 1, unk: 0, line: 72 */ "Se non sai come usare lo scudo,\nfattelo insegnare dal <color blue<primo cavaliere>coloroff>.\nLo trovi alla palestra di scherma.")
/*<165>*/ 			scene_flags[0 'Skyloft'][20 /* 0x3 10 */] = true;
/*<213>*/ 			switch (scene_flags[89 /* 0xA 02 */]) {
          			  case 0:
          			  case 1:
/*<214>*/ 				story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
/*<215>*/ 				scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
          			}
          		  case 1:
/*<246>*/ 			switch (is_adventure_pouch_full()) {
          			  case 0:
/*<247>*/ 				printf(/* textboxtype: 1, unk: 2, line: 66 */ "Ah, quella è la famosa spada?\nPerò, senza un buono scudo\nnon andrai molto lontano.\n\nTe ne avrei dato uno ma hai la\nborsa piena. Ecco, prendi questo\npiccolo regalo da parte mia...")
          				goto flw_171
          			  case 1:
/*<169>*/ 				printf(/* textboxtype: 2, unk: 0, line: 65 */ "Ah, quella è la famosa spada?\nPerò, senza un buono scudo\nnon andrai molto lontano.\n\nPrendi questo!")
/*<163>*/ 				give_item(116 0x74);
/*<164>*/ 				printf(/* textboxtype: 0, unk: 1, line: 67 */ "Lo scudo di legno è molto leggero e\nmaneggevole, ma è il più fragile degli\nscudi.\n\nÈ vulnerabile al fuoco, ma, se si rompe,\nlo puoi ricomprare al bazar.\n\n\nPer equipaggiare uno scudo, <color green<tieni\npremuto>coloroff> <icon 40>, scegli lo scudo e poi\nrilascia <icon 40>.<0x10011:0x0ecd>")
          				goto flw_172
          			}
          		}
          	}
          }

          void entrypoint_108_12() {
/*< 94>*/ 	start()
/*<205>*/ 	switch (scene_flags[77 /* 0x8 20 */]) {
          	  case 0:
/*<206>*/ 		printf(/* textboxtype: 0, unk: 1, line: 76 */ "")
          	  case 1:
/*< 96>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*< 80>*/ 			printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x0000000a>Oh! Sei riuscito a distruggere 10\nbersagli nel tempo stabilito!\nSplendido!\n\nSe riesci a cavalcare il solcanubi\ncosì bene, non avrai problemi!\n<heroname>! Tu e il tuo solcanubi\nrosso siete davvero unici!\nOra hai il mio permesso\ndi usare l'attacco avvitato!")
/*< 81>*/ 			printf(/* textboxtype: 0, unk: 0, line: 74 */ "E ora veniamo a come\ntrovare Narisha...\n\n\nOgni anno si fa un'offerta\ndi zuppa di zucca a Narisha.\nIl titolare della <color red<taverna delle zucche>coloroff>\nsaprà darti informazioni!\nVai da lui e chiedi!")
/*<106>*/ 			scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = true;
          		  case 1:
/*< 95>*/ 			switch (story_flags[641 /* us: 805A9B1D 0x04, jp: 805ACD9D 0x04 */]) {
          			  case 0:
/*< 97>*/ 				printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x0000000f>Uhm... non riesci ancora a distruggere\ni 10 bersagli in meno di <color red<120 secondi>coloroff>.\nMi dispiace ma non posso rivelarti\ntutti i segreti.\nOra rilassati un poco, tanto io resterò\nqui. Quando sarai di nuovo pronto per\nla prova, dimmelo!")
/*< 99>*/ 				story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = false;
/*<226>*/ 				story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = false;
/*<227>*/ 				story_flags[641 /* us: 805A9B1D 0x04, jp: 805ACD9D 0x04 */] = false;
/*<104>*/ 				scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = true;
          			  case 1:
          			}
          		}
          	}
          }

          void entrypoint_108_13() {
/*<100>*/ 	start()
/*<102>*/ 	switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          	  case 0:
/*<103>*/ 		printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000001>La taverna delle zucche è un locale\nmolto carino che si trova su un'isoletta\na <color red<sud‐est >coloroff>di Oltrenuvola.\n\nCi lavora una ragazza dalla voce\nsplendida, <color blue<Pepa>coloroff>.\n<pause 30>Io<0x10006:0xfecd>...<0x10006:0x00cd> sono un suo grande fan.\nMa non dirlo a nessuno!")
          	  case 1:
/*<105>*/ 		switch (scene_flags[77 /* 0x8 20 */]) {
          		  case 0:
          			flw_107:
/*<107>*/ 			printf(/* textboxtype: 0, unk: 1, line: 79 */ "<0x10009:0x00000001>Allora, <heroname>!\nVuoi fare un po' di esercizio\ndi attacco avvitato?\n[1-]Va bene[2]Dopo")
/*<108>*/ 			switch (choice(2)) {
          			  case 0:
/*<109>*/ 				printf(/* textboxtype: 0, unk: 0, line: 80 */ "<0x10009:0x00000003>Ottima risposta!\nAllora lanciati da qua!")
/*<111>*/ 				scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = false;
/*<112>*/ 				story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
/*<113>*/ 				story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*<250>*/ 				zone_temp_flags[13 /* 0x0 20 */] = true;
          			  case 1:
/*<110>*/ 				printf(/* textboxtype: 1, unk: 0, line: 81 */ "Non c'è niente di male!\nAspetta fino a quando non ti senti pronto!\n\n\nResterò qui per un po'...\nTorna pure quando vuoi!")
/*<252>*/ 				zone_temp_flags[13 /* 0x0 20 */] = false;
          			}
          		  case 1:
/*<121>*/ 			switch (story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */]) {
          			  case 0:
/*<101>*/ 				printf(/* textboxtype: 0, unk: 0, line: 77 */ "<0x10009:0x00000001>Ma che fai?\nPresto, lanciati!\nO non ne hai il coraggio?\n[1-]Sono pronto![2]Ho paura!")
/*<116>*/ 				switch (choice(2)) {
          				  case 0:
/*<120>*/ 					printf(/* textboxtype: 0, unk: 1, line: 82 */ "<0x10009:0x00000003>Proprio questo mi\naspettavo!\nIl cielo è tuo, <heroname>!")
/*<249>*/ 					zone_temp_flags[13 /* 0x0 20 */] = true;
          				  case 1:
/*<117>*/ 					story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = false;
/*<118>*/ 					story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = false;
/*<119>*/ 					printf(/* textboxtype: 1, unk: 0, line: 81 */ "Non c'è niente di male!\nAspetta fino a quando non ti senti pronto!\n\n\nResterò qui per un po'...\nTorna pure quando vuoi!")
/*<251>*/ 					zone_temp_flags[13 /* 0x0 20 */] = false;
          				}
          			  case 1:
          				goto flw_107
          			}
          		}
          	}
          }

          void entrypoint_108_30() {
/*<141>*/ 	start()
/*<142>*/ 	printf(/* textboxtype: 0, unk: 1, line: 109 */ "Bene, <heroname>!\n\n\n\nHo insegnato al tuo solcanubi a fare\nun <color green<avvitamento >coloroff>quando premi <icon 30>.")
          }

          void entrypoint_108_14() {
/*<114>*/ 	start()
/*<115>*/ 	printf(/* textboxtype: 0, unk: 0, line: 83 */ "")
          }

          void entrypoint_108_31() {
/*<143>*/ 	start()
/*<146>*/ 	printf(/* textboxtype: 0, unk: 0, line: 110 */ "Ora devi rompere <color red<10 bersagli >coloroff>che si\ntrovano sulle rocce davanti a te con\nl'<color red<attacco avvitato>coloroff>.")
          }

          void entrypoint_108_15() {
/*<124>*/ 	start()
/*<125>*/ 	printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000002><heroname>!!!\nMa dove vai?! Il battesimo del volo\nè già iniziato! Presto, lanciati dalla\npiattaforma!")
          }

          void entrypoint_108_32() {
/*<144>*/ 	start()
/*<147>*/ 	printf(/* textboxtype: 1, unk: 0, line: 111 */ "Solo quando riuscirai a distruggere\n10 bersagli in meno di <color red<120 secondi>coloroff>,\navrai dimostrato di essere un vero\ncavaliere dei solcanubi.")
          }

          void entrypoint_108_16() {
/*<130>*/ 	start()
/*<283>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<285>*/ 		switch (zone_temp_flags[15 /* 0x0 80 */]) {
          		  case 0:
/*<287>*/ 			printf(/* textboxtype: 0, unk: 1, line: 88 */ "<0x10009:0x00000016>All'improvviso sono scomparsi i mostri\ne i prociatti non diventano più\naggressivi... mi chiedo cosa sarà mai\nsuccesso!")
          		  case 1:
/*<284>*/ 			printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x0000000d>Ehi, <heroname>! Guarda!\nAnche se è notte, Fifì non è diventata\naggressiva!\n\nNon trovi anche tu che sia un evento\nstraordinario?! Aaah, non potrei\nessere più contento di così!")
/*<286>*/ 			zone_temp_flags[15 /* 0x0 80 */] = true;
          		}
          	  case 1:
/*<157>*/ 		switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          		  case 0:
/*<158>*/ 			printf(/* textboxtype: 0, unk: 0, line: 86 */ "<0x10009:0x00000016>La notte preferisco stare lontano da Fifì...\n\n\n\nPrima la tenevo nella scuola, ma una volta\nè successo un disastro...\n\n\nNon ti conviene andare in giro di notte!")
          		  case 1:
/*<131>*/ 			printf(/* textboxtype: 0, unk: 1, line: 85 */ "<0x10009:0x00000004>È pericoloso uscire\ndi notte!\n\n\nAnche Fifì, la prociatta del direttore,\ndi notte si trasforma in una belva...\n\n\nDi notte Oltrenuvola è\npervasa da una strana energia...")
          		}
          	}
          }

          void entrypoint_108_33() {
/*<145>*/ 	start()
/*<148>*/ 	printf(/* textboxtype: 0, unk: 1, line: 112 */ "Pronti... via!")
          }

          void entrypoint_108_17() {
/*<132>*/ 	start()
/*<133>*/ 	printf(/* textboxtype: 0, unk: 0, line: 89 */ "<0x10009:0x00000002><heroname>!\nMa dove vai?!\n\n\nPresto! Lanciati dalla piattaforma e\nchiama il tuo solcanubi!")
          }

          void entrypoint_108_18() {
/*<134>*/ 	start()
/*<135>*/ 	printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x00000002>Ehi, <heroname>!\nVorresti una lezione persino ora?\n[1-]Sì[2]No...")
/*<136>*/ 	switch (choice(2)) {
          	  case 0:
/*<138>*/ 		printf(/* textboxtype: 0, unk: 0, line: 92 */ "D'accordo, anche se per oggi\nsarebbero sospese, per te farò\nun'eccezione.\nOttimo atteggiamento!\nAllora oggi ti racconterò\nla storia di Oltrenuvola.\n\n\nOltrenuvola è un'isola che fluttua\nnel cielo da migliaia di anni.\n\n\nI nostri antenati sono\nsempre vissuti in cielo,\nqui e nelle isole vicine.\n\n<0x10009:0x00090a00>Al di sotto di Oltrenuvola,\nsi estende un mare di nubi,\ne chi vi cade non fa ritorno.\n\nSi dice che al di sotto del\nmare di nuvole ci sia il nulla.\n\n\n<0x10009:0x000a0a00>Per oggi è tutto. Ora vai a\nprepararti per il battesimo\ndel volo.")
          	  case 1:
/*<137>*/ 		printf(/* textboxtype: 0, unk: 1, line: 91 */ "Capisco... ad ogni modo le lezioni di\noggi erano già state sospese a causa dei\npreparativi per il battesimo del volo...\n\nSarebbe meglio che anche tu\ncominciassi a prepararti per\nla cerimonia.")
          	}
          }

          void entrypoint_108_01() {
          	start()
/*<  9>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 71>*/ 		switch (scene_flags[41 /* 0x4 02 */]) {
          		  case 0:
/*< 63>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "Fidati di me, ritroverai presto il tuo\nsolcanubi!")
          		  case 1:
/*< 62>*/ 			printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00000001><heroname>, che ti è successo?\nSei pallido...\n\n\nCosa?!<pause 50> Non trovi più il tuo\nsolcanubi?\n\n\nQuesto è un vero problema!\nE<0x10006:0xfccd>...<0x10006:0x00cd> pensi di riuscire a ritrovarlo?\n\n\nVai a cercarlo?<pause 40>\nMa non riuscirai mai a\nfare in tempo per la cerimonia!\n\nUn battesimo del volo senza\nil solcanubi è impossibile<0x10006:0xfccd>...<pause 30>\n\n\n<0x10009:0x00000005><0x10006:0x02cd>Uhm...<pause 30>")
/*<159>*/ 			switch (scene_flags[30 /* 0x2 40 */]) {
          			  case 0:
/*<160>*/ 				printf(/* textboxtype: 0, unk: 1, line: 19 */ "Davvero?\nIl direttore mi sta cercando?\n\n\nBene!\nGrazie di avermi avvertito!\n\n\nNon stare in pensiero per la cerimonia.\nVai a cercare il tuo solcanubi!")
          				flw_72:
/*< 72>*/ 				scene_flags[0 'Skyloft'][41 /* 0x4 02 */] = true;
          			  case 1:
/*<161>*/ 				printf(/* textboxtype: 0, unk: 0, line: 20 */ "Forse è la punizione per non aver\nascoltato il maestro...\n\n\nMah, lasciamo perdere...\nIl direttore vuole parlarmi?\nIn tal caso, per ora non preoccuparti\ndella cerimonia.\nVai a cercare il tuo solcanubi!")
/*<239>*/ 				story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = false;
          				goto flw_72
          			}
          		}
          	  case 1:
/*< 48>*/ 		switch (scene_flags[28 /* 0x2 10 */]) {
          		  case 0:
/*< 51>*/ 			switch (scene_flags[30 /* 0x2 40 */]) {
          			  case 0:
/*< 10>*/ 				printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x000a0404>Oh! Che bello!\nHai ritrovato Fifì...\nQuesti animali si chiamano <color blue<prociatti>coloroff>...\n\n<0x10009:0x00000a00>Sono tanto carini, ma\nmeglio star loro alla larga\ndi notte...\n[1-]Perché?[2-]La notte?")
/*< 11>*/ 				switch (choice(2)) {
          				  case 0:
/*< 12>*/ 					printf(/* textboxtype: 1, unk: 0, line: 9 */ "Uhm... non sai che i prociatti di notte\nsi trasformano...?\n\n\nÈ una storia che fa paura...")
          					flw_13:
/*< 13>*/ 					printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00000016>Qui a Oltrenuvola, quando cala\nla notte, i prociatti sono come\nposseduti.\n\nAnche gli animali che vivono\nnelle grotte o in luoghi oscuri\nsono attivi di notte.\n\nEcco perché gli umani\nnon escono la sera, se non\nper cose importanti.\n\nBeh, per voi che aspirate a\ndiventare cavalieri, non\ndovrebbero essere un problema...\n\nPerò la prudenza non è mai troppa!")
          				  case 1:
          					goto flw_13
          				}
          			  case 1:
/*< 92>*/ 				set_camera(17, 0)
/*< 49>*/ 				printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x000f040d>Oh! Me l'hai riportata sana e salva!\nGrazie! <pause 35><0x10009:0x00090400>Sei stato proprio gentile,\n<heroname>!\n\nScommetto che è affamata!\nAdesso le darò un po' di cibo.")
/*<154>*/ 				set_camera(20, 0)
/*< 52>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "Puoi dire al direttore che sta bene?\nLo trovi nella <color red<piazza di fronte al\nsantuario>coloroff>.")
/*<240>*/ 				set_camera(21, 0)
/*<241>*/ 				printf(/* textboxtype: 0, unk: 1, line: 16 */ "Zelda dovrebbe essere con lui.\nPresto, vai!\n\n\nOh, sì! Dovrei darti un premio...\nNon è molto, ma ti prego di accettarlo.\nEhm, non dirlo agli altri.")
/*<242>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 50, 'param3': 42}
/*< 50>*/ 				scene_flags[0 'Skyloft'][30 /* 0x2 40 */] = true;
/*<292>*/ 				give_item(4 0x04);
          			}
          		  case 1:
/*< 46>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*< 47>*/ 				printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00000006><heroname>, che succede?")
/*< 61>*/ 				set_camera(14, 0)
/*< 60>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "Uno sprint in direzione del muro ti\npermetterà di <color green<aggrapparti>coloroff>!\n\n\nMa fai attenzione a non esaurire il\n<color red<vigore >coloroff>muovendoti quando sei\naggrappato.")
          			  case 1:
/*<  6>*/ 				switch (temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<  7>*/ 					printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00090400>Oh! Mi andresti davvero a prendere Fifì?\n[1-]Sì[2-]No")
/*<  8>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_2:
/*<  2>*/ 						printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x0009040d>Davvero?\nAnche se vai di fretta? Ti ringrazio!")
/*< 43>*/ 						{'type': 'type3', 'subType': 4, 'param1': 3328, 'param2': 0, 'next': 44, 'param3': 22}
/*< 44>*/ 						printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00090400>Da quella parte dovresti riuscire a\nsalire. Se ti aggrappi al cornicione e\narrivi fin lì dovresti riuscire a\nraggiungere il tetto.\n<0x10007:0xff000000>Mi raccomando!")
/*< 45>*/ 						temp_flags[2 /* 0x1 04 */] = true;
/*<234>*/ 						story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
          					  case 1:
/*<228>*/ 						printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00000a00>Ah...\n\n\n\nAllora potresti dire al direttore\nche il maestro Cornelio ha trovato\nFifì? Così starà tranquillo...")
          					}
          				  case 1:
/*< 68>*/ 					switch (scene_flags[38 /* 0x5 40 */]) {
          					  case 0:
/*<230>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 1, 'param3': 31}
/*<  1>*/ 						printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Buongiorno, <heroname>!\nVuoi allenarti subito per il battesimo\ndel volo?\n\nEh? <pause 30>Un appuntamento?\n<pause 30>Ah... devi vedere <color blue<Zelda>coloroff>?")
/*< 42>*/ 						printf(/* textboxtype: 0, unk: 1, line: 1 */ "Beh, allora capiti proprio a fagiolo!\n\n\n\n<color blue<Gaepora>coloroff>, il padre di Zelda, sai... il\ndirettore della scuola... beh, la sua\n<color red<Fifì >coloroff>è fuggita...")
/*<236>*/ 						set_camera(12, 0)
/*<235>*/ 						printf(/* textboxtype: 0, unk: 0, line: 2 */ "Guarda! <0x1000A:0x001000cd>Non vuole scendere da lì...\n\n\n\n<0x1000A:0xffff00cd>Il direttore è troppo\nimpegnato a preparare\nla cerimonia insieme a Zelda...\n\nAvevo pensato di attirarla con del cibo,\nma la cerimonia sta per cominciare e\nnon vorrei sporcare il mio vestito\nmigliore...\n<0x10007:0xff000000>Perché non vai tu a\nprendere Fifì?\n\n[1-]Va bene[2-]Ho da fare")
/*<  4>*/ 						switch (choice(2)) {
          						  case 0:
/*< 54>*/ 							set_camera(-1, 0)
          							goto flw_2
          						  case 1:
/*< 55>*/ 							set_camera(-1, 0)
/*<  3>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00000a00>Ah...\n\n\n\nAllora potresti dire al direttore\nche il maestro Cornelio ha trovato\nFifì? Così starà tranquillo...")
/*<  5>*/ 							temp_flags[1 /* 0x1 02 */] = true;
/*<233>*/ 							story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
          						}
          					  case 1:
/*< 65>*/ 						switch (scene_flags[37 /* 0x5 20 */]) {
          						  case 0:
/*< 89>*/ 							set_camera(9, 0)
/*< 67>*/ 							printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x000b0a06>Ma che fai?\nFai subito quello che ti dice il maestro!")
          						  case 1:
/*<153>*/ 							story_flags[565 /* us: 805A9B19 0x10, jp: 805ACD99 0x10 */] = false;
/*<173>*/ 							{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 100, 'next': 88, 'param3': 17}
/*< 88>*/ 							set_camera(9, 0)
/*<263>*/ 							switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          							  case 0:
/*<264>*/ 								printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x000b0a0d>Esattamente!\nRicorda sempre di <color green<inquadrare >coloroff>qualcuno\nper rivolgergli la parola.\n\n<0x10009:0x00000c04>Da come mi guardi sembra che tu sappia\ngià tutto questo. Ma anche se fosse, un\nripasso non fa mai male.\n\n<0x10009:0x00000a00>Nella <color red<modalità eroica>coloroff>...<pause 30>\n<sound 4>Perderai il <color red<doppio dei cuori>coloroff>!\nPer questo è ancora più importante che\ntu sappia <color green<inquadrare>coloroff>!\nComunque sia, parlare in questo modo\nè decisamente scomodo! Ti prego, vieni\nqui sopra!")
          								flw_58:
/*< 58>*/ 								set_camera(10, 0)
/*< 41>*/ 								printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x000b0a00>Dovresti riuscire a salire su quelle casse\ndi legno facendo uno <color green<sprint>coloroff>, non credi?\n\n\nVedrai che non avrai problemi a\nsuperare un dislivello del genere!\nProva ad arrivare fin qui!")
/*< 66>*/ 								scene_flags[0 'Skyloft'][37 /* 0x5 20 */] = true;
/*<290>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': -1, 'param3': 60}
          							  case 1:
/*<262>*/ 								printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x000b0a0d>Esattamente!\nRicorda sempre di <color green<inquadrare >coloroff>qualcuno\nper rivolgergli la parola.\n\nE anche se non c'è nessun bersaglio da\ninquadrare, è molto comodo perché ti\npermette di centrare la visuale in avanti.\n\nPerò da questa distanza è un po' difficile\nparlare... perché non ti avvicini?")
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
/*<139>*/ 	start()
/*<140>*/ 	printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x00000004>Ehi! Quello è il posto del maestro!\nTu sei un allievo!\nVatti a sedere dall'altra parte!")
          }

          void entrypoint_108_02() {
/*< 14>*/ 	start()
/*< 38>*/ 	switch (story_flags[31 /* us: 805A9ADA 0x80, jp: 805ACD5A 0x80 */]) {
          	  case 0:
/*< 21>*/ 		printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00000002>Che fai? Presto, fai uno <color green<sprint >coloroff>con (B),\n<color red<lanciati >coloroff>in aria e chiama il solcanubi!\n\n\nPer chiamare il solcanubi premi (v)!<0x10011:0x09cd>")
          	  case 1:
/*< 28>*/ 		set_camera(1, 0)
/*< 22>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 23, 'param3': 32}
/*< 23>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 24, 'param3': 32}
/*< 24>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 6, 'next': 176, 'param3': 32}
/*<176>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 179, 'param3': 32}
/*<179>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 25, 'param3': 32}
/*< 25>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 26, 'param3': 17}
/*< 26>*/ 		{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 0, 'next': 27, 'param3': 17}
/*< 27>*/ 		{'type': 'type3', 'subType': 1, 'param1': 6, 'param2': 0, 'next': 180, 'param3': 17}
/*<180>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 19, 'next': 15, 'param3': 13}
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000002>Il <color red<battesimo del volo\n>coloroff>sta per iniziare.\n\n\n<heroname> stava per essere\nescluso, ma per fortuna ora è tutto\nrisolto e siamo al completo!\n\nBene, lasciate che vi\nspieghi le <color red<regole>coloroff>!")
          		flw_16:
/*< 16>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "Per primo si lancerà il solcanubi che\nporta la statuetta...\n\n\nPoi, al mio segnale, farete uno <color green<sprint >coloroff>e\n<color red<vi lancerete>coloroff> in cielo per saltare in groppa\nal vostro solcanubi.\n\nAppena vi lanciate, non dimenticatevi\ndi usare il <color green<richiamo>coloroff> con (v)!<0x10011:0x09cd>\n\n\nIl primo che raggiunge il solcanubi\ne prende la <color red<statuetta>coloroff> è il vincitore!\n\n\n<0x1000A:0x000200cd>Ecco, tutto qui.\nAvete capito tutti?\n[1-]Sì[2?]No")
/*< 18>*/ 		switch (choice(2)) {
          		  case 0:
/*< 30>*/ 			set_camera(3, 0)
/*< 17>*/ 			printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00000003><0x10008:0x01cd>Bene!\n\n\n\nIl vincitore verrà promosso alla classe\nsuperiore della scuola d'armi.<pause 20>\n\n\nInoltre riceverà un <color red<riconoscimento per\nl'onore>coloroff>, che gli sarà consegnato dalla\nragazza scelta per rappresentare\nla <color red<Dea>coloroff> durante la cerimonia...\nIn occasione del 25° anniversario,\nil conferimento avverrà <color red<sulla\npiattaforma tra le mani della statua\ndella Dea>coloroff>.\nQuest'anno, per desiderio della\nrappresentante della Dea, sarà un\noggetto da lei stessa <color red<realizzato>coloroff>.\n\nE come sapete, <color red<la rappresentante\ndella Dea >coloroff>quest'anno è...")
/*<184>*/ 			{'type': 'type3', 'subType': 4, 'param1': 267, 'param2': 3840, 'next': 177, 'param3': 13}
/*<177>*/ 			set_camera(5, 0)
/*<174>*/ 			printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x01000009><0x10008:0x01cd>La dolce Zelda!")
/*<193>*/ 			{'type': 'type3', 'subType': 4, 'param1': 1048, 'param2': 3084, 'next': 31, 'param3': 13}
/*< 31>*/ 			set_camera(2, 0)
/*< 20>*/ 			printf(/* textboxtype: 0, unk: 1, line: 31 */ "Fateci vedere quali risultati avete\nottenuto con il vostro allenamento!\n\n\nE non lanciate oggetti né scontratevi\ncon gli altri concorrenti!")
/*<178>*/ 			set_camera(6, 0)
/*<181>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 4, 'next': 182, 'param3': 50}
/*<182>*/ 			{'type': 'type3', 'subType': 4, 'param1': 512, 'param2': 23, 'next': 175, 'param3': 13}
/*<175>*/ 			printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10008:0x01cd>Hai capito, <0x10009:0x04191700>Bado?")
/*< 40>*/ 			set_camera(4, 0)
/*<183>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 53, 'param3': 50}
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

