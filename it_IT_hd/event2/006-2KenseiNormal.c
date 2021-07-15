          void entrypoint_006_209() {
/*< 32>*/ 	start()
/*< 33>*/ 	switch (story_flags[463 /* us: 805A9B0F 0x01, jp: 805ACD8F 0x01 */]) {
          	  case 0:
/*< 34>*/ 		printf("Tuttavia, è stata già condotta altrove\nda un misterioso individuo.\n\n\nCome presso la <b<fonte celeste>>,\nraccomanderei di invocare l'aiuto della\nstatua della Dea presso la <b<fonte della\nTerra>>.<entrypoint_296>")
          	  case 1:
/*< 35>*/ 		printf("Le probabilità di trovare Zelda sana\ne salva stanno diminuendo. Dovete\naffrettarvi!<entrypoint_296>")
          	}
          }

          void entrypoint_006_243() {
/*< 61>*/ 	start()
/*< 62>*/ 	switch (story_flags[362 /* us: 805A9B03 0x01, jp: 805ACD83 0x01 */]) {
          	  case 0:
/*< 63>*/ 		printf("Tuttavia, per poter affrontare in\nqualche modo Narisha, dovrete prima\napprendere l'<g<attacco avvitato>> dal\nmaestro<b< Asio Otus>>.<entrypoint_296>")
          	  case 1:
/*< 64>*/ 		printf("Il maestro<b< Asio Otus >>ha studiato\nNarisha. Consiglierei di chiedere\na lui i dettagli.<entrypoint_296>")
          	}
          }

          void entrypoint_006_226() {
/*< 65>*/ 	start()
/*< 66>*/ 	switch (story_flags[157 /* us: 805A9AE0 0x08, jp: 805ACD60 0x08 */]) {
          	  case 0:
/*< 67>*/ 		printf("Consiglierei di cercare indizi nel <b<mare\ndi sabbia di Ranel>>, ora accessibile\ngrazie agli <y<artigli>>.<entrypoint_296>")
          	  case 1:
/*< 68>*/ 		printf("Probabilità che possiate accedere a\nnuove aree delle <b<Terre di Ranel>> grazie\nagli <y<artigli>> ottenuti dal superamento\ndella <r<prova >>nel <b<deserto di Ranel>>: 96%.<entrypoint_296>")
          	}
          }

          void entrypoint_006_244() {
/*< 55>*/ 	start()
/*< 56>*/ 	switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          	  case 0:
/*< 57>*/ 		printf("Tuttavia, Narisha è particolarmente\naggressivo. Desumo che parlargli sarà\ndifficile.\n\nSuggerirei di usare l'<g<attacco avvitato\n>>per distruggere ciò che è attaccato\nal suo corpo.<entrypoint_296>")
          	  case 1:
/*< 60>*/ 		switch (story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */]) {
          		  case 0:
/*< 58>*/ 			printf("Probabilità che <b<Narisha >>appaia se gli\nporterete la <y<zuppa di zucca>>, suo cibo\npreferito: 90%.\n\nConsiglierei di portare la zuppa di\nzucca sulla piccola isola con\nl'<r<arcobaleno>> all'<b<interno di\n>><b<Cumulonembo>>.<entrypoint_296>")
          		  case 1:
/*< 59>*/ 			printf("Probabilità che scopriate come trovare\nNarisha chiedendo al proprietario della\ntaverna delle zucche: 85%.<entrypoint_296>")
          		}
          	}
          }

          void entrypoint_006_296() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf("Tempo di gioco attuale: <r<\x0E\x02\x03\x06\x00\x00\x2CD\xFF1A<numeric arg1(2)>\n>>Tempo di gioco totale: <r<<numeric arg2(2)>\xFF1A\x0E\x02\x03\x06\x00\x03\x2CD\n>>Non sono in possesso di ulteriori\ninformazioni.")
          }

          void entrypoint_006_227() {
/*< 77>*/ 	start()
/*< 78>*/ 	switch (story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */]) {
          	  case 0:
/*< 80>*/ 		printf("Suggerirei di fare ritorno dal capitano\ncon la carta nautica che avete ottenuto.<entrypoint_296>")
          	  case 1:
/*< 79>*/ 		printf("Per riprendere possesso della nave,\nla carta nautica nella <b<casa di\nCapitanbot>> è di importanza capitale.<entrypoint_296>")
          	}
          }

          void entrypoint_006_248() {
/*<  2>*/ 	start()
/*<  3>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<  4>*/ 		switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          		  case 0:
/*<  5>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
          			  case 1:
/*<  6>*/ 				printf("Ora avete due parti della <r<Melodia\ndell'impavido>>. Dovrete cercare il drago\nche regna sulle <b<Terre di Ranel>>.\n[1]Poi?[2-]Capito!")
          				flw_16:
/*< 16>*/ 				switch (choice(2)) {
          				  case 0:
/*< 17>*/ 					printf("Una volta ottenute le tre parti della\nMelodia dell'impavido sulla Terra,\npotete tornare dal grande spirito\nceleste <b<Narisha>>.\nCosì potrete completare la Melodia\ndell'impavido e dovreste poter\naccedere alla <y+<Triforza>>.\n\nIl vostro obiettivo finale è sconfiggere\n<b<Mortipher>> con l'aiuto della <y+<Triforza>>.\nÈ questo il vostro destino, \x0E\x01\x12\x04\x00\x02mio signore.<entrypoint_296>")
          				  case 1:
          				}
          			}
          		  case 1:
/*<  7>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*<  8>*/ 				printf("Ora avete due parti della <r<Melodia\ndell'impavido>>. Dovrete cercare il drago\nche regna sulle <b<Terre di Oldin>>.\n[1]Poi?[2-]Capito!")
          				goto flw_16
          			  case 1:
/*<  9>*/ 				printf("Ora avete una parte della <r<Melodia\ndell'impavido>>. Dovrete cercare\ni draghi che regnano sulle\n<b<Terre di Oldin>> e <b<di Ranel>>.\n[1]Poi?[2-]Capito!")
          				goto flw_16
          			}
          		}
          	  case 1:
/*< 10>*/ 		switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          		  case 0:
/*< 11>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 15>*/ 				printf("Ora avete due parti della <r<Melodia\ndell'impavido>>. Dovrete cercare il drago\nche regna sulle <b<Terre di Firone>>.\n[1]Poi?[2-]Capito!")
          				goto flw_16
          			  case 1:
/*< 12>*/ 				printf("Ora avete una parte della <r<Melodia\ndell'impavido>>. Dovrete cercare i draghi\nche regnano sulle <b<Terre di Firone e\ndi Ranel>>.\n[1]Poi?[2-]Capito!")
          				goto flw_16
          			}
          		  case 1:
/*< 13>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 14>*/ 				printf("Ora avete una parte della <r<<r<Melodia\ndell'impavido<r<. >>Dovrete cercare i draghi\nche regnano sulle <b<Terre di Firone e\ndi Oldin>>.\n[1]Poi?[2-]Capito!")
          				goto flw_16
          			  case 1:
          			}
          		}
          	}
          }

          void entrypoint_006_249() {
/*< 18>*/ 	start()
/*< 19>*/ 	printf("Consiglierei di ritornare da <b<Narisha>>, il\ngrande spirito celeste, per completare\nla Melodia dell'impavido.\n[1]Poi?[2-]Capito!")
/*< 20>*/ 	switch (choice(2)) {
          	  case 0:
/*< 21>*/ 		printf("Deduco che la via per la <y+<Triforza>> si sia\naperta grazie al completamento della\nMelodia dell'impavido.\n\nIl vostro obiettivo finale è sconfiggere\n<b<Mortipher>> con l'aiuto della <y+<Triforza>>.\nÈ questo il vostro destino, \x0E\x01\x12\x04\x00\x02mio signore.")
          	  case 1:
          	}
          }

          void entrypoint_006_217() {
/*< 36>*/ 	start()
/*< 84>*/ 	switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          	  case 0:
/*< 85>*/ 		printf("Confermo la comparsa di una struttura\nnascosta in cima alla Torre della luce,\ndopo che avete diretto la luce dei\nmulini verso quest'ultima.<entrypoint_296>")
          	  case 1:
/*< 82>*/ 		switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          		  case 0:
/*< 37>*/ 			printf("Probabilità che una delle <r<due enormi\ntorri del vento>> sia il mulino aggiustato\ndal tecnico <b<Pico>>: 80%.<entrypoint_296>")
          		  case 1:
/*< 81>*/ 			switch (story_flags[1108 /* us: 805A9B54 0x04, jp: 805ACDD4 0x04 */]) {
          			  case 0:
/*< 83>*/ 				printf("Probabilità che l'oggetto che avete\ntrovato sia l'<r<elica del mulino>>: 85%.\nTuttavia, non conosco il collegamento\ntra questa e le due torri del vento.\nConsiglierei di guidare il robot\ndell'officina, per fargliela portare\nfino a Oltrenuvola.<entrypoint_296>")
          			  case 1:
/*< 39>*/ 				switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          				  case 0:
/*< 40>*/ 					printf("Il legame tra le due torri del vento è\nsconosciuto, inoltre sembra che l'<r<elica\ndi un mulino>> di Oltrenuvola sia\nprecipitata sulla terra oltre le nuvole.\nSe riuscirete a localizzarla con il\n<g<rilevatore>>, potrete riportarla a\nOltrenuvola grazie al robot dell'officina.<entrypoint_296>")
          				  case 1:
/*< 41>*/ 					switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          					  case 0:
/*< 42>*/ 						printf("Il legame tra le due torri del vento è\nsconosciuto, inoltre sembra che l'<r<elica\ndi un mulino>> di Oltrenuvola sia\nprecipitata sulla terra oltre le nuvole.\nConsiglierei di trovare il modo di\nrecuperare l'elica.<entrypoint_296>")
          					  case 1:
/*< 38>*/ 						printf("Nonostante il significato sia oscuro,\nconsiglierei di perlustrare Oltrenuvola\nalla ricerca di due cose che potrebbero\nessere delle torri del vento.<entrypoint_296>")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_006_200() {
          	start()
/*<  1>*/ 	printf("Per cercare <b<Zelda>>, precipitata sulla Terra,\nvi consiglierei di <g<gettarvi >>nella <r<colonna di\nluce >>tra le nuvole e giungere al suolo.\n\nLa colonna di luce si trova a sud\ndi <b<Oltrenuvola>>.<entrypoint_296>")
          }

          void entrypoint_006_201() {
/*< 22>*/ 	start()
/*< 23>*/ 	switch (story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */]) {
          	  case 0:
/*< 24>*/ 		printf("Raccomanderei di dare ascolto all'Anziana\ndel <b<Santuario dell'esilio >>e dirigerci alla\n<b<foresta di Firone>>.<entrypoint_296>")
          	  case 1:
/*< 25>*/ 		printf("Vi sono segni di civiltà sulla Terra.\nRaccomanderei di controllare la\nzona circostante.<entrypoint_296>")
          	}
          }

          void entrypoint_006_236() {
/*< 47>*/ 	start()
/*< 48>*/ 	switch (story_flags[187 /* us: 805A9AE9 0x04, jp: 805ACD69 0x04 */]) {
          	  case 0:
/*< 49>*/ 		printf("Vi è uno strano edificio sulla vetta\ndel vulcano. Consiglierei di entrarvi.<entrypoint_296>")
          	  case 1:
/*< 50>*/ 		printf("Per estinguere il muro di fuoco che\nimpedisce l'accesso oltre la vetta\navrete bisogno di trasportare l'enorme\n<r<orcio d'acqua >>del drago d'acqua.<entrypoint_296>")
          	}
          }

          void entrypoint_006_202() {
/*< 26>*/ 	start()
/*< 27>*/ 	switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          	  case 0:
/*< 71>*/ 		switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          		  case 0:
/*< 72>*/ 			printf("Consiglierei di salire sulla schiena del\nsaggio <b<Infusonio>> e ottenere lo\nstrumento che si tramanda per\ntradizione tra i Kyuri.")
          		  case 1:
/*< 28>*/ 			printf("In base alle parole del saggio dei Kyuri\n<b<Infusonio>>, ritrovando i Kyuri dispersi,\nvi guadagnerete la loro collaborazione.<entrypoint_296>")
          		}
          	  case 1:
/*< 31>*/ 		switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          		  case 0:
/*< 29>*/ 			printf("Probabilità che, in base alle parole del\nKyuri <b<Maccio>>, trovare il saggio dei\nKyuri possa condurre a Zelda: 80%.<entrypoint_296>")
          		  case 1:
/*< 30>*/ 			printf("Ritengo che Zelda non sia passata\ninosservata. Suggerirei di cercare\nqualcuno che l'abbia vista o incontrata.<entrypoint_296>")
          		}
          	}
          }

          void entrypoint_006_222() {
/*< 43>*/ 	start()
/*< 44>*/ 	switch (story_flags[66 /* us: 805A9ADF 0x20, jp: 805ACD5F 0x20 */]) {
          	  case 0:
/*< 45>*/ 		printf("Il drago d'acqua vi ha dato accesso al\nluogo in cui si trova la <r<fiamma di\nFarore>>, una delle fiamme sacre.\n\nAvverto la presenza di mostri, perciò\nraccomanderei di equipaggiarvi\nadeguatamente e raggiungere l'entrata.<entrypoint_296>")
          	  case 1:
/*< 46>*/ 		printf("Per trovare la <y<fiamma sacra>> delle\n<b<Terre di Firone>>, dovrete portare a\ntermine l'incarico affidatovi dal drago\nd'acqua di portarle dell'acqua sacra.\nIl <g<rilevatore >>è impostato per ricercare\nl'acqua sacra.<entrypoint_296>")
          	}
          }

          void entrypoint_006_240() {
/*< 51>*/ 	start()
/*< 52>*/ 	switch (story_flags[344 /* us: 805A9AFE 0x40, jp: 805ACD7E 0x40 */]) {
          	  case 0:
/*< 53>*/ 		printf("Vi prego, procedete, \x0E\x01\x12\x04\x00\x01mio signore.\nProbabilità che <b<Zelda>> si trovi dall'altra\nparte della <r<Porta del Tempo>>: 99%.<entrypoint_296>")
          	  case 1:
/*< 54>*/ 		printf("È finalmente giunto il momento di\nripristinare l'energia della <r<Porta del\nTempo >>grazie al potere della spada\npotenziata. Consiglierei di agire subito.<entrypoint_296>")
          	}
          }

          void entrypoint_006_208() {
/*< 73>*/ 	start()
/*< 74>*/ 	switch (story_flags[120 /* us: 805A9AEA 0x20, jp: 805ACD6A 0x20 */]) {
          	  case 0:
/*< 76>*/ 		printf("Avete recuperato tutti e cinque i\nframmenti della chiave. Adesso potete\nrecarvi al santuario del vulcano\nper aprire la porta.<entrypoint_296>")
          	  case 1:
/*< 75>*/ 		printf("State cercando tutti e cinque i frammenti\ndella <r<chiave dell'ingresso >>del santuario.\nÈ possibile usufruire del <g<rilevatore>> per\nla ricerca.<entrypoint_296>")
          	}
          }

